/* ResourceUID::text_to_id(String const&) const */ulong ResourceUID::text_to_id(ResourceUID *this, String *param_1) {
   uint uVar1;
   int iVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   int *piVar6;
   ulong uVar7;
   long lVar8;
   int iVar9;
   int *piVar10;
   cVar5 = String::begins_with((char*)param_1);
   if (( cVar5 == '\0' ) || ( cVar5 = String::operator ==(param_1, "uid://<invalid>") ),cVar5 != '\0') {
      return 0xffffffffffffffff;
   }
   lVar8 = *(long*)param_1;
   if (lVar8 != 0) {
      lVar3 = *(long*)( lVar8 + -8 );
      if (7 < (uint)lVar3) {
         piVar10 = (int*)( lVar8 + 0x18 );
         iVar9 = 6;
         uVar7 = 0;
         do {
            lVar8 = (long)iVar9;
            if (lVar3 == lVar8) {
               piVar6 = (int*)&String::_null;
            } else if (( lVar8 < 0 ) || ( piVar6 = lVar3 <= lVar8 )) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }
            iVar2 = *piVar6;
            uVar1 = iVar2 - 0x61;
            if (0x19 < uVar1) {
               if (9 < iVar2 - 0x30U) {
                  return 0xffffffffffffffff;
               }
               uVar1 = iVar2 - 0x17;
            }
            iVar9 = iVar9 + 1;
            uVar7 = (ulong)uVar1 + uVar7 * 0x22;
            piVar10 = piVar10 + 1;
         } while ( (uint)lVar3 - 1 != iVar9 );
         return uVar7 & 0x7fffffffffffffff;
      }
   }
   return 0;
}/* CowData<char>::_copy_on_write() [clone .isra.0] */void CowData<char>::_copy_on_write(CowData<char> *this) {
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
}/* ResourceUID::create_id() */ulong ResourceUID::create_id(ResourceUID *this) {
   pthread_mutex_t *__mutex;
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   int iVar10;
   ulong uVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __mutex = (pthread_mutex_t*)( this + 0x180 );
   while (true) {
      local_48 = 0xffffffffffffffff;
      iVar10 = pthread_mutex_lock(__mutex);
      if (iVar10 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar10);
      }
      iVar10 = CryptoCore::RandomGenerator::get_random_bytes(*(uchar**)( this + 0x178 ), ( ulong ) & local_48);
      if (iVar10 != 0) break;
      uVar17 = local_48 & 0x7fffffffffffffff;
      local_48 = uVar17;
      if (( *(long*)( this + 0x1b0 ) == 0 ) || ( *(int*)( this + 0x1d4 ) == 0 )) goto LAB_001003f0;
      uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1d0 ) * 8 );
      uVar11 = uVar17 * 0x3ffff - 1;
      uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
      uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar13 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
         uVar13 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x1b8 ) + lVar12 * 4 );
      iVar10 = SUB164(auVar2 * auVar6, 8);
      uVar15 = 0;
      if (uVar14 == 0) goto LAB_001003f0;
      while (( uVar14 != (uint)uVar13 || ( uVar17 != *(ulong*)( *(long*)( *(long*)( this + 0x1b0 ) + lVar12 * 8 ) + 0x10 ) ) )) {
         uVar15 = uVar15 + 1;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = ( ulong )(iVar10 + 1) * lVar1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar16;
         lVar12 = SUB168(auVar3 * auVar7, 8);
         uVar14 = *(uint*)( *(long*)( this + 0x1b8 ) + lVar12 * 4 );
         iVar10 = SUB164(auVar3 * auVar7, 8);
         if (( uVar14 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar14 * lVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar16,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) + iVar10 ) - SUB164(auVar4 * auVar8, 8)) * lVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,SUB164(auVar5 * auVar9, 8) < uVar15) goto LAB_001003f0;
      };
      pthread_mutex_unlock(__mutex);
   };
   uVar17 = 0xffffffffffffffff;
   _err_print_error("create_id", "core/io/resource_uid.cpp", 0x73, "Condition \"err != OK\" is true. Returning: INVALID_ID", 0, 0);
   LAB_001003f0:pthread_mutex_unlock(__mutex);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar17;
}/* ResourceUID::~ResourceUID() */void ResourceUID::~ResourceUID(ResourceUID *this) {
   long *plVar1;
   uint uVar2;
   RandomGenerator *this_00;
   long lVar3;
   long lVar4;
   void *pvVar5;
   this_00 = *(RandomGenerator**)( this + 0x178 );
   *(undefined***)this = &PTR__initialize_classv_0010abb0;
   CryptoCore::RandomGenerator::~RandomGenerator(this_00);
   Memory::free_static(this_00, false);
   pvVar5 = *(void**)( this + 0x1b0 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x1d4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1d4 ) = 0;
            *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
         } else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1b8 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x1b8 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x1b0 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }
               lVar4 = lVar4 + 4;
            } while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x1d4 ) = 0;
            *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00100522;
         }
      }
      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x1b8 ), false);
      Object::~Object((Object*)this);
      return;
   }
   LAB_00100522:Object::~Object((Object*)this);
   return;
}/* ResourceUID::~ResourceUID() */void ResourceUID::~ResourceUID(ResourceUID *this) {
   ~ResourceUID(this)
   ;;
   operator_delete(this, 0x1e0);
   return;
}/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */void CowData<char>::_ref(CowData<char> *this, CowData *param_1) {
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
}/* ResourceUID::has_id(long) const */undefined1 ResourceUID::has_id(ResourceUID *this, long param_1) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   int iVar10;
   ulong uVar11;
   long lVar12;
   ulong uVar13;
   undefined1 uVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   iVar10 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
   if (iVar10 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar10);
   }
   uVar14 = 0;
   if (( *(long*)( this + 0x1b0 ) != 0 ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
      uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1d0 ) * 8 );
      uVar11 = param_1 * 0x3ffff - 1;
      uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
      uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar13 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
         uVar13 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x1b8 ) + lVar12 * 4 );
      iVar10 = SUB164(auVar2 * auVar6, 8);
      if (uVar15 != 0) {
         uVar17 = 0;
         do {
            if (( uVar15 == (uint)uVar13 ) && ( *(long*)( *(long*)( *(long*)( this + 0x1b0 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
               uVar14 = 1;
               goto LAB_00100754;
            }
            uVar17 = uVar17 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar10 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar16;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x1b8 ) + lVar12 * 4 );
            iVar10 = SUB164(auVar3 * auVar7, 8);
         } while ( ( uVar15 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar15 * lVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar16,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) + iVar10 ) - SUB164(auVar4 * auVar8, 8)) * lVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,uVar17 <= SUB164(auVar5 * auVar9, 8) );
         uVar14 = 0;
      }
   }
   LAB_00100754:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
   return uVar14;
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
}/* ResourceUID::remove_id(long) */void ResourceUID::remove_id(ResourceUID *this, long param_1) {
   uint *puVar1;
   long *plVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   uint uVar5;
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
   int iVar34;
   uint uVar35;
   ulong uVar36;
   uint uVar37;
   uint uVar38;
   uint uVar39;
   ulong uVar40;
   ulong uVar41;
   long *plVar42;
   uint *puVar43;
   uint uVar44;
   ulong uVar45;
   uint uVar46;
   iVar34 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
   if (iVar34 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar34);
   }
   lVar6 = *(long*)( this + 0x1b0 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
      lVar7 = *(long*)( this + 0x1b8 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
      uVar45 = CONCAT44(0, uVar5);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1d0 ) * 8 );
      uVar36 = param_1 * 0x3ffff - 1;
      uVar36 = ( uVar36 ^ uVar36 >> 0x1f ) * 0x15;
      uVar36 = ( uVar36 ^ uVar36 >> 0xb ) * 0x41;
      uVar35 = ( uint )(uVar36 >> 0x16) ^ (uint)uVar36;
      uVar37 = 1;
      if (uVar35 != 0) {
         uVar37 = uVar35;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar37 * lVar8;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar45;
      uVar36 = SUB168(auVar10 * auVar22, 8);
      uVar35 = *(uint*)( lVar7 + uVar36 * 4 );
      if (uVar35 != 0) {
         uVar38 = SUB164(auVar10 * auVar22, 8);
         uVar46 = 0;
         uVar40 = uVar36;
         uVar44 = uVar35;
         uVar39 = uVar38;
         do {
            if (( uVar37 == uVar44 ) && ( *(long*)( *(long*)( lVar6 + uVar40 * 8 ) + 0x10 ) == param_1 )) {
               uVar40 = (ulong)uVar38;
               uVar44 = 0;
               goto LAB_001009d2;
            }
            uVar46 = uVar46 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar39 + 1) * lVar8;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar40 = SUB168(auVar11 * auVar23, 8);
            uVar44 = *(uint*)( lVar7 + uVar40 * 4 );
            uVar39 = SUB164(auVar11 * auVar23, 8);
         } while ( ( uVar44 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar44 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar45,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + uVar39 ) - SUB164(auVar12 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar45,uVar46 <= SUB164(auVar13 * auVar25, 8) );
      }
   }
   _err_print_error("remove_id", "core/io/resource_uid.cpp", 0xb1, "Condition \"!unique_ids.has(p_id)\" is true.", 0, 0);
   goto LAB_00100b4c;
   while (true) {
      uVar35 = *(uint*)( lVar7 + uVar41 * 4 );
      uVar40 = uVar41 & 0xffffffff;
      uVar44 = uVar44 + 1;
      if (( uVar35 == 0 ) || ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar35 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar45,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar5 + uVar39 ) - SUB164(auVar14 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar45,uVar36 = uVar41,SUB164(auVar15 * auVar27, 8) < uVar44) break;
      LAB_001009d2:auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )((int)uVar40 + 1) * lVar8;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar45;
      uVar41 = SUB168(auVar16 * auVar28, 8);
      uVar39 = SUB164(auVar16 * auVar28, 8);
      if (( uVar37 == uVar35 ) && ( *(long*)( *(long*)( lVar6 + uVar36 * 8 ) + 0x10 ) == param_1 )) {
         puVar43 = (uint*)( lVar7 + uVar41 * 4 );
         uVar37 = *puVar43;
         if (( uVar37 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar37 * lVar8,auVar29._8_8_ = 0,auVar29._0_8_ = uVar45,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar5 + uVar39 ) - SUB164(auVar17 * auVar29, 8)) * lVar8,auVar30._8_8_ = 0,auVar30._0_8_ = uVar45,uVar36 = (ulong)uVar39,SUB164(auVar18 * auVar30, 8) != 0) {
            while (true) {
               puVar1 = (uint*)( lVar7 + uVar40 * 4 );
               *puVar43 = *puVar1;
               puVar3 = (undefined8*)( lVar6 + uVar41 * 8 );
               *puVar1 = uVar37;
               puVar4 = (undefined8*)( lVar6 + uVar40 * 8 );
               uVar9 = *puVar3;
               *puVar3 = *puVar4;
               *puVar4 = uVar9;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = ( ulong )((int)uVar36 + 1) * lVar8;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               uVar41 = SUB168(auVar21 * auVar33, 8);
               puVar43 = (uint*)( lVar7 + uVar41 * 4 );
               uVar37 = *puVar43;
               uVar40 = uVar36;
               if (( uVar37 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar37 * lVar8,auVar31._8_8_ = 0,auVar31._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( SUB164(auVar21 * auVar33, 8) + uVar5 ) - SUB164(auVar19 * auVar31, 8)) * lVar8,auVar32._8_8_ = 0,auVar32._0_8_ = uVar45,SUB164(auVar20 * auVar32, 8) == 0) break;
               uVar36 = uVar41 & 0xffffffff;
            };
         }
         *(undefined4*)( lVar7 + uVar40 * 4 ) = 0;
         plVar2 = (long*)( lVar6 + uVar40 * 8 );
         plVar42 = (long*)*plVar2;
         if (*(long**)( this + 0x1c0 ) == plVar42) {
            *(long*)( this + 0x1c0 ) = *plVar42;
            plVar42 = (long*)*plVar2;
         }
         if (plVar42 == *(long**)( this + 0x1c8 )) {
            *(long*)( this + 0x1c8 ) = plVar42[1];
            plVar42 = (long*)*plVar2;
         }
         if ((long*)plVar42[1] != (long*)0x0) {
            *(long*)plVar42[1] = *plVar42;
            plVar42 = (long*)*plVar2;
         }
         if (*plVar42 != 0) {
            *(long*)( *plVar42 + 8 ) = plVar42[1];
            plVar42 = (long*)*plVar2;
         }
         if (plVar42[3] != 0) {
            LOCK();
            plVar2 = (long*)( plVar42[3] + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               lVar6 = plVar42[3];
               plVar42[3] = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }
         }
         Memory::free_static(plVar42, false);
         *(undefined8*)( *(long*)( this + 0x1b0 ) + uVar40 * 8 ) = 0;
         *(int*)( this + 0x1d4 ) = *(int*)( this + 0x1d4 ) + -1;
         break;
      }
   };
   LAB_00100b4c:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
   return;
}/* ResourceUID::get_cache_file() */ResourceUID * __thiscall ResourceUID::get_cache_file(ResourceUID *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   ProjectSettings::get_project_data_path();
   local_38 = "uid_cache.bin";
   local_40 = 0;
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   String::path_join((String*)this);
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
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_48 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceUID::save_to_cache() */undefined8 ResourceUID::save_to_cache(ResourceUID *this) {
   long *plVar1;
   Object *pOVar2;
   undefined8 *puVar3;
   code *pcVar4;
   long lVar5;
   Object *pOVar6;
   char cVar7;
   int iVar8;
   long lVar9;
   undefined8 uVar10;
   long in_FS_OFFSET;
   bool bVar11;
   long local_50;
   Object *local_48;
   long local_40;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   get_cache_file((ResourceUID*)&local_50);
   cVar7 = FileAccess::exists((String*)&local_50);
   if (cVar7 == '\0') {
      DirAccess::create(&local_48, 0);
      pOVar6 = local_48;
      local_40 = 0;
      pcVar4 = *(code**)( *(long*)local_48 + 0x1c0 );
      plVar1 = (long*)( local_50 + -0x10 );
      if (local_50 != 0) {
         do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00100eb6;
            LOCK();
            lVar9 = *plVar1;
            bVar11 = lVar5 == lVar9;
            if (bVar11) {
               *plVar1 = lVar5 + 1;
               lVar9 = lVar5;
            }
            UNLOCK();
         } while ( !bVar11 );
         if (lVar9 != -1) {
            local_40 = local_50;
         }
      }
      LAB_00100eb6:String::get_base_dir();
      ( *pcVar4 )(pOVar6);
      pOVar6 = local_38;
      if (local_38 != (Object*)0x0) {
         LOCK();
         pOVar2 = local_38 + -0x10;
         *(long*)pOVar2 = *(long*)pOVar2 + -1;
         UNLOCK();
         if (*(long*)pOVar2 == 0) {
            local_38 = (Object*)0x0;
            Memory::free_static(pOVar6 + -0x10, false);
         }
      }
      lVar5 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }
      }
      if (( ( local_48 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_48 + 0x140 ))(local_48);
      Memory::free_static(local_48, false);
   }
}FileAccess::open((String*)&local_38, (int)(ResourceUID*)&local_50, (Error*)0x2);if (local_38 == (Object*)0x0) {
   uVar10 = 0x13;
} else {
   iVar8 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
   if (iVar8 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
   }
   ( **(code**)( *(long*)local_38 + 0x278 ) )();
   puVar3 = *(undefined8**)( this + 0x1c0 );
   *(undefined4*)( this + 0x1d8 ) = 0;
   while (puVar3 != (undefined8*)0x0) {
      ( **(code**)( *(long*)local_38 + 0x280 ) )(local_38, puVar3[2]);
      if (( puVar3[3] == 0 ) || ( iVar8 = iVar8 == 0 )) {
         iVar8 = 0;
      } else {
         iVar8 = iVar8 + -1;
      }
      ( **(code**)( *(long*)local_38 + 0x278 ) )(local_38, iVar8);
      ( **(code**)( *(long*)local_38 + 0x2d0 ) )(local_38, puVar3[3], iVar8);
      *(undefined1*)( puVar3 + 4 ) = 1;
      puVar3 = (undefined8*)*puVar3;
      *(int*)( this + 0x1d8 ) = *(int*)( this + 0x1d8 ) + 1;
   };
   this[0x1dc] = (ResourceUID)0x0;
   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
   if (( ( local_38 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar6 = local_38,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}uVar10 = 0;}lVar5 = local_50;if (local_50 != 0) {
   LOCK();
   plVar1 = (long*)( local_50 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void*)( lVar5 + -0x10 ), false);
   }
}if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar10;}/* ResourceUID::update_cache() */undefined8 ResourceUID::update_cache(ResourceUID *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long *plVar6;
   undefined8 uVar7;
   Object *pOVar8;
   long in_FS_OFFSET;
   long local_40;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1dc] == (ResourceUID)0x0) {
      uVar7 = 0;
   } else {
      if (*(int*)( this + 0x1d8 ) == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = save_to_cache(this);
            return uVar7;
         }
         goto LAB_00101317;
      }
      iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
      if (iVar5 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar5);
      }
      plVar6 = *(long**)( this + 0x1c0 );
      pOVar8 = (Object*)0x0;
      if (plVar6 == (long*)0x0) {
         LAB_00101271:this[0x1dc] = (ResourceUID)0x0;
      } else {
         do {
            if ((char)plVar6[4] == '\0') {
               if (pOVar8 == (Object*)0x0) {
                  get_cache_file((ResourceUID*)&local_40);
                  FileAccess::open((String*)&local_38, (int)(ResourceUID*)&local_40, (Error*)0x3);
                  pOVar8 = local_38;
                  if (local_38 == (Object*)0x0) {
                     if (local_40 != 0) {
                        LAB_0010117c:lVar2 = local_40;
                        LOCK();
                        plVar1 = (long*)( local_40 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_40 = 0;
                           Memory::free_static((void*)( lVar2 + -0x10 ), false);
                        }
                        goto LAB_0010119d;
                     }
                     LAB_001012ab:uVar7 = 0x13;
                     goto LAB_00101223;
                  }
                  cVar4 = RefCounted::reference();
                  lVar2 = local_40;
                  if (cVar4 == '\0') {
                     if (local_38 == (Object*)0x0) {
                        if (local_40 != 0) {
                           LOCK();
                           plVar6 = (long*)( local_40 + -0x10 );
                           *plVar6 = *plVar6 + -1;
                           UNLOCK();
                           if (*plVar6 == 0) {
                              local_40 = 0;
                              Memory::free_static((void*)( lVar2 + -0x10 ), false);
                           }
                        }
                        goto LAB_001012ab;
                     }
                     pOVar8 = (Object*)0x0;
                     LAB_00101165:cVar4 = RefCounted::unreference();
                     pOVar3 = local_38;
                     if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(local_38) ),cVar4 != '\0') {
                        ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                        Memory::free_static(pOVar3, false);
                     }
                     if (local_40 != 0) goto LAB_0010117c;
                     LAB_0010119d:if (pOVar8 == (Object*)0x0) goto LAB_001012ab;
                  } else {
                     if (local_38 != (Object*)0x0) goto LAB_00101165;
                     if (local_40 != 0) goto LAB_0010117c;
                  }
                  ( **(code**)( *(long*)pOVar8 + 0x1c0 ) )(pOVar8, 0);
               }
               do {
                  ( **(code**)( *(long*)pOVar8 + 0x280 ) )(pOVar8, plVar6[2]);
                  if (( plVar6[3] == 0 ) || ( iVar5 = iVar5 == 0 )) {
                     iVar5 = 0;
                  } else {
                     iVar5 = iVar5 + -1;
                  }
                  ( **(code**)( *(long*)pOVar8 + 0x278 ) )(pOVar8, iVar5);
                  ( **(code**)( *(long*)pOVar8 + 0x2d0 ) )(pOVar8, plVar6[3], iVar5);
                  *(undefined1*)( plVar6 + 4 ) = 1;
                  plVar6 = (long*)*plVar6;
                  *(int*)( this + 0x1d8 ) = *(int*)( this + 0x1d8 ) + 1;
                  if (plVar6 == (long*)0x0) goto LAB_001011e8;
               } while ( *(char*)( plVar6 + 4 ) == '\0' );
            }
            plVar6 = (long*)*plVar6;
         } while ( plVar6 != (long*)0x0 );
         if (pOVar8 == (Object*)0x0) goto LAB_00101271;
         LAB_001011e8:( **(code**)( *(long*)pOVar8 + 0x1b8 ) )(pOVar8, 0);
         ( **(code**)( *(long*)pOVar8 + 0x278 ) )(pOVar8);
         this[0x1dc] = (ResourceUID)0x0;
         cVar4 = RefCounted::unreference();
         if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar8) ),cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }
      }
      uVar7 = 0;
      LAB_00101223:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }
   LAB_00101317:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* ResourceUID::clear() */void ResourceUID::clear(ResourceUID *this) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
   *(undefined4*)( this + 0x1d8 ) = 0;
   if (( *(long*)( this + 0x1b0 ) != 0 ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
      if (uVar2 != 0) {
         lVar5 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x1b8 ) + lVar5 ) != 0) {
               *(int*)( *(long*)( this + 0x1b8 ) + lVar5 ) = 0;
               pvVar3 = *(void**)( *(long*)( this + 0x1b0 ) + lVar5 * 2 );
               if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( (long)pvVar3 + 0x18 );
                     *(undefined8*)( (long)pvVar3 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               Memory::free_static(pvVar3, false);
               *(undefined8*)( *(long*)( this + 0x1b0 ) + lVar5 * 2 ) = 0;
            }
            lVar5 = lVar5 + 4;
         } while ( (ulong)uVar2 << 2 != lVar5 );
      }
      *(undefined4*)( this + 0x1d4 ) = 0;
      *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   }
   this[0x1dc] = (ResourceUID)0x0;
   return;
}/* ResourceUID::ResourceUID() */void ResourceUID::ResourceUID(ResourceUID *this) {
   RandomGenerator *this_00;
   bool bVar1;
   Object::Object((Object*)this);
   bVar1 = singleton == (ResourceUID*)0x0;
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__initialize_classv_0010abb0;
   *(undefined8*)( this + 0x178 ) = 0;
   *(undefined8*)( this + 0x1a0 ) = 0;
   *(undefined4*)( this + 400 ) = 1;
   *(undefined8*)( this + 0x1d0 ) = 2;
   *(undefined4*)( this + 0x1d8 ) = 0;
   this[0x1dc] = (ResourceUID)0x0;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   if (bVar1) {
      singleton = this;
      this_00 = (RandomGenerator*)operator_new(0x10, "");
      CryptoCore::RandomGenerator::RandomGenerator(this_00);
      *(RandomGenerator**)( this + 0x178 ) = this_00;
      CryptoCore::RandomGenerator::init();
      return;
   }
   _err_print_error("ResourceUID", "core/io/resource_uid.cpp", 0x155, "Condition \"singleton != nullptr\" is true.", 0, 0);
   return;
}/* ResourceUID::add_id(long, String const&) */void ResourceUID::add_id(long param_1, String *param_2) {
   long *plVar1;
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
   CowData<char> *pCVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   long in_FS_OFFSET;
   String *local_70[2];
   long local_60;
   long local_58;
   undefined1 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70[0] = param_2;
   iVar11 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x180 ));
   if (iVar11 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar11);
   }
   if (( *(long*)( param_1 + 0x1b0 ) != 0 ) && ( *(int*)( param_1 + 0x1d4 ) != 0 )) {
      uVar17 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x1d0 ) * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x1d0 ) * 8 );
      uVar12 = (long)local_70[0] * 0x3ffff - 1;
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
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( param_1 + 0x1b8 ) + lVar14 * 4 );
      iVar11 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar18 = 0;
         do {
            if (( uVar16 == (uint)uVar15 ) && ( local_70[0] == *(String**)( *(long*)( *(long*)( param_1 + 0x1b0 ) + lVar14 * 8 ) + 0x10 ) )) {
               _err_print_error("add_id", "core/io/resource_uid.cpp", 0x82, "Condition \"unique_ids.has(p_id)\" is true.", 0, 0);
               goto LAB_001016a0;
            }
            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar11 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( param_1 + 0x1b8 ) + lVar14 * 4 );
            iVar11 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x1d0 ) * 4 ) + iVar11 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   local_50 = 0;
   local_58 = 0;
   String::utf8();
   if (local_60 == 0) {
      pCVar13 = (CowData<char>*)HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>::operator []((HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>*)( param_1 + 0x1a8 ), (long*)local_70);
      if (*(long*)pCVar13 == 0) {
         pCVar13[8] = (CowData<char>)0x0;
         *(undefined1*)( param_1 + 0x1dc ) = 1;
      } else {
         CowData<char>::_ref(pCVar13, (CowData*)&local_58);
         pCVar13[8] = (CowData<char>)0x0;
         *(undefined1*)( param_1 + 0x1dc ) = 1;
      }
   } else {
      local_58 = local_60;
      pCVar13 = (CowData<char>*)HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>::operator []((HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>*)( param_1 + 0x1a8 ), (long*)local_70);
      if (local_60 != *(long*)pCVar13) {
         CowData<char>::_ref(pCVar13, (CowData*)&local_58);
      }
      pCVar13[8] = (CowData<char>)0x0;
      *(undefined1*)( param_1 + 0x1dc ) = 1;
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58 + -0x10 ), false);
      }
   }
   LAB_001016a0:pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x180 ));
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* ResourceUID::set_id(long, String const&) */void ResourceUID::set_id(long param_1, String *param_2) {
   long *plVar1;
   HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>> *this;
   char *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   char *__s1;
   int iVar11;
   ulong uVar12;
   undefined8 *puVar13;
   CowData<char> *this_00;
   long lVar14;
   long lVar15;
   ulong uVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   long in_FS_OFFSET;
   String *local_50;
   char *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = param_2;
   iVar11 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x180 ));
   if (iVar11 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar11);
   }
   this(HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>> * )(param_1 + 0x1a8);
   if (( *(long*)( param_1 + 0x1b0 ) != 0 ) && ( *(int*)( param_1 + 0x1d4 ) != 0 )) {
      uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x1d0 ) * 4 ));
      lVar14 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x1d0 ) * 8 );
      uVar12 = (long)local_50 * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar16 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar16 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16 * lVar14;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar17 = *(uint*)( *(long*)( param_1 + 0x1b8 ) + lVar15 * 4 );
      iVar11 = SUB164(auVar3 * auVar7, 8);
      if (uVar17 != 0) {
         uVar19 = 0;
         do {
            if (( uVar17 == (uint)uVar16 ) && ( local_50 == *(String**)( *(long*)( *(long*)( param_1 + 0x1b0 ) + lVar15 * 8 ) + 0x10 ) )) {
               String::utf8();
               __s1 = local_48;
               puVar13 = (undefined8*)HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>::operator [](this, (long*)&local_50);
               pcVar2 = (char*)*puVar13;
               if (pcVar2 != (char*)0x0 || __s1 != (char*)0x0) {
                  if (( __s1 == (char*)0x0 ) == ( pcVar2 == (char*)0x0 )) {
                     iVar11 = strcmp(__s1, pcVar2);
                     if (iVar11 == 0) goto LAB_001019a6;
                  }
                  this_00 = (CowData<char>*)HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>::operator [](this, (long*)&local_50);
                  if (*(char**)this_00 != local_48) {
                     CowData<char>::_ref(this_00, (CowData*)&local_48);
                  }
                  lVar14 = HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>::operator [](this, (long*)&local_50);
                  *(undefined1*)( lVar14 + 8 ) = 0;
                  *(undefined1*)( param_1 + 0x1dc ) = 1;
               }
               LAB_001019a6:pcVar2 = local_48;
               if (local_48 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_48 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_48 = (char*)0x0;
                     Memory::free_static(pcVar2 + -0x10, false);
                  }
               }
               goto LAB_001019b8;
            }
            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar11 + 1) * lVar14;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar17 = *(uint*)( *(long*)( param_1 + 0x1b8 ) + lVar15 * 4 );
            iVar11 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar17 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar17 * lVar14,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x1d0 ) * 4 ) + iVar11 ) - SUB164(auVar5 * auVar9, 8)) * lVar14,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar19 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   _err_print_error("set_id", "core/io/resource_uid.cpp", 0x8b, "Condition \"!unique_ids.has(p_id)\" is true.", 0, 0);
   LAB_001019b8:pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x180 ));
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Error CowData<char>::resize<false>(long) [clone .isra.0] */void CowData<char>::resize<false>(CowData<char> *this, long param_1) {
   CowData<char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<char> *pCVar9;
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
      LAB_00101bf6:lVar10 = 0;
      pCVar6 = (CowData<char>*)0x0;
   } else {
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
      if (lVar10 == 0) goto LAB_00101bf6;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }
   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }
      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }
      FUN_00103d1c();
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
         goto LAB_00101b4c;
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
   LAB_00101b4c:puVar8[-1] = param_1;
   return;
}/* ResourceUID::load_from_cache(bool) */undefined8 ResourceUID::load_from_cache(ResourceUID *this, bool param_1) {
   long *plVar1;
   code *pcVar2;
   void *pvVar3;
   Object *pOVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   CowData<char> *this_00;
   undefined8 uVar9;
   long lVar10;
   int iVar11;
   int iVar12;
   long lVar13;
   long in_FS_OFFSET;
   Object *local_68;
   long local_60;
   long local_58;
   undefined1 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   get_cache_file((ResourceUID*)&local_58);
   FileAccess::open((String*)&local_68, (int)(ResourceUID*)&local_58, (Error*)0x1);
   lVar13 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar13 + -0x10 ), false);
      }
   }
   if (local_68 == (Object*)0x0) {
      uVar9 = 0x13;
   } else {
      iVar6 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
      if (iVar6 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }
      if (( ( param_1 ) && ( *(long*)( this + 0x1b0 ) != 0 ) ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
         lVar13 = 0;
         uVar7 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
         if (uVar7 != 0) {
            do {
               if (*(int*)( *(long*)( this + 0x1b8 ) + lVar13 ) != 0) {
                  *(int*)( *(long*)( this + 0x1b8 ) + lVar13 ) = 0;
                  pvVar3 = *(void**)( *(long*)( this + 0x1b0 ) + lVar13 * 2 );
                  if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar10 = *(long*)( (long)pvVar3 + 0x18 );
                        *(undefined8*)( (long)pvVar3 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( this + 0x1b0 ) + lVar13 * 2 ) = 0;
               }
               lVar13 = lVar13 + 4;
            } while ( lVar13 != (ulong)uVar7 << 2 );
         }
         *(undefined4*)( this + 0x1d4 ) = 0;
         *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
      }
      iVar6 = ( **(code**)( *(long*)local_68 + 0x1f0 ) )();
      if (iVar6 != 0) {
         iVar11 = 0;
         do {
            local_60 = ( **(code**)( *(long*)local_68 + 0x1f8 ) )();
            uVar7 = ( **(code**)( *(long*)local_68 + 0x1f0 ) )();
            local_50 = 0;
            local_58 = 0;
            iVar12 = uVar7 + 1;
            CowData<char>::resize<false>((CowData<char>*)&local_58, (long)iVar12);
            lVar13 = local_58;
            if (local_58 == 0) {
               if (iVar12 == 0) {
                  lVar13 = -1;
                  lVar10 = 0;
                  LAB_00101e5e:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar10, "p_index", "size()", "", false, false);
                  goto LAB_00101d8f;
               }
               _err_print_error("load_from_cache", "core/io/resource_uid.cpp", 0xf8, "Condition \"c.cs.size() != len + 1\" is true. Returning: ERR_FILE_CORRUPT", 0, 0);
               LAB_00101f0d:uVar9 = 0x10;
               goto LAB_00101f12;
            }
            lVar10 = *(long*)( local_58 + -8 );
            if (iVar12 != (int)lVar10) {
               _err_print_error("load_from_cache", "core/io/resource_uid.cpp", 0xf8, "Condition \"c.cs.size() != len + 1\" is true. Returning: ERR_FILE_CORRUPT", 0, 0);
               LAB_00101ef5:LOCK();
               plVar1 = (long*)( lVar13 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_58 + -0x10 ), false);
               }
               goto LAB_00101f0d;
            }
            lVar13 = (long)(int)uVar7;
            if (( lVar10 <= lVar13 ) || ( lVar13 < 0 )) goto LAB_00101e5e;
            CowData<char>::_copy_on_write((CowData<char>*)&local_58);
            *(undefined1*)( local_58 + (ulong)uVar7 ) = 0;
            LAB_00101d8f:pOVar4 = local_68;
            pcVar2 = *(code**)( *(long*)local_68 + 0x220 );
            CowData<char>::_copy_on_write((CowData<char>*)&local_58);
            lVar13 = local_58;
            uVar8 = ( *pcVar2 )(pOVar4, local_58, (long)(int)uVar7);
            if (uVar7 != uVar8) {
               _err_print_error("load_from_cache", "core/io/resource_uid.cpp", 0xfb, "Condition \"rl != len\" is true. Returning: ERR_FILE_CORRUPT", 0, 0);
               if (lVar13 == 0) goto LAB_00101f0d;
               goto LAB_00101ef5;
            }
            local_50 = 1;
            this_00 = (CowData<char>*)HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>::operator []((HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>*)( this + 0x1a8 ), &local_60);
            if (lVar13 != *(long*)this_00) {
               CowData<char>::_ref(this_00, (CowData*)&local_58);
            }
            this_00[8] = (CowData<char>)0x1;
            if (lVar13 != 0) {
               LOCK();
               plVar1 = (long*)( lVar13 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_58 + -0x10 ), false);
               }
            }
            iVar11 = iVar11 + 1;
         } while ( iVar6 != iVar11 );
      }
      this[0x1dc] = (ResourceUID)0x0;
      uVar9 = 0;
      *(int*)( this + 0x1d8 ) = iVar6;
      LAB_00101f12:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
      if (( ( local_68 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_68 + 0x140 ))(local_68);
      Memory::free_static(local_68, false);
   }
}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar9;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ResourceUID::id_to_text(long) const */long ResourceUID::id_to_text(long param_1) {
   code *pcVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   undefined8 *puVar5;
   long in_RDX;
   size_t __n;
   uint uVar6;
   uint *puVar7;
   ulong uVar8;
   ulong uVar9;
   ulong *__dest;
   long in_FS_OFFSET;
   uint local_78[14];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_RDX < 0) {
      *(undefined8*)param_1 = 0;
      String::parse_latin1((StrRange*)param_1);
      goto LAB_00102236;
   }
   puVar7 = local_78;
   uVar3 = 0;
   do {
      uVar6 = uVar3;
      lVar2 = in_RDX / 0x22;
      *puVar7 = (uint)(byte)uuid_characters[( uint )((int)in_RDX + (int)lVar2 * -0x22)];
      in_RDX = lVar2;
      puVar7 = puVar7 + 1;
      uVar3 = uVar6 + 1;
   } while ( lVar2 != 0 );
   uVar8 = ( ulong )(uVar6 + 8) * 4 - 1;
   uVar8 = uVar8 | uVar8 >> 1;
   uVar8 = uVar8 | uVar8 >> 2;
   puVar4 = (ulong*)Memory::alloc_static(( uVar8 | uVar8 >> 4 ) + 0x11, false);
   if (puVar4 == (ulong*)0x0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   *puVar4 = 1;
   puVar4[1] = ( ulong )(uVar6 + 8);
   if (*puVar4 < 2) {
      LAB_001021b8:uVar9 = _UNK_0010b168;
      uVar8 = __LC44;
      puVar4[4] = _LC45;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      __dest = puVar4 + 2;
   } else {
      uVar8 = puVar4[1];
      uVar9 = 0x10;
      __n = uVar8 * 4;
      if (__n != 0) {
         uVar9 = __n - 1 | __n - 1 >> 1;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = uVar9 | uVar9 >> 0x10;
         uVar9 = ( uVar9 | uVar9 >> 0x20 ) + 0x11;
      }
      puVar5 = (undefined8*)Memory::alloc_static(uVar9, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
         goto LAB_001021b8;
      }
      __dest = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = uVar8;
      memcpy(__dest, puVar4 + 2, __n);
      LOCK();
      *puVar4 = *puVar4 - 1;
      UNLOCK();
      if (*puVar4 == 0) {
         Memory::free_static(puVar4, false);
      }
      uVar9 = _LC45;
      uVar8 = _UNK_0010b168;
      puVar5[2] = __LC44;
      puVar5[3] = uVar8;
      puVar5[4] = uVar9;
   }
   puVar4 = __dest + 3;
   uVar3 = uVar6;
   do {
      uVar8 = (ulong)uVar3;
      uVar3 = uVar3 - 1;
      *(uint*)puVar4 = local_78[uVar8];
      puVar4 = (ulong*)( (long)puVar4 + 4 );
   } while ( uVar3 != 0xffffffff );
   *(undefined4*)( (long)__dest + ( ulong )(uVar6 + 7) * 4 ) = 0;
   *(ulong**)param_1 = __dest;
   LAB_00102236:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceUID::get_id_path(long) const */long ResourceUID::get_id_path(long param_1) {
   long *plVar1;
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
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   char *pcVar20;
   int iVar21;
   ulong uVar22;
   uint uVar23;
   long in_RDX;
   long lVar24;
   ulong uVar25;
   long in_RSI;
   uint uVar26;
   ulong uVar27;
   uint uVar28;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_RDX == -1) {
      _err_print_error("get_id_path", "core/io/resource_uid.cpp", 0x9a, "Condition \"p_id == INVALID_ID\" is true. Returning: String()", "Invalid UID.", 0, 0);
      *(undefined8*)param_1 = 0;
   } else {
      iVar21 = pthread_mutex_lock((pthread_mutex_t*)( in_RSI + 0x180 ));
      if (iVar21 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar21);
      }
      lVar2 = *(long*)( in_RSI + 0x1b0 );
      if (( lVar2 != 0 ) && ( *(int*)( in_RSI + 0x1d4 ) != 0 )) {
         uVar27 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 8 );
         uVar22 = in_RDX * 0x3ffff - 1;
         uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
         uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
         uVar22 = uVar22 >> 0x16 ^ uVar22;
         uVar25 = uVar22 & 0xffffffff;
         if ((int)uVar22 == 0) {
            uVar25 = 1;
         }
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar25 * lVar3;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar27;
         lVar24 = SUB168(auVar4 * auVar12, 8);
         uVar26 = *(uint*)( *(long*)( in_RSI + 0x1b8 ) + lVar24 * 4 );
         uVar23 = SUB164(auVar4 * auVar12, 8);
         if (uVar26 != 0) {
            uVar28 = 0;
            do {
               if (( (uint)uVar25 == uVar26 ) && ( *(long*)( *(long*)( lVar2 + lVar24 * 8 ) + 0x10 ) == in_RDX )) {
                  lVar2 = *(long*)( lVar2 + (ulong)uVar23 * 8 );
                  goto LAB_001024fc;
               }
               uVar28 = uVar28 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar23 + 1) * lVar3;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar27;
               lVar24 = SUB168(auVar5 * auVar13, 8);
               uVar26 = *(uint*)( *(long*)( in_RSI + 0x1b8 ) + lVar24 * 4 );
               uVar23 = SUB164(auVar5 * auVar13, 8);
            } while ( ( uVar26 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar26 * lVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar27,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 4 ) + uVar23 ) - SUB164(auVar6 * auVar14, 8)) * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar27,uVar28 <= SUB164(auVar7 * auVar15, 8) );
         }
      }
      if (scan_for_uid_on_startup != (code*)0x0) {
         ( *scan_for_uid_on_startup )();
         lVar2 = *(long*)( in_RSI + 0x1b0 );
         if (( lVar2 != 0 ) && ( *(int*)( in_RSI + 0x1d4 ) != 0 )) {
            uVar27 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 4 ));
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 8 );
            uVar22 = in_RDX * 0x3ffff - 1;
            uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
            uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
            uVar22 = uVar22 >> 0x16 ^ uVar22;
            uVar25 = uVar22 & 0xffffffff;
            if ((int)uVar22 == 0) {
               uVar25 = 1;
            }
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar25 * lVar3;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar24 = SUB168(auVar8 * auVar16, 8);
            uVar26 = *(uint*)( *(long*)( in_RSI + 0x1b8 ) + lVar24 * 4 );
            uVar23 = SUB164(auVar8 * auVar16, 8);
            if (uVar26 != 0) {
               uVar28 = 0;
               LAB_0010264a:if (( (uint)uVar25 != uVar26 ) || ( *(long*)( *(long*)( lVar2 + lVar24 * 8 ) + 0x10 ) != in_RDX )) goto LAB_00102608;
               lVar2 = *(long*)( lVar2 + (ulong)uVar23 * 8 );
               LAB_001024fc:String::utf8((char*)param_1, (int)*(undefined8*)( lVar2 + 0x18 ));
               goto LAB_0010250d;
            }
         }
      }
      LAB_00102668:id_to_text((long)&local_68);
      local_58 = "Unrecognized UID: \"%s\".";
      local_60 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange*)&local_60);
      vformat<String>(&local_58, (StrRange*)&local_60, &local_68);
      _err_print_error("get_id_path", "core/io/resource_uid.cpp", 0xaa, "Condition \"!cache\" is true. Returning: String()", &local_58, 0, 0);
      pcVar20 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar20 + -0x10, false);
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
      *(undefined8*)param_1 = 0;
      LAB_0010250d:pthread_mutex_unlock((pthread_mutex_t*)( in_RSI + 0x180 ));
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102608:uVar28 = uVar28 + 1;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = ( ulong )(uVar23 + 1) * lVar3;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar27;
   lVar24 = SUB168(auVar9 * auVar17, 8);
   uVar26 = *(uint*)( *(long*)( in_RSI + 0x1b8 ) + lVar24 * 4 );
   uVar23 = SUB164(auVar9 * auVar17, 8);
   if (( uVar26 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar26 * lVar3,auVar18._8_8_ = 0,auVar18._0_8_ = uVar27,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 4 ) + uVar23 ) - SUB164(auVar10 * auVar18, 8)) * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar27,SUB164(auVar11 * auVar19, 8) < uVar28) goto LAB_00102668;
   goto LAB_0010264a;
}/* ResourceUID::uid_to_path(String const&) */ResourceUID * __thiscall ResourceUID::uid_to_path(ResourceUID *this,String *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   text_to_id(singleton, param_1);
   get_id_path((long)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceUID::ensure_path(String const&) */ResourceUID * __thiscall ResourceUID::ensure_path(ResourceUID *this,String *param_1){
   long lVar1;
   char cVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = String::begins_with((char*)param_1);
   if (cVar2 == '\0') {
      *(undefined8*)this = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
      }
   } else {
      text_to_id(singleton, param_1);
      get_id_path((long)this);
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceUID::path_to_uid(String const&) */ResourceUID * __thiscall ResourceUID::path_to_uid(ResourceUID *this,String *param_1){
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = ResourceLoader::get_resource_uid(param_1);
   if (lVar2 == -1) {
      *(undefined8*)this = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
      }
   } else {
      id_to_text((long)this);
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceUID::get_path_from_cache(Ref<FileAccess>&, String const&) */ResourceUID * __thiscall
ResourceUID::get_path_from_cache(ResourceUID *this,Ref *param_1,String *param_2){
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   undefined8 uVar7;
   char *pcVar8;
   undefined8 uVar9;
   int iVar10;
   long lVar11;
   int iVar12;
   long lVar13;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = ( **(code**)( **(long**)param_1 + 0x1f0 ) )();
   local_50 = 0;
   if (iVar4 == 0) {
      *(undefined8*)this = 0;
   } else {
      iVar12 = 0;
      do {
         uVar7 = ( **(code**)( **(long**)param_1 + 0x1f8 ) )();
         uVar5 = ( **(code**)( **(long**)param_1 + 0x1f0 ) )();
         iVar10 = uVar5 + 1;
         CowData<char>::resize<false>((CowData<char>*)&local_50, (long)iVar10);
         if (local_50 != 0) {
            lVar11 = *(long*)( local_50 + -8 );
            if (iVar10 == (int)lVar11) {
               lVar13 = (long)(int)uVar5;
               if (( lVar11 <= lVar13 ) || ( lVar13 < 0 )) goto LAB_00102b19;
               CowData<char>::_copy_on_write((CowData<char>*)&local_50);
               *(undefined1*)( local_50 + (ulong)uVar5 ) = 0;
               goto LAB_00102a4b;
            }
            LAB_00102b58:uVar9 = 0x134;
            pcVar8 = "Condition \"cs.size() != len + 1\" is true. Returning: String()";
            LAB_00102b6f:_err_print_error("get_path_from_cache", "core/io/resource_uid.cpp", uVar9, pcVar8, 0, 0, uVar7);
            *(undefined8*)this = 0;
            goto LAB_00102b8f;
         }
         if (iVar10 != 0) goto LAB_00102b58;
         lVar13 = -1;
         lVar11 = 0;
         LAB_00102b19:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar11, "p_index", "size()", "", false, false);
         LAB_00102a4b:plVar1 = *(long**)param_1;
         pcVar2 = *(code**)( *plVar1 + 0x220 );
         CowData<char>::_copy_on_write((CowData<char>*)&local_50);
         uVar6 = ( *pcVar2 )(plVar1, local_50, (long)(int)uVar5);
         if (uVar5 != uVar6) {
            uVar9 = 0x137;
            pcVar8 = "Condition \"rl != len\" is true. Returning: String()";
            goto LAB_00102b6f;
         }
         id_to_text((long)&local_48);
         cVar3 = String::operator ==((String*)&local_48, param_2);
         lVar11 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }
         }
         if (cVar3 != '\0') {
            iVar4 = CharString::get_data();
            String::utf8((char*)this, iVar4);
            goto LAB_00102b8f;
         }
         iVar12 = iVar12 + 1;
      } while ( iVar4 != iVar12 );
      *(undefined8*)this = 0;
      LAB_00102b8f:lVar11 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceUID::_bind_methods() */void ResourceUID::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   MethodBind *pMVar4;
   long *plVar5;
   uint uVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_e0;
   long local_d8;
   long local_d0;
   char *local_c8;
   undefined8 local_c0;
   long *local_b8;
   char *local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined *puStack_90;
   undefined8 local_88;
   char *local_78;
   undefined *puStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = 0;
   local_a8 = "id";
   uVar6 = ( uint ) & local_58;
   local_58 = &local_a8;
   D_METHODP((char*)&local_c8, (char***)"id_to_text", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,String,long>(id_to_text);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   local_a8 = "text_id";
   local_a0 = 0;
   local_58 = &local_a8;
   D_METHODP((char*)&local_c8, (char***)"text_to_id", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,long,String_const&>(text_to_id);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_c8, (char***)"create_id", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,long>(create_id);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   local_a0 = 0;
   local_a8 = "id";
   local_58 = &local_a8;
   D_METHODP((char*)&local_c8, (char***)"has_id", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,bool,long>(has_id);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   local_68 = 0;
   local_78 = "id";
   puStack_70 = &_LC55;
   auStack_50._0_8_ = &puStack_70;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"add_id", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,long,String_const&>(add_id);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   local_88 = 0;
   local_98 = "id";
   puStack_90 = &_LC55;
   auStack_50._0_8_ = &puStack_90;
   local_58 = &local_98;
   D_METHODP((char*)&local_c8, (char***)"set_id", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,long,String_const&>(set_id);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   local_78 = "id";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"get_id_path", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,String,long>(get_id_path);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   local_78 = "id";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"remove_id", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<ResourceUID,long>(remove_id);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar1 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar5 = local_b8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_b8[-1];
         lVar7 = 0;
         local_b8 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_d0, "INVALID_ID", false);
   local_c8 = "ResourceUID";
   local_d8 = 0;
   local_e0 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e0);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e0, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, -1, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_e0;
   if (local_e0 != 0) {
      LOCK();
      plVar1 = (long*)( local_e0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_d0 != 0 ) ) )) {
      StringName::unref();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
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
}/* ResourceUID::is_class_ptr(void*) const */uint ResourceUID::is_class_ptr(ResourceUID *this, void *param_1) {
   return (uint)CONCAT71(0x10af, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* ResourceUID::_getv(StringName const&, Variant&) const */undefined8 ResourceUID::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceUID::_setv(StringName const&, Variant const&) */undefined8 ResourceUID::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceUID::_validate_propertyv(PropertyInfo&) const */void ResourceUID::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* ResourceUID::_property_can_revertv(StringName const&) const */undefined8 ResourceUID::_property_can_revertv(StringName *param_1) {
   return 0;
}/* ResourceUID::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourceUID::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceUID::_notificationv(int, bool) */void ResourceUID::_notificationv(int param_1, bool param_2) {
   return;
}/* MethodBindT<long>::_gen_argument_type(int) const */char MethodBindT<long>::_gen_argument_type(MethodBindT<long> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<long>::get_argument_meta(int) const */long MethodBindT<long>::get_argument_meta(MethodBindT<long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindT<long, String const&>::_gen_argument_type(int) const */int MethodBindT<long,String_const&>::_gen_argument_type(MethodBindT<long,String_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffe ) + 4;
   }
   return iVar1;
}/* MethodBindT<long, String const&>::get_argument_meta(int) const */long MethodBindT<long,String_const&>::get_argument_meta(MethodBindT<long,String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindTRC<bool, long>::_gen_argument_type(int) const */char MethodBindTRC<bool,long>::_gen_argument_type(MethodBindTRC<bool,long> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}/* MethodBindTRC<bool, long>::get_argument_meta(int) const */long MethodBindTRC<bool,long>::get_argument_meta(MethodBindTRC<bool,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindTR<long>::_gen_argument_type(int) const */undefined8 MethodBindTR<long>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTR<long>::get_argument_meta(int) const */int MethodBindTR<long>::get_argument_meta(MethodBindTR<long> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -4;
}/* MethodBindTRC<long, String const&>::_gen_argument_type(int) const */char MethodBindTRC<long,String_const&>::_gen_argument_type(MethodBindTRC<long,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}/* MethodBindTRC<long, String const&>::get_argument_meta(int) const */int MethodBindTRC<long,String_const&>::get_argument_meta(MethodBindTRC<long,String_const&> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -4;
}/* MethodBindTRC<String, long>::_gen_argument_type(int) const */int MethodBindTRC<String,long>::_gen_argument_type(MethodBindTRC<String,long> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffe ) + 4;
}/* MethodBindTRC<String, long>::get_argument_meta(int) const */long MethodBindTRC<String,long>::get_argument_meta(MethodBindTRC<String,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindTRC<long, String const&>::~MethodBindTRC() */void MethodBindTRC<long,String_const&>::~MethodBindTRC(MethodBindTRC<long,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ad70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<long, String const&>::~MethodBindTRC() */void MethodBindTRC<long,String_const&>::~MethodBindTRC(MethodBindTRC<long,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ad70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<long>::~MethodBindTR() */void MethodBindTR<long>::~MethodBindTR(MethodBindTR<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010add0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<long>::~MethodBindTR() */void MethodBindTR<long>::~MethodBindTR(MethodBindTR<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010add0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ae30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ae30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<long, String const&>::~MethodBindT() */void MethodBindT<long,String_const&>::~MethodBindT(MethodBindT<long,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ae90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<long, String const&>::~MethodBindT() */void MethodBindT<long,String_const&>::~MethodBindT(MethodBindT<long,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ae90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<String, long>::~MethodBindTRC() */void MethodBindTRC<String,long>::~MethodBindTRC(MethodBindTRC<String,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ad10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<String, long>::~MethodBindTRC() */void MethodBindTRC<String,long>::~MethodBindTRC(MethodBindTRC<String,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ad10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aef0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aef0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* CowData<char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00103d1c(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* ResourceUID::_bind_methods() [clone .cold] */void ResourceUID::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* ResourceUID::_get_class_namev() const */undefined8 *ResourceUID::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103dc3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103dc3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceUID");
         goto LAB_00103e2e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceUID");
   LAB_00103e2e:return &_get_class_namev();
}/* ResourceUID::get_class() const */void ResourceUID::get_class(void) {
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
}/* ResourceUID::is_class(String const&) const */undefined8 ResourceUID::is_class(ResourceUID *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010423f;
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
      LAB_0010423f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_001042f3;
   }
   cVar6 = String::operator ==(param_1, "ResourceUID");
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
                     if (lVar5 == 0) goto LAB_001043a3;
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
         LAB_001043a3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_001042f3;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_001042f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<long>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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
         goto joined_r0x0010459c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010459c:local_58 = lVar2;
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
}/* ResourceUID::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ResourceUID::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "ResourceUID";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ResourceUID";
   local_98 = 0;
   local_70 = 0xb;
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
      LAB_00104748:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104748;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00104766;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00104766:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "ResourceUID", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<long>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<long>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined1 local_50[16];
   int local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00104a17;
   local_68 = 0;
   local_58 = &_LC5;
   local_70 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_50._8_8_;
   local_50 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = (undefined*)CONCAT44(local_58._4_4_, 2);
   local_40 = 0;
   local_38 = 0;
   local_50 = (undefined1[16])0x0;
   if (local_70 == 0) {
      LAB_00104b08:local_30 = 6;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_68);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_70);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_00104b08;
      StringName::StringName((StringName*)&local_60, (String*)&local_38, false);
      if (local_50._8_8_ == local_60) {
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_50._8_8_ = local_60;
      }
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
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }
   *puVar8 = local_58._0_4_;
   lVar2 = *(long*)( puVar8 + 2 );
   if (lVar2 != local_50._0_8_) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 2 );
            *(undefined8*)( puVar8 + 2 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      *(undefined8*)( puVar8 + 2 ) = local_50._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_50._8_8_;
      local_50 = auVar5 << 0x40;
   }
   if (*(long*)( puVar8 + 4 ) != local_50._8_8_) {
      StringName::unref();
      uVar6 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8*)( puVar8 + 4 ) = uVar6;
   }
   lVar7 = local_38;
   puVar8[6] = local_40;
   lVar2 = *(long*)( puVar8 + 8 );
   if (lVar2 == local_38) {
      puVar8[10] = local_30;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
   } else {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 8 );
            *(undefined8*)( puVar8 + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      *(long*)( puVar8 + 8 ) = local_38;
      puVar8[10] = local_30;
   }
   if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar6 = local_50._0_8_;
   if (local_50._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_50._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_50._8_8_;
         local_50 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }
   }
   LAB_00104a17:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar8;
}/* WARNING: Removing unreachable block (ram,0x00104e78) *//* WARNING: Removing unreachable block (ram,0x00104fa8) *//* WARNING: Removing unreachable block (ram,0x00105170) *//* WARNING: Removing unreachable block (ram,0x00104fb4) *//* WARNING: Removing unreachable block (ram,0x00104fbe) *//* WARNING: Removing unreachable block (ram,0x00105150) *//* WARNING: Removing unreachable block (ram,0x00104fca) *//* WARNING: Removing unreachable block (ram,0x00104fd4) *//* WARNING: Removing unreachable block (ram,0x00105130) *//* WARNING: Removing unreachable block (ram,0x00104fe0) *//* WARNING: Removing unreachable block (ram,0x00104fea) *//* WARNING: Removing unreachable block (ram,0x00105110) *//* WARNING: Removing unreachable block (ram,0x00104ff6) *//* WARNING: Removing unreachable block (ram,0x00105000) *//* WARNING: Removing unreachable block (ram,0x001050f0) *//* WARNING: Removing unreachable block (ram,0x0010500c) *//* WARNING: Removing unreachable block (ram,0x00105016) *//* WARNING: Removing unreachable block (ram,0x001050d0) *//* WARNING: Removing unreachable block (ram,0x00105022) *//* WARNING: Removing unreachable block (ram,0x0010502c) *//* WARNING: Removing unreachable block (ram,0x001050b0) *//* WARNING: Removing unreachable block (ram,0x00105034) *//* WARNING: Removing unreachable block (ram,0x0010504a) *//* WARNING: Removing unreachable block (ram,0x00105056) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<long, ResourceUID::Cache, HashMapHasherDefault, HashMapComparatorDefault<long>,
   DefaultTypedAllocator<HashMapElement<long, ResourceUID::Cache> > >::operator[](long const&) */undefined1 * __thiscallHashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>>::operator [](HashMap<long,ResourceUID::Cache,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,ResourceUID::Cache>>> * this, long * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1(*pauVar36)[16];uint uVar37ulong uVar38ulong uVar39undefined8 uVar40void *__s_00undefined1(*pauVar41)[16];int iVar42uint uVar43long lVar44long lVar45uint uVar46undefined8 uVar47ulong uVar48long lVar49uint uVar50uint uVar51uint uVar52ulong uVar53long lVar54ulong uVar55undefined1(*pauVar56)[16];long in_FS_OFFSETvoid *local_88undefined8 local_58undefined1 local_50long local_40local_88 = *(void**)( this + 8 );lVar49 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar39 = ( ulong ) * (uint*)( this + 0x28 );uVar46 = *(uint*)( hash_table_size_primes + uVar39 * 4 );uVar48 = CONCAT44(0, uVar46);if (local_88 == (void*)0x0) {
   local_50 = 0;
   uVar39 = uVar48 * 4;
   uVar38 = uVar48 * 8;
   local_58 = 0;
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   local_88 = (void*)Memory::alloc_static(uVar38, false);
   *(void**)( this + 8 ) = local_88;
   if (uVar46 == 0) {
      lVar49 = *param_1;
      iVar42 = *(int*)( this + 0x2c );
      if (local_88 == (void*)0x0) goto LAB_001053e1;
   } else {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)local_88 + uVar38 ) ) && ( local_88 < (void*)( (long)pvVar3 + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)local_88 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         } while ( uVar48 != uVar39 );
         lVar49 = *param_1;
         iVar42 = *(int*)( this + 0x2c );
      } else {
         memset(pvVar3, 0, uVar39);
         memset(local_88, 0, uVar38);
         lVar49 = *param_1;
         iVar42 = *(int*)( this + 0x2c );
      }
   }
   if (iVar42 != 0) {
      uVar39 = ( ulong ) * (uint*)( this + 0x28 );
      lVar54 = *(long*)( this + 0x10 );
      goto LAB_00105796;
   }
} else {
   iVar42 = *(int*)( this + 0x2c );
   if (iVar42 == 0) {
      local_50 = 0;
      local_58 = 0;
   } else {
      lVar45 = *(long*)( hash_table_size_primes_inv + uVar39 * 8 );
      uVar38 = lVar49 * 0x3ffff - 1;
      uVar38 = ( uVar38 ^ uVar38 >> 0x1f ) * 0x15;
      uVar38 = ( uVar38 ^ uVar38 >> 0xb ) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar53 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
         uVar53 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar53 * lVar45;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar48;
      lVar44 = SUB168(auVar4 * auVar20, 8);
      lVar54 = *(long*)( this + 0x10 );
      uVar52 = SUB164(auVar4 * auVar20, 8);
      uVar43 = *(uint*)( lVar54 + lVar44 * 4 );
      if (uVar43 != 0) {
         uVar51 = 0;
         do {
            if (( uVar43 == (uint)uVar53 ) && ( lVar49 == *(long*)( *(long*)( (long)local_88 + lVar44 * 8 ) + 0x10 ) )) {
               pauVar41 = *(undefined1(**) [16])( (long)local_88 + (ulong)uVar52 * 8 );
               goto LAB_001053ab;
            }
            uVar51 = uVar51 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar52 + 1) * lVar45;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar48;
            lVar44 = SUB168(auVar5 * auVar21, 8);
            uVar43 = *(uint*)( lVar54 + lVar44 * 4 );
            uVar52 = SUB164(auVar5 * auVar21, 8);
         } while ( ( uVar43 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar43 * lVar45,auVar22._8_8_ = 0,auVar22._0_8_ = uVar48,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar52 + uVar46 ) - SUB164(auVar6 * auVar22, 8)) * lVar45,auVar23._8_8_ = 0,auVar23._0_8_ = uVar48,uVar51 <= SUB164(auVar7 * auVar23, 8) );
      }
      local_50 = 0;
      local_58 = 0;
      LAB_00105796:uVar53 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar39 * 4 ));
      lVar45 = *(long*)( hash_table_size_primes_inv + uVar39 * 8 );
      uVar38 = lVar49 * 0x3ffff - 1;
      uVar38 = ( uVar38 ^ uVar38 >> 0x1f ) * 0x15;
      uVar38 = ( uVar38 ^ uVar38 >> 0xb ) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar55 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
         uVar55 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar55 * lVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar53;
      lVar44 = SUB168(auVar16 * auVar32, 8);
      uVar46 = *(uint*)( lVar54 + lVar44 * 4 );
      uVar43 = SUB164(auVar16 * auVar32, 8);
      if (uVar46 != 0) {
         uVar52 = 0;
         do {
            if (( (uint)uVar55 == uVar46 ) && ( *(long*)( *(long*)( (long)local_88 + lVar44 * 8 ) + 0x10 ) == lVar49 )) {
               lVar49 = *(long*)( (long)local_88 + (ulong)uVar43 * 8 );
               if (*(long*)( lVar49 + 0x18 ) != 0) {
                  CowData<char>::_ref((CowData<char>*)( lVar49 + 0x18 ), (CowData*)&local_58);
               }
               *(undefined1*)( lVar49 + 0x20 ) = 0;
               pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar43 * 8 );
               goto LAB_001053ab;
            }
            uVar52 = uVar52 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = ( ulong )(uVar43 + 1) * lVar45;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar53;
            lVar44 = SUB168(auVar17 * auVar33, 8);
            uVar46 = *(uint*)( lVar54 + lVar44 * 4 );
            uVar43 = SUB164(auVar17 * auVar33, 8);
         } while ( ( uVar46 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar46 * lVar45,auVar34._8_8_ = 0,auVar34._0_8_ = uVar53,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar39 * 4 ) + uVar43 ) - SUB164(auVar18 * auVar34, 8)) * lVar45,auVar35._8_8_ = 0,auVar35._0_8_ = uVar53,uVar52 <= SUB164(auVar19 * auVar35, 8) );
      }
   }
}LAB_001053e1:if ((float)uVar48 * __LC28 < (float)( iVar42 + 1 )) {
   uVar46 = *(uint*)( this + 0x28 );
   if (uVar46 == 0x1c) {
      pauVar41 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001053ab;
   }
   uVar39 = ( ulong )(uVar46 + 1);
   uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar46 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar46 + 1 < 2) {
      uVar39 = 2;
   }
   uVar46 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar3 = *(void**)( this + 0x10 );
   uVar38 = (ulong)uVar46;
   uVar39 = uVar38 * 4;
   uVar48 = uVar38 * 8;
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar48, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar46 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar48 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         } while ( uVar39 != uVar38 );
      } else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar48);
      }
   }
   uVar39 = 0;
   if (uVar43 != 0) {
      do {
         uVar46 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
         if (uVar46 != 0) {
            uVar50 = 0;
            lVar49 = *(long*)( this + 0x10 );
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar48 = CONCAT44(0, uVar52);
            lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar46 * lVar54;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar48;
            lVar45 = SUB168(auVar8 * auVar24, 8);
            puVar1 = (uint*)( lVar49 + lVar45 * 4 );
            iVar42 = SUB164(auVar8 * auVar24, 8);
            uVar51 = *puVar1;
            uVar40 = *(undefined8*)( (long)local_88 + uVar39 * 8 );
            while (uVar51 != 0) {
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar51 * lVar54;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar48;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(( uVar52 + iVar42 ) - SUB164(auVar9 * auVar25, 8)) * lVar54;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar48;
               uVar37 = SUB164(auVar10 * auVar26, 8);
               uVar47 = uVar40;
               if (uVar37 < uVar50) {
                  *puVar1 = uVar46;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar47 = *puVar2;
                  *puVar2 = uVar40;
                  uVar46 = uVar51;
                  uVar50 = uVar37;
               }
               uVar50 = uVar50 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(iVar42 + 1) * lVar54;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar48;
               lVar45 = SUB168(auVar11 * auVar27, 8);
               puVar1 = (uint*)( lVar49 + lVar45 * 4 );
               iVar42 = SUB164(auVar11 * auVar27, 8);
               uVar40 = uVar47;
               uVar51 = *puVar1;
            };
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar40;
            *puVar1 = uVar46;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar39 = uVar39 + 1;
      } while ( uVar39 != uVar43 );
      Memory::free_static(local_88, false);
      Memory::free_static(pvVar3, false);
   }
}lVar49 = *param_1;pauVar41 = (undefined1(*) [16])operator_new(0x28, "");pauVar41[2][0] = 0;*(long*)pauVar41[1] = lVar49;*(undefined8*)( pauVar41[1] + 8 ) = 0;*pauVar41 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar41;
} else {
   *puVar2 = pauVar41;
   *(undefined8**)( *pauVar41 + 8 ) = puVar2;
}lVar49 = *param_1;lVar54 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar41;uVar39 = lVar49 * 0x3ffff - 1;uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;uVar39 = uVar39 >> 0x16 ^ uVar39;uVar48 = uVar39 & 0xffffffff;if ((int)uVar39 == 0) {
   uVar48 = 1;
}uVar51 = 0;uVar46 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar46);uVar52 = (uint)uVar48;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar12._8_8_ = 0;auVar12._0_8_ = uVar48 * lVar49;auVar28._8_8_ = 0;auVar28._0_8_ = uVar39;lVar44 = SUB168(auVar12 * auVar28, 8);lVar45 = *(long*)( this + 8 );puVar1 = (uint*)( lVar54 + lVar44 * 4 );iVar42 = SUB164(auVar12 * auVar28, 8);uVar43 = *puVar1;pauVar36 = pauVar41;while (uVar43 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar43 * lVar49;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar39;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar46 + iVar42 ) - SUB164(auVar13 * auVar29, 8)) * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar39;
   uVar52 = SUB164(auVar14 * auVar30, 8);
   pauVar56 = pauVar36;
   if (uVar52 < uVar51) {
      *puVar1 = (uint)uVar48;
      uVar48 = (ulong)uVar43;
      puVar2 = (undefined8*)( lVar45 + lVar44 * 8 );
      pauVar56 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar51 = uVar52;
   }
   uVar52 = (uint)uVar48;
   uVar51 = uVar51 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar42 + 1) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar39;
   lVar44 = SUB168(auVar15 * auVar31, 8);
   puVar1 = (uint*)( lVar54 + lVar44 * 4 );
   iVar42 = SUB164(auVar15 * auVar31, 8);
   pauVar36 = pauVar56;
   uVar43 = *puVar1;
};*(undefined1(**) [16])( lVar45 + lVar44 * 8 ) = pauVar36;*puVar1 = uVar52;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001053ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar41[1] + 8;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char>::_realloc(long) */undefined8 CowData<char>::_realloc(CowData<char> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* CowData<char32_t>::_realloc(long) */undefined8 CowData<char32_t>::_realloc(CowData<char32_t> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* MethodBind* create_method_bind<ResourceUID, String, long>(String (ResourceUID::*)(long) const) */MethodBind *create_method_bind<ResourceUID,String,long>(_func_String_long *param_1) {
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
   *(_func_String_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ad10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourceUID";
   local_30 = 0xb;
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
}/* MethodBind* create_method_bind<ResourceUID, long, String const&>(long (ResourceUID::*)(String
   const&) const) */MethodBind *create_method_bind<ResourceUID,long,String_const&>(_func_long_String_ptr *param_1) {
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
   *(_func_long_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ad70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourceUID";
   local_30 = 0xb;
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
}/* MethodBind* create_method_bind<ResourceUID, long>(long (ResourceUID::*)()) */MethodBind *create_method_bind<ResourceUID,long>(_func_long *param_1) {
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
   *(_func_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010add0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ResourceUID";
   local_30 = 0xb;
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
}/* MethodBind* create_method_bind<ResourceUID, bool, long>(bool (ResourceUID::*)(long) const) */MethodBind *create_method_bind<ResourceUID,bool,long>(_func_bool_long *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010ae30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourceUID";
   local_30 = 0xb;
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
}/* MethodBind* create_method_bind<ResourceUID, long, String const&>(void (ResourceUID::*)(long,
   String const&)) */MethodBind *create_method_bind<ResourceUID,long,String_const&>(_func_void_long_String_ptr *param_1) {
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
   *(_func_void_long_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ae90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "ResourceUID";
   local_30 = 0xb;
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
}/* MethodBind* create_method_bind<ResourceUID, long>(void (ResourceUID::*)(long)) */MethodBind *create_method_bind<ResourceUID,long>(_func_void_long *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010aef0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourceUID";
   local_30 = 0xb;
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
}/* ResourceUID::_initialize_classv() */void ResourceUID::_initialize_classv(void) {
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
      local_38 = "ResourceUID";
      local_50 = 0;
      local_30 = 0xb;
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
            _bind_methods();
            initialize_class()::initialized = '\x01';
        goto LAB_001062a5
            ;;
         }
      }
      _bind_methods();
      initialize_class() {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00106538) */
   }
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
   }
   /* MethodBindT<long>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<long>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      long *plVar1;
      long lVar2;
      char *pcVar3;
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar4;
      long in_FS_OFFSET;
      long local_48;
      long local_40;
      char *local_38;
      undefined8 local_30;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar4 = param_2[0x23];
            if (pVVar4 == (Variant*)0x0) {
               pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }
         } else {
            pVVar4 = param_2[1] + 0x20;
         }
         if (local_38 == *(char**)pVVar4) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0;
            local_30 = 0x35;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
            pcVar3 = local_38;
            if (local_38 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_38 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_38 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
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
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_00106b55;
         }
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00106999. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ));
         return;
      }
      LAB_00106b55:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<long>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<long>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      code *UNRECOVERED_JUMPTABLE;
      long *plVar3;
      long in_FS_OFFSET;
      long local_48;
      long local_40;
      char *local_38;
      undefined8 local_30;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar3 = (long*)param_2[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }
         } else {
            plVar3 = (long*)( (long)param_2[1] + 0x20 );
         }
         if (local_38 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0;
            local_30 = 0x35;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
            pcVar2 = local_38;
            if (local_38 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_38 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_38 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_40;
            if (local_40 != 0) {
               LOCK();
               plVar3 = (long*)( local_40 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_40 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_00106d85;
         }
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00106bc8. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }
      LAB_00106d85:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<long, String const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<long,String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      long *plVar1;
      long lVar2;
      char *pcVar3;
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar4;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar4 = param_2[0x23];
            if (pVVar4 == (Variant*)0x0) {
               pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }
         } else {
            pVVar4 = param_2[1] + 0x20;
         }
         if (local_48 == *(char**)pVVar4) {
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
            pcVar3 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
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
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_00106f95;
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
         /* WARNING: Could not recover jumptable at 0x00106dfa. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8);
         return;
      }
      LAB_00106f95:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<long, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<long,String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      code *UNRECOVERED_JUMPTABLE;
      long *plVar3;
      long in_FS_OFFSET;
      long local_48;
      long local_40;
      char *local_38;
      undefined8 local_30;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar3 = (long*)param_2[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }
         } else {
            plVar3 = (long*)( (long)param_2[1] + 0x20 );
         }
         if (local_38 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0;
            local_30 = 0x35;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
            pcVar2 = local_38;
            if (local_38 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_38 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_38 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_40;
            if (local_40 != 0) {
               LOCK();
               plVar3 = (long*)( local_40 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_40 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_001071bd;
         }
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         for (int i = 0; i < 3; i++) {
            /* WARNING: Load size is inaccurate */
         }
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ));
         return;
      }
      LAB_001071bd:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindTRC<bool, long>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool,long>::validated_call(MethodBindTRC<bool,long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      Variant VVar3;
      code *pcVar4;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00107219;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      VVar3 = ( Variant )(*pcVar4)(param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ));
      param_3[8] = VVar3;
      LAB_00107219:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool, long>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool,long>::ptrcall(MethodBindTRC<bool,long> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      undefined1 uVar3;
      code *pcVar4;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00107438;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      /* WARNING: Load size is inaccurate */
      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ), **param_2);
      *(undefined1*)param_3 = uVar3;
      LAB_00107438:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<long>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      char *pcVar2;
      long lVar3;
      long *plVar5;
      undefined4 in_register_00000014;
      long *plVar6;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      Variant *pVVar4;
      plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar6[1] == 0) {
            plVar5 = (long*)plVar6[0x23];
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
            }
         } else {
            plVar5 = (long*)( plVar6[1] + 0x20 );
         }
         if (local_58 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC68, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            pcVar2 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar6 = (long*)( local_58 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar3 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar6 = (long*)( local_60 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00107760;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar4 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar4 & 1 ) != 0) {
               pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
            }
            lVar3 = ( *(code*)pVVar4 )();
            Variant::Variant((Variant*)local_48, lVar3);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00107760:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<long>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<long>::validated_call(MethodBindTR<long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      undefined8 uVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
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
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001079c2;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined8*)( param_3 + 8 ) = uVar3;
      LAB_001079c2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<long>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<long>::ptrcall(MethodBindTR<long> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      undefined8 uVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00107bc1;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined8*)param_3 = uVar3;
      LAB_00107bc1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<long, String const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<long,String_const&>::validated_call(MethodBindTRC<long,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      code *pcVar3;
      undefined8 uVar4;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00107dba;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar4 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      *(undefined8*)( param_3 + 8 ) = uVar4;
      LAB_00107dba:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<long, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<long,String_const&>::ptrcall(MethodBindTRC<long,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      undefined8 uVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00107fd6;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ), *param_2);
      *(undefined8*)param_3 = uVar3;
      LAB_00107fd6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String, long>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<String,long>::validated_call(MethodBindTRC<String,long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      code *pcVar3;
      long *plVar4;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
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
         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_48 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar4 = (long*)( local_50 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_0010824c;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ));
      if (*(char**)( param_3 + 8 ) != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
      }
      pcVar2 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_48 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
      }
      LAB_0010824c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String, long>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<String,long>::ptrcall(MethodBindTRC<String,long> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      code *pcVar3;
      long *plVar4;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
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
         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_48 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar4 = (long*)( local_50 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001084ba;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      /* WARNING: Load size is inaccurate */
      ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
      /* WARNING: Load size is inaccurate */
      if (*param_3 != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
      }
      pcVar2 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_48 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
      }
      LAB_001084ba:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool, long>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<bool,long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      code *pcVar2;
      undefined8 uVar3;
      char *pcVar4;
      char cVar5;
      bool bVar6;
      undefined4 uVar7;
      long lVar8;
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
      long local_60;
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
         } else {
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
            _err_print_error(&_LC68, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
            pcVar4 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar11 = (long*)( local_58 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }
            }
            lVar8 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar11 = (long*)( local_60 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_001087c0;
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
            if (in_R8D != 1) goto LAB_00108800;
            LAB_001087f0:pVVar12 = *(Variant**)param_4;
         } else {
            lVar8 = *(long*)( pVVar12 + -8 );
            if ((int)lVar8 < (int)( in_R8D ^ 1 )) {
               LAB_00108800:uVar7 = 4;
               goto LAB_001087b5;
            }
            if (in_R8D == 1) goto LAB_001087f0;
            lVar10 = (long)( (int)lVar8 + -1 );
            if (lVar8 <= lVar10) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar8, "p_index", "size()", "", false, true);
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
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
         uVar3 = _LC69;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar3;
         }
         lVar8 = Variant::operator_cast_to_long(pVVar12);
         bVar6 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), lVar8);
         Variant::Variant((Variant*)local_48, bVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      } else {
         uVar7 = 3;
         LAB_001087b5:*in_R9 = uVar7;
         in_R9[2] = 1;
      }
      LAB_001087c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String, long>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<String,long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      code *pcVar2;
      undefined8 uVar3;
      char *pcVar4;
      char cVar5;
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
      long local_60;
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
            _err_print_error(&_LC68, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
            pcVar4 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar10 = (long*)( local_58 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }
            }
            lVar7 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar10 = (long*)( local_60 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00108bb0;
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
            if (in_R8D != 1) goto LAB_00108bf0;
            LAB_00108be0:pVVar11 = *(Variant**)param_4;
         } else {
            lVar7 = *(long*)( pVVar11 + -8 );
            if ((int)lVar7 < (int)( in_R8D ^ 1 )) {
               LAB_00108bf0:uVar6 = 4;
               goto LAB_00108ba5;
            }
            if (in_R8D == 1) goto LAB_00108be0;
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
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
         uVar3 = _LC69;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar3;
         }
         lVar7 = Variant::operator_cast_to_long(pVVar11);
         ( *(code*)pVVar12 )((String*)&local_58, (Variant*)( (long)plVar10 + (long)pVVar1 ), lVar7);
         Variant::Variant((Variant*)local_48, (String*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         pcVar4 = local_58;
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_58 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
      } else {
         uVar6 = 3;
         LAB_00108ba5:*in_R9 = uVar6;
         in_R9[2] = 1;
      }
      LAB_00108bb0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<long, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<long,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      code *pcVar2;
      undefined8 uVar3;
      char *pcVar4;
      char cVar5;
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
      long local_60;
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
            _err_print_error(&_LC68, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
            pcVar4 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar10 = (long*)( local_58 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }
            }
            lVar7 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar10 = (long*)( local_60 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00108fa0;
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
            if (in_R8D != 1) goto LAB_00108fe0;
            LAB_00108fd0:pVVar11 = *(Variant**)param_4;
         } else {
            lVar7 = *(long*)( pVVar11 + -8 );
            if ((int)lVar7 < (int)( in_R8D ^ 1 )) {
               LAB_00108fe0:uVar6 = 4;
               goto LAB_00108f95;
            }
            if (in_R8D == 1) goto LAB_00108fd0;
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
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
         uVar3 = _LC71;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar3;
         }
         Variant::operator_cast_to_String((Variant*)&local_58);
         lVar7 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_58);
         Variant::Variant((Variant*)local_48, lVar7);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         pcVar4 = local_58;
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_58 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
      } else {
         uVar6 = 3;
         LAB_00108f95:*in_R9 = uVar6;
         in_R9[2] = 1;
      }
      LAB_00108fa0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_with_variant_args_dv<__UnexistingClass, long>(__UnexistingClass*, void
   (__UnexistingClass::*)(long), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */
   void call_with_variant_args_dv<__UnexistingClass,long>(__UnexistingClass *param_1, _func_void_long *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_0010931d;
      }
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_00109380;
      } else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_00109380:uVar6 = 4;
            LAB_0010931d:*(undefined4*)param_6 = uVar6;
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
            goto LAB_0010929b;
         }
      }
      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0010929b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_long**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC69;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }
      Variant::operator_cast_to_long(this);
      /* WARNING: Could not recover jumptable at 0x001092f7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )((long)( param_1 + (long)param_3 ));
      return;
   }
   /* MethodBindT<long>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      long lVar1;
      char *pcVar2;
      long *plVar3;
      undefined4 in_register_00000014;
      __UnexistingClass *p_Var4;
      CallError *in_R8;
      Vector *in_R9;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var4 + 8 ) == 0) {
            plVar3 = *(long**)( p_Var4 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
            }
         } else {
            plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
         }
         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
            _err_print_error(&_LC68, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_48 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar3 = (long*)( local_50 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_00109476;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      call_with_variant_args_dv<__UnexistingClass,long>(p_Var4, (_func_void_long*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00109476:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_with_variant_args_dv<__UnexistingClass, long, String const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(long, String const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,long,String_const&>(__UnexistingClass *param_1, _func_void_long_String_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
      long lVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      int iVar6;
      undefined4 uVar7;
      String *pSVar8;
      undefined4 in_register_0000000c;
      long *plVar9;
      long lVar10;
      Variant *this;
      uint uVar11;
      int iVar12;
      undefined4 *puVar13;
      long in_FS_OFFSET;
      long in_stack_00000008;
      long local_48;
      long local_40;
      plVar9 = (long*)CONCAT44(in_register_0000000c, param_4);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar11 = (uint)param_5;
      if (uVar11 < 3) {
         lVar1 = *(long*)( in_stack_00000008 + 8 );
         iVar6 = 2 - uVar11;
         if (lVar1 == 0) {
            if (iVar6 != 0) goto LAB_001097e8;
            this(Variant * ) * plVar9;
            LAB_0010983d:puVar13 = (undefined4*)plVar9[1];
         } else {
            lVar2 = *(long*)( lVar1 + -8 );
            iVar12 = (int)lVar2;
            if (iVar12 < iVar6) {
               LAB_001097e8:uVar7 = 4;
               goto LAB_001097ed;
            }
            if (uVar11 == 0) {
               lVar10 = (long)( iVar12 + -2 );
               if (lVar2 <= lVar10) goto LAB_00109858;
               this(Variant * )(lVar1 + lVar10 * 0x18);
            } else {
               this(Variant * ) * plVar9;
               if (uVar11 == 2) goto LAB_0010983d;
            }
            lVar10 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar6 ) );
            if (lVar2 <= lVar10) {
               LAB_00109858:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            puVar13 = (undefined4*)( lVar1 + lVar10 * 0x18 );
         }
         *(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_long_String_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }
         cVar5 = Variant::can_convert_strict(*puVar13, 4);
         uVar4 = _LC73;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_48);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC69;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }
         pSVar8 = (String*)Variant::operator_cast_to_long(this);
         ( *param_2 )((long)( param_1 + (long)param_3 ), pSVar8);
         lVar1 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar9 = (long*)( local_48 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }
         }
      } else {
         uVar7 = 3;
         LAB_001097ed:*(undefined4*)param_6 = uVar7;
         *(undefined4*)( param_6 + 8 ) = 2;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<long, String const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindT<long,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      long lVar1;
      char *pcVar2;
      long *plVar3;
      undefined4 in_register_00000014;
      __UnexistingClass *p_Var4;
      CallError *in_R8;
      Vector *in_R9;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var4 + 8 ) == 0) {
            plVar3 = *(long**)( p_Var4 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
            }
         } else {
            plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
         }
         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
            _err_print_error(&_LC68, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_48 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar3 = (long*)( local_50 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_001098f6;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      call_with_variant_args_dv<__UnexistingClass,long,String_const&>(p_Var4, (_func_void_long_String_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_001098f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info_helper<long>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<long>(int param_1, int *param_2, PropertyInfo *param_3) {
      long *plVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined8 uVar6;
      long lVar7;
      int iVar8;
      long in_FS_OFFSET;
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
      iVar8 = *param_2;
      if (iVar8 != param_1) goto LAB_00109b35;
      local_78 = 0;
      local_68 = &_LC5;
      local_80 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00109c28:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00109c28;
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
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)param_3 = local_68._0_4_;
      lVar2 = *(long*)( param_3 + 8 );
      if (lVar2 != local_60._0_8_) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_3 + 8 );
               *(undefined8*)( param_3 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(undefined8*)( param_3 + 8 ) = local_60._0_8_;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_60._8_8_;
         local_60 = auVar5 << 0x40;
      }
      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar6 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar6;
      }
      lVar7 = local_48;
      *(int*)( param_3 + 0x18 ) = local_50;
      lVar2 = *(long*)( param_3 + 0x20 );
      if (lVar2 == local_48) {
         *(undefined4*)( param_3 + 0x28 ) = local_40;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
      } else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_3 + 0x20 );
               *(undefined8*)( param_3 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(long*)( param_3 + 0x20 ) = local_48;
         *(undefined4*)( param_3 + 0x28 ) = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar6 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar6 + -0x10 ), false);
         }
      }
      iVar8 = *param_2;
      LAB_00109b35:*param_2 = iVar8 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTRC<bool, long>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<bool,long>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      long lVar3;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      long local_78;
      ulong local_70;
      undefined *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_68 = (undefined*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_70 = local_70 & 0xffffffff00000000;
         local_60 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<long>(0, (int*)&local_70, (PropertyInfo*)&local_68);
         *puVar4 = local_68._0_4_;
         *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
         *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
         puVar4[6] = (undefined4)local_50;
         *(undefined8*)( puVar4 + 8 ) = local_48;
         puVar4[10] = local_40;
         goto LAB_00109e95;
      }
      local_70 = 0;
      local_68 = &_LC5;
      local_78 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      *puVar4 = 1;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar4[10] = 6;
         LAB_00109fa7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
         lVar3 = local_78;
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
         puVar4[10] = 6;
         if (puVar4[6] != 0x11) goto LAB_00109fa7;
         StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
         if (*(undefined**)( puVar4 + 4 ) == local_68) {
            lVar3 = local_78;
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
               lVar3 = local_78;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar4 + 4 ) = local_68;
            lVar3 = local_78;
         }
      }
      local_78 = lVar3;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      LAB_00109e95:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String, long>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<String,long>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      long lVar3;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      long local_78;
      ulong local_70;
      undefined *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_68 = (undefined*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_70 = local_70 & 0xffffffff00000000;
         local_60 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<long>(0, (int*)&local_70, (PropertyInfo*)&local_68);
         *puVar4 = local_68._0_4_;
         *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
         *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
         puVar4[6] = (undefined4)local_50;
         *(undefined8*)( puVar4 + 8 ) = local_48;
         puVar4[10] = local_40;
         goto LAB_0010a095;
      }
      local_70 = 0;
      local_68 = &_LC5;
      local_78 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      *puVar4 = 4;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar4[10] = 6;
         LAB_0010a1a7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
         lVar3 = local_78;
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
         puVar4[10] = 6;
         if (puVar4[6] != 0x11) goto LAB_0010a1a7;
         StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
         if (*(undefined**)( puVar4 + 4 ) == local_68) {
            lVar3 = local_78;
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
               lVar3 = local_78;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar4 + 4 ) = local_68;
            lVar3 = local_78;
         }
      }
      local_78 = lVar3;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      LAB_0010a095:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
      long *plVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined8 uVar6;
      long lVar7;
      int iVar8;
      long in_FS_OFFSET;
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
      iVar8 = *param_2;
      if (iVar8 != param_1) goto LAB_0010a225;
      local_78 = 0;
      local_68 = &_LC5;
      local_80 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010a318:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010a318;
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
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)param_3 = local_68._0_4_;
      lVar2 = *(long*)( param_3 + 8 );
      if (lVar2 != local_60._0_8_) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_3 + 8 );
               *(undefined8*)( param_3 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(undefined8*)( param_3 + 8 ) = local_60._0_8_;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_60._8_8_;
         local_60 = auVar5 << 0x40;
      }
      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar6 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar6;
      }
      lVar7 = local_48;
      *(int*)( param_3 + 0x18 ) = local_50;
      lVar2 = *(long*)( param_3 + 0x20 );
      if (lVar2 == local_48) {
         *(undefined4*)( param_3 + 0x28 ) = local_40;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
      } else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_3 + 0x20 );
               *(undefined8*)( param_3 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(long*)( param_3 + 0x20 ) = local_48;
         *(undefined4*)( param_3 + 0x28 ) = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar6 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar6 + -0x10 ), false);
         }
      }
      iVar8 = *param_2;
      LAB_0010a225:*param_2 = iVar8 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTRC<long, String const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<long,String_const&>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      long lVar3;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      long local_78;
      ulong local_70;
      undefined *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_68 = (undefined*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_70 = local_70 & 0xffffffff00000000;
         local_60 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<String_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
         *puVar4 = local_68._0_4_;
         *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
         *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
         puVar4[6] = (undefined4)local_50;
         *(undefined8*)( puVar4 + 8 ) = local_48;
         puVar4[10] = local_40;
         goto LAB_0010a585;
      }
      local_70 = 0;
      local_68 = &_LC5;
      local_78 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      *puVar4 = 2;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar4[10] = 6;
         LAB_0010a697:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
         lVar3 = local_78;
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
         puVar4[10] = 6;
         if (puVar4[6] != 0x11) goto LAB_0010a697;
         StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
         if (*(undefined**)( puVar4 + 4 ) == local_68) {
            lVar3 = local_78;
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
               lVar3 = local_78;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar4 + 4 ) = local_68;
            lVar3 = local_78;
         }
      }
      local_78 = lVar3;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      LAB_0010a585:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<long, String const&>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<long,String_const&>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined8 uVar6;
      long lVar7;
      int iVar8;
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar9;
      long in_FS_OFFSET;
      int local_84;
      long local_80;
      long local_78;
      long local_70;
      undefined *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      pPVar9 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar9 = 0;
      iVar8 = 1;
      *(undefined4*)( pPVar9 + 0x18 ) = 0;
      *(undefined8*)( pPVar9 + 0x20 ) = 0;
      *(undefined4*)( pPVar9 + 0x28 ) = 6;
      local_84 = 0;
      *(undefined1(*) [16])( pPVar9 + 8 ) = (undefined1[16])0x0;
      if (in_EDX != 0) goto LAB_0010a748;
      local_78 = 0;
      local_68 = &_LC5;
      local_80 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010a848:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010a848;
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
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)pPVar9 = local_68._0_4_;
      lVar2 = *(long*)( pPVar9 + 8 );
      if (lVar2 != local_60._0_8_) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( pPVar9 + 8 );
               *(undefined8*)( pPVar9 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(undefined8*)( pPVar9 + 8 ) = local_60._0_8_;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_60._8_8_;
         local_60 = auVar5 << 0x40;
      }
      if (*(long*)( pPVar9 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar6 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( pPVar9 + 0x10 ) = uVar6;
      }
      lVar7 = local_48;
      *(int*)( pPVar9 + 0x18 ) = local_50;
      lVar2 = *(long*)( pPVar9 + 0x20 );
      if (lVar2 == local_48) {
         *(undefined4*)( pPVar9 + 0x28 ) = local_40;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
      } else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( pPVar9 + 0x20 );
               *(undefined8*)( pPVar9 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(long*)( pPVar9 + 0x20 ) = local_48;
         *(undefined4*)( pPVar9 + 0x28 ) = local_40;
      }
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar6 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar6 + -0x10 ), false);
         }
      }
      iVar8 = local_84 + 1;
      LAB_0010a748:local_84 = iVar8;
      call_get_argument_type_info_helper<String_const&>(in_EDX, &local_84, pPVar9);
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return pPVar9;
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<long>::~MethodBindT() */
   void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<String, long>::~MethodBindTRC() */
   void MethodBindTRC<String,long>::~MethodBindTRC(MethodBindTRC<String,long> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<long, String const&>::~MethodBindT() */
   void MethodBindT<long,String_const&>::~MethodBindT(MethodBindT<long,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool, long>::~MethodBindTRC() */
   void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<long>::~MethodBindTR() */
   void MethodBindTR<long>::~MethodBindTR(MethodBindTR<long> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<long, String const&>::~MethodBindTRC() */
   void MethodBindTRC<long,String_const&>::~MethodBindTRC(MethodBindTRC<long,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}

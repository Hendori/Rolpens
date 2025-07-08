/* AStar3D::get_point_count() const */undefined4 AStar3D::get_point_count(AStar3D *this) {
   return *(undefined4*)( this + 0x1ac );
}
/* AStar3D::get_point_capacity() const */undefined4 AStar3D::get_point_capacity(AStar3D *this) {
   return *(undefined4*)( this + 0x1a8 );
}
/* AStar2D::get_point_count() const */undefined4 AStar2D::get_point_count(AStar2D *this) {
   return *(undefined4*)( this + 0x32c );
}
/* AStar2D::get_point_capacity() const */undefined4 AStar2D::get_point_capacity(AStar2D *this) {
   return *(undefined4*)( this + 0x328 );
}
/* LocalVector<AStar3D::Point*, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */void LocalVector<AStar3D::Point*,unsigned_int,false,false>::resize(uint param_1) {
   code *pcVar1;
   _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
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
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
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
   __n = lVar2 * 0xc;
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
/* AStar3D::get_closest_point(Vector3 const&, bool) const */long AStar3D::get_closest_point(AStar3D *this, Vector3 *param_1, bool param_2) {
   ulong uVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   ulong uVar7;
   long lVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   uVar3 = 0;
   do {
      uVar7 = uVar3;
      if (*(uint*)( this + 0x1a8 ) == uVar7) {
         return -1;
      }

      uVar3 = uVar7 + 1;
   }
 while ( *(int*)( *(long*)( this + 0x1a0 ) + uVar7 * 4 ) == 0 );
   iVar6 = (int)uVar7;
   lVar4 = uVar7 * 8;
   lVar8 = -1;
   fVar12 = _LC11;
   do {
      uVar5 = iVar6 + 1;
      lVar2 = *(long*)( lVar4 + *(long*)( this + 400 ) );
      if (( ( ( param_2 ) || ( *(char*)( lVar2 + 0x18 ) != '\0' ) ) && ( fVar11 = *(float*)( lVar2 + 0xc ) - *(float*)( param_1 + 4 ) ),fVar9 = *(float*)( lVar2 + 8 ) - *(float*)param_1,fVar10 = *(float*)( lVar2 + 0x10 ) - *(float*)( param_1 + 8 ),fVar9 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10,fVar9 <= fVar12 )) {
         lVar8 = *(long*)( *(long*)( this + 0x198 ) + lVar4 );
         fVar12 = fVar9;
      }

      uVar7 = (ulong)uVar5;
      uVar3 = (ulong)uVar5;
      while (true) {
         if (*(uint*)( this + 0x1a8 ) <= uVar5) {
            return lVar8;
         }

         uVar1 = uVar3 + 1;
         if (*(int*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 ) != 0) break;
         uVar5 = (uint)uVar1;
         uVar7 = uVar1 & 0xffffffff;
         uVar3 = uVar1;
      }
;
      lVar4 = uVar3 << 3;
      iVar6 = (int)uVar7;
   }
 while ( true );
}
/* AStar2D::get_closest_point(Vector2 const&, bool) const */void AStar2D::get_closest_point(AStar2D *this, Vector2 *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_20;
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = *(undefined8*)param_1;
   local_18 = 0;
   AStar3D::get_closest_point((AStar3D*)( this + 0x180 ), (Vector3*)&local_20, param_2);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::clear() */void AStar3D::clear(AStar3D *this) {
   void *pvVar1;
   long lVar2;
   ulong uVar3;
   ulong uVar4;
   undefined8 *puVar5;
   long lVar6;
   uint uVar7;
   *(undefined8*)( this + 0x180 ) = 0;
   uVar3 = 0;
   do {
      uVar4 = uVar3;
      if (*(uint*)( this + 0x1a8 ) == uVar4) {
         LAB_00100640:if (( *(long*)( this + 0x1b0 ) != 0 ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) != 0) {
               memset(*(void**)( this + 0x1c8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) * 4);
            }

            *(undefined4*)( this + 0x1d4 ) = 0;
         }

         if (*(int*)( this + 0x1a8 ) != 0) {
            lVar2 = *(long*)( this + 0x1a0 );
            lVar6 = 0;
            do {
               if (*(int*)( lVar2 + lVar6 * 4 ) != 0) {
                  *(undefined4*)( lVar2 + lVar6 * 4 ) = 0;
               }

               lVar6 = lVar6 + 1;
            }
 while ( (uint)lVar6 < *(uint*)( this + 0x1a8 ) );
         }

         *(undefined4*)( this + 0x1ac ) = 0;
         return;
      }

      uVar3 = uVar4 + 1;
   }
 while ( *(int*)( *(long*)( this + 0x1a0 ) + uVar4 * 4 ) == 0 );
   uVar7 = (uint)uVar4;
   puVar5 = (undefined8*)( *(long*)( this + 400 ) + uVar4 * 8 );
   do {
      uVar7 = uVar7 + 1;
      pvVar1 = (void*)*puVar5;
      Memory::free_static(*(void**)( (long)pvVar1 + 0x48 ), false);
      Memory::free_static(*(void**)( (long)pvVar1 + 0x40 ), false);
      Memory::free_static(*(void**)( (long)pvVar1 + 0x50 ), false);
      Memory::free_static(*(void**)( (long)pvVar1 + 0x28 ), false);
      Memory::free_static(*(void**)( (long)pvVar1 + 0x20 ), false);
      Memory::free_static(*(void**)( (long)pvVar1 + 0x30 ), false);
      Memory::free_static(pvVar1, false);
      uVar3 = (ulong)uVar7;
      while (true) {
         if (*(uint*)( this + 0x1a8 ) <= uVar7) goto LAB_00100640;
         if (*(int*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 ) != 0) break;
         uVar7 = ( uint )(uVar3 + 1);
         uVar3 = uVar3 + 1;
      }
;
      puVar5 = (undefined8*)( *(long*)( this + 400 ) + uVar3 * 8 );
   }
 while ( true );
}
/* AStar3D::~AStar3D() */void AStar3D::~AStar3D(AStar3D *this) {
   void *pvVar1;
   *(undefined***)this = &PTR__initialize_classv_00128290;
   clear(this);
   if (StringName::configured != '\0') {
      if (*(long*)( this + 0x1f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010073a;
      }

      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010073a:pvVar1 = *(void**)( this + 0x1b0 );
   if (pvVar1 != (void*)0x0) {
      if (*(int*)( this + 0x1d4 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x1c8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0x1d4 ) = 0;
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(*(void**)( this + 0x1c0 ), false);
      Memory::free_static(*(void**)( this + 0x1b8 ), false);
      Memory::free_static(*(void**)( this + 0x1c8 ), false);
   }

   Memory::free_static(*(void**)( this + 0x198 ), false);
   Memory::free_static(*(void**)( this + 400 ), false);
   Memory::free_static(*(void**)( this + 0x1a0 ), false);
   *(undefined***)this = &PTR__initialize_classv_00128130;
   Object::~Object((Object*)this);
   return;
}
/* AStar3D::~AStar3D() */void AStar3D::~AStar3D(AStar3D *this) {
   ~AStar3D(this)
   ;;
   operator_delete(this, 0x210);
   return;
}
/* AStar2D::clear() */void AStar2D::clear(AStar2D *this) {
   AStar3D::clear((AStar3D*)( this + 0x180 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AStar3D::get_closest_position_in_segment(Vector3 const&) const */undefined1  [16] __thiscallAStar3D::get_closest_position_in_segment(AStar3D *this, Vector3 *param_1) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   long *plVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   long in_FS_OFFSET;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   undefined1 auVar23[16];
   float local_7c;
   undefined8 local_70;
   if (*(int*)( this + 0x1d4 ) == 0) {
      local_70 = 0;
      fVar22 = 0.0;
      LAB_00100870:if (*(long*)( in_FS_OFFSET + 0x28 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      auVar23._8_4_ = fVar22;
      auVar23._0_8_ = local_70;
      auVar23._12_4_ = 0;
      return auVar23;
   }

   uVar1 = *(uint*)( this + 0x1a8 );
   uVar5 = (ulong)uVar1;
   iVar10 = 0;
   local_70 = 0;
   lVar2 = *(long*)( this + 0x1a0 );
   plVar7 = *(long**)( this + 0x1b0 );
   local_7c = _LC11;
   fVar22 = 0.0;
   do {
      uVar3 = *plVar7 * 0x3ffff - 1;
      uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
      uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
      uVar3 = uVar3 >> 0x16 ^ uVar3;
      uVar6 = uVar3 & 0xffffffff;
      if ((int)uVar3 == 0) {
         uVar6 = 1;
      }

      uVar3 = uVar6 % uVar5;
      uVar8 = *(uint*)( lVar2 + uVar3 * 4 );
      if (uVar8 != 0) {
         uVar9 = 0;
         do {
            if (( (uint)uVar6 == uVar8 ) && ( *plVar7 == *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) )) {
               lVar11 = *(long*)( *(long*)( this + 400 ) + uVar3 * 8 );
               goto LAB_001009a6;
            }

            uVar9 = uVar9 + 1;
            uVar3 = ( ulong )((int)uVar3 + 1) % uVar5;
            uVar8 = *(uint*)( lVar2 + uVar3 * 4 );
         }
 while ( ( uVar8 != 0 ) && ( uVar9 <= ( ( uVar1 + (int)uVar3 ) - uVar8 % uVar1 ) % uVar1 ) );
      }

      lVar11 = 0;
      LAB_001009a6:uVar3 = plVar7[1] * 0x3ffff - 1;
      uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
      uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
      uVar3 = uVar3 >> 0x16 ^ uVar3;
      uVar6 = uVar3 & 0xffffffff;
      if ((int)uVar3 == 0) {
         uVar6 = 1;
      }

      uVar3 = uVar6 % uVar5;
      uVar8 = *(uint*)( lVar2 + uVar3 * 4 );
      if (uVar8 != 0) {
         uVar9 = 0;
         do {
            if (( (uint)uVar6 == uVar8 ) && ( plVar7[1] == *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) )) {
               lVar4 = *(long*)( *(long*)( this + 400 ) + uVar3 * 8 );
               goto LAB_00100a74;
            }

            uVar9 = uVar9 + 1;
            uVar3 = ( ulong )((int)uVar3 + 1) % uVar5;
            uVar8 = *(uint*)( lVar2 + uVar3 * 4 );
         }
 while ( ( uVar8 != 0 ) && ( uVar9 <= ( ( uVar1 + (int)uVar3 ) - uVar8 % uVar1 ) % uVar1 ) );
      }

      lVar4 = 0;
      LAB_00100a74:if (( *(char*)( lVar11 + 0x18 ) != '\0' ) && ( *(char*)( lVar4 + 0x18 ) != '\0' )) {
         fVar13 = *(float*)( lVar11 + 8 );
         fVar16 = *(float*)( lVar11 + 0xc );
         fVar12 = *(float*)( lVar11 + 0x10 );
         fVar20 = *(float*)( lVar4 + 8 ) - fVar13;
         fVar21 = *(float*)( lVar4 + 0xc ) - fVar16;
         fVar19 = *(float*)( lVar4 + 0x10 ) - fVar12;
         fVar15 = fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19;
         fVar18 = fVar12;
         fVar17 = fVar13;
         fVar14 = fVar16;
         if (( _LC15 <= fVar15 ) && ( ( fVar15 = ( ( *(float*)( param_1 + 4 ) - fVar16 ) * fVar21 + ( *(float*)param_1 - fVar13 ) * fVar20 + ( *(float*)( param_1 + 8 ) - fVar12 ) * fVar19 ) / fVar15 ),0.0 < fVar15 && ( fVar18 = *(float*)( lVar4 + 0x10 ) ),fVar17 = *(float*)( lVar4 + 8 ),fVar14 = *(float*)( lVar4 + 0xc ),fVar15 < __LC16 )) {
            fVar18 = fVar12 + fVar19 * fVar15;
            fVar17 = fVar13 + fVar15 * fVar20;
            fVar14 = fVar16 + fVar15 * fVar21;
         }

         fVar13 = fVar14 - *(float*)( param_1 + 4 );
         fVar12 = fVar17 - *(float*)param_1;
         fVar16 = fVar18 - *(float*)( param_1 + 8 );
         fVar12 = fVar12 * fVar12 + fVar13 * fVar13 + fVar16 * fVar16;
         if (fVar12 < local_7c) {
            local_70 = CONCAT44(fVar14, fVar17);
            fVar22 = fVar18;
            local_7c = fVar12;
         }

      }

      iVar10 = iVar10 + 1;
      if (*(int*)( this + 0x1d4 ) <= iVar10) goto LAB_00100870;
      plVar7 = plVar7 + 3;
   }
 while ( true );
}
/* AStar2D::get_closest_position_in_segment(Vector2 const&) const */void AStar2D::get_closest_position_in_segment(AStar2D *this, Vector2 *param_1) {
   long in_FS_OFFSET;
   undefined8 local_20;
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = *(undefined8*)param_1;
   local_18 = 0;
   AStar3D::get_closest_position_in_segment((AStar3D*)( this + 0x180 ), (Vector3*)&local_20);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::has_point(long) const */undefined8 AStar3D::has_point(AStar3D *this, long param_1) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 0x1a8 );
   uVar2 = param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( uVar3 == (uint)uVar5 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar2 * 8 ) == param_1 )) {
            return 1;
         }

         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   return 0;
}
/* AStar2D::has_point(long) const */undefined8 AStar2D::has_point(AStar2D *this, long param_1) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 0x328 );
   uVar2 = param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 800 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( uVar3 == (uint)uVar5 ) && ( param_1 == *(long*)( *(long*)( this + 0x318 ) + uVar2 * 8 ) )) {
            return 1;
         }

         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 800 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   return 0;
}
/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */void CowData<Vector2>::_ref(CowData<Vector2> *this, CowData *param_1) {
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
/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */void CowData<Vector3>::_ref(CowData<Vector3> *this, CowData *param_1) {
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
/* AStar3D::get_available_point_id() const */long AStar3D::get_available_point_id(AStar3D *this) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   ulong uVar8;
   ulong uVar9;
   lVar5 = *(long*)( this + 0x180 );
   uVar1 = *(uint*)( this + 0x1a8 );
   uVar4 = (ulong)uVar1;
   lVar2 = *(long*)( this + 0x1a0 );
   uVar3 = lVar5 * 0x3ffff - 1;
   uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
   uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
   uVar3 = uVar3 >> 0x16 ^ uVar3;
   uVar8 = uVar3 & 0xffffffff;
   if ((int)uVar3 == 0) {
      uVar8 = 1;
   }

   uVar3 = uVar8 % uVar4;
   uVar6 = *(uint*)( lVar2 + uVar3 * 4 );
   if (uVar6 != 0) {
      uVar7 = 0;
      do {
         if (( (uint)uVar8 == uVar6 ) && ( lVar5 == *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) )) {
            lVar5 = lVar5 + 1;
            uVar3 = lVar5 * 0x3ffff - 1;
            while (true) {
               uVar8 = ( uVar3 >> 0x1f ^ uVar3 ) * 0x15;
               uVar8 = ( uVar8 ^ uVar8 >> 0xb ) * 0x41;
               uVar8 = uVar8 >> 0x16 ^ uVar8;
               uVar9 = uVar8 & 0xffffffff;
               if ((int)uVar8 == 0) {
                  uVar9 = 1;
               }

               uVar8 = uVar9 % uVar4;
               uVar6 = *(uint*)( lVar2 + uVar8 * 4 );
               if (uVar6 == 0) break;
               uVar7 = 0;
               while (( uVar6 != (uint)uVar9 || ( *(long*)( *(long*)( this + 0x198 ) + uVar8 * 8 ) != lVar5 ) )) {
                  uVar7 = uVar7 + 1;
                  uVar8 = ( ulong )((int)uVar8 + 1) % uVar4;
                  uVar6 = *(uint*)( lVar2 + uVar8 * 4 );
                  if (( uVar6 == 0 ) || ( ( ( uVar1 + (int)uVar8 ) - uVar6 % uVar1 ) % uVar1 < uVar7 )) goto LAB_001010f0;
               }
;
               lVar5 = lVar5 + 1;
               uVar3 = uVar3 + 0x3ffff;
            }
;
            LAB_001010f0:*(long*)( this + 0x180 ) = lVar5;
            return lVar5;
         }

         uVar7 = uVar7 + 1;
         uVar3 = ( ulong )((int)uVar3 + 1) % uVar4;
         uVar6 = *(uint*)( lVar2 + uVar3 * 4 );
      }
 while ( ( uVar6 != 0 ) && ( uVar7 <= ( ( uVar1 + (int)uVar3 ) - uVar6 % uVar1 ) % uVar1 ) );
   }

   return lVar5;
}
/* AStar2D::get_available_point_id() const */void AStar2D::get_available_point_id(AStar2D *this) {
   AStar3D::get_available_point_id((AStar3D*)( this + 0x180 ));
   return;
}
/* CowData<long>::_ref(CowData<long> const&) [clone .part.0] */void CowData<long>::_ref(CowData<long> *this, CowData *param_1) {
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
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
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
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

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
/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( param_1 + 8 );
   *(undefined4*)this = *(undefined4*)param_1;
   lVar2 = *(long*)( this + 8 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 8 );
         }
 else {
            *(undefined8*)( this + 8 ) = 0;
            lVar3 = *(long*)( param_1 + 8 );
         }

      }

      *(long*)( this + 8 ) = lVar3;
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      StringName::unref();
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   lVar3 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   lVar2 = *(long*)( this + 0x20 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 0x20 );
         }
 else {
            *(undefined8*)( this + 0x20 ) = 0;
            lVar3 = *(long*)( param_1 + 0x20 );
         }

      }

      *(long*)( this + 0x20 ) = lVar3;
      *(undefined8*)( param_1 + 0x20 ) = 0;
   }

   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* AStar3D::_solve(AStar3D::Point*, AStar3D::Point*, bool) */ulong AStar3D::_solve(AStar3D *this, Point *param_1, Point *param_2, bool param_3) {
   ulong uVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   code *pcVar6;
   long *plVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   long *plVar12;
   undefined7 in_register_00000009;
   long lVar13;
   ulong uVar14;
   uint uVar15;
   long lVar16;
   uint uVar17;
   long lVar18;
   ulong uVar19;
   byte bVar20;
   long lVar21;
   uint uVar22;
   int iVar23;
   bool bVar24;
   undefined4 uVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   uint local_40;
   uVar19 = CONCAT71(in_register_00000009, param_3) & 0xffffffff;
   *(long*)( this + 0x188 ) = *(long*)( this + 0x188 ) + 1;
   *(undefined8*)( this + 0x1d8 ) = 0;
   bVar20 = (byte)uVar19 | (byte)param_2[0x18];
   uVar19 = CONCAT71(( int7 )(uVar19 >> 8), bVar20);
   if (bVar20 == 0) {
      return uVar19;
   }

   lVar10 = *(long*)this;
   *(undefined4*)( param_1 + 0x68 ) = 0;
   uVar25 = ( **(code**)( lVar10 + 0x150 ) )(this, *(undefined8*)param_1, *(undefined8*)param_2);
   lVar10 = *(long*)this;
   *(undefined4*)( param_1 + 0x6c ) = uVar25;
   *(undefined4*)( param_1 + 0x80 ) = 0;
   uVar25 = ( **(code**)( lVar10 + 0x150 ) )(this, *(undefined8*)param_1, *(undefined8*)param_2);
   *(undefined4*)( param_1 + 0x84 ) = uVar25;
   plVar7 = (long*)Memory::realloc_static((void*)0x0, 8, false);
   if (plVar7 == (long*)0x0) {
      LAB_0010196a:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   local_40 = 1;
   uVar17 = 1;
   *plVar7 = (long)param_1;
   LAB_001014f0:lVar10 = *(long*)( this + 0x1d8 );
   if (( ( lVar10 == 0 ) || ( fVar28 = *(float*)( lVar10 + 0x84 ) ),bVar24 = *(float*)( param_1 + 0x84 ) <= fVar28,bVar24 && fVar28 != *(float*)( param_1 + 0x84 ) )) {
      *(Point**)( this + 0x1d8 ) = param_1;
   }

   if (param_2 != param_1) {
      uVar14 = (ulong)uVar17;
      lVar10 = plVar7[uVar14 - 1];
      lVar18 = uVar14 - 1;
      plVar7[lVar18] = *plVar7;
      if (lVar18 < 3) {
         plVar12 = plVar7;
         if (lVar18 == 2) {
            lVar18 = 0;
            lVar16 = 1;
            *plVar7 = plVar7[1];
            goto LAB_001015de;
         }

      }
 else {
         lVar8 = 2;
         lVar21 = 0;
         do {
            lVar16 = lVar8 + -1;
            plVar12 = plVar7 + lVar16;
            lVar13 = *plVar12;
            lVar2 = plVar7[lVar8];
            lVar9 = lVar8;
            if (( *(float*)( lVar2 + 0x6c ) <= *(float*)( lVar13 + 0x6c ) ) && ( ( *(float*)( lVar2 + 0x6c ) < *(float*)( lVar13 + 0x6c ) || ( *(float*)( lVar13 + 0x68 ) < *(float*)( lVar2 + 0x68 ) || *(float*)( lVar13 + 0x68 ) == *(float*)( lVar2 + 0x68 ) ) ) )) {
               lVar9 = lVar8 + 1;
               lVar13 = lVar2;
               lVar16 = lVar8;
               plVar12 = plVar7 + lVar8;
            }

            lVar8 = lVar9 * 2;
            plVar7[lVar21] = lVar13;
            lVar21 = lVar16;
         }
 while ( lVar18 != lVar8 && SBORROW8(lVar18, lVar8) == lVar18 + lVar9 * -2 < 0 );
         if (lVar18 == lVar8) {
            lVar16 = uVar14 - 2;
            lVar18 = (long)( uVar14 - 3 ) >> 1;
            *plVar12 = plVar7[lVar16];
         }
 else {
            lVar18 = ( lVar16 + -1 ) / 2;
            if (lVar16 < 1) goto LAB_00101635;
         }

         LAB_001015de:fVar28 = *(float*)( lVar10 + 0x6c );
         do {
            lVar8 = plVar7[lVar18];
            if (( *(float*)( lVar8 + 0x6c ) <= fVar28 ) && ( ( *(float*)( lVar8 + 0x6c ) < fVar28 || ( *(float*)( lVar10 + 0x68 ) < *(float*)( lVar8 + 0x68 ) || *(float*)( lVar10 + 0x68 ) == *(float*)( lVar8 + 0x68 ) ) ) )) {
               plVar12 = plVar7 + lVar16;
               break;
            }

            plVar7[lVar16] = lVar8;
            bVar24 = lVar18 != 0;
            lVar16 = lVar18;
            plVar12 = plVar7 + lVar18;
            lVar18 = ( lVar18 + -1 ) / 2;
         }
 while ( bVar24 );
      }

      LAB_00101635:uVar3 = *(undefined8*)( this + 0x188 );
      uVar22 = *(uint*)( param_1 + 0x38 );
      *plVar12 = lVar10;
      uVar17 = uVar17 - 1;
      *(undefined8*)( param_1 + 0x78 ) = uVar3;
      uVar14 = 0;
      do {
         uVar11 = uVar14;
         if (uVar11 == uVar22) goto LAB_00101819;
         uVar14 = uVar11 + 1;
      }
 while ( *(int*)( *(long*)( param_1 + 0x30 ) + uVar11 * 4 ) == 0 );
      iVar23 = (int)uVar11;
      plVar12 = (long*)( *(long*)( param_1 + 0x20 ) + uVar11 * 8 );
      LAB_00101688:uVar22 = iVar23 + 1;
      puVar4 = (undefined8*)*plVar12;
      if (( *(char*)( puVar4 + 3 ) != '\0' ) && ( puVar4[0xf] != *(long*)( this + 0x188 ) )) {
         fVar28 = *(float*)( param_1 + 0x68 );
         fVar26 = (float)( **(code**)( *(long*)this + 0x158 ) )(this, *(undefined8*)param_1, *puVar4);
         fVar28 = fVar28 + fVar26 * *(float*)( (long)puVar4 + 0x14 );
         if (puVar4[0xe] != *(long*)( this + 0x188 )) {
            puVar4[0xe] = *(long*)( this + 0x188 );
            if (uVar17 == local_40) {
               local_40 = 1;
               if (uVar17 * 2 != 0) {
                  local_40 = uVar17 * 2;
               }

               plVar7 = (long*)Memory::realloc_static(plVar7, (ulong)local_40 << 3, false);
               if (plVar7 == (long*)0x0) goto LAB_0010196a;
            }

            uVar14 = (ulong)uVar17;
            uVar3 = *puVar4;
            plVar12 = plVar7 + uVar14;
            *plVar12 = (long)puVar4;
            uVar5 = *(undefined8*)param_2;
            lVar10 = *(long*)this;
            puVar4[0xc] = param_1;
            *(float*)( puVar4 + 0xd ) = fVar28;
            fVar27 = (float)( **(code**)( lVar10 + 0x150 ) )(this, uVar3, uVar5);
            fVar26 = *(float*)( puVar4 + 0xd );
            fVar27 = fVar27 + fVar28;
            lVar10 = ( uVar14 - 1 ) - ( (long)( uVar14 - 1 ) >> 0x3f );
            *(float*)( (long)puVar4 + 0x6c ) = fVar27;
            puVar4[0x10] = CONCAT44(fVar27 - fVar26, fVar28);
            while (uVar14 != 0) {
               uVar11 = lVar10 >> 1;
               plVar12 = plVar7 + uVar11;
               lVar10 = *plVar12;
               if (( *(float*)( lVar10 + 0x6c ) <= fVar27 ) && ( ( *(float*)( lVar10 + 0x6c ) < fVar27 || ( fVar26 < *(float*)( lVar10 + 0x68 ) || fVar26 == *(float*)( lVar10 + 0x68 ) ) ) )) {
                  plVar12 = plVar7 + uVar14;
                  break;
               }

               plVar7[uVar14] = lVar10;
               lVar10 = ( uVar11 - 1 ) - ( (long)( uVar11 - 1 ) >> 0x3f );
               uVar14 = uVar11;
            }
;
            *plVar12 = (long)puVar4;
            uVar17 = uVar17 + 1;
            goto LAB_001017ce;
         }

         if (fVar28 < *(float*)( puVar4 + 0xd )) {
            puVar4[0xc] = param_1;
            *(float*)( puVar4 + 0xd ) = fVar28;
            fVar27 = (float)( **(code**)( *(long*)this + 0x150 ) )(this, *puVar4, *(undefined8*)param_2);
            fVar26 = *(float*)( puVar4 + 0xd );
            uVar14 = 0;
            fVar27 = fVar27 + fVar28;
            *(float*)( (long)puVar4 + 0x6c ) = fVar27;
            puVar4[0x10] = CONCAT44(fVar27 - fVar26, fVar28);
            plVar12 = plVar7;
            if (uVar17 != 0) {
               do {
                  if (puVar4 == (undefined8*)*plVar12) goto joined_r0x001018c5;
                  uVar15 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar15;
                  plVar12 = plVar12 + 1;
               }
 while ( uVar17 != uVar15 );
            }

            plVar7[-1] = (long)puVar4;
         }

      }

      goto LAB_001017ce;
   }

   goto LAB_001019e1;
   joined_r0x001018c5:if (uVar14 == 0) goto LAB_00101915;
   uVar11 = (long)( uVar14 - 1 ) / 2;
   plVar12 = plVar7 + uVar11;
   lVar10 = *plVar12;
   if (( *(float*)( lVar10 + 0x6c ) <= fVar27 ) && ( ( *(float*)( lVar10 + 0x6c ) < fVar27 || ( fVar26 < *(float*)( lVar10 + 0x68 ) || fVar26 == *(float*)( lVar10 + 0x68 ) ) ) )) {
      plVar12 = plVar7 + uVar14;
      goto LAB_00101915;
   }

   plVar7[uVar14] = lVar10;
   uVar14 = uVar11;
   goto joined_r0x001018c5;
   LAB_00101915:*plVar12 = (long)puVar4;
   LAB_001017ce:uVar11 = (ulong)uVar22;
   uVar14 = (ulong)uVar22;
   while (true) {
      if (*(uint*)( param_1 + 0x38 ) <= uVar22) {
         uVar19 = uVar19 & 0xff;
         goto LAB_00101819;
      }

      uVar1 = uVar14 + 1;
      if (*(int*)( *(long*)( param_1 + 0x30 ) + uVar14 * 4 ) != 0) break;
      uVar22 = (uint)uVar1;
      uVar11 = uVar1 & 0xffffffff;
      uVar14 = uVar1;
   }
;
   iVar23 = (int)uVar11;
   plVar12 = (long*)( *(long*)( param_1 + 0x20 ) + uVar14 * 8 );
   goto LAB_00101688;
   LAB_00101819:if (uVar17 == 0) {
      uVar19 = 0;
      if (plVar7 == (long*)0x0) {
         return 0;
      }

      LAB_001019e1:Memory::free_static(plVar7, false);
      return uVar19;
   }

   param_1 = (Point*)*plVar7;
   goto LAB_001014f0;
}
/* AStar2D::_solve(AStar3D::Point*, AStar3D::Point*, bool) */ulong AStar2D::_solve(AStar2D *this, Point *param_1, Point *param_2, bool param_3) {
   ulong uVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   code *pcVar6;
   long *plVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   long *plVar12;
   undefined7 in_register_00000009;
   long lVar13;
   ulong uVar14;
   uint uVar15;
   long lVar16;
   uint uVar17;
   long lVar18;
   ulong uVar19;
   byte bVar20;
   long lVar21;
   uint uVar22;
   int iVar23;
   bool bVar24;
   undefined4 uVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   uint local_40;
   uVar19 = CONCAT71(in_register_00000009, param_3) & 0xffffffff;
   *(long*)( this + 0x308 ) = *(long*)( this + 0x308 ) + 1;
   *(undefined8*)( this + 0x358 ) = 0;
   bVar20 = (byte)uVar19 | (byte)param_2[0x18];
   uVar19 = CONCAT71(( int7 )(uVar19 >> 8), bVar20);
   if (bVar20 == 0) {
      return uVar19;
   }

   lVar10 = *(long*)this;
   *(undefined4*)( param_1 + 0x68 ) = 0;
   uVar25 = ( **(code**)( lVar10 + 0x150 ) )(this, *(undefined8*)param_1, *(undefined8*)param_2);
   lVar10 = *(long*)this;
   *(undefined4*)( param_1 + 0x6c ) = uVar25;
   *(undefined4*)( param_1 + 0x80 ) = 0;
   uVar25 = ( **(code**)( lVar10 + 0x150 ) )(this, *(undefined8*)param_1, *(undefined8*)param_2);
   *(undefined4*)( param_1 + 0x84 ) = uVar25;
   plVar7 = (long*)Memory::realloc_static((void*)0x0, 8, false);
   if (plVar7 == (long*)0x0) {
      LAB_00101f5a:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   local_40 = 1;
   uVar17 = 1;
   *plVar7 = (long)param_1;
   LAB_00101ae0:lVar10 = *(long*)( this + 0x358 );
   if (( ( lVar10 == 0 ) || ( fVar28 = *(float*)( lVar10 + 0x84 ) ),bVar24 = *(float*)( param_1 + 0x84 ) <= fVar28,bVar24 && fVar28 != *(float*)( param_1 + 0x84 ) )) {
      *(Point**)( this + 0x358 ) = param_1;
   }

   if (param_2 != param_1) {
      uVar14 = (ulong)uVar17;
      lVar10 = plVar7[uVar14 - 1];
      lVar18 = uVar14 - 1;
      plVar7[lVar18] = *plVar7;
      if (lVar18 < 3) {
         plVar12 = plVar7;
         if (lVar18 == 2) {
            lVar18 = 0;
            lVar16 = 1;
            *plVar7 = plVar7[1];
            goto LAB_00101bce;
         }

      }
 else {
         lVar8 = 2;
         lVar21 = 0;
         do {
            lVar16 = lVar8 + -1;
            plVar12 = plVar7 + lVar16;
            lVar13 = *plVar12;
            lVar2 = plVar7[lVar8];
            lVar9 = lVar8;
            if (( *(float*)( lVar2 + 0x6c ) <= *(float*)( lVar13 + 0x6c ) ) && ( ( *(float*)( lVar2 + 0x6c ) < *(float*)( lVar13 + 0x6c ) || ( *(float*)( lVar13 + 0x68 ) < *(float*)( lVar2 + 0x68 ) || *(float*)( lVar13 + 0x68 ) == *(float*)( lVar2 + 0x68 ) ) ) )) {
               lVar9 = lVar8 + 1;
               lVar13 = lVar2;
               lVar16 = lVar8;
               plVar12 = plVar7 + lVar8;
            }

            lVar8 = lVar9 * 2;
            plVar7[lVar21] = lVar13;
            lVar21 = lVar16;
         }
 while ( lVar18 != lVar8 && SBORROW8(lVar18, lVar8) == lVar18 + lVar9 * -2 < 0 );
         if (lVar18 == lVar8) {
            lVar16 = uVar14 - 2;
            lVar18 = (long)( uVar14 - 3 ) >> 1;
            *plVar12 = plVar7[lVar16];
         }
 else {
            lVar18 = ( lVar16 + -1 ) / 2;
            if (lVar16 < 1) goto LAB_00101c25;
         }

         LAB_00101bce:fVar28 = *(float*)( lVar10 + 0x6c );
         do {
            lVar8 = plVar7[lVar18];
            if (( *(float*)( lVar8 + 0x6c ) <= fVar28 ) && ( ( *(float*)( lVar8 + 0x6c ) < fVar28 || ( *(float*)( lVar10 + 0x68 ) < *(float*)( lVar8 + 0x68 ) || *(float*)( lVar10 + 0x68 ) == *(float*)( lVar8 + 0x68 ) ) ) )) {
               plVar12 = plVar7 + lVar16;
               break;
            }

            plVar7[lVar16] = lVar8;
            bVar24 = lVar18 != 0;
            lVar16 = lVar18;
            plVar12 = plVar7 + lVar18;
            lVar18 = ( lVar18 + -1 ) / 2;
         }
 while ( bVar24 );
      }

      LAB_00101c25:uVar3 = *(undefined8*)( this + 0x308 );
      uVar22 = *(uint*)( param_1 + 0x38 );
      *plVar12 = lVar10;
      uVar17 = uVar17 - 1;
      *(undefined8*)( param_1 + 0x78 ) = uVar3;
      uVar14 = 0;
      do {
         uVar11 = uVar14;
         if (uVar11 == uVar22) goto LAB_00101e09;
         uVar14 = uVar11 + 1;
      }
 while ( *(int*)( *(long*)( param_1 + 0x30 ) + uVar11 * 4 ) == 0 );
      iVar23 = (int)uVar11;
      plVar12 = (long*)( *(long*)( param_1 + 0x20 ) + uVar11 * 8 );
      LAB_00101c78:uVar22 = iVar23 + 1;
      puVar4 = (undefined8*)*plVar12;
      if (( *(char*)( puVar4 + 3 ) != '\0' ) && ( puVar4[0xf] != *(long*)( this + 0x308 ) )) {
         fVar28 = *(float*)( param_1 + 0x68 );
         fVar26 = (float)( **(code**)( *(long*)this + 0x158 ) )(this, *(undefined8*)param_1, *puVar4);
         fVar28 = fVar28 + fVar26 * *(float*)( (long)puVar4 + 0x14 );
         if (puVar4[0xe] != *(long*)( this + 0x308 )) {
            puVar4[0xe] = *(long*)( this + 0x308 );
            if (uVar17 == local_40) {
               local_40 = 1;
               if (uVar17 * 2 != 0) {
                  local_40 = uVar17 * 2;
               }

               plVar7 = (long*)Memory::realloc_static(plVar7, (ulong)local_40 << 3, false);
               if (plVar7 == (long*)0x0) goto LAB_00101f5a;
            }

            uVar14 = (ulong)uVar17;
            uVar3 = *puVar4;
            plVar12 = plVar7 + uVar14;
            *plVar12 = (long)puVar4;
            uVar5 = *(undefined8*)param_2;
            lVar10 = *(long*)this;
            puVar4[0xc] = param_1;
            *(float*)( puVar4 + 0xd ) = fVar28;
            fVar27 = (float)( **(code**)( lVar10 + 0x150 ) )(this, uVar3, uVar5);
            fVar26 = *(float*)( puVar4 + 0xd );
            fVar27 = fVar27 + fVar28;
            lVar10 = ( uVar14 - 1 ) - ( (long)( uVar14 - 1 ) >> 0x3f );
            *(float*)( (long)puVar4 + 0x6c ) = fVar27;
            puVar4[0x10] = CONCAT44(fVar27 - fVar26, fVar28);
            while (uVar14 != 0) {
               uVar11 = lVar10 >> 1;
               plVar12 = plVar7 + uVar11;
               lVar10 = *plVar12;
               if (( *(float*)( lVar10 + 0x6c ) <= fVar27 ) && ( ( *(float*)( lVar10 + 0x6c ) < fVar27 || ( fVar26 < *(float*)( lVar10 + 0x68 ) || fVar26 == *(float*)( lVar10 + 0x68 ) ) ) )) {
                  plVar12 = plVar7 + uVar14;
                  break;
               }

               plVar7[uVar14] = lVar10;
               lVar10 = ( uVar11 - 1 ) - ( (long)( uVar11 - 1 ) >> 0x3f );
               uVar14 = uVar11;
            }
;
            *plVar12 = (long)puVar4;
            uVar17 = uVar17 + 1;
            goto LAB_00101dbe;
         }

         if (fVar28 < *(float*)( puVar4 + 0xd )) {
            puVar4[0xc] = param_1;
            *(float*)( puVar4 + 0xd ) = fVar28;
            fVar27 = (float)( **(code**)( *(long*)this + 0x150 ) )(this, *puVar4, *(undefined8*)param_2);
            fVar26 = *(float*)( puVar4 + 0xd );
            uVar14 = 0;
            fVar27 = fVar27 + fVar28;
            *(float*)( (long)puVar4 + 0x6c ) = fVar27;
            puVar4[0x10] = CONCAT44(fVar27 - fVar26, fVar28);
            plVar12 = plVar7;
            if (uVar17 != 0) {
               do {
                  if (puVar4 == (undefined8*)*plVar12) goto joined_r0x00101eb5;
                  uVar15 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar15;
                  plVar12 = plVar12 + 1;
               }
 while ( uVar17 != uVar15 );
            }

            plVar7[-1] = (long)puVar4;
         }

      }

      goto LAB_00101dbe;
   }

   goto LAB_00101fd1;
   joined_r0x00101eb5:if (uVar14 == 0) goto LAB_00101f05;
   uVar11 = (long)( uVar14 - 1 ) / 2;
   plVar12 = plVar7 + uVar11;
   lVar10 = *plVar12;
   if (( *(float*)( lVar10 + 0x6c ) <= fVar27 ) && ( ( *(float*)( lVar10 + 0x6c ) < fVar27 || ( fVar26 < *(float*)( lVar10 + 0x68 ) || fVar26 == *(float*)( lVar10 + 0x68 ) ) ) )) {
      plVar12 = plVar7 + uVar14;
      goto LAB_00101f05;
   }

   plVar7[uVar14] = lVar10;
   uVar14 = uVar11;
   goto joined_r0x00101eb5;
   LAB_00101f05:*plVar12 = (long)puVar4;
   LAB_00101dbe:uVar11 = (ulong)uVar22;
   uVar14 = (ulong)uVar22;
   while (true) {
      if (*(uint*)( param_1 + 0x38 ) <= uVar22) {
         uVar19 = uVar19 & 0xff;
         goto LAB_00101e09;
      }

      uVar1 = uVar14 + 1;
      if (*(int*)( *(long*)( param_1 + 0x30 ) + uVar14 * 4 ) != 0) break;
      uVar22 = (uint)uVar1;
      uVar11 = uVar1 & 0xffffffff;
      uVar14 = uVar1;
   }
;
   iVar23 = (int)uVar11;
   plVar12 = (long*)( *(long*)( param_1 + 0x20 ) + uVar14 * 8 );
   goto LAB_00101c78;
   LAB_00101e09:if (uVar17 == 0) {
      uVar19 = 0;
      if (plVar7 == (long*)0x0) {
         return 0;
      }

      LAB_00101fd1:Memory::free_static(plVar7, false);
      return uVar19;
   }

   param_1 = (Point*)*plVar7;
   goto LAB_00101ae0;
}
/* AStar3D::get_point_position(long) const */undefined1  [16] __thiscallAStar3D::get_point_position(AStar3D *this, long param_1) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined1 auVar7[16];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   undefined8 local_2c;
   undefined4 local_24;
   long local_20;
   uVar1 = *(uint*)( this + 0x1a8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = param_1 * 0x3ffff - 1;
   uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
   uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
   uVar3 = uVar3 >> 0x16 ^ uVar3;
   uVar6 = uVar3 & 0xffffffff;
   if ((int)uVar3 == 0) {
      uVar6 = 1;
   }

   uVar3 = uVar6 % (ulong)uVar1;
   uVar4 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
   if (uVar4 != 0) {
      uVar5 = 0;
      do {
         if (( (uint)uVar6 == uVar4 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) == param_1 )) {
            lVar2 = *(long*)( *(long*)( this + 400 ) + uVar3 * 8 );
            local_2c = *(undefined8*)( lVar2 + 8 );
            local_24 = *(undefined4*)( lVar2 + 0x10 );
            goto LAB_001020ff;
         }

         uVar5 = uVar5 + 1;
         uVar3 = ( ulong )((int)uVar3 + 1) % (ulong)uVar1;
         uVar4 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
      }
 while ( ( uVar4 != 0 ) && ( uVar5 <= ( ( uVar1 + (int)uVar3 ) - uVar4 % uVar1 ) % uVar1 ) );
   }

   local_50 = 0;
   local_40 = 0x3c;
   local_48 = "Can\'t get point\'s position. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_50);
   vformat<long>((CowData<char32_t>*)&local_48, (long)&local_50);
   _err_print_error("get_point_position", "core/math/a_star.cpp", 0x4a, "Condition \"!p_exists\" is true. Returning: Vector3()", (CowData<char32_t>*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_24 = 0;
   local_2c = 0;
   LAB_001020ff:auVar7._8_4_ = local_24;
   auVar7._0_8_ = local_2c;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar7._12_4_ = 0;
      return auVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::get_point_position(long) const */void AStar2D::get_point_position(AStar2D *this, long param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   AStar3D::get_point_position((AStar3D*)( this + 0x180 ), param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::set_point_position(long, Vector3 const&) */void AStar3D::set_point_position(AStar3D *this, long param_1, Vector3 *param_2) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar1 = *(uint*)( this + 0x1a8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = param_1 * 0x3ffff - 1;
   uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
   uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
   uVar3 = uVar3 >> 0x16 ^ uVar3;
   uVar6 = uVar3 & 0xffffffff;
   if ((int)uVar3 == 0) {
      uVar6 = 1;
   }

   uVar3 = uVar6 % (ulong)uVar1;
   uVar4 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
   if (uVar4 != 0) {
      uVar5 = 0;
      do {
         if (( (uint)uVar6 == uVar4 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) == param_1 )) {
            lVar2 = *(long*)( *(long*)( this + 400 ) + uVar3 * 8 );
            *(undefined8*)( lVar2 + 8 ) = *(undefined8*)param_2;
            *(undefined4*)( lVar2 + 0x10 ) = *(undefined4*)( param_2 + 8 );
            goto LAB_0010230c;
         }

         uVar5 = uVar5 + 1;
         uVar3 = ( ulong )((int)uVar3 + 1) % (ulong)uVar1;
         uVar4 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
      }
 while ( ( uVar4 != 0 ) && ( uVar5 <= ( ( uVar1 + (int)uVar3 ) - uVar4 % uVar1 ) % uVar1 ) );
   }

   local_50 = 0;
   local_40 = 0x3c;
   local_48 = "Can\'t set point\'s position. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_50);
   vformat<long>((CowData<char32_t>*)&local_48, (long)&local_50);
   _err_print_error("set_point_position", "core/math/a_star.cpp", 0x52, "Condition \"!p_exists\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010230c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::get_point_weight_scale(long) const */void AStar3D::get_point_weight_scale(AStar3D *this, long param_1) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar1 = *(uint*)( this + 0x1a8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( (uint)uVar5 == uVar3 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar2 * 8 ) == param_1 )) goto LAB_001024b4;
         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   local_40 = 0;
   local_30 = 0x40;
   local_38 = "Can\'t get point\'s weight scale. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_40);
   vformat<long>((CowData<char32_t>*)&local_38, (long)&local_40);
   _err_print_error("get_point_weight_scale", "core/math/a_star.cpp", 0x5a, "Condition \"!p_exists\" is true. Returning: 0", (CowData<char32_t>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_001024b4:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AStar3D::set_point_weight_scale(long, float) */void AStar3D::set_point_weight_scale(AStar3D *this, long param_1, float param_2) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar1 = *(uint*)( this + 0x1a8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( (uint)uVar5 == uVar3 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar2 * 8 ) == param_1 )) {
            if (param_2 < 0.0) {
               local_40 = 0;
               local_38 = "Can\'t set point\'s weight scale less than 0.0: %f.";
               local_30 = 0x31;
               String::parse_latin1((StrRange*)&local_40);
               vformat<float>((CowData<char32_t>*)&local_38, param_2);
               _err_print_error("set_point_weight_scale", "core/math/a_star.cpp", 99, "Condition \"p_weight_scale < 0.0\" is true.", (CowData<char32_t>*)&local_38, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            }
 else {
               *(float*)( *(long*)( *(long*)( this + 400 ) + uVar2 * 8 ) + 0x14 ) = param_2;
            }

            goto LAB_00102671;
         }

         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   local_40 = 0;
   local_30 = 0x40;
   local_38 = "Can\'t set point\'s weight scale. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_40);
   vformat<long>((CowData<char32_t>*)&local_38, (long)&local_40);
   _err_print_error("set_point_weight_scale", "core/math/a_star.cpp", 0x62, "Condition \"!p_exists\" is true.", (CowData<char32_t>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_00102671:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::set_point_weight_scale(long, float) */void AStar2D::set_point_weight_scale(AStar2D *this, long param_1, float param_2) {
   AStar3D::set_point_weight_scale((AStar3D*)( this + 0x180 ), param_1, param_2);
   return;
}
/* AStar3D::set_point_disabled(long, bool) */void AStar3D::set_point_disabled(AStar3D *this, long param_1, bool param_2) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar1 = *(uint*)( this + 0x1a8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( (uint)uVar5 == uVar3 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar2 * 8 ) == param_1 )) {
            *(bool*)( *(long*)( *(long*)( this + 400 ) + uVar2 * 8 ) + 0x18 ) = !param_2;
            goto LAB_001028b5;
         }

         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   local_50 = 0;
   local_40 = 0x40;
   local_48 = "Can\'t set if point is disabled. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_50);
   vformat<long>((CowData<char32_t>*)&local_48, (long)&local_50);
   _err_print_error("set_point_disabled", "core/math/a_star.cpp", 0x21a, "Condition \"!p_exists\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_001028b5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::is_point_disabled(long) const */byte AStar3D::is_point_disabled(AStar3D *this, long param_1) {
   uint uVar1;
   byte bVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar1 = *(uint*)( this + 0x1a8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = param_1 * 0x3ffff - 1;
   uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
   uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
   uVar3 = uVar3 >> 0x16 ^ uVar3;
   uVar6 = uVar3 & 0xffffffff;
   if ((int)uVar3 == 0) {
      uVar6 = 1;
   }

   uVar3 = uVar6 % (ulong)uVar1;
   uVar4 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
   if (uVar4 != 0) {
      uVar5 = 0;
      do {
         if (( (uint)uVar6 == uVar4 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) == param_1 )) {
            bVar2 = *(byte*)( *(long*)( *(long*)( this + 400 ) + uVar3 * 8 ) + 0x18 ) ^ 1;
            goto LAB_00102a56;
         }

         uVar5 = uVar5 + 1;
         uVar3 = ( ulong )((int)uVar3 + 1) % (ulong)uVar1;
         uVar4 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
      }
 while ( ( uVar4 != 0 ) && ( uVar5 <= ( ( uVar1 + (int)uVar3 ) - uVar4 % uVar1 ) % uVar1 ) );
   }

   local_40 = 0;
   local_30 = 0x40;
   local_38 = "Can\'t get if point is disabled. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_40);
   vformat<long>((CowData<char32_t>*)&local_38, (long)&local_40);
   _err_print_error("is_point_disabled", "core/math/a_star.cpp", 0x222, "Condition \"!p_exists\" is true. Returning: false", (CowData<char32_t>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   bVar2 = 0;
   LAB_00102a56:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::get_point_weight_scale(long) const */void AStar2D::get_point_weight_scale(AStar2D *this, long param_1) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar1 = *(uint*)( this + 0x328 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 800 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( (uint)uVar5 == uVar3 ) && ( param_1 == *(long*)( *(long*)( this + 0x318 ) + uVar2 * 8 ) )) goto LAB_00102c04;
         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 800 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   local_40 = 0;
   local_30 = 0x40;
   local_38 = "Can\'t get point\'s weight scale. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_40);
   vformat<long>((CowData<char32_t>*)&local_38, (long)&local_40);
   _err_print_error("get_point_weight_scale", "core/math/a_star.cpp", 0x5a, "Condition \"!p_exists\" is true. Returning: 0", (CowData<char32_t>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_00102c04:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AStar2D::set_point_disabled(long, bool) */void AStar2D::set_point_disabled(AStar2D *this, long param_1, bool param_2) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar1 = *(uint*)( this + 0x328 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 800 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( (uint)uVar5 == uVar3 ) && ( param_1 == *(long*)( *(long*)( this + 0x318 ) + uVar2 * 8 ) )) {
            *(bool*)( *(long*)( *(long*)( this + 0x310 ) + uVar2 * 8 ) + 0x18 ) = !param_2;
            goto LAB_00102db5;
         }

         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 800 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   local_50 = 0;
   local_40 = 0x40;
   local_48 = "Can\'t set if point is disabled. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_50);
   vformat<long>((CowData<char32_t>*)&local_48, (long)&local_50);
   _err_print_error("set_point_disabled", "core/math/a_star.cpp", 0x21a, "Condition \"!p_exists\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_00102db5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::is_point_disabled(long) const */byte AStar2D::is_point_disabled(AStar2D *this, long param_1) {
   uint uVar1;
   byte bVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar1 = *(uint*)( this + 0x328 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = param_1 * 0x3ffff - 1;
   uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
   uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
   uVar3 = uVar3 >> 0x16 ^ uVar3;
   uVar6 = uVar3 & 0xffffffff;
   if ((int)uVar3 == 0) {
      uVar6 = 1;
   }

   uVar3 = uVar6 % (ulong)uVar1;
   uVar4 = *(uint*)( *(long*)( this + 800 ) + uVar3 * 4 );
   if (uVar4 != 0) {
      uVar5 = 0;
      do {
         if (( (uint)uVar6 == uVar4 ) && ( param_1 == *(long*)( *(long*)( this + 0x318 ) + uVar3 * 8 ) )) {
            bVar2 = *(byte*)( *(long*)( *(long*)( this + 0x310 ) + uVar3 * 8 ) + 0x18 ) ^ 1;
            goto LAB_00102f56;
         }

         uVar5 = uVar5 + 1;
         uVar3 = ( ulong )((int)uVar3 + 1) % (ulong)uVar1;
         uVar4 = *(uint*)( *(long*)( this + 800 ) + uVar3 * 4 );
      }
 while ( ( uVar4 != 0 ) && ( uVar5 <= ( ( uVar1 + (int)uVar3 ) - uVar4 % uVar1 ) % uVar1 ) );
   }

   local_40 = 0;
   local_30 = 0x40;
   local_38 = "Can\'t get if point is disabled. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_40);
   vformat<long>((CowData<char32_t>*)&local_38, (long)&local_40);
   _err_print_error("is_point_disabled", "core/math/a_star.cpp", 0x222, "Condition \"!p_exists\" is true. Returning: false", (CowData<char32_t>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   bVar2 = 0;
   LAB_00102f56:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::set_point_position(long, Vector2 const&) */void AStar2D::set_point_position(AStar2D *this, long param_1, Vector2 *param_2) {
   undefined8 uVar1;
   uint uVar2;
   long lVar3;
   ulong uVar4;
   uint uVar5;
   uint uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar1 = *(undefined8*)param_2;
   uVar2 = *(uint*)( this + 0x328 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = param_1 * 0x3ffff - 1;
   uVar4 = ( uVar4 ^ uVar4 >> 0x1f ) * 0x15;
   uVar4 = ( uVar4 ^ uVar4 >> 0xb ) * 0x41;
   uVar4 = uVar4 >> 0x16 ^ uVar4;
   uVar7 = uVar4 & 0xffffffff;
   if ((int)uVar4 == 0) {
      uVar7 = 1;
   }

   uVar4 = uVar7 % (ulong)uVar2;
   uVar5 = *(uint*)( *(long*)( this + 800 ) + uVar4 * 4 );
   if (uVar5 != 0) {
      uVar6 = 0;
      do {
         if (( (uint)uVar7 == uVar5 ) && ( param_1 == *(long*)( *(long*)( this + 0x318 ) + uVar4 * 8 ) )) {
            lVar3 = *(long*)( *(long*)( this + 0x310 ) + uVar4 * 8 );
            *(undefined4*)( lVar3 + 0x10 ) = 0;
            *(undefined8*)( lVar3 + 8 ) = uVar1;
            goto LAB_0010310a;
         }

         uVar6 = uVar6 + 1;
         uVar4 = ( ulong )((int)uVar4 + 1) % (ulong)uVar2;
         uVar5 = *(uint*)( *(long*)( this + 800 ) + uVar4 * 4 );
      }
 while ( ( uVar5 != 0 ) && ( uVar6 <= ( ( uVar2 + (int)uVar4 ) - uVar5 % uVar2 ) % uVar2 ) );
   }

   local_40 = 0;
   local_30 = 0x3c;
   local_38 = "Can\'t set point\'s position. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_40);
   vformat<long>((CowData<char32_t>*)&local_38, (long)&local_40);
   _err_print_error("set_point_position", "core/math/a_star.cpp", 0x52, "Condition \"!p_exists\" is true.", (CowData<char32_t>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_0010310a:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::_bind_compatibility_methods() */void AStar3D::_bind_compatibility_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_b8[2];
   long *local_a8;
   char *local_98;
   char *pcStack_90;
   undefined8 local_88;
   char *local_78;
   char *pcStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_58 = &local_78;
   local_78 = "from_id";
   pcStack_70 = "to_id";
   auStack_50._8_8_ = auStack_50._0_8_;
   auStack_50._0_8_ = &pcStack_70;
   D_METHODP((char*)local_b8, (char***)"get_id_path", ( uint ) & local_58);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AStar3D,Vector<long>,long,long>(_get_id_path_bind_compat_88047);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar5 = local_a8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   local_88 = 0;
   auStack_50._0_8_ = &pcStack_90;
   local_98 = "from_id";
   pcStack_90 = "to_id";
   local_58 = &local_98;
   D_METHODP((char*)local_b8, (char***)"get_point_path", ( uint ) & local_58);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AStar3D,Vector<Vector3>,long,long>(_get_point_path_bind_compat_88047);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar5 = local_a8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::_bind_compatibility_methods() */void AStar2D::_bind_compatibility_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_b8[2];
   long *local_a8;
   char *local_98;
   char *pcStack_90;
   undefined8 local_88;
   char *local_78;
   char *pcStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_58 = &local_78;
   local_78 = "from_id";
   pcStack_70 = "to_id";
   auStack_50._8_8_ = auStack_50._0_8_;
   auStack_50._0_8_ = &pcStack_70;
   D_METHODP((char*)local_b8, (char***)"get_id_path", ( uint ) & local_58);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AStar2D,Vector<long>,long,long>(_get_id_path_bind_compat_88047);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar5 = local_a8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   local_88 = 0;
   auStack_50._0_8_ = &pcStack_90;
   local_98 = "from_id";
   pcStack_90 = "to_id";
   local_58 = &local_98;
   D_METHODP((char*)local_b8, (char***)"get_point_path", ( uint ) & local_58);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AStar2D,Vector<Vector2>,long,long>(_get_point_path_bind_compat_88047);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar5 = local_a8 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::are_points_connected(long, long, bool) const */ulong AStar3D::are_points_connected(AStar3D *this, long param_1, long param_2, bool param_3) {
   char cVar1;
   ulong uVar2;
   undefined7 in_register_00000009;
   byte bVar3;
   long in_FS_OFFSET;
   uint local_3c;
   long local_38;
   long local_30;
   byte local_28;
   long local_20;
   bVar3 = 1;
   uVar2 = CONCAT71(in_register_00000009, param_3) & 0xffffffff;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = param_2;
   if (param_2 <= param_1) {
      bVar3 = 2;
      local_30 = param_1;
      param_1 = param_2;
   }

   local_3c = 0;
   local_38 = param_1;
   local_28 = bVar3;
   cVar1 = HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::_lookup_pos((HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>*)( this + 0x1b0 ), (Segment*)&local_38, &local_3c);
   if (cVar1 != '\0') {
      if (*(long*)( this + 0x1b0 ) != 0) {
         if ((char)uVar2 == '\0') {
            uVar2 = CONCAT71(( int7 )(( ulong )((long)(int)local_3c * 3) >> 8), ( *(byte*)( *(long*)( this + 0x1b0 ) + 0x10 + (long)(int)local_3c * 0x18 ) & bVar3 ) == bVar3);
         }

         goto LAB_00103830;
      }

   }

   uVar2 = 0;
   LAB_00103830:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::are_points_connected(long, long, bool) const */void AStar2D::are_points_connected(AStar2D *this, long param_1, long param_2, bool param_3) {
   AStar3D::are_points_connected((AStar3D*)( this + 0x180 ), param_1, param_2, param_3);
   return;
}
/* HashSet<AStar3D::Segment, AStar3D::Segment, HashMapComparatorDefault<AStar3D::Segment>
   >::erase(AStar3D::Segment const&) [clone .isra.0] */void HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::erase(HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>> *this, Segment *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   uint *puVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
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
   uint uVar25;
   char cVar26;
   uint uVar27;
   long lVar28;
   uint *puVar29;
   uint uVar30;
   ulong uVar31;
   ulong uVar32;
   ulong uVar33;
   uint *puVar34;
   uint *puVar35;
   ulong uVar36;
   ulong uVar37;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   cVar26 = _lookup_pos(this, param_1, &local_44);
   uVar25 = local_44;
   if (cVar26 != '\0') {
      uVar37 = (ulong)local_44;
      lVar8 = *(long*)( this + 0x10 );
      lVar9 = *(long*)( this + 0x18 );
      puVar4 = (uint*)( lVar8 + uVar37 * 4 );
      local_44 = *puVar4;
      uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      uVar32 = CONCAT44(0, uVar27);
      lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(local_44 + 1) * lVar10;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar32;
      lVar28 = SUB168(auVar12 * auVar18, 8) * 4;
      uVar30 = SUB164(auVar12 * auVar18, 8);
      puVar35 = (uint*)( lVar9 + lVar28 );
      if (( *puVar35 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = ( ulong ) * puVar35 * lVar10,auVar19._8_8_ = 0,auVar19._0_8_ = uVar32,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar27 + uVar30 ) - SUB164(auVar13 * auVar19, 8)) * lVar10,auVar20._8_8_ = 0,auVar20._0_8_ = uVar32,SUB164(auVar14 * auVar20, 8) == 0) {
         uVar36 = (ulong)local_44;
      }
 else {
         lVar11 = *(long*)( this + 8 );
         uVar33 = (ulong)local_44;
         uVar36 = (ulong)uVar30;
         while (true) {
            puVar29 = (uint*)( lVar28 + lVar11 );
            puVar1 = (uint*)( lVar11 + uVar33 * 4 );
            puVar34 = (uint*)( uVar33 * 4 + lVar9 );
            puVar5 = (undefined4*)( lVar8 + ( ulong ) * puVar29 * 4 );
            puVar6 = (undefined4*)( lVar8 + ( ulong ) * puVar1 * 4 );
            uVar7 = *puVar6;
            *puVar6 = *puVar5;
            *puVar5 = uVar7;
            uVar30 = *puVar35;
            *puVar35 = *puVar34;
            *puVar34 = uVar30;
            uVar30 = *puVar29;
            *puVar29 = *puVar1;
            local_44 = (uint)uVar36;
            *puVar1 = uVar30;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = ( ulong )(local_44 + 1) * lVar10;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar32;
            uVar31 = SUB168(auVar17 * auVar23, 8);
            lVar28 = uVar31 * 4;
            puVar35 = (uint*)( lVar9 + lVar28 );
            if (( *puVar35 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = ( ulong ) * puVar35 * lVar10,auVar21._8_8_ = 0,auVar21._0_8_ = uVar32,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( SUB164(auVar17 * auVar23, 8) + uVar27 ) - SUB164(auVar15 * auVar21, 8)) * lVar10,auVar22._8_8_ = 0,auVar22._0_8_ = uVar32,SUB164(auVar16 * auVar22, 8) == 0) break;
            uVar33 = uVar36;
            uVar36 = uVar31 & 0xffffffff;
         }
;
      }

      lVar28 = *(long*)this;
      *(undefined4*)( lVar9 + uVar36 * 4 ) = 0;
      puVar2 = (undefined8*)( lVar28 + uVar37 * 0x18 );
      uVar27 = *(int*)( this + 0x24 ) - 1;
      *(uint*)( this + 0x24 ) = uVar27;
      if (uVar25 < uVar27) {
         uVar30 = *(uint*)( lVar8 + (ulong)uVar27 * 4 );
         puVar3 = (undefined8*)( lVar28 + (ulong)uVar27 * 0x18 );
         uVar24 = puVar3[1];
         *puVar2 = *puVar3;
         puVar2[1] = uVar24;
         puVar2[2] = puVar3[2];
         *puVar4 = uVar30;
         *(uint*)( *(long*)( this + 8 ) + ( ulong ) * (uint*)( lVar8 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar25;
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AStar3D::remove_point(long) */void AStar3D::remove_point(AStar3D *this, long param_1) {
   ulong uVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   long *plVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   uint uVar11;
   int iVar12;
   long in_FS_OFFSET;
   void *local_90;
   long local_70[2];
   undefined8 local_60;
   char *local_58;
   char *local_50;
   undefined1 local_48;
   long local_40;
   uVar11 = *(uint*)( this + 0x1a8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = param_1 * 0x3ffff - 1;
   uVar6 = ( uVar6 ^ uVar6 >> 0x1f ) * 0x15;
   uVar6 = ( uVar6 ^ uVar6 >> 0xb ) * 0x41;
   uVar6 = uVar6 >> 0x16 ^ uVar6;
   uVar10 = uVar6 & 0xffffffff;
   if ((int)uVar6 == 0) {
      uVar10 = 1;
   }

   uVar6 = uVar10 % (ulong)uVar11;
   uVar8 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar6 * 4 );
   local_70[0] = param_1;
   if (uVar8 != 0) {
      uVar9 = 0;
      do {
         if (( (uint)uVar10 == uVar8 ) && ( param_1 == *(long*)( *(long*)( this + 0x198 ) + uVar6 * 8 ) )) {
            plVar2 = *(long**)( *(long*)( this + 400 ) + uVar6 * 8 );
            uVar6 = 0;
            while (uVar10 = uVar6,uVar10 != *(uint*)( plVar2 + 7 )) {
               lVar3 = plVar2[6];
               uVar6 = uVar10 + 1;
               if (*(int*)( lVar3 + uVar10 * 4 ) != 0) {
                  lVar4 = plVar2[5];
                  lVar5 = plVar2[4];
                  uVar11 = (uint)uVar10;
                  do {
                     plVar7 = (long*)( uVar10 * 8 + lVar5 );
                     local_58 = *(char**)( lVar4 + uVar10 * 8 );
                     if (param_1 < (long)local_58) {
                        local_48 = 1;
                        local_50 = local_58;
                        local_58 = (char*)param_1;
                     }
 else {
                        local_48 = 2;
                        local_50 = (char*)param_1;
                     }

                     HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::erase((HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>*)( this + 0x1b0 ), (Segment*)&local_58);
                     OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( *plVar7 + 0x20 ), plVar2);
                     OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( *plVar7 + 0x40 ), plVar2);
                     uVar6 = ( ulong )(uVar11 + 1);
                     do {
                        uVar10 = uVar6;
                        uVar11 = (uint)uVar10;
                        if (*(uint*)( plVar2 + 7 ) <= uVar11) goto LAB_00103cb8;
                        uVar6 = uVar10 + 1;
                     }
 while ( *(int*)( lVar3 + uVar10 * 4 ) == 0 );
                  }
 while ( true );
               }

            }
;
            LAB_00103cb8:uVar6 = 0;
            while (uVar10 = uVar6,*(uint*)( plVar2 + 0xb ) != uVar10) {
               lVar3 = plVar2[10];
               uVar6 = uVar10 + 1;
               if (*(int*)( lVar3 + uVar10 * 4 ) != 0) {
                  local_90 = (void*)plVar2[9];
                  lVar4 = plVar2[8];
                  iVar12 = (int)uVar10;
                  do {
                     plVar7 = (long*)( uVar10 * 8 + lVar4 );
                     uVar11 = iVar12 + 1;
                     local_58 = *(char**)( (long)local_90 + uVar10 * 8 );
                     if (param_1 < (long)local_58) {
                        local_48 = 1;
                        local_50 = local_58;
                        local_58 = (char*)param_1;
                     }
 else {
                        local_48 = 2;
                        local_50 = (char*)param_1;
                     }

                     HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::erase((HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>*)( this + 0x1b0 ), (Segment*)&local_58);
                     OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( *plVar7 + 0x20 ), plVar2);
                     uVar6 = (ulong)uVar11;
                     OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( *plVar7 + 0x40 ), plVar2);
                     uVar10 = (ulong)uVar11;
                     while (true) {
                        if (*(uint*)( plVar2 + 0xb ) <= uVar11) goto LAB_00103e90;
                        uVar1 = uVar10 + 1;
                        if (*(int*)( lVar3 + uVar10 * 4 ) != 0) break;
                        uVar11 = (uint)uVar1;
                        uVar6 = uVar1 & 0xffffffff;
                        uVar10 = uVar1;
                     }
;
                     iVar12 = (int)uVar6;
                  }
 while ( true );
               }

            }
;
            local_90 = (void*)plVar2[9];
            LAB_00103e90:Memory::free_static(local_90, false);
            Memory::free_static((void*)plVar2[8], false);
            Memory::free_static((void*)plVar2[10], false);
            Memory::free_static((void*)plVar2[5], false);
            Memory::free_static((void*)plVar2[4], false);
            Memory::free_static((void*)plVar2[6], false);
            Memory::free_static(plVar2, false);
            OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( this + 400 ), local_70);
            *(long*)( this + 0x180 ) = param_1;
            goto LAB_00103e38;
         }

         uVar9 = uVar9 + 1;
         uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar11;
         uVar8 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar6 * 4 );
      }
 while ( ( uVar8 != 0 ) && ( uVar9 <= ( ( uVar11 + (int)uVar6 ) - uVar8 % uVar11 ) % uVar11 ) );
   }

   local_60 = 0;
   local_50 = (char*)0x34;
   local_58 = "Can\'t remove point. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_60);
   _err_print_error("remove_point", "core/math/a_star.cpp", 0x6b, "Condition \"!p_exists\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00103e38:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::remove_point(long) */void AStar2D::remove_point(AStar2D *this, long param_1) {
   AStar3D::remove_point((AStar3D*)( this + 0x180 ), param_1);
   return;
}
/* AStar3D::reserve_space(long) */void AStar3D::reserve_space(AStar3D *this, long param_1) {
   uint uVar1;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 1) {
      local_50 = 0;
      local_40 = 0x31;
      local_48 = "New capacity must be greater than 0, new was: %d.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<long>((CowData<char32_t>*)&local_48, (long)&local_50);
      _err_print_error("reserve_space", "core/math/a_star.cpp", 0x106, "Condition \"p_num_nodes <= 0\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }
 else {
      uVar1 = *(uint*)( this + 0x1a8 );
      if (uVar1 <= (uint)param_1) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::_resize_and_rehash((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( this + 400 ), (uint)param_1);
            return;
         }

         goto LAB_001040b5;
      }

      local_50 = 0;
      local_40 = 0x44;
      local_48 = "New capacity must be greater than current capacity: %d, new was: %d.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,long>((CowData<char32_t>*)&local_48, (uint)(StrRange*)&local_50, (ulong)uVar1);
      _err_print_error("reserve_space", "core/math/a_star.cpp", 0x107, "Condition \"(uint32_t)p_num_nodes < points.get_capacity()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001040b5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AStar2D::reserve_space(long) */void AStar2D::reserve_space(AStar2D *this, long param_1) {
   AStar3D::reserve_space((AStar3D*)( this + 0x180 ), param_1);
   return;
}
/* AStar3D::add_point(long, Vector3 const&, float) */void AStar3D::add_point(AStar3D *this, long param_1, Vector3 *param_2, float param_3) {
   uint uVar1;
   undefined4 uVar2;
   ulong uVar3;
   Point *pPVar4;
   long lVar5;
   void *pvVar6;
   long lVar7;
   char *pcVar8;
   undefined8 uVar9;
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   long local_60[2];
   undefined8 local_50;
   Point *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60[0] = param_1;
   if (param_1 < 0) {
      local_50 = 0;
      local_40 = 0x27;
      local_48 = (Point*)0x10eae8;
      String::parse_latin1((StrRange*)&local_50);
      vformat<long>((String*)&local_48, (long)&local_50);
      pcVar8 = "Condition \"p_id < 0\" is true.";
      uVar9 = 0x31;
   }
 else {
      if (0.0 <= param_3) {
         uVar1 = *(uint*)( this + 0x1a8 );
         uVar3 = param_1 * 0x3ffff - 1;
         uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
         uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
         uVar3 = uVar3 >> 0x16 ^ uVar3;
         uVar12 = uVar3 & 0xffffffff;
         if ((int)uVar3 == 0) {
            uVar12 = 1;
         }

         uVar3 = uVar12 % (ulong)uVar1;
         uVar10 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
         if (uVar10 != 0) {
            uVar11 = 0;
            do {
               if (( (uint)uVar12 == uVar10 ) && ( param_1 == *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) )) {
                  lVar7 = *(long*)( *(long*)( this + 400 ) + uVar3 * 8 );
                  *(undefined8*)( lVar7 + 8 ) = *(undefined8*)param_2;
                  uVar2 = *(undefined4*)( param_2 + 8 );
                  *(float*)( lVar7 + 0x14 ) = param_3;
                  *(undefined4*)( lVar7 + 0x10 ) = uVar2;
                  goto LAB_001041ff;
               }

               uVar11 = uVar11 + 1;
               uVar3 = ( ulong )((int)uVar3 + 1) % (ulong)uVar1;
               uVar10 = *(uint*)( *(long*)( this + 0x1a0 ) + uVar3 * 4 );
            }
 while ( ( uVar10 != 0 ) && ( uVar11 <= ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 ) );
         }

         pPVar4 = (Point*)operator_new(0x88, "");
         lVar7 = _LC73;
         *(long*)pPVar4 = 0;
         *(long*)( pPVar4 + 8 ) = 0;
         *(undefined4*)( pPVar4 + 0x10 ) = 0;
         *(undefined4*)( pPVar4 + 0x14 ) = 0;
         pPVar4[0x18] = (Point)0x0;
         *(long*)( pPVar4 + 0x30 ) = 0;
         *(long*)( pPVar4 + 0x38 ) = lVar7;
         *(undefined1(*) [16])( pPVar4 + 0x20 ) = (undefined1[16])0x0;
         lVar5 = Memory::alloc_static(0x20, false);
         *(long*)( pPVar4 + 0x28 ) = lVar5;
         lVar5 = Memory::alloc_static(( ulong ) * (uint*)( pPVar4 + 0x38 ) << 3, false);
         *(long*)( pPVar4 + 0x20 ) = lVar5;
         pvVar6 = (void*)Memory::alloc_static(( ulong ) * (uint*)( pPVar4 + 0x38 ) << 2, false);
         *(void**)( pPVar4 + 0x30 ) = pvVar6;
         if (*(uint*)( pPVar4 + 0x38 ) != 0) {
            memset(pvVar6, 0, ( ulong ) * (uint*)( pPVar4 + 0x38 ) << 2);
         }

         *(long*)( pPVar4 + 0x58 ) = lVar7;
         *(long*)( pPVar4 + 0x50 ) = 0;
         *(undefined1(*) [16])( pPVar4 + 0x40 ) = (undefined1[16])0x0;
         lVar7 = Memory::alloc_static(0x20, false);
         *(long*)( pPVar4 + 0x48 ) = lVar7;
         lVar7 = Memory::alloc_static(( ulong ) * (uint*)( pPVar4 + 0x58 ) << 3, false);
         *(long*)( pPVar4 + 0x40 ) = lVar7;
         pvVar6 = (void*)Memory::alloc_static(( ulong ) * (uint*)( pPVar4 + 0x58 ) << 2, false);
         *(void**)( pPVar4 + 0x50 ) = pvVar6;
         if (*(uint*)( pPVar4 + 0x58 ) != 0) {
            memset(pvVar6, 0, ( ulong ) * (uint*)( pPVar4 + 0x58 ) << 2);
         }

         *(long*)( pPVar4 + 0x68 ) = 0;
         *(long*)( pPVar4 + 0x80 ) = 0;
         lVar7 = *(long*)param_2;
         *(long*)( pPVar4 + 0x60 ) = 0;
         *(undefined1(*) [16])( pPVar4 + 0x70 ) = (undefined1[16])0x0;
         *(long*)( pPVar4 + 8 ) = lVar7;
         uVar2 = *(undefined4*)( param_2 + 8 );
         *(long*)pPVar4 = param_1;
         *(undefined4*)( pPVar4 + 0x10 ) = uVar2;
         pPVar4[0x18] = (Point)0x1;
         *(float*)( pPVar4 + 0x14 ) = param_3;
         local_48 = pPVar4;
         OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::set((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( this + 400 ), local_60, &local_48);
         goto LAB_001041ff;
      }

      local_50 = 0;
      local_40 = 0x36;
      local_48 = (Point*)0x10eb10;
      String::parse_latin1((StrRange*)&local_50);
      vformat<float>((String*)&local_48, param_3);
      pcVar8 = "Condition \"p_weight_scale < 0.0\" is true.";
      uVar9 = 0x32;
   }

   _err_print_error("add_point", "core/math/a_star.cpp", uVar9, pcVar8, (CowData<char32_t>*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_001041ff:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::add_point(long, Vector2 const&, float) */void AStar2D::add_point(AStar2D *this, long param_1, Vector2 *param_2, float param_3) {
   long in_FS_OFFSET;
   undefined8 local_20;
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = *(undefined8*)param_2;
   local_18 = 0;
   AStar3D::add_point((AStar3D*)( this + 0x180 ), param_1, (Vector3*)&local_20, param_3);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::disconnect_points(long, long, bool) */void AStar3D::disconnect_points(AStar3D *this, long param_1, long param_2, bool param_3) {
   Segment *pSVar1;
   HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>> *this_00;
   uint uVar2;
   long lVar3;
   long *plVar4;
   Point *pPVar5;
   char cVar6;
   ulong uVar7;
   ulong uVar8;
   byte bVar9;
   uint uVar10;
   ulong uVar11;
   uint uVar12;
   long in_FS_OFFSET;
   Point *local_70;
   ulong local_68[2];
   char *local_58;
   long local_50;
   byte local_48;
   long local_40;
   lVar3 = *(long*)( this + 0x1a0 );
   uVar2 = *(uint*)( this + 0x1a8 );
   uVar8 = (ulong)uVar2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = param_1 * 0x3ffff - 1;
   uVar7 = ( uVar7 ^ uVar7 >> 0x1f ) * 0x15;
   uVar7 = ( uVar7 ^ uVar7 >> 0xb ) * 0x41;
   uVar7 = uVar7 >> 0x16 ^ uVar7;
   uVar11 = uVar7 & 0xffffffff;
   if ((int)uVar7 == 0) {
      uVar11 = 1;
   }

   uVar7 = uVar11 % uVar8;
   uVar12 = *(uint*)( lVar3 + uVar7 * 4 );
   if (uVar12 != 0) {
      uVar10 = 0;
      do {
         if (( (uint)uVar11 == uVar12 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar7 * 8 ) == param_1 )) {
            plVar4 = *(long**)( *(long*)( this + 400 ) + uVar7 * 8 );
            uVar7 = param_2 * 0x3ffff - 1;
            uVar7 = ( uVar7 ^ uVar7 >> 0x1f ) * 0x15;
            uVar7 = ( uVar7 ^ uVar7 >> 0xb ) * 0x41;
            uVar7 = uVar7 >> 0x16 ^ uVar7;
            uVar11 = uVar7 & 0xffffffff;
            if ((int)uVar7 == 0) {
               uVar11 = 1;
            }

            uVar7 = uVar11 % uVar8;
            uVar12 = *(uint*)( lVar3 + uVar7 * 4 );
            if (uVar12 == 0) goto LAB_00104830;
            uVar10 = 0;
            goto LAB_00104689;
         }

         uVar10 = uVar10 + 1;
         uVar7 = ( ulong )((int)uVar7 + 1) % uVar8;
         uVar12 = *(uint*)( lVar3 + uVar7 * 4 );
      }
 while ( ( uVar12 != 0 ) && ( uVar10 <= ( ( uVar2 + (int)uVar7 ) - uVar12 % uVar2 ) % uVar2 ) );
   }

   local_68[0] = 0;
   local_50 = 0x39;
   local_58 = "Can\'t disconnect points. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)local_68);
   vformat<long>((CowData<char32_t>*)&local_58, (long)local_68);
   _err_print_error("disconnect_points", "core/math/a_star.cpp", 0xab, "Condition \"!a_exists\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   goto LAB_00104806;
   while (true) {
      uVar10 = uVar10 + 1;
      uVar7 = ( ulong )((int)uVar7 + 1) % uVar8;
      uVar12 = *(uint*)( lVar3 + uVar7 * 4 );
      if (( uVar12 == 0 ) || ( ( ( uVar2 + (int)uVar7 ) - uVar12 % uVar2 ) % uVar2 < uVar10 )) break;
      LAB_00104689:if (( (uint)uVar11 == uVar12 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar7 * 8 ) == param_2 )) {
         pPVar5 = *(Point**)( *(long*)( this + 400 ) + uVar7 * 8 );
         local_48 = 1;
         local_58 = (char*)param_1;
         if (param_2 <= param_1) {
            local_48 = 2;
            local_58 = (char*)param_2;
            param_2 = param_1;
         }

         this_00 = (HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>*)( this + 0x1b0 );
         bVar9 = local_48;
         if (param_3) {
            bVar9 = 3;
         }

         local_68[0] = local_68[0] & 0xffffffff00000000;
         local_70 = pPVar5;
         local_50 = param_2;
         cVar6 = HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::_lookup_pos(this_00, (Segment*)&local_58, (uint*)local_68);
         if (cVar6 == '\0') goto LAB_00104806;
         if (*(long*)( this + 0x1b0 ) == 0) goto LAB_00104806;
         pSVar1 = (Segment*)( *(long*)( this + 0x1b0 ) + (long)(int)local_68[0] * 0x18 );
         bVar9 = ~bVar9 & (byte)pSVar1[0x10];
         local_48 = bVar9;
         OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( plVar4 + 4 ), (long*)pPVar5);
         if (param_3) {
            OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( pPVar5 + 0x20 ), plVar4);
            if (pSVar1[0x10] != (Segment)0x3) {
               OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( plVar4 + 8 ), (long*)pPVar5);
               OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( pPVar5 + 0x40 ), plVar4);
            }

            HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::erase(this_00, pSVar1);
            if (bVar9 == 0) goto LAB_00104806;
         }
 else {
            if (bVar9 == 0) {
               OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( pPVar5 + 0x40 ), plVar4);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::erase(this_00, pSVar1);
                  return;
               }

               goto LAB_00104952;
            }

            OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::set((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( plVar4 + 8 ), (long*)pPVar5, &local_70);
            HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::erase(this_00, pSVar1);
         }

         HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::insert((Segment*)local_68);
         goto LAB_00104806;
      }

   }
;
   LAB_00104830:local_68[0] = 0;
   local_50 = 0x39;
   local_58 = "Can\'t disconnect points. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)local_68);
   vformat<long>((CowData<char32_t>*)&local_58, (long)local_68);
   _err_print_error("disconnect_points", "core/math/a_star.cpp", 0xaf, "Condition \"!b_exists\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   LAB_00104806:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104952:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AStar2D::disconnect_points(long, long, bool) */void AStar2D::disconnect_points(AStar2D *this, long param_1, long param_2, bool param_3) {
   AStar3D::disconnect_points((AStar3D*)( this + 0x180 ), param_1, param_2, param_3);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AStar3D::connect_points(long, long, bool) */void AStar3D::connect_points(AStar3D *this, long param_1, long param_2, bool param_3) {
   long *plVar1;
   Segment *pSVar2;
   Point *pPVar3;
   long *plVar4;
   long lVar5;
   long lVar6;
   long *plVar7;
   char cVar8;
   ulong uVar9;
   ulong uVar10;
   char *pcVar11;
   undefined8 uVar12;
   undefined8 *puVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   long *plVar18;
   ulong uVar19;
   uint uVar20;
   long lVar21;
   long lVar22;
   long in_FS_OFFSET;
   long local_b8;
   uint *local_98;
   Point *local_70;
   undefined8 local_68;
   char *local_58;
   long local_50;
   byte local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == param_2) {
      local_68 = 0;
      local_50 = 0x2a;
      local_58 = "Can\'t connect point with id: %d to itself.";
      String::parse_latin1((StrRange*)&local_68);
      vformat<long>((String*)&local_58, (long)&local_68);
      pcVar11 = "Condition \"p_id == p_with_id\" is true.";
      uVar12 = 0x83;
   }
 else {
      uVar14 = *(uint*)( this + 0x1a8 );
      uVar10 = (ulong)uVar14;
      lVar22 = *(long*)( this + 0x1a0 );
      uVar9 = param_1 * 0x3ffff - 1;
      uVar9 = ( uVar9 ^ uVar9 >> 0x1f ) * 0x15;
      uVar9 = ( uVar9 ^ uVar9 >> 0xb ) * 0x41;
      uVar9 = uVar9 >> 0x16 ^ uVar9;
      uVar17 = uVar9 & 0xffffffff;
      if ((int)uVar9 == 0) {
         uVar17 = 1;
      }

      uVar9 = uVar17 % uVar10;
      uVar20 = *(uint*)( lVar22 + uVar9 * 4 );
      if (uVar20 != 0) {
         uVar15 = 0;
         do {
            if (( uVar20 == (uint)uVar17 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar9 * 8 ) == param_1 )) {
               pPVar3 = *(Point**)( *(long*)( this + 400 ) + uVar9 * 8 );
               uVar9 = param_2 * 0x3ffff - 1;
               uVar9 = ( uVar9 ^ uVar9 >> 0x1f ) * 0x15;
               uVar9 = ( uVar9 ^ uVar9 >> 0xb ) * 0x41;
               uVar9 = uVar9 >> 0x16 ^ uVar9;
               uVar17 = uVar9 & 0xffffffff;
               if ((int)uVar9 == 0) {
                  uVar17 = 1;
               }

               uVar9 = uVar17 % uVar10;
               uVar20 = *(uint*)( lVar22 + uVar9 * 4 );
               local_70 = pPVar3;
               if (uVar20 == 0) goto LAB_00104e38;
               uVar15 = 0;
               goto LAB_00104b49;
            }

            uVar15 = uVar15 + 1;
            uVar9 = ( ulong )((int)uVar9 + 1) % uVar10;
            uVar20 = *(uint*)( lVar22 + uVar9 * 4 );
         }
 while ( ( uVar20 != 0 ) && ( uVar15 <= ( ( uVar14 + (int)uVar9 ) - uVar20 % uVar14 ) % uVar14 ) );
      }

      local_68 = 0;
      local_50 = 0x36;
      local_58 = "Can\'t connect points. Point with id: %d doesn\'t exist.";
      String::parse_latin1((StrRange*)&local_68);
      vformat<long>((String*)&local_58, (long)&local_68);
      pcVar11 = "Condition \"!from_exists\" is true.";
      uVar12 = 0x87;
   }

   _err_print_error("connect_points", "core/math/a_star.cpp", uVar12, pcVar11, (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   goto LAB_00104cce;
   while (true) {
      uVar15 = uVar15 + 1;
      uVar9 = ( ulong )((int)uVar9 + 1) % uVar10;
      uVar20 = *(uint*)( lVar22 + uVar9 * 4 );
      if (( uVar20 == 0 ) || ( ( ( uVar14 + (int)uVar9 ) - uVar20 % uVar14 ) % uVar14 < uVar15 )) break;
      LAB_00104b49:if (( uVar20 == (uint)uVar17 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar9 * 8 ) == param_2 )) {
         plVar4 = *(long**)( *(long*)( this + 400 ) + uVar9 * 8 );
         uVar14 = *(uint*)( pPVar3 + 0x38 );
         uVar10 = (ulong)uVar14;
         lVar22 = *(long*)( pPVar3 + 0x30 );
         local_b8 = *plVar4;
         uVar9 = local_b8 * 0x3ffff - 1;
         uVar9 = ( uVar9 ^ uVar9 >> 0x1f ) * 0x15;
         uVar9 = ( uVar9 ^ uVar9 >> 0xb ) * 0x41;
         uVar9 = uVar9 >> 0x16 ^ uVar9;
         uVar17 = uVar9 & 0xffffffff;
         if ((int)uVar9 == 0) {
            uVar17 = 1;
         }

         uVar9 = uVar17 % uVar10;
         local_98 = (uint*)( lVar22 + uVar9 * 4 );
         uVar20 = *local_98;
         if (uVar20 == 0) goto LAB_00104cfd;
         uVar16 = 0;
         uVar19 = uVar9;
         uVar15 = uVar20;
         goto LAB_00104c23;
      }

   }
;
   LAB_00104e38:local_68 = 0;
   local_50 = 0x36;
   local_58 = "Can\'t connect points. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_68);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_68);
   _err_print_error("connect_points", "core/math/a_star.cpp", 0x8b, "Condition \"!to_exists\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   goto LAB_00104cce;
   while (true) {
      uVar16 = uVar16 + 1;
      uVar19 = ( ulong )((int)uVar19 + 1) % uVar10;
      uVar15 = *(uint*)( lVar22 + uVar19 * 4 );
      if (( uVar15 == 0 ) || ( ( ( uVar14 + (int)uVar19 ) - uVar15 % uVar14 ) % uVar14 < uVar16 )) break;
      LAB_00104c23:if (( uVar15 == (uint)uVar17 ) && ( local_b8 == *(long*)( *(long*)( pPVar3 + 0x28 ) + uVar19 * 8 ) )) {
         *(long**)( *(long*)( pPVar3 + 0x20 ) + uVar19 * 8 ) = plVar4;
         goto LAB_00104df5;
      }

   }
;
   LAB_00104cfd:if ((double)uVar10 * __LC68 < (double)( *(int*)( pPVar3 + 0x3c ) + 1 )) {
      OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::_resize_and_rehash((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( pPVar3 + 0x20 ), uVar14 * 2);
      uVar10 = ( ulong ) * (uint*)( pPVar3 + 0x38 );
      lVar22 = *(long*)( pPVar3 + 0x30 );
      local_b8 = *plVar4;
      uVar9 = local_b8 * 0x3ffff - 1;
      uVar9 = ( uVar9 ^ uVar9 >> 0x1f ) * 0x15;
      uVar9 = ( uVar9 >> 0xb ^ uVar9 ) * 0x41;
      uVar9 = uVar9 >> 0x16 ^ uVar9;
      uVar17 = uVar9 & 0xffffffff;
      if ((int)uVar9 == 0) {
         uVar17 = 1;
      }

      uVar9 = uVar17 % uVar10;
      local_98 = (uint*)( lVar22 + uVar9 * 4 );
      uVar20 = *local_98;
   }

   uVar15 = (uint)uVar17;
   lVar5 = *(long*)( pPVar3 + 0x28 );
   lVar6 = *(long*)( pPVar3 + 0x20 );
   uVar14 = 0;
   plVar7 = plVar4;
   while (uVar20 != 0) {
      uVar15 = ( uint )(( ulong )(uint)(( (int)uVar9 + (int)uVar10 ) - (int)( (ulong)uVar20 % uVar10 )) % uVar10);
      plVar18 = plVar7;
      lVar21 = local_b8;
      if (uVar15 < uVar14) {
         *local_98 = (uint)uVar17;
         uVar17 = (ulong)uVar20;
         plVar1 = (long*)( lVar5 + uVar9 * 8 );
         puVar13 = (undefined8*)( uVar9 * 8 + lVar6 );
         lVar21 = *plVar1;
         plVar18 = (long*)*puVar13;
         *plVar1 = local_b8;
         uVar10 = ( ulong ) * (uint*)( pPVar3 + 0x38 );
         *puVar13 = plVar7;
         uVar14 = uVar15;
      }

      uVar15 = (uint)uVar17;
      uVar14 = uVar14 + 1;
      uVar9 = ( ulong )((int)uVar9 + 1) % uVar10;
      local_98 = (uint*)( lVar22 + uVar9 * 4 );
      plVar7 = plVar18;
      local_b8 = lVar21;
      uVar20 = *local_98;
   }
;
   *(long*)( lVar5 + uVar9 * 8 ) = local_b8;
   *(long**)( lVar6 + uVar9 * 8 ) = plVar7;
   *local_98 = uVar15;
   *(int*)( pPVar3 + 0x3c ) = *(int*)( pPVar3 + 0x3c ) + 1;
   LAB_00104df5:local_58 = (char*)param_1;
   local_50 = param_2;
   if (param_3) {
      OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::set((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( plVar4 + 4 ), (long*)pPVar3, &local_70);
      if (param_2 <= param_1) {
         local_58 = (char*)param_2;
         local_50 = param_1;
      }

      local_48 = 3;
   }
 else {
      OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::set((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( plVar4 + 8 ), (long*)pPVar3, &local_70);
      if (param_1 < param_2) {
         local_48 = 1;
      }
 else {
         local_48 = 2;
         local_58 = (char*)param_2;
         local_50 = param_1;
      }

   }

   local_68 = (ulong)local_68._4_4_ << 0x20;
   cVar8 = HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::_lookup_pos((HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>*)( this + 0x1b0 ), (Segment*)&local_58, (uint*)&local_68);
   if (cVar8 != '\0') {
      if (*(long*)( this + 0x1b0 ) != 0) {
         pSVar2 = (Segment*)( *(long*)( this + 0x1b0 ) + (long)(int)local_68 * 0x18 );
         local_48 = local_48 | (byte)pSVar2[0x10];
         if (local_48 == 3) {
            OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( pPVar3 + 0x40 ), plVar4);
            OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove((OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>*)( plVar4 + 8 ), (long*)pPVar3);
         }

         HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::erase((HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>*)( this + 0x1b0 ), pSVar2);
      }

   }

   HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::insert((Segment*)&local_68);
   LAB_00104cce:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::connect_points(long, long, bool) */void AStar2D::connect_points(AStar2D *this, long param_1, long param_2, bool param_3) {
   AStar3D::connect_points((AStar3D*)( this + 0x180 ), param_1, param_2, param_3);
   return;
}
/* AStar3D::get_point_path(long, long, bool) */long AStar3D::get_point_path(long param_1, long param_2, bool param_3) {
   uint uVar1;
   Point *pPVar2;
   char cVar3;
   int iVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long in_RCX;
   ulong uVar7;
   undefined7 in_register_00000011;
   Point *pPVar8;
   long lVar9;
   bool in_R8B;
   uint uVar10;
   ulong uVar11;
   Point *pPVar12;
   long lVar13;
   uint uVar14;
   long in_FS_OFFSET;
   undefined8 local_70;
   char *local_68;
   undefined8 *local_60[2];
   undefined8 local_4c;
   undefined4 local_44;
   long local_40;
   uVar1 = *(uint*)( param_2 + 0x1a8 );
   uVar7 = (ulong)uVar1;
   lVar9 = *(long*)( param_2 + 0x1a0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = CONCAT71(in_register_00000011, param_3) * 0x3ffff - 1;
   uVar5 = ( uVar5 ^ uVar5 >> 0x1f ) * 0x15;
   uVar5 = ( uVar5 ^ uVar5 >> 0xb ) * 0x41;
   uVar5 = uVar5 >> 0x16 ^ uVar5;
   uVar11 = uVar5 & 0xffffffff;
   if ((int)uVar5 == 0) {
      uVar11 = 1;
   }

   uVar5 = uVar11 % uVar7;
   uVar14 = *(uint*)( lVar9 + uVar5 * 4 );
   if (uVar14 != 0) {
      uVar10 = 0;
      do {
         if (( (uint)uVar11 == uVar14 ) && ( *(long*)( *(long*)( param_2 + 0x198 ) + uVar5 * 8 ) == CONCAT71(in_register_00000011, param_3) )) {
            pPVar2 = *(Point**)( *(long*)( param_2 + 400 ) + uVar5 * 8 );
            uVar5 = in_RCX * 0x3ffff - 1;
            uVar5 = ( uVar5 ^ uVar5 >> 0x1f ) * 0x15;
            uVar5 = ( uVar5 ^ uVar5 >> 0xb ) * 0x41;
            uVar5 = uVar5 >> 0x16 ^ uVar5;
            uVar11 = uVar5 & 0xffffffff;
            if ((int)uVar5 == 0) {
               uVar11 = 1;
            }

            uVar5 = uVar11 % uVar7;
            uVar14 = *(uint*)( lVar9 + uVar5 * 4 );
            if (uVar14 == 0) goto LAB_001053e0;
            uVar10 = 0;
            goto LAB_00105271;
         }

         uVar10 = uVar10 + 1;
         uVar5 = ( ulong )((int)uVar5 + 1) % uVar7;
         uVar14 = *(uint*)( lVar9 + uVar5 * 4 );
      }
 while ( ( uVar14 != 0 ) && ( uVar10 <= ( ( uVar1 + (int)uVar5 ) - uVar14 % uVar1 ) % uVar1 ) );
   }

   local_70 = 0;
   local_60[0] = (undefined8*)0x36;
   local_68 = "Can\'t get point path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_70);
   vformat<long>((CowData<char32_t>*)&local_68, (long)&local_70);
   _err_print_error("get_point_path", "core/math/a_star.cpp", 0x1ae, "Condition \"!from_exists\" is true. Returning: Vector<Vector3>()", (CowData<char32_t>*)&local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   *(undefined8*)( param_1 + 8 ) = 0;
   goto LAB_001053b6;
   while (true) {
      uVar10 = uVar10 + 1;
      uVar5 = ( ulong )((int)uVar5 + 1) % uVar7;
      uVar14 = *(uint*)( lVar9 + uVar5 * 4 );
      if (( uVar14 == 0 ) || ( ( ( uVar1 + (int)uVar5 ) - uVar14 % uVar1 ) % uVar1 < uVar10 )) break;
      LAB_00105271:if (( uVar14 == (uint)uVar11 ) && ( *(long*)( *(long*)( param_2 + 0x198 ) + uVar5 * 8 ) == in_RCX )) {
         pPVar8 = *(Point**)( *(long*)( param_2 + 400 ) + uVar5 * 8 );
         if (pPVar2 != pPVar8) {
            cVar3 = _solve((AStar3D*)param_2, pPVar2, pPVar8, in_R8B);
            if (cVar3 == '\0') {
               if (( in_R8B == false ) || ( pPVar8 = *(Point**)( param_2 + 0x1d8 ) ),pPVar8 == (Point*)0x0) {
                  *(undefined8*)( param_1 + 8 ) = 0;
                  goto LAB_001053b6;
               }

               if (pPVar8 == pPVar2) {
                  local_60[0] = (undefined8*)0x0;
                  CowData<Vector3>::resize<false>((CowData<Vector3>*)local_60, 1);
                  CowData<Vector3>::_copy_on_write((CowData<Vector3>*)local_60);
                  goto LAB_00105313;
               }

            }

            lVar9 = 1;
            pPVar12 = pPVar8;
            do {
               lVar13 = lVar9;
               pPVar12 = *(Point**)( pPVar12 + 0x60 );
               lVar9 = lVar13 + 1;
            }
 while ( pPVar12 != pPVar2 );
            local_60[0] = (undefined8*)0x0;
            CowData<Vector3>::resize<false>((CowData<Vector3>*)local_60, lVar9);
            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)local_60);
            puVar6 = (undefined8*)( (long)local_60[0] + lVar13 * 0xc );
            do {
               *puVar6 = *(undefined8*)( pPVar8 + 8 );
               pPVar12 = pPVar8 + 0x10;
               pPVar8 = *(Point**)( pPVar8 + 0x60 );
               *(undefined4*)( puVar6 + 1 ) = *(undefined4*)pPVar12;
               puVar6 = (undefined8*)( (long)puVar6 + -0xc );
            }
 while ( pPVar8 != pPVar2 );
            LAB_00105313:*local_60[0] = *(undefined8*)( pPVar2 + 8 );
            *(undefined4*)( local_60[0] + 1 ) = *(undefined4*)( pPVar2 + 0x10 );
            *(undefined8**)( param_1 + 8 ) = local_60[0];
            goto LAB_001053b6;
         }

         local_4c = *(undefined8*)( pPVar2 + 8 );
         local_60[0] = (undefined8*)0x0;
         local_44 = *(undefined4*)( pPVar2 + 0x10 );
         iVar4 = CowData<Vector3>::resize<false>((CowData<Vector3>*)local_60, 1);
         puVar6 = local_60[0];
         if (iVar4 == 0) {
            if (local_60[0] == (undefined8*)0x0) {
               lVar13 = -1;
               lVar9 = 0;
            }
 else {
               lVar9 = local_60[0][-1];
               lVar13 = lVar9 + -1;
               if (-1 < lVar13) {
                  CowData<Vector3>::_copy_on_write((CowData<Vector3>*)local_60);
                  puVar6 = (undefined8*)( (long)local_60[0] + lVar13 * 0xc );
                  *puVar6 = local_4c;
                  *(undefined4*)( puVar6 + 1 ) = local_44;
                  puVar6 = local_60[0];
                  goto LAB_00105533;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar9, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            puVar6 = local_60[0];
         }

         LAB_00105533:*(undefined8**)( param_1 + 8 ) = puVar6;
         goto LAB_001053b6;
      }

   }
;
   LAB_001053e0:local_70 = 0;
   local_60[0] = (undefined8*)0x36;
   local_68 = "Can\'t get point path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_70);
   vformat<long>((CowData<char32_t>*)&local_68, (long)&local_70);
   _err_print_error("get_point_path", "core/math/a_star.cpp", 0x1b2, "Condition \"!to_exists\" is true. Returning: Vector<Vector3>()", (CowData<char32_t>*)&local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_001053b6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::_get_point_path_bind_compat_88047(long, long) */AStar3D * __thiscall
AStar3D::_get_point_path_bind_compat_88047(AStar3D *this,long param_1,long param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   get_point_path((long)this, param_1, SUB81(param_2, 0));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::get_point_path(long, long, bool) */long AStar2D::get_point_path(long param_1, long param_2, bool param_3) {
   uint uVar1;
   Point *pPVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   ulong uVar6;
   undefined8 *puVar7;
   long in_RCX;
   ulong uVar8;
   undefined7 in_register_00000011;
   Point *pPVar9;
   long lVar10;
   long lVar11;
   bool in_R8B;
   uint uVar12;
   ulong uVar13;
   Point *pPVar14;
   uint uVar15;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   undefined8 *local_50[2];
   long local_40;
   uVar1 = *(uint*)( param_2 + 0x328 );
   uVar8 = (ulong)uVar1;
   lVar11 = *(long*)( param_2 + 800 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = CONCAT71(in_register_00000011, param_3) * 0x3ffff - 1;
   uVar6 = ( uVar6 ^ uVar6 >> 0x1f ) * 0x15;
   uVar6 = ( uVar6 ^ uVar6 >> 0xb ) * 0x41;
   uVar6 = uVar6 >> 0x16 ^ uVar6;
   uVar13 = uVar6 & 0xffffffff;
   if ((int)uVar6 == 0) {
      uVar13 = 1;
   }

   uVar6 = uVar13 % uVar8;
   uVar15 = *(uint*)( lVar11 + uVar6 * 4 );
   if (uVar15 != 0) {
      uVar12 = 0;
      do {
         if (( uVar15 == (uint)uVar13 ) && ( *(long*)( *(long*)( param_2 + 0x318 ) + uVar6 * 8 ) == CONCAT71(in_register_00000011, param_3) )) {
            pPVar2 = *(Point**)( *(long*)( param_2 + 0x310 ) + uVar6 * 8 );
            uVar6 = in_RCX * 0x3ffff - 1;
            uVar6 = ( uVar6 ^ uVar6 >> 0x1f ) * 0x15;
            uVar6 = ( uVar6 ^ uVar6 >> 0xb ) * 0x41;
            uVar6 = uVar6 >> 0x16 ^ uVar6;
            uVar13 = uVar6 & 0xffffffff;
            if ((int)uVar6 == 0) {
               uVar13 = 1;
            }

            uVar6 = uVar13 % uVar8;
            uVar15 = *(uint*)( lVar11 + uVar6 * 4 );
            if (uVar15 == 0) goto LAB_00105930;
            uVar12 = 0;
            goto LAB_001057d1;
         }

         uVar12 = uVar12 + 1;
         uVar6 = ( ulong )((int)uVar6 + 1) % uVar8;
         uVar15 = *(uint*)( lVar11 + uVar6 * 4 );
      }
 while ( ( uVar15 != 0 ) && ( uVar12 <= ( ( uVar1 + (int)uVar6 ) - uVar15 % uVar1 ) % uVar1 ) );
   }

   local_60 = 0;
   local_50[0] = (undefined8*)0x36;
   local_58 = "Can\'t get point path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_60);
   _err_print_error("get_point_path", "core/math/a_star.cpp", 0x2ca, "Condition \"!from_exists\" is true. Returning: Vector<Vector2>()", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   *(undefined8*)( param_1 + 8 ) = 0;
   goto LAB_00105906;
   while (true) {
      uVar12 = uVar12 + 1;
      uVar6 = ( ulong )((int)uVar6 + 1) % uVar8;
      uVar15 = *(uint*)( lVar11 + uVar6 * 4 );
      if (( uVar15 == 0 ) || ( ( ( uVar1 + (int)uVar6 ) - uVar15 % uVar1 ) % uVar1 < uVar12 )) break;
      LAB_001057d1:if (( uVar15 == (uint)uVar13 ) && ( *(long*)( *(long*)( param_2 + 0x318 ) + uVar6 * 8 ) == in_RCX )) {
         pPVar9 = *(Point**)( *(long*)( param_2 + 0x310 ) + uVar6 * 8 );
         if (pPVar2 != pPVar9) {
            cVar4 = _solve((AStar2D*)param_2, pPVar2, pPVar9, in_R8B);
            if (cVar4 == '\0') {
               if (( in_R8B == false ) || ( pPVar9 = *(Point**)( param_2 + 0x358 ) ),pPVar9 == (Point*)0x0) {
                  *(undefined8*)( param_1 + 8 ) = 0;
                  goto LAB_00105906;
               }

               if (pPVar9 == pPVar2) {
                  local_50[0] = (undefined8*)0x0;
                  CowData<Vector2>::resize<false>((CowData<Vector2>*)local_50, 1);
                  CowData<Vector2>::_copy_on_write((CowData<Vector2>*)local_50);
                  goto LAB_00105865;
               }

            }

            lVar11 = 1;
            pPVar14 = pPVar9;
            do {
               lVar10 = lVar11;
               pPVar14 = *(Point**)( pPVar14 + 0x60 );
               lVar11 = lVar10 + 1;
            }
 while ( pPVar14 != pPVar2 );
            local_50[0] = (undefined8*)0x0;
            CowData<Vector2>::resize<false>((CowData<Vector2>*)local_50, lVar11);
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)local_50);
            puVar7 = local_50[0] + lVar10;
            do {
               pPVar14 = pPVar9 + 8;
               pPVar9 = *(Point**)( pPVar9 + 0x60 );
               *puVar7 = *(undefined8*)pPVar14;
               puVar7 = puVar7 + -1;
            }
 while ( pPVar9 != pPVar2 );
            LAB_00105865:*local_50[0] = *(undefined8*)( pPVar2 + 8 );
            *(undefined8**)( param_1 + 8 ) = local_50[0];
            goto LAB_00105906;
         }

         uVar3 = *(undefined8*)( pPVar2 + 8 );
         local_50[0] = (undefined8*)0x0;
         iVar5 = CowData<Vector2>::resize<false>((CowData<Vector2>*)local_50, 1);
         puVar7 = local_50[0];
         if (iVar5 == 0) {
            if (local_50[0] == (undefined8*)0x0) {
               lVar11 = 0;
            }
 else {
               lVar11 = local_50[0][-1];
               if (0 < lVar11) {
                  CowData<Vector2>::_copy_on_write((CowData<Vector2>*)local_50);
                  *local_50[0] = uVar3;
                  puVar7 = local_50[0];
                  goto LAB_00105a58;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar11, "p_index", "size()", "", false, false);
         }

         LAB_00105a58:*(undefined8**)( param_1 + 8 ) = puVar7;
         goto LAB_00105906;
      }

   }
;
   LAB_00105930:local_60 = 0;
   local_50[0] = (undefined8*)0x36;
   local_58 = "Can\'t get point path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_60);
   _err_print_error("get_point_path", "core/math/a_star.cpp", 0x2ce, "Condition \"!to_exists\" is true. Returning: Vector<Vector2>()", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_00105906:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::_get_point_path_bind_compat_88047(long, long) */AStar2D * __thiscall
AStar2D::_get_point_path_bind_compat_88047(AStar2D *this,long param_1,long param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   get_point_path((long)this, param_1, SUB81(param_2, 0));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<long>::_copy_on_write() [clone .isra.0] */void CowData<long>::_copy_on_write(CowData<long> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   ulong uVar4;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 8;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
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
/* AStar2D::_bind_methods() */void AStar2D::_bind_methods(void) {
   long *plVar1;
   char cVar2;
   long lVar3;
   code *pcVar4;
   undefined *puVar5;
   undefined *puVar6;
   undefined *puVar7;
   undefined *puVar8;
   int *piVar9;
   MethodBind *pMVar10;
   uint uVar11;
   int *piVar12;
   long lVar13;
   long in_FS_OFFSET;
   long local_270;
   undefined8 local_268;
   undefined8 local_260;
   char *local_258;
   long local_250;
   long local_248;
   undefined4 local_240;
   long local_238;
   undefined4 local_230;
   char *local_228;
   undefined8 local_220;
   long local_218;
   long lStack_210;
   undefined8 local_208;
   long local_200;
   undefined8 local_1f8;
   undefined8 local_1f0;
   undefined8 local_1e8[2];
   int *local_1d8;
   undefined8 local_1d0;
   Vector<int> local_1c8[8];
   long local_1c0;
   undefined *local_1b8;
   char *pcStack_1b0;
   undefined8 local_1a8;
   undefined *local_198;
   char *pcStack_190;
   undefined8 local_188;
   undefined *local_178;
   char *pcStack_170;
   undefined8 local_168;
   undefined *local_158;
   char *pcStack_150;
   undefined8 local_148;
   undefined *local_138;
   undefined *puStack_130;
   char *local_128;
   undefined8 local_120;
   undefined *local_118;
   undefined *puStack_110;
   char *local_108;
   undefined8 local_100;
   undefined *local_f8;
   undefined *puStack_f0;
   char *local_e8;
   undefined8 local_e0;
   undefined *local_d8;
   undefined *puStack_d0;
   char *local_c8;
   undefined8 local_c0;
   undefined *local_b8;
   undefined *puStack_b0;
   char *local_a8;
   undefined8 local_a0;
   Variant *local_98;
   char *pcStack_90;
   char *local_88;
   undefined8 local_80;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar8 = PTR__LC102_00129228;
   puVar7 = PTR__LC100_00129220;
   puVar6 = PTR__LC51_00129218;
   puVar5 = PTR__LC50_00129210;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_228, (char***)"get_available_point_id", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128690;
   *(code**)( pMVar10 + 0x58 ) = get_available_point_id;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_268 = 0;
   local_258 = "AStar2D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_98 = (Variant*)puVar8;
   pcStack_90 = "position";
   auStack_70._8_8_ = &local_88;
   auStack_70._0_8_ = &pcStack_90;
   local_80 = 0;
   local_88 = "weight_scale";
   uVar11 = (uint)(Variant*)&local_78;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"add_point", uVar11);
   Variant::Variant((Variant*)&local_78, _LC107);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar2D,long,Vector2_const&,float>(add_point);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_point_position", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,Vector2,long>(get_point_position);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_148 = 0;
   local_158 = puVar8;
   pcStack_150 = "position";
   auStack_70._0_8_ = &pcStack_150;
   local_78 = (Variant**)&local_158;
   D_METHODP((char*)&local_228, (char***)"set_point_position", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,long,Vector2_const&>(set_point_position);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_point_weight_scale", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128810;
   *(code**)( pMVar10 + 0x58 ) = get_point_weight_scale;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 1;
   local_268 = 0;
   local_258 = "AStar2D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_168 = 0;
   local_178 = puVar8;
   pcStack_170 = "weight_scale";
   auStack_70._0_8_ = &pcStack_170;
   local_78 = (Variant**)&local_178;
   D_METHODP((char*)&local_228, (char***)"set_point_weight_scale", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,long,float>(set_point_weight_scale);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"remove_point", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,long>(remove_point);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"has_point", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128930;
   *(code**)( pMVar10 + 0x58 ) = has_point;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 1;
   local_268 = 0;
   local_258 = "AStar2D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_point_connections", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,Vector<long>,long>(get_point_connections);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"get_point_ids", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,Vector<long>>(get_point_ids);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_188 = 0;
   local_198 = puVar8;
   pcStack_190 = "disabled";
   auStack_70._0_8_ = &pcStack_190;
   local_78 = (Variant**)&local_198;
   D_METHODP((char*)&local_228, (char***)"set_point_disabled", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar2D,long,bool>(set_point_disabled);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"is_point_disabled", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128930;
   *(code**)( pMVar10 + 0x58 ) = is_point_disabled;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 1;
   local_268 = 0;
   local_258 = "AStar2D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_b8 = puVar8;
   puStack_b0 = puVar6;
   auStack_70._8_8_ = &local_a8;
   auStack_70._0_8_ = &puStack_b0;
   local_a0 = 0;
   local_a8 = "bidirectional";
   local_78 = (Variant**)&local_b8;
   D_METHODP((char*)&local_228, (char***)"connect_points", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar2D,long,long,bool>(connect_points);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_d8 = puVar8;
   puStack_d0 = puVar6;
   auStack_70._8_8_ = &local_c8;
   auStack_70._0_8_ = &puStack_d0;
   local_c0 = 0;
   local_c8 = "bidirectional";
   local_78 = (Variant**)&local_d8;
   D_METHODP((char*)&local_228, (char***)"disconnect_points", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar2D,long,long,bool>(disconnect_points);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_f8 = puVar8;
   puStack_f0 = puVar6;
   auStack_70._8_8_ = &local_e8;
   auStack_70._0_8_ = &puStack_f0;
   local_e8 = "bidirectional";
   local_e0 = 0;
   local_78 = (Variant**)&local_f8;
   D_METHODP((char*)&local_228, (char***)"are_points_connected", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128b10;
   *(code**)( pMVar10 + 0x58 ) = are_points_connected;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 3;
   local_268 = 0;
   local_258 = "AStar2D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"get_point_count", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128690;
   *(code**)( pMVar10 + 0x58 ) = get_point_count;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_268 = 0;
   local_258 = "AStar2D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"get_point_capacity", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128690;
   *(code**)( pMVar10 + 0x58 ) = get_point_capacity;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_268 = 0;
   local_258 = "AStar2D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)0x10e65d;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"reserve_space", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,long>(reserve_space);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"clear", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D>(clear);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_1a8 = 0;
   local_1b8 = puVar7;
   pcStack_1b0 = "include_disabled";
   auStack_70._0_8_ = &pcStack_1b0;
   local_78 = (Variant**)&local_1b8;
   D_METHODP((char*)&local_228, (char***)"get_closest_point", uVar11);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar2D,long,Vector2_const&,bool>(get_closest_point);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)0x10e593;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_closest_position_in_segment", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar2D,Vector2,Vector2_const&>(get_closest_position_in_segment);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_118 = puVar5;
   puStack_110 = puVar6;
   auStack_70._8_8_ = &local_108;
   auStack_70._0_8_ = &puStack_110;
   local_100 = 0;
   local_108 = "allow_partial_path";
   local_78 = (Variant**)&local_118;
   D_METHODP((char*)&local_228, (char***)"get_point_path", uVar11);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar2D,Vector<Vector2>,long,long,bool>(get_point_path);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_138 = puVar5;
   puStack_130 = puVar6;
   auStack_70._8_8_ = &local_128;
   auStack_70._0_8_ = &puStack_130;
   local_120 = 0;
   local_128 = "allow_partial_path";
   local_78 = (Variant**)&local_138;
   D_METHODP((char*)&local_228, (char***)"get_id_path", uVar11);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar2D,Vector<long>,long,long,bool>(get_id_path);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_260 = 0;
   local_258 = (char*)0x0;
   local_228 = "from_id";
   local_220 = 7;
   String::parse_latin1((StrRange*)&local_258);
   local_228 = (char*)0x0;
   if (local_258 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_258);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_270 = 0;
   local_228 = "end_id";
   local_220 = 6;
   String::parse_latin1((StrRange*)&local_270);
   local_228 = (char*)0x0;
   if (local_270 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_270);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   local_218 = 0;
   lStack_210 = 0;
   local_258 = "_estimate_cost";
   local_228 = (char*)0x0;
   local_220 = 0;
   local_208 = 0;
   local_200 = 0;
   local_1f8 = 6;
   local_1f0 = 1;
   local_1e8[0] = 0;
   local_1d8 = (int*)0x0;
   local_1d0 = 0;
   local_1c0 = 0;
   local_250 = 0xe;
   String::parse_latin1((StrRange*)&local_228);
   local_1f0 = CONCAT44(local_1f0._4_4_, 0xc);
   GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_258);
   local_220 = CONCAT44(local_220._4_4_, local_258._0_4_);
   if (local_218 != local_250) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
      local_218 = local_250;
      local_250 = 0;
   }

   if (lStack_210 != local_248) {
      StringName::unref();
      lStack_210 = local_248;
      local_248 = 0;
   }

   local_208 = CONCAT44(local_208._4_4_, local_240);
   if (local_200 != local_238) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      local_200 = local_238;
      local_238 = 0;
   }

   local_1f8 = CONCAT44(local_1f8._4_4_, local_230);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   local_1d0 = CONCAT44(local_1d0._4_4_, 9);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   local_258 = "AStar2D";
   local_270 = 0;
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_270);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_270, false);
   ClassDB::add_virtual_method((StringName*)&local_258, (MethodInfo*)&local_228, true, (StrRange*)&local_268, false);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   lVar3 = local_1c0;
   if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_1c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_1c0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   piVar9 = local_1d8;
   if (local_1d8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_1d8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_1d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_1d8 + -2 );
         local_1d8 = (int*)0x0;
         if (lVar3 != 0) {
            lVar13 = 0;
            piVar12 = piVar9;
            do {
               if (Variant::needs_deinit[*piVar12] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar12 = piVar12 + 6;
            }
 while ( lVar3 != lVar13 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   if (( StringName::configured != '\0' ) && ( lStack_210 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<String>::_unref((CowData<String>*)&local_260);
   local_260 = 0;
   local_258 = (char*)0x0;
   local_228 = "from_id";
   local_220 = 7;
   String::parse_latin1((StrRange*)&local_258);
   local_228 = (char*)0x0;
   if (local_258 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_258);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_270 = 0;
   local_228 = "to_id";
   local_220 = 5;
   String::parse_latin1((StrRange*)&local_270);
   local_228 = (char*)0x0;
   if (local_270 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_270);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   local_218 = 0;
   lStack_210 = 0;
   local_258 = "_compute_cost";
   local_228 = (char*)0x0;
   local_220 = 0;
   local_208 = 0;
   local_200 = 0;
   local_1f8 = 6;
   local_1f0 = 1;
   local_1e8[0] = 0;
   local_1d8 = (int*)0x0;
   local_1d0 = 0;
   local_1c0 = 0;
   local_250 = 0xd;
   String::parse_latin1((StrRange*)&local_228);
   local_1f0 = CONCAT44(local_1f0._4_4_, 0xc);
   GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_258);
   local_220 = CONCAT44(local_220._4_4_, local_258._0_4_);
   if (local_218 != local_250) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
      local_218 = local_250;
      local_250 = 0;
   }

   if (lStack_210 != local_248) {
      StringName::unref();
      lStack_210 = local_248;
      local_248 = 0;
   }

   local_208 = CONCAT44(local_208._4_4_, local_240);
   if (local_200 != local_238) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      local_200 = local_238;
      local_238 = 0;
   }

   local_1f8 = CONCAT44(local_1f8._4_4_, local_230);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   local_1d0 = CONCAT44(local_1d0._4_4_, 9);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   local_258 = "AStar2D";
   local_270 = 0;
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_270);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_270, false);
   ClassDB::add_virtual_method((StringName*)&local_258, (MethodInfo*)&local_228, true, (StrRange*)&local_268, false);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   lVar3 = local_1c0;
   if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_1c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_1c0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   piVar9 = local_1d8;
   if (local_1d8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_1d8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_1d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_1d8 + -2 );
         local_1d8 = (int*)0x0;
         if (lVar3 != 0) {
            lVar13 = 0;
            piVar12 = piVar9;
            do {
               if (Variant::needs_deinit[*piVar12] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar12 = piVar12 + 6;
            }
 while ( lVar3 != lVar13 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   if (( StringName::configured != '\0' ) && ( lStack_210 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<String>::_unref((CowData<String>*)&local_260);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::_bind_methods() */void AStar3D::_bind_methods(void) {
   long *plVar1;
   char cVar2;
   long lVar3;
   code *pcVar4;
   undefined *puVar5;
   undefined *puVar6;
   undefined *puVar7;
   undefined *puVar8;
   int *piVar9;
   MethodBind *pMVar10;
   uint uVar11;
   int *piVar12;
   long lVar13;
   long in_FS_OFFSET;
   long local_270;
   undefined8 local_268;
   undefined8 local_260;
   char *local_258;
   long local_250;
   long local_248;
   undefined4 local_240;
   long local_238;
   undefined4 local_230;
   char *local_228;
   undefined8 local_220;
   long local_218;
   long lStack_210;
   undefined8 local_208;
   long local_200;
   undefined8 local_1f8;
   undefined8 local_1f0;
   undefined8 local_1e8[2];
   int *local_1d8;
   undefined8 local_1d0;
   Vector<int> local_1c8[8];
   long local_1c0;
   undefined *local_1b8;
   char *pcStack_1b0;
   undefined8 local_1a8;
   undefined *local_198;
   char *pcStack_190;
   undefined8 local_188;
   undefined *local_178;
   char *pcStack_170;
   undefined8 local_168;
   undefined *local_158;
   char *pcStack_150;
   undefined8 local_148;
   undefined *local_138;
   undefined *puStack_130;
   char *local_128;
   undefined8 local_120;
   undefined *local_118;
   undefined *puStack_110;
   char *local_108;
   undefined8 local_100;
   undefined *local_f8;
   undefined *puStack_f0;
   char *local_e8;
   undefined8 local_e0;
   undefined *local_d8;
   undefined *puStack_d0;
   char *local_c8;
   undefined8 local_c0;
   undefined *local_b8;
   undefined *puStack_b0;
   char *local_a8;
   undefined8 local_a0;
   Variant *local_98;
   char *pcStack_90;
   char *local_88;
   undefined8 local_80;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar8 = PTR__LC102_00129228;
   puVar7 = PTR__LC100_00129220;
   puVar6 = PTR__LC51_00129218;
   puVar5 = PTR__LC50_00129210;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_228, (char***)"get_available_point_id", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128690;
   *(code**)( pMVar10 + 0x58 ) = get_available_point_id;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_268 = 0;
   local_258 = "AStar3D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_98 = (Variant*)puVar8;
   pcStack_90 = "position";
   auStack_70._8_8_ = &local_88;
   auStack_70._0_8_ = &pcStack_90;
   local_80 = 0;
   local_88 = "weight_scale";
   uVar11 = (uint)(Variant*)&local_78;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"add_point", uVar11);
   Variant::Variant((Variant*)&local_78, _LC107);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar3D,long,Vector3_const&,float>(add_point);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_point_position", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,Vector3,long>(get_point_position);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_148 = 0;
   local_158 = puVar8;
   pcStack_150 = "position";
   auStack_70._0_8_ = &pcStack_150;
   local_78 = (Variant**)&local_158;
   D_METHODP((char*)&local_228, (char***)"set_point_position", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,long,Vector3_const&>(set_point_position);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_point_weight_scale", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128810;
   *(code**)( pMVar10 + 0x58 ) = get_point_weight_scale;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 1;
   local_268 = 0;
   local_258 = "AStar3D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_168 = 0;
   local_178 = puVar8;
   pcStack_170 = "weight_scale";
   auStack_70._0_8_ = &pcStack_170;
   local_78 = (Variant**)&local_178;
   D_METHODP((char*)&local_228, (char***)"set_point_weight_scale", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,long,float>(set_point_weight_scale);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"remove_point", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,long>(remove_point);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"has_point", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128930;
   *(code**)( pMVar10 + 0x58 ) = has_point;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 1;
   local_268 = 0;
   local_258 = "AStar3D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_point_connections", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,Vector<long>,long>(get_point_connections);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"get_point_ids", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,Vector<long>>(get_point_ids);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_188 = 0;
   local_198 = puVar8;
   pcStack_190 = "disabled";
   auStack_70._0_8_ = &pcStack_190;
   local_78 = (Variant**)&local_198;
   D_METHODP((char*)&local_228, (char***)"set_point_disabled", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar3D,long,bool>(set_point_disabled);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC102;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"is_point_disabled", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128930;
   *(code**)( pMVar10 + 0x58 ) = is_point_disabled;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 1;
   local_268 = 0;
   local_258 = "AStar3D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_b8 = puVar8;
   puStack_b0 = puVar6;
   auStack_70._8_8_ = &local_a8;
   auStack_70._0_8_ = &puStack_b0;
   local_a0 = 0;
   local_a8 = "bidirectional";
   local_78 = (Variant**)&local_b8;
   D_METHODP((char*)&local_228, (char***)"connect_points", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar3D,long,long,bool>(connect_points);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_d8 = puVar8;
   puStack_d0 = puVar6;
   auStack_70._8_8_ = &local_c8;
   auStack_70._0_8_ = &puStack_d0;
   local_c0 = 0;
   local_c8 = "bidirectional";
   local_78 = (Variant**)&local_d8;
   D_METHODP((char*)&local_228, (char***)"disconnect_points", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar3D,long,long,bool>(disconnect_points);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_f8 = puVar8;
   puStack_f0 = puVar6;
   auStack_70._8_8_ = &local_e8;
   auStack_70._0_8_ = &puStack_f0;
   local_e8 = "bidirectional";
   local_e0 = 0;
   local_78 = (Variant**)&local_f8;
   D_METHODP((char*)&local_228, (char***)"are_points_connected", uVar11);
   Variant::Variant((Variant*)&local_78, true);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128b10;
   *(code**)( pMVar10 + 0x58 ) = are_points_connected;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 3;
   local_268 = 0;
   local_258 = "AStar3D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"get_point_count", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128690;
   *(undefined8*)( pMVar10 + 0x58 ) = 0x100000;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_268 = 0;
   local_258 = "AStar3D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"get_point_capacity", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_00128690;
   *(code**)( pMVar10 + 0x58 ) = get_point_capacity;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_268 = 0;
   local_258 = "AStar3D";
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_268);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_268, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_258);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)0x10e65d;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"reserve_space", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,long>(reserve_space);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   D_METHODP((char*)&local_228, (char***)"clear", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D>(clear);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_1a8 = 0;
   local_1b8 = puVar7;
   pcStack_1b0 = "include_disabled";
   auStack_70._0_8_ = &pcStack_1b0;
   local_78 = (Variant**)&local_1b8;
   D_METHODP((char*)&local_228, (char***)"get_closest_point", uVar11);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar3D,long,Vector3_const&,bool>(get_closest_point);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)0x10e593;
   local_78 = &local_98;
   D_METHODP((char*)&local_228, (char***)"get_closest_position_in_segment", uVar11);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar10 = create_method_bind<AStar3D,Vector3,Vector3_const&>(get_closest_position_in_segment);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_118 = puVar5;
   puStack_110 = puVar6;
   auStack_70._8_8_ = &local_108;
   auStack_70._0_8_ = &puStack_110;
   local_100 = 0;
   local_108 = "allow_partial_path";
   local_78 = (Variant**)&local_118;
   D_METHODP((char*)&local_228, (char***)"get_point_path", uVar11);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar3D,Vector<Vector3>,long,long,bool>(get_point_path);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_138 = puVar5;
   puStack_130 = puVar6;
   auStack_70._8_8_ = &local_128;
   auStack_70._0_8_ = &puStack_130;
   local_120 = 0;
   local_128 = "allow_partial_path";
   local_78 = (Variant**)&local_138;
   D_METHODP((char*)&local_228, (char***)"get_id_path", uVar11);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar10 = create_method_bind<AStar3D,Vector<long>,long,long,bool>(get_id_path);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_228, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_228);
   local_260 = 0;
   local_258 = (char*)0x0;
   local_228 = "from_id";
   local_220 = 7;
   String::parse_latin1((StrRange*)&local_258);
   local_228 = (char*)0x0;
   if (local_258 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_258);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_270 = 0;
   local_228 = "end_id";
   local_220 = 6;
   String::parse_latin1((StrRange*)&local_270);
   local_228 = (char*)0x0;
   if (local_270 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_270);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   local_218 = 0;
   lStack_210 = 0;
   local_258 = "_estimate_cost";
   local_228 = (char*)0x0;
   local_220 = 0;
   local_208 = 0;
   local_200 = 0;
   local_1f8 = 6;
   local_1f0 = 1;
   local_1e8[0] = 0;
   local_1d8 = (int*)0x0;
   local_1d0 = 0;
   local_1c0 = 0;
   local_250 = 0xe;
   String::parse_latin1((StrRange*)&local_228);
   local_1f0 = CONCAT44(local_1f0._4_4_, 0xc);
   GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_258);
   local_220 = CONCAT44(local_220._4_4_, local_258._0_4_);
   if (local_218 != local_250) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
      local_218 = local_250;
      local_250 = 0;
   }

   if (lStack_210 != local_248) {
      StringName::unref();
      lStack_210 = local_248;
      local_248 = 0;
   }

   local_208 = CONCAT44(local_208._4_4_, local_240);
   if (local_200 != local_238) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      local_200 = local_238;
      local_238 = 0;
   }

   local_1f8 = CONCAT44(local_1f8._4_4_, local_230);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   local_1d0 = CONCAT44(local_1d0._4_4_, 9);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   local_258 = "AStar3D";
   local_270 = 0;
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_270);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_270, false);
   ClassDB::add_virtual_method((StringName*)&local_258, (MethodInfo*)&local_228, true, (StrRange*)&local_268, false);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   lVar3 = local_1c0;
   if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_1c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_1c0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   piVar9 = local_1d8;
   if (local_1d8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_1d8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_1d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_1d8 + -2 );
         local_1d8 = (int*)0x0;
         if (lVar3 != 0) {
            lVar13 = 0;
            piVar12 = piVar9;
            do {
               if (Variant::needs_deinit[*piVar12] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar12 = piVar12 + 6;
            }
 while ( lVar3 != lVar13 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   if (( StringName::configured != '\0' ) && ( lStack_210 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<String>::_unref((CowData<String>*)&local_260);
   local_260 = 0;
   local_258 = (char*)0x0;
   local_228 = "from_id";
   local_220 = 7;
   String::parse_latin1((StrRange*)&local_258);
   local_228 = (char*)0x0;
   if (local_258 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_258);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_270 = 0;
   local_228 = "to_id";
   local_220 = 5;
   String::parse_latin1((StrRange*)&local_270);
   local_228 = (char*)0x0;
   if (local_270 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_270);
   }

   Vector<String>::push_back((Vector<String>*)&local_268, (MethodDefinition*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   local_218 = 0;
   lStack_210 = 0;
   local_258 = "_compute_cost";
   local_228 = (char*)0x0;
   local_220 = 0;
   local_208 = 0;
   local_200 = 0;
   local_1f8 = 6;
   local_1f0 = 1;
   local_1e8[0] = 0;
   local_1d8 = (int*)0x0;
   local_1d0 = 0;
   local_1c0 = 0;
   local_250 = 0xd;
   String::parse_latin1((StrRange*)&local_228);
   local_1f0 = CONCAT44(local_1f0._4_4_, 0xc);
   GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_258);
   local_220 = CONCAT44(local_220._4_4_, local_258._0_4_);
   if (local_218 != local_250) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
      local_218 = local_250;
      local_250 = 0;
   }

   if (lStack_210 != local_248) {
      StringName::unref();
      lStack_210 = local_248;
      local_248 = 0;
   }

   local_208 = CONCAT44(local_208._4_4_, local_240);
   if (local_200 != local_238) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      local_200 = local_238;
      local_238 = 0;
   }

   local_1f8 = CONCAT44(local_1f8._4_4_, local_230);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   local_1d0 = CONCAT44(local_1d0._4_4_, 9);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_258);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1e8, (PropertyInfo*)&local_258);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_258);
   Vector<int>::push_back(local_1c8, 4);
   local_258 = "AStar3D";
   local_270 = 0;
   local_250 = 7;
   String::parse_latin1((StrRange*)&local_270);
   StringName::StringName((StringName*)&local_258, (StrRange*)&local_270, false);
   ClassDB::add_virtual_method((StringName*)&local_258, (MethodInfo*)&local_228, true, (StrRange*)&local_268, false);
   if (( StringName::configured != '\0' ) && ( local_258 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   lVar3 = local_1c0;
   if (local_1c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_1c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_1c0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   piVar9 = local_1d8;
   if (local_1d8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_1d8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_1d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_1d8 + -2 );
         local_1d8 = (int*)0x0;
         if (lVar3 != 0) {
            lVar13 = 0;
            piVar12 = piVar9;
            do {
               if (Variant::needs_deinit[*piVar12] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar12 = piVar12 + 6;
            }
 while ( lVar3 != lVar13 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   if (( StringName::configured != '\0' ) && ( lStack_210 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<String>::_unref((CowData<String>*)&local_260);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::_compute_cost(long, long) */void AStar2D::_compute_cost(AStar2D *this, long param_1, long param_2) {
   uint uVar1;
   undefined4 uVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   code *pcVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 local_158;
   long local_150;
   long local_148;
   long local_140[5];
   int local_118[2];
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   long *local_78;
   long *plStack_70;
   int local_60[8];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, param_1);
      Variant::Variant((Variant*)local_60, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x3a8, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         Variant::operator_cast_to_float((Variant*)local_98);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010a6e7;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x3b0] == (AStar2D)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
      local_108 = (undefined1[16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)local_118, "_compute_cost");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = CONCAT44(local_c0._4_4_, 9);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x3b8 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "AStar2D");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010acce;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010aceb:lVar5 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar5 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010abd7;
            uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x3a8);
            *(undefined8*)( this + 0x3b8 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010acce:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_0010aceb;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x3a8, uVar2);
         *(undefined8*)( this + 0x3b8 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_0010abd7:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x3b8 );
         plVar6[1] = (long)( this + 0x3b0 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x3b0] = (AStar2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   pcVar8 = *(code**)( this + 0x3b8 );
   if (pcVar8 == (code*)0x0) {
      uVar1 = *(uint*)( this + 0x328 );
      uVar7 = (ulong)uVar1;
      lVar5 = *(long*)( this + 800 );
      uVar3 = param_1 * 0x3ffff - 1;
      uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
      uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
      uVar3 = uVar3 >> 0x16 ^ uVar3;
      uVar11 = uVar3 & 0xffffffff;
      if ((int)uVar3 == 0) {
         uVar11 = 1;
      }

      uVar3 = uVar11 % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (uVar10 != 0) {
         uVar9 = 0;
         do {
            if (( uVar10 == (uint)uVar11 ) && ( *(long*)( *(long*)( this + 0x318 ) + uVar3 * 8 ) == param_1 )) {
               uVar3 = param_2 * 0x3ffff - 1;
               uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
               uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
               uVar3 = uVar3 >> 0x16 ^ uVar3;
               uVar11 = uVar3 & 0xffffffff;
               if ((int)uVar3 == 0) {
                  uVar11 = 1;
               }

               uVar3 = uVar11 % uVar7;
               uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
               if (uVar10 == 0) goto LAB_0010a950;
               uVar9 = 0;
               goto LAB_0010a888;
            }

            uVar9 = uVar9 + 1;
            uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
            uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
         }
 while ( ( uVar10 != 0 ) && ( uVar9 <= ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 ) );
      }

      local_148 = 0;
      String::parse_latin1((String*)&local_148, "Can\'t compute cost. Point with id: %d doesn\'t exist.");
      vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
      _err_print_error("_compute_cost", "core/math/a_star.cpp", 0x2be, "Condition \"!from_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   }
 else {
      plStack_70 = &local_148;
      local_78 = &local_150;
      local_150 = param_1;
      local_148 = param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( this + 0x10 ), &local_78, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3a8, pcVar8, &local_78, local_118);
      }

   }

   LAB_0010a6e7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   while (true) {
      uVar9 = uVar9 + 1;
      uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (( uVar10 == 0 ) || ( ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 < uVar9 )) break;
      LAB_0010a888:if (( (uint)uVar11 == uVar10 ) && ( *(long*)( *(long*)( this + 0x318 ) + uVar3 * 8 ) == param_2 )) goto LAB_0010a6e7;
   }
;
   LAB_0010a950:local_148 = 0;
   String::parse_latin1((String*)&local_148, "Can\'t compute cost. Point with id: %d doesn\'t exist.");
   vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
   _err_print_error("_compute_cost", "core/math/a_star.cpp", 0x2c2, "Condition \"!to_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   goto LAB_0010a6e7;
}
/* AStar2D::_estimate_cost(long, long) */void AStar2D::_estimate_cost(AStar2D *this, long param_1, long param_2) {
   uint uVar1;
   undefined4 uVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   code *pcVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 local_158;
   long local_150;
   long local_148;
   long local_140[5];
   int local_118[2];
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   long *local_78;
   long *plStack_70;
   int local_60[8];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, param_1);
      Variant::Variant((Variant*)local_60, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x390, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         Variant::operator_cast_to_float((Variant*)local_98);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010af37;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x398] == (AStar2D)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
      local_108 = (undefined1[16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)local_118, "_estimate_cost");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = CONCAT44(local_c0._4_4_, 9);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x3a0 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "AStar2D");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010b51e;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010b53b:lVar5 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar5 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010b427;
            uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x390);
            *(undefined8*)( this + 0x3a0 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010b51e:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_0010b53b;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x390, uVar2);
         *(undefined8*)( this + 0x3a0 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_0010b427:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x3a0 );
         plVar6[1] = (long)( this + 0x398 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x398] = (AStar2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   pcVar8 = *(code**)( this + 0x3a0 );
   if (pcVar8 == (code*)0x0) {
      uVar1 = *(uint*)( this + 0x328 );
      uVar7 = (ulong)uVar1;
      lVar5 = *(long*)( this + 800 );
      uVar3 = param_1 * 0x3ffff - 1;
      uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
      uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
      uVar3 = uVar3 >> 0x16 ^ uVar3;
      uVar11 = uVar3 & 0xffffffff;
      if ((int)uVar3 == 0) {
         uVar11 = 1;
      }

      uVar3 = uVar11 % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (uVar10 != 0) {
         uVar9 = 0;
         do {
            if (( uVar10 == (uint)uVar11 ) && ( *(long*)( *(long*)( this + 0x318 ) + uVar3 * 8 ) == param_1 )) {
               uVar3 = param_2 * 0x3ffff - 1;
               uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
               uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
               uVar3 = uVar3 >> 0x16 ^ uVar3;
               uVar11 = uVar3 & 0xffffffff;
               if ((int)uVar3 == 0) {
                  uVar11 = 1;
               }

               uVar3 = uVar11 % uVar7;
               uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
               if (uVar10 == 0) goto LAB_0010b1a0;
               uVar9 = 0;
               goto LAB_0010b0d8;
            }

            uVar9 = uVar9 + 1;
            uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
            uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
         }
 while ( ( uVar10 != 0 ) && ( uVar9 <= ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 ) );
      }

      local_148 = 0;
      String::parse_latin1((String*)&local_148, "Can\'t estimate cost. Point with id: %d doesn\'t exist.");
      vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
      _err_print_error("_estimate_cost", "core/math/a_star.cpp", 0x2ad, "Condition \"!from_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   }
 else {
      plStack_70 = &local_148;
      local_78 = &local_150;
      local_150 = param_1;
      local_148 = param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( this + 0x10 ), &local_78, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x390, pcVar8, &local_78, local_118);
      }

   }

   LAB_0010af37:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   while (true) {
      uVar9 = uVar9 + 1;
      uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (( uVar10 == 0 ) || ( ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 < uVar9 )) break;
      LAB_0010b0d8:if (( (uint)uVar11 == uVar10 ) && ( *(long*)( *(long*)( this + 0x318 ) + uVar3 * 8 ) == param_2 )) goto LAB_0010af37;
   }
;
   LAB_0010b1a0:local_148 = 0;
   String::parse_latin1((String*)&local_148, "Can\'t estimate cost. Point with id: %d doesn\'t exist.");
   vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
   _err_print_error("_estimate_cost", "core/math/a_star.cpp", 0x2b1, "Condition \"!to_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   goto LAB_0010af37;
}
/* AStar3D::_compute_cost(long, long) */void AStar3D::_compute_cost(AStar3D *this, long param_1, long param_2) {
   uint uVar1;
   undefined4 uVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   code *pcVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 local_158;
   long local_150;
   long local_148;
   long local_140[5];
   int local_118[2];
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   long *local_78;
   long *plStack_70;
   int local_60[8];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, param_1);
      Variant::Variant((Variant*)local_60, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x1f8, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         Variant::operator_cast_to_float((Variant*)local_98);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010b787;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x200] == (AStar3D)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
      local_108 = (undefined1[16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)local_118, "_compute_cost");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = CONCAT44(local_c0._4_4_, 9);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x208 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "AStar3D");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010bd7e;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010bd9b:lVar5 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar5 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010bc87;
            uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1f8);
            *(undefined8*)( this + 0x208 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010bd7e:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_0010bd9b;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1f8, uVar2);
         *(undefined8*)( this + 0x208 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_0010bc87:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x208 );
         plVar6[1] = (long)( this + 0x200 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x200] = (AStar3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   pcVar8 = *(code**)( this + 0x208 );
   if (pcVar8 == (code*)0x0) {
      uVar1 = *(uint*)( this + 0x1a8 );
      uVar7 = (ulong)uVar1;
      lVar5 = *(long*)( this + 0x1a0 );
      uVar3 = param_1 * 0x3ffff - 1;
      uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
      uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
      uVar3 = uVar3 >> 0x16 ^ uVar3;
      uVar11 = uVar3 & 0xffffffff;
      if ((int)uVar3 == 0) {
         uVar11 = 1;
      }

      uVar3 = uVar11 % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (uVar10 != 0) {
         uVar9 = 0;
         do {
            if (( uVar10 == (uint)uVar11 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) == param_1 )) {
               uVar3 = param_2 * 0x3ffff - 1;
               uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
               uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
               uVar3 = uVar3 >> 0x16 ^ uVar3;
               uVar11 = uVar3 & 0xffffffff;
               if ((int)uVar3 == 0) {
                  uVar11 = 1;
               }

               uVar3 = uVar11 % uVar7;
               uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
               if (uVar10 == 0) goto LAB_0010ba00;
               uVar9 = 0;
               goto LAB_0010b928;
            }

            uVar9 = uVar9 + 1;
            uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
            uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
         }
 while ( ( uVar10 != 0 ) && ( uVar9 <= ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 ) );
      }

      local_148 = 0;
      uStack_110 = 0x34;
      uStack_10c = 0;
      local_118[0] = 0x10ee28;
      local_118[1] = 0;
      String::parse_latin1((StrRange*)&local_148);
      vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
      _err_print_error("_compute_cost", "core/math/a_star.cpp", 0x1a2, "Condition \"!from_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   }
 else {
      plStack_70 = &local_148;
      local_78 = &local_150;
      local_150 = param_1;
      local_148 = param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( this + 0x10 ), &local_78, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1f8, pcVar8, &local_78, local_118);
      }

   }

   LAB_0010b787:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   while (true) {
      uVar9 = uVar9 + 1;
      uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (( uVar10 == 0 ) || ( ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 < uVar9 )) break;
      LAB_0010b928:if (( (uint)uVar11 == uVar10 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) == param_2 )) goto LAB_0010b787;
   }
;
   LAB_0010ba00:local_148 = 0;
   String::parse_latin1((String*)&local_148, "Can\'t compute cost. Point with id: %d doesn\'t exist.");
   vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
   _err_print_error("_compute_cost", "core/math/a_star.cpp", 0x1a6, "Condition \"!to_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   goto LAB_0010b787;
}
/* AStar3D::_estimate_cost(long, long) */void AStar3D::_estimate_cost(AStar3D *this, long param_1, long param_2) {
   uint uVar1;
   undefined4 uVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   code *pcVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 local_158;
   long local_150;
   long local_148;
   long local_140[5];
   int local_118[2];
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   long *local_78;
   long *plStack_70;
   int local_60[8];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, param_1);
      Variant::Variant((Variant*)local_60, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x1e0, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         Variant::operator_cast_to_float((Variant*)local_98);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010bfe7;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1e8] == (AStar3D)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
      local_108 = (undefined1[16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)local_118, "_estimate_cost");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = CONCAT44(local_c0._4_4_, 9);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 4);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x1f0 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "AStar3D");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010c5de;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010c5fb:lVar5 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar5 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010c4e7;
            uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1e0);
            *(undefined8*)( this + 0x1f0 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010c5de:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_0010c5fb;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1e0, uVar2);
         *(undefined8*)( this + 0x1f0 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_0010c4e7:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x1f0 );
         plVar6[1] = (long)( this + 0x1e8 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x1e8] = (AStar3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   pcVar8 = *(code**)( this + 0x1f0 );
   if (pcVar8 == (code*)0x0) {
      uVar1 = *(uint*)( this + 0x1a8 );
      uVar7 = (ulong)uVar1;
      lVar5 = *(long*)( this + 0x1a0 );
      uVar3 = param_1 * 0x3ffff - 1;
      uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
      uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
      uVar3 = uVar3 >> 0x16 ^ uVar3;
      uVar11 = uVar3 & 0xffffffff;
      if ((int)uVar3 == 0) {
         uVar11 = 1;
      }

      uVar3 = uVar11 % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (uVar10 != 0) {
         uVar9 = 0;
         do {
            if (( uVar10 == (uint)uVar11 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) == param_1 )) {
               uVar3 = param_2 * 0x3ffff - 1;
               uVar3 = ( uVar3 ^ uVar3 >> 0x1f ) * 0x15;
               uVar3 = ( uVar3 ^ uVar3 >> 0xb ) * 0x41;
               uVar3 = uVar3 >> 0x16 ^ uVar3;
               uVar11 = uVar3 & 0xffffffff;
               if ((int)uVar3 == 0) {
                  uVar11 = 1;
               }

               uVar3 = uVar11 % uVar7;
               uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
               if (uVar10 == 0) goto LAB_0010c260;
               uVar9 = 0;
               goto LAB_0010c188;
            }

            uVar9 = uVar9 + 1;
            uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
            uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
         }
 while ( ( uVar10 != 0 ) && ( uVar9 <= ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 ) );
      }

      local_148 = 0;
      uStack_110 = 0x35;
      uStack_10c = 0;
      local_118[0] = 0x10eec0;
      local_118[1] = 0;
      String::parse_latin1((StrRange*)&local_148);
      vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
      _err_print_error("_estimate_cost", "core/math/a_star.cpp", 0x191, "Condition \"!from_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   }
 else {
      plStack_70 = &local_148;
      local_78 = &local_150;
      local_150 = param_1;
      local_148 = param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( this + 0x10 ), &local_78, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1e0, pcVar8, &local_78, local_118);
      }

   }

   LAB_0010bfe7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   while (true) {
      uVar9 = uVar9 + 1;
      uVar3 = ( ulong )((int)uVar3 + 1) % uVar7;
      uVar10 = *(uint*)( lVar5 + uVar3 * 4 );
      if (( uVar10 == 0 ) || ( ( ( uVar1 + (int)uVar3 ) - uVar10 % uVar1 ) % uVar1 < uVar9 )) break;
      LAB_0010c188:if (( (uint)uVar11 == uVar10 ) && ( *(long*)( *(long*)( this + 0x198 ) + uVar3 * 8 ) == param_2 )) goto LAB_0010bfe7;
   }
;
   LAB_0010c260:local_148 = 0;
   String::parse_latin1((String*)&local_148, "Can\'t estimate cost. Point with id: %d doesn\'t exist.");
   vformat<long>((CowData<char32_t>*)local_118, (long)&local_148);
   _err_print_error("_estimate_cost", "core/math/a_star.cpp", 0x195, "Condition \"!end_exists\" is true. Returning: 0", (CowData<char32_t>*)local_118, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   goto LAB_0010bfe7;
}
/* Vector<long>::push_back(long) [clone .isra.0] */void Vector<long>::push_back(Vector<long> *this, long param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<long>::resize<false>((CowData<long>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<long>::_copy_on_write((CowData<long>*)( this + 8 ));
            *(long*)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* AStar2D::get_id_path(long, long, bool) */long AStar2D::get_id_path(long param_1, long param_2, bool param_3) {
   uint uVar1;
   Point *pPVar2;
   undefined8 uVar3;
   char cVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long in_RCX;
   ulong uVar7;
   undefined7 in_register_00000011;
   Point *pPVar8;
   long lVar9;
   long lVar10;
   bool in_R8B;
   uint uVar11;
   ulong uVar12;
   Point *pPVar13;
   uint uVar14;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   undefined8 *local_50[2];
   long local_40;
   uVar1 = *(uint*)( param_2 + 0x328 );
   uVar7 = (ulong)uVar1;
   lVar10 = *(long*)( param_2 + 800 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = CONCAT71(in_register_00000011, param_3) * 0x3ffff - 1;
   uVar5 = ( uVar5 ^ uVar5 >> 0x1f ) * 0x15;
   uVar5 = ( uVar5 ^ uVar5 >> 0xb ) * 0x41;
   uVar5 = uVar5 >> 0x16 ^ uVar5;
   uVar12 = uVar5 & 0xffffffff;
   if ((int)uVar5 == 0) {
      uVar12 = 1;
   }

   uVar5 = uVar12 % uVar7;
   uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
   if (uVar14 != 0) {
      uVar11 = 0;
      do {
         if (( (uint)uVar12 == uVar14 ) && ( *(long*)( *(long*)( param_2 + 0x318 ) + uVar5 * 8 ) == CONCAT71(in_register_00000011, param_3) )) {
            pPVar2 = *(Point**)( *(long*)( param_2 + 0x310 ) + uVar5 * 8 );
            uVar5 = in_RCX * 0x3ffff - 1;
            uVar5 = ( uVar5 ^ uVar5 >> 0x1f ) * 0x15;
            uVar5 = ( uVar5 ^ uVar5 >> 0xb ) * 0x41;
            uVar5 = uVar5 >> 0x16 ^ uVar5;
            uVar12 = uVar5 & 0xffffffff;
            if ((int)uVar5 == 0) {
               uVar12 = 1;
            }

            uVar5 = uVar12 % uVar7;
            uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
            if (uVar14 == 0) goto LAB_0010cac8;
            uVar11 = 0;
            goto LAB_0010c971;
         }

         uVar11 = uVar11 + 1;
         uVar5 = ( ulong )((int)uVar5 + 1) % uVar7;
         uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
      }
 while ( ( uVar14 != 0 ) && ( uVar11 <= ( ( uVar1 + (int)uVar5 ) - uVar14 % uVar1 ) % uVar1 ) );
   }

   local_60 = 0;
   local_50[0] = (undefined8*)0x33;
   local_58 = "Can\'t get id path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_60);
   _err_print_error("get_id_path", "core/math/a_star.cpp", 0x2ff, "Condition \"!from_exists\" is true. Returning: Vector<int64_t>()", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   *(undefined8*)( param_1 + 8 ) = 0;
   goto LAB_0010ca9e;
   while (true) {
      uVar11 = uVar11 + 1;
      uVar5 = ( ulong )((int)uVar5 + 1) % uVar7;
      uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
      if (( uVar14 == 0 ) || ( ( ( uVar1 + (int)uVar5 ) - uVar14 % uVar1 ) % uVar1 < uVar11 )) break;
      LAB_0010c971:if (( (uint)uVar12 == uVar14 ) && ( *(long*)( *(long*)( param_2 + 0x318 ) + uVar5 * 8 ) == in_RCX )) {
         pPVar8 = *(Point**)( *(long*)( param_2 + 0x310 ) + uVar5 * 8 );
         if (pPVar2 == pPVar8) {
            local_50[0] = (undefined8*)0x0;
            Vector<long>::push_back((Vector<long>*)&local_58, *(long*)pPVar2);
            *(undefined8**)( param_1 + 8 ) = local_50[0];
            goto LAB_0010ca9e;
         }

         cVar4 = _solve((AStar2D*)param_2, pPVar2, pPVar8, in_R8B);
         if (cVar4 == '\0') {
            if (( in_R8B == false ) || ( pPVar8 = *(Point**)( param_2 + 0x358 ) ),pPVar8 == (Point*)0x0) {
               *(undefined8*)( param_1 + 8 ) = 0;
               goto LAB_0010ca9e;
            }

            if (pPVar8 == pPVar2) {
               local_50[0] = (undefined8*)0x0;
               CowData<long>::resize<false>((CowData<long>*)local_50, 1);
               CowData<long>::_copy_on_write((CowData<long>*)local_50);
               goto LAB_0010ca05;
            }

         }

         lVar10 = 1;
         pPVar13 = pPVar8;
         do {
            lVar9 = lVar10;
            pPVar13 = *(Point**)( pPVar13 + 0x60 );
            lVar10 = lVar9 + 1;
         }
 while ( pPVar13 != pPVar2 );
         local_50[0] = (undefined8*)0x0;
         CowData<long>::resize<false>((CowData<long>*)local_50, lVar10);
         CowData<long>::_copy_on_write((CowData<long>*)local_50);
         puVar6 = local_50[0] + lVar9;
         do {
            uVar3 = *(undefined8*)pPVar8;
            pPVar8 = *(Point**)( pPVar8 + 0x60 );
            *puVar6 = uVar3;
            puVar6 = puVar6 + -1;
         }
 while ( pPVar8 != pPVar2 );
         LAB_0010ca05:*local_50[0] = *(undefined8*)pPVar2;
         *(undefined8**)( param_1 + 8 ) = local_50[0];
         goto LAB_0010ca9e;
      }

   }
;
   LAB_0010cac8:local_60 = 0;
   local_50[0] = (undefined8*)0x33;
   local_58 = "Can\'t get id path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_60);
   _err_print_error("get_id_path", "core/math/a_star.cpp", 0x303, "Condition \"!to_exists\" is true. Returning: Vector<int64_t>()", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_0010ca9e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::_get_id_path_bind_compat_88047(long, long) */AStar2D * __thiscall
AStar2D::_get_id_path_bind_compat_88047(AStar2D *this,long param_1,long param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   get_id_path((long)this, param_1, SUB81(param_2, 0));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::get_id_path(long, long, bool) */long AStar3D::get_id_path(long param_1, long param_2, bool param_3) {
   uint uVar1;
   Point *pPVar2;
   undefined8 uVar3;
   char cVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long in_RCX;
   ulong uVar7;
   undefined7 in_register_00000011;
   Point *pPVar8;
   long lVar9;
   long lVar10;
   bool in_R8B;
   uint uVar11;
   ulong uVar12;
   Point *pPVar13;
   uint uVar14;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   undefined8 *local_50[2];
   long local_40;
   uVar1 = *(uint*)( param_2 + 0x1a8 );
   uVar7 = (ulong)uVar1;
   lVar10 = *(long*)( param_2 + 0x1a0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = CONCAT71(in_register_00000011, param_3) * 0x3ffff - 1;
   uVar5 = ( uVar5 ^ uVar5 >> 0x1f ) * 0x15;
   uVar5 = ( uVar5 ^ uVar5 >> 0xb ) * 0x41;
   uVar5 = uVar5 >> 0x16 ^ uVar5;
   uVar12 = uVar5 & 0xffffffff;
   if ((int)uVar5 == 0) {
      uVar12 = 1;
   }

   uVar5 = uVar12 % uVar7;
   uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
   if (uVar14 != 0) {
      uVar11 = 0;
      do {
         if (( (uint)uVar12 == uVar14 ) && ( *(long*)( *(long*)( param_2 + 0x198 ) + uVar5 * 8 ) == CONCAT71(in_register_00000011, param_3) )) {
            pPVar2 = *(Point**)( *(long*)( param_2 + 400 ) + uVar5 * 8 );
            uVar5 = in_RCX * 0x3ffff - 1;
            uVar5 = ( uVar5 ^ uVar5 >> 0x1f ) * 0x15;
            uVar5 = ( uVar5 ^ uVar5 >> 0xb ) * 0x41;
            uVar5 = uVar5 >> 0x16 ^ uVar5;
            uVar12 = uVar5 & 0xffffffff;
            if ((int)uVar5 == 0) {
               uVar12 = 1;
            }

            uVar5 = uVar12 % uVar7;
            uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
            if (uVar14 == 0) goto LAB_0010cf38;
            uVar11 = 0;
            goto LAB_0010cde1;
         }

         uVar11 = uVar11 + 1;
         uVar5 = ( ulong )((int)uVar5 + 1) % uVar7;
         uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
      }
 while ( ( uVar14 != 0 ) && ( uVar11 <= ( ( uVar1 + (int)uVar5 ) - uVar14 % uVar1 ) % uVar1 ) );
   }

   local_60 = 0;
   local_50[0] = (undefined8*)0x33;
   local_58 = "Can\'t get id path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_60);
   _err_print_error("get_id_path", "core/math/a_star.cpp", 0x1e4, "Condition \"!from_exists\" is true. Returning: Vector<int64_t>()", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   *(undefined8*)( param_1 + 8 ) = 0;
   goto LAB_0010cf0e;
   while (true) {
      uVar11 = uVar11 + 1;
      uVar5 = ( ulong )((int)uVar5 + 1) % uVar7;
      uVar14 = *(uint*)( lVar10 + uVar5 * 4 );
      if (( uVar14 == 0 ) || ( ( ( uVar1 + (int)uVar5 ) - uVar14 % uVar1 ) % uVar1 < uVar11 )) break;
      LAB_0010cde1:if (( (uint)uVar12 == uVar14 ) && ( *(long*)( *(long*)( param_2 + 0x198 ) + uVar5 * 8 ) == in_RCX )) {
         pPVar8 = *(Point**)( *(long*)( param_2 + 400 ) + uVar5 * 8 );
         if (pPVar2 == pPVar8) {
            local_50[0] = (undefined8*)0x0;
            Vector<long>::push_back((Vector<long>*)&local_58, *(long*)pPVar2);
            *(undefined8**)( param_1 + 8 ) = local_50[0];
            goto LAB_0010cf0e;
         }

         cVar4 = _solve((AStar3D*)param_2, pPVar2, pPVar8, in_R8B);
         if (cVar4 == '\0') {
            if (( in_R8B == false ) || ( pPVar8 = *(Point**)( param_2 + 0x1d8 ) ),pPVar8 == (Point*)0x0) {
               *(undefined8*)( param_1 + 8 ) = 0;
               goto LAB_0010cf0e;
            }

            if (pPVar8 == pPVar2) {
               local_50[0] = (undefined8*)0x0;
               CowData<long>::resize<false>((CowData<long>*)local_50, 1);
               CowData<long>::_copy_on_write((CowData<long>*)local_50);
               goto LAB_0010ce75;
            }

         }

         lVar10 = 1;
         pPVar13 = pPVar8;
         do {
            lVar9 = lVar10;
            pPVar13 = *(Point**)( pPVar13 + 0x60 );
            lVar10 = lVar9 + 1;
         }
 while ( pPVar13 != pPVar2 );
         local_50[0] = (undefined8*)0x0;
         CowData<long>::resize<false>((CowData<long>*)local_50, lVar10);
         CowData<long>::_copy_on_write((CowData<long>*)local_50);
         puVar6 = local_50[0] + lVar9;
         do {
            uVar3 = *(undefined8*)pPVar8;
            pPVar8 = *(Point**)( pPVar8 + 0x60 );
            *puVar6 = uVar3;
            puVar6 = puVar6 + -1;
         }
 while ( pPVar8 != pPVar2 );
         LAB_0010ce75:*local_50[0] = *(undefined8*)pPVar2;
         *(undefined8**)( param_1 + 8 ) = local_50[0];
         goto LAB_0010cf0e;
      }

   }
;
   LAB_0010cf38:local_60 = 0;
   local_50[0] = (undefined8*)0x33;
   local_58 = "Can\'t get id path. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   vformat<long>((CowData<char32_t>*)&local_58, (long)&local_60);
   _err_print_error("get_id_path", "core/math/a_star.cpp", 0x1e8, "Condition \"!to_exists\" is true. Returning: Vector<int64_t>()", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_0010cf0e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::_get_id_path_bind_compat_88047(long, long) */AStar3D * __thiscall
AStar3D::_get_id_path_bind_compat_88047(AStar3D *this,long param_1,long param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   get_id_path((long)this, param_1, SUB81(param_2, 0));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::get_point_connections(long) */long AStar3D::get_point_connections(long param_1) {
   long lVar1;
   ulong uVar2;
   long *plVar3;
   long in_RDX;
   uint uVar4;
   long in_RSI;
   uint uVar5;
   uint uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar4 = *(uint*)( in_RSI + 0x1a8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = in_RDX * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar7 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar7 = 1;
   }

   uVar2 = uVar7 % (ulong)uVar4;
   uVar5 = *(uint*)( *(long*)( in_RSI + 0x1a0 ) + uVar2 * 4 );
   if (uVar5 != 0) {
      uVar6 = 0;
      do {
         if (( (uint)uVar7 == uVar5 ) && ( *(long*)( *(long*)( in_RSI + 0x198 ) + uVar2 * 8 ) == in_RDX )) {
            lVar1 = *(long*)( *(long*)( in_RSI + 400 ) + uVar2 * 8 );
            local_40 = 0;
            uVar2 = 0;
            while (uVar7 = uVar2,*(uint*)( lVar1 + 0x38 ) != uVar7) {
               uVar2 = uVar7 + 1;
               if (*(int*)( *(long*)( lVar1 + 0x30 ) + uVar7 * 4 ) != 0) {
                  uVar4 = (uint)uVar7;
                  plVar3 = (long*)( *(long*)( lVar1 + 0x28 ) + uVar7 * 8 );
                  do {
                     uVar4 = uVar4 + 1;
                     Vector<long>::push_back((Vector<long>*)&local_48, *plVar3);
                     uVar2 = (ulong)uVar4;
                     while (true) {
                        if (*(uint*)( lVar1 + 0x38 ) <= uVar4) goto LAB_0010d225;
                        if (*(int*)( *(long*)( lVar1 + 0x30 ) + uVar2 * 4 ) != 0) break;
                        uVar4 = ( uint )(uVar2 + 1);
                        uVar2 = uVar2 + 1;
                     }
;
                     plVar3 = (long*)( *(long*)( lVar1 + 0x28 ) + uVar2 * 8 );
                  }
 while ( true );
               }

            }
;
            LAB_0010d225:*(undefined8*)( param_1 + 8 ) = local_40;
            goto LAB_0010d2b8;
         }

         uVar6 = uVar6 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar4;
         uVar5 = *(uint*)( *(long*)( in_RSI + 0x1a0 ) + uVar2 * 4 );
      }
 while ( ( uVar5 != 0 ) && ( uVar6 <= ( ( uVar4 + (int)uVar2 ) - uVar5 % uVar4 ) % uVar4 ) );
   }

   local_50 = 0;
   local_40 = 0x3f;
   local_48 = "Can\'t get point\'s connections. Point with id: %d doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_50);
   vformat<long>((CowData<char32_t>*)&local_48, (long)&local_50);
   _err_print_error("get_point_connections", "core/math/a_star.cpp", 0xe1, "Condition \"!p_exists\" is true. Returning: Vector<int64_t>()", (CowData<char32_t>*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_0010d2b8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::get_point_connections(long) */long AStar2D::get_point_connections(long param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   AStar3D::get_point_connections(param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::get_point_ids() */void AStar3D::get_point_ids(void) {
   ulong uVar1;
   ulong uVar2;
   long *plVar3;
   uint uVar4;
   long in_RSI;
   Vector<long> *in_RDI;
   uVar4 = *(uint*)( in_RSI + 0x1a8 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   uVar1 = 0;
   do {
      uVar2 = uVar1;
      if (uVar2 == uVar4) {
         return;
      }

      uVar1 = uVar2 + 1;
   }
 while ( *(int*)( *(long*)( in_RSI + 0x1a0 ) + uVar2 * 4 ) == 0 );
   uVar4 = (uint)uVar2;
   plVar3 = (long*)( *(long*)( in_RSI + 0x198 ) + uVar2 * 8 );
   do {
      uVar4 = uVar4 + 1;
      Vector<long>::push_back(in_RDI, *plVar3);
      uVar1 = (ulong)uVar4;
      while (true) {
         if (*(uint*)( in_RSI + 0x1a8 ) <= uVar4) {
            return;
         }

         if (*(int*)( *(long*)( in_RSI + 0x1a0 ) + uVar1 * 4 ) != 0) break;
         uVar4 = ( uint )(uVar1 + 1);
         uVar1 = uVar1 + 1;
      }
;
      plVar3 = (long*)( *(long*)( in_RSI + 0x198 ) + uVar1 * 8 );
   }
 while ( true );
}
/* AStar2D::get_point_ids() */AStar2D * __thiscall AStar2D::get_point_ids(AStar2D *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   AStar3D::get_point_ids();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x128f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x128f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* AStar3D::is_class_ptr(void*) const */uint AStar3D::is_class_ptr(AStar3D *this, void *param_1) {
   return (uint)CONCAT71(0x128f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x128f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x128f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AStar3D::_getv(StringName const&, Variant&) const */undefined8 AStar3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AStar3D::_setv(StringName const&, Variant const&) */undefined8 AStar3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AStar3D::_validate_propertyv(PropertyInfo&) const */void AStar3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AStar3D::_property_can_revertv(StringName const&) const */undefined8 AStar3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AStar3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 AStar3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AStar3D::_notificationv(int, bool) */void AStar3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* AStar2D::is_class_ptr(void*) const */uint AStar2D::is_class_ptr(AStar2D *this, void *param_1) {
   return (uint)CONCAT71(0x128f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x128f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x128f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AStar2D::_getv(StringName const&, Variant&) const */undefined8 AStar2D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AStar2D::_setv(StringName const&, Variant const&) */undefined8 AStar2D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AStar2D::_validate_propertyv(PropertyInfo&) const */void AStar2D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AStar2D::_property_can_revertv(StringName const&) const */undefined8 AStar2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AStar2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 AStar2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AStar2D::_notificationv(int, bool) */void AStar2D::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTR<Vector<Vector2>, long, long, bool>::_gen_argument_type(int) const */char MethodBindTR<Vector<Vector2>,long,long,bool>::_gen_argument_type(MethodBindTR<Vector<Vector2>,long,long,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '#';
   if ((uint)param_1 < 3) {
      cVar1 = ( param_1 != 2 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindTR<Vector<Vector2>, long, long, bool>::get_argument_meta(int) const */long MethodBindTR<Vector<Vector2>,long,long,bool>::get_argument_meta(MethodBindTR<Vector<Vector2>,long,long,bool> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )((uint)param_1 < 2) << 2;
   }

   return lVar1;
}
/* MethodBindTRC<Vector2, Vector2 const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector2,Vector2_const&>::_gen_argument_type(int param_1) {
   return 5;
}
/* MethodBindTRC<Vector2, Vector2 const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector2,Vector2_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<long, Vector2 const&, bool>::_gen_argument_type(int) const */char MethodBindTRC<long,Vector2_const&,bool>::_gen_argument_type(MethodBindTRC<long,Vector2_const&,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x02';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 4U ) + 1;
   }

   return cVar1;
}
/* MethodBindTRC<long, Vector2 const&, bool>::get_argument_meta(int) const */int MethodBindTRC<long,Vector2_const&,bool>::get_argument_meta(MethodBindTRC<long,Vector2_const&,bool> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -4;
}
/* MethodBindT<long, Vector2 const&>::_gen_argument_type(int) const */int MethodBindT<long,Vector2_const&>::_gen_argument_type(MethodBindT<long,Vector2_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffd ) + 5;
   }

   return iVar1;
}
/* MethodBindT<long, Vector2 const&>::get_argument_meta(int) const */long MethodBindT<long,Vector2_const&>::get_argument_meta(MethodBindT<long,Vector2_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindTRC<Vector2, long>::_gen_argument_type(int) const */int MethodBindTRC<Vector2,long>::_gen_argument_type(MethodBindTRC<Vector2,long> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffd ) + 5;
}
/* MethodBindTRC<Vector2, long>::get_argument_meta(int) const */long MethodBindTRC<Vector2,long>::get_argument_meta(MethodBindTRC<Vector2,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<long, Vector2 const&, float>::get_argument_meta(int) const */char MethodBindT<long,Vector2_const&,float>::get_argument_meta(MethodBindT<long,Vector2_const&,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x04';
   if (param_1 != 0) {
      cVar1 = ( param_1 == 2 ) * '\t';
   }

   return cVar1;
}
/* MethodBindTR<Vector<long>, long, long, bool>::_gen_argument_type(int) const */char MethodBindTR<Vector<long>,long,long,bool>::_gen_argument_type(MethodBindTR<Vector<long>,long,long,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x1f';
   if ((uint)param_1 < 3) {
      cVar1 = ( param_1 != 2 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindTR<Vector<long>, long, long, bool>::get_argument_meta(int) const */long MethodBindTR<Vector<long>,long,long,bool>::get_argument_meta(MethodBindTR<Vector<long>,long,long,bool> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )((uint)param_1 < 2) << 2;
   }

   return lVar1;
}
/* MethodBindTR<Vector<Vector3>, long, long, bool>::_gen_argument_type(int) const */char MethodBindTR<Vector<Vector3>,long,long,bool>::_gen_argument_type(MethodBindTR<Vector<Vector3>,long,long,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '$';
   if ((uint)param_1 < 3) {
      cVar1 = ( param_1 != 2 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindTR<Vector<Vector3>, long, long, bool>::get_argument_meta(int) const */long MethodBindTR<Vector<Vector3>,long,long,bool>::get_argument_meta(MethodBindTR<Vector<Vector3>,long,long,bool> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )((uint)param_1 < 2) << 2;
   }

   return lVar1;
}
/* MethodBindTRC<Vector3, Vector3 const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector3,Vector3_const&>::_gen_argument_type(int param_1) {
   return 9;
}
/* MethodBindTRC<Vector3, Vector3 const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector3,Vector3_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<long, Vector3 const&, bool>::_gen_argument_type(int) const */char MethodBindTRC<long,Vector3_const&,bool>::_gen_argument_type(MethodBindTRC<long,Vector3_const&,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x02';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 8U ) + 1;
   }

   return cVar1;
}
/* MethodBindTRC<long, Vector3 const&, bool>::get_argument_meta(int) const */int MethodBindTRC<long,Vector3_const&,bool>::get_argument_meta(MethodBindTRC<long,Vector3_const&,bool> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -4;
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
/* MethodBindTRC<bool, long, long, bool>::_gen_argument_type(int) const */char MethodBindTRC<bool,long,long,bool>::_gen_argument_type(MethodBindTRC<bool,long,long,bool> *this, int param_1) {
   return ( (uint)param_1 < 2 ) + '\x01';
}
/* MethodBindTRC<bool, long, long, bool>::get_argument_meta(int) const */long MethodBindTRC<bool,long,long,bool>::get_argument_meta(MethodBindTRC<bool,long,long,bool> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )((uint)param_1 < 2) << 2;
   }

   return lVar1;
}
/* MethodBindT<long, long, bool>::get_argument_meta(int) const */long MethodBindT<long,long,bool>::get_argument_meta(MethodBindT<long,long,bool> *this, int param_1) {
   return ( ulong )((uint)param_1 < 2) << 2;
}
/* MethodBindT<long, bool>::_gen_argument_type(int) const */char MethodBindT<long,bool>::_gen_argument_type(MethodBindT<long,bool> *this, int param_1) {
   char cVar1;
   cVar1 = ( param_1 == 0 ) + '\x01';
   if (1 < (uint)param_1) {
      cVar1 = '\0';
   }

   return cVar1;
}
/* MethodBindT<long, bool>::get_argument_meta(int) const */long MethodBindT<long,bool>::get_argument_meta(MethodBindT<long,bool> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindTR<Vector<long>>::_gen_argument_type(int) const */undefined8 MethodBindTR<Vector<long>>::_gen_argument_type(int param_1) {
   return 0x1f;
}
/* MethodBindTR<Vector<long>>::get_argument_meta(int) const */undefined8 MethodBindTR<Vector<long>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Vector<long>, long>::_gen_argument_type(int) const */int MethodBindTR<Vector<long>,long>::_gen_argument_type(MethodBindTR<Vector<long>,long> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe3 ) + 0x1f;
}
/* MethodBindTR<Vector<long>, long>::get_argument_meta(int) const */long MethodBindTR<Vector<long>,long>::get_argument_meta(MethodBindTR<Vector<long>,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindTRC<bool, long>::_gen_argument_type(int) const */char MethodBindTRC<bool,long>::_gen_argument_type(MethodBindTRC<bool,long> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}
/* MethodBindTRC<bool, long>::get_argument_meta(int) const */long MethodBindTRC<bool,long>::get_argument_meta(MethodBindTRC<bool,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<long>::_gen_argument_type(int) const */char MethodBindT<long>::_gen_argument_type(MethodBindT<long> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<long>::get_argument_meta(int) const */long MethodBindT<long>::get_argument_meta(MethodBindT<long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<long, float>::_gen_argument_type(int) const */int MethodBindT<long,float>::_gen_argument_type(MethodBindT<long,float> *this, int param_1) {
   int iVar1;
   iVar1 = 3 - ( uint )(param_1 == 0);
   if (1 < (uint)param_1) {
      iVar1 = 0;
   }

   return iVar1;
}
/* MethodBindT<long, float>::get_argument_meta(int) const */char MethodBindT<long,float>::get_argument_meta(MethodBindT<long,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x04';
   if (param_1 != 0) {
      cVar1 = ( param_1 == 1 ) * '\t';
   }

   return cVar1;
}
/* MethodBindTRC<float, long>::_gen_argument_type(int) const */int MethodBindTRC<float,long>::_gen_argument_type(MethodBindTRC<float,long> *this, int param_1) {
   return 3 - ( uint )(param_1 == 0);
}
/* MethodBindTRC<float, long>::get_argument_meta(int) const */long MethodBindTRC<float,long>::get_argument_meta(MethodBindTRC<float,long> *this, int param_1) {
   long lVar1;
   lVar1 = ( ulong )(param_1 == 0) << 2;
   if (param_1 < 0) {
      lVar1 = 9;
   }

   return lVar1;
}
/* MethodBindT<long, Vector3 const&>::_gen_argument_type(int) const */int MethodBindT<long,Vector3_const&>::_gen_argument_type(MethodBindT<long,Vector3_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffff9 ) + 9;
   }

   return iVar1;
}
/* MethodBindT<long, Vector3 const&>::get_argument_meta(int) const */long MethodBindT<long,Vector3_const&>::get_argument_meta(MethodBindT<long,Vector3_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindTRC<Vector3, long>::_gen_argument_type(int) const */int MethodBindTRC<Vector3,long>::_gen_argument_type(MethodBindTRC<Vector3,long> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffff9 ) + 9;
}
/* MethodBindTRC<Vector3, long>::get_argument_meta(int) const */long MethodBindTRC<Vector3,long>::get_argument_meta(MethodBindTRC<Vector3,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<long, Vector3 const&, float>::get_argument_meta(int) const */char MethodBindT<long,Vector3_const&,float>::get_argument_meta(MethodBindT<long,Vector3_const&,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x04';
   if (param_1 != 0) {
      cVar1 = ( param_1 == 2 ) * '\t';
   }

   return cVar1;
}
/* MethodBindTRC<long>::_gen_argument_type(int) const */undefined8 MethodBindTRC<long>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<long>::get_argument_meta(int) const */int MethodBindTRC<long>::get_argument_meta(MethodBindTRC<long> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -4;
}
/* MethodBindTR<Vector<Vector2>, long, long>::_gen_argument_type(int) const */int MethodBindTR<Vector<Vector2>,long,long>::_gen_argument_type(MethodBindTR<Vector<Vector2>,long,long> *this, int param_1) {
   return ( -(uint)((uint)param_1 < 2) & 0xffffffdf ) + 0x23;
}
/* MethodBindTR<Vector<Vector2>, long, long>::get_argument_meta(int) const */long MethodBindTR<Vector<Vector2>,long,long>::get_argument_meta(MethodBindTR<Vector<Vector2>,long,long> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )((uint)param_1 < 2) << 2;
   }

   return lVar1;
}
/* MethodBindTR<Vector<Vector3>, long, long>::_gen_argument_type(int) const */int MethodBindTR<Vector<Vector3>,long,long>::_gen_argument_type(MethodBindTR<Vector<Vector3>,long,long> *this, int param_1) {
   return ( -(uint)((uint)param_1 < 2) & 0xffffffde ) + 0x24;
}
/* MethodBindTR<Vector<Vector3>, long, long>::get_argument_meta(int) const */long MethodBindTR<Vector<Vector3>,long,long>::get_argument_meta(MethodBindTR<Vector<Vector3>,long,long> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )((uint)param_1 < 2) << 2;
   }

   return lVar1;
}
/* MethodBindTR<Vector<long>, long, long>::_gen_argument_type(int) const */int MethodBindTR<Vector<long>,long,long>::_gen_argument_type(MethodBindTR<Vector<long>,long,long> *this, int param_1) {
   return ( -(uint)((uint)param_1 < 2) & 0xffffffe3 ) + 0x1f;
}
/* MethodBindTR<Vector<long>, long, long>::get_argument_meta(int) const */long MethodBindTR<Vector<long>,long,long>::get_argument_meta(MethodBindTR<Vector<long>,long,long> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )((uint)param_1 < 2) << 2;
   }

   return lVar1;
}
/* MethodBindTR<Vector<long>, long, long>::~MethodBindTR() */void MethodBindTR<Vector<long>,long,long>::~MethodBindTR(MethodBindTR<Vector<long>,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128570;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<long>, long, long>::~MethodBindTR() */void MethodBindTR<Vector<long>,long,long>::~MethodBindTR(MethodBindTR<Vector<long>,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128570;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Vector<Vector3>, long, long>::~MethodBindTR() */void MethodBindTR<Vector<Vector3>,long,long>::~MethodBindTR(MethodBindTR<Vector<Vector3>,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001285d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<Vector3>, long, long>::~MethodBindTR() */void MethodBindTR<Vector<Vector3>,long,long>::~MethodBindTR(MethodBindTR<Vector<Vector3>,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001285d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Vector<Vector2>, long, long>::~MethodBindTR() */void MethodBindTR<Vector<Vector2>,long,long>::~MethodBindTR(MethodBindTR<Vector<Vector2>,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128630;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<Vector2>, long, long>::~MethodBindTR() */void MethodBindTR<Vector<Vector2>,long,long>::~MethodBindTR(MethodBindTR<Vector<Vector2>,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128630;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, Vector3 const&, float>::~MethodBindT() */void MethodBindT<long,Vector3_const&,float>::~MethodBindT(MethodBindT<long,Vector3_const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001286f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, Vector3 const&, float>::~MethodBindT() */void MethodBindT<long,Vector3_const&,float>::~MethodBindT(MethodBindT<long,Vector3_const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001286f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector3, long>::~MethodBindTRC() */void MethodBindTRC<Vector3,long>::~MethodBindTRC(MethodBindTRC<Vector3,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128750;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector3, long>::~MethodBindTRC() */void MethodBindTRC<Vector3,long>::~MethodBindTRC(MethodBindTRC<Vector3,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128750;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, Vector3 const&>::~MethodBindT() */void MethodBindT<long,Vector3_const&>::~MethodBindT(MethodBindT<long,Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001287b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, Vector3 const&>::~MethodBindT() */void MethodBindT<long,Vector3_const&>::~MethodBindT(MethodBindT<long,Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001287b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, long>::~MethodBindTRC() */void MethodBindTRC<float,long>::~MethodBindTRC(MethodBindTRC<float,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128810;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, long>::~MethodBindTRC() */void MethodBindTRC<float,long>::~MethodBindTRC(MethodBindTRC<float,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128810;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, float>::~MethodBindT() */void MethodBindT<long,float>::~MethodBindT(MethodBindT<long,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128870;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, float>::~MethodBindT() */void MethodBindT<long,float>::~MethodBindT(MethodBindT<long,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128870;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Vector<long>, long>::~MethodBindTR() */void MethodBindTR<Vector<long>,long>::~MethodBindTR(MethodBindTR<Vector<long>,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128990;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<long>, long>::~MethodBindTR() */void MethodBindTR<Vector<long>,long>::~MethodBindTR(MethodBindTR<Vector<long>,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128990;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Vector<long>>::~MethodBindTR() */void MethodBindTR<Vector<long>>::~MethodBindTR(MethodBindTR<Vector<long>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001289f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<long>>::~MethodBindTR() */void MethodBindTR<Vector<long>>::~MethodBindTR(MethodBindTR<Vector<long>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001289f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, bool>::~MethodBindT() */void MethodBindT<long,bool>::~MethodBindT(MethodBindT<long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128a50;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, bool>::~MethodBindT() */void MethodBindT<long,bool>::~MethodBindT(MethodBindT<long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128a50;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128930;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128930;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, long, bool>::~MethodBindT() */void MethodBindT<long,long,bool>::~MethodBindT(MethodBindT<long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128ab0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, long, bool>::~MethodBindT() */void MethodBindT<long,long,bool>::~MethodBindT(MethodBindT<long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128ab0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, long, long, bool>::~MethodBindTRC() */void MethodBindTRC<bool,long,long,bool>::~MethodBindTRC(MethodBindTRC<bool,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128b10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, long, long, bool>::~MethodBindTRC() */void MethodBindTRC<bool,long,long,bool>::~MethodBindTRC(MethodBindTRC<bool,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128b10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<long>::~MethodBindTRC() */void MethodBindTRC<long>::~MethodBindTRC(MethodBindTRC<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128690;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<long>::~MethodBindTRC() */void MethodBindTRC<long>::~MethodBindTRC(MethodBindTRC<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128690;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001288d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001288d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128b70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128b70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<long, Vector3 const&, bool>::~MethodBindTRC() */void MethodBindTRC<long,Vector3_const&,bool>::~MethodBindTRC(MethodBindTRC<long,Vector3_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128bd0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<long, Vector3 const&, bool>::~MethodBindTRC() */void MethodBindTRC<long,Vector3_const&,bool>::~MethodBindTRC(MethodBindTRC<long,Vector3_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128bd0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector3, Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<Vector3,Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3,Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128c30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector3, Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<Vector3,Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3,Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128c30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Vector<Vector3>, long, long, bool>::~MethodBindTR() */void MethodBindTR<Vector<Vector3>,long,long,bool>::~MethodBindTR(MethodBindTR<Vector<Vector3>,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128c90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<Vector3>, long, long, bool>::~MethodBindTR() */void MethodBindTR<Vector<Vector3>,long,long,bool>::~MethodBindTR(MethodBindTR<Vector<Vector3>,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128c90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Vector<long>, long, long, bool>::~MethodBindTR() */void MethodBindTR<Vector<long>,long,long,bool>::~MethodBindTR(MethodBindTR<Vector<long>,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128cf0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<long>, long, long, bool>::~MethodBindTR() */void MethodBindTR<Vector<long>,long,long,bool>::~MethodBindTR(MethodBindTR<Vector<long>,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128cf0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, Vector2 const&, float>::~MethodBindT() */void MethodBindT<long,Vector2_const&,float>::~MethodBindT(MethodBindT<long,Vector2_const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128d50;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, Vector2 const&, float>::~MethodBindT() */void MethodBindT<long,Vector2_const&,float>::~MethodBindT(MethodBindT<long,Vector2_const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128d50;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2, long>::~MethodBindTRC() */void MethodBindTRC<Vector2,long>::~MethodBindTRC(MethodBindTRC<Vector2,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128db0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2, long>::~MethodBindTRC() */void MethodBindTRC<Vector2,long>::~MethodBindTRC(MethodBindTRC<Vector2,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128db0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<long, Vector2 const&>::~MethodBindT() */void MethodBindT<long,Vector2_const&>::~MethodBindT(MethodBindT<long,Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128e10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<long, Vector2 const&>::~MethodBindT() */void MethodBindT<long,Vector2_const&>::~MethodBindT(MethodBindT<long,Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128e10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<long, Vector2 const&, bool>::~MethodBindTRC() */void MethodBindTRC<long,Vector2_const&,bool>::~MethodBindTRC(MethodBindTRC<long,Vector2_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128e70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<long, Vector2 const&, bool>::~MethodBindTRC() */void MethodBindTRC<long,Vector2_const&,bool>::~MethodBindTRC(MethodBindTRC<long,Vector2_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128e70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2, Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128ed0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2, Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128ed0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Vector<Vector2>, long, long, bool>::~MethodBindTR() */void MethodBindTR<Vector<Vector2>,long,long,bool>::~MethodBindTR(MethodBindTR<Vector<Vector2>,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128f30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Vector<Vector2>, long, long, bool>::~MethodBindTR() */void MethodBindTR<Vector<Vector2>,long,long,bool>::~MethodBindTR(MethodBindTR<Vector<Vector2>,long,long,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00128f30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00128130;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00128130;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindT<long, long, bool>::_gen_argument_type(int) const */char MethodBindT<long,long,bool>::_gen_argument_type(MethodBindT<long,long,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 3) {
      cVar1 = ( param_1 != 2 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindT<long, Vector2 const&, float>::_gen_argument_type(int) const */char MethodBindT<long,Vector2_const&,float>::_gen_argument_type(MethodBindT<long,Vector2_const&,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( (uint)param_1 < 3 ) && ( cVar1 = param_1 != 0 )) {
      cVar1 = ( param_1 == 1 ) * '\x02' + '\x03';
   }

   return cVar1;
}
/* MethodBindT<long, Vector3 const&, float>::_gen_argument_type(int) const */undefined8 MethodBindT<long,Vector3_const&,float>::_gen_argument_type(MethodBindT<long,Vector3_const&,float> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( (uint)param_1 < 3 ) && ( uVar1 = 2 ),param_1 != 0 )) {
      uVar1 = 9;
   }

   return uVar1;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AStar3D::_bind_compatibility_methods() [clone .cold] */void AStar3D::_bind_compatibility_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AStar2D::_bind_compatibility_methods() [clone .cold] */void AStar2D::_bind_compatibility_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AStar2D::_bind_methods() [clone .cold] */void AStar2D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AStar3D::_bind_methods() [clone .cold] */void AStar3D::_bind_methods(void) {
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
         LAB_0010f1a3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f1a3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010f20e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010f20e:return &_get_class_namev();
}
/* AStar2D::~AStar2D() */void AStar2D::~AStar2D(AStar2D *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00128400;
   if (bVar1) {
      if (*(long*)( this + 0x3a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f2a0;
      }

      if (*(long*)( this + 0x390 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010f2a0:AStar3D::~AStar3D((AStar3D*)( this + 0x180 ));
   *(undefined***)this = &PTR__initialize_classv_00128130;
   Object::~Object((Object*)this);
   return;
}
/* AStar2D::~AStar2D() */void AStar2D::~AStar2D(AStar2D *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00128400;
   if (bVar1) {
      if (*(long*)( this + 0x3a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f310;
      }

      if (*(long*)( this + 0x390 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010f310:AStar3D::~AStar3D((AStar3D*)( this + 0x180 ));
   *(undefined***)this = &PTR__initialize_classv_00128130;
   Object::~Object((Object*)this);
   operator_delete(this, 0x3c0);
   return;
}
/* AStar3D::_get_class_namev() const */undefined8 *AStar3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f383:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f383;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AStar3D");
         goto LAB_0010f3ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AStar3D");
   LAB_0010f3ee:return &_get_class_namev();
}
/* AStar2D::_get_class_namev() const */undefined8 *AStar2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f463:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f463;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AStar2D");
         goto LAB_0010f4ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AStar2D");
   LAB_0010f4ce:return &_get_class_namev();
}
/* AStar3D::get_class() const */void AStar3D::get_class(void) {
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
/* AStar2D::get_class() const */void AStar2D::get_class(void) {
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
/* MethodBindTRC<long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<long>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010f8bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010f8bc:local_58 = lVar2;
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
}
/* MethodBindTR<Vector<long>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Vector<long>>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1f;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010fa3c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010fa3c:local_58 = lVar2;
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
      StringName::StringName((StringName*)&local_40, (StrRange*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (StrRange*)&local_50, false);
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
                  if (lVar5 == 0) goto LAB_0010fc9f;
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

      LAB_0010fc9f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010fd53;
   }

   cVar6 = String::operator ==((String*)param_1, "RefCounted");
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
                     if (lVar5 == 0) goto LAB_0010fe03;
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

         LAB_0010fe03:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010fd53;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010fd53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar2D::is_class(String const&) const */undefined8 AStar2D::is_class(AStar2D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010ff2f;
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

      LAB_0010ff2f:cVar5 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010ffe3;
   }

   cVar5 = String::operator ==((String*)param_1, "AStar2D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010ffe3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AStar3D::is_class(String const&) const */undefined8 AStar3D::is_class(AStar3D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001100af;
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

      LAB_001100af:cVar5 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00110163;
   }

   cVar5 = String::operator ==((String*)param_1, "AStar3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00110163:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      LAB_00110328:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00110328;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00110346;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00110346:if (lVar2 == 0) {
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
/* AStar2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AStar2D::_get_property_listv(AStar2D *this, List *param_1, bool param_2) {
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
   local_78 = "AStar2D";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AStar2D";
   local_98 = 0;
   local_70 = 7;
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
      LAB_00110728:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00110728;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00110745;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00110745:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "AStar2D", false);
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
/* AStar3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AStar3D::_get_property_listv(AStar3D *this, List *param_1, bool param_2) {
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
   local_78 = "AStar3D";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AStar3D";
   local_98 = 0;
   local_70 = 7;
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
      LAB_00110b78:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00110b78;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00110b95;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00110b95:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "AStar3D", false);
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
}
/* GetTypeInfo<long, void>::get_class_info() */GetTypeInfo<long,void> * __thiscall
GetTypeInfo<long,void>::get_class_info(GetTypeInfo<long,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011106c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011106c:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<float, void>::get_class_info() */GetTypeInfo<float,void> * __thiscall
GetTypeInfo<float,void>::get_class_info(GetTypeInfo<float,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 3;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x001111ec;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001111ec:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
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

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)( this + 0x50 );
         if (piVar2 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)( this + 0x50 ) = 0;
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
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* OAHashMap<long, AStar3D::Point*, HashMapHasherDefault, HashMapComparatorDefault<long>
   >::remove(long const&) */ulong OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::remove(OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>> *this, long *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   undefined8 *puVar15;
   ulong uVar16;
   uint *puVar17;
   undefined8 *puVar18;
   uint uVar19;
   uVar4 = *(uint*)( this + 0x18 );
   uVar14 = (ulong)uVar4;
   lVar5 = *(long*)( this + 0x10 );
   uVar12 = *param_1 * 0x3ffff - 1;
   uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
   uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
   uVar12 = uVar12 >> 0x16 ^ uVar12;
   uVar16 = uVar12 & 0xffffffff;
   if ((int)uVar12 == 0) {
      uVar16 = 1;
   }

   uVar12 = uVar16 % uVar14;
   uVar19 = *(uint*)( lVar5 + uVar12 * 4 );
   if (uVar19 == 0) {
      return uVar16 / uVar14;
   }

   uVar11 = 0;
   while (( uVar13 = ( ulong )((int)uVar12 + 1) ),(uint)uVar16 != uVar19 || ( lVar6 = *(long*)( this + 8 ) * param_1 != *(long*)( lVar6 + uVar12 * 8 ) )) {
      uVar12 = uVar13 % uVar14;
      uVar11 = uVar11 + 1;
      uVar19 = *(uint*)( lVar5 + uVar12 * 4 );
      if (uVar19 == 0) {
         return uVar13 / uVar14;
      }

      uVar10 = ( uVar4 + (int)uVar12 ) - uVar19 % uVar4;
      if (uVar10 % uVar4 < uVar11) {
         return uVar10 / uVar14;
      }

   }
;
   uVar16 = uVar13 % uVar14;
   puVar17 = (uint*)( lVar5 + uVar16 * 4 );
   uVar19 = *puVar17;
   if (( uVar19 == 0 ) || ( uVar11 = ( (int)uVar16 + uVar4 ) - uVar19 % uVar4 ),uVar13 = (ulong)uVar11,uVar11 % uVar4 == 0) {
      uVar13 = uVar13 / uVar14;
   }
 else {
      lVar7 = *(long*)this;
      uVar14 = uVar12;
      do {
         uVar12 = uVar16;
         puVar1 = (uint*)( lVar5 + uVar14 * 4 );
         *puVar17 = *puVar1;
         puVar2 = (undefined8*)( lVar6 + uVar12 * 8 );
         puVar18 = (undefined8*)( uVar12 * 8 + lVar7 );
         *puVar1 = uVar19;
         puVar3 = (undefined8*)( lVar6 + uVar14 * 8 );
         uVar8 = *puVar2;
         puVar15 = (undefined8*)( uVar14 * 8 + lVar7 );
         *puVar2 = *puVar3;
         uVar9 = *puVar15;
         *puVar3 = uVar8;
         uVar8 = *puVar18;
         uVar4 = *(uint*)( this + 0x18 );
         uVar14 = (ulong)uVar4;
         *puVar18 = uVar9;
         *puVar15 = uVar8;
         uVar16 = ( ulong )((int)uVar12 + 1);
         uVar13 = uVar16 / uVar14;
         uVar16 = uVar16 % uVar14;
         puVar17 = (uint*)( lVar5 + uVar16 * 4 );
         uVar19 = *puVar17;
         if (uVar19 == 0) break;
         uVar11 = ( uVar4 + (int)uVar16 ) - uVar19 % uVar4;
         uVar13 = uVar11 / uVar14;
         uVar14 = uVar12;
      }
 while ( uVar11 % uVar4 != 0 );
   }

   *(undefined4*)( lVar5 + uVar12 * 4 ) = 0;
   *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + -1;
   return uVar13;
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
/* WARNING: Removing unreachable block (ram,0x001119f8) *//* WARNING: Removing unreachable block (ram,0x00111b8d) *//* WARNING: Removing unreachable block (ram,0x00111b99) *//* String vformat<long>(String const&, long const) */String *vformat<long>(String *param_1, long param_2) {
   Variant *this;
   long in_RDX;
   int iVar1;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_RDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)param_2);
   *(undefined8*)param_1 = local_c0[0];
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
/* WARNING: Removing unreachable block (ram,0x00111d08) *//* WARNING: Removing unreachable block (ram,0x00111e9d) *//* WARNING: Removing unreachable block (ram,0x00111ea9) *//* String vformat<float>(String const&, float const) */String *vformat<float>(String *param_1, float param_2) {
   Variant *this;
   bool *in_RSI;
   int iVar1;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_2);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, in_RSI);
   *(undefined8*)param_1 = local_c0[0];
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
/* WARNING: Removing unreachable block (ram,0x00112040) *//* WARNING: Removing unreachable block (ram,0x001121d5) *//* WARNING: Removing unreachable block (ram,0x001121e1) *//* String vformat<unsigned int, long>(String const&, unsigned int const, long const) */String *vformat<unsigned_int,long>(String *param_1, uint param_2, long param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_RCX;
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
   Variant::Variant(local_88, (uint)param_3);
   Variant::Variant(local_70, in_RCX);
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
/* MethodBindT<long, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<long,float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined4 local_58[2];
   long local_50;
   long local_48;
   undefined4 local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)local_58);
   }
 else {
      if (in_EDX != 1) goto LAB_00112272;
      GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void>*)local_58);
   }

   *puVar3 = local_58[0];
   if (*(long*)( puVar3 + 2 ) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 2 ));
      lVar2 = local_50;
      local_50 = 0;
      *(long*)( puVar3 + 2 ) = lVar2;
   }

   if (*(long*)( puVar3 + 4 ) != local_48) {
      StringName::unref();
      lVar2 = local_48;
      local_48 = 0;
      *(long*)( puVar3 + 4 ) = lVar2;
   }

   lVar2 = local_38;
   puVar3[6] = local_40;
   if (*(long*)( puVar3 + 8 ) == local_38) {
      puVar3[10] = local_30;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 8 ));
      *(long*)( puVar3 + 8 ) = local_38;
      puVar3[10] = local_30;
   }

   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
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

   LAB_00112272:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<long>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<long>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   undefined4 local_30;
   long local_28;
   undefined4 local_20;
   long local_10;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)local_48);
      *puVar2 = local_48[0];
      if (*(long*)( puVar2 + 2 ) != local_40) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_40;
         local_40 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_38) {
         StringName::unref();
         lVar1 = local_38;
         local_38 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_30;
      if (*(long*)( puVar2 + 8 ) != local_28) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_28;
         local_28 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_20;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AStar3D, Vector<long>, long, long>(Vector<long> (AStar3D::*)(long,
   long)) */MethodBind *create_method_bind<AStar3D,Vector<long>,long,long>(_func_Vector_long_long *param_1) {
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
   *(_func_Vector_long_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128570;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, Vector<Vector3>, long, long>(Vector<Vector3>
   (AStar3D::*)(long, long)) */MethodBind *create_method_bind<AStar3D,Vector<Vector3>,long,long>(_func_Vector_long_long *param_1) {
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
   *(_func_Vector_long_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001285d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector<long>, long, long>(Vector<long> (AStar2D::*)(long,
   long)) */MethodBind *create_method_bind<AStar2D,Vector<long>,long,long>(_func_Vector_long_long *param_1) {
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
   *(_func_Vector_long_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128570;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector<Vector2>, long, long>(Vector<Vector2>
   (AStar2D::*)(long, long)) */MethodBind *create_method_bind<AStar2D,Vector<Vector2>,long,long>(_func_Vector_long_long *param_1) {
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
   *(_func_Vector_long_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128630;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* HashSet<AStar3D::Segment, AStar3D::Segment, HashMapComparatorDefault<AStar3D::Segment>
   >::_lookup_pos(AStar3D::Segment const&, unsigned int&) const */undefined8 HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::_lookup_pos(HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>> *this, Segment *param_1, uint *param_2) {
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
   ulong uVar11;
   ulong uVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   if (*(long*)this == 0) {
      return 0;
   }

   if (*(int*)( this + 0x24 ) != 0) {
      uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar11 = *(long*)param_1 * 0x3ffff - 1;
      uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
      uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
      uVar12 = *(long*)( param_1 + 8 ) * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar11 = ( ( ulong )(( uint )(uVar12 >> 0x16) ^ (uint)uVar12) | ( uVar11 >> 0x16 ^ uVar11 ) << 0x20 ) * 0x3ffff - 1;
      uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
      uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar12 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
         uVar12 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x18 ) + lVar14 * 4 );
      iVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar17 = 0;
         do {
            if ((uint)uVar12 == uVar15) {
               uVar15 = *(uint*)( *(long*)( this + 8 ) + lVar14 * 4 );
               plVar1 = (long*)( *(long*)this + (ulong)uVar15 * 0x18 );
               if (( *plVar1 == *(long*)param_1 ) && ( plVar1[1] == *(long*)( param_1 + 8 ) )) {
                  *param_2 = uVar15;
                  return 1;
               }

            }

            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x18 ) + lVar14 * 4 );
            iVar13 = SUB164(auVar4 * auVar8, 8);
            if (uVar15 == 0) {
               return 0;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar15 * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar16;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) + iVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar16;
         }
 while ( uVar17 <= SUB164(auVar6 * auVar10, 8) );
         return 0;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<AStar3D::Segment, AStar3D::Segment, HashMapComparatorDefault<AStar3D::Segment>
   >::insert(AStar3D::Segment const&) */Segment *HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>>::insert(Segment *param_1) {
   undefined8 *puVar1;
   uint uVar2;
   void *pvVar3;
   void *pvVar4;
   long lVar5;
   long lVar6;
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
   char cVar24;
   ulong uVar25;
   undefined8 uVar26;
   long lVar27;
   long lVar28;
   long lVar29;
   uint *puVar30;
   int iVar31;
   Segment *in_RDX;
   ulong uVar32;
   uint uVar33;
   ulong uVar34;
   HashSet<AStar3D::Segment,AStar3D::Segment,HashMapComparatorDefault<AStar3D::Segment>> *in_RSI;
   uint uVar35;
   ulong uVar36;
   undefined4 uVar37;
   uint uVar38;
   uint uVar39;
   uint *puVar40;
   long in_FS_OFFSET;
   uint local_98;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
   if (*(long*)in_RSI == 0) {
      uVar25 = (ulong)uVar33 * 4;
      uVar26 = Memory::alloc_static(uVar25, false);
      *(undefined8*)( in_RSI + 0x18 ) = uVar26;
      uVar26 = Memory::alloc_static((ulong)uVar33 * 0x18, false);
      *(undefined8*)in_RSI = uVar26;
      uVar26 = Memory::alloc_static(uVar25, false);
      *(undefined8*)( in_RSI + 0x10 ) = uVar26;
      uVar26 = Memory::alloc_static(uVar25, false);
      *(undefined8*)( in_RSI + 8 ) = uVar26;
      if (uVar33 != 0) {
         memset(*(void**)( in_RSI + 0x18 ), 0, uVar25);
      }

   }

   local_44 = 0;
   cVar24 = _lookup_pos(in_RSI, in_RDX, &local_44);
   if (cVar24 == '\0') {
      uVar38 = *(uint*)( in_RSI + 0x24 );
      uVar2 = *(uint*)( in_RSI + 0x20 );
      if ((float)uVar33 * __LC56 < (float)( uVar38 + 1 )) {
         if (uVar2 == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            iVar31 = *(int*)( in_RSI + 0x24 );
            lVar27 = *(long*)in_RSI;
            uVar33 = 0xffffffff;
            goto LAB_001130fa;
         }

         uVar25 = ( ulong )(uVar2 + 1);
         if (uVar2 + 1 < 2) {
            uVar25 = 2;
         }

         uVar33 = *(uint*)( hash_table_size_primes + uVar25 * 4 );
         *(int*)( in_RSI + 0x20 ) = (int)uVar25;
         pvVar3 = *(void**)( in_RSI + 0x18 );
         uVar25 = (ulong)uVar33 * 4;
         pvVar4 = *(void**)( in_RSI + 0x10 );
         uVar26 = Memory::alloc_static(uVar25, false);
         *(undefined8*)( in_RSI + 0x18 ) = uVar26;
         uVar26 = Memory::realloc_static(*(void**)in_RSI, (ulong)uVar33 * 0x18, false);
         *(undefined8*)in_RSI = uVar26;
         uVar26 = Memory::alloc_static(uVar25, false);
         *(undefined8*)( in_RSI + 0x10 ) = uVar26;
         lVar27 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar25, false);
         *(long*)( in_RSI + 8 ) = lVar27;
         if (uVar33 != 0) {
            memset(*(void**)( in_RSI + 0x18 ), 0, uVar25);
         }

         if (*(int*)( in_RSI + 0x24 ) != 0) {
            uVar25 = 0;
            lVar5 = *(long*)( in_RSI + 0x18 );
            lVar6 = *(long*)( in_RSI + 0x10 );
            do {
               uVar36 = uVar25 & 0xffffffff;
               uVar37 = (undefined4)uVar25;
               uVar39 = 0;
               uVar33 = *(uint*)( (long)pvVar3 + ( ulong ) * (uint*)( (long)pvVar4 + uVar25 * 4 ) * 4 );
               uVar32 = (ulong)uVar33;
               uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
               uVar34 = CONCAT44(0, uVar38);
               lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar32 * lVar28;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar34;
               lVar29 = SUB168(auVar8 * auVar16, 8) * 4;
               iVar31 = SUB164(auVar8 * auVar16, 8);
               puVar40 = (uint*)( lVar5 + lVar29 );
               uVar2 = *puVar40;
               if (uVar2 == 0) {
                  lVar28 = uVar25 * 4;
               }
 else {
                  do {
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = (ulong)uVar2 * lVar28;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar34;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( ulong )(( uVar38 + iVar31 ) - SUB164(auVar9 * auVar17, 8)) * lVar28;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = uVar34;
                     local_98 = SUB164(auVar10 * auVar18, 8);
                     if (local_98 < uVar39) {
                        *(int*)( lVar6 + uVar36 * 4 ) = iVar31;
                        uVar33 = *puVar40;
                        *puVar40 = (uint)uVar32;
                        uVar2 = *(uint*)( lVar29 + lVar27 );
                        uVar32 = (ulong)uVar33;
                        *(uint*)( lVar29 + lVar27 ) = (uint)uVar36;
                        uVar36 = (ulong)uVar2;
                        uVar39 = local_98;
                     }

                     uVar37 = (undefined4)uVar36;
                     uVar33 = (uint)uVar32;
                     uVar39 = uVar39 + 1;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = ( ulong )(iVar31 + 1) * lVar28;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = uVar34;
                     lVar29 = SUB168(auVar11 * auVar19, 8) * 4;
                     iVar31 = SUB164(auVar11 * auVar19, 8);
                     puVar40 = (uint*)( lVar5 + lVar29 );
                     uVar2 = *puVar40;
                  }
 while ( uVar2 != 0 );
                  lVar28 = uVar36 << 2;
               }

               *puVar40 = uVar33;
               uVar25 = uVar25 + 1;
               *(int*)( lVar6 + lVar28 ) = iVar31;
               *(undefined4*)( lVar27 + lVar29 ) = uVar37;
            }
 while ( (uint)uVar25 < *(uint*)( in_RSI + 0x24 ) );
         }

         Memory::free_static(pvVar3, false);
         Memory::free_static(pvVar4, false);
         uVar38 = *(uint*)( in_RSI + 0x24 );
         uVar2 = *(uint*)( in_RSI + 0x20 );
      }

      uVar34 = (ulong)uVar38;
      uVar26 = *(undefined8*)( in_RDX + 8 );
      uVar25 = *(long*)in_RDX * 0x3ffff - 1;
      uVar25 = ( uVar25 ^ uVar25 >> 0x1f ) * 0x15;
      uVar25 = ( uVar25 ^ uVar25 >> 0xb ) * 0x41;
      uVar32 = *(long*)( in_RDX + 8 ) * 0x3ffff - 1;
      uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
      uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
      lVar27 = *(long*)in_RSI;
      uVar25 = ( ( ulong )(( uint )(uVar32 >> 0x16) ^ (uint)uVar32) | ( uVar25 >> 0x16 ^ uVar25 ) << 0x20 ) * 0x3ffff - 1;
      uVar25 = ( uVar25 ^ uVar25 >> 0x1f ) * 0x15;
      uVar25 = ( uVar25 ^ uVar25 >> 0xb ) * 0x41;
      uVar25 = uVar25 >> 0x16 ^ uVar25;
      uVar32 = uVar25 & 0xffffffff;
      if ((int)uVar25 == 0) {
         uVar32 = 1;
      }

      uVar35 = 0;
      puVar1 = (undefined8*)( lVar27 + uVar34 * 0x18 );
      *puVar1 = *(undefined8*)in_RDX;
      puVar1[1] = uVar26;
      lVar6 = *(long*)( in_RSI + 0x18 );
      puVar1[2] = *(undefined8*)( in_RDX + 0x10 );
      uVar39 = (uint)uVar32;
      uVar33 = *(uint*)( hash_table_size_primes + (ulong)uVar2 * 4 );
      uVar36 = CONCAT44(0, uVar33);
      lVar29 = *(long*)( hash_table_size_primes_inv + (ulong)uVar2 * 8 );
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar32 * lVar29;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar36;
      lVar5 = SUB168(auVar12 * auVar20, 8) * 4;
      iVar31 = SUB164(auVar12 * auVar20, 8);
      lVar28 = *(long*)( in_RSI + 0x10 );
      lVar7 = *(long*)( in_RSI + 8 );
      puVar40 = (uint*)( lVar6 + lVar5 );
      uVar2 = *puVar40;
      uVar25 = uVar34;
      while (uVar2 != 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = (ulong)uVar2 * lVar29;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar36;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(( uVar33 + iVar31 ) - SUB164(auVar13 * auVar21, 8)) * lVar29;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar36;
         local_98 = SUB164(auVar14 * auVar22, 8);
         if (local_98 < uVar35) {
            puVar30 = (uint*)( lVar5 + lVar7 );
            *(int*)( lVar28 + uVar34 * 4 ) = iVar31;
            uVar38 = *puVar40;
            *puVar40 = (uint)uVar32;
            uVar2 = *puVar30;
            uVar32 = (ulong)uVar38;
            *puVar30 = (uint)uVar25;
            uVar34 = (ulong)uVar2;
            uVar25 = uVar34;
            uVar35 = local_98;
         }

         uVar38 = (uint)uVar25;
         uVar39 = (uint)uVar32;
         uVar35 = uVar35 + 1;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = ( ulong )(iVar31 + 1) * lVar29;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar36;
         lVar5 = SUB168(auVar15 * auVar23, 8) * 4;
         iVar31 = SUB164(auVar15 * auVar23, 8);
         puVar40 = (uint*)( lVar6 + lVar5 );
         uVar2 = *puVar40;
      }
;
      *puVar40 = uVar39;
      *(int*)( lVar28 + uVar34 * 4 ) = iVar31;
      *(uint*)( lVar7 + lVar5 ) = uVar38;
      uVar33 = *(uint*)( in_RSI + 0x24 );
      iVar31 = uVar33 + 1;
      *(int*)( in_RSI + 0x24 ) = iVar31;
   }
 else {
      iVar31 = *(int*)( in_RSI + 0x24 );
      lVar27 = *(long*)in_RSI;
      uVar33 = local_44;
   }

   LAB_001130fa:*(long*)param_1 = lVar27;
   *(int*)( param_1 + 8 ) = iVar31;
   *(uint*)( param_1 + 0xc ) = uVar33;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OAHashMap<long, AStar3D::Point*, HashMapHasherDefault, HashMapComparatorDefault<long>
   >::_resize_and_rehash(unsigned int) */void OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::_resize_and_rehash(OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>> *this, uint param_1) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   uint *puVar6;
   long lVar7;
   ulong uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   long lVar11;
   long lVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   undefined8 *puVar16;
   uint *puVar17;
   undefined8 *puVar18;
   uint uVar19;
   undefined8 uVar20;
   undefined8 uVar21;
   undefined8 *local_68;
   uVar2 = *(uint*)( this + 0x18 );
   *(undefined4*)( this + 0x1c ) = 0;
   if (param_1 == 0) {
      param_1 = 1;
   }

   puVar4 = *(undefined8**)( this + 8 );
   puVar5 = *(undefined8**)this;
   puVar6 = *(uint**)( this + 0x10 );
   *(uint*)( this + 0x18 ) = param_1;
   uVar10 = Memory::alloc_static((ulong)param_1 * 8, false);
   *(undefined8*)( this + 8 ) = uVar10;
   uVar10 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 3, false);
   *(undefined8*)this = uVar10;
   lVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
   *(long*)( this + 0x10 ) = lVar11;
   if (*(int*)( this + 0x18 ) != 0) {
      lVar12 = 0;
      do {
         *(undefined4*)( lVar11 + lVar12 * 4 ) = 0;
         lVar12 = lVar12 + 1;
      }
 while ( (uint)lVar12 < *(uint*)( this + 0x18 ) );
   }

   if (uVar2 != 0) {
      puVar16 = puVar4;
      puVar17 = puVar6;
      local_68 = puVar5;
      do {
         uVar14 = *puVar17;
         if (uVar14 != 0) {
            uVar15 = ( ulong ) * (uint*)( this + 0x18 );
            uVar19 = 0;
            uVar8 = (ulong)uVar14 % uVar15;
            lVar12 = *(long*)( this + 8 );
            lVar7 = *(long*)this;
            puVar1 = (uint*)( lVar11 + uVar8 * 4 );
            uVar3 = *puVar1;
            uVar10 = *puVar16;
            uVar9 = *local_68;
            while (uVar3 != 0) {
               uVar13 = ( uint )(( ulong )(uint)(( (int)uVar8 + (int)uVar15 ) - (int)( (ulong)uVar3 % uVar15 )) % uVar15);
               uVar20 = uVar10;
               uVar21 = uVar9;
               if (uVar13 < uVar19) {
                  *puVar1 = uVar14;
                  puVar18 = (undefined8*)( lVar12 + uVar8 * 8 );
                  uVar20 = *puVar18;
                  *puVar18 = uVar10;
                  puVar18 = (undefined8*)( uVar8 * 8 + lVar7 );
                  uVar15 = ( ulong ) * (uint*)( this + 0x18 );
                  uVar21 = *puVar18;
                  *puVar18 = uVar9;
                  uVar14 = uVar3;
                  uVar19 = uVar13;
               }

               uVar19 = uVar19 + 1;
               uVar8 = ( ulong )((int)uVar8 + 1) % uVar15;
               puVar1 = (uint*)( lVar11 + uVar8 * 4 );
               uVar10 = uVar20;
               uVar9 = uVar21;
               uVar3 = *puVar1;
            }
;
            *(undefined8*)( lVar12 + uVar8 * 8 ) = uVar10;
            *(undefined8*)( lVar7 + uVar8 * 8 ) = uVar9;
            *puVar1 = uVar14;
            *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
         }

         local_68 = local_68 + 1;
         puVar17 = puVar17 + 1;
         puVar16 = puVar16 + 1;
      }
 while ( puVar4 + uVar2 != puVar16 );
      Memory::free_static(puVar4, false);
      Memory::free_static(puVar5, false);
      Memory::free_static(puVar6, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OAHashMap<long, AStar3D::Point*, HashMapHasherDefault, HashMapComparatorDefault<long> >::set(long
   const&, AStar3D::Point* const&) */void OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>>::set(OAHashMap<long,AStar3D::Point*,HashMapHasherDefault,HashMapComparatorDefault<long>> *this, long *param_1, Point **param_2) {
   long lVar1;
   long lVar2;
   Point *pPVar3;
   ulong uVar4;
   long *plVar5;
   ulong uVar6;
   uint uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   Point *pPVar10;
   uint uVar11;
   uint uVar12;
   ulong uVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   uint uVar17;
   uint *local_50;
   lVar15 = *param_1;
   uVar12 = *(uint*)( this + 0x18 );
   uVar6 = (ulong)uVar12;
   lVar14 = *(long*)( this + 0x10 );
   uVar4 = lVar15 * 0x3ffff - 1;
   uVar4 = ( uVar4 ^ uVar4 >> 0x1f ) * 0x15;
   uVar4 = ( uVar4 ^ uVar4 >> 0xb ) * 0x41;
   uVar4 = uVar4 >> 0x16 ^ uVar4;
   uVar8 = uVar4 & 0xffffffff;
   if ((int)uVar4 == 0) {
      uVar8 = 1;
   }

   uVar4 = uVar8 % uVar6;
   local_50 = (uint*)( lVar14 + uVar4 * 4 );
   uVar17 = *local_50;
   if (uVar17 != 0) {
      uVar11 = 0;
      uVar13 = uVar4;
      uVar7 = uVar17;
      do {
         if (( (uint)uVar8 == uVar7 ) && ( lVar15 == *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) )) {
            *(Point**)( *(long*)this + uVar13 * 8 ) = *param_2;
            return;
         }

         uVar11 = uVar11 + 1;
         uVar13 = ( ulong )((int)uVar13 + 1) % uVar6;
         uVar7 = *(uint*)( lVar14 + uVar13 * 4 );
      }
 while ( ( uVar7 != 0 ) && ( uVar11 <= ( ( uVar12 + (int)uVar13 ) - uVar7 % uVar12 ) % uVar12 ) );
   }

   if ((double)uVar6 * __LC68 < (double)( *(int*)( this + 0x1c ) + 1 )) {
      _resize_and_rehash(this, uVar12 * 2);
      uVar6 = ( ulong ) * (uint*)( this + 0x18 );
      lVar14 = *(long*)( this + 0x10 );
      lVar15 = *param_1;
      uVar4 = lVar15 * 0x3ffff - 1;
      uVar4 = ( uVar4 ^ uVar4 >> 0x1f ) * 0x15;
      uVar4 = ( uVar4 >> 0xb ^ uVar4 ) * 0x41;
      uVar4 = uVar4 >> 0x16 ^ uVar4;
      uVar8 = uVar4 & 0xffffffff;
      if ((int)uVar4 == 0) {
         uVar8 = 1;
      }

      uVar4 = uVar8 % uVar6;
      local_50 = (uint*)( lVar14 + uVar4 * 4 );
      uVar17 = *local_50;
   }

   uVar7 = (uint)uVar8;
   lVar1 = *(long*)( this + 8 );
   uVar12 = 0;
   lVar2 = *(long*)this;
   pPVar3 = *param_2;
   while (uVar17 != 0) {
      uVar7 = ( uint )(( ulong )(uint)(( (int)uVar4 + (int)uVar6 ) - (int)( (ulong)uVar17 % uVar6 )) % uVar6);
      pPVar10 = pPVar3;
      lVar16 = lVar15;
      if (uVar7 < uVar12) {
         *local_50 = (uint)uVar8;
         uVar6 = ( ulong ) * (uint*)( this + 0x18 );
         uVar8 = (ulong)uVar17;
         plVar5 = (long*)( lVar1 + uVar4 * 8 );
         puVar9 = (undefined8*)( uVar4 * 8 + lVar2 );
         lVar16 = *plVar5;
         *plVar5 = lVar15;
         pPVar10 = (Point*)*puVar9;
         *puVar9 = pPVar3;
         uVar12 = uVar7;
      }

      uVar7 = (uint)uVar8;
      uVar12 = uVar12 + 1;
      uVar4 = ( ulong )((int)uVar4 + 1) % uVar6;
      local_50 = (uint*)( lVar14 + uVar4 * 4 );
      pPVar3 = pPVar10;
      lVar15 = lVar16;
      uVar17 = *local_50;
   }
;
   *(long*)( lVar1 + uVar4 * 8 ) = lVar15;
   *(Point**)( lVar2 + uVar4 * 8 ) = pPVar3;
   *local_50 = uVar7;
   *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
   return;
}
/* MethodBind* create_method_bind<AStar3D, long, Vector3 const&, float>(void (AStar3D::*)(long,
   Vector3 const&, float)) */MethodBind *create_method_bind<AStar3D,long,Vector3_const&,float>(_func_void_long_Vector3_ptr_float *param_1) {
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
   *(_func_void_long_Vector3_ptr_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001286f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, Vector3, long>(Vector3 (AStar3D::*)(long) const) */MethodBind *create_method_bind<AStar3D,Vector3,long>(_func_Vector3_long *param_1) {
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
   *(_func_Vector3_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128750;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, long, Vector3 const&>(void (AStar3D::*)(long, Vector3
   const&)) */MethodBind *create_method_bind<AStar3D,long,Vector3_const&>(_func_void_long_Vector3_ptr *param_1) {
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
   *(_func_void_long_Vector3_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001287b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, long, float>(void (AStar3D::*)(long, float)) */MethodBind *create_method_bind<AStar3D,long,float>(_func_void_long_float *param_1) {
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
   *(_func_void_long_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128870;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, long>(void (AStar3D::*)(long)) */MethodBind *create_method_bind<AStar3D,long>(_func_void_long *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001288d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, Vector<long>, long>(Vector<long> (AStar3D::*)(long)) */MethodBind *create_method_bind<AStar3D,Vector<long>,long>(_func_Vector_long *param_1) {
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
   *(_func_Vector_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128990;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, Vector<long>>(Vector<long> (AStar3D::*)()) */MethodBind *create_method_bind<AStar3D,Vector<long>>(_func_Vector *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001289f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, long, bool>(void (AStar3D::*)(long, bool)) */MethodBind *create_method_bind<AStar3D,long,bool>(_func_void_long_bool *param_1) {
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
   *(_func_void_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128a50;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, long, long, bool>(void (AStar3D::*)(long, long, bool)) */MethodBind *create_method_bind<AStar3D,long,long,bool>(_func_void_long_long_bool *param_1) {
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
   *(_func_void_long_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128ab0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D>(void (AStar3D::*)()) */MethodBind *create_method_bind<AStar3D>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00128b70;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, long, Vector3 const&, bool>(long (AStar3D::*)(Vector3
   const&, bool) const) */MethodBind *create_method_bind<AStar3D,long,Vector3_const&,bool>(_func_long_Vector3_ptr_bool *param_1) {
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
   *(_func_long_Vector3_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128bd0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, Vector3, Vector3 const&>(Vector3 (AStar3D::*)(Vector3
   const&) const) */MethodBind *create_method_bind<AStar3D,Vector3,Vector3_const&>(_func_Vector3_Vector3_ptr *param_1) {
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
   *(_func_Vector3_Vector3_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128c30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, Vector<Vector3>, long, long, bool>(Vector<Vector3>
   (AStar3D::*)(long, long, bool)) */MethodBind *create_method_bind<AStar3D,Vector<Vector3>,long,long,bool>(_func_Vector_long_long_bool *param_1) {
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
   *(_func_Vector_long_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128c90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar3D, Vector<long>, long, long, bool>(Vector<long>
   (AStar3D::*)(long, long, bool)) */MethodBind *create_method_bind<AStar3D,Vector<long>,long,long,bool>(_func_Vector_long_long_bool *param_1) {
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
   *(_func_Vector_long_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128cf0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar3D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, long, Vector2 const&, float>(void (AStar2D::*)(long,
   Vector2 const&, float)) */MethodBind *create_method_bind<AStar2D,long,Vector2_const&,float>(_func_void_long_Vector2_ptr_float *param_1) {
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
   *(_func_void_long_Vector2_ptr_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128d50;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector2, long>(Vector2 (AStar2D::*)(long) const) */MethodBind *create_method_bind<AStar2D,Vector2,long>(_func_Vector2_long *param_1) {
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
   *(_func_Vector2_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128db0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, long, Vector2 const&>(void (AStar2D::*)(long, Vector2
   const&)) */MethodBind *create_method_bind<AStar2D,long,Vector2_const&>(_func_void_long_Vector2_ptr *param_1) {
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
   *(_func_void_long_Vector2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128e10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, long, float>(void (AStar2D::*)(long, float)) */MethodBind *create_method_bind<AStar2D,long,float>(_func_void_long_float *param_1) {
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
   *(_func_void_long_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128870;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, long>(void (AStar2D::*)(long)) */MethodBind *create_method_bind<AStar2D,long>(_func_void_long *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001288d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector<long>, long>(Vector<long> (AStar2D::*)(long)) */MethodBind *create_method_bind<AStar2D,Vector<long>,long>(_func_Vector_long *param_1) {
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
   *(_func_Vector_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128990;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector<long>>(Vector<long> (AStar2D::*)()) */MethodBind *create_method_bind<AStar2D,Vector<long>>(_func_Vector *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001289f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, long, bool>(void (AStar2D::*)(long, bool)) */MethodBind *create_method_bind<AStar2D,long,bool>(_func_void_long_bool *param_1) {
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
   *(_func_void_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128a50;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, long, long, bool>(void (AStar2D::*)(long, long, bool)) */MethodBind *create_method_bind<AStar2D,long,long,bool>(_func_void_long_long_bool *param_1) {
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
   *(_func_void_long_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128ab0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D>(void (AStar2D::*)()) */MethodBind *create_method_bind<AStar2D>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00128b70;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, long, Vector2 const&, bool>(long (AStar2D::*)(Vector2
   const&, bool) const) */MethodBind *create_method_bind<AStar2D,long,Vector2_const&,bool>(_func_long_Vector2_ptr_bool *param_1) {
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
   *(_func_long_Vector2_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128e70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector2, Vector2 const&>(Vector2 (AStar2D::*)(Vector2
   const&) const) */MethodBind *create_method_bind<AStar2D,Vector2,Vector2_const&>(_func_Vector2_Vector2_ptr *param_1) {
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
   *(_func_Vector2_Vector2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128ed0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector<Vector2>, long, long, bool>(Vector<Vector2>
   (AStar2D::*)(long, long, bool)) */MethodBind *create_method_bind<AStar2D,Vector<Vector2>,long,long,bool>(_func_Vector_long_long_bool *param_1) {
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
   *(_func_Vector_long_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128f30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<AStar2D, Vector<long>, long, long, bool>(Vector<long>
   (AStar2D::*)(long, long, bool)) */MethodBind *create_method_bind<AStar2D,Vector<long>,long,long,bool>(_func_Vector_long_long_bool *param_1) {
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
   *(_func_Vector_long_long_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00128cf0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AStar2D";
   local_30 = 7;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* CowData<Vector3>::_realloc(long) */undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector3>::resize<false>(long) */undefined8 CowData<Vector3>::resize<false>(CowData<Vector3> *this, long param_1) {
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
      lVar3 = lVar8 * 0xc;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xc == 0) {
      LAB_00115ac0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0xc - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_00115ac0;
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
      LAB_00115a2c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_001159bb;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00115a2c;
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

   memset((void*)( (long)puVar9 + lVar3 * 0xc ), 0, ( param_1 - lVar3 ) * 0xc);
   LAB_001159bb:puVar9[-1] = param_1;
   return 0;
}
/* CowData<Vector2>::_realloc(long) */undefined8 CowData<Vector2>::_realloc(CowData<Vector2> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector2>::resize<false>(long) */undefined8 CowData<Vector2>::resize<false>(CowData<Vector2> *this, long param_1) {
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
      LAB_00115de0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_00115de0;
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
      LAB_00115d4c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00115ce1;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00115d4c;
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
   LAB_00115ce1:puVar9[-1] = param_1;
   return 0;
}
/* CowData<long>::_unref() */void CowData<long>::_unref(CowData<long> *this) {
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
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
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
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
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
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00116220:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00116220;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001160f9:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001160f9;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_00116276;
   }

   if (lVar10 == lVar7) {
      LAB_0011619f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00116276:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0011618a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0011619f;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_0011618a:puVar9[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
      LAB_00116540:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00116540;
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
            goto LAB_00116451;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00116451:puVar7[-1] = param_1;
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
/* AStar2D::_initialize_classv() */void AStar2D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(StrRange *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(StrRange *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(StrRange *)&local_58,false);
    local_48 = "AStar2D";
    local_60 = 0;
    local_40 = 7;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(StrRange *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    _bind_compatibility_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AStar3D::_initialize_classv() */

void AStar3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(StrRange *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(StrRange *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(StrRange *)&local_58,false);
    local_48 = "AStar3D";
    local_60 = 0;
    local_40 = 7;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(StrRange *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    _bind_compatibility_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<long>::_realloc(long) */

undefined8 __thiscall CowData<long>::_realloc(CowData<long> *this,long param_1)

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
/* Error CowData<long>::resize<false>(long) */

undefined8 __thiscall CowData<long>::resize<false>(CowData<long> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
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
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116d20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar8 == 0) goto LAB_00116d20;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00116c31;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00116c31:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Removing unreachable block (ram,0x00116e98) */
/* WARNING: Removing unreachable block (ram,0x0011702d) */
/* WARNING: Removing unreachable block (ram,0x00117039) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Vector<Vector2>, long, long, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,long,long,bool>::validated_call
          (MethodBindTR<Vector<Vector2>,long,long,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117222;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
            *(undefined8 *)(param_2[1] + 8),param_2[2][8]);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00117222:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, long, long, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,long,long,bool>::ptrcall
          (MethodBindTR<Vector<Vector2>,long,long,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117463;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1],
            *param_2[2] != '\0');
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00117463:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::validated_call
          (MethodBindTRC<Vector2,Vector2_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011763b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0011763b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::ptrcall
          (MethodBindTRC<Vector2,Vector2_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00117817;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined8 *)param_3 = uVar3;
LAB_00117817:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector2 const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<long,Vector2_const&,bool>::validated_call
          (MethodBindTRC<long,Vector2_const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00117a03;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1][8]);
  *(undefined8 *)(param_3 + 8) = uVar2;
LAB_00117a03:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector2 const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<long,Vector2_const&,bool>::ptrcall
          (MethodBindTRC<long,Vector2_const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00117be3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1] != '\0');
  *(undefined8 *)param_3 = uVar2;
LAB_00117be3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<long,Vector2_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117f2f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00117f2f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long,Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118119;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00117fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00118119:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2,long>::validated_call
          (MethodBindTRC<Vector2,long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011816b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0011816b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,long>::ptrcall
          (MethodBindTRC<Vector2,long> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011834a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar3;
LAB_0011834a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector2 const&, float>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<long,Vector2_const&,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001186af;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 0x10) + 8);
                    /* WARNING: Could not recover jumptable at 0x00118558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001186af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector2 const&, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long,Vector2_const&,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001188a9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 0x10);
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0011872f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_001188a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Vector<long>,long,long,bool>::validated_call
          (MethodBindTR<Vector<long>,long,long,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118962;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
            *(undefined8 *)(param_2[1] + 8),param_2[2][8]);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00118962:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<long>,long,long,bool>::ptrcall
          (MethodBindTR<Vector<long>,long,long,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118ba3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1],
            *param_2[2] != '\0');
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00118ba3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Vector<Vector3>,long,long,bool>::validated_call
          (MethodBindTR<Vector<Vector3>,long,long,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118de2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
            *(undefined8 *)(param_2[1] + 8),param_2[2][8]);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector3>::_ref((CowData<Vector3> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00118de2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<Vector3>,long,long,bool>::ptrcall
          (MethodBindTR<Vector<Vector3>,long,long,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119023;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1],
            *param_2[2] != '\0');
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector3>::_ref((CowData<Vector3> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00119023:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Vector3,Vector3_const&>::validated_call
          (MethodBindTRC<Vector3,Vector3_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119202;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(undefined1 (*) [12])(param_3 + 8) = auVar3;
LAB_00119202:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3,Vector3_const&>::ptrcall
          (MethodBindTRC<Vector3,Vector3_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001193dc;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 (*) [12])param_3 = auVar3;
LAB_001193dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector3 const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<long,Vector3_const&,bool>::validated_call
          (MethodBindTRC<long,Vector3_const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001195c3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1][8]);
  *(undefined8 *)(param_3 + 8) = uVar2;
LAB_001195c3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector3 const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<long,Vector3_const&,bool>::ptrcall
          (MethodBindTRC<long,Vector3_const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001197a3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1] != '\0');
  *(undefined8 *)param_3 = uVar2;
LAB_001197a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119a50;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)();
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
LAB_00119a50:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119e0f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00119e0f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119ff2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00119ff2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, long, long, bool>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<bool,long,long,bool>::validated_call
          (MethodBindTRC<bool,long,long,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011a05c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
                             *(undefined8 *)(param_2[1] + 8),param_2[2][8]);
  param_3[8] = VVar1;
LAB_0011a05c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, long, long, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,long,long,bool>::ptrcall
          (MethodBindTRC<bool,long,long,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011a24e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1],*param_2[2] != '\0');
  *(undefined1 *)param_3 = uVar1;
LAB_0011a24e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, long, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<long,long,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011a5c9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)(param_3 + 8) + 8),
               *(undefined1 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_0011a5c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, long, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long,long,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011a7b9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0011a643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined8 **)((long)param_3 + 8),**(char **)((long)param_3 + 0x10) != '\0');
    return;
  }
LAB_0011a7b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<long,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011a9a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011a9a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ab91;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0011aa1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0011ab91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector<long>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ad30;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar3)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
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
LAB_0011ad30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<long>>::validated_call
          (MethodBindTR<Vector<long>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
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
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x117088;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011afcb;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011afcb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<long>>::ptrcall
          (MethodBindTR<Vector<long>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
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
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x117088;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b1c7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011b1c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<long>,long>::validated_call
          (MethodBindTR<Vector<long>,long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b3d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011b3d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<long>,long>::ptrcall
          (MethodBindTR<Vector<long>,long> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b5eb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011b5eb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,long>::validated_call
          (MethodBindTRC<bool,long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011b7b9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_0011b7b9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,long>::ptrcall
          (MethodBindTRC<bool,long> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011b998;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0011b998:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<long>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bd01;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011bb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011bd01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bee1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011bd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011bee1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<long,float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c0d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0011bf5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c0d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c2c1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0011c148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c2c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,long>::validated_call
          (MethodBindTRC<float,long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011c31f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0011c31f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,long>::ptrcall
          (MethodBindTRC<float,long> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011c4fd;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar3;
LAB_0011c4fd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<long,Vector3_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c84f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c6fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0011c84f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long,Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ca39;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0011c8c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0011ca39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3,long>::validated_call
          (MethodBindTRC<Vector3,long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ca92;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  *(undefined1 (*) [12])(param_3 + 8) = auVar3;
LAB_0011ca92:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3,long>::ptrcall
          (MethodBindTRC<Vector3,long> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cc70;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 (*) [12])param_3 = auVar3;
LAB_0011cc70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector3 const&, float>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<long,Vector3_const&,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011cfcf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 0x10) + 8);
                    /* WARNING: Could not recover jumptable at 0x0011ce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0011cfcf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector3 const&, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<long,Vector3_const&,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d1c9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 0x10);
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0011d04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0011d1c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<long>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar4;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d290;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      lVar3 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,lVar3);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011d290:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<long>::validated_call
          (MethodBindTRC<long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
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
      goto LAB_0011d4f2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_0011d4f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<long>::ptrcall(MethodBindTRC<long> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
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
      goto LAB_0011d6a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_0011d6a1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, long, long>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Vector<Vector2>,long,long>::validated_call
          (MethodBindTR<Vector<Vector2>,long,long> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d8b8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
            *(undefined8 *)(param_2[1] + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011d8b8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, long, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,long,long>::ptrcall
          (MethodBindTR<Vector<Vector2>,long,long> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dae4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011dae4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Vector<Vector3>,long,long>::validated_call
          (MethodBindTR<Vector<Vector3>,long,long> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dd18;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
            *(undefined8 *)(param_2[1] + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector3>::_ref((CowData<Vector3> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011dd18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<Vector3>,long,long>::ptrcall
          (MethodBindTR<Vector<Vector3>,long,long> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011df44;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector3>::_ref((CowData<Vector3> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011df44:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Vector<long>,long,long>::validated_call
          (MethodBindTR<Vector<long>,long,long> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e178;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
            *(undefined8 *)(param_2[1] + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011e178:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<long>,long,long>::ptrcall
          (MethodBindTR<Vector<long>,long,long> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e3a4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<long>::_ref((CowData<long> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011e3a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Vector<long>,long,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e6e0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar5 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar5 != 0) goto LAB_0011e728;
      this = *(Variant **)param_4;
LAB_0011e73d:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar7 = *(long *)(pVVar10 + -8);
      iVar12 = (int)lVar7;
      if (iVar12 < iVar5) {
LAB_0011e728:
        uVar6 = 4;
        goto LAB_0011e715;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar7 <= lVar9) goto LAB_0011e800;
        this = pVVar10 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011e73d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar5));
      if (lVar7 <= lVar9) {
LAB_0011e800:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC149;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar7 = Variant::operator_cast_to_long(pVVar10);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar3 = _LC150;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar9 = Variant::operator_cast_to_long(this);
    (*(code *)pVVar13)(&local_68,(Variant *)((long)plVar11 + (long)pVVar1),lVar9,lVar7);
    Variant::Variant((Variant *)local_58,(Vector *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar7 = local_60;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_60 != 0) {
      LOCK();
      plVar11 = (long *)(local_60 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    uVar6 = 3;
LAB_0011e715:
    *in_R9 = uVar6;
    in_R9[2] = 2;
  }
LAB_0011e6e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector3>,long,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eb00;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar5 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar5 != 0) goto LAB_0011eb48;
      this = *(Variant **)param_4;
LAB_0011eb5d:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar7 = *(long *)(pVVar10 + -8);
      iVar12 = (int)lVar7;
      if (iVar12 < iVar5) {
LAB_0011eb48:
        uVar6 = 4;
        goto LAB_0011eb35;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar7 <= lVar9) goto LAB_0011ec20;
        this = pVVar10 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011eb5d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar5));
      if (lVar7 <= lVar9) {
LAB_0011ec20:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC149;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar7 = Variant::operator_cast_to_long(pVVar10);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar3 = _LC150;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar9 = Variant::operator_cast_to_long(this);
    (*(code *)pVVar13)(&local_68,(Variant *)((long)plVar11 + (long)pVVar1),lVar9,lVar7);
    Variant::Variant((Variant *)local_58,(Vector *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar7 = local_60;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_60 != 0) {
      LOCK();
      plVar11 = (long *)(local_60 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    uVar6 = 3;
LAB_0011eb35:
    *in_R9 = uVar6;
    in_R9[2] = 2;
  }
LAB_0011eb00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, long, long>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector2>,long,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ef20;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar5 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar5 != 0) goto LAB_0011ef68;
      this = *(Variant **)param_4;
LAB_0011ef7d:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar7 = *(long *)(pVVar10 + -8);
      iVar12 = (int)lVar7;
      if (iVar12 < iVar5) {
LAB_0011ef68:
        uVar6 = 4;
        goto LAB_0011ef55;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar7 <= lVar9) goto LAB_0011f040;
        this = pVVar10 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011ef7d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar5));
      if (lVar7 <= lVar9) {
LAB_0011f040:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC149;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar7 = Variant::operator_cast_to_long(pVVar10);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar3 = _LC150;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar9 = Variant::operator_cast_to_long(this);
    (*(code *)pVVar13)(&local_68,(Variant *)((long)plVar11 + (long)pVVar1),lVar9,lVar7);
    Variant::Variant((Variant *)local_58,(Vector *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar7 = local_60;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_60 != 0) {
      LOCK();
      plVar11 = (long *)(local_60 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    uVar6 = 3;
LAB_0011ef55:
    *in_R9 = uVar6;
    in_R9[2] = 2;
  }
LAB_0011ef20:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f2d0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011f310;
LAB_0011f300:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar7 = *(long *)(pVVar11 + -8);
      if ((int)lVar7 < (int)(in_R8D ^ 1)) {
LAB_0011f310:
        uVar6 = 4;
        goto LAB_0011f2c5;
      }
      if (in_R8D == 1) goto LAB_0011f300;
      lVar9 = (long)((int)lVar7 + -1);
      if (lVar7 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC150;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    lVar7 = Variant::operator_cast_to_long(pVVar11);
    local_54 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),lVar7);
    Variant::Variant((Variant *)local_48,(Vector3 *)local_54);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_0011f2c5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011f2d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  float fVar12;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f648;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011f690;
LAB_0011f680:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar6 = *(long *)(pVVar10 + -8);
      if ((int)lVar6 < (int)(in_R8D ^ 1)) {
LAB_0011f690:
        uVar5 = 4;
        goto LAB_0011f63d;
      }
      if (in_R8D == 1) goto LAB_0011f680;
      lVar8 = (long)((int)lVar6 + -1);
      if (lVar6 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC150;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar6 = Variant::operator_cast_to_long(pVVar10);
    fVar12 = (float)(*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),lVar6);
    Variant::Variant((Variant *)local_48,fVar12);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar5 = 3;
LAB_0011f63d:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_0011f648:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Vector<long>, long>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTR<Vector<long>,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f9e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011fa20;
LAB_0011fa10:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar6 = *(long *)(pVVar10 + -8);
      if ((int)lVar6 < (int)(in_R8D ^ 1)) {
LAB_0011fa20:
        uVar5 = 4;
        goto LAB_0011f9d5;
      }
      if (in_R8D == 1) goto LAB_0011fa10;
      lVar8 = (long)((int)lVar6 + -1);
      if (lVar6 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC150;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar6 = Variant::operator_cast_to_long(pVVar10);
    (*(code *)pVVar11)(&local_58,(Variant *)((long)plVar9 + (long)pVVar1),lVar6);
    Variant::Variant((Variant *)local_48,(Vector *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    CowData<long>::_unref((CowData<long> *)&local_50);
  }
  else {
    uVar5 = 3;
LAB_0011f9d5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_0011f9e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fd60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011fda0;
LAB_0011fd90:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar7 = *(long *)(pVVar11 + -8);
      if ((int)lVar7 < (int)(in_R8D ^ 1)) {
LAB_0011fda0:
        uVar6 = 4;
        goto LAB_0011fd55;
      }
      if (in_R8D == 1) goto LAB_0011fd90;
      lVar9 = (long)((int)lVar7 + -1);
      if (lVar7 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar3 = _LC150;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar7 = Variant::operator_cast_to_long(pVVar11);
    bVar5 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),lVar7);
    Variant::Variant((Variant *)local_48,bVar5);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_0011fd55:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011fd60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001200e0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00120120;
LAB_00120110:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar6 = *(long *)(pVVar10 + -8);
      if ((int)lVar6 < (int)(in_R8D ^ 1)) {
LAB_00120120:
        uVar5 = 4;
        goto LAB_001200d5;
      }
      if (in_R8D == 1) goto LAB_00120110;
      lVar8 = (long)((int)lVar6 + -1);
      if (lVar6 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC150;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar6 = Variant::operator_cast_to_long(pVVar10);
    local_50 = (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),lVar6);
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar5 = 3;
LAB_001200d5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_001200e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, long, long, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,long,long,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_001204e2;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar9;
    }
    if ((int)(3 - in_R8D) <= iVar12) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar12 + -3 + (int)lVar8;
          if (lVar9 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar9,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_78[lVar8] = pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],1);
      uVar4 = _LC151;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC149;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar9 = Variant::operator_cast_to_long(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC150;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar8 = Variant::operator_cast_to_long(local_78[0]);
      bVar6 = (bool)(*(code *)pVVar15)((Variant *)((long)plVar13 + (long)pVVar1),lVar8,lVar9,bVar6);
      Variant::Variant((Variant *)local_58,bVar6);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_001204e2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_001204e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector3>,long,long,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  long local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_001208fa;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar9;
    }
    if ((int)(3 - in_R8D) <= iVar12) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar12 + -3 + (int)lVar8;
          if (lVar9 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar9,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_78[lVar8] = pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],1);
      uVar4 = _LC151;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC149;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar9 = Variant::operator_cast_to_long(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC150;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar8 = Variant::operator_cast_to_long(local_78[0]);
      (*(code *)pVVar15)(&local_88,(Variant *)((long)plVar13 + (long)pVVar1),lVar8,lVar9,bVar6);
      Variant::Variant((Variant *)local_58,(Vector *)&local_88);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar9 = local_80;
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_80 != 0) {
        LOCK();
        plVar13 = (long *)(local_80 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      goto LAB_001208fa;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_001208fa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Vector<long>,long,long,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00120cea;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar9;
    }
    if ((int)(3 - in_R8D) <= iVar12) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar12 + -3 + (int)lVar8;
          if (lVar9 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar9,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_78[lVar8] = pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],1);
      uVar4 = _LC151;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC149;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar9 = Variant::operator_cast_to_long(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC150;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar8 = Variant::operator_cast_to_long(local_78[0]);
      (*(code *)pVVar15)(&local_88,(Variant *)((long)plVar13 + (long)pVVar1),lVar8,lVar9,bVar6);
      Variant::Variant((Variant *)local_58,(Vector *)&local_88);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      CowData<long>::_unref((CowData<long> *)&local_80);
      goto LAB_00120cea;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00120cea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, long, long, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector2>,long,long,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  long local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_001210fa;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar9;
    }
    if ((int)(3 - in_R8D) <= iVar12) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar12 + -3 + (int)lVar8;
          if (lVar9 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar9,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_78[lVar8] = pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],1);
      uVar4 = _LC151;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC149;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar9 = Variant::operator_cast_to_long(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC150;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar8 = Variant::operator_cast_to_long(local_78[0]);
      (*(code *)pVVar15)(&local_88,(Variant *)((long)plVar13 + (long)pVVar1),lVar8,lVar9,bVar6);
      Variant::Variant((Variant *)local_58,(Vector *)&local_88);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar9 = local_80;
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_80 != 0) {
        LOCK();
        plVar13 = (long *)(local_80 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      goto LAB_001210fa;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_001210fa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector2 const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<long,Vector2_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  Variant *pVVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *this;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0012149f;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_001214e0;
      this = *(Variant **)param_4;
LAB_001214fd:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar8 = *(long *)(pVVar11 + -8);
      iVar13 = (int)lVar8;
      if (iVar13 < iVar6) {
LAB_001214e0:
        uVar7 = 4;
        goto LAB_001214cd;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar8 <= lVar10) goto LAB_001215c0;
        this = pVVar11 + lVar10 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001214fd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar8 <= lVar10) {
LAB_001215c0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar11 = pVVar11 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar11,1);
    uVar3 = _LC152;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    bVar5 = Variant::operator_cast_to_bool(pVVar11);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,5);
    uVar3 = _LC153;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    local_60 = Variant::operator_cast_to_Vector2(this);
    lVar8 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),&local_60,bVar5);
    Variant::Variant((Variant *)local_58,lVar8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_001214cd:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0012149f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector2,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121850;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00121890;
LAB_00121880:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121890:
        uVar6 = 4;
        goto LAB_00121845;
      }
      if (in_R8D == 1) goto LAB_00121880;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC153;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2(pVVar10);
    local_58 = (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_00121845:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00121850:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector2 const&, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<long,Vector2_const&,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  float fVar15;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00121c1a;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar8;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar10 = iVar11 + -3 + (int)lVar7;
          if (lVar8 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar8,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_58[lVar7] = pVVar13;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar14 & 1) != 0) {
        pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[2],3);
      uVar4 = _LC154;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      fVar15 = Variant::operator_cast_to_float(local_58[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[1],5);
      uVar4 = _LC155;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_60 = Variant::operator_cast_to_Vector2(local_58[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[0],2);
      uVar4 = _LC150;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      lVar8 = Variant::operator_cast_to_long(local_58[0]);
      (*(code *)pVVar14)(fVar15,(Variant *)((long)plVar12 + (long)pVVar1),lVar8,&local_60);
      goto LAB_00121c1a;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_00121c1a:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector3 const&, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<long,Vector3_const&,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  undefined4 in_register_00000014;
  long *plVar16;
  Variant *pVVar17;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar18;
  long in_FS_OFFSET;
  float fVar19;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  Variant *local_58 [3];
  long local_40;
  
  plVar16 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar16 != (long *)0x0) && (plVar16[1] != 0)) && (*(char *)(plVar16[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar16[1] == 0) {
      plVar13 = (long *)plVar16[0x23];
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(**(code **)(*plVar16 + 0x40))(plVar16);
      }
    }
    else {
      plVar13 = (long *)(plVar16[1] + 0x20);
    }
    if (local_98 == (char *)*plVar13) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      auVar7._8_4_ = local_64._8_4_;
      auVar7._0_8_ = local_64._0_8_;
      auVar6._8_4_ = local_70._8_4_;
      auVar6._0_8_ = local_70._0_8_;
      auVar5._8_4_ = local_7c._8_4_;
      auVar5._0_8_ = local_7c._0_8_;
      auVar4._8_4_ = local_88._8_4_;
      auVar4._0_8_ = local_88._0_8_;
      if ((StringName::configured != '\0') &&
         (local_88 = auVar4, local_7c = auVar5, local_70 = auVar6, local_64 = auVar7, local_a8 != 0)
         ) {
        StringName::unref();
      }
      goto LAB_00121fda;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar18 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar10 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar15 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar2 + -8);
      iVar15 = (int)lVar12;
    }
    if ((int)(3 - in_R8D) <= iVar15) {
      lVar11 = 0;
      do {
        if ((int)lVar11 < (int)in_R8D) {
          pVVar17 = *(Variant **)(param_4 + lVar11 * 8);
        }
        else {
          uVar14 = iVar15 + -3 + (int)lVar11;
          if (lVar12 <= (int)uVar14) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar14,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar17 = pVVar2 + (ulong)uVar14 * 0x18;
        }
        local_58[lVar11] = pVVar17;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar18 & 1) != 0) {
        pVVar18 = *(Variant **)(pVVar18 + *(long *)((long)plVar16 + (long)pVVar1) + -1);
      }
      cVar9 = Variant::can_convert_strict(*(undefined4 *)local_58[2],3);
      uVar8 = _LC154;
      if (cVar9 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      fVar19 = Variant::operator_cast_to_float(local_58[2]);
      cVar9 = Variant::can_convert_strict(*(undefined4 *)local_58[1],9);
      uVar8 = _LC156;
      if (cVar9 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      local_88 = Variant::operator_cast_to_Vector3(local_58[1]);
      local_7c = local_88;
      local_70 = local_88;
      local_64 = local_88;
      cVar9 = Variant::can_convert_strict(*(undefined4 *)local_58[0],2);
      uVar8 = _LC150;
      if (cVar9 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      lVar12 = Variant::operator_cast_to_long(local_58[0]);
      (*(code *)pVVar18)(fVar19,(Variant *)((long)plVar16 + (long)pVVar1),lVar12,local_88);
      goto LAB_00121fda;
    }
    uVar10 = 4;
  }
  *in_R9 = uVar10;
  in_R9[2] = 3;
LAB_00121fda:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector3 const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<long,Vector3_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *this;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_7c [3] [12];
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar11 = (long *)plVar14[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar11 = (long *)(plVar14[1] + 0x20);
    }
    if (local_98 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      auVar4._8_4_ = local_58._8_4_;
      auVar4._0_8_ = local_58._0_8_;
      auVar3._8_4_ = local_7c[0]._8_4_;
      auVar3._0_8_ = local_7c[0]._0_8_;
      if ((StringName::configured != '\0') &&
         (local_7c[0] = auVar3, local_58 = auVar4, local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_00122394;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar13 = param_2[5];
    iVar8 = 2 - in_R8D;
    if (pVVar13 == (Variant *)0x0) {
      if (iVar8 != 0) goto LAB_001223d8;
      this = *(Variant **)param_4;
LAB_001223ed:
      pVVar13 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar10 = *(long *)(pVVar13 + -8);
      iVar15 = (int)lVar10;
      if (iVar15 < iVar8) {
LAB_001223d8:
        uVar9 = 4;
        goto LAB_001223c5;
      }
      if (in_R8D == 0) {
        lVar12 = (long)(iVar15 + -2);
        if (lVar10 <= lVar12) goto LAB_001224b0;
        this = pVVar13 + lVar12 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001223ed;
      }
      lVar12 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar8));
      if (lVar10 <= lVar12) {
LAB_001224b0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar13 = pVVar13 + lVar12 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar16 & 1) != 0) {
      pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,1);
    uVar5 = _LC152;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    bVar7 = Variant::operator_cast_to_bool(pVVar13);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,9);
    uVar5 = _LC157;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_7c[0] = Variant::operator_cast_to_Vector3(this);
    local_58 = local_7c[0];
    lVar10 = (*(code *)pVVar16)((Variant *)((long)plVar14 + (long)pVVar1),local_7c,bVar7);
    Variant::Variant((Variant *)local_58,lVar10);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58._0_4_;
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_4c,local_58._8_4_);
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  else {
    uVar9 = 3;
LAB_001223c5:
    *in_R9 = uVar9;
    in_R9[2] = 2;
  }
LAB_00122394:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector3,Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  undefined1 local_6c [3] [12];
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      auVar6._8_4_ = local_48._8_4_;
      auVar6._0_8_ = local_48._0_8_;
      auVar5._8_4_ = local_6c[0]._8_4_;
      auVar5._0_8_ = local_6c[0]._0_8_;
      auVar4._8_4_ = local_78._8_4_;
      auVar4._0_8_ = local_78._0_8_;
      if ((StringName::configured != '\0') &&
         (local_78 = auVar4, local_6c[0] = auVar5, local_48 = auVar6, local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00122750;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar14 = param_2[5];
    if (pVVar14 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00122790;
LAB_00122780:
      pVVar14 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00122790:
        uVar9 = 4;
        goto LAB_00122745;
      }
      if (in_R8D == 1) goto LAB_00122780;
      lVar11 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar8 = Variant::can_convert_strict(*(undefined4 *)pVVar14,9);
    uVar7 = _LC157;
    if (cVar8 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar7;
    }
    local_6c[0] = Variant::operator_cast_to_Vector3(pVVar14);
    local_48 = local_6c[0];
    local_78 = (*(code *)pVVar13)((Variant *)((long)plVar12 + (long)pVVar1),local_6c);
    Variant::Variant((Variant *)local_48,(Vector3 *)local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48._0_4_;
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_3c,local_48._8_4_);
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar9 = 3;
LAB_00122745:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_00122750:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, long, Vector2 const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(long, Vector2 const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,long,Vector2_const&>
               (__UnexistingClass *param_1,_func_void_long_Vector2_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Vector2 *pVVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  Variant *this;
  uint uVar12;
  int iVar13;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)param_5;
  if (uVar12 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar12;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_00122ac8;
      this = (Variant *)*plVar10;
LAB_00122b1d:
      this_00 = (Variant *)plVar10[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar13 = (int)lVar3;
      if (iVar13 < iVar7) {
LAB_00122ac8:
        uVar8 = 4;
        goto LAB_00122acd;
      }
      if (uVar12 == 0) {
        lVar11 = (long)(iVar13 + -2);
        if (lVar3 <= lVar11) goto LAB_00122b38;
        this = (Variant *)(lVar2 + lVar11 * 0x18);
      }
      else {
        this = (Variant *)*plVar10;
        if (uVar12 == 2) goto LAB_00122b1d;
      }
      lVar11 = (long)(int)((uVar12 ^ 1) + (iVar13 - iVar7));
      if (lVar3 <= lVar11) {
LAB_00122b38:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar11 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_long_Vector2_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
      ;
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,5);
    uVar5 = _LC155;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Vector2(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC150;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    pVVar9 = (Vector2 *)Variant::operator_cast_to_long(this);
    (*param_2)((long)(param_1 + (long)param_3),pVVar9);
  }
  else {
    uVar8 = 3;
LAB_00122acd:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<long,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122bd6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,long,Vector2_const&>
            (p_Var4,(_func_void_long_Vector2_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00122bd6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, long, long, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(long, long, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,long,long,bool>
               (__UnexistingClass *param_1,_func_void_long_long_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  uint uVar8;
  int iVar9;
  uint uVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_5;
  uVar4 = 3;
  if (uVar8 < 4) {
    lVar6 = *(long *)(in_stack_00000008 + 8);
    if (lVar6 == 0) {
      iVar9 = 0;
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar6 + -8);
      iVar9 = (int)lVar7;
    }
    if ((int)(3 - uVar8) <= iVar9) {
      lVar5 = 0;
      do {
        if ((int)lVar5 < (int)uVar8) {
          pVVar11 = *(Variant **)(CONCAT44(in_register_0000000c,param_4) + lVar5 * 8);
        }
        else {
          uVar10 = iVar9 + -3 + (int)lVar5;
          if (lVar7 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar7,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          pVVar11 = (Variant *)(lVar6 + (ulong)uVar10 * 0x18);
        }
        local_58[lVar5] = pVVar11;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_long_long_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
        ;
      }
      cVar3 = Variant::can_convert_strict(*(undefined4 *)local_58[2],1);
      uVar2 = _LC151;
      if (cVar3 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar2;
      }
      Variant::operator_cast_to_bool(local_58[2]);
      cVar3 = Variant::can_convert_strict(*(undefined4 *)local_58[1],2);
      uVar2 = _LC149;
      if (cVar3 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar2;
      }
      lVar6 = Variant::operator_cast_to_long(local_58[1]);
      cVar3 = Variant::can_convert_strict(*(undefined4 *)local_58[0],2);
      uVar2 = _LC150;
      if (cVar3 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar2;
      }
      lVar7 = Variant::operator_cast_to_long(local_58[0]);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*param_2)((long)(param_1 + (long)param_3),lVar7,SUB81(lVar6,0));
        return;
      }
      goto LAB_00123012;
    }
    uVar4 = 4;
  }
  *(undefined4 *)param_6 = uVar4;
  *(undefined4 *)(param_6 + 8) = 3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00123012:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, long, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<long,long,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123076;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,long,long,bool>
            (p_Var4,(_func_void_long_long_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123076:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, long, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(long, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,long,bool>
               (__UnexistingClass *param_1,_func_void_long_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar6 = 3;
    goto LAB_001233ad;
  }
  lVar7 = *(long *)(in_stack_00000008 + 8);
  iVar5 = 2 - uVar10;
  if (lVar7 == 0) {
    if (iVar5 == 0) {
      this = (Variant *)*plVar8;
LAB_001233dd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00123315;
    }
  }
  else {
    lVar1 = *(long *)(lVar7 + -8);
    iVar11 = (int)lVar1;
    if (iVar5 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar1 <= lVar9) goto LAB_001233f8;
        this = (Variant *)(lVar7 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001233dd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar5));
      if (lVar1 <= lVar9) {
LAB_001233f8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar7 + lVar9 * 0x18);
LAB_00123315:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_long_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar3 = _LC152;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar3 = _LC150;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012339d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((long)(param_1 + (long)param_3),SUB81(lVar7,0));
      return;
    }
  }
  uVar6 = 4;
LAB_001233ad:
  *(undefined4 *)param_6 = uVar6;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<long, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<long,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123496;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,long,bool>
            (p_Var4,(_func_void_long_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123496:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, long>(__UnexistingClass*, void
   (__UnexistingClass::*)(long), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,long>
               (__UnexistingClass *param_1,_func_void_long *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
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
    goto LAB_0012379d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00123800;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00123800:
      uVar6 = 4;
LAB_0012379d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0012371b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012371b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_long **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC150;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00123777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((long)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<long>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123866;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,long>
            (p_Var4,(_func_void_long *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123866:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, long, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(long, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,long,float>
               (__UnexistingClass *param_1,_func_void_long_float *param_2,Variant **param_3,
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
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00123ba5;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00123bdd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00123b05;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00123bf8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00123bdd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00123bf8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00123b05:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_long_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC158;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC150;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00123b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((long)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_00123ba5:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<long, float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<long,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123c96;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,long,float>
            (p_Var4,(_func_void_long_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123c96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, long, Vector3 const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(long, Vector3 const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,long,Vector3_const&>
               (__UnexistingClass *param_1,_func_void_long_Vector3_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Vector3 *pVVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  Variant *this;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)param_5;
  if (uVar12 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar12;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_00124008;
      this = (Variant *)*plVar10;
LAB_0012405d:
      this_00 = (Variant *)plVar10[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar13 = (int)lVar3;
      if (iVar13 < iVar7) {
LAB_00124008:
        uVar8 = 4;
        goto LAB_0012400d;
      }
      if (uVar12 == 0) {
        lVar11 = (long)(iVar13 + -2);
        if (lVar3 <= lVar11) goto LAB_00124078;
        this = (Variant *)(lVar2 + lVar11 * 0x18);
      }
      else {
        this = (Variant *)*plVar10;
        if (uVar12 == 2) goto LAB_0012405d;
      }
      lVar11 = (long)(int)((uVar12 ^ 1) + (iVar13 - iVar7));
      if (lVar3 <= lVar11) {
LAB_00124078:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar11 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_long_Vector3_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
      ;
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,9);
    uVar5 = _LC156;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Vector3(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC150;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    pVVar9 = (Vector3 *)Variant::operator_cast_to_long(this);
    (*param_2)((long)(param_1 + (long)param_3),pVVar9);
  }
  else {
    uVar8 = 3;
LAB_0012400d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<long,Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC146,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00124116;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,long,Vector3_const&>
            (p_Var4,(_func_void_long_Vector3_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00124116:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<long>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<long>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *param_2;
  if (iVar3 == param_1) {
    GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void> *)local_58);
    *(undefined4 *)param_3 = local_58[0];
    if (*(long *)(param_3 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar2 = local_50;
      local_50 = 0;
      *(long *)(param_3 + 8) = lVar2;
    }
    if (*(long *)(param_3 + 0x10) != local_48) {
      StringName::unref();
      lVar2 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_3 + 0x18) = local_40;
    if (*(long *)(param_3 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar2 = local_38;
      local_38 = 0;
      *(long *)(param_3 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_3 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    iVar3 = *param_2;
  }
  *param_2 = iVar3 + 1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, long, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<Vector2>,long,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<long>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<long>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001245e4;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 0x23;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00124617:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00124617;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar7 + 8),false);
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
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001245e4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<long>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00124725;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 9;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00124837:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00124837;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00124725:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<long>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00124925;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = &_LC17;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_70 == 0) {
    puVar4[10] = 6;
LAB_00124a3f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
    uVar3 = local_70;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_70);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00124a3f;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      uVar3 = local_70;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        uVar3 = local_70;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      uVar3 = local_70;
    }
  }
  local_70 = uVar3;
  if (uVar3 != 0) {
    LOCK();
    plVar1 = (long *)(uVar3 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(uVar3 - 0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
LAB_00124925:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindTR<Vector<long>, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<long>,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<long>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00124b35;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1f;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00124c47:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00124c47;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00124b35:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<long>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00124d35;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00124e47:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00124e47;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00124d35:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<long>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00124f35;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 5;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00125047:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00125047;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00124f35:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<long,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
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
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<long>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_00125104;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00125200:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00125200;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
  *(undefined4 *)pPVar7 = local_68._0_4_;
  if (*(long *)(pPVar7 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar5;
  }
  if (*(long *)(pPVar7 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(pPVar7 + 0x18) = local_50;
  if (*(long *)(pPVar7 + 0x20) == local_48) {
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_48;
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00125104:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* void call_get_argument_type_info<long, long, bool>(int, PropertyInfo&) */

void call_get_argument_type_info<long,long,bool>(int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  if (param_1 == 0) {
    GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void> *)&local_68);
    *(undefined4 *)param_2 = local_68._0_4_;
    if (*(long *)(param_2 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar6 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar6;
    }
    if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar6 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar6;
    }
    *(int *)(param_2 + 0x18) = local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar7 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar7;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  local_8c = 1;
  call_get_argument_type_info_helper<long>(param_1,&local_8c,param_2);
  if (param_1 != local_8c) goto LAB_001253c0;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00125550:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00125550;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar6 = local_60._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_60._8_8_;
    local_60 = auVar4 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar6;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) == local_48) {
    *(undefined4 *)(param_2 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    *(long *)(param_2 + 0x20) = local_48;
    *(undefined4 *)(param_2 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_001253c0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<long, long, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<long,long,bool>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<long,long,bool>(in_EDX,pPVar1);
  return pPVar1;
}



/* MethodBindTRC<bool, long, long, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,long,long,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<long,long,bool>(in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00125789;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00125897:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00125897;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00125789:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<Vector3>,long,long,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<long,long,bool>(in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00125979;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x24;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00125a87:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00125a87;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00125979:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<long>,long,long,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<long,long,bool>(in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00125b69;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1f;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00125c77:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00125c77;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00125b69:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, long, long, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<Vector2>,long,long,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<long,long,bool>(in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00125d59;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x23;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00125e67:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00125e67;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00125d59:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<long>, long, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<long>,long,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<long>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<long>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00126034;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 0x1f;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00126067:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00126067;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar7 + 8),false);
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
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00126034:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector3>, long, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<Vector3>,long,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<long>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<long>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00126254;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 0x24;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00126287:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00126287;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar7 + 8),false);
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
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00126254:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector2 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector2_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00126327;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00126420:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00126420;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_00126327:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<long, Vector2 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<long,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  local_5c = 0;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void> *)local_58);
    *(undefined4 *)pPVar2 = local_58[0];
    if (*(long *)(pPVar2 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_40;
    if (*(long *)(pPVar2 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  local_5c = 1;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_5c,pPVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector2 const&, bool>::_gen_argument_type_info(int) const */

GetTypeInfo<long,void> *
MethodBindTRC<long,Vector2_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<long,void> *this;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
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
  
  this = (GetTypeInfo<long,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < in_EDX) {
    GetTypeInfo<long,void>::get_class_info(this);
    goto LAB_00126723;
  }
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_bc = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  call_get_argument_type_info_helper<Vector2_const&>
            (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
  if (in_EDX == local_bc) {
    local_a8 = 0;
    local_b0 = 0;
    local_68 = &_LC17;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_b0 == 0) {
LAB_001268bb:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001268bb;
      StringName::StringName((StringName *)&local_a0,(CowData<char32_t> *)&local_48,false);
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
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
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
  uVar5 = local_90._8_8_;
  uVar4 = local_90._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_90._8_8_;
  local_90 = auVar1 << 0x40;
  *(undefined4 *)this = (undefined4)local_98;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x18) = (undefined4)local_80;
  *(long *)(this + 0x20) = local_78;
  *(undefined4 *)(this + 0x28) = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_00126723:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* MethodBindTRC<Vector2, Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00126a65;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 5;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00126b77:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00126b77;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00126a65:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector2 const&, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<long,Vector2_const&,float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  iVar3 = 1;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  local_5c = 0;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void> *)local_58);
    *(undefined4 *)pPVar4 = local_58[0];
    if (*(long *)(pPVar4 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
      lVar2 = local_50;
      local_50 = 0;
      *(long *)(pPVar4 + 8) = lVar2;
    }
    if (*(long *)(pPVar4 + 0x10) != local_48) {
      StringName::unref();
      lVar2 = local_48;
      local_48 = 0;
      *(long *)(pPVar4 + 0x10) = lVar2;
    }
    lVar2 = local_38;
    *(undefined4 *)(pPVar4 + 0x18) = local_40;
    if (*(long *)(pPVar4 + 0x20) == local_38) {
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
      *(long *)(pPVar4 + 0x20) = local_38;
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    iVar3 = local_5c + 1;
  }
  local_5c = iVar3;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_5c,pPVar4);
  if (in_EDX == local_5c) {
    GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)local_58);
    *(undefined4 *)pPVar4 = local_58[0];
    if (*(long *)(pPVar4 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
      lVar2 = local_50;
      local_50 = 0;
      *(long *)(pPVar4 + 8) = lVar2;
    }
    if (*(long *)(pPVar4 + 0x10) != local_48) {
      StringName::unref();
      lVar2 = local_48;
      local_48 = 0;
      *(long *)(pPVar4 + 0x10) = lVar2;
    }
    lVar2 = local_38;
    *(undefined4 *)(pPVar4 + 0x18) = local_40;
    if (*(long *)(pPVar4 + 0x20) == local_38) {
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
      *(long *)(pPVar4 + 0x20) = local_38;
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector3 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector3_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00126ed7;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,9);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00126fd0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00126fd0;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_00126ed7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<long, Vector3 const&, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<long,Vector3_const&,float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  iVar3 = 1;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  local_5c = 0;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void> *)local_58);
    *(undefined4 *)pPVar4 = local_58[0];
    if (*(long *)(pPVar4 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
      lVar2 = local_50;
      local_50 = 0;
      *(long *)(pPVar4 + 8) = lVar2;
    }
    if (*(long *)(pPVar4 + 0x10) != local_48) {
      StringName::unref();
      lVar2 = local_48;
      local_48 = 0;
      *(long *)(pPVar4 + 0x10) = lVar2;
    }
    lVar2 = local_38;
    *(undefined4 *)(pPVar4 + 0x18) = local_40;
    if (*(long *)(pPVar4 + 0x20) == local_38) {
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
      *(long *)(pPVar4 + 0x20) = local_38;
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    iVar3 = local_5c + 1;
  }
  local_5c = iVar3;
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_5c,pPVar4);
  if (in_EDX == local_5c) {
    GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)local_58);
    *(undefined4 *)pPVar4 = local_58[0];
    if (*(long *)(pPVar4 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
      lVar2 = local_50;
      local_50 = 0;
      *(long *)(pPVar4 + 8) = lVar2;
    }
    if (*(long *)(pPVar4 + 0x10) != local_48) {
      StringName::unref();
      lVar2 = local_48;
      local_48 = 0;
      *(long *)(pPVar4 + 0x10) = lVar2;
    }
    lVar2 = local_38;
    *(undefined4 *)(pPVar4 + 0x18) = local_40;
    if (*(long *)(pPVar4 + 0x20) == local_38) {
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
      *(long *)(pPVar4 + 0x20) = local_38;
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<long, Vector3 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<long,Vector3_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_5c;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  local_5c = 0;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void> *)local_58);
    *(undefined4 *)pPVar2 = local_58[0];
    if (*(long *)(pPVar2 + 8) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_40;
    if (*(long *)(pPVar2 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  local_5c = 1;
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_5c,pPVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Vector3 const&, bool>::_gen_argument_type_info(int) const */

GetTypeInfo<long,void> *
MethodBindTRC<long,Vector3_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<long,void> *this;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
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
  
  this = (GetTypeInfo<long,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < in_EDX) {
    GetTypeInfo<long,void>::get_class_info(this);
    goto LAB_001275b3;
  }
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_bc = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  call_get_argument_type_info_helper<Vector3_const&>
            (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
  if (in_EDX == local_bc) {
    local_a8 = 0;
    local_b0 = 0;
    local_68 = &_LC17;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_b0 == 0) {
LAB_0012774b:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0012774b;
      StringName::StringName((StringName *)&local_a0,(CowData<char32_t> *)&local_48,false);
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
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
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
  uVar5 = local_90._8_8_;
  uVar4 = local_90._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_90._8_8_;
  local_90 = auVar1 << 0x40;
  *(undefined4 *)this = (undefined4)local_98;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x18) = (undefined4)local_80;
  *(long *)(this + 0x20) = local_78;
  *(undefined4 *)(this + 0x28) = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_001275b3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* MethodBindTRC<Vector3, Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3,Vector3_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector3_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_001278f5;
  }
  local_70 = 0;
  local_68 = &_LC17;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 9;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00127a07:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00127a07;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001278f5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* AStar2D::~AStar2D() */

void __thiscall AStar2D::~AStar2D(AStar2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<Vector2>, long, long, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,long,long,bool>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,long,long,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector2,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<long, Vector2 const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,Vector2_const&,bool>::~MethodBindTRC
          (MethodBindTRC<long,Vector2_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<long, Vector2 const&>::~MethodBindT() */

void __thiscall
MethodBindT<long,Vector2_const&>::~MethodBindT(MethodBindT<long,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,long>::~MethodBindTRC(MethodBindTRC<Vector2,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<long, Vector2 const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<long,Vector2_const&,float>::~MethodBindT(MethodBindT<long,Vector2_const&,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<long>, long, long, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<long>,long,long,bool>::~MethodBindTR
          (MethodBindTR<Vector<long>,long,long,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<Vector3>, long, long, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector3>,long,long,bool>::~MethodBindTR
          (MethodBindTR<Vector<Vector3>,long,long,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3, Vector3 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector3,Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3,Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<long, Vector3 const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,Vector3_const&,bool>::~MethodBindTRC
          (MethodBindTRC<long,Vector3_const&,bool> *this)

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
/* MethodBindT<long>::~MethodBindT() */

void __thiscall MethodBindT<long>::~MethodBindT(MethodBindT<long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<long>::~MethodBindTRC(MethodBindTRC<long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, long, long, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,long,long,bool>::~MethodBindTRC(MethodBindTRC<bool,long,long,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<long, long, bool>::~MethodBindT() */

void __thiscall MethodBindT<long,long,bool>::~MethodBindT(MethodBindT<long,long,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<long, bool>::~MethodBindT() */

void __thiscall MethodBindT<long,bool>::~MethodBindT(MethodBindT<long,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<long>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<long>>::~MethodBindTR(MethodBindTR<Vector<long>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<long>, long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<long>,long>::~MethodBindTR(MethodBindTR<Vector<long>,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<long, float>::~MethodBindT() */

void __thiscall MethodBindT<long,float>::~MethodBindT(MethodBindT<long,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,long>::~MethodBindTRC(MethodBindTRC<float,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<long, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<long,Vector3_const&>::~MethodBindT(MethodBindT<long,Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,long>::~MethodBindTRC(MethodBindTRC<Vector3,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<long, Vector3 const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<long,Vector3_const&,float>::~MethodBindT(MethodBindT<long,Vector3_const&,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<Vector2>, long, long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,long,long>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,long,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<Vector3>, long, long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector3>,long,long>::~MethodBindTR
          (MethodBindTR<Vector<Vector3>,long,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<long>, long, long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<long>,long,long>::~MethodBindTR(MethodBindTR<Vector<long>,long,long> *this)

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

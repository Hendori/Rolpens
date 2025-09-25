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
/* JoltContactListener3D::OnSoftBodyContactValidate(JPH::Body const&, JPH::Body const&,
   JPH::SoftBodyContactSettings&) */undefined8 JoltContactListener3D::OnSoftBodyContactValidate(JoltContactListener3D *this, Body *param_1, Body *param_2, SoftBodyContactSettings *param_3) {
   JoltObject3D *pJVar1;
   char cVar2;
   char cVar3;
   if (( (byte)param_2[0x79] & 1 ) != 0) {
      return 0;
   }

   pJVar1 = *(JoltObject3D**)( param_2 + 0x50 );
   cVar2 = JoltObject3D::can_collide_with(*(JoltObject3D**)( param_1 + 0x50 ));
   cVar3 = JoltObject3D::can_collide_with(pJVar1);
   if (( cVar3 == '\x01' ) || ( cVar2 == '\0' )) {
      if (( cVar2 != '\x01' ) && ( cVar3 != '\0' )) {
         *(undefined4*)param_3 = 0;
         return 0;
      }

   }
 else {
      *(undefined8*)( param_3 + 4 ) = 0;
   }

   return 0;
}
/* non-virtual thunk to JoltContactListener3D::OnSoftBodyContactValidate(JPH::Body const&, JPH::Body
   const&, JPH::SoftBodyContactSettings&) */undefined8 JoltContactListener3D::OnSoftBodyContactValidate(JoltContactListener3D *this, Body *param_1, Body *param_2, SoftBodyContactSettings *param_3) {
   JoltObject3D *pJVar1;
   char cVar2;
   char cVar3;
   if (( (byte)param_2[0x79] & 1 ) != 0) {
      return 0;
   }

   pJVar1 = *(JoltObject3D**)( param_2 + 0x50 );
   cVar2 = JoltObject3D::can_collide_with(*(JoltObject3D**)( param_1 + 0x50 ));
   cVar3 = JoltObject3D::can_collide_with(pJVar1);
   if (( cVar3 == '\x01' ) || ( cVar2 == '\0' )) {
      if (( cVar2 != '\x01' ) && ( cVar3 != '\0' )) {
         *(undefined4*)param_3 = 0;
         return 0;
      }

   }
 else {
      *(undefined8*)( param_3 + 4 ) = 0;
   }

   return 0;
}
/* JoltContactListener3D::_try_override_collision_response(JPH::Body const&, JPH::Body const&,
   JPH::ContactSettings&) */undefined8 JoltContactListener3D::_try_override_collision_response(JoltContactListener3D *this, Body *param_1, Body *param_2, ContactSettings *param_3) {
   JoltObject3D *pJVar1;
   char cVar2;
   char cVar3;
   undefined8 uVar4;
   if (( ( (byte)param_1[0x79] & 1 ) == 0 ) && ( ( (byte)param_2[0x79] & 1 ) == 0 )) {
      if (( param_1[0x78] == (Body)0x2 ) || ( uVar4 = 0 ),param_2[0x78] == (Body)0x2) {
         pJVar1 = *(JoltObject3D**)( param_2 + 0x50 );
         cVar2 = JoltObject3D::can_collide_with(*(JoltObject3D**)( param_1 + 0x50 ));
         cVar3 = JoltObject3D::can_collide_with(pJVar1);
         if (( cVar3 == '\x01' ) || ( cVar2 == '\0' )) {
            if (( cVar2 != '\x01' ) && ( cVar3 != '\0' )) {
               *(undefined8*)( param_3 + 8 ) = 0;
            }

         }
 else {
            *(undefined8*)( param_3 + 0x10 ) = 0;
         }

         uVar4 = 1;
      }

      return uVar4;
   }

   return 0;
}
/* JoltContactListener3D::_try_override_collision_response(JPH::Body const&, JPH::Body const&,
   JPH::SoftBodyContactSettings&) */undefined8 JoltContactListener3D::_try_override_collision_response(JoltContactListener3D *this, Body *param_1, Body *param_2, SoftBodyContactSettings *param_3) {
   JoltObject3D *pJVar1;
   char cVar2;
   char cVar3;
   if (( (byte)param_2[0x79] & 1 ) != 0) {
      return 0;
   }

   pJVar1 = *(JoltObject3D**)( param_2 + 0x50 );
   cVar2 = JoltObject3D::can_collide_with(*(JoltObject3D**)( param_1 + 0x50 ));
   cVar3 = JoltObject3D::can_collide_with(pJVar1);
   if (( cVar3 == '\x01' ) || ( cVar2 == '\0' )) {
      if (( cVar2 != '\x01' ) && ( cVar3 != '\0' )) {
         *(undefined4*)param_3 = 0;
      }

   }
 else {
      *(undefined8*)( param_3 + 4 ) = 0;
   }

   return 1;
}
/* JoltContactListener3D::_try_apply_surface_velocities(JPH::Body const&, JPH::Body const&,
   JPH::ContactSettings&) */undefined8 JoltContactListener3D::_try_apply_surface_velocities(JoltContactListener3D *this, Body *param_1, Body *param_2, ContactSettings *param_3) {
   Body BVar1;
   Body BVar2;
   long lVar3;
   long lVar4;
   bool bVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   undefined8 uVar12;
   float fVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   undefined8 uVar17;
   float fVar18;
   undefined8 uVar19;
   float fVar20;
   undefined8 uVar21;
   long in_FS_OFFSET;
   float fVar22;
   float local_90;
   float fStack_8c;
   float local_84;
   float fStack_80;
   float local_78;
   float fStack_74;
   float local_6c;
   float fStack_68;
   float local_60;
   float fStack_5c;
   float local_54;
   float fStack_50;
   float local_48;
   float fStack_44;
   float local_3c;
   float fStack_38;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( (byte)param_1[0x79] & 1 ) == 0 ) && ( ( (byte)param_2[0x79] & 1 ) == 0 )) {
      BVar1 = param_1[0x78];
      BVar2 = param_2[0x78];
      this(JoltContactListener3D * )(ulong)(BVar1 != (Body)0x2);
      if (( BVar1 != (Body)0x2 ) != ( BVar2 != (Body)0x2 )) {
         lVar4 = *(long*)( param_1 + 0x50 );
         this * (JoltContactListener3D**)( param_2 + 0x50 );
         if (BVar1 == (Body)0x2) {
            LAB_00100470:if (BVar2 == (Body)0x2) goto LAB_0010036d;
            uVar17 = *(undefined8*)( this + 0x180 );
            fVar18 = *(float*)( this + 0x188 );
            fStack_74 = (float)( (ulong)uVar17 >> 0x20 );
            local_78 = (float)uVar17;
            bVar5 = ( fStack_74 != 0.0 || local_78 != 0.0 ) || fVar18 != 0.0;
            if (( fStack_74 != 0.0 || local_78 != 0.0 ) || fVar18 != 0.0) {
               uVar12 = *(undefined8*)( lVar4 + 0x180 );
               fVar13 = *(float*)( lVar4 + 0x188 );
               uVar21 = *(undefined8*)( lVar4 + 0x18c );
               fVar22 = *(float*)( lVar4 + 0x194 );
               uVar19 = *(undefined8*)( this + 0x18c );
               fVar20 = *(float*)( this + 0x194 );
            }
 else {
               LAB_00100634:uVar19 = *(undefined8*)( this + 0x18c );
               fVar20 = *(float*)( this + 0x194 );
               fStack_68 = (float)( (ulong)uVar19 >> 0x20 );
               uVar15 = (uint)NAN(fStack_68);
               if (fStack_68 != 0.0) {
                  uVar15 = 1;
               }

               local_6c = (float)uVar19;
               uVar14 = (uint)NAN(local_6c);
               if (local_6c != 0.0) {
                  uVar14 = 1;
               }

               uVar16 = (uint)NAN(fVar20);
               if (fVar20 != 0.0) {
                  uVar16 = 1;
               }

               uVar16 = uVar15 | uVar14 | uVar16;
               this(JoltContactListener3D * )(ulong);
               if (SUB41(uVar16, 0) == bVar5) goto LAB_0010036d;
               uVar12 = *(undefined8*)( lVar4 + 0x180 );
               fVar13 = *(float*)( lVar4 + 0x188 );
               uVar21 = *(undefined8*)( lVar4 + 0x18c );
               fVar22 = *(float*)( lVar4 + 0x194 );
            }

         }
 else {
            uVar12 = *(undefined8*)( lVar4 + 0x180 );
            fVar13 = *(float*)( lVar4 + 0x188 );
            local_90 = (float)uVar12;
            fStack_8c = (float)( (ulong)uVar12 >> 0x20 );
            if (( ( local_90 == 0.0 ) && ( fStack_8c == 0.0 ) ) && ( fVar13 == 0.0 )) {
               uVar21 = *(undefined8*)( lVar4 + 0x18c );
               fVar22 = *(float*)( lVar4 + 0x194 );
               local_84 = (float)uVar21;
               fStack_80 = (float)( (ulong)uVar21 >> 0x20 );
               if (( ( local_84 == 0.0 ) && ( fStack_80 == 0.0 ) ) && ( fVar22 == 0.0 )) goto LAB_00100470;
               if (BVar2 != (Body)0x2) goto LAB_001005da;
            }
 else {
               if (BVar2 != (Body)0x2) {
                  LAB_001005da:uVar17 = *(undefined8*)( this + 0x180 );
                  bVar5 = true;
                  fVar18 = *(float*)( this + 0x188 );
                  fStack_74 = (float)( (ulong)uVar17 >> 0x20 );
                  local_78 = (float)uVar17;
                  if (( fStack_74 != 0.0 || local_78 != 0.0 ) || ( fVar18 != 0.0 )) goto LAB_0010036d;
                  goto LAB_00100634;
               }

               uVar21 = *(undefined8*)( lVar4 + 0x18c );
               fVar22 = *(float*)( lVar4 + 0x194 );
            }

            uVar17 = *(undefined8*)( this + 0x180 );
            fVar18 = *(float*)( this + 0x188 );
            uVar19 = *(undefined8*)( this + 0x18c );
            fVar20 = *(float*)( this + 0x194 );
         }

         fStack_5c = (float)( (ulong)uVar12 >> 0x20 );
         local_60 = (float)uVar12;
         fStack_50 = (float)( (ulong)uVar21 >> 0x20 );
         local_54 = (float)uVar21;
         local_48 = (float)uVar17;
         fStack_44 = (float)( (ulong)uVar17 >> 0x20 );
         local_3c = (float)uVar19;
         fStack_38 = (float)( (ulong)uVar19 >> 0x20 );
         fVar6 = *(float*)param_2;
         fVar7 = *(float*)( param_2 + 4 );
         fVar8 = *(float*)( param_2 + 8 );
         fVar9 = *(float*)param_1;
         fVar10 = *(float*)( param_1 + 4 );
         fVar11 = *(float*)( param_1 + 8 );
         uVar12 = 1;
         *(float*)( param_3 + 0x30 ) = local_3c - local_54;
         *(float*)( param_3 + 0x34 ) = fStack_38 - fStack_50;
         *(float*)( param_3 + 0x38 ) = fVar20 - fVar22;
         *(float*)( param_3 + 0x3c ) = fVar20 - fVar22;
         fVar22 = fStack_38 * ( fVar6 - fVar9 ) - ( fVar7 - fVar10 ) * local_3c;
         *(float*)( param_3 + 0x20 ) = ( ( fVar20 * ( fVar7 - fVar10 ) - ( fVar8 - fVar11 ) * fStack_38 ) + local_48 ) - local_60;
         *(float*)( param_3 + 0x24 ) = ( ( local_3c * ( fVar8 - fVar11 ) - ( fVar6 - fVar9 ) * fVar20 ) + fStack_44 ) - fStack_5c;
         *(float*)( param_3 + 0x28 ) = ( fVar22 + fVar18 ) - fVar13;
         *(float*)( param_3 + 0x2c ) = ( fVar22 + fVar18 ) - fVar13;
         goto LAB_0010036f;
      }

   }

   LAB_0010036d:uVar12 = 0;
   LAB_0010036f:if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail(this);
   }

   return uVar12;
}
/* JoltContactListener3D::_try_add_debug_contacts(JPH::Body const&, JPH::Body const&,
   JPH::ContactManifold const&) */undefined8 JoltContactListener3D::_try_add_debug_contacts(JoltContactListener3D *this, Body *param_1, Body *param_2, ContactManifold *param_3) {
   int iVar1;
   undefined8 *puVar2;
   ContactManifold *pCVar3;
   ContactManifold *pCVar4;
   int iVar5;
   uint uVar6;
   code *pcVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   int iVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   bool bVar15;
   float fVar16;
   float fVar17;
   if (( ( (byte)param_1[0x79] & 1 ) != 0 ) || ( ( (byte)param_2[0x79] & 1 ) != 0 )) {
      return 0;
   }

   if (( *(long*)( this + 0xf0 ) == 0 ) || ( lVar13 = lVar13 == 0 )) {
      return 0;
   }

   uVar6 = *(uint*)( param_3 + 0x30 );
   iVar10 = *(int*)( this + 0xf8 );
   do {
      iVar1 = uVar6 * 2 + iVar10;
      if (lVar13 < iVar1) {
         return 0;
      }

      LOCK();
      iVar5 = *(int*)( this + 0xf8 );
      bVar15 = iVar10 == iVar5;
      if (bVar15) {
         *(int*)( this + 0xf8 ) = iVar1;
         iVar5 = iVar10;
      }

      iVar10 = iVar5;
      UNLOCK();
   }
 while ( !bVar15 );
   if ((int)uVar6 < 1) {
      return 1;
   }

   lVar11 = (long)iVar10;
   lVar13 = *(long*)( this + 0xf0 );
   fVar17 = *(float*)( param_3 + 0x48 ) + *(float*)( param_3 + 8 );
   fVar16 = *(float*)( param_3 + 8 ) + *(float*)( param_3 + 0x458 );
   uVar9 = CONCAT44(*(float*)( param_3 + 0x44 ) + *(float*)( param_3 + 4 ), *(float*)( param_3 + 0x40 ) + *(float*)param_3);
   lVar14 = lVar11;
   if (lVar11 < 0) {
      if (lVar13 != 0) {
         LAB_001008bd:lVar13 = *(long*)( lVar13 + -8 );
         goto LAB_001008c1;
      }

   }
 else {
      lVar12 = ( lVar11 * 3 + 3 ) * 4;
      uVar8 = CONCAT44(*(float*)( param_3 + 4 ) + *(float*)( param_3 + 0x454 ), *(float*)param_3 + *(float*)( param_3 + 0x450 ));
      while (lVar13 != 0) {
         if (*(long*)( lVar13 + -8 ) <= lVar14) goto LAB_001008bd;
         CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( this + 0xf0 ));
         lVar13 = *(long*)( this + 0xf0 );
         puVar2 = (undefined8*)( lVar13 + -0xc + lVar12 );
         *puVar2 = uVar9;
         *(float*)( puVar2 + 1 ) = fVar17;
         if (lVar13 == 0) {
            lVar13 = 0;
            LAB_0010090b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar14 + 1, lVar13, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar7 = (code*)invalidInstructionException();
            ( *pcVar7 )();
         }

         lVar13 = *(long*)( lVar13 + -8 );
         if (lVar13 <= lVar14 + 1) goto LAB_0010090b;
         lVar14 = lVar14 + 2;
         CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( this + 0xf0 ));
         lVar13 = *(long*)( this + 0xf0 );
         puVar2 = (undefined8*)( lVar13 + lVar12 );
         lVar12 = lVar12 + 0x18;
         *puVar2 = uVar8;
         *(float*)( puVar2 + 1 ) = fVar16;
         if (lVar14 == lVar11 + (ulong)uVar6 * 2) {
            return 1;
         }

         pCVar3 = param_3 + lVar14 * 8 + lVar11 * -8 + 0x40;
         fVar17 = *(float*)( pCVar3 + 8 ) + *(float*)( param_3 + 8 );
         pCVar4 = param_3 + lVar14 * 8 + lVar11 * -8 + 0x450;
         fVar16 = *(float*)( param_3 + 8 ) + *(float*)( pCVar4 + 8 );
         uVar9 = CONCAT44(*(float*)( pCVar3 + 4 ) + *(float*)( param_3 + 4 ), *(float*)pCVar3 + *(float*)param_3);
         uVar8 = CONCAT44(*(float*)( param_3 + 4 ) + *(float*)( pCVar4 + 4 ), *(float*)param_3 + *(float*)pCVar4);
      }
;
   }

   lVar13 = 0;
   LAB_001008c1:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar14, lVar13, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar7 = (code*)invalidInstructionException();
   ( *pcVar7 )();
}
/* JoltContactListener3D::_try_add_debug_contacts(JPH::Body const&, JPH::SoftBodyManifold const&) */undefined8 JoltContactListener3D::_try_add_debug_contacts(JoltContactListener3D *this, Body *param_1, SoftBodyManifold *param_2) {
   undefined8 *puVar1;
   int iVar2;
   float fVar3;
   code *pcVar4;
   long lVar5;
   undefined8 uVar6;
   float fVar7;
   long lVar8;
   int iVar9;
   float fVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   int iVar14;
   long in_FS_OFFSET;
   bool bVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float local_58;
   float fStack_54;
   lVar12 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0xf0 ) == 0 ) || ( lVar11 = lVar11 == 0 )) {
      LAB_00100c88:uVar6 = 0;
   }
 else {
      lVar5 = ( *(long**)param_2 )[2];
      iVar9 = 0;
      lVar8 = **(long**)param_2 * 0x50 + lVar5;
      for (; lVar8 != lVar5; lVar5 = lVar5 + 0x50) {
         iVar9 = ( iVar9 + 1 ) - ( uint )(*(char*)( lVar5 + 0x44 ) == '\0');
      }

      iVar14 = *(int*)( this + 0xf8 );
      do {
         if (lVar11 < iVar14 + iVar9) goto LAB_00100c88;
         LOCK();
         iVar2 = *(int*)( this + 0xf8 );
         bVar15 = iVar14 == iVar2;
         if (bVar15) {
            *(int*)( this + 0xf8 ) = iVar14 + iVar9;
            iVar2 = iVar14;
         }

         iVar14 = iVar2;
         UNLOCK();
      }
 while ( !bVar15 );
      lVar11 = ( *(long**)param_2 )[2];
      lVar5 = **(long**)param_2 * 0x50 + lVar11;
      fVar26 = _LC10;
      for (; lVar5 != lVar11; lVar11 = lVar11 + 0x50) {
         if (*(char*)( lVar11 + 0x44 ) != '\0') {
            fVar3 = *(float*)( param_1 + 8 );
            lVar13 = (long)iVar14;
            iVar14 = iVar14 + 1;
            fVar10 = (float)*(undefined8*)( param_1 + 0x10 );
            fVar7 = (float)*(undefined8*)( param_1 + 0x18 );
            fVar24 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20 );
            fVar23 = fVar10 + fVar10;
            fVar25 = fVar24 + fVar24;
            lVar8 = *(long*)( this + 0xf0 );
            fVar22 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x18 ) >> 0x20 );
            fVar27 = fVar7 * ( fVar7 + fVar7 );
            fVar20 = fVar22 * ( fVar7 + fVar7 );
            fVar16 = *(float*)( lVar11 + 0x18 ) * *(float*)( lVar11 + 0x38 ) + *(float*)( lVar11 + 0x34 ) * *(float*)( lVar11 + 0x14 ) + *(float*)( lVar11 + 0x10 ) * *(float*)( lVar11 + 0x30 ) + 0.0 + *(float*)( lVar11 + 0x3c );
            fVar21 = fVar26 - fVar27;
            fVar28 = fVar26 - fVar24 * fVar25;
            fVar17 = *(float*)( lVar11 + 0x10 ) - fVar16 * *(float*)( lVar11 + 0x30 );
            fVar18 = *(float*)( lVar11 + 0x14 ) - fVar16 * *(float*)( lVar11 + 0x34 );
            fVar19 = *(float*)( lVar11 + 0x18 ) - fVar16 * *(float*)( lVar11 + 0x38 );
            fVar16 = fVar26 - fVar10 * fVar23;
            local_58 = (float)*(undefined8*)param_1;
            fStack_54 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
            if (lVar13 < 0) {
               if (lVar8 != 0) {
                  LAB_00100c3f:lVar12 = *(long*)( lVar8 + -8 );
                  goto LAB_00100c43;
               }

            }
 else if (lVar8 != 0) {
               if (*(long*)( lVar8 + -8 ) <= lVar13) goto LAB_00100c3f;
               CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( this + 0xf0 ));
               fVar26 = _LC10;
               puVar1 = (undefined8*)( *(long*)( this + 0xf0 ) + lVar13 * 0xc );
               *puVar1 = CONCAT44(( fVar24 * fVar23 + fVar20 ) * fVar17 + ( fVar21 - fVar10 * fVar23 ) * fVar18 + ( fVar7 * fVar25 - fVar23 * fVar22 ) * fVar19 + fStack_54, ( fVar28 - fVar27 ) * fVar17 + ( fVar24 * fVar23 - fVar20 ) * fVar18 + ( fVar7 * fVar23 + fVar25 * fVar22 ) * fVar19 + local_58);
               *(float*)( puVar1 + 1 ) = ( fVar7 * fVar23 - fVar25 * fVar22 ) * fVar17 + ( fVar23 * fVar22 + fVar7 * fVar25 ) * fVar18 + ( fVar16 - fVar24 * fVar25 ) * fVar19 + fVar3;
               goto LAB_00100a80;
            }

            lVar12 = 0;
            LAB_00100c43:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar13, lVar12, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         LAB_00100a80:}uVar6 = 1;
      }

      if (lVar12 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar6;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* JoltContactListener3D::OnSoftBodyContactAdded(JPH::Body const&, JPH::SoftBodyManifold const&) */
   void JoltContactListener3D::OnSoftBodyContactAdded(JoltContactListener3D *this, Body *param_1, SoftBodyManifold *param_2) {
      _try_add_debug_contacts(this, param_1, param_2);
      return;
   }

   /* non-virtual thunk to JoltContactListener3D::OnSoftBodyContactAdded(JPH::Body const&,
   JPH::SoftBodyManifold const&) */
   void JoltContactListener3D::OnSoftBodyContactAdded(JoltContactListener3D *this, Body *param_1, SoftBodyManifold *param_2) {
      _try_add_debug_contacts(this + -8, param_1, param_2);
      return;
   }

   /* JoltContactListener3D::_flush_contacts() */
   void JoltContactListener3D::_flush_contacts(JoltContactListener3D *this) {
      Vector3 *pVVar1;
      SubShapeID *pSVar2;
      SubShapeID *pSVar3;
      int iVar4;
      uint uVar5;
      uint uVar6;
      uint uVar7;
      long *plVar8;
      Vector3 *pVVar9;
      int iVar10;
      Vector3 *pVVar11;
      long in_FS_OFFSET;
      code *local_c8;
      JoltSpace3D *local_c0;
      code *local_88[8];
      long local_48;
      long local_40;
      plVar8 = *(long**)( this + 0x28 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (plVar8 != (long*)0x0) {
         do {
            JoltSpace3D::read_bodies((BodyID*)&local_c8, (int)*(undefined8*)( this + 0xe0 ));
            iVar4 = JoltBodyAccessor3D::get_count();
            iVar10 = (int)(BodyID*)&local_c8;
            if (0 < iVar4) {
               JoltBodyAccessor3D::get_at(iVar10);
            }

            JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)local_88, local_c0);
            JoltBodyAccessor3D::acquire((BodyID*)local_88);
            local_48 = JoltBodyReader3D::try_get();
            if (( ( local_48 == 0 ) || ( pSVar2 = *(SubShapeID**)( local_48 + 0x50 ) ),pSVar2 == (SubShapeID*)0x0 )) {
               JoltBodyAccessor3D::release();
               local_88[0] = JoltShapedObject3D::find_shape_index;
               JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
               _err_print_error("_flush_contacts", "modules/jolt_physics/spaces/jolt_contact_listener_3d.cpp", 0x19c, "Parameter \"body1\" is null.", 0, 0);
               LAB_00101059:JoltBodyAccessor3D::release();
               local_c8 = JoltShapedObject3D::find_shape_index;
               JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)&local_c8);
               break;
            }

            JoltBodyAccessor3D::release();
            local_88[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
            iVar4 = JoltBodyAccessor3D::get_count();
            if (1 < iVar4) {
               JoltBodyAccessor3D::get_at(iVar10);
            }

            JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)local_88, local_c0);
            JoltBodyAccessor3D::acquire((BodyID*)local_88);
            local_48 = JoltBodyReader3D::try_get();
            if (( ( local_48 == 0 ) || ( pSVar3 = *(SubShapeID**)( local_48 + 0x50 ) ),pSVar3 == (SubShapeID*)0x0 )) {
               JoltBodyAccessor3D::release();
               local_88[0] = JoltShapedObject3D::find_shape_index;
               JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
               _err_print_error("_flush_contacts", "modules/jolt_physics/spaces/jolt_contact_listener_3d.cpp", 0x19f, "Parameter \"body2\" is null.", 0, 0);
               goto LAB_00101059;
            }

            JoltBodyAccessor3D::release();
            local_88[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
            uVar5 = JoltShapedObject3D::find_shape_index(pSVar2);
            uVar6 = JoltShapedObject3D::find_shape_index(pSVar3);
            pVVar9 = (Vector3*)plVar8[5];
            pVVar1 = pVVar9 + ( ulong ) * (uint*)( plVar8 + 4 ) * 0x48;
            for (; pVVar1 != pVVar9; pVVar9 = pVVar9 + 0x48) {
               JoltBody3D::add_contact((JoltBody3D*)pSVar2, *(float*)( plVar8 + 8 ), (int)pSVar3, uVar5, (Vector3*)(ulong)uVar6, pVVar9 + 0x18, pVVar9, pVVar9 + 0xc, pVVar9 + 0x24, pVVar9 + 0x30);
            }

            uVar7 = *(uint*)( plVar8 + 6 );
            pVVar9 = (Vector3*)plVar8[7];
            pVVar1 = pVVar9 + (ulong)uVar7 * 0x48;
            if (pVVar1 != pVVar9) {
               do {
                  pVVar11 = pVVar9 + 0x48;
                  JoltBody3D::add_contact((JoltBody3D*)pSVar3, *(float*)( plVar8 + 8 ), (int)pSVar2, uVar6, (Vector3*)(ulong)uVar5, pVVar9 + 0x18, pVVar9, pVVar9 + 0xc, pVVar9 + 0x24, pVVar9 + 0x30);
                  pVVar9 = pVVar11;
               }
 while ( pVVar1 != pVVar11 );
               uVar7 = *(uint*)( plVar8 + 6 );
            }

            if ((int)plVar8[4] != 0) {
               *(undefined4*)( plVar8 + 4 ) = 0;
            }

            if (uVar7 != 0) {
               *(undefined4*)( plVar8 + 6 ) = 0;
            }

            JoltBodyAccessor3D::release();
            local_c8 = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)&local_c8);
            plVar8 = (long*)*plVar8;
         }
 while ( plVar8 != (long*)0x0 );
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* JoltContactListener3D::_flush_area_enters() */
   void JoltContactListener3D::_flush_area_enters(JoltContactListener3D *this) {
      int iVar1;
      BodyID *pBVar2;
      int iVar3;
      SubShapeID *pSVar4;
      int iVar5;
      long in_FS_OFFSET;
      int local_138;
      code *local_118;
      JoltSpace3D *local_110;
      code *local_d8[8];
      long local_98;
      code *local_88[8];
      long local_48;
      long local_40;
      pSVar4 = *(SubShapeID**)( this + 0x68 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar1 = *(int*)( this + 0x8c );
      if (iVar1 != 0) {
         local_138 = 1;
         while (true) {
            JoltSpace3D::read_bodies((BodyID*)&local_118, (int)*(undefined8*)( this + 0xe0 ));
            iVar3 = JoltBodyAccessor3D::get_count();
            iVar5 = (int)(BodyID*)&local_118;
            if (0 < iVar3) {
               JoltBodyAccessor3D::get_at(iVar5);
            }

            JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)local_d8, local_110);
            JoltBodyAccessor3D::acquire((BodyID*)local_d8);
            local_98 = JoltBodyReader3D::try_get();
            iVar3 = JoltBodyAccessor3D::get_count();
            if (1 < iVar3) {
               JoltBodyAccessor3D::get_at(iVar5);
            }

            JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)local_88, local_110);
            JoltBodyAccessor3D::acquire((BodyID*)local_88);
            local_48 = JoltBodyReader3D::try_get();
            if (( local_98 != 0 ) && ( local_48 != 0 )) {
               pBVar2 = *(BodyID**)( local_98 + 0x50 );
               if (( pBVar2 == (BodyID*)0x0 ) || ( pBVar2[0x3c] != (BodyID)0x3 )) {
                  pBVar2 = *(BodyID**)( local_48 + 0x50 );
                  if (( pBVar2 != (BodyID*)0x0 ) && ( pBVar2[0x3c] == (BodyID)0x3 )) {
                     JoltArea3D::body_shape_entered(pBVar2, pSVar4, pSVar4 + 4);
                  }

               }
 else if (( *(long*)( local_48 + 0x50 ) == 0 ) || ( *(char*)( *(long*)( local_48 + 0x50 ) + 0x3c ) != '\x03' )) {
                  JoltArea3D::body_shape_entered(pBVar2, pSVar4 + 8, pSVar4 + 0xc);
               }
 else {
                  JoltArea3D::area_shape_entered(pBVar2, pSVar4 + 8, pSVar4 + 0xc);
               }

            }

            JoltBodyAccessor3D::release();
            local_88[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
            JoltBodyAccessor3D::release();
            local_d8[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_d8);
            JoltBodyAccessor3D::release();
            local_118 = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)&local_118);
            if (iVar1 <= local_138) break;
            local_138 = local_138 + 1;
            pSVar4 = pSVar4 + 0x10;
         }
;
         if (( *(long*)( this + 0x68 ) != 0 ) && ( *(int*)( this + 0x8c ) != 0 )) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 ) != 0) {
               memset(*(void**)( this + 0x80 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 ) * 4);
            }

            *(undefined4*)( this + 0x8c ) = 0;
         }

      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* JoltContactListener3D::_flush_area_exits() */
   void JoltContactListener3D::_flush_area_exits(JoltContactListener3D *this) {
      SubShapeID *pSVar1;
      SubShapeID *pSVar2;
      BodyID BVar3;
      int iVar4;
      bool bVar5;
      bool bVar6;
      byte bVar7;
      BodyID *pBVar8;
      int iVar9;
      BodyID *pBVar10;
      BodyID *pBVar11;
      SubShapeID *pSVar12;
      int iVar13;
      BodyID *pBVar14;
      BodyID *pBVar15;
      long in_FS_OFFSET;
      int local_13c;
      code *local_118;
      JoltSpace3D *local_110;
      code *local_d8[8];
      long local_98;
      code *local_88[8];
      long local_48;
      long local_40;
      pSVar12 = *(SubShapeID**)( this + 0x90 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar4 = *(int*)( this + 0xb4 );
      if (iVar4 != 0) {
         local_13c = 1;
         do {
            pSVar1 = pSVar12 + 8;
            pSVar2 = pSVar12 + 0xc;
            JoltSpace3D::read_bodies((BodyID*)&local_118, (int)*(undefined8*)( this + 0xe0 ));
            iVar9 = JoltBodyAccessor3D::get_count();
            iVar13 = (int)(BodyID*)&local_118;
            if (0 < iVar9) {
               JoltBodyAccessor3D::get_at(iVar13);
            }

            JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)local_d8, local_110);
            JoltBodyAccessor3D::acquire((BodyID*)local_d8);
            local_98 = JoltBodyReader3D::try_get();
            iVar9 = JoltBodyAccessor3D::get_count();
            if (1 < iVar9) {
               JoltBodyAccessor3D::get_at(iVar13);
            }

            JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)local_88, local_110);
            JoltBodyAccessor3D::acquire((BodyID*)local_88);
            local_48 = JoltBodyReader3D::try_get();
            if (local_98 == 0) {
               if (( local_48 == 0 ) || ( pBVar11 = *(BodyID**)( local_48 + 0x50 ) ),pBVar11 == (BodyID*)0x0) goto LAB_001015db;
               if (pBVar11[0x3c] != (BodyID)0x3) {
                  pBVar14 = (BodyID*)0x0;
                  bVar5 = false;
                  LAB_00101889:pBVar15 = (BodyID*)0x0;
                  if (pBVar11 != (BodyID*)0x0) {
                     bVar7 = 0;
                     bVar6 = false;
                     pBVar10 = (BodyID*)0x0;
                     pBVar15 = (BodyID*)0x0;
                     goto LAB_001015a8;
                  }

                  goto LAB_001016c7;
               }

               bVar7 = 1;
               pBVar14 = (BodyID*)0x0;
               pBVar10 = (BodyID*)0x0;
               bVar5 = false;
               bVar6 = false;
               pBVar15 = pBVar11;
               LAB_001015a8:if (pBVar11[0x3c] == (BodyID)0x1) {
                  if (!bVar6) {
                     pBVar11 = pBVar15;
                     if (!bVar5) goto LAB_001016b5;
                     JoltArea3D::body_shape_exited(pBVar14, pSVar1, pSVar2);
                     goto LAB_001015db;
                  }

               }
 else {
                  LAB_001016b0:pBVar11 = pBVar15;
                  if (!bVar6) goto LAB_001016b5;
               }

               JoltArea3D::area_shape_exited(pBVar14, pSVar1, pSVar2);
            }
 else {
               pBVar10 = *(BodyID**)( local_98 + 0x50 );
               if (pBVar10 == (BodyID*)0x0) {
                  if (( local_48 != 0 ) && ( pBVar11 = *(BodyID**)( local_48 + 0x50 ) ),pBVar11 != (BodyID*)0x0) {
                     pBVar14 = (BodyID*)0x0;
                     bVar5 = false;
                     bVar7 = 1;
                     if (pBVar11[0x3c] != (BodyID)0x3) {
                        LAB_001017b0:if (pBVar10 == (BodyID*)0x0) goto LAB_00101889;
                        bVar7 = 0;
                        BVar3 = pBVar10[0x3c];
                        bVar6 = false;
                        pBVar15 = (BodyID*)0x0;
                        LAB_0010158c:pBVar8 = (BodyID*)0x0;
                        if (BVar3 == (BodyID)0x1) {
                           pBVar8 = pBVar10;
                        }

                        goto LAB_00101596;
                     }

                     goto LAB_001016b5;
                  }

               }
 else {
                  BVar3 = pBVar10[0x3c];
                  if (BVar3 == (BodyID)0x3) {
                     pBVar14 = pBVar10;
                     if (local_48 != 0) {
                        pBVar11 = *(BodyID**)( local_48 + 0x50 );
                        bVar5 = true;
                        if (pBVar11 != (BodyID*)0x0) {
                           LAB_0010157a:if (pBVar11[0x3c] != (BodyID)0x3) goto LAB_001017b0;
                           bVar7 = 1;
                           pBVar15 = pBVar11;
                           bVar6 = bVar5;
                           goto LAB_0010158c;
                        }

                        bVar7 = 0;
                        bVar6 = false;
                        pBVar8 = (BodyID*)0x0;
                        pBVar15 = pBVar11;
                        LAB_00101596:pBVar10 = pBVar8;
                        if (local_48 != 0) goto LAB_0010159f;
                        goto LAB_001016b0;
                     }

                     bVar7 = 0;
                     pBVar11 = (BodyID*)0x0;
                     pBVar10 = (BodyID*)0x0;
                  }
 else {
                     if (local_48 != 0) {
                        pBVar11 = *(BodyID**)( local_48 + 0x50 );
                        bVar5 = false;
                        pBVar14 = (BodyID*)0x0;
                        if (pBVar11 != (BodyID*)0x0) goto LAB_0010157a;
                        bVar6 = false;
                        bVar7 = 0;
                        pBVar15 = pBVar11;
                        if (BVar3 != (BodyID)0x1) {
                           pBVar10 = (BodyID*)0x0;
                        }

                        LAB_0010159f:if (pBVar11 != (BodyID*)0x0) goto LAB_001015a8;
                        goto LAB_001016b0;
                     }

                     pBVar14 = (BodyID*)0x0;
                     pBVar11 = (BodyID*)0x0;
                     bVar7 = 0;
                     if (BVar3 != (BodyID)0x1) {
                        pBVar10 = pBVar14;
                     }

                  }

                  LAB_001016b5:pBVar15 = pBVar11;
                  if ((bool)( pBVar10 != (BodyID*)0x0 & bVar7 )) {
                     JoltArea3D::body_shape_exited(pBVar11, pSVar12, pSVar12 + 4);
                  }
 else {
                     LAB_001016c7:if (pBVar14 == (BodyID*)0x0) {
                        if (pBVar15 != (BodyID*)0x0) {
                           JoltArea3D::shape_exited(pBVar15, pSVar12, pSVar12 + 4);
                        }

                     }
 else {
                        JoltArea3D::shape_exited(pBVar14, pSVar1, pSVar2);
                     }

                  }

               }

            }

            LAB_001015db:JoltBodyAccessor3D::release();
            local_88[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
            JoltBodyAccessor3D::release();
            local_d8[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_d8);
            JoltBodyAccessor3D::release();
            local_118 = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)&local_118);
            if (iVar4 <= local_13c) goto code_r0x0010162a;
            local_13c = local_13c + 1;
            pSVar12 = pSVar12 + 0x10;
         }
 while ( true );
      }

      LAB_00101675:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
      code_r0x0010162a:if (( *(long*)( this + 0x90 ) != 0 ) && ( *(int*)( this + 0xb4 ) != 0 )) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb0 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xa8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb0 ) * 4 ) * 4);
         }

         *(undefined4*)( this + 0xb4 ) = 0;
      }

      goto LAB_00101675;
   }

   /* JoltContactListener3D::pre_step() */
   undefined4 JoltContactListener3D::pre_step(JoltContactListener3D *this) {
      undefined4 uVar1;
      LOCK();
      uVar1 = *(undefined4*)( this + 0xf8 );
      *(undefined4*)( this + 0xf8 ) = 0;
      UNLOCK();
      return uVar1;
   }

   /* JoltContactListener3D::_try_remove_contacts(JPH::SubShapeIDPair const&) */
   undefined4 JoltContactListener3D::_try_remove_contacts(JoltContactListener3D *this, SubShapeIDPair *param_1) {
      int iVar1;
      undefined4 uVar2;
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xb8 ));
      if (iVar1 == 0) {
         uVar2 = HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>::erase((HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>*)( this + 0x10 ), param_1);
         pthread_mutex_unlock((pthread_mutex_t*)( this + 0xb8 ));
         return uVar2;
      }

      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
   }

   /* JoltContactListener3D::_try_add_contacts(JPH::Body const&, JPH::Body const&, JPH::ContactManifold
   const&, JPH::ContactSettings&) */
   undefined8 JoltContactListener3D::_try_add_contacts(JoltContactListener3D *this, Body *param_1, Body *param_2, ContactManifold *param_3, ContactSettings *param_4) {
      undefined8 *puVar1;
      undefined4 uVar2;
      undefined4 uVar3;
      uint uVar4;
      code *pcVar5;
      float fVar6;
      float fVar7;
      int iVar8;
      uint *puVar9;
      float *pfVar10;
      ulong uVar11;
      void *pvVar12;
      long lVar13;
      undefined8 uVar14;
      uint uVar15;
      float *pfVar16;
      ContactManifold *pCVar17;
      long in_FS_OFFSET;
      float fVar18;
      float fVar19;
      undefined1 auVar20[12];
      float fVar21;
      float fVar22;
      float fVar23;
      float fVar24;
      float fVar25;
      float fVar26;
      float fVar27;
      float fVar28;
      float fVar29;
      float fVar30;
      float fVar31;
      float fVar32;
      float fVar33;
      float fVar34;
      float fVar35;
      float fVar36;
      undefined4 local_3c8;
      undefined4 local_3c4;
      undefined4 local_3c0;
      undefined4 local_3bc;
      CollisionEstimationResult local_3b8[64];
      float local_378;
      float fStack_374;
      float fStack_370;
      float local_368;
      float fStack_364;
      float fStack_360;
      undefined4 local_358;
      float local_354[197];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( ( (byte)param_1[0x79] & 1 ) == 0 ) && ( ( (byte)param_2[0x79] & 1 ) == 0 ) ) && ( ( *(int*)( *(long*)( param_1 + 0x50 ) + 0xd8 ) != 0 || ( *(int*)( *(long*)( param_2 + 0x50 ) + 0xd8 ) != 0 ) ) )) {
         local_3c8 = *(undefined4*)( param_1 + 0x70 );
         local_3c4 = *(undefined4*)( param_3 + 0x24 );
         local_3c0 = *(undefined4*)( param_2 + 0x70 );
         local_3bc = *(undefined4*)( param_3 + 0x28 );
         iVar8 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xb8 ));
         if (iVar8 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar8);
         }

         puVar9 = (uint*)HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>::operator []((HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>*)( this + 0x10 ), (SubShapeIDPair*)&local_3c8);
         pthread_mutex_unlock((pthread_mutex_t*)( this + 0xb8 ));
         uVar4 = *(uint*)( param_3 + 0x30 );
         uVar15 = uVar4 - 1 | uVar4 - 1 >> 1;
         uVar15 = uVar15 | uVar15 >> 2;
         uVar15 = uVar15 | uVar15 >> 4;
         uVar15 = uVar15 | uVar15 >> 8;
         uVar15 = ( uVar15 | uVar15 >> 0x10 ) + 1;
         if (puVar9[1] < uVar15) {
            puVar9[1] = uVar15;
            lVar13 = Memory::realloc_static(*(void**)( puVar9 + 2 ), (ulong)uVar15 * 0x48, false);
            *(long*)( puVar9 + 2 ) = lVar13;
            if (lVar13 == 0) goto LAB_00101ed7;
         }

         if (puVar9[5] < uVar15) {
            puVar9[5] = uVar15;
            lVar13 = Memory::realloc_static(*(void**)( puVar9 + 6 ), (ulong)uVar15 * 0x48, false);
            *(long*)( puVar9 + 6 ) = lVar13;
            if (lVar13 == 0) {
               LAB_00101ed7:_err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

         }

         puVar9[8] = *(uint*)( param_3 + 0x20 );
         local_358 = 0;
         fVar18 = (float)JoltProjectSettings::get_bounce_velocity_threshold();
         JPH::EstimateCollisionResponse(param_1, param_2, param_3, local_3b8, *(float*)param_4, *(float*)( param_4 + 4 ), fVar18, 5);
         if (uVar4 != 0) {
            pfVar16 = local_354;
            pCVar17 = param_3;
            do {
               fVar33 = *(float*)( pCVar17 + 0x40 ) + *(float*)param_3;
               fVar34 = *(float*)( pCVar17 + 0x44 ) + *(float*)( param_3 + 4 );
               fVar35 = *(float*)( pCVar17 + 0x48 ) + *(float*)( param_3 + 8 );
               pfVar10 = *(float**)( param_1 + 0x48 );
               fVar18 = *(float*)param_3 + *(float*)( pCVar17 + 0x450 );
               fVar31 = *(float*)( param_3 + 4 ) + *(float*)( pCVar17 + 0x454 );
               fVar32 = *(float*)( param_3 + 8 ) + *(float*)( pCVar17 + 0x458 );
               if (param_1[0x78] == (Body)0x0) {
                  auVar20 = SUB1612(*(undefined1(*) [16])param_2, 0);
                  fVar21 = 0.0;
                  fVar22 = 0.0;
                  fVar23 = 0.0;
                  pfVar10 = *(float**)( param_2 + 0x48 );
                  if (param_2[0x78] != (Body)0x0) goto LAB_00101b2c;
                  LAB_00101d0a:fVar19 = 0.0;
                  fVar30 = 0.0;
                  fVar27 = 0.0;
               }
 else {
                  auVar20 = SUB1612(*(undefined1(*) [16])param_2, 0);
                  fVar21 = ( ( fVar35 - *(float*)( param_1 + 8 ) ) * pfVar10[5] - pfVar10[6] * ( fVar34 - *(float*)( param_1 + 4 ) ) ) + *pfVar10;
                  fVar22 = ( ( fVar33 - *(float*)param_1 ) * pfVar10[6] - pfVar10[4] * ( fVar35 - *(float*)( param_1 + 8 ) ) ) + pfVar10[1];
                  fVar23 = ( ( fVar34 - *(float*)( param_1 + 4 ) ) * pfVar10[4] - pfVar10[5] * ( fVar33 - *(float*)param_1 ) ) + pfVar10[2];
                  pfVar10 = *(float**)( param_2 + 0x48 );
                  if (param_2[0x78] == (Body)0x0) goto LAB_00101d0a;
                  LAB_00101b2c:fVar27 = fVar18 - auVar20._0_4_;
                  fVar29 = fVar31 - auVar20._4_4_;
                  fVar30 = fVar32 - auVar20._8_4_;
                  fVar19 = ( fVar30 * pfVar10[5] - pfVar10[6] * fVar29 ) + *pfVar10;
                  fVar30 = ( fVar27 * pfVar10[6] - pfVar10[4] * fVar30 ) + pfVar10[1];
                  fVar27 = ( fVar29 * pfVar10[4] - pfVar10[5] * fVar27 ) + pfVar10[2];
               }

               fVar36 = *(float*)( param_3 + 0x10 );
               fVar6 = *(float*)( param_3 + 0x14 );
               fVar7 = *(float*)( param_3 + 0x18 );
               fVar29 = *pfVar16;
               fVar26 = pfVar16[1];
               uVar15 = *puVar9;
               pvVar12 = *(void**)( puVar9 + 2 );
               fVar28 = pfVar16[2];
               fVar24 = fVar26 * local_378 + fVar29 * fVar36 + fVar28 * local_368;
               fVar25 = fVar26 * fStack_374 + fVar29 * fVar6 + fVar28 * fStack_364;
               fVar26 = fVar26 * fStack_370 + fVar29 * fVar7 + fVar28 * fStack_360;
               fVar28 = 0.0 - fVar36;
               fVar29 = fVar19;
               if (uVar15 == puVar9[1]) {
                  uVar11 = ( ulong )(uVar15 * 2);
                  if (uVar15 * 2 == 0) {
                     uVar11 = 1;
                  }

                  puVar9[1] = (uint)uVar11;
                  pvVar12 = (void*)Memory::realloc_static(pvVar12, uVar11 * 0x48, false);
                  *(void**)( puVar9 + 2 ) = pvVar12;
                  if (pvVar12 == (void*)0x0) goto LAB_00101f50;
                  fVar36 = *(float*)( param_3 + 0x10 );
                  uVar15 = *puVar9;
                  fVar29 = fVar23;
               }

               pfVar10 = (float*)( (long)pvVar12 + (ulong)uVar15 * 0x48 );
               *puVar9 = uVar15 + 1;
               *(ulong*)( pfVar10 + 8 ) = CONCAT44(fVar21, 0.0 - fVar7);
               pfVar10[0xb] = fVar22;
               pfVar10[0xc] = fVar23;
               uVar2 = *(undefined4*)( param_3 + 0x18 );
               pvVar12 = *(void**)( puVar9 + 6 );
               *pfVar10 = fVar33;
               pfVar10[1] = fVar34;
               pfVar10[2] = fVar35;
               pfVar10[3] = fVar18;
               pfVar10[4] = fVar31;
               pfVar10[5] = fVar32;
               pfVar10[6] = fVar28;
               pfVar10[7] = 0.0 - fVar6;
               uVar3 = *(undefined4*)( param_3 + 0x14 );
               *(ulong*)( pfVar10 + 0xc ) = CONCAT44(fVar30, fVar29);
               *(ulong*)( pfVar10 + 0xe ) = CONCAT44(0.0 - fVar24, fVar27);
               *(ulong*)( pfVar10 + 0x10 ) = CONCAT44(0.0 - fVar26, 0.0 - fVar25);
               uVar15 = puVar9[4];
               if (uVar15 == puVar9[5]) {
                  uVar11 = ( ulong )(uVar15 * 2);
                  if (uVar15 * 2 == 0) {
                     uVar11 = 1;
                  }

                  puVar9[5] = (uint)uVar11;
                  pvVar12 = (void*)Memory::realloc_static(pvVar12, uVar11 * 0x48, false);
                  *(void**)( puVar9 + 6 ) = pvVar12;
                  if (pvVar12 == (void*)0x0) {
                     LAB_00101f50:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar5 = (code*)invalidInstructionException();
                     ( *pcVar5 )();
                  }

                  uVar15 = puVar9[4];
               }

               pCVar17 = pCVar17 + 0x10;
               puVar1 = (undefined8*)( (long)pvVar12 + (ulong)uVar15 * 0x48 );
               puVar9[4] = uVar15 + 1;
               pfVar16 = pfVar16 + 3;
               *puVar1 = CONCAT44(fVar31, fVar18);
               puVar1[1] = CONCAT44(fVar33, fVar32);
               *(float*)( puVar1 + 2 ) = fVar34;
               *(float*)( (long)puVar1 + 0x14 ) = fVar35;
               *(float*)( puVar1 + 3 ) = fVar36;
               *(undefined4*)( (long)puVar1 + 0x1c ) = uVar3;
               puVar1[4] = CONCAT44(fVar19, uVar2);
               puVar1[5] = CONCAT44(fVar27, fVar30);
               puVar1[6] = CONCAT44(fVar22, fVar21);
               puVar1[7] = CONCAT44(fVar24, fVar23);
               puVar1[8] = CONCAT44(fVar26, fVar25);
            }
 while ( param_3 + (ulong)uVar4 * 0x10 != pCVar17 );
         }

         uVar14 = 1;
      }
 else {
         uVar14 = 0;
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar14;
   }

   /* JoltContactListener3D::_try_remove_area_overlap(JPH::SubShapeIDPair const&) */
   undefined4 JoltContactListener3D::_try_remove_area_overlap(JoltContactListener3D *this, SubShapeIDPair *param_1) {
      int iVar1;
      undefined4 uVar2;
      undefined4 uVar3;
      long in_FS_OFFSET;
      undefined4 local_68;
      undefined4 local_64;
      undefined4 local_60;
      undefined4 local_5c;
      SubShapeIDPair local_58[24];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_68 = *(undefined4*)( param_1 + 8 );
      local_64 = *(undefined4*)( param_1 + 0xc );
      local_60 = *(undefined4*)param_1;
      local_5c = *(undefined4*)( param_1 + 4 );
      iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xb8 ));
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

      uVar2 = HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::erase((HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>*)( this + 0x40 ), param_1);
      if ((char)uVar2 != '\0') {
         HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert(local_58);
      }

      uVar3 = HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::erase((HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>*)( this + 0x40 ), (SubShapeIDPair*)&local_68);
      if ((char)uVar3 != '\0') {
         HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert(local_58);
         uVar2 = uVar3;
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0xb8 ));
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* JoltContactListener3D::OnContactRemoved(JPH::SubShapeIDPair const&) */
   void JoltContactListener3D::OnContactRemoved(JoltContactListener3D *this, SubShapeIDPair *param_1) {
      char cVar1;
      cVar1 = _try_remove_contacts(this, param_1);
      if (cVar1 != '\0') {
         return;
      }

      _try_remove_area_overlap(this, param_1);
      return;
   }

   /* JoltContactListener3D::_flush_area_shifts() */
   void JoltContactListener3D::_flush_area_shifts(JoltContactListener3D *this) {
      int iVar1;
      long lVar2;
      long *plVar3;
      code *pcVar4;
      int iVar5;
      int iVar6;
      long lVar7;
      long in_FS_OFFSET;
      int local_a8;
      SubShapeIDPair local_98[16];
      code *local_88[8];
      long local_48;
      long local_40;
      iVar1 = *(int*)( this + 100 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (iVar1 == 0) {
         LAB_001021fe:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      lVar7 = *(long*)( this + 0x40 );
      local_a8 = 1;
      do {
         JoltSpace3D::read_body((BodyID*)local_88);
         if (( ( local_48 == 0 ) || ( lVar2 = lVar2 == 0 ) ) || ( *(char*)( lVar2 + 0x3c ) == '\x02' )) {
            _err_print_error("operator()", "modules/jolt_physics/spaces/jolt_contact_listener_3d.cpp", 0x1d7, "Parameter \"object\" is null.", 0, 0);
            LAB_00102265:JoltBodyAccessor3D::release();
            local_88[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
            LAB_00102281:JoltSpace3D::read_body((BodyID*)local_88);
            if (( ( local_48 == 0 ) || ( lVar2 = lVar2 == 0 ) ) || ( *(char*)( lVar2 + 0x3c ) == '\x02' )) {
               _err_print_error("operator()", "modules/jolt_physics/spaces/jolt_contact_listener_3d.cpp", 0x1d7, "Parameter \"object\" is null.", 0, 0);
            }
 else {
               plVar3 = *(long**)( lVar2 + 0x98 );
               if (plVar3 != (long*)0x0) {
                  pcVar4 = *(code**)( **(long**)( lVar2 + 0x90 ) + 0x68 );
                  if (pcVar4 == JPH::Shape::GetSubShapeUserData) {
                     iVar6 = (int)( *(long**)( lVar2 + 0x90 ) )[2];
                  }
 else {
                     iVar6 = ( *pcVar4 )();
                  }

                  if (*(code**)( *plVar3 + 0x68 ) == JPH::Shape::GetSubShapeUserData) {
                     iVar5 = (int)plVar3[2];
                  }
 else {
                     iVar5 = ( **(code**)( *plVar3 + 0x68 ) )(plVar3, lVar7 + 0xc);
                  }

                  JoltBodyAccessor3D::release();
                  local_88[0] = JoltShapedObject3D::find_shape_index;
                  JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
                  if (iVar6 != iVar5) goto LAB_001021cf;
                  goto LAB_001021f5;
               }

            }

            JoltBodyAccessor3D::release();
            local_88[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
         }
 else {
            plVar3 = *(long**)( lVar2 + 0x98 );
            if (plVar3 == (long*)0x0) goto LAB_00102265;
            pcVar4 = *(code**)( **(long**)( lVar2 + 0x90 ) + 0x68 );
            if (pcVar4 == JPH::Shape::GetSubShapeUserData) {
               iVar6 = (int)( *(long**)( lVar2 + 0x90 ) )[2];
            }
 else {
               iVar6 = ( *pcVar4 )();
            }

            if (*(code**)( *plVar3 + 0x68 ) == JPH::Shape::GetSubShapeUserData) {
               iVar5 = (int)plVar3[2];
            }
 else {
               iVar5 = ( **(code**)( *plVar3 + 0x68 ) )(plVar3, lVar7 + 4);
            }

            JoltBodyAccessor3D::release();
            local_88[0] = JoltShapedObject3D::find_shape_index;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
            if (iVar6 == iVar5) goto LAB_00102281;
            LAB_001021cf:HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert(local_98);
            HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert(local_98);
         }

         LAB_001021f5:if (iVar1 <= local_a8) goto LAB_001021fe;
         local_a8 = local_a8 + 1;
         lVar7 = lVar7 + 0x10;
      }
 while ( true );
   }

   /* JoltContactListener3D::post_step() */
   void JoltContactListener3D::post_step(JoltContactListener3D *this) {
      _flush_contacts(this);
      _flush_area_shifts(this);
      _flush_area_exits(this);
      _flush_area_enters(this);
      return;
   }

   /* JoltContactListener3D::_try_evaluate_area_overlap(JPH::Body const&, JPH::Body const&,
   JPH::ContactManifold const&) */
   byte JoltContactListener3D::_try_evaluate_area_overlap(JoltContactListener3D *this, Body *param_1, Body *param_2, ContactManifold *param_3) {
      pthread_mutex_t *__mutex;
      JoltArea3D JVar1;
      JoltArea3D *pJVar2;
      JoltArea3D *pJVar3;
      char cVar4;
      byte bVar5;
      int iVar6;
      SubShapeIDPair *pSVar7;
      long in_FS_OFFSET;
      undefined4 local_78;
      undefined4 local_74;
      undefined4 local_70;
      undefined4 local_6c;
      undefined4 local_68;
      undefined4 local_64;
      undefined4 local_60;
      undefined4 local_5c;
      undefined4 local_58[6];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( (byte)param_1[0x79] & 1 ) == 0 ) && ( bVar5 = (byte)param_2[0x79] & 1((byte)param_2[0x79] & 1) == 0 )) goto LAB_00102535;
      local_74 = *(undefined4*)( param_3 + 0x24 );
      pJVar2 = *(JoltArea3D**)( param_1 + 0x50 );
      local_70 = *(undefined4*)( param_2 + 0x70 );
      local_78 = *(undefined4*)( param_1 + 0x70 );
      local_6c = *(undefined4*)( param_3 + 0x28 );
      pJVar3 = *(JoltArea3D**)( param_2 + 0x50 );
      JVar1 = pJVar3[0x3c];
      local_68 = local_70;
      local_64 = local_6c;
      local_60 = local_78;
      local_5c = local_74;
      if (pJVar2[0x3c] == (JoltArea3D)0x3) {
         if (JVar1 == (JoltArea3D)0x3) {
            __mutex = (pthread_mutex_t*)( this + 0xb8 );
            iVar6 = pthread_mutex_lock(__mutex);
            if (iVar6 != 0) {
               LAB_0010270e:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar6);
            }

            cVar4 = JoltArea3D::can_monitor(pJVar2);
            if (cVar4 == '\0') {
               cVar4 = HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::erase((HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>*)( this + 0x40 ), (SubShapeIDPair*)&local_78);
               if (cVar4 != '\0') {
                  HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert((SubShapeIDPair*)local_58);
               }

            }
 else {
               local_58[0] = 0;
               cVar4 = HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::_lookup_pos((HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>*)( this + 0x40 ), (SubShapeIDPair*)&local_78, (uint*)local_58);
               if (cVar4 == '\0') {
                  HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert((SubShapeIDPair*)local_58);
                  HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert((SubShapeIDPair*)local_58);
               }

            }

            pthread_mutex_unlock(__mutex);
            iVar6 = pthread_mutex_lock(__mutex);
            if (iVar6 != 0) goto LAB_0010270e;
            cVar4 = JoltArea3D::can_monitor(pJVar3);
            if (cVar4 != '\0') goto LAB_00102597;
            cVar4 = HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::erase((HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>*)( this + 0x40 ), (SubShapeIDPair*)&local_68);
            if (cVar4 == '\0') goto LAB_00102623;
            LAB_0010250c:HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert((SubShapeIDPair*)local_58);
            pthread_mutex_unlock((pthread_mutex_t*)( this + 0xb8 ));
         }
 else if (JVar1 == (JoltArea3D)0x1) {
            iVar6 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xb8 ));
            if (iVar6 != 0) goto LAB_0010270e;
            cVar4 = JoltArea3D::can_monitor((JoltBody3D*)pJVar2);
            if (cVar4 == '\0') {
               pSVar7 = (SubShapeIDPair*)&local_78;
               goto LAB_001026bd;
            }

            pSVar7 = (SubShapeIDPair*)&local_78;
            LAB_00102611:local_58[0] = 0;
            cVar4 = HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::_lookup_pos((HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>*)( this + 0x40 ), pSVar7, (uint*)local_58);
            if (cVar4 == '\0') {
               HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert((SubShapeIDPair*)local_58);
               HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert((SubShapeIDPair*)local_58);
            }

            goto LAB_00102623;
         }

      }
 else if (( JVar1 == (JoltArea3D)0x3 ) && ( pJVar2[0x3c] == (JoltArea3D)0x1 )) {
         iVar6 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xb8 ));
         if (iVar6 != 0) goto LAB_0010270e;
         cVar4 = JoltArea3D::can_monitor((JoltBody3D*)pJVar3);
         if (cVar4 != '\0') {
            LAB_00102597:pSVar7 = (SubShapeIDPair*)&local_68;
            goto LAB_00102611;
         }

         pSVar7 = (SubShapeIDPair*)&local_68;
         LAB_001026bd:cVar4 = HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::erase((HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>*)( this + 0x40 ), pSVar7);
         if (cVar4 != '\0') goto LAB_0010250c;
         LAB_00102623:pthread_mutex_unlock((pthread_mutex_t*)( this + 0xb8 ));
      }

      bVar5 = 1;
      LAB_00102535:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return bVar5;
   }

   /* JoltContactListener3D::OnContactPersisted(JPH::Body const&, JPH::Body const&,
   JPH::ContactManifold const&, JPH::ContactSettings&) */
   void JoltContactListener3D::OnContactPersisted(JoltContactListener3D *this, Body *param_1, Body *param_2, ContactManifold *param_3, ContactSettings *param_4) {
      _try_override_collision_response(this, param_1, param_2, param_4);
      _try_apply_surface_velocities(this, param_1, param_2, param_4);
      _try_add_contacts(this, param_1, param_2, param_3, param_4);
      _try_evaluate_area_overlap(this, param_1, param_2, param_3);
      _try_add_debug_contacts(this, param_1, param_2, param_3);
      return;
   }

   /* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */
   undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1) {
      return *(undefined8*)( param_1 + 0x10 );
   }

   /* JPH::ContactListener::OnContactValidate(JPH::Body const&, JPH::Body const&, JPH::Vec3,
   JPH::CollideShapeResult const&) */
   undefined8 JPH::ContactListener::OnContactValidate(void) {
      return 0;
   }

   /* JPH::PhysicsMaterial::~PhysicsMaterial() */
   void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
      /* WARNING: Could not recover jumptable at 0x001027c4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )();
      return;
   }

   /* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<Vector3>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* JoltContactListener3D::~JoltContactListener3D() */
   void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
      long *plVar1;
      uint uVar2;
      long lVar3;
      void *pvVar4;
      *(undefined***)this = &PTR__JoltContactListener3D_00104770;
      *(undefined***)( this + 8 ) = &PTR__JoltContactListener3D_001047c0;
      if (*(long*)( this + 0xf0 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0xf0 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0xf0 );
            *(undefined8*)( this + 0xf0 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      pvVar4 = *(void**)( this + 0x90 );
      for (int i = 0; i < 3; i++) {
         if (pvVar4 != (void*)0) {
            if (*(int*)( this + ( -40*i + 180 ) ) != 0) {
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 176 ) ) * 4 ) != 0) {
                  memset(*(void**)( this + ( -40*i + 168 ) ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 176 ) ) * 4 ) << 2);
               }

               *(undefined4*)( this + ( -40*i + 180 ) ) = 0;
            }

            Memory::free_static(pvVar4, false);
            Memory::free_static(*(void**)( this + ( -40*i + 160 ) ), false);
            Memory::free_static(*(void**)( this + ( -40*i + 152 ) ), false);
            Memory::free_static(*(void**)( this + ( -40*i + 168 ) ), false);
         }

         pvVar4 = *(void**)( this + ( -40*i + 104 ) );
      }

      if (pvVar4 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar3 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar3 ) != 0) {
                  pvVar4 = *(void**)( (long)pvVar4 + lVar3 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar3 ) = 0;
                  if (*(void**)( (long)pvVar4 + 0x38 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar4 + 0x30 ) != 0) {
                        *(undefined4*)( (long)pvVar4 + 0x30 ) = 0;
                     }

                     Memory::free_static(*(void**)( (long)pvVar4 + 0x38 ), false);
                  }

                  if (*(void**)( (long)pvVar4 + 0x28 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar4 + 0x20 ) != 0) {
                        *(undefined4*)( (long)pvVar4 + 0x20 ) = 0;
                     }

                     Memory::free_static(*(void**)( (long)pvVar4 + 0x28 ), false);
                  }

                  Memory::free_static(pvVar4, false);
                  pvVar4 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
               }

               lVar3 = lVar3 + 4;
            }
 while ( lVar3 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar4 == (void*)0x0) {
               return;
            }

         }

      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
      return;
   }

   /* non-virtual thunk to JoltContactListener3D::~JoltContactListener3D() */
   void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
      ~JoltContactListener3D(this + -8)
      ;;
      return;
   }

   /* JoltContactListener3D::~JoltContactListener3D() */
   void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
      ~JoltContactListener3D(this)
      ;;
      operator_delete(this, 0x100);
      return;
   }

   /* non-virtual thunk to JoltContactListener3D::~JoltContactListener3D() */
   void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
      ~JoltContactListener3D(this + -8)
      ;;
      operator_delete(this + -8, 0x100);
      return;
   }

   /* HashMap<JPH::SubShapeIDPair, JoltContactListener3D::Manifold,
   JoltContactListener3D::ShapePairHasher, HashMapComparatorDefault<JPH::SubShapeIDPair>,
   DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair, JoltContactListener3D::Manifold> >
   >::erase(JPH::SubShapeIDPair const&) */
   undefined8 HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>::erase(HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>> *this, SubShapeIDPair *param_1) {
      uint *puVar1;
      undefined8 *puVar2;
      undefined8 *puVar3;
      long *plVar4;
      uint uVar5;
      long lVar6;
      ulong uVar7;
      long lVar8;
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
      uint uVar29;
      int iVar30;
      uint uVar31;
      ulong uVar32;
      ulong uVar33;
      long *plVar34;
      uint uVar35;
      ulong uVar36;
      ulong uVar37;
      uint uVar38;
      uint *puVar39;
      ulong uVar40;
      undefined1 auVar41[16];
      lVar6 = *(long*)( this + 8 );
      if (lVar6 != 0) {
         if (*(int*)( this + 0x2c ) == 0) {
            return 0;
         }

         uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar40 = CONCAT44(0, uVar5);
         uVar7 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar29 = ( *(int*)param_1 * 0x16a88000 | ( uint )(*(int*)param_1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
         for (int i = 0; i < 3; i++) {
            uVar29 = ( uVar29 << 13 | uVar29 >> 19 ) * 5 + 3864292196 ^ ( *(int*)( param_1 + ( 4*i + 4 ) ) * 380141568 | ( uint )(*(int*)( param_1 + ( 4*i + 4 ) ) * -862048943) >> 17 ) * 461845907;
         }

         uVar29 = ( uVar29 << 0xd | uVar29 >> 0x13 ) * 5 + 0xe6546b64;
         uVar29 = ( uVar29 >> 0x10 ^ uVar29 ) * -0x7a143595;
         uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
         uVar35 = uVar29 ^ uVar29 >> 0x10;
         if (uVar29 == uVar29 >> 0x10) {
            uVar35 = 1;
            uVar32 = uVar7;
         }
 else {
            uVar32 = uVar35 * uVar7;
         }

         lVar8 = *(long*)( this + 0x10 );
         auVar11._8_8_ = 0;
         auVar11._0_8_ = uVar40;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar32;
         uVar32 = SUB168(auVar11 * auVar20, 8);
         uVar29 = *(uint*)( lVar8 + uVar32 * 4 );
         uVar36 = (ulong)SUB164(auVar11 * auVar20, 8);
         if (uVar29 != 0) {
            uVar38 = 0;
            do {
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( (int)uVar36 + 1 ) * uVar7;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar40;
               uVar33 = SUB168(auVar14 * auVar23, 8);
               uVar31 = SUB164(auVar14 * auVar23, 8);
               if (uVar35 == uVar29) {
                  lVar9 = *(long*)( lVar6 + uVar32 * 8 );
                  auVar41._0_4_ = -(uint)(*(int *)(lVar9 + 0x10) == *(int *)param_1);
                  auVar41._4_4_ = -(uint)(*(int *)(lVar9 + 0x14) == *(int *)(param_1 + 4));
                  auVar41._8_4_ = -(uint)(*(int *)(lVar9 + 0x18) == *(int *)(param_1 + 8));
                  auVar41._12_4_ = -(uint)(*(int *)(lVar9 + 0x1c) == *(int *)(param_1 + 0xc));
                  iVar30 = movmskps((int)lVar9, auVar41);
                  if (iVar30 == 0xf) {
                     puVar39 = (uint*)( lVar8 + uVar33 * 4 );
                     uVar29 = *puVar39;
                     if (( uVar29 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = uVar29 * uVar7,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ( uVar31 + uVar5 ) - SUB164(auVar15 * auVar24, 8) ) * uVar7,auVar25._8_8_ = 0,auVar25._0_8_ = uVar40,uVar32 = (ulong)uVar31,uVar37 = uVar36,SUB164(auVar16 * auVar25, 8) != 0) {
                        while (true) {
                           uVar36 = uVar32;
                           puVar1 = (uint*)( lVar8 + uVar37 * 4 );
                           *puVar39 = *puVar1;
                           puVar2 = (undefined8*)( lVar6 + uVar33 * 8 );
                           *puVar1 = uVar29;
                           puVar3 = (undefined8*)( lVar6 + uVar37 * 8 );
                           uVar10 = *puVar2;
                           *puVar2 = *puVar3;
                           *puVar3 = uVar10;
                           auVar19._8_8_ = 0;
                           auVar19._0_8_ = ( (int)uVar36 + 1 ) * uVar7;
                           auVar28._8_8_ = 0;
                           auVar28._0_8_ = uVar40;
                           uVar33 = SUB168(auVar19 * auVar28, 8);
                           puVar39 = (uint*)( lVar8 + uVar33 * 4 );
                           uVar29 = *puVar39;
                           if (( uVar29 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar29 * uVar7,auVar26._8_8_ = 0,auVar26._0_8_ = uVar40,auVar18._8_8_ = 0,auVar18._0_8_ = ( ( SUB164(auVar19 * auVar28, 8) + uVar5 ) - SUB164(auVar17 * auVar26, 8) ) * uVar7,auVar27._8_8_ = 0,auVar27._0_8_ = uVar40,SUB164(auVar18 * auVar27, 8) == 0) break;
                           uVar32 = uVar33 & 0xffffffff;
                           uVar37 = uVar36;
                        }
;
                     }

                     plVar4 = (long*)( lVar6 + uVar36 * 8 );
                     *(undefined4*)( lVar8 + uVar36 * 4 ) = 0;
                     plVar34 = (long*)*plVar4;
                     if (*(long**)( this + 0x18 ) == plVar34) {
                        *(long*)( this + 0x18 ) = *plVar34;
                        plVar34 = (long*)*plVar4;
                     }

                     if (*(long**)( this + 0x20 ) == plVar34) {
                        *(long*)( this + 0x20 ) = plVar34[1];
                        plVar34 = (long*)*plVar4;
                     }

                     if ((long*)plVar34[1] != (long*)0x0) {
                        *(long*)plVar34[1] = *plVar34;
                        plVar34 = (long*)*plVar4;
                     }

                     if (*plVar34 != 0) {
                        *(long*)( *plVar34 + 8 ) = plVar34[1];
                        plVar34 = (long*)*plVar4;
                     }

                     if ((void*)plVar34[7] != (void*)0x0) {
                        if ((int)plVar34[6] != 0) {
                           *(undefined4*)( plVar34 + 6 ) = 0;
                        }

                        Memory::free_static((void*)plVar34[7], false);
                     }

                     if ((void*)plVar34[5] != (void*)0x0) {
                        if ((int)plVar34[4] != 0) {
                           *(undefined4*)( plVar34 + 4 ) = 0;
                        }

                        Memory::free_static((void*)plVar34[5], false);
                     }

                     Memory::free_static(plVar34, false);
                     *(undefined8*)( *(long*)( this + 8 ) + uVar36 * 8 ) = 0;
                     *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
                     return 1;
                  }

               }

               uVar29 = *(uint*)( lVar8 + uVar33 * 4 );
               uVar36 = uVar33 & 0xffffffff;
               uVar38 = uVar38 + 1;
            }
 while ( ( uVar29 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = uVar29 * uVar7,auVar21._8_8_ = 0,auVar21._0_8_ = uVar40,auVar13._8_8_ = 0,auVar13._0_8_ = ( ( uVar5 + uVar31 ) - SUB164(auVar12 * auVar21, 8) ) * uVar7,auVar22._8_8_ = 0,auVar22._0_8_ = uVar40,uVar32 = uVar33,uVar38 <= SUB164(auVar13 * auVar22, 8) );
         }

      }

      return 0;
   }

   /* HashMap<JPH::SubShapeIDPair, JoltContactListener3D::Manifold,
   JoltContactListener3D::ShapePairHasher, HashMapComparatorDefault<JPH::SubShapeIDPair>,
   DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair, JoltContactListener3D::Manifold> >
   >::_lookup_pos(JPH::SubShapeIDPair const&, unsigned int&) const */
   undefined8 HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>::_lookup_pos(HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>> *this, SubShapeIDPair *param_1, uint *param_2) {
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
      int iVar11;
      uint uVar12;
      ulong uVar13;
      long lVar14;
      uint uVar15;
      ulong uVar16;
      uint uVar17;
      undefined1 auVar18[16];
      if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
         uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar10 = ( *(int*)param_1 * 0x16a88000 | ( uint )(*(int*)param_1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
         for (int i = 0; i < 3; i++) {
            uVar10 = ( uVar10 << 13 | uVar10 >> 19 ) * 5 + 3864292196 ^ ( *(int*)( param_1 + ( 4*i + 4 ) ) * 380141568 | ( uint )(*(int*)( param_1 + ( 4*i + 4 ) ) * -862048943) >> 17 ) * 461845907;
         }

         uVar10 = ( uVar10 << 0xd | uVar10 >> 0x13 ) * 5 + 0xe6546b64;
         uVar10 = ( uVar10 >> 0x10 ^ uVar10 ) * -0x7a143595;
         uVar10 = ( uVar10 ^ uVar10 >> 0xd ) * -0x3d4d51cb;
         uVar15 = uVar10 ^ uVar10 >> 0x10;
         if (uVar10 == uVar10 >> 0x10) {
            uVar15 = 1;
            uVar13 = uVar1;
         }
 else {
            uVar13 = uVar15 * uVar1;
         }

         uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
         auVar2._8_8_ = 0;
         auVar2._0_8_ = uVar16;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar13;
         lVar14 = SUB168(auVar2 * auVar6, 8);
         uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
         uVar12 = SUB164(auVar2 * auVar6, 8);
         if (uVar10 != 0) {
            uVar17 = 0;
            do {
               if (uVar15 == uVar10) {
                  lVar14 = *(long*)( *(long*)( this + 8 ) + lVar14 * 8 );
                  auVar18._0_4_ = -(uint)(*(int *)(lVar14 + 0x10) == *(int *)param_1);
                  auVar18._4_4_ = -(uint)(*(int *)(lVar14 + 0x14) == *(int *)(param_1 + 4));
                  auVar18._8_4_ = -(uint)(*(int *)(lVar14 + 0x18) == *(int *)(param_1 + 8));
                  auVar18._12_4_ = -(uint)(*(int *)(lVar14 + 0x1c) == *(int *)(param_1 + 0xc));
                  iVar11 = movmskps((int)lVar14, auVar18);
                  if (iVar11 == 0xf) {
                     *param_2 = uVar12;
                     return 1;
                  }

               }

               uVar17 = uVar17 + 1;
               auVar3._8_8_ = 0;
               auVar3._0_8_ = ( uVar12 + 1 ) * uVar1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = uVar16;
               lVar14 = SUB168(auVar3 * auVar7, 8);
               uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
               uVar12 = SUB164(auVar3 * auVar7, 8);
            }
 while ( ( uVar10 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar10 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar16,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar12 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,uVar17 <= SUB164(auVar5 * auVar9, 8) );
         }

         return 0;
      }

      return 0;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<JPH::SubShapeIDPair, JoltContactListener3D::Manifold,
   JoltContactListener3D::ShapePairHasher, HashMapComparatorDefault<JPH::SubShapeIDPair>,
   DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair, JoltContactListener3D::Manifold> >
   >::operator[](JPH::SubShapeIDPair const&) */
   undefined1(*)[16];
   __thiscall
HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>
::operator[](HashMap<JPH::SubShapeIDPair,JoltContactListener3D::Manifold,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>,DefaultTypedAllocator<HashMapElement<JPH::SubShapeIDPair,JoltContactListener3D::Manifold>>>
             *this,SubShapeIDPair *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16]
   ;;
   char cVar24;
   uint uVar25;
   uint uVar26;
   ulong uVar27;
   undefined8 uVar28;
   void *__s_00;
   undefined1(*pauVar29)[16];
   void *pvVar30;
   int iVar31;
   long lVar32;
   long lVar33;
   ulong uVar34;
   undefined8 uVar35;
   uint uVar36;
   uint uVar37;
   ulong uVar38;
   undefined1(*pauVar39)[16];
   long in_FS_OFFSET;
   uint local_e8;
   uint local_90;
   uint local_8c[5];
   undefined8 local_78;
   undefined8 uStack_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = 0;
   cVar24 = _lookup_pos(this, param_1, &local_90);
   if (cVar24 == '\0') {
      uVar25 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) {
         uVar34 = (ulong)uVar25;
         uVar27 = uVar34 * 4;
         uVar38 = uVar34 * 8;
         uVar28 = Memory::alloc_static(uVar27, false);
         *(undefined8*)( this + 0x10 ) = uVar28;
         pvVar30 = (void*)Memory::alloc_static(uVar38, false);
         *(void**)( this + 8 ) = pvVar30;
         if (uVar25 != 0) {
            pvVar4 = *(void**)( this + 0x10 );
            if (( pvVar4 < (void*)( (long)pvVar30 + uVar38 ) ) && ( pvVar30 < (void*)( (long)pvVar4 + uVar27 ) )) {
               uVar27 = 0;
               do {
                  *(undefined4*)( (long)pvVar4 + uVar27 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar30 + uVar27 * 8 ) = 0;
                  uVar27 = uVar27 + 1;
               }
 while ( uVar34 != uVar27 );
            }
 else {
               memset(pvVar4, 0, uVar27);
               memset(pvVar30, 0, uVar38);
            }

         }

      }

      local_8c[0] = 0;
      cVar24 = _lookup_pos(this, param_1, local_8c);
      if (cVar24 == '\0') {
         if ((float)uVar25 * __LC15 < (float)( *(int*)( this + 0x2c ) + 1 )) {
            uVar25 = *(uint*)( this + 0x28 );
            if (uVar25 == 0x1c) {
               pauVar29 = (undefined1(*) [16])0x0;
               _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
               goto LAB_00103731;
            }

            uVar27 = ( ulong )(uVar25 + 1);
            *(undefined4*)( this + 0x2c ) = 0;
            uVar26 = *(uint*)( hash_table_size_primes + (ulong)uVar25 * 4 );
            if (uVar25 + 1 < 2) {
               uVar27 = 2;
            }

            uVar25 = *(uint*)( hash_table_size_primes + uVar27 * 4 );
            uVar34 = (ulong)uVar25;
            *(int*)( this + 0x28 ) = (int)uVar27;
            pvVar30 = *(void**)( this + 8 );
            uVar27 = uVar34 * 4;
            uVar38 = uVar34 * 8;
            pvVar4 = *(void**)( this + 0x10 );
            uVar28 = Memory::alloc_static(uVar27, false);
            *(undefined8*)( this + 0x10 ) = uVar28;
            __s_00 = (void*)Memory::alloc_static(uVar38, false);
            *(void**)( this + 8 ) = __s_00;
            if (uVar25 != 0) {
               __s = *(void**)( this + 0x10 );
               if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar27 ) )) {
                  uVar27 = 0;
                  do {
                     *(undefined4*)( (long)__s + uVar27 * 4 ) = 0;
                     *(undefined8*)( (long)__s_00 + uVar27 * 8 ) = 0;
                     uVar27 = uVar27 + 1;
                  }
 while ( uVar34 != uVar27 );
               }
 else {
                  memset(__s, 0, uVar27);
                  memset(__s_00, 0, uVar38);
               }

            }

            if (uVar26 != 0) {
               uVar27 = 0;
               do {
                  uVar25 = *(uint*)( (long)pvVar4 + uVar27 * 4 );
                  if (uVar25 != 0) {
                     lVar5 = *(long*)( this + 0x10 );
                     uVar36 = 0;
                     uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                     uVar38 = CONCAT44(0, uVar3);
                     lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = (ulong)uVar25 * lVar6;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = uVar38;
                     lVar32 = SUB168(auVar7 * auVar15, 8);
                     puVar1 = (uint*)( lVar5 + lVar32 * 4 );
                     iVar31 = SUB164(auVar7 * auVar15, 8);
                     uVar37 = *puVar1;
                     uVar28 = *(undefined8*)( (long)pvVar30 + uVar27 * 8 );
                     while (uVar37 != 0) {
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = (ulong)uVar37 * lVar6;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = uVar38;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = ( ulong )(( uVar3 + iVar31 ) - SUB164(auVar8 * auVar16, 8)) * lVar6;
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = uVar38;
                        local_e8 = SUB164(auVar9 * auVar17, 8);
                        uVar35 = uVar28;
                        if (local_e8 < uVar36) {
                           *puVar1 = uVar25;
                           puVar2 = (undefined8*)( (long)__s_00 + lVar32 * 8 );
                           uVar35 = *puVar2;
                           *puVar2 = uVar28;
                           uVar25 = uVar37;
                           uVar36 = local_e8;
                        }

                        uVar36 = uVar36 + 1;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = ( ulong )(iVar31 + 1) * lVar6;
                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = uVar38;
                        lVar32 = SUB168(auVar10 * auVar18, 8);
                        puVar1 = (uint*)( lVar5 + lVar32 * 4 );
                        iVar31 = SUB164(auVar10 * auVar18, 8);
                        uVar28 = uVar35;
                        uVar37 = *puVar1;
                     }
;
                     *(undefined8*)( (long)__s_00 + lVar32 * 8 ) = uVar28;
                     *puVar1 = uVar25;
                     *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
                  }

                  uVar27 = uVar27 + 1;
               }
 while ( uVar27 != uVar26 );
               Memory::free_static(pvVar30, false);
               Memory::free_static(pvVar4, false);
            }

         }

         local_78 = *(undefined8*)param_1;
         uStack_70 = *(undefined8*)( param_1 + 8 );
         pauVar29 = (undefined1(*) [16])operator_new(0x48, "");
         *(undefined8*)pauVar29[2] = 0;
         *(undefined8*)( pauVar29[2] + 8 ) = 0;
         *(undefined8*)pauVar29[3] = 0;
         *(undefined8*)( pauVar29[3] + 8 ) = 0;
         *(undefined4*)pauVar29[4] = 0;
         *pauVar29 = (undefined1[16])0x0;
         *(undefined8*)pauVar29[1] = local_78;
         *(undefined8*)( pauVar29[1] + 8 ) = uStack_70;
         puVar2 = *(undefined8**)( this + 0x20 );
         if (puVar2 == (undefined8*)0x0) {
            *(undefined1(**) [16])( this + 0x18 ) = pauVar29;
         }
 else {
            *puVar2 = pauVar29;
            *(undefined8**)( *pauVar29 + 8 ) = puVar2;
         }

         iVar31 = *(int*)param_1;
         *(undefined1(**) [16])( this + 0x20 ) = pauVar29;
         uVar25 = ( iVar31 * 0x16a88000 | ( uint )(iVar31 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
         for (int i = 0; i < 3; i++) {
            uVar25 = ( uVar25 << 13 | uVar25 >> 19 ) * 5 + 3864292196 ^ ( *(int*)( param_1 + ( 4*i + 4 ) ) * 380141568 | ( uint )(*(int*)( param_1 + ( 4*i + 4 ) ) * -862048943) >> 17 ) * 461845907;
         }

         uVar25 = ( uVar25 << 0xd | uVar25 >> 0x13 ) * 5 + 0xe6546b64;
         uVar25 = ( uVar25 >> 0x10 ^ uVar25 ) * -0x7a143595;
         uVar26 = ( uVar25 ^ uVar25 >> 0xd ) * -0x3d4d51cb;
         uVar25 = uVar26 ^ uVar26 >> 0x10;
         if (uVar26 == uVar26 >> 0x10) {
            uVar27 = 1;
            uVar25 = 1;
         }
 else {
            uVar27 = (ulong)uVar25;
         }

         uVar37 = 0;
         lVar5 = *(long*)( this + 0x10 );
         lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar26 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar38 = CONCAT44(0, uVar26);
         auVar11._8_8_ = 0;
         auVar11._0_8_ = uVar27 * lVar6;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar38;
         lVar33 = SUB168(auVar11 * auVar19, 8);
         lVar32 = *(long*)( this + 8 );
         puVar1 = (uint*)( lVar5 + lVar33 * 4 );
         iVar31 = SUB164(auVar11 * auVar19, 8);
         uVar3 = *puVar1;
         pauVar23 = pauVar29;
         while (uVar3 != 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar3 * lVar6;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(( iVar31 + uVar26 ) - SUB164(auVar12 * auVar20, 8)) * lVar6;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_e8 = SUB164(auVar13 * auVar21, 8);
            pauVar39 = pauVar23;
            if (local_e8 < uVar37) {
               *puVar1 = uVar25;
               puVar2 = (undefined8*)( lVar32 + lVar33 * 8 );
               pauVar39 = (undefined1(*) [16])*puVar2;
               *puVar2 = pauVar23;
               uVar25 = uVar3;
               uVar37 = local_e8;
            }

            uVar37 = uVar37 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(iVar31 + 1) * lVar6;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar33 = SUB168(auVar14 * auVar22, 8);
            puVar1 = (uint*)( lVar5 + lVar33 * 4 );
            iVar31 = SUB164(auVar14 * auVar22, 8);
            pauVar23 = pauVar39;
            uVar3 = *puVar1;
         }
;
         *(undefined1(**) [16])( lVar32 + lVar33 * 8 ) = pauVar23;
         *puVar1 = uVar25;
         *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      }
 else {
         pauVar29 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_8c[0] * 8 );
         if (*(int*)pauVar29[2] != 0) {
            *(undefined4*)pauVar29[2] = 0;
         }

         if (*(int*)pauVar29[3] != 0) {
            *(undefined4*)pauVar29[3] = 0;
         }

         *(undefined4*)pauVar29[4] = 0;
      }

   }
 else {
      pauVar29 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_90 * 8 );
   }

   LAB_00103731:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pauVar29 + 2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashSet<JPH::SubShapeIDPair, JoltContactListener3D::ShapePairHasher,
   HashMapComparatorDefault<JPH::SubShapeIDPair> >::_lookup_pos(JPH::SubShapeIDPair const&, unsigned
   int&) const */undefined8 HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::_lookup_pos(HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>> *this, SubShapeIDPair *param_1, uint *param_2) {
   int *piVar1;
   ulong uVar2;
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
   int iVar13;
   ulong uVar14;
   long lVar15;
   ulong uVar16;
   uint uVar17;
   uint uVar18;
   undefined1 auVar19[16];
   if (*(long*)this != 0) {
      if (*(int*)( this + 0x24 ) == 0) {
         return 0;
      }

      uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar11 = ( *(int*)param_1 * 0x16a88000 | ( uint )(*(int*)param_1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      for (int i = 0; i < 3; i++) {
         uVar11 = ( uVar11 << 13 | uVar11 >> 19 ) * 5 + 3864292196 ^ ( *(int*)( param_1 + ( 4*i + 4 ) ) * 380141568 | ( uint )(*(int*)( param_1 + ( 4*i + 4 ) ) * -862048943) >> 17 ) * 461845907;
      }

      uVar11 = ( uVar11 << 0xd | uVar11 >> 0x13 ) * 5 + 0xe6546b64;
      uVar11 = ( uVar11 >> 0x10 ^ uVar11 ) * -0x7a143595;
      uVar11 = ( uVar11 ^ uVar11 >> 0xd ) * -0x3d4d51cb;
      uVar18 = uVar11 ^ uVar11 >> 0x10;
      if (uVar11 == uVar11 >> 0x10) {
         uVar18 = 1;
         uVar14 = uVar2;
      }
 else {
         uVar14 = uVar18 * uVar2;
      }

      uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( *(long*)( this + 0x18 ) + lVar15 * 4 );
      iVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar17 = 0;
         do {
            if (uVar18 == uVar11) {
               uVar11 = *(uint*)( *(long*)( this + 8 ) + lVar15 * 4 );
               lVar15 = (ulong)uVar11 * 0x10;
               piVar1 = (int*)( *(long*)this + lVar15 );
               auVar19._0_4_ = -(uint)(*piVar1 == *(int *)param_1);
               auVar19._4_4_ = -(uint)(piVar1[1] == *(int *)(param_1 + 4));
               auVar19._8_4_ = -(uint)(piVar1[2] == *(int *)(param_1 + 8));
               auVar19._12_4_ = -(uint)(piVar1[3] == *(int *)(param_1 + 0xc));
               iVar12 = movmskps((int)lVar15, auVar19);
               if (iVar12 == 0xf) {
                  *param_2 = uVar11;
                  return 1;
               }

            }

            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( iVar13 + 1 ) * uVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( *(long*)( this + 0x18 ) + lVar15 * 4 );
            iVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar11 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) + iVar13 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar17 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashSet<JPH::SubShapeIDPair, JoltContactListener3D::ShapePairHasher,
   HashMapComparatorDefault<JPH::SubShapeIDPair> >::erase(JPH::SubShapeIDPair const&) */uint HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::erase(HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>> *this, SubShapeIDPair *param_1) {
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
   uint uVar26;
   uint uVar27;
   ulong uVar28;
   long lVar29;
   uint *puVar30;
   uint uVar31;
   ulong uVar32;
   ulong uVar33;
   ulong uVar34;
   uint *puVar35;
   uint *puVar36;
   ulong uVar37;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   uVar26 = _lookup_pos(this, param_1, &local_44);
   uVar25 = local_44;
   if ((char)uVar26 != '\0') {
      uVar28 = (ulong)local_44;
      lVar8 = *(long*)( this + 0x10 );
      lVar9 = *(long*)( this + 0x18 );
      puVar4 = (uint*)( lVar8 + uVar28 * 4 );
      local_44 = *puVar4;
      uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      uVar33 = CONCAT44(0, uVar27);
      lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(local_44 + 1) * lVar10;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar33;
      lVar29 = SUB168(auVar12 * auVar18, 8) * 4;
      uVar31 = SUB164(auVar12 * auVar18, 8);
      puVar36 = (uint*)( lVar9 + lVar29 );
      if (( *puVar36 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = ( ulong ) * puVar36 * lVar10,auVar19._8_8_ = 0,auVar19._0_8_ = uVar33,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar27 + uVar31 ) - SUB164(auVar13 * auVar19, 8)) * lVar10,auVar20._8_8_ = 0,auVar20._0_8_ = uVar33,SUB164(auVar14 * auVar20, 8) == 0) {
         uVar37 = (ulong)local_44;
      }
 else {
         lVar11 = *(long*)( this + 8 );
         uVar34 = (ulong)local_44;
         uVar37 = (ulong)uVar31;
         while (true) {
            puVar30 = (uint*)( lVar29 + lVar11 );
            puVar1 = (uint*)( lVar11 + uVar34 * 4 );
            puVar35 = (uint*)( uVar34 * 4 + lVar9 );
            puVar5 = (undefined4*)( lVar8 + ( ulong ) * puVar30 * 4 );
            puVar6 = (undefined4*)( lVar8 + ( ulong ) * puVar1 * 4 );
            uVar7 = *puVar6;
            *puVar6 = *puVar5;
            *puVar5 = uVar7;
            uVar31 = *puVar36;
            *puVar36 = *puVar35;
            *puVar35 = uVar31;
            uVar31 = *puVar30;
            *puVar30 = *puVar1;
            local_44 = (uint)uVar37;
            *puVar1 = uVar31;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = ( ulong )(local_44 + 1) * lVar10;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar33;
            uVar32 = SUB168(auVar17 * auVar23, 8);
            lVar29 = uVar32 * 4;
            puVar36 = (uint*)( lVar9 + lVar29 );
            if (( *puVar36 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = ( ulong ) * puVar36 * lVar10,auVar21._8_8_ = 0,auVar21._0_8_ = uVar33,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( SUB164(auVar17 * auVar23, 8) + uVar27 ) - SUB164(auVar15 * auVar21, 8)) * lVar10,auVar22._8_8_ = 0,auVar22._0_8_ = uVar33,SUB164(auVar16 * auVar22, 8) == 0) break;
            uVar34 = uVar37;
            uVar37 = uVar32 & 0xffffffff;
         }
;
         uVar26 = uVar26 & 0xff;
      }

      lVar29 = *(long*)this;
      *(undefined4*)( lVar9 + uVar37 * 4 ) = 0;
      puVar2 = (undefined8*)( lVar29 + uVar28 * 0x10 );
      uVar27 = *(int*)( this + 0x24 ) - 1;
      *(uint*)( this + 0x24 ) = uVar27;
      if (uVar25 < uVar27) {
         puVar3 = (undefined8*)( lVar29 + (ulong)uVar27 * 0x10 );
         uVar24 = puVar3[1];
         *puVar2 = *puVar3;
         puVar2[1] = uVar24;
         *puVar4 = *(uint*)( lVar8 + (ulong)uVar27 * 4 );
         *(uint*)( *(long*)( this + 8 ) + ( ulong ) * (uint*)( lVar8 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar25;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar26;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<JPH::SubShapeIDPair, JoltContactListener3D::ShapePairHasher,
   HashMapComparatorDefault<JPH::SubShapeIDPair> >::insert(JPH::SubShapeIDPair const&) */SubShapeIDPair *HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>>::insert(SubShapeIDPair *param_1) {
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
   uint uVar25;
   undefined8 uVar26;
   long lVar27;
   long lVar28;
   long lVar29;
   uint *puVar30;
   int iVar31;
   SubShapeIDPair *in_RDX;
   ulong uVar32;
   uint uVar33;
   HashSet<JPH::SubShapeIDPair,JoltContactListener3D::ShapePairHasher,HashMapComparatorDefault<JPH::SubShapeIDPair>> *in_RSI;
   ulong uVar34;
   uint uVar35;
   ulong uVar36;
   undefined4 uVar37;
   uint uVar38;
   ulong uVar39;
   uint uVar40;
   uint *puVar41;
   long in_FS_OFFSET;
   uint local_98;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar25 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
   if (*(long*)in_RSI == 0) {
      uVar34 = (ulong)uVar25 * 4;
      uVar26 = Memory::alloc_static(uVar34, false);
      *(undefined8*)( in_RSI + 0x18 ) = uVar26;
      uVar26 = Memory::alloc_static((ulong)uVar25 << 4, false);
      *(undefined8*)in_RSI = uVar26;
      uVar26 = Memory::alloc_static(uVar34, false);
      *(undefined8*)( in_RSI + 0x10 ) = uVar26;
      uVar26 = Memory::alloc_static(uVar34, false);
      *(undefined8*)( in_RSI + 8 ) = uVar26;
      if (uVar25 != 0) {
         memset(*(void**)( in_RSI + 0x18 ), 0, uVar34);
      }

   }

   local_44 = 0;
   cVar24 = _lookup_pos(in_RSI, in_RDX, &local_44);
   if (cVar24 == '\0') {
      uVar38 = *(uint*)( in_RSI + 0x24 );
      uVar2 = *(uint*)( in_RSI + 0x20 );
      if ((float)uVar25 * __LC15 < (float)( uVar38 + 1 )) {
         if (uVar2 == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            iVar31 = *(int*)( in_RSI + 0x24 );
            lVar27 = *(long*)in_RSI;
            uVar25 = 0xffffffff;
            goto LAB_00104192;
         }

         uVar34 = ( ulong )(uVar2 + 1);
         if (uVar2 + 1 < 2) {
            uVar34 = 2;
         }

         uVar25 = *(uint*)( hash_table_size_primes + uVar34 * 4 );
         pvVar3 = *(void**)( in_RSI + 0x18 );
         *(int*)( in_RSI + 0x20 ) = (int)uVar34;
         uVar34 = (ulong)uVar25 * 4;
         pvVar4 = *(void**)( in_RSI + 0x10 );
         uVar26 = Memory::alloc_static(uVar34, false);
         *(undefined8*)( in_RSI + 0x18 ) = uVar26;
         uVar26 = Memory::realloc_static(*(void**)in_RSI, (ulong)uVar25 << 4, false);
         *(undefined8*)in_RSI = uVar26;
         uVar26 = Memory::alloc_static(uVar34, false);
         *(undefined8*)( in_RSI + 0x10 ) = uVar26;
         lVar27 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar34, false);
         *(long*)( in_RSI + 8 ) = lVar27;
         if (uVar25 != 0) {
            memset(*(void**)( in_RSI + 0x18 ), 0, uVar34);
         }

         if (*(int*)( in_RSI + 0x24 ) != 0) {
            uVar34 = 0;
            lVar5 = *(long*)( in_RSI + 0x18 );
            lVar6 = *(long*)( in_RSI + 0x10 );
            do {
               uVar39 = uVar34 & 0xffffffff;
               uVar37 = (undefined4)uVar34;
               uVar40 = 0;
               uVar25 = *(uint*)( (long)pvVar3 + ( ulong ) * (uint*)( (long)pvVar4 + uVar34 * 4 ) * 4 );
               uVar32 = (ulong)uVar25;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
               uVar36 = CONCAT44(0, uVar2);
               lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar32 * lVar28;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar36;
               lVar29 = SUB168(auVar8 * auVar16, 8) * 4;
               iVar31 = SUB164(auVar8 * auVar16, 8);
               puVar41 = (uint*)( lVar5 + lVar29 );
               uVar38 = *puVar41;
               if (uVar38 == 0) {
                  lVar28 = uVar34 * 4;
               }
 else {
                  do {
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = (ulong)uVar38 * lVar28;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar36;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( ulong )(( uVar2 + iVar31 ) - SUB164(auVar9 * auVar17, 8)) * lVar28;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = uVar36;
                     local_98 = SUB164(auVar10 * auVar18, 8);
                     if (local_98 < uVar40) {
                        *(int*)( lVar6 + uVar39 * 4 ) = iVar31;
                        uVar25 = *puVar41;
                        *puVar41 = (uint)uVar32;
                        uVar38 = *(uint*)( lVar29 + lVar27 );
                        uVar32 = (ulong)uVar25;
                        *(uint*)( lVar29 + lVar27 ) = (uint)uVar39;
                        uVar39 = (ulong)uVar38;
                        uVar40 = local_98;
                     }

                     uVar37 = (undefined4)uVar39;
                     uVar25 = (uint)uVar32;
                     uVar40 = uVar40 + 1;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = ( ulong )(iVar31 + 1) * lVar28;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = uVar36;
                     lVar29 = SUB168(auVar11 * auVar19, 8) * 4;
                     iVar31 = SUB164(auVar11 * auVar19, 8);
                     puVar41 = (uint*)( lVar5 + lVar29 );
                     uVar38 = *puVar41;
                  }
 while ( uVar38 != 0 );
                  lVar28 = uVar39 << 2;
               }

               *puVar41 = uVar25;
               uVar34 = uVar34 + 1;
               *(int*)( lVar6 + lVar28 ) = iVar31;
               *(undefined4*)( lVar27 + lVar29 ) = uVar37;
            }
 while ( (uint)uVar34 < *(uint*)( in_RSI + 0x24 ) );
         }

         Memory::free_static(pvVar3, false);
         Memory::free_static(pvVar4, false);
         uVar38 = *(uint*)( in_RSI + 0x24 );
         uVar2 = *(uint*)( in_RSI + 0x20 );
      }

      uVar34 = (ulong)uVar38;
      uVar25 = ( *(int*)in_RDX * 0x16a88000 | ( uint )(*(int*)in_RDX * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      for (int i = 0; i < 3; i++) {
         uVar25 = ( uVar25 << 13 | uVar25 >> 19 ) * 5 + 3864292196 ^ ( *(int*)( in_RDX + ( 4*i + 4 ) ) * 380141568 | ( uint )(*(int*)( in_RDX + ( 4*i + 4 ) ) * -862048943) >> 17 ) * 461845907;
      }

      uVar25 = ( uVar25 << 0xd | uVar25 >> 0x13 ) * 5 + 0xe6546b64;
      uVar25 = ( uVar25 >> 0x10 ^ uVar25 ) * -0x7a143595;
      uVar40 = ( uVar25 ^ uVar25 >> 0xd ) * -0x3d4d51cb;
      uVar25 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
         uVar32 = 1;
         uVar25 = 1;
      }
 else {
         uVar32 = (ulong)uVar25;
      }

      uVar26 = *(undefined8*)( in_RDX + 8 );
      uVar35 = 0;
      lVar27 = *(long*)in_RSI;
      lVar6 = *(long*)( in_RSI + 0x18 );
      puVar1 = (undefined8*)( lVar27 + uVar34 * 0x10 );
      *puVar1 = *(undefined8*)in_RDX;
      puVar1[1] = uVar26;
      uVar40 = *(uint*)( hash_table_size_primes + (ulong)uVar2 * 4 );
      uVar36 = CONCAT44(0, uVar40);
      lVar29 = *(long*)( hash_table_size_primes_inv + (ulong)uVar2 * 8 );
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar32 * lVar29;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar36;
      lVar5 = SUB168(auVar12 * auVar20, 8) * 4;
      iVar31 = SUB164(auVar12 * auVar20, 8);
      lVar28 = *(long*)( in_RSI + 0x10 );
      puVar41 = (uint*)( lVar6 + lVar5 );
      lVar7 = *(long*)( in_RSI + 8 );
      uVar2 = *puVar41;
      uVar32 = uVar34;
      while (uVar2 != 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = (ulong)uVar2 * lVar29;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar36;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(( uVar40 + iVar31 ) - SUB164(auVar13 * auVar21, 8)) * lVar29;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar36;
         local_98 = SUB164(auVar14 * auVar22, 8);
         uVar33 = uVar25;
         if (local_98 < uVar35) {
            puVar30 = (uint*)( lVar5 + lVar7 );
            *(int*)( lVar28 + uVar34 * 4 ) = iVar31;
            uVar33 = *puVar41;
            *puVar41 = uVar25;
            uVar25 = *puVar30;
            *puVar30 = (uint)uVar32;
            uVar34 = (ulong)uVar25;
            uVar32 = uVar34;
            uVar35 = local_98;
         }

         uVar38 = (uint)uVar32;
         uVar35 = uVar35 + 1;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = ( ulong )(iVar31 + 1) * lVar29;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar36;
         lVar5 = SUB168(auVar15 * auVar23, 8) * 4;
         iVar31 = SUB164(auVar15 * auVar23, 8);
         puVar41 = (uint*)( lVar6 + lVar5 );
         uVar25 = uVar33;
         uVar2 = *puVar41;
      }
;
      *puVar41 = uVar25;
      *(int*)( lVar28 + uVar34 * 4 ) = iVar31;
      *(uint*)( lVar7 + lVar5 ) = uVar38;
      uVar25 = *(uint*)( in_RSI + 0x24 );
      iVar31 = uVar25 + 1;
      *(int*)( in_RSI + 0x24 ) = iVar31;
   }
 else {
      iVar31 = *(int*)( in_RSI + 0x24 );
      lVar27 = *(long*)in_RSI;
      uVar25 = local_44;
   }

   LAB_00104192:*(long*)param_1 = lVar27;
   *(int*)( param_1 + 8 ) = iVar31;
   *(uint*)( param_1 + 0xc ) = uVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}
/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   if (*(long*)( this + 0x128 ) != 0) {
      *(undefined8*)( this + 0x118 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x110 ) != 0) {
      *(undefined8*)( this + 0x100 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0xf8 ) != 0) {
      *(undefined8*)( this + 0xe8 ) = 0;
      ( *Free )();
   }

   plVar4 = *(long**)( this + 0xd8 );
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 200 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_00104480:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_001044b8;
            }
;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00104480;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_00104480;
            }

            ( *Free )();
            plVar4 = plVar4 + 1;
         }
 while ( plVar4 < plVar2 );
         LAB_001044b8:plVar4 = *(long**)( this + 0xd8 );
      }

      *(undefined8*)( this + 200 ) = 0;
      ( *Free )(plVar4);
   }

   for (int i = 0; i < 7; i++) {
      if (*(long*)( this + ( -24*i + 192 ) ) != 0) {
         *(undefined8*)( this + ( -24*i + 176 ) ) = 0;
         ( *Free )();
      }

   }

   if (*(long*)( this + 0x18 ) == 0) {
      return;
   }

   *(undefined8*)( this + 8 ) = 0;
   /* WARNING: Could not recover jumptable at 0x0010445a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */void HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>> *this) {
   uint uVar1;
   SoftBodySharedSettings *this_00;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               this_00 = *(SoftBodySharedSettings**)( (long)pvVar3 + 0x28 );
               if (this_00 != (SoftBodySharedSettings*)0x0) {
                  LOCK();
                  *(int*)this_00 = *(int*)this_00 + -1;
                  UNLOCK();
                  if (*(int*)this_00 == 0) {
                     JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
                     ( *JPH::Free )(this_00);
                  }

               }

               if (*(void**)( (long)pvVar3 + 0x20 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar3 + 0x18 ) != 0) {
                     *(undefined4*)( (long)pvVar3 + 0x18 ) = 0;
                  }

                  Memory::free_static(*(void**)( (long)pvVar3 + 0x20 ), false);
               }

               Memory::free_static(pvVar3, false);
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
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
}
/* JoltContactListener3D::OnContactAdded(JPH::Body const&, JPH::Body const&, JPH::ContactManifold
   const&, JPH::ContactSettings&) */void JoltContactListener3D::_GLOBAL__sub_I_OnContactAdded(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC30;
   }

   if (JoltSoftBody3D::mesh_to_shared != '\0') {
      return;
   }

   JoltSoftBody3D::mesh_to_shared = 1;
   JoltSoftBody3D::mesh_to_shared._8_16_ = (undefined1[16])0x0;
   JoltSoftBody3D::mesh_to_shared._40_8_ = 2;
   JoltSoftBody3D::mesh_to_shared._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault < RID>, DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>> > ::~HashMap, JoltSoftBody3D::mesh_to_shared, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */void HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JoltContactListener3D::~JoltContactListener3D() */void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


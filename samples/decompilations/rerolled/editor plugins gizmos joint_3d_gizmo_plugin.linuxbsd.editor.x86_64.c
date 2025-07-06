/* Joint3DGizmoPlugin::get_priority() const */undefined8 Joint3DGizmoPlugin::get_priority(void) {
   return 0xffffffff;
}/* Joint3DGizmoPlugin::incremental_update_gizmos() */void Joint3DGizmoPlugin::incremental_update_gizmos(Joint3DGizmoPlugin *this) {
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
   uint uVar13;
   ulong uVar14;
   uint uVar15;
   ulong uVar16;
   undefined8 *puVar17;
   if (*(int*)( this + 0x26c ) == 0) {
      return;
   }
   puVar17 = *(undefined8**)( this + 0x248 );
   if (puVar17 != (undefined8*)0x0) {
      uVar14 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      uVar11 = *(long*)( this + 0x458 ) * 0x3ffff - 1;
      uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
      uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar16 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
         uVar16 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar16 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar13 = *(uint*)( *(long*)( this + 0x260 ) + lVar12 * 4 );
      iVar10 = SUB164(auVar2 * auVar6, 8);
      if (uVar13 != 0) {
         uVar15 = 0;
         while (( (uint)uVar16 != uVar13 || ( uVar13 = *(uint*)( *(long*)( this + 0x250 ) + lVar12 * 4 ) * (long*)( this + 0x458 ) != puVar17[uVar13] ) )) {
            uVar15 = uVar15 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar10 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar14;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar13 = *(uint*)( *(long*)( this + 0x260 ) + lVar12 * 4 );
            iVar10 = SUB164(auVar3 * auVar7, 8);
            if (( uVar13 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar13 * lVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar14,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 ) + iVar10 ) - SUB164(auVar4 * auVar8, 8)) * lVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar14,SUB164(auVar5 * auVar9, 8) < uVar15) goto LAB_00100172;
         };
         iVar10 = uVar13 + 1;
         if (iVar10 < *(int*)( this + 0x26c )) {
            puVar17 = puVar17 + iVar10;
         }
      }
   }
   LAB_00100172:( **(code**)( *(long*)this + 0x1f8 ) )(this, *puVar17);
   *(undefined8*)( this + 0x458 ) = *puVar17;
   return;
}/* Joint3DGizmoPlugin::has_gizmo(Node3D*) */bool Joint3DGizmoPlugin::has_gizmo(Joint3DGizmoPlugin *this, Node3D *param_1) {
   long lVar1;
   if (param_1 != (Node3D*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &Joint3D::typeinfo, 0);
      return lVar1 != 0;
   }
   return false;
}/* Joint3DGizmoPlugin::get_gizmo_name() const */Joint3DGizmoPlugin * __thiscall Joint3DGizmoPlugin::get_gizmo_name(Joint3DGizmoPlugin *this){
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
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
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
}/* JointGizmosDrawer::look_body(Transform3D const&, Transform3D const&) */JointGizmosDrawer * __thiscall
JointGizmosDrawer::look_body(JointGizmosDrawer *this,Transform3D *param_1,Transform3D *param_2){
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float local_38;
   float local_34;
   float local_30;
   float local_2c;
   float local_28;
   float local_24;
   float local_20;
   float local_1c;
   float local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar4 = *(float*)( param_2 + 0x28 ) - *(float*)( param_1 + 0x28 );
   fVar2 = *(float*)( param_2 + 0x24 ) - *(float*)( param_1 + 0x24 );
   fVar3 = *(float*)( param_2 + 0x2c ) - *(float*)( param_1 + 0x2c );
   fVar5 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
   if (fVar5 == 0.0) {
      fVar3 = 0.0;
      fVar2 = 0.0;
      fVar4 = fVar2;
   } else {
      fVar5 = SQRT(fVar5);
      fVar3 = fVar3 / fVar5;
      fVar2 = fVar2 / fVar5;
      fVar4 = fVar4 / fVar5;
      fVar5 = fVar3 * 0.0 - fVar2 * 0.0;
      fVar11 = fVar2 - fVar4 * 0.0;
      fVar10 = fVar4 * 0.0 - fVar3;
      fVar6 = fVar10 * fVar10 + fVar5 * fVar5 + fVar11 * fVar11;
      if (fVar6 != 0.0) {
         fVar6 = SQRT(fVar6);
         fVar10 = fVar10 / fVar6;
         fVar5 = fVar5 / fVar6;
         fVar11 = fVar11 / fVar6;
         fVar9 = fVar10 * fVar4 - fVar5 * fVar2;
         fVar8 = fVar11 * fVar2 - fVar10 * fVar3;
         fVar7 = fVar5 * fVar3 - fVar11 * fVar4;
         fVar6 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
         if (fVar6 == 0.0) {
            fVar9 = 0.0;
            fVar8 = 0.0;
            fVar7 = 0.0;
         } else {
            fVar6 = SQRT(fVar6);
            fVar7 = fVar7 / fVar6;
            fVar8 = fVar8 / fVar6;
            fVar9 = fVar9 / fVar6;
         }
         goto LAB_0010046d;
      }
   }
   fVar11 = 0.0;
   fVar10 = 0.0;
   fVar8 = 0.0;
   fVar9 = 0.0;
   fVar7 = 0.0;
   fVar5 = fVar10;
   LAB_0010046d:Basis::inverse();
   *(float*)this = local_34 * fVar4 + local_38 * fVar2 + local_30 * fVar3;
   *(float*)( this + 4 ) = fVar8 * local_34 + fVar7 * local_38 + fVar9 * local_30;
   *(float*)( this + 8 ) = local_34 * fVar5 + local_38 * fVar10 + local_30 * fVar11;
   *(float*)( this + 0xc ) = local_28 * fVar4 + local_2c * fVar2 + local_24 * fVar3;
   *(float*)( this + 0x10 ) = fVar8 * local_28 + fVar7 * local_2c + local_24 * fVar9;
   *(float*)( this + 0x14 ) = local_2c * fVar10 + local_28 * fVar5 + local_24 * fVar11;
   *(float*)( this + 0x18 ) = fVar2 * local_20 + fVar4 * local_1c + fVar3 * local_18;
   *(float*)( this + 0x1c ) = fVar7 * local_20 + fVar8 * local_1c + fVar9 * local_18;
   *(float*)( this + 0x20 ) = local_20 * fVar10 + local_1c * fVar5 + local_18 * fVar11;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this;
}/* JointGizmosDrawer::look_body_toward_x(Transform3D const&, Transform3D const&) */JointGizmosDrawer * __thiscall
JointGizmosDrawer::look_body_toward_x
          (JointGizmosDrawer *this,Transform3D *param_1,Transform3D *param_2){
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float local_5c;
   float local_38;
   float local_34;
   float local_30;
   float local_2c;
   float local_28;
   float local_24;
   float local_20;
   float local_1c;
   float local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar5 = *(float*)( param_2 + 0x28 ) - *(float*)( param_1 + 0x28 );
   fVar3 = *(float*)( param_2 + 0x24 ) - *(float*)( param_1 + 0x24 );
   fVar2 = *(float*)( param_2 + 0x2c ) - *(float*)( param_1 + 0x2c );
   fVar7 = *(float*)( param_1 + 0x18 );
   fVar8 = *(float*)( param_1 + 0xc );
   fVar4 = *(float*)param_1;
   fVar6 = fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2;
   if (fVar6 == 0.0) {
      fVar2 = 0.0;
      fVar3 = 0.0;
      fVar5 = fVar3;
   } else {
      fVar6 = SQRT(fVar6);
      fVar3 = fVar3 / fVar6;
      fVar5 = fVar5 / fVar6;
      fVar2 = fVar2 / fVar6;
   }
   fVar6 = fVar5 * fVar4 - fVar3 * fVar8;
   fVar3 = fVar3 * fVar7 - fVar2 * fVar4;
   fVar5 = fVar2 * fVar8 - fVar5 * fVar7;
   fVar2 = fVar5 * fVar5 + fVar3 * fVar3 + fVar6 * fVar6;
   if (fVar2 == 0.0) {
      fVar6 = 0.0;
      fVar3 = 0.0;
      fVar5 = 0.0;
      local_5c = 0.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
   } else {
      fVar2 = SQRT(fVar2);
      fVar5 = fVar5 / fVar2;
      fVar3 = fVar3 / fVar2;
      fVar6 = fVar6 / fVar2;
      local_5c = fVar5 * fVar8 - fVar3 * fVar4;
      fVar10 = fVar6 * fVar4 - fVar5 * fVar7;
      fVar9 = fVar3 * fVar7 - fVar6 * fVar8;
      fVar2 = fVar9 * fVar9 + fVar10 * fVar10 + local_5c * local_5c;
      if (fVar2 == 0.0) {
         fVar10 = 0.0;
         local_5c = 0.0;
         fVar9 = 0.0;
      } else {
         fVar2 = SQRT(fVar2);
         local_5c = local_5c / fVar2;
         fVar9 = fVar9 / fVar2;
         fVar10 = fVar10 / fVar2;
      }
   }
   fVar2 = fVar4 * fVar4 + fVar8 * fVar8 + fVar7 * fVar7;
   if (fVar2 == 0.0) {
      fVar7 = 0.0;
      fVar4 = 0.0;
      fVar8 = fVar4;
   } else {
      fVar2 = SQRT(fVar2);
      fVar4 = fVar4 / fVar2;
      fVar8 = fVar8 / fVar2;
      fVar7 = fVar7 / fVar2;
   }
   Basis::inverse();
   *(ulong*)this = CONCAT44(local_34 * fVar3 + local_38 * fVar5 + local_30 * fVar6, fVar8 * local_34 + fVar4 * local_38 + fVar7 * local_30);
   *(ulong*)( this + 8 ) = CONCAT44(fVar8 * local_28 + fVar4 * local_2c + fVar7 * local_24, local_34 * fVar10 + local_38 * fVar9 + local_30 * local_5c);
   *(float*)( this + 0x10 ) = local_28 * fVar3 + local_2c * fVar5 + local_24 * fVar6;
   *(float*)( this + 0x14 ) = local_2c * fVar9 + local_28 * fVar10 + local_24 * local_5c;
   *(float*)( this + 0x18 ) = fVar4 * local_20 + fVar8 * local_1c + fVar7 * local_18;
   *(float*)( this + 0x1c ) = fVar5 * local_20 + fVar3 * local_1c + fVar6 * local_18;
   *(float*)( this + 0x20 ) = fVar9 * local_20 + fVar10 * local_1c + local_18 * local_5c;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this;
}/* JointGizmosDrawer::look_body_toward_y(Transform3D const&, Transform3D const&) */JointGizmosDrawer * __thiscall
JointGizmosDrawer::look_body_toward_y
          (JointGizmosDrawer *this,Transform3D *param_1,Transform3D *param_2){
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float local_5c;
   float local_38;
   float local_34;
   float local_30;
   float local_2c;
   float local_28;
   float local_24;
   float local_20;
   float local_1c;
   float local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = *(float*)( param_2 + 0x28 ) - *(float*)( param_1 + 0x28 );
   fVar5 = *(float*)( param_2 + 0x24 ) - *(float*)( param_1 + 0x24 );
   fVar4 = *(float*)( param_2 + 0x2c ) - *(float*)( param_1 + 0x2c );
   local_5c = *(float*)( param_1 + 0x1c );
   fVar7 = *(float*)( param_1 + 0x10 );
   fVar3 = *(float*)( param_1 + 4 );
   fVar8 = fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4;
   if (fVar8 == 0.0) {
      fVar4 = 0.0;
      fVar2 = 0.0;
      fVar5 = 0.0;
   } else {
      fVar8 = SQRT(fVar8);
      fVar5 = fVar5 / fVar8;
      fVar2 = fVar2 / fVar8;
      fVar4 = fVar4 / fVar8;
   }
   fVar8 = fVar4 * fVar3 - fVar5 * local_5c;
   fVar4 = fVar2 * local_5c - fVar4 * fVar7;
   fVar2 = fVar5 * fVar7 - fVar2 * fVar3;
   fVar5 = fVar4 * fVar4 + fVar8 * fVar8 + fVar2 * fVar2;
   if (fVar5 == 0.0) {
      fVar2 = 0.0;
      fVar4 = 0.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      fVar5 = 0.0;
      fVar8 = fVar4;
   } else {
      fVar5 = SQRT(fVar5);
      fVar8 = fVar8 / fVar5;
      fVar4 = fVar4 / fVar5;
      fVar2 = fVar2 / fVar5;
      fVar9 = fVar8 * fVar3 - fVar4 * fVar7;
      fVar10 = fVar4 * local_5c - fVar2 * fVar3;
      fVar5 = fVar2 * fVar7 - fVar8 * local_5c;
      fVar6 = fVar5 * fVar5 + fVar10 * fVar10 + fVar9 * fVar9;
      if (fVar6 == 0.0) {
         fVar9 = 0.0;
         fVar10 = 0.0;
         fVar5 = 0.0;
      } else {
         fVar6 = SQRT(fVar6);
         fVar5 = fVar5 / fVar6;
         fVar10 = fVar10 / fVar6;
         fVar9 = fVar9 / fVar6;
      }
   }
   fVar6 = fVar3 * fVar3 + fVar7 * fVar7 + local_5c * local_5c;
   if (fVar6 == 0.0) {
      local_5c = 0.0;
      fVar7 = 0.0;
      fVar3 = 0.0;
   } else {
      fVar6 = SQRT(fVar6);
      local_5c = local_5c / fVar6;
      fVar3 = fVar3 / fVar6;
      fVar7 = fVar7 / fVar6;
   }
   Basis::inverse();
   *(ulong*)this = CONCAT44(fVar7 * local_34 + fVar3 * local_38 + local_5c * local_30, fVar10 * local_34 + fVar5 * local_38 + fVar9 * local_30);
   *(ulong*)( this + 8 ) = CONCAT44(fVar10 * local_28 + fVar5 * local_2c + fVar9 * local_24, local_34 * fVar8 + local_38 * fVar4 + local_30 * fVar2);
   *(ulong*)( this + 0x10 ) = CONCAT44(local_2c * fVar4 + local_28 * fVar8 + local_24 * fVar2, fVar7 * local_28 + fVar3 * local_2c + local_5c * local_24);
   *(ulong*)( this + 0x18 ) = CONCAT44(fVar3 * local_20 + fVar7 * local_1c + local_18 * local_5c, fVar5 * local_20 + fVar10 * local_1c + fVar9 * local_18);
   *(float*)( this + 0x20 ) = fVar4 * local_20 + local_1c * fVar8 + local_18 * fVar2;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this;
}/* JointGizmosDrawer::look_body_toward_z(Transform3D const&, Transform3D const&) */JointGizmosDrawer * __thiscall
JointGizmosDrawer::look_body_toward_z
          (JointGizmosDrawer *this,Transform3D *param_1,Transform3D *param_2){
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float local_38;
   float local_34;
   float local_30;
   float local_2c;
   float local_28;
   float local_24;
   float local_20;
   float local_1c;
   float local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar6 = *(float*)( param_2 + 0x28 ) - *(float*)( param_1 + 0x28 );
   fVar3 = *(float*)( param_2 + 0x24 ) - *(float*)( param_1 + 0x24 );
   fVar2 = *(float*)( param_2 + 0x2c ) - *(float*)( param_1 + 0x2c );
   fVar8 = *(float*)( param_1 + 0x20 );
   fVar9 = *(float*)( param_1 + 0x14 );
   fVar4 = *(float*)( param_1 + 8 );
   fVar5 = fVar3 * fVar3 + fVar6 * fVar6 + fVar2 * fVar2;
   if (fVar5 == 0.0) {
      fVar2 = 0.0;
      fVar3 = 0.0;
      fVar6 = 0.0;
   } else {
      fVar5 = SQRT(fVar5);
      fVar3 = fVar3 / fVar5;
      fVar6 = fVar6 / fVar5;
      fVar2 = fVar2 / fVar5;
   }
   fVar5 = fVar4 * fVar4 + fVar9 * fVar9 + fVar8 * fVar8;
   if (fVar5 == 0.0) {
      fVar8 = 0.0;
      fVar4 = 0.0;
      fVar9 = fVar4;
   } else {
      fVar5 = SQRT(fVar5);
      fVar4 = fVar4 / fVar5;
      fVar9 = fVar9 / fVar5;
      fVar8 = fVar8 / fVar5;
   }
   fVar5 = fVar6 * fVar4 - fVar3 * fVar9;
   fVar3 = fVar3 * fVar8 - fVar2 * fVar4;
   fVar6 = fVar2 * fVar9 - fVar6 * fVar8;
   fVar2 = fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5;
   if (fVar2 == 0.0) {
      fVar5 = 0.0;
      fVar3 = 0.0;
      fVar6 = 0.0;
      fVar2 = 0.0;
      fVar10 = 0.0;
      fVar7 = fVar2;
   } else {
      fVar2 = SQRT(fVar2);
      fVar6 = fVar6 / fVar2;
      fVar3 = fVar3 / fVar2;
      fVar5 = fVar5 / fVar2;
      fVar10 = fVar9 * fVar6 - fVar4 * fVar3;
      fVar11 = fVar4 * fVar5 - fVar8 * fVar6;
      fVar2 = fVar8 * fVar3 - fVar9 * fVar5;
      fVar7 = fVar2 * fVar2 + fVar11 * fVar11 + fVar10 * fVar10;
      if (fVar7 == 0.0) {
         fVar10 = 0.0;
         fVar2 = 0.0;
         fVar7 = fVar2;
      } else {
         fVar7 = SQRT(fVar7);
         fVar2 = fVar2 / fVar7;
         fVar10 = fVar10 / fVar7;
         fVar7 = fVar11 / fVar7;
      }
   }
   Basis::inverse();
   *(float*)this = fVar7 * local_34 + fVar2 * local_38 + fVar10 * local_30;
   *(float*)( this + 4 ) = local_34 * fVar3 + local_38 * fVar6 + local_30 * fVar5;
   *(float*)( this + 8 ) = local_34 * fVar9 + local_38 * fVar4 + local_30 * fVar8;
   *(float*)( this + 0xc ) = fVar7 * local_28 + fVar2 * local_2c + local_24 * fVar10;
   *(float*)( this + 0x20 ) = fVar4 * local_20 + fVar9 * local_1c + fVar8 * local_18;
   *(ulong*)( this + 0x10 ) = CONCAT44(local_2c * fVar4 + local_28 * fVar9 + local_24 * fVar8, local_28 * fVar3 + local_2c * fVar6 + local_24 * fVar5);
   *(ulong*)( this + 0x18 ) = CONCAT44(fVar6 * local_20 + fVar3 * local_1c + fVar5 * local_18, fVar2 * local_20 + fVar7 * local_1c + fVar10 * local_18);
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this;
}/* JointGizmosDrawer::look_body_toward(Vector3::Axis, Transform3D const&, Transform3D const&) */JointGizmosDrawer * __thiscall
JointGizmosDrawer::look_body_toward
          (JointGizmosDrawer *this,int param_2,Transform3D *param_3,Transform3D *param_4){
   long lVar1;
   uint uVar2;
   long in_FS_OFFSET;
   uVar2 = _LC15;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 1) {
      look_body_toward_y(this, param_3, param_4);
   } else if (param_2 == 2) {
      look_body_toward_z(this, param_3, param_4);
   } else if (param_2 == 0) {
      look_body_toward_x(this, param_3, param_4);
   } else {
      *(undefined4*)( this + 0x20 ) = 0x3f800000;
      *(undefined1(*) [16])this = ZEXT416(uVar2);
      *(undefined1(*) [16])( this + 0x10 ) = ZEXT416(uVar2);
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Joint3DGizmoPlugin::Joint3DGizmoPlugin() */void Joint3DGizmoPlugin::Joint3DGizmoPlugin(Joint3DGizmoPlugin *this) {
   long *plVar1;
   Variant *pVVar2;
   char cVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   Timer *this_00;
   CallableCustom *pCVar7;
   bool bVar8;
   Variant *pVVar9;
   long in_FS_OFFSET;
   long local_f8;
   long local_f0;
   char *local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   *(undefined1(*) [16])( this + 0x450 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__initialize_classv_00108d08;
   local_e8 = "editors/3d_gizmos/gizmo_colors/joint";
   local_f0 = 0;
   local_e0 = 0x24;
   String::parse_latin1((StrRange*)&local_f0);
   _EDITOR_GET((String*)&local_c8);
   local_d8[0] = Variant::operator_cast_to_Color((Variant*)&local_c8);
   local_e8 = "joint_material";
   local_f8 = 0;
   local_e0 = 0xe;
   String::parse_latin1((StrRange*)&local_f8);
   bVar8 = SUB81(local_d8, 0);
   EditorNode3DGizmoPlugin::create_material((String*)this, (StrRange*)&local_f8, bVar8, false, false);
   lVar6 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   lVar6 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }
   }
   local_f0 = 0;
   local_e8 = "editors/3d_gizmos/gizmo_colors/joint_body_a";
   local_e0 = 0x2b;
   String::parse_latin1((StrRange*)&local_f0);
   _EDITOR_GET((String*)&local_c8);
   local_d8[0] = Variant::operator_cast_to_Color((Variant*)&local_c8);
   local_e8 = "joint_body_a_material";
   local_f8 = 0;
   local_e0 = 0x15;
   String::parse_latin1((StrRange*)&local_f8);
   EditorNode3DGizmoPlugin::create_material((String*)this, (StrRange*)&local_f8, bVar8, false, false);
   lVar6 = local_f8;
   if (local_f8 == 0) {
      LAB_00101666:cVar3 = Variant::needs_deinit[(int)local_c8];
   } else {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101666;
      local_f8 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
      cVar3 = Variant::needs_deinit[(int)local_c8];
   }
   if (cVar3 != '\0') {
      Variant::_clear_internal();
   }
   lVar6 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }
   }
   local_f0 = 0;
   local_e8 = "editors/3d_gizmos/gizmo_colors/joint_body_b";
   local_e0 = 0x2b;
   String::parse_latin1((StrRange*)&local_f0);
   _EDITOR_GET((String*)&local_c8);
   local_d8[0] = Variant::operator_cast_to_Color((Variant*)&local_c8);
   local_e8 = "joint_body_b_material";
   local_f8 = 0;
   local_e0 = 0x15;
   String::parse_latin1((StrRange*)&local_f8);
   EditorNode3DGizmoPlugin::create_material((String*)this, (StrRange*)&local_f8, bVar8, false, false);
   lVar6 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
         cVar3 = Variant::needs_deinit[(int)local_c8];
         goto joined_r0x00101737;
      }
   }
   cVar3 = Variant::needs_deinit[(int)local_c8];
   joined_r0x00101737:if (cVar3 != '\0') {
      Variant::_clear_internal();
   }
   lVar6 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }
   }
   this_00 = (Timer*)operator_new(0x428, "");
   Timer::Timer(this_00);
   postinitialize_handler((Object*)this_00);
   local_f0 = 0;
   *(Timer**)( this + 0x450 ) = this_00;
   local_e8 = "JointGizmoUpdateTimer";
   local_e0 = 0x15;
   String::parse_latin1((StrRange*)&local_f0);
   Node::set_name((String*)this_00);
   lVar6 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }
   }
   Timer::set_wait_time(_LC24);
   plVar1 = *(long**)( this + 0x450 );
   pcVar4 = *(code**)( *plVar1 + 0x108 );
   pCVar7 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar7);
   *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar7 + 0x20 ) = &_LC22;
   *(undefined8*)( pCVar7 + 0x40 ) = 0;
   uVar5 = *(undefined8*)( this + 0x60 );
   *(undefined***)pCVar7 = &PTR_hash_00108f70;
   *(undefined8*)( pCVar7 + 0x30 ) = uVar5;
   *(code**)( pCVar7 + 0x38 ) = incremental_update_gizmos;
   *(undefined8*)( pCVar7 + 0x10 ) = 0;
   *(Joint3DGizmoPlugin**)( pCVar7 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
   *(char**)( pCVar7 + 0x20 ) = "Joint3DGizmoPlugin::incremental_update_gizmos";
   Callable::Callable((Callable*)&local_e8, pCVar7);
   StringName::StringName((StringName*)&local_f0, "timeout", false);
   ( *pcVar4 )(plVar1, (StrRange*)&local_f0, (Callable*)&local_e8, 0);
   if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
      StringName::unref();
   }
   Callable::~Callable((Callable*)&local_e8);
   Timer::set_autostart(SUB81(*(undefined8*)( this + 0x450 ), 0));
   lVar6 = EditorNode::singleton;
   pCVar7 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar7);
   *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar7 + 0x20 ) = &_LC22;
   *(undefined***)pCVar7 = &PTR_hash_00109000;
   *(undefined8*)( pCVar7 + 0x40 ) = 0;
   uVar5 = *(undefined8*)( lVar6 + 0x60 );
   *(long*)( pCVar7 + 0x28 ) = lVar6;
   *(undefined8*)( pCVar7 + 0x30 ) = uVar5;
   *(undefined8*)( pCVar7 + 0x10 ) = 0;
   *(code**)( pCVar7 + 0x38 ) = Node::add_child;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
   *(char**)( pCVar7 + 0x20 ) = "Node::add_child";
   Callable::Callable((Callable*)&local_e8, pCVar7);
   Variant::Variant(local_a8, *(Object**)( this + 0x450 ));
   Variant::Variant(local_90, false);
   Variant::Variant(local_78, 0);
   Variant::Variant(local_60, 0);
   pVVar9 = local_48;
   local_c8 = local_a8;
   pVStack_c0 = local_90;
   local_b8 = local_78;
   Callable::call_deferredp((Variant**)&local_e8, (int)(String*)&local_c8);
   do {
      pVVar2 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar9 != local_a8 );
   Callable::~Callable((Callable*)&local_e8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */void Vector<Vector3>::push_back(undefined8 param_1, undefined4 param_2, long param_3) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_3 + 8 ) == 0) {
      lVar3 = 1;
   } else {
      lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
   }
   iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3>*)( param_3 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      } else {
         lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( param_3 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_3 + 8 ) + lVar4 * 0xc );
            *puVar1 = param_1;
            *(undefined4*)( puVar1 + 1 ) = param_2;
            return;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}/* Joint3DGizmoPlugin::CreatePinJointGizmo(Transform3D const&, Vector<Vector3>&) */void Joint3DGizmoPlugin::CreatePinJointGizmo(Transform3D *param_1, Vector *param_2) {
   long in_FS_OFFSET;
   Vector3 local_68[36];
   undefined8 local_44;
   undefined4 local_3c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i_799 = 0; i_799 < 6; i_799++) {
      Transform3D::translated_local(local_68);
      Vector<Vector3>::push_back(local_44, local_3c, param_2);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JointGizmosDrawer::draw_cone(Transform3D const&, Basis const&, float, float, Vector<Vector3>&) */void JointGizmosDrawer::draw_cone(Transform3D *param_1, Basis *param_2, float param_3, float param_4, Vector *param_5) {
   undefined8 uVar1;
   float fVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   double local_d8;
   float local_90;
   float local_8c;
   undefined8 local_88;
   float local_80;
   Vector3 local_78[36];
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   iVar3 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sincosf(param_3, &local_8c, &local_90);
   fVar2 = local_8c;
   fVar5 = local_90;
   fVar8 = 0.0;
   fVar6 = _LC55;
   fVar7 = _LC15;
   fVar9 = _LC56;
   while (true) {
      fVar9 = fVar9 * fVar2;
      fVar8 = fVar8 * fVar2;
      fVar7 = fVar7 * fVar2;
      fVar6 = fVar6 * fVar2;
      local_80 = fVar5 * *(float*)( param_2 + 0x18 ) + fVar8 * *(float*)( param_2 + 0x1c ) + fVar7 * *(float*)( param_2 + 0x20 );
      local_88 = CONCAT44(*(float*)( param_2 + 0x10 ) * fVar8 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) * fVar5 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * fVar7, *(float*)( param_2 + 4 ) * fVar8 + (float)*(undefined8*)param_2 * fVar5 + (float)*(undefined8*)( param_2 + 8 ) * fVar7);
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_5);
      local_80 = fVar6 * *(float*)( param_2 + 0x1c ) + fVar5 * *(float*)( param_2 + 0x18 ) + fVar9 * *(float*)( param_2 + 0x20 );
      local_88 = CONCAT44(*(float*)( param_2 + 0x10 ) * fVar6 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) * fVar5 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * fVar9, *(float*)( param_2 + 4 ) * fVar6 + (float)*(undefined8*)param_2 * fVar5 + (float)*(undefined8*)( param_2 + 8 ) * fVar9);
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_5);
      if (( uint )(iVar3 * -0x5b05b05b) >> 1 < 0x2d82d83) {
         local_80 = fVar5 * *(float*)( param_2 + 0x18 ) + fVar8 * *(float*)( param_2 + 0x1c ) + fVar7 * *(float*)( param_2 + 0x20 );
         local_88 = CONCAT44(*(float*)( param_2 + 0x10 ) * fVar8 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) * fVar5 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * fVar7, *(float*)( param_2 + 4 ) * fVar8 + (float)*(undefined8*)param_2 * fVar5 + (float)*(undefined8*)( param_2 + 8 ) * fVar7);
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_5);
         local_80 = *(float*)( param_2 + 0x18 ) * 0.0 + *(float*)( param_2 + 0x1c ) * 0.0 + *(float*)( param_2 + 0x20 ) * 0.0;
         local_88 = CONCAT44(*(float*)( param_2 + 0x10 ) * 0.0 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) * 0.0 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * 0.0, *(float*)( param_2 + 4 ) * 0.0 + (float)*(undefined8*)param_2 * 0.0 + (float)*(undefined8*)( param_2 + 8 ) * 0.0);
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_5);
      }
      if (iVar3 == 0x15e) break;
      iVar3 = iVar3 + 10;
      sincosf(_LC59 * (float)iVar3, &local_8c, &local_90);
      fVar8 = local_8c;
      fVar7 = local_90;
      sincosf(_LC59 * ( (float)iVar3 + __LC60 ), &local_8c, &local_90);
      fVar6 = local_8c;
      fVar9 = local_90;
   };
   local_80 = *(float*)( param_2 + 0x20 ) * 0.0 + *(float*)( param_2 + 0x18 ) * 0.0 + *(float*)( param_2 + 0x1c ) * 0.0;
   local_88 = CONCAT44(*(float*)( param_2 + 0x10 ) * 0.0 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) * 0.0 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * 0.0, *(float*)( param_2 + 4 ) * 0.0 + (float)*(undefined8*)param_2 * 0.0 + (float)*(undefined8*)( param_2 + 8 ) * 0.0);
   Transform3D::translated_local(local_78);
   Vector<Vector3>::push_back(local_54, local_4c, param_5);
   local_80 = *(float*)( param_2 + 0x1c ) * 0.0 + *(float*)( param_2 + 0x18 ) + *(float*)( param_2 + 0x20 ) * 0.0;
   local_88 = CONCAT44(*(float*)( param_2 + 0x10 ) * 0.0 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * 0.0, *(float*)( param_2 + 4 ) * 0.0 + (float)*(undefined8*)param_2 + (float)*(undefined8*)( param_2 + 8 ) * 0.0);
   Transform3D::translated_local(local_78);
   Vector<Vector3>::push_back(local_54, local_4c, param_5);
   if (_LC62 <= param_4 * __LC61) {
      iVar3 = 0x2d0;
   } else {
      iVar3 = (int)( param_4 * __LC61 );
      if (iVar3 < 1) goto LAB_001026cb;
   }
   fVar5 = 0.0;
   iVar4 = 0;
   local_d8 = 0.0;
   fVar6 = _LC58;
   fVar7 = _LC57;
   fVar9 = _LC15;
   while (true) {
      uVar1 = *(undefined8*)( param_2 + 8 );
      iVar4 = iVar4 + 5;
      fVar10 = (float)( local_d8 / __LC63 );
      fVar8 = (float)( (double)iVar4 / __LC63 );
      fVar5 = fVar5 * fVar2 * fVar10;
      fVar9 = fVar9 * fVar2 * fVar10;
      fVar6 = fVar6 * fVar2 * fVar8;
      fVar7 = fVar7 * fVar2 * fVar8;
      local_80 = *(float*)( param_2 + 0x18 ) * fVar10 + *(float*)( param_2 + 0x1c ) * fVar5 + *(float*)( param_2 + 0x20 ) * fVar9;
      local_88 = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) * fVar10 + *(float*)( param_2 + 0x10 ) * fVar5 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * fVar9, (float)*(undefined8*)param_2 * fVar10 + *(float*)( param_2 + 4 ) * fVar5 + (float)uVar1 * fVar9);
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_5);
      local_80 = fVar8 * *(float*)( param_2 + 0x18 ) + fVar7 * *(float*)( param_2 + 0x1c ) + fVar6 * *(float*)( param_2 + 0x20 );
      uVar1 = *(undefined8*)( param_2 + 8 );
      local_88 = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) * fVar8 + *(float*)( param_2 + 0x10 ) * fVar7 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * fVar6, (float)*(undefined8*)param_2 * fVar8 + *(float*)( param_2 + 4 ) * fVar7 + (float)uVar1 * fVar6);
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_5);
      if (iVar3 <= iVar4) break;
      sincosf(_LC59 * (float)iVar4, &local_8c, &local_90);
      fVar5 = local_8c;
      fVar9 = local_90;
      sincosf(_LC59 * ( (float)iVar4 + __LC64 ), &local_8c, &local_90);
      fVar6 = local_90;
      fVar7 = local_8c;
      local_d8 = (double)iVar4;
   };
   LAB_001026cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Joint3DGizmoPlugin::CreateConeTwistJointGizmo(Transform3D const&, Transform3D const&, Transform3D
   const&, Transform3D const&, float, float, Vector<Vector3>*, Vector<Vector3>*) */void Joint3DGizmoPlugin::CreateConeTwistJointGizmo(Transform3D *param_1, Transform3D *param_2, Transform3D *param_3, Transform3D *param_4, float param_5, float param_6, Vector *param_7, Vector *param_8) {
   long in_FS_OFFSET;
   JointGizmosDrawer local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_7 != (Vector*)0x0) {
      JointGizmosDrawer::look_body(local_68, param_2, param_3);
      JointGizmosDrawer::draw_cone(param_1, (Basis*)local_68, param_5, param_6, param_7);
   }
   if (param_8 != (Vector*)0x0) {
      JointGizmosDrawer::look_body(local_68, param_2, param_4);
      JointGizmosDrawer::draw_cone(param_1, (Basis*)local_68, param_5, param_6, param_8);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JointGizmosDrawer::draw_circle(Vector3::Axis, float, Transform3D const&, Basis const&, float,
   float, Vector<Vector3>&, bool) */void JointGizmosDrawer::draw_circle(float param_1, float param_2, float param_3, int param_4, undefined8 param_5, undefined8 *param_6, undefined8 param_7, char param_8) {
   float fVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float local_b0;
   float local_ac;
   undefined8 local_a8;
   float local_a0;
   undefined8 local_98;
   float local_90;
   long local_88;
   float local_80;
   Vector3 local_78[36];
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (NAN(param_2) || NAN(param_3)) {
      LAB_00102e88:fVar9 = param_2;
      fVar13 = param_3 - param_2;
   } else {
      if (param_2 == param_3) {
         local_88 = 0;
         local_80 = 0.0;
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_7);
         local_80 = (float)_LC67 * *(float*)( param_6 + 3 ) + *(float*)( (long)param_6 + 0x1c ) * 0.0 + *(float*)( param_6 + 4 ) * 0.0;
         local_88 = CONCAT44((float)param_6[2] * _LC67._4_4_ + (float)( (ulong)param_6[1] >> 0x20 ) * _LC69._4_4_ + (float)( (ulong)param_6[2] >> 0x20 ) * 0.0, (float)*param_6 * (float)_LC67 + (float)( ( ulong ) * param_6 >> 0x20 ) * (float)_LC69 + (float)param_6[1] * 0.0);
         goto LAB_00102e3c;
      }
      fVar9 = _LC66;
      fVar13 = _LC65;
      if (param_2 <= param_3) goto LAB_00102e88;
   }
   iVar4 = 0;
   while (true) {
      iVar3 = iVar4 + 1;
      local_a8 = 0;
      local_a0 = 0.0;
      local_98 = 0;
      local_90 = 0.0;
      fVar6 = (float)iVar3 * fVar13 * __LC70 + fVar9;
      fVar10 = (float)iVar4 * fVar13 * __LC70 + fVar9;
      if (param_4 == 1) {
         sincosf(fVar10, &local_ac, &local_b0);
         fVar12 = local_ac;
         fVar1 = local_b0;
         sincosf(fVar6, &local_ac, &local_b0);
         fVar10 = *(float*)( param_6 + 1 );
         fVar8 = *(float*)( (long)param_6 + 0x1c ) * 0.0;
         fVar7 = *(float*)( (long)param_6 + 4 ) * 0.0;
         fVar6 = (float)( (ulong)param_6[2] >> 0x20 );
         fVar11 = fVar1 * (float)*param_6 + fVar7;
         fVar5 = fVar1 * *(float*)( (long)param_6 + 0xc ) + *(float*)( param_6 + 2 ) * 0.0;
         if (param_8 == '\0') {
            local_a8 = CONCAT44(( fVar5 + fVar12 * fVar6 ) * param_1, ( fVar11 + fVar12 * fVar10 ) * param_1);
            fVar11 = local_ac;
         } else {
            fVar12 = (float)( (uint)fVar12 ^ _LC71 );
            local_a8 = CONCAT44(( fVar5 + fVar12 * fVar6 ) * param_1, ( fVar11 + fVar12 * fVar10 ) * param_1);
            fVar11 = (float)( (uint)local_ac ^ _LC71 );
         }
         local_a0 = ( fVar12 * *(float*)( param_6 + 4 ) + *(float*)( param_6 + 3 ) * fVar1 + fVar8 ) * param_1;
         local_90 = ( fVar11 * *(float*)( param_6 + 4 ) + local_b0 * *(float*)( param_6 + 3 ) + fVar8 ) * param_1;
         local_98 = CONCAT44(( fVar6 * fVar11 + local_b0 * *(float*)( (long)param_6 + 0xc ) + *(float*)( param_6 + 2 ) * 0.0 ) * param_1, ( fVar10 * fVar11 + local_b0 * (float)*param_6 + fVar7 ) * param_1);
      } else if (param_4 == 2) {
         fVar7 = sinf(fVar10);
         fVar8 = cosf(fVar10);
         uVar2 = *param_6;
         fVar10 = *(float*)( (long)param_6 + 4 );
         fVar12 = *(float*)( param_6 + 3 );
         fVar1 = *(float*)( (long)param_6 + 0x1c );
         fVar11 = *(float*)( param_6 + 4 );
         fVar17 = (float)( (ulong)param_6[1] >> 0x20 );
         fVar5 = *(float*)( param_6 + 2 );
         fVar14 = (float)param_6[1] * 0.0;
         fVar15 = (float)( (ulong)param_6[2] >> 0x20 ) * 0.0;
         local_a0 = ( fVar8 * fVar12 + fVar7 * fVar1 + fVar11 * 0.0 ) * param_1;
         local_a8 = CONCAT44(( fVar7 * fVar5 + fVar8 * fVar17 + fVar15 ) * param_1, ( fVar7 * fVar10 + fVar8 * (float)uVar2 + fVar14 ) * param_1);
         fVar7 = sinf(fVar6);
         fVar6 = cosf(fVar6);
         local_90 = ( fVar6 * fVar12 + fVar7 * fVar1 + fVar11 * 0.0 ) * param_1;
         local_98 = CONCAT44(( fVar6 * fVar17 + fVar7 * fVar5 + fVar15 ) * param_1, ( fVar6 * (float)uVar2 + fVar7 * fVar10 + fVar14 ) * param_1);
      } else if (param_4 == 0) {
         fVar5 = cosf(fVar6);
         fVar12 = *(float*)( param_6 + 4 );
         uVar2 = param_6[1];
         fVar18 = fVar5 * fVar12;
         fVar19 = *(float*)( param_6 + 3 ) * 0.0;
         fVar17 = (float)uVar2;
         fVar1 = (float)( (ulong)param_6[2] >> 0x20 );
         fVar16 = fVar5 * fVar17;
         fVar5 = fVar5 * fVar1;
         fVar7 = cosf(fVar10);
         fVar12 = fVar12 * fVar7;
         fVar17 = fVar7 * fVar17;
         fVar7 = fVar7 * fVar1;
         fVar14 = (float)*param_6 * 0.0;
         fVar15 = (float)( (ulong)uVar2 >> 0x20 ) * 0.0;
         fVar8 = sinf(fVar6);
         fVar6 = *(float*)( (long)param_6 + 4 );
         fVar1 = *(float*)( param_6 + 2 );
         fVar11 = *(float*)( (long)param_6 + 0x1c );
         fVar10 = sinf(fVar10);
         if (param_8 == '\0') {
            fVar10 = (float)( (uint)fVar10 ^ _LC71 );
            fVar8 = (float)( (uint)fVar8 ^ _LC71 );
            local_a8 = CONCAT44(( fVar10 * fVar1 + fVar15 + fVar7 ) * param_1, ( fVar10 * fVar6 + fVar14 + fVar17 ) * param_1);
            local_a0 = ( fVar10 * fVar11 + fVar19 + fVar12 ) * param_1;
            local_90 = ( fVar8 * fVar11 + fVar19 + fVar18 ) * param_1;
            local_98 = CONCAT44(( fVar5 + fVar8 * fVar1 + fVar15 ) * param_1, ( fVar16 + fVar8 * fVar6 + fVar14 ) * param_1);
         } else {
            local_a0 = ( fVar10 * fVar11 + fVar19 + fVar12 ) * param_1;
            local_a8 = CONCAT44(( fVar10 * fVar1 + fVar15 + fVar7 ) * param_1, ( fVar10 * fVar6 + fVar14 + fVar17 ) * param_1);
            local_90 = ( fVar11 * fVar8 + fVar19 + fVar18 ) * param_1;
            local_98 = CONCAT44(( fVar5 + fVar8 * fVar1 + fVar15 ) * param_1, ( fVar16 + fVar8 * fVar6 + fVar14 ) * param_1);
         }
      }
      if (iVar3 == 0x20) break;
      if (iVar4 == 0) {
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_7);
         local_88 = 0;
         local_80 = 0.0;
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_7);
      }
      for (int i_801 = 0; i_801 < 2; i_801++) {
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_7);
      }
      iVar4 = iVar3;
   };
   Transform3D::translated_local(local_78);
   Vector<Vector3>::push_back(local_54, local_4c, param_7);
   local_88 = 0;
   local_80 = 0.0;
   for (int i_800 = 0; i_800 < 3; i_800++) {
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_7);
   }
   local_80 = 0.0;
   local_88 = ( ulong )(uint)(param_1 * __LC72) << 0x20;
   Transform3D::translated_local(local_78);
   Vector<Vector3>::push_back(local_54, local_4c, param_7);
   local_88 = 0;
   local_80 = 0.0;
   LAB_00102e3c:Transform3D::translated_local(local_78);
   Vector<Vector3>::push_back(local_54, local_4c, param_7);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Joint3DGizmoPlugin::CreateHingeJointGizmo(Transform3D const&, Transform3D const&, Transform3D
   const&, Transform3D const&, float, float, bool, Vector<Vector3>&, Vector<Vector3>*,
   Vector<Vector3>*) */void Joint3DGizmoPlugin::CreateHingeJointGizmo(Transform3D *param_1, Transform3D *param_2, Transform3D *param_3, Transform3D *param_4, float param_5, float param_6, bool param_7, Vector *param_8, Vector *param_9, Vector *param_10) {
   long in_FS_OFFSET;
   JointGizmosDrawer local_78[36];
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i_802 = 0; i_802 < 2; i_802++) {
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_8);
   }
   if (param_9 != (Vector*)0x0) {
      JointGizmosDrawer::look_body_toward_z(local_78, param_2, param_3);
      JointGizmosDrawer::draw_circle(2, param_1, local_78, param_9, 0);
   }
   if (param_10 != (Vector*)0x0) {
      JointGizmosDrawer::look_body_toward_z(local_78, param_2, param_4);
      JointGizmosDrawer::draw_circle(2, param_1, local_78, param_10, 0);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Joint3DGizmoPlugin::CreateSliderJointGizmo(Transform3D const&, Transform3D const&, Transform3D
   const&, Transform3D const&, float, float, float, float, Vector<Vector3>&, Vector<Vector3>*,
   Vector<Vector3>*) */void Joint3DGizmoPlugin::CreateSliderJointGizmo(Transform3D *param_1, Transform3D *param_2, Transform3D *param_3, Transform3D *param_4, float param_5, float param_6, float param_7, float param_8, Vector *param_9, Vector *param_10, Vector *param_11) {
   long in_FS_OFFSET;
   JointGizmosDrawer local_78[36];
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i_803 = 0; i_803 < 2; i_803++) {
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_9);
   }
   if (param_8 < param_7) {
      Transform3D::translated_local(local_78);
      Vector<Vector3>::push_back(local_54, local_4c, param_9);
   } else {
      for (int i_804 = 0; i_804 < 17; i_804++) {
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_9);
      }
   }
   Transform3D::translated_local(local_78);
   Vector<Vector3>::push_back(local_54, local_4c, param_9);
   if (param_10 != (Vector*)0x0) {
      JointGizmosDrawer::look_body_toward_x(local_78, param_2, param_3);
      JointGizmosDrawer::draw_circle(0, param_1, local_78, param_10, 0);
   }
   if (param_11 != (Vector*)0x0) {
      JointGizmosDrawer::look_body_toward_x(local_78, param_2, param_4);
      JointGizmosDrawer::draw_circle(0, param_1, local_78, param_11, 1);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Joint3DGizmoPlugin::CreateGeneric6DOFJointGizmo(Transform3D const&, Transform3D const&,
   Transform3D const&, Transform3D const&, float, float, float, float, bool, bool, float, float,
   float, float, bool, bool, float, float, float, float, bool, bool, Vector<Vector3>&,
   Vector<Vector3>*, Vector<Vector3>*) */void Joint3DGizmoPlugin::CreateGeneric6DOFJointGizmo(Transform3D *param_1, Transform3D *param_2, Transform3D *param_3, Transform3D *param_4, float param_5, float param_6, float param_7, float param_8, bool param_9, bool param_10, float param_11, float param_12, float param_13, float param_14, bool param_15, bool param_16, float param_17, float param_18, float param_19, float param_20, bool param_21, bool param_22, Vector *param_23, Vector *param_24, Vector *param_25) {
   int iVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   float fVar4;
   float local_dc;
   int local_d8;
   float local_84[3];
   JointGizmosDrawer local_78[36];
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   lVar3 = 2;
   lVar2 = 1;
   iVar1 = 0;
   local_dc = (float)( (uint)param_7 ^ _LC71 );
   fVar4 = (float)( (uint)param_8 ^ _LC71 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d8 = 0;
   LAB_00103ad7:if (( param_10 != false ) && ( fVar4 <= local_dc )) goto LAB_00103cdf;
   do {
      for (int i_805 = 0; i_805 < 2; i_805++) {
         local_84[0] = 0;
         local_84[1] = 0;
         local_84[2] = 0;
         local_84[iVar1] = 0;
         local_84[lVar2] = 0;
         local_84[lVar3] = 0;
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_23);
      }
      while (true) {
         if (param_24 != (Vector*)0x0) {
            JointGizmosDrawer::look_body_toward(local_78, local_d8, param_2, param_3);
            JointGizmosDrawer::draw_circle(local_d8, param_1, local_78, param_24, 1);
         }
         if (param_25 != (Vector*)0x0) {
            JointGizmosDrawer::look_body_toward(local_78, local_d8, param_2, param_4);
            JointGizmosDrawer::draw_circle(local_d8, param_1, local_78, param_25, 0);
         }
         if (local_d8 == 2) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         if (local_d8 == 0) {
            local_dc = (float)( (uint)param_13 ^ _LC71 );
            local_d8 = 1;
            lVar3 = 0;
            lVar2 = 2;
            fVar4 = (float)( (uint)param_14 ^ _LC71 );
            iVar1 = 1;
            param_10 = param_16;
            goto LAB_00103ad7;
         }
         lVar2 = 0;
         local_d8 = 2;
         local_dc = (float)( (uint)param_19 ^ _LC71 );
         lVar3 = 1;
         iVar1 = 2;
         fVar4 = (float)( (uint)param_20 ^ _LC71 );
         if (( !param_22 ) || ( local_dc < fVar4 )) break;
         LAB_00103cdf:local_84[0] = 0.0;
         local_84[1] = 0.0;
         local_84[2] = 0.0;
         local_84[iVar1] = fVar4;
         local_84[lVar2] = 0.0;
         local_84[lVar3] = 0.0;
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_23);
         local_84[2] = 0.0;
         local_84[0] = 0.0;
         local_84[1] = 0.0;
         local_84[iVar1] = local_dc;
         for (int i_808 = 0; i_808 < 2; i_808++) {
            for (int i_806 = 0; i_806 < 8; i_806++) {
               local_84[lVar2] = 0;
               local_84[lVar3] = 0;
               Transform3D::translated_local(local_78);
               Vector<Vector3>::push_back(local_54, local_4c, param_23);
               local_84[2] = 0;
               local_84[0] = 0;
               local_84[1] = 0;
               local_84[iVar1] = fVar4;
            }
         }
         local_84[lVar2] = -0.25;
         local_84[lVar3] = -0.25;
         Transform3D::translated_local(local_78);
         Vector<Vector3>::push_back(local_54, local_4c, param_23);
      };
   } while ( true );
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Joint3DGizmoPlugin::redraw(EditorNode3DGizmo*) */void Joint3DGizmoPlugin::redraw(Joint3DGizmoPlugin *this, EditorNode3DGizmo *param_1) {
   long *plVar1;
   Vector *pVVar2;
   uint uVar3;
   EditorNode3DGizmo *pEVar4;
   char cVar5;
   undefined1 uVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   bool bVar11;
   bool bVar12;
   NodePath *pNVar13;
   Object *pOVar14;
   long lVar15;
   Vector *pVVar16;
   ulong uVar17;
   long in_FS_OFFSET;
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
   float fVar29;
   ulong local_208;
   ulong local_1f8;
   Transform3D *local_1f0;
   Vector *local_1e8;
   Ref *local_1b8;
   float local_1a8;
   Ref *local_198;
   uint local_190;
   float local_18c;
   Object *local_150;
   Object *local_148;
   Object *local_140;
   undefined8 local_138;
   long local_130;
   EditorNode3DGizmo *local_128;
   long local_120;
   Object *local_118;
   long local_110;
   ulong local_108;
   undefined8 uStack_100;
   ulong local_f8;
   undefined8 uStack_f0;
   uint local_e8;
   undefined8 local_e4;
   undefined4 local_dc;
   Transform3D local_d8[48];
   Transform3D local_a8[16];
   undefined1 local_98[16];
   uint local_88;
   undefined8 local_84;
   undefined4 local_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   uint local_58;
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   pNVar13 = *(NodePath**)( param_1 + 0x1f0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pNVar13 != (NodePath*)0x0) {
      pNVar13 = (NodePath*)__dynamic_cast(pNVar13, &Object::typeinfo, &Joint3D::typeinfo, 0);
   }
   ( **(code**)( *(long*)param_1 + 0x160 ) )(param_1);
   Joint3D::get_node_a();
   cVar5 = NodePath::is_empty();
   NodePath::~NodePath((NodePath*)&local_118);
   if (cVar5 == '\0') {
      Joint3D::get_node_a();
      lVar15 = Node::get_node(pNVar13);
      if (lVar15 == 0) {
         NodePath::~NodePath((NodePath*)&local_118);
         goto LAB_00104439;
      }
      uVar17 = __dynamic_cast(lVar15, &Object::typeinfo, &Node3D::typeinfo, 0);
      NodePath::~NodePath((NodePath*)&local_118);
      Joint3D::get_node_b();
      cVar5 = NodePath::is_empty();
      NodePath::~NodePath((NodePath*)&local_118);
      local_1f8 = 0;
      local_208 = uVar17;
      if (cVar5 == '\0') goto LAB_0010448c;
   } else {
      LAB_00104439:Joint3D::get_node_b();
      cVar5 = NodePath::is_empty();
      NodePath::~NodePath((NodePath*)&local_118);
      if (cVar5 != '\0') goto LAB_00104456;
      local_208 = 0;
      LAB_0010448c:Joint3D::get_node_b();
      local_1f8 = Node::get_node(pNVar13);
      uVar17 = local_208;
      if (local_1f8 != 0) {
         local_1f8 = __dynamic_cast(local_1f8, &Object::typeinfo, &Node3D::typeinfo, 0);
         uVar17 = local_208 | local_1f8;
      }
      NodePath::~NodePath((NodePath*)&local_118);
   }
   if (uVar17 == 0) goto LAB_00104456;
   local_128 = param_1;
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      local_128 = (EditorNode3DGizmo*)0x0;
   }
   local_138 = 0;
   local_118 = (Object*)0x1062e3;
   local_110 = 0xe;
   String::parse_latin1((StrRange*)&local_138);
   EditorNode3DGizmoPlugin::get_material((String*)&local_118, (Ref*)this);
   local_150 = (Object*)0x0;
   if (local_118 != (Object*)0x0) {
      pOVar14 = (Object*)__dynamic_cast(local_118, &Object::typeinfo, &Material::typeinfo, 0);
      if (pOVar14 != (Object*)0x0) {
         local_150 = pOVar14;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            local_150 = (Object*)0x0;
         }
         if (local_118 == (Object*)0x0) goto LAB_001045d2;
      }
      cVar5 = RefCounted::unreference();
      pOVar14 = local_118;
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(local_118) ),cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
         Memory::free_static(pOVar14, false);
      }
   }
   LAB_001045d2:CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( ( local_128 != (EditorNode3DGizmo*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pEVar4 = local_128,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pEVar4 + 0x140 ))(pEVar4);
   Memory::free_static(pEVar4, false);
}local_128 = param_1;cVar5 = RefCounted::init_ref();if (cVar5 == '\0') {
   local_128 = (EditorNode3DGizmo*)0x0;
}local_138 = 0;local_118 = (Object*)0x1062f2;local_110 = 0x15;String::parse_latin1((StrRange*)&local_138);EditorNode3DGizmoPlugin::get_material((String*)&local_118, (Ref*)this);local_148 = (Object*)0x0;if (local_118 != (Object*)0x0) {
   pOVar14 = (Object*)__dynamic_cast(local_118, &Object::typeinfo, &Material::typeinfo, 0);
   if (pOVar14 != (Object*)0x0) {
      local_148 = pOVar14;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         local_148 = (Object*)0x0;
      }
      if (local_118 == (Object*)0x0) goto LAB_001046c9;
   }
   cVar5 = RefCounted::unreference();
   pOVar14 = local_118;
   if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(local_118) ),cVar5 != '\0') {
      ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
      Memory::free_static(pOVar14, false);
   }
}LAB_001046c9:CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);if (( ( local_128 != (EditorNode3DGizmo*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pEVar4 = local_128,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pEVar4 + 0x140 ))(pEVar4);Memory::free_static(pEVar4, false);}local_128 = param_1;cVar5 = RefCounted::init_ref();if (cVar5 == '\0') {
   local_128 = (EditorNode3DGizmo*)0x0;
}local_138 = 0;local_118 = (Object*)0x106308;local_110 = 0x15;String::parse_latin1((StrRange*)&local_138);EditorNode3DGizmoPlugin::get_material((String*)&local_118, (Ref*)this);local_140 = (Object*)0x0;if (local_118 != (Object*)0x0) {
   pOVar14 = (Object*)__dynamic_cast(local_118, &Object::typeinfo, &Material::typeinfo);
   if (pOVar14 != (Object*)0x0) {
      local_140 = pOVar14;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         local_140 = (Object*)0x0;
      }
      if (local_118 == (Object*)0x0) goto LAB_001047c0;
   }
   cVar5 = RefCounted::unreference();
   pOVar14 = local_118;
   if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(local_118) ),cVar5 != '\0') {
      ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
      Memory::free_static(pOVar14, false);
   }
}LAB_001047c0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);if (( ( local_128 != (EditorNode3DGizmo*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pEVar4 = local_128,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pEVar4 + 0x140 ))(pEVar4);Memory::free_static(pEVar4, false);}local_110 = 0;local_120 = 0;local_130 = 0;lVar15 = __dynamic_cast(pNVar13, &Object::typeinfo, &PinJoint3D::typeinfo);if (lVar15 != 0) {
   local_58 = 0x3f800000;
   local_78 = ZEXT416(_LC15);
   local_68 = ZEXT416(_LC15);
   local_54 = 0;
   local_4c = 0;
   CreatePinJointGizmo((Transform3D*)local_78, (Vector*)&local_138);
   EditorNode3DGizmo::add_collision_segments((Vector*)param_1);
   local_78._4_4_ = _LC15;
   local_78._0_4_ = _LC15;
   local_78._8_4_ = _LC15;
   local_78._12_4_ = _LC15;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_138, SUB81(&local_150, 0), (Color*)0x0);
}lVar15 = __dynamic_cast(pNVar13, &Object::typeinfo, &HingeJoint3D::typeinfo, 0);local_1b8 = (Ref*)&local_128;if (lVar15 != 0) {
   if (local_1f8 == 0) {
      if (local_208 == 0) {
         uVar6 = HingeJoint3D::get_flag(lVar15, 0);
         fVar18 = (float)HingeJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)HingeJoint3D::get_param(lVar15, 2);
         local_1b8 = (Ref*)0x0;
      } else {
         uVar6 = HingeJoint3D::get_flag(lVar15, 0);
         fVar18 = (float)HingeJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)HingeJoint3D::get_param(lVar15, 2);
      }
      local_58 = _LC15;
      local_54 = 0;
      local_4c = 0;
      local_1e8 = (Vector*)0x0;
      local_78 = ZEXT416(_LC15);
      local_68 = ZEXT416(_LC15);
   } else {
      if (local_208 == 0) {
         uVar6 = HingeJoint3D::get_flag(lVar15, 0);
         fVar18 = (float)HingeJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)HingeJoint3D::get_param(lVar15, 2);
         local_1b8 = (Ref*)0x0;
      } else {
         uVar6 = HingeJoint3D::get_flag(lVar15, 0);
         fVar18 = (float)HingeJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)HingeJoint3D::get_param(lVar15, 2);
      }
      Node3D::get_global_transform();
      local_1e8 = (Vector*)&local_118;
   }
   uVar3 = _LC15;
   if (local_208 == 0) {
      local_88 = _LC15;
      local_84 = 0;
      local_7c = 0;
      local_a8 = (Transform3D[16])ZEXT416(_LC15);
      local_98 = ZEXT416(_LC15);
   } else {
      Node3D::get_global_transform();
   }
   local_1f0 = local_a8;
   Node3D::get_global_transform();
   local_108 = (ulong)uVar3;
   uStack_100 = 0;
   local_e4 = 0;
   local_e8 = uVar3;
   local_dc = 0;
   local_f8 = local_108;
   uStack_f0 = uStack_100;
   CreateHingeJointGizmo((Transform3D*)&local_108, local_d8, local_1f0, (Transform3D*)local_78, local_1a8, fVar18, (bool)uVar6, (Vector*)&local_138, (Vector*)local_1b8, local_1e8);
   for (int i_809 = 0; i_809 < 3; i_809++) {
      EditorNode3DGizmo::add_collision_segments((Vector*)param_1);
   }
   local_78._4_4_ = _LC15;
   local_78._0_4_ = _LC15;
   local_78._8_4_ = _LC15;
   local_78._12_4_ = _LC15;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_138, SUB81(&local_150, 0), (Color*)0x0);
   local_78._0_8_ = __LC77;
   local_78._8_8_ = _UNK_001092a8;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_128, SUB81(&local_148, 0), (Color*)0x0);
   local_78._8_8_ = _UNK_001092a8;
   local_78._0_8_ = __LC77;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_118, SUB81(&local_140, 0), (Color*)0x0);
}lVar15 = __dynamic_cast(pNVar13, &Object::typeinfo, &SliderJoint3D::typeinfo, 0);if (lVar15 != 0) {
   local_198 = (Ref*)&local_128;
   if (local_1f8 == 0) {
      if (local_208 == 0) {
         fVar18 = (float)SliderJoint3D::get_param(lVar15, 0);
         fVar19 = (float)SliderJoint3D::get_param(lVar15, 1);
         fVar20 = (float)SliderJoint3D::get_param(lVar15, 0xb);
         local_18c = (float)SliderJoint3D::get_param(lVar15, 0xc);
         local_198 = (Ref*)0x0;
      } else {
         fVar18 = (float)SliderJoint3D::get_param(lVar15, 0);
         fVar19 = (float)SliderJoint3D::get_param(lVar15, 1);
         fVar20 = (float)SliderJoint3D::get_param(lVar15, 0xb);
         local_18c = (float)SliderJoint3D::get_param(lVar15, 0xc);
      }
      local_58 = _LC15;
      local_54 = 0;
      local_4c = 0;
      local_1e8 = (Vector*)0x0;
      local_78 = ZEXT416(_LC15);
      local_68 = ZEXT416(_LC15);
   } else {
      if (local_208 == 0) {
         fVar18 = (float)SliderJoint3D::get_param(lVar15, 0);
         fVar19 = (float)SliderJoint3D::get_param(lVar15, 1);
         fVar20 = (float)SliderJoint3D::get_param(lVar15, 0xb);
         local_18c = (float)SliderJoint3D::get_param(lVar15, 0xc);
         local_198 = (Ref*)0x0;
      } else {
         fVar18 = (float)SliderJoint3D::get_param(lVar15, 0);
         fVar19 = (float)SliderJoint3D::get_param(lVar15, 1);
         fVar20 = (float)SliderJoint3D::get_param(lVar15, 0xb);
         local_18c = (float)SliderJoint3D::get_param(lVar15, 0xc);
      }
      Node3D::get_global_transform();
      local_1e8 = (Vector*)&local_118;
   }
   uVar3 = _LC15;
   if (local_208 == 0) {
      local_88 = _LC15;
      local_84 = 0;
      local_7c = 0;
      local_a8 = (Transform3D[16])ZEXT416(_LC15);
      local_98 = ZEXT416(_LC15);
   } else {
      Node3D::get_global_transform();
   }
   local_1f0 = local_a8;
   Node3D::get_global_transform();
   local_108 = (ulong)uVar3;
   uStack_100 = 0;
   local_e4 = 0;
   local_e8 = uVar3;
   local_dc = 0;
   local_f8 = local_108;
   uStack_f0 = uStack_100;
   CreateSliderJointGizmo((Transform3D*)&local_108, local_d8, local_1f0, (Transform3D*)local_78, local_18c, fVar20, fVar19, fVar18, (Vector*)&local_138, (Vector*)local_198, local_1e8);
   for (int i_810 = 0; i_810 < 3; i_810++) {
      EditorNode3DGizmo::add_collision_segments((Vector*)param_1);
   }
   local_78._4_4_ = _LC15;
   local_78._0_4_ = _LC15;
   local_78._8_4_ = _LC15;
   local_78._12_4_ = _LC15;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_138, SUB81(&local_150, 0), (Color*)0x0);
   local_78._0_8_ = __LC77;
   local_78._8_8_ = _UNK_001092a8;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_128, SUB81(&local_148, 0), (Color*)0x0);
   local_78._8_8_ = _UNK_001092a8;
   local_78._0_8_ = __LC77;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_118, SUB81(&local_140, 0), (Color*)0x0);
}lVar15 = __dynamic_cast(pNVar13, &Object::typeinfo, &ConeTwistJoint3D::typeinfo, 0);if (lVar15 != 0) {
   if (local_1f8 == 0) {
      if (local_208 == 0) {
         fVar18 = (float)ConeTwistJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)ConeTwistJoint3D::get_param(lVar15, 0);
         local_1b8 = (Ref*)0x0;
      } else {
         fVar18 = (float)ConeTwistJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)ConeTwistJoint3D::get_param(lVar15, 0);
         local_1b8 = (Ref*)&local_128;
      }
      local_58 = _LC15;
      local_54 = 0;
      local_4c = 0;
      local_1e8 = (Vector*)0x0;
      local_78 = ZEXT416(_LC15);
      local_68 = ZEXT416(_LC15);
   } else {
      if (local_208 == 0) {
         fVar18 = (float)ConeTwistJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)ConeTwistJoint3D::get_param(lVar15, 0);
         local_1b8 = (Ref*)0x0;
      } else {
         fVar18 = (float)ConeTwistJoint3D::get_param(lVar15, 1);
         local_1a8 = (float)ConeTwistJoint3D::get_param(lVar15, 0);
         local_1b8 = (Ref*)&local_128;
      }
      Node3D::get_global_transform();
      local_1e8 = (Vector*)&local_118;
   }
   uVar3 = _LC15;
   if (local_208 == 0) {
      local_88 = _LC15;
      local_84 = 0;
      local_7c = 0;
      local_a8 = (Transform3D[16])ZEXT416(_LC15);
      local_98 = ZEXT416(_LC15);
   } else {
      Node3D::get_global_transform();
   }
   local_1f0 = local_a8;
   Node3D::get_global_transform();
   local_108 = (ulong)uVar3;
   uStack_100 = 0;
   local_e4 = 0;
   local_e8 = uVar3;
   local_dc = 0;
   local_f8 = local_108;
   uStack_f0 = uStack_100;
   CreateConeTwistJointGizmo((Transform3D*)&local_108, local_d8, local_1f0, (Transform3D*)local_78, local_1a8, fVar18, (Vector*)local_1b8, local_1e8);
   for (int i_811 = 0; i_811 < 2; i_811++) {
      EditorNode3DGizmo::add_collision_segments((Vector*)param_1);
   }
   local_78._4_4_ = _LC15;
   local_78._0_4_ = _LC15;
   local_78._8_4_ = _LC15;
   local_78._12_4_ = _LC15;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_128, SUB81(&local_148, 0), (Color*)0x0);
   local_78._8_8_ = _UNK_001092a8;
   local_78._0_8_ = __LC77;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_118, SUB81(&local_140, 0), (Color*)0x0);
}lVar15 = __dynamic_cast(pNVar13, &Object::typeinfo, &Generic6DOFJoint3D::typeinfo, 0);if (lVar15 != 0) {
   pVVar16 = (Vector*)0x0;
   pVVar2 = (Vector*)0x0;
   if (local_208 != 0) {
      pVVar16 = (Vector*)&local_118;
      pVVar2 = (Vector*)&local_128;
   }
   bVar7 = (bool)Generic6DOFJoint3D::get_flag_z(lVar15, 0);
   bVar8 = (bool)Generic6DOFJoint3D::get_flag_z(lVar15, 1);
   fVar18 = (float)Generic6DOFJoint3D::get_param_z(lVar15, 1);
   fVar19 = (float)Generic6DOFJoint3D::get_param_z(lVar15, 0);
   fVar20 = (float)Generic6DOFJoint3D::get_param_z(lVar15, 0xb);
   fVar21 = (float)Generic6DOFJoint3D::get_param_z(lVar15, 10);
   bVar9 = (bool)Generic6DOFJoint3D::get_flag_y(lVar15, 0);
   bVar10 = (bool)Generic6DOFJoint3D::get_flag_y(lVar15, 1);
   fVar22 = (float)Generic6DOFJoint3D::get_param_y(lVar15, 1);
   fVar23 = (float)Generic6DOFJoint3D::get_param_y(lVar15, 0);
   fVar24 = (float)Generic6DOFJoint3D::get_param_y(lVar15, 0xb);
   fVar25 = (float)Generic6DOFJoint3D::get_param_y(lVar15, 10);
   bVar11 = (bool)Generic6DOFJoint3D::get_flag_x(lVar15, 0);
   bVar12 = (bool)Generic6DOFJoint3D::get_flag_x(lVar15, 1);
   fVar26 = (float)Generic6DOFJoint3D::get_param_x(lVar15, 1);
   fVar27 = (float)Generic6DOFJoint3D::get_param_x(lVar15, 0);
   fVar28 = (float)Generic6DOFJoint3D::get_param_x(lVar15, 0xb);
   fVar29 = (float)Generic6DOFJoint3D::get_param_x(lVar15, 10);
   if (local_1f8 == 0) {
      local_58 = _LC15;
      local_54 = 0;
      local_78 = ZEXT416(_LC15);
      local_4c = 0;
      local_68 = ZEXT416(_LC15);
      if (local_208 == 0) goto LAB_0010556f;
      LAB_00105170:local_190 = _LC15;
      Node3D::get_global_transform();
   } else {
      Node3D::get_global_transform();
      if (local_208 != 0) goto LAB_00105170;
      LAB_0010556f:local_88 = _LC15;
      local_84 = 0;
      local_7c = 0;
      local_a8 = (Transform3D[16])ZEXT416(_LC15);
      local_98 = ZEXT416(_LC15);
      local_190 = _LC15;
   }
   local_1f0 = local_a8;
   local_208 = (ulong)local_190;
   Node3D::get_global_transform();
   local_e4 = 0;
   local_108 = local_208;
   uStack_100 = 0;
   local_f8 = local_208;
   uStack_f0 = 0;
   local_e8 = local_190;
   local_dc = 0;
   CreateGeneric6DOFJointGizmo((Transform3D*)&local_108, local_d8, local_1f0, (Transform3D*)local_78, fVar29, fVar28, fVar27, fVar26, bVar12, bVar11, fVar25, fVar24, fVar23, fVar22, bVar10, bVar9, fVar21, fVar20, fVar19, fVar18, bVar8, bVar7, (Vector*)&local_138, pVVar2, pVVar16);
   for (int i_812 = 0; i_812 < 3; i_812++) {
      EditorNode3DGizmo::add_collision_segments((Vector*)param_1);
   }
   local_78._4_4_ = _LC15;
   local_78._0_4_ = _LC15;
   local_78._8_4_ = _LC15;
   local_78._12_4_ = _LC15;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_138, SUB81(&local_150, 0), (Color*)0x0);
   local_78._0_8_ = __LC77;
   local_78._8_8_ = _UNK_001092a8;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_128, SUB81(&local_148, 0), (Color*)0x0);
   local_78._8_8_ = _UNK_001092a8;
   local_78._0_8_ = __LC77;
   EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_118, SUB81(&local_140, 0), (Color*)0x0);
}lVar15 = local_110;if (local_110 != 0) {
   LOCK();
   plVar1 = (long*)( local_110 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void*)( lVar15 + -0x10 ), false);
   }
}lVar15 = local_120;if (local_120 != 0) {
   LOCK();
   plVar1 = (long*)( local_120 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void*)( lVar15 + -0x10 ), false);
   }
}lVar15 = local_130;if (local_130 != 0) {
   LOCK();
   plVar1 = (long*)( local_130 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void*)( lVar15 + -0x10 ), false);
   }
}if (( ( local_140 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar14 = local_140,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);Memory::free_static(pOVar14, false);}if (( ( local_148 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar14 = local_148,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);Memory::free_static(pOVar14, false);}if (( ( local_150 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar14 = local_150,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);Memory::free_static(pOVar14, false);}LAB_00104456:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
}/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}/* Joint3DGizmoPlugin::is_class_ptr(void*) const */uint Joint3DGizmoPlugin::is_class_ptr(Joint3DGizmoPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x1090, (undefined4*)param_1 == &EditorNode3DGizmoPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1090, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1090, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1090, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1090, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* Joint3DGizmoPlugin::_getv(StringName const&, Variant&) const */undefined8 Joint3DGizmoPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* Joint3DGizmoPlugin::_setv(StringName const&, Variant const&) */undefined8 Joint3DGizmoPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* Joint3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */void Joint3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* Joint3DGizmoPlugin::_property_can_revertv(StringName const&) const */undefined8 Joint3DGizmoPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}/* Joint3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 Joint3DGizmoPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* Joint3DGizmoPlugin::_notificationv(int, bool) */void Joint3DGizmoPlugin::_notificationv(int param_1, bool param_2) {
   return;
}/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this) {
   return;
}/* CallableCustomMethodPointer<Joint3DGizmoPlugin, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Joint3DGizmoPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Joint3DGizmoPlugin,void> *this) {
   return;
}/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::get_argument_count(CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}/* CallableCustomMethodPointer<Joint3DGizmoPlugin, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Joint3DGizmoPlugin,void>::get_argument_count(CallableCustomMethodPointer<Joint3DGizmoPlugin,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}/* CallableCustomMethodPointer<Joint3DGizmoPlugin, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Joint3DGizmoPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Joint3DGizmoPlugin,void> *this) {
   operator_delete(this, 0x48);
   return;
}/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this) {
   operator_delete(this, 0x48);
   return;
}/* Joint3DGizmoPlugin::~Joint3DGizmoPlugin() */void Joint3DGizmoPlugin::~Joint3DGizmoPlugin(Joint3DGizmoPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00108d08;
   EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   return;
}/* Joint3DGizmoPlugin::~Joint3DGizmoPlugin() */void Joint3DGizmoPlugin::~Joint3DGizmoPlugin(Joint3DGizmoPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00108d08;
   EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   operator_delete(this, 0x460);
   return;
}/* CallableCustomMethodPointer<Node, void, Node*, bool, Node::InternalMode>::get_object() const */undefined8 CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::get_object(CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010602d;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010602d;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }
   uVar2 = 0;
   LAB_0010602d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* CallableCustomMethodPointer<Joint3DGizmoPlugin, void>::get_object() const */undefined8 CallableCustomMethodPointer<Joint3DGizmoPlugin,void>::get_object(CallableCustomMethodPointer<Joint3DGizmoPlugin,void> *this) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010612d;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010612d;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }
   uVar2 = 0;
   LAB_0010612d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* Joint3DGizmoPlugin::_get_class_namev() const */undefined8 *Joint3DGizmoPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001061f3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001061f3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Joint3DGizmoPlugin");
         goto LAB_0010625e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Joint3DGizmoPlugin");
   LAB_0010625e:return &_get_class_namev();
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
}/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
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
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Joint3DGizmoPlugin::get_class() const */void Joint3DGizmoPlugin::get_class(void) {
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
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_001066b8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001066b8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001066d6;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x001066d6:if (lVar2 == 0) {
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
}/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
      LAB_00106ab8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106ab8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106ad5;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00106ad5:if (lVar2 == 0) {
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
}/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void EditorNode3DGizmoPlugin::_get_property_listv(EditorNode3DGizmoPlugin *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorNode3DGizmoPlugin";
   local_70 = 0x17;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorNode3DGizmoPlugin";
   local_98 = 0;
   local_70 = 0x17;
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
      LAB_00106f18:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106f18;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106f35;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00106f35:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "EditorNode3DGizmoPlugin", false);
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
}/* Joint3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Joint3DGizmoPlugin::_get_property_listv(Joint3DGizmoPlugin *this, List *param_1, bool param_2) {
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
      EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin*)this, param_1, false);
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "Joint3DGizmoPlugin";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Joint3DGizmoPlugin";
   local_98 = 0;
   local_70 = 0x12;
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
      LAB_00107368:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107368;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00107385;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00107385:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "Joint3DGizmoPlugin", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin*)this, param_1, true);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
}/* CallableCustomMethodPointer<Joint3DGizmoPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Joint3DGizmoPlugin,void>::call(CallableCustomMethodPointer<Joint3DGizmoPlugin,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010794f;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010794f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_813 = 0; i_813 < 2; i_813++) {
               /* WARNING: Could not recover jumptable at 0x00107928. Too many branches */
            }
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }
         goto LAB_00107a11;
      }
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010794f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC34, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00107a11:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* CallableCustomMethodPointer<Node, void, Node*, bool, Node::InternalMode>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::call(CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   ulong uVar5;
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
         uVar5 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar5 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }
         UNLOCK();
         if (bVar11) break;
         local_58 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      };
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00107c62;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] == 0) goto LAB_00107c62;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 4) {
         if (param_2 == 3) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }
            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[2], 2);
            uVar3 = _LC35;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 1);
            uVar3 = _LC36;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
            bVar11 = Variant::operator_cast_to_bool(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar4 == '\0') {
               LAB_00107bd0:uVar3 = _LC37;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            } else {
               this_00 = *param_1;
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               pOVar7 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar7 == (Object*)0x0 ) || ( lVar8 = __dynamic_cast(pOVar7, &Object::typeinfo, &Node::typeinfo, 0) ),lVar8 == 0 )) goto LAB_00107bd0;
            }
            pOVar6 = Variant::operator_cast_to_Object_(*param_1);
            if (pOVar6 != (Object*)0x0) {
               pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Node::typeinfo, 0);
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               for (int i_814 = 0; i_814 < 2; i_814++) {
                  /* WARNING: Could not recover jumptable at 0x00107c3b. Too many branches */
               }
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar6, bVar11, uVar5 & 0xffffffff);
               return;
            }
            goto LAB_00107d75;
         }
         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 3;
      } else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 3;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00107c62:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC34, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00107d75:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00107dff;
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
      LAB_00107dff:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00107eb3;
   }
   cVar6 = String::operator ==(param_1, "Resource");
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
                     if (lVar5 == 0) goto LAB_00107f8b;
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
         LAB_00107f8b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00107eb3;
      }
      cVar6 = String::operator ==(param_1, "RefCounted");
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
                        if (lVar5 == 0) goto LAB_00108067;
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
            LAB_00108067:cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_00107eb3;
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }
         goto LAB_001080e1;
      }
   }
   LAB_00107eb3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_001080e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Joint3DGizmoPlugin::is_class(String const&) const */undefined8 Joint3DGizmoPlugin::is_class(Joint3DGizmoPlugin *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010815f;
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
      LAB_0010815f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00108213;
   }
   cVar6 = String::operator ==(param_1, "Joint3DGizmoPlugin");
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
                     if (lVar5 == 0) goto LAB_001082d3;
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
         LAB_001082d3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00108213;
      }
      cVar6 = String::operator ==(param_1, "EditorNode3DGizmoPlugin");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Resource::is_class((Resource*)this, param_1);
            return uVar7;
         }
         goto LAB_0010837c;
      }
   }
   LAB_00108213:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_0010837c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Joint3DGizmoPlugin::_initialize_classv() */void Joint3DGizmoPlugin::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0010b008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorNode3DGizmoPlugin";
      local_70 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Joint3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00108b90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar7 == 0) goto LAB_00108b90;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_00108afc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00108a8b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00108afc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset((void *)((long)puVar9 + lVar3 * 0xc),0,(param_1 - lVar3) * 0xc);
LAB_00108a8b:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* Joint3DGizmoPlugin::~Joint3DGizmoPlugin() */

void __thiscall Joint3DGizmoPlugin::~Joint3DGizmoPlugin(Joint3DGizmoPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Joint3DGizmoPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Joint3DGizmoPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Joint3DGizmoPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this)

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

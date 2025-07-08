/* CowData<Plane>::_copy_on_write() [clone .isra.0] */void CowData<Plane>::_copy_on_write(CowData<Plane> *this) {
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
   __n = lVar2 * 0x10;
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
/* Projection::determinant() const */float Projection::determinant(Projection *this) {
   float fVar1;
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
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   fVar1 = *(float*)( this + 0x10 );
   fVar2 = *(float*)( this + 0xc );
   fVar3 = *(float*)( this + 0x18 );
   fVar4 = *(float*)( this + 8 );
   fVar5 = *(float*)( this + 0x1c );
   fVar6 = *(float*)( this + 0x24 );
   fVar7 = *(float*)( this + 4 );
   fVar8 = *(float*)( this + 0x14 );
   fVar9 = *(float*)( this + 0x30 );
   fVar10 = *(float*)this;
   fVar11 = *(float*)( this + 0x28 );
   fVar12 = *(float*)( this + 0x20 );
   fVar13 = *(float*)( this + 0x2c );
   fVar14 = *(float*)( this + 0x34 );
   fVar15 = *(float*)( this + 0x38 );
   fVar16 = *(float*)( this + 0x3c );
   return ( ( ( ( ( ( ( ( ( fVar3 * fVar10 * fVar13 * fVar14 + ( ( ( fVar4 * fVar5 * fVar12 * fVar14 + ( ( ( fVar5 * fVar7 * fVar11 * fVar9 + ( ( fVar2 * fVar3 * fVar6 * fVar9 - fVar6 * fVar4 * fVar5 * fVar9 ) - fVar2 * fVar8 * fVar11 * fVar9 ) + fVar4 * fVar8 * fVar13 * fVar9 ) - fVar3 * fVar7 * fVar13 * fVar9 ) - fVar2 * fVar3 * fVar12 * fVar14 ) + fVar2 * fVar1 * fVar11 * fVar14 ) - fVar11 * fVar5 * fVar10 * fVar14 ) - fVar13 * fVar4 * fVar1 * fVar14 ) + fVar2 * fVar8 * fVar12 * fVar15 ) - fVar5 * fVar7 * fVar12 * fVar15 ) - fVar2 * fVar1 * fVar6 * fVar15 ) + fVar5 * fVar10 * fVar6 * fVar15 + fVar13 * fVar7 * fVar1 * fVar15 ) - fVar13 * fVar8 * fVar10 * fVar15 ) - fVar4 * fVar8 * fVar12 * fVar16 ) + fVar3 * fVar7 * fVar12 * fVar16 + fVar4 * fVar1 * fVar6 * fVar16 ) - fVar6 * fVar3 * fVar10 * fVar16 ) - fVar7 * fVar1 * fVar11 * fVar16 ) + fVar11 * fVar8 * fVar10 * fVar16;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::set_identity() */void Projection::set_identity(Projection *this) {
   Projection *pPVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   long lVar9;
   long lVar8;
   uVar6 = _LC6;
   iVar5 = _UNK_00104a5c;
   iVar4 = _UNK_00104a58;
   iVar3 = _UNK_00104a54;
   iVar2 = __LC4;
   lVar8 = 0;
   do {
      iVar7 = (int)lVar8;
      lVar9 = lVar8 + 1;
      pPVar1 = this + lVar8 * 0x10;
      *(uint*)pPVar1 = -(uint)(iVar7 == iVar2) & uVar6;
      *(uint*)( pPVar1 + 4 ) = -(uint)(iVar7 == iVar3) & uVar6;
      *(uint*)( pPVar1 + 8 ) = -(uint)(iVar7 == iVar4) & uVar6;
      *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar7 == iVar5) & uVar6;
      lVar8 = lVar9;
   }
 while ( lVar9 != 4 );
   return;
}
/* Projection::set_zero() */void Projection::set_zero(Projection *this) {
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 16 ) ) = (undefined1[16])0;
   }

   return;
}
/* Projection::xform4(Plane const&) const */void Projection::xform4(Plane *param_1) {
   long in_FS_OFFSET;
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::xform(Vector4 const&) const */undefined1  [16] __thiscallProjection::xform(Projection *this, Vector4 *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined1 auVar5[16];
   fVar1 = *(float*)param_1;
   fVar2 = *(float*)( param_1 + 4 );
   fVar3 = *(float*)( param_1 + 8 );
   fVar4 = *(float*)( param_1 + 0xc );
   auVar5._4_4_ = fVar1 * *(float*)( this + 4 ) + fVar2 * *(float*)( this + 0x14 ) + fVar3 * *(float*)( this + 0x24 ) + fVar4 * *(float*)( this + 0x34 );
   auVar5._0_4_ = fVar1 * *(float*)this + fVar2 * *(float*)( this + 0x10 ) + fVar3 * *(float*)( this + 0x20 ) + fVar4 * *(float*)( this + 0x30 );
   auVar5._8_4_ = fVar1 * *(float*)( this + 8 ) + fVar2 * *(float*)( this + 0x18 ) + fVar3 * *(float*)( this + 0x28 ) + fVar4 * *(float*)( this + 0x38 );
   auVar5._12_4_ = fVar1 * *(float*)( this + 0xc ) + fVar2 * *(float*)( this + 0x1c ) + fVar3 * *(float*)( this + 0x2c ) + fVar4 * *(float*)( this + 0x3c );
   return auVar5;
}
/* Projection::xform_inv(Vector4 const&) const */undefined1  [16] __thiscallProjection::xform_inv(Projection *this, Vector4 *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined1 auVar5[16];
   fVar1 = *(float*)param_1;
   fVar2 = *(float*)( param_1 + 4 );
   fVar3 = *(float*)( param_1 + 8 );
   fVar4 = *(float*)( param_1 + 0xc );
   auVar5._4_4_ = *(float*)( this + 0x10 ) * fVar1 + *(float*)( this + 0x14 ) * fVar2 + *(float*)( this + 0x18 ) * fVar3 + fVar4 * *(float*)( this + 0x1c );
   auVar5._0_4_ = *(float*)this * fVar1 + *(float*)( this + 4 ) * fVar2 + *(float*)( this + 8 ) * fVar3 + fVar4 * *(float*)( this + 0xc );
   auVar5._8_4_ = *(float*)( this + 0x20 ) * fVar1 + *(float*)( this + 0x24 ) * fVar2 + *(float*)( this + 0x28 ) * fVar3 + fVar4 * *(float*)( this + 0x2c );
   auVar5._12_4_ = *(float*)( this + 0x30 ) * fVar1 + *(float*)( this + 0x34 ) * fVar2 + *(float*)( this + 0x38 ) * fVar3 + fVar4 * *(float*)( this + 0x3c );
   return auVar5;
}
/* Projection::adjust_perspective_znear(float) */void Projection::adjust_perspective_znear(Projection *this, float param_1) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar3 = *(float*)( this + 0x3c ) - *(float*)( this + 0x38 );
   Plane::normalize();
   fVar2 = param_1 * _LC8;
   *(float*)( this + 0x28 ) = (float)( ( uint )(param_1 + fVar3) ^ _LC11 ) / ( fVar3 - param_1 );
   *(float*)( this + 0x38 ) = ( fVar2 * fVar3 ) / ( fVar3 - param_1 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::perspective_znear_adjusted(float) const */void Projection::perspective_znear_adjusted(float param_1) {
   long lVar1;
   undefined8 uVar2;
   undefined8 *in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   float fVar3;
   float fVar4;
   uVar2 = in_RSI[1];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *in_RDI = *in_RSI;
   in_RDI[1] = uVar2;
   for (int i = 0; i < 3; i++) {
      uVar2 = in_RSI[( 2*i + 3 )];
      in_RDI[( 2*i + 2 )] = in_RSI[( 2*i + 2 )];
      in_RDI[( 2*i + 3 )] = uVar2;
   }

   fVar4 = *(float*)( (long)in_RDI + 0x3c ) - *(float*)( in_RDI + 7 );
   Plane::normalize();
   fVar3 = param_1 * _LC8;
   *(float*)( in_RDI + 5 ) = (float)( ( uint )(param_1 + fVar4) ^ _LC11 ) / ( fVar4 - param_1 );
   *(float*)( in_RDI + 7 ) = ( fVar3 * fVar4 ) / ( fVar4 - param_1 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::get_projection_plane(Projection::Planes) const */undefined1  [16] __thiscallProjection::get_projection_plane(Projection *this, uint param_2) {
   long lVar1;
   undefined1 auVar2[16];
   long in_FS_OFFSET;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   undefined8 local_28;
   undefined8 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (5 < param_2) {
      local_28 = 0;
      uStack_20 = 0;
      goto LAB_0010080c;
   }

   fVar7 = *(float*)( this + 0x3c );
   switch (param_2) {
      case 0:
    fVar7 = fVar7 + *(float *)(this + 0x38);
    fVar3 = *(float *)(this + 0x28) + *(float *)(this + 0x2c);
    fVar5 = *(float *)(this + 0x18) + *(float *)(this + 0x1c);
    fVar4 = *(float *)(this + 0xc) + *(float *)(this + 8);
    break;
      case 1:
    fVar4 = *(float *)(this + 0x38);
    fVar5 = *(float *)(this + 0x2c) - *(float *)(this + 0x28);
    fVar6 = *(float *)(this + 0x1c) - *(float *)(this + 0x18);
    fVar3 = *(float *)(this + 0xc) - *(float *)(this + 8);
    goto LAB_001007d8;
      case 2:
    fVar4 = *(float *)(this + 0x30);
    fVar5 = *(float *)(this + 0x20) + *(float *)(this + 0x2c);
    fVar6 = *(float *)(this + 0x10) + *(float *)(this + 0x1c);
    fVar3 = *(float *)(this + 0xc) + *(float *)this;
    goto LAB_00100863;
      case 3:
    fVar7 = fVar7 - *(float *)(this + 0x34);
    fVar3 = *(float *)(this + 0x2c) - *(float *)(this + 0x24);
    fVar5 = *(float *)(this + 0x1c) - *(float *)(this + 0x14);
    fVar4 = *(float *)(this + 0xc) - *(float *)(this + 4);
    break;
      case 4:
    fVar4 = *(float *)(this + 0x30);
    fVar5 = *(float *)(this + 0x2c) - *(float *)(this + 0x20);
    fVar6 = *(float *)(this + 0x1c) - *(float *)(this + 0x10);
    fVar3 = *(float *)(this + 0xc) - *(float *)this;
LAB_001007d8:
    uStack_20 = CONCAT44(fVar7 - fVar4,(uint)fVar5 ^ _LC11);
    local_28 = CONCAT44((uint)fVar6 ^ _LC11,(uint)fVar3 ^ _LC11);
    Plane::normalize();
    goto LAB_0010080c;
      case 5:
    fVar4 = *(float *)(this + 0x34);
    fVar5 = *(float *)(this + 0x24) + *(float *)(this + 0x2c);
    fVar6 = *(float *)(this + 0x14) + *(float *)(this + 0x1c);
    fVar3 = *(float *)(this + 0xc) + *(float *)(this + 4);
LAB_00100863:
    uStack_20 = CONCAT44(fVar7 + fVar4,(uint)fVar5 ^ _LC11);
    local_28 = CONCAT44((uint)fVar6 ^ _LC11,(uint)fVar3 ^ _LC11);
    Plane::normalize();
    goto LAB_0010080c;
   }

   uStack_20 = CONCAT44(fVar7, (uint)fVar3 ^ _LC11);
   local_28 = CONCAT44((uint)fVar5 ^ _LC11, (uint)fVar4 ^ _LC11);
   Plane::normalize();
   LAB_0010080c:auVar2._8_8_ = uStack_20;
   auVar2._0_8_ = local_28;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return auVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::flipped_y() const */void Projection::flipped_y(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   uint uVar3;
   undefined8 *in_RSI;
   undefined8 *in_RDI;
   uVar3 = _LC11;
   uVar1 = in_RSI[1];
   *in_RDI = *in_RSI;
   in_RDI[1] = uVar1;
   uVar1 = in_RSI[3];
   in_RDI[2] = in_RSI[2];
   in_RDI[3] = uVar1;
   uVar1 = in_RSI[5];
   in_RDI[4] = in_RSI[4];
   in_RDI[5] = uVar1;
   uVar1 = in_RSI[6];
   uVar2 = in_RSI[7];
   *(uint*)( in_RDI + 2 ) = uVar3 ^ *(uint*)( in_RDI + 2 );
   *(uint*)( (long)in_RDI + 0x14 ) = uVar3 ^ *(uint*)( (long)in_RDI + 0x14 );
   *(uint*)( in_RDI + 3 ) = uVar3 ^ *(uint*)( in_RDI + 3 );
   *(uint*)( (long)in_RDI + 0x1c ) = uVar3 ^ *(uint*)( (long)in_RDI + 0x1c );
   in_RDI[6] = uVar1;
   in_RDI[7] = uVar2;
   return;
}
/* Projection::jitter_offseted(Vector2 const&) const */Vector2 *Projection::jitter_offseted(Vector2 *param_1) {
   undefined8 uVar1;
   float *in_RDX;
   undefined8 *in_RSI;
   uVar1 = in_RSI[1];
   *(undefined8*)param_1 = *in_RSI;
   *(undefined8*)( param_1 + 8 ) = uVar1;
   for (int i = 0; i < 3; i++) {
      uVar1 = in_RSI[( 2*i + 3 )];
      *(undefined8*)( param_1 + ( 16*i + 16 ) ) = in_RSI[( 2*i + 2 )];
      *(undefined8*)( param_1 + ( 16*i + 24 ) ) = uVar1;
   }

   *(float*)( param_1 + 0x30 ) = *(float*)( param_1 + 0x30 ) + *in_RDX;
   *(float*)( param_1 + 0x34 ) = *(float*)( param_1 + 0x34 ) + in_RDX[1];
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::set_perspective(float, float, float, float, bool) */void Projection::set_perspective(Projection *this, float param_1, float param_2, float param_3, float param_4, bool param_5) {
   Projection *pPVar1;
   bool bVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   long lVar9;
   float fVar10;
   double dVar11;
   float fVar12;
   float fVar13;
   float local_10;
   float local_c;
   long lVar8;
   if (param_5) {
      dVar11 = tan((double)( param_1 * __LC12 ) * _LC13);
      dVar11 = atan((double)( _LC6 / param_2 ) * dVar11);
      param_1 = (float)( ( dVar11 + dVar11 ) * __LC14 );
   }

   sincosf((float)( (double)param_1 * _LC13 * __LC15 ), &local_c, &local_10);
   fVar10 = _LC6;
   iVar6 = _UNK_00104a5c;
   iVar5 = _UNK_00104a58;
   iVar4 = _UNK_00104a54;
   iVar3 = __LC4;
   fVar12 = param_4 - param_3;
   if (fVar12 != 0.0 && param_2 != 0.0) {
      bVar2 = fVar12 == 0.0 || param_2 == 0.0;
      if (local_c == 0.0) {
         bVar2 = !NAN(local_c);
      }

      if (!bVar2) {
         lVar8 = 0;
         do {
            iVar7 = (int)lVar8;
            lVar9 = lVar8 + 1;
            pPVar1 = this + lVar8 * 0x10;
            *(uint*)pPVar1 = -(uint)(iVar7 == iVar3) & (uint)fVar10;
            *(uint*)( pPVar1 + 4 ) = -(uint)(iVar7 == iVar4) & (uint)fVar10;
            *(uint*)( pPVar1 + 8 ) = -(uint)(iVar7 == iVar5) & (uint)fVar10;
            *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar7 == iVar6) & (uint)fVar10;
            lVar8 = lVar9;
         }
 while ( lVar9 != 4 );
         *(float*)this = ( local_10 / local_c ) / param_2;
         *(undefined4*)( this + 0x2c ) = 0xbf800000;
         fVar10 = (float)( ( uint )(param_4 + param_3) ^ _LC11 );
         *(float*)( this + 0x14 ) = local_10 / local_c;
         fVar13 = param_3 * _LC8;
         *(undefined4*)( this + 0x3c ) = 0;
         *(float*)( this + 0x28 ) = fVar10 / fVar12;
         *(float*)( this + 0x38 ) = ( fVar13 * param_4 ) / fVar12;
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::set_orthogonal(float, float, float, float, float, float) */void Projection::set_orthogonal(Projection *this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6) {
   Projection *pPVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   int iVar8;
   long lVar10;
   float fVar11;
   long lVar9;
   uVar6 = _LC6;
   iVar5 = _UNK_00104a5c;
   iVar4 = _UNK_00104a58;
   iVar3 = _UNK_00104a54;
   iVar2 = __LC4;
   lVar9 = 0;
   do {
      iVar8 = (int)lVar9;
      lVar10 = lVar9 + 1;
      pPVar1 = this + lVar9 * 0x10;
      *(uint*)pPVar1 = -(uint)(iVar8 == iVar2) & uVar6;
      *(uint*)( pPVar1 + 4 ) = -(uint)(iVar8 == iVar3) & uVar6;
      *(uint*)( pPVar1 + 8 ) = -(uint)(iVar8 == iVar4) & uVar6;
      *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar8 == iVar5) & uVar6;
      fVar11 = _LC17;
      lVar9 = lVar10;
   }
 while ( lVar10 != 4 );
   *(undefined4*)( this + 0x3c ) = 0x3f800000;
   uVar7 = _LC18._4_4_;
   uVar6 = (uint)_LC18;
   *(float*)this = fVar11 / ( param_2 - param_1 );
   *(ulong*)( this + 0x30 ) = CONCAT44(( uint )(( param_4 + param_3 ) / ( param_4 - param_3 )) ^ uVar7, ( uint )(( param_2 + param_1 ) / ( param_2 - param_1 )) ^ uVar6);
   *(float*)( this + 0x14 ) = fVar11 / ( param_4 - param_3 );
   fVar11 = _LC8 / ( param_6 - param_5 );
   *(uint*)( this + 0x38 ) = ( uint )(( param_6 + param_5 ) / ( param_6 - param_5 )) ^ _LC11;
   *(float*)( this + 0x28 ) = fVar11;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::set_orthogonal(float, float, float, float, bool) */void Projection::set_orthogonal(Projection *this, float param_1, float param_2, float param_3, float param_4, bool param_5) {
   Projection *pPVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   float fVar7;
   float fVar8;
   int iVar9;
   long lVar11;
   float fVar12;
   float in_XMM0_Db;
   undefined1 auVar13[16];
   float fVar14;
   float fVar16;
   undefined1 auVar15[16];
   long lVar10;
   uVar6 = _LC6;
   iVar5 = _UNK_00104a5c;
   iVar4 = _UNK_00104a58;
   iVar3 = _UNK_00104a54;
   iVar2 = __LC4;
   if (!param_5) {
      param_1 = param_1 * param_2;
   }

   fVar12 = param_1 * _LC20;
   fVar14 = param_1 * (float)_LC19;
   fVar16 = ( param_1 / param_2 ) * _LC19._4_4_;
   lVar10 = 0;
   do {
      iVar9 = (int)lVar10;
      lVar11 = lVar10 + 1;
      pPVar1 = this + lVar10 * 0x10;
      *(uint*)pPVar1 = -(uint)(iVar9 == iVar2) & uVar6;
      *(uint*)( pPVar1 + 4 ) = -(uint)(iVar9 == iVar3) & uVar6;
      *(uint*)( pPVar1 + 8 ) = -(uint)(iVar9 == iVar4) & uVar6;
      *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar9 == iVar5) & uVar6;
      fVar8 = _LC17;
      lVar10 = lVar11;
   }
 while ( lVar11 != 4 );
   *(undefined4*)( this + 0x3c ) = 0x3f800000;
   fVar7 = _LC8;
   auVar13._0_4_ = fVar14 + fVar14;
   auVar13._4_4_ = fVar16 + fVar16;
   auVar15._0_4_ = fVar14 - fVar14;
   auVar15._4_4_ = fVar16 - fVar16;
   auVar15._8_4_ = in_XMM0_Db * 0.0 - in_XMM0_Db * 0.0;
   auVar15._12_4_ = in_XMM0_Db * 0.0 - in_XMM0_Db * 0.0;
   auVar13._8_8_ = _LC21;
   auVar15 = divps(auVar15, auVar13);
   *(float*)this = fVar8 / ( fVar12 + fVar12 );
   *(ulong*)( this + 0x30 ) = CONCAT44(auVar15._4_4_ ^ _LC18._4_4_, auVar15._0_4_ ^ (uint)_LC18);
   *(float*)( this + 0x14 ) = fVar8 / auVar13._4_4_;
   *(float*)( this + 0x28 ) = fVar7 / ( param_4 - param_3 );
   *(uint*)( this + 0x38 ) = ( uint )(( param_3 + param_4 ) / ( param_4 - param_3 )) ^ _LC11;
   return;
}
/* Projection::set_frustum(float, float, float, float, float, float) */void Projection::set_frustum(Projection *this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6) {
   float fVar1;
   float fVar2;
   if (param_2 <= param_1) {
      _err_print_error("set_frustum", "core/math/projection.cpp", 0x16d, "Condition \"p_right <= p_left\" is true.", 0, 0);
      return;
   }

   if (param_3 < param_4) {
      if (param_5 < param_6) {
         *(undefined8*)( this + 0x2c ) = 0xbf800000;
         fVar2 = param_6 * _LC8;
         *(undefined8*)( this + 4 ) = 0;
         *(undefined8*)( this + 0xc ) = 0;
         fVar1 = (float)( ( uint )(param_6 + param_5) ^ _LC11 );
         *(undefined8*)( this + 0x18 ) = 0;
         *(undefined4*)( this + 0x34 ) = 0;
         *(undefined4*)( this + 0x3c ) = 0;
         *(float*)( this + 0x20 ) = ( param_2 + param_1 ) / ( param_2 - param_1 );
         *(float*)this = ( param_5 + param_5 ) / ( param_2 - param_1 );
         *(float*)( this + 0x14 ) = ( param_5 + param_5 ) / ( param_4 - param_3 );
         *(float*)( this + 0x24 ) = ( param_4 + param_3 ) / ( param_4 - param_3 );
         *(float*)( this + 0x28 ) = fVar1 / ( param_6 - param_5 );
         *(float*)( this + 0x38 ) = ( fVar2 * param_5 ) / ( param_6 - param_5 );
         return;
      }

      _err_print_error("set_frustum", "core/math/projection.cpp", 0x16f, "Condition \"p_far <= p_near\" is true.", 0, 0);
      return;
   }

   _err_print_error("set_frustum", "core/math/projection.cpp", 0x16e, "Condition \"p_top <= p_bottom\" is true.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::set_for_hmd(int, float, float, float, float, float, float, float) */void Projection::set_for_hmd(Projection *this, int param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8) {
   float fVar1;
   float fVar2;
   double dVar3;
   float fVar4;
   float fVar5;
   dVar3 = (double)param_5;
   fVar5 = (float)( ( (double)( param_4 - param_3 ) * _LC13 ) / dVar3 );
   fVar2 = ( (float)( ( (double)param_4 * __LC27 ) / dVar3 ) * param_6 ) / param_2;
   fVar4 = (float)( ( (double)param_3 * _LC13 ) / dVar3 );
   fVar1 = (float)( (double)( fVar4 + fVar5 ) * ( (double)param_6 - __LC28 ) * _LC13 );
   fVar4 = fVar4 + fVar1;
   fVar5 = fVar5 + fVar1;
   if (param_1 == 1) {
      fVar2 = fVar2 * param_7;
      set_frustum(this, (float)( _LC11 ^ (uint)fVar5 ) * param_7, fVar4 * param_7, (float)( (uint)fVar2 ^ _LC11 ), fVar2, param_7, param_8);
      return;
   }

   if (param_1 != 2) {
      return;
   }

   fVar2 = fVar2 * param_7;
   set_frustum(this, (float)( _LC11 ^ (uint)fVar4 ) * param_7, fVar5 * param_7, (float)( (uint)fVar2 ^ _LC11 ), fVar2, param_7, param_8);
   return;
}
/* Projection::set_frustum(float, float, Vector2, float, float, bool) */void Projection::set_frustum(float param_1, float param_2, undefined8 param_3, float param_4, float param_5, Projection *this, char param_7) {
   float fVar1;
   float fVar2;
   fVar1 = (float)( (ulong)param_3 >> 0x20 );
   if (param_7 == '\0') {
      param_1 = param_1 * param_2;
   }

   fVar2 = ( param_1 / param_2 ) * _LC20;
   set_frustum(this, (float)param_3 - param_1 * _LC20, (float)param_3 + param_1 * _LC20, fVar1 - fVar2, fVar2 + fVar1, param_4, param_5);
   return;
}
/* Projection::get_z_far() const */void Projection::get_z_far(Projection *this) {
   float fVar1;
   float fVar2;
   long lVar3;
   long in_FS_OFFSET;
   fVar1 = *(float*)( this + 0x3c );
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = *(float*)( this + 0x38 );
   Plane::normalize();
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(fVar1 - fVar2);
}
/* Projection::get_z_near() const */void Projection::get_z_near(Projection *this) {
   float fVar1;
   long lVar2;
   long in_FS_OFFSET;
   float fVar3;
   fVar1 = *(float*)( this + 0x38 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar3 = (float)( *(uint*)( this + 0x3c ) ^ _LC11 );
   Plane::normalize();
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(fVar3 - fVar1);
}
/* Projection::get_viewport_half_extents() const */undefined8 Projection::get_viewport_half_extents(Projection *this) {
   long in_FS_OFFSET;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   float local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   float local_38;
   float fStack_34;
   float fStack_30;
   float fStack_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   fStack_4c = (float)( *(uint*)( this + 0x3c ) ^ _LC11 ) - *(float*)( this + 0x38 );
   local_58 = *(float*)( this + 8 ) + *(float*)( this + 0xc );
   fStack_54 = *(float*)( this + 0x18 ) + *(float*)( this + 0x1c );
   fStack_50 = *(float*)( this + 0x28 ) + *(float*)( this + 0x2c );
   Plane::normalize();
   local_48 = *(float*)( this + 0xc ) - *(float*)this;
   fStack_44 = *(float*)( this + 0x1c ) - *(float*)( this + 0x10 );
   fStack_40 = (float)*(undefined8*)( this + 0x2c ) - *(float*)( this + 0x20 );
   fStack_3c = *(float*)( this + 0x30 ) - *(float*)( this + 0x3c );
   Plane::normalize();
   local_38 = *(float*)( this + 0xc ) - *(float*)( this + 4 );
   fStack_34 = *(float*)( this + 0x1c ) - *(float*)( this + 0x14 );
   fStack_30 = *(float*)( this + 0x2c ) - *(float*)( this + 0x24 );
   fStack_2c = *(float*)( this + 0x34 ) - *(float*)( this + 0x3c );
   Plane::normalize();
   Plane::intersect_3((Plane*)&local_58, (Plane*)&local_48, (Vector3*)&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::get_far_plane_half_extents() const */undefined8 Projection::get_far_plane_half_extents(Projection *this) {
   long in_FS_OFFSET;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   float local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   float local_38;
   float fStack_34;
   float fStack_30;
   float fStack_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = *(float*)( this + 0xc ) - *(float*)( this + 8 );
   fStack_54 = *(float*)( this + 0x1c ) - *(float*)( this + 0x18 );
   fStack_50 = *(float*)( this + 0x2c ) - *(float*)( this + 0x28 );
   fStack_4c = *(float*)( this + 0x38 ) - *(float*)( this + 0x3c );
   Plane::normalize();
   local_48 = *(float*)( this + 0xc ) - *(float*)this;
   fStack_44 = *(float*)( this + 0x1c ) - *(float*)( this + 0x10 );
   fStack_40 = (float)*(undefined8*)( this + 0x2c ) - *(float*)( this + 0x20 );
   fStack_3c = *(float*)( this + 0x30 ) - *(float*)( this + 0x3c );
   Plane::normalize();
   local_38 = *(float*)( this + 0xc ) - *(float*)( this + 4 );
   fStack_34 = *(float*)( this + 0x1c ) - *(float*)( this + 0x14 );
   fStack_30 = *(float*)( this + 0x2c ) - *(float*)( this + 0x24 );
   fStack_2c = *(float*)( this + 0x34 ) - *(float*)( this + 0x3c );
   Plane::normalize();
   Plane::intersect_3((Plane*)&local_58, (Plane*)&local_48, (Vector3*)&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::flip_y() */void Projection::flip_y(Projection *this) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uVar1 = _LC11 ^ *(uint*)( this + 0x14 );
   uVar2 = _LC11 ^ *(uint*)( this + 0x18 );
   uVar3 = _LC11 ^ *(uint*)( this + 0x1c );
   *(uint*)( this + 0x10 ) = _LC11 ^ *(uint*)( this + 0x10 );
   *(uint*)( this + 0x14 ) = uVar1;
   *(uint*)( this + 0x18 ) = uVar2;
   *(uint*)( this + 0x1c ) = uVar3;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::Projection() */void Projection::Projection(Projection *this) {
   Projection *pPVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   long lVar9;
   long lVar8;
   uVar6 = _LC6;
   iVar5 = _UNK_00104a5c;
   iVar4 = _UNK_00104a58;
   iVar3 = _UNK_00104a54;
   iVar2 = __LC4;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 16 ) ) = (undefined1[16])0;
   }

   lVar8 = 0;
   do {
      iVar7 = (int)lVar8;
      lVar9 = lVar8 + 1;
      pPVar1 = this + lVar8 * 0x10;
      *(uint*)pPVar1 = -(uint)(iVar7 == iVar2) & uVar6;
      *(uint*)( pPVar1 + 4 ) = -(uint)(iVar7 == iVar3) & uVar6;
      *(uint*)( pPVar1 + 8 ) = -(uint)(iVar7 == iVar4) & uVar6;
      *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar7 == iVar5) & uVar6;
      lVar8 = lVar9;
   }
 while ( lVar9 != 4 );
   return;
}
/* Projection::create_perspective(float, float, float, float, bool) */Projection * __thiscall
Projection::create_perspective
          (Projection *this,float param_1,float param_2,float param_3,float param_4,bool param_5){
   Projection *this_00;
   this_00 = this;
   Projection(this);
   set_perspective(this_00, param_1, param_2, param_3, param_4, param_5);
   return this;
}
/* Projection::create_for_hmd(int, float, float, float, float, float, float, float) */Projection * __thiscall
Projection::create_for_hmd
          (Projection *this,int param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8){
   Projection *this_00;
   this_00 = this;
   Projection(this);
   set_for_hmd(this_00, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
   return this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::create_orthogonal(float, float, float, float, float, float) */Projection * __thiscall
Projection::create_orthogonal
          (Projection *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6){
   Projection *pPVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   long lVar9;
   float fVar10;
   long lVar8;
   Projection(this);
   uVar6 = _LC6;
   iVar5 = _UNK_00104a5c;
   iVar4 = _UNK_00104a58;
   iVar3 = _UNK_00104a54;
   iVar2 = __LC4;
   lVar8 = 0;
   do {
      iVar7 = (int)lVar8;
      lVar9 = lVar8 + 1;
      pPVar1 = this + lVar8 * 0x10;
      *(uint*)pPVar1 = -(uint)(iVar7 == iVar2) & uVar6;
      *(uint*)( pPVar1 + 4 ) = -(uint)(iVar7 == iVar3) & uVar6;
      *(uint*)( pPVar1 + 8 ) = -(uint)(iVar7 == iVar4) & uVar6;
      *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar7 == iVar5) & uVar6;
      fVar10 = _LC17;
      lVar8 = lVar9;
   }
 while ( lVar9 != 4 );
   *(undefined4*)( this + 0x3c ) = 0x3f800000;
   *(float*)this = fVar10 / ( param_2 - param_1 );
   *(float*)( this + 0x14 ) = fVar10 / ( param_4 - param_3 );
   fVar10 = _LC8 / ( param_6 - param_5 );
   *(ulong*)( this + 0x30 ) = CONCAT44(( uint )(( param_3 + param_4 ) / ( param_4 - param_3 )) ^ _LC18._4_4_, ( uint )(( param_1 + param_2 ) / ( param_2 - param_1 )) ^ (uint)_LC18);
   *(float*)( this + 0x28 ) = fVar10;
   *(uint*)( this + 0x38 ) = ( uint )(( param_5 + param_6 ) / ( param_6 - param_5 )) ^ _LC11;
   return this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::create_orthogonal_aspect(float, float, float, float, bool) */Projection * __thiscall
Projection::create_orthogonal_aspect
          (Projection *this,float param_1,float param_2,float param_3,float param_4,bool param_5){
   Projection *pPVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   float fVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   long lVar12;
   float in_XMM0_Db;
   undefined1 auVar13[16];
   float fVar14;
   float fVar16;
   undefined1 auVar15[16];
   float fVar17;
   long lVar11;
   Projection(this);
   uVar6 = _LC6;
   iVar5 = _UNK_00104a5c;
   iVar4 = _UNK_00104a58;
   iVar3 = _UNK_00104a54;
   iVar2 = __LC4;
   if (param_5 == false) {
      param_1 = param_1 * param_2;
   }

   fVar17 = param_1 * _LC20;
   fVar14 = param_1 * (float)_LC19;
   fVar16 = ( param_1 / param_2 ) * _LC19._4_4_;
   lVar11 = 0;
   do {
      iVar10 = (int)lVar11;
      lVar12 = lVar11 + 1;
      pPVar1 = this + lVar11 * 0x10;
      *(uint*)pPVar1 = -(uint)(iVar10 == iVar2) & uVar6;
      *(uint*)( pPVar1 + 4 ) = -(uint)(iVar10 == iVar3) & uVar6;
      *(uint*)( pPVar1 + 8 ) = -(uint)(iVar10 == iVar4) & uVar6;
      *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar10 == iVar5) & uVar6;
      uVar9 = _LC18._4_4_;
      uVar8 = (uint)_LC18;
      fVar7 = _LC17;
      lVar11 = lVar12;
   }
 while ( lVar12 != 4 );
   auVar13._0_4_ = fVar14 + fVar14;
   auVar13._4_4_ = fVar16 + fVar16;
   auVar15._0_4_ = fVar14 - fVar14;
   auVar15._4_4_ = fVar16 - fVar16;
   auVar15._8_4_ = in_XMM0_Db * 0.0 - in_XMM0_Db * 0.0;
   auVar15._12_4_ = in_XMM0_Db * 0.0 - in_XMM0_Db * 0.0;
   *(undefined4*)( this + 0x3c ) = 0x3f800000;
   auVar13._8_8_ = _LC21;
   *(float*)this = fVar7 / ( fVar17 + fVar17 );
   fVar14 = _LC8;
   auVar15 = divps(auVar15, auVar13);
   *(float*)( this + 0x14 ) = fVar7 / auVar13._4_4_;
   *(ulong*)( this + 0x30 ) = CONCAT44(auVar15._4_4_ ^ uVar9, auVar15._0_4_ ^ uVar8);
   *(float*)( this + 0x28 ) = fVar14 / ( param_4 - param_3 );
   *(uint*)( this + 0x38 ) = ( uint )(( param_3 + param_4 ) / ( param_4 - param_3 )) ^ _LC11;
   return this;
}
/* Projection::create_frustum(float, float, float, float, float, float) */Projection * __thiscall
Projection::create_frustum
          (Projection *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6){
   Projection *this_00;
   this_00 = this;
   Projection(this);
   set_frustum(this_00, param_1, param_2, param_3, param_4, param_5, param_6);
   return this;
}
/* Projection::create_frustum_aspect(float, float, Vector2, float, float, bool) */Projection * __thiscall
Projection::create_frustum_aspect
          (float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
          Projection *this,char param_7){
   float fVar1;
   float fVar2;
   fVar2 = (float)( (ulong)param_3 >> 0x20 );
   Projection(this);
   if (param_7 == '\0') {
      param_1 = param_1 * param_2;
   }

   fVar1 = ( param_1 / param_2 ) * _LC20;
   set_frustum(this, (float)param_3 - param_1 * _LC20, (float)param_3 + param_1 * _LC20, fVar2 - fVar1, fVar2 + fVar1, param_4, param_5);
   return this;
}
/* Projection::create_depth_correction(bool) */Projection * __thiscall Projection::create_depth_correction(Projection *this,bool param_1){
   uint uVar1;
   Projection(this);
   uVar1 = _LC6;
   *(undefined4*)( this + 0x10 ) = 0;
   *(undefined1(*) [16])this = ZEXT416(uVar1);
   uVar1 = _LC6;
   if (param_1 != false) {
      uVar1 = _LC16;
   }

   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0xbf000000;
   *(undefined8*)( this + 0x38 ) = 0x3f8000003f000000;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(uint*)( this + 0x14 ) = uVar1;
   return this;
}
/* Projection::create_light_atlas_rect(Rect2 const&) */Projection * __thiscall Projection::create_light_atlas_rect(Projection *this,Rect2 *param_1){
   undefined4 uVar1;
   Projection(this);
   uVar1 = *(undefined4*)( param_1 + 8 );
   *(undefined8*)( this + 4 ) = 0;
   *(undefined8*)( this + 0xc ) = 0;
   *(undefined4*)this = uVar1;
   uVar1 = *(undefined4*)( param_1 + 0xc );
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0x3f800000;
   *(undefined4*)( this + 0x14 ) = uVar1;
   *(undefined4*)( this + 0x30 ) = *(undefined4*)param_1;
   uVar1 = *(undefined4*)( param_1 + 4 );
   *(undefined8*)( this + 0x38 ) = 0x3f80000000000000;
   *(undefined4*)( this + 0x34 ) = uVar1;
   return this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::invert() */void Projection::invert(Projection *this) {
   float fVar1;
   float *pfVar2;
   float *pfVar3;
   float *pfVar4;
   float *pfVar5;
   float *pfVar6;
   float *pfVar7;
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined1 local_88[8];
   float afStack_80[2];
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   Projection((Projection*)&local_d8);
   fVar8 = *(float*)this;
   local_98 = CONCAT44(*(float*)( this + 0x10 ), fVar8);
   uStack_90 = CONCAT44(*(float*)( this + 0x30 ), *(float*)( this + 0x20 ));
   _local_88 = ZEXT416((uint)_LC6);
   fVar10 = *(float*)( this + 4 );
   local_78 = CONCAT44(*(float*)( this + 0x14 ), fVar10);
   uStack_70 = CONCAT44(*(float*)( this + 0x34 ), *(float*)( this + 0x24 ));
   local_68 = __LC31;
   uStack_60 = _UNK_00104a88;
   fVar9 = *(float*)( this + 8 );
   fVar11 = *(float*)( this + 0xc );
   local_58 = CONCAT44(*(float*)( this + 0x18 ), fVar9);
   uStack_50 = CONCAT44(*(float*)( this + 0x38 ), *(float*)( this + 0x28 ));
   local_48 = __LC32;
   uStack_40 = _UNK_00104a98;
   local_38 = CONCAT44(*(float*)( this + 0x1c ), fVar11);
   uStack_30 = CONCAT44(*(float*)( this + 0x3c ), *(float*)( this + 0x2c ));
   fVar1 = ABS(fVar9);
   local_28 = __LC33;
   uStack_20 = _UNK_00104aa8;
   if (ABS(fVar11) <= fVar1) {
      pfVar3 = (float*)&local_38;
      pfVar4 = (float*)&local_58;
   }
 else {
      pfVar3 = (float*)&local_58;
      pfVar4 = (float*)&local_38;
      fVar1 = ABS(fVar11);
      fVar9 = fVar11;
   }

   pfVar2 = (float*)&local_78;
   pfVar5 = pfVar4;
   fVar11 = ABS(fVar10);
   if (ABS(fVar10) < fVar1) {
      pfVar5 = (float*)&local_78;
      pfVar2 = pfVar4;
      fVar10 = fVar9;
      fVar11 = fVar1;
   }

   pfVar4 = pfVar2;
   pfVar7 = (float*)&local_98;
   if (ABS(fVar8) < fVar11) {
      pfVar4 = (float*)&local_98;
      pfVar7 = pfVar2;
      fVar8 = fVar10;
   }

   if (fVar8 == 0.0) {
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("invert", "core/math/projection.cpp", 0x297, "Condition \"0.0 == r0[0]\" is true.", 0, 0);
         return;
      }

   }
 else {
      fVar10 = *pfVar4 / fVar8;
      fVar9 = *pfVar5 / fVar8;
      fVar8 = *pfVar3 / fVar8;
      fVar11 = pfVar7[1];
      for (int i = 0; i < 3; i++) {
         pfVar4[( i + 1 )] = pfVar4[( i + 1 )] - fVar10 * fVar11;
         pfVar5[( i + 1 )] = pfVar5[( i + 1 )] - fVar9 * fVar11;
         pfVar3[( i + 1 )] = pfVar3[( i + 1 )] - fVar11 * fVar8;
         fVar11 = pfVar7[( i + 2 )];
      }

      for (int i = 0; i < 3; i++) {
         if (fVar11 != 0) {
            pfVar4[( i + 4 )] = pfVar4[( i + 4 )] - fVar10 * fVar11;
            pfVar5[( i + 4 )] = pfVar5[( i + 4 )] - fVar9 * fVar11;
            pfVar3[( i + 4 )] = pfVar3[( i + 4 )] - fVar11 * fVar8;
         }

         fVar11 = pfVar7[( i + 5 )];
      }

      if (fVar11 != 0.0) {
         pfVar4[7] = pfVar4[7] - fVar10 * fVar11;
         pfVar5[7] = pfVar5[7] - fVar9 * fVar11;
         pfVar3[7] = pfVar3[7] - fVar8 * fVar11;
      }

      fVar9 = ABS(pfVar3[1]);
      fVar10 = ABS(pfVar5[1]);
      pfVar2 = pfVar3;
      pfVar6 = pfVar5;
      fVar11 = pfVar3[1];
      if (fVar9 <= fVar10) {
         pfVar2 = pfVar5;
         pfVar6 = pfVar3;
         fVar11 = pfVar5[1];
         fVar9 = fVar10;
      }

      pfVar3 = pfVar4;
      if (fVar9 <= ABS(pfVar4[1])) {
         pfVar3 = pfVar2;
         pfVar2 = pfVar4;
         fVar11 = pfVar4[1];
      }

      if (fVar11 == 0.0) {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("invert", "core/math/projection.cpp", 0x2c9, "Condition \"0.0 == r1[1]\" is true.", 0, 0);
            return;
         }

      }
 else {
         fVar10 = pfVar3[1] / fVar11;
         fVar11 = pfVar6[1] / fVar11;
         pfVar3[2] = pfVar3[2] - pfVar2[2] * fVar10;
         pfVar6[2] = pfVar6[2] - pfVar2[2] * fVar11;
         pfVar3[3] = pfVar3[3] - pfVar2[3] * fVar10;
         pfVar6[3] = pfVar6[3] - pfVar2[3] * fVar11;
         for (int i = 0; i < 4; i++) {
            fVar9 = pfVar2[( i + 4 )];
            if (fVar9 != 0) {
               pfVar3[( i + 4 )] = pfVar3[( i + 4 )] - fVar10 * fVar9;
               pfVar6[( i + 4 )] = pfVar6[( i + 4 )] - fVar9 * fVar11;
            }

         }

         pfVar4 = pfVar3;
         fVar11 = pfVar6[2];
         if (ABS(pfVar6[2]) <= ABS(pfVar3[2])) {
            pfVar4 = pfVar6;
            pfVar6 = pfVar3;
            fVar11 = pfVar3[2];
         }

         if (fVar11 == 0.0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("invert", "core/math/projection.cpp", 0x2eb, "Condition \"0.0 == r2[2]\" is true.", 0, 0);
               return;
            }

         }
 else {
            fVar11 = pfVar4[2] / fVar11;
            fVar9 = pfVar4[3] - pfVar6[3] * fVar11;
            pfVar4[3] = fVar9;
            fVar10 = pfVar4[4] - pfVar6[4] * fVar11;
            pfVar4[4] = fVar10;
            fVar1 = pfVar4[5] - pfVar6[5] * fVar11;
            pfVar4[5] = fVar1;
            fVar8 = pfVar4[6] - pfVar6[6] * fVar11;
            pfVar4[6] = fVar8;
            fVar11 = pfVar4[7] - fVar11 * pfVar6[7];
            pfVar4[7] = fVar11;
            if (fVar9 == 0.0) {
               if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  _err_print_error("invert", "core/math/projection.cpp", 0x2f6, "Condition \"0.0 == r3[3]\" is true.", 0, 0);
                  return;
               }

            }
 else {
               fVar9 = _LC6 / fVar9;
               fVar10 = fVar10 * fVar9;
               pfVar4[4] = fVar10;
               pfVar4[5] = fVar1 * fVar9;
               pfVar4[6] = fVar8 * fVar9;
               pfVar4[7] = fVar11 * fVar9;
               fVar11 = pfVar6[3];
               fVar9 = _LC6 / pfVar6[2];
               pfVar6[4] = ( pfVar6[4] - fVar10 * fVar11 ) * fVar9;
               pfVar6[5] = ( pfVar6[5] - pfVar4[5] * fVar11 ) * fVar9;
               pfVar6[6] = ( pfVar6[6] - pfVar4[6] * fVar11 ) * fVar9;
               pfVar6[7] = ( pfVar6[7] - fVar11 * pfVar4[7] ) * fVar9;
               fVar11 = pfVar2[3];
               for (int i = 0; i < 3; i++) {
                  pfVar2[( i + 4 )] = pfVar2[( i + 4 )] - pfVar4[( i + 4 )] * fVar11;
               }

               pfVar2[7] = pfVar2[7] - fVar11 * pfVar4[7];
               fVar11 = pfVar7[3];
               for (int i = 0; i < 3; i++) {
                  pfVar7[( i + 4 )] = pfVar7[( i + 4 )] - pfVar4[( i + 4 )] * fVar11;
               }

               pfVar7[7] = pfVar7[7] - fVar11 * pfVar4[7];
               fVar11 = pfVar2[2];
               fVar9 = _LC6 / pfVar2[1];
               for (int i = 0; i < 3; i++) {
                  pfVar2[( i + 4 )] = ( pfVar2[( i + 4 )] - pfVar6[( i + 4 )] * fVar11 ) * fVar9;
               }

               pfVar2[7] = ( pfVar2[7] - fVar11 * pfVar6[7] ) * fVar9;
               fVar11 = pfVar7[2];
               fVar12 = pfVar7[4] - pfVar6[4] * fVar11;
               pfVar7[4] = fVar12;
               fVar1 = pfVar7[5] - pfVar6[5] * fVar11;
               pfVar7[5] = fVar1;
               fVar10 = _LC6 / *pfVar7;
               fVar8 = pfVar7[6] - pfVar6[6] * fVar11;
               pfVar7[6] = fVar8;
               fVar9 = pfVar7[7] - pfVar6[7] * fVar11;
               fVar11 = pfVar7[1];
               pfVar7[7] = fVar9;
               fVar12 = ( fVar12 - pfVar2[4] * fVar11 ) * fVar10;
               pfVar7[4] = fVar12;
               fVar1 = ( fVar1 - pfVar2[5] * fVar11 ) * fVar10;
               pfVar7[5] = fVar1;
               fVar8 = ( fVar8 - pfVar2[6] * fVar11 ) * fVar10;
               pfVar7[6] = fVar8;
               fVar10 = ( fVar9 - fVar11 * pfVar2[7] ) * fVar10;
               pfVar7[7] = fVar10;
               uStack_c0 = CONCAT44(pfVar4[5], pfVar6[5]);
               local_c8 = CONCAT44(pfVar2[5], fVar1);
               uStack_b0 = CONCAT44(pfVar4[6], pfVar6[6]);
               local_b8 = CONCAT44(pfVar2[6], fVar8);
               uStack_a0 = CONCAT44(pfVar4[7], pfVar6[7]);
               local_a8 = CONCAT44(pfVar2[7], fVar10);
               uStack_d0 = CONCAT44(pfVar4[4], pfVar6[4]);
               local_d8 = CONCAT44(pfVar2[4], fVar12);
               *(undefined8*)this = local_d8;
               *(undefined8*)( this + 8 ) = uStack_d0;
               *(undefined8*)( this + 0x10 ) = local_c8;
               *(undefined8*)( this + 0x18 ) = uStack_c0;
               *(undefined8*)( this + 0x20 ) = local_b8;
               *(undefined8*)( this + 0x28 ) = uStack_b0;
               *(undefined8*)( this + 0x30 ) = local_a8;
               *(undefined8*)( this + 0x38 ) = uStack_a0;
               if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

            }

         }

      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::inverse() const */void Projection::inverse(void) {
   undefined8 uVar1;
   undefined8 *in_RSI;
   Projection *in_RDI;
   uVar1 = in_RSI[1];
   *(undefined8*)in_RDI = *in_RSI;
   *(undefined8*)( in_RDI + 8 ) = uVar1;
   for (int i = 0; i < 3; i++) {
      uVar1 = in_RSI[( 2*i + 3 )];
      *(undefined8*)( in_RDI + ( 16*i + 16 ) ) = in_RSI[( 2*i + 2 )];
      *(undefined8*)( in_RDI + ( 16*i + 24 ) ) = uVar1;
   }

   invert(in_RDI);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::set_perspective(float, float, float, float, bool, int, float, float) */void Projection::set_perspective(Projection *this, float param_1, float param_2, float param_3, float param_4, bool param_5, int param_6, float param_7, float param_8) {
   float fVar1;
   Projection *pPVar2;
   Projection *pPVar3;
   Projection *pPVar4;
   int iVar5;
   int iVar6;
   Projection *pPVar7;
   Projection *this_00;
   Projection *pPVar8;
   Projection *pPVar9;
   Projection *this_01;
   long in_FS_OFFSET;
   float fVar10;
   double dVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   Projection local_c8[48];
   float local_98;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   Projection local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5) {
      dVar11 = tan((double)( param_1 * __LC12 ) * _LC13);
      dVar11 = atan((double)( _LC6 / param_2 ) * dVar11);
      param_1 = (float)( ( dVar11 + dVar11 ) * __LC14 );
   }

   dVar11 = tan((double)param_1 * _LC13 * __LC15);
   fVar13 = (float)( dVar11 * (double)param_3 );
   fVar12 = param_2 * fVar13;
   fVar14 = (float)( ( _LC13 * (double)param_7 * (double)param_3 ) / (double)param_8 );
   if (param_6 == 1) {
      fVar15 = param_7 * _LC20;
      fVar10 = fVar14 - fVar12;
      fVar12 = fVar12 + fVar14;
   }
 else if (param_6 == 2) {
      fVar15 = param_7 * _LC39;
      fVar10 = (float)( (uint)fVar12 ^ _LC11 );
      fVar12 = fVar12 - fVar14;
      fVar10 = fVar10 - fVar14;
   }
 else {
      fVar15 = 0.0;
      fVar10 = (float)( (uint)fVar12 ^ _LC11 );
   }

   set_frustum(this, fVar10, fVar12, (float)( _LC11 ^ (uint)fVar13 ), fVar13, param_3, param_4);
   this_01 = local_c8;
   Projection(this_01);
   pPVar8 = this_01;
   iVar5 = 0;
   do {
      iVar6 = iVar5 + 1;
      *(uint*)pPVar8 = -(uint)(iVar5 == __LC4) & (uint)_LC6;
      *(uint*)( pPVar8 + 4 ) = -(uint)(iVar5 == _UNK_00104a54) & (uint)_LC6;
      *(uint*)( pPVar8 + 8 ) = -(uint)(iVar5 == _UNK_00104a58) & (uint)_LC6;
      *(uint*)( pPVar8 + 0xc ) = -(uint)(iVar5 == _UNK_00104a5c) & (uint)_LC6;
      pPVar8 = pPVar8 + 0x10;
      iVar5 = iVar6;
   }
 while ( iVar6 != 4 );
   this_00 = (Projection*)&local_88;
   pPVar8 = this + 0x40;
   local_98 = fVar15;
   Projection(this_00);
   do {
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      pPVar7 = this;
      pPVar9 = this_01;
      do {
         fVar10 = *(float*)pPVar9;
         fVar1 = *(float*)pPVar7;
         pPVar2 = pPVar7 + 4;
         pPVar3 = pPVar7 + 8;
         pPVar4 = pPVar7 + 0xc;
         pPVar7 = pPVar7 + 0x10;
         pPVar9 = pPVar9 + 4;
         fVar12 = fVar12 + fVar10 * fVar1;
         fVar13 = fVar13 + fVar10 * *(float*)pPVar2;
         fVar14 = fVar14 + fVar10 * *(float*)pPVar3;
         fVar15 = fVar15 + fVar10 * *(float*)pPVar4;
      }
 while ( pPVar7 != pPVar8 );
      *(float*)this_00 = fVar12;
      *(float*)( this_00 + 4 ) = fVar13;
      *(float*)( this_00 + 8 ) = fVar14;
      *(float*)( this_00 + 0xc ) = fVar15;
      this_00 = this_00 + 0x10;
      this_01 = this_01 + 0x10;
   }
 while ( local_48 != this_00 );
   *(undefined8*)this = local_88;
   *(undefined8*)( this + 8 ) = uStack_80;
   *(undefined8*)( this + 0x20 ) = local_68;
   *(undefined8*)( this + 0x28 ) = uStack_60;
   *(undefined8*)( this + 0x10 ) = local_78;
   *(undefined8*)( this + 0x18 ) = uStack_70;
   *(undefined8*)( this + 0x30 ) = local_58;
   *(undefined8*)( this + 0x38 ) = uStack_50;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::create_perspective_hmd(float, float, float, float, bool, int, float, float) */Projection * __thiscall
Projection::create_perspective_hmd
          (Projection *this,float param_1,float param_2,float param_3,float param_4,bool param_5,
          int param_6,float param_7,float param_8){
   Projection *this_00;
   this_00 = this;
   Projection(this);
   set_perspective(this_00, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
   return this;
}
/* Projection::TEMPNAMEPLACEHOLDERVALUE(Projection const&) const */Projection * __thiscall Projection::operator*(Projection *this,Projection *param_1){
   float *pfVar1;
   float fVar2;
   Projection *pPVar3;
   Projection *pPVar4;
   float *pfVar5;
   float *in_RDX;
   Projection *pPVar6;
   Projection *pPVar7;
   Projection *pPVar8;
   Projection *pPVar9;
   Projection *pPVar10;
   float fVar11;
   pfVar1 = in_RDX + 0x10;
   pPVar10 = param_1 + 0x40;
   pPVar7 = param_1 + 0x50;
   pPVar9 = this;
   Projection(this);
   pPVar6 = pPVar10;
   pPVar8 = this;
   do {
      do {
         fVar11 = 0.0;
         pPVar3 = pPVar6 + -0x40;
         pfVar5 = in_RDX;
         do {
            pPVar4 = pPVar3;
            fVar2 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            fVar11 = fVar11 + *(float*)pPVar4 * fVar2;
            pPVar3 = pPVar4 + 0x10;
         }
 while ( pPVar4 + 0x10 != pPVar6 );
         *(float*)this = fVar11;
         this =
         this + 4;
         pPVar6 = pPVar4 + 0x14;
      }
 while ( pPVar4 + 0x14 != pPVar7 );
      in_RDX = in_RDX + 4;
      this =
      pPVar8 + 0x10;
      pPVar6 = pPVar10;
      pPVar8 = this;
   }
 while ( in_RDX != pfVar1 );
   return pPVar9;
}
/* Projection::set_depth_correction(bool, bool, bool) */void Projection::set_depth_correction(Projection *this, bool param_1, bool param_2, bool param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uVar2 = _LC6;
   uVar1 = _LC6;
   if (param_1) {
      uVar1 = _LC16;
   }

   if (param_3) {
      uVar3 = _LC20;
      uVar4 = _LC20;
      if (param_2) {
         uVar3 = _LC39;
      }

   }
 else if (param_2) {
      uVar3 = _LC16;
      uVar4 = 0;
   }
 else {
      uVar3 = _LC6;
      uVar4 = 0;
   }

   *(undefined4*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x2c ) = 0;
   *(undefined4*)( this + 0x34 ) = 0;
   *(undefined1(*) [16])this = ZEXT416(uVar2);
   *(uint*)( this + 0x14 ) = uVar1;
   *(uint*)( this + 0x28 ) = uVar3;
   *(uint*)( this + 0x38 ) = uVar4;
   *(uint*)( this + 0x3c ) = uVar2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::set_light_bias() */void Projection::set_light_bias(Projection *this) {
   undefined8 uVar1;
   *(undefined1(*) [16])this = ZEXT416(_LC20);
   uVar1 = _UNK_00104ac8;
   *(undefined8*)( this + 0x10 ) = __LC41;
   *(undefined8*)( this + 0x18 ) = uVar1;
   uVar1 = _UNK_00104ad8;
   *(undefined8*)( this + 0x20 ) = __LC42;
   *(undefined8*)( this + 0x28 ) = uVar1;
   uVar1 = _UNK_00104ae8;
   *(undefined8*)( this + 0x30 ) = _LC19;
   *(undefined8*)( this + 0x38 ) = uVar1;
   return;
}
/* Projection::set_light_atlas_rect(Rect2 const&) */void Projection::set_light_atlas_rect(Projection *this, Rect2 *param_1) {
   undefined4 uVar1;
   uVar1 = *(undefined4*)( param_1 + 8 );
   *(undefined8*)( this + 4 ) = 0;
   *(undefined8*)( this + 0xc ) = 0;
   *(undefined4*)this = uVar1;
   uVar1 = *(undefined4*)( param_1 + 0xc );
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0x3f800000;
   *(undefined4*)( this + 0x14 ) = uVar1;
   *(undefined4*)( this + 0x30 ) = *(undefined4*)param_1;
   uVar1 = *(undefined4*)( param_1 + 4 );
   *(undefined8*)( this + 0x38 ) = 0x3f80000000000000;
   *(undefined4*)( this + 0x34 ) = uVar1;
   return;
}
/* Projection::operator String() const */Projection * __thiscall Projection::operator_cast_to_String(Projection *this){
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_50 = 1;
   local_58 = "]";
   String::parse_latin1((StrRange*)&local_60);
   Vector4::operator_cast_to_String((Vector4*)&local_68);
   local_78 = 0;
   local_58 = ", W: ";
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_78);
   Vector4::operator_cast_to_String((Vector4*)&local_88);
   local_58 = ", Z: ";
   local_98 = 0;
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_98);
   Vector4::operator_cast_to_String((Vector4*)&local_a8);
   local_58 = ", Y: ";
   local_b8 = 0;
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_b8);
   Vector4::operator_cast_to_String((Vector4*)&local_c8);
   operator+((char *)&
   local_c0,&_LC48;
   String::operator +((String*)&local_b0, (String*)&local_c0);
   String::operator +((String*)&local_a0, (String*)&local_b0);
   String::operator +((String*)&local_90, (String*)&local_a0);
   String::operator +((String*)&local_80, (String*)&local_90);
   String::operator +((String*)&local_70, (String*)&local_80);
   String::operator +((String*)&local_58, (String*)&local_70);
   String::operator +((String*)this, (String*)&local_58);
   pcVar3 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
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

   lVar2 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
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

   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::get_aspect() const */float Projection::get_aspect(Projection *this) {
   float fVar1;
   float extraout_XMM0_Db;
   fVar1 = (float)get_viewport_half_extents(this);
   return fVar1 / extraout_XMM0_Db;
}
/* Projection::get_pixels_per_meter(int) const */int Projection::get_pixels_per_meter(Projection *this, int param_1) {
   return (int)( ( (double)( ( ( ( *(float*)( this + 0x10 ) * 0.0 + *(float*)this ) - *(float*)( this + 0x20 ) ) + *(float*)( this + 0x30 ) ) / ( ( ( *(float*)( this + 0x1c ) * 0.0 + *(float*)( this + 0xc ) ) - *(float*)( this + 0x2c ) ) + *(float*)( this + 0x3c ) ) ) * _LC13 + _LC13 ) * (double)param_1 );
}
/* Projection::is_orthogonal() const */ulong Projection::is_orthogonal(Projection *this) {
   undefined8 in_RAX;
   ulong uVar1;
   uVar1 = CONCAT71(( int7 )((ulong)in_RAX >> 8), !NAN(_LC6) && !NAN(*(float *)(this + 0x3c))) & 0xffffffff;
   if (_LC6 != *(float*)( this + 0x3c )) {
      uVar1 = 0;
   }

   return uVar1;
}
/* Projection::get_fov() const */void Projection::get_fov(Projection *this) {
   float fVar1;
   float fVar2;
   long lVar3;
   float fVar4;
   float fVar5;
   long in_FS_OFFSET;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar4 = *(float*)( this + 0xc );
   fVar1 = *(float*)this;
   Plane::normalize();
   if (( *(float*)( this + 0x20 ) == 0.0 ) && ( *(float*)( this + 0x24 ) == 0.0 )) {
      fVar4 = ABS(fVar4 - fVar1);
      if (( _LC16 <= fVar4 ) && ( fVar4 <= _LC6 )) {
         acosf(fVar4);
      }

   }
 else {
      fVar5 = *(float*)( this + 0xc );
      fVar2 = *(float*)this;
      Plane::normalize();
      fVar5 = ABS(fVar5 + fVar2);
      if (( _LC16 <= fVar5 ) && ( fVar5 <= _LC6 )) {
         acosf(fVar5);
      }

      fVar4 = ABS(fVar4 - fVar1);
      if (( _LC16 <= fVar4 ) && ( fVar4 <= _LC6 )) {
         acosf(fVar4);
      }

   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Projection::get_lod_multiplier() const */void Projection::get_lod_multiplier(Projection *this) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(float*)( this + 0x3c ) == _LC6) {
      fVar2 = (float)get_viewport_half_extents(this);
   }
 else {
      fVar2 = *(float*)( this + 0x38 );
      fVar3 = (float)( ( uint ) * (float*)( this + 0x3c ) ^ _LC11 );
      Plane::normalize();
      fVar4 = (float)get_viewport_half_extents(this);
      fVar2 = _LC6 / ( ( fVar3 - fVar2 ) / ( fVar4 + fVar4 ) );
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail(fVar2);
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::make_scale(Vector3 const&) */void Projection::make_scale(Projection *this, Vector3 *param_1) {
   Projection *pPVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   long lVar9;
   long lVar8;
   uVar6 = _LC6;
   iVar5 = _UNK_00104a5c;
   iVar4 = _UNK_00104a58;
   iVar3 = _UNK_00104a54;
   iVar2 = __LC4;
   lVar8 = 0;
   do {
      iVar7 = (int)lVar8;
      lVar9 = lVar8 + 1;
      pPVar1 = this + lVar8 * 0x10;
      *(uint*)pPVar1 = -(uint)(iVar7 == iVar2) & uVar6;
      *(uint*)( pPVar1 + 4 ) = -(uint)(iVar7 == iVar3) & uVar6;
      *(uint*)( pPVar1 + 8 ) = -(uint)(iVar7 == iVar4) & uVar6;
      *(uint*)( pPVar1 + 0xc ) = -(uint)(iVar7 == iVar5) & uVar6;
      lVar8 = lVar9;
   }
 while ( lVar9 != 4 );
   *(undefined4*)this = *(undefined4*)param_1;
   *(undefined4*)( this + 0x14 ) = *(undefined4*)( param_1 + 4 );
   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 8 );
   return;
}
/* Projection::scale_translate_to_fit(AABB const&) */void Projection::scale_translate_to_fit(Projection *this, AABB *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   uint uVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   fVar8 = *(float*)param_1;
   fVar1 = *(float*)( param_1 + 0xc );
   fVar2 = *(float*)( param_1 + 4 );
   fVar3 = *(float*)( param_1 + 0x10 );
   fVar4 = *(float*)( param_1 + 8 );
   fVar5 = *(float*)( param_1 + 0x14 );
   *(undefined8*)( this + 4 ) = 0;
   fVar7 = _LC17;
   *(undefined8*)( this + 0xc ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   uVar6 = _LC11;
   fVar9 = ( fVar1 + fVar8 ) - fVar8;
   *(undefined4*)( this + 0x2c ) = 0;
   *(undefined4*)( this + 0x3c ) = 0x3f800000;
   *(float*)this = fVar7 / fVar9;
   *(float*)( this + 0x30 ) = (float)( ( uint )(fVar8 + fVar1 + fVar8) ^ uVar6 ) / fVar9;
   fVar8 = ( fVar3 + fVar2 ) - fVar2;
   *(float*)( this + 0x14 ) = fVar7 / fVar8;
   *(float*)( this + 0x34 ) = (float)( ( uint )(fVar2 + fVar3 + fVar2) ^ uVar6 ) / fVar8;
   fVar8 = ( fVar5 + fVar4 ) - fVar4;
   *(float*)( this + 0x28 ) = fVar7 / fVar8;
   *(float*)( this + 0x38 ) = (float)( ( uint )(fVar4 + fVar5 + fVar4) ^ uVar6 ) / fVar8;
   return;
}
/* Projection::create_fit_aabb(AABB const&) */void Projection::create_fit_aabb(Projection *this, AABB *param_1) {
   Projection(this);
   scale_translate_to_fit(this, param_1);
   return;
}
/* Projection::add_jitter_offset(Vector2 const&) */void Projection::add_jitter_offset(Projection *this, Vector2 *param_1) {
   *(float*)( this + 0x30 ) = *(float*)( this + 0x30 ) + *(float*)param_1;
   *(float*)( this + 0x34 ) = *(float*)( this + 0x34 ) + *(float*)( param_1 + 4 );
   return;
}
/* Projection::operator Transform3D() const */Projection * __thiscall Projection::operator_cast_to_Transform3D(Projection *this){
   undefined4 uVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   undefined4 *in_RSI;
   uVar1 = in_RSI[6];
   uVar2 = in_RSI[2];
   uVar3 = in_RSI[9];
   uVar4 = in_RSI[0xc];
   uVar5 = in_RSI[4];
   uVar6 = in_RSI[0xd];
   uVar7 = in_RSI[0xe];
   *(undefined4*)( this + 0x10 ) = in_RSI[5];
   *(undefined4*)( this + 0x14 ) = uVar3;
   *(undefined4*)( this + 0x18 ) = uVar2;
   *(undefined4*)( this + 0x1c ) = uVar1;
   uVar1 = in_RSI[8];
   uVar2 = in_RSI[1];
   *(undefined4*)( this + 0x20 ) = in_RSI[10];
   *(undefined4*)( this + 0x24 ) = uVar4;
   *(undefined4*)( this + 0x28 ) = uVar6;
   *(undefined4*)( this + 0x2c ) = uVar7;
   *(undefined4*)this = *in_RSI;
   *(undefined4*)( this + 4 ) = uVar5;
   *(undefined4*)( this + 8 ) = uVar1;
   *(undefined4*)( this + 0xc ) = uVar2;
   return this;
}
/* Projection::Projection(Vector4 const&, Vector4 const&, Vector4 const&, Vector4 const&) */void Projection::Projection(Projection *this, Vector4 *param_1, Vector4 *param_2, Vector4 *param_3, Vector4 *param_4) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 16 ) ) = (undefined1[16])0;
   }

   uVar1 = *(undefined8*)( param_1 + 8 );
   uVar2 = *(undefined8*)param_2;
   uVar3 = *(undefined8*)( param_2 + 8 );
   uVar4 = *(undefined8*)param_3;
   uVar5 = *(undefined8*)( param_3 + 8 );
   uVar6 = *(undefined8*)param_4;
   uVar7 = *(undefined8*)( param_4 + 8 );
   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)( this + 8 ) = uVar1;
   *(undefined8*)( this + 0x10 ) = uVar2;
   *(undefined8*)( this + 0x18 ) = uVar3;
   *(undefined8*)( this + 0x20 ) = uVar4;
   *(undefined8*)( this + 0x28 ) = uVar5;
   *(undefined8*)( this + 0x30 ) = uVar6;
   *(undefined8*)( this + 0x38 ) = uVar7;
   return;
}
/* Projection::Projection(Transform3D const&) */void Projection::Projection(Projection *this, Transform3D *param_1) {
   undefined4 uVar1;
   ulong uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined1 auVar5[12];
   uVar4 = *(undefined8*)( param_1 + 0x24 );
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   uVar2 = *(ulong*)( param_1 + 8 );
   uVar3 = *(undefined8*)param_1;
   *(undefined8*)( this + 0x30 ) = uVar4;
   *(undefined4*)( this + 0x3c ) = 0x3f800000;
   auVar5._4_8_ = uVar2 >> 0x20;
   auVar5._0_4_ = (int)uVar3;
   uVar1 = *(undefined4*)( param_1 + 0x10 );
   *(long*)this = auVar5._0_8_;
   *(undefined4*)( this + 8 ) = *(undefined4*)( param_1 + 0x18 );
   *(ulong*)( this + 0x10 ) = CONCAT44(uVar1, *(undefined4*)( param_1 + 4 ));
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x1c );
   *(ulong*)( this + 0x20 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20 ), (int)uVar2);
   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x38 ) = *(undefined4*)( param_1 + 0x2c );
   return;
}
/* Projection::~Projection() */void Projection::~Projection(Projection *this) {
   return;
}
/* Projection::get_projection_planes(Transform3D const&) const */Transform3D *Projection::get_projection_planes(Transform3D *param_1) {
   CowData<Plane> *this;
   float fVar1;
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
   float fVar12;
   code *pcVar13;
   undefined8 *puVar14;
   long lVar15;
   float *in_RDX;
   undefined8 *puVar16;
   undefined8 *puVar17;
   float *in_RSI;
   long lVar18;
   long in_FS_OFFSET;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float local_68;
   float local_64;
   float local_60;
   float local_5c;
   float local_58;
   float local_54;
   float local_50;
   float local_4c;
   float local_48;
   this(CowData<Plane> * )(param_1 + 8);
   lVar15 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   CowData<Plane>::_copy_on_write(this);
   puVar14 = (undefined8*)Memory::alloc_static(0x90, false);
   if (puVar14 == (undefined8*)0x0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
   }
 else {
      *puVar14 = 1;
      *(undefined8**)( param_1 + 8 ) = puVar14 + 2;
      puVar16 = puVar14 + 2;
      do {
         *puVar16 = 0;
         puVar17 = puVar16 + 2;
         *(undefined4*)( puVar16 + 1 ) = 0;
         *(undefined4*)( (long)puVar16 + 0xc ) = 0;
         puVar16 = puVar17;
      }
 while ( puVar14 + 0xe != puVar17 );
      puVar14[1] = 6;
   }

   fVar24 = in_RSI[0xf] + in_RSI[0xe];
   fVar19 = (float)( ( uint )(in_RSI[3] + in_RSI[2]) ^ _LC11 );
   fVar22 = (float)( ( uint )(in_RSI[7] + in_RSI[6]) ^ _LC11 );
   fVar21 = (float)( ( uint )(in_RSI[0xb] + in_RSI[10]) ^ _LC11 );
   Plane::normalize();
   Basis::inverse();
   Basis::transpose();
   fVar1 = in_RDX[6];
   fVar2 = in_RDX[7];
   fVar25 = fVar24 * fVar22;
   fVar3 = in_RDX[4];
   fVar20 = fVar24 * fVar19;
   fVar24 = fVar24 * fVar21;
   fVar4 = in_RDX[1];
   fVar5 = in_RDX[8];
   fVar6 = in_RDX[3];
   fVar7 = in_RDX[0xb];
   fVar8 = *in_RDX;
   fVar9 = in_RDX[5];
   fVar10 = in_RDX[2];
   fVar11 = in_RDX[10];
   fVar12 = in_RDX[9];
   fVar23 = local_50 * fVar19 + local_4c * fVar22 + local_48 * fVar21;
   fVar26 = local_5c * fVar19 + local_58 * fVar22 + local_54 * fVar21;
   fVar19 = fVar19 * local_68 + fVar22 * local_64 + fVar21 * local_60;
   fVar21 = fVar19 * fVar19 + fVar26 * fVar26 + fVar23 * fVar23;
   if (fVar21 == 0.0) {
      fVar23 = 0.0;
      fVar19 = 0.0;
      fVar26 = fVar19;
   }
 else {
      fVar21 = SQRT(fVar21);
      fVar19 = fVar19 / fVar21;
      fVar26 = fVar26 / fVar21;
      fVar23 = fVar23 / fVar21;
   }

   if (*(long*)( param_1 + 8 ) == 0) {
      lVar18 = 0;
   }
 else {
      lVar18 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
      if (0 < lVar18) {
         CowData<Plane>::_copy_on_write(this);
         puVar14 = *(undefined8**)( param_1 + 8 );
         *puVar14 = CONCAT44(fVar26, fVar19);
         puVar14[1] = CONCAT44(( fVar20 * fVar8 + fVar25 * fVar4 + fVar24 * fVar10 + fVar12 ) * fVar19 + ( fVar6 * fVar20 + fVar3 * fVar25 + fVar9 * fVar24 + fVar11 ) * fVar26 + ( fVar1 * fVar20 + fVar2 * fVar25 + fVar5 * fVar24 + fVar7 ) * fVar23, fVar23);
         fVar24 = in_RSI[0xf] - in_RSI[0xe];
         fVar19 = (float)( ( uint )(in_RSI[3] - in_RSI[2]) ^ _LC11 );
         fVar22 = (float)( ( uint )(in_RSI[7] - in_RSI[6]) ^ _LC11 );
         fVar21 = (float)( ( uint )(in_RSI[0xb] - in_RSI[10]) ^ _LC11 );
         Plane::normalize();
         Basis::inverse();
         Basis::transpose();
         fVar1 = in_RDX[6];
         fVar2 = in_RDX[7];
         fVar25 = fVar24 * fVar22;
         fVar3 = in_RDX[4];
         fVar20 = fVar24 * fVar19;
         fVar24 = fVar24 * fVar21;
         fVar4 = in_RDX[1];
         fVar5 = in_RDX[8];
         fVar6 = in_RDX[3];
         fVar7 = in_RDX[0xb];
         fVar8 = *in_RDX;
         fVar9 = in_RDX[5];
         fVar10 = in_RDX[2];
         fVar11 = in_RDX[10];
         fVar12 = in_RDX[9];
         fVar23 = local_50 * fVar19 + local_4c * fVar22 + local_48 * fVar21;
         fVar26 = local_5c * fVar19 + local_58 * fVar22 + local_54 * fVar21;
         fVar19 = fVar19 * local_68 + fVar22 * local_64 + fVar21 * local_60;
         fVar21 = fVar19 * fVar19 + fVar26 * fVar26 + fVar23 * fVar23;
         if (fVar21 == 0.0) {
            fVar23 = 0.0;
            fVar19 = 0.0;
            fVar26 = fVar19;
         }
 else {
            fVar21 = SQRT(fVar21);
            fVar19 = fVar19 / fVar21;
            fVar26 = fVar26 / fVar21;
            fVar23 = fVar23 / fVar21;
         }

         if (*(long*)( param_1 + 8 ) == 0) {
            lVar18 = 0;
         }
 else {
            lVar18 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            if (1 < lVar18) {
               CowData<Plane>::_copy_on_write(this);
               lVar18 = *(long*)( param_1 + 8 );
               *(ulong*)( lVar18 + 0x10 ) = CONCAT44(fVar26, fVar19);
               *(ulong*)( lVar18 + 0x18 ) = CONCAT44(( fVar20 * fVar8 + fVar25 * fVar4 + fVar24 * fVar10 + fVar12 ) * fVar19 + ( fVar6 * fVar20 + fVar3 * fVar25 + fVar9 * fVar24 + fVar11 ) * fVar26 + ( fVar1 * fVar20 + fVar2 * fVar25 + fVar5 * fVar24 + fVar7 ) * fVar23, fVar23);
               fVar24 = in_RSI[0xf] + in_RSI[0xc];
               fVar19 = (float)( ( uint )(in_RSI[3] + *in_RSI) ^ _LC11 );
               fVar22 = (float)( ( uint )(in_RSI[7] + in_RSI[4]) ^ _LC11 );
               fVar21 = (float)( ( uint )(in_RSI[0xb] + in_RSI[8]) ^ _LC11 );
               Plane::normalize();
               Basis::inverse();
               Basis::transpose();
               fVar1 = in_RDX[6];
               fVar2 = in_RDX[7];
               fVar25 = fVar24 * fVar22;
               fVar3 = in_RDX[4];
               fVar20 = fVar24 * fVar19;
               fVar24 = fVar24 * fVar21;
               fVar4 = in_RDX[1];
               fVar5 = in_RDX[8];
               fVar6 = in_RDX[3];
               fVar7 = in_RDX[0xb];
               fVar8 = *in_RDX;
               fVar9 = in_RDX[5];
               fVar10 = in_RDX[2];
               fVar11 = in_RDX[10];
               fVar12 = in_RDX[9];
               fVar23 = local_50 * fVar19 + local_4c * fVar22 + local_48 * fVar21;
               fVar26 = local_5c * fVar19 + local_58 * fVar22 + local_54 * fVar21;
               fVar19 = fVar19 * local_68 + fVar22 * local_64 + fVar21 * local_60;
               fVar21 = fVar19 * fVar19 + fVar26 * fVar26 + fVar23 * fVar23;
               if (fVar21 == 0.0) {
                  fVar23 = 0.0;
                  fVar19 = 0.0;
                  fVar26 = fVar19;
               }
 else {
                  fVar21 = SQRT(fVar21);
                  fVar19 = fVar19 / fVar21;
                  fVar26 = fVar26 / fVar21;
                  fVar23 = fVar23 / fVar21;
               }

               if (*(long*)( param_1 + 8 ) == 0) {
                  lVar18 = 0;
               }
 else {
                  lVar18 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
                  if (2 < lVar18) {
                     CowData<Plane>::_copy_on_write(this);
                     lVar18 = *(long*)( param_1 + 8 );
                     *(ulong*)( lVar18 + 0x20 ) = CONCAT44(fVar26, fVar19);
                     *(ulong*)( lVar18 + 0x28 ) = CONCAT44(( fVar20 * fVar8 + fVar25 * fVar4 + fVar24 * fVar10 + fVar12 ) * fVar19 + ( fVar6 * fVar20 + fVar3 * fVar25 + fVar9 * fVar24 + fVar11 ) * fVar26 + ( fVar1 * fVar20 + fVar2 * fVar25 + fVar5 * fVar24 + fVar7 ) * fVar23, fVar23);
                     fVar24 = in_RSI[0xf] - in_RSI[0xd];
                     fVar19 = (float)( ( uint )(in_RSI[3] - in_RSI[1]) ^ _LC11 );
                     fVar22 = (float)( ( uint )(in_RSI[7] - in_RSI[5]) ^ _LC11 );
                     fVar21 = (float)( ( uint )(in_RSI[0xb] - in_RSI[9]) ^ _LC11 );
                     Plane::normalize();
                     Basis::inverse();
                     Basis::transpose();
                     fVar1 = in_RDX[6];
                     fVar2 = in_RDX[7];
                     fVar25 = fVar24 * fVar22;
                     fVar3 = in_RDX[4];
                     fVar20 = fVar24 * fVar19;
                     fVar24 = fVar24 * fVar21;
                     fVar4 = in_RDX[1];
                     fVar5 = in_RDX[8];
                     fVar6 = in_RDX[3];
                     fVar7 = in_RDX[0xb];
                     fVar8 = *in_RDX;
                     fVar9 = in_RDX[5];
                     fVar10 = in_RDX[2];
                     fVar11 = in_RDX[10];
                     fVar12 = in_RDX[9];
                     fVar23 = local_50 * fVar19 + local_4c * fVar22 + local_48 * fVar21;
                     fVar26 = local_5c * fVar19 + local_58 * fVar22 + local_54 * fVar21;
                     fVar19 = fVar19 * local_68 + fVar22 * local_64 + fVar21 * local_60;
                     fVar21 = fVar19 * fVar19 + fVar26 * fVar26 + fVar23 * fVar23;
                     if (fVar21 == 0.0) {
                        fVar23 = 0.0;
                        fVar19 = 0.0;
                        fVar26 = fVar19;
                     }
 else {
                        fVar21 = SQRT(fVar21);
                        fVar19 = fVar19 / fVar21;
                        fVar26 = fVar26 / fVar21;
                        fVar23 = fVar23 / fVar21;
                     }

                     if (*(long*)( param_1 + 8 ) == 0) {
                        lVar18 = 0;
                     }
 else {
                        lVar18 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
                        if (3 < lVar18) {
                           CowData<Plane>::_copy_on_write(this);
                           lVar18 = *(long*)( param_1 + 8 );
                           *(ulong*)( lVar18 + 0x30 ) = CONCAT44(fVar26, fVar19);
                           *(ulong*)( lVar18 + 0x38 ) = CONCAT44(( fVar20 * fVar8 + fVar25 * fVar4 + fVar24 * fVar10 + fVar12 ) * fVar19 + ( fVar6 * fVar20 + fVar3 * fVar25 + fVar9 * fVar24 + fVar11 ) * fVar26 + ( fVar1 * fVar20 + fVar2 * fVar25 + fVar5 * fVar24 + fVar7 ) * fVar23, fVar23);
                           fVar24 = in_RSI[0xf] - in_RSI[0xc];
                           fVar19 = (float)( ( uint )(in_RSI[3] - *in_RSI) ^ _LC11 );
                           fVar22 = (float)( ( uint )(in_RSI[7] - in_RSI[4]) ^ _LC11 );
                           fVar21 = (float)( ( uint )(in_RSI[0xb] - in_RSI[8]) ^ _LC11 );
                           Plane::normalize();
                           Basis::inverse();
                           Basis::transpose();
                           fVar1 = in_RDX[6];
                           fVar2 = in_RDX[7];
                           fVar25 = fVar24 * fVar22;
                           fVar3 = in_RDX[4];
                           fVar20 = fVar24 * fVar19;
                           fVar24 = fVar24 * fVar21;
                           fVar4 = in_RDX[1];
                           fVar5 = in_RDX[8];
                           fVar6 = in_RDX[3];
                           fVar7 = in_RDX[0xb];
                           fVar8 = *in_RDX;
                           fVar9 = in_RDX[5];
                           fVar10 = in_RDX[2];
                           fVar11 = in_RDX[10];
                           fVar12 = in_RDX[9];
                           fVar23 = local_50 * fVar19 + local_4c * fVar22 + local_48 * fVar21;
                           fVar26 = local_5c * fVar19 + local_58 * fVar22 + local_54 * fVar21;
                           fVar19 = fVar19 * local_68 + fVar22 * local_64 + fVar21 * local_60;
                           fVar21 = fVar19 * fVar19 + fVar26 * fVar26 + fVar23 * fVar23;
                           if (fVar21 == 0.0) {
                              fVar23 = 0.0;
                              fVar19 = 0.0;
                              fVar26 = fVar19;
                           }
 else {
                              fVar21 = SQRT(fVar21);
                              fVar19 = fVar19 / fVar21;
                              fVar26 = fVar26 / fVar21;
                              fVar23 = fVar23 / fVar21;
                           }

                           if (*(long*)( param_1 + 8 ) == 0) {
                              lVar18 = 0;
                           }
 else {
                              lVar18 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
                              if (4 < lVar18) {
                                 CowData<Plane>::_copy_on_write(this);
                                 lVar18 = *(long*)( param_1 + 8 );
                                 *(ulong*)( lVar18 + 0x40 ) = CONCAT44(fVar26, fVar19);
                                 *(ulong*)( lVar18 + 0x48 ) = CONCAT44(( fVar20 * fVar8 + fVar25 * fVar4 + fVar24 * fVar10 + fVar12 ) * fVar19 + ( fVar6 * fVar20 + fVar3 * fVar25 + fVar9 * fVar24 + fVar11 ) * fVar26 + ( fVar1 * fVar20 + fVar2 * fVar25 + fVar5 * fVar24 + fVar7 ) * fVar23, fVar23);
                                 fVar24 = in_RSI[0xf] + in_RSI[0xd];
                                 fVar19 = (float)( ( uint )(in_RSI[3] + in_RSI[1]) ^ _LC11 );
                                 fVar22 = (float)( ( uint )(in_RSI[7] + in_RSI[5]) ^ _LC11 );
                                 fVar21 = (float)( ( uint )(in_RSI[0xb] + in_RSI[9]) ^ _LC11 );
                                 Plane::normalize();
                                 Basis::inverse();
                                 Basis::transpose();
                                 fVar1 = in_RDX[6];
                                 fVar2 = in_RDX[7];
                                 fVar25 = fVar24 * fVar22;
                                 fVar3 = in_RDX[4];
                                 fVar20 = fVar24 * fVar19;
                                 fVar24 = fVar24 * fVar21;
                                 fVar4 = in_RDX[1];
                                 fVar5 = in_RDX[8];
                                 fVar6 = in_RDX[3];
                                 fVar7 = in_RDX[0xb];
                                 fVar8 = *in_RDX;
                                 fVar9 = in_RDX[5];
                                 fVar10 = in_RDX[2];
                                 fVar11 = in_RDX[10];
                                 fVar12 = in_RDX[9];
                                 fVar23 = local_50 * fVar19 + local_4c * fVar22 + local_48 * fVar21;
                                 fVar26 = local_5c * fVar19 + local_58 * fVar22 + local_54 * fVar21;
                                 fVar19 = fVar19 * local_68 + fVar22 * local_64 + fVar21 * local_60;
                                 fVar21 = fVar19 * fVar19 + fVar26 * fVar26 + fVar23 * fVar23;
                                 if (fVar21 == 0.0) {
                                    fVar23 = 0.0;
                                    fVar19 = 0.0;
                                    fVar26 = fVar19;
                                 }
 else {
                                    fVar21 = SQRT(fVar21);
                                    fVar19 = fVar19 / fVar21;
                                    fVar26 = fVar26 / fVar21;
                                    fVar23 = fVar23 / fVar21;
                                 }

                                 if (*(long*)( param_1 + 8 ) == 0) {
                                    lVar18 = 0;
                                 }
 else {
                                    lVar18 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
                                    if (5 < lVar18) {
                                       CowData<Plane>::_copy_on_write(this);
                                       lVar18 = *(long*)( param_1 + 8 );
                                       *(float*)( lVar18 + 0x50 ) = fVar19;
                                       *(float*)( lVar18 + 0x54 ) = fVar26;
                                       *(float*)( lVar18 + 0x58 ) = fVar23;
                                       *(float*)( lVar18 + 0x5c ) = ( fVar20 * fVar8 + fVar25 * fVar4 + fVar24 * fVar10 + fVar12 ) * fVar19 + ( fVar6 * fVar20 + fVar3 * fVar25 + fVar9 * fVar24 + fVar11 ) * fVar26 + ( fVar1 * fVar20 + fVar2 * fVar25 + fVar5 * fVar24 + fVar7 ) * fVar23;
                                       if (lVar15 != *(long*)( in_FS_OFFSET + 0x28 )) {
                                          /* WARNING: Subroutine does not return */
                                          __stack_chk_fail();
                                       }

                                       return param_1;
                                    }

                                 }

                                 lVar15 = 5;
                                 goto LAB_00104320;
                              }

                           }

                           lVar15 = 4;
                           goto LAB_00104320;
                        }

                     }

                     lVar15 = 3;
                     goto LAB_00104320;
                  }

               }

               lVar15 = 2;
               goto LAB_00104320;
            }

         }

         lVar15 = 1;
         goto LAB_00104320;
      }

   }

   lVar15 = 0;
   LAB_00104320:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar15, lVar18, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar13 = (code*)invalidInstructionException();
   ( *pcVar13 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Projection::get_endpoints(Transform3D const&, Vector3*) const */undefined4 Projection::get_endpoints(Projection *this, Transform3D *param_1, Vector3 *param_2) {
   long *plVar1;
   undefined8 *puVar2;
   float fVar3;
   float fVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   code *pcVar9;
   long lVar10;
   undefined4 uVar11;
   ulong uVar12;
   long lVar13;
   uint *puVar14;
   long in_FS_OFFSET;
   float fVar15;
   float fVar16;
   Transform3D local_f8[8];
   long local_f0;
   undefined8 local_e8;
   float local_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   uint local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar14 = (uint*)local_a8;
   local_a8 = ZEXT416(_LC6);
   local_88 = 0x3f800000;
   uStack_84 = 0;
   uStack_80 = 0;
   uStack_7c = 0;
   local_98 = local_a8;
   get_projection_planes(local_f8);
   lVar10 = local_f0;
   uVar12 = 1;
   local_a8._8_8_ = _UNK_00104af8;
   local_a8._0_8_ = __LC59;
   local_98._8_8_ = _UNK_00104b08;
   local_98._0_8_ = __LC60;
   local_88 = (undefined4)__LC61;
   uStack_84 = ( undefined4 )((ulong)__LC61 >> 0x20);
   uStack_80 = (undefined4)_UNK_00104b18;
   uStack_7c = ( undefined4 )((ulong)_UNK_00104b18 >> 0x20);
   local_78 = __LC62;
   uStack_70 = _UNK_00104b28;
   local_68 = __LC63;
   uStack_60 = _UNK_00104b38;
   local_58 = __LC64;
   uStack_50 = _UNK_00104b48;
   if (local_f0 == 0) {
      lVar13 = 0;
   }
 else {
      lVar13 = *(long*)( local_f0 + -8 );
      if (1 < lVar13) {
         do {
            local_e0 = 0.0;
            local_e8 = 0;
            puVar2 = (undefined8*)( lVar10 + uVar12 * 0x10 );
            local_d8 = *puVar2;
            uStack_d0 = puVar2[1];
            uVar12 = (ulong)puVar14[1];
            if (lVar13 <= (long)uVar12) break;
            puVar2 = (undefined8*)( lVar10 + uVar12 * 0x10 );
            local_c8 = *puVar2;
            uStack_c0 = puVar2[1];
            uVar12 = (ulong)puVar14[2];
            if (lVar13 <= (long)uVar12) break;
            puVar2 = (undefined8*)( lVar10 + uVar12 * 0x10 );
            local_b8 = *puVar2;
            uStack_b0 = puVar2[1];
            uVar11 = Plane::intersect_3((Plane*)&local_d8, (Plane*)&local_c8, (Vector3*)&local_b8);
            if ((char)uVar11 == '\0') {
               _err_print_error("get_endpoints", "core/math/projection.cpp", 0x1f6, "Condition \"!res\" is true. Returning: false", 0, 0);
               LAB_00104715:LOCK();
               plVar1 = (long*)( lVar10 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_f0 + -0x10 ), false);
               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return uVar11;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            puVar14 = puVar14 + 3;
            fVar15 = (float)local_e8;
            fVar16 = (float)( (ulong)local_e8 >> 0x20 );
            uVar5 = *(undefined8*)( param_1 + 8 );
            uVar6 = *(undefined8*)param_1;
            fVar3 = *(float*)( param_1 + 0x10 );
            fVar4 = *(float*)( param_1 + 4 );
            uVar7 = *(undefined8*)( param_1 + 0x10 );
            uVar8 = *(undefined8*)( param_1 + 0x24 );
            *(float*)( param_2 + 8 ) = *(float*)( param_1 + 0x18 ) * fVar15 + *(float*)( param_1 + 0x1c ) * fVar16 + *(float*)( param_1 + 0x20 ) * local_e0 + *(float*)( param_1 + 0x2c );
            *(ulong*)param_2 = CONCAT44((float)( (ulong)uVar5 >> 0x20 ) * fVar15 + fVar16 * fVar3 + (float)( (ulong)uVar7 >> 0x20 ) * local_e0 + (float)( (ulong)uVar8 >> 0x20 ), (float)uVar6 * fVar15 + fVar16 * fVar4 + (float)uVar5 * local_e0 + (float)uVar8);
            if (puVar14 == local_48) goto LAB_00104715;
            uVar12 = ( ulong ) * puVar14;
            lVar13 = *(long*)( lVar10 + -8 );
            param_2 = param_2 + 0xc;
         }
 while ( (long)uVar12 < lVar13 );
      }

   }

   local_e0 = 0.0;
   local_e8 = 0;
   _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar12, lVar13, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar9 = (code*)invalidInstructionException();
   ( *pcVar9 )();
}
/* CowData<Plane>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Plane>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Plane>::_realloc(long) */undefined8 CowData<Plane>::_realloc(CowData<Plane> *this, long param_1) {
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


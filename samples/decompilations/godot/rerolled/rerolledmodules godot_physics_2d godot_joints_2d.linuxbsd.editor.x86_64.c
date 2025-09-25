/* GodotPinJoint2D::setup(float) */ulong GodotPinJoint2D::setup(GodotPinJoint2D *this, float param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   byte bVar7;
   undefined8 unaff_RBP;
   long in_FS_OFFSET;
   float fVar9;
   float fVar10;
   undefined8 uVar11;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   ulong uVar8;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = GodotBody2D::get_mode();
   this[0x3c] = ( GodotPinJoint2D )(1 < iVar6);
   iVar6 = GodotBody2D::get_mode();
   this[0x3d] = ( GodotPinJoint2D )(1 < iVar6);
   bVar7 = 1 < iVar6 | (byte)this[0x3c];
   uVar8 = CONCAT71(( int7 )((ulong)unaff_RBP >> 8), bVar7);
   if (bVar7 != 0) {
      lVar2 = *(long*)( this + 0x40 );
      lVar3 = *(long*)( lVar2 + 0x40 );
      if (lVar3 != 0) {
         lVar4 = *(long*)( this + 0x48 );
         fVar9 = (float)*(undefined8*)( this + 0x78 );
         fVar10 = (float)( ( ulong ) * (undefined8*)( this + 0x78 ) >> 0x20 );
         *(ulong*)( this + 0x68 ) = CONCAT44(fVar9 * (float)( ( ulong ) * (undefined8*)( lVar2 + 0x48 ) >> 0x20 ) + fVar10 * (float)( ( ulong ) * (undefined8*)( lVar2 + 0x50 ) >> 0x20 ), fVar9 * (float)*(undefined8*)( lVar2 + 0x48 ) + fVar10 * (float)*(undefined8*)( lVar2 + 0x50 ));
         if (lVar4 == 0) {
            *(undefined4*)( this + 0x70 ) = *(undefined4*)( this + 0x80 );
            *(undefined4*)( this + 0x74 ) = *(undefined4*)( this + 0x84 );
         }
 else {
            fVar9 = *(float*)( lVar4 + 0x48 );
            fVar10 = *(float*)( lVar4 + 0x50 );
            *(float*)( this + 0x74 ) = *(float*)( lVar4 + 0x54 ) * *(float*)( this + 0x84 ) + *(float*)( lVar4 + 0x4c ) * *(float*)( this + 0x80 );
            *(float*)( this + 0x70 ) = *(float*)( this + 0x84 ) * fVar10 + *(float*)( this + 0x80 ) * fVar9;
         }

         Transform2D::affine_inverse();
         *(undefined8*)( this + 0x50 ) = local_58;
         *(undefined8*)( this + 0x58 ) = uStack_50;
         uVar5 = _LC4;
         *(undefined8*)( this + 0x60 ) = local_48;
         if (*(long*)( this + 0x48 ) == 0) {
            uVar11 = *(undefined8*)( this + 0x70 );
         }
 else {
            uVar11 = *(undefined8*)( *(long*)( this + 0x48 ) + 0x58 );
            uVar11 = CONCAT44((float)( (ulong)uVar11 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x70 ) >> 0x20 ), (float)uVar11 + (float)*(undefined8*)( this + 0x70 ));
         }

         fVar9 = *(float*)( this + 0x30 );
         if (fVar9 == 0.0) {
            fVar9 = *(float*)( lVar3 + 0xd4 );
         }

         *(ulong*)( this + 0x88 ) = CONCAT44((float)( (uint)fVar9 ^ uVar5 ) * ( (float)( (ulong)uVar11 >> 0x20 ) - ( (float)( ( ulong ) * (undefined8*)( *(long*)( this + 0x40 ) + 0x58 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 ) ) ) * ( _LC5 / param_1 ), (float)( (uint)fVar9 ^ uVar5 ) * ( (float)uVar11 - ( (float)*(undefined8*)( *(long*)( this + 0x40 ) + 0x58 ) + (float)*(undefined8*)( this + 0x68 ) ) ) * ( _LC5 / param_1 ));
         *(float*)( this + 0x98 ) = param_1 * *(float*)( this + 0x38 );
         goto LAB_00100279;
      }

      _err_print_error("setup", "modules/godot_physics_2d/godot_joints_2d.cpp", 0x6c, "Parameter \"space\" is null.", 0, 0);
   }

   uVar8 = 0;
   LAB_00100279:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8 & 0xffffffff;
}
/* GodotGrooveJoint2D::pre_solve(float) */undefined8 GodotGrooveJoint2D::pre_solve(float param_1) {
   float fVar1;
   char cVar2;
   long lVar3;
   long in_RDI;
   long in_FS_OFFSET;
   float fVar4;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( in_RDI + 0x3c ) == '\0') {
      cVar2 = *(char*)( in_RDI + 0x3d );
   }
 else {
      lVar3 = *(long*)( in_RDI + 0x40 );
      fVar1 = *(float*)( lVar3 + 0x10c );
      fVar4 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar3 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) + fVar4 * (float)( ( uint )(( ulong ) * (undefined8*)( in_RDI + 0x70 ) >> 0x20) ^ _LC6._4_4_ ), (float)*(undefined8*)( lVar3 + 0xb8 ) + fVar4 * (float)( ( uint ) * (undefined8*)( in_RDI + 0x70 ) ^ (uint)_LC6 ));
      local_28 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x90 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar3 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x90 ) - (float)*(undefined8*)( lVar3 + 0x118 ));
      fVar4 = (float)Vector2::cross((Vector2*)&local_28);
      cVar2 = *(char*)( in_RDI + 0x3d );
      *(float*)( lVar3 + 0xc0 ) = fVar4 * fVar1 + *(float*)( lVar3 + 0xc0 );
   }

   if (cVar2 != '\0') {
      lVar3 = *(long*)( in_RDI + 0x48 );
      fVar1 = *(float*)( lVar3 + 0x10c );
      fVar4 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar3 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) + fVar4 * (float)( ( ulong ) * (undefined8*)( in_RDI + 0x70 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0xb8 ) + fVar4 * (float)*(undefined8*)( in_RDI + 0x70 ));
      local_28 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x98 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar3 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x98 ) - (float)*(undefined8*)( lVar3 + 0x118 ));
      fVar4 = (float)Vector2::cross((Vector2*)&local_28);
      *(float*)( lVar3 + 0xc0 ) = fVar4 * fVar1 + *(float*)( lVar3 + 0xc0 );
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* GodotDampedSpringJoint2D::pre_solve(float) */undefined8 GodotDampedSpringJoint2D::pre_solve(float param_1) {
   float fVar1;
   char cVar2;
   long lVar3;
   long in_RDI;
   long in_FS_OFFSET;
   float fVar4;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( in_RDI + 0x3c ) == '\0') {
      cVar2 = *(char*)( in_RDI + 0x3d );
   }
 else {
      lVar3 = *(long*)( in_RDI + 0x40 );
      fVar1 = *(float*)( lVar3 + 0x10c );
      fVar4 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar3 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) + fVar4 * (float)( ( uint )(( ulong ) * (undefined8*)( in_RDI + 0x84 ) >> 0x20) ^ _LC6._4_4_ ), (float)*(undefined8*)( lVar3 + 0xb8 ) + fVar4 * (float)( ( uint ) * (undefined8*)( in_RDI + 0x84 ) ^ (uint)_LC6 ));
      local_28 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x6c ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar3 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x6c ) - (float)*(undefined8*)( lVar3 + 0x118 ));
      fVar4 = (float)Vector2::cross((Vector2*)&local_28);
      cVar2 = *(char*)( in_RDI + 0x3d );
      *(float*)( lVar3 + 0xc0 ) = fVar4 * fVar1 + *(float*)( lVar3 + 0xc0 );
   }

   if (cVar2 != '\0') {
      lVar3 = *(long*)( in_RDI + 0x48 );
      fVar1 = *(float*)( lVar3 + 0x10c );
      fVar4 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar3 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) + fVar4 * (float)( ( ulong ) * (undefined8*)( in_RDI + 0x84 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0xb8 ) + fVar4 * (float)*(undefined8*)( in_RDI + 0x84 ));
      local_28 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x74 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar3 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x74 ) - (float)*(undefined8*)( lVar3 + 0x118 ));
      fVar4 = (float)Vector2::cross((Vector2*)&local_28);
      *(float*)( lVar3 + 0xc0 ) = fVar4 * fVar1 + *(float*)( lVar3 + 0xc0 );
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* GodotPinJoint2D::solve(float) */void GodotPinJoint2D::solve(float param_1) {
   undefined8 uVar1;
   long lVar2;
   uint uVar3;
   char cVar4;
   long lVar5;
   long in_RDI;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   undefined8 local_28;
   long local_20;
   uVar3 = _LC4;
   lVar2 = *(long*)( in_RDI + 0x40 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( in_RDI + 0x48 );
   fVar8 = *(float*)( lVar2 + 0xc0 );
   uVar1 = *(undefined8*)( lVar2 + 0x118 );
   fVar9 = (float)uVar1;
   fVar6 = ( *(float*)( in_RDI + 0x68 ) - fVar9 ) * fVar8 + *(float*)( lVar2 + 0xbc );
   fVar11 = *(float*)( lVar2 + 0xb8 ) - ( *(float*)( in_RDI + 0x6c ) - *(float*)( lVar2 + 0x11c ) ) * fVar8;
   if (lVar5 == 0) {
      fVar6 = (float)( (uint)fVar6 ^ _LC4 );
      fVar11 = (float)( (uint)fVar11 ^ _LC4 );
      goto LAB_0010075c;
   }

   fVar12 = *(float*)( lVar5 + 0xc0 );
   cVar4 = *(char*)( in_RDI + 0xbd );
   fVar6 = ( ( *(float*)( in_RDI + 0x70 ) - *(float*)( lVar5 + 0x118 ) ) * fVar12 + *(float*)( lVar5 + 0xbc ) ) - fVar6;
   fVar11 = ( *(float*)( lVar5 + 0xb8 ) - ( *(float*)( in_RDI + 0x74 ) - *(float*)( lVar5 + 0x11c ) ) * fVar12 ) - fVar11;
   if (*(char*)( in_RDI + 0xbe ) == '\0') {
      if (cVar4 == '\0') goto LAB_0010075c;
      cVar4 = '\0';
      LAB_001006be:fVar7 = *(float*)( in_RDI + 0x94 );
      fVar10 = *(float*)( in_RDI + 0x9c );
      fVar13 = *(float*)( in_RDI + 0x98 );
      fVar12 = fVar10 - ( ( ( fVar12 - fVar8 ) - *(float*)( in_RDI + 0xb8 ) ) + fVar7 ) * *(float*)( in_RDI + 0xa0 );
      if (cVar4 != '\0') goto LAB_0010084a;
      LAB_001006fc:fVar7 = (float)( (uint)fVar13 ^ _LC4 );
      if ((float)( (uint)fVar13 ^ _LC4 ) <= fVar12) {
         LAB_00100898:fVar7 = fVar13;
         if (fVar12 <= fVar13) {
            fVar7 = fVar12;
         }

      }

   }
 else {
      if (cVar4 != '\0') goto LAB_001006be;
      fVar7 = *(float*)( in_RDI + 0x94 );
      fVar10 = *(float*)( in_RDI + 0x9c );
      fVar13 = *(float*)( in_RDI + 0x98 );
      fVar12 = fVar10 - ( ( fVar12 - fVar8 ) + fVar7 ) * *(float*)( in_RDI + 0xa0 );
      LAB_0010084a:if (*(char*)( in_RDI + 0xbc ) == '\0') goto LAB_001006fc;
      if (fVar7 < 0.0) {
         fVar7 = 0.0;
         if (fVar12 < 0.0) goto LAB_0010070d;
         goto LAB_00100898;
      }

      fVar7 = (float)( (uint)fVar13 ^ _LC4 );
      if ((float)( (uint)fVar13 ^ _LC4 ) <= fVar12) {
         fVar7 = (float)( ~-(uint)(0.0 < fVar12) & (uint)fVar12 );
      }

   }

   LAB_0010070d:*(float*)( in_RDI + 0x9c ) = fVar7;
   *(float*)( lVar2 + 0xc0 ) = (float)( uVar3 ^ ( uint )(fVar7 - fVar10) ) * *(float*)( lVar2 + 0x10c ) * *(float*)( lVar2 + 0x10c ) + fVar8;
   *(float*)( lVar5 + 0xc0 ) = ( fVar7 - fVar10 ) * *(float*)( lVar5 + 0x10c ) * *(float*)( lVar5 + 0x10c ) + *(float*)( lVar5 + 0xc0 );
   LAB_0010075c:fVar12 = ( *(float*)( in_RDI + 0x8c ) - fVar6 ) - *(float*)( in_RDI + 0xa8 ) * *(float*)( in_RDI + 0xac );
   fVar6 = ( *(float*)( in_RDI + 0x88 ) - fVar11 ) - *(float*)( in_RDI + 0xac ) * *(float*)( in_RDI + 0xa4 );
   fVar8 = (float)*(undefined8*)( in_RDI + 0x58 ) * fVar12 + (float)*(undefined8*)( in_RDI + 0x50 ) * fVar6;
   fVar6 = (float)( ( ulong ) * (undefined8*)( in_RDI + 0x58 ) >> 0x20 ) * fVar12 + (float)( ( ulong ) * (undefined8*)( in_RDI + 0x50 ) >> 0x20 ) * fVar6;
   if (*(char*)( in_RDI + 0x3c ) != '\0') {
      fVar12 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x100 ) >> 0x20 );
      fVar11 = *(float*)( lVar2 + 0x10c );
      *(ulong*)( lVar2 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) + fVar12 * (float)( (uint)fVar6 ^ _LC6._4_4_ ), (float)*(undefined8*)( lVar2 + 0xb8 ) + fVar12 * (float)( (uint)fVar8 ^ (uint)_LC6 ));
      local_28 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x68 ) >> 0x20 ) - (float)( (ulong)uVar1 >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x68 ) - fVar9);
      fVar9 = (float)Vector2::cross((Vector2*)&local_28);
      lVar5 = *(long*)( in_RDI + 0x48 );
      *(float*)( lVar2 + 0xc0 ) = fVar9 * fVar11 + *(float*)( lVar2 + 0xc0 );
   }

   if (( lVar5 != 0 ) && ( *(char*)( in_RDI + 0x3d ) != '\0' )) {
      fVar9 = *(float*)( lVar5 + 0x10c );
      fVar11 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar5 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0xb8 ) >> 0x20 ) + fVar11 * fVar6, (float)*(undefined8*)( lVar5 + 0xb8 ) + fVar11 * fVar8);
      local_28 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x70 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar5 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x70 ) - (float)*(undefined8*)( lVar5 + 0x118 ));
      fVar11 = (float)Vector2::cross((Vector2*)&local_28);
      *(float*)( lVar5 + 0xc0 ) = fVar11 * fVar9 + *(float*)( lVar5 + 0xc0 );
   }

   *(ulong*)( in_RDI + 0xa4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0xa4 ) >> 0x20 ) + fVar6, (float)*(undefined8*)( in_RDI + 0xa4 ) + fVar8);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPinJoint2D::pre_solve(float) */undefined8 GodotPinJoint2D::pre_solve(GodotPinJoint2D *this, float param_1) {
   bool bVar1;
   long lVar2;
   long lVar3;
   GodotPinJoint2D GVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float fVar7;
   double dVar8;
   double dVar9;
   float fVar10;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x3c] == (GodotPinJoint2D)0x0) {
      lVar3 = *(long*)( this + 0x48 );
      if (lVar3 == 0) goto LAB_00100cda;
      LAB_00100a1d:fVar7 = *(float*)( lVar3 + 0x10c );
      if (this[0x3d] != (GodotPinJoint2D)0x0) {
         fVar5 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x100 ) >> 0x20 );
         *(ulong*)( lVar3 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) + fVar5 * (float)( ( ulong ) * (undefined8*)( this + 0xa4 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0xb8 ) + fVar5 * (float)*(undefined8*)( this + 0xa4 ));
         local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x70 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar3 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( this + 0x70 ) - (float)*(undefined8*)( lVar3 + 0x118 ));
         fVar5 = (float)Vector2::cross((Vector2*)&local_38);
         lVar2 = *(long*)( this + 0x40 );
         *(float*)( lVar3 + 0xc0 ) = fVar5 * fVar7 + *(float*)( lVar3 + 0xc0 );
         lVar3 = *(long*)( this + 0x48 );
         fVar7 = *(float*)( lVar2 + 0x10c );
         if (lVar3 != 0) goto LAB_00100a3b;
         goto LAB_00100c20;
      }

      lVar2 = *(long*)( this + 0x40 );
      fVar7 = *(float*)( lVar2 + 0x10c );
      LAB_00100a3b:GVar4 = this[0xbe];
      *(float*)( this + 0xa0 ) = _LC5 / ( fVar7 + *(float*)( lVar3 + 0x10c ) );
      if (GVar4 != (GodotPinJoint2D)0x0) {
         local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0x58 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x58 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0x58 ) - (float)*(undefined8*)( lVar2 + 0x58 ));
         local_38 = Vector2::rotated((float)( *(uint*)( this + 0x90 ) ^ _LC4 ));
         fVar5 = (float)Vector2::angle();
         fVar7 = *(float*)( this + 0xb4 );
         if (fVar5 <= fVar7) {
            fVar7 = *(float*)( this + 0xb0 );
            fVar6 = 0.0;
            if (fVar5 < fVar7) goto LAB_00100ab5;
         }
 else {
            LAB_00100ab5:fVar6 = fVar5 - fVar7;
         }

         fVar7 = *(float*)( this + 0x34 );
         fVar10 = (float)( (uint)fVar7 ^ _LC4 );
         fVar5 = powf(_LC7, param_1);
         dVar8 = ( ( _LC8 - (double)fVar5 ) * (double)fVar6 ) / (double)param_1;
         dVar9 = (double)fVar10;
         if (dVar9 <= dVar8) {
            if (dVar8 <= (double)fVar7) {
               fVar7 = (float)( (uint)(float)dVar8 ^ _LC4 );
               goto LAB_00100b3d;
            }

         }
 else {
            LAB_00100b3d:fVar10 = fVar7;
            dVar9 = (double)fVar10;
         }

         bVar1 = __LC9 <= dVar9;
         *(float*)( this + 0x94 ) = fVar10;
         if (( bVar1 ) && ( dVar9 <= _LC10 )) {
            *(undefined4*)( this + 0x9c ) = 0;
            GVar4 = (GodotPinJoint2D)0x0;
         }

         this[0xbc] = GVar4;
         goto LAB_00100b62;
      }

   }
 else {
      lVar3 = *(long*)( this + 0x40 );
      fVar7 = *(float*)( lVar3 + 0x10c );
      fVar5 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar3 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) + fVar5 * (float)( ( uint )(( ulong ) * (undefined8*)( this + 0xa4 ) >> 0x20) ^ _LC6._4_4_ ), (float)*(undefined8*)( lVar3 + 0xb8 ) + fVar5 * (float)( ( uint ) * (undefined8*)( this + 0xa4 ) ^ (uint)_LC6 ));
      local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar3 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( this + 0x68 ) - (float)*(undefined8*)( lVar3 + 0x118 ));
      fVar5 = (float)Vector2::cross((Vector2*)&local_38);
      *(float*)( lVar3 + 0xc0 ) = fVar5 * fVar7 + *(float*)( lVar3 + 0xc0 );
      lVar3 = *(long*)( this + 0x48 );
      if (lVar3 != 0) goto LAB_00100a1d;
      LAB_00100cda:fVar7 = *(float*)( *(long*)( this + 0x40 ) + 0x10c );
      LAB_00100c20:*(float*)( this + 0xa0 ) = _LC5 / fVar7;
   }

   *(undefined4*)( this + 0x94 ) = 0;
   LAB_00100b62:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* GodotGrooveJoint2D::setup(float) */ulong GodotGrooveJoint2D::setup(GodotGrooveJoint2D *this, float param_1) {
   undefined8 uVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   byte bVar6;
   undefined8 unaff_RBP;
   long in_FS_OFFSET;
   float fVar8;
   float fVar10;
   undefined8 uVar9;
   float fVar11;
   float fVar12;
   uint uVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   ulong uVar7;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = GodotBody2D::get_mode();
   this[0x3c] = ( GodotGrooveJoint2D )(1 < iVar3);
   iVar3 = GodotBody2D::get_mode();
   this[0x3d] = ( GodotGrooveJoint2D )(1 < iVar3);
   bVar6 = 1 < iVar3 | (byte)this[0x3c];
   uVar7 = CONCAT71(( int7 )((ulong)unaff_RBP >> 8), bVar6);
   if (bVar6 != 0) {
      lVar4 = *(long*)( this + 0x40 );
      lVar2 = *(long*)( lVar4 + 0x40 );
      if (lVar2 != 0) {
         fVar14 = (float)*(undefined8*)( this + 0x50 );
         fVar11 = (float)( ( ulong ) * (undefined8*)( this + 0x50 ) >> 0x20 );
         fVar19 = (float)*(undefined8*)( lVar4 + 0x48 );
         fVar20 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x48 ) >> 0x20 );
         fVar16 = (float)*(undefined8*)( lVar4 + 0x50 );
         fVar17 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x50 ) >> 0x20 );
         fVar15 = (float)*(undefined8*)( this + 0x58 );
         fVar18 = (float)( ( ulong ) * (undefined8*)( this + 0x58 ) >> 0x20 );
         fVar8 = (float)*(undefined8*)( lVar4 + 0x58 );
         fVar12 = fVar11 * fVar16 + fVar14 * fVar19 + fVar8;
         fVar10 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x58 ) >> 0x20 );
         fVar14 = fVar11 * fVar17 + fVar14 * fVar20 + fVar10;
         local_60 = CONCAT44(fVar14, fVar12);
         fVar8 = fVar18 * fVar16 + fVar15 * fVar19 + fVar8;
         fVar10 = fVar18 * fVar17 + fVar15 * fVar20 + fVar10;
         local_58 = CONCAT44(fVar10, fVar8);
         local_48 = CONCAT44(( uint )(fVar8 - fVar12) ^ _LC4, fVar10 - fVar14);
         uVar9 = Vector2::normalized();
         local_50 = CONCAT44(( uint )((ulong)uVar9 >> 0x20) ^ _LC6._4_4_, (uint)uVar9 ^ (uint)_LC6);
         fVar8 = (float)Vector2::dot((Vector2*)&local_60);
         *(undefined8*)( this + 0x88 ) = local_50;
         lVar4 = *(long*)( this + 0x48 );
         fVar11 = (float)*(undefined8*)( this + 0x68 );
         fVar10 = (float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 );
         fVar14 = fVar11 * (float)*(undefined8*)( lVar4 + 0x48 ) + fVar10 * (float)*(undefined8*)( lVar4 + 0x50 );
         fVar11 = fVar11 * (float)( ( ulong ) * (undefined8*)( lVar4 + 0x48 ) >> 0x20 ) + fVar10 * (float)( ( ulong ) * (undefined8*)( lVar4 + 0x50 ) >> 0x20 );
         *(ulong*)( this + 0x98 ) = CONCAT44(fVar11, fVar14);
         local_48 = CONCAT44(fVar11 + (float)( ( ulong ) * (undefined8*)( lVar4 + 0x58 ) >> 0x20 ), fVar14 + (float)*(undefined8*)( lVar4 + 0x58 ));
         fVar11 = (float)Vector2::cross((Vector2*)&local_48);
         fVar10 = (float)Vector2::cross((Vector2*)&local_60);
         fVar14 = _LC5;
         uVar13 = _LC4;
         if (fVar10 < fVar11) {
            fVar14 = (float)Vector2::cross((Vector2*)&local_58);
            uVar13 = _LC4;
            if (fVar11 < fVar14) {
               lVar4 = *(long*)( this + 0x40 );
               *(undefined4*)( this + 0x84 ) = 0;
               fVar14 = (float)( (ulong)local_50 >> 0x20 );
               uVar9 = CONCAT44(( (float)local_50 * (float)( (uint)fVar11 ^ uVar13 ) + fVar8 * fVar14 ) - (float)( ( ulong ) * (undefined8*)( lVar4 + 0x58 ) >> 0x20 ), ( fVar14 * fVar11 + fVar8 * (float)local_50 ) - (float)*(undefined8*)( lVar4 + 0x58 ));
               fVar14 = _LC5;
            }
 else {
               lVar4 = *(long*)( this + 0x40 );
               *(undefined4*)( this + 0x84 ) = 0xbf800000;
               uVar9 = CONCAT44((float)( (ulong)local_58 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar4 + 0x58 ) >> 0x20 ), (float)local_58 - (float)*(undefined8*)( lVar4 + 0x58 ));
               fVar14 = _LC5;
            }

         }
 else {
            lVar4 = *(long*)( this + 0x40 );
            *(float*)( this + 0x84 ) = _LC5;
            uVar9 = CONCAT44((float)( (ulong)local_60 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar4 + 0x58 ) >> 0x20 ), (float)local_60 - (float)*(undefined8*)( lVar4 + 0x58 ));
         }

         *(undefined8*)( this + 0x90 ) = uVar9;
         lVar5 = *(long*)( this + 0x48 );
         uVar1 = *(undefined8*)( this + 0x98 );
         fVar18 = (float)( (ulong)uVar9 >> 0x20 ) - *(float*)( lVar4 + 0x11c );
         fVar15 = (float)uVar9 - *(float*)( lVar4 + 0x118 );
         fVar8 = *(float*)( lVar4 + 0x10c );
         fVar12 = *(float*)( lVar4 + 0x104 ) + *(float*)( lVar5 + 0x104 );
         fVar20 = (float)( (ulong)uVar1 >> 0x20 ) - *(float*)( lVar5 + 0x11c );
         fVar10 = (float)uVar1 - *(float*)( lVar5 + 0x118 );
         fVar11 = *(float*)( lVar5 + 0x10c );
         fVar19 = fVar20 * fVar20 * fVar11 + fVar18 * fVar18 * fVar8 + fVar12;
         fVar12 = fVar10 * fVar10 * fVar11 + fVar15 * fVar15 * fVar8 + fVar12;
         fVar8 = (float)( (uint)fVar10 ^ uVar13 ) * fVar20 * fVar11 + (float)( (uint)fVar15 ^ uVar13 ) * fVar18 * fVar8 + 0.0;
         fVar11 = fVar19 * fVar12 - fVar8 * fVar8;
         if (fVar11 == 0.0) {
            _err_print_error("k_tensor", "modules/godot_physics_2d/godot_joints_2d.cpp", 0x175, "Condition \"determinant == 0.0\" is true.", 0, 0);
            lVar4 = *(long*)( this + 0x40 );
            lVar5 = *(long*)( this + 0x48 );
            uVar1 = *(undefined8*)( this + 0x98 );
            uVar9 = *(undefined8*)( this + 0x90 );
            uVar13 = _LC4;
         }
 else {
            fVar11 = fVar14 / fVar11;
            *(float*)( this + 0xa0 ) = fVar12 * fVar11;
            *(float*)( this + 0xa4 ) = (float)( (uint)fVar8 ^ uVar13 ) * fVar11;
            *(float*)( this + 0xa8 ) = (float)( (uint)fVar8 ^ uVar13 ) * fVar11;
            *(float*)( this + 0xac ) = fVar19 * fVar11;
         }

         fVar8 = *(float*)( this + 0x30 );
         *(float*)( this + 0x80 ) = *(float*)( this + 0x38 ) * param_1;
         if (fVar8 == 0.0) {
            fVar8 = *(float*)( lVar2 + 0xd4 );
         }

         local_48 = CONCAT44((float)( uVar13 ^ (uint)fVar8 ) * ( ( (float)( ( ulong ) * (undefined8*)( lVar5 + 0x58 ) >> 0x20 ) + (float)( (ulong)uVar1 >> 0x20 ) ) - ( (float)( ( ulong ) * (undefined8*)( lVar4 + 0x58 ) >> 0x20 ) + (float)( (ulong)uVar9 >> 0x20 ) ) ) * ( fVar14 / param_1 ), (float)( uVar13 ^ (uint)fVar8 ) * ( ( (float)*(undefined8*)( lVar5 + 0x58 ) + (float)uVar1 ) - ( (float)*(undefined8*)( lVar4 + 0x58 ) + (float)uVar9 ) ) * ( fVar14 / param_1 ));
         uVar9 = Vector2::limit_length(*(float*)( this + 0x34 ));
         this[0xb0] = (GodotGrooveJoint2D)0x1;
         *(undefined8*)( this + 0x78 ) = uVar9;
         goto LAB_001010b7;
      }

      _err_print_error("setup", "modules/godot_physics_2d/godot_joints_2d.cpp", 0x18a, "Parameter \"space\" is null.", 0, 0);
   }

   uVar7 = 0;
   LAB_001010b7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotGrooveJoint2D::solve(float) */void GodotGrooveJoint2D::solve(float param_1) {
   char cVar1;
   long lVar2;
   long lVar3;
   long in_RDI;
   long in_FS_OFFSET;
   float fVar4;
   float fVar6;
   undefined8 uVar5;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined8 local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   lVar2 = *(long*)( in_RDI + 0x48 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( in_RDI + 0x40 );
   fVar4 = (float)*(undefined8*)( lVar3 + 0xc0 );
   fVar7 = (float)*(undefined8*)( lVar3 + 0xb8 ) - ( *(float*)( in_RDI + 0x94 ) - *(float*)( lVar3 + 0x11c ) ) * fVar4;
   fVar8 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) - (float)( ( uint )(*(float*)( in_RDI + 0x90 ) - *(float*)( lVar3 + 0x118 )) ^ _LC4 ) * fVar4;
   fVar4 = (float)( (uint)_LC6 ^ (uint)fVar7 );
   fVar6 = (float)( _LC6._4_4_ ^ (uint)fVar8 );
   if (lVar2 != 0) {
      fVar6 = (float)*(undefined8*)( lVar2 + 0xc0 );
      fVar4 = ( (float)*(undefined8*)( lVar2 + 0xb8 ) - ( *(float*)( in_RDI + 0x9c ) - *(float*)( lVar2 + 0x11c ) ) * fVar6 ) - fVar7;
      fVar6 = ( (float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) - (float)( ( uint )(*(float*)( in_RDI + 0x98 ) - *(float*)( lVar2 + 0x118 )) ^ _LC4 ) * fVar6 ) - fVar8;
   }

   local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x78 ) >> 0x20 ) - fVar6, (float)*(undefined8*)( in_RDI + 0x78 ) - fVar4);
   fVar6 = (float)Vector2::dot((Vector2*)&local_38);
   fVar7 = (float)Vector2::dot((Vector2*)&local_38);
   fVar4 = *(float*)( in_RDI + 0x84 );
   fVar8 = (float)*(undefined8*)( in_RDI + 0x70 );
   fVar9 = (float)( ( ulong ) * (undefined8*)( in_RDI + 0x70 ) >> 0x20 );
   local_48 = CONCAT44(fVar6 + fVar9, fVar7 + fVar8);
   fVar6 = (float)Vector2::cross((Vector2*)&local_48);
   if (fVar6 * fVar4 <= 0.0) {
      local_38 = Vector2::project((Vector2*)&local_48);
   }
 else {
      local_38 = local_48;
   }

   uVar5 = Vector2::limit_length(*(float*)( in_RDI + 0x80 ));
   *(undefined8*)( in_RDI + 0x70 ) = uVar5;
   local_48._0_4_ = (float)uVar5 - fVar8;
   local_48._4_4_ = (float)( (ulong)uVar5 >> 0x20 ) - fVar9;
   if (*(char*)( in_RDI + 0x3c ) == '\0') {
      cVar1 = *(char*)( in_RDI + 0x3d );
   }
 else {
      lVar2 = *(long*)( in_RDI + 0x40 );
      local_40 = CONCAT44((uint)local_48._4_4_ ^ _LC6._4_4_, (uint)(float)local_48 ^ (uint)_LC6);
      fVar4 = *(float*)( lVar2 + 0x10c );
      fVar6 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar2 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) + fVar6 * (float)( (uint)local_48._4_4_ ^ _LC6._4_4_ ), (float)*(undefined8*)( lVar2 + 0xb8 ) + fVar6 * (float)( (uint)(float)local_48 ^ (uint)_LC6 ));
      local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x90 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x90 ) - (float)*(undefined8*)( lVar2 + 0x118 ));
      fVar6 = (float)Vector2::cross((Vector2*)&local_38);
      cVar1 = *(char*)( in_RDI + 0x3d );
      *(float*)( lVar2 + 0xc0 ) = fVar6 * fVar4 + *(float*)( lVar2 + 0xc0 );
   }

   if (cVar1 != '\0') {
      lVar2 = *(long*)( in_RDI + 0x48 );
      fVar4 = *(float*)( lVar2 + 0x10c );
      fVar6 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar2 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) + fVar6 * local_48._4_4_, (float)*(undefined8*)( lVar2 + 0xb8 ) + fVar6 * (float)local_48);
      local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x98 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x98 ) - (float)*(undefined8*)( lVar2 + 0x118 ));
      fVar6 = (float)Vector2::cross((Vector2*)&local_38);
      *(float*)( lVar2 + 0xc0 ) = fVar6 * fVar4 + *(float*)( lVar2 + 0xc0 );
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotDampedSpringJoint2D::setup(float) */ulong GodotDampedSpringJoint2D::setup(GodotDampedSpringJoint2D *this, float param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   byte bVar4;
   undefined8 unaff_RBP;
   long in_FS_OFFSET;
   float fVar5;
   float fVar7;
   undefined1 auVar6[16];
   float fVar8;
   float fVar10;
   undefined1 auVar9[16];
   float fVar11;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = GodotBody2D::get_mode();
   this[0x3c] = ( GodotDampedSpringJoint2D )(1 < iVar3);
   iVar3 = GodotBody2D::get_mode();
   this[0x3d] = ( GodotDampedSpringJoint2D )(1 < iVar3);
   bVar4 = 1 < iVar3 | (byte)this[0x3c];
   if (bVar4 != 0) {
      lVar1 = *(long*)( this + 0x40 );
      lVar2 = *(long*)( this + 0x48 );
      fVar7 = (float)*(undefined8*)( this + 0x50 );
      fVar8 = (float)( ( ulong ) * (undefined8*)( this + 0x50 ) >> 0x20 );
      fVar10 = (float)*(undefined8*)( this + 0x58 );
      fVar11 = (float)( ( ulong ) * (undefined8*)( this + 0x58 ) >> 0x20 );
      fVar5 = fVar7 * (float)*(undefined8*)( lVar1 + 0x48 ) + fVar8 * (float)*(undefined8*)( lVar1 + 0x50 );
      fVar7 = fVar7 * (float)( ( ulong ) * (undefined8*)( lVar1 + 0x48 ) >> 0x20 ) + fVar8 * (float)( ( ulong ) * (undefined8*)( lVar1 + 0x50 ) >> 0x20 );
      *(float*)( this + 0x6c ) = fVar5;
      *(float*)( this + 0x70 ) = fVar7;
      fVar8 = (float)*(undefined8*)( lVar2 + 0x48 ) * fVar10 + fVar11 * (float)*(undefined8*)( lVar2 + 0x50 );
      fVar10 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x48 ) >> 0x20 ) * fVar10 + fVar11 * (float)( ( ulong ) * (undefined8*)( lVar2 + 0x50 ) >> 0x20 );
      *(float*)( this + 0x74 ) = fVar8;
      *(float*)( this + 0x78 ) = fVar10;
      auVar6._4_4_ = ( fVar10 + (float)( ( ulong ) * (undefined8*)( lVar2 + 0x58 ) >> 0x20 ) ) - ( (float)( ( ulong ) * (undefined8*)( lVar1 + 0x58 ) >> 0x20 ) + fVar7 );
      auVar6._0_4_ = ( fVar8 + (float)*(undefined8*)( lVar2 + 0x58 ) ) - ( (float)*(undefined8*)( lVar1 + 0x58 ) + fVar5 );
      fVar5 = (float)Vector2::length();
      if (fVar5 == 0.0) {
         *(undefined8*)( this + 0x7c ) = 0;
      }
 else {
         auVar6._8_8_ = 0;
         auVar9._4_4_ = fVar5;
         auVar9._0_4_ = fVar5;
         auVar9._12_4_ = _UNK_00102af4;
         auVar9._8_4_ = _LC5;
         auVar6 = divps(auVar6, auVar9);
         *(long*)( this + 0x7c ) = auVar6._0_8_;
      }

      lVar1 = *(long*)( this + 0x40 );
      lVar2 = *(long*)( this + 0x48 );
      fVar7 = *(float*)( lVar1 + 0x104 );
      local_48 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x6c ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar1 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( this + 0x6c ) - (float)*(undefined8*)( lVar1 + 0x118 ));
      fVar8 = (float)Vector2::cross((Vector2*)&local_48);
      fVar7 = *(float*)( lVar1 + 0x10c ) * fVar8 * fVar8 + fVar7 + 0.0;
      if (lVar2 != 0) {
         fVar8 = *(float*)( lVar2 + 0x104 );
         local_48 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x74 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( this + 0x74 ) - (float)*(undefined8*)( lVar2 + 0x118 ));
         fVar10 = (float)Vector2::cross((Vector2*)&local_48);
         fVar7 = fVar7 + fVar8 + *(float*)( lVar2 + 0x10c ) * fVar10 * fVar10;
      }

      fVar8 = _LC5;
      *(undefined4*)( this + 0x90 ) = 0;
      *(float*)( this + 0x8c ) = fVar8 / fVar7;
      fVar7 = expf((float)( *(uint*)( this + 100 ) ^ _LC4 ) * param_1 * fVar7);
      *(float*)( this + 0x94 ) = _LC5 - fVar7;
      fVar5 = ( *(float*)( this + 0x60 ) - fVar5 ) * *(float*)( this + 0x68 );
      *(ulong*)( this + 0x84 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x7c ) >> 0x20 ) * fVar5 * param_1, (float)*(undefined8*)( this + 0x7c ) * fVar5 * param_1);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return CONCAT71(( int7 )((ulong)unaff_RBP >> 8), bVar4) & 0xffffffff;
}
/* GodotDampedSpringJoint2D::solve(float) */void GodotDampedSpringJoint2D::solve(float param_1) {
   char cVar1;
   long lVar2;
   long lVar3;
   long in_RDI;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   lVar2 = *(long*)( in_RDI + 0x40 );
   local_38 = *(undefined8*)( in_RDI + 0x7c );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( in_RDI + 0x48 );
   fVar9 = (float)*(undefined8*)( lVar2 + 0xc0 );
   fVar8 = (float)*(undefined8*)( lVar2 + 0xb8 ) - ( *(float*)( in_RDI + 0x70 ) - *(float*)( lVar2 + 0x11c ) ) * fVar9;
   fVar9 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) - (float)( ( uint )(*(float*)( in_RDI + 0x6c ) - *(float*)( lVar2 + 0x118 )) ^ _LC4 ) * fVar9;
   local_40 = CONCAT44(_LC6._4_4_ ^ (uint)fVar9, (uint)_LC6 ^ (uint)fVar8);
   if (lVar3 != 0) {
      fVar6 = (float)*(undefined8*)( lVar3 + 0xc0 );
      local_40 = CONCAT44(( (float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) - (float)( ( uint )((float)*(undefined8*)( in_RDI + 0x74 ) - *(float*)( lVar3 + 0x118 )) ^ _LC4 ) * fVar6 ) - fVar9, ( (float)*(undefined8*)( lVar3 + 0xb8 ) - ( (float)( ( ulong ) * (undefined8*)( in_RDI + 0x74 ) >> 0x20 ) - *(float*)( lVar3 + 0x11c ) ) * fVar6 ) - fVar8);
   }

   fVar9 = (float)Vector2::dot((Vector2*)&local_40);
   fVar9 = fVar9 - *(float*)( in_RDI + 0x90 );
   fVar6 = (float)( _LC4 ^ (uint)fVar9 ) * *(float*)( in_RDI + 0x94 );
   *(float*)( in_RDI + 0x90 ) = fVar9 + fVar6;
   fVar8 = (float)*(undefined8*)( in_RDI + 0x8c );
   fVar9 = (float)*(undefined8*)( in_RDI + 0x7c ) * fVar6 * fVar8;
   fVar8 = (float)( ( ulong ) * (undefined8*)( in_RDI + 0x7c ) >> 0x20 ) * fVar6 * fVar8;
   if (*(char*)( in_RDI + 0x3c ) == '\0') {
      cVar1 = *(char*)( in_RDI + 0x3d );
   }
 else {
      lVar2 = *(long*)( in_RDI + 0x40 );
      fVar4 = (float)( (uint)fVar9 ^ (uint)_LC6 );
      fVar5 = (float)( (uint)fVar8 ^ _LC6._4_4_ );
      local_40 = CONCAT44(fVar5, fVar4);
      fVar6 = *(float*)( lVar2 + 0x10c );
      fVar7 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar2 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) + fVar7 * fVar5, (float)*(undefined8*)( lVar2 + 0xb8 ) + fVar7 * fVar4);
      local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x6c ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x6c ) - (float)*(undefined8*)( lVar2 + 0x118 ));
      fVar4 = (float)Vector2::cross((Vector2*)&local_38);
      cVar1 = *(char*)( in_RDI + 0x3d );
      *(float*)( lVar2 + 0xc0 ) = fVar4 * fVar6 + *(float*)( lVar2 + 0xc0 );
   }

   if (cVar1 != '\0') {
      lVar2 = *(long*)( in_RDI + 0x48 );
      fVar6 = *(float*)( lVar2 + 0x10c );
      fVar4 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x100 ) >> 0x20 );
      *(ulong*)( lVar2 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) + fVar4 * fVar8, (float)*(undefined8*)( lVar2 + 0xb8 ) + fVar4 * fVar9);
      local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)( in_RDI + 0x74 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x118 ) >> 0x20 ), (float)*(undefined8*)( in_RDI + 0x74 ) - (float)*(undefined8*)( lVar2 + 0x118 ));
      fVar9 = (float)Vector2::cross((Vector2*)&local_38);
      *(float*)( lVar2 + 0xc0 ) = fVar9 * fVar6 + *(float*)( lVar2 + 0xc0 );
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotJoint2D::copy_settings_from(GodotJoint2D*) */void GodotJoint2D::copy_settings_from(GodotJoint2D *this, GodotJoint2D *param_1) {
   undefined4 uVar1;
   uVar1 = *(undefined4*)( param_1 + 0x38 );
   *(undefined8*)( this + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
   *(undefined4*)( this + 0x38 ) = uVar1;
   *(undefined8*)( this + 0x30 ) = *(undefined8*)( param_1 + 0x30 );
   this[0x20] = param_1[0x20];
   return;
}
/* GodotPinJoint2D::set_param(PhysicsServer2D::PinJointParam, float) */void GodotPinJoint2D::set_param(undefined4 param_1, GodotPinJoint2D *this, uint param_3) {
   if (param_3 == 2) {
      *(undefined4*)( this + 0xb0 ) = param_1;
      return;
   }

   if (param_3 < 3) {
      if (param_3 != 0) {
         *(undefined4*)( this + 0xb4 ) = param_1;
         return;
      }

      *(undefined4*)( this + 0xac ) = param_1;
      return;
   }

   if (param_3 == 3) {
      *(undefined4*)( this + 0xb8 ) = param_1;
      return;
   }

   return;
}
/* GodotPinJoint2D::get_param(PhysicsServer2D::PinJointParam) const */undefined4 GodotPinJoint2D::get_param(GodotPinJoint2D *this, uint param_2) {
   if (param_2 == 2) {
      return *(undefined4*)( this + 0xb0 );
   }

   if (param_2 < 3) {
      if (param_2 != 0) {
         return *(undefined4*)( this + 0xb4 );
      }

      return *(undefined4*)( this + 0xac );
   }

   if (param_2 == 3) {
      return *(undefined4*)( this + 0xb8 );
   }

   _err_print_error("get_param", "modules/godot_physics_2d/godot_joints_2d.cpp", 0x123, "Method/function failed. Returning: 0", 0, 0);
   return 0;
}
/* GodotPinJoint2D::set_flag(PhysicsServer2D::PinJointFlag, bool) */void GodotPinJoint2D::set_flag(GodotPinJoint2D *this, int param_2, GodotPinJoint2D param_3) {
   if (param_2 == 0) {
      this[0xbe] = param_3;
      return;
   }

   if (param_2 != 1) {
      return;
   }

   this[0xbd] = param_3;
   return;
}
/* GodotPinJoint2D::get_flag(PhysicsServer2D::PinJointFlag) const */GodotPinJoint2D GodotPinJoint2D::get_flag(GodotPinJoint2D *this, int param_2) {
   if (param_2 == 0) {
      return this[0xbe];
   }

   if (param_2 != 1) {
      _err_print_error("get_flag", "modules/godot_physics_2d/godot_joints_2d.cpp", 0x13a, "Method/function failed. Returning: false", 0, 0);
      return (GodotPinJoint2D)0x0;
   }

   return this[0xbd];
}
/* GodotPinJoint2D::GodotPinJoint2D(Vector2 const&, GodotBody2D*, GodotBody2D*) */void GodotPinJoint2D::GodotPinJoint2D(GodotPinJoint2D *this, Vector2 *param_1, GodotBody2D *param_2, GodotBody2D *param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long *plVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined1(*pauVar6)[16];
   float fVar7;
   undefined4 uVar8;
   float fVar10;
   undefined8 uVar9;
   *(GodotPinJoint2D**)( this + 8 ) = this + 0x40;
   *(undefined1(*) [16])( this + 0x90 ) = (undefined1[16])0x0;
   *(uint*)( this + 0x10 ) = 2 - ( uint )(param_3 == (GodotBody2D*)0x0);
   uVar9 = _LC22;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x30 ) = uVar9;
   *(undefined2*)( this + 0x3c ) = 0;
   *(undefined***)this = &PTR_setup_00102a08;
   this[0x20] = (GodotPinJoint2D)0x1;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x38 ) = 0x7f7fffee;
   *(undefined8*)( this + 0x50 ) = 0x3f800000;
   *(undefined8*)( this + 0x58 ) = 0x3f80000000000000;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined8*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined4*)( this + 0xb8 ) = 0;
   uVar9 = *(undefined8*)param_1;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   uVar2 = *(undefined8*)( param_2 + 0x68 );
   *(GodotBody2D**)( this + 0x40 ) = param_2;
   fVar7 = (float)uVar9;
   fVar10 = (float)( (ulong)uVar9 >> 0x20 );
   *(undefined2*)( this + 0xbc ) = 0;
   this[0xbe] = (GodotPinJoint2D)0x0;
   *(GodotBody2D**)( this + 0x48 ) = param_3;
   *(ulong*)( this + 0x78 ) = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) * fVar7 + (float)( (ulong)uVar2 >> 0x20 ) * fVar10 + (float)( ( ulong ) * (undefined8*)( param_2 + 0x70 ) >> 0x20 ), (float)uVar2 * fVar10 + (float)uVar1 * fVar7 + (float)*(undefined8*)( param_2 + 0x70 ));
   if (param_3 != (GodotBody2D*)0x0) {
      uVar9 = CONCAT44((float)( ( ulong ) * (undefined8*)( param_3 + 0x70 ) >> 0x20 ) + fVar7 * (float)( ( ulong ) * (undefined8*)( param_3 + 0x60 ) >> 0x20 ) + fVar10 * (float)( ( ulong ) * (undefined8*)( param_3 + 0x68 ) >> 0x20 ), (float)*(undefined8*)( param_3 + 0x70 ) + fVar7 * (float)*(undefined8*)( param_3 + 0x60 ) + fVar10 * (float)*(undefined8*)( param_3 + 0x68 ));
   }

   lVar4 = *(long*)( param_2 + 0x1d8 );
   *(undefined8*)( this + 0x80 ) = uVar9;
   if (lVar4 == 0) {
      pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( param_2 + 0x1d8 ) = pauVar6;
      *(undefined4*)pauVar6[1] = 0;
      *pauVar6 = (undefined1[16])0x0;
   }

   puVar5 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
   plVar3 = *(long**)( param_2 + 0x1d8 );
   puVar5[2] = 0;
   lVar4 = plVar3[1];
   *puVar5 = this;
   *(undefined4*)( puVar5 + 1 ) = 0;
   puVar5[3] = lVar4;
   puVar5[4] = plVar3;
   if (lVar4 != 0) {
      *(undefined8**)( lVar4 + 0x10 ) = puVar5;
   }

   plVar3[1] = (long)puVar5;
   if (*plVar3 == 0) {
      *plVar3 = (long)puVar5;
   }

   *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
   if (param_3 != (GodotBody2D*)0x0) {
      if (*(long*)( param_3 + 0x1d8 ) == 0) {
         pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( param_3 + 0x1d8 ) = pauVar6;
         *(undefined4*)pauVar6[1] = 0;
         *pauVar6 = (undefined1[16])0x0;
      }

      puVar5 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
      plVar3 = *(long**)( param_3 + 0x1d8 );
      puVar5[2] = 0;
      lVar4 = plVar3[1];
      *puVar5 = this;
      *(undefined4*)( puVar5 + 1 ) = 1;
      puVar5[3] = lVar4;
      puVar5[4] = plVar3;
      if (lVar4 != 0) {
         *(undefined8**)( lVar4 + 0x10 ) = puVar5;
      }

      plVar3[1] = (long)puVar5;
      if (*plVar3 == 0) {
         *plVar3 = (long)puVar5;
      }

      *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
      uVar8 = Vector2::angle_to_point((Vector2*)( *(long*)( this + 0x40 ) + 0x58 ));
      *(undefined4*)( this + 0x90 ) = uVar8;
   }

   return;
}
/* GodotGrooveJoint2D::GodotGrooveJoint2D(Vector2 const&, Vector2 const&, Vector2 const&,
   GodotBody2D*, GodotBody2D*) */void GodotGrooveJoint2D::GodotGrooveJoint2D(GodotGrooveJoint2D *this, Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, GodotBody2D *param_4, GodotBody2D *param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined1(*pauVar8)[16];
   long in_FS_OFFSET;
   float fVar9;
   float fVar11;
   undefined8 uVar10;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x20] = (GodotGrooveJoint2D)0x1;
   *(GodotGrooveJoint2D**)( this + 8 ) = this + 0x40;
   uVar10 = _LC22;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x30 ) = uVar10;
   *(undefined2*)( this + 0x3c ) = 0;
   *(undefined***)this = &PTR_setup_00102a48;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 2;
   *(undefined4*)( this + 0x38 ) = 0x7f7fffee;
   for (int i = 0; i < 12; i++) {
      *(undefined8*)( this + ( 8*i + 80 ) ) = 0;
   }

   this[0xb0] = (GodotGrooveJoint2D)0x0;
   uVar10 = *(undefined8*)param_1;
   uVar1 = *(undefined8*)( param_4 + 0x60 );
   uVar2 = *(undefined8*)( param_4 + 0x68 );
   *(GodotBody2D**)( this + 0x40 ) = param_4;
   fVar9 = (float)uVar10;
   fVar11 = (float)( (ulong)uVar10 >> 0x20 );
   uVar10 = *(undefined8*)param_2;
   *(GodotBody2D**)( this + 0x48 ) = param_5;
   fVar16 = (float)uVar2;
   fVar17 = (float)( (ulong)uVar2 >> 0x20 );
   fVar18 = (float)uVar1;
   fVar19 = (float)( (ulong)uVar1 >> 0x20 );
   fVar12 = (float)uVar10;
   fVar13 = (float)( (ulong)uVar10 >> 0x20 );
   uVar10 = *(undefined8*)( param_5 + 0x60 );
   fVar14 = (float)*(undefined8*)( param_4 + 0x70 );
   fVar15 = (float)( ( ulong ) * (undefined8*)( param_4 + 0x70 ) >> 0x20 );
   *(float*)( this + 0x50 ) = fVar9 * fVar18 + fVar11 * fVar16 + fVar14;
   *(float*)( this + 0x54 ) = fVar9 * fVar19 + fVar11 * fVar17 + fVar15;
   fVar9 = (float)*(undefined8*)param_3;
   fVar11 = (float)( ( ulong ) * (undefined8*)param_3 >> 0x20 );
   uVar1 = *(undefined8*)( param_5 + 0x68 );
   *(float*)( this + 0x58 ) = fVar12 * fVar18 + fVar13 * fVar16 + fVar14;
   *(float*)( this + 0x5c ) = fVar12 * fVar19 + fVar13 * fVar17 + fVar15;
   *(ulong*)( this + 0x68 ) = CONCAT44(fVar9 * (float)( (ulong)uVar10 >> 0x20 ) + fVar11 * (float)( (ulong)uVar1 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_5 + 0x70 ) >> 0x20 ), fVar9 * (float)uVar10 + fVar11 * (float)uVar1 + (float)*(undefined8*)( param_5 + 0x70 ));
   uVar10 = Vector2::normalized();
   lVar4 = *(long*)( this + 0x40 );
   lVar6 = *(long*)( lVar4 + 0x1d8 );
   *(ulong*)( this + 0x60 ) = CONCAT44((int)uVar10, ( uint )((ulong)uVar10 >> 0x20) ^ _LC4);
   if (lVar6 == 0) {
      pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( lVar4 + 0x1d8 ) = pauVar8;
      *(undefined4*)pauVar8[1] = 0;
      *pauVar8 = (undefined1[16])0x0;
   }

   puVar7 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
   plVar5 = *(long**)( lVar4 + 0x1d8 );
   puVar7[2] = 0;
   lVar4 = plVar5[1];
   *puVar7 = this;
   *(undefined4*)( puVar7 + 1 ) = 0;
   puVar7[3] = lVar4;
   puVar7[4] = plVar5;
   if (lVar4 != 0) {
      *(undefined8**)( lVar4 + 0x10 ) = puVar7;
   }

   plVar5[1] = (long)puVar7;
   if (*plVar5 == 0) {
      *plVar5 = (long)puVar7;
   }

   lVar4 = *(long*)( this + 0x48 );
   *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
   if (*(long*)( lVar4 + 0x1d8 ) == 0) {
      pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( lVar4 + 0x1d8 ) = pauVar8;
      *(undefined4*)pauVar8[1] = 0;
      *pauVar8 = (undefined1[16])0x0;
   }

   puVar7 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
   plVar5 = *(long**)( lVar4 + 0x1d8 );
   puVar7[2] = 0;
   lVar4 = plVar5[1];
   *puVar7 = this;
   *(undefined4*)( puVar7 + 1 ) = 1;
   puVar7[3] = lVar4;
   puVar7[4] = plVar5;
   if (lVar4 != 0) {
      *(undefined8**)( lVar4 + 0x10 ) = puVar7;
   }

   plVar5[1] = (long)puVar7;
   if (*plVar5 == 0) {
      *plVar5 = (long)puVar7;
   }

   *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotDampedSpringJoint2D::set_param(PhysicsServer2D::DampedSpringParam, float) */void GodotDampedSpringJoint2D::set_param(undefined4 param_1, GodotDampedSpringJoint2D *this, int param_3) {
   if (param_3 == 1) {
      *(undefined4*)( this + 0x68 ) = param_1;
   }
 else {
      if (param_3 == 2) {
         *(undefined4*)( this + 100 ) = param_1;
         return;
      }

      if (param_3 == 0) {
         *(undefined4*)( this + 0x60 ) = param_1;
         return;
      }

   }

   return;
}
/* GodotDampedSpringJoint2D::get_param(PhysicsServer2D::DampedSpringParam) const */undefined4 GodotDampedSpringJoint2D::get_param(GodotDampedSpringJoint2D *this, int param_2) {
   if (param_2 == 1) {
      return *(undefined4*)( this + 0x68 );
   }

   if (param_2 != 2) {
      if (param_2 == 0) {
         return *(undefined4*)( this + 0x60 );
      }

      _err_print_error("get_param", "modules/godot_physics_2d/godot_joints_2d.cpp", 0x245, "Method/function failed. Returning: 0", 0, 0);
      return 0;
   }

   return *(undefined4*)( this + 100 );
}
/* GodotDampedSpringJoint2D::GodotDampedSpringJoint2D(Vector2 const&, Vector2 const&, GodotBody2D*,
   GodotBody2D*) */void GodotDampedSpringJoint2D::GodotDampedSpringJoint2D(GodotDampedSpringJoint2D *this, Vector2 *param_1, Vector2 *param_2, GodotBody2D *param_3, GodotBody2D *param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   long lVar8;
   long *plVar9;
   undefined8 uVar10;
   undefined8 *puVar11;
   undefined1(*pauVar12)[16];
   undefined4 uVar13;
   *(undefined8*)( this + 0x50 ) = 0;
   *(GodotDampedSpringJoint2D**)( this + 8 ) = this + 0x40;
   uVar10 = _LC22;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x30 ) = uVar10;
   *(undefined8*)( this + 0x68 ) = 0x41a00000;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   fVar1 = *(float*)param_1;
   fVar2 = *(float*)( param_1 + 4 );
   *(undefined4*)( this + 0x38 ) = 0x7f7fffee;
   fVar3 = *(float*)( param_3 + 100 );
   fVar4 = *(float*)( param_3 + 0x6c );
   *(undefined2*)( this + 0x3c ) = 0;
   *(undefined***)this = &PTR_setup_00102a88;
   uVar10 = _LC26;
   *(GodotBody2D**)( this + 0x40 ) = param_3;
   *(undefined8*)( this + 0x60 ) = uVar10;
   *(GodotBody2D**)( this + 0x48 ) = param_4;
   *(undefined8*)( this + 0x18 ) = 0;
   this[0x20] = (GodotDampedSpringJoint2D)0x1;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 2;
   *(undefined8*)( this + 0x90 ) = 0;
   fVar5 = *(float*)( param_3 + 0x68 );
   fVar6 = *(float*)( param_4 + 0x6c );
   fVar7 = *(float*)( param_3 + 0x60 );
   *(float*)( this + 0x54 ) = fVar3 * fVar1 + fVar4 * fVar2 + *(float*)( param_3 + 0x74 );
   fVar3 = *(float*)( param_4 + 100 );
   fVar4 = *(float*)( param_2 + 4 );
   *(float*)( this + 0x50 ) = fVar1 * fVar7 + fVar2 * fVar5 + *(float*)( param_3 + 0x70 );
   fVar1 = *(float*)param_2;
   fVar2 = *(float*)( param_4 + 0x68 );
   fVar5 = *(float*)( param_4 + 0x60 );
   fVar7 = *(float*)( param_4 + 0x70 );
   *(float*)( this + 0x5c ) = fVar3 * fVar1 + fVar6 * fVar4 + *(float*)( param_4 + 0x74 );
   *(float*)( this + 0x58 ) = fVar1 * fVar5 + fVar4 * fVar2 + fVar7;
   uVar13 = Vector2::distance_to(param_1);
   lVar8 = *(long*)( this + 0x40 );
   *(undefined4*)( this + 0x60 ) = uVar13;
   if (*(long*)( lVar8 + 0x1d8 ) == 0) {
      pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( lVar8 + 0x1d8 ) = pauVar12;
      *(undefined4*)pauVar12[1] = 0;
      *pauVar12 = (undefined1[16])0x0;
   }

   puVar11 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
   plVar9 = *(long**)( lVar8 + 0x1d8 );
   puVar11[2] = 0;
   lVar8 = plVar9[1];
   *puVar11 = this;
   *(undefined4*)( puVar11 + 1 ) = 0;
   puVar11[3] = lVar8;
   puVar11[4] = plVar9;
   if (lVar8 != 0) {
      *(undefined8**)( lVar8 + 0x10 ) = puVar11;
   }

   plVar9[1] = (long)puVar11;
   if (*plVar9 == 0) {
      *plVar9 = (long)puVar11;
   }

   lVar8 = *(long*)( this + 0x48 );
   *(int*)( plVar9 + 2 ) = (int)plVar9[2] + 1;
   if (*(long*)( lVar8 + 0x1d8 ) == 0) {
      pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( lVar8 + 0x1d8 ) = pauVar12;
      *(undefined4*)pauVar12[1] = 0;
      *pauVar12 = (undefined1[16])0x0;
   }

   puVar11 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
   plVar9 = *(long**)( lVar8 + 0x1d8 );
   puVar11[2] = 0;
   lVar8 = plVar9[1];
   *puVar11 = this;
   *(undefined4*)( puVar11 + 1 ) = 1;
   puVar11[3] = lVar8;
   puVar11[4] = plVar9;
   if (lVar8 != 0) {
      *(undefined8**)( lVar8 + 0x10 ) = puVar11;
   }

   plVar9[1] = (long)puVar11;
   if (*plVar9 != 0) {
      *(int*)( plVar9 + 2 ) = (int)plVar9[2] + 1;
      return;
   }

   *(int*)( plVar9 + 2 ) = (int)plVar9[2] + 1;
   *plVar9 = (long)puVar11;
   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* GodotJoint2D::setup(float) */undefined8 GodotJoint2D::setup(float param_1) {
   return 0;
}
/* GodotJoint2D::pre_solve(float) */undefined8 GodotJoint2D::pre_solve(float param_1) {
   return 0;
}
/* GodotJoint2D::solve(float) */void GodotJoint2D::solve(float param_1) {
   return;
}
/* GodotJoint2D::get_type() const */undefined8 GodotJoint2D::get_type(void) {
   return 3;
}
/* GodotPinJoint2D::get_type() const */undefined8 GodotPinJoint2D::get_type(void) {
   return 0;
}
/* GodotGrooveJoint2D::get_type() const */undefined8 GodotGrooveJoint2D::get_type(void) {
   return 1;
}
/* GodotDampedSpringJoint2D::get_type() const */undefined8 GodotDampedSpringJoint2D::get_type(void) {
   return 2;
}
/* GodotJoint2D::~GodotJoint2D() */void GodotJoint2D::~GodotJoint2D(GodotJoint2D *this) {
   long lVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   *(undefined***)this = &PTR_setup_001029c8;
   if (*(int*)( this + 0x10 ) < 1) {
      return;
   }

   lVar6 = 0;
   do {
      lVar1 = *(long*)( *(long*)( this + 8 ) + lVar6 * 8 );
      if (( lVar1 != 0 ) && ( plVar2 = *(long**)( lVar1 + 0x1d8 ) ),plVar2 != (long*)0x0) {
         for (plVar3 = (long*)*plVar2; plVar3 != (long*)0x0; plVar3 = (long*)plVar3[2]) {
            if (( this == (GodotJoint2D*)*plVar3 ) && ( (int)plVar3[1] == (int)lVar6 )) {
               if (plVar2 == (long*)plVar3[4]) {
                  lVar5 = plVar3[2];
                  if ((long*)*plVar2 == plVar3) {
                     *plVar2 = lVar5;
                  }

                  lVar4 = plVar3[3];
                  if ((long*)plVar2[1] == plVar3) {
                     plVar2[1] = lVar4;
                  }

                  if (lVar4 != 0) {
                     *(long*)( lVar4 + 0x10 ) = lVar5;
                     lVar5 = plVar3[2];
                  }

                  if (lVar5 != 0) {
                     *(long*)( lVar5 + 0x18 ) = lVar4;
                  }

                  Memory::free_static(plVar3, false);
                  *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               if (*(int*)( (long)*(void**)( lVar1 + 0x1d8 ) + 0x10 ) == 0) {
                  Memory::free_static(*(void**)( lVar1 + 0x1d8 ), false);
                  *(undefined8*)( lVar1 + 0x1d8 ) = 0;
               }

               break;
            }

         }

      }

      lVar6 = lVar6 + 1;
      if (*(int*)( this + 0x10 ) <= (int)lVar6) {
         return;
      }

   }
 while ( true );
}
/* GodotJoint2D::~GodotJoint2D() */void GodotJoint2D::~GodotJoint2D(GodotJoint2D *this) {
   ~GodotJoint2D(this)
   ;;
   operator_delete(this, 0x40);
   return;
}
/* GodotDampedSpringJoint2D::~GodotDampedSpringJoint2D() */void GodotDampedSpringJoint2D::~GodotDampedSpringJoint2D(GodotDampedSpringJoint2D *this) {
   *(undefined***)this = &PTR_setup_00102a88;
   GodotJoint2D::~GodotJoint2D((GodotJoint2D*)this);
   return;
}
/* GodotDampedSpringJoint2D::~GodotDampedSpringJoint2D() */void GodotDampedSpringJoint2D::~GodotDampedSpringJoint2D(GodotDampedSpringJoint2D *this) {
   *(undefined***)this = &PTR_setup_00102a88;
   GodotJoint2D::~GodotJoint2D((GodotJoint2D*)this);
   operator_delete(this, 0x98);
   return;
}
/* GodotGrooveJoint2D::~GodotGrooveJoint2D() */void GodotGrooveJoint2D::~GodotGrooveJoint2D(GodotGrooveJoint2D *this) {
   *(undefined***)this = &PTR_setup_00102a48;
   GodotJoint2D::~GodotJoint2D((GodotJoint2D*)this);
   return;
}
/* GodotGrooveJoint2D::~GodotGrooveJoint2D() */void GodotGrooveJoint2D::~GodotGrooveJoint2D(GodotGrooveJoint2D *this) {
   *(undefined***)this = &PTR_setup_00102a48;
   GodotJoint2D::~GodotJoint2D((GodotJoint2D*)this);
   operator_delete(this, 0xb8);
   return;
}
/* GodotPinJoint2D::~GodotPinJoint2D() */void GodotPinJoint2D::~GodotPinJoint2D(GodotPinJoint2D *this) {
   *(undefined***)this = &PTR_setup_00102a08;
   GodotJoint2D::~GodotJoint2D((GodotJoint2D*)this);
   return;
}
/* GodotPinJoint2D::~GodotPinJoint2D() */void GodotPinJoint2D::~GodotPinJoint2D(GodotPinJoint2D *this) {
   *(undefined***)this = &PTR_setup_00102a08;
   GodotJoint2D::~GodotJoint2D((GodotJoint2D*)this);
   operator_delete(this, 0xc0);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* GodotPinJoint2D::~GodotPinJoint2D() */void GodotPinJoint2D::~GodotPinJoint2D(GodotPinJoint2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotGrooveJoint2D::~GodotGrooveJoint2D() */void GodotGrooveJoint2D::~GodotGrooveJoint2D(GodotGrooveJoint2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotDampedSpringJoint2D::~GodotDampedSpringJoint2D() */void GodotDampedSpringJoint2D::~GodotDampedSpringJoint2D(GodotDampedSpringJoint2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotJoint2D::~GodotJoint2D() */void GodotJoint2D::~GodotJoint2D(GodotJoint2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


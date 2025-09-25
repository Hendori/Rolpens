/* GodotPinJoint3D::solve(float) */void GodotPinJoint3D::solve(GodotPinJoint3D *this, float param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   GodotPinJoint3D GVar4;
   GodotPinJoint3D GVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   uint uVar11;
   GodotPinJoint3D *pGVar12;
   float *pfVar13;
   long in_FS_OFFSET;
   float fVar14;
   float fVar15;
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
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   float fStack_74;
   float local_40[4];
   long local_30;
   uVar11 = _LC1;
   pGVar12 = this + 0x94;
   lVar6 = *(long*)( this + 0x38 );
   fVar23 = *(float*)( this + 0x11c );
   lVar7 = *(long*)( this + 0x40 );
   pfVar13 = local_40;
   fVar18 = *(float*)( this + 0x118 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar1 = *(float*)( this + 0x120 );
   fVar21 = *(float*)( lVar6 + 0x74 );
   fVar28 = *(float*)( lVar6 + 0x70 );
   fVar19 = *(float*)( lVar6 + 0x60 ) * fVar18 + *(float*)( lVar6 + 100 ) * fVar23 + *(float*)( lVar6 + 0x68 ) * fVar1 + fVar21;
   fVar20 = *(float*)( lVar6 + 0x54 ) * fVar18 + *(float*)( lVar6 + 0x58 ) * fVar23 + *(float*)( lVar6 + 0x5c ) * fVar1 + fVar28;
   fVar26 = *(float*)( lVar6 + 0x6c );
   fVar22 = *(float*)( this + 0x124 );
   fVar25 = *(float*)( this + 0x128 );
   local_40[0] = 0.0;
   local_40[1] = 0.0;
   fVar14 = fVar18 * *(float*)( lVar6 + 0x48 ) + fVar23 * *(float*)( lVar6 + 0x4c ) + fVar1 * *(float*)( lVar6 + 0x50 ) + fVar26;
   fVar17 = *(float*)( lVar7 + 0x74 );
   fVar23 = *(float*)( this + 300 );
   local_40[2] = 0.0;
   GVar4 = this[0x30];
   GVar5 = this[0x31];
   fVar18 = *(float*)( lVar7 + 0x70 );
   fVar15 = *(float*)( lVar7 + 100 ) * fVar25 + *(float*)( lVar7 + 0x60 ) * fVar22 + *(float*)( lVar7 + 0x68 ) * fVar23 + fVar17;
   fVar1 = *(float*)( this + 0x48 );
   fVar2 = *(float*)( this + 0x4c );
   fVar16 = *(float*)( lVar7 + 0x54 ) * fVar22 + *(float*)( lVar7 + 0x58 ) * fVar25 + *(float*)( lVar7 + 0x5c ) * fVar23 + fVar18;
   fVar3 = *(float*)( this + 0x50 );
   fVar27 = *(float*)( lVar7 + 0x6c );
   fVar24 = (float)( (uint)fVar3 ^ _LC1 );
   fVar23 = fVar22 * *(float*)( lVar7 + 0x48 ) + fVar25 * *(float*)( lVar7 + 0x4c ) + fVar23 * *(float*)( lVar7 + 0x50 ) + fVar27;
   while (true) {
      *pfVar13 = 1.0;
      uVar9 = *(undefined8*)( lVar6 + 0xd8 );
      uVar10 = *(undefined8*)( lVar6 + 0xe0 );
      uVar8 = *(undefined8*)( lVar6 + 0xe8 );
      fVar26 = ( fVar14 - fVar26 ) - *(float*)( lVar6 + 0x1f8 );
      fVar25 = ( fVar19 - fVar21 ) - *(float*)( lVar6 + 0x200 );
      fStack_74 = (float)( (ulong)uVar8 >> 0x20 );
      fVar27 = ( fVar23 - fVar27 ) - *(float*)( lVar7 + 0x1f8 );
      fVar21 = ( fVar15 - fVar17 ) - *(float*)( lVar7 + 0x200 );
      fVar22 = ( fVar20 - fVar28 ) - *(float*)( lVar6 + 0x1fc );
      fVar18 = ( fVar16 - fVar18 ) - *(float*)( lVar7 + 0x1fc );
      local_88 = (float)uVar9;
      fVar21 = ( ( (float)( ( uint )(( fVar20 - fVar16 ) * local_40[1] + ( fVar14 - fVar23 ) * local_40[0] + ( fVar19 - fVar15 ) * local_40[2]) ^ uVar11 ) * fVar1 ) / param_1 ) * ( _LC2 / *(float*)pGVar12 ) - ( ( ( ( fVar26 * fStack_74 - *(float*)( lVar6 + 0xe4 ) * fVar25 ) + *(float*)( lVar6 + 0xdc ) ) - ( ( fVar27 * *(float*)( lVar7 + 0xec ) - *(float*)( lVar7 + 0xe4 ) * fVar21 ) + *(float*)( lVar7 + 0xdc ) ) ) * local_40[1] + ( ( ( *(float*)( lVar6 + 0xe8 ) * fVar25 - fStack_74 * fVar22 ) + local_88 ) - ( ( fVar21 * *(float*)( lVar7 + 0xe8 ) - *(float*)( lVar7 + 0xec ) * fVar18 ) + *(float*)( lVar7 + 0xd8 ) ) ) * local_40[0] + ( ( ( *(float*)( lVar6 + 0xe4 ) * fVar22 - *(float*)( lVar6 + 0xe8 ) * fVar26 ) + *(float*)( lVar6 + 0xe0 ) ) - ( ( fVar18 * *(float*)( lVar7 + 0xe4 ) - fVar27 * *(float*)( lVar7 + 0xe8 ) ) + *(float*)( lVar7 + 0xe0 ) ) ) * local_40[2] ) * fVar2 * ( _LC2 / *(float*)pGVar12 );
      fVar18 = fVar21;
      if (( ( 0.0 < fVar3 ) && ( fVar18 = fVar24 ),fVar24 <= fVar21 )) {
         fVar18 = fVar21;
      }

      fVar27 = local_40[2] * fVar18;
      fVar17 = local_40[1] * fVar18;
      fVar21 = fVar18 * local_40[0];
      *(float*)( this + 0x54 ) = *(float*)( this + 0x54 ) + fVar18;
      if (GVar4 != (GodotPinJoint3D)0x0) {
         fVar18 = *(float*)( lVar6 + 0x170 );
         fVar28 = fVar25 * fVar21 - fVar26 * fVar27;
         fVar26 = fVar26 * fVar17 - fVar22 * fVar21;
         fVar22 = fVar22 * fVar27 - fVar25 * fVar17;
         *(ulong*)( lVar6 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar6 + 0x1c8 ) >> 0x20 ) * fVar28 + *(float*)( lVar6 + 0x1c8 ) * fVar22 + *(float*)( lVar6 + 0x1d0 ) * fVar26 + fStack_74, (float)*(undefined8*)( lVar6 + 0x1c0 ) * fVar28 + *(float*)( lVar6 + 0x1bc ) * fVar22 + *(float*)( lVar6 + 0x1c4 ) * fVar26 + (float)uVar8);
         fStack_84 = (float)( (ulong)uVar9 >> 0x20 );
         fStack_80 = (float)uVar10;
         fStack_7c = (float)( (ulong)uVar10 >> 0x20 );
         *(float*)( lVar6 + 0xd8 ) = fVar21 * fVar18 + local_88;
         *(float*)( lVar6 + 0xdc ) = fVar17 * fVar18 + fStack_84;
         *(float*)( lVar6 + 0xe0 ) = fVar18 * fVar27 + fStack_80;
         *(float*)( lVar6 + 0xe4 ) = fVar26 * *(float*)( lVar6 + 0x1b8 ) + fVar28 * *(float*)( lVar6 + 0x1b4 ) + fVar22 * *(float*)( lVar6 + 0x1b0 ) + fStack_7c;
      }

      if (GVar5 != (GodotPinJoint3D)0x0) {
         fVar27 = (float)( (uint)fVar27 ^ uVar11 );
         fVar21 = (float)( (uint)fVar21 ^ uVar11 );
         fVar17 = (float)( (uint)fVar17 ^ uVar11 );
         fVar25 = ( fVar15 - *(float*)( lVar7 + 0x74 ) ) - *(float*)( lVar7 + 0x200 );
         fVar22 = ( fVar16 - *(float*)( lVar7 + 0x70 ) ) - *(float*)( lVar7 + 0x1fc );
         fVar26 = ( fVar23 - *(float*)( lVar7 + 0x6c ) ) - *(float*)( lVar7 + 0x1f8 );
         fVar18 = *(float*)( lVar7 + 0x170 );
         fVar28 = fVar25 * fVar21 - fVar26 * fVar27;
         fVar26 = fVar26 * fVar17 - fVar22 * fVar21;
         fVar22 = fVar22 * fVar27 - fVar25 * fVar17;
         *(ulong*)( lVar7 + 0xd8 ) = CONCAT44(fVar17 * fVar18 + *(float*)( lVar7 + 0xdc ), fVar21 * fVar18 + *(float*)( lVar7 + 0xd8 ));
         *(ulong*)( lVar7 + 0xe0 ) = CONCAT44(fVar28 * *(float*)( lVar7 + 0x1b4 ) + fVar22 * *(float*)( lVar7 + 0x1b0 ) + fVar26 * *(float*)( lVar7 + 0x1b8 ) + *(float*)( lVar7 + 0xe4 ), fVar18 * fVar27 + *(float*)( lVar7 + 0xe0 ));
         *(ulong*)( lVar7 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar7 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar7 + 0x1cc ) >> 0x20 ) * fVar26 + *(float*)( lVar7 + 0x1cc ) * fVar28 + (float)( ( ulong ) * (undefined8*)( lVar7 + 0x1c4 ) >> 0x20 ) * fVar22, (float)*(undefined8*)( lVar7 + 0xe8 ) + (float)*(undefined8*)( lVar7 + 0x1c4 ) * fVar26 + *(float*)( lVar7 + 0x1c0 ) * fVar28 + (float)*(undefined8*)( lVar7 + 0x1bc ) * fVar22);
      }

      pGVar12 = pGVar12 + 0x40;
      *pfVar13 = 0.0;
      pfVar13 = pfVar13 + 1;
      if (this + 0x154 == pGVar12) break;
      fVar28 = *(float*)( lVar6 + 0x70 );
      fVar26 = *(float*)( lVar6 + 0x6c );
      fVar18 = *(float*)( lVar7 + 0x70 );
      fVar27 = *(float*)( lVar7 + 0x6c );
      fVar21 = *(float*)( lVar6 + 0x74 );
      fVar17 = *(float*)( lVar7 + 0x74 );
   }
;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotPinJoint3D::setup(float) */ulong GodotPinJoint3D::setup(float param_1) {
   float fVar1;
   float fVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   uint uVar8;
   int iVar9;
   byte bVar10;
   undefined8 in_RCX;
   float *pfVar12;
   undefined8 *puVar13;
   long in_RDI;
   long in_FS_OFFSET;
   float fVar14;
   float fVar15;
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
   undefined8 local_120;
   float local_118;
   undefined8 local_110;
   float local_108;
   undefined8 local_104;
   float local_fc;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined4 local_d8;
   float local_c8;
   float local_c4;
   float local_c0;
   float local_bc;
   float local_b8;
   float local_b4;
   float local_b0;
   float local_ac;
   float local_a8;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined4 local_78;
   float local_68;
   float local_64;
   float local_60;
   float local_5c;
   float local_58;
   float fStack_54;
   float local_50;
   float fStack_4c;
   float local_48;
   long local_40;
   ulong uVar11;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar9 = GodotBody3D::get_mode();
   *(bool*)( in_RDI + 0x30 ) = 1 < iVar9;
   iVar9 = GodotBody3D::get_mode();
   *(bool*)( in_RDI + 0x31 ) = 1 < iVar9;
   bVar10 = 1 < iVar9 | *(byte*)( in_RDI + 0x30 );
   uVar11 = CONCAT71(( int7 )((ulong)in_RCX >> 8), bVar10);
   if (bVar10 != 0) {
      pfVar12 = (float*)( in_RDI + 0x58 );
      puVar13 = &local_120;
      local_118 = 0.0;
      local_120 = 0;
      *(undefined4*)( in_RDI + 0x54 ) = 0;
      do {
         lVar3 = *(long*)( in_RDI + 0x38 );
         lVar4 = *(long*)( in_RDI + 0x40 );
         *(undefined4*)puVar13 = 0x3f800000;
         fVar21 = *(float*)( in_RDI + 0x128 );
         fVar23 = *(float*)( in_RDI + 300 );
         fVar1 = *(float*)( lVar3 + 0x170 );
         fVar16 = *(float*)( in_RDI + 0x124 );
         uVar5 = *(undefined8*)( lVar4 + 0x1f8 );
         fVar2 = *(float*)( lVar4 + 0x170 );
         local_fc = *(float*)( lVar4 + 0x200 );
         fVar18 = ( ( *(float*)( lVar4 + 0x60 ) * fVar16 + *(float*)( lVar4 + 100 ) * fVar21 + *(float*)( lVar4 + 0x68 ) * fVar23 + *(float*)( lVar4 + 0x74 ) ) - *(float*)( lVar4 + 0x74 ) ) - local_fc;
         local_104._4_4_ = (float)( (ulong)uVar5 >> 0x20 );
         fVar17 = ( ( *(float*)( lVar4 + 0x54 ) * fVar16 + *(float*)( lVar4 + 0x58 ) * fVar21 + *(float*)( lVar4 + 0x5c ) * fVar23 + *(float*)( lVar4 + 0x70 ) ) - *(float*)( lVar4 + 0x70 ) ) - local_104._4_4_;
         local_104._0_4_ = (float)uVar5;
         fVar20 = ( ( fVar16 * *(float*)( lVar4 + 0x48 ) + fVar21 * *(float*)( lVar4 + 0x4c ) + fVar23 * *(float*)( lVar4 + 0x50 ) + *(float*)( lVar4 + 0x6c ) ) - *(float*)( lVar4 + 0x6c ) ) - (float)local_104;
         uVar6 = *(undefined8*)( lVar3 + 0x1f8 );
         fVar21 = *(float*)( in_RDI + 0x118 );
         fVar23 = *(float*)( in_RDI + 0x11c );
         fVar16 = *(float*)( in_RDI + 0x120 );
         local_108 = *(float*)( lVar3 + 0x200 );
         local_98 = *(undefined8*)( lVar4 + 0x1d4 );
         uStack_90 = *(undefined8*)( lVar4 + 0x1dc );
         local_78 = *(undefined4*)( lVar4 + 500 );
         local_88 = *(undefined8*)( lVar4 + 0x1e4 );
         uStack_80 = *(undefined8*)( lVar4 + 0x1ec );
         fVar22 = ( ( *(float*)( lVar3 + 0x60 ) * fVar21 + *(float*)( lVar3 + 100 ) * fVar23 + *(float*)( lVar3 + 0x68 ) * fVar16 + *(float*)( lVar3 + 0x74 ) ) - *(float*)( lVar3 + 0x74 ) ) - local_108;
         local_110._4_4_ = (float)( (ulong)uVar6 >> 0x20 );
         fVar19 = ( ( *(float*)( lVar3 + 0x54 ) * fVar21 + *(float*)( lVar3 + 0x58 ) * fVar23 + *(float*)( lVar3 + 0x5c ) * fVar16 + *(float*)( lVar3 + 0x70 ) ) - *(float*)( lVar3 + 0x70 ) ) - local_110._4_4_;
         local_110._0_4_ = (float)uVar6;
         fVar15 = ( ( fVar21 * *(float*)( lVar3 + 0x48 ) + fVar23 * *(float*)( lVar3 + 0x4c ) + fVar16 * *(float*)( lVar3 + 0x50 ) + *(float*)( lVar3 + 0x6c ) ) - *(float*)( lVar3 + 0x6c ) ) - (float)local_110;
         local_110 = uVar6;
         local_104 = uVar5;
         Basis::transposed();
         lVar7 = *(long*)( in_RDI + 0x38 );
         local_f8 = *(undefined8*)( lVar7 + 0x1d4 );
         uStack_f0 = *(undefined8*)( lVar7 + 0x1dc );
         local_e8 = *(undefined8*)( lVar7 + 0x1e4 );
         uStack_e0 = *(undefined8*)( lVar7 + 0x1ec );
         local_d8 = *(undefined4*)( lVar7 + 500 );
         Basis::transposed();
         uVar8 = _LC1;
         pfVar12[9] = 0.0;
         pfVar12[10] = 0.0;
         *(undefined8*)pfVar12 = local_120;
         fVar21 = pfVar12[1];
         fVar23 = *pfVar12;
         pfVar12[0xb] = 0.0;
         pfVar12[2] = local_118;
         for (int i = 0; i < 3; i++) {
            pfVar12[( i + 12 )] = 0;
         }

         fVar14 = fVar15 * fVar21 - fVar19 * fVar23;
         fVar16 = pfVar12[2];
         fVar25 = fVar22 * fVar23 - fVar15 * fVar16;
         fVar15 = fVar19 * fVar16 - fVar22 * fVar21;
         fVar19 = local_b0 * fVar15 + local_ac * fVar25 + local_a8 * fVar14;
         fVar22 = local_bc * fVar15 + local_b8 * fVar25 + local_b4 * fVar14;
         fVar14 = fVar14 * local_c0 + fVar15 * local_c8 + fVar25 * local_c4;
         fVar15 = fVar20 * (float)( (uint)fVar21 ^ uVar8 ) - fVar17 * (float)( (uint)fVar23 ^ uVar8 );
         fVar23 = (float)( (uint)fVar23 ^ uVar8 ) * fVar18 - fVar20 * (float)( (uint)fVar16 ^ uVar8 );
         fVar21 = (float)( (uint)fVar16 ^ uVar8 ) * fVar17 - fVar18 * (float)( (uint)fVar21 ^ uVar8 );
         fVar24 = *(float*)( lVar3 + 0x174 ) * fVar14;
         fVar20 = *(float*)( lVar3 + 0x17c ) * fVar19;
         fVar17 = fVar15 * fStack_54 + local_58 * fVar23 + local_5c * fVar21;
         fVar18 = fVar15 * local_48 + fStack_4c * fVar23 + local_50 * fVar21;
         fVar25 = *(float*)( lVar3 + 0x178 ) * fVar22;
         pfVar12[9] = fVar24;
         *(ulong*)( pfVar12 + 7 ) = CONCAT44(fVar18, fVar17);
         pfVar12[0xb] = fVar20;
         pfVar12[10] = fVar25;
         fVar23 = fVar21 * local_68 + fVar23 * local_64 + local_60 * fVar15;
         fVar21 = *(float*)( lVar4 + 0x174 );
         *(ulong*)( pfVar12 + 3 ) = CONCAT44(fVar22, fVar14);
         *(ulong*)( pfVar12 + 5 ) = CONCAT44(fVar23, fVar19);
         fVar21 = fVar21 * fVar23;
         fVar16 = (float)*(undefined8*)( lVar4 + 0x178 ) * fVar17;
         fVar15 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x178 ) >> 0x20 ) * fVar18;
         pfVar12[0xc] = fVar21;
         *(ulong*)( pfVar12 + 0xd ) = CONCAT44(fVar15, fVar16);
         fVar21 = fVar23 * fVar21 + fVar16 * fVar17 + fVar15 * fVar18 + fVar14 * fVar24 + fVar22 * fVar25 + fVar19 * fVar20 + fVar1 + fVar2;
         pfVar12[0xf] = fVar21;
         if (fVar21 <= 0.0) {
            _err_print_error("GodotJacobianEntry3D", "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h", 0x4b, "Condition \"m_Adiag <= real_t(0.0)\" is true.", 0, 0);
         }

         pfVar12 = pfVar12 + 0x10;
         *(undefined4*)puVar13 = 0;
         puVar13 = (undefined8*)( (long)puVar13 + 4 );
      }
 while ( pfVar12 != (float*)( in_RDI + 0x118 ) );
      uVar11 = (ulong)bVar10;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::erase(GodotConstraint3D*
   const&) [clone .isra.0] */void HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase(HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>> *this, GodotConstraint3D **param_1) {
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
            if (( (uint)uVar32 == uVar37 ) && ( *param_1 == *(GodotConstraint3D**)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
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
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00100fb9;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00100fb9:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00100fc0;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00100fc0:if (plVar10 != (long*)0x0) {
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
/* GodotPinJoint3D::~GodotPinJoint3D() */void GodotPinJoint3D::~GodotPinJoint3D(GodotPinJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotPinJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_00101e40;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPinJoint3D::~GodotPinJoint3D() */void GodotPinJoint3D::~GodotPinJoint3D(GodotPinJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotPinJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_00101e40;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x130);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPinJoint3D::set_param(PhysicsServer3D::PinJointParam, float) */void GodotPinJoint3D::set_param(undefined4 param_1, GodotPinJoint3D *this, int param_3) {
   if (param_3 == 1) {
      *(undefined4*)( this + 0x4c ) = param_1;
      return;
   }

   if (param_3 == 2) {
      *(undefined4*)( this + 0x50 ) = param_1;
   }
 else if (param_3 == 0) {
      *(undefined4*)( this + 0x48 ) = param_1;
      return;
   }

   return;
}
/* GodotPinJoint3D::get_param(PhysicsServer3D::PinJointParam) const */void GodotPinJoint3D::get_param(undefined8 param_1, int param_2) {
   if (param_2 == 1) {
      return;
   }

   if (( param_2 != 2 ) && ( param_2 == 0 )) {
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPinJoint3D::GodotPinJoint3D(GodotBody3D*, Vector3 const&, GodotBody3D*, Vector3 const&) */void GodotPinJoint3D::GodotPinJoint3D(GodotPinJoint3D *this, GodotBody3D *param_1, Vector3 *param_2, GodotBody3D *param_3, Vector3 *param_4) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   undefined8 uVar4;
   GodotPinJoint3D *pGVar5;
   GodotPinJoint3D *pGVar6;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   GodotPinJoint3D *local_28;
   long local_20;
   uVar4 = _UNK_00102078;
   uVar2 = CONCAT44(_LC2, __LC13);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x24] = (GodotPinJoint3D)0x1;
   *(GodotPinJoint3D**)( this + 8 ) = this + 0x38;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 2;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined4*)( this + 0x20 ) = 1;
   *(undefined2*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x48 ) = uVar2;
   *(undefined8*)( this + 0x50 ) = uVar4;
   uVar1 = _LC2;
   *(undefined***)this = &PTR_get_soft_body_ptr_00101e90;
   pGVar5 = this + 0x58;
   do {
      *(undefined8*)pGVar5 = 0;
      pGVar6 = pGVar5 + 0x40;
      *(undefined4*)( pGVar5 + 8 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined8*)( pGVar5 + ( 12*i + 12 ) ) = 0;
         *(undefined4*)( pGVar5 + ( 12*i + 20 ) ) = 0;
      }

      *(undefined4*)( pGVar5 + 0x3c ) = uVar1;
      pGVar5 = pGVar6;
   }
 while ( pGVar6 != this + 0x118 );
   *(undefined8*)( this + 0x118 ) = 0;
   *(undefined4*)( this + 0x120 ) = 0;
   *(undefined8*)( this + 0x124 ) = 0;
   *(undefined4*)( this + 300 ) = 0;
   uVar2 = *(undefined8*)param_2;
   *(GodotBody3D**)( this + 0x38 ) = param_1;
   *(undefined8*)( this + 0x118 ) = uVar2;
   uVar1 = *(undefined4*)( param_2 + 8 );
   *(GodotBody3D**)( this + 0x40 ) = param_3;
   *(undefined4*)( this + 0x120 ) = uVar1;
   *(undefined8*)( this + 0x124 ) = *(undefined8*)param_4;
   *(undefined4*)( this + 300 ) = *(undefined4*)( param_4 + 8 );
   local_28 = this;
   puVar7 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( param_1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
   lVar3 = *(long*)( this + 0x40 );
   *puVar7 = 0;
   local_28 = this;
   puVar7 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar3 + 0x2f0 ), (GodotConstraint3D**)&local_28);
   *puVar7 = 1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotConstraint3D::get_soft_body_ptr(int) const */undefined8 GodotConstraint3D::get_soft_body_ptr(int param_1) {
   return 0;
}
/* GodotConstraint3D::get_soft_body_count() const */undefined8 GodotConstraint3D::get_soft_body_count(void) {
   return 0;
}
/* GodotJoint3D::setup(float) */undefined8 GodotJoint3D::setup(float param_1) {
   return 0;
}
/* GodotJoint3D::pre_solve(float) */undefined8 GodotJoint3D::pre_solve(float param_1) {
   return 1;
}
/* GodotJoint3D::solve(float) */void GodotJoint3D::solve(float param_1) {
   return;
}
/* GodotJoint3D::get_type() const */undefined8 GodotJoint3D::get_type(void) {
   return 5;
}
/* GodotPinJoint3D::get_type() const */undefined8 GodotPinJoint3D::get_type(void) {
   return 0;
}
/* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_00101e40;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_00101e40;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x38);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::operator[](GodotConstraint3D*
   const&) */undefined1[16];HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator [](HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
             *this,GodotConstraint3D**param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
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
  undefined1 auVar35[16];
  undefined1 auVar36[16](*, pauVar37)[16](*, pauVar42)[16](*, pauVar57)[16];
  undefined1 auVar58[16];
  undefined1 auVar59[16](ulong)(local_70 = = (void*)0x0) {
   uVar40 = uVar55 * 4;
   uVar39 = uVar55 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   lStack_90 = 0x101c62;
   local_70 = (void*)Memory::alloc_static(uVar39, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar47 == 0) {
      iVar43 = *(int*)( this + 0x2c );
      pGVar56 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_0010178b;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_70 + uVar39 ) ) && ( local_70 < (void*)( (long)pvVar4 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar55 != uVar40 );
         iVar43 = *(int*)( this + 0x2c );
         pGVar56 = *param_1;
      }
 else {
         memset(pvVar4, 0, uVar40);
         lStack_90 = 0x101caa;
         memset(local_70, 0, uVar39);
         iVar43 = *(int*)( this + 0x2c );
         pGVar56 = *param_1;
      }

   }

   if (iVar43 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_00101b33;
   }

}
else{iVar43 = *(int*)( this + 0x2c );if (iVar43 != 0) {
   lVar52 = *(long*)( this + 0x10 );
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pGVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar54 * lVar3;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar55;
   lVar45 = SUB168(auVar5 * auVar21, 8);
   uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar53 = SUB164(auVar5 * auVar21, 8);
   if (uVar44 != 0) {
      uVar50 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar44 ) && ( pGVar56 == *(GodotConstraint3D**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) )) {
            auVar58._0_8_ = *(long*)( (long)local_70 + (ulong)uVar53 * 8 ) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
         }

         uVar50 = uVar50 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar3;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar55;
         lVar45 = SUB168(auVar6 * auVar22, 8);
         uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar53 = SUB164(auVar6 * auVar22, 8);
      }
 while ( ( uVar44 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar44 * lVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar47 ) - SUB164(auVar7 * auVar23, 8)) * lVar3,auVar24._8_8_ = 0,auVar24._0_8_ = uVar55,lVar46 = SUB168(auVar8 * auVar24, 8),uVar50 <= SUB164(auVar8 * auVar24, 8) );
   }

   LAB_00101b33:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pGVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar54 * lVar3;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar51;
   lVar45 = SUB168(auVar17 * auVar33, 8);
   uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar44 = SUB164(auVar17 * auVar33, 8);
   if (uVar47 != 0) {
      uVar53 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar47 ) && ( *(GodotConstraint3D**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) == pGVar56 )) {
            pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar44 * 8 );
            *(undefined4*)( pauVar42[1] + 8 ) = 0;
            lStack_90 = lVar46;
            goto LAB_00101b14;
         }

         uVar53 = uVar53 + 1;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(uVar44 + 1) * lVar3;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar51;
         lVar45 = SUB168(auVar18 * auVar34, 8);
         uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar44 = SUB164(auVar18 * auVar34, 8);
      }
 while ( ( uVar47 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar47 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar51,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar44 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar51,lVar46 = SUB168(auVar20 * auVar36, 8),uVar53 <= SUB164(auVar20 * auVar36, 8) );
   }

}
}LAB_0010178b:if ((float)uVar55 * __LC6 < (float)( iVar43 + 1 )) {
   uVar47 = *(uint*)( this + 0x28 );
   if (uVar47 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00101b14;
   }

   uVar40 = ( ulong )(uVar47 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar44 = *(uint*)( hash_table_size_primes + (ulong)uVar47 * 4 );
   if (uVar47 + 1 < 2) {
      uVar40 = 2;
   }

   uVar47 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar39 = (ulong)uVar47;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar4 = *(void**)( this + 0x10 );
   uVar40 = uVar39 * 4;
   uVar55 = uVar39 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar55, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar47 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar55 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar55);
      }

   }

   if (uVar44 != 0) {
      uVar40 = 0;
      do {
         uVar47 = *(uint*)( (long)pvVar4 + uVar40 * 4 );
         if (uVar47 != 0) {
            lVar52 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar55 = CONCAT44(0, uVar53);
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar47 * lVar3;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            lVar45 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar52 + lVar45 * 4 );
            iVar43 = SUB164(auVar9 * auVar25, 8);
            uVar50 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
            while (uVar50 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar50 * lVar3;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar55;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar53 + iVar43 ) - SUB164(auVar10 * auVar26, 8)) * lVar3;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar55;
               uVar38 = SUB164(auVar11 * auVar27, 8);
               uVar48 = uVar41;
               if (uVar38 < uVar49) {
                  *puVar1 = uVar47;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar41;
                  uVar47 = uVar50;
                  uVar49 = uVar38;
               }

               uVar49 = uVar49 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar55;
               lVar45 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar52 + lVar45 * 4 );
               iVar43 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar48;
               uVar50 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar41;
            *puVar1 = uVar47;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != uVar44 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar4, false);
   }

}
pGVar56 = *param_1;pauVar42 = (undefined1(*) [16])operator_new(0x20, "");*(GodotConstraint3D**)pauVar42[1] = pGVar56;*(undefined4*)( pauVar42[1] + 8 ) = 0;*pauVar42 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
lVar52 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar40 = (long)*param_1 * 0x3ffff - 1;uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;uVar40 = uVar40 >> 0x16 ^ uVar40;uVar55 = uVar40 & 0xffffffff;if ((int)uVar40 == 0) {
   uVar55 = 1;
}
uVar50 = 0;lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar55;uVar47 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar47);auVar13._8_8_ = 0;auVar13._0_8_ = uVar55 * lVar3;auVar29._8_8_ = 0;auVar29._0_8_ = uVar40;lStack_90 = SUB168(auVar13 * auVar29, 8);lVar45 = *(long*)( this + 8 );puVar1 = (uint*)( lVar52 + lStack_90 * 4 );iVar43 = SUB164(auVar13 * auVar29, 8);uVar44 = *puVar1;pauVar37 = pauVar42;while (uVar44 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar44 * lVar3;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar47 + iVar43 ) - SUB164(auVar14 * auVar30, 8)) * lVar3;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar40;
   uVar53 = SUB164(auVar15 * auVar31, 8);
   pauVar57 = pauVar37;
   if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8*)( lVar45 + lStack_90 * 8 );
      pauVar57 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
   }

   uVar53 = (uint)uVar55;
   uVar50 = uVar50 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar40;
   lStack_90 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
   iVar43 = SUB164(auVar16 * auVar32, 8);
   pauVar37 = pauVar57;
   uVar44 = *puVar1;
}
;*(undefined1(**) [16])( lVar45 + lStack_90 * 8 ) = pauVar37;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00101b14:auVar59._8_8_ = lStack_90;auVar59._0_8_ = pauVar42[1] + 8;return auVar59;}/* WARNING: Control flow encountered bad instruction data *//* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* GodotHingeJoint3D::solve(float) */void GodotHingeJoint3D::solve(GodotHingeJoint3D *this, float param_1) {
   GodotHingeJoint3D GVar1;
   GodotHingeJoint3D GVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   GodotHingeJoint3D *pGVar7;
   long in_FS_OFFSET;
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
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float local_58;
   float local_54;
   float local_50;
   float local_4c;
   float local_48;
   float local_28;
   float fStack_24;
   float local_1c;
   float fStack_18;
   fVar20 = _LC1;
   uVar6 = _LC22;
   lVar3 = *(long*)( this + 0x38 );
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( this + 0x40 );
   local_4c = *(float*)( lVar3 + 0x4c );
   fVar13 = *(float*)( lVar3 + 0x60 );
   fVar41 = *(float*)( lVar3 + 100 );
   local_58 = *(float*)( lVar5 + 0x48 );
   local_48 = *(float*)( lVar3 + 0x50 );
   fVar38 = *(float*)( lVar3 + 0x68 );
   fVar22 = *(float*)( lVar3 + 0x54 );
   local_54 = *(float*)( lVar5 + 0x4c );
   fVar10 = *(float*)( lVar3 + 0x58 );
   fVar32 = *(float*)( lVar3 + 0x5c );
   fVar29 = *(float*)( lVar5 + 0x60 );
   local_50 = *(float*)( lVar5 + 0x50 );
   fVar25 = *(float*)( lVar3 + 0x48 );
   fVar39 = *(float*)( lVar5 + 100 );
   fVar8 = *(float*)( lVar5 + 0x68 );
   fVar15 = *(float*)( lVar5 + 0x54 );
   fVar14 = *(float*)( lVar5 + 0x58 );
   fVar9 = *(float*)( lVar5 + 0x5c );
   GVar1 = this[0x30];
   GVar2 = this[0x31];
   if (this[0x259] == (GodotHingeJoint3D)0x0) {
      fVar16 = *(float*)( this + 0x1ec );
      pGVar7 = this + 0x48;
      fVar19 = *(float*)( this + 500 );
      fVar17 = *(float*)( this + 0x224 );
      fVar21 = *(float*)( this + 0x220 );
      fVar30 = fVar38 * fVar19 + *(float*)( this + 0x1f0 ) * fVar41 + fVar13 * fVar16 + *(float*)( lVar3 + 0x74 );
      fVar13 = *(float*)( this + 0x21c );
      fVar23 = fVar10 * *(float*)( this + 0x1f0 ) + fVar22 * fVar16 + fVar32 * fVar19 + *(float*)( lVar3 + 0x70 );
      fVar27 = local_4c * *(float*)( this + 0x1f0 ) + fVar16 * fVar25 + fVar19 * local_48 + *(float*)( lVar3 + 0x6c );
      fVar35 = ( fVar23 - *(float*)( lVar3 + 0x70 ) ) - *(float*)( lVar3 + 0x1fc );
      fVar34 = ( fVar30 - *(float*)( lVar3 + 0x74 ) ) - *(float*)( lVar3 + 0x200 );
      fVar24 = fVar29 * fVar13 + fVar39 * fVar21 + fVar8 * fVar17 + *(float*)( lVar5 + 0x74 );
      fVar8 = *(float*)( lVar3 + 0xe8 );
      fVar39 = *(float*)( lVar3 + 0xec );
      fVar36 = ( fVar24 - *(float*)( lVar5 + 0x74 ) ) - *(float*)( lVar5 + 0x200 );
      fVar25 = *(float*)( lVar3 + 0xe4 );
      fVar19 = ( fVar27 - *(float*)( lVar3 + 0x6c ) ) - *(float*)( lVar3 + 0x1f8 );
      fVar26 = fVar15 * fVar13 + fVar14 * fVar21 + fVar9 * fVar17 + *(float*)( lVar5 + 0x70 );
      fVar33 = fVar13 * local_58 + fVar21 * local_54 + fVar17 * local_50 + *(float*)( lVar5 + 0x6c );
      fVar21 = ( fVar26 - *(float*)( lVar5 + 0x70 ) ) - *(float*)( lVar5 + 0x1fc );
      fVar17 = ( fVar33 - *(float*)( lVar5 + 0x6c ) ) - *(float*)( lVar5 + 0x1f8 );
      fVar13 = *(float*)( lVar5 + 0xe4 );
      fVar9 = *(float*)( lVar5 + 0xe8 );
      fVar14 = *(float*)( lVar5 + 0xec );
      fVar15 = *(float*)( lVar3 + 0xd8 );
      fVar29 = *(float*)( lVar3 + 0xe0 );
      fVar32 = *(float*)( lVar3 + 0xdc );
      fVar10 = *(float*)( lVar5 + 0xe8 );
      fVar22 = *(float*)( lVar5 + 0xe0 );
      fVar38 = *(float*)( lVar5 + 0xd8 );
      fVar41 = *(float*)( lVar5 + 0xdc );
      fVar16 = *(float*)( this + 0x254 );
      do {
         fVar12 = *(float*)pGVar7;
         fVar18 = *(float*)( pGVar7 + 4 );
         fVar28 = *(float*)( pGVar7 + 8 );
         fVar11 = ( ( (float)( ( uint )(( fVar23 - fVar26 ) * fVar18 + ( fVar27 - fVar33 ) * fVar12 + ( fVar30 - fVar24 ) * fVar28) ^ uVar6 ) * fVar16 ) / param_1 ) * ( fVar20 / *(float*)( pGVar7 + 0x3c ) ) - ( ( ( ( fVar19 * fVar39 - fVar25 * fVar34 ) + fVar32 ) - ( ( fVar17 * fVar14 - fVar13 * fVar36 ) + fVar41 ) ) * fVar18 + ( ( ( fVar34 * fVar8 - fVar35 * fVar39 ) + fVar15 ) - ( ( fVar36 * fVar10 - fVar21 * fVar14 ) + fVar38 ) ) * fVar12 + ( ( ( fVar35 * fVar25 - fVar19 * fVar8 ) + fVar29 ) - ( ( fVar21 * fVar13 - fVar9 * fVar17 ) + fVar22 ) ) * fVar28 ) * ( fVar20 / *(float*)( pGVar7 + 0x3c ) );
         fVar28 = fVar28 * fVar11;
         fVar18 = fVar18 * fVar11;
         fVar12 = fVar11 * fVar12;
         *(float*)( this + 0x25c ) = *(float*)( this + 0x25c ) + fVar11;
         if (GVar1 != (GodotHingeJoint3D)0x0) {
            fVar31 = ( fVar23 - *(float*)( lVar3 + 0x70 ) ) - *(float*)( lVar3 + 0x1fc );
            fVar40 = ( fVar27 - *(float*)( lVar3 + 0x6c ) ) - *(float*)( lVar3 + 0x1f8 );
            fVar37 = ( fVar30 - *(float*)( lVar3 + 0x74 ) ) - *(float*)( lVar3 + 0x200 );
            fVar11 = *(float*)( lVar3 + 0x170 );
            fVar42 = fVar18 * fVar40 - fVar12 * fVar31;
            fVar40 = fVar12 * fVar37 - fVar40 * fVar28;
            fVar31 = fVar31 * fVar28 - fVar37 * fVar18;
            *(ulong*)( lVar3 + 0xd8 ) = CONCAT44(fVar18 * fVar11 + *(float*)( lVar3 + 0xdc ), fVar12 * fVar11 + *(float*)( lVar3 + 0xd8 ));
            *(ulong*)( lVar3 + 0xe0 ) = CONCAT44(fVar31 * *(float*)( lVar3 + 0x1b0 ) + fVar40 * *(float*)( lVar3 + 0x1b4 ) + fVar42 * *(float*)( lVar3 + 0x1b8 ) + *(float*)( lVar3 + 0xe4 ), fVar11 * fVar28 + *(float*)( lVar3 + 0xe0 ));
            *(ulong*)( lVar3 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1c4 ) >> 0x20 ) * fVar31 + fVar40 * *(float*)( lVar3 + 0x1cc ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1cc ) >> 0x20 ) * fVar42, (float)*(undefined8*)( lVar3 + 0xe8 ) + (float)*(undefined8*)( lVar3 + 0x1bc ) * fVar31 + fVar40 * *(float*)( lVar3 + 0x1c0 ) + (float)*(undefined8*)( lVar3 + 0x1c4 ) * fVar42);
         }

         if (GVar2 != (GodotHingeJoint3D)0x0) {
            fVar31 = ( fVar26 - *(float*)( lVar5 + 0x70 ) ) - *(float*)( lVar5 + 0x1fc );
            fVar28 = (float)( (uint)fVar28 ^ uVar6 );
            fVar12 = (float)( (uint)fVar12 ^ uVar6 );
            fVar18 = (float)( (uint)fVar18 ^ uVar6 );
            fVar11 = *(float*)( lVar5 + 0x170 );
            fVar37 = ( fVar24 - *(float*)( lVar5 + 0x74 ) ) - *(float*)( lVar5 + 0x200 );
            fVar42 = ( fVar33 - *(float*)( lVar5 + 0x6c ) ) - *(float*)( lVar5 + 0x1f8 );
            fVar40 = fVar37 * fVar12 - fVar42 * fVar28;
            fVar37 = fVar31 * fVar28 - fVar37 * fVar18;
            fVar31 = fVar42 * fVar18 - fVar31 * fVar12;
            *(ulong*)( lVar5 + 0xd8 ) = CONCAT44(fVar18 * fVar11 + *(float*)( lVar5 + 0xdc ), fVar12 * fVar11 + *(float*)( lVar5 + 0xd8 ));
            *(ulong*)( lVar5 + 0xe0 ) = CONCAT44(*(float*)( lVar5 + 0x1b4 ) * fVar40 + fVar37 * *(float*)( lVar5 + 0x1b0 ) + *(float*)( lVar5 + 0x1b8 ) * fVar31 + *(float*)( lVar5 + 0xe4 ), fVar11 * fVar28 + *(float*)( lVar5 + 0xe0 ));
            *(ulong*)( lVar5 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar5 + 0x1cc ) >> 0x20 ) * fVar31 + fVar37 * (float)( ( ulong ) * (undefined8*)( lVar5 + 0x1c4 ) >> 0x20 ) + fVar40 * *(float*)( lVar5 + 0x1cc ), (float)*(undefined8*)( lVar5 + 0xe8 ) + (float)*(undefined8*)( lVar5 + 0x1c4 ) * fVar31 + fVar37 * (float)*(undefined8*)( lVar5 + 0x1bc ) + fVar40 * *(float*)( lVar5 + 0x1c0 ));
         }

         pGVar7 = pGVar7 + 0x40;
      }
 while ( pGVar7 != this + 0x108 );
      local_58 = *(float*)( lVar5 + 0x48 );
      local_4c = *(float*)( lVar3 + 0x4c );
      fVar29 = *(float*)( lVar5 + 0x60 );
      fVar39 = *(float*)( lVar5 + 100 );
      local_54 = *(float*)( lVar5 + 0x4c );
      fVar15 = *(float*)( lVar5 + 0x54 );
      local_48 = *(float*)( lVar3 + 0x50 );
      fVar8 = *(float*)( lVar5 + 0x68 );
      local_50 = *(float*)( lVar5 + 0x50 );
      fVar14 = *(float*)( lVar5 + 0x58 );
      fVar9 = *(float*)( lVar5 + 0x5c );
      fVar38 = *(float*)( lVar3 + 0x68 );
      fVar32 = *(float*)( lVar3 + 0x5c );
      fVar10 = *(float*)( lVar3 + 0x58 );
      fVar13 = *(float*)( lVar3 + 0x60 );
      fVar41 = *(float*)( lVar3 + 100 );
      fVar22 = *(float*)( lVar3 + 0x54 );
      fVar25 = *(float*)( lVar3 + 0x48 );
   }

   fVar16 = *(float*)( this + 0x1dc );
   fVar19 = *(float*)( this + 0x1e8 );
   fVar17 = *(float*)( lVar3 + 0xec );
   fVar21 = *(float*)( lVar5 + 0xec );
   local_1c = (float)*(undefined8*)( lVar3 + 0xe4 );
   fVar38 = fVar13 * *(float*)( this + 0x1d0 ) + fVar41 * fVar16 + fVar38 * fVar19;
   fVar22 = fVar10 * fVar16 + *(float*)( this + 0x1d0 ) * fVar22 + fVar32 * fVar19;
   fVar13 = *(float*)( this + 0x200 );
   fVar32 = *(float*)( this + 0x20c );
   fVar10 = *(float*)( this + 0x1d0 ) * fVar25 + fVar16 * local_4c + fVar19 * local_48;
   fVar25 = *(float*)( this + 0x218 );
   local_28 = (float)*(undefined8*)( lVar5 + 0xe4 );
   fVar8 = fVar39 * fVar32 + fVar29 * fVar13 + fVar8 * fVar25;
   fStack_24 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0xe4 ) >> 0x20 );
   fStack_18 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0xe4 ) >> 0x20 );
   fVar9 = fVar15 * fVar13 + fVar14 * fVar32 + fVar9 * fVar25;
   fVar25 = fVar13 * local_58 + fVar32 * local_54 + fVar25 * local_50;
   fVar13 = fStack_18 * fVar22 + local_1c * fVar10 + fVar38 * fVar17;
   fVar14 = fStack_24 * fVar9 + local_28 * fVar25 + fVar21 * fVar8;
   fVar41 = ( fVar17 - fVar38 * fVar13 ) - ( fVar21 - fVar14 * fVar8 );
   fVar32 = ( fStack_18 - fVar13 * fVar22 ) - ( fStack_24 - fVar14 * fVar9 );
   fVar39 = ( local_1c - fVar13 * fVar10 ) - ( local_28 - fVar14 * fVar25 );
   fVar15 = fVar32 * fVar32 + fVar39 * fVar39 + fVar41 * fVar41;
   fVar29 = SQRT(fVar15);
   if (_LC3 < fVar29) {
      if (fVar15 == 0.0) {
         fVar29 = 0.0;
         fVar16 = 0.0;
         fVar15 = 0.0;
      }
 else {
         fVar15 = fVar39 / fVar29;
         fVar16 = fVar32 / fVar29;
         fVar29 = fVar41 / fVar29;
      }

      fVar15 = *(float*)( this + 0x238 ) * ( fVar20 / ( ( *(float*)( lVar5 + 0x1bc ) * fVar16 + *(float*)( lVar5 + 0x1b0 ) * fVar15 + *(float*)( lVar5 + 0x1c8 ) * fVar29 ) * fVar15 + ( *(float*)( lVar5 + 0x1c0 ) * fVar16 + *(float*)( lVar5 + 0x1b4 ) * fVar15 + *(float*)( lVar5 + 0x1cc ) * fVar29 ) * fVar16 + ( *(float*)( lVar5 + 0x1c4 ) * fVar16 + *(float*)( lVar5 + 0x1b8 ) * fVar15 + *(float*)( lVar5 + 0x1d0 ) * fVar29 ) * fVar29 + ( *(float*)( lVar3 + 0x1c0 ) * fVar16 + *(float*)( lVar3 + 0x1b4 ) * fVar15 + *(float*)( lVar3 + 0x1cc ) * fVar29 ) * fVar16 + ( *(float*)( lVar3 + 0x1bc ) * fVar16 + *(float*)( lVar3 + 0x1b0 ) * fVar15 + *(float*)( lVar3 + 0x1c8 ) * fVar29 ) * fVar15 + ( fVar16 * *(float*)( lVar3 + 0x1c4 ) + fVar15 * *(float*)( lVar3 + 0x1b8 ) + *(float*)( lVar3 + 0x1d0 ) * fVar29 ) * fVar29 ) );
      fVar39 = fVar39 * fVar15;
      fVar32 = fVar32 * fVar15;
      fVar41 = fVar41 * fVar15;
   }

   fVar19 = fVar20 / param_1;
   fVar16 = (float)( ( uint )(fVar25 * fVar38 - fVar8 * fVar10) ^ uVar6 ) * fVar19;
   fVar15 = (float)( ( uint )(fVar8 * fVar22 - fVar9 * fVar38) ^ uVar6 ) * fVar19;
   fVar30 = (float)( ( uint )(fVar9 * fVar10 - fVar25 * fVar22) ^ uVar6 ) * fVar19;
   fVar29 = fVar16 * fVar16 + fVar15 * fVar15 + fVar30 * fVar30;
   fVar26 = SQRT(fVar29);
   if (_LC3 < fVar26) {
      if (fVar29 == 0.0) {
         fVar26 = 0.0;
         fVar29 = 0.0;
         fVar36 = 0.0;
      }
 else {
         fVar36 = fVar15 / fVar26;
         fVar29 = fVar16 / fVar26;
         fVar26 = fVar30 / fVar26;
      }

      fVar20 = fVar20 / ( ( *(float*)( lVar3 + 0x1c0 ) * fVar29 + *(float*)( lVar3 + 0x1b4 ) * fVar36 + *(float*)( lVar3 + 0x1cc ) * fVar26 ) * fVar29 + ( *(float*)( lVar3 + 0x1bc ) * fVar29 + *(float*)( lVar3 + 0x1b0 ) * fVar36 + *(float*)( lVar3 + 0x1c8 ) * fVar26 ) * fVar36 + ( fVar29 * *(float*)( lVar3 + 0x1c4 ) + fVar36 * *(float*)( lVar3 + 0x1b8 ) + *(float*)( lVar3 + 0x1d0 ) * fVar26 ) * fVar26 + ( *(float*)( lVar5 + 0x1bc ) * fVar29 + *(float*)( lVar5 + 0x1b0 ) * fVar36 + *(float*)( lVar5 + 0x1c8 ) * fVar26 ) * fVar36 + ( *(float*)( lVar5 + 0x1c0 ) * fVar29 + *(float*)( lVar5 + 0x1b4 ) * fVar36 + *(float*)( lVar5 + 0x1cc ) * fVar26 ) * fVar29 + ( *(float*)( lVar5 + 0x1c4 ) * fVar29 + *(float*)( lVar5 + 0x1b8 ) * fVar36 + *(float*)( lVar5 + 0x1d0 ) * fVar26 ) * fVar26 );
      fVar15 = fVar15 * fVar20;
      fVar16 = fVar16 * fVar20;
      fVar30 = fVar30 * fVar20;
   }

   if (GVar1 != (GodotHingeJoint3D)0x0) {
      fVar20 = fVar15 - fVar39;
      fVar29 = fVar16 - fVar32;
      fVar26 = fVar30 - fVar41;
      *(float*)( lVar3 + 0xec ) = *(float*)( lVar3 + 0x1d0 ) * fVar26 + *(float*)( lVar3 + 0x1cc ) * fVar29 + *(float*)( lVar3 + 0x1c8 ) * fVar20 + *(float*)( lVar3 + 0xec );
      *(ulong*)( lVar3 + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0x1bc ) >> 0x20 ) * fVar29 + *(float*)( lVar3 + 0x1bc ) * fVar20 + fVar26 * *(float*)( lVar3 + 0x1c4 ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0xe4 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0x1b4 ) * fVar29 + *(float*)( lVar3 + 0x1b0 ) * fVar20 + fVar26 * *(float*)( lVar3 + 0x1b8 ) + (float)*(undefined8*)( lVar3 + 0xe4 ));
   }

   if (GVar2 != (GodotHingeJoint3D)0x0) {
      fVar32 = fVar32 - fVar16;
      fVar41 = fVar41 - fVar30;
      fVar39 = fVar39 - fVar15;
      *(float*)( lVar5 + 0xec ) = *(float*)( lVar5 + 0x1d0 ) * fVar41 + *(float*)( lVar5 + 0x1cc ) * fVar32 + *(float*)( lVar5 + 0x1c8 ) * fVar39 + *(float*)( lVar5 + 0xec );
      *(ulong*)( lVar5 + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0x1bc ) >> 0x20 ) * fVar32 + fVar39 * *(float*)( lVar5 + 0x1bc ) + fVar41 * *(float*)( lVar5 + 0x1c4 ) + (float)( ( ulong ) * (undefined8*)( lVar5 + 0xe4 ) >> 0x20 ), (float)*(undefined8*)( lVar5 + 0x1b4 ) * fVar32 + fVar39 * *(float*)( lVar5 + 0x1b0 ) + fVar41 * *(float*)( lVar5 + 0x1b8 ) + (float)*(undefined8*)( lVar5 + 0xe4 ));
   }

   if (this[0x25b] != (GodotHingeJoint3D)0x0) {
      fVar15 = *(float*)( this + 0x248 );
      fVar39 = *(float*)( this + 0x250 );
      fVar29 = ( ( ( fStack_24 - fStack_18 ) * fVar22 + ( local_28 - local_1c ) * fVar10 + ( fVar21 - fVar17 ) * fVar38 ) * *(float*)( this + 0x238 ) + fVar19 * *(float*)( this + 0x24c ) * *(float*)( this + 0x234 ) ) * fVar15 * *(float*)( this + 0x244 ) + fVar39;
      if (fVar29 <= 0.0) {
         fVar29 = 0.0;
      }

      *(float*)( this + 0x250 ) = fVar29;
      fVar29 = fVar29 - fVar39;
      fVar32 = fVar38 * fVar29 * fVar15;
      fVar39 = fVar29 * fVar22 * fVar15;
      fVar15 = fVar29 * fVar10 * fVar15;
      if (GVar1 != (GodotHingeJoint3D)0x0) {
         *(float*)( lVar3 + 0xec ) = *(float*)( lVar3 + 0x1c8 ) * fVar15 + *(float*)( lVar3 + 0x1cc ) * fVar39 + *(float*)( lVar3 + 0x1d0 ) * fVar32 + *(float*)( lVar3 + 0xec );
         *(ulong*)( lVar3 + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0x1bc ) >> 0x20 ) * fVar39 + *(float*)( lVar3 + 0x1bc ) * fVar15 + *(float*)( lVar3 + 0x1c4 ) * fVar32 + (float)( ( ulong ) * (undefined8*)( lVar3 + 0xe4 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0x1b4 ) * fVar39 + *(float*)( lVar3 + 0x1b0 ) * fVar15 + *(float*)( lVar3 + 0x1b8 ) * fVar32 + (float)*(undefined8*)( lVar3 + 0xe4 ));
      }

      if (GVar2 != (GodotHingeJoint3D)0x0) {
         fVar32 = (float)( (uint)fVar32 ^ uVar6 );
         fVar39 = (float)( (uint)fVar39 ^ uVar6 );
         fVar15 = (float)( (uint)fVar15 ^ uVar6 );
         *(float*)( lVar5 + 0xec ) = *(float*)( lVar5 + 0x1c8 ) * fVar15 + *(float*)( lVar5 + 0x1cc ) * fVar39 + *(float*)( lVar5 + 0x1d0 ) * fVar32 + *(float*)( lVar5 + 0xec );
         *(ulong*)( lVar5 + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0x1bc ) >> 0x20 ) * fVar39 + *(float*)( lVar5 + 0x1bc ) * fVar15 + *(float*)( lVar5 + 0x1c4 ) * fVar32 + (float)( ( ulong ) * (undefined8*)( lVar5 + 0xe4 ) >> 0x20 ), (float)*(undefined8*)( lVar5 + 0x1b4 ) * fVar39 + *(float*)( lVar5 + 0x1b0 ) * fVar15 + *(float*)( lVar5 + 0x1b8 ) * fVar32 + (float)*(undefined8*)( lVar5 + 0xe4 ));
      }

   }

   if (this[0x25a] != (GodotHingeJoint3D)0x0) {
      fVar14 = ( *(float*)( this + 0x228 ) - ( ( fVar13 * fVar10 - fVar14 * fVar25 ) * fVar10 + ( fVar13 * fVar22 - fVar14 * fVar9 ) * fVar22 + ( fVar38 * fVar13 - fVar14 * fVar8 ) * fVar38 ) ) * *(float*)( this + 0x244 );
      fVar13 = *(float*)( this + 0x22c );
      fVar9 = fVar13;
      if (fVar14 <= fVar13) {
         fVar9 = fVar14;
      }

      fVar14 = (float)( (uint)fVar13 ^ uVar6 );
      if ((float)( (uint)fVar13 ^ uVar6 ) <= fVar9) {
         fVar14 = fVar9;
      }

      if (GVar1 != (GodotHingeJoint3D)0x0) {
         fVar9 = fVar38 * fVar14 + 0.0;
         fVar15 = fVar22 * fVar14 + 0.0;
         fVar13 = fVar14 * fVar10 + 0.0;
         *(float*)( lVar3 + 0xec ) = *(float*)( lVar3 + 0x1d0 ) * fVar9 + fVar13 * *(float*)( lVar3 + 0x1c8 ) + *(float*)( lVar3 + 0x1cc ) * fVar15 + *(float*)( lVar3 + 0xec );
         *(ulong*)( lVar3 + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0x1bc ) >> 0x20 ) * fVar15 + fVar13 * *(float*)( lVar3 + 0x1bc ) + *(float*)( lVar3 + 0x1c4 ) * fVar9 + (float)( ( ulong ) * (undefined8*)( lVar3 + 0xe4 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0x1b4 ) * fVar15 + fVar13 * *(float*)( lVar3 + 0x1b0 ) + *(float*)( lVar3 + 0x1b8 ) * fVar9 + (float)*(undefined8*)( lVar3 + 0xe4 ));
      }

      if (GVar2 != (GodotHingeJoint3D)0x0) {
         fVar15 = (float)( ( uint )(fVar22 * fVar14) ^ uVar6 );
         fVar13 = (float)( ( uint )(fVar14 * fVar10) ^ uVar6 );
         fVar9 = (float)( ( uint )(fVar38 * fVar14) ^ uVar6 );
         *(float*)( lVar5 + 0xec ) = *(float*)( lVar5 + 0x1d0 ) * fVar9 + *(float*)( lVar5 + 0x1c8 ) * fVar13 + *(float*)( lVar5 + 0x1cc ) * fVar15 + *(float*)( lVar5 + 0xec );
         *(ulong*)( lVar5 + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0x1bc ) >> 0x20 ) * fVar15 + fVar13 * *(float*)( lVar5 + 0x1bc ) + *(float*)( lVar5 + 0x1c4 ) * fVar9 + (float)( ( ulong ) * (undefined8*)( lVar5 + 0xe4 ) >> 0x20 ), (float)*(undefined8*)( lVar5 + 0x1b4 ) * fVar15 + fVar13 * *(float*)( lVar5 + 0x1b0 ) + *(float*)( lVar5 + 0x1b8 ) * fVar9 + (float)*(undefined8*)( lVar5 + 0xe4 ));
      }

   }

   if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00101689;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00101689:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00101690;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00101690:if (plVar10 != (long*)0x0) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotHingeJoint3D::get_hinge_angle() */ulong GodotHingeJoint3D::get_hinge_angle(GodotHingeJoint3D *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   long lVar7;
   long lVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   lVar7 = *(long*)( this + 0x38 );
   fVar11 = *(float*)( this + 0x208 );
   fVar9 = *(float*)( this + 0x214 );
   fVar10 = *(float*)( this + 0x1e0 );
   lVar8 = *(long*)( this + 0x40 );
   fVar1 = *(float*)( this + 0x1fc );
   fVar2 = *(float*)( this + 0x1d4 );
   fVar3 = *(float*)( this + 0x1c8 );
   fVar4 = *(float*)( this + 0x1e4 );
   fVar5 = *(float*)( this + 0x1d8 );
   fVar6 = *(float*)( this + 0x1cc );
   fVar12 = *(float*)( lVar8 + 100 ) * fVar11 + *(float*)( lVar8 + 0x60 ) * fVar1 + *(float*)( lVar8 + 0x68 ) * fVar9;
   fVar13 = *(float*)( lVar8 + 0x58 ) * fVar11 + *(float*)( lVar8 + 0x54 ) * fVar1 + *(float*)( lVar8 + 0x5c ) * fVar9;
   fVar11 = fVar11 * *(float*)( lVar8 + 0x4c ) + fVar1 * *(float*)( lVar8 + 0x48 ) + fVar9 * *(float*)( lVar8 + 0x50 );
   fVar9 = ( fVar5 * *(float*)( lVar7 + 100 ) + fVar6 * *(float*)( lVar7 + 0x60 ) + fVar4 * *(float*)( lVar7 + 0x68 ) ) * fVar12 + ( *(float*)( lVar7 + 0x58 ) * fVar5 + fVar6 * *(float*)( lVar7 + 0x54 ) + *(float*)( lVar7 + 0x5c ) * fVar4 ) * fVar13 + ( fVar5 * *(float*)( lVar7 + 0x4c ) + fVar6 * *(float*)( lVar7 + 0x48 ) + fVar4 * *(float*)( lVar7 + 0x50 ) ) * fVar11;
   fVar10 = ( *(float*)( lVar7 + 0x48 ) * fVar3 + *(float*)( lVar7 + 0x4c ) * fVar2 + *(float*)( lVar7 + 0x50 ) * fVar10 ) * fVar11 + ( *(float*)( lVar7 + 0x54 ) * fVar3 + *(float*)( lVar7 + 0x58 ) * fVar2 + *(float*)( lVar7 + 0x5c ) * fVar10 ) * fVar13 + ( *(float*)( lVar7 + 0x60 ) * fVar3 + *(float*)( lVar7 + 100 ) * fVar2 + *(float*)( lVar7 + 0x68 ) * fVar10 ) * fVar12;
   fVar11 = ABS(fVar10);
   if (fVar9 < 0.0) {
      fVar11 = _LC21 - ( ( fVar11 + fVar9 ) / ( fVar11 - fVar9 ) ) * _LC20;
   }
 else {
      fVar11 = _LC20 - ( ( fVar9 - fVar11 ) / ( fVar11 + fVar9 ) ) * _LC20;
   }

   if (0.0 <= fVar10) {
      return (ulong)(uint)fVar11;
   }

   return CONCAT44(_UNK_00104be4, (uint)fVar11 ^ _LC22);
}
/* GodotHingeJoint3D::setup(float) */byte GodotHingeJoint3D::setup(float param_1) {
   undefined8 uVar1;
   long lVar2;
   float fVar3;
   double dVar4;
   byte bVar5;
   int iVar6;
   GodotHingeJoint3D *pGVar7;
   long lVar8;
   GodotHingeJoint3D *in_RDI;
   long lVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   undefined4 uVar15;
   undefined4 uVar16;
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
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   undefined8 uVar35;
   GodotJacobianEntry3D *local_1e8;
   Vector3 *local_180;
   undefined8 local_160;
   float local_158;
   undefined8 local_150;
   float local_148;
   undefined8 local_140;
   float local_138;
   undefined8 local_134;
   float local_12c;
   undefined8 local_128;
   float local_120;
   float local_11c;
   float fStack_118;
   float local_114;
   float local_110;
   float local_10c;
   float local_108;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = GodotBody3D::get_mode();
   in_RDI[0x30] = ( GodotHingeJoint3D )(1 < iVar6);
   iVar6 = GodotBody3D::get_mode();
   in_RDI[0x31] = ( GodotHingeJoint3D )(1 < iVar6);
   bVar5 = 1 < iVar6 | (byte)in_RDI[0x30];
   if (bVar5 == 0) goto LAB_00102857;
   *(undefined4*)( in_RDI + 0x25c ) = 0;
   dVar4 = _LC23;
   fVar3 = _LC1;
   fVar14 = _LC22;
   if (in_RDI[0x259] == (GodotHingeJoint3D)0x0) {
      lVar9 = *(long*)( in_RDI + 0x38 );
      lVar8 = *(long*)( in_RDI + 0x40 );
      fVar12 = *(float*)( in_RDI + 0x1ec );
      fVar24 = *(float*)( in_RDI + 0x1f0 );
      fVar21 = *(float*)( in_RDI + 500 );
      fVar22 = *(float*)( lVar9 + 0x6c );
      fVar18 = *(float*)( lVar9 + 0x74 );
      fVar25 = *(float*)( lVar9 + 0x70 );
      fVar20 = *(float*)( lVar8 + 0x74 );
      fVar19 = *(float*)( lVar9 + 0x60 ) * fVar12 + *(float*)( lVar9 + 100 ) * fVar24 + *(float*)( lVar9 + 0x68 ) * fVar21 + fVar18;
      fVar13 = *(float*)( in_RDI + 0x224 );
      fVar34 = *(float*)( in_RDI + 0x220 );
      fVar23 = *(float*)( lVar9 + 0x54 ) * fVar12 + *(float*)( lVar9 + 0x58 ) * fVar24 + *(float*)( lVar9 + 0x5c ) * fVar21 + fVar25;
      fVar11 = fVar12 * *(float*)( lVar9 + 0x48 ) + fVar24 * *(float*)( lVar9 + 0x4c ) + fVar21 * *(float*)( lVar9 + 0x50 ) + fVar22;
      fVar12 = *(float*)( in_RDI + 0x21c );
      fVar24 = *(float*)( lVar8 + 0x70 );
      fVar17 = *(float*)( lVar8 + 100 ) * fVar34 + *(float*)( lVar8 + 0x60 ) * fVar12 + *(float*)( lVar8 + 0x68 ) * fVar13 + fVar20;
      local_120 = fVar17 - fVar19;
      fVar21 = *(float*)( lVar8 + 0x6c );
      fVar33 = *(float*)( lVar8 + 0x58 ) * fVar34 + *(float*)( lVar8 + 0x54 ) * fVar12 + *(float*)( lVar8 + 0x5c ) * fVar13 + fVar24;
      local_128._4_4_ = fVar33 - fVar23;
      local_114 = 0.0;
      local_11c = 0.0;
      fVar12 = fVar12 * *(float*)( lVar8 + 0x48 ) + fVar34 * *(float*)( lVar8 + 0x4c ) + fVar13 * *(float*)( lVar8 + 0x50 ) + fVar21;
      local_128._0_4_ = fVar12 - fVar11;
      fVar13 = local_128._4_4_ * local_128._4_4_ + (float)local_128 * (float)local_128 + local_120 * local_120;
      if (_LC3 <= ABS(fVar13)) {
         if (fVar13 == 0.0) {
            local_128._0_4_ = 0.0;
            goto LAB_00101c29;
         }

         fVar13 = SQRT(fVar13);
         local_120 = local_120 / fVar13;
         local_128._0_4_ = (float)local_128 / fVar13;
         local_128._4_4_ = local_128._4_4_ / fVar13;
         fVar13 = (float)( (uint)local_120 ^ (uint)_LC22 );
         if ((double)ABS(local_120) <= _LC23) goto LAB_00101c47;
         local_110 = local_120 * local_120 + local_128._4_4_ * local_128._4_4_;
         local_114 = _LC1 / SQRT(local_110);
         local_110 = local_110 * local_114;
         fStack_118 = local_114 * fVar13;
         local_114 = local_114 * local_128._4_4_;
         local_108 = fStack_118 * (float)local_128;
         local_10c = local_114 * (float)( (uint)(float)local_128 ^ (uint)_LC22 );
      }
 else {
         local_128._0_4_ = _LC1;
         LAB_00101c29:local_128._4_4_ = 0.0;
         local_120 = 0.0;
         fVar13 = _LC22;
         LAB_00101c47:local_108 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_;
         fVar34 = _LC1 / SQRT(local_108);
         fStack_118 = (float)local_128 * fVar34;
         local_11c = (float)( (uint)local_128._4_4_ ^ (uint)_LC22 ) * fVar34;
         local_108 = local_108 * fVar34;
         local_110 = fStack_118 * fVar13;
         local_10c = local_120 * local_11c;
      }

      uVar16 = 0;
      uVar15 = 0;
      puVar10 = &local_128;
      pGVar7 = in_RDI + 0x48;
      while (true) {
         fVar13 = *(float*)( lVar8 + 0x170 );
         uVar35 = *(undefined8*)( lVar8 + 0x1f8 );
         local_12c = *(float*)( lVar8 + 0x200 );
         uVar1 = *(undefined8*)( lVar9 + 0x1f8 );
         fVar34 = *(float*)( lVar9 + 0x170 );
         local_138 = *(float*)( lVar9 + 0x200 );
         fVar29 = ( fVar17 - fVar20 ) - local_12c;
         local_134._4_4_ = (float)( (ulong)uVar35 >> 0x20 );
         fVar20 = ( fVar33 - fVar24 ) - local_134._4_4_;
         local_134._0_4_ = (float)uVar35;
         fVar30 = ( fVar12 - fVar21 ) - (float)local_134;
         local_98 = *(undefined8*)( lVar8 + 0x1d4 );
         uStack_90 = *(undefined8*)( lVar8 + 0x1dc );
         fVar26 = ( fVar19 - fVar18 ) - local_138;
         local_140._4_4_ = (float)( (ulong)uVar1 >> 0x20 );
         fVar18 = ( fVar23 - fVar25 ) - local_140._4_4_;
         local_140._0_4_ = (float)uVar1;
         fVar27 = ( fVar11 - fVar22 ) - (float)local_140;
         local_88 = *(undefined8*)( lVar8 + 0x1e4 );
         uStack_80 = *(undefined8*)( lVar8 + 0x1ec );
         local_78 = *(undefined4*)( lVar8 + 500 );
         local_140 = uVar1;
         local_134 = uVar35;
         Basis::transposed();
         lVar2 = *(long*)( in_RDI + 0x38 );
         local_f8 = *(undefined8*)( lVar2 + 0x1d4 );
         uStack_f0 = *(undefined8*)( lVar2 + 0x1dc );
         local_e8 = *(undefined8*)( lVar2 + 0x1e4 );
         uStack_e0 = *(undefined8*)( lVar2 + 0x1ec );
         local_d8 = *(undefined4*)( lVar2 + 500 );
         Basis::transposed();
         uVar35 = *puVar10;
         *(undefined8*)( pGVar7 + 0x24 ) = 0;
         *(float*)( pGVar7 + 0x2c ) = 0.0;
         *(undefined8*)pGVar7 = uVar35;
         fVar24 = *(float*)( pGVar7 + 4 );
         fVar21 = *(float*)pGVar7;
         fVar22 = *(float*)( puVar10 + 1 );
         *(undefined8*)( pGVar7 + 0x30 ) = 0;
         *(float*)( pGVar7 + 0x38 ) = 0.0;
         *(float*)( pGVar7 + 8 ) = fVar22;
         fVar25 = fVar27 * fVar24 - fVar18 * fVar21;
         fVar22 = *(float*)( pGVar7 + 8 );
         fVar31 = fVar26 * fVar21 - fVar27 * fVar22;
         fVar18 = fVar18 * fVar22 - fVar26 * fVar24;
         fVar27 = local_b0 * fVar18 + local_ac * fVar31 + local_a8 * fVar25;
         *(float*)( pGVar7 + 0x14 ) = fVar27;
         fVar28 = local_bc * fVar18 + local_b8 * fVar31 + local_b4 * fVar25;
         fVar18 = fVar18 * local_c8 + fVar31 * local_c4 + fVar25 * local_c0;
         *(float*)( pGVar7 + 0x10 ) = fVar28;
         *(float*)( pGVar7 + 0xc ) = fVar18;
         fVar32 = fVar30 * (float)( (uint)fVar24 ^ (uint)fVar14 ) - fVar20 * (float)( (uint)fVar21 ^ (uint)fVar14 );
         fVar25 = (float)( (uint)fVar21 ^ (uint)fVar14 ) * fVar29 - fVar30 * (float)( (uint)fVar22 ^ (uint)fVar14 );
         fVar21 = fVar20 * (float)( (uint)fVar22 ^ (uint)fVar14 ) - fVar29 * (float)( (uint)fVar24 ^ (uint)fVar14 );
         fVar31 = *(float*)( lVar9 + 0x174 ) * fVar18;
         fVar30 = *(float*)( lVar9 + 0x178 ) * fVar28;
         *(float*)( pGVar7 + 0x24 ) = fVar31;
         *(float*)( pGVar7 + 0x28 ) = fVar30;
         fVar29 = *(float*)( lVar9 + 0x17c ) * fVar27;
         fVar20 = local_58 * fVar25 + local_5c * fVar21 + fStack_54 * fVar32;
         fVar26 = fStack_4c * fVar25 + local_50 * fVar21 + local_48 * fVar32;
         fVar24 = *(float*)( lVar8 + 0x174 );
         *(float*)( pGVar7 + 0x2c ) = fVar29;
         *(ulong*)( pGVar7 + 0x1c ) = CONCAT44(fVar26, fVar20);
         fVar21 = fVar21 * local_68 + fVar25 * local_64 + local_60 * fVar32;
         fVar22 = (float)*(undefined8*)( lVar8 + 0x178 ) * fVar20;
         fVar25 = (float)( ( ulong ) * (undefined8*)( lVar8 + 0x178 ) >> 0x20 ) * fVar26;
         fVar24 = fVar24 * fVar21;
         *(float*)( pGVar7 + 0x18 ) = fVar21;
         *(ulong*)( pGVar7 + 0x34 ) = CONCAT44(fVar25, fVar22);
         *(float*)( pGVar7 + 0x30 ) = fVar24;
         fVar24 = fVar21 * fVar24 + fVar22 * fVar20 + fVar25 * fVar26 + fVar18 * fVar31 + fVar28 * fVar30 + fVar27 * fVar29 + fVar34 + fVar13;
         *(float*)( pGVar7 + 0x3c ) = fVar24;
         if (fVar24 <= 0.0) {
            uVar35 = CONCAT44(uVar15, fVar14);
            _err_print_error("GodotJacobianEntry3D", "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h", 0x4b, "Condition \"m_Adiag <= real_t(0.0)\" is true.", 0, 0, uVar35, uVar16);
            fVar14 = (float)uVar35;
            uVar15 = ( undefined4 )((ulong)uVar35 >> 0x20);
         }

         pGVar7 = pGVar7 + 0x40;
         puVar10 = (undefined8*)( (long)puVar10 + 0xc );
         if (pGVar7 == in_RDI + 0x108) break;
         lVar8 = *(long*)( in_RDI + 0x40 );
         lVar9 = *(long*)( in_RDI + 0x38 );
         fVar20 = *(float*)( lVar8 + 0x74 );
         fVar18 = *(float*)( lVar9 + 0x74 );
         fVar25 = *(float*)( lVar9 + 0x70 );
         fVar22 = *(float*)( lVar9 + 0x6c );
         fVar24 = *(float*)( lVar8 + 0x70 );
         fVar21 = *(float*)( lVar8 + 0x6c );
      }
;
   }

   local_180 = (Vector3*)&local_128;
   local_1e8 = (GodotJacobianEntry3D*)( in_RDI + 0x108 );
   fVar12 = *(float*)( in_RDI + 0x1e8 );
   fVar24 = (float)( ( ulong ) * (undefined8*)( in_RDI + 0x1d8 ) >> 0x20 );
   fVar21 = (float)*(undefined8*)( in_RDI + 0x1d0 );
   if ((double)ABS(fVar12) <= dVar4) {
      fVar20 = 0.0;
      fVar34 = fVar21 * fVar21 + fVar24 * fVar24;
      fVar18 = fVar3 / SQRT(fVar34);
      fVar22 = (float)( (uint)fVar14 ^ (uint)fVar24 ) * fVar18;
      fVar13 = fVar18 * fVar21;
      fVar18 = fVar18 * fVar34;
      fVar25 = fVar12 * fVar22;
      fVar34 = (float)( (uint)fVar12 ^ (uint)fVar14 ) * fVar13;
   }
 else {
      fVar22 = 0.0;
      fVar18 = fVar12 * fVar12 + fVar24 * fVar24;
      fVar34 = fVar3 / SQRT(fVar18);
      fVar13 = (float)( (uint)fVar12 ^ (uint)fVar14 ) * fVar34;
      fVar20 = fVar34 * fVar24;
      fVar34 = fVar34 * fVar18;
      fVar18 = fVar13 * fVar21;
      fVar25 = (float)( (uint)fVar14 ^ (uint)fVar21 ) * fVar20;
   }

   lVar9 = *(long*)( in_RDI + 0x38 );
   lVar8 = *(long*)( in_RDI + 0x40 );
   fVar14 = *(float*)( lVar9 + 0x4c );
   fVar33 = (float)( ( ulong ) * (undefined8*)( lVar9 + 0x50 ) >> 0x20 );
   fVar19 = (float)*(undefined8*)( lVar9 + 0x48 );
   fVar17 = (float)( ( ulong ) * (undefined8*)( lVar9 + 0x58 ) >> 0x20 );
   fVar23 = (float)*(undefined8*)( lVar9 + 0x50 );
   fVar11 = *(float*)( lVar9 + 0x58 );
   local_158 = fVar13 * *(float*)( lVar9 + 100 ) + fVar22 * *(float*)( lVar9 + 0x60 ) + fVar20 * *(float*)( lVar9 + 0x68 );
   local_160 = CONCAT44(fVar13 * fVar11 + fVar22 * fVar33 + fVar20 * fVar17, fVar13 * fVar14 + fVar22 * fVar19 + fVar20 * fVar23);
   local_150 = CONCAT44(fVar25 * fVar11 + fVar34 * fVar33 + fVar18 * fVar17, fVar25 * fVar14 + fVar34 * fVar19 + fVar18 * fVar23);
   local_148 = fVar34 * *(float*)( lVar9 + 0x60 ) + fVar25 * *(float*)( lVar9 + 100 ) + fVar18 * *(float*)( lVar9 + 0x68 );
   local_128 = CONCAT44(fVar24 * fVar11 + fVar21 * fVar33 + fVar12 * fVar17, fVar24 * fVar14 + fVar21 * fVar19 + fVar12 * fVar23);
   local_120 = *(float*)( lVar9 + 0x60 ) * fVar21 + fVar24 * *(float*)( lVar9 + 100 ) + fVar12 * *(float*)( lVar9 + 0x68 );
   local_98 = *(undefined8*)( lVar8 + 0x1d4 );
   uStack_90 = *(undefined8*)( lVar8 + 0x1dc );
   local_88 = *(undefined8*)( lVar8 + 0x1e4 );
   uStack_80 = *(undefined8*)( lVar8 + 0x1ec );
   local_78 = *(undefined4*)( lVar8 + 500 );
   Basis::transposed();
   lVar2 = *(long*)( in_RDI + 0x38 );
   local_f8 = *(undefined8*)( lVar2 + 0x1d4 );
   uStack_f0 = *(undefined8*)( lVar2 + 0x1dc );
   local_e8 = *(undefined8*)( lVar2 + 0x1e4 );
   uStack_e0 = *(undefined8*)( lVar2 + 0x1ec );
   local_d8 = *(undefined4*)( lVar2 + 500 );
   Basis::transposed();
   GodotJacobianEntry3D::GodotJacobianEntry3D(local_1e8, (Vector3*)&local_160, (Basis*)&local_c8, (Basis*)&local_68, (Vector3*)( lVar9 + 0x174 ), (Vector3*)( lVar8 + 0x174 ));
   lVar9 = *(long*)( in_RDI + 0x40 );
   lVar8 = *(long*)( in_RDI + 0x38 );
   local_98 = *(undefined8*)( lVar9 + 0x1d4 );
   uStack_90 = *(undefined8*)( lVar9 + 0x1dc );
   local_88 = *(undefined8*)( lVar9 + 0x1e4 );
   uStack_80 = *(undefined8*)( lVar9 + 0x1ec );
   local_78 = *(undefined4*)( lVar9 + 500 );
   Basis::transposed();
   lVar2 = *(long*)( in_RDI + 0x38 );
   local_f8 = *(undefined8*)( lVar2 + 0x1d4 );
   uStack_f0 = *(undefined8*)( lVar2 + 0x1dc );
   local_e8 = *(undefined8*)( lVar2 + 0x1e4 );
   uStack_e0 = *(undefined8*)( lVar2 + 0x1ec );
   local_d8 = *(undefined4*)( lVar2 + 500 );
   Basis::transposed();
   GodotJacobianEntry3D::GodotJacobianEntry3D((GodotJacobianEntry3D*)( in_RDI + 0x148 ), (Vector3*)&local_150, (Basis*)&local_c8, (Basis*)&local_68, (Vector3*)( lVar8 + 0x174 ), (Vector3*)( lVar9 + 0x174 ));
   lVar9 = *(long*)( in_RDI + 0x40 );
   lVar8 = *(long*)( in_RDI + 0x38 );
   local_98 = *(undefined8*)( lVar9 + 0x1d4 );
   uStack_90 = *(undefined8*)( lVar9 + 0x1dc );
   local_88 = *(undefined8*)( lVar9 + 0x1e4 );
   uStack_80 = *(undefined8*)( lVar9 + 0x1ec );
   local_78 = *(undefined4*)( lVar9 + 500 );
   Basis::transposed();
   lVar2 = *(long*)( in_RDI + 0x38 );
   local_f8 = *(undefined8*)( lVar2 + 0x1d4 );
   uStack_f0 = *(undefined8*)( lVar2 + 0x1dc );
   local_e8 = *(undefined8*)( lVar2 + 0x1e4 );
   uStack_e0 = *(undefined8*)( lVar2 + 0x1ec );
   local_d8 = *(undefined4*)( lVar2 + 500 );
   Basis::transposed();
   GodotJacobianEntry3D::GodotJacobianEntry3D((GodotJacobianEntry3D*)( in_RDI + 0x188 ), local_180, (Basis*)&local_c8, (Basis*)&local_68, (Vector3*)( lVar8 + 0x174 ), (Vector3*)( lVar9 + 0x174 ));
   fVar14 = (float)get_hinge_angle(in_RDI);
   *(undefined8*)( in_RDI + 0x248 ) = 0;
   in_RDI[0x25b] = (GodotHingeJoint3D)0x0;
   *(undefined4*)( in_RDI + 0x250 ) = 0;
   if (in_RDI[600] != (GodotHingeJoint3D)0x0) {
      fVar12 = *(float*)( in_RDI + 0x23c );
      fVar24 = *(float*)( in_RDI + 0x240 );
      if (fVar12 <= fVar24) {
         if (fVar12 < fVar14) {
            if (fVar24 <= fVar14) {
               in_RDI[0x25b] = (GodotHingeJoint3D)0x1;
               *(undefined4*)( in_RDI + 0x248 ) = 0xbf800000;
               *(float*)( in_RDI + 0x24c ) = fVar24 - fVar14;
            }

         }
 else {
            in_RDI[0x25b] = (GodotHingeJoint3D)0x1;
            *(float*)( in_RDI + 0x248 ) = fVar3;
            *(float*)( in_RDI + 0x24c ) = fVar12 - fVar14;
         }

      }

   }

   lVar9 = *(long*)( in_RDI + 0x38 );
   lVar8 = *(long*)( in_RDI + 0x40 );
   fVar14 = *(float*)( in_RDI + 0x1dc );
   fVar12 = *(float*)( in_RDI + 0x1d0 );
   fVar24 = *(float*)( in_RDI + 0x1e8 );
   fVar22 = *(float*)( lVar9 + 0x60 ) * fVar12 + *(float*)( lVar9 + 100 ) * fVar14 + *(float*)( lVar9 + 0x68 ) * fVar24;
   fVar21 = *(float*)( lVar9 + 0x54 ) * fVar12 + *(float*)( lVar9 + 0x58 ) * fVar14 + *(float*)( lVar9 + 0x5c ) * fVar24;
   fVar14 = fVar12 * *(float*)( lVar9 + 0x48 ) + fVar14 * *(float*)( lVar9 + 0x4c ) + fVar24 * *(float*)( lVar9 + 0x50 );
   *(float*)( in_RDI + 0x244 ) = fVar3 / ( ( *(float*)( lVar8 + 0x1b0 ) * fVar14 + *(float*)( lVar8 + 0x1bc ) * fVar21 + *(float*)( lVar8 + 0x1c8 ) * fVar22 ) * fVar14 + ( *(float*)( lVar8 + 0x1b4 ) * fVar14 + *(float*)( lVar8 + 0x1c0 ) * fVar21 + *(float*)( lVar8 + 0x1cc ) * fVar22 ) * fVar21 + ( *(float*)( lVar8 + 0x1b8 ) * fVar14 + *(float*)( lVar8 + 0x1c4 ) * fVar21 + *(float*)( lVar8 + 0x1d0 ) * fVar22 ) * fVar22 + ( fVar14 * *(float*)( lVar9 + 0x1b8 ) + fVar21 * *(float*)( lVar9 + 0x1c4 ) + *(float*)( lVar9 + 0x1d0 ) * fVar22 ) * fVar22 + ( *(float*)( lVar9 + 0x1b0 ) * fVar14 + *(float*)( lVar9 + 0x1bc ) * fVar21 + *(float*)( lVar9 + 0x1c8 ) * fVar22 ) * fVar14 + ( *(float*)( lVar9 + 0x1b4 ) * fVar14 + *(float*)( lVar9 + 0x1c0 ) * fVar21 + *(float*)( lVar9 + 0x1cc ) * fVar22 ) * fVar21 );
   LAB_00102857:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotHingeJoint3D::set_param(PhysicsServer3D::HingeJointParam, float) */void GodotHingeJoint3D::set_param(undefined4 param_1, GodotHingeJoint3D *this, undefined4 param_3) {
   switch (param_3) {
      case 0:
    *(undefined4 *)(this + 0x254) = param_1;
    return;
      case 1:
    *(undefined4 *)(this + 0x240) = param_1;
    return;
      case 2:
    *(undefined4 *)(this + 0x23c) = param_1;
    return;
      case 3:
    *(undefined4 *)(this + 0x234) = param_1;
    return;
      case 4:
    *(undefined4 *)(this + 0x230) = param_1;
    return;
      case 5:
    *(undefined4 *)(this + 0x238) = param_1;
    return;
      case 6:
    *(undefined4 *)(this + 0x228) = param_1;
    return;
      case 7:
    *(undefined4 *)(this + 0x22c) = param_1;
   }

   return;
}
/* GodotHingeJoint3D::get_param(PhysicsServer3D::HingeJointParam) const */undefined4 GodotHingeJoint3D::get_param(GodotHingeJoint3D *this, undefined4 param_2) {
   switch (param_2) {
      case 0:
    return *(undefined4 *)(this + 0x254);
      case 1:
    return *(undefined4 *)(this + 0x240);
      case 2:
    return *(undefined4 *)(this + 0x23c);
      case 3:
    return *(undefined4 *)(this + 0x234);
      case 4:
    return *(undefined4 *)(this + 0x230);
      case 5:
    return *(undefined4 *)(this + 0x238);
      case 6:
    return *(undefined4 *)(this + 0x228);
      case 7:
    return *(undefined4 *)(this + 0x22c);
      default:
    return 0;
   }

}
/* GodotHingeJoint3D::set_flag(PhysicsServer3D::HingeJointFlag, bool) */void GodotHingeJoint3D::set_flag(GodotHingeJoint3D *this, int param_2, GodotHingeJoint3D param_3) {
   if (param_2 == 0) {
      this[600] = param_3;
      return;
   }

   if (param_2 != 1) {
      return;
   }

   this[0x25a] = param_3;
   return;
}
/* GodotHingeJoint3D::get_flag(PhysicsServer3D::HingeJointFlag) const */GodotHingeJoint3D GodotHingeJoint3D::get_flag(GodotHingeJoint3D *this, int param_2) {
   if (param_2 == 0) {
      return this[600];
   }

   if (param_2 != 1) {
      return (GodotHingeJoint3D)0x0;
   }

   return this[0x25a];
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotHingeJoint3D::GodotHingeJoint3D(GodotBody3D*, GodotBody3D*, Transform3D const&, Transform3D
   const&) */void GodotHingeJoint3D::GodotHingeJoint3D(GodotHingeJoint3D *this, GodotBody3D *param_1, GodotBody3D *param_2, Transform3D *param_3, Transform3D *param_4) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   uint uVar12;
   undefined4 uVar13;
   uint uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   GodotHingeJoint3D *pGVar17;
   GodotHingeJoint3D *pGVar18;
   undefined4 *puVar19;
   long in_FS_OFFSET;
   GodotHingeJoint3D *local_28;
   long local_20;
   uVar13 = _LC1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x24] = (GodotHingeJoint3D)0x1;
   *(GodotHingeJoint3D**)( this + 8 ) = this + 0x38;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 2;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined4*)( this + 0x20 ) = 1;
   *(undefined2*)( this + 0x30 ) = 0;
   *(undefined***)this = &PTR_get_soft_body_ptr_00104a20;
   pGVar18 = this + 0x48;
   do {
      *(undefined8*)pGVar18 = 0;
      pGVar17 = pGVar18 + 0x40;
      *(undefined4*)( pGVar18 + 8 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined8*)( pGVar18 + ( 12*i + 12 ) ) = 0;
         *(undefined4*)( pGVar18 + ( 12*i + 20 ) ) = 0;
      }

      *(undefined4*)( pGVar18 + 0x3c ) = uVar13;
      pGVar18 = pGVar17;
   }
 while ( pGVar17 != this + 0x108 );
   do {
      *(undefined8*)pGVar17 = 0;
      pGVar18 = pGVar17 + 0x40;
      *(undefined4*)( pGVar17 + 8 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined8*)( pGVar17 + ( 12*i + 12 ) ) = 0;
         *(undefined4*)( pGVar17 + ( 12*i + 20 ) ) = 0;
      }

      *(undefined4*)( pGVar17 + 0x3c ) = uVar13;
      uVar14 = _LC33;
      pGVar17 = pGVar18;
   }
 while ( this + 0x1c8 != pGVar18 );
   *(GodotBody3D**)( this + 0x40 ) = param_2;
   uVar12 = _LC22;
   *(undefined1(*) [16])( this + 0x1f8 ) = ZEXT416(uVar14);
   *(undefined1(*) [16])( this + 0x1c8 ) = ZEXT416(uVar14);
   *(undefined1(*) [16])( this + 0x1d8 ) = ZEXT416(uVar14);
   *(undefined1(*) [16])( this + 0x208 ) = ZEXT416(uVar14);
   uVar3 = _UNK_00104c28;
   uVar2 = __LC34;
   *(undefined8*)( this + 0x1e8 ) = 0x3f800000;
   *(undefined8*)( this + 0x228 ) = uVar2;
   *(undefined8*)( this + 0x230 ) = uVar3;
   uVar5 = _UNK_00104c38;
   uVar4 = __LC35;
   *(undefined8*)( this + 0x1f0 ) = 0;
   *(undefined8*)( this + 0x218 ) = 0x3f800000;
   *(undefined8*)( this + 0x220 ) = 0;
   uVar2 = *(undefined8*)param_4;
   uVar3 = *(undefined8*)( param_4 + 8 );
   *(undefined8*)( this + 0x238 ) = uVar4;
   *(undefined8*)( this + 0x240 ) = uVar5;
   uVar16 = _UNK_00104c48;
   uVar15 = __LC36;
   uVar4 = *(undefined8*)param_3;
   uVar5 = *(undefined8*)( param_3 + 8 );
   uVar6 = *(undefined8*)( param_3 + 0x10 );
   uVar7 = *(undefined8*)( param_3 + 0x18 );
   uVar8 = *(undefined8*)( param_3 + 0x20 );
   uVar9 = *(undefined8*)( param_3 + 0x28 );
   *(GodotBody3D**)( this + 0x38 ) = param_1;
   *(undefined8*)( this + 0x1f8 ) = uVar2;
   *(undefined8*)( this + 0x200 ) = uVar3;
   uVar2 = *(undefined8*)( param_4 + 0x10 );
   uVar3 = *(undefined8*)( param_4 + 0x18 );
   uVar10 = *(undefined8*)( param_4 + 0x20 );
   uVar11 = *(undefined8*)( param_4 + 0x28 );
   *(undefined8*)( this + 0x248 ) = uVar15;
   *(undefined8*)( this + 0x250 ) = uVar16;
   *(undefined8*)( this + 0x1c8 ) = uVar4;
   *(undefined8*)( this + 0x1d0 ) = uVar5;
   *(undefined8*)( this + 0x1d8 ) = uVar6;
   *(undefined8*)( this + 0x1e0 ) = uVar7;
   *(undefined8*)( this + 0x1e8 ) = uVar8;
   *(undefined8*)( this + 0x1f0 ) = uVar9;
   *(undefined8*)( this + 0x208 ) = uVar2;
   *(undefined8*)( this + 0x210 ) = uVar3;
   *(undefined8*)( this + 0x218 ) = uVar10;
   *(undefined8*)( this + 0x220 ) = uVar11;
   *(undefined8*)( this + 600 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(uint*)( this + ( 12*i + 512 ) ) = *(uint*)( this + ( 12*i + 512 ) ) ^ uVar12;
   }

   local_28 = this;
   puVar19 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( param_1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
   lVar1 = *(long*)( this + 0x40 );
   *puVar19 = 0;
   local_28 = this;
   puVar19 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
   *puVar19 = 1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotHingeJoint3D::GodotHingeJoint3D(GodotBody3D*, GodotBody3D*, Vector3 const&, Vector3 const&,
   Vector3 const&, Vector3 const&) */void GodotHingeJoint3D::GodotHingeJoint3D(GodotHingeJoint3D *this, GodotBody3D *param_1, GodotBody3D *param_2, Vector3 *param_3, Vector3 *param_4, Vector3 *param_5, Vector3 *param_6) {
   long *plVar1;
   float fVar2;
   long lVar3;
   double dVar4;
   uint uVar5;
   undefined4 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   char cVar9;
   GodotHingeJoint3D *pGVar10;
   undefined4 *puVar11;
   GodotHingeJoint3D *pGVar12;
   void *pvVar13;
   GodotConstraint3D *pGVar14;
   long in_FS_OFFSET;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   long local_80;
   long local_78;
   long local_70;
   GodotConstraint3D *local_68;
   undefined8 local_60;
   float local_58;
   float local_54;
   float local_50;
   float local_4c;
   long local_40;
   uVar6 = _LC1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x24] = (GodotHingeJoint3D)0x1;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 2;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined4*)( this + 0x20 ) = 1;
   *(undefined2*)( this + 0x30 ) = 0;
   *(GodotHingeJoint3D**)( this + 8 ) = this + 0x38;
   *(undefined***)this = &PTR_get_soft_body_ptr_00104a20;
   pGVar10 = this + 0x48;
   do {
      *(undefined8*)pGVar10 = 0;
      pGVar12 = pGVar10 + 0x40;
      *(undefined4*)( pGVar10 + 8 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined8*)( pGVar10 + ( 12*i + 12 ) ) = 0;
         *(undefined4*)( pGVar10 + ( 12*i + 20 ) ) = 0;
      }

      *(undefined4*)( pGVar10 + 0x3c ) = uVar6;
      pGVar10 = pGVar12;
   }
 while ( this + 0x108 != pGVar12 );
   pGVar10 = this + 0x108;
   do {
      *(undefined8*)pGVar10 = 0;
      pGVar12 = pGVar10 + 0x40;
      *(undefined4*)( pGVar10 + 8 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined8*)( pGVar10 + ( 12*i + 12 ) ) = 0;
         *(undefined4*)( pGVar10 + ( 12*i + 20 ) ) = 0;
      }

      *(undefined4*)( pGVar10 + 0x3c ) = uVar6;
      uVar5 = _LC33;
      pGVar10 = pGVar12;
   }
 while ( this + 0x1c8 != pGVar12 );
   *(GodotBody3D**)( this + 0x38 ) = param_1;
   *(undefined1(*) [16])( this + 0x1c8 ) = ZEXT416(uVar5);
   *(undefined1(*) [16])( this + 0x1d8 ) = ZEXT416(uVar5);
   *(undefined1(*) [16])( this + 0x1f8 ) = ZEXT416(uVar5);
   *(undefined1(*) [16])( this + 0x208 ) = ZEXT416(uVar5);
   uVar8 = _UNK_00104c28;
   uVar7 = __LC34;
   *(undefined8*)( this + 0x1f0 ) = 0;
   *(undefined8*)( this + 0x228 ) = uVar7;
   *(undefined8*)( this + 0x230 ) = uVar8;
   uVar8 = _UNK_00104c38;
   uVar7 = __LC35;
   *(undefined8*)( this + 0x1e8 ) = 0x3f800000;
   *(undefined8*)( this + 0x218 ) = 0x3f800000;
   *(undefined8*)( this + 0x220 ) = 0;
   fVar18 = *(float*)param_5;
   fVar19 = *(float*)( param_5 + 4 );
   *(undefined8*)( this + 0x238 ) = uVar7;
   *(undefined8*)( this + 0x240 ) = uVar8;
   uVar8 = _UNK_00104c48;
   uVar7 = __LC36;
   fVar20 = *(float*)( param_1 + 0x54 );
   fVar21 = *(float*)( param_1 + 0x48 );
   *(GodotBody3D**)( this + 0x40 ) = param_2;
   fVar2 = *(float*)( param_5 + 8 );
   fVar16 = *(float*)( param_1 + 0x60 );
   *(undefined8*)( this + 600 ) = 0;
   *(undefined8*)( this + 0x248 ) = uVar7;
   *(undefined8*)( this + 0x250 ) = uVar8;
   *(undefined8*)( this + 0x1ec ) = *(undefined8*)param_3;
   *(undefined4*)( this + 500 ) = *(undefined4*)( param_3 + 8 );
   uVar5 = _LC22;
   dVar4 = (double)( fVar18 * fVar21 + fVar19 * fVar20 + fVar2 * fVar16 );
   if (dVar4 < __LC37) {
      if (_LC38 < dVar4) {
         fVar22 = fVar18 * fVar20 - fVar19 * fVar21;
         fVar21 = fVar21 * fVar2 - fVar18 * fVar16;
         fVar20 = fVar16 * fVar19 - fVar20 * fVar2;
         fVar16 = fVar19 * fVar20 - fVar18 * fVar21;
         fVar15 = fVar18 * fVar22 - fVar2 * fVar20;
         fVar17 = fVar2 * fVar21 - fVar19 * fVar22;
      }
 else {
         fVar16 = *(float*)( param_1 + 0x68 );
         fVar15 = *(float*)( param_1 + 0x5c );
         fVar17 = *(float*)( param_1 + 0x50 );
         fVar22 = *(float*)( param_1 + 100 );
         fVar21 = *(float*)( param_1 + 0x58 );
         fVar20 = *(float*)( param_1 + 0x4c );
      }

   }
 else {
      fVar22 = *(float*)( param_1 + 100 );
      fVar21 = *(float*)( param_1 + 0x58 );
      fVar20 = *(float*)( param_1 + 0x4c );
      fVar16 = (float)( *(uint*)( param_1 + 0x68 ) ^ _LC22 );
      fVar15 = (float)( *(uint*)( param_1 + 0x5c ) ^ _LC22 );
      fVar17 = (float)( *(uint*)( param_1 + 0x50 ) ^ _LC22 );
   }

   *(float*)( this + 0x1e8 ) = fVar2;
   *(float*)( this + 0x1c8 ) = fVar17;
   *(float*)( this + 0x1cc ) = fVar20;
   *(float*)( this + 0x1d0 ) = fVar18;
   *(float*)( this + 0x1d4 ) = fVar15;
   *(float*)( this + 0x1d8 ) = fVar21;
   *(float*)( this + 0x1dc ) = fVar19;
   *(float*)( this + 0x1e0 ) = fVar16;
   *(float*)( this + 0x1e4 ) = fVar22;
   Quaternion::Quaternion((Quaternion*)&local_58, param_5, param_6);
   cVar9 = Quaternion::is_normalized();
   if (cVar9 == '\0') {
      local_68 = (GodotConstraint3D*)0x1048d6;
      local_70 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_70);
      Quaternion::operator_cast_to_String((Quaternion*)&local_80);
      operator+((char *)&
      local_78,"The quaternion ";
      String::operator +((String*)&local_68, (String*)&local_78);
      _err_print_error("xform", "./core/math/quaternion.h", 0x5c, "Condition \"!is_normalized()\" is true. Returning: p_v", (String*)&local_68, 0, 0);
      if (local_68 != (GodotConstraint3D*)0x0) {
         LOCK();
         pGVar14 = local_68 + -0x10;
         *(long*)pGVar14 = *(long*)pGVar14 + -1;
         UNLOCK();
         if (*(long*)pGVar14 == 0) {
            pGVar14 = local_68 + -0x10;
            local_68 = (GodotConstraint3D*)0x0;
            Memory::free_static(pGVar14, false);
         }

      }

      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            pvVar13 = (void*)( local_78 + -0x10 );
            local_78 = 0;
            Memory::free_static(pvVar13, false);
         }

      }

      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            pvVar13 = (void*)( local_80 + -0x10 );
            local_80 = 0;
            Memory::free_static(pvVar13, false);
         }

      }

      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            pvVar13 = (void*)( local_70 + -0x10 );
            local_70 = 0;
            Memory::free_static(pvVar13, false);
         }

      }

   }
 else {
      fVar21 = fVar15 * local_58 - fVar17 * local_54;
      fVar20 = fVar17 * local_50 - fVar16 * local_58;
      fVar19 = fVar16 * local_54 - fVar15 * local_50;
      fVar18 = ( local_58 * fVar20 - local_54 * fVar19 ) + fVar21 * local_4c;
      fVar16 = fVar16 + fVar18 + fVar18;
      fVar18 = ( local_54 * fVar21 - local_50 * fVar20 ) + fVar19 * local_4c;
      fVar19 = ( local_50 * fVar19 - local_58 * fVar21 ) + fVar20 * local_4c;
      fVar17 = fVar17 + fVar18 + fVar18;
      fVar15 = fVar15 + fVar19 + fVar19;
   }

   fVar18 = *(float*)( param_6 + 4 );
   fVar19 = *(float*)( param_6 + 8 );
   fVar20 = *(float*)param_6;
   *(undefined8*)( this + 0x21c ) = *(undefined8*)param_4;
   *(undefined4*)( this + 0x224 ) = *(undefined4*)( param_4 + 8 );
   *(float*)( this + 0x1f8 ) = fVar17;
   *(float*)( this + 0x1fc ) = fVar16 * fVar18 - fVar15 * fVar19;
   *(uint*)( this + 0x200 ) = (uint)fVar20 ^ uVar5;
   *(float*)( this + 0x204 ) = fVar15;
   *(uint*)( this + 0x218 ) = (uint)fVar19 ^ uVar5;
   *(float*)( this + 0x208 ) = fVar17 * fVar19 - fVar16 * fVar20;
   *(uint*)( this + 0x20c ) = (uint)fVar18 ^ uVar5;
   *(float*)( this + 0x210 ) = fVar16;
   *(float*)( this + 0x214 ) = fVar15 * fVar20 - fVar17 * fVar18;
   local_68 = (GodotConstraint3D*)this;
   puVar11 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( *(long*)( this + 0x38 ) + 0x2f0 ), &local_68);
   lVar3 = *(long*)( this + 0x40 );
   *puVar11 = 0;
   local_68 = (GodotConstraint3D*)this;
   puVar11 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar3 + 0x2f0 ), &local_68);
   *puVar11 = 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* GodotHingeJoint3D::get_type() const */undefined8 GodotHingeJoint3D::get_type(void) {
   return 1;
}
/* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_001049d0;
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
/* GodotHingeJoint3D::~GodotHingeJoint3D() */void GodotHingeJoint3D::~GodotHingeJoint3D(GodotHingeJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotHingeJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_001049d0;
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
   *(undefined***)this = &PTR_get_soft_body_ptr_001049d0;
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
/* GodotHingeJoint3D::~GodotHingeJoint3D() */void GodotHingeJoint3D::~GodotHingeJoint3D(GodotHingeJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotHingeJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_001049d0;
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
      operator_delete(this, 0x260);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Quaternion::Quaternion(Vector3 const&, Vector3 const&) */void Quaternion::Quaternion(Quaternion *this, Vector3 *param_1, Vector3 *param_2) {
   ulong uVar1;
   long lVar2;
   char cVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   undefined8 uVar7;
   undefined1 auVar8[16];
   float fVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   uVar7 = CONCAT44(_LC1, _UNK_00104bf8);
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = __LC4;
   *(undefined8*)( this + 8 ) = uVar7;
   cVar3 = Vector3::is_zero_approx();
   if (( cVar3 != '\0' ) || ( cVar3 = Vector3::is_zero_approx() ),cVar3 != '\0') {
      _err_print_error("Quaternion", "./core/math/quaternion.h", 0x91, "Condition \"p_v0.is_zero_approx() || p_v1.is_zero_approx()\" is true.", "The vectors must not be zero.", 0, 0);
      goto LAB_00103b93;
   }

   uVar1 = *(ulong*)param_1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar1;
   fVar6 = *(float*)( param_1 + 8 );
   fVar4 = (float)( uVar1 >> 0x20 );
   fVar4 = (float)uVar1 * (float)uVar1 + fVar4 * fVar4 + fVar6 * fVar6;
   uVar7 = 0;
   fVar16 = 0.0;
   if (fVar4 != 0.0) {
      fVar4 = SQRT(fVar4);
      fVar16 = fVar6 / fVar4;
      auVar10._4_4_ = fVar4;
      auVar10._0_4_ = fVar4;
      auVar10._8_8_ = _LC9;
      auVar12 = divps(auVar12, auVar10);
      uVar7 = auVar12._0_8_;
   }

   fVar6 = *(float*)param_2;
   fVar4 = *(float*)( param_2 + 4 );
   fVar9 = (float)uVar7;
   fVar13 = (float)( (ulong)uVar7 >> 0x20 );
   fVar14 = *(float*)( param_2 + 8 );
   fVar5 = fVar6 * fVar6 + fVar4 * fVar4 + fVar14 * fVar14;
   if (fVar5 == 0.0) {
      fVar14 = fVar9 * 0.0;
      fVar13 = fVar13 * 0.0;
      fVar16 = fVar16 * 0.0;
      fVar5 = fVar14 + fVar13 + fVar16;
      fVar15 = fVar13;
      fVar4 = fVar14;
      fVar17 = fVar16;
   }
 else {
      fVar5 = SQRT(fVar5);
      fVar4 = fVar4 / fVar5;
      fVar6 = fVar6 / fVar5;
      fVar14 = fVar14 / fVar5;
      fVar5 = fVar6 * fVar9 + fVar4 * fVar13 + fVar14 * fVar16;
      if (__LC11 < (float)( (uint)fVar5 & __LC10 )) {
         if (0.0 <= fVar5) goto LAB_00103b93;
         cVar3 = Vector3::is_zero_approx();
         if (cVar3 == '\0') {
            fVar15 = fVar9 * 0.0;
            fVar5 = fVar13 * 0.0;
            fVar14 = fVar16 * 0.0;
            fVar4 = fVar16;
            fVar6 = fVar5;
            if (( ABS(fVar9) <= ABS(fVar13) ) && ( ABS(fVar9) <= ABS(fVar16) )) {
               fVar9 = fVar15;
               fVar4 = fVar14;
               fVar6 = fVar13;
               fVar14 = fVar16;
            }

            auVar8._0_4_ = fVar5 - fVar4;
            fVar14 = fVar14 - fVar15;
            fVar9 = fVar9 - fVar6;
            fVar6 = auVar8._0_4_ * auVar8._0_4_ + fVar14 * fVar14 + fVar9 * fVar9;
            if (fVar6 == 0.0) goto LAB_00103ca3;
            fVar6 = SQRT(fVar6);
            auVar8._4_4_ = fVar14;
            auVar8._8_8_ = 0;
            fVar9 = fVar9 / fVar6;
            auVar11._4_4_ = fVar6;
            auVar11._0_4_ = fVar6;
            auVar11._8_8_ = _LC9;
            auVar12 = divps(auVar8, auVar11);
            uVar7 = auVar12._0_8_;
         }
 else {
            _err_print_error("get_any_perpendicular", "./core/math/vector3.h", 0x150, "Condition \"is_zero_approx()\" is true. Returning: Vector3(0, 0, 0)", "The Vector3 must not be zero.", 0, 0);
            LAB_00103ca3:uVar7 = 0;
            fVar9 = 0.0;
         }

         *(undefined4*)( this + 0xc ) = 0;
         *(undefined8*)this = uVar7;
         *(float*)( this + 8 ) = fVar9;
         goto LAB_00103b93;
      }

      fVar17 = fVar4 * fVar16;
      fVar15 = fVar14 * fVar13;
      fVar16 = fVar16 * fVar6;
      fVar14 = fVar14 * fVar9;
      fVar4 = fVar4 * fVar9;
      fVar13 = fVar6 * fVar13;
   }

   fVar6 = SQRT(fVar5 + _LC1 + fVar5 + _LC1);
   fVar9 = _LC1 / fVar6;
   fVar6 = fVar6 * __LC16;
   *(ulong*)this = CONCAT44(( fVar16 - fVar14 ) * fVar9, ( fVar15 - fVar17 ) * fVar9);
   *(ulong*)( this + 8 ) = CONCAT44(fVar6, fVar9 * ( fVar4 - fVar13 ));
   LAB_00103b93:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotJacobianEntry3D::GodotJacobianEntry3D(Vector3 const&, Basis const&, Basis const&, Vector3
   const&, Vector3 const&) */void GodotJacobianEntry3D::GodotJacobianEntry3D(GodotJacobianEntry3D *this, Vector3 *param_1, Basis *param_2, Basis *param_3, Vector3 *param_4, Vector3 *param_5) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
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
   *(undefined8*)( this + 0xc ) = 0;
   uVar6 = _LC22;
   *(undefined8*)this = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 12*i + 24 ) ) = 0;
   }

   fVar10 = *(float*)param_1;
   fVar1 = *(float*)( param_1 + 4 );
   fVar2 = *(float*)( param_2 + 0x18 );
   *(undefined4*)( this + 0x14 ) = 0;
   fVar3 = *(float*)( param_2 + 0x1c );
   *(undefined4*)( this + 8 ) = 0;
   fVar7 = *(float*)( param_2 + 0xc );
   fVar8 = *(float*)param_2;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x2c ) = 0;
   fVar16 = *(float*)( param_3 + 0x18 );
   *(undefined4*)( this + 0x38 ) = 0;
   fVar11 = *(float*)( param_1 + 8 );
   fVar12 = fVar2 * fVar10 + fVar3 * fVar1 + *(float*)( param_2 + 0x20 ) * fVar11;
   fVar2 = *(float*)( param_2 + 0x10 );
   *(float*)( this + 0x14 ) = fVar12;
   fVar13 = fVar7 * fVar10 + fVar2 * fVar1 + *(float*)( param_2 + 0x14 ) * fVar11;
   fVar2 = *(float*)( param_2 + 4 );
   fVar15 = (float)( (uint)fVar1 ^ uVar6 );
   *(float*)( this + 0x10 ) = fVar13;
   fVar9 = (float)( (uint)fVar11 ^ uVar6 );
   fVar14 = fVar8 * fVar10 + fVar2 * fVar1 + *(float*)( param_2 + 8 ) * fVar11;
   uVar4 = *(undefined8*)( param_3 + 0x18 );
   fVar10 = (float)( (uint)fVar10 ^ uVar6 );
   uVar5 = *(undefined8*)( param_3 + 0x10 );
   *(float*)( this + 0xc ) = fVar14;
   fVar1 = *(float*)( param_4 + 4 );
   fVar2 = *(float*)( param_4 + 8 );
   fVar3 = *(float*)param_4;
   fVar11 = fVar10 * *(float*)param_3 + fVar15 * *(float*)( param_3 + 4 ) + fVar9 * *(float*)( param_3 + 8 );
   fVar7 = (float)uVar5 * fVar15 + *(float*)( param_3 + 0xc ) * fVar10 + *(float*)( param_3 + 0x14 ) * fVar9;
   fVar8 = (float)( (ulong)uVar4 >> 0x20 ) * fVar15 + fVar16 * fVar10 + *(float*)( param_3 + 0x20 ) * fVar9;
   fVar10 = *(float*)param_5;
   uVar4 = *(undefined8*)( param_5 + 4 );
   *(float*)( this + 0x28 ) = fVar1 * fVar13;
   *(float*)( this + 0x2c ) = fVar2 * fVar12;
   *(float*)( this + 0x18 ) = fVar11;
   fVar16 = (float)uVar4 * fVar7;
   fVar9 = (float)( (ulong)uVar4 >> 0x20 ) * fVar8;
   *(float*)( this + 0x24 ) = fVar3 * fVar14;
   *(ulong*)( this + 0x1c ) = CONCAT44(fVar8, fVar7);
   *(float*)( this + 0x30 ) = fVar10 * fVar11;
   *(ulong*)( this + 0x34 ) = CONCAT44(fVar9, fVar16);
   fVar10 = fVar8 * fVar9 + fVar10 * fVar11 * fVar11 + fVar7 * fVar16 + fVar3 * fVar14 * fVar14 + fVar1 * fVar13 * fVar13 + fVar2 * fVar12 * fVar12;
   *(float*)( this + 0x3c ) = fVar10;
   if (0.0 < fVar10) {
      return;
   }

   _err_print_error("GodotJacobianEntry3D", "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h", 0x5b, "Condition \"m_Adiag <= real_t(0.0)\" is true.", 0, 0);
   return;
}
/* GodotHingeJoint3D::get_param(PhysicsServer3D::HingeJointParam) const [clone .cold] */undefined8 GodotHingeJoint3D::get_param(void) {
   return 0;
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
   lStack_90 = 0x104792;
   local_70 = (void*)Memory::alloc_static(uVar39, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar47 == 0) {
      iVar43 = *(int*)( this + 0x2c );
      pGVar56 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_001042bb;
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
         lStack_90 = 0x1047da;
         memset(local_70, 0, uVar39);
         iVar43 = *(int*)( this + 0x2c );
         pGVar56 = *param_1;
      }

   }

   if (iVar43 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_00104663;
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

   LAB_00104663:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
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
            goto LAB_00104644;
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
}LAB_001042bb:if ((float)uVar55 * __LC26 < (float)( iVar43 + 1 )) {
   uVar47 = *(uint*)( this + 0x28 );
   if (uVar47 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00104644;
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
;*(undefined1(**) [16])( lVar45 + lStack_90 * 8 ) = pauVar37;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00104644:auVar59._8_8_ = lStack_90;auVar59._0_8_ = pauVar42[1] + 8;return auVar59;}/* WARNING: Control flow encountered bad instruction data *//* GodotJacobianEntry3D::GodotJacobianEntry3D(Vector3 const&, Basis const&, Basis const&, Vector3
   const&, Vector3 const&) */void GodotJacobianEntry3D::GodotJacobianEntry3D(GodotJacobianEntry3D *this, Vector3 *param_1, Basis *param_2, Basis *param_3, Vector3 *param_4, Vector3 *param_5) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Quaternion::Quaternion(Vector3 const&, Vector3 const&) */void Quaternion::Quaternion(Quaternion *this, Vector3 *param_1, Vector3 *param_2) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotHingeJoint3D::~GodotHingeJoint3D() */void GodotHingeJoint3D::~GodotHingeJoint3D(GodotHingeJoint3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* meshopt::appendMeshlet(meshopt_Meshlet&, unsigned int, unsigned int, unsigned int, unsigned
   char*, meshopt_Meshlet*, unsigned int*, unsigned char*, unsigned long, unsigned long, unsigned
   long) */undefined8 meshopt::appendMeshlet(meshopt_Meshlet *param_1, uint param_2, uint param_3, uint param_4, uchar *param_5, meshopt_Meshlet *param_6, uint *param_7, uchar *param_8, ulong param_9, ulong param_10, ulong param_11) {
   uint uVar1;
   uchar uVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   int iVar7;
   uchar *puVar8;
   uchar *puVar9;
   uchar *puVar10;
   undefined8 uVar11;
   puVar10 = param_5 + param_2;
   puVar8 = param_5 + param_4;
   uVar2 = *puVar10;
   puVar9 = param_5 + param_3;
   if (( param_10 < ( uint )(*puVar9 == 0xff) + ( uint )(uVar2 == 0xff) + ( uint )(*puVar8 == 0xff) + *(int*)( param_1 + 8 ) ) || ( uVar11 = 0 ),param_11 <= *(uint*)( param_1 + 0xc )) {
      uVar11 = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( param_6 + param_9 * 0x10 ) = *(undefined8*)param_1;
      *(undefined8*)( param_6 + param_9 * 0x10 + 8 ) = uVar11;
      uVar5 = 0;
      if (*(int*)( param_1 + 8 ) != 0) {
         do {
            lVar4 = *(uint*)param_1 + uVar5;
            uVar5 = uVar5 + 1;
            param_5[param_7[lVar4]] = 0xff;
         }
 while ( uVar5 < *(uint*)( param_1 + 8 ) );
      }

      iVar3 = *(int*)( param_1 + 0xc );
      iVar7 = *(int*)( param_1 + 4 );
      uVar1 = iVar3 * 3 + iVar7;
      uVar5 = (ulong)uVar1;
      if (( uVar1 & 3 ) != 0) {
         do {
            uVar6 = uVar5 + 1;
            param_8[uVar5] = '\0';
            uVar5 = uVar6;
         }
 while ( ( uVar6 & 3 ) != 0 );
         iVar7 = *(int*)( param_1 + 4 );
         iVar3 = *(int*)( param_1 + 0xc );
      }

      *(int*)param_1 = *(int*)param_1 + *(int*)( param_1 + 8 );
      uVar11 = 1;
      *(undefined8*)( param_1 + 8 ) = 0;
      *(uint*)( param_1 + 4 ) = ( iVar3 * 3 + 3U & 0xfffffffc ) + iVar7;
      uVar2 = *puVar10;
   }

   if (uVar2 == 0xff) {
      *puVar10 = ( uchar ) * (undefined4*)( param_1 + 8 );
      iVar3 = *(int*)( param_1 + 8 );
      *(int*)( param_1 + 8 ) = iVar3 + 1;
      param_7[( uint )(iVar3 + *(int*)param_1)] = param_2;
   }

   if (*puVar9 == 0xff) {
      *puVar9 = ( uchar ) * (undefined4*)( param_1 + 8 );
      iVar3 = *(int*)( param_1 + 8 );
      *(int*)( param_1 + 8 ) = iVar3 + 1;
      param_7[( uint )(iVar3 + *(int*)param_1)] = param_3;
   }

   if (*puVar8 == 0xff) {
      *puVar8 = ( uchar ) * (undefined4*)( param_1 + 8 );
      iVar3 = *(int*)( param_1 + 8 );
      *(int*)( param_1 + 8 ) = iVar3 + 1;
      param_7[( uint )(iVar3 + *(int*)param_1)] = param_4;
   }

   param_8[( uint )(*(int*)( param_1 + 0xc ) * 3 + *(int*)( param_1 + 4 ))] = *puVar10;
   param_8[( uint )(*(int*)( param_1 + 0xc ) * 3 + 1 + *(int*)( param_1 + 4 ))] = *puVar9;
   param_8[( uint )(*(int*)( param_1 + 0xc ) * 3 + 2 + *(int*)( param_1 + 4 ))] = *puVar8;
   *(int*)( param_1 + 0xc ) = *(int*)( param_1 + 0xc ) + 1;
   return uVar11;
}
/* meshopt::computeBoundingSphere(float*, float const (*) [3], unsigned long) */void meshopt::computeBoundingSphere(float *param_1, float *param_2, ulong param_3) {
   float *pfVar1;
   float *pfVar2;
   float fVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   float *pfVar7;
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   undefined1 local_58[16];
   undefined8 local_48;
   undefined1 local_38[16];
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   local_28 = 0;
   local_38 = (undefined1[16])0x0;
   if (param_3 != 0) {
      uVar5 = 0;
      pfVar7 = param_2;
      do {
         lVar4 = 0;
         do {
            fVar8 = pfVar7[lVar4];
            uVar6 = *(ulong*)( local_58 + lVar4 * 8 );
            if (fVar8 < param_2[*(ulong*)( local_58 + lVar4 * 8 ) * 3 + (long)(int)lVar4]) {
               uVar6 = uVar5;
            }

            *(ulong*)( local_58 + lVar4 * 8 ) = uVar6;
            uVar6 = *(ulong*)( local_38 + lVar4 * 8 );
            if (param_2[*(ulong*)( local_38 + lVar4 * 8 ) * 3 + (long)(int)lVar4] <= fVar8 && fVar8 != param_2[*(ulong*)( local_38 + lVar4 * 8 ) * 3 + (long)(int)lVar4]) {
               uVar6 = uVar5;
            }

            *(ulong*)( local_38 + lVar4 * 8 ) = uVar6;
            lVar4 = lVar4 + 1;
         }
 while ( lVar4 != 3 );
         uVar5 = uVar5 + 1;
         pfVar7 = pfVar7 + 3;
      }
 while ( param_3 != uVar5 );
   }

   uVar5 = 0;
   uVar6 = 0;
   fVar8 = 0.0;
   do {
      pfVar7 = param_2 + *(long*)( local_58 + uVar5 * 8 ) * 3;
      pfVar2 = param_2 + *(long*)( local_38 + uVar5 * 8 ) * 3;
      fVar10 = ( pfVar2[1] - pfVar7[1] ) * ( pfVar2[1] - pfVar7[1] ) + ( *pfVar2 - *pfVar7 ) * ( *pfVar2 - *pfVar7 ) + ( pfVar2[2] - pfVar7[2] ) * ( pfVar2[2] - pfVar7[2] );
      if (fVar8 < fVar10) {
         uVar6 = uVar5 & 0xffffffff;
         fVar8 = fVar10;
      }

      uVar5 = uVar5 + 1;
   }
 while ( uVar5 != 3 );
   pfVar7 = param_2 + *(long*)( local_58 + (long)(int)uVar6 * 8 ) * 3;
   pfVar2 = param_2 + *(long*)( local_38 + (long)(int)uVar6 * 8 ) * 3;
   fVar10 = ( *pfVar7 + *pfVar2 ) * _LC1;
   fVar12 = ( pfVar7[1] + pfVar2[1] ) * _LC1;
   fVar11 = ( pfVar7[2] + pfVar2[2] ) * _LC1;
   if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
   }
 else {
      fVar8 = SQRT(fVar8);
   }

   fVar8 = fVar8 * _LC1;
   if (param_3 != 0) {
      pfVar7 = param_2 + param_3 * 3;
      do {
         while (true) {
            fVar3 = *param_2;
            pfVar2 = param_2 + 1;
            pfVar1 = param_2 + 2;
            fVar9 = fVar3 - fVar10;
            fVar14 = *pfVar2 - fVar12;
            fVar13 = *pfVar1 - fVar11;
            fVar9 = fVar9 * fVar9 + fVar14 * fVar14 + fVar13 * fVar13;
            if (fVar9 <= fVar8 * fVar8) break;
            fVar9 = SQRT(fVar9);
            param_2 = param_2 + 3;
            fVar13 = fVar8 / fVar9;
            fVar8 = ( fVar9 + fVar8 ) * _LC1;
            fVar9 = fVar13 * _LC1 + _LC1;
            fVar13 = _LC2 - fVar9;
            fVar10 = fVar10 * fVar9 + fVar3 * fVar13;
            fVar12 = fVar12 * fVar9 + *pfVar2 * fVar13;
            fVar11 = *pfVar1 * fVar13 + fVar9 * fVar11;
            if (pfVar7 == param_2) goto LAB_00100428;
         }
;
         param_2 = param_2 + 3;
      }
 while ( pfVar7 != param_2 );
   }

   LAB_00100428:*param_1 = fVar10;
   param_1[1] = fVar12;
   param_1[2] = fVar11;
   param_1[3] = fVar8;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* meshopt::kdtreeNearest(meshopt::KDNode*, unsigned int, float const*, unsigned long, unsigned char
   const*, float const*, unsigned int&, float&) [clone .constprop.0] */undefined1[16];meshopt::kdtreeNearest(KDNode *param_1, uint param_2, float *param_3, ulong param_4, uchar *param_5, float *param_6, uint *param_7, float *param_8) {
   float *pfVar1;
   float fVar2;
   KDNode KVar3;
   uint uVar4;
   ulong uVar5;
   KDNode *pKVar6;
   uint uVar7;
   int iVar8;
   float fVar9;
   undefined1 auVar10[16];
   float *in_stack_ffffffffffffffb0;
   uVar5 = (ulong)param_2;
   pKVar6 = param_1 + uVar5 * 8;
   KVar3 = pKVar6[4];
   while (( ~(byte)KVar3 & 3 ) != 0) {
      fVar2 = *(float*)( param_5 + ( ulong )((byte)pKVar6[4] & 3) * 4 );
      fVar9 = *(float*)pKVar6;
      uVar7 = ( uint ) * (float*)( pKVar6 + 4 ) >> 2;
      uVar4 = 0;
      if (fVar2 - fVar9 <= 0.0) {
         uVar7 = 0;
         uVar4 = ( uint ) * (float*)( pKVar6 + 4 ) >> 2;
      }

      iVar8 = (int)uVar5 + 1;
      pKVar6 = (KDNode*)param_7;
      kdtreeNearest(param_1, uVar7 + iVar8, param_3, param_4, param_5, param_6, param_7, in_stack_ffffffffffffffb0);
      if ((float)*param_7 < (float)( ( uint )(fVar2 - fVar9) & _LC4 )) goto LAB_001005dd;
      param_2 = uVar4 + iVar8;
      uVar5 = (ulong)param_2;
      pKVar6 = param_1 + uVar5 * 8;
      KVar3 = pKVar6[4];
   }
;
   in_stack_ffffffffffffffb0 = (float*)0x0;
   do {
      fVar2 = *(float*)( param_1 + ( ulong )(param_2 + (int)in_stack_ffffffffffffffb0) * 8 );
      if (*(char*)( param_4 + (uint)fVar2 ) == '\0') {
         pfVar1 = param_3 + (ulong)(uint)fVar2 * 6;
         fVar9 = SQRT(( *pfVar1 - *(float*)param_5 ) * ( *pfVar1 - *(float*)param_5 ) + ( pfVar1[1] - *(float*)( param_5 + 4 ) ) * ( pfVar1[1] - *(float*)( param_5 + 4 ) ) + ( pfVar1[2] - *(float*)( param_5 + 8 ) ) * ( pfVar1[2] - *(float*)( param_5 + 8 ) ));
         if (fVar9 < (float)*param_7) {
            *param_6 = fVar2;
            *param_7 = (uint)fVar9;
         }

      }

      uVar7 = (int)in_stack_ffffffffffffffb0 + 1;
      in_stack_ffffffffffffffb0 = (float*)(ulong)uVar7;
   }
 while ( uVar7 <= ( uint ) * (float*)( pKVar6 + 4 ) >> 2 );
   LAB_001005dd:auVar10._8_8_ = in_stack_ffffffffffffffb0;
   auVar10._0_8_ = pKVar6;
   return auVar10;
}
/* meshopt::getNeighborTriangle(meshopt_Meshlet const&, meshopt::Cone const*, unsigned int*,
   unsigned int const*, meshopt::TriangleAdjacency2 const&, meshopt::Cone const*, unsigned int
   const*, unsigned char const*, float, float) [clone .isra.0] */uint meshopt::getNeighborTriangle(meshopt *this, meshopt_Meshlet *param_1, Cone *param_2, uint *param_3, uint *param_4, TriangleAdjacency2 *param_5, Cone *param_6, uint *param_7, uchar *param_8, float param_9, float param_10) {
   Cone *pCVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   byte bVar6;
   ulong uVar7;
   uint *puVar8;
   byte bVar9;
   uint *puVar10;
   ulong uVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   uint local_5c;
   if ((int)param_1 == 0) {
      return 0xffffffff;
   }

   puVar10 = param_3 + ( (ulong)this & 0xffffffff );
   bVar9 = 5;
   local_5c = 0xffffffff;
   fVar13 = _LC5;
   do {
      uVar11 = ( ulong ) * (uint*)( *(long*)param_5 + ( ulong ) * puVar10 * 4 );
      uVar7 = ( ulong ) * (uint*)( *(long*)( param_5 + 8 ) + ( ulong ) * puVar10 * 4 );
      if (uVar11 != 0) {
         puVar8 = (uint*)( *(long*)( param_5 + 0x10 ) + uVar7 * 4 );
         do {
            uVar2 = *puVar8;
            uVar5 = uVar2 * 3;
            uVar3 = param_4[uVar5];
            uVar4 = param_4[uVar5 + 1];
            uVar5 = param_4[uVar5 + 2];
            bVar6 = ( param_8[uVar4] == 0xff ) + ( param_8[uVar3] == 0xff ) + ( param_8[uVar5] == 0xff );
            if (bVar6 == 0) {
               LAB_0010080d:if (param_2 == (Cone*)0x0) {
                  fVar12 = (float)( ( param_7[uVar3] - 3 ) + param_7[uVar4] + param_7[uVar5] );
               }
 else {
                  pCVar1 = param_6 + (ulong)uVar2 * 0x18;
                  fVar14 = _LC2 - ( *(float*)( pCVar1 + 0xc ) * *(float*)( param_2 + 0xc ) + *(float*)( pCVar1 + 0x10 ) * *(float*)( param_2 + 0x10 ) + *(float*)( pCVar1 + 0x14 ) * *(float*)( param_2 + 0x14 ) ) * param_10;
                  fVar12 = _LC6;
                  if (_LC6 <= fVar14) {
                     fVar12 = fVar14;
                  }

                  fVar12 = ( ( SQRT(( *(float*)pCVar1 - *(float*)param_2 ) * ( *(float*)pCVar1 - *(float*)param_2 ) + ( *(float*)( pCVar1 + 4 ) - *(float*)( param_2 + 4 ) ) * ( *(float*)( pCVar1 + 4 ) - *(float*)( param_2 + 4 ) ) + ( *(float*)( pCVar1 + 8 ) - *(float*)( param_2 + 8 ) ) * ( *(float*)( pCVar1 + 8 ) - *(float*)( param_2 + 8 ) )) / param_9 ) * ( _LC2 - param_10 ) + _LC2 ) * fVar12;
               }

               if (( bVar6 < bVar9 ) || ( fVar12 < fVar13 )) {
                  fVar13 = fVar12;
                  local_5c = uVar2;
                  bVar9 = bVar6;
               }

            }
 else {
               if (( ( param_7[uVar3] == 1 ) || ( param_7[uVar4] == 1 ) ) || ( param_7[uVar5] == 1 )) {
                  bVar6 = 1;
               }
 else {
                  bVar6 = ( ( byte )(( param_7[uVar5] == 2 ) + ( param_7[uVar4] == 2 ) + ( param_7[uVar3] == 2 )) < 2 ) + '\x01' + bVar6;
               }

               if (bVar6 <= bVar9) goto LAB_0010080d;
            }

            puVar8 = puVar8 + 1;
         }
 while ( puVar8 != (uint*)( *(long*)( param_5 + 0x10 ) + ( uVar7 + uVar11 ) * 4 ) );
      }

      puVar10 = puVar10 + 1;
      if (puVar10 == param_3 + ( (ulong)param_1 & 0xffffffff ) + ( (ulong)this & 0xffffffff )) {
         return local_5c;
      }

   }
 while ( true );
}
/* meshopt::kdtreeBuild(unsigned long, meshopt::KDNode*, unsigned long, float const*, unsigned long,
   unsigned int*, unsigned long, unsigned long) [clone .constprop.0] [clone .isra.0] */long meshopt::kdtreeBuild(ulong param_1, KDNode *param_2, ulong param_3, float *param_4, ulong param_5, uint *param_6, ulong param_7, ulong param_8) {
   float fVar1;
   float *pfVar2;
   uint uVar3;
   float *pfVar4;
   KDNode *pKVar5;
   float *pfVar6;
   float *pfVar7;
   KDNode *pKVar8;
   long lVar9;
   float *pfVar10;
   ulong uVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   ulong in_stack_ffffffffffffff88;
   float local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (8 < param_5) {
      uVar12 = param_1;
      do {
         for (int i = 0; i < 6; i++) {
            local_58[i] = 0;
         }

         pfVar2 = param_4;
         fVar15 = _LC2;
         fVar16 = _LC2;
         do {
            pfVar4 = local_58 + 3;
            pfVar6 = local_58;
            pfVar10 = (float*)( param_3 + ( ulong )(uint) * pfVar2 * 0x18 );
            do {
               pfVar7 = pfVar6 + 1;
               fVar1 = *pfVar10;
               fVar14 = fVar1 - *pfVar6;
               fVar13 = fVar14 * fVar15 + *pfVar6;
               *pfVar6 = fVar13;
               *pfVar4 = ( fVar1 - fVar13 ) * fVar14 + *pfVar4;
               pfVar4 = pfVar4 + 1;
               pfVar6 = pfVar7;
               pfVar10 = pfVar10 + 1;
            }
 while ( pfVar7 != local_58 + 3 );
            fVar16 = fVar16 + _LC2;
            pfVar2 = pfVar2 + 1;
            fVar15 = _LC2 / fVar16;
         }
 while ( param_4 + param_5 != pfVar2 );
         if (( local_58[3] < local_58[4] ) || ( local_58[3] < local_58[5] )) {
            lVar9 = ~-(ulong)(local_58[4] < local_58[5]) + 2;
            uVar3 = ~-(uint)(local_58[4] < local_58[5]) + 2;
         }
 else {
            lVar9 = 0;
            uVar3 = 0;
         }

         uVar11 = 0;
         fVar15 = local_58[uVar3];
         pfVar2 = param_4;
         do {
            fVar16 = *(float*)( param_3 + ( lVar9 + ( ulong )(uint) * pfVar2 * 6 ) * 4 );
            fVar1 = param_4[uVar11];
            param_4[uVar11] = *pfVar2;
            *pfVar2 = fVar1;
            pfVar2 = pfVar2 + 1;
            uVar11 = uVar11 + ( fVar16 < fVar15 );
         }
 while ( param_4 + param_5 != pfVar2 );
         pKVar5 = param_2 + uVar12 * 8;
         if (( uVar11 < 5 ) || ( param_5 - 4 <= uVar11 )) {
            *(float*)pKVar5 = *param_4;
            *(uint*)( pKVar5 + 4 ) = (int)param_5 * 4 - 4U | 3;
            lVar9 = param_5 + uVar12;
            pKVar5 = param_2 + ( uVar12 + 1 ) * 8;
            do {
               param_4 = param_4 + 1;
               pKVar8 = pKVar5 + 8;
               *(ulong*)pKVar5 = CONCAT44(0xffffffff, *param_4);
               pKVar5 = pKVar8;
            }
 while ( param_2 + lVar9 * 8 != pKVar8 );
            goto LAB_00100aeb;
         }

         *(float*)pKVar5 = fVar15;
         pKVar5[4] = ( KDNode )((byte)pKVar5[4] & 0xfc | (byte)uVar3 & 3);
         param_1 = kdtreeBuild(uVar12 + 1, param_2, param_3, param_4, uVar11, (uint*)pKVar5, in_stack_ffffffffffffff88, (ulong)param_2);
         param_5 = param_5 - uVar11;
         param_4 = param_4 + uVar11;
         *(uint*)( pKVar5 + 4 ) = ( uint ) * (float*)( pKVar5 + 4 ) & 3 | ( (int)param_1 - (int)uVar12 ) * 4 - 4U;
         uVar12 = param_1;
      }
 while ( 8 < param_5 );
   }

   *(float*)( param_2 + param_1 * 8 ) = *param_4;
   *(uint*)( param_2 + param_1 * 8 + 4 ) = (int)param_5 * 4 - 4U | 3;
   if (1 < param_5) {
      pfVar2 = param_4 + 1;
      pKVar5 = param_2 + param_1 * 8 + 8;
      do {
         fVar15 = *pfVar2;
         pfVar2 = pfVar2 + 1;
         *(ulong*)pKVar5 = CONCAT44(0xffffffff, fVar15);
         pKVar5 = pKVar5 + 8;
      }
 while ( pfVar2 != param_4 + param_5 );
   }

   lVar9 = param_5 + param_1;
   LAB_00100aeb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar9;
}
ulong meshopt_buildMeshletsBound(ulong param_1, long param_2, ulong param_3) {
   ulong uVar1;
   param_3 = ( ( param_3 - 1 ) + param_1 / 3 ) / param_3;
   uVar1 = ( ( param_1 - 3 ) + param_2 ) / ( param_2 - 2U );
   if (uVar1 <= param_3) {
      uVar1 = param_3;
   }

   return uVar1;
}
ulong meshopt_buildMeshlets(float param_1, meshopt_Meshlet *param_2, uint *param_3, uchar *param_4, uint *param_5, ulong param_6, uint *param_7, ulong param_8, ulong param_9, ulong param_10, ulong param_11) {
   int *piVar1;
   float *pfVar2;
   char cVar3;
   uint uVar4;
   long lVar5;
   uint *puVar6;
   void *__s;
   Cone *pCVar7;
   float *pfVar8;
   KDNode *pKVar9;
   uchar *__s_00;
   float *pfVar10;
   ulong uVar11;
   int iVar12;
   uint uVar13;
   long lVar14;
   uint *puVar15;
   undefined4 uVar16;
   uint uVar17;
   uint uVar18;
   uint *puVar19;
   ulong uVar20;
   uint *puVar21;
   Cone *pCVar22;
   ulong uVar23;
   size_t sVar24;
   uint *puVar25;
   meshopt_Meshlet *pmVar26;
   long *plVar27;
   meshopt *this;
   uint uVar28;
   uint *puVar29;
   ulong uVar30;
   long in_FS_OFFSET;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   undefined8 uVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   ulong in_stack_fffffffffffffdd8;
   size_t __n;
   ulong local_1e8;
   float local_190;
   uint local_18c;
   undefined1 local_188[16];
   undefined1 local_178[16];
   long local_168;
   undefined1 local_158[8];
   float fStack_150;
   float fStack_14c;
   float local_148;
   float fStack_144;
   undefined8 local_138;
   float fStack_130;
   float fStack_12c;
   float fStack_128;
   float fStack_124;
   undefined8 local_118;
   float local_110;
   long local_108[24];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_178 = (undefined1[16])0x0;
   local_48 = 0;
   local_168 = 0;
   plVar27 = local_108;
   for (lVar14 = 0x18; lVar14 != 0; lVar14 = lVar14 + -1) {
      *plVar27 = 0;
      plVar27 = plVar27 + 1;
   }

   __n = param_8 * 4;
   puVar19 = (uint*)( param_6 / 3 );
   sVar24 = 0xffffffffffffffff;
   if (param_8 < 0x4000000000000000) {
      sVar24 = __n;
   }

   puVar29 = param_7;
   lVar14 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar24);
   local_178._0_8_ = lVar14;
   local_108[local_48] = lVar14;
   local_48 = local_48 + 1;
   lVar14 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar24);
   local_178._8_8_ = lVar14;
   local_108[local_48] = lVar14;
   if (param_6 < 0x4000000000000000) {
      local_48 = local_48 + 1;
      local_168 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(param_6 * 4);
      local_108[local_48] = local_168;
      local_48 = local_48 + 1;
      memset((void*)local_178._0_8_, 0, __n);
      if (param_6 != 0) goto LAB_00100d6b;
      if (param_8 != 0) goto LAB_00100d98;
   }
 else {
      local_48 = local_48 + 1;
      local_168 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      local_108[local_48] = local_168;
      local_48 = local_48 + 1;
      memset((void*)local_178._0_8_, 0, __n);
      LAB_00100d6b:puVar6 = param_5;
      do {
         uVar18 = *puVar6;
         puVar6 = puVar6 + 1;
         piVar1 = (int*)( local_178._0_8_ + (ulong)uVar18 * 4 );
         *piVar1 = *piVar1 + 1;
      }
 while ( param_5 + param_6 != puVar6 );
      if (param_8 == 0) {
         if (param_6 < 3) goto LAB_00100e3f;
         lVar14 = local_178._0_8_;
         LAB_00100dbf:puVar21 = (uint*)0x0;
         puVar6 = param_5;
         do {
            puVar29 = (uint*)( local_178._8_8_ + ( ulong ) * puVar6 * 4 );
            puVar15 = (uint*)( local_178._8_8_ + (ulong)puVar6[1] * 4 );
            uVar18 = *puVar29;
            puVar25 = (uint*)( local_178._8_8_ + (ulong)puVar6[2] * 4 );
            *puVar29 = uVar18 + 1;
            uVar16 = SUB84(puVar21, 0);
            *(undefined4*)( local_168 + (ulong)uVar18 * 4 ) = uVar16;
            uVar18 = *puVar15;
            *puVar15 = uVar18 + 1;
            *(undefined4*)( local_168 + (ulong)uVar18 * 4 ) = uVar16;
            uVar18 = *puVar25;
            uVar28 = uVar18 + 1;
            puVar29 = (uint*)(ulong)uVar28;
            *puVar25 = uVar28;
            *(undefined4*)( local_168 + (ulong)uVar18 * 4 ) = uVar16;
            puVar21 = (uint*)( (long)puVar21 + 1 );
            puVar6 = puVar6 + 3;
         }
 while ( puVar21 < puVar19 );
         lVar5 = local_178._8_8_;
         if (param_8 == 0) goto LAB_00100e3f;
      }
 else {
         LAB_00100d98:iVar12 = 0;
         uVar20 = 0;
         do {
            *(int*)( local_178._8_8_ + uVar20 * 4 ) = iVar12;
            iVar12 = iVar12 + *(int*)( local_178._0_8_ + uVar20 * 4 );
            uVar20 = uVar20 + 1;
         }
 while ( uVar20 < param_8 );
         lVar5 = local_178._8_8_;
         lVar14 = local_178._0_8_;
         if (2 < param_6) goto LAB_00100dbf;
      }

      uVar20 = 0;
      do {
         piVar1 = (int*)( lVar5 + uVar20 * 4 );
         *piVar1 = *piVar1 - *(int*)( lVar14 + uVar20 * 4 );
         uVar20 = uVar20 + 1;
      }
 while ( param_8 != uVar20 );
   }

   LAB_00100e3f:puVar6 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar24);
   local_108[local_48] = (long)puVar6;
   local_48 = local_48 + 1;
   memcpy(puVar6, (void*)local_178._0_8_, __n);
   __s = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(puVar19);
   local_108[local_48] = (long)__s;
   local_48 = local_48 + 1;
   memset(__s, 0, (size_t)puVar19);
   if (param_6 < 0x2000000000000001) {
      pCVar7 = (Cone*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )((long)puVar19 * 0x18);
      lVar14 = local_48 + 1;
      local_108[local_48] = (long)pCVar7;
      local_48 = lVar14;
      if (2 < param_6) goto LAB_00100f35;
      fVar31 = (float)param_11 * 0.0;
      LAB_00101103:fVar32 = _LC1 * SQRT(fVar31);
      pfVar8 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )((long)puVar19 * 4);
      lVar14 = local_48 + 1;
      local_108[local_48] = (long)pfVar8;
      local_48 = lVar14;
      if (param_6 < 3) goto LAB_0010119d;
   }
 else {
      pCVar7 = (Cone*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      local_108[local_48] = (long)pCVar7;
      local_48 = local_48 + 1;
      LAB_00100f35:fVar41 = _LC2;
      fVar31 = _LC7;
      fVar36 = 0.0;
      puVar29 = (uint*)0x0;
      param_9 = param_9 & 0xfffffffffffffffc;
      pCVar22 = pCVar7;
      puVar21 = param_5;
      do {
         puVar15 = (uint*)( puVar21[1] * param_9 + (long)param_7 );
         pfVar8 = (float*)( puVar21[2] * param_9 + (long)param_7 );
         puVar25 = (uint*)( *puVar21 * param_9 + (long)param_7 );
         fVar37 = (float)*(undefined8*)puVar15;
         fVar39 = (float)*(undefined8*)pfVar8;
         fVar33 = (float)*(undefined8*)puVar25;
         fVar38 = (float)( ( ulong ) * (undefined8*)puVar25 >> 0x20 );
         fVar43 = (float)( ( ulong ) * (undefined8*)puVar15 >> 0x20 ) - fVar38;
         fVar38 = (float)( ( ulong ) * (undefined8*)pfVar8 >> 0x20 ) - fVar38;
         fVar32 = (float)puVar15[2] - (float)puVar25[2];
         fVar42 = pfVar8[2] - (float)puVar25[2];
         fVar34 = ( fVar39 - fVar33 ) * fVar32 - fVar42 * ( fVar37 - fVar33 );
         fVar35 = fVar38 * ( fVar37 - fVar33 ) - ( *pfVar8 - fVar33 ) * fVar43;
         fVar32 = fVar42 * fVar43 - fVar38 * fVar32;
         fVar38 = SQRT(fVar32 * fVar32 + fVar34 * fVar34 + fVar35 * fVar35);
         fVar42 = 0.0;
         if (fVar38 != 0.0) {
            fVar42 = fVar41 / fVar38;
         }

         puVar29 = (uint*)( (long)puVar29 + 1 );
         fVar36 = fVar36 + fVar38;
         puVar21 = puVar21 + 3;
         *(float*)pCVar22 = ( fVar37 + fVar33 + fVar39 ) / fVar31;
         *(float*)( pCVar22 + 4 ) = ( (float)puVar25[1] + (float)puVar15[1] + pfVar8[1] ) / fVar31;
         fVar38 = (float)puVar25[2];
         fVar33 = (float)puVar15[2];
         fVar37 = pfVar8[2];
         *(float*)( pCVar22 + 0xc ) = fVar32 * fVar42;
         *(ulong*)( pCVar22 + 0x10 ) = CONCAT44(fVar42 * fVar35, fVar42 * fVar34);
         *(float*)( pCVar22 + 8 ) = ( fVar38 + fVar33 + fVar37 ) / fVar31;
         fVar32 = _LC1;
         pCVar22 = pCVar22 + 0x18;
      }
 while ( puVar29 < puVar19 );
      fVar31 = ( fVar36 / (float)(long)puVar19 ) * _LC1 * (float)param_11;
      if (0.0 <= fVar31) goto LAB_00101103;
      fVar31 = sqrtf(fVar31);
      fVar32 = fVar32 * fVar31;
      pfVar8 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )((long)puVar19 * 4);
      local_108[local_48] = (long)pfVar8;
      local_48 = local_48 + 1;
   }

   puVar21 = (uint*)0x1;
   *pfVar8 = 0.0;
   if ((uint*)0x1 < puVar19) {
      if (( (int)puVar19 - 1U & 1 ) != 0) {
         pfVar8[1] = 1.4013e-45;
         puVar21 = (uint*)0x2;
         if (puVar19 < (uint*)0x3) goto LAB_0010119d;
      }

      do {
         pfVar8[(long)puVar21] = SUB84(puVar21, 0);
         lVar14 = (long)puVar21 + 1;
         puVar21 = (uint*)( (long)puVar21 + 2 );
         pfVar8[lVar14] = (float)lVar14;
      }
 while ( puVar21 < puVar19 );
   }

   LAB_0010119d:pKVar9 = (KDNode*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )((long)puVar19 << 4);
   local_108[local_48] = (long)pKVar9;
   local_48 = local_48 + 1;
   meshopt::kdtreeBuild(0, pKVar9, (ulong)pCVar7, pfVar8, (ulong)puVar19, puVar29, in_stack_fffffffffffffdd8, (ulong)pCVar7);
   __s_00 = (uchar*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(param_8);
   local_108[local_48] = (long)__s_00;
   pfVar8 = (float*)0x101229;
   local_48 = local_48 + 1;
   memset(__s_00, -1, param_8);
   pmVar26 = (meshopt_Meshlet*)0x0;
   this(meshopt * 0x0);
   fVar41 = 0.0;
   local_148 = 0.0;
   fStack_144 = 0.0;
   local_1e8 = 0;
   local_188 = (undefined1[16])0x0;
   _local_158 = (undefined1[16])0x0;
   fVar31 = _LC2;
   uVar28 = _LC5;
   uVar18 = 0;
   do {
      fVar36 = 0.0;
      fStack_130 = SUB164(_local_158, 8);
      fStack_12c = SUB164(_local_158, 0xc);
      if (uVar18 != 0) {
         fVar36 = fVar31 / (float)uVar18;
      }

      fVar38 = fVar36 * fStack_130;
      uVar40 = CONCAT44(fVar36 * SUB164(_local_158, 4), fVar36 * SUB164(_local_158, 0));
      fVar36 = fStack_12c * fStack_12c + local_148 * local_148 + fStack_144 * fStack_144;
      fStack_128 = 0.0;
      if (fVar36 != fVar41) {
         fStack_128 = fVar31 / SQRT(fVar36);
      }

      fStack_124 = fStack_144 * fStack_128;
      fStack_12c = fStack_128 * fStack_12c;
      fStack_128 = fStack_128 * local_148;
      local_138 = uVar40;
      fStack_130 = fVar38;
      fVar36 = (float)meshopt::getNeighborTriangle(this, pmVar26, (Cone*)&local_138, param_3, param_5, (TriangleAdjacency2*)local_178, pCVar7, puVar6, __s_00, fVar32, param_1);
      if (fVar36 == -NAN) {
         LAB_00101640:local_190 = -NAN;
         local_18c = uVar28;
         local_118 = uVar40;
         local_110 = fVar38;
         meshopt::kdtreeNearest(pKVar9, 0, (float*)pCVar7, (ulong)__s, (uchar*)&local_118, &local_190, &local_18c, pfVar8);
         fVar36 = local_190;
         if (local_190 == -NAN) {
            if (uVar18 != 0) {
               uVar18 = uVar18 * 3 + local_188._4_4_;
               uVar20 = (ulong)uVar18;
               if (( uVar18 & 3 ) != 0) {
                  do {
                     uVar11 = uVar20 + 1;
                     param_4[uVar20] = '\0';
                     uVar20 = uVar11;
                  }
 while ( ( uVar11 & 3 ) != 0 );
               }

               *(undefined8*)( param_2 + local_1e8 * 0x10 ) = local_188._0_8_;
               *(undefined8*)( param_2 + local_1e8 * 0x10 + 8 ) = local_188._8_8_;
               local_1e8 = local_1e8 + 1;
            }

            local_190 = -NAN;
            lVar14 = local_48;
            while (lVar14 != 0) {
               lVar14 = lVar14 + -1;
               ( *(code*)meshopt_Allocator::StorageT<void>::deallocate )(local_108[lVar14]);
            }
;
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return local_1e8;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         LAB_001014b0:uVar18 = (int)fVar36 * 3;
         uVar11 = (ulong)uVar18;
         uVar4 = param_5[uVar11];
         uVar20 = (ulong)uVar4;
         uVar17 = param_5[uVar18 + 1];
         uVar30 = (ulong)uVar17;
         uVar13 = param_5[uVar18 + 2];
         uVar23 = (ulong)uVar13;
      }
 else {
         uVar13 = (int)fVar36 * 3;
         uVar11 = (ulong)uVar13;
         uVar4 = param_5[uVar11];
         uVar20 = (ulong)uVar4;
         uVar17 = param_5[uVar13 + 1];
         uVar30 = (ulong)uVar17;
         uVar13 = param_5[uVar13 + 2];
         uVar23 = (ulong)uVar13;
         if (( param_10 < ( uint )(__s_00[uVar23] == 0xff) + ( uint )(__s_00[uVar30] == 0xff) + ( uint )(__s_00[uVar20] == 0xff) + (int)pmVar26 ) || ( param_11 <= uVar18 )) {
            fVar36 = (float)meshopt::getNeighborTriangle(this, pmVar26, (Cone*)0x0, param_3, param_5, (TriangleAdjacency2*)local_178, pCVar7, puVar6, __s_00, fVar32, 0.0);
            if (fVar36 == -NAN) goto LAB_00101640;
            goto LAB_001014b0;
         }

      }

      cVar3 = meshopt::appendMeshlet((meshopt_Meshlet*)local_188, uVar4, uVar17, uVar13, __s_00, param_2, param_3, param_4, local_1e8, param_10, param_11);
      if (cVar3 == '\0') {} else {
         local_1e8 = local_1e8 + 1;
         local_148 = 0.0;
         fStack_144 = 0.0;
         local_158._0_4_ = 0.0;
         local_158._4_4_ = 0.0;
         fStack_150 = 0.0;
         fStack_14c = 0.0;
      }

      puVar6[uVar20] = puVar6[uVar20] - 1;
      lVar14 = 0;
      puVar6[uVar30] = puVar6[uVar30] - 1;
      puVar6[uVar23] = puVar6[uVar23] - 1;
      do {
         puVar19 = (uint*)( local_178._0_8_ + (ulong)param_5[uVar11 + lVar14] * 4 );
         uVar20 = ( ulong ) * puVar19;
         pfVar2 = (float*)( local_168 + ( ulong ) * (uint*)( local_178._8_8_ + (ulong)param_5[uVar11 + lVar14] * 4 ) * 4 );
         if (uVar20 != 0) {
            uVar23 = 0;
            pfVar10 = pfVar2;
            do {
               if (fVar36 == *pfVar10) {
                  *pfVar10 = pfVar2[uVar20 - 1];
                  *puVar19 = *puVar19 - 1;
                  break;
               }

               uVar23 = uVar23 + 1;
               pfVar10 = pfVar10 + 1;
            }
 while ( uVar20 != uVar23 );
         }

         lVar14 = lVar14 + 1;
      }
 while ( lVar14 != 3 );
      pCVar22 = pCVar7 + (ulong)(uint)fVar36 * 0x18;
      local_158._4_4_ = (float)local_158._4_4_ + *(float*)( pCVar22 + 4 );
      local_158._0_4_ = (float)local_158._0_4_ + *(float*)pCVar22;
      fStack_150 = fStack_150 + *(float*)( pCVar22 + 8 );
      fStack_14c = fStack_14c + *(float*)( pCVar22 + 0xc );
      local_148 = (float)*(undefined8*)( pCVar22 + 0x10 ) + local_148;
      fStack_144 = (float)( ( ulong ) * (undefined8*)( pCVar22 + 0x10 ) >> 0x20 ) + fStack_144;
      *(undefined1*)( (long)__s + (ulong)(uint)fVar36 ) = 1;
      this = (meshopt *)(ulong)(uint)local_188._0_4_;
      pmVar26 = (meshopt_Meshlet*)(ulong)(uint)local_188._8_4_;
      uVar18 = local_188._12_4_;
   }
 while ( true );
}
ulong meshopt_buildMeshletsScan(meshopt_Meshlet *param_1, uint *param_2, uchar *param_3, long param_4, ulong param_5, size_t param_6, ulong param_7, ulong param_8) {
   long lVar1;
   long lVar2;
   byte bVar3;
   void *__s;
   uchar *puVar4;
   ulong uVar5;
   long lVar6;
   uint uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   undefined1 local_118[16];
   undefined8 local_108[24];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   puVar9 = local_108;
   for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
   }

   __s = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(param_6);
   local_108[local_48] = __s;
   local_48 = local_48 + 1;
   puVar4 = (uchar*)memset(__s, -1, param_6);
   local_118 = (undefined1[16])0x0;
   if (param_5 == 0) {
      uVar8 = 0;
      lVar6 = local_48;
   }
 else {
      uVar10 = 0;
      uVar8 = 0;
      do {
         lVar6 = uVar8 * 4;
         lVar1 = uVar8 * 4;
         lVar2 = uVar8 * 4;
         uVar8 = uVar8 + 3;
         bVar3 = meshopt::appendMeshlet((meshopt_Meshlet*)local_118, *(uint*)( param_4 + lVar2 ), *(uint*)( param_4 + 4 + lVar1 ), *(uint*)( param_4 + 8 + lVar6 ), puVar4, param_1, param_2, param_3, uVar10, param_7, param_8);
         uVar10 = uVar10 + bVar3;
      }
 while ( uVar8 < param_5 );
      lVar6 = local_48;
      uVar8 = uVar10;
      if (local_118._12_4_ != 0) {
         uVar7 = local_118._12_4_ * 3 + local_118._4_4_;
         uVar8 = (ulong)uVar7;
         if (( uVar7 & 3 ) != 0) {
            do {
               uVar5 = uVar8 + 1;
               param_3[uVar8] = '\0';
               uVar8 = uVar5;
            }
 while ( ( uVar5 & 3 ) != 0 );
         }

         uVar8 = uVar10 + 1;
         *(undefined8*)( param_1 + uVar10 * 0x10 ) = local_118._0_8_;
         *(undefined8*)( param_1 + uVar10 * 0x10 + 8 ) = local_118._8_8_;
      }

   }

   while (lVar6 != 0) {
      ( *(code*)meshopt_Allocator::StorageT<void>::deallocate )(local_108[lVar6 + -1]);
      lVar6 = lVar6 + -1;
   }
;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined1(*)[16];meshopt_computeClusterBounds(undefined1 (*param_1)[16], long param_2, ulong param_3, long param_4, undefined8 param_5, ulong param_6) {
   undefined4 uVar1;
   uint uVar2;
   undefined1 *puVar3;
   char cVar4;
   undefined1 uVar5;
   int iVar6;
   ulong uVar7;
   float *pfVar8;
   float *pfVar9;
   undefined1 *puVar10;
   float *pfVar11;
   float *pfVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar23;
   undefined1 auVar22[16];
   undefined1 auVar24[16];
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   undefined1 local_6030[24576];
   puVar3 = &stack0xffffffffffffffd0;
   do {
      puVar10 = puVar3;
      *(undefined8*)( puVar10 + -0x1000 ) = *(undefined8*)( puVar10 + -0x1000 );
      puVar3 = puVar10 + -0x1000;
   }
 while ( puVar10 + -0x1000 != local_6030 );
   *(undefined8*)( puVar10 + 0x4ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      *param_1 = (undefined1[16])0x0;
      param_1[1] = (undefined1[16])0x0;
      param_1[2] = (undefined1[16])0x0;
      goto LAB_00101d2d;
   }

   *(undefined1(**) [16])( puVar10 + -0x1040 ) = param_1;
   uVar13 = 0;
   param_6 = param_6 & 0xfffffffffffffffc;
   uVar15 = 0;
   do {
      pfVar12 = (float*)( *(uint*)( param_2 + uVar13 * 4 ) * param_6 + param_4 );
      pfVar11 = (float*)( *(uint*)( param_2 + 4 + uVar13 * 4 ) * param_6 + param_4 );
      pfVar9 = (float*)( *(uint*)( param_2 + 8 + uVar13 * 4 ) * param_6 + param_4 );
      fVar27 = (float)*(undefined8*)( pfVar12 + 1 );
      fVar25 = (float)*(undefined8*)( pfVar11 + 1 ) - fVar27;
      fVar20 = (float)( ( ulong ) * (undefined8*)( pfVar12 + 1 ) >> 0x20 );
      fVar27 = (float)*(undefined8*)( pfVar9 + 1 ) - fVar27;
      fVar21 = *pfVar11 - *pfVar12;
      fVar23 = *pfVar9 - *pfVar12;
      auVar24._0_4_ = fVar25 * ( pfVar9[2] - pfVar12[2] ) - ( pfVar11[2] - pfVar12[2] ) * fVar27;
      auVar24._4_4_ = ( (float)( ( ulong ) * (undefined8*)( pfVar11 + 1 ) >> 0x20 ) - fVar20 ) * fVar23 - fVar21 * ( (float)( ( ulong ) * (undefined8*)( pfVar9 + 1 ) >> 0x20 ) - fVar20 );
      auVar24._8_8_ = 0;
      fVar21 = fVar21 * fVar27 - fVar23 * fVar25;
      fVar27 = SQRT(auVar24._0_4_ * auVar24._0_4_ + auVar24._4_4_ * auVar24._4_4_ + fVar21 * fVar21);
      uVar16 = uVar15;
      if (fVar27 != 0.0) {
         auVar22._4_4_ = fVar27;
         auVar22._0_4_ = fVar27;
         auVar22._12_4_ = _UNK_00102554;
         auVar22._8_4_ = _LC2;
         uVar14 = uVar15 * 0x24;
         auVar24 = divps(auVar24, auVar22);
         uVar16 = 0x4800;
         if (0x47ff < uVar14) {
            uVar16 = uVar14;
         }

         *(ulong*)( puVar10 + -0x1048 ) = param_6;
         *(long*)( puVar10 + -0x1050 ) = param_4;
         *(ulong*)( puVar10 + -0x1058 ) = param_3;
         *(long*)( puVar10 + -0x1060 ) = param_2;
         *(long*)( puVar10 + uVar15 * 0xc + -0x1018 ) = auVar24._0_8_;
         *(float*)( puVar10 + uVar15 * 0xc + -0x1010 ) = fVar21 / fVar27;
         *(undefined8*)( puVar10 + -0x1070 ) = 0x101c96;
         __memcpy_chk(puVar10 + uVar14 + 0x7e8, pfVar12, 0xc, uVar16 + uVar15 * -0x24);
         uVar16 = 0x4800;
         if (0x47ff < uVar14 + 0xc) {
            uVar16 = uVar14 + 0xc;
         }

         *(undefined8*)( puVar10 + -0x1070 ) = 0x101cc3;
         __memcpy_chk(puVar10 + uVar14 + 0x7f4, pfVar11, 0xc, uVar15 * -0x24 + -0xc + uVar16);
         uVar7 = 0x4800;
         if (0x47ff < uVar14 + 0x18) {
            uVar7 = uVar14 + 0x18;
         }

         uVar16 = uVar15 + 1;
         *(undefined8*)( puVar10 + -0x1070 ) = 0x101cef;
         __memcpy_chk(puVar10 + uVar14 + 0x800, pfVar9, 0xc, uVar7 + uVar15 * -0x24 + -0x18);
         param_6 = *(ulong*)( puVar10 + -0x1048 );
         param_4 = *(long*)( puVar10 + -0x1050 );
         param_3 = *(ulong*)( puVar10 + -0x1058 );
         param_2 = *(long*)( puVar10 + -0x1060 );
      }

      uVar13 = uVar13 + 3;
      uVar15 = uVar16;
   }
 while ( uVar13 < param_3 );
   param_1 = *(undefined1(**) [16])( puVar10 + -0x1040 );
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   param_1[2] = (undefined1[16])0x0;
   if (uVar16 == 0) goto LAB_00101d2d;
   pfVar11 = (float*)( puVar10 + 0x7e8 );
   *(undefined8*)( puVar10 + -0x1070 ) = 0x101d7e;
   meshopt::computeBoundingSphere((float*)( puVar10 + -0x1038 ), pfVar11, uVar16 * 3);
   pfVar9 = (float*)( puVar10 + -0x1018 );
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( puVar10 + ( -8*i + -4176 ) ) = *(undefined4*)( puVar10 + ( 4*i + -4152 ) );
   }

   *(undefined8*)( puVar10 + -0x1070 ) = 0x101dbb;
   meshopt::computeBoundingSphere((float*)( puVar10 + -0x1028 ), pfVar9, uVar16);
   fVar23 = _LC2;
   fVar26 = *(float*)( puVar10 + -0x1028 );
   fVar21 = *(float*)( puVar10 + -0x1060 );
   fVar27 = *(float*)( puVar10 + -0x1058 );
   fVar28 = (float)*(undefined8*)( puVar10 + -0x1024 );
   fVar25 = (float)( ( ulong ) * (undefined8*)( puVar10 + -0x1024 ) >> 0x20 );
   fVar20 = *(float*)( puVar10 + -0x1050 );
   fVar17 = SQRT(fVar26 * fVar26 + fVar28 * fVar28 + fVar25 * fVar25);
   if (fVar17 == 0.0) {
      fVar17 = 0.0;
   }
 else {
      fVar17 = _LC2 / fVar17;
   }

   fVar28 = fVar17 * fVar28;
   fVar25 = fVar17 * fVar25;
   fVar26 = fVar26 * fVar17;
   pfVar12 = pfVar9;
   fVar17 = _LC2;
   do {
      pfVar8 = pfVar12 + 3;
      fVar18 = pfVar12[1] * fVar28 + *pfVar12 * fVar26 + pfVar12[2] * fVar25;
      if (fVar17 <= fVar18) {
         fVar18 = fVar17;
      }

      pfVar12 = pfVar8;
      fVar17 = fVar18;
   }
 while ( pfVar9 + uVar16 * 3 != pfVar8 );
   uVar1 = *(undefined4*)( puVar10 + -0x102c );
   *(ulong*)*param_1 = CONCAT44(fVar27, fVar20);
   *(ulong*)( *param_1 + 8 ) = CONCAT44(uVar1, fVar21);
   if (fVar18 <= _LC12) {
      param_1[2][0xf] = 0x7f;
      *(float*)( param_1[2] + 8 ) = fVar23;
      goto LAB_00101d2d;
   }

   pfVar12 = pfVar11;
   fVar17 = 0.0;
   do {
      pfVar8 = pfVar12 + 9;
      fVar19 = ( ( fVar27 - pfVar12[1] ) * pfVar9[1] + ( fVar20 - *pfVar12 ) * *pfVar9 + ( fVar21 - pfVar12[2] ) * pfVar9[2] ) / ( pfVar9[1] * fVar28 + *pfVar9 * fVar26 + pfVar9[2] * fVar25 );
      if (fVar19 <= fVar17) {
         fVar19 = fVar17;
      }

      pfVar9 = pfVar9 + 3;
      pfVar12 = pfVar8;
      fVar17 = fVar19;
   }
 while ( pfVar8 != pfVar11 + uVar16 * 9 );
   *(ulong*)param_1[2] = CONCAT44(fVar25, fVar28);
   *(float*)param_1[1] = fVar20 - fVar26 * fVar19;
   *(float*)( param_1[1] + 4 ) = fVar27 - fVar28 * fVar19;
   *(float*)( param_1[1] + 8 ) = fVar21 - fVar19 * fVar25;
   *(float*)( param_1[1] + 0xc ) = fVar26;
   fVar21 = fVar23 - fVar18 * fVar18;
   if (fVar21 < 0.0) {
      *(float*)( puVar10 + -0x1048 ) = fVar23;
      *(float*)( puVar10 + -0x1050 ) = fVar25;
      *(float*)( puVar10 + -0x1058 ) = fVar28;
      *(float*)( puVar10 + -0x1060 ) = fVar26;
      *(undefined8*)( puVar10 + -0x1070 ) = 0x1021de;
      fVar21 = sqrtf(fVar21);
      fVar23 = *(float*)( puVar10 + -0x1048 );
      fVar25 = *(float*)( puVar10 + -0x1050 );
      fVar28 = *(float*)( puVar10 + -0x1058 );
      fVar26 = *(float*)( puVar10 + -0x1060 );
   }
 else {
      fVar21 = SQRT(fVar21);
   }

   *(float*)( param_1[2] + 8 ) = fVar21;
   fVar27 = _LC13;
   if (fVar26 < 0.0) {
      if (_LC10 <= fVar26) {
         fVar20 = fVar26 * _LC13 - _LC1;
         goto LAB_0010211c;
      }

      cVar4 = -0x7f;
      fVar20 = _LC10;
   }
 else if (fVar26 <= fVar23) {
      fVar20 = fVar26 * _LC13 + _LC1;
      LAB_0010211c:cVar4 = (char)(int)fVar20;
      fVar20 = (float)(int)cVar4 / _LC13;
   }
 else {
      cVar4 = '\x7f';
      fVar20 = fVar23;
   }

   param_1[2][0xc] = cVar4;
   if (fVar28 < 0.0) {
      if (_LC10 <= fVar28) {
         fVar17 = fVar28 * fVar27 - _LC1;
         goto LAB_001020e2;
      }

      cVar4 = -0x7f;
      fVar17 = _LC10;
   }
 else {
      cVar4 = '\x7f';
      fVar17 = fVar23;
      if (fVar28 <= fVar23) {
         fVar17 = fVar28 * fVar27 + _LC1;
         LAB_001020e2:cVar4 = (char)(int)fVar17;
         fVar17 = (float)(int)cVar4 / fVar27;
      }

   }

   param_1[2][0xd] = cVar4;
   uVar2 = _LC4;
   if (fVar25 < 0.0) {
      if (_LC10 <= fVar25) {
         fVar18 = fVar25 * fVar27 - _LC1;
         goto LAB_001020b0;
      }

      cVar4 = -0x7f;
      fVar18 = _LC10;
   }
 else {
      cVar4 = '\x7f';
      fVar18 = fVar23;
      if (fVar25 <= fVar23) {
         fVar18 = fVar25 * fVar27 + _LC1;
         LAB_001020b0:cVar4 = (char)(int)fVar18;
         fVar18 = (float)(int)cVar4 / fVar27;
      }

   }

   param_1[2][0xe] = cVar4;
   iVar6 = (int)( ( (float)( ( uint )(fVar20 - fVar26) & uVar2 ) + fVar21 + (float)( ( uint )(fVar17 - fVar28) & uVar2 ) + (float)( ( uint )(fVar18 - fVar25) & uVar2 ) ) * fVar27 + fVar23 );
   uVar5 = (undefined1)iVar6;
   if (0x7f < iVar6) {
      uVar5 = 0x7f;
   }

   param_1[2][0xf] = uVar5;
   LAB_00101d2d:if (*(long*)( puVar10 + 0x4ff0 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined8*)( puVar10 + -0x1070 ) = 0x1021bd;
      __stack_chk_fail();
   }

   return param_1;
}
undefined8 meshopt_computeMeshletBounds(undefined8 param_1, long param_2, long param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   long lVar1;
   long in_FS_OFFSET;
   undefined4 local_1818[1538];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0) {
      lVar1 = 0;
      do {
         local_1818[lVar1] = *(undefined4*)( param_2 + ( ulong ) * (byte*)( param_3 + lVar1 ) * 4 );
         lVar1 = lVar1 + 1;
      }
 while ( lVar1 != param_4 * 3 );
   }

   meshopt_computeClusterBounds(param_1, local_1818, param_4 * 3, param_5, param_6, param_7);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void meshopt_optimizeMeshlet(void *param_1, byte *param_2, ulong param_3, undefined8 param_4) {
   byte bVar1;
   byte bVar2;
   char cVar3;
   uint uVar4;
   long lVar5;
   int iVar6;
   ulong uVar7;
   byte *pbVar8;
   char cVar9;
   long lVar10;
   uint uVar11;
   long lVar12;
   byte bVar13;
   long lVar14;
   ulong uVar15;
   byte *pbVar16;
   long in_FS_OFFSET;
   undefined4 local_648[256];
   char local_248[256];
   byte local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __memset_chk(local_248, 0, param_4, 0xff);
   if (param_3 != 0) {
      uVar15 = 0;
      pbVar16 = param_2;
      do {
         cVar3 = (char)uVar15;
         cVar9 = cVar3 + -0x80;
         if (uVar15 < param_3) {
            uVar11 = 0xffffffff;
            lVar12 = -1;
            uVar7 = uVar15;
            pbVar8 = pbVar16;
            do {
               uVar4 = ( uint )(( byte )(cVar9 - local_248[*pbVar8]) < 3) + ( uint )(( byte )(cVar9 - local_248[pbVar8[1]]) < 3) + ( uint )(( byte )(cVar9 - local_248[pbVar8[2]]) < 3);
               if ((int)uVar11 < (int)uVar4) {
                  iVar6 = (int)uVar7;
                  lVar12 = (long)iVar6;
                  uVar11 = uVar4;
                  if (1 < uVar4) {
                     lVar12 = (long)iVar6;
                     lVar5 = (long)( iVar6 * 3 );
                     lVar14 = lVar5 + 1;
                     lVar10 = lVar5 + 2;
                     goto LAB_001023ae;
                  }

               }

               uVar7 = uVar7 + 1;
               pbVar8 = pbVar8 + 3;
            }
 while ( param_3 != uVar7 );
            lVar5 = (long)( (int)lVar12 * 3 );
            lVar14 = lVar5 + 1;
            lVar10 = lVar5 + 2;
         }
 else {
            lVar12 = -1;
            lVar10 = -1;
            lVar14 = -2;
            lVar5 = -3;
         }

         LAB_001023ae:bVar13 = param_2[lVar5];
         lVar12 = lVar12 - uVar15;
         bVar1 = param_2[lVar14];
         uVar15 = uVar15 + 1;
         bVar2 = param_2[lVar10];
         pbVar8 = (byte*)memmove(pbVar16 + 3, pbVar16, lVar12 * 3);
         pbVar16[2] = bVar2;
         *(ushort*)pbVar16 = CONCAT11(bVar1, bVar13);
         cVar3 = cVar3 + -0x7f;
         local_248[bVar13] = cVar3;
         local_248[bVar1] = cVar3;
         local_248[bVar2] = cVar3;
         pbVar16 = pbVar8;
      }
 while ( uVar15 != param_3 );
      lVar14 = 0;
      __memset_chk(local_148, 0xffffffff, param_4, 0xff);
      pbVar16 = param_2 + uVar15 * 3;
      do {
         bVar13 = local_148[*param_2];
         if (bVar13 == 0xff) {
            bVar13 = (byte)lVar14;
            local_148[*param_2] = bVar13;
            local_648[lVar14] = *(undefined4*)( (long)param_1 + ( ulong ) * param_2 * 4 );
            lVar14 = lVar14 + 1;
         }

         *param_2 = bVar13;
         param_2 = param_2 + 1;
      }
 while ( param_2 != pbVar16 );
      param_3 = lVar14 << 2;
   }

   memcpy(param_1, local_648, param_3);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}


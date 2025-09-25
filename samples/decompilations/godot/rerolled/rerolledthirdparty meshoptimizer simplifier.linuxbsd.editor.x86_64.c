/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* meshopt::rescalePositions(meshopt::Vector3*, float const*, unsigned long, unsigned long, unsigned
   int const*) */void meshopt::rescalePositions(Vector3 *param_1, float *param_2, ulong param_3, ulong param_4, uint *param_5) {
   float *pfVar1;
   ulong uVar2;
   long lVar3;
   Vector3 *pVVar4;
   Vector3 *pVVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   undefined8 local_40;
   float local_38;
   undefined8 local_30;
   float local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = _LC0;
   local_40 = CONCAT44(_UNK_00105264, _LC0);
   local_28 = (float)_LC1;
   local_30 = CONCAT44(_LC1._4_4_, (float)_LC1);
   if (param_3 == 0) {
      fVar8 = (float)_LC1;
      fVar7 = (float)_LC1 - _LC0;
      fVar9 = _LC0;
      fVar10 = _LC0;
      if (0.0 <= (float)_LC1 - _LC0) goto LAB_0010011a;
      LAB_001001e8:fVar7 = 0.0;
   }
 else {
      uVar6 = 0;
      pVVar5 = param_1;
      do {
         uVar2 = uVar6 & 0xffffffff;
         if (param_5 != (uint*)0x0) {
            uVar2 = (ulong)param_5[uVar6];
         }

         pfVar1 = param_2 + uVar2 * ( param_4 >> 2 );
         if (param_1 != (Vector3*)0x0) {
            *(float*)pVVar5 = *pfVar1;
            *(float*)( pVVar5 + 4 ) = pfVar1[1];
            *(float*)( pVVar5 + 8 ) = pfVar1[2];
         }

         lVar3 = 0;
         do {
            fVar8 = *(float*)( (long)pfVar1 + lVar3 );
            fVar7 = fVar8;
            if (fVar8 <= *(float*)( (long)&local_30 + lVar3 )) {
               fVar7 = *(float*)( (long)&local_30 + lVar3 );
            }

            if (*(float*)( (long)&local_40 + lVar3 ) <= fVar8) {
               fVar8 = *(float*)( (long)&local_40 + lVar3 );
            }

            *(float*)( (long)&local_30 + lVar3 ) = fVar7;
            *(float*)( (long)&local_40 + lVar3 ) = fVar8;
            lVar3 = lVar3 + 4;
         }
 while ( lVar3 != 0xc );
         uVar6 = uVar6 + 1;
         pVVar5 = pVVar5 + 0xc;
      }
 while ( param_3 != uVar6 );
      fVar7 = (float)local_30 - (float)local_40;
      fVar8 = local_30._4_4_;
      fVar9 = (float)local_40;
      fVar10 = local_40._4_4_;
      if (fVar7 < 0.0) goto LAB_001001e8;
   }

   if (fVar7 <= fVar8 - fVar10) {
      fVar7 = fVar8 - fVar10;
   }

   LAB_0010011a:if (fVar7 <= local_28 - local_38) {
      fVar7 = local_28 - local_38;
   }

   if (param_1 != (Vector3*)0x0) {
      fVar8 = 0.0;
      if (fVar7 != 0.0) {
         fVar8 = _LC5 / fVar7;
      }

      if (param_3 != 0) {
         pVVar5 = param_1;
         do {
            pVVar4 = pVVar5 + 0xc;
            *(float*)pVVar5 = ( *(float*)pVVar5 - fVar9 ) * fVar8;
            *(float*)( pVVar5 + 4 ) = ( *(float*)( pVVar5 + 4 ) - fVar10 ) * fVar8;
            *(float*)( pVVar5 + 8 ) = ( *(float*)( pVVar5 + 8 ) - local_38 ) * fVar8;
            pVVar5 = pVVar4;
         }
 while ( pVVar4 != param_1 + param_3 * 0xc );
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* meshopt::quadricAdd(meshopt::Quadric&, meshopt::Quadric const&) */void meshopt::quadricAdd(Quadric *param_1, Quadric *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   fVar1 = *(float*)( param_2 + 0x14 );
   fVar2 = *(float*)( param_2 + 0x18 );
   fVar3 = *(float*)( param_2 + 0x1c );
   fVar4 = *(float*)param_2;
   fVar5 = *(float*)( param_2 + 4 );
   fVar6 = *(float*)( param_2 + 8 );
   fVar7 = *(float*)( param_2 + 0xc );
   *(float*)( param_1 + 0x10 ) = *(float*)( param_1 + 0x10 ) + *(float*)( param_2 + 0x10 );
   *(float*)( param_1 + 0x14 ) = *(float*)( param_1 + 0x14 ) + fVar1;
   *(float*)( param_1 + 0x18 ) = *(float*)( param_1 + 0x18 ) + fVar2;
   *(float*)( param_1 + 0x1c ) = *(float*)( param_1 + 0x1c ) + fVar3;
   *(float*)param_1 = *(float*)param_1 + fVar4;
   *(float*)( param_1 + 4 ) = *(float*)( param_1 + 4 ) + fVar5;
   *(float*)( param_1 + 8 ) = *(float*)( param_1 + 8 ) + fVar6;
   *(float*)( param_1 + 0xc ) = *(float*)( param_1 + 0xc ) + fVar7;
   *(ulong*)( param_1 + 0x20 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_1 + 0x20 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_2 + 0x20 ) >> 0x20 ), (float)*(undefined8*)( param_1 + 0x20 ) + (float)*(undefined8*)( param_2 + 0x20 ));
   *(float*)( param_1 + 0x28 ) = *(float*)( param_1 + 0x28 ) + *(float*)( param_2 + 0x28 );
   return;
}
/* meshopt::quadricAdd(meshopt::QuadricGrad*, meshopt::QuadricGrad const*, unsigned long) */void meshopt::quadricAdd(QuadricGrad *param_1, QuadricGrad *param_2, ulong param_3) {
   QuadricGrad *pQVar1;
   QuadricGrad *pQVar2;
   QuadricGrad *pQVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   long lVar10;
   if (param_3 != 0) {
      lVar10 = 0;
      do {
         pQVar1 = param_2 + lVar10;
         fVar4 = *(float*)( pQVar1 + 4 );
         fVar5 = *(float*)( pQVar1 + 8 );
         fVar6 = *(float*)( pQVar1 + 0xc );
         pQVar2 = param_1 + lVar10;
         fVar7 = *(float*)( pQVar2 + 4 );
         fVar8 = *(float*)( pQVar2 + 8 );
         fVar9 = *(float*)( pQVar2 + 0xc );
         pQVar3 = param_1 + lVar10;
         *(float*)pQVar3 = *(float*)pQVar1 + *(float*)pQVar2;
         *(float*)( pQVar3 + 4 ) = fVar4 + fVar7;
         *(float*)( pQVar3 + 8 ) = fVar5 + fVar8;
         *(float*)( pQVar3 + 0xc ) = fVar6 + fVar9;
         lVar10 = lVar10 + 0x10;
      }
 while ( lVar10 != param_3 * 0x10 );
   }

   return;
}
/* meshopt::remapEdgeLoops(unsigned int*, unsigned long, unsigned int const*) */void meshopt::remapEdgeLoops(uint *param_1, ulong param_2, uint *param_3) {
   ulong uVar1;
   uint uVar2;
   if (param_2 != 0) {
      uVar1 = 0;
      do {
         while (uVar2 = param_1[uVar1],uVar2 != 0xffffffff) {
            if (param_3[uVar2] != uVar1) {
               param_1[uVar1] = param_3[uVar2];
               break;
            }

            uVar2 = param_1[uVar2];
            if (uVar2 != 0xffffffff) {
               uVar2 = param_3[uVar2];
            }

            param_1[uVar1] = uVar2;
            uVar1 = uVar1 + 1;
            if (param_2 == uVar1) {
               return;
            }

         }
;
         uVar1 = uVar1 + 1;
      }
 while ( param_2 != uVar1 );
   }

   return;
}
/* meshopt::pruneComponents(unsigned int*, unsigned long, unsigned int const*, float const*,
   unsigned long, float, float&) */long meshopt::pruneComponents(uint *param_1, ulong param_2, uint *param_3, float *param_4, ulong param_5, float param_6, float *param_7) {
   float *pfVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   float fVar5;
   if (param_2 != 0) {
      uVar2 = 0;
      lVar3 = 0;
      do {
         lVar4 = lVar3;
         if (param_6 < param_4[param_3[param_1[uVar2]]]) {
            param_1[lVar3] = param_1[uVar2];
            lVar4 = lVar3 + 3;
            param_1[lVar3 + 1] = param_1[uVar2 + 1];
            param_1[lVar3 + 2] = param_1[uVar2 + 2];
         }

         uVar2 = uVar2 + 3;
         lVar3 = lVar4;
      }
 while ( uVar2 < param_2 );
      *param_7 = 3.4028235e+38;
      if (param_5 != 0) {
         pfVar1 = param_4 + param_5;
         do {
            fVar5 = *param_4;
            if (param_6 < fVar5) {
               if (*param_7 <= fVar5) {
                  fVar5 = *param_7;
               }

               *param_7 = fVar5;
            }

            param_4 = param_4 + 1;
         }
 while ( pfVar1 != param_4 );
      }

      return lVar4;
   }

   *param_7 = 3.4028235e+38;
   if (param_5 != 0) {
      pfVar1 = param_4 + param_5;
      do {
         fVar5 = *param_4;
         if (param_6 < fVar5) {
            if (*param_7 <= fVar5) {
               fVar5 = *param_7;
            }

            *param_7 = fVar5;
         }

         param_4 = param_4 + 1;
      }
 while ( pfVar1 != param_4 );
   }

   return 0;
}
/* meshopt::computeVertexIds(unsigned int*, meshopt::Vector3 const*, unsigned long, int) */void meshopt::computeVertexIds(uint *param_1, Vector3 *param_2, ulong param_3, int param_4) {
   float fVar1;
   uint *puVar2;
   uint *puVar3;
   float fVar4;
   fVar1 = _LC6;
   fVar4 = (float)( param_4 + -1 );
   if (param_3 != 0) {
      puVar2 = param_1;
      do {
         puVar3 = puVar2 + 1;
         *puVar2 = (int)( *(float*)param_2 * fVar4 + fVar1 ) << 0x14 | (int)( *(float*)( param_2 + 4 ) * fVar4 + fVar1 ) << 10 | (int)( *(float*)( param_2 + 8 ) * fVar4 + fVar1 );
         param_2 = param_2 + 0xc;
         puVar2 = puVar3;
      }
 while ( param_1 + param_3 != puVar3 );
   }

   return;
}
/* meshopt::countTriangles(unsigned int const*, unsigned int const*, unsigned long) */long meshopt::countTriangles(meshopt *this, uint *param_1, uint *param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   uint *puVar4;
   long lVar5;
   if (param_2 != (uint*)0x0) {
      puVar4 = (uint*)0x0;
      lVar5 = 0;
      do {
         iVar1 = *(int*)( this + (ulong)param_1[(long)puVar4] * 4 );
         lVar2 = (long)puVar4 + 1;
         lVar3 = (long)puVar4 + 2;
         param_3 = ( ulong )((uint)CONCAT71(( int7 )(param_3 >> 8), iVar1 != *(int*)( this + (ulong)param_1[lVar2] * 4 )) & CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 != *(int*)( this + (ulong)param_1[lVar3] * 4 )));
         puVar4 = (uint*)( (long)puVar4 + 3 );
         lVar5 = lVar5 + ( *(int*)( this + (ulong)param_1[lVar2] * 4 ) != *(int*)( this + (ulong)param_1[lVar3] * 4 ) & param_3 );
      }
 while ( puVar4 < param_2 );
      return lVar5;
   }

   return 0;
}
/* meshopt::updateEdgeAdjacency(meshopt::EdgeAdjacency&, unsigned int const*, unsigned long,
   unsigned long, unsigned int const*) */void meshopt::updateEdgeAdjacency(EdgeAdjacency *param_1, uint *param_2, ulong param_3, ulong param_4, uint *param_5) {
   int *piVar1;
   uint *puVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   void *pvVar6;
   uint *puVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   int iVar11;
   uint uVar12;
   lVar4 = *(long*)param_1;
   lVar5 = *(long*)( param_1 + 8 );
   pvVar6 = memset((void*)( lVar4 + 4 ), 0, param_4 * 4);
   if (param_3 == 0) {
      if (param_4 == 0) goto LAB_00100589;
      LAB_001004ed:uVar8 = 0;
      iVar11 = 0;
      do {
         iVar3 = *(int*)( lVar4 + 4 + uVar8 * 4 );
         *(int*)( lVar4 + 4 + uVar8 * 4 ) = iVar11;
         uVar8 = uVar8 + 1;
         iVar11 = iVar11 + iVar3;
      }
 while ( uVar8 < param_4 );
   }
 else {
      puVar7 = param_2;
      do {
         uVar8 = ( ulong ) * puVar7;
         if (param_5 != (uint*)0x0) {
            uVar8 = (ulong)param_5[uVar8];
         }

         puVar7 = puVar7 + 1;
         piVar1 = (int*)( (long)pvVar6 + uVar8 * 4 );
         *piVar1 = *piVar1 + 1;
      }
 while ( puVar7 != param_2 + param_3 );
      if (param_4 != 0) goto LAB_001004ed;
   }

   uVar8 = 0;
   if (2 < param_3) {
      do {
         uVar10 = ( ulong ) * param_2;
         uVar12 = param_2[1];
         uVar9 = (ulong)param_2[2];
         if (param_5 != (uint*)0x0) {
            uVar10 = (ulong)param_5[uVar10];
            uVar12 = param_5[uVar12];
            uVar9 = (ulong)param_5[uVar9];
         }

         uVar8 = uVar8 + 1;
         param_2 = param_2 + 3;
         puVar7 = (uint*)( (long)pvVar6 + uVar10 * 4 );
         *(uint*)( lVar5 + ( ulong ) * puVar7 * 8 ) = uVar12;
         *(int*)( lVar5 + 4 + ( ulong ) * puVar7 * 8 ) = (int)uVar9;
         *puVar7 = *puVar7 + 1;
         puVar7 = (uint*)( (long)pvVar6 + (ulong)uVar12 * 4 );
         *(int*)( lVar5 + ( ulong ) * puVar7 * 8 ) = (int)uVar9;
         puVar2 = (uint*)( (long)pvVar6 + uVar9 * 4 );
         *(int*)( lVar5 + 4 + ( ulong ) * puVar7 * 8 ) = (int)uVar10;
         *puVar7 = *puVar7 + 1;
         *(int*)( lVar5 + ( ulong ) * puVar2 * 8 ) = (int)uVar10;
         *(uint*)( lVar5 + 4 + ( ulong ) * puVar2 * 8 ) = uVar12;
         *puVar2 = *puVar2 + 1;
      }
 while ( uVar8 < param_3 / 3 );
   }

   LAB_00100589:**(undefined4**)param_1 = 0;
   return;
}
/* meshopt::sortEdgeCollapses(unsigned int*, meshopt::Collapse const*, unsigned long) */void meshopt::sortEdgeCollapses(uint *param_1, Collapse *param_2, ulong param_3) {
   int iVar1;
   uint uVar2;
   int *piVar3;
   ulong uVar4;
   ulong uVar5;
   int iVar6;
   Collapse *pCVar7;
   Collapse *pCVar8;
   long in_FS_OFFSET;
   uint auStack_2828[2560];
   int local_28[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar3 = (int*)memset(auStack_2828, 0, 0x2800);
   if (param_3 != 0) {
      pCVar7 = param_2 + 8;
      pCVar8 = pCVar7 + param_3 * 0xc;
      do {
         uVar2 = ( uint )(*(int*)pCVar7 * 2) >> 0x14;
         uVar4 = (ulong)uVar2;
         if (0x9ff < uVar2) {
            uVar4 = 0x9ff;
         }

         pCVar7 = pCVar7 + 0xc;
         auStack_2828[uVar4] = auStack_2828[uVar4] + 1;
      }
 while ( pCVar8 != pCVar7 );
   }

   iVar6 = 0;
   do {
      iVar1 = *piVar3;
      *piVar3 = iVar6;
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + iVar1;
   }
 while ( local_28 != piVar3 );
   if (param_3 != 0) {
      pCVar8 = param_2 + 8;
      uVar4 = 0;
      do {
         uVar2 = ( uint )(*(int*)pCVar8 * 2) >> 0x14;
         uVar5 = (ulong)uVar2;
         if (0x9ff < uVar2) {
            uVar5 = 0x9ff;
         }

         pCVar8 = pCVar8 + 0xc;
         uVar2 = auStack_2828[uVar5];
         param_1[uVar2] = (uint)uVar4;
         uVar4 = uVar4 + 1;
         auStack_2828[uVar5] = uVar2 + 1;
      }
 while ( param_3 != uVar4 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* meshopt::fillVertexCells(unsigned int*, unsigned long, unsigned int*, unsigned int const*,
   unsigned long) */long meshopt::fillVertexCells(uint *param_1, ulong param_2, uint *param_3, uint *param_4, ulong param_5) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   uint *puVar4;
   ulong uVar5;
   uint *puVar6;
   ulong uVar7;
   long lVar8;
   uint *puVar9;
   puVar4 = (uint*)memset(param_1, -1, param_2 * 4);
   if (param_5 == 0) {
      return 0;
   }

   puVar1 = (uint*)( param_2 - 1 );
   uVar7 = 0;
   lVar8 = 0;
   do {
      puVar9 = (uint*)0x0;
      uVar3 = param_4[uVar7 & 0xffffffff];
      uVar2 = ( uVar3 >> 0xd ^ uVar3 ) * 0x5bd1e995;
      uVar5 = ( ulong )(uVar2 ^ uVar2 >> 0xf);
      while (true) {
         uVar2 = puVar4[uVar5 & (ulong)puVar1];
         puVar6 = (uint*)(ulong)uVar2;
         if (uVar2 == 0xffffffff) break;
         if (uVar3 == param_4[(long)puVar6]) {
            uVar3 = param_3[(long)puVar6];
            goto LAB_00100774;
         }

         uVar5 = ( uVar5 & (ulong)puVar1 ) + 1 + (long)puVar9;
         puVar9 = (uint*)( (long)puVar9 + 1 );
         if (puVar1 < puVar9) {
            lVar8 = fillVertexCells(puVar4, (ulong)uVar3, puVar6, puVar1, uVar7);
            return lVar8;
         }

      }
;
      puVar4[uVar5 & (ulong)puVar1] = (uint)uVar7;
      uVar3 = (uint)lVar8;
      lVar8 = lVar8 + 1;
      LAB_00100774:param_3[uVar7] = uVar3;
      uVar7 = uVar7 + 1;
      if (param_5 == uVar7) {
         return lVar8;
      }

   }
 while ( true );
}
/* meshopt::quadricFromTriangle(meshopt::Quadric&, meshopt::Vector3 const&, meshopt::Vector3 const&,
   meshopt::Vector3 const&, float) [clone .isra.0] */void meshopt::quadricFromTriangle(Quadric *param_1, Vector3 *param_2, Vector3 *param_3, Vector3 *param_4, float param_5) {
   float fVar1;
   float in_XMM1_Da;
   float fVar2;
   float in_XMM2_Da;
   float in_XMM3_Da;
   float fVar3;
   float in_XMM4_Da;
   float fVar4;
   float in_XMM5_Da;
   float fVar5;
   float in_XMM6_Da;
   float in_XMM7_Da;
   float fVar6;
   float fVar7;
   float in_stack_00000008;
   float in_stack_00000010;
   fVar4 = ( in_XMM4_Da - in_XMM1_Da ) * ( in_stack_00000008 - in_XMM2_Da ) - ( in_XMM5_Da - in_XMM2_Da ) * ( in_XMM7_Da - in_XMM1_Da );
   fVar5 = ( in_XMM5_Da - in_XMM2_Da ) * ( in_XMM6_Da - param_5 ) - ( in_stack_00000008 - in_XMM2_Da ) * ( in_XMM3_Da - param_5 );
   fVar3 = ( in_XMM3_Da - param_5 ) * ( in_XMM7_Da - in_XMM1_Da ) - ( in_XMM4_Da - in_XMM1_Da ) * ( in_XMM6_Da - param_5 );
   fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
   if (fVar1 <= 0.0) {
      fVar2 = param_5 * fVar4 + in_XMM1_Da * fVar5 + in_XMM2_Da * fVar3;
      if (fVar1 < 0.0) {
         fVar1 = sqrtf(fVar1);
         goto LAB_0010085a;
      }

   }
 else {
      fVar4 = fVar4 / fVar1;
      fVar5 = fVar5 / fVar1;
      fVar3 = fVar3 / fVar1;
      fVar2 = in_XMM1_Da * fVar5 + param_5 * fVar4 + in_XMM2_Da * fVar3;
   }

   fVar1 = SQRT(fVar1);
   LAB_0010085a:fVar1 = fVar1 * in_stack_00000010;
   fVar2 = (float)( (uint)fVar2 ^ _LC8 );
   *(float*)( param_1 + 0x28 ) = fVar1;
   fVar7 = fVar1 * fVar3;
   fVar6 = fVar1 * fVar2;
   *(ulong*)param_1 = CONCAT44(fVar1 * fVar5 * fVar5, fVar1 * fVar4 * fVar4);
   *(ulong*)( param_1 + 8 ) = CONCAT44(fVar1 * fVar5 * fVar4, fVar7 * fVar3);
   *(ulong*)( param_1 + 0x20 ) = CONCAT44(fVar2 * fVar6, fVar3 * fVar6);
   *(float*)( param_1 + 0x10 ) = fVar4 * fVar7;
   *(float*)( param_1 + 0x14 ) = fVar7 * fVar5;
   *(float*)( param_1 + 0x18 ) = fVar4 * fVar6;
   *(float*)( param_1 + 0x1c ) = fVar5 * fVar6;
   return;
}
/* meshopt::quadricEval(meshopt::Quadric const&, meshopt::Vector3 const&) [clone .isra.0] */float meshopt::quadricEval(Quadric *param_1, Vector3 *param_2) {
   float in_XMM0_Da;
   float fVar1;
   float in_XMM1_Da;
   float in_XMM2_Da;
   float fVar2;
   float fVar3;
   fVar2 = *(float*)( param_1 + 0x14 ) * in_XMM2_Da + *(float*)( param_1 + 0x1c );
   fVar3 = *(float*)( param_1 + 0xc ) * in_XMM1_Da + *(float*)( param_1 + 0x18 );
   fVar1 = *(float*)( param_1 + 0x10 ) * in_XMM0_Da + *(float*)( param_1 + 0x20 );
   return in_XMM2_Da * ( *(float*)( param_1 + 8 ) * in_XMM2_Da + fVar1 + fVar1 ) + ( *(float*)( param_1 + 4 ) * in_XMM1_Da + fVar2 + fVar2 ) * in_XMM1_Da + ( *(float*)param_1 * in_XMM0_Da + fVar3 + fVar3 ) * in_XMM0_Da + *(float*)( param_1 + 0x24 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* meshopt::quadricError(meshopt::Quadric const&, meshopt::QuadricGrad const*, unsigned long,
   meshopt::Vector3 const&, float const*) [clone .isra.0] */undefined8 meshopt::quadricError(Quadric *param_1, QuadricGrad *param_2, ulong param_3, Vector3 *param_4, float *param_5) {
   float fVar1;
   QuadricGrad *pQVar2;
   QuadricGrad *pQVar3;
   long extraout_RDX;
   float in_XMM0_Da;
   float fVar4;
   undefined8 uVar5;
   float in_XMM1_Da;
   float in_XMM2_Da;
   float fVar6;
   uVar5 = quadricEval(param_1, (Vector3*)param_2);
   fVar4 = (float)uVar5;
   if (extraout_RDX != 0) {
      pQVar2 = param_2;
      do {
         fVar1 = *(float*)param_4;
         pQVar3 = pQVar2 + 0x10;
         param_4 = param_4 + 4;
         fVar6 = *(float*)pQVar2 * in_XMM0_Da + *(float*)( pQVar2 + 4 ) * in_XMM1_Da + *(float*)( pQVar2 + 8 ) * in_XMM2_Da + *(float*)( pQVar2 + 0xc );
         fVar4 = fVar4 + ( fVar1 * *(float*)( param_1 + 0x28 ) - ( fVar6 + fVar6 ) ) * fVar1;
         pQVar2 = pQVar3;
      }
 while ( param_2 + extraout_RDX * 0x10 != pQVar3 );
   }

   return CONCAT44(( uint )((ulong)uVar5 >> 0x20) & _UNK_001052a4, (uint)fVar4 & _LC9);
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* meshopt_simplifyEdge(unsigned int*, unsigned int const*, unsigned long, float const*, unsigned
   long, unsigned long, float const*, unsigned long, float const*, unsigned long, unsigned char
   const*, unsigned long, float, unsigned int, float*) */uint *meshopt_simplifyEdge(uint *param_1, uint *param_2, ulong param_3, float *param_4, ulong param_5, ulong param_6, float *param_7, ulong param_8, float *param_9, ulong param_10, uchar *param_11, ulong param_12, float param_13, uint param_14, float *param_15) {
   Vector3 *pVVar1;
   byte bVar2;
   byte bVar3;
   uint uVar4;
   uint uVar5;
   float *pfVar6;
   undefined4 *puVar7;
   void *pvVar8;
   float *pfVar9;
   Vector3 *pVVar10;
   char *pcVar11;
   uint *puVar12;
   uint *__s;
   char *pcVar13;
   int *piVar14;
   Vector3 *pVVar15;
   Collapse *pCVar16;
   uint *puVar17;
   void *__s_00;
   long lVar18;
   float *pfVar19;
   float *pfVar20;
   float *pfVar21;
   byte *pbVar22;
   long lVar23;
   int iVar24;
   long lVar25;
   Vector3 *pVVar26;
   ulong uVar27;
   Quadric *pQVar28;
   ulong uVar29;
   QuadricGrad *pQVar30;
   char cVar31;
   ulong uVar32;
   long extraout_RDX;
   ulong uVar33;
   uint *puVar34;
   uint *extraout_RDX_00;
   long extraout_RDX_01;
   ulong extraout_RDX_02;
   uint *puVar35;
   long lVar36;
   ulong uVar37;
   uint *puVar38;
   size_t sVar39;
   size_t sVar40;
   Quadric *pQVar41;
   QuadricGrad *pQVar42;
   long *plVar43;
   ulong uVar44;
   uint uVar45;
   ulong uVar46;
   Vector3 *pVVar47;
   uint uVar48;
   long in_FS_OFFSET;
   bool bVar49;
   float extraout_XMM0_Da;
   float fVar50;
   uint uVar51;
   uint extraout_XMM0_Da_00;
   float fVar52;
   float fVar53;
   float fVar54;
   float fVar55;
   float fVar56;
   float fVar57;
   float fVar58;
   float fVar59;
   float fVar60;
   float fVar61;
   float fVar62;
   float fVar63;
   float fVar64;
   float fVar65;
   float fVar66;
   float fVar67;
   float fVar68;
   float fVar69;
   float fVar70;
   float fVar71;
   float fVar72;
   float fVar73;
   float fVar74;
   float fVar75;
   undefined1 auVar76[16];
   Vector3 *in_stack_fffffffffffffb10;
   ulong uVar77;
   undefined8 uVar78;
   uint *puVar79;
   Collapse *pCVar80;
   Collapse *pCVar81;
   byte bVar82;
   ulong uVar83;
   ulong local_4b0;
   void *local_470;
   void *local_468;
   long local_440;
   ulong local_418;
   Vector3 *local_410;
   float local_408;
   float local_404;
   long local_3e8;
   uint *local_3d8;
   uint *local_3d0;
   ulong local_3c0;
   float local_3a0;
   float local_35c;
   long local_358;
   long local_350;
   float local_348;
   float fStack_344;
   float fStack_340;
   float fStack_33c;
   float local_338;
   float fStack_334;
   float fStack_330;
   float fStack_32c;
   undefined8 local_328;
   float local_320;
   long local_318[24];
   long local_258;
   QuadricGrad local_248[520];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_258 = 0;
   plVar43 = local_318;
   for (lVar25 = 0x18; lVar25 != 0; lVar25 = lVar25 + -1) {
      *plVar43 = 0;
      plVar43 = plVar43 + 1;
   }

   if (param_1 != param_2) {
      memcpy(param_1, param_2, param_3 * 4);
   }

   if (( param_14 & 2 ) == 0) {
      local_3d8 = (uint*)0x0;
      pVVar15 = (Vector3*)( param_5 + ( param_5 >> 2 ) );
   }
 else {
      pvVar8 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(( ulong )(param_5 + 7) >> 3);
      local_318[local_258] = (long)pvVar8;
      local_258 = local_258 + 1;
      pvVar8 = memset(pvVar8, 0, ( ulong )(param_5 + 7) >> 3);
      if (param_3 == 0) {
         pVVar15 = (Vector3*)0x0;
         local_3d8 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0);
         param_5 = 0;
         local_318[local_258] = (long)local_3d8;
         local_258 = local_258 + 1;
         LAB_00103970:pVVar10 = (Vector3*)0x1;
         sVar40 = 4;
         LAB_00103982:sVar39 = sVar40;
         sVar40 = sVar39;
      }
 else {
         param_5 = 0;
         pfVar6 = (float*)param_1;
         do {
            uVar48 = ( uint ) * pfVar6 & 7;
            pbVar22 = (byte*)( ( ulong )(( uint ) * pfVar6 >> 3) + (long)pvVar8 );
            bVar82 = *pbVar22;
            pfVar6 = pfVar6 + 1;
            param_5 = param_5 + ( ( bVar82 >> uVar48 & 1 ) == 0 );
            *pbVar22 = bVar82 | ( byte )(1 << (sbyte)uVar48);
         }
 while ( (float*)param_1 + param_3 != pfVar6 );
         lVar25 = param_5 * 4;
         pVVar15 = (Vector3*)( param_5 + ( param_5 >> 2 ) );
         if ((Vector3*)0x3fffffffffffffff < param_5) {
            lVar25 = -1;
         }

         local_3d8 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
         lVar25 = local_258 + 1;
         local_318[local_258] = (long)local_3d8;
         local_258 = lVar25;
         if (pVVar15 < (Vector3*)0x2) goto LAB_00103970;
         pVVar10 = (Vector3*)0x1;
         do {
            pVVar47 = pVVar10;
            pVVar10 = (Vector3*)( (long)pVVar47 * 2 );
         }
 while ( pVVar10 < pVVar15 );
         sVar40 = (long)pVVar47 * 8;
         sVar39 = 0xffffffffffffffff;
         if ((ulong)pVVar10 >> 0x3e == 0) goto LAB_00103982;
      }

      pvVar8 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar39);
      local_318[local_258] = (long)pvVar8;
      local_258 = local_258 + 1;
      pvVar8 = memset(pvVar8, -1, sVar40);
      lVar25 = 0;
      uVar27 = 0;
      if (param_3 != 0) {
         do {
            fVar68 = ( (float*)param_1 )[uVar27];
            pVVar26 = (Vector3*)0x0;
            pVVar47 = (Vector3*)( ulong )(uint)((int)fVar68 * 0x5bd1e995);
            while (true) {
               pfVar6 = (float*)( (long)pvVar8 + ( (ulong)pVVar47 & ( ulong )(pVVar10 + -1) ) * 4 );
               fVar54 = *pfVar6;
               if (fVar54 == -NAN) break;
               if (fVar68 == (float)local_3d8[(uint)fVar54]) goto LAB_001032a0;
               pVVar47 = pVVar26 + ( (ulong)pVVar47 & ( ulong )(pVVar10 + -1) ) + 1;
               pVVar26 = pVVar26 + 1;
               if (pVVar26 == pVVar10) {
                  puVar12 = (uint*)FUN_001051b9();
                  return puVar12;
               }

            }
;
            local_3d8[lVar25] = (uint)fVar68;
            fVar54 = (float)lVar25;
            *pfVar6 = fVar54;
            lVar25 = lVar25 + 1;
            LAB_001032a0:( (float*)param_1 )[uVar27] = fVar54;
            uVar27 = uVar27 + 1;
            in_stack_fffffffffffffb10 = pVVar15;
         }
 while ( param_3 != uVar27 );
      }

      ( *(code*)meshopt_Allocator::StorageT<void>::deallocate )();
      local_258 = local_258 + -1;
   }

   lVar25 = (long)( param_5 + 1 ) * 4;
   if ((Vector3*)0x3fffffffffffffff < (Vector3*)( param_5 + 1 )) {
      lVar25 = -1;
   }

   local_358 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
   lVar25 = param_3 * 8;
   local_318[local_258] = local_358;
   local_258 = local_258 + 1;
   if (0x1fffffffffffffff < param_3) {
      lVar25 = -1;
   }

   local_350 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
   local_318[local_258] = local_350;
   local_258 = local_258 + 1;
   meshopt::updateEdgeAdjacency((EdgeAdjacency*)&local_358, param_1, param_3, param_5, (uint*)0x0);
   lVar25 = -1;
   if (param_5 < (Vector3*)0x4000000000000000) {
      lVar25 = param_5 * 4;
   }

   pfVar6 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
   local_318[local_258] = (long)pfVar6;
   local_258 = local_258 + 1;
   puVar7 = (undefined4*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
   local_318[local_258] = (long)puVar7;
   if (pVVar15 < (Vector3*)0x2) {
      sVar40 = 4;
      pVVar10 = (Vector3*)0x1;
      LAB_0010201d:sVar39 = sVar40;
   }
 else {
      pVVar10 = (Vector3*)0x1;
      do {
         pVVar47 = pVVar10;
         pVVar10 = (Vector3*)( (long)pVVar47 * 2 );
      }
 while ( pVVar10 < pVVar15 );
      sVar40 = (long)pVVar47 * 8;
      sVar39 = 0xffffffffffffffff;
      if ((ulong)pVVar10 >> 0x3e == 0) goto LAB_0010201d;
   }

   pVVar15 = (Vector3*)param_6;
   local_258 = local_258 + 1;
   pvVar8 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar39);
   local_318[local_258] = (long)pvVar8;
   local_258 = local_258 + 1;
   pvVar8 = memset(pvVar8, -1, sVar40);
   pVVar47 = (Vector3*)0x0;
   uVar27 = param_6 & 0xfffffffffffffffc;
   if ((Vector3*)param_5 != (Vector3*)0x0) {
      do {
         fVar68 = SUB84(pVVar47, 0);
         uVar33 = (ulong)pVVar47 & 0xffffffff;
         uVar32 = (ulong)pVVar47 & 0xffffffff;
         if (local_3d8 != (uint*)0x0) {
            uVar32 = (ulong)local_3d8[uVar33];
         }

         in_stack_fffffffffffffb10 = (Vector3*)CONCAT44((int)( (ulong)in_stack_fffffffffffffb10 >> 0x20 ), fVar68);
         pfVar20 = (float*)( (long)param_4 + uVar32 * uVar27 );
         pVVar26 = (Vector3*)0x0;
         uVar32 = ( ulong )(( (uint)pfVar20[1] >> 0x11 ^ (uint)pfVar20[1] ) * 0x127409f ^ ( ( uint ) * pfVar20 >> 0x11 ^ ( uint ) * pfVar20 ) * 0x466f45d ^ ( (uint)pfVar20[2] >> 0x11 ^ (uint)pfVar20[2] ) * 0x4f9ffb7) & ( ulong )(pVVar10 + -1);
         while (true) {
            pfVar9 = (float*)( (long)pvVar8 + uVar32 * 4 );
            fVar54 = *pfVar9;
            if (fVar54 == -NAN) break;
            fVar53 = fVar54;
            if (local_3d8 != (uint*)0x0) {
               fVar53 = (float)local_3d8[(long)(ulong)(uint)fVar54];
            }

            pfVar9 = (float*)( (uint)fVar53 * uVar27 + (long)param_4 );
            if (( *(long*)pfVar9 == *(long*)pfVar20 ) && ( pfVar9[2] == pfVar20[2] )) goto LAB_00100e06;
            pVVar1 = pVVar26 + uVar32 + 1;
            pVVar26 = pVVar26 + 1;
            uVar32 = (ulong)pVVar1 & ( ulong )(pVVar10 + -1);
            if (pVVar26 == pVVar10) {
               puVar12 = (uint*)meshopt_simplifyEdge((uint*)pfVar20, (uint*)(ulong)(uint)fVar54, uVar32, (float*)pVVar26, uVar27, (ulong)pvVar8, (float*)in_stack_fffffffffffffb10, param_5, pfVar6, (ulong)param_1, (uchar*)pVVar15, param_3, extraout_XMM0_Da, (uint)param_11, param_7);
               return puVar12;
            }

         }
;
         *pfVar9 = fVar68;
         fVar54 = fVar68;
         LAB_00100e06:pVVar47 = pVVar47 + 1;
         pfVar6[uVar33] = fVar54;
      }
 while ( pVVar47 != (Vector3*)param_5 );
      pVVar10 = (Vector3*)0x0;
      if (( param_5 & 1 ) == 0) {
         LAB_00100e74:do {
            puVar7[(long)pVVar10] = (int)pVVar10;
            pVVar47 = pVVar10 + 1;
            pVVar10 = pVVar10 + 2;
            puVar7[(long)pVVar47] = (int)pVVar47;
         }
 while ( pVVar10 != (Vector3*)param_5 );
      }
 else {
         *puVar7 = 0;
         pVVar10 = (Vector3*)0x1;
         if ((Vector3*)param_5 != (Vector3*)0x1) goto LAB_00100e74;
      }

      pVVar10 = (Vector3*)0x0;
      do {
         fVar68 = pfVar6[(long)pVVar10];
         if (pVVar10 != (Vector3*)(ulong)(uint)fVar68) {
            puVar7[(long)pVVar10] = puVar7[(long)(ulong)(uint)fVar68];
            puVar7[(long)(ulong)(uint)fVar68] = (int)pVVar10;
         }

         pVVar10 = pVVar10 + 1;
      }
 while ( pVVar10 != (Vector3*)param_5 );
   }

   ( *(code*)meshopt_Allocator::StorageT<void>::deallocate )(pvVar8);
   local_258 = local_258 + -1;
   pcVar11 = (char*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(param_5);
   local_318[local_258] = (long)pcVar11;
   local_258 = local_258 + 1;
   puVar12 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
   local_318[local_258] = (long)puVar12;
   local_258 = local_258 + 1;
   __s = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
   local_318[local_258] = (long)__s;
   pVVar10 = (Vector3*)param_5;
   local_258 = local_258 + 1;
   memset(puVar12, -1, param_5 * 4);
   memset(__s, -1, param_5 * 4);
   if (pVVar10 == (Vector3*)0x0) {
      LAB_0010139c:pVVar47 = pVVar10;
      local_410 = (Vector3*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )((long)pVVar10 * 0xc);
      local_318[local_258] = (long)local_410;
      local_258 = local_258 + 1;
      local_3a0 = (float)meshopt::rescalePositions(local_410, param_4, (ulong)pVVar10, (ulong)pVVar15, local_3d8);
      if (param_10 == 0) {
         local_418 = 0;
         local_3e8 = 0;
         pVVar10 = pVVar47;
         LAB_00101516:param_10 = (ulong)pVVar15;
         if ((Vector3*)0x5d1745d1745d174 < pVVar10) goto LAB_001012cf;
      }
 else {
         LAB_00101402:uVar27 = 0;
         local_418 = 0;
         do {
            if (0.0 < param_9[uVar27]) {
               *(int*)( local_248 + local_418 * 4 ) = (int)uVar27;
               local_418 = local_418 + 1;
            }

            uVar27 = uVar27 + 1;
         }
 while ( param_10 != uVar27 );
         lVar36 = local_418 * (long)pVVar47 * 4;
         if (0x3fffffffffffffff < local_418 * (long)pVVar47) {
            lVar36 = -1;
         }

         pVVar10 = pVVar47;
         local_3e8 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar36);
         local_318[local_258] = local_3e8;
         local_258 = local_258 + 1;
         if (pVVar47 != (Vector3*)0x0) {
            pVVar15 = (Vector3*)0x0;
            lVar36 = local_3e8;
            do {
               uVar48 = (uint)pVVar15;
               if (local_3d8 != (uint*)0x0) {
                  uVar48 = local_3d8[(long)pVVar15];
               }

               if (local_418 != 0) {
                  uVar27 = 0;
                  do {
                     *(float*)( lVar36 + uVar27 * 4 ) = param_7[(ulong)uVar48 * ( param_8 >> 2 ) + ( ulong ) * (uint*)( local_248 + uVar27 * 4 )] * param_9[*(uint*)( local_248 + uVar27 * 4 )];
                     uVar27 = uVar27 + 1;
                  }
 while ( local_418 != uVar27 );
               }

               pVVar15 = pVVar15 + 1;
               lVar36 = lVar36 + local_418 * 4;
            }
 while ( pVVar15 != pVVar47 );
            goto LAB_00101516;
         }

      }

      sVar40 = ( param_5 * 8 + (long)pVVar10 * 3 ) * 4;
      sVar39 = sVar40;
   }
 else {
      pVVar47 = (Vector3*)0x0;
      do {
         uVar27 = (ulong)pVVar47 & 0xffffffff;
         uVar51 = (uint)pVVar47;
         uVar48 = *(uint*)( local_358 + uVar27 * 4 );
         uVar45 = *(int*)( local_358 + ( ulong )(uVar51 + 1) * 4 ) - uVar48;
         if (uVar45 != 0) {
            puVar35 = (uint*)( local_350 + (ulong)uVar48 * 8 );
            puVar17 = (uint*)( local_350 + ( (ulong)uVar48 + (ulong)uVar45 ) * 8 );
            do {
               while (uVar48 = *puVar35,uVar48 == uVar51) {
                  puVar12[uVar27] = uVar51;
                  __s[uVar27] = uVar51;
                  joined_r0x0010130f:puVar35 = puVar35 + 2;
                  if (puVar17 == puVar35) goto LAB_00101090;
               }
;
               uVar45 = *(uint*)( local_358 + (ulong)uVar48 * 4 );
               uVar5 = *(int*)( local_358 + ( ulong )(uVar48 + 1) * 4 ) - uVar45;
               if (uVar5 != 0) {
                  uVar32 = 0;
                  do {
                     if (*(uint*)( local_350 + (ulong)uVar45 * 8 + uVar32 * 8 ) == uVar51) goto joined_r0x0010130f;
                     uVar32 = uVar32 + 1;
                  }
 while ( uVar32 != uVar5 );
               }

               uVar45 = uVar51;
               if (__s[uVar48] != 0xffffffff) {
                  uVar45 = uVar48;
               }

               __s[uVar48] = uVar45;
               if (puVar12[uVar27] != 0xffffffff) {
                  uVar48 = uVar51;
               }

               puVar35 = puVar35 + 2;
               puVar12[uVar27] = uVar48;
            }
 while ( puVar17 != puVar35 );
         }

         LAB_00101090:pVVar47 = pVVar47 + 1;
      }
 while ( pVVar47 != pVVar10 );
      pVVar47 = (Vector3*)0x0;
      LAB_001010e2:do {
         if ((Vector3*)(ulong)(uint)pfVar6[(long)pVVar47] == pVVar47) {
            uVar48 = puVar7[(long)pVVar47];
            pVVar26 = (Vector3*)(ulong)uVar48;
            if (pVVar26 == pVVar47) {
               cVar31 = '\0';
               if (( ( __s[(long)pVVar47] & puVar12[(long)pVVar47] ) != 0xffffffff ) && ( cVar31 = '\x04' ),(Vector3*)(ulong)__s[(long)pVVar47] != pVVar47) {
                  cVar31 = ( (Vector3*)(ulong)puVar12[(long)pVVar47] == pVVar47 ) * '\x03' + '\x01';
               }

            }
 else {
               cVar31 = '\x04';
               if (( (Vector3*)(ulong)(uint)puVar7[(long)pVVar26] == pVVar47 ) && ( uVar51 = uVar51 != 0xffffffff )) {
                  uVar45 = puVar12[(long)pVVar47];
                  if (( (Vector3*)(ulong)uVar51 != pVVar47 ) && ( uVar45 != 0xffffffff )) {
                     if ((Vector3*)(ulong)uVar45 == pVVar47) goto LAB_001010d2;
                     uVar5 = __s[(long)pVVar26];
                     if (( ( ( uVar5 != 0xffffffff ) && ( uVar48 != uVar5 ) ) && ( uVar4 = puVar12[(long)pVVar26] ),uVar4 != 0xffffffff )) {
                        cVar31 = '\x04';
                        if (( pfVar6[(long)(ulong)uVar51] != pfVar6[uVar4] ) || ( ( pfVar6[uVar5] == pfVar6[(long)(ulong)uVar45] && ( cVar31 = '\x02' ),pfVar6[(long)(ulong)uVar51] != pfVar6[(long)(ulong)uVar45] ) )) goto LAB_001010d2;
                     }

                  }

                  pcVar11[(long)pVVar47] = '\x04';
                  pVVar47 = pVVar47 + 1;
                  if (pVVar47 == pVVar10) break;
                  goto LAB_001010e2;
               }

            }

         }
 else {
            cVar31 = pcVar11[(long)(ulong)(uint)pfVar6[(long)pVVar47]];
         }

         LAB_001010d2:pcVar11[(long)pVVar47] = cVar31;
         pVVar47 = pVVar47 + 1;
      }
 while ( pVVar47 != pVVar10 );
      pVVar47 = (Vector3*)0x0;
      if (param_11 != (uchar*)0x0) {
         do {
            pVVar26 = pVVar47;
            if (local_3d8 != (uint*)0x0) {
               pVVar26 = (Vector3*)(ulong)local_3d8[(long)pVVar47];
            }

            if (param_11[(long)pVVar26] != '\0') {
               pcVar11[(uint)pfVar6[(long)pVVar47]] = '\x04';
            }

            pVVar47 = pVVar47 + 1;
         }
 while ( pVVar47 != pVVar10 );
         pVVar47 = (Vector3*)0x0;
         do {
            if (pcVar11[(uint)pfVar6[(long)pVVar47]] == '\x04') {
               pcVar11[(long)pVVar47] = '\x04';
            }

            pVVar47 = pVVar47 + 1;
         }
 while ( pVVar47 != pVVar10 );
      }

      if (( param_14 & 1 ) != 0) {
         pcVar13 = pcVar11;
         do {
            if (*pcVar13 == '\x01') {
               *pcVar13 = '\x04';
            }

            pcVar13 = pcVar13 + 1;
         }
 while ( pcVar11 + (long)pVVar10 != pcVar13 );
      }

      if (pVVar10 < (Vector3*)0x1555555555555556) goto LAB_0010139c;
      local_410 = (Vector3*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      local_318[local_258] = (long)local_410;
      local_258 = local_258 + 1;
      local_3a0 = (float)meshopt::rescalePositions(local_410, param_4, (ulong)pVVar10, (ulong)pVVar15, local_3d8);
      pVVar47 = pVVar10;
      if (param_10 != 0) goto LAB_00101402;
      local_418 = 0;
      local_3e8 = 0;
      LAB_001012cf:sVar40 = ( param_5 * 8 + (long)pVVar10 * 3 ) * 4;
      param_10 = (ulong)pVVar15;
      sVar39 = 0xffffffffffffffff;
   }

   pvVar8 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar39);
   local_318[local_258] = (long)pvVar8;
   local_258 = local_258 + 1;
   memset(pvVar8, 0, sVar40);
   if (local_418 == 0) {
      local_468 = (void*)0x0;
      local_470 = (void*)0x0;
      fVar68 = _LC5;
   }
 else {
      local_470 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar39);
      local_318[local_258] = (long)local_470;
      local_258 = local_258 + 1;
      memset(local_470, 0, sVar40);
      sVar39 = local_418 * (long)pVVar10 * 0x10;
      sVar40 = 0xffffffffffffffff;
      if (local_418 * (long)pVVar10 < 0x1000000000000000) {
         sVar40 = sVar39;
      }

      local_468 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar40);
      local_318[local_258] = (long)local_468;
      local_258 = local_258 + 1;
      memset(local_468, 0, sVar39);
      fVar68 = _LC5;
   }

   _LC5 = fVar68;
   if (param_3 != 0) {
      puVar35 = (uint*)0x0;
      pQVar28 = (Quadric*)&local_348;
      pfVar20 = pfVar6;
      pfVar9 = (float*)param_1;
      pcVar13 = pcVar11;
      do {
         fVar54 = ( (float*)param_1 )[(long)puVar35 + 2];
         uVar27 = ( ulong )(uint)((float*)param_1)[(long)puVar35 + 1];
         pVVar15 = (Vector3*)( ulong )(uint)((float*)param_1)[(long)puVar35];
         puVar35 = (uint*)( (long)puVar35 + 3 );
         meshopt::quadricFromTriangle(pQVar28, local_410 + (ulong)(uint)fVar54 * 0xc, pVVar15, (Vector3*)param_10, *(float*)( local_410 + (long)pVVar15 * 0xc ));
         pQVar41 = pQVar28;
         meshopt::quadricAdd((Quadric*)( (long)pvVar8 + (ulong)(uint)pfVar6[(long)pVVar15] * 0x2c ), pQVar28);
         meshopt::quadricAdd((Quadric*)( (long)pvVar8 + (ulong)(uint)pfVar6[uVar27] * 0x2c ), pQVar41);
         meshopt::quadricAdd((Quadric*)( (long)pvVar8 + (ulong)(uint)pfVar6[(uint)fVar54] * 0x2c ), pQVar41);
      }
 while ( puVar35 < param_3 );
      puVar35 = (uint*)0x0;
      uVar48 = _LC8;
      pfVar6 = pfVar20;
      param_1 = (uint*)pfVar9;
      pcVar11 = pcVar13;
      do {
         pfVar20 = pfVar9 + (long)puVar35;
         iVar24 = 1;
         fVar54 = 0.0;
         piVar14 = &meshopt::buildComponents(unsigned_int * unsigned_long, unsigned_int_const, *, unsigned_long, unsigned_int_const * ::next);
         do {
            uVar32 = (ulong)(uint)pfVar9[(long)*piVar14 + (long)puVar35];
            uVar27 = ( ulong )(uint) * pfVar20;
            bVar82 = pcVar13[uVar27];
            bVar2 = pcVar13[uVar32];
            if (( byte )(bVar82 - 1) < 2) {
               if (pfVar9[(long)*piVar14 + (long)puVar35] == (float)puVar12[uVar27]) {
                  if (( byte )(bVar2 - 1) < 2) goto LAB_00101753;
                  LAB_0010176d:pfVar19 = pfVar6 + uVar32;
                  if (( meshopt::kHasOpposite[(ulong)bVar2 + (ulong)bVar82 * 5] == '\0' ) || ( ( uint ) * pfVar19 <= (uint)pfVar6[uVar27] )) {
                     if (( bVar82 == 1 ) || ( local_320 = bVar2 == 1 )) {
                        local_320 = _LC10;
                     }

                     pVVar15 = local_410 + uVar32 * 0xc;
                     pVVar47 = local_410 + uVar27 * 0xc;
                     fVar53 = *(float*)pVVar47;
                     fVar64 = *(float*)( pVVar47 + 4 );
                     pVVar26 = local_410 + (ulong)(uint)pfVar9[(long)piVar14[1] + (long)puVar35] * 0xc;
                     fVar58 = *(float*)( pVVar47 + 8 );
                     fVar70 = *(float*)pVVar15 - fVar53;
                     fVar60 = *(float*)( pVVar15 + 4 ) - fVar64;
                     fVar72 = *(float*)( pVVar15 + 8 ) - fVar58;
                     fVar50 = fVar70 * fVar70 + fVar60 * fVar60 + fVar72 * fVar72;
                     fVar74 = fVar70 * ( *(float*)pVVar26 - fVar53 ) + fVar60 * ( *(float*)( pVVar26 + 4 ) - fVar64 ) + fVar72 * ( *(float*)( pVVar26 + 8 ) - fVar58 );
                     fStack_32c = ( *(float*)( pVVar26 + 4 ) - fVar64 ) * fVar50 - fVar60 * fVar74;
                     fStack_330 = ( *(float*)pVVar26 - fVar53 ) * fVar50 - fVar70 * fVar74;
                     fVar60 = fVar50 * ( *(float*)( pVVar26 + 8 ) - fVar58 ) - fVar72 * fVar74;
                     fVar70 = SQRT(fStack_330 * fStack_330 + fStack_32c * fStack_32c + fVar60 * fVar60);
                     if (fVar54 < fVar70) {
                        fStack_330 = fStack_330 / fVar70;
                        fStack_32c = fStack_32c / fVar70;
                        fVar60 = fVar60 / fVar70;
                     }

                     local_320 = local_320 * SQRT(fVar50);
                     local_338 = local_320 * fVar60;
                     local_348 = local_320 * fStack_330 * fStack_330;
                     fVar53 = (float)( ( uint )(fVar53 * fStack_330 + fVar64 * fStack_32c + fVar58 * fVar60) ^ uVar48 );
                     fVar64 = local_320 * fVar53;
                     fStack_344 = local_320 * fStack_32c * fStack_32c;
                     fStack_33c = local_320 * fStack_32c * fStack_330;
                     fStack_340 = local_338 * fVar60;
                     fStack_334 = local_338 * fStack_32c;
                     local_338 = local_338 * fStack_330;
                     fStack_32c = fStack_32c * fVar64;
                     fStack_330 = fStack_330 * fVar64;
                     local_328 = CONCAT44(fVar53 * fVar64, fVar60 * fVar64);
                     pQVar41 = pQVar28;
                     meshopt::quadricAdd((Quadric*)( (long)pvVar8 + (ulong)(uint)pfVar6[uVar27] * 0x2c ), pQVar28);
                     piVar14 = (int*)meshopt::quadricAdd((Quadric*)( (long)pvVar8 + ( ulong )(uint) * pfVar19 * 0x2c ), pQVar28);
                     pQVar28 = pQVar41;
                  }

               }

            }
 else if (( byte )(bVar2 - 1) < 2) {
               LAB_00101753:if (*pfVar20 == (float)__s[uVar32]) goto LAB_0010176d;
            }

            iVar24 = iVar24 + 1;
            pfVar20 = pfVar20 + 1;
            piVar14 = piVar14 + 1;
         }
 while ( iVar24 != 4 );
         puVar35 = (uint*)( (long)puVar35 + 3 );
      }
 while ( puVar35 < param_3 );
      if (local_418 != 0) {
         puVar35 = (uint*)0x0;
         pQVar30 = local_248;
         lVar36 = local_418 * 4;
         do {
            uVar32 = ( ulong )(uint)((float*)param_1)[(long)puVar35 + 2];
            uVar27 = ( ulong )(uint)((float*)param_1)[(long)puVar35 + 1];
            uVar33 = ( ulong )(uint)((float*)param_1)[(long)puVar35];
            lVar18 = uVar32 * local_418;
            pVVar15 = local_410 + uVar32 * 0xc;
            pVVar47 = local_410 + uVar27 * 0xc;
            pVVar26 = local_410 + uVar33 * 0xc;
            fVar64 = *(float*)pVVar15 - *(float*)pVVar26;
            fVar61 = *(float*)pVVar47 - *(float*)pVVar26;
            fVar56 = *(float*)( pVVar47 + 4 ) - *(float*)( pVVar26 + 4 );
            fVar60 = *(float*)( pVVar47 + 8 ) - *(float*)( pVVar26 + 8 );
            fVar53 = *(float*)( pVVar15 + 4 ) - *(float*)( pVVar26 + 4 );
            fVar54 = *(float*)( pVVar15 + 8 ) - *(float*)( pVVar26 + 8 );
            fVar58 = fVar56 * fVar54 - fVar60 * fVar53;
            fVar70 = fVar60 * fVar64 - fVar61 * fVar54;
            fVar50 = fVar61 * fVar53 - fVar56 * fVar64;
            fVar50 = SQRT(fVar50 * fVar50 + fVar58 * fVar58 + fVar70 * fVar70) * _LC6;
            fVar70 = fVar61 * fVar61 + fVar56 * fVar56 + fVar60 * fVar60;
            fVar58 = fVar61 * fVar64 + fVar56 * fVar53 + fVar60 * fVar54;
            fVar74 = fVar64 * fVar64 + fVar53 * fVar53 + fVar54 * fVar54;
            fVar62 = fVar70 * fVar74 - fVar58 * fVar58;
            fVar72 = 0.0;
            if (fVar62 != 0.0) {
               fVar72 = fVar68 / fVar62;
            }

            *(undefined8*)( pQVar28 + 0x20 ) = 0;
            uVar78 = 0;
            fVar73 = 0.0;
            fVar71 = 0.0;
            fVar69 = 0.0;
            fVar63 = 0.0;
            fVar67 = 0.0;
            *(undefined1(*) [16])pQVar28 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pQVar28 + 0x10 ) = (undefined1[16])0x0;
            fVar62 = *(float*)pVVar26;
            fVar65 = *(float*)( pVVar26 + 4 );
            fVar66 = *(float*)( pVVar26 + 8 );
            lVar23 = 0;
            fStack_344 = fVar63;
            fStack_33c = fVar63;
            fStack_334 = fVar63;
            do {
               fVar55 = *(float*)( uVar33 * local_418 * 4 + local_3e8 + lVar23 );
               fVar75 = *(float*)( uVar27 * local_418 * 4 + local_3e8 + lVar23 ) - fVar55;
               fVar52 = *(float*)( lVar18 * 4 + local_3e8 + lVar23 ) - fVar55;
               fVar57 = ( fVar61 * fVar74 - fVar64 * fVar58 ) * fVar72 * fVar75 + ( fVar64 * fVar70 - fVar61 * fVar58 ) * fVar72 * fVar52;
               fVar59 = ( fVar53 * fVar70 - fVar56 * fVar58 ) * fVar72 * fVar52 + ( fVar56 * fVar74 - fVar53 * fVar58 ) * fVar72 * fVar75;
               fVar52 = fVar52 * ( fVar54 * fVar70 - fVar60 * fVar58 ) * fVar72 + fVar75 * ( fVar74 * fVar60 - fVar54 * fVar58 ) * fVar72;
               fVar55 = ( ( fVar55 - fVar62 * fVar57 ) - fVar65 * fVar59 ) - fVar66 * fVar52;
               uVar78 = CONCAT44((float)( (ulong)uVar78 >> 0x20 ) + fVar55 * fVar55 * fVar50, (float)uVar78 + fVar55 * fVar52 * fVar50);
               fVar63 = fVar63 + fVar57 * fVar57 * fVar50;
               fStack_344 = fStack_344 + fVar59 * fVar59 * fVar50;
               fVar67 = fVar67 + fVar52 * fVar52 * fVar50;
               fStack_33c = fStack_33c + fVar57 * fVar59 * fVar50;
               fVar69 = fVar69 + fVar57 * fVar52 * fVar50;
               fStack_334 = fStack_334 + fVar52 * fVar59 * fVar50;
               pQVar42 = pQVar30 + lVar23 * 4;
               *(float*)pQVar42 = fVar57 * fVar50;
               *(float*)( pQVar42 + 4 ) = fVar59 * fVar50;
               *(float*)( pQVar42 + 8 ) = fVar52 * fVar50;
               *(float*)( pQVar42 + 0xc ) = fVar55 * fVar50;
               lVar23 = lVar23 + 4;
               fVar71 = fVar71 + fVar57 * fVar55 * fVar50;
               fVar73 = fVar73 + fVar55 * fVar59 * fVar50;
            }
 while ( lVar36 != lVar23 );
            puVar35 = (uint*)( (long)puVar35 + 3 );
            pQVar41 = pQVar28;
            local_348 = fVar63;
            fStack_340 = fVar67;
            local_338 = fVar69;
            fStack_330 = fVar71;
            fStack_32c = fVar73;
            local_328 = uVar78;
            local_320 = fVar50;
            auVar76 = meshopt::quadricAdd((Quadric*)( (long)local_470 + uVar33 * 0x2c ), pQVar28);
            auVar76 = meshopt::quadricAdd((Quadric*)( auVar76._8_8_ + ( uVar27 + auVar76._0_8_ * 2 ) * 4 ), pQVar41);
            meshopt::quadricAdd((Quadric*)( auVar76._8_8_ + ( uVar32 + auVar76._0_8_ * 2 ) * 4 ), pQVar41);
            pQVar42 = pQVar30;
            meshopt::quadricAdd((QuadricGrad*)( (long)local_468 + uVar33 * local_418 * 0x10 ), pQVar30, extraout_RDX_02);
            meshopt::quadricAdd((QuadricGrad*)( uVar27 * local_418 * 0x10 + (long)local_468 ), pQVar42, local_418);
            meshopt::quadricAdd((QuadricGrad*)( lVar18 * 0x10 + (long)local_468 ), pQVar42, local_418);
         }
 while ( puVar35 < param_3 );
      }

   }

   local_35c = 0.0;
   uVar48 = param_14 & 8;
   if (uVar48 == 0) {
      local_3c0 = 0;
      if (pVVar10 == (Vector3*)0x0) {
         local_3d0 = (uint*)0x0;
         uVar27 = 0;
         pfVar20 = (float*)0x0;
      }
 else {
         local_3d0 = (uint*)0x0;
         pfVar20 = (float*)0x0;
         LAB_00101a6f:uVar27 = 0;
         pVVar15 = (Vector3*)0x0;
         do {
            pbVar22 = (byte*)( pcVar11 + (long)pVVar15 );
            pVVar15 = pVVar15 + 1;
            if (( *pbVar22 & 0xfd ) == 0) {
               uVar27 = uVar27 + ( uint )(*(int*)( local_358 + (long)pVVar15 * 4 ) - *(int*)( local_358 + -4 + (long)pVVar15 * 4 ));
            }

         }
 while ( pVVar15 != pVVar10 );
         uVar27 = uVar27 >> 1;
      }

   }
 else {
      local_3d0 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
      local_318[local_258] = (long)local_3d0;
      if (pVVar10 != (Vector3*)0x0) {
         pVVar15 = (Vector3*)0x0;
         if (( (ulong)pVVar10 & 1 ) == 0) {
            LAB_00102ca0:do {
               local_3d0[(long)pVVar15] = (uint)pVVar15;
               pVVar47 = pVVar15 + 1;
               pVVar15 = pVVar15 + 2;
               local_3d0[(long)pVVar47] = (uint)pVVar47;
            }
 while ( pVVar15 != pVVar10 );
         }
 else {
            *local_3d0 = 0;
            pVVar15 = (Vector3*)0x1;
            if (pVVar10 != (Vector3*)0x1) goto LAB_00102ca0;
         }

         if ((uint*)param_3 != (uint*)0x0) goto LAB_00102cbc;
         LAB_00102d7b:pVVar15 = (Vector3*)0x0;
         do {
            while (pVVar15 == (Vector3*)(ulong)(uint)pfVar6[(long)pVVar15]) {
               uVar51 = local_3d0[(long)pVVar15];
               puVar35 = local_3d0 + (long)pVVar15;
               uVar45 = uVar51;
               if (uVar51 != (uint)pVVar15) {
                  do {
                     uVar51 = local_3d0[uVar45];
                     *puVar35 = uVar51;
                     bVar49 = uVar45 != uVar51;
                     puVar35 = local_3d0 + uVar45;
                     uVar45 = uVar51;
                  }
 while ( bVar49 );
               }

               local_3d0[(long)pVVar15] = uVar51;
               pVVar15 = pVVar15 + 1;
               if (pVVar15 == pVVar10) goto LAB_00102dcd;
            }
;
            pVVar15 = pVVar15 + 1;
         }
 while ( pVVar15 != pVVar10 );
         LAB_00102dcd:local_3c0 = 0;
         pVVar15 = (Vector3*)0x0;
         do {
            while (( pVVar47 = (Vector3*)(ulong)(uint)pfVar6[(long)pVVar15] ),pVVar15 == pVVar47 && ( pVVar47 = pVVar15 == pVVar47 )) {
               uVar51 = (uint)local_3c0;
               local_3c0 = ( ulong )(uVar51 + 1);
               local_3d0[(long)pVVar15] = uVar51;
               pVVar15 = pVVar15 + 1;
               if (pVVar15 == pVVar10) goto LAB_00102e15;
            }
;
            local_3d0[(long)pVVar15] = local_3d0[(long)pVVar47];
            pVVar15 = pVVar15 + 1;
         }
 while ( pVVar15 != pVVar10 );
         LAB_00102e15:local_258 = local_258 + 1;
         pfVar20 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(local_3c0 * 0x10);
         local_318[local_258] = (long)pfVar20;
         local_258 = local_258 + 1;
         memset(pfVar20, 0, local_3c0 * 0x10);
         fVar68 = _LC5;
         pVVar15 = local_410;
         puVar35 = local_3d0;
         do {
            uVar51 = *puVar35;
            puVar35 = puVar35 + 1;
            uVar51 = uVar51 * 4;
            pfVar9 = pfVar20 + uVar51;
            fVar54 = *(float*)( pVVar15 + 8 );
            *(ulong*)pfVar9 = CONCAT44(pfVar20[uVar51 + 1] + *(float*)( pVVar15 + 4 ), *(float*)pVVar15 + *pfVar9);
            *(ulong*)( pfVar9 + 2 ) = CONCAT44(pfVar20[uVar51 + 3] + fVar68, pfVar20[uVar51 + 2] + fVar54);
            pVVar15 = pVVar15 + 0xc;
         }
 while ( puVar35 != local_3d0 + param_5 );
         puVar35 = local_3d0;
         pVVar15 = local_410;
         if (local_3c0 != 0) {
            pfVar9 = pfVar20;
            do {
               fVar54 = 0.0;
               if (pfVar9[3] != 0.0) {
                  fVar54 = fVar68 / pfVar9[3];
               }

               pfVar9[3] = 0.0;
               pfVar19 = pfVar9 + 4;
               pfVar9[2] = fVar54 * pfVar9[2];
               *(ulong*)pfVar9 = CONCAT44((float)( ( ulong ) * (undefined8*)pfVar9 >> 0x20 ) * fVar54, (float)*(undefined8*)pfVar9 * fVar54);
               pfVar9 = pfVar19;
            }
 while ( pfVar19 != pfVar20 + local_3c0 * 4 );
         }

         do {
            uVar51 = *puVar35;
            puVar35 = puVar35 + 1;
            uVar51 = uVar51 * 4;
            fVar54 = ( *(float*)( pVVar15 + 4 ) - pfVar20[uVar51 + 1] ) * ( *(float*)( pVVar15 + 4 ) - pfVar20[uVar51 + 1] ) + ( *(float*)pVVar15 - pfVar20[uVar51] ) * ( *(float*)pVVar15 - pfVar20[uVar51] ) + ( *(float*)( pVVar15 + 8 ) - pfVar20[uVar51 + 2] ) * ( *(float*)( pVVar15 + 8 ) - pfVar20[uVar51 + 2] );
            fVar68 = pfVar20[uVar51 + 3];
            if (fVar54 <= fVar68) {
               fVar54 = fVar68;
            }

            pfVar20[uVar51 + 3] = fVar54;
            pVVar15 = pVVar15 + 0xc;
         }
 while ( puVar35 != local_3d0 + param_5 );
         if (local_3c0 == 0) {
            local_35c = 3.4028235e+38;
         }
 else {
            pfVar9 = pfVar20;
            do {
               pfVar21 = pfVar9 + 1;
               *pfVar9 = *(float*)( (long)pfVar20 * -3 + 0xc + (long)pfVar9 * 4 );
               pfVar9 = pfVar21;
               pfVar19 = pfVar20;
               fVar68 = _LC0;
            }
 while ( pfVar20 + local_3c0 != pfVar21 );
            do {
               pfVar9 = pfVar19 + 1;
               local_35c = *pfVar19;
               if (fVar68 <= *pfVar19) {
                  local_35c = fVar68;
               }

               pfVar19 = pfVar9;
               fVar68 = local_35c;
            }
 while ( pfVar20 + local_3c0 != pfVar9 );
         }

         goto LAB_00101a6f;
      }

      if ((uint*)param_3 != (uint*)0x0) {
         LAB_00102cbc:puVar35 = (uint*)0x0;
         pfVar20 = (float*)param_1;
         do {
            lVar36 = 0;
            do {
               fVar68 = pfVar6[( uint )((float*)param_1)[(long)*(int*)( (long)&meshopt::buildComponents(unsigned_int * unsigned_long, unsigned_int_const, *, unsigned_long, unsigned_int_const * ::next + lVar36) + (long)puVar35 )]];
               fVar54 = (float)local_3d0[(uint)pfVar6[*(uint*)( (long)pfVar20 + lVar36 )]];
               uVar27 = (ulong)(uint)fVar54;
               pfVar9 = (float*)( local_3d0 + (uint)pfVar6[*(uint*)( (long)pfVar20 + lVar36 )] );
               uVar32 = uVar27;
               if (pfVar6[*(uint*)( (long)pfVar20 + lVar36 )] != fVar54) {
                  do {
                     fVar54 = (float)local_3d0[uVar32];
                     uVar27 = (ulong)(uint)fVar54;
                     *pfVar9 = fVar54;
                     fVar53 = (float)uVar32;
                     pfVar9 = (float*)( local_3d0 + uVar32 );
                     uVar32 = uVar27;
                  }
 while ( fVar53 != fVar54 );
               }

               pfVar9 = (float*)( local_3d0 + (uint)fVar68 );
               uVar33 = ( ulong )(uint) * pfVar9;
               uVar32 = uVar33;
               if (*pfVar9 != fVar68) {
                  do {
                     pfVar19 = (float*)( local_3d0 + uVar32 );
                     fVar68 = *pfVar19;
                     uVar33 = (ulong)(uint)fVar68;
                     *pfVar9 = fVar68;
                     fVar54 = (float)uVar32;
                     uVar32 = uVar33;
                     pfVar9 = pfVar19;
                  }
 while ( fVar54 != fVar68 );
               }

               uVar51 = (uint)uVar33;
               uVar45 = (uint)uVar27;
               if (uVar51 != uVar45) {
                  if (uVar45 <= uVar51) {
                     uVar27 = uVar33;
                  }

                  if (uVar45 < uVar51) {
                     uVar51 = uVar45;
                  }

                  local_3d0[uVar27] = uVar51;
               }

               lVar36 = lVar36 + 4;
            }
 while ( lVar36 != 0xc );
            puVar35 = (uint*)( (long)puVar35 + 3 );
            pfVar20 = pfVar20 + 3;
         }
 while ( puVar35 < param_3 );
         if (pVVar10 != (Vector3*)0x0) goto LAB_00102d7b;
      }

      local_258 = local_258 + 1;
      pfVar20 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0);
      uVar27 = 0;
      local_35c = 3.4028235e+38;
      local_3c0 = 0;
      local_318[local_258] = (long)pfVar20;
      local_258 = local_258 + 1;
   }

   uVar27 = param_3 + ( 3 - uVar27 );
   if (uVar27 < 0x1555555555555556) {
      pCVar16 = (Collapse*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(uVar27 * 0xc);
      local_318[local_258] = (long)pCVar16;
      local_258 = local_258 + 1;
      LAB_00101b03:lVar36 = uVar27 * 4;
   }
 else {
      pCVar16 = (Collapse*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      lVar36 = local_258 + 1;
      local_318[local_258] = (long)pCVar16;
      local_258 = lVar36;
      if (uVar27 >> 0x3e == 0) goto LAB_00101b03;
      lVar36 = -1;
   }

   puVar35 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar36);
   local_318[local_258] = (long)puVar35;
   local_258 = local_258 + 1;
   puVar17 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar25);
   local_318[local_258] = (long)puVar17;
   local_258 = local_258 + 1;
   __s_00 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(pVVar10);
   lVar25 = local_258 + 1;
   local_318[local_258] = (long)__s_00;
   if (( param_14 & 4 ) == 0) {
      local_3a0 = _LC5;
      fVar68 = _LC5;
   }
 else {
      fVar68 = local_3a0 * local_3a0;
   }

   fVar68 = ( param_13 * param_13 ) / fVar68;
   local_258 = lVar25;
   if (param_12 < param_3) {
      local_408 = 0.0;
      local_404 = 0.0;
      puVar38 = (uint*)param_3;
      LAB_00101c20:do {
         pfVar9 = (float*)param_1;
         meshopt::updateEdgeAdjacency((EdgeAdjacency*)&local_358, param_1, (ulong)puVar38, (ulong)pVVar10, (uint*)pfVar6);
         if (uVar27 < 3) {
            LAB_00102955:lVar25 = local_258;
            auVar76 = ZEXT416((uint)local_404);
            if (( param_12 < puVar38 ) && ( uVar48 != 0 )) {
               pfVar6 = pfVar20 + local_3c0;
               fVar54 = _LC11;
               param_1 = (uint*)pfVar9;
               if (fVar68 < local_35c) goto LAB_00102a5f;
               goto LAB_001029d8;
            }

            param_3 = (ulong)local_3d8;
            if (( param_14 & 0x40000000 ) == 0) goto joined_r0x00103ae0;
            if (local_3d8 != (uint*)0x0) goto LAB_00102a8b;
            goto LAB_00103873;
         }

         puVar79 = (uint*)0x0;
         uVar32 = 0;
         do {
            piVar14 = &meshopt::pickEdgeCollapses(meshopt::Collapse * unsigned_long, unsigned_int_const, *, unsigned_long, unsigned_int_const, *, unsigned_char_const * unsigned_int_const * unsigned_int_const * ::next);
            pfVar19 = (float*)param_1;
            do {
               fVar54 = *pfVar19;
               fVar53 = pfVar9[(long)*piVar14 + (long)puVar79];
               if (pfVar6[(uint)fVar54] != pfVar6[(uint)fVar53]) {
                  bVar82 = pcVar11[(uint)fVar54];
                  bVar2 = pcVar11[(uint)fVar53];
                  uVar33 = (ulong)bVar2;
                  lVar25 = (ulong)bVar82 * 5;
                  bVar3 = meshopt::kCanCollapse[uVar33 + lVar25];
                  if (( bVar3 != 0 || meshopt::kCanCollapse[(ulong)bVar82 + uVar33 * 5] != 0 ) && ( ( meshopt::kHasOpposite[uVar33 + lVar25] == '\0' || ( (uint)pfVar6[(uint)fVar53] <= (uint)pfVar6[(uint)fVar54] ) ) )) {
                     if (bVar82 == bVar2) {
                        if (( 1 < ( byte )(bVar82 - 1) ) || ( fVar53 == (float)puVar12[(uint)fVar54] )) goto LAB_00101d2f;
                     }
 else if (( ( bVar82 != 4 ) && ( bVar2 != 4 ) ) || ( ( ( 1 < ( byte )(bVar82 - 1) || ( fVar53 == (float)puVar12[(uint)fVar54] ) ) && ( ( 1 < ( byte )(bVar2 - 1) || ( fVar54 == (float)__s[(uint)fVar53] ) ) ) ) )) {
                        LAB_00101d2f:pCVar80 = pCVar16 + uVar32 * 0xc;
                        if (( bVar3 & meshopt::kCanCollapse[(ulong)bVar82 + uVar33 * 5] ) == 0) {
                           local_348 = fVar54;
                           fStack_344 = fVar53;
                           if (bVar3 == 0) {
                              local_348 = fVar53;
                              fStack_344 = fVar54;
                           }

                           fStack_340 = 0.0;
                           *(ulong*)pCVar80 = CONCAT44(fStack_344, local_348);
                           *(undefined4*)( pCVar80 + 8 ) = 0;
                        }
 else {
                           *(undefined4*)( pCVar80 + 8 ) = 1;
                           *(ulong*)pCVar80 = CONCAT44(fVar53, fVar54);
                        }

                        uVar32 = uVar32 + 1;
                     }

                  }

               }

               piVar14 = piVar14 + 1;
               pfVar19 = pfVar19 + 1;
            }
 while ( piVar14 != (int*)&DAT_0010520c );
            puVar79 = (uint*)( (long)puVar79 + 3 );
            if (puVar38 <= puVar79) {
               if (uVar32 == 0) goto LAB_00102955;
               break;
            }

            param_1 = (uint*)( (float*)param_1 + 3 );
         }
 while ( uVar32 + 3 <= uVar27 );
         fVar54 = 0.0;
         pCVar80 = pCVar16 + uVar32 * 0xc;
         lVar25 = local_418 * 4;
         lVar36 = local_418 << 4;
         param_1 = (uint*)pfVar9;
         pCVar81 = pCVar16;
         do {
            fVar53 = *(float*)pCVar16;
            uVar77 = (ulong)(uint)fVar53;
            fVar64 = *(float*)( pCVar16 + 4 );
            uVar33 = (ulong)(uint)fVar64;
            if (*(float*)( pCVar16 + 8 ) != 0.0) {
               uVar33 = (ulong)(uint)fVar53;
               fVar53 = fVar64;
            }

            pQVar28 = (Quadric*)( (long)pvVar8 + (ulong)(uint)pfVar6[uVar77] * 0x2c );
            uVar51 = meshopt::quadricEval(pQVar28, local_410 + (ulong)(uint)fVar64 * 0xc);
            fVar58 = (float)uVar33;
            fVar64 = 0.0;
            if (*(float*)( pQVar28 + 0x28 ) != fVar54) {
               fVar64 = _LC5 / *(float*)( pQVar28 + 0x28 );
            }

            uVar33 = uVar33 & 0xffffffff;
            uVar77 = (ulong)(uint)fVar53;
            fVar64 = (float)( uVar51 & _LC9 ) * fVar64;
            pQVar28 = (Quadric*)( (long)pvVar8 + (ulong)(uint)pfVar6[uVar77] * 0x2c );
            lVar18 = meshopt::quadricEval(pQVar28, local_410 + uVar33 * 0xc);
            fVar50 = 0.0;
            if (*(float*)( pQVar28 + 0x28 ) != fVar54) {
               fVar50 = _LC5 / *(float*)( pQVar28 + 0x28 );
            }

            fVar50 = (float)( extraout_XMM0_Da_00 & _LC9 ) * fVar50;
            if (local_418 != 0) {
               fVar60 = (float)meshopt::quadricError((Quadric*)( (long)local_470 + extraout_RDX * 0x2c ), (QuadricGrad*)( lVar36 * extraout_RDX + (long)local_468 ), local_418, (Vector3*)( local_3e8 + lVar18 * lVar25 ), (float*)pCVar16);
               fVar64 = fVar64 + fVar60;
               fVar60 = (float)meshopt::quadricError((Quadric*)( (long)local_470 + uVar77 * 0x2c ), (QuadricGrad*)( lVar36 * uVar77 + (long)local_468 ), local_418, (Vector3*)( local_3e8 + uVar33 * lVar25 ), (float*)pCVar16);
               fVar50 = fVar50 + fVar60;
            }

            if (fVar50 < fVar64) {
               *(float*)pCVar16 = fVar53;
               *(float*)( pCVar16 + 4 ) = fVar58;
               fVar64 = fVar50;
            }

            *(float*)( pCVar16 + 8 ) = fVar64;
            pCVar16 = pCVar16 + 0xc;
         }
 while ( pCVar80 != pCVar16 );
         meshopt::sortEdgeCollapses(puVar35, pCVar81, uVar32);
         pVVar15 = (Vector3*)0x0;
         uVar33 = ( (long)puVar38 - param_12 ) / 3;
         if (pVVar10 != (Vector3*)0x0) {
            if (( (ulong)pVVar10 & 1 ) != 0) {
               *puVar17 = 0;
               pVVar15 = (Vector3*)0x1;
               if (pVVar10 == (Vector3*)0x1) goto LAB_001021b9;
            }

            do {
               puVar17[(long)pVVar15] = (uint)pVVar15;
               pVVar47 = pVVar15 + 1;
               pVVar15 = pVVar15 + 2;
               puVar17[(long)pVVar47] = (uint)pVVar47;
            }
 while ( pVVar15 != pVVar10 );
         }

         LAB_001021b9:memset(__s_00, 0, (size_t)pVVar10);
         local_440 = 0;
         local_4b0 = uVar33 >> 1;
         uVar77 = 0;
         puVar79 = puVar35 + uVar32;
         puVar34 = puVar35;
         fVar54 = local_408;
         fVar53 = _LC11;
         fVar64 = _LC0;
         do {
            pCVar80 = pCVar81 + ( ulong ) * puVar34 * 0xc;
            fVar58 = *(float*)( pCVar80 + 8 );
            local_408 = fVar54;
            pCVar16 = pCVar81;
            if (( fVar68 < fVar58 ) || ( uVar33 <= uVar77 )) break;
            fVar50 = fVar64;
            if (local_4b0 < uVar32) {
               fVar50 = *(float*)( pCVar81 + (ulong)puVar35[local_4b0] * 0xc + 8 ) * fVar53;
            }

            if (( ( fVar50 < fVar58 ) && ( fVar54 < fVar58 ) ) && ( ( (long)puVar38 - param_12 ) / 0x12 < uVar77 )) break;
            uVar51 = *(uint*)pCVar80;
            uVar46 = (ulong)uVar51;
            uVar45 = *(uint*)( pCVar80 + 4 );
            lVar25 = uVar46 * 4;
            fVar58 = pfVar6[uVar45];
            uVar29 = (ulong)(uint)pfVar6[uVar46];
            pcVar13 = (char*)( (long)__s_00 + (ulong)(uint)fVar58 );
            if (*(char*)( (long)__s_00 + uVar29 ) == '\0' && *pcVar13 == '\0') {
               pVVar15 = local_410 + (ulong)(uint)fVar58 * 0xc;
               uVar5 = *(uint*)( local_358 + uVar29 * 4 );
               pVVar47 = local_410 + uVar29 * 0xc;
               bVar82 = pcVar11[uVar46];
               uVar44 = ( ulong )(*(int*)( local_358 + ( ulong )((int)pfVar6[uVar46] + 1) * 4 ) - uVar5);
               uVar83 = (ulong)bVar82;
               if (uVar44 != 0) {
                  lVar36 = local_350 + (ulong)uVar5 * 8;
                  uVar37 = 0;
                  do {
                     fVar50 = (float)puVar17[*(uint*)( lVar36 + uVar37 * 8 )];
                     fVar60 = (float)puVar17[*(uint*)( lVar36 + 4 + uVar37 * 8 )];
                     if (( fVar58 != fVar60 && fVar58 != fVar50 ) && ( fVar50 != fVar60 )) {
                        pVVar26 = local_410 + (ulong)(uint)fVar60 * 0xc;
                        pVVar1 = local_410 + (ulong)(uint)fVar50 * 0xc;
                        fVar50 = *(float*)( pVVar1 + 4 );
                        fVar60 = *(float*)( pVVar1 + 8 );
                        fVar70 = *(float*)pVVar1;
                        fVar56 = *(float*)( pVVar26 + 4 ) - fVar50;
                        fVar65 = *(float*)( pVVar26 + 8 ) - fVar60;
                        fVar61 = *(float*)pVVar26 - fVar70;
                        fVar72 = fVar56 * ( *(float*)( pVVar47 + 8 ) - fVar60 ) - fVar65 * ( *(float*)( pVVar47 + 4 ) - fVar50 );
                        fVar66 = fVar65 * ( *(float*)pVVar47 - fVar70 ) - ( *(float*)( pVVar47 + 8 ) - fVar60 ) * fVar61;
                        fVar62 = ( *(float*)( pVVar47 + 4 ) - fVar50 ) * fVar61 - ( *(float*)pVVar47 - fVar70 ) * fVar56;
                        fVar74 = fVar56 * ( *(float*)( pVVar15 + 8 ) - fVar60 ) - fVar65 * ( *(float*)( pVVar15 + 4 ) - fVar50 );
                        fVar65 = fVar65 * ( *(float*)pVVar15 - fVar70 ) - ( *(float*)( pVVar15 + 8 ) - fVar60 ) * fVar61;
                        fVar60 = fVar61 * ( *(float*)( pVVar15 + 4 ) - fVar50 ) - fVar56 * ( *(float*)pVVar15 - fVar70 );
                        fVar50 = ( fVar72 * fVar72 + fVar66 * fVar66 + fVar62 * fVar62 ) * ( fVar74 * fVar74 + fVar65 * fVar65 + fVar60 * fVar60 );
                        if (fVar50 < 0.0) {
                           fVar50 = sqrtf(fVar50);
                           fVar53 = _LC11;
                           fVar64 = _LC0;
                        }
 else {
                           fVar50 = SQRT(fVar50);
                        }

                        if (fVar72 * fVar74 + fVar66 * fVar65 + fVar62 * fVar60 <= fVar50 * __LC12) {
                           local_4b0 = local_4b0 + 1;
                           goto LAB_0010258a;
                        }

                     }

                     bVar82 = (byte)uVar83;
                     uVar37 = uVar37 + 1;
                  }
 while ( uVar44 != uVar37 );
               }

               uVar5 = uVar51;
               if (bVar82 == 3) {
                  do {
                     puVar17[uVar5] = uVar45;
                     uVar46 = (ulong)uVar5;
                     uVar5 = puVar7[uVar46];
                  }
 while ( uVar51 != puVar7[uVar46] );
                  lVar25 = 2;
               }
 else {
                  if (bVar82 == 2) {
                     uVar51 = puVar7[uVar46];
                     if (uVar45 == puVar12[uVar46]) {
                        uVar5 = __s[uVar51];
                     }
 else {
                        uVar5 = puVar12[uVar51];
                     }

                     if (uVar5 == 0xffffffff) {
                        uVar5 = puVar7[uVar45];
                     }

                     *(uint*)( lVar25 + (long)puVar17 ) = uVar45;
                     puVar17[uVar51] = uVar5;
                  }
 else {
                     *(uint*)( lVar25 + (long)puVar17 ) = uVar45;
                     if (bVar82 == 1) {
                        lVar25 = 1;
                        goto LAB_00102562;
                     }

                  }

                  lVar25 = 2;
               }

               LAB_00102562:*(char*)( (long)__s_00 + uVar29 ) = '\x01';
               uVar77 = uVar77 + lVar25;
               *pcVar13 = '\x01';
               local_440 = local_440 + 1;
               local_408 = *(float*)( pCVar80 + 8 );
               if (*(float*)( pCVar80 + 8 ) <= fVar54) {
                  local_408 = fVar54;
               }

            }

            LAB_0010258a:puVar34 = puVar34 + 1;
            fVar54 = local_408;
            pCVar16 = pCVar81;
         }
 while ( puVar79 != puVar34 );
         pfVar9 = (float*)param_1;
         if (local_440 == 0) goto LAB_00102955;
         if (pVVar10 != (Vector3*)0x0) {
            pVVar15 = (Vector3*)0x0;
            uVar32 = local_418;
            LAB_00102609:do {
               pVVar47 = (Vector3*)(ulong)puVar17[(long)pVVar15];
               fVar54 = local_404;
               if (pVVar47 != pVVar15) {
                  uVar33 = (ulong)pVVar15 & 0xffffffff;
                  uVar77 = (ulong)(uint)pfVar6[(long)pVVar47];
                  if (pfVar6[uVar33] == SUB84(pVVar15, 0)) {
                     pQVar28 = (Quadric*)( (long)pvVar8 + (ulong)(uint)pfVar6[uVar33] * 0x2c );
                     auVar76 = meshopt::quadricAdd((Quadric*)( (long)pvVar8 + uVar77 * 0x2c ), pQVar28);
                     if (uVar32 != 0) {
                        auVar76 = meshopt::quadricAdd((Quadric*)( (long)local_470 + auVar76._0_8_ * 0x2c ), (Quadric*)( (long)local_470 + auVar76._8_8_ * 0x2c ));
                        meshopt::quadricAdd((QuadricGrad*)( (long)local_468 + auVar76._0_8_ * uVar32 * 0x10 ), (QuadricGrad*)( (long)local_468 + auVar76._8_8_ * uVar32 * 0x10 ), uVar32);
                        pVVar47 = local_410 + uVar77 * 0xc;
                        fVar53 = *(float*)( pVVar47 + 4 );
                        fVar64 = *(float*)pVVar47;
                        fVar58 = *(float*)( pVVar47 + 8 );
                        fVar60 = *(float*)( pQVar28 + 0xc ) * fVar53 + *(float*)( pQVar28 + 0x18 );
                        fVar50 = *(float*)( pQVar28 + 0x14 ) * fVar58 + *(float*)( pQVar28 + 0x1c );
                        fVar70 = *(float*)( pQVar28 + 0x10 ) * fVar64 + *(float*)( pQVar28 + 0x20 );
                        fVar54 = 0.0;
                        if (*(float*)( pQVar28 + 0x28 ) != 0.0) {
                           fVar54 = _LC5 / *(float*)( pQVar28 + 0x28 );
                        }

                        fVar54 = (float)( ( uint )(( *(float*)( pQVar28 + 8 ) * fVar58 + fVar70 + fVar70 ) * fVar58 + ( *(float*)( pQVar28 + 4 ) * fVar53 + fVar50 + fVar50 ) * fVar53 + ( *(float*)pQVar28 * fVar64 + fVar60 + fVar60 ) * fVar64 + *(float*)( pQVar28 + 0x24 )) & _LC9 ) * fVar54;
                        if (fVar54 <= local_404) {
                           fVar54 = local_404;
                        }

                     }

                  }
 else if (uVar32 != 0) {
                     pVVar15 = pVVar15 + 1;
                     auVar76 = meshopt::quadricAdd((Quadric*)( (long)local_470 + (long)pVVar47 * 0x2c ), (Quadric*)( (long)local_470 + uVar33 * 0x2c ));
                     meshopt::quadricAdd((QuadricGrad*)( (long)local_468 + auVar76._0_8_ ), (QuadricGrad*)( (long)local_468 + auVar76._8_8_ ), uVar32);
                     if (pVVar15 == pVVar10) break;
                     goto LAB_00102609;
                  }

               }

               local_404 = fVar54;
               pVVar15 = pVVar15 + 1;
            }
 while ( pVVar15 != pVVar10 );
         }

         if (local_418 == 0) {
            local_404 = local_408;
         }

         param_3 = 0;
         pVVar15 = pVVar10;
         meshopt::remapEdgeLoops(puVar12, (ulong)pVVar10, puVar17);
         meshopt::remapEdgeLoops(__s, (ulong)pVVar15, extraout_RDX_00);
         puVar79 = (uint*)0x0;
         do {
            fVar54 = *(float*)( extraout_RDX_01 + ( ulong )(uint)((float*)param_1)[(long)puVar79 + 1] * 4 );
            fVar53 = *(float*)( extraout_RDX_01 + ( ulong )(uint)((float*)param_1)[(long)puVar79] * 4 );
            fVar64 = *(float*)( extraout_RDX_01 + ( ulong )(uint)((float*)param_1)[(long)puVar79 + 2] * 4 );
            if (( fVar53 != fVar54 && fVar53 != fVar64 ) && ( fVar54 != fVar64 )) {
               ( (float*)param_1 )[param_3 + 2] = fVar64;
               *(ulong*)( (float*)param_1 + param_3 ) = CONCAT44(fVar54, fVar53);
               param_3 = param_3 + 3;
            }

            puVar79 = (uint*)( (long)puVar79 + 3 );
         }
 while ( puVar79 < puVar38 );
         lVar25 = local_258;
         if (param_3 <= param_12) break;
         if (uVar48 != 0) {
            puVar38 = (uint*)param_3;
            if (local_404 < local_35c) goto LAB_00101c20;
            param_3 = meshopt::pruneComponents(param_1, param_3, local_3d0, pfVar20, local_3c0, local_404, &local_35c);
         }

         lVar25 = local_258;
         puVar38 = (uint*)param_3;
      }
 while ( param_12 < param_3 );
   }
 else {
      local_404 = 0.0;
   }

   LAB_00102b1e:if (( param_14 & 0x40000000 ) == 0) goto LAB_00102b2f;
   LAB_00102a73:puVar38 = (uint*)param_3;
   pfVar9 = (float*)param_1;
   if (local_3d8 == (uint*)0x0) {
      if ((uint*)param_3 != (uint*)0x0) {
         LAB_00103873:puVar35 = (uint*)0x0;
         do {
            fVar68 = *pfVar9;
            fVar54 = pfVar9[1];
            uVar48 = 0x80000000;
            fVar53 = pfVar9[2];
            if ((float)puVar12[(uint)fVar68] != fVar54) {
               uVar48 = ( uint )((float)__s[(uint)fVar54] == fVar68) << 0x1f;
            }

            uVar51 = 0x80000000;
            *pfVar9 = (float)( (uint)(byte)pcVar11[(uint)fVar68] << 0x1c | (uint)fVar68 | uVar48 );
            if ((float)puVar12[(uint)fVar54] != fVar53) {
               uVar51 = ( uint )((float)__s[(uint)fVar53] == fVar54) << 0x1f;
            }

            uVar48 = 0x80000000;
            pfVar9[1] = (float)( (uint)(byte)pcVar11[(uint)fVar54] << 0x1c | (uint)fVar54 | uVar51 );
            if ((float)puVar12[(uint)fVar53] != fVar68) {
               uVar48 = ( uint )((float)__s[(uint)fVar68] == fVar53) << 0x1f;
            }

            puVar35 = (uint*)( (long)puVar35 + 3 );
            pfVar9[2] = (float)( (uint)(byte)pcVar11[(uint)fVar53] << 0x1c | (uint)fVar53 | uVar48 );
            pfVar9 = pfVar9 + 3;
         }
 while ( puVar35 < puVar38 );
      }

      goto LAB_00102b3e;
   }

   goto joined_r0x00103ae0;
   while (true) {
      if (auVar76._0_4_ <= local_404) {
         auVar76._0_4_ = local_404;
      }

      local_404 = auVar76._0_4_;
      if (param_3 <= param_12) goto LAB_00102b1e;
      puVar38 = (uint*)param_3;
      if (fVar68 < local_35c) break;
      LAB_001029d8:local_404 = auVar76._0_4_;
      fVar53 = local_35c * fVar54;
      if (fVar68 <= local_35c * fVar54) {
         fVar53 = fVar68;
      }

      if (local_3c0 == 0) {
         auVar76 = (undefined1[16])0x0;
      }
 else {
         auVar76 = (undefined1[16])0x0;
         pfVar19 = pfVar20;
         do {
            fVar64 = *pfVar19;
            if (auVar76._0_4_ < fVar64) {
               auVar76 = ZEXT416((uint)auVar76._0_4_ & -(uint)(fVar53 < fVar64) | ~-(uint)(fVar53 < fVar64) & (uint)fVar64);
            }

            pfVar19 = pfVar19 + 1;
         }
 while ( pfVar19 != pfVar6 );
      }

      param_3 = meshopt::pruneComponents((uint*)pfVar9, (ulong)puVar38, local_3d0, pfVar20, local_3c0, fVar53, &local_35c);
      if ((uint*)param_3 == puVar38) break;
   }
;
   LAB_00102a5f:param_3 = (ulong)puVar38;
   if (( param_14 & 0x40000000 ) != 0) goto LAB_00102a73;
   LAB_00102b2f:puVar38 = (uint*)param_3;
   pfVar9 = (float*)param_1;
   if (local_3d8 == (uint*)0x0) goto LAB_00102b3e;
   joined_r0x00103ae0:if ((uint*)param_3 != (uint*)0x0) {
      LAB_00102a8b:pfVar6 = pfVar9;
      do {
         pfVar20 = pfVar6 + 1;
         *pfVar6 = (float)local_3d8[( uint ) * pfVar6];
         pfVar6 = pfVar20;
      }
 while ( pfVar20 != pfVar9 + (long)puVar38 );
   }

   LAB_00102b3e:if (param_15 != (float*)0x0) {
      if (local_404 < 0.0) {
         local_404 = sqrtf(local_404);
      }
 else {
         local_404 = SQRT(local_404);
      }

      *param_15 = local_404 * local_3a0;
   }

   while (lVar25 != 0) {
      lVar25 = lVar25 + -1;
      ( *(code*)meshopt_Allocator::StorageT<void>::deallocate )(local_318[lVar25]);
   }
;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar38;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void meshopt_simplify(float param_1, uint *param_2, uint *param_3, ulong param_4, float *param_5, ulong param_6, ulong param_7, ulong param_8, uint param_9, float *param_10) {
   meshopt_simplifyEdge(param_2, param_3, param_4, param_5, param_6, param_7, (float*)0x0, 0, (float*)0x0, 0, (uchar*)0x0, param_8, param_1, param_9, param_10);
   return;
}
void meshopt_simplifyWithAttributes(uint *param_1, uint *param_2, ulong param_3, float *param_4, ulong param_5, ulong param_6, float *param_7, ulong param_8, float *param_9, ulong param_10, uchar *param_11, ulong param_12, float param_13, uint param_14, float *param_15) {
   meshopt_simplifyEdge(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12, param_13, param_14, param_15);
   return;
}
long meshopt_simplifySloppy(float param_1, long param_2, uint *param_3, uint *param_4, float *param_5, Vector3 *param_6, ulong param_7, ulong param_8, float *param_9) {
   int *piVar1;
   int *piVar2;
   long lVar3;
   uint uVar4;
   Vector3 *pVVar5;
   meshopt *pmVar6;
   ulong uVar7;
   uint *puVar8;
   uint *puVar9;
   void *pvVar10;
   void *__s;
   float *pfVar11;
   float *pfVar12;
   long lVar13;
   int iVar14;
   uint uVar15;
   long lVar16;
   ulong uVar17;
   ulong uVar18;
   Vector3 *extraout_RDX;
   Vector3 *extraout_RDX_00;
   long extraout_RDX_01;
   uint uVar19;
   Vector3 *pVVar20;
   uint uVar21;
   size_t sVar22;
   uint uVar23;
   ulong uVar24;
   Quadric *pQVar25;
   undefined8 *puVar26;
   Quadric *pQVar27;
   size_t sVar28;
   Vector3 *pVVar29;
   uint uVar30;
   meshopt *pmVar31;
   ulong uVar32;
   int iVar33;
   ulong uVar34;
   uint uVar35;
   long in_FS_OFFSET;
   float fVar36;
   uint extraout_XMM0_Da;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   undefined1 auVar42[16];
   ulong local_190;
   long local_168;
   Quadric local_138[48];
   undefined8 local_108[24];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   puVar26 = local_108;
   for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar26 = 0;
      puVar26 = puVar26 + 1;
   }

   if (param_6 < (Vector3*)0x1555555555555556) {
      pVVar5 = (Vector3*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )((long)param_6 * 0xc);
      local_108[local_48] = pVVar5;
      local_48 = local_48 + 1;
      meshopt::rescalePositions(pVVar5, param_5, (ulong)param_6, param_7, (uint*)0x0);
      LAB_00103c71:local_168 = (long)param_6 << 2;
   }
 else {
      pVVar5 = (Vector3*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      local_108[local_48] = pVVar5;
      local_48 = local_48 + 1;
      meshopt::rescalePositions(pVVar5, param_5, (ulong)param_6, param_7, (uint*)0x0);
      if ((ulong)param_6 >> 0x3e == 0) goto LAB_00103c71;
      local_168 = -1;
   }

   pmVar6 = (meshopt*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(local_168);
   local_108[local_48] = pmVar6;
   lVar16 = local_48 + 1;
   uVar18 = (ulong)param_4 / 3;
   local_48 = lVar16;
   if (_LC16 <= param_1) {
      uVar34 = (ulong)(uint)(int)( _LC5 / param_1 );
      if (1 < (int)( _LC5 / param_1 )) goto LAB_00103cde;
      local_190 = 0;
   }
 else {
      uVar34 = 999;
      LAB_00103cde:uVar7 = uVar34;
      pmVar31 = pmVar6;
      meshopt::computeVertexIds((uint*)pmVar6, pVVar5, (ulong)param_6, (int)uVar34);
      local_190 = meshopt::countTriangles(pmVar31, param_3, param_4, uVar7);
   }

   iVar14 = (int)uVar34;
   fVar36 = (float)( param_8 / 6 );
   if (fVar36 < 0.0) {
      fVar36 = sqrtf(fVar36);
   }
 else {
      fVar36 = SQRT(fVar36);
   }

   param_8 = param_8 / 3;
   uVar19 = ( uint )(fVar36 + _LC6);
   if (( local_190 < param_8 ) && ( 1 < 0x401 - iVar14 )) {
      uVar35 = 0;
      uVar30 = 0x401;
      fVar36 = _LC6;
      do {
         iVar33 = (int)uVar34;
         if (iVar33 < (int)uVar19) {
            if ((int)uVar30 <= (int)uVar19) {
               uVar19 = uVar30 - 1;
            }

         }
 else {
            uVar19 = iVar33 + 1;
         }

         uVar17 = (ulong)uVar19;
         uVar7 = uVar17;
         pmVar31 = pmVar6;
         meshopt::computeVertexIds((uint*)pmVar6, pVVar5, (ulong)param_6, uVar19);
         uVar7 = meshopt::countTriangles(pmVar31, param_3, param_4, uVar7);
         if (param_8 < uVar7) {
            uVar17 = uVar34;
            uVar24 = uVar7;
            uVar34 = local_190;
            uVar32 = local_190;
            uVar21 = uVar19;
            if (uVar35 < 5) goto LAB_00103e3a;
            LAB_00103da5:iVar14 = (int)uVar17;
            uVar19 = (int)( iVar14 + uVar21 ) / 2;
            local_190 = uVar34;
            uVar34 = uVar17;
            uVar18 = uVar24;
            uVar30 = uVar21;
            if (uVar35 == 0xe) break;
         }
 else {
            uVar24 = uVar18;
            uVar34 = uVar7;
            uVar32 = uVar7;
            uVar21 = uVar30;
            if (4 < uVar35) goto LAB_00103da5;
            LAB_00103e3a:iVar14 = (int)uVar17;
            fVar41 = (float)uVar18;
            fVar38 = (float)uVar7;
            fVar39 = (float)(int)uVar19;
            fVar40 = (float)param_8;
            fVar37 = (float)(long)local_190;
            uVar19 = ( uint )(( ( fVar41 - fVar37 ) * ( fVar38 - fVar40 ) * ( fVar39 - (float)(int)uVar30 ) * ( fVar39 - (float)iVar33 ) ) / ( ( fVar41 - fVar40 ) * ( fVar39 - (float)(int)uVar30 ) * ( fVar37 - fVar38 ) + ( fVar37 - fVar40 ) * ( fVar39 - (float)iVar33 ) * ( fVar38 - fVar41 ) ) + fVar39 + fVar36);
            uVar34 = uVar17;
            uVar18 = uVar24;
            local_190 = uVar32;
            uVar30 = uVar21;
         }

         if (param_8 <= local_190) goto LAB_00103f0c;
         uVar35 = uVar35 + 1;
         iVar14 = (int)uVar34;
      }
 while ( 1 < (int)( uVar30 - iVar14 ) );
   }

   if (local_190 == 0) {
      lVar13 = 0;
      if (param_9 != (float*)0x0) {
         *param_9 = 1.0;
      }

      goto joined_r0x001045b3;
   }

   LAB_00103f0c:pVVar20 = (Vector3*)0x1;
   lVar16 = 4;
   if ((Vector3*)0x1 < param_6 + ( (ulong)param_6 >> 2 )) {
      do {
         pVVar29 = pVVar20;
         pVVar20 = (Vector3*)( (long)pVVar29 * 2 );
      }
 while ( pVVar20 < param_6 + ( (ulong)param_6 >> 2 ) );
      lVar16 = -1;
      if (pVVar20 < (Vector3*)0x4000000000000000) {
         lVar16 = (long)pVVar29 << 3;
      }

   }

   puVar8 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar16);
   local_108[local_48] = puVar8;
   local_48 = local_48 + 1;
   puVar9 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(local_168);
   local_108[local_48] = puVar9;
   pVVar29 = param_6;
   local_48 = local_48 + 1;
   meshopt::computeVertexIds((uint*)pmVar6, pVVar5, (ulong)param_6, iVar14);
   uVar18 = meshopt::fillVertexCells(puVar8, (ulong)pVVar20, puVar9, (uint*)pmVar6, (ulong)pVVar29);
   sVar22 = uVar18 * 4;
   if (uVar18 < 0x5d1745d1745d175) {
      lVar16 = uVar18 * 0x2c;
   }
 else {
      lVar16 = -1;
   }

   puVar8 = (uint*)0x0;
   pvVar10 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar16);
   local_108[local_48] = pvVar10;
   local_48 = local_48 + 1;
   pvVar10 = memset(pvVar10, 0, uVar18 * 0x2c);
   pVVar20 = extraout_RDX;
   if (param_4 != (uint*)0x0) {
      do {
         uVar19 = puVar9[param_3[(long)puVar8]];
         uVar30 = puVar9[param_3[(long)puVar8 + 1]];
         uVar35 = puVar9[param_3[(long)puVar8 + 2]];
         meshopt::quadricFromTriangle(local_138, pVVar5 + (ulong)param_3[(long)puVar8] * 0xc, pVVar20, pVVar5 + (ulong)param_3[(long)puVar8 + 2] * 0xc, *(float*)( pVVar5 + (ulong)param_3[(long)puVar8] * 0xc ));
         pQVar27 = (Quadric*)( (long)pvVar10 + (ulong)uVar19 * 0x2c );
         pQVar25 = local_138;
         if (uVar19 != uVar30 || uVar19 != uVar35) {
            meshopt::quadricAdd(pQVar27, local_138);
            auVar42 = meshopt::quadricAdd((Quadric*)( (long)pvVar10 + (ulong)uVar30 * 0x2c ), pQVar25);
            pQVar27 = (Quadric*)( auVar42._8_8_ + ( (ulong)uVar35 + auVar42._0_8_ * 2 ) * 4 );
         }

         meshopt::quadricAdd(pQVar27, pQVar25);
         puVar8 = (uint*)( (long)puVar8 + 3 );
         pVVar20 = extraout_RDX_00;
      }
 while ( puVar8 < param_4 );
   }

   uVar34 = uVar18;
   if (uVar18 >> 0x3e == 0) {
      __s = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar22);
      local_108[local_48] = __s;
      local_48 = local_48 + 1;
      pfVar11 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar22);
      local_108[local_48] = pfVar11;
      local_48 = local_48 + 1;
      memset(__s, -1, sVar22);
      if (param_6 != (Vector3*)0x0) {
         LAB_00104257:pVVar5 = (Vector3*)0x0;
         fVar37 = 0.0;
         uVar19 = _LC9;
         fVar36 = _LC5;
         do {
            pQVar27 = (Quadric*)( (long)pvVar10 + (ulong)puVar9[(long)pVVar5] * 0x2c );
            lVar16 = meshopt::quadricEval(pQVar27, param_6);
            fVar38 = 0.0;
            if (*(float*)( pQVar27 + 0x28 ) != fVar37) {
               fVar38 = fVar36 / *(float*)( pQVar27 + 0x28 );
            }

            fVar38 = (float)( extraout_XMM0_Da & uVar19 ) * fVar38;
            if (( *(int*)( (long)__s + lVar16 ) == -1 ) || ( fVar38 < *(float*)( lVar16 + (long)pfVar11 ) )) {
               *(int*)( (long)__s + lVar16 ) = (int)extraout_RDX_01;
               *(float*)( lVar16 + (long)pfVar11 ) = fVar38;
            }

            pVVar5 = (Vector3*)( extraout_RDX_01 + 1 );
         }
 while ( param_6 != pVVar5 );
      }

      fVar36 = 0.0;
      if (uVar34 != 0) goto LAB_001042f6;
   }
 else {
      __s = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      local_108[local_48] = __s;
      local_48 = local_48 + 1;
      pfVar11 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      local_108[local_48] = pfVar11;
      local_48 = local_48 + 1;
      memset(__s, -1, sVar22);
      if (param_6 != (Vector3*)0x0) goto LAB_00104257;
      LAB_001042f6:pfVar12 = pfVar11 + uVar18;
      fVar37 = 0.0;
      do {
         fVar36 = *pfVar11;
         pfVar11 = pfVar11 + 1;
         if (fVar36 <= fVar37) {
            fVar36 = fVar37;
         }

         fVar37 = fVar36;
      }
 while ( pfVar11 != pfVar12 );
   }

   local_190 = ( local_190 >> 2 ) + local_190;
   if (local_190 < 2) {
      sVar22 = 4;
      uVar18 = 1;
      LAB_00104787:sVar28 = sVar22;
   }
 else {
      uVar18 = 1;
      do {
         uVar34 = uVar18;
         uVar18 = uVar34 * 2;
      }
 while ( uVar18 < local_190 );
      sVar22 = uVar34 << 3;
      sVar28 = 0xffffffffffffffff;
      if (uVar18 >> 0x3e == 0) goto LAB_00104787;
   }

   pvVar10 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar28);
   local_108[local_48] = pvVar10;
   local_48 = local_48 + 1;
   pvVar10 = memset(pvVar10, -1, sVar22);
   lVar16 = local_48;
   lVar13 = 0;
   if (param_4 != (uint*)0x0) {
      puVar8 = (uint*)0x0;
      local_190 = 0;
      do {
         uVar19 = puVar9[param_3[(long)puVar8 + 1]];
         uVar30 = puVar9[param_3[(long)puVar8]];
         uVar35 = puVar9[param_3[(long)puVar8 + 2]];
         if (( uVar30 != uVar19 && uVar30 != uVar35 ) && ( uVar19 != uVar35 )) {
            uVar30 = *(uint*)( (long)__s + (ulong)uVar30 * 4 );
            uVar35 = *(uint*)( (long)__s + (ulong)uVar35 * 4 );
            uVar19 = *(uint*)( (long)__s + (ulong)uVar19 * 4 );
            uVar21 = uVar35;
            if (uVar30 <= uVar35) {
               uVar21 = uVar30;
            }

            uVar4 = uVar30;
            uVar15 = uVar35;
            uVar23 = uVar19;
            if (uVar21 <= uVar19) {
               uVar21 = uVar19;
               if (uVar30 <= uVar19) {
                  uVar21 = uVar30;
               }

               uVar4 = uVar19;
               uVar15 = uVar30;
               uVar23 = uVar35;
               if (uVar21 <= uVar35) {
                  uVar4 = uVar35;
                  uVar15 = uVar19;
                  uVar23 = uVar30;
               }

            }

            iVar14 = (int)lVar13;
            lVar3 = ( local_190 + lVar13 ) * 4;
            *(uint*)( param_2 + ( local_190 + lVar13 ) * 4 ) = uVar23;
            *(uint*)( param_2 + 8 + lVar3 ) = uVar4;
            piVar1 = (int*)( param_2 + ( ulong )(uint)(iVar14 * 3) * 4 );
            *(uint*)( param_2 + 4 + lVar3 ) = uVar15;
            uVar34 = ( ulong )(uint)(piVar1[1] * 0x127409f ^ *piVar1 * 0x466f45d ^ piVar1[2] * 0x4f9ffb7);
            uVar7 = 0;
            while (true) {
               uVar34 = uVar34 & uVar18 - 1;
               piVar2 = (int*)( (long)pvVar10 + uVar34 * 4 );
               iVar33 = *piVar2;
               if (iVar33 == -1) break;
               piVar2 = (int*)( param_2 + ( ulong )(uint)(iVar33 * 3) * 4 );
               if (( ( *piVar1 == *piVar2 ) && ( piVar1[1] == piVar2[1] ) ) && ( piVar1[2] == piVar2[2] )) goto LAB_001044d8;
               uVar34 = uVar34 + 1 + uVar7;
               uVar7 = uVar7 + 1;
               if (uVar7 == uVar18) {
                  lVar16 = meshopt_simplifySloppy_cold();
                  return lVar16;
               }

            }
;
            lVar13 = lVar13 + 1;
            *piVar2 = iVar14;
            local_190 = lVar13 * 2;
         }

         LAB_001044d8:puVar8 = (uint*)( (long)puVar8 + 3 );
      }
 while ( puVar8 < param_4 );
      lVar13 = local_190 + lVar13;
   }

   if (param_9 != (float*)0x0) {
      if (fVar36 < 0.0) {
         fVar36 = sqrtf(fVar36);
      }
 else {
         fVar36 = SQRT(fVar36);
      }

      *param_9 = fVar36;
   }

   joined_r0x001045b3:while (lVar16 != 0) {
      lVar16 = lVar16 + -1;
      ( *(code*)meshopt_Allocator::StorageT<void>::deallocate )(local_108[lVar16]);
   }
;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong meshopt_simplifyPoints(float param_1, void *param_2, float *param_3, ulong param_4, ulong param_5, float *param_6, ulong param_7, ulong param_8) {
   int *piVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   uint *puVar7;
   ulong uVar8;
   uint *__s;
   ulong uVar9;
   uint *puVar10;
   float *__s_00;
   float *pfVar11;
   float *pfVar12;
   void *__s_01;
   long lVar13;
   float *pfVar14;
   long lVar15;
   ulong uVar16;
   Vector3 *pVVar17;
   ulong uVar18;
   long *plVar19;
   size_t sVar20;
   ulong uVar21;
   int iVar22;
   int iVar23;
   int iVar24;
   long in_FS_OFFSET;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   ulong local_158;
   ulong local_150;
   Vector3 *local_148;
   size_t local_140;
   float local_138;
   long local_130;
   long local_108[24];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_8 == 0) {
      uVar8 = 0;
      LAB_00104bb7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar8;
   }

   plVar19 = local_108;
   for (lVar15 = 0x18; lVar15 != 0; lVar15 = lVar15 + -1) {
      *plVar19 = 0;
      plVar19 = plVar19 + 1;
   }

   local_48 = 0;
   if (param_4 < 0x1555555555555556) {
      local_148 = (Vector3*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(param_4 * 0xc);
      local_108[local_48] = (long)local_148;
      local_48 = local_48 + 1;
      meshopt::rescalePositions(local_148, param_3, param_4, param_5, (uint*)0x0);
      LAB_00104b46:local_130 = param_4 * 4;
   }
 else {
      local_148 = (Vector3*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(0xffffffffffffffff);
      local_108[local_48] = (long)local_148;
      local_48 = local_48 + 1;
      meshopt::rescalePositions(local_148, param_3, param_4, param_5, (uint*)0x0);
      if (param_4 >> 0x3e == 0) goto LAB_00104b46;
      local_130 = -1;
   }

   puVar7 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(local_130);
   local_108[local_48] = (long)puVar7;
   uVar8 = ( param_4 >> 2 ) + param_4;
   if (uVar8 < 2) {
      local_140 = 4;
      uVar18 = 1;
   }
 else {
      uVar18 = 1;
      do {
         uVar21 = uVar18;
         uVar18 = uVar21 * 2;
      }
 while ( uVar18 < uVar8 );
      local_140 = uVar21 * 8;
      sVar20 = 0xffffffffffffffff;
      if (uVar18 >> 0x3e != 0) goto LAB_0010492b;
   }

   sVar20 = local_140;
   LAB_0010492b:local_48 = local_48 + 1;
   __s = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar20);
   local_108[local_48] = (long)__s;
   fVar26 = (float)param_8;
   if (fVar26 < 0.0) {
      local_48 = local_48 + 1;
      fVar25 = sqrtf(fVar26);
   }
 else {
      fVar25 = SQRT(fVar26);
      local_48 = local_48 + 1;
   }

   iVar2 = 0;
   local_158 = 0;
   iVar22 = (int)( fVar25 + _LC6 );
   iVar23 = 0;
   local_150 = param_4;
   iVar5 = 0x401;
   if (0 < iVar22) goto LAB_00104aef;
   do {
      iVar24 = iVar23;
      iVar22 = iVar23 + 1;
      LAB_001049c9:meshopt::computeVertexIds(puVar7, local_148, param_4, iVar22);
      memset(__s, -1, local_140);
      if (param_4 != 0) {
         uVar8 = 0;
         uVar21 = 0;
         do {
            uVar3 = puVar7[uVar21];
            uVar6 = ( uVar3 >> 0xd ^ uVar3 ) * 0x5bd1e995;
            uVar9 = ( ulong )(uVar6 ^ uVar6 >> 0xf);
            uVar16 = 0;
            while (true) {
               uVar9 = uVar9 & uVar18 - 1;
               uVar6 = __s[uVar9];
               if (( uVar3 == uVar6 ) || ( uVar6 == 0xffffffff )) break;
               uVar9 = uVar9 + 1 + uVar16;
               uVar16 = uVar16 + 1;
               if (uVar16 == uVar18) {
                  uVar8 = meshopt_simplifyPoints_cold();
                  return uVar8;
               }

            }
;
            uVar21 = uVar21 + 1;
            __s[uVar9] = uVar3;
            uVar8 = uVar8 + ( uVar6 == 0xffffffff );
         }
 while ( param_4 != uVar21 );
         fVar25 = (float)uVar8;
         uVar21 = local_158;
         uVar9 = uVar8;
         iVar23 = iVar24;
         iVar4 = iVar22;
         if (param_8 < uVar8) goto LAB_00104a9b;
         if (param_8 != uVar8) {
            uVar9 = local_150;
            iVar23 = iVar22;
            iVar4 = iVar5;
            if (1 < iVar5 - iVar22) goto LAB_00104aa8;
            goto LAB_00104b7a;
         }

         LAB_00104d3e:puVar10 = (uint*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(local_130);
         local_108[local_48] = (long)puVar10;
         uVar8 = param_4;
         local_48 = local_48 + 1;
         meshopt::computeVertexIds(puVar7, local_148, param_4, iVar22);
         uVar8 = meshopt::fillVertexCells(__s, uVar18, puVar10, puVar7, uVar8);
         if (uVar8 < 0x924924924924925) {
            lVar15 = uVar8 * 0x1c;
         }
 else {
            lVar15 = -1;
         }

         __s_00 = (float*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(lVar15);
         local_108[local_48] = (long)__s_00;
         local_48 = local_48 + 1;
         memset(__s_00, 0, uVar8 * 0x1c);
         fVar26 = _LC5;
         if (param_4 != 0) {
            pVVar17 = local_148;
            puVar7 = puVar10;
            pfVar11 = param_6;
            do {
               pfVar12 = __s_00 + ( ulong ) * puVar7 * 7;
               pfVar14 = (float*)meshopt::fillCellReservoirs(meshopt::Reservoir * unsigned_long, meshopt::Vector3_const * float_const * unsigned_long, unsigned_long, unsigned_int_const * ::dummy_color);
               if (param_6 != (float*)0x0) {
                  pfVar14 = pfVar11;
               }

               puVar7 = puVar7 + 1;
               pfVar11 = pfVar11 + ( param_7 >> 2 );
               *pfVar12 = *pfVar12 + *(float*)pVVar17;
               pfVar12[1] = pfVar12[1] + *(float*)( pVVar17 + 4 );
               pfVar12[2] = pfVar12[2] + *(float*)( pVVar17 + 8 );
               pfVar12[3] = pfVar12[3] + *pfVar14;
               pfVar12[4] = pfVar12[4] + pfVar14[1];
               pfVar12[5] = pfVar12[5] + pfVar14[2];
               pfVar12[6] = pfVar12[6] + fVar26;
               pVVar17 = pVVar17 + 0xc;
            }
 while ( puVar7 != puVar10 + param_4 );
         }

         fVar26 = _LC5;
         pfVar11 = __s_00;
         if (uVar8 != 0) {
            do {
               fVar25 = 0.0;
               if (pfVar11[6] != 0.0) {
                  fVar25 = fVar26 / pfVar11[6];
               }

               pfVar12 = pfVar11 + 7;
               *pfVar11 = fVar25 * *pfVar11;
               for (int i = 0; i < 3; i++) {
                  pfVar11[( i + 1 )] = fVar25 * pfVar11[( i + 1 )];
               }

               *(ulong*)( pfVar11 + 4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( pfVar11 + 4 ) >> 0x20 ) * fVar25, (float)*(undefined8*)( pfVar11 + 4 ) * fVar25);
               pfVar11 = pfVar12;
            }
 while ( pfVar12 != __s_00 + uVar8 * 7 );
         }

         sVar20 = uVar8 * 4;
         __s_01 = (void*)( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar20);
         local_108[local_48] = (long)__s_01;
         local_48 = local_48 + 1;
         lVar15 = ( *(code*)meshopt_Allocator::StorageT<void>::allocate )(sVar20);
         local_108[local_48] = lVar15;
         local_138 = param_1;
         if (iVar22 != 1) {
            local_138 = ( _LC5 / (float)( iVar22 + -1 ) ) * param_1;
         }

         local_48 = local_48 + 1;
         memset(__s_01, -1, sVar20);
         if (param_4 != 0) {
            uVar18 = 0;
            pfVar11 = param_6;
            do {
               pfVar12 = __s_00 + (ulong)puVar10[uVar18] * 7;
               if (param_6 == (float*)0x0) {
                  fVar27 = 0.0;
                  fVar25 = 0.0;
                  fVar26 = 0.0;
               }
 else {
                  fVar26 = *pfVar11;
                  fVar25 = pfVar11[1];
                  fVar27 = pfVar11[2];
               }

               lVar13 = (ulong)puVar10[uVar18] * 4;
               piVar1 = (int*)( (long)__s_01 + lVar13 );
               pfVar14 = (float*)( lVar13 + lVar15 );
               fVar26 = ( ( fVar26 - pfVar12[3] ) * ( fVar26 - pfVar12[3] ) + ( fVar25 - pfVar12[4] ) * ( fVar25 - pfVar12[4] ) + ( fVar27 - pfVar12[5] ) * ( fVar27 - pfVar12[5] ) ) * local_138 * local_138 + ( *(float*)local_148 - *pfVar12 ) * ( *(float*)local_148 - *pfVar12 ) + ( *(float*)( local_148 + 4 ) - pfVar12[1] ) * ( *(float*)( local_148 + 4 ) - pfVar12[1] ) + ( *(float*)( local_148 + 8 ) - pfVar12[2] ) * ( *(float*)( local_148 + 8 ) - pfVar12[2] );
               if (( *piVar1 == -1 ) || ( fVar26 < *pfVar14 )) {
                  *piVar1 = (int)uVar18;
                  *pfVar14 = fVar26;
               }

               uVar18 = uVar18 + 1;
               local_148 = local_148 + 0xc;
               pfVar11 = pfVar11 + ( param_7 >> 2 );
            }
 while ( param_4 != uVar18 );
         }

         memcpy(param_2, __s_01, sVar20);
         lVar15 = local_48;
         joined_r0x00104b91:while (lVar15 != 0) {
            ( *(code*)meshopt_Allocator::StorageT<void>::deallocate )(local_108[lVar15 + -1]);
            lVar15 = lVar15 + -1;
         }
;
         goto LAB_00104bb7;
      }

      fVar25 = 0.0;
      uVar21 = 0;
      uVar9 = local_150;
      iVar23 = iVar22;
      iVar4 = iVar5;
      LAB_00104a9b:uVar8 = uVar21;
      if (iVar4 - iVar23 < 2) {
         LAB_00104b7a:iVar22 = iVar23;
         lVar15 = local_48;
         if (uVar8 != 0) goto LAB_00104d3e;
         goto joined_r0x00104b91;
      }

      LAB_00104aa8:if (iVar2 < 5) {
         fVar29 = (float)local_150;
         fVar27 = (float)local_158;
         fVar28 = (float)iVar22;
         iVar22 = (int)( ( ( fVar29 - fVar27 ) * ( fVar25 - fVar26 ) * ( fVar28 - (float)iVar5 ) * ( fVar28 - (float)iVar24 ) ) / ( ( fVar29 - fVar26 ) * ( fVar28 - (float)iVar5 ) * ( fVar27 - fVar25 ) + ( fVar25 - fVar29 ) * ( fVar27 - fVar26 ) * ( fVar28 - (float)iVar24 ) ) + fVar28 + _LC6 );
      }
 else {
         iVar22 = ( iVar4 + iVar23 ) / 2;
         if (iVar2 == 0xe) goto LAB_00104b7a;
      }

      iVar2 = iVar2 + 1;
      local_158 = uVar8;
      local_150 = uVar9;
      iVar5 = iVar4;
   }
 while ( iVar22 <= iVar23 );
   LAB_00104aef:iVar24 = iVar23;
   if (iVar5 <= iVar22) {
      iVar22 = iVar5 + -1;
   }

   goto LAB_001049c9;
}
void meshopt_simplifyScale(float *param_1, ulong param_2, ulong param_3) {
   meshopt::rescalePositions((Vector3*)0x0, param_1, param_2, param_3, (uint*)0x0);
   return;
}
/* meshopt::fillVertexCells(unsigned int*, unsigned long, unsigned int*, unsigned int const*,
   unsigned long) [clone .cold] */void meshopt::fillVertexCells(uint *param_1, ulong param_2, uint *param_3, uint *param_4, ulong param_5) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* meshopt_simplifyEdge(unsigned int*, unsigned int const*, unsigned long, float const*, unsigned
   long, unsigned long, float const*, unsigned long, float const*, unsigned long, unsigned char
   const*, unsigned long, float, unsigned int, float*) [clone .cold] */void meshopt_simplifyEdge(uint *param_1, uint *param_2, ulong param_3, float *param_4, ulong param_5, ulong param_6, float *param_7, ulong param_8, float *param_9, ulong param_10, uchar *param_11, ulong param_12, float param_13, uint param_14, float *param_15) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_001051b9(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void meshopt_simplifySloppy_cold(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void meshopt_simplifyPoints_cold(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}


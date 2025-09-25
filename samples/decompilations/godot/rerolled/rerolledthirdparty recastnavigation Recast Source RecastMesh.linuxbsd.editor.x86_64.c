/* addVertex(unsigned short, unsigned short, unsigned short, unsigned short*, int*, int*, int&) */void addVertex(ushort param_1, ushort param_2, ushort param_3, ushort *param_4, int *param_5, int *param_6, int *param_7) {
   int *piVar1;
   ushort *puVar2;
   int iVar3;
   int iVar4;
   piVar1 = param_5 + ( (uint)param_1 * -0x72594cbd + (uint)param_3 * -0x34e54ce1 & 0xfff );
   iVar3 = *piVar1;
   do {
      if (iVar3 == -1) {
         iVar3 = *param_7;
         *param_7 = iVar3 + 1;
         iVar4 = *piVar1;
         puVar2 = param_4 + iVar3 * 3;
         *puVar2 = param_1;
         puVar2[1] = param_2;
         puVar2[2] = param_3;
         param_6[iVar3] = iVar4;
         *piVar1 = iVar3;
         return;
      }

      puVar2 = param_4 + iVar3 * 3;
      if (*puVar2 == param_1) {
         iVar4 = (uint)puVar2[1] - (uint)param_2;
         if (iVar4 < 1) {
            iVar4 = -iVar4;
         }

         if (( iVar4 < 3 ) && ( puVar2[2] == param_3 )) {
            return;
         }

      }

      iVar3 = param_6[iVar3];
   }
 while ( true );
}
/* intersectProp(int const*, int const*, int const*, int const*) */uint intersectProp(int *param_1, int *param_2, int *param_3, int *param_4) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   int iVar12;
   uVar11 = 0;
   iVar1 = param_3[2];
   iVar2 = *param_3;
   iVar4 = *param_1;
   iVar3 = param_1[2];
   iVar6 = *param_2 - iVar4;
   iVar12 = param_2[2] - iVar3;
   iVar7 = ( iVar1 - iVar3 ) * iVar6;
   iVar8 = ( iVar2 - iVar4 ) * iVar12;
   uVar5 = 0;
   if (iVar7 != iVar8) {
      iVar6 = ( param_4[2] - iVar3 ) * iVar6;
      iVar12 = ( *param_4 - iVar4 ) * iVar12;
      uVar5 = uVar11;
      if (iVar6 != iVar12) {
         iVar10 = *param_4 - iVar2;
         iVar9 = param_4[2] - iVar1;
         iVar3 = ( iVar3 - iVar1 ) * iVar10;
         iVar4 = ( iVar4 - iVar2 ) * iVar9;
         if (iVar3 != iVar4) {
            iVar10 = ( param_2[2] - iVar1 ) * iVar10;
            iVar9 = ( *param_2 - iVar2 ) * iVar9;
            if (iVar10 != iVar9) {
               uVar5 = ( uint )(( iVar10 - iVar9 ^ iVar3 - iVar4 ) & ( iVar7 - iVar8 ^ iVar6 - iVar12 )) >> 0x1f;
            }

         }

      }

   }

   return uVar5;
}
/* between(int const*, int const*, int const*) */uint between(int *param_1, int *param_2, int *param_3) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   undefined3 uVar7;
   uint uVar8;
   int iVar9;
   iVar1 = *param_2;
   iVar2 = param_3[2];
   iVar3 = *param_1;
   iVar4 = param_1[2];
   iVar5 = *param_3;
   iVar6 = param_2[2];
   iVar9 = ( iVar5 - iVar3 ) * ( iVar6 - iVar4 );
   uVar8 = 0;
   if (( iVar1 - iVar3 ) * ( iVar2 - iVar4 ) == iVar9) {
      uVar7 = ( undefined3 )((uint)iVar9 >> 8);
      if (iVar1 != iVar3) {
         if (iVar3 <= iVar5) {
            return ( uint )(iVar3 == iVar5) | CONCAT31(uVar7, iVar5 <= iVar1);
         }

         return ( uint )(iVar1 <= iVar5);
      }

      if (iVar4 <= iVar2) {
         return ( uint )(iVar2 == iVar4) | CONCAT31(uVar7, iVar2 <= iVar6);
      }

      uVar8 = ( uint )(iVar6 <= iVar2);
   }

   return uVar8;
}
/* diagonalie(int, int, int, int const*, int*) */undefined8 diagonalie(int param_1, int param_2, int param_3, int *param_4, int *param_5) {
   int iVar1;
   char cVar2;
   int iVar3;
   ulong uVar4;
   int *piVar5;
   long lVar6;
   long lVar7;
   int *piVar8;
   int iVar9;
   int *piVar10;
   int *piVar11;
   bool bVar12;
   uVar4 = (ulong)param_1;
   piVar11 = (int*)( ( ulong )(uint)(param_5[uVar4] << 4) + (long)param_4 );
   piVar5 = (int*)( ( ulong )(uint)(param_5[param_2] << 4) + (long)param_4 );
   if (0 < param_3) {
      lVar7 = 1;
      do {
         iVar1 = (int)lVar7;
         iVar3 = iVar1 + -1;
         iVar9 = (int)uVar4;
         if (iVar1 < param_3) {
            if (( iVar9 != iVar1 ) && ( iVar9 != iVar3 )) {
               lVar6 = (long)iVar1;
               goto LAB_0010029e;
            }

         }
 else {
            if (iVar9 == 0) {
               return 1;
            }

            if (iVar9 == iVar3) {
               return 1;
            }

            lVar6 = 0;
            LAB_0010029e:if (( param_2 != iVar3 ) && ( param_2 != (int)lVar6 )) {
               piVar8 = (int*)( ( ulong )(uint)(param_5[lVar7 + -1] << 4) + (long)param_4 );
               piVar10 = (int*)( ( ulong )(uint)(param_5[lVar6] << 4) + (long)param_4 );
               if (*piVar8 == *piVar11) {
                  if (piVar8[2] == piVar11[2]) goto LAB_0010026d;
                  iVar1 = *piVar5;
               }
 else {
                  iVar1 = *piVar5;
               }

               if (*piVar8 == iVar1) {
                  if (piVar5[2] == piVar8[2]) goto LAB_0010026d;
                  iVar3 = *piVar10;
               }
 else {
                  iVar3 = *piVar10;
               }

               if (( ( *piVar11 != iVar3 ) || ( piVar11[2] != piVar10[2] ) ) && ( ( iVar1 != iVar3 || ( piVar5[2] != piVar10[2] ) ) )) {
                  cVar2 = intersectProp(piVar11, piVar5, piVar8, piVar10);
                  if (cVar2 != '\0') {
                     return 0;
                  }

                  cVar2 = between(piVar11, piVar5, piVar8);
                  if (cVar2 != '\0') {
                     return 0;
                  }

                  cVar2 = between(piVar11, piVar5, piVar10);
                  if (cVar2 != '\0') {
                     return 0;
                  }

                  cVar2 = between(piVar8, piVar10, piVar11);
                  if (cVar2 != '\0') {
                     return 0;
                  }

                  cVar2 = between(piVar8, piVar10, piVar5);
                  uVar4 = uVar4 & 0xffffffff;
                  if (cVar2 != '\0') {
                     return 0;
                  }

               }

            }

         }

         LAB_0010026d:bVar12 = param_3 != lVar7;
         lVar7 = lVar7 + 1;
      }
 while ( bVar12 );
   }

   return 1;
}
/* inCone(int, int, int, int const*, int*) */uint inCone(int param_1, int param_2, int param_3, int *param_4, int *param_5) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int *piVar9;
   int *piVar10;
   int *piVar11;
   piVar11 = (int*)( ( ulong )(uint)(param_5[param_1] << 4) + (long)param_4 );
   piVar10 = (int*)( ( ulong )(uint)(param_5[param_2] << 4) + (long)param_4 );
   piVar9 = param_5 + (long)param_1 + 1;
   if (param_3 <= param_1 + 1) {
      piVar9 = param_5;
   }

   iVar1 = *piVar10;
   iVar2 = piVar10[2];
   piVar9 = (int*)( ( ulong )(uint)(*piVar9 << 4) + (long)param_4 );
   iVar5 = param_1 + -1;
   if (param_1 == 0) {
      iVar5 = param_3 + -1;
   }

   iVar3 = *piVar11;
   iVar4 = piVar11[2];
   piVar10 = (int*)( (long)param_4 + ( ulong )(uint)(param_5[iVar5] << 4) );
   iVar5 = piVar9[2];
   iVar6 = *piVar9;
   iVar7 = *piVar10;
   iVar8 = piVar10[2];
   if (( iVar6 - iVar7 ) * ( iVar4 - iVar8 ) < ( iVar5 - iVar8 ) * ( iVar3 - iVar7 )) {
      if (( iVar6 - iVar3 ) * ( iVar2 - iVar4 ) < ( iVar1 - iVar3 ) * ( iVar5 - iVar4 )) {
         return 1;
      }

      return CONCAT31(( int3 )(( uint )(iVar3 - iVar1) >> 8), ( iVar7 - iVar1 ) * ( iVar4 - iVar2 ) < ( iVar8 - iVar2 ) * ( iVar3 - iVar1 ));
   }

   return ( uint )(( iVar5 - iVar2 ) * ( iVar3 - iVar1 ) - ( iVar6 - iVar1 ) * ( iVar4 - iVar2 ) & ( iVar8 - iVar4 ) * ( iVar1 - iVar3 ) - ( iVar7 - iVar3 ) * ( iVar2 - iVar4 )) >> 0x1f;
}
/* getPolyMergeValue(unsigned short*, unsigned short*, unsigned short const*, int&, int&, int) */int getPolyMergeValue(ushort *param_1, ushort *param_2, ushort *param_3, int *param_4, int *param_5, int param_6) {
   ushort uVar1;
   int iVar2;
   int iVar3;
   ushort uVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   ushort uVar9;
   uint uVar10;
   ulong uVar11;
   ulong uVar12;
   ushort uVar13;
   uint uVar14;
   ushort uVar15;
   if (param_6 < 1) {
      if (param_6 * 2 + -2 <= param_6) {
         *param_4 = -1;
         *param_5 = -1;
      }

   }
 else {
      uVar12 = 0;
      do {
         if (param_1[uVar12] == 0xffff) goto LAB_001005b6;
         uVar12 = uVar12 + 1;
      }
 while ( (long)param_6 != uVar12 );
      uVar12 = (ulong)(uint)param_6;
      LAB_001005b6:uVar11 = 0;
      do {
         if (param_2[uVar11] == 0xffff) goto LAB_001005d5;
         uVar11 = uVar11 + 1;
      }
 while ( (long)param_6 != uVar11 );
      uVar11 = (ulong)(uint)param_6;
      LAB_001005d5:iVar3 = (int)uVar11;
      iVar6 = (int)uVar12;
      if (iVar3 + -2 + iVar6 <= param_6) {
         *param_4 = -1;
         *param_5 = -1;
         if (iVar6 != 0) {
            lVar8 = 0;
            LAB_00100600:do {
               uVar1 = param_1[lVar8];
               uVar15 = param_1[( (int)lVar8 + 1 ) % iVar6];
               uVar13 = uVar1;
               if (uVar1 <= uVar15) {
                  uVar13 = uVar15;
                  uVar15 = uVar1;
               }

               lVar7 = 0;
               do {
                  iVar5 = (int)lVar7;
                  if (iVar3 <= iVar5) {
                     lVar8 = lVar8 + 1;
                     if (iVar6 == lVar8) goto LAB_00100672;
                     goto LAB_00100600;
                  }

                  uVar1 = param_2[lVar7];
                  uVar4 = param_2[( iVar5 + 1 ) % iVar3];
                  uVar9 = uVar1;
                  if (uVar1 <= uVar4) {
                     uVar9 = uVar4;
                     uVar4 = uVar1;
                  }

                  lVar7 = lVar7 + 1;
               }
 while ( ( uVar13 != uVar9 ) || ( uVar15 != uVar4 ) );
               *param_4 = (int)lVar8;
               lVar8 = lVar8 + 1;
               *param_5 = iVar5;
            }
 while ( iVar6 != lVar8 );
            LAB_00100672:iVar5 = *param_4;
            if (( iVar5 != -1 ) && ( iVar2 = iVar2 != -1 )) {
               lVar8 = (long)(int)( (uint)param_1[iVar5] + (uint)param_1[iVar5] * 2 );
               uVar1 = param_3[lVar8];
               uVar14 = (uint)param_3[(int)( (uint)param_1[( iVar5 + -1 + iVar6 ) % iVar6] + (uint)param_1[( iVar5 + -1 + iVar6 ) % iVar6] * 2 )];
               uVar10 = ( uint )(param_3 + (int)( (uint)param_1[( iVar5 + -1 + iVar6 ) % iVar6] + (uint)param_1[( iVar5 + -1 + iVar6 ) % iVar6] * 2 ))[2];
               if (( (int)( ( ( param_3 + (int)( (uint)param_2[( iVar2 + 2 ) % iVar3] + (uint)param_2[( iVar2 + 2 ) % iVar3] * 2 ) )[2] - uVar10 ) * ( uVar1 - uVar14 ) ) < (int)( ( param_3[(int)( (uint)param_2[( iVar2 + 2 ) % iVar3] + (uint)param_2[( iVar2 + 2 ) % iVar3] * 2 )] - uVar14 ) * ( ( param_3 + lVar8 )[2] - uVar10 ) ) ) && ( uVar10 = (uint)param_3[(int)( (uint)param_2[( iVar2 + -1 + iVar3 ) % iVar3] + (uint)param_2[( iVar2 + -1 + iVar3 ) % iVar3] * 2 )] ),uVar14 = ( uint )(param_3 + (int)( (uint)param_2[( iVar2 + -1 + iVar3 ) % iVar3] + (uint)param_2[( iVar2 + -1 + iVar3 ) % iVar3] * 2 ))[2],(int)( ( param_3[(int)( (uint)param_2[iVar2] + (uint)param_2[iVar2] * 2 )] - uVar10 ) * ( ( param_3 + (int)( (uint)param_1[( iVar5 + 2 ) % iVar6] + (uint)param_1[( iVar5 + 2 ) % iVar6] * 2 ) )[2] - uVar14 ) ) < (int)( ( param_3[(int)( (uint)param_1[( iVar5 + 2 ) % iVar6] + (uint)param_1[( iVar5 + 2 ) % iVar6] * 2 )] - uVar10 ) * ( ( param_3 + (int)( (uint)param_2[iVar2] + (uint)param_2[iVar2] * 2 ) )[2] - uVar14 ) )) {
                  lVar7 = (long)(int)( (uint)param_1[( iVar5 + 1 ) % iVar6] + (uint)param_1[( iVar5 + 1 ) % iVar6] * 2 );
                  iVar6 = (uint)uVar1 - (uint)param_3[lVar7];
                  return ( (uint)param_3[lVar8 + 2] - (uint)param_3[lVar7 + 2] ) * ( (uint)param_3[lVar8 + 2] - (uint)param_3[lVar7 + 2] ) + iVar6 * iVar6;
               }

            }

         }

      }

   }

   return -1;
}
/* buildMeshAdjacency(unsigned short*, int, int, int) */undefined8 buildMeshAdjacency(ushort *param_1, int param_2, int param_3, int param_4) {
   undefined4 *puVar1;
   ushort *puVar2;
   undefined2 *puVar3;
   ushort uVar4;
   ushort uVar5;
   int iVar6;
   void *__s;
   void *pvVar7;
   long lVar8;
   ulong uVar9;
   ushort *puVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   bool bVar14;
   __s = (void*)rcAlloc((long)( param_2 * param_4 + param_3 ) * 2, 1);
   if (__s != (void*)0x0) {
      pvVar7 = (void*)rcAlloc((long)( param_2 * param_4 ) * 0xc, 1);
      if (pvVar7 != (void*)0x0) {
         if (0 < param_3) {
            memset(__s, 0xff, (ulong)(uint)param_3 * 2);
         }

         if (param_2 < 1) {
            LAB_001009ce:rcFree(__s);
            rcFree(pvVar7);
            return 1;
         }

         iVar6 = param_4 * 2;
         iVar11 = 0;
         puVar10 = param_1;
         iVar13 = 0;
         do {
            iVar12 = iVar13;
            if (0 < param_4) {
               lVar8 = 0;
               do {
                  uVar4 = puVar10[lVar8];
                  if (uVar4 == 0xffff) break;
                  if (( param_4 <= (int)lVar8 + 1 ) || ( uVar5 = uVar5 == 0xffff )) {
                     uVar5 = *puVar10;
                  }

                  if (uVar4 < uVar5) {
                     puVar1 = (undefined4*)( (long)pvVar7 + (long)iVar11 * 0xc );
                     *puVar1 = CONCAT22(uVar5, uVar4);
                     *(undefined2*)( (long)puVar1 + 6 ) = 0;
                     puVar3 = (undefined2*)( (long)__s + (ulong)uVar4 * 2 );
                     *(short*)( puVar1 + 2 ) = (short)iVar12;
                     *(short*)( puVar1 + 1 ) = (short)lVar8;
                     *(short*)( (long)puVar1 + 10 ) = (short)iVar12;
                     *(undefined2*)( (long)__s + (long)iVar11 * 2 + (long)param_3 * 2 ) = *puVar3;
                     *puVar3 = (short)iVar11;
                     iVar11 = iVar11 + 1;
                  }

                  lVar8 = lVar8 + 1;
               }
 while ( lVar8 != param_4 );
            }

            puVar10 = puVar10 + iVar6;
            iVar13 = iVar12 + 1;
         }
 while ( param_2 != iVar12 + 1 );
         puVar10 = param_1;
         iVar13 = 0;
         while (param_4 < 1) {
            puVar10 = puVar10 + iVar6;
            bVar14 = iVar12 == iVar13;
            iVar13 = iVar13 + 1;
            if (bVar14) goto LAB_0010096a;
         }
;
         do {
            lVar8 = 0;
            do {
               uVar4 = puVar10[lVar8];
               if (uVar4 == 0xffff) break;
               if (( param_4 <= (int)lVar8 + 1 ) || ( uVar5 = uVar5 == 0xffff )) {
                  uVar5 = *puVar10;
               }

               if (uVar5 < uVar4) {
                  uVar5 = *(ushort*)( (long)__s + (ulong)uVar5 * 2 );
                  while (uVar5 != 0xffff) {
                     uVar9 = (ulong)uVar5;
                     if (( uVar4 == *(ushort*)( (long)pvVar7 + uVar9 * 0xc + 2 ) ) && ( *(short*)( (long)pvVar7 + uVar9 * 0xc + 8 ) == *(short*)( (long)pvVar7 + uVar9 * 0xc + 10 ) )) {
                        *(short*)( (long)pvVar7 + uVar9 * 0xc + 6 ) = (short)lVar8;
                        *(short*)( (long)pvVar7 + uVar9 * 0xc + 10 ) = (short)iVar13;
                        break;
                     }

                     uVar5 = *(ushort*)( (long)__s + uVar9 * 2 + (long)param_3 * 2 );
                  }
;
               }

               lVar8 = lVar8 + 1;
            }
 while ( lVar8 != param_4 );
            puVar10 = puVar10 + iVar6;
            bVar14 = iVar12 != iVar13;
            iVar13 = iVar13 + 1;
         }
 while ( bVar14 );
         LAB_0010096a:if (0 < iVar11) {
            puVar10 = (ushort*)( (long)pvVar7 + 4 );
            puVar2 = puVar10 + (long)iVar11 * 6;
            do {
               uVar4 = puVar10[3];
               if (puVar10[2] != uVar4) {
                  param_1[(long)(int)( (uint)puVar10[2] * param_4 * 2 ) + (long)(int)( ( uint ) * puVar10 + param_4 )] = uVar4;
                  param_1[(long)(int)( (uint)uVar4 * param_4 * 2 ) + (long)(int)( (uint)puVar10[1] + param_4 )] = puVar10[2];
               }

               puVar10 = puVar10 + 6;
            }
 while ( puVar2 != puVar10 );
         }

         goto LAB_001009ce;
      }

      rcFree(__s);
   }

   return 0;
}
/* mergePolyVerts(unsigned short*, unsigned short*, int, int, unsigned short*, int) */void mergePolyVerts(ushort *param_1, ushort *param_2, int param_3, int param_4, ushort *param_5, int param_6) {
   size_t __n;
   long lVar1;
   void *__src;
   int iVar2;
   ulong uVar3;
   long lVar4;
   ushort *puVar5;
   uint uVar6;
   int iVar7;
   lVar4 = (long)param_6;
   __n = lVar4 * 2;
   if (param_6 < 1) {
      __src = memset(param_5, 0xff, __n);
   }
 else {
      lVar1 = 0;
      do {
         if (param_1[lVar1] == 0xffff) {
            iVar7 = (int)lVar1;
            break;
         }

         lVar1 = lVar1 + 1;
         iVar7 = param_6;
      }
 while ( lVar1 != lVar4 );
      lVar1 = 0;
      do {
         if (param_2[lVar1] == 0xffff) {
            param_6 = (int)lVar1;
            break;
         }

         lVar1 = lVar1 + 1;
      }
 while ( lVar1 != lVar4 );
      __src = memset(param_5, 0xff, __n);
      if (iVar7 < 2) {
         uVar6 = 0;
      }
 else {
         uVar6 = iVar7 - 1;
         uVar3 = 0;
         do {
            *(ushort*)( (long)__src + uVar3 * 2 ) = param_1[( param_3 + 1 + (int)uVar3 ) % iVar7];
            uVar3 = uVar3 + 1;
         }
 while ( uVar6 != uVar3 );
      }

      if (1 < param_6) {
         puVar5 = (ushort*)( (long)__src + (long)(int)uVar6 * 2 );
         iVar7 = param_4 + 1;
         do {
            iVar2 = iVar7 + 1;
            *puVar5 = param_2[iVar7 % param_6];
            puVar5 = puVar5 + 1;
            iVar7 = iVar2;
         }
 while ( param_4 + param_6 != iVar2 );
      }

   }

   memcpy(param_1, __src, __n);
   return;
}
/* triangulate(int, int const*, int*, int*) */int triangulate(int param_1, int *param_2, int *param_3, int *param_4) {
   uint *puVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   char cVar7;
   uint uVar8;
   uint uVar9;
   uint *puVar10;
   int *piVar11;
   int iVar12;
   int *piVar13;
   long lVar14;
   int *piVar15;
   uint *puVar16;
   int *piVar17;
   uint uVar18;
   long lVar19;
   long lVar20;
   uint uVar21;
   uint uVar22;
   int iVar23;
   long lVar24;
   int iVar25;
   int iVar26;
   uint local_a8;
   uint *local_a0;
   uint *local_98;
   uint *local_58;
   int local_4c;
   uint local_48;
   if (0 < param_1) {
      if (param_1 != 1) {
         iVar12 = 0;
         iVar23 = 1;
         goto LAB_00100ce0;
      }

      iVar12 = 1;
      iVar26 = 0;
      lVar19 = 0;
      do {
         iVar25 = 0;
         do {
            cVar7 = inCone(iVar26, iVar25, param_1, param_2, param_3);
            if (( cVar7 != '\0' ) && ( cVar7 = diagonalie(iVar26, iVar25, param_1, param_2, param_3) ),cVar7 != '\0') {
               param_3[lVar19] = param_3[lVar19] | 0x80000000;
            }

            if (param_1 == iVar12) {
               if (param_1 < 4) goto LAB_00101414;
               puVar1 = (uint*)( param_3 + 1 );
               local_4c = 0;
               lVar19 = (long)param_1 + 1;
               local_58 = (uint*)param_4;
               iVar23 = local_4c;
               goto LAB_00100d20;
            }

            iVar23 = iVar12 + 1;
            lVar19 = 0;
            iVar25 = 1;
            iVar26 = iVar12;
            if (iVar23 < param_1) {
               LAB_00100ce0:iVar25 = iVar23 + 1;
               lVar19 = (long)iVar23;
               iVar26 = iVar12;
            }

            iVar12 = iVar23;
         }
 while ( iVar25 < param_1 );
      }
 while ( true );
   }

   LAB_00101414:local_4c = 1;
   local_58 = (uint*)param_4;
   LAB_001013b8:*local_58 = *param_3 & 0xfffffff;
   local_58[1] = param_3[1] & 0xfffffff;
   local_58[2] = param_3[2] & 0xfffffff;
   return local_4c;
   LAB_00100d20:local_4c = iVar23;
   local_a8 = 0xffffffff;
   uVar22 = 0xffffffff;
   puVar10 = puVar1;
   uVar18 = 0;
   do {
      uVar21 = uVar18 + 1;
      if ((int)uVar21 < param_1) {
         if ((int)*puVar10 < 0) {
            iVar23 = uVar18 + 2;
            piVar15 = (int*)( ( ulong )(puVar10[-1] << 4) + (long)param_2 );
            piVar11 = param_3;
            if (iVar23 < param_1) goto LAB_00100f32;
            goto LAB_00100f38;
         }

      }
 else {
         if (*param_3 < 0) {
            iVar23 = 1;
            piVar15 = (int*)( ( ulong )(puVar10[-1] << 4) + (long)param_2 );
            LAB_00100f32:piVar11 = param_3 + iVar23;
            LAB_00100f38:piVar11 = (int*)( ( ulong )(uint)(*piVar11 << 4) + (long)param_2 );
            iVar12 = piVar11[2] - piVar15[2];
            iVar23 = *piVar11 - *piVar15;
            uVar8 = iVar23 * iVar23 + iVar12 * iVar12;
            if (uVar8 < uVar22) {
               uVar22 = uVar8;
               local_a8 = uVar18;
            }

         }

         if (uVar21 == param_1) break;
      }

      puVar10 = puVar10 + 1;
      uVar18 = uVar21;
   }
 while ( true );
   if (local_a8 == 0xffffffff) {
      lVar24 = 0;
      local_48 = 0xffffffff;
      local_a0 = puVar1;
      do {
         uVar18 = (uint)lVar24;
         if ((int)( uVar18 + 1 ) < param_1) {
            uVar22 = uVar18 + 2;
            puVar10 = local_a0;
            puVar16 = (uint*)( param_3 + uVar22 );
            if (param_1 <= (int)uVar22) {
               uVar22 = 0;
               puVar16 = (uint*)param_3;
            }

         }
 else {
            uVar22 = 1;
            puVar10 = (uint*)param_3;
            puVar16 = puVar1;
         }

         piVar11 = (int*)( (long)param_2 + ( ulong )(*puVar16 << 4) );
         iVar23 = *piVar11;
         piVar15 = (int*)( (long)param_2 + ( ulong )(local_a0[-1] << 4) );
         iVar12 = piVar11[2];
         iVar26 = *piVar15;
         iVar25 = piVar15[2];
         piVar13 = (int*)( ( ulong )(*puVar10 << 4) + (long)param_2 );
         uVar21 = uVar18;
         if (lVar24 == 0) {
            uVar21 = param_1;
         }

         iVar2 = piVar13[2];
         iVar3 = *piVar13;
         piVar13 = (int*)( ( ulong )(uint)(param_3[(int)( uVar21 - 1 )] << 4) + (long)param_2 );
         iVar4 = *piVar13;
         iVar5 = piVar13[2];
         uVar21 = local_a8;
         uVar8 = local_48;
         if (( iVar3 - iVar4 ) * ( iVar25 - iVar5 ) < ( iVar26 - iVar4 ) * ( iVar2 - iVar5 )) {
            if (( ( iVar3 - iVar26 ) * ( iVar12 - iVar25 ) < ( iVar2 - iVar25 ) * ( iVar23 - iVar26 ) ) || ( ( iVar4 - iVar23 ) * ( iVar25 - iVar12 ) < ( iVar5 - iVar12 ) * ( iVar26 - iVar23 ) )) {
               LAB_001010fa:lVar20 = 1;
               do {
                  uVar6 = (uint)lVar20;
                  uVar9 = uVar6 - 1;
                  if ((int)uVar6 < param_1) {
                     if (( uVar18 != uVar6 ) && ( lVar14 = uVar9 != uVar18 )) goto LAB_00101169;
                  }
 else {
                     if (( uVar18 == 0 ) || ( uVar9 == uVar18 )) break;
                     lVar14 = 0;
                     LAB_00101169:if (( uVar9 != uVar22 ) && ( (uint)lVar14 != uVar22 )) {
                        piVar17 = (int*)( ( ulong )(uint)(param_3[lVar20 + -1] << 4) + (long)param_2 );
                        piVar13 = (int*)( ( ulong )(uint)(param_3[lVar14] << 4) + (long)param_2 );
                        if (( iVar26 != *piVar17 ) || ( iVar25 != piVar17[2] )) {
                           if (*piVar17 == iVar23) {
                              if (piVar17[2] == iVar12) goto LAB_0010113c;
                              iVar2 = *piVar13;
                           }
 else {
                              iVar2 = *piVar13;
                           }

                           if (( ( ( iVar26 != iVar2 ) || ( iVar25 != piVar13[2] ) ) && ( ( iVar2 != iVar23 || ( piVar13[2] != iVar12 ) ) ) ) && ( cVar7 = intersectProp(piVar15, piVar11, piVar17, piVar13) ),cVar7 != '\0') goto LAB_00101208;
                        }

                     }

                  }

                  LAB_0010113c:lVar20 = lVar20 + 1;
               }
 while ( lVar20 != lVar19 );
               piVar11 = param_3;
               if ((int)( uVar22 + 1 ) < param_1) {
                  piVar11 = param_3 + (int)( uVar22 + 1 );
               }

               piVar11 = (int*)( ( ulong )(uint)(*piVar11 << 4) + (long)param_2 );
               iVar26 = *piVar11 - iVar26;
               iVar25 = piVar11[2] - iVar25;
               uVar21 = iVar25 * iVar25 + iVar26 * iVar26;
               uVar8 = uVar18;
               if (local_a8 <= uVar21) {
                  uVar21 = local_a8;
                  uVar8 = local_48;
               }

            }

         }
 else if (( ( iVar5 - iVar25 ) * ( iVar23 - iVar26 ) <= ( iVar4 - iVar26 ) * ( iVar12 - iVar25 ) ) && ( ( iVar2 - iVar12 ) * ( iVar26 - iVar23 ) <= ( iVar3 - iVar23 ) * ( iVar25 - iVar12 ) )) goto LAB_001010fa;
         LAB_00101208:local_48 = uVar8;
         local_a8 = uVar21;
         lVar24 = lVar24 + 1;
         local_a0 = local_a0 + 1;
      }
 while ( lVar24 != lVar19 + -1 );
      if (local_48 == 0xffffffff) {
         return -local_4c;
      }

      local_a8 = local_48;
   }

   iVar23 = local_a8 + 1;
   if (iVar23 < param_1) {
      puVar10 = (uint*)( param_3 + (long)iVar23 + 1 );
      local_98 = (uint*)( param_3 + iVar23 );
      if (param_1 <= (int)( local_a8 + 2 )) {
         puVar10 = (uint*)param_3;
      }

   }
 else {
      iVar23 = 0;
      puVar10 = puVar1;
      local_98 = (uint*)param_3;
   }

   puVar16 = local_58 + 3;
   *local_58 = param_3[(int)local_a8] & 0xfffffff;
   local_58[1] = *local_98 & 0xfffffff;
   local_58[2] = *puVar10 & 0xfffffff;
   uVar18 = param_1 - 1;
   if (iVar23 < (int)uVar18) {
      iVar26 = param_1 - 2;
      memmove(param_3 + iVar23, param_3 + (long)iVar23 + 1, ( ulong )(uint)(iVar26 - iVar23) * 4 + 4);
      if (iVar23 < 1) {
         iVar12 = iVar23 + 1;
         goto LAB_00100fc9;
      }

      local_a8 = iVar23 + -1;
      if (local_a8 == 0) {
         iVar12 = 2;
         iVar23 = 1;
         puVar10 = (uint*)param_3;
         local_98 = puVar1;
         goto LAB_00100e55;
      }

      iVar12 = iVar23 + 1;
   }
 else {
      iVar12 = 1;
      iVar23 = 0;
      local_98 = (uint*)param_3;
      LAB_00100fc9:local_a8 = param_1 - 2;
   }

   iVar26 = local_a8 + -1;
   puVar10 = (uint*)( param_3 + (int)local_a8 );
   LAB_00100e55:cVar7 = inCone(iVar26, iVar23, uVar18, param_2, param_3);
   uVar22 = *puVar10;
   if (( cVar7 == '\0' ) || ( cVar7 = diagonalie(iVar26, iVar23, uVar18, param_2, param_3) ),cVar7 == '\0') {
      uVar22 = uVar22 & 0xfffffff;
   }
 else {
      uVar22 = uVar22 | 0x80000000;
   }

   *puVar10 = uVar22;
   if ((int)uVar18 <= iVar12) {
      iVar12 = 0;
   }

   cVar7 = inCone(local_a8, iVar12, uVar18, param_2, param_3);
   uVar22 = *local_98;
   if (( cVar7 == '\0' ) || ( cVar7 = diagonalie(local_a8, iVar12, uVar18, param_2, param_3) ),cVar7 == '\0') {
      uVar22 = uVar22 & 0xfffffff;
   }
 else {
      uVar22 = uVar22 | 0x80000000;
   }

   *local_98 = uVar22;
   lVar19 = lVar19 + -1;
   param_1 = uVar18;
   local_58 = puVar16;
   iVar23 = local_4c + 1;
   if (uVar18 == 3) goto LAB_001013ae;
   goto LAB_00100d20;
   LAB_001013ae:local_4c = local_4c + 2;
   goto LAB_001013b8;
}
/* rcBuildPolyMesh(rcContext*, rcContourSet const&, int, rcPolyMesh&) */undefined4 rcBuildPolyMesh(rcContext *param_1,rcContourSet *param_2,int param_3,rcPolyMesh *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  void *__s;
  long lVar9;
  size_t sVar10;
  size_t sVar11;
  int *__s_00;
  int *__s_01;
  int *piVar12;
  int *piVar13;
  ushort *__s_02;
  long *plVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ushort *puVar22;
  int *piVar23;
  uint *puVar24;
  int *piVar25;
  long lVar26;
  undefined2 *puVar27;
  undefined1 *puVar28;
  void *pvVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  ushort *puVar33;
  uint *puVar34;
  int iVar35;
  size_t sVar36;
  int *piVar37;
  int iVar38;
  undefined2 *puVar39;
  ushort uVar40;
  int iVar41;
  long lVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  int iVar51;
  undefined1 *puVar52;
  int iVar53;
  ushort *puVar54;
  long in_FS_OFFSET;
  bool bVar55;
  int local_134;
  long local_b0;
  int local_90;
  ushort *local_68;
  int local_60;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0xb);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_4 + 0x40) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_4 + 0x4c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_4 + 0x58) = uVar3;
  iVar5 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_4 + 0x54) = uVar7;
  *(undefined4 *)(param_4 + 0x5c) = *(undefined4 *)(param_2 + 0x38);
  if (iVar5 < 1) {
    local_90 = 0;
    sVar36 = 0;
    iVar41 = 0;
    iVar51 = 0;
  }
  else {
    lVar32 = *(long *)param_2;
    iVar41 = 0;
    local_90 = 0;
    iVar51 = 0;
    lVar9 = (long)iVar5 * 0x20 + lVar32;
    do {
      iVar5 = *(int *)(lVar32 + 8);
      if (2 < iVar5) {
        iVar51 = iVar51 + iVar5;
        local_90 = local_90 + -2 + iVar5;
        if (iVar41 < iVar5) {
          iVar41 = iVar5;
        }
      }
      lVar32 = lVar32 + 0x20;
    } while (lVar32 != lVar9);
    sVar36 = (size_t)iVar51;
    if (0xfffd < iVar51) {
      uVar7 = 0;
      rcContext::log(param_1,3,"rcBuildPolyMesh: Too many vertices %d.",iVar51);
      goto LAB_00101a45;
    }
  }
  __s = (void *)rcAlloc(sVar36);
  if (__s == (void *)0x0) {
    rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'vflags\' (%d).",iVar51);
  }
  else {
    memset(__s,0,sVar36);
    lVar9 = rcAlloc(sVar36 * 6,0);
    *(long *)param_4 = lVar9;
    if (lVar9 == 0) {
      rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'mesh.verts\' (%d).",iVar51);
    }
    else {
      lVar32 = (long)param_3;
      sVar10 = (size_t)local_90;
      sVar11 = sVar10 * lVar32 * 4;
      lVar9 = rcAlloc(sVar11,0);
      *(long *)(param_4 + 8) = lVar9;
      if (lVar9 == 0) {
        rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'mesh.polys\' (%d).",
                       param_3 * local_90 * 2);
      }
      else {
        lVar9 = rcAlloc(sVar10 * 2,0);
        *(long *)(param_4 + 0x10) = lVar9;
        if (lVar9 == 0) {
          rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'mesh.regs\' (%d).",local_90);
        }
        else {
          lVar9 = rcAlloc(sVar10,0);
          *(long *)(param_4 + 0x20) = lVar9;
          if (lVar9 != 0) {
            *(int *)(param_4 + 0x34) = param_3;
            *(undefined8 *)(param_4 + 0x28) = 0;
            *(int *)(param_4 + 0x30) = local_90;
            memset(*(void **)param_4,0,sVar36 * 6);
            memset(*(void **)(param_4 + 8),0xff,sVar11);
            memset(*(void **)(param_4 + 0x10),0,sVar10 * 2);
            memset(*(void **)(param_4 + 0x20),0,sVar10);
            __s_00 = (int *)rcAlloc(sVar36 << 2);
            if (__s_00 != (int *)0x0) {
              memset(__s_00,0,sVar36 << 2);
              __s_01 = (int *)rcAlloc(0x4000,1);
              if (__s_01 != (int *)0x0) {
                memset(__s_01,0xff,0x4000);
                piVar12 = (int *)rcAlloc((long)iVar41 * 4,1);
                if (piVar12 != (int *)0x0) {
                  piVar13 = (int *)rcAlloc((long)iVar41 * 0xc,1);
                  if (piVar13 != (int *)0x0) {
                    sVar36 = lVar32 * 2;
                    __s_02 = (ushort *)rcAlloc((long)(iVar41 + 1) * sVar36,1);
                    if (__s_02 == (ushort *)0x0) {
                      rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'polys\' (%d).");
                    }
                    else {
                      lVar9 = 0;
                      sVar10 = (long)(param_3 * iVar41) * 2;
                      if (0 < *(int *)(param_2 + 8)) {
                        do {
                          plVar14 = (long *)(lVar9 * 0x20 + *(long *)param_2);
                          if (2 < (int)plVar14[1]) {
                            lVar15 = 0;
                            do {
                              piVar12[lVar15] = (int)lVar15;
                              lVar15 = lVar15 + 1;
                            } while ((int)lVar15 < (int)plVar14[1]);
                            iVar5 = triangulate((int)plVar14[1],(int *)*plVar14,piVar12,piVar13);
                            if (iVar5 < 1) {
                              iVar5 = -iVar5;
                              rcContext::log(param_1,2,
                                             "rcBuildPolyMesh: Bad triangulation Contour %d.");
                              if (0 < (int)plVar14[1]) goto LAB_00101840;
LAB_001018d8:
                              memset(__s_02,0xff,sVar10);
                              if (iVar5 == 0) goto LAB_001017d0;
                            }
                            else {
                              if (0 < (int)plVar14[1]) {
LAB_00101840:
                                lVar15 = 0;
                                piVar16 = __s_00;
                                do {
                                  puVar54 = (ushort *)(lVar15 * 0x10 + *plVar14);
                                  uVar4 = addVertex(*puVar54,puVar54[2],puVar54[4],
                                                    *(ushort **)param_4,__s_01,piVar16,
                                                    (int *)(param_4 + 0x28));
                                  piVar12[lVar15] = (uint)uVar4;
                                  if ((puVar54[7] & 1) != 0) {
                                    *(undefined1 *)((long)__s + (ulong)uVar4) = 1;
                                  }
                                  lVar15 = lVar15 + 1;
                                } while ((int)lVar15 < (int)plVar14[1]);
                                goto LAB_001018d8;
                              }
                              memset(__s_02,0xff,sVar10);
                            }
                            iVar51 = 0;
                            piVar16 = piVar13;
                            do {
                              iVar44 = *piVar16;
                              iVar50 = piVar16[1];
                              if (iVar44 != iVar50) {
                                iVar53 = piVar16[2];
                                if ((iVar44 != iVar53) && (iVar50 != iVar53)) {
                                  iVar43 = param_3 * iVar51;
                                  iVar51 = iVar51 + 1;
                                  lVar15 = (long)iVar43;
                                  __s_02[lVar15] = (ushort)piVar12[iVar44];
                                  __s_02[lVar15 + 1] = (ushort)piVar12[iVar50];
                                  __s_02[lVar15 + 2] = (ushort)piVar12[iVar53];
                                }
                              }
                              piVar16 = piVar16 + 3;
                            } while (piVar16 != piVar13 + (long)iVar5 * 3);
                            if (iVar51 != 0) {
                              if (3 < param_3) {
                                puVar54 = __s_02 + (iVar51 + -1) * param_3;
                                while (iVar5 = iVar51 + -1, 0 < iVar5) {
                                  iVar53 = 0;
                                  iVar47 = 0;
                                  iVar50 = 0;
                                  iVar44 = 0;
                                  iVar43 = 0;
                                  puVar22 = __s_02;
                                  iVar48 = param_3;
                                  iVar38 = 0;
                                  do {
                                    iVar6 = iVar38 + 1;
                                    if (iVar6 < iVar51) {
                                      puVar1 = *(ushort **)param_4;
                                      puVar33 = __s_02 + iVar48;
                                      iVar35 = iVar6;
                                      do {
                                        iVar8 = getPolyMergeValue(puVar22,puVar33,puVar1,&local_48,
                                                                  &local_44,param_3);
                                        if (iVar47 < iVar8) {
                                          iVar47 = iVar8;
                                          iVar44 = iVar35;
                                          iVar50 = local_48;
                                          iVar53 = iVar38;
                                          iVar43 = local_44;
                                        }
                                        iVar35 = iVar35 + 1;
                                        puVar33 = puVar33 + lVar32;
                                      } while (iVar51 != iVar35);
                                    }
                                    puVar22 = puVar22 + lVar32;
                                    iVar48 = iVar48 + param_3;
                                    iVar38 = iVar6;
                                  } while (iVar6 != iVar5);
                                  if (iVar47 < 1) goto LAB_00101989;
                                  puVar22 = __s_02 + iVar44 * param_3;
                                  mergePolyVerts(__s_02 + iVar53 * param_3,puVar22,iVar50,iVar43,
                                                 __s_02 + param_3 * iVar41,param_3);
                                  if (puVar22 != puVar54) {
                                    memcpy(puVar22,puVar54,sVar36);
                                  }
                                  puVar54 = puVar54 + -lVar32;
                                  iVar51 = iVar5;
                                }
                              }
                              if (0 < iVar51) {
LAB_00101989:
                                iVar44 = 0;
                                iVar5 = *(int *)(param_4 + 0x2c);
                                puVar54 = __s_02;
                                do {
                                  lVar15 = *(long *)(param_4 + 8);
                                  if (0 < param_3) {
                                    sVar11 = 0;
                                    do {
                                      *(undefined2 *)(lVar15 + (long)(param_3 * iVar5) * 4 + sVar11)
                                           = *(undefined2 *)((long)puVar54 + sVar11);
                                      sVar11 = sVar11 + 2;
                                    } while (sVar11 != sVar36);
                                  }
                                  *(undefined2 *)(*(long *)(param_4 + 0x10) + (long)iVar5 * 2) =
                                       *(undefined2 *)((long)plVar14 + 0x1c);
                                  *(undefined1 *)(*(long *)(param_4 + 0x20) + (long)iVar5) =
                                       *(undefined1 *)((long)plVar14 + 0x1e);
                                  iVar5 = *(int *)(param_4 + 0x2c) + 1;
                                  *(int *)(param_4 + 0x2c) = iVar5;
                                  if (local_90 < iVar5) {
                                    rcContext::log(param_1,3,
                                                   "rcBuildPolyMesh: Too many polygons %d (max:%d)."
                                                   ,iVar5,local_90);
                                    goto LAB_00101ba5;
                                  }
                                  iVar44 = iVar44 + 1;
                                  puVar54 = puVar54 + lVar32;
                                } while (iVar44 != iVar51);
                              }
                            }
                          }
LAB_001017d0:
                          lVar9 = lVar9 + 1;
                        } while ((int)lVar9 < *(int *)(param_2 + 8));
                      }
                      iVar5 = *(int *)(param_4 + 0x28);
                      puVar54 = *(ushort **)(param_4 + 8);
                      iVar41 = *(int *)(param_4 + 0x2c);
                      uVar49 = 0;
                      if (0 < iVar5) {
LAB_00101c5f:
                        lVar9 = (long)(int)uVar49;
                        if ((*(char *)((long)__s + lVar9) == '\0') ||
                           (iVar51 = *(int *)(param_4 + 0x34), iVar41 < 1)) {
LAB_00101c50:
                          uVar49 = uVar49 + 1;
                          goto LAB_00101c56;
                        }
                        iVar53 = 0;
                        iVar50 = 0;
                        iVar44 = 0;
                        puVar22 = puVar54;
                        do {
                          uVar4 = (ushort)uVar49;
                          if (0 < iVar51) {
                            lVar15 = 0;
                            do {
                              if (puVar22[lVar15] == 0xffff) {
                                iVar43 = (int)lVar15;
                                if ((int)lVar15 == 0) goto LAB_00101d05;
                                break;
                              }
                              lVar15 = lVar15 + 1;
                              iVar43 = iVar51;
                            } while (lVar15 != iVar51);
                            iVar47 = 0;
                            puVar33 = puVar22;
                            do {
                              if (uVar4 == *puVar33) {
                                iVar53 = iVar53 + 1;
                                iVar47 = iVar47 + 1;
                              }
                              puVar33 = puVar33 + 1;
                            } while (puVar22 + iVar43 != puVar33);
                            if (iVar47 != 0) {
                              iVar50 = iVar50 + ((iVar43 + -1) - iVar47);
                            }
                          }
LAB_00101d05:
                          iVar44 = iVar44 + 1;
                          puVar22 = puVar22 + iVar51 * 2;
                        } while (iVar44 != iVar41);
                        if (iVar50 < 3) goto LAB_00101c50;
                        pvVar29 = (void *)rcAlloc((long)(iVar53 * 2) * 0xc,1);
                        if (pvVar29 == (void *)0x0) {
                          rcContext::log(param_1,2,"canRemoveVertex: Out of memory \'edges\' (%d).",
                                         iVar53 * 6);
                          pvVar29 = (void *)0x0;
LAB_00102e9c:
                          rcFree(pvVar29);
                          iVar5 = *(int *)(param_4 + 0x28);
                          iVar41 = *(int *)(param_4 + 0x2c);
                          uVar49 = uVar49 + 1;
                          puVar54 = *(ushort **)(param_4 + 8);
                          goto LAB_00101c56;
                        }
                        if (0 < *(int *)(param_4 + 0x2c)) {
                          iVar41 = 0;
                          iVar5 = 0;
                          puVar54 = *(ushort **)(param_4 + 8);
                          do {
                            if (0 < iVar51) {
                              lVar15 = 0;
                              do {
                                if (puVar54[lVar15] == 0xffff) {
                                  iVar44 = (int)lVar15;
                                  if ((int)lVar15 == 0) goto LAB_00101e8b;
                                  break;
                                }
                                lVar15 = lVar15 + 1;
                                iVar44 = iVar51;
                              } while (iVar51 != lVar15);
                              puVar22 = puVar54;
                              uVar40 = puVar54[iVar44 + -1];
                              do {
                                while( true ) {
                                  uVar31 = (uint)uVar40;
                                  uVar2 = *puVar22;
                                  if ((uVar4 != uVar2) && (uVar4 != uVar40)) break;
                                  uVar45 = uVar31;
                                  uVar46 = (uint)uVar2;
                                  if ((uVar49 & 0xffff) != uVar31) {
                                    uVar45 = (uint)uVar2;
                                    uVar46 = uVar31;
                                  }
                                  if (0 < iVar41) {
                                    piVar17 = (int *)((long)pvVar29 + 8);
                                    bVar55 = false;
                                    piVar16 = piVar17 + (long)iVar41 * 3;
                                    do {
                                      if (piVar17[-1] == uVar46) {
                                        *piVar17 = *piVar17 + 1;
                                        bVar55 = true;
                                      }
                                      piVar17 = piVar17 + 3;
                                    } while (piVar16 != piVar17);
                                    if (bVar55) break;
                                  }
                                  iVar50 = iVar41 * 3;
                                  puVar22 = puVar22 + 1;
                                  iVar41 = iVar41 + 1;
                                  puVar24 = (uint *)((long)pvVar29 + (long)iVar50 * 4);
                                  *puVar24 = uVar45;
                                  puVar24[1] = uVar46;
                                  puVar24[2] = 1;
                                  uVar40 = uVar2;
                                  if (puVar22 == puVar54 + (long)(iVar44 + -1) + 1)
                                  goto LAB_00101e8b;
                                }
                                puVar22 = puVar22 + 1;
                                uVar40 = uVar2;
                              } while (puVar22 != puVar54 + (long)(iVar44 + -1) + 1);
                            }
LAB_00101e8b:
                            iVar5 = iVar5 + 1;
                            puVar54 = puVar54 + iVar51 * 2;
                          } while (iVar5 < *(int *)(param_4 + 0x2c));
                          if (0 < iVar41) {
                            piVar17 = (int *)((long)pvVar29 + 8);
                            piVar16 = piVar17 + (long)iVar41 * 3;
                            iVar5 = 0;
                            do {
                              iVar41 = *piVar17;
                              piVar17 = piVar17 + 3;
                              iVar5 = iVar5 + (uint)(iVar41 < 2);
                            } while (piVar16 != piVar17);
                            if (2 < iVar5) goto LAB_00102e9c;
                          }
                        }
                        rcFree(pvVar29);
                        iVar5 = *(int *)(param_4 + 0x34);
                        if (*(int *)(param_4 + 0x2c) < 1) {
                          lVar42 = 0;
                          lVar15 = 0;
                          iVar41 = 0;
                        }
                        else {
                          iVar41 = 0;
                          iVar51 = 0;
                          puVar54 = *(ushort **)(param_4 + 8);
                          do {
                            if (0 < iVar5) {
                              lVar15 = 0;
                              do {
                                if (puVar54[lVar15] == 0xffff) {
                                  iVar44 = (int)lVar15;
                                  if ((int)lVar15 == 0) goto LAB_00101f7c;
                                  break;
                                }
                                lVar15 = lVar15 + 1;
                                iVar44 = iVar5;
                              } while (lVar15 != iVar5);
                              puVar22 = puVar54;
                              do {
                                uVar40 = *puVar22;
                                puVar22 = puVar22 + 1;
                                iVar41 = iVar41 + (uint)(uVar4 == uVar40);
                              } while (puVar54 + iVar44 != puVar22);
                            }
LAB_00101f7c:
                            iVar51 = iVar51 + 1;
                            puVar54 = puVar54 + iVar5 * 2;
                          } while (*(int *)(param_4 + 0x2c) != iVar51);
                          lVar15 = (long)iVar41 * (long)iVar5;
                          lVar42 = lVar15 * 0x10;
                        }
                        local_b0 = (long)iVar5;
                        piVar16 = (int *)rcAlloc(lVar42,1);
                        if (piVar16 != (int *)0x0) {
                          lVar15 = lVar15 << 2;
                          piVar17 = (int *)rcAlloc(lVar15,1);
                          if (piVar17 == (int *)0x0) {
                            rcContext::log(param_1,2,"removeVertex: Out of memory \'hole\' (%d).",
                                           iVar5 * iVar41);
                            rcFree((void *)0x0);
                            rcFree(piVar16);
                            goto LAB_00102fdf;
                          }
                          piVar18 = (int *)rcAlloc(lVar15,1);
                          if (piVar18 != (int *)0x0) {
                            piVar19 = (int *)rcAlloc(lVar15,1);
                            if (piVar19 != (int *)0x0) {
                              iVar51 = 0;
                              iVar44 = 0;
                              iVar41 = *(int *)(param_4 + 0x2c);
                              if (0 < iVar41) {
                                do {
                                  lVar15 = *(long *)(param_4 + 8);
                                  puVar54 = (ushort *)(lVar15 + (long)(iVar5 * iVar44 * 2) * 2);
                                  lVar42 = 0;
                                  if (iVar5 < 1) {
LAB_001020e7:
                                    iVar41 = *(int *)(param_4 + 0x2c);
                                    iVar44 = iVar44 + 1;
                                  }
                                  else {
                                    do {
                                      if (puVar54[lVar42] == 0xffff) {
                                        iVar41 = (int)lVar42;
                                        if ((int)lVar42 == 0) goto LAB_001020e7;
                                        break;
                                      }
                                      lVar42 = lVar42 + 1;
                                      iVar41 = iVar5;
                                    } while (lVar42 != local_b0);
                                    bVar55 = false;
                                    puVar22 = puVar54;
                                    do {
                                      if (*puVar22 == uVar4) {
                                        bVar55 = true;
                                      }
                                      puVar22 = puVar22 + 1;
                                    } while (puVar54 + iVar41 != puVar22);
                                    if (!bVar55) goto LAB_001020e7;
                                    lVar42 = (long)iVar44;
                                    iVar50 = iVar41 + -1;
                                    lVar26 = 0;
                                    do {
                                      lVar30 = (long)iVar50;
                                      iVar50 = (int)lVar26;
                                      if ((uVar4 != puVar54[lVar26]) &&
                                         (uVar40 = puVar54[lVar30], uVar4 != uVar40)) {
                                        iVar53 = iVar51 * 4;
                                        iVar51 = iVar51 + 1;
                                        puVar24 = (uint *)(piVar16 + iVar53);
                                        puVar24[1] = (uint)puVar54[lVar26];
                                        lVar30 = *(long *)(param_4 + 0x10);
                                        *puVar24 = (uint)uVar40;
                                        puVar24[2] = (uint)*(ushort *)(lVar30 + lVar42 * 2);
                                        puVar24[3] = (uint)*(byte *)(*(long *)(param_4 + 0x20) +
                                                                    lVar42);
                                      }
                                      lVar26 = lVar26 + 1;
                                    } while (lVar26 != iVar41);
                                    puVar22 = (ushort *)
                                              (lVar15 + (long)((*(int *)(param_4 + 0x2c) + -1) *
                                                               iVar5 * 2) * 2);
                                    if (puVar54 != puVar22) {
                                      puVar54 = (ushort *)memcpy(puVar54,puVar22,local_b0 * 2);
                                    }
                                    memset(puVar54 + local_b0,0xff,local_b0 * 2);
                                    iVar41 = *(int *)(param_4 + 0x2c);
                                    *(undefined2 *)(*(long *)(param_4 + 0x10) + lVar42 * 2) =
                                         *(undefined2 *)
                                          (*(long *)(param_4 + 0x10) + -2 + (long)iVar41 * 2);
                                    *(undefined1 *)(*(long *)(param_4 + 0x20) + lVar42) =
                                         *(undefined1 *)
                                          (*(long *)(param_4 + 0x20) + -1 + (long)iVar41);
                                    iVar41 = *(int *)(param_4 + 0x2c) + -1;
                                    *(int *)(param_4 + 0x2c) = iVar41;
                                  }
                                } while (iVar44 < iVar41);
                                iVar44 = *(int *)(param_4 + 0x28);
                                iVar50 = iVar44 + -1;
                                if ((int)(uVar49 & 0xffff) < iVar50) goto LAB_0010210f;
LAB_0010214c:
                                *(int *)(param_4 + 0x28) = iVar50;
                                if (0 < iVar41) {
                                  iVar44 = 0;
                                  puVar54 = *(ushort **)(param_4 + 8);
                                  do {
                                    if (0 < iVar5) goto LAB_00102192;
                                    iVar44 = iVar44 + 1;
                                    puVar54 = puVar54 + iVar5 * 2;
                                  } while (iVar41 != iVar44);
                                }
                                goto LAB_001021fa;
                              }
                              iVar44 = *(int *)(param_4 + 0x28);
                              iVar50 = iVar44 + -1;
                              if ((int)(uVar49 & 0xffff) < iVar50) {
LAB_0010210f:
                                uVar31 = uVar49 & 0xffff;
                                lVar15 = *(long *)param_4;
                                puVar20 = (undefined4 *)(lVar15 + (long)(int)(uVar31 * 3 + 3) * 2);
                                do {
                                  puVar21 = (undefined4 *)((long)puVar20 + 6);
                                  *(undefined4 *)((long)puVar20 + -6) = *puVar20;
                                  *(undefined2 *)((long)puVar20 + -2) = *(undefined2 *)(puVar20 + 1)
                                  ;
                                  puVar20 = puVar21;
                                } while (puVar21 !=
                                         (undefined4 *)
                                         (lVar15 + 0xc +
                                         ((ulong)((iVar44 + -2) - uVar31) + (long)(int)uVar31) * 6))
                                ;
                                goto LAB_0010214c;
                              }
                              *(int *)(param_4 + 0x28) = iVar50;
                              goto LAB_0010305b;
                            }
                            rcContext::log(param_1,2,"removeVertex: Out of memory \'harea\' (%d).",
                                           iVar5 * iVar41);
                            piVar19 = (int *)0x0;
                            goto LAB_001033da;
                          }
                          rcContext::log(param_1,2,"removeVertex: Out of memory \'hreg\' (%d).",
                                         iVar5 * iVar41);
                          piVar18 = (int *)0x0;
                          goto LAB_0010314b;
                        }
                        rcContext::log(param_1,2,"removeVertex: Out of memory \'edges\' (%d).",
                                       iVar5 * iVar41 * 4);
                        rcFree((void *)0x0);
                        goto LAB_00102fdf;
                      }
LAB_00102aa2:
                      uVar7 = buildMeshAdjacency(puVar54,iVar41,iVar5,param_3);
                      if ((char)uVar7 != '\0') {
                        iVar5 = *(int *)(param_4 + 0x2c);
                        if (0 < *(int *)(param_4 + 0x58)) {
                          uVar49 = *(uint *)(param_2 + 0x2c);
                          uVar31 = *(uint *)(param_2 + 0x30);
                          if (0 < iVar5) {
                            iVar41 = 0;
                            puVar54 = *(ushort **)(param_4 + 8);
                            do {
                              if (0 < param_3) goto LAB_00102b11;
                              iVar41 = iVar41 + 1;
                              puVar54 = puVar54 + lVar32 * 2;
                            } while (iVar41 != iVar5);
                          }
                        }
                        goto LAB_00102c23;
                      }
                      rcContext::log(param_1,3,"rcBuildPolyMesh: Adjacency failed.");
                    }
                    goto LAB_00101ba5;
                  }
                  uVar7 = 0;
                  rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'tris\' (%d).",
                                 iVar41 * 3);
                  goto LAB_00101bb1;
                }
                uVar7 = 0;
                rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'indices\' (%d).",iVar41);
                goto LAB_00101bbe;
              }
              uVar7 = 0;
              rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'firstVert\' (%d).",0x1000);
              goto LAB_00101bcb;
            }
            uVar7 = 0;
            rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'nextVert\' (%d).",iVar51);
            goto LAB_00101bd8;
          }
          rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'mesh.areas\' (%d).",local_90);
        }
      }
    }
  }
  uVar7 = 0;
  goto LAB_00101ab9;
LAB_00102192:
  do {
    lVar15 = 0;
    do {
      if (puVar54[lVar15] == 0xffff) {
        iVar50 = (int)lVar15;
        if ((int)lVar15 == 0) goto LAB_001021df;
        break;
      }
      lVar15 = lVar15 + 1;
      iVar50 = iVar5;
    } while (lVar15 != local_b0);
    puVar22 = puVar54;
    do {
      if (uVar4 < *puVar22) {
        *puVar22 = *puVar22 - 1;
      }
      puVar22 = puVar22 + 1;
    } while (puVar54 + iVar50 != puVar22);
LAB_001021df:
    iVar44 = iVar44 + 1;
    puVar54 = puVar54 + iVar5 * 2;
  } while (iVar41 != iVar44);
LAB_001021fa:
  if (iVar51 < 1) {
    if (iVar51 == 0) {
LAB_0010305b:
      rcFree(piVar19);
      rcFree(piVar18);
      rcFree(piVar17);
      rcFree(piVar16);
      goto LAB_00103093;
    }
  }
  else {
    piVar23 = piVar16;
    do {
      if ((int)(uVar49 & 0xffff) < *piVar23) {
        *piVar23 = *piVar23 + -1;
      }
      if ((int)(uVar49 & 0xffff) < piVar23[1]) {
        piVar23[1] = piVar23[1] + -1;
      }
      piVar23 = piVar23 + 4;
    } while (piVar23 != piVar16 + (long)iVar51 * 4);
  }
  iVar41 = 1;
  *piVar17 = *piVar16;
  *piVar18 = piVar16[2];
  *piVar19 = piVar16[3];
  do {
    if (iVar51 < 1) break;
    bVar55 = false;
    iVar44 = 0;
    do {
      while( true ) {
        lVar15 = (long)(iVar44 * 4);
        iVar50 = piVar16[lVar15];
        iVar53 = piVar16[lVar15 + 3];
        iVar43 = piVar16[lVar15 + 1];
        iVar47 = piVar16[lVar15 + 2];
        if (iVar43 != *piVar17) break;
        if (iVar41 < 1) {
          *piVar17 = iVar50;
          *piVar18 = iVar47;
        }
        else {
          lVar26 = (long)iVar41;
          lVar42 = (long)(iVar41 + -1);
          sVar36 = lVar26 * 4;
          memmove(piVar17 + (lVar26 - lVar42),piVar17 + ((lVar26 + -1) - lVar42),sVar36);
          *piVar17 = iVar50;
          memmove(piVar18 + (lVar26 - lVar42),piVar18 + ((lVar26 + -1) - lVar42),sVar36);
          *piVar18 = iVar47;
          memmove(piVar19 + (lVar26 - lVar42),piVar19 + ((lVar26 + -1) - lVar42),sVar36);
        }
        *piVar19 = iVar53;
LAB_00102300:
        iVar41 = iVar41 + 1;
        iVar51 = iVar51 + -1;
        lVar42 = (long)(iVar51 * 4);
        piVar16[lVar15] = piVar16[lVar42];
        piVar16[lVar15 + 1] = piVar16[lVar42 + 1];
        piVar16[lVar15 + 2] = piVar16[lVar42 + 2];
        bVar55 = true;
        piVar16[lVar15 + 3] = piVar16[lVar42 + 3];
        if (iVar51 <= iVar44) goto LAB_00102342;
      }
      if (iVar50 == piVar17[(long)iVar41 + -1]) {
        piVar17[iVar41] = iVar43;
        piVar18[iVar41] = iVar47;
        piVar19[iVar41] = iVar53;
        goto LAB_00102300;
      }
      iVar44 = iVar44 + 1;
    } while (iVar44 < iVar51);
LAB_00102342:
  } while (bVar55);
  lVar15 = (long)iVar41;
  piVar23 = (int *)rcAlloc(lVar15 * 0xc,1);
  if (piVar23 == (int *)0x0) {
    rcContext::log(param_1,2,"removeVertex: Out of memory \'tris\' (%d).",iVar41 * 3);
    rcFree((void *)0x0);
LAB_001033da:
    rcFree(piVar19);
LAB_0010314b:
    rcFree(piVar18);
    rcFree(piVar17);
    rcFree(piVar16);
  }
  else {
    puVar24 = (uint *)rcAlloc(lVar15 << 4,1);
    if (puVar24 == (uint *)0x0) {
      bVar55 = false;
      rcContext::log(param_1,2,"removeVertex: Out of memory \'tverts\' (%d).",iVar41 * 4);
    }
    else {
      piVar25 = (int *)rcAlloc(lVar15 * 4,1);
      if (piVar25 == (int *)0x0) {
        bVar55 = false;
        rcContext::log(param_1,2,"removeVertex: Out of memory \'thole\' (%d).",iVar41);
      }
      else {
        if (0 < iVar41) {
          lVar42 = *(long *)param_4;
          lVar26 = 0;
          puVar34 = puVar24;
          do {
            lVar30 = (long)(piVar17[lVar26] * 3);
            *puVar34 = (uint)*(ushort *)(lVar42 + lVar30 * 2);
            uVar4 = *(ushort *)(lVar42 + 2 + lVar30 * 2);
            uVar40 = *(ushort *)(lVar42 + 4 + lVar30 * 2);
            puVar34[3] = 0;
            puVar34[1] = (uint)uVar4;
            puVar34[2] = (uint)uVar40;
            piVar25[lVar26] = (int)lVar26;
            lVar26 = lVar26 + 1;
            puVar34 = puVar34 + 4;
          } while (lVar15 != lVar26);
        }
        iVar41 = triangulate(iVar41,(int *)puVar24,piVar25,piVar23);
        if (iVar41 < 0) {
          iVar41 = -iVar41;
          rcContext::log(param_1,2,"removeVertex: triangulate() returned bad results.");
        }
        sVar36 = local_b0 * 2;
        puVar54 = (ushort *)rcAlloc((long)(iVar41 + 1) * sVar36,1);
        if (puVar54 == (ushort *)0x0) {
          bVar55 = false;
          rcContext::log(param_1,3,"removeVertex: Out of memory \'polys\' (%d).",
                         iVar5 * (iVar41 + 1));
        }
        else {
          lVar15 = (long)iVar41;
          puVar27 = (undefined2 *)rcAlloc(lVar15 * 2,1);
          if (puVar27 == (undefined2 *)0x0) {
            bVar55 = false;
            rcContext::log(param_1,3,"removeVertex: Out of memory \'pregs\' (%d).",iVar41);
          }
          else {
            puVar28 = (undefined1 *)rcAlloc(lVar15,1);
            if (puVar28 == (undefined1 *)0x0) {
              bVar55 = false;
              rcContext::log(param_1,3,"removeVertex: Out of memory \'pareas\' (%d).",iVar41);
            }
            else {
              memset(puVar54,0xff,(long)(iVar5 * iVar41) * 2);
              if (iVar41 != 0) {
                local_60 = 0;
                piVar37 = piVar23;
                do {
                  iVar51 = *piVar37;
                  iVar44 = piVar37[1];
                  if (iVar51 != iVar44) {
                    iVar50 = piVar37[2];
                    if ((iVar51 != iVar50) && (iVar44 != iVar50)) {
                      lVar42 = (long)(iVar5 * local_60);
                      puVar54[lVar42] = (ushort)piVar17[iVar51];
                      lVar26 = (long)local_60;
                      puVar54[lVar42 + 1] = (ushort)piVar17[iVar44];
                      puVar54[lVar42 + 2] = (ushort)piVar17[iVar50];
                      iVar53 = piVar18[iVar51];
                      iVar43 = 0;
                      if ((iVar53 == piVar18[iVar44]) && (iVar53 == piVar18[iVar50])) {
                        iVar43 = iVar53;
                      }
                      puVar27[lVar26] = (short)iVar43;
                      local_60 = local_60 + 1;
                      puVar28[lVar26] = (char)piVar19[iVar51];
                    }
                  }
                  piVar37 = piVar37 + 3;
                } while (piVar37 != piVar23 + lVar15 * 3);
                if (local_60 != 0) {
                  if (3 < iVar5) {
                    lVar15 = (long)local_60;
                    local_68 = puVar54 + (local_60 + -1) * iVar5;
                    while( true ) {
                      local_60 = (int)lVar15;
                      if (local_60 + -1 < 1) break;
                      local_134 = 0;
                      iVar47 = 0;
                      iVar50 = 0;
                      iVar51 = 0;
                      iVar44 = 0;
                      puVar22 = puVar54;
                      iVar53 = iVar5;
                      iVar43 = 0;
                      do {
                        iVar48 = iVar43 + 1;
                        if (iVar48 < local_60) {
                          puVar1 = *(ushort **)param_4;
                          puVar33 = puVar54 + iVar53;
                          iVar38 = iVar48;
                          do {
                            iVar6 = getPolyMergeValue(puVar22,puVar33,puVar1,&local_48,&local_44,
                                                      iVar5);
                            if (iVar47 < iVar6) {
                              iVar47 = iVar6;
                              local_134 = iVar38;
                              iVar51 = local_48;
                              iVar44 = local_44;
                              iVar50 = iVar43;
                            }
                            iVar38 = iVar38 + 1;
                            puVar33 = puVar33 + local_b0;
                          } while (local_60 != iVar38);
                        }
                        puVar22 = puVar22 + local_b0;
                        iVar53 = iVar53 + iVar5;
                        iVar43 = iVar48;
                      } while (local_60 + -1 != iVar48);
                      if (iVar47 < 1) goto LAB_001031e1;
                      puVar22 = puVar54 + iVar5 * local_134;
                      mergePolyVerts(puVar54 + iVar5 * iVar50,puVar22,iVar51,iVar44,
                                     puVar54 + iVar5 * iVar41,iVar5);
                      if (puVar27[iVar50] != puVar27[local_134]) {
                        puVar27[iVar50] = 0;
                      }
                      if (puVar22 != local_68) {
                        memcpy(puVar22,local_68,sVar36);
                      }
                      local_68 = local_68 + -local_b0;
                      puVar27[local_134] = puVar27[lVar15 + -1];
                      lVar42 = lVar15 + -1;
                      lVar15 = lVar15 + -1;
                      puVar28[local_134] = puVar28[lVar42];
                    }
                  }
                  if (0 < local_60) {
LAB_001031e1:
                    iVar51 = 0;
                    iVar41 = *(int *)(param_4 + 0x2c);
                    puVar39 = puVar27;
                    puVar52 = puVar28;
                    do {
                      if (local_90 <= iVar41) break;
                      pvVar29 = memset((void *)(*(long *)(param_4 + 8) +
                                               (long)(iVar5 * iVar41 * 2) * 2),0xff,local_b0 << 2);
                      if (0 < iVar5) {
                        sVar10 = 0;
                        do {
                          *(undefined2 *)((long)pvVar29 + sVar10) =
                               *(undefined2 *)((long)puVar54 + sVar10 + (long)iVar51 * 2);
                          sVar10 = sVar10 + 2;
                        } while (sVar10 != sVar36);
                      }
                      iVar41 = *(int *)(param_4 + 0x2c);
                      *(undefined2 *)(*(long *)(param_4 + 0x10) + (long)iVar41 * 2) = *puVar39;
                      *(undefined1 *)(*(long *)(param_4 + 0x20) + (long)iVar41) = *puVar52;
                      iVar41 = *(int *)(param_4 + 0x2c) + 1;
                      *(int *)(param_4 + 0x2c) = iVar41;
                      if (local_90 < iVar41) {
                        bVar55 = false;
                        rcContext::log(param_1,3,"removeVertex: Too many polygons %d (max:%d).");
                        goto LAB_001032eb;
                      }
                      puVar39 = puVar39 + 1;
                      puVar52 = puVar52 + 1;
                      iVar51 = iVar51 + iVar5;
                    } while (puVar39 != puVar27 + local_60);
                  }
                }
              }
              bVar55 = true;
            }
LAB_001032eb:
            rcFree(puVar28);
          }
          rcFree(puVar27);
        }
        rcFree(puVar54);
      }
      rcFree(piVar25);
    }
    rcFree(puVar24);
    rcFree(piVar23);
    rcFree(piVar19);
    rcFree(piVar18);
    rcFree(piVar17);
    rcFree(piVar16);
    if (bVar55) {
LAB_00103093:
      iVar5 = *(int *)(param_4 + 0x28);
      if (iVar5 <= (int)uVar49) {
        iVar41 = *(int *)(param_4 + 0x2c);
        puVar54 = *(ushort **)(param_4 + 8);
        goto LAB_00102aa2;
      }
      do {
        *(undefined1 *)((long)__s + lVar9) = *(undefined1 *)((long)__s + lVar9 + 1);
        iVar5 = *(int *)(param_4 + 0x28);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar5);
      iVar41 = *(int *)(param_4 + 0x2c);
      puVar54 = *(ushort **)(param_4 + 8);
LAB_00101c56:
      if (iVar5 <= (int)uVar49) goto LAB_00102aa2;
      goto LAB_00101c5f;
    }
  }
LAB_00102fdf:
  rcContext::log(param_1,3,"rcBuildPolyMesh: Failed to remove edge vertex %d.",uVar49);
  goto LAB_00101ba5;
LAB_00102b11:
  do {
    puVar22 = puVar54 + lVar32;
    lVar9 = 1;
    do {
      uVar4 = puVar54[lVar9 + -1];
      if (uVar4 == 0xffff) break;
      if (*puVar22 == 0xffff) {
        if ((param_3 <= (int)lVar9) || (uVar40 = puVar54[lVar9], uVar40 == 0xffff)) {
          uVar40 = *puVar54;
        }
        puVar33 = (ushort *)(*(long *)param_4 + (long)(int)((uint)uVar4 + (uint)uVar4 * 2) * 2);
        puVar1 = (ushort *)(*(long *)param_4 + (long)(int)((uint)uVar40 + (uint)uVar40 * 2) * 2);
        uVar4 = *puVar33;
        if ((uVar4 == 0) && (*puVar1 == 0)) {
          *puVar22 = 0x8000;
        }
        else {
          uVar40 = puVar33[2];
          if ((uVar40 == uVar31) && (puVar1[2] == uVar31)) {
            *puVar22 = 0x8001;
          }
          else if ((uVar4 == uVar49) && (*puVar1 == uVar49)) {
            *puVar22 = 0x8002;
          }
          else if ((uVar40 == 0) && (puVar1[2] == 0)) {
            *puVar22 = 0x8003;
          }
        }
      }
      puVar22 = puVar22 + 1;
      bVar55 = lVar32 != lVar9;
      lVar9 = lVar9 + 1;
    } while (bVar55);
    iVar41 = iVar41 + 1;
    puVar54 = puVar54 + lVar32 * 2;
  } while (iVar41 != iVar5);
LAB_00102c23:
  pvVar29 = (void *)rcAlloc((long)iVar5 * 2);
  *(void **)(param_4 + 0x18) = pvVar29;
  if (pvVar29 == (void *)0x0) {
    rcContext::log(param_1,3,"rcBuildPolyMesh: Out of memory \'mesh.flags\' (%d).",
                   *(undefined4 *)(param_4 + 0x2c));
LAB_00101ba5:
    uVar7 = 0;
  }
  else {
    memset(pvVar29,0,(long)*(int *)(param_4 + 0x2c) * 2);
    if (0xffff < *(int *)(param_4 + 0x28)) {
      rcContext::log(param_1,3,
                     "rcBuildPolyMesh: The resulting mesh has too many vertices %d (max %d). Data can be corrupted."
                     ,*(int *)(param_4 + 0x28),0xffff);
    }
    if (0xffff < *(int *)(param_4 + 0x2c)) {
      rcContext::log(param_1,3,
                     "rcBuildPolyMesh: The resulting mesh has too many polygons %d (max %d). Data can be corrupted."
                     ,*(int *)(param_4 + 0x2c),0xffff);
    }
  }
  rcFree(__s_02);
LAB_00101bb1:
  rcFree(piVar13);
LAB_00101bbe:
  rcFree(piVar12);
LAB_00101bcb:
  rcFree(__s_01);
LAB_00101bd8:
  rcFree(__s_00);
LAB_00101ab9:
  rcFree(__s);
LAB_00101a45:
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0xb);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* rcMergePolyMeshes(rcContext*, rcPolyMesh**, int, rcPolyMesh&) */

char rcMergePolyMeshes(rcContext *param_1,rcPolyMesh **param_2,int param_3,rcPolyMesh *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  rcPolyMesh *prVar7;
  ushort *puVar8;
  bool bVar9;
  size_t __n;
  short sVar10;
  undefined2 uVar11;
  long lVar12;
  size_t __n_00;
  void *pvVar13;
  int *__s;
  int *__s_00;
  short sVar14;
  short sVar15;
  rcPolyMesh **pprVar16;
  int iVar17;
  long lVar18;
  ushort uVar19;
  int iVar20;
  short *psVar21;
  ulong uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  long local_68;
  char local_4a;
  
  bVar9 = param_3 == 0 || param_2 == (rcPolyMesh **)0x0;
  local_4a = bVar9;
  if (param_3 != 0 && param_2 != (rcPolyMesh **)0x0) {
    if ((param_1[9] != (rcContext)0x0) &&
       (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
      (**(code **)(*(long *)param_1 + 0x28))(param_1,0xc);
    }
    prVar7 = *param_2;
    uVar5 = *(undefined4 *)(prVar7 + 0x34);
    *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(prVar7 + 0x50);
    uVar3 = *(undefined4 *)(prVar7 + 0x54);
    *(undefined4 *)(param_4 + 0x34) = uVar5;
    *(undefined4 *)(param_4 + 0x54) = uVar3;
    fVar29 = *(float *)(prVar7 + 0x38);
    *(float *)(param_4 + 0x38) = fVar29;
    fVar30 = *(float *)(prVar7 + 0x3c);
    *(float *)(param_4 + 0x3c) = fVar30;
    fVar26 = *(float *)(prVar7 + 0x40);
    *(float *)(param_4 + 0x40) = fVar26;
    fVar25 = *(float *)(prVar7 + 0x44);
    *(float *)(param_4 + 0x44) = fVar25;
    fVar27 = *(float *)(prVar7 + 0x48);
    *(float *)(param_4 + 0x48) = fVar27;
    fVar24 = *(float *)(prVar7 + 0x4c);
    *(float *)(param_4 + 0x4c) = fVar24;
    if (param_3 < 1) {
      lVar12 = 0;
      iVar17 = 0;
      iVar20 = 0;
      iVar23 = 0;
      local_68 = 0;
    }
    else {
      iVar17 = 0;
      iVar20 = 0;
      iVar23 = 0;
      pprVar16 = param_2;
      do {
        prVar7 = *pprVar16;
        if (*(float *)(prVar7 + 0x38) <= fVar29) {
          fVar29 = *(float *)(prVar7 + 0x38);
        }
        iVar6 = *(int *)(prVar7 + 0x28);
        *(float *)(param_4 + 0x38) = fVar29;
        if (*(float *)(prVar7 + 0x3c) <= fVar30) {
          fVar30 = *(float *)(prVar7 + 0x3c);
        }
        if (iVar17 < iVar6) {
          iVar17 = iVar6;
        }
        pprVar16 = pprVar16 + 1;
        iVar23 = iVar23 + iVar6;
        iVar20 = iVar20 + *(int *)(prVar7 + 0x2c);
        *(float *)(param_4 + 0x3c) = fVar30;
        if (*(float *)(prVar7 + 0x40) <= fVar26) {
          fVar26 = *(float *)(prVar7 + 0x40);
        }
        *(float *)(param_4 + 0x40) = fVar26;
        if (fVar25 <= *(float *)(prVar7 + 0x44)) {
          fVar25 = *(float *)(prVar7 + 0x44);
        }
        *(float *)(param_4 + 0x44) = fVar25;
        if (fVar27 <= *(float *)(prVar7 + 0x48)) {
          fVar27 = *(float *)(prVar7 + 0x48);
        }
        *(float *)(param_4 + 0x48) = fVar27;
        if (fVar24 <= *(float *)(prVar7 + 0x4c)) {
          fVar24 = *(float *)(prVar7 + 0x4c);
        }
        *(float *)(param_4 + 0x4c) = fVar24;
      } while (pprVar16 != param_2 + param_3);
      local_68 = (long)iVar23;
      lVar12 = local_68 * 6;
    }
    *(undefined4 *)(param_4 + 0x28) = 0;
    lVar12 = rcAlloc(lVar12,0);
    *(long *)param_4 = lVar12;
    if (lVar12 == 0) {
      rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'mesh.verts\' (%d).",iVar23 * 3);
    }
    else {
      __n_00 = (size_t)iVar20;
      *(undefined4 *)(param_4 + 0x2c) = 0;
      pvVar13 = (void *)rcAlloc((long)*(int *)(param_4 + 0x34) * __n_00 * 4,0);
      *(void **)(param_4 + 8) = pvVar13;
      if (pvVar13 == (void *)0x0) {
        rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'mesh.polys\' (%d).",
                       *(int *)(param_4 + 0x34) * iVar20 * 2);
      }
      else {
        memset(pvVar13,0xff,(long)*(int *)(param_4 + 0x34) * __n_00 * 4);
        __n = __n_00 * 2;
        pvVar13 = (void *)rcAlloc(__n);
        *(void **)(param_4 + 0x10) = pvVar13;
        if (pvVar13 == (void *)0x0) {
          rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'mesh.regs\' (%d).",iVar20);
        }
        else {
          memset(pvVar13,0,__n);
          pvVar13 = (void *)rcAlloc(__n_00);
          *(void **)(param_4 + 0x20) = pvVar13;
          if (pvVar13 == (void *)0x0) {
            rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'mesh.areas\' (%d).",iVar20)
            ;
          }
          else {
            memset(pvVar13,0,__n_00);
            pvVar13 = (void *)rcAlloc(__n);
            *(void **)(param_4 + 0x18) = pvVar13;
            if (pvVar13 == (void *)0x0) {
              rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'mesh.flags\' (%d).",
                             iVar20);
            }
            else {
              memset(pvVar13,0,__n);
              __s = (int *)rcAlloc(local_68 << 2);
              if (__s == (int *)0x0) {
                rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'nextVert\' (%d).",
                               iVar23);
              }
              else {
                memset(__s,0,local_68 << 2);
                __s_00 = (int *)rcAlloc(0x4000,1);
                if (__s_00 == (int *)0x0) {
                  rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'firstVert\' (%d).",
                                 0x1000);
                }
                else {
                  memset(__s_00,0xff,0x4000);
                  pvVar13 = (void *)rcAlloc((long)iVar17 * 2);
                  if (pvVar13 == (void *)0x0) {
                    rcContext::log(param_1,3,"rcMergePolyMeshes: Out of memory \'vremap\' (%d).",
                                   iVar17);
                  }
                  else {
                    memset(pvVar13,0,(long)iVar17 * 2);
                    if (0 < param_3) {
                      pprVar16 = param_2 + param_3;
                      uVar28 = _LC46;
                      fVar29 = _LC40;
                      fVar30 = _LC39;
                      uVar31 = _LC42;
                      do {
                        prVar7 = *param_2;
                        fVar26 = *(float *)(param_4 + 0x50);
                        fVar25 = (*(float *)(prVar7 + 0x38) - *(float *)(param_4 + 0x38)) / fVar26 +
                                 fVar30;
                        if ((float)((uint)fVar25 & uVar28) < fVar29) {
                          fVar25 = (float)((uint)((float)(int)fVar25 -
                                                 (float)(-(uint)(fVar25 < (float)(int)fVar25) &
                                                        uVar31)) | ~uVar28 & (uint)fVar25);
                        }
                        sVar14 = (short)(int)fVar25;
                        fVar25 = (*(float *)(prVar7 + 0x40) - *(float *)(param_4 + 0x40)) / fVar26 +
                                 fVar30;
                        if ((float)((uint)fVar25 & uVar28) < fVar29) {
                          fVar25 = (float)((uint)((float)(int)fVar25 -
                                                 (float)(-(uint)(fVar25 < (float)(int)fVar25) &
                                                        uVar31)) | ~uVar28 & (uint)fVar25);
                        }
                        sVar15 = (short)(int)fVar25;
                        fVar25 = (*(float *)(param_4 + 0x44) - *(float *)(prVar7 + 0x44)) / fVar26 +
                                 fVar30;
                        if ((float)((uint)fVar25 & uVar28) < fVar29) {
                          fVar25 = (float)((uint)((float)(int)fVar25 -
                                                 (float)(-(uint)(fVar25 < (float)(int)fVar25) &
                                                        uVar31)) | ~uVar28 & (uint)fVar25);
                        }
                        fVar26 = (*(float *)(param_4 + 0x4c) - *(float *)(prVar7 + 0x4c)) / fVar26 +
                                 fVar30;
                        if ((float)((uint)fVar26 & uVar28) < fVar29) {
                          fVar26 = (float)((uint)((float)(int)fVar26 -
                                                 (float)(-(uint)(fVar26 < (float)(int)fVar26) &
                                                        _LC42)) | ~uVar28 & (uint)fVar26);
                        }
                        if (0 < *(int *)(prVar7 + 0x28)) {
                          puVar8 = *(ushort **)param_4;
                          lVar12 = 0;
                          psVar21 = *(short **)prVar7;
                          do {
                            uVar11 = addVertex(*psVar21 + sVar14,psVar21[1],sVar15 + psVar21[2],
                                               puVar8,__s_00,__s,(int *)(param_4 + 0x28));
                            *(undefined2 *)((long)pvVar13 + lVar12 * 2) = uVar11;
                            lVar12 = lVar12 + 1;
                            psVar21 = psVar21 + 3;
                          } while ((int)lVar12 < *(int *)(prVar7 + 0x28));
                        }
                        if (0 < *(int *)(prVar7 + 0x2c)) {
                          iVar17 = *(int *)(param_4 + 0x2c);
                          uVar22 = (ulong)*(uint *)(param_4 + 0x34);
                          lVar12 = 0;
                          do {
                            lVar1 = *(long *)(param_4 + 8) + (long)(iVar17 * (int)uVar22 * 2) * 2;
                            lVar2 = *(long *)(prVar7 + 8) +
                                    (long)((int)uVar22 * (int)lVar12 * 2) * 2;
                            *(undefined2 *)(*(long *)(param_4 + 0x10) + (long)iVar17 * 2) =
                                 *(undefined2 *)(*(long *)(prVar7 + 0x10) + lVar12 * 2);
                            *(undefined1 *)(*(long *)(param_4 + 0x20) + (long)iVar17) =
                                 *(undefined1 *)(*(long *)(prVar7 + 0x20) + lVar12);
                            iVar17 = *(int *)(param_4 + 0x2c);
                            iVar20 = *(int *)(param_4 + 0x34);
                            uVar22 = (ulong)iVar20;
                            *(undefined2 *)(*(long *)(param_4 + 0x18) + (long)iVar17 * 2) =
                                 *(undefined2 *)(*(long *)(prVar7 + 0x18) + lVar12 * 2);
                            iVar17 = iVar17 + 1;
                            lVar18 = 0;
                            *(int *)(param_4 + 0x2c) = iVar17;
                            if (0 < iVar20) {
                              do {
                                uVar4 = *(ushort *)(lVar2 + lVar18);
                                if (uVar4 == 0xffff) break;
                                *(undefined2 *)(lVar1 + lVar18) =
                                     *(undefined2 *)((long)pvVar13 + (ulong)uVar4 * 2);
                                lVar18 = lVar18 + 2;
                              } while (lVar18 != uVar22 * 2);
                            }
                            if (((sVar14 == 0 || sVar15 == 0) ||
                                 ((short)(int)fVar25 == 0 || (short)(int)fVar26 == 0)) &&
                               (iVar23 = iVar20 * 2, iVar20 < iVar23)) {
                              lVar18 = (long)iVar20;
LAB_00103cac:
                              do {
                                uVar4 = *(ushort *)(lVar2 + lVar18 * 2);
                                if ((ushort)(uVar4 + 0x8000) < 0x7fff) {
                                  uVar19 = uVar4 & 0xf;
                                  sVar10 = (short)(int)fVar25;
                                  if (uVar19 == 2) {
joined_r0x00103d14:
                                    if (sVar10 != 0) goto LAB_00103ca3;
                                  }
                                  else {
                                    if (uVar19 < 3) {
                                      sVar10 = (short)(int)fVar26;
                                      if (uVar19 == 0) {
                                        sVar10 = sVar14;
                                      }
                                      goto joined_r0x00103d14;
                                    }
                                    if (uVar19 != 3) goto LAB_00103ca3;
                                    if (sVar15 != 0) {
                                      lVar18 = lVar18 + 1;
                                      if (iVar23 <= (int)lVar18) break;
                                      goto LAB_00103cac;
                                    }
                                  }
                                  *(ushort *)(lVar1 + lVar18 * 2) = uVar4;
                                }
LAB_00103ca3:
                                lVar18 = lVar18 + 1;
                              } while ((int)lVar18 < iVar23);
                            }
                            lVar12 = lVar12 + 1;
                          } while ((int)lVar12 < *(int *)(prVar7 + 0x2c));
                        }
                        param_2 = param_2 + 1;
                      } while (param_2 != pprVar16);
                    }
                    local_4a = buildMeshAdjacency(*(ushort **)(param_4 + 8),*(int *)(param_4 + 0x2c)
                                                  ,*(int *)(param_4 + 0x28),*(int *)(param_4 + 0x34)
                                                 );
                    if (local_4a == '\0') {
                      rcContext::log(param_1,3,"rcMergePolyMeshes: Adjacency failed.");
                      local_4a = bVar9;
                    }
                    else {
                      if (0xffff < *(int *)(param_4 + 0x28)) {
                        rcContext::log(param_1,3,
                                       "rcMergePolyMeshes: The resulting mesh has too many vertices %d (max %d). Data can be corrupted."
                                       ,*(int *)(param_4 + 0x28),0xffff);
                      }
                      if (0xffff < *(int *)(param_4 + 0x2c)) {
                        rcContext::log(param_1,3,
                                       "rcMergePolyMeshes: The resulting mesh has too many polygons %d (max %d). Data can be corrupted."
                                       ,*(int *)(param_4 + 0x2c),0xffff);
                      }
                    }
                  }
                  rcFree(pvVar13);
                }
                rcFree(__s_00);
              }
              rcFree(__s);
            }
          }
        }
      }
    }
    if ((param_1[9] != (rcContext)0x0) &&
       (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,0xc);
    }
  }
  return local_4a;
}



/* rcCopyPolyMesh(rcContext*, rcPolyMesh const&, rcPolyMesh&) */

undefined8 rcCopyPolyMesh(rcContext *param_1,rcPolyMesh *param_2,rcPolyMesh *param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [16];
  void *pvVar5;
  
  auVar2 = *(undefined1 (*) [16])(param_2 + 0x28);
  auVar4._8_4_ = auVar2._4_4_;
  auVar4._0_8_ = auVar2._0_8_;
  auVar4._12_4_ = auVar2._12_4_;
  *(undefined1 (*) [16])(param_3 + 0x28) = auVar4;
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_3 + 0x58) = uVar3;
  *(undefined4 *)(param_3 + 0x54) = uVar1;
  *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  pvVar5 = (void *)rcAlloc((long)auVar2._0_4_ * 6,0);
  *(void **)param_3 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    rcContext::log(param_1,3,"rcCopyPolyMesh: Out of memory \'dst.verts\' (%d).",
                   *(int *)(param_2 + 0x28) * 3);
  }
  else {
    memcpy(pvVar5,*(void **)param_2,(long)*(int *)(param_2 + 0x28) * 6);
    pvVar5 = (void *)rcAlloc((long)*(int *)(param_2 + 0x2c) * (long)*(int *)(param_2 + 0x34) * 4,0);
    *(void **)(param_3 + 8) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      rcContext::log(param_1,3,"rcCopyPolyMesh: Out of memory \'dst.polys\' (%d).",
                     *(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x34) * 2);
    }
    else {
      memcpy(pvVar5,*(void **)(param_2 + 8),
             (long)*(int *)(param_2 + 0x2c) * (long)*(int *)(param_2 + 0x34) * 4);
      pvVar5 = (void *)rcAlloc((long)*(int *)(param_2 + 0x2c) * 2,0);
      *(void **)(param_3 + 0x10) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        rcContext::log(param_1,3,"rcCopyPolyMesh: Out of memory \'dst.regs\' (%d).",
                       *(undefined4 *)(param_2 + 0x2c));
      }
      else {
        memcpy(pvVar5,*(void **)(param_2 + 0x10),(long)*(int *)(param_2 + 0x2c) * 2);
        pvVar5 = (void *)rcAlloc((long)*(int *)(param_2 + 0x2c),0);
        *(void **)(param_3 + 0x20) = pvVar5;
        if (pvVar5 == (void *)0x0) {
          rcContext::log(param_1,3,"rcCopyPolyMesh: Out of memory \'dst.areas\' (%d).",
                         *(undefined4 *)(param_2 + 0x2c));
        }
        else {
          memcpy(pvVar5,*(void **)(param_2 + 0x20),(long)*(int *)(param_2 + 0x2c));
          pvVar5 = (void *)rcAlloc((long)*(int *)(param_2 + 0x2c) * 2,0);
          *(void **)(param_3 + 0x18) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            memcpy(pvVar5,*(void **)(param_2 + 0x18),(long)*(int *)(param_2 + 0x2c) * 2);
            return 1;
          }
          rcContext::log(param_1,3,"rcCopyPolyMesh: Out of memory \'dst.flags\' (%d).",
                         *(undefined4 *)(param_2 + 0x2c));
        }
      }
    }
  }
  return 0;
}



/* rcContext::doStartTimer(rcTimerLabel) */

void rcContext::doStartTimer(void)

{
  return;
}



/* rcContext::doStopTimer(rcTimerLabel) */

void rcContext::doStopTimer(void)

{
  return;
}

/* bool rotate_array<int, (void*)0>(hb_array_t<int const> const&, int, hb_vector_t<int, false>&)
   [clone .constprop.0] */bool rotate_array<int,(void*)0>(hb_array_t *param_1, int param_2, hb_vector_t *param_3) {
   uint uVar1;
   bool bVar2;
   void *__dest;
   uint uVar3;
   void *__src;
   uint uVar4;
   uint uVar5;
   uVar1 = *(uint*)( param_1 + 8 );
   if (uVar1 == 0) {
      LAB_00100015:bVar2 = true;
   }
 else {
      uVar3 = *(uint*)param_3;
      if (-1 < (int)uVar3) {
         uVar4 = 0;
         if (-1 < (int)uVar1) {
            uVar4 = uVar1;
         }

         uVar5 = uVar3;
         if (uVar4 <= uVar3) {
            LAB_00100053:__dest = *(void**)( param_3 + 8 );
            LAB_00100058:*(uint*)( param_3 + 4 ) = uVar4;
            if (param_2 < 0) {
               uVar4 = (uint)-param_2 % uVar1;
               uVar3 = uVar1 - uVar4;
            }
 else {
               uVar3 = (uint)param_2 % uVar1;
               uVar4 = uVar1 - uVar3;
            }

            __src = *(void**)param_1;
            if (( ulong )(uVar3 * 4) != 0) {
               memcpy(__dest, (void*)( (long)__src + ( (ulong)uVar1 - (long)(int)uVar3 ) * 4 ), ( ulong )(uVar3 * 4));
               __src = *(void**)param_1;
               __dest = *(void**)( param_3 + 8 );
            }

            if (( ulong )(uVar4 * 4) != 0) {
               memcpy((void*)( (long)__dest + (long)(int)uVar3 * 4 ), __src, ( ulong )(uVar4 * 4));
            }

            goto LAB_00100015;
         }

         do {
            uVar5 = ( uVar5 >> 1 ) + 8 + uVar5;
         }
 while ( uVar5 < uVar4 );
         if (uVar5 < 0x40000000) {
            __dest = realloc(*(void**)( param_3 + 8 ), (ulong)uVar5 << 2);
            if (__dest != (void*)0x0) {
               *(void**)( param_3 + 8 ) = __dest;
               *(uint*)param_3 = uVar5;
               goto LAB_00100058;
            }

            uVar3 = *(uint*)param_3;
            if (uVar5 <= uVar3) goto LAB_00100053;
         }

         *(uint*)param_3 = ~uVar3;
      }

      bVar2 = false;
   }

   return bVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* iup_delta_optimize(contour_point_vector_t const&, hb_vector_t<int, false> const&,
   hb_vector_t<int, false> const&, hb_vector_t<bool, false>&, double) */undefined8 iup_delta_optimize(contour_point_vector_t *param_1, hb_vector_t *param_2, hb_vector_t *param_3, hb_vector_t *param_4, double param_5) {
   uint *puVar1;
   undefined1 *__dest;
   float *pfVar2;
   float *pfVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   undefined8 uVar7;
   byte bVar8;
   float fVar9;
   void *__dest_00;
   bool bVar10;
   char cVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   int iVar16;
   int iVar17;
   ulong __n;
   long lVar18;
   int *piVar19;
   void *pvVar20;
   undefined8 uVar21;
   int *__ptr;
   undefined4 *puVar22;
   void *pvVar23;
   void *pvVar24;
   void *pvVar25;
   uint uVar26;
   uint uVar27;
   ulong uVar28;
   undefined *puVar29;
   undefined8 *puVar30;
   size_t sVar31;
   int iVar32;
   int iVar33;
   ulong uVar34;
   undefined8 *puVar35;
   hb_bit_set_t *phVar36;
   hb_bit_set_t *phVar37;
   int iVar38;
   ulong uVar39;
   ulong uVar40;
   undefined8 *puVar41;
   int iVar42;
   int *__src;
   int *__src_00;
   float *pfVar43;
   uint uVar44;
   hb_sparseset_t<hb_bit_set_invertible_t> *phVar45;
   hb_bit_set_t *phVar46;
   undefined8 *puVar47;
   uint uVar48;
   char *pcVar49;
   long in_FS_OFFSET;
   bool bVar50;
   bool bVar51;
   double dVar52;
   uint local_250;
   hb_sparseset_t<hb_bit_set_invertible_t> *local_248;
   hb_sparseset_t<hb_bit_set_invertible_t> *local_230;
   hb_bit_set_t *local_218;
   uint local_200;
   uint local_1c0;
   uint local_1bc;
   int *local_1b8;
   uint local_1b0;
   undefined4 local_1ac;
   int *local_1a8;
   uint local_1a0;
   undefined4 local_19c;
   undefined8 local_198;
   void *local_190;
   undefined8 local_188;
   void *local_180;
   undefined8 local_178;
   void *local_170;
   undefined8 local_168;
   void *local_160;
   undefined8 local_158;
   void *local_150;
   undefined8 local_148;
   undefined8 local_140;
   hb_bit_set_t *local_138;
   undefined8 local_130;
   undefined4 local_128;
   undefined4 local_124;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 local_110;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8;
   long local_f0;
   undefined8 local_e8;
   uint local_d8;
   undefined4 local_d4;
   undefined8 local_d0;
   undefined8 local_c8;
   ulong local_c0;
   undefined8 local_b8;
   long local_b0;
   undefined8 local_a8;
   long local_a0;
   undefined8 local_98;
   hb_bit_set_t *local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   ulong local_48;
   long local_40;
   uVar15 = *(uint*)param_4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)uVar15 < 0) {
      LAB_00102020:uVar21 = 0;
      goto LAB_00101765;
   }

   uVar12 = *(uint*)( param_1 + 4 );
   if ((int)uVar12 < 0) {
      uVar12 = 0;
   }

   if (uVar15 < uVar12) {
      do {
         uVar15 = ( uVar15 >> 1 ) + 8 + uVar15;
      }
 while ( uVar15 < uVar12 );
      pvVar24 = realloc(*(void**)( param_4 + 8 ), (ulong)uVar15);
      if (pvVar24 == (void*)0x0) {
         if (*(uint*)param_4 < uVar15) {
            *(uint*)param_4 = ~*(uint *)param_4;
            goto LAB_00102020;
         }

         goto LAB_00100bfa;
      }

      *(void**)( param_4 + 8 ) = pvVar24;
      *(uint*)param_4 = uVar15;
      uVar15 = *(uint*)( param_4 + 4 );
   }
 else {
      LAB_00100bfa:uVar15 = *(uint*)( param_4 + 4 );
   }

   if (uVar15 < uVar12) {
      memset((void*)( (ulong)uVar15 + *(long*)( param_4 + 8 ) ), 0, ( ulong )(uVar12 - uVar15));
   }

   uVar15 = 0xfffffffc;
   uVar44 = 0;
   __ptr = (int*)0x0;
   *(uint*)( param_4 + 4 ) = uVar12;
   uVar14 = *(uint*)( param_1 + 4 );
   if (uVar14 == 0) {
      LAB_00100c30:uVar39 = 0;
      uVar48 = 0;
      pcVar49 = (char*)( *(long*)( param_1 + 8 ) + 9 );
      do {
         if (*pcVar49 != '\0') {
            uVar26 = (int)uVar39 + 1;
            piVar19 = __ptr;
            uVar27 = uVar44;
            if ((int)uVar44 <= (int)uVar39) {
               if ((int)uVar44 < 0) {
                  LAB_00102034:__hb_CrapPool = __hb_NullPool;
                  goto LAB_00100c50;
               }

               if (uVar44 < uVar26) {
                  do {
                     uVar27 = ( uVar27 >> 1 ) + 8 + uVar27;
                  }
 while ( uVar27 < uVar26 );
                  if (( 0x3fffffff < uVar27 ) || ( piVar19 = (int*)realloc(__ptr, (ulong)uVar27 << 2) ),piVar19 == (int*)0x0) {
                     uVar44 = ~uVar44;
                     goto LAB_00102034;
                  }

               }

            }

            piVar19[uVar39] = uVar48;
            uVar39 = (ulong)uVar26;
            __ptr = piVar19;
            uVar44 = uVar27;
         }

         LAB_00100c50:uVar48 = uVar48 + 1;
         pcVar49 = pcVar49 + 0xc;
      }
 while ( uVar48 < uVar15 );
      for (; uVar15 < uVar14; uVar15 = uVar15 + 1) {
         LAB_00100c80:uVar27 = (int)uVar39 + 1;
         piVar19 = __ptr;
         uVar48 = uVar44;
         if ((int)uVar39 < (int)uVar44) {
            LAB_00100c8d:piVar19[uVar39] = uVar15;
            uVar39 = (ulong)uVar27;
            __ptr = piVar19;
            uVar44 = uVar48;
         }
 else {
            if (-1 < (int)uVar44) {
               uVar40 = (ulong)uVar44;
               if (uVar44 < uVar27) {
                  do {
                     uVar48 = (int)( uVar40 >> 1 ) + 8 + (int)uVar40;
                     uVar40 = (ulong)uVar48;
                  }
 while ( uVar48 < uVar27 );
                  if (( 0x3fffffff < uVar48 ) || ( piVar19 = (int*)realloc(__ptr, uVar40 << 2) ),piVar19 == (int*)0x0) {
                     uVar44 = ~uVar44;
                     goto LAB_0010193b;
                  }

               }

               goto LAB_00100c8d;
            }

            LAB_0010193b:__hb_CrapPool = __hb_NullPool;
         }

      }

      if ((int)uVar44 < 0) {
         uVar21 = 0;
      }
 else {
         if (__ptr + uVar39 != __ptr) {
            uVar15 = 0;
            piVar19 = __ptr;
            LAB_00100cd0:iVar32 = *piVar19;
            uVar40 = (ulong)uVar15;
            local_1ac = 0;
            local_19c = 0;
            uVar27 = ( iVar32 - uVar15 ) + 1;
            uVar48 = uVar12 - uVar15;
            if (uVar27 < uVar12 - uVar15) {
               uVar48 = uVar27;
            }

            if (uVar12 < uVar15) {
               uVar48 = 0;
            }

            local_1a0 = *(uint*)( param_3 + 4 ) - uVar15;
            if (uVar27 < local_1a0) {
               local_1a0 = uVar27;
            }

            if (*(uint*)( param_3 + 4 ) < uVar15) {
               local_1a0 = 0;
            }

            local_1b0 = *(uint*)( param_2 + 4 ) - uVar15;
            __src_00 = (int*)( *(long*)( param_3 + 8 ) + uVar40 * 4 );
            if (uVar27 < local_1b0) {
               local_1b0 = uVar27;
            }

            if (*(uint*)( param_2 + 4 ) < uVar15) {
               local_1b0 = 0;
            }

            __src = (int*)( uVar40 * 4 + *(long*)( param_2 + 8 ) );
            uVar12 = uVar14 - uVar15;
            if (uVar27 < uVar14 - uVar15) {
               uVar12 = uVar27;
            }

            uVar34 = (ulong)uVar12;
            if (uVar14 < uVar15) {
               uVar34 = 0;
            }

            uVar15 = (uint)uVar34;
            local_1b8 = __src;
            local_1a8 = __src_00;
            if (( ( uVar48 == uVar15 ) && ( uVar48 == local_1b0 ) ) && ( local_1a0 == uVar48 )) {
               if (uVar48 != 0) {
                  __n = (ulong)uVar48;
                  sVar31 = __n * 4;
                  lVar18 = 0;
                  do {
                     if (param_5 < SQRT((double)*(int*)( (long)__src + lVar18 ) * (double)*(int*)( (long)__src + lVar18 ) + (double)*(int*)( (long)__src_00 + lVar18 ) * (double)*(int*)( (long)__src_00 + lVar18 ))) {
                        __dest = (undefined1*)( *(long*)( param_4 + 8 ) + uVar40 );
                        if (uVar15 == 1) goto LAB_001010c0;
                        lVar18 = 1;
                        goto LAB_00100e2d;
                     }

                     lVar18 = lVar18 + 4;
                  }
 while ( sVar31 - lVar18 != 0 );
               }

               goto LAB_001010c8;
            }

            uVar21 = 0;
            goto LAB_00101760;
         }

         LAB_0010175a:uVar21 = 1;
         LAB_00101760:if (uVar44 == 0) goto LAB_00101765;
      }

   }
 else {
      uVar39 = 0;
      do {
         uVar44 = (int)( uVar39 >> 1 ) + 8 + (int)uVar39;
         uVar39 = (ulong)uVar44;
      }
 while ( uVar44 < uVar14 );
      if (( uVar44 < 0x40000000 ) && ( __ptr = (int*)malloc((ulong)uVar44 << 2) ),__ptr != (int*)0x0) {
         if (uVar14 == 4) {
            uVar15 = 0;
            uVar39 = 0;
            goto LAB_00100c80;
         }

         uVar15 = uVar14 - 4;
         goto LAB_00100c30;
      }

      __ptr = (int*)0x0;
      uVar21 = 0;
   }

   free(__ptr);
   LAB_00101765:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar21;
   LAB_00100e2d:if (( __src[lVar18] == *__src ) && ( __src_00[lVar18] == *__src_00 )) goto code_r0x00100e21;
   local_118 = 1;
   pvVar24 = (void*)( *(long*)( param_1 + 8 ) + uVar40 * 0xc );
   local_e8 = 0;
   local_128 = 1;
   local_124 = 1;
   local_120 = 0;
   local_110 = 0;
   local_108 = 0;
   local_100 = 0;
   local_f8 = 0;
   local_f0 = 0;
   uVar12 = uVar15 - 1;
   if (-1 < (int)uVar12) {
      uVar40 = (ulong)uVar12;
      cVar11 = '\0';
      pfVar43 = (float*)( (long)pvVar24 + uVar40 * 0xc );
      phVar45 = (hb_sparseset_t<hb_bit_set_invertible_t>*)0;
      LAB_00100f48:bVar10 = false;
      uVar14 = (uint)uVar40;
      local_248 = (hb_sparseset_t<hb_bit_set_invertible_t>*)( uVar40 & 0xffffffff );
      fVar4 = *pfVar43;
      uVar28 = ( ulong )(uVar12 + uVar14) % uVar34;
      iVar42 = __src[uVar28];
      pfVar2 = (float*)( (long)pvVar24 + uVar28 * 0xc );
      fVar5 = *pfVar2;
      pfVar3 = (float*)( (long)pvVar24 + (long)phVar45 * 0xc );
      iVar17 = __src[(long)phVar45];
      iVar38 = __src[uVar40];
      fVar6 = *pfVar3;
      iVar13 = iVar17;
      fVar9 = fVar5;
      if (fVar6 < fVar5) goto LAB_00100fc2;
      do {
         fVar5 = fVar6;
         iVar13 = iVar42;
         fVar6 = fVar9;
         iVar42 = iVar17;
         LAB_00100fc2:do {
            if (fVar6 != fVar5) {
               if (fVar4 < fVar6) {
                  if (iVar42 != iVar13) {
                     iVar17 = -iVar38;
                     if (0 < iVar38) {
                        iVar17 = iVar38;
                     }

                     if (fVar6 <= fVar4) goto LAB_001011ac;
                     if (param_5 < (double)iVar17) {
                        iVar17 = iVar38 - iVar13;
                        if (iVar17 < 1) {
                           iVar17 = -iVar17;
                        }

                        if (param_5 < (double)iVar17) {
                           bVar51 = (double)iVar13 == (double)iVar38 - param_5;
                           bVar50 = (double)iVar13 < (double)iVar38 - param_5;
                           goto LAB_00101652;
                        }

                     }

                  }

                  goto LAB_00101002;
               }

               if (fVar5 < fVar4) {
                  if (iVar42 != iVar13) {
                     LAB_001011ac:iVar17 = -iVar38;
                     if (0 < iVar38) {
                        iVar17 = iVar38;
                     }

                     if (param_5 < (double)iVar17) {
                        iVar17 = iVar38 - iVar42;
                        if (iVar17 < 1) {
                           iVar17 = -iVar17;
                        }

                        if (param_5 < (double)iVar17) {
                           bVar51 = (double)iVar38 + param_5 == (double)iVar42;
                           bVar50 = (double)iVar38 + param_5 < (double)iVar42;
                           LAB_00101652:if (( !bVar50 && !bVar51 ) != iVar13 < iVar42) goto LAB_00101662;
                        }

                     }

                  }

                  goto LAB_00101002;
               }

               dVar52 = (double)iVar38;
               if (iVar42 < iVar13) {
                  if ((double)iVar42 - param_5 <= dVar52) {
                     LAB_0010172e:if (dVar52 <= (double)iVar13 + param_5) goto LAB_00101002;
                  }

               }
 else if ((double)iVar13 - param_5 <= dVar52) {
                  if (iVar13 < iVar42) {
                     iVar13 = iVar42;
                  }

                  goto LAB_0010172e;
               }

               LAB_00101662:if (cVar11 == '\0') {
                  if (local_118._0_1_ != (hb_bit_set_t)0x0) {
                     local_118 = CONCAT44(0xffffffff, (undefined4)local_118);
                     puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_118, uVar14, true);
                     if (puVar22 != (undefined4*)0x0) {
                        *(ulong*)( puVar22 + ( ulong )(uVar14 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(uVar14 >> 6 & 7) * 2 + 2 ) | 1L << ( (byte)uVar40 & 0x3f );
                        *puVar22 = 0xffffffff;
                     }

                     LAB_001016ef:cVar11 = (char)local_e8;
                  }

               }
 else if (local_118._0_1_ != (hb_bit_set_t)0x0) {
                  puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_118, uVar14, false);
                  if (puVar22 == (undefined4*)0x0) goto LAB_001016ef;
                  local_118 = CONCAT44(0xffffffff, (undefined4)local_118);
                  bVar8 = (byte)uVar40 & 0x3f;
                  *(ulong*)( puVar22 + ( ulong )(uVar14 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(uVar14 >> 6 & 7) * 2 + 2 ) & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
                  *puVar22 = 0xffffffff;
                  cVar11 = (char)local_e8;
               }

               LAB_0010121a:uVar40 = uVar40 - 1;
               pfVar43 = pfVar43 + -3;
               phVar45 = local_248;
               if (-1 < (int)uVar40) goto LAB_00100f48;
               local_138 = (hb_bit_set_t*)CONCAT44(local_138._4_4_, 0xffffffff);
               if (cVar11 == '\0') goto LAB_0010125f;
               local_d8 = 0xffffffff;
               hb_bit_set_t::next((hb_bit_set_t*)&local_118, &local_d8);
               if (local_d8 != 0) goto LAB_001012c0;
               local_d8 = 0xffffffff;
               local_88 = (hb_bit_set_t*)CONCAT44(local_88._4_4_, 0xffffffff);
               cVar11 = hb_bit_set_t::next((hb_bit_set_t*)&local_118, (uint*)&local_88);
               if (cVar11 == '\0') goto LAB_001012c0;
               uVar14 = (uint)local_88;
               goto LAB_001021d8;
            }

            iVar13 = iVar13 - iVar42;
            if (iVar13 < 1) {
               iVar13 = -iVar13;
            }

            if (param_5 < (double)iVar13) {
               iVar42 = -iVar38;
               if (0 < iVar38) {
                  iVar42 = iVar38;
               }

               if (param_5 < (double)iVar42) goto LAB_00101662;
            }

            LAB_00101002:if (bVar10) goto LAB_0010121a;
            iVar38 = __src_00[uVar40];
            fVar5 = pfVar2[1];
            fVar6 = pfVar3[1];
            iVar17 = __src_00[(long)phVar45];
            iVar42 = __src_00[uVar28];
            bVar10 = true;
            fVar4 = pfVar43[1];
            iVar13 = iVar17;
            fVar9 = fVar5;
         }
 while ( fVar6 < fVar5 );
      }
 while ( true );
   }

   local_138 = (hb_bit_set_t*)CONCAT44(local_138._4_4_, 0xffffffff);
   LAB_0010125f:local_218 = (hb_bit_set_t*)&local_118;
   hb_bit_set_t::next(local_218, (uint*)&local_138);
   local_200 = (uint)local_138;
   goto LAB_001012b2;
   code_r0x00100e21:lVar18 = lVar18 + 1;
   if (uVar15 <= (uint)lVar18) goto LAB_001010c0;
   goto LAB_00100e2d;
   LAB_001010c0:*__dest = 1;
   goto LAB_001010c8;
   while (uVar14 = local_200,(uint)local_88 == local_200) {
      LAB_001021d8:local_218 = (hb_bit_set_t*)&local_118;
      local_200 = uVar14 + 1;
      local_d8 = uVar14;
      cVar11 = hb_bit_set_t::next(local_218, (uint*)&local_88);
      if (cVar11 == '\0') break;
   }
;
   LAB_001012b2:if (local_200 == 0xffffffff) {
      uVar14 = uVar15 * 2;
      local_178 = 0;
      local_170 = (void*)0x0;
      local_168 = 0;
      uVar48 = 0;
      if (-1 < (int)uVar14) {
         uVar48 = uVar14;
      }

      local_160 = (void*)0x0;
      local_158 = 0;
      local_150 = (void*)0x0;
      if ((int)uVar14 < 1) {
         local_168 = 0;
         pvVar23 = (void*)0x0;
         pvVar20 = (void*)0x0;
         LAB_001019bf:__dest_00 = local_150;
         uVar40 = ( ulong )(uVar15 * 0xc);
         local_158 = CONCAT44(uVar48, (uint)local_158);
         pvVar25 = (void*)( (long)local_150 + __n * 0xc );
         uVar14 = 0;
         do {
            uVar48 = uVar14;
            memcpy(pvVar20, __src, sVar31);
            memcpy((void*)( (long)pvVar20 + sVar31 ), __src, sVar31);
            memcpy(pvVar23, __src_00, sVar31);
            memcpy((void*)( (long)pvVar23 + sVar31 ), __src_00, sVar31);
            if (uVar40 != 0) {
               memcpy(__dest_00, pvVar24, uVar40);
               memcpy(pvVar25, pvVar24, uVar40);
            }

            uVar14 = uVar48 + 1;
         }
 while ( uVar15 != uVar14 );
         local_148 = (hb_bit_set_t*)0x0;
         local_140 = (void*)0x0;
         local_138 = (hb_bit_set_t*)0x0;
         local_130 = (void*)0x0;
         cVar11 = _iup_contour_optimize_dp((contour_point_vector_t*)&local_158, (hb_vector_t*)&local_178, (hb_vector_t*)&local_168, (hb_set_t*)&local_128, param_5, uVar15, (hb_vector_t*)&local_148, (hb_vector_t*)&local_138);
         if (cVar11 != '\0') {
            iVar42 = local_148._4_4_;
            uVar15 = uVar48 + 2;
            local_c8 = 1;
            local_98 = 0;
            local_d8 = 1;
            local_d4 = 1;
            local_d0 = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_a0 = 0;
            if ((int)uVar12 < local_148._4_4_) {
               local_248 = (hb_sparseset_t<hb_bit_set_invertible_t>*)( (long)(int)uVar12 * 4 );
               uVar12 = 0xffffffff;
               do {
                  pvVar24 = local_130;
                  local_78 = 1;
                  local_48 = 0;
                  local_88 = (hb_bit_set_t*)0x100000001;
                  local_80 = 0;
                  local_70 = 0;
                  local_68 = 0;
                  local_60 = 0;
                  local_58 = 0;
                  local_50 = 0;
                  if ((int)uVar12 < (int)uVar48) {
                     uVar40 = 0;
                     while (true) {
                        uVar34 = (ulong)uVar48 % (ulong)uVar14;
                        if ((char)uVar40 == '\0') {
                           if (local_78._0_1_ != (hb_bit_set_invertible_t)0x0) {
                              local_78 = CONCAT44(0xffffffff, (undefined4)local_78);
                              puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_78, (uint)uVar34, true);
                              if (puVar22 != (undefined4*)0x0) {
                                 *(ulong*)( puVar22 + ( ulong )(( uint )(uVar34 >> 6) & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(( uint )(uVar34 >> 6) & 7) * 2 + 2 ) | 1L << ( (byte)uVar34 & 0x3f );
                                 *puVar22 = 0xffffffff;
                              }

                           }

                        }
 else if (( local_78._0_1_ != (hb_bit_set_invertible_t)0x0 ) && ( puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_78, (uint)uVar34, false) ),puVar22 != (undefined4*)0x0) {
                           local_78 = CONCAT44(0xffffffff, (undefined4)local_78);
                           bVar8 = (byte)uVar34 & 0x3f;
                           *(ulong*)( puVar22 + ( ulong )(( uint )(uVar34 >> 6) & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(( uint )(uVar34 >> 6) & 7) * 2 + 2 ) & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
                           *puVar22 = 0xffffffff;
                        }

                        uVar48 = *(uint*)( (long)pvVar24 + (long)(int)uVar48 * 4 );
                        if ((int)uVar48 <= (int)uVar12) break;
                        uVar40 = local_48 & 0xff;
                     }
;
                  }

                  if (uVar12 == uVar48) {
                     iVar17 = 0;
                     if (-1 < (int)uVar12) {
                        iVar17 = *(int*)( (long)local_140 + (long)(int)uVar12 * 4 );
                     }

                     uVar48 = *(int*)( (long)local_140 + (long)local_248 ) - iVar17;
                     if (uVar48 <= uVar15) {
                        hb_bit_set_invertible_t::set((hb_bit_set_invertible_t*)&local_c8, (hb_bit_set_invertible_t*)&local_78);
                        uVar15 = uVar48;
                     }

                  }

                  uVar12 = uVar12 + 1;
                  hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_88);
                  local_248 = (hb_sparseset_t<hb_bit_set_invertible_t>*)( (long)local_248 + 4 );
                  uVar48 = uVar14 + uVar12;
               }
 while ( (int)uVar48 < iVar42 );
            }

            uVar40 = 0;
            do {
               uVar15 = ( uint )(uVar40 >> 9) & 0x7fffff;
               if (( (uint)local_c0 < local_b8._4_4_ ) && ( puVar1 = (uint*)( local_b0 + ( local_c0 & 0xffffffff ) * 8 ) ),uVar15 == *puVar1) {
                  uVar15 = puVar1[1];
                  LAB_00101ec2:lVar18 = local_a0 + (ulong)uVar15 * 0x48;
                  if (lVar18 == 0) goto LAB_00101f98;
                  bVar10 = ( 1L << ( (byte)uVar40 & 0x3f ) & *(ulong*)( lVar18 + 8 + ( ulong )(( uint )(uVar40 >> 6) & 7) * 8 ) ) != 0;
               }
 else {
                  iVar17 = 0;
                  iVar42 = local_b8._4_4_ - 1;
                  if (-1 < iVar42) {
                     do {
                        uVar14 = ( uint )(iVar17 + iVar42) >> 1;
                        uVar12 = *(uint*)( local_b0 + (ulong)uVar14 * 8 );
                        if ((int)( uVar15 - uVar12 ) < 0) {
                           iVar42 = uVar14 - 1;
                        }
 else {
                           if (uVar15 == uVar12) {
                              local_c0 = CONCAT44(local_c0._4_4_, uVar14);
                              puVar29 = &_hb_NullPool;
                              if (uVar14 < local_b8._4_4_) {
                                 puVar29 = (undefined*)( local_b0 + (ulong)uVar14 * 8 );
                              }

                              uVar15 = *(uint*)( puVar29 + 4 );
                              goto LAB_00101ec2;
                           }

                           iVar17 = uVar14 + 1;
                        }

                     }
 while ( iVar17 <= iVar42 );
                  }

                  LAB_00101f98:bVar10 = false;
               }

               if ((bool)(char)local_98 != bVar10) {
                  __dest[uVar40] = 1;
               }

               uVar40 = uVar40 + 1;
            }
 while ( __n != uVar40 );
            hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_d8);
            if ((uint)local_138 != 0) {
               free(local_130);
            }

            if ((uint)local_148 != 0) {
               free(local_140);
            }

            if ((uint)local_158 != 0) {
               free(local_150);
            }

            if ((int)local_168 != 0) {
               free(local_160);
            }

            if ((uint)local_178 != 0) {
               free(local_170);
            }

            hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_128);
            goto LAB_001010c8;
         }

         if ((uint)local_138 != 0) {
            free(local_130);
         }

         if ((uint)local_148 != 0) {
            free(local_140);
         }

         iVar32 = (int)local_168;
         local_250 = (uint)local_178;
         if ((uint)local_158 != 0) {
            free(__dest_00);
         }

         if (iVar32 != 0) {
            LAB_00102654:free(local_160);
         }

         if (local_250 == 0) goto LAB_00102292;
      }
 else {
         local_250 = 0;
         do {
            local_250 = local_250 + 8 + ( local_250 >> 1 );
         }
 while ( local_250 < uVar48 );
         if (( local_250 < 0x40000000 ) && ( pvVar20 = malloc((ulong)local_250 << 2) ),pvVar20 != (void*)0x0) {
            local_178 = CONCAT44(uVar48, local_250);
            uVar14 = 0;
            do {
               uVar14 = uVar14 + 8 + ( uVar14 >> 1 );
            }
 while ( uVar14 < uVar48 );
            local_170 = pvVar20;
            if (( uVar14 < 0x40000000 ) && ( pvVar23 = malloc((ulong)uVar14 << 2) ),pvVar23 != (void*)0x0) {
               local_168 = CONCAT44(uVar48, uVar14);
               uVar14 = 0;
               do {
                  uVar14 = uVar14 + 8 + ( uVar14 >> 1 );
               }
 while ( uVar14 < uVar48 );
               local_160 = pvVar23;
               if (( uVar14 < 0x15555556 ) && ( pvVar25 = malloc((ulong)uVar14 * 0xc) ),pvVar25 != (void*)0x0) {
                  local_158 = (ulong)uVar14;
                  local_150 = pvVar25;
                  goto LAB_001019bf;
               }

               goto LAB_00102654;
            }

         }

      }

      free(local_170);
      LAB_00102292:local_230 = (hb_sparseset_t<hb_bit_set_invertible_t>*)&local_128;
      hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t(local_230);
      uVar21 = 0;
      goto LAB_00101760;
   }

   LAB_001012c0:local_218 = (hb_bit_set_t*)&local_118;
   local_138 = (hb_bit_set_t*)CONCAT44(local_138._4_4_, 0xffffffff);
   if ((char)local_e8 == '\0') {
      hb_bit_set_t::previous(local_218, (uint*)&local_138);
      iVar42 = (uint)local_138;
   }
 else {
      local_d8 = 0xffffffff;
      iVar42 = -2;
      hb_bit_set_t::previous(local_218, &local_d8);
      if (local_d8 == 0xfffffffe) {
         local_d8 = 0xffffffff;
         local_88 = (hb_bit_set_t*)CONCAT44(local_88._4_4_, 0xffffffff);
         cVar11 = hb_bit_set_t::previous(local_218, (uint*)&local_88);
         if (cVar11 != '\0') {
            uVar14 = (uint)local_88;
            do {
               local_d8 = uVar14;
               cVar11 = hb_bit_set_t::previous(local_218, (uint*)&local_88);
               if (cVar11 == '\0') break;
               uVar14 = uVar14 - 1;
            }
 while ( (uint)local_88 == uVar14 );
         }

         iVar42 = local_d8 - 1;
      }

   }

   uVar14 = uVar12 - iVar42;
   if ((int)uVar14 < 0) goto LAB_001015ba;
   local_198 = 0;
   local_190 = (void*)0x0;
   uVar27 = 0;
   if (-1 < (int)uVar15) {
      uVar27 = uVar15;
   }

   uVar26 = 0;
   local_188 = 0;
   local_180 = (void*)0x0;
   local_178 = 0;
   local_170 = (void*)0x0;
   local_c8 = 1;
   local_98 = 0;
   local_d8 = 1;
   local_d4 = 1;
   local_d0 = 0;
   local_c0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   if (uVar27 == 0) {
      LAB_0010140b:local_178 = CONCAT44(uVar27, (uint)local_178);
      uVar40 = (ulong)uVar14 % uVar34;
      iVar17 = (int)uVar40;
      pvVar20 = local_170;
      if (( ulong )(uint)(iVar17 * 0xc) != 0) {
         pvVar20 = memcpy(local_170, (void*)( (long)pvVar24 + ( __n - uVar40 ) * 0xc ), ( ulong )(uint)(iVar17 * 0xc));
      }

      uVar28 = ( ulong )(( uVar15 - iVar17 ) * 0xc);
      if (uVar28 != 0) {
         memcpy((void*)( (long)pvVar20 + uVar40 * 0xc ), pvVar24, uVar28);
      }

      bVar10 = rotate_array<int,(void*)0>((hb_array_t*)&local_1b8, uVar14, (hb_vector_t*)&local_198);
      if (bVar10) {
         bVar10 = rotate_array<int,(void*)0>((hb_array_t*)&local_1a8, uVar14, (hb_vector_t*)&local_188);
         uVar21 = _LC0;
         if (!bVar10) goto LAB_00101556;
         if (iVar17 == 0) {
            hb_bit_set_invertible_t::set((hb_bit_set_invertible_t*)&local_c8, (hb_bit_set_invertible_t*)local_218);
         }
 else {
            local_88 = local_218;
            local_80 = _LC0;
            local_80._0_4_ = (uint)_LC0;
            uVar27 = (uint)local_80;
            local_80 = uVar21;
            if ((char)local_e8 == '\0') {
               uVar26 = local_118._4_4_;
               if (local_118._4_4_ == 0xffffffff) {
                  uVar26 = local_f8._4_4_;
                  if (local_f8._4_4_ != 0) {
                     uVar26 = 0;
                     puVar47 = (undefined8*)( local_f0 + 8 );
                     puVar30 = (undefined8*)( local_f0 + 0x48 );
                     puVar41 = puVar30 + (ulong)local_f8._4_4_ * 9;
                     do {
                        iVar38 = *(int*)( puVar30 + -9 );
                        if (iVar38 == -1) {
                           iVar38 = 0;
                           puVar35 = puVar47;
                           do {
                              uVar7 = *puVar35;
                              puVar35 = puVar35 + 1;
                              iVar13 = __popcountdi2(uVar7);
                              iVar38 = iVar38 + iVar13;
                           }
 while ( puVar30 != puVar35 );
                           *(int*)( puVar30 + -9 ) = iVar38;
                        }

                        puVar30 = puVar30 + 9;
                        uVar26 = uVar26 + iVar38;
                        puVar47 = puVar47 + 9;
                     }
 while ( puVar41 != puVar30 );
                  }

                  local_118 = CONCAT44(uVar26, (undefined4)local_118);
               }

               local_80._4_4_ = uVar26 + 1;
               hb_bit_set_t::next(local_218, (uint*)&local_80);
            }
 else {
               uVar26 = local_118._4_4_;
               if (local_118._4_4_ == 0xffffffff) {
                  uVar26 = local_f8._4_4_;
                  if (local_f8._4_4_ != 0) {
                     puVar47 = (undefined8*)( local_f0 + 0x48 );
                     puVar41 = (undefined8*)( local_f0 + 8 );
                     puVar30 = puVar47 + (ulong)local_f8._4_4_ * 9;
                     uVar26 = 0;
                     do {
                        iVar38 = *(int*)( puVar47 + -9 );
                        if (iVar38 == -1) {
                           iVar38 = 0;
                           puVar35 = puVar41;
                           do {
                              uVar7 = *puVar35;
                              puVar35 = puVar35 + 1;
                              iVar13 = __popcountdi2(uVar7);
                              iVar38 = iVar38 + iVar13;
                           }
 while ( puVar47 != puVar35 );
                           *(int*)( puVar47 + -9 ) = iVar38;
                        }

                        puVar47 = puVar47 + 9;
                        uVar26 = uVar26 + iVar38;
                        puVar41 = puVar41 + 9;
                     }
 while ( puVar30 != puVar47 );
                  }

                  local_118 = CONCAT44(uVar26, (undefined4)local_118);
               }

               local_80 = CONCAT44(-uVar26, (uint)local_80);
               local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, 0xffffffff);
               hb_bit_set_t::next(local_218, (uint*)&local_148);
               uVar26 = 0;
               if ((uint)local_148 == 0) {
                  local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, 0xffffffff);
                  local_138 = (hb_bit_set_t*)CONCAT44(local_138._4_4_, 0xffffffff);
                  cVar11 = hb_bit_set_t::next(local_218, (uint*)&local_138);
                  if (cVar11 != '\0') {
                     iVar38 = (uint)local_138;
                     do {
                        local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, iVar38);
                        iVar38 = iVar38 + 1;
                        cVar11 = hb_bit_set_t::next(local_218, (uint*)&local_138);
                        if (cVar11 == '\0') break;
                     }
 while ( (uint)local_138 == iVar38 );
                  }

                  uVar26 = (uint)local_148 + 1;
               }

               local_80._0_4_ = uVar26;
            }

            uVar26 = (uint)local_80;
            phVar46 = local_88;
            local_138 = local_88;
            local_130 = (void*)CONCAT44(local_80._4_4_ + -1 + ( uint )(local_80._4_4_ == 0), (uint)local_80);
            local_88 = local_218;
            local_80 = uVar21;
            if ((char)local_e8 == '\0') {
               if (local_118._4_4_ == 0xffffffff) {
                  uVar27 = local_f8._4_4_;
                  if (local_f8._4_4_ != 0) {
                     uVar27 = 0;
                     puVar47 = (undefined8*)( local_f0 + 8 );
                     puVar30 = (undefined8*)( local_f0 + 0x48 );
                     puVar41 = puVar30 + (ulong)local_f8._4_4_ * 9;
                     do {
                        iVar38 = *(int*)( puVar30 + -9 );
                        if (iVar38 == -1) {
                           iVar38 = 0;
                           puVar35 = puVar47;
                           do {
                              uVar21 = *puVar35;
                              puVar35 = puVar35 + 1;
                              iVar13 = __popcountdi2(uVar21);
                              iVar38 = iVar38 + iVar13;
                           }
 while ( puVar30 != puVar35 );
                           *(int*)( puVar30 + -9 ) = iVar38;
                        }

                        uVar27 = uVar27 + iVar38;
                        puVar47 = puVar47 + 9;
                        puVar30 = puVar30 + 9;
                     }
 while ( puVar41 != puVar30 );
                  }

                  local_118 = CONCAT44(uVar27, (undefined4)local_118);
                  local_80 = CONCAT44(uVar27 + 1, (uint)local_80);
               }
 else {
                  local_80 = CONCAT44(local_118._4_4_ + 1, uVar27);
               }

               hb_bit_set_t::next(local_218, (uint*)&local_80);
            }
 else {
               uVar27 = local_118._4_4_;
               if (local_118._4_4_ == 0xffffffff) {
                  uVar27 = local_f8._4_4_;
                  if (local_f8._4_4_ != 0) {
                     puVar47 = (undefined8*)( local_f0 + 8 );
                     puVar30 = (undefined8*)( local_f0 + 0x48 );
                     puVar41 = puVar30 + (ulong)local_f8._4_4_ * 9;
                     uVar27 = 0;
                     do {
                        iVar38 = *(int*)( puVar30 + -9 );
                        if (iVar38 == -1) {
                           iVar38 = 0;
                           puVar35 = puVar47;
                           do {
                              uVar21 = *puVar35;
                              puVar35 = puVar35 + 1;
                              iVar13 = __popcountdi2(uVar21);
                              iVar38 = iVar38 + iVar13;
                           }
 while ( puVar35 != puVar30 );
                           *(int*)( puVar30 + -9 ) = iVar38;
                        }

                        uVar27 = uVar27 + iVar38;
                        puVar47 = puVar47 + 9;
                        puVar30 = puVar30 + 9;
                     }
 while ( puVar41 != puVar30 );
                  }

                  local_118 = CONCAT44(uVar27, (undefined4)local_118);
               }

               local_80 = CONCAT44(-uVar27, (uint)local_80);
               local_158 = CONCAT44(local_158._4_4_, 0xffffffff);
               hb_bit_set_t::next(local_218, (uint*)&local_158);
               if ((uint)local_158 == 0) {
                  local_158 = CONCAT44(local_158._4_4_, 0xffffffff);
                  local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, 0xffffffff);
                  cVar11 = hb_bit_set_t::next(local_218, (uint*)&local_148);
                  if (cVar11 != '\0') {
                     uVar27 = (uint)local_148;
                     do {
                        local_158 = CONCAT44(local_158._4_4_, uVar27);
                        uVar27 = uVar27 + 1;
                        cVar11 = hb_bit_set_t::next(local_218, (uint*)&local_148);
                        if (cVar11 == '\0') break;
                     }
 while ( (uint)local_148 == uVar27 );
                  }

               }

            }

            phVar36 = local_88;
            while (( uVar26 != 0xffffffff || ( phVar36 != phVar46 ) )) {
               uVar40 = ( ulong )(iVar17 + uVar26) % uVar34;
               if ((char)local_98 == '\0') {
                  if (local_c8._0_1_ != (hb_bit_set_invertible_t)0x0) {
                     local_c8 = CONCAT44(0xffffffff, (undefined4)local_c8);
                     puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_c8, (uint)uVar40, true);
                     if (puVar22 != (undefined4*)0x0) {
                        *(ulong*)( puVar22 + ( ulong )(( uint )(uVar40 >> 6) & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(( uint )(uVar40 >> 6) & 7) * 2 + 2 ) | 1L << ( (byte)uVar40 & 0x3f );
                        *puVar22 = 0xffffffff;
                     }

                  }

               }
 else if (( local_c8._0_1_ != (hb_bit_set_invertible_t)0x0 ) && ( puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_c8, (uint)uVar40, false) ),puVar22 != (undefined4*)0x0) {
                  local_c8 = CONCAT44(0xffffffff, (undefined4)local_c8);
                  bVar8 = (byte)uVar40 & 0x3f;
                  *(ulong*)( puVar22 + ( ulong )(( uint )(uVar40 >> 6) & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(( uint )(uVar40 >> 6) & 7) * 2 + 2 ) & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
                  *puVar22 = 0xffffffff;
               }

               if (phVar46[0x30] == (hb_bit_set_t)0x0) {
                  hb_bit_set_t::next(phVar46, (uint*)&local_130);
                  phVar46 = local_138;
               }
 else {
                  if (uVar26 == 0xfffffffe) {
                     uVar27 = 0xffffffff;
                  }
 else {
                     local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, uVar26);
                     hb_bit_set_t::next(phVar46, (uint*)&local_148);
                     uVar27 = uVar26 + 1;
                     if ((uint)local_148 <= uVar27) {
                        local_88 = (hb_bit_set_t*)CONCAT44(local_88._4_4_, uVar26);
                        cVar11 = hb_bit_set_t::next(phVar46, (uint*)&local_88);
                        if (cVar11 == '\0') {
                           local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, 0xffffffff);
                        }
 else {
                           iVar38 = (uint)local_88;
                           do {
                              local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, iVar38);
                              cVar11 = hb_bit_set_t::next(phVar46, (uint*)&local_88);
                              if (cVar11 == '\0') break;
                              iVar38 = iVar38 + 1;
                           }
 while ( (uint)local_88 == iVar38 );
                        }

                        uVar27 = (uint)local_148 + 1;
                     }

                  }

                  local_130 = (void*)CONCAT44(local_130._4_4_, uVar27);
               }

               uVar26 = (uint)local_130;
               if (local_130._4_4_ != 0) {
                  local_130 = (void*)CONCAT44(local_130._4_4_ + -1, (uint)local_130);
               }

            }
;
         }

         if (local_c8._0_1_ == (hb_bit_set_invertible_t)0x0) goto LAB_00101556;
         local_168 = 0;
         local_160 = (void*)0x0;
         local_158 = 0;
         local_150 = (void*)0x0;
         cVar11 = _iup_contour_optimize_dp((contour_point_vector_t*)&local_178, (hb_vector_t*)&local_198, (hb_vector_t*)&local_188, (hb_set_t*)&local_d8, param_5, uVar15, (hb_vector_t*)&local_168, (hb_vector_t*)&local_158);
         pvVar24 = local_150;
         if (cVar11 != '\0') {
            local_78 = 1;
            local_48 = 0;
            local_88 = (hb_bit_set_t*)0x100000001;
            local_80 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            uVar15 = uVar12;
            do {
               if ((char)local_48 == '\0') {
                  if (local_78._0_1_ != (hb_bit_set_invertible_t)0x0) {
                     local_78 = CONCAT44(0xffffffff, (undefined4)local_78);
                     puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_78, uVar15, true);
                     if (puVar22 != (undefined4*)0x0) {
                        *(ulong*)( puVar22 + ( ulong )(uVar15 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(uVar15 >> 6 & 7) * 2 + 2 ) | 1L << ( (byte)uVar15 & 0x3f );
                        *puVar22 = 0xffffffff;
                     }

                  }

               }
 else if (( local_78._0_1_ != (hb_bit_set_invertible_t)0x0 ) && ( puVar22 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)&local_78, uVar15, false) ),puVar22 != (undefined4*)0x0) {
                  local_78 = CONCAT44(0xffffffff, (undefined4)local_78);
                  bVar8 = (byte)uVar15 & 0x3f;
                  *(ulong*)( puVar22 + ( ulong )(uVar15 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar22 + ( ulong )(uVar15 >> 6 & 7) * 2 + 2 ) & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
                  *puVar22 = 0xffffffff;
               }

               uVar15 = *(uint*)( (long)pvVar24 + (long)(int)uVar15 * 4 );
            }
 while ( uVar15 != 0xffffffff );
            local_1bc = 0xffffffff;
            if ((char)local_48 == '\0') {
               hb_bit_set_t::next((hb_bit_set_t*)&local_78, &local_1bc);
               uVar15 = local_1bc;
            }
 else {
               local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, 0xffffffff);
               hb_bit_set_t::next((hb_bit_set_t*)&local_78, (uint*)&local_148);
               uVar15 = 0;
               if ((uint)local_148 == 0) {
                  local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, 0xffffffff);
                  local_138 = (hb_bit_set_t*)CONCAT44(local_138._4_4_, 0xffffffff);
                  cVar11 = hb_bit_set_t::next((hb_bit_set_t*)&local_78, (uint*)&local_138);
                  if (cVar11 != '\0') {
                     iVar17 = (uint)local_138;
                     do {
                        local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, iVar17);
                        iVar17 = iVar17 + 1;
                        cVar11 = hb_bit_set_t::next((hb_bit_set_t*)&local_78, (uint*)&local_138);
                        if (cVar11 == '\0') break;
                     }
 while ( (uint)local_138 == iVar17 );
                  }

                  uVar15 = (uint)local_148 + 1;
               }

            }

            local_1bc = uVar15;
            local_248 = (hb_sparseset_t<hb_bit_set_invertible_t>*)&local_d8;
            if (local_1bc != 0xffffffff) {
               uVar15 = hb_bit_set_invertible_t::get_population((hb_bit_set_invertible_t*)local_218);
               uVar27 = hb_bit_set_invertible_t::get_population((hb_bit_set_invertible_t*)&local_78);
               uVar21 = _LC0;
               if (uVar15 <= uVar27) {
                  local_130 = (void*)_LC0;
                  iVar17 = local_58._4_4_;
                  local_138 = (hb_bit_set_t*)&local_78;
                  if ((char)local_48 == '\0') {
                     iVar38 = local_78._4_4_;
                     if (local_78._4_4_ == -1) {
                        puVar47 = (undefined8*)( local_50 + 8 );
                        iVar38 = 0;
                        for (iVar13 = 0; iVar17 != iVar13; iVar13 = iVar13 + 1) {
                           iVar33 = *(int*)( puVar47 + -1 );
                           if (iVar33 == -1) {
                              iVar33 = 0;
                              puVar41 = puVar47;
                              do {
                                 uVar7 = *puVar41;
                                 puVar41 = puVar41 + 1;
                                 iVar16 = __popcountdi2(uVar7);
                                 iVar33 = iVar33 + iVar16;
                              }
 while ( puVar41 != puVar47 + 8 );
                              *(int*)( puVar47 + -1 ) = iVar33;
                           }

                           iVar38 = iVar38 + iVar33;
                           puVar47 = puVar47 + 9;
                        }

                        local_78 = CONCAT44(iVar38, (undefined4)local_78);
                     }

                     local_130 = (void*)CONCAT44(iVar38 + 1, (uint)local_130);
                     hb_bit_set_t::next((hb_bit_set_t*)&local_78, (uint*)&local_130);
                  }
 else {
                     iVar38 = local_78._4_4_;
                     if (local_78._4_4_ == -1) {
                        puVar47 = (undefined8*)( local_50 + 8 );
                        iVar38 = 0;
                        for (iVar13 = 0; iVar17 != iVar13; iVar13 = iVar13 + 1) {
                           iVar33 = *(int*)( puVar47 + -1 );
                           if (iVar33 == -1) {
                              iVar33 = 0;
                              puVar41 = puVar47;
                              do {
                                 uVar7 = *puVar41;
                                 puVar41 = puVar41 + 1;
                                 iVar16 = __popcountdi2(uVar7);
                                 iVar33 = iVar33 + iVar16;
                              }
 while ( puVar47 + 8 != puVar41 );
                              *(int*)( puVar47 + -1 ) = iVar33;
                           }

                           iVar38 = iVar38 + iVar33;
                           puVar47 = puVar47 + 9;
                        }

                        local_78 = CONCAT44(iVar38, (undefined4)local_78);
                     }

                     local_130 = (void*)CONCAT44(-iVar38, (uint)local_130);
                     local_1bc = 0xffffffff;
                     hb_bit_set_t::next((hb_bit_set_t*)&local_78, &local_1bc);
                     iVar17 = 0;
                     if (local_1bc == 0) {
                        local_1bc = 0xffffffff;
                        local_148 = (hb_bit_set_t*)CONCAT44(local_148._4_4_, 0xffffffff);
                        cVar11 = hb_bit_set_t::next((hb_bit_set_t*)&local_78, (uint*)&local_148);
                        if (cVar11 != '\0') {
                           uVar15 = (uint)local_148;
                           do {
                              uVar27 = uVar15 + 1;
                              local_1bc = uVar15;
                              cVar11 = hb_bit_set_t::next((hb_bit_set_t*)&local_78, (uint*)&local_148);
                              if (cVar11 == '\0') break;
                              uVar15 = uVar27;
                           }
 while ( (uint)local_148 == uVar27 );
                        }

                        iVar17 = local_1bc + 1;
                     }

                     local_130 = (void*)CONCAT44(local_130._4_4_, iVar17);
                  }

                  if (local_130._4_4_ != 0) {
                     local_130 = (void*)CONCAT44(local_130._4_4_ + -1, (uint)local_130);
                  }

                  local_148 = local_138;
                  local_140 = local_130;
                  local_130 = (void*)uVar21;
                  iVar17 = local_58._4_4_;
                  if ((char)local_48 == '\0') {
                     iVar38 = local_78._4_4_;
                     local_138 = (hb_bit_set_t*)&local_78;
                     if (local_78._4_4_ == -1) {
                        puVar47 = (undefined8*)( local_50 + 8 );
                        iVar38 = 0;
                        for (iVar13 = 0; iVar17 != iVar13; iVar13 = iVar13 + 1) {
                           iVar33 = *(int*)( puVar47 + -1 );
                           if (iVar33 == -1) {
                              iVar33 = 0;
                              puVar41 = puVar47;
                              do {
                                 uVar21 = *puVar41;
                                 puVar41 = puVar41 + 1;
                                 iVar16 = __popcountdi2(uVar21);
                                 iVar33 = iVar33 + iVar16;
                              }
 while ( puVar47 + 8 != puVar41 );
                              *(int*)( puVar47 + -1 ) = iVar33;
                           }

                           iVar38 = iVar38 + iVar33;
                           puVar47 = puVar47 + 9;
                        }

                        local_78 = CONCAT44(iVar38, (undefined4)local_78);
                     }

                     local_130 = (void*)CONCAT44(iVar38 + 1, (uint)local_130);
                     hb_bit_set_t::next((hb_bit_set_t*)&local_78, (uint*)&local_130);
                     phVar36 = local_148;
                     phVar46 = local_138;
                  }
 else {
                     iVar38 = local_78._4_4_;
                     local_138 = (hb_bit_set_t*)&local_78;
                     if (local_78._4_4_ == -1) {
                        puVar47 = (undefined8*)( local_50 + 8 );
                        iVar38 = 0;
                        for (iVar13 = 0; iVar17 != iVar13; iVar13 = iVar13 + 1) {
                           iVar33 = *(int*)( puVar47 + -1 );
                           if (iVar33 == -1) {
                              iVar33 = 0;
                              puVar41 = puVar47;
                              do {
                                 uVar21 = *puVar41;
                                 puVar41 = puVar41 + 1;
                                 iVar16 = __popcountdi2(uVar21);
                                 iVar33 = iVar33 + iVar16;
                              }
 while ( puVar41 != puVar47 + 8 );
                              *(int*)( puVar47 + -1 ) = iVar33;
                           }

                           iVar38 = iVar38 + iVar33;
                           puVar47 = puVar47 + 9;
                        }

                        local_78 = CONCAT44(iVar38, (undefined4)local_78);
                     }

                     local_130 = (void*)CONCAT44(-iVar38, (uint)local_130);
                     local_1c0 = 0xffffffff;
                     hb_bit_set_t::next((hb_bit_set_t*)&local_78, &local_1c0);
                     phVar36 = local_148;
                     phVar46 = local_138;
                     if (local_1c0 == 0) {
                        local_1c0 = 0xffffffff;
                        local_1bc = 0xffffffff;
                        cVar11 = hb_bit_set_t::next((hb_bit_set_t*)&local_78, &local_1bc);
                        phVar36 = local_148;
                        uVar15 = local_1bc;
                        phVar46 = local_138;
                        if (cVar11 != '\0') {
                           do {
                              uVar27 = uVar15 + 1;
                              local_1c0 = uVar15;
                              cVar11 = hb_bit_set_t::next((hb_bit_set_t*)&local_78, &local_1bc);
                              phVar36 = local_148;
                              phVar46 = local_138;
                              if (cVar11 == '\0') break;
                              uVar15 = uVar27;
                           }
 while ( local_1bc == uVar27 );
                        }

                     }

                  }

                  LAB_00103b9e:uVar15 = (uint)local_140;
                  if ((uint)local_140 == 0xffffffff) {
                     if (phVar46 == phVar36) goto LAB_00103c77;
                     __dest[0xffffffff] = 1;
                     if (phVar36[0x30] == (hb_bit_set_t)0x0) goto LAB_00103b71;
                     LAB_00103bc2:local_1bc = (uint)local_140;
                     hb_bit_set_t::next(phVar36, &local_1bc);
                     uVar27 = uVar15 + 1;
                     phVar37 = local_148;
                     if (local_1bc <= uVar27) {
                        local_138 = (hb_bit_set_t*)CONCAT44(local_138._4_4_, uVar15);
                        cVar11 = hb_bit_set_t::next(phVar36, (uint*)&local_138);
                        if (cVar11 == '\0') {
                           local_1bc = 0xffffffff;
                        }
 else {
                           uVar15 = (uint)local_138;
                           do {
                              uVar27 = uVar15 + 1;
                              local_1bc = uVar15;
                              cVar11 = hb_bit_set_t::next(phVar36, (uint*)&local_138);
                              if (cVar11 == '\0') break;
                              uVar15 = uVar27;
                           }
 while ( (uint)local_138 == uVar27 );
                        }

                        uVar27 = local_1bc + 1;
                        phVar37 = local_148;
                     }

                     LAB_00103c6b:local_140 = (void*)CONCAT44(local_140._4_4_, uVar27);
                  }
 else {
                     __dest[(ulong)local_140 & 0xffffffff] = 1;
                     if (phVar36[0x30] != (hb_bit_set_t)0x0) {
                        if ((uint)local_140 != 0xfffffffe) goto LAB_00103bc2;
                        uVar27 = 0xffffffff;
                        phVar37 = phVar36;
                        goto LAB_00103c6b;
                     }

                     LAB_00103b71:hb_bit_set_t::next(phVar36, (uint*)&local_140);
                     phVar37 = local_148;
                  }

                  phVar36 = phVar37;
                  if (local_140._4_4_ != 0) {
                     local_140 = (void*)CONCAT44(local_140._4_4_ + -1, (uint)local_140);
                  }

                  goto LAB_00103b9e;
               }

            }

            hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_88);
         }

         hb_vector_t<int,false>::fini((hb_vector_t<int,false>*)&local_158);
         if ((int)local_168 != 0) {
            free(local_160);
         }

         iVar32 = (uint)local_178;
      }
 else {
         LAB_00101556:iVar32 = (uint)local_178;
      }

      local_248 = (hb_sparseset_t<hb_bit_set_invertible_t>*)&local_d8;
      hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t(local_248);
      if (iVar32 != 0) goto LAB_001020bc;
   }
 else {
      do {
         uVar26 = ( uVar26 >> 1 ) + 8 + uVar26;
      }
 while ( uVar26 < uVar27 );
      if (( uVar26 < 0x15555556 ) && ( pvVar20 = realloc((void*)0x0, (ulong)uVar26 * 0xc) ),pvVar20 != (void*)0x0) {
         local_178 = (ulong)uVar26;
         local_170 = pvVar20;
         goto LAB_0010140b;
      }

      hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_d8);
      LAB_001020bc:free(local_170);
   }

   if ((int)local_188 != 0) {
      free(local_180);
   }

   if ((int)local_198 != 0) {
      free(local_190);
   }

   LAB_001015ba:hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_128);
   uVar21 = 0;
   goto LAB_00101760;
   LAB_00103c77:uVar40 = __n;
   if ((int)uVar48 < 1) {
      if (uVar14 == 0) {
         uVar15 = 0;
         pvVar24 = (void*)0x0;
         pvVar20 = pvVar24;
         LAB_00103cb2:memcpy(pvVar20, __dest, uVar40);
      }
 else {
         pvVar24 = (void*)0x0;
         uVar34 = (ulong)uVar14;
         uVar15 = 0;
         uVar48 = ( iVar42 - uVar12 ) + uVar48;
         sVar31 = (size_t)uVar48;
         pvVar23 = (void*)(long)(int)uVar48;
         pvVar25 = pvVar23;
         LAB_00103fb3:memcpy(pvVar24, __dest + ( __n - (long)pvVar25 ), sVar31);
         pvVar20 = pvVar23;
         uVar40 = uVar34;
         if (uVar14 != 0) goto LAB_00103cb2;
      }

      memcpy(__dest, pvVar24, __n);
      if (uVar15 != 0) goto LAB_00103f62;
   }
 else {
      uVar15 = 0;
      do {
         uVar15 = uVar15 + 8 + ( uVar15 >> 1 );
      }
 while ( uVar15 < uVar48 );
      pvVar24 = malloc((ulong)uVar15);
      if (pvVar24 != (void*)0x0) {
         pvVar20 = pvVar24;
         if (uVar14 != 0) {
            uVar34 = (ulong)uVar14 % (ulong)uVar48;
            uVar14 = (uint)uVar34;
            sVar31 = (size_t)( uVar48 - uVar14 );
            pvVar25 = (void*)(long)(int)( uVar48 - uVar14 );
            pvVar23 = (void*)( (long)pvVar24 + (long)pvVar25 );
            if (sVar31 != 0) goto LAB_00103fb3;
         }

         goto LAB_00103cb2;
      }

      memcpy(__dest, (void*)0x0, __n);
      LAB_00103f62:free(pvVar24);
   }

   hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_88);
   hb_vector_t<int,false>::fini((hb_vector_t<int,false>*)&local_158);
   if ((int)local_168 != 0) {
      free(local_160);
   }

   hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t(local_248);
   if ((uint)local_178 != 0) {
      free(local_170);
   }

   hb_vector_t<int,false>::fini((hb_vector_t<int,false>*)&local_188);
   hb_vector_t<int,false>::fini((hb_vector_t<int,false>*)&local_198);
   hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t((hb_sparseset_t<hb_bit_set_invertible_t>*)&local_128);
   LAB_001010c8:piVar19 = piVar19 + 1;
   uVar15 = iVar32 + 1;
   if (__ptr + uVar39 == piVar19) goto LAB_0010175a;
   uVar14 = *(uint*)( param_1 + 4 );
   uVar12 = *(uint*)( param_4 + 4 );
   goto LAB_00100cd0;
}
/* hb_bit_set_t::resize(unsigned int, bool, bool) */hb_bit_set_t hb_bit_set_t::resize(hb_bit_set_t *this, uint param_1, bool param_2, bool param_3) {
   hb_bit_set_t hVar1;
   void *pvVar2;
   hb_bit_set_t hVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   uint uVar9;
   hVar1 = *this;
   if (hVar1 == (hb_bit_set_t)0x0) {
      return (hb_bit_set_t)0x0;
   }

   uVar4 = *(uint*)( this + 0x24 );
   uVar7 = (ulong)uVar4;
   uVar5 = *(uint*)( this + 0x20 );
   hVar3 = ( hb_bit_set_t )(param_1 == 1 && uVar4 == 0);
   if (param_1 != 1 || uVar4 != 0) {
      if ((int)param_1 < 0) {
         param_1 = 0;
      }

      if ((int)uVar5 < 0) goto LAB_0010418c;
      hVar3 = (hb_bit_set_t)param_3;
      if (param_3) {
         uVar8 = param_1;
         if (param_1 <= uVar4) {
            uVar8 = uVar4;
         }

         if (uVar5 < uVar8) {
            if (uVar8 < 0x38e38e4) goto LAB_00104319;
         }
 else {
            if (uVar5 >> 2 <= uVar8) goto LAB_001040d3;
            if (uVar8 < 0x38e38e4) {
               pvVar2 = *(void**)( this + 0x28 );
               if (uVar8 != 0) goto LAB_00104320;
               free(pvVar2);
               uVar8 = 0;
               pvVar2 = (void*)0x0;
               goto LAB_0010433c;
            }

         }

      }
 else {
         uVar8 = uVar5;
         if (param_1 <= uVar5) goto LAB_001040d3;
         do {
            uVar8 = ( uVar8 >> 1 ) + 8 + uVar8;
         }
 while ( uVar8 < param_1 );
         if (uVar8 < 0x38e38e4) {
            pvVar2 = *(void**)( this + 0x28 );
            goto LAB_00104320;
         }

      }

      LAB_00104187:*(uint*)( this + 0x20 ) = ~uVar5;
      goto LAB_0010418c;
   }

   if ((int)uVar5 < 0) goto LAB_0010418c;
   if (uVar5 == 0) {
      param_1 = 1;
      uVar8 = 1;
      LAB_00104319:pvVar2 = *(void**)( this + 0x28 );
      param_3 = (bool)hVar1;
      LAB_00104320:pvVar2 = realloc(pvVar2, (ulong)uVar8 * 0x48);
      if (pvVar2 == (void*)0x0) {
         uVar5 = *(uint*)( this + 0x20 );
         if (uVar5 < uVar8) goto LAB_00104187;
      }
 else {
         LAB_0010433c:*(void**)( this + 0x28 ) = pvVar2;
         *(uint*)( this + 0x20 ) = uVar8;
      }

      uVar7 = ( ulong ) * (uint*)( this + 0x24 );
      hVar3 = (hb_bit_set_t)param_3;
   }
 else {
      if (7 < uVar5) {
         pvVar2 = *(void**)( this + 0x28 );
         uVar8 = 1;
         param_1 = 1;
         param_3 = (bool)hVar3;
         goto LAB_00104320;
      }

      uVar7 = 0;
      param_1 = 1;
   }

   LAB_001040d3:if (( (uint)uVar7 < param_1 ) && ( param_2 )) {
      uVar4 = ( param_1 - (uint)uVar7 ) * 0x48;
      if (uVar4 != 0) {
         memset((void*)( *(long*)( this + 0x28 ) + uVar7 * 0x48 ), 0, (ulong)uVar4);
      }

   }

   uVar4 = *(uint*)( this + 0x10 );
   *(uint*)( this + 0x24 ) = param_1;
   if (-1 < (int)uVar4) {
      if (hVar3 == (hb_bit_set_t)0x0) {
         uVar5 = uVar4;
         if (uVar4 < param_1) {
            do {
               uVar5 = ( uVar5 >> 1 ) + 8 + uVar5;
            }
 while ( uVar5 < param_1 );
            if (uVar5 < 0x20000000) {
               pvVar2 = *(void**)( this + 0x18 );
               uVar7 = (ulong)uVar5;
               goto LAB_00104384;
            }

            *(uint*)( this + 0x10 ) = ~uVar4;
            uVar5 = *(uint*)( this + 0x20 );
            if ((int)uVar5 < 0) goto LAB_0010418c;
            uVar7 = (ulong)uVar5;
            uVar4 = 0;
            if (-1 < (int)*(uint*)( this + 0x14 )) {
               uVar4 = *(uint*)( this + 0x14 );
            }

            goto LAB_001041fb;
         }

      }
 else {
         uVar8 = *(uint*)( this + 0x14 );
         uVar6 = (ulong)uVar8;
         uVar5 = param_1;
         if (param_1 <= uVar8) {
            uVar5 = uVar8;
         }

         uVar7 = (ulong)uVar5;
         if (uVar4 < uVar5) {
            if (0x1fffffff < uVar5) {
               *(uint*)( this + 0x10 ) = ~uVar4;
               uVar5 = *(uint*)( this + 0x20 );
               if ((int)uVar5 < 0) goto LAB_0010418c;
               uVar6 = 0;
               if (-1 < (int)uVar8) {
                  uVar6 = (ulong)uVar8;
               }

               goto LAB_00104286;
            }

            pvVar2 = *(void**)( this + 0x18 );
            LAB_00104384:uVar4 = (uint)uVar7;
            pvVar2 = realloc(pvVar2, uVar7 << 3);
            if (pvVar2 == (void*)0x0) {
               uVar5 = *(uint*)( this + 0x14 );
               uVar6 = (ulong)uVar5;
               if (uVar4 <= *(uint*)( this + 0x10 )) goto LAB_0010419f;
               *(uint*)( this + 0x10 ) = ~*(uint *)(this + 0x10);
               goto LAB_001043e3;
            }

         }
 else {
            if (uVar4 >> 2 <= uVar5) goto LAB_0010419f;
            pvVar2 = *(void**)( this + 0x18 );
            if (uVar5 != 0) goto LAB_00104384;
            free(pvVar2);
            uVar4 = 0;
            pvVar2 = (void*)0x0;
         }

         *(void**)( this + 0x18 ) = pvVar2;
         *(uint*)( this + 0x10 ) = uVar4;
      }

      uVar6 = ( ulong ) * (uint*)( this + 0x14 );
      LAB_0010419f:if (( (uint)uVar6 < param_1 ) && ( param_2 )) {
         uVar4 = ( param_1 - (uint)uVar6 ) * 8;
         if (uVar4 != 0) {
            memset((void*)( *(long*)( this + 0x18 ) + uVar6 * 8 ), 0, (ulong)uVar4);
         }

      }

      *(uint*)( this + 0x14 ) = param_1;
      return hVar1;
   }

   uVar5 = *(uint*)( this + 0x14 );
   LAB_001043e3:uVar4 = 0;
   if (-1 < (int)uVar5) {
      uVar4 = uVar5;
   }

   uVar6 = (ulong)uVar4;
   uVar5 = *(uint*)( this + 0x20 );
   if ((int)uVar5 < 0) goto LAB_0010418c;
   uVar7 = (ulong)uVar5;
   if (hVar3 == (hb_bit_set_t)0x0) {
      LAB_001041fb:uVar6 = uVar7;
      if (uVar5 < uVar4) {
         do {
            uVar8 = (int)uVar6 + 8 + (int)( uVar6 >> 1 );
            uVar6 = (ulong)uVar8;
         }
 while ( uVar8 < uVar4 );
         goto LAB_00104210;
      }

      LAB_00104244:uVar8 = *(uint*)( this + 0x24 );
   }
 else {
      LAB_00104286:uVar8 = *(uint*)( this + 0x24 );
      uVar4 = (uint)uVar6;
      if (uVar4 <= uVar8) {
         uVar6 = (ulong)uVar8;
      }

      uVar9 = (uint)uVar6;
      if (uVar5 < uVar9) {
         LAB_00104210:if (0x38e38e3 < (uint)uVar6) goto LAB_00104187;
         pvVar2 = *(void**)( this + 0x28 );
         LAB_00104221:uVar8 = (uint)uVar6;
         pvVar2 = realloc(pvVar2, uVar6 * 0x48);
         if (pvVar2 == (void*)0x0) {
            uVar5 = *(uint*)( this + 0x20 );
            if (uVar5 < uVar8) goto LAB_00104187;
         }
 else {
            LAB_0010423d:*(void**)( this + 0x28 ) = pvVar2;
            *(uint*)( this + 0x20 ) = uVar8;
         }

         goto LAB_00104244;
      }

      if (uVar9<uVar5> > 2) {
         if (0x38e38e3 < uVar9) goto LAB_00104187;
         pvVar2 = *(void**)( this + 0x28 );
         if (uVar9 != 0) goto LAB_00104221;
         free(pvVar2);
         uVar8 = 0;
         pvVar2 = (void*)0x0;
         goto LAB_0010423d;
      }

   }

   if (( uVar8 < uVar4 ) && ( param_2 )) {
      uVar5 = ( uVar4 - uVar8 ) * 0x48;
      if (uVar5 != 0) {
         memset((void*)( *(long*)( this + 0x28 ) + (ulong)uVar8 * 0x48 ), 0, (ulong)uVar5);
      }

   }

   *(uint*)( this + 0x24 ) = uVar4;
   LAB_0010418c:*this = (hb_bit_set_t)0x0;
   return (hb_bit_set_t)0x0;
}
/* hb_bit_set_t::next(unsigned int*) const */undefined8 hb_bit_set_t::next(hb_bit_set_t *this, uint *param_1) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   long lVar5;
   long *plVar6;
   undefined8 uVar7;
   ulong uVar8;
   uint uVar9;
   uint uVar10;
   int *piVar11;
   int iVar12;
   uint *puVar13;
   long lVar14;
   int *piVar15;
   uint uVar16;
   uVar3 = *param_1;
   if (uVar3 == 0xffffffff) {
      uVar3 = *(uint*)( this + 0x24 );
      if (uVar3 != 0) {
         uVar8 = 0;
         do {
            piVar15 = (int*)&_hb_NullPool;
            if ((uint)uVar8 < *(uint*)( this + 0x14 )) {
               piVar15 = (int*)( *(long*)( this + 0x18 ) + uVar8 * 8 );
            }

            piVar11 = (int*)&_hb_NullPool;
            if ((uint)piVar15[1] < uVar3) {
               piVar11 = (int*)( *(long*)( this + 0x28 ) + (ulong)(uint)piVar15[1] * 0x48 );
            }

            if (*piVar11 == -1) {
               plVar6 = (long*)( piVar11 + 2 );
               do {
                  if (*plVar6 != 0) goto LAB_0010465f;
                  plVar6 = plVar6 + 1;
               }
 while ( plVar6 != (long*)( piVar11 + 0x12 ) );
            }
 else if (*piVar11 != 0) {
               LAB_0010465f:uVar8 = 0;
               goto LAB_00104667;
            }

            uVar8 = uVar8 + 1;
         }
 while ( uVar3 != uVar8 );
      }

      uVar7 = 0;
      uVar3 = 0xffffffff;
      LAB_001046fa:*param_1 = uVar3;
      return uVar7;
   }

   lVar5 = *(long*)( this + 0x18 );
   uVar9 = *(uint*)( this + 8 );
   uVar2 = *(uint*)( this + 0x14 );
   uVar16 = uVar3 >> 9;
   if (uVar9 < uVar2) {
      puVar13 = (uint*)( lVar5 + (ulong)uVar9 * 8 );
      if (*puVar13 != uVar16) {
         if (-1 < (int)( uVar2 - 1 )) goto LAB_00104691;
         uVar9 = 0;
         goto LAB_001046c4;
      }

      lVar14 = *(long*)( this + 0x28 );
      LAB_001044ea:uVar2 = uVar3 + 1 & 0x1ff;
      if (uVar2 != 0) {
         uVar4 = ( ulong )(uVar2 >> 6);
         lVar1 = lVar14 + (ulong)puVar13[1] * 0x48;
         uVar8 = -(1L << ((byte)(uVar3 + 1) & 0x3f)) & *(ulong*)( lVar1 + 8 + uVar4 * 8 );
         while (true) {
            if (uVar8 != 0) {
               iVar12 = 0;
               for (; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                  iVar12 = iVar12 + 1;
               }

               uVar3 = (int)uVar4 * 0x40 + iVar12;
               *param_1 = uVar3;
               *param_1 = uVar3 + *puVar13 * 0x200;
               return 1;
            }

            uVar4 = uVar4 + 1;
            if ((int)uVar4 == 8) break;
            uVar8 = *(ulong*)( lVar1 + 8 + uVar4 * 8 );
         }
;
      }

      *param_1 = 0xffffffff;
      uVar9 = uVar9 + 1;
   }
 else {
      if ((int)( uVar2 - 1 ) < 0) {
         uVar9 = 0;
      }
 else {
         LAB_00104691:iVar12 = uVar2 - 1;
         uVar9 = 0;
         do {
            while (true) {
               uVar10 = iVar12 + uVar9 >> 1;
               uVar3 = *(uint*)( lVar5 + (ulong)uVar10 * 8 );
               if ((int)( uVar16 - uVar3 ) < 0) break;
               uVar9 = uVar10;
               if (( uVar16 == uVar3 ) || ( uVar9 = uVar10 + 1 ),iVar12 < (int)uVar9) goto LAB_001046bb;
            }
;
            iVar12 = uVar10 - 1;
         }
 while ( (int)uVar9 <= iVar12 );
      }

      LAB_001046bb:if (uVar2 <= uVar9) goto LAB_001045a8;
      LAB_001046c4:*(uint*)( this + 8 ) = uVar9;
      puVar13 = (uint*)( lVar5 + (ulong)uVar9 * 8 );
      lVar14 = *(long*)( this + 0x28 );
      if (*puVar13 == uVar16) {
         uVar3 = *param_1;
         goto LAB_001044ea;
      }

   }

   if (uVar9 < *(uint*)( this + 0x14 )) {
      piVar15 = (int*)( lVar5 + (ulong)uVar9 * 8 );
      do {
         lVar5 = 0;
         do {
            uVar8 = *(ulong*)( lVar14 + (ulong)(uint)piVar15[1] * 0x48 + 8 + lVar5 * 8 );
            if (uVar8 != 0) {
               iVar12 = 0;
               for (; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                  iVar12 = iVar12 + 1;
               }

               *param_1 = (int)lVar5 * 0x40 + *piVar15 * 0x200 + iVar12;
               *(uint*)( this + 8 ) = uVar9;
               return 1;
            }

            lVar5 = lVar5 + 1;
         }
 while ( lVar5 != 8 );
         uVar9 = uVar9 + 1;
         piVar15 = piVar15 + 2;
      }
 while ( uVar9 != *(uint*)( this + 0x14 ) );
   }

   LAB_001045a8:*param_1 = 0xffffffff;
   return 0;
   LAB_00104667:uVar4 = *(ulong*)( piVar11 + uVar8 * 2 + 2 );
   if (uVar4 != 0) {
      iVar12 = 0;
      for (; ( uVar4 & 1 ) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
         iVar12 = iVar12 + 1;
      }

      uVar3 = (int)uVar8 * 0x40;
      uVar8 = (ulong)uVar3;
      iVar12 = uVar3 + iVar12;
      LAB_0010467f:uVar3 = iVar12 + *piVar15 * 0x200;
      uVar7 = CONCAT71(( int7 )(uVar8 >> 8), uVar3 != 0xffffffff);
      goto LAB_001046fa;
   }

   uVar8 = uVar8 + 1;
   iVar12 = -1;
   if (uVar8 == 8) goto LAB_0010467f;
   goto LAB_00104667;
}
/* hb_bit_set_t::previous(unsigned int*) const */undefined4 hb_bit_set_t::previous(hb_bit_set_t *this, uint *param_1) {
   uint *puVar1;
   long lVar2;
   uint uVar3;
   undefined4 uVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
   long *plVar8;
   uint uVar9;
   int *piVar10;
   uint uVar11;
   undefined *puVar12;
   ulong uVar13;
   int iVar14;
   uint *puVar15;
   uint uVar16;
   int *piVar17;
   bool bVar18;
   uVar5 = *param_1;
   if (uVar5 == 0xffffffff) {
      uVar5 = *(uint*)( this + 0x24 ) - 1;
      if (-1 < (int)uVar5) {
         lVar6 = (ulong)uVar5 << 3;
         do {
            piVar17 = (int*)&_hb_NullPool;
            if (uVar5 < *(uint*)( this + 0x14 )) {
               piVar17 = (int*)( *(long*)( this + 0x18 ) + lVar6 );
            }

            piVar10 = (int*)&_hb_NullPool;
            if ((uint)piVar17[1] < *(uint*)( this + 0x24 )) {
               piVar10 = (int*)( *(long*)( this + 0x28 ) + (ulong)(uint)piVar17[1] * 0x48 );
            }

            if (*piVar10 == -1) {
               plVar8 = (long*)( piVar10 + 2 );
               do {
                  if (*plVar8 != 0) goto LAB_0010495f;
                  plVar8 = plVar8 + 1;
               }
 while ( plVar8 != (long*)( piVar10 + 0x12 ) );
            }
 else if (*piVar10 != 0) {
               LAB_0010495f:lVar6 = 7;
               uVar5 = *piVar17 * 0x200;
               goto LAB_00104976;
            }

            uVar5 = uVar5 - 1;
            lVar6 = lVar6 + -8;
         }
 while ( uVar5 != 0xffffffff );
      }

      goto LAB_001048c8;
   }

   uVar16 = *(uint*)( this + 0x14 );
   puVar1 = *(uint**)( this + 0x18 );
   uVar11 = uVar5 >> 9;
   iVar14 = uVar16 - 1;
   if (iVar14 < 0) {
      if (( uVar16 == 0 ) || ( *puVar1 != uVar11 )) goto LAB_001048c8;
      uVar9 = 0;
      puVar15 = puVar1;
      LAB_001047fd:puVar12 = &_hb_NullPool;
      if (puVar15[1] < *(uint*)( this + 0x24 )) {
         puVar12 = (undefined*)( *(long*)( this + 0x28 ) + (ulong)puVar15[1] * 0x48 );
      }

      uVar16 = uVar5 - 1 & 0x1ff;
      if (uVar16 != 0x1ff) {
         uVar11 = uVar16 >> 6;
         uVar13 = 0xffffffffffffffff;
         uVar5 = uVar5 - 1 & 0x3f;
         if (uVar5 != 0x3f) {
            uVar13 = ( 1L << ( (char)uVar5 + 1U & 0x3f ) ) - 1;
         }

         uVar13 = uVar13 & *(ulong*)( puVar12 + (ulong)uVar11 * 8 + 8 );
         if (uVar13 == 0) {
            if (uVar16 >> 6 == 0) goto LAB_001049a1;
            uVar7 = ( ulong )(uVar11 - 1);
            puVar12 = puVar12 + uVar7 * 8;
            while (true) {
               uVar13 = *(ulong*)( puVar12 + 8 );
               uVar11 = (uint)uVar7;
               if (uVar13 != 0) break;
               puVar12 = puVar12 + -8;
               if (uVar11 == 0) goto LAB_001049a1;
               uVar7 = ( ulong )(uVar11 - 1);
            }
;
         }

         lVar6 = 0x3f;
         if (uVar13 != 0) {
            for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {}
         }

         uVar5 = ( uVar11 * 0x40 + 0x3f ) - ( (uint)lVar6 ^ 0x3f );
         *param_1 = uVar5;
         uVar5 = *puVar15 * 0x200 + uVar5;
         goto LAB_001048b9;
      }

      LAB_001049a1:*param_1 = 0xffffffff;
   }
 else {
      uVar9 = 0;
      do {
         while (true) {
            uVar3 = iVar14 + uVar9 >> 1;
            if ((int)( uVar11 - puVar1[(ulong)uVar3 * 2] ) < 0) break;
            uVar9 = uVar3;
            if (( uVar11 == puVar1[(ulong)uVar3 * 2] ) || ( uVar9 = uVar3 + 1 ),iVar14 < (int)uVar9) goto joined_r0x001048d5;
         }
;
         iVar14 = uVar3 - 1;
      }
 while ( (int)uVar9 <= iVar14 );
      joined_r0x001048d5:if (( uVar9 < uVar16 ) && ( puVar15 = puVar1 + (ulong)uVar9 * 2 ),puVar1[(ulong)uVar9 * 2] == uVar11) goto LAB_001047fd;
   }

   if (-1 < (int)( uVar9 - 1 )) {
      lVar6 = 7;
      LAB_001047b0:uVar13 = *(ulong*)( *(long*)( this + 0x28 ) + ( ulong )(puVar1 + ( ulong )(uVar9 - 1) * 2)[1] * 0x48 + 8 + lVar6 * 8 );
      if (uVar13 == 0) goto code_r0x001047ba;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
         for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {}
      }

      iVar14 = ( (int)lVar6 * 0x40 + 0x3f ) - ( (uint)lVar2 ^ 0x3f );
      goto LAB_001047c2;
   }

   LAB_001048c8:*param_1 = 0xffffffff;
   return 0;
   code_r0x001047ba:bVar18 = lVar6 == 0;
   lVar6 = lVar6 + -1;
   if (bVar18) goto code_r0x001047c0;
   goto LAB_001047b0;
   code_r0x001047c0:iVar14 = 0;
   LAB_001047c2:uVar5 = puVar1[( ulong )(uVar9 - 1) * 2] * 0x200 + iVar14;
   uVar4 = 1;
   goto LAB_001047cf;
   while (bVar18 = lVar6 != 0,lVar6 = lVar6 + -1,bVar18) {
      LAB_00104976:uVar13 = *(ulong*)( piVar10 + lVar6 * 2 + 2 );
      if (uVar13 != 0) {
         lVar2 = 0x3f;
         if (uVar13 != 0) {
            for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {}
         }

         iVar14 = (int)lVar6 * 0x40;
         uVar5 = ( uVar5 + 0x3f + iVar14 ) - ( (uint)lVar2 ^ 0x3f );
         uVar4 = CONCAT31(( int3 )((uint)iVar14 >> 8), uVar5 != 0xffffffff);
         goto LAB_001047cf;
      }

   }
;
   LAB_001048b9:uVar4 = 1;
   LAB_001047cf:*param_1 = uVar5;
   return uVar4;
}
/* hb_bit_set_t::page_for(unsigned int, bool) */long hb_bit_set_t::page_for(hb_bit_set_t *this, uint param_1, bool param_2) {
   uint *puVar1;
   undefined4 *puVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   char cVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   uVar9 = param_1 >> 9;
   if (( *(uint*)( this + 8 ) < *(uint*)( this + 0x14 ) ) && ( puVar1 = (uint*)( *(long*)( this + 0x18 ) + ( ulong ) * (uint*)( this + 8 ) * 8 ) * puVar1 == uVar9 )) {
      return *(long*)( this + 0x28 ) + (ulong)puVar1[1] * 0x48;
   }

   uVar4 = *(uint*)( this + 0x24 );
   iVar10 = *(uint*)( this + 0x14 ) - 1;
   if (iVar10 < 0) {
      uVar8 = 0;
   }
 else {
      uVar8 = 0;
      do {
         while (true) {
            uVar7 = iVar10 + uVar8 >> 1;
            lVar11 = (ulong)uVar7 * 8;
            uVar3 = *(uint*)( *(long*)( this + 0x18 ) + (ulong)uVar7 * 8 );
            if (-1 < (int)( uVar9 - uVar3 )) break;
            iVar10 = uVar7 - 1;
            if (iVar10 < (int)uVar8) goto LAB_00104a4c;
         }
;
         if (uVar9 == uVar3) goto LAB_00104ae5;
         uVar8 = uVar7 + 1;
      }
 while ( (int)uVar8 <= iVar10 );
   }

   LAB_00104a4c:if (param_2) {
      cVar6 = resize(this, uVar4 + 1, true, false);
      if (cVar6 != '\0') {
         lVar11 = (ulong)uVar8 * 8;
         puVar2 = (undefined4*)( *(long*)( this + 0x28 ) + (ulong)uVar4 * 0x48 );
         for (int i = 0; i < 4; i++) {
            *(undefined1(*) [16])( puVar2 + ( 4*i + 2 ) ) = (undefined1[16])0;
         }

         lVar5 = *(long*)( this + 0x18 );
         *puVar2 = 0;
         memmove((void*)( lVar5 + 8 + lVar11 ), (void*)( lVar5 + lVar11 ), ( ulong )(( ~uVar8 + *(int*)( this + 0x14 ) ) * 8));
         *(ulong*)( *(long*)( this + 0x18 ) + (ulong)uVar8 * 8 ) = CONCAT44(uVar4, uVar9);
         uVar7 = uVar8;
         LAB_00104ae5:*(uint*)( this + 8 ) = uVar7;
         return *(long*)( this + 0x28 ) + ( ulong ) * (uint*)( *(long*)( this + 0x18 ) + 4 + lVar11 ) * 0x48;
      }

   }

   return 0;
}
/* hb_bit_set_invertible_t::get_population() const */ulong hb_bit_set_invertible_t::get_population(hb_bit_set_invertible_t *this) {
   undefined8 *puVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 *puVar4;
   int iVar5;
   ulong uVar6;
   undefined8 *puVar7;
   uint uVar8;
   ulong uVar9;
   undefined8 *puVar10;
   uVar8 = *(uint*)( this + 4 );
   uVar6 = (ulong)uVar8;
   if (this[0x30] == (hb_bit_set_invertible_t)0x0) {
      if (uVar8 == 0xffffffff) {
         uVar6 = ( ulong ) * (uint*)( this + 0x24 );
         if (*(uint*)( this + 0x24 ) != 0) {
            puVar10 = (undefined8*)( *(long*)( this + 0x28 ) + 0x48 );
            puVar7 = (undefined8*)( *(long*)( this + 0x28 ) + 8 );
            puVar1 = puVar10 + uVar6 * 9;
            uVar6 = 0;
            do {
               iVar5 = *(int*)( puVar10 + -9 );
               if (iVar5 == -1) {
                  iVar5 = 0;
                  puVar4 = puVar7;
                  do {
                     uVar2 = *puVar4;
                     puVar4 = puVar4 + 1;
                     iVar3 = __popcountdi2(uVar2);
                     iVar5 = iVar5 + iVar3;
                  }
 while ( puVar4 != puVar10 );
                  *(int*)( puVar10 + -9 ) = iVar5;
               }

               puVar10 = puVar10 + 9;
               uVar6 = ( ulong )(uint)((int)uVar6 + iVar5);
               puVar7 = puVar7 + 9;
            }
 while ( puVar10 != puVar1 );
         }

         *(int*)( this + 4 ) = (int)uVar6;
      }

   }
 else if (uVar8 == 0xffffffff) {
      uVar8 = *(uint*)( this + 0x24 );
      uVar9 = (ulong)uVar8;
      if (uVar8 != 0) {
         uVar8 = 0;
         puVar10 = (undefined8*)( *(long*)( this + 0x28 ) + 0x48 );
         puVar7 = (undefined8*)( *(long*)( this + 0x28 ) + 8 );
         puVar1 = puVar10 + uVar9 * 9;
         do {
            iVar5 = *(int*)( puVar10 + -9 );
            if (iVar5 == -1) {
               iVar5 = 0;
               puVar4 = puVar7;
               do {
                  uVar2 = *puVar4;
                  puVar4 = puVar4 + 1;
                  iVar3 = __popcountdi2(uVar2);
                  iVar5 = iVar5 + iVar3;
               }
 while ( puVar4 != puVar10 );
               *(int*)( puVar10 + -9 ) = iVar5;
            }

            uVar8 = uVar8 + iVar5;
            puVar7 = puVar7 + 9;
            puVar10 = puVar10 + 9;
         }
 while ( puVar1 != puVar10 );
         uVar6 = (ulong)~uVar8;
      }

      *(uint*)( this + 4 ) = uVar8;
   }
 else {
      uVar6 = (ulong)~uVar8;
   }

   return uVar6;
}
/* hb_bit_set_invertible_t::set(hb_bit_set_invertible_t const&) */void hb_bit_set_invertible_t::set(hb_bit_set_invertible_t *this, hb_bit_set_invertible_t *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   char cVar6;
   uint uVar7;
   long lVar8;
   void *pvVar9;
   uint uVar10;
   ulong uVar11;
   if (*this == (hb_bit_set_invertible_t)0x0) {
      return;
   }

   cVar6 = hb_bit_set_t::resize((hb_bit_set_t*)this, *(uint*)( param_1 + 0x24 ), false, false);
   if (cVar6 == '\0') goto LAB_00104d65;
   *(undefined4*)( this + 4 ) = *(undefined4*)( param_1 + 4 );
   uVar7 = *(uint*)( this + 0x10 );
   if ((int)uVar7 < 0) {
      uVar7 = ~uVar7;
      *(uint*)( this + 0x10 ) = uVar7;
   }

   *(undefined4*)( this + 0x14 ) = 0;
   uVar10 = *(uint*)( param_1 + 0x14 );
   if (uVar7 < uVar10) {
      if (uVar10 < 0x20000000) {
         pvVar9 = *(void**)( this + 0x18 );
         LAB_00104e64:pvVar9 = realloc(pvVar9, (ulong)uVar10 << 3);
         if (pvVar9 != (void*)0x0) goto LAB_00104e79;
         uVar7 = *(uint*)( this + 0x10 );
         if (uVar10 <= uVar7) {
            if (-1 < (int)uVar7) {
               uVar10 = *(uint*)( param_1 + 0x14 );
               goto LAB_00104de7;
            }

            goto LAB_00104d92;
         }

      }

      *(uint*)( this + 0x10 ) = ~uVar7;
   }
 else {
      if (uVar10<uVar7> > 2) {
         pvVar9 = *(void**)( this + 0x18 );
         if (uVar10 != 0) goto LAB_00104e64;
         free(pvVar9);
         pvVar9 = (void*)0x0;
         LAB_00104e79:*(uint*)( this + 0x10 ) = uVar10;
         uVar10 = *(uint*)( param_1 + 0x14 );
         *(void**)( this + 0x18 ) = pvVar9;
      }

      LAB_00104de7:lVar3 = *(long*)( param_1 + 0x18 );
      *(uint*)( this + 0x14 ) = uVar10;
      if (uVar10 != 0) {
         lVar4 = *(long*)( this + 0x18 );
         lVar8 = 0;
         do {
            *(undefined8*)( lVar4 + lVar8 ) = *(undefined8*)( lVar3 + lVar8 );
            lVar8 = lVar8 + 8;
         }
 while ( (ulong)uVar10 << 3 != lVar8 );
      }

   }

   LAB_00104d92:uVar7 = *(uint*)( this + 0x20 );
   if ((int)uVar7 < 0) {
      uVar7 = ~uVar7;
      *(uint*)( this + 0x20 ) = uVar7;
   }

   *(undefined4*)( this + 0x24 ) = 0;
   uVar10 = *(uint*)( param_1 + 0x24 );
   uVar11 = (ulong)uVar10;
   if (uVar7 < uVar10) {
      if (uVar10 < 0x38e38e4) {
         pvVar9 = *(void**)( this + 0x28 );
         LAB_00104e2d:pvVar9 = realloc(pvVar9, (ulong)uVar10 * 0x48);
         if (pvVar9 != (void*)0x0) {
            LAB_00104e46:*(uint*)( this + 0x20 ) = uVar10;
            uVar11 = ( ulong ) * (uint*)( param_1 + 0x24 );
            *(void**)( this + 0x28 ) = pvVar9;
            goto LAB_00104d09;
         }

         uVar7 = *(uint*)( this + 0x20 );
         if (uVar10 <= uVar7) {
            if ((int)uVar7 < 0) goto LAB_00104d65;
            uVar11 = ( ulong ) * (uint*)( param_1 + 0x24 );
            goto LAB_00104d09;
         }

      }

   }
 else {
      if (uVar7 >> 2 <= uVar10) {
         LAB_00104d09:lVar3 = *(long*)( param_1 + 0x28 );
         *(int*)( this + 0x24 ) = (int)uVar11;
         if ((int)uVar11 != 0) {
            lVar4 = *(long*)( this + 0x28 );
            lVar8 = 0;
            do {
               uVar5 = ( (undefined8*)( lVar3 + lVar8 ) )[1];
               *(undefined8*)( lVar4 + lVar8 ) = *(undefined8*)( lVar3 + lVar8 );
               ( (undefined8*)( lVar4 + lVar8 ) )[1] = uVar5;
               for (int i = 0; i < 3; i++) {
                  puVar1 = (undefined8*)( lVar3 + ( 16*i + 16 ) + lVar8 );
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8*)( lVar4 + ( 16*i + 16 ) + lVar8 );
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
               }

               *(undefined8*)( lVar4 + 0x40 + lVar8 ) = *(undefined8*)( lVar3 + 0x40 + lVar8 );
               lVar8 = lVar8 + 0x48;
            }
 while ( lVar8 != uVar11 * 0x48 );
         }

         goto LAB_00104d65;
      }

      if (uVar10 < 0x38e38e4) {
         pvVar9 = *(void**)( this + 0x28 );
         if (uVar10 != 0) goto LAB_00104e2d;
         free(pvVar9);
         pvVar9 = (void*)0x0;
         goto LAB_00104e46;
      }

   }

   *(uint*)( this + 0x20 ) = ~uVar7;
   LAB_00104d65:if (*this != (hb_bit_set_invertible_t)0x0) {
      this[0x30] = param_1[0x30];
   }

   return;
}
/* hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t() */void hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t(hb_sparseset_t<hb_bit_set_invertible_t> *this) {
   long lVar1;
   int iVar2;
   pthread_mutex_t *__mutex;
   code *pcVar3;
   undefined8 uVar4;
   *(undefined4*)this = 0xffff2153;
   __mutex = *(pthread_mutex_t**)( this + 8 );
   if (__mutex == (pthread_mutex_t*)0x0) {
      iVar2 = *(int*)( this + 0x20 );
   }
 else {
      if (*(int*)( (long)__mutex + 0x2c ) != 0) {
         do {
            pthread_mutex_lock(__mutex);
            iVar2 = *(int*)( (long)__mutex + 0x2c );
            while (true) {
               if (iVar2 == 0) {
                  if (__mutex[1].__data.__lock != 0) {
                     free(*(void**)( (long)__mutex + 0x30 ));
                  }

                  __mutex[1].__align = 0;
                  *(undefined8*)( (long)__mutex + 0x30 ) = 0;
                  pthread_mutex_unlock(__mutex);
                  goto LAB_00104f9a;
               }

               lVar1 = *(long*)( (long)__mutex + 0x30 ) + ( ulong )(iVar2 - 1U) * 0x18;
               pcVar3 = *(code**)( lVar1 + 0x10 );
               uVar4 = *(undefined8*)( lVar1 + 8 );
               *(uint*)( (long)__mutex + 0x2c ) = iVar2 - 1U;
               pthread_mutex_unlock(__mutex);
               if (pcVar3 == (code*)0x0) break;
               ( *pcVar3 )(uVar4);
               pthread_mutex_lock(__mutex);
               iVar2 = *(int*)( (long)__mutex + 0x2c );
            }
;
         }
 while ( true );
      }

      if (__mutex[1].__data.__lock != 0) {
         free(*(void**)( (long)__mutex + 0x30 ));
      }

      __mutex[1].__align = 0;
      *(undefined8*)( (long)__mutex + 0x30 ) = 0;
      LAB_00104f9a:pthread_mutex_destroy(__mutex);
      free(__mutex);
      *(undefined8*)( this + 8 ) = 0;
      iVar2 = *(int*)( this + 0x20 );
   }

   if (iVar2 != 0) {
      free(*(void**)( this + 0x28 ));
   }

   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   if (( *(int*)( this + 0x30 ) != 0 ) && ( free(*(void**)( this + 0x38 )),*(int*)( this + 0x20 ) != 0 )) {
      free(*(void**)( this + 0x28 ));
      return;
   }

   return;
}
/* hb_vector_t<int, false>::fini() */void hb_vector_t<int,false>::fini(hb_vector_t<int,false> *this) {
   if (*(int*)this != 0) {
      free(*(void**)( this + 8 ));
   }

   *(undefined8*)this = 0;
   *(undefined8*)( this + 8 ) = 0;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t() */void hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t(hb_sparseset_t<hb_bit_set_invertible_t> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


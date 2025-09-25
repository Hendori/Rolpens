void af_cjk_get_standard_widths(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x3de0 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x1f0 );
   }

   return;
}
void af_cjk_hints_compute_blue_edges(long param_1, long param_2, uint param_3) {
   short *psVar1;
   long *plVar2;
   uint uVar3;
   long *plVar4;
   long lVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   short *psVar13;
   long *plVar14;
   int iVar15;
   long *plVar16;
   long lVar17;
   param_1 = param_1 + (ulong)param_3 * 0x9e8;
   psVar13 = *(short**)( param_1 + 0x60 );
   if (psVar13 != (short*)0x0) {
      lVar9 = (ulong)param_3 * 0x3bf0 + param_2;
      psVar1 = psVar13 + ( ulong ) * (uint*)( param_1 + 0x58 ) * 0x2c;
      if (psVar13 < psVar1) {
         uVar3 = *(uint*)( lVar9 + 0x1fc );
         if (uVar3 != 0) {
            lVar17 = (long)(int)*(undefined8*)( lVar9 + 0x50 );
            lVar9 = ( ( ulong ) * (uint*)( param_2 + 0x48 ) / 0x28 ) * lVar17;
            iVar6 = (int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
            if (0x20 < iVar6) {
               iVar6 = 0x20;
            }

            plVar2 = (long*)( param_2 + 0x200 + ( ulong )(-param_3 & 0x3bf0) );
            do {
               while (true) {
                  plVar16 = (long*)0x0;
                  plVar4 = plVar2;
                  iVar15 = iVar6;
                  do {
                     if (( ( *(uint*)( plVar4 + 6 ) & 1 ) != 0 ) && ( (bool)( ( byte )(*(uint*)( plVar4 + 6 ) >> 1) & 1 ) != ( (int)*(char*)( (long)psVar13 + 0x19 ) == *(int*)( param_1 + 0x68 ) ) )) {
                        lVar10 = (long)*psVar13;
                        lVar9 = lVar10 - *plVar4;
                        lVar8 = lVar10 - plVar4[3];
                        lVar12 = -lVar9;
                        if (0 < lVar9) {
                           lVar12 = lVar9;
                        }

                        lVar11 = -lVar8;
                        if (0 < lVar8) {
                           lVar11 = lVar8;
                        }

                        lVar5 = *plVar4;
                        plVar14 = plVar4;
                        if (lVar11 < lVar12) {
                           plVar14 = plVar4 + 3;
                           lVar5 = plVar4[3];
                           lVar9 = lVar8;
                        }

                        if (lVar9 < 0) {
                           lVar9 = lVar5 - lVar10;
                        }

                        lVar9 = (int)lVar9 * lVar17;
                        iVar7 = (int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
                        if (iVar7 < iVar15) {
                           plVar16 = plVar14;
                           iVar15 = iVar7;
                        }

                     }

                     plVar4 = plVar4 + 7;
                  }
 while ( plVar4 != plVar2 + (ulong)uVar3 * 7 );
                  if (plVar16 != (long*)0x0) break;
                  psVar13 = psVar13 + 0x2c;
                  if (psVar1 <= psVar13) {
                     return;
                  }

               }
;
               *(long**)( psVar13 + 0x14 ) = plVar16;
               psVar13 = psVar13 + 0x2c;
            }
 while ( psVar13 < psVar1 );
            return;
         }

         do {
            psVar13 = psVar13 + 0x2c;
         }
 while ( psVar13 < psVar1 );
      }

   }

   return;
}
undefined8 af_cjk_hints_init(long param_1, long param_2) {
   uint uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
   uVar6 = *(uint*)( param_2 + 0x30 );
   uVar2 = *(undefined8*)( param_2 + 0x50 );
   uVar3 = *(undefined8*)( param_2 + 0x58 );
   *(long*)( param_1 + 0x1420 ) = param_2;
   uVar4 = *(undefined8*)( param_2 + 0x3c40 );
   uVar5 = *(undefined8*)( param_2 + 0x3c48 );
   uVar1 = *(uint*)( param_2 + 0x34 );
   *(undefined8*)( param_1 + 8 ) = uVar2;
   *(undefined8*)( param_1 + 0x10 ) = uVar3;
   *(undefined8*)( param_1 + 0x18 ) = uVar4;
   *(undefined8*)( param_1 + 0x20 ) = uVar5;
   if (( uVar6 - 2 & 0xfffffffd ) == 0) {
      uVar6 = ( uint )(uVar6 == 2) * 9 + 6;
   }
 else {
      uVar6 = ( uint )(( uVar6 & 0xfffffffd ) != 1) << 2 | ( uint )(uVar6 - 2 < 2);
   }

   *(uint*)( param_1 + 0x141c ) = uVar6;
   *(uint*)( param_1 + 0x1418 ) = uVar1 | 4;
   return 0;
}
long af_latin_snap_width(long param_1, uint param_2, long param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   lVar7 = param_3;
   if (param_2 == 0) {
      uVar4 = param_3 + 0x20U & 0xffffffffffffffc0;
   }
 else {
      plVar5 = (long*)( param_1 + 8 );
      lVar6 = 0x62;
      plVar1 = plVar5 + (ulong)param_2 * 3;
      do {
         lVar2 = *plVar5;
         lVar3 = param_3 - lVar2;
         if (param_3 - lVar2 < 0) {
            lVar3 = lVar2 - param_3;
         }

         if (lVar3 < lVar6) {
            lVar6 = lVar3;
            lVar7 = lVar2;
         }

         plVar5 = plVar5 + 3;
      }
 while ( plVar1 != plVar5 );
      uVar4 = lVar7 + 0x20U & 0xffffffffffffffc0;
      if (param_3 < lVar7) {
         if (param_3 < (long)( uVar4 - 0x2f )) {
            lVar7 = param_3;
         }

         return lVar7;
      }

   }

   if ((long)( uVar4 + 0x2f ) < param_3) {
      lVar7 = param_3;
   }

   return lVar7;
}
undefined8 af_dummy_hints_init(long param_1, long param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   uVar1 = *(undefined8*)( param_2 + 0x10 );
   uVar2 = *(undefined8*)( param_2 + 0x18 );
   uVar3 = *(undefined8*)( param_2 + 0x20 );
   uVar4 = *(undefined8*)( param_2 + 0x28 );
   *(long*)( param_1 + 0x1420 ) = param_2;
   *(undefined4*)( param_1 + 0x1418 ) = *(undefined4*)( param_2 + 0x34 );
   *(undefined8*)( param_1 + 8 ) = uVar1;
   *(undefined8*)( param_1 + 0x10 ) = uVar3;
   *(undefined8*)( param_1 + 0x18 ) = uVar2;
   *(undefined8*)( param_1 + 0x20 ) = uVar4;
   return 0;
}
void af_sort_and_quantize_widths(uint *param_1, long *param_2, long param_3) {
   uint uVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   ulong uVar8;
   long *plVar9;
   long *plVar10;
   long *plVar11;
   long *plVar12;
   uint uVar13;
   long lVar14;
   uVar1 = *param_1;
   if (uVar1 == 1) {
      return;
   }

   if (uVar1 < 2) {
      *param_1 = 1;
      return;
   }

   uVar13 = 1;
   plVar12 = param_2 + 3;
   plVar9 = plVar12;
   plVar10 = plVar12;
   plVar11 = plVar12;
   LAB_001003c4:do {
      plVar4 = plVar10 + -3;
      lVar14 = *plVar9;
      if (lVar14 < *plVar4) {
         lVar3 = plVar10[-2];
         lVar2 = plVar9[2];
         lVar5 = plVar9[1];
         *plVar9 = *plVar4;
         plVar9[1] = lVar3;
         plVar9[2] = plVar10[-1];
         plVar10[-1] = lVar2;
         *plVar4 = lVar14;
         plVar10[-2] = lVar5;
         plVar9 = plVar9 + -3;
         plVar10 = plVar4;
         if (param_2 != plVar4) goto LAB_001003c4;
      }

      uVar13 = uVar13 + 1;
      plVar11 = plVar11 + 3;
      plVar9 = plVar11;
      plVar10 = plVar11;
   }
 while ( uVar1 != uVar13 );
   lVar14 = *param_2;
   uVar13 = 0;
   uVar8 = 1;
   do {
      uVar6 = (uint)uVar8;
      if (param_3 < param_2[uVar8 * 3] - lVar14) {
         if (uVar13 < uVar6) {
            LAB_0010041e:plVar10 = param_2 + (ulong)uVar13 * 3;
            uVar6 = (uint)uVar8;
            lVar5 = 0;
            do {
               lVar5 = lVar5 + *plVar10;
               *plVar10 = 0;
               plVar10 = plVar10 + 3;
            }
 while ( plVar12 + ( ( ulong )(( uVar6 - uVar13 ) - 1) + (ulong)uVar13 ) * 3 != plVar10 );
            lVar5 = lVar5 / (long)uVar8;
         }
 else {
            lVar5 = 0;
         }

         uVar7 = uVar6 + 1;
         uVar8 = (ulong)uVar7;
         param_2[(ulong)uVar13 * 3] = lVar5;
         if (uVar1 - 1 <= uVar6) goto LAB_001003fe;
         lVar14 = param_2[uVar8 * 3];
         uVar13 = uVar7;
      }
 else {
         uVar7 = uVar6 + 1;
         if (uVar6 == uVar1 - 1) {
            uVar8 = (ulong)uVar7;
            if (uVar13 < uVar7) goto LAB_0010041e;
            uVar8 = ( ulong )(uVar1 + 1);
            param_2[(ulong)uVar13 * 3] = 0;
         }
 else {
            uVar8 = (ulong)uVar7;
         }

         LAB_001003fe:uVar7 = (uint)uVar8;
      }

      if (uVar1 <= uVar7) {
         uVar13 = 1;
         do {
            if (*plVar12 != 0) {
               uVar8 = (ulong)uVar13;
               lVar14 = plVar12[1];
               uVar13 = uVar13 + 1;
               plVar10 = param_2 + uVar8 * 3;
               *plVar10 = *plVar12;
               plVar10[1] = lVar14;
               plVar10[2] = plVar12[2];
            }

            plVar12 = plVar12 + 3;
         }
 while ( param_2 + ( ulong )(uVar1 - 2) * 3 + 6 != plVar12 );
         *param_1 = uVar13;
         return;
      }

   }
 while ( true );
}
void af_latin_get_standard_widths(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x4e80 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x1f0 );
   }

   return;
}
void af_latin_hints_link_segments(long param_1, int param_2, long param_3, ulong param_4) {
   char cVar1;
   short sVar2;
   short sVar3;
   undefined1 auVar4[16];
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   short sVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   long lVar14;
   uVar13 = 0;
   lVar9 = ( param_4 & 0xffffffff ) * 0x9e8 + param_1;
   uVar11 = *(ulong*)( lVar9 + 0x50 );
   if (uVar11 != 0) {
      uVar13 = ( ulong ) * (uint*)( lVar9 + 0x48 ) * 0x50 + uVar11;
   }

   lVar9 = 0;
   if (param_2 != 0) {
      lVar9 = *(long*)( param_3 + ( ulong )(param_2 - 1) * 0x18 );
   }

   uVar10 = ( ulong ) * (uint*)( *(long*)( param_1 + 0x1420 ) + 0x48 );
   lVar14 = (long)uVar10 >> 8;
   if (lVar14 == 0) {
      lVar14 = 1;
   }

   if (uVar11 < uVar13) {
      uVar12 = uVar11;
      do {
         cVar1 = *(char*)( uVar12 + 1 );
         if ((int)cVar1 == *(int*)( param_1 + ( param_4 & 0xffffffff ) * 0x9e8 + 0x68 )) {
            sVar2 = *(short*)( uVar12 + 2 );
            uVar7 = uVar11;
            do {
               if (( (int)*(char*)( uVar7 + 1 ) + (int)cVar1 == 0 ) && ( (long)sVar2 < (long)*(short*)( uVar7 + 2 ) )) {
                  sVar8 = *(short*)( uVar12 + 8 );
                  if (*(short*)( uVar7 + 8 ) < *(short*)( uVar12 + 8 )) {
                     sVar8 = *(short*)( uVar7 + 8 );
                  }

                  sVar3 = *(short*)( uVar12 + 6 );
                  if (*(short*)( uVar12 + 6 ) < *(short*)( uVar7 + 6 )) {
                     sVar3 = *(short*)( uVar7 + 6 );
                  }

                  if (lVar14 <= (long)sVar8 - (long)sVar3) {
                     uVar5 = (long)*(short*)( uVar7 + 2 ) - (long)sVar2;
                     if (lVar9 != 0) {
                        lVar6 = uVar5 * 0x400;
                        uVar5 = 32000;
                        lVar6 = lVar6 / lVar9 + -0x400;
                        if (( lVar6 < 0x2711 ) && ( uVar5= 0,0 < lVar6 )) {
                           uVar5 = ( ulong )(lVar6 * lVar6) / 3000;
                        }

                     }

                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = (long)( uVar10 * 6000 ) >> 0xb;
                     lVar6 = SUB168(auVar4 / SEXT816((long)sVar8 - (long)sVar3), 0) + uVar5;
                     if (lVar6 < *(long*)( uVar12 + 0x30 )) {
                        *(long*)( uVar12 + 0x30 ) = lVar6;
                        *(ulong*)( uVar12 + 0x20 ) = uVar7;
                     }

                     if (lVar6 < *(long*)( uVar7 + 0x30 )) {
                        *(long*)( uVar7 + 0x30 ) = lVar6;
                        *(ulong*)( uVar7 + 0x20 ) = uVar12;
                     }

                  }

               }

               uVar7 = uVar7 + 0x50;
            }
 while ( uVar7 < uVar13 );
         }

         uVar12 = uVar12 + 0x50;
      }
 while ( uVar12 < uVar13 );
      do {
         lVar9 = *(long*)( uVar11 + 0x20 );
         if (( lVar9 != 0 ) && ( *(ulong*)( lVar9 + 0x20 ) != uVar11 )) {
            *(undefined8*)( uVar11 + 0x20 ) = 0;
            *(undefined8*)( uVar11 + 0x28 ) = *(undefined8*)( lVar9 + 0x20 );
         }

         uVar11 = uVar11 + 0x50;
      }
 while ( uVar11 < uVar13 );
   }

   return;
}
undefined8 af_latin_hints_init(long param_1, long param_2) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
   uint uVar7;
   uVar6 = *(uint*)( param_2 + 0x30 );
   uVar2 = *(undefined8*)( param_2 + 0x4ce0 );
   uVar3 = *(undefined8*)( param_2 + 0x4ce8 );
   uVar4 = *(undefined8*)( param_2 + 0x50 );
   uVar5 = *(undefined8*)( param_2 + 0x58 );
   lVar1 = *(long*)( param_2 + 8 );
   *(long*)( param_1 + 0x1420 ) = param_2;
   uVar7 = *(uint*)( param_2 + 0x34 );
   *(undefined8*)( param_1 + 0x18 ) = uVar2;
   *(undefined8*)( param_1 + 0x20 ) = uVar3;
   *(undefined8*)( param_1 + 8 ) = uVar4;
   *(undefined8*)( param_1 + 0x10 ) = uVar5;
   if (( uVar6 - 2 & 0xfffffffd ) == 0) {
      uVar6 = ( uint )(uVar6 == 2) * 9 + 6;
   }
 else {
      if (( uVar6 & 0xfffffffd ) == 1) {
         uVar6 = ( uint )(uVar6 - 2 < 2);
         uVar7 = uVar7 | 1;
         goto LAB_0010075c;
      }

      uVar6 = 4;
   }

   if (( *(byte*)( lVar1 + 0x18 ) & 1 ) != 0) {
      uVar7 = uVar7 | 1;
   }

   LAB_0010075c:*(uint*)( param_1 + 0x141c ) = uVar6;
   *(uint*)( param_1 + 0x1418 ) = uVar7;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 af_autofitter_init(long param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar3 = _UNK_0010e398;
   uVar2 = __LC1;
   uVar1 = _LC0;
   *(undefined1*)( param_1 + 0x20 ) = 1;
   *(undefined8*)( param_1 + 0x24 ) = uVar2;
   *(undefined8*)( param_1 + 0x2c ) = uVar3;
   uVar3 = _UNK_0010e3a8;
   uVar2 = __LC2;
   *(undefined8*)( param_1 + 0x18 ) = uVar1;
   *(undefined8*)( param_1 + 0x34 ) = uVar2;
   *(undefined8*)( param_1 + 0x3c ) = uVar3;
   return 0;
}
void af_autofitter_done(void) {
   return;
}
int af_glyph_hints_reload(undefined8 *param_1, short *param_2) {
   ushort *puVar1;
   char cVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   ushort uVar6;
   int iVar7;
   uint uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   ushort *puVar11;
   ushort *puVar12;
   uint uVar13;
   uint uVar14;
   long lVar15;
   uint uVar16;
   long lVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   uint uVar20;
   uint uVar21;
   ushort *puVar22;
   undefined8 *puVar23;
   ushort *puVar24;
   long lVar25;
   short sVar26;
   short *psVar27;
   short sVar28;
   byte *pbVar29;
   long lVar30;
   ushort *puVar31;
   undefined1 uVar32;
   long lVar33;
   uint uVar34;
   uint uVar35;
   long in_FS_OFFSET;
   undefined8 *local_80;
   int local_44;
   long local_40;
   uVar3 = param_1[1];
   uVar4 = param_1[3];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar33 = param_1[2];
   local_44 = 0;
   *(undefined4*)( (long)param_1 + 0x2c ) = 0;
   uVar10 = *param_1;
   lVar25 = param_1[4];
   *(undefined4*)( (long)param_1 + 0x3c ) = 0;
   iVar7 = (int)*param_2;
   *(undefined4*)( param_1 + 9 ) = 0;
   *(undefined4*)( param_1 + 0xb ) = 0;
   *(undefined4*)( param_1 + 0x146 ) = 0;
   *(undefined4*)( param_1 + 0x148 ) = 0;
   if (iVar7 < 9) {
      if (param_1[8] == 0) {
         *(undefined4*)( param_1 + 7 ) = 8;
         param_1[8] = param_1 + 0x285;
      }

   }
 else if (*(int*)( param_1 + 7 ) < iVar7) {
      puVar19 = (undefined8*)param_1[8];
      if (puVar19 == param_1 + 0x285) {
         param_1[8] = 0;
         puVar19 = (undefined8*)0x0;
      }

      uVar8 = iVar7 + 3U & 0xfffffffc;
      uVar9 = ft_mem_realloc(uVar10, 8, (long)*(int*)( param_1 + 7 ), (long)(int)uVar8, puVar19, &local_44);
      param_1[8] = uVar9;
      if (local_44 != 0) goto LAB_00100ba2;
      *(uint*)( param_1 + 7 ) = uVar8;
   }

   iVar7 = (int)param_2[1];
   if (iVar7 + 2 < 0x61) {
      if (param_1[6] == 0) {
         *(undefined4*)( param_1 + 5 ) = 0x60;
         param_1[6] = param_1 + 0x28d;
      }

   }
 else if (*(int*)( param_1 + 5 ) < iVar7 + 2) {
      puVar19 = (undefined8*)param_1[6];
      if (puVar19 == param_1 + 0x28d) {
         param_1[6] = 0;
         puVar19 = (undefined8*)0x0;
      }

      uVar8 = iVar7 + 0xbU & 0xfffffff8;
      uVar10 = ft_mem_realloc(uVar10, 0x50, (long)*(int*)( param_1 + 5 ), (long)(int)uVar8, puVar19, &local_44);
      param_1[6] = uVar10;
      if (local_44 != 0) goto LAB_00100ba2;
      *(uint*)( param_1 + 5 ) = uVar8;
      iVar7 = (int)param_2[1];
   }

   *(int*)( (long)param_1 + 0x2c ) = iVar7;
   sVar26 = *param_2;
   *(undefined4*)( param_1 + 0xd ) = 2;
   *(int*)( (long)param_1 + 0x3c ) = (int)sVar26;
   *(undefined4*)( param_1 + 0x14a ) = 0xffffffff;
   iVar7 = FT_Outline_Get_Orientation(param_2);
   if (iVar7 == 1) {
      *(undefined4*)( param_1 + 0xd ) = 0xfffffffe;
      *(undefined4*)( param_1 + 0x14a ) = 1;
   }

   param_1[1] = uVar3;
   param_1[3] = uVar4;
   param_1[2] = lVar33;
   param_1[4] = lVar25;
   if (*(int*)( (long)param_1 + 0x2c ) == 0) goto LAB_00100ba2;
   puVar22 = (ushort*)param_1[6];
   psVar27 = *(short**)( param_2 + 0xc );
   puVar19 = *(undefined8**)( param_2 + 4 );
   pbVar29 = *(byte**)( param_2 + 8 );
   puVar1 = puVar22 + (long)*(int*)( (long)param_1 + 0x2c ) * 0x28;
   lVar30 = (long)*psVar27;
   uVar6 = *(ushort*)( *(long*)( param_1[0x284] + 8 ) + 0x88 );
   puVar12 = puVar22 + lVar30 * 0x28;
   uVar8 = (uint)uVar6 + (uint)uVar6 * 4 >> 9;
   if (puVar22 < puVar1) {
      iVar7 = 0;
      puVar11 = puVar22;
      puVar31 = puVar12;
      puVar23 = puVar19;
      do {
         puVar11[1] = _LC3;
         uVar10 = *puVar23;
         uVar9 = puVar23[1];
         puVar11[0xc] = (ushort)uVar10;
         lVar15 = (long)(int)uVar10 * (long)(int)uVar3;
         puVar11[0xd] = (ushort)uVar9;
         lVar17 = (long)(int)uVar9 * (long)(int)uVar4;
         lVar15 = (int)( ( ulong )(lVar15 + 0x8000 + ( lVar15 >> 0x3f )) >> 0x10 ) + lVar33;
         *(long*)( puVar11 + 0x10 ) = lVar15;
         *(long*)( puVar11 + 4 ) = lVar15;
         lVar15 = (int)( ( ulong )(lVar17 + 0x8000 + ( lVar17 >> 0x3f )) >> 0x10 ) + lVar25;
         *(long*)( puVar11 + 0x14 ) = lVar15;
         *(long*)( puVar11 + 8 ) = lVar15;
         puVar18 = puVar19 + lVar30 * 2;
         uVar10 = puVar18[1];
         puVar12[0xc] = ( ushort ) * puVar18;
         uVar6 = 1;
         puVar12[0xd] = (ushort)uVar10;
         if (( *pbVar29 & 3 ) != 0) {
            uVar6 = ( ushort )(( *pbVar29 & 3 ) == 2) * 2;
         }

         *puVar11 = uVar6;
         uVar13 = (int)(short)puVar11[0xc] - (int)(short)puVar31[0xc];
         uVar34 = -uVar13;
         if (0 < (int)uVar13) {
            uVar34 = uVar13;
         }

         uVar35 = (int)(short)puVar11[0xd] - (int)(short)puVar31[0xd];
         uVar13 = -uVar35;
         if (0 < (int)uVar35) {
            uVar13 = uVar35;
         }

         if ((ulong)uVar34 + (ulong)uVar13 < (ulong)uVar8) {
            *puVar31 = *puVar31 | 0x20;
         }

         *(ushort**)( puVar11 + 0x24 ) = puVar31;
         *(ushort**)( puVar31 + 0x20 ) = puVar11;
         puVar31 = puVar11;
         if (( puVar11 == puVar12 ) && ( iVar7 = iVar7 < *param_2 )) {
            lVar30 = (long)psVar27[iVar7];
            puVar12 = puVar22 + lVar30 * 0x28;
            puVar31 = puVar12;
         }

         puVar11 = puVar11 + 0x28;
         puVar23 = puVar23 + 2;
         pbVar29 = pbVar29 + 1;
      }
 while ( puVar11 < puVar1 );
      puVar19 = (undefined8*)param_1[8];
      local_80 = puVar19 + *(int*)( (long)param_1 + 0x3c );
      if (puVar19 < local_80) goto LAB_00100bf4;
   }
 else {
      puVar19 = (undefined8*)param_1[8];
      local_80 = puVar19 + *(int*)( (long)param_1 + 0x3c );
      if (local_80 <= puVar19) goto LAB_00100ba2;
      LAB_00100bf4:sVar26 = 0;
      puVar23 = puVar19;
      do {
         puVar18 = puVar23 + 1;
         *puVar23 = puVar22 + (long)sVar26 * 0x28;
         sVar26 = *psVar27 + 1;
         puVar23 = puVar18;
         psVar27 = psVar27 + 1;
      }
 while ( puVar18 < local_80 );
      do {
         puVar12 = (ushort*)*puVar19;
         puVar11 = *(ushort**)( puVar12 + 0x24 );
         puVar31 = puVar12;
         uVar34 = (uint)puVar11[0xc];
         uVar13 = (uint)puVar11[0xd];
         if (puVar12 != puVar11) {
            uVar34 = (int)(short)puVar12[0xc];
            uVar13 = (int)(short)puVar12[0xd];
            do {
               puVar24 = puVar11;
               uVar21 = (uint)(short)puVar24[0xc];
               uVar20 = (uint)(short)puVar24[0xd];
               uVar16 = uVar34 - uVar21;
               uVar35 = -uVar16;
               if (0 < (int)uVar16) {
                  uVar35 = uVar16;
               }

               uVar14 = uVar13 - uVar20;
               uVar16 = -uVar14;
               if (0 < (int)uVar14) {
                  uVar16 = uVar14;
               }

            }
 while ( ( (long)( (ulong)uVar35 + (ulong)uVar16 ) < (long)(int)( uVar8 * 2 + -1 ) ) && ( puVar11 = *(ushort**)( puVar24 + 0x24 ) ),puVar31 = puVar24,uVar34 = uVar21,uVar13 = uVar20,puVar12 != *(ushort**)( puVar24 + 0x24 ) );
         }

         *(undefined1(*) [16])( puVar31 + 0x18 ) = (undefined1[16])0x0;
         lVar25 = 0;
         lVar33 = 0;
         puVar11 = puVar31;
         puVar12 = puVar31;
         do {
            while (true) {
               puVar12 = *(ushort**)( puVar12 + 0x20 );
               sVar26 = (short)uVar34;
               uVar34 = (uint)(short)puVar12[0xc];
               sVar28 = (short)uVar13;
               lVar33 = lVar33 + (int)( uVar34 - (int)sVar26 );
               uVar13 = (uint)(short)puVar12[0xd];
               lVar25 = lVar25 + (int)( uVar13 - (int)sVar28 );
               lVar30 = -lVar33;
               if (0 < lVar33) {
                  lVar30 = lVar33;
               }

               lVar15 = -lVar25;
               if (0 < lVar25) {
                  lVar15 = lVar25;
               }

               if (lVar30 + lVar15 < (long)(ulong)uVar8) break;
               lVar17 = (long)puVar12 - (long)puVar11 >> 4;
               *(long*)( puVar11 + 0x18 ) = lVar17 * -0x3333333333333333;
               *(long*)( puVar12 + 0x1c ) = lVar17 * 0x3333333333333333;
               lVar17 = -lVar33;
               if (lVar25 < lVar33) {
                  if (SBORROW8(lVar25, lVar17) == lVar25 + lVar33 < 0) {
                     uVar32 = 1;
                  }
 else {
                     lVar33 = -lVar25;
                     uVar32 = 0xfe;
                     lVar15 = lVar30;
                  }

               }
 else {
                  uVar32 = 0xff;
                  lVar5 = lVar25 + lVar33;
                  lVar33 = lVar17;
                  if (SBORROW8(lVar25, lVar17) == lVar5 < 0) {
                     uVar32 = 2;
                     lVar33 = lVar25;
                     lVar15 = lVar30;
                  }

               }

               if (lVar33 <= lVar15 * 0xe) {
                  uVar32 = 4;
               }

               *(undefined1*)( (long)puVar11 + 3 ) = uVar32;
               for (puVar11 = *(ushort**)( puVar11 + 0x20 ); puVar12 != puVar11; puVar11 = *(ushort**)( puVar11 + 0x20 )) {
                  puVar11[1] = CONCAT11(uVar32, uVar32);
               }

               *(undefined1*)( puVar12 + 1 ) = uVar32;
               lVar33 = 0;
               lVar25 = (long)puVar31 - (long)puVar11 >> 4;
               *(long*)( puVar11 + 0x18 ) = lVar25 * -0x3333333333333333;
               *(long*)( puVar31 + 0x1c ) = lVar25 * 0x3333333333333333;
               lVar25 = 0;
               if (puVar12 == puVar31) goto LAB_00100dfb;
            }
;
            *puVar12 = *puVar12 | 0x10;
         }
 while ( puVar12 != puVar31 );
         LAB_00100dfb:puVar19 = puVar19 + 1;
      }
 while ( puVar19 < local_80 );
   }

   puVar12 = puVar22;
   if (puVar22 < puVar1) {
      do {
         if (( ( *puVar12 & 0x10 ) == 0 ) && ( puVar12[1] == 0x404 )) {
            lVar33 = *(long*)( puVar12 + 0x1c );
            lVar25 = *(long*)( puVar12 + 0x18 );
            if (( -1 < ( (int)(short)puVar12[0xc] - (int)(short)puVar12[lVar33 * 0x28 + 0xc] ^ (int)(short)puVar12[lVar25 * 0x28 + 0xc] - (int)(short)puVar12[0xc] ) ) && ( -1 < ( (int)(short)puVar12[0xd] - (int)(short)puVar12[lVar33 * 0x28 + 0xd] ^ (int)(short)puVar12[lVar25 * 0x28 + 0xd] - (int)(short)puVar12[0xd] ) )) {
               *puVar12 = *puVar12 | 0x10;
               lVar30 = lVar25 * 0x50 + lVar33 * -0x50 >> 4;
               *(long*)( puVar12 + lVar33 * 0x28 + 0x18 ) = lVar30 * -0x3333333333333333;
               *(long*)( puVar12 + lVar25 * 0x28 + 0x1c ) = lVar30 * 0x3333333333333333;
            }

         }

         puVar12 = puVar12 + 0x28;
      }
 while ( puVar12 < puVar1 );
      do {
         uVar6 = *puVar22;
         if (( uVar6 & 0x10 ) == 0) {
            if (( uVar6 & 3 ) == 0) {
               cVar2 = *(char*)( (long)puVar22 + 3 );
               if (cVar2 == (char)puVar22[1]) {
                  if (cVar2 == '\x04') {
                     lVar33 = *(long*)( puVar22 + 0x18 );
                     lVar25 = *(long*)( puVar22 + 0x1c );
                     iVar7 = ft_corner_is_flat((long)( (int)(short)puVar22[0xc] - (int)(short)puVar22[lVar25 * 0x28 + 0xc] ), (long)( (int)(short)puVar22[0xd] - (int)(short)puVar22[lVar25 * 0x28 + 0xd] ), (long)( (int)(short)puVar22[lVar33 * 0x28 + 0xc] - (int)(short)puVar22[0xc] ), (long)( (int)(short)puVar22[lVar33 * 0x28 + 0xd] - (int)(short)puVar22[0xd] ));
                     if (iVar7 == 0) goto LAB_00100f08;
                     lVar30 = lVar33 * 0x50 + lVar25 * -0x50 >> 4;
                     *(long*)( puVar22 + lVar25 * 0x28 + 0x18 ) = lVar30 * -0x3333333333333333;
                     *(long*)( puVar22 + lVar33 * 0x28 + 0x1c ) = lVar30 * 0x3333333333333333;
                     uVar6 = *puVar22;
                  }

               }
 else if ((int)(char)puVar22[1] + (int)cVar2 != 0) goto LAB_00100f08;
            }

            *puVar22 = uVar6 | 0x10;
         }

         LAB_00100f08:puVar22 = puVar22 + 0x28;
      }
 while ( puVar22 < puVar1 );
   }

   LAB_00100ba2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_44;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int af_axis_hints_new_edge(long param_1, int param_2, int param_3, char param_4, undefined8 param_5, undefined8 *param_6) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long lVar4;
   int iVar5;
   ulong uVar6;
   undefined8 *puVar7;
   uint uVar8;
   long in_FS_OFFSET;
   byte bVar9;
   int local_44;
   long local_40;
   bVar9 = 0;
   uVar8 = *(uint*)( param_1 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   if (uVar8 < 0xc) {
      puVar2 = *(undefined8**)( param_1 + 0x18 );
      if (puVar2 == (undefined8*)0x0) {
         puVar2 = (undefined8*)( param_1 + 0x5c8 );
         *(undefined4*)( param_1 + 0x14 ) = 0xc;
         *(undefined8**)( param_1 + 0x18 ) = puVar2;
      }

   }
 else {
      uVar1 = *(uint*)( param_1 + 0x14 );
      if (uVar8 < uVar1) {
         puVar2 = *(undefined8**)( param_1 + 0x18 );
      }
 else {
         if (0x1745d16 < uVar1) {
            iVar5 = 0x40;
            puVar7 = (undefined8*)0x0;
            goto LAB_00101120;
         }

         puVar2 = *(undefined8**)( param_1 + 0x18 );
         uVar8 = uVar1 + 4 + ( uVar1 >> 2 );
         if (0x1745d17 < uVar8) {
            uVar8 = 0x1745d17;
         }

         if (puVar2 == (undefined8*)( param_1 + 0x5c8 )) {
            puVar3 = (undefined8*)ft_mem_realloc(param_5, 0x58, 0, uVar8, 0, &local_44);
            puVar7 = (undefined8*)0x0;
            *(undefined8**)( param_1 + 0x18 ) = puVar3;
            iVar5 = local_44;
            if (local_44 != 0) goto LAB_00101120;
            *puVar3 = *puVar2;
            puVar3[0x83] = *(undefined8*)( param_1 + 0x9e0 );
            lVar4 = (long)puVar3 - (long)( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 );
            puVar2 = (undefined8*)( (long)puVar2 - lVar4 );
            puVar7 = (undefined8*)( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 );
            for (uVar6 = ( ulong )((int)lVar4 + 0x420U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
               *puVar7 = *puVar2;
               puVar2 = puVar2 + (ulong)bVar9 * -2 + 1;
               puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
            }

            puVar2 = *(undefined8**)( param_1 + 0x18 );
         }
 else {
            puVar2 = (undefined8*)ft_mem_realloc(param_5, 0x58, uVar1, uVar8, puVar2, &local_44);
            puVar7 = (undefined8*)0x0;
            *(undefined8**)( param_1 + 0x18 ) = puVar2;
            iVar5 = local_44;
            if (local_44 != 0) goto LAB_00101120;
         }

         *(uint*)( param_1 + 0x14 ) = uVar8;
         uVar8 = *(uint*)( param_1 + 0x10 );
      }

   }

   for (puVar7 = puVar2 + (ulong)uVar8 * 0xb; puVar2 < puVar7; puVar7 = puVar7 + -0xb) {
      iVar5 = (int)*(short*)( puVar7 + -0xb );
      if (param_4 == '\0') {
         if (iVar5 < param_2) break;
      }
 else if (param_2 < iVar5) break;
      if (( param_2 == iVar5 ) && ( *(int*)( param_1 + 0x20 ) == param_3 )) break;
      *puVar7 = puVar7[-0xb];
      for (int i = 0; i < 10; i++) {
         puVar7[( i + 1 )] = puVar7[( i + -10 )];
      }

   }

   *(uint*)( param_1 + 0x10 ) = uVar8 + 1;
   iVar5 = local_44;
   LAB_00101120:*param_6 = puVar7;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void af_glyph_hints_align_strong_points(long param_1, uint param_2) {
   ushort *puVar1;
   short *psVar2;
   ushort uVar3;
   ushort *puVar4;
   ushort uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   ushort *puVar9;
   long lVar10;
   ushort uVar11;
   long lVar12;
   ushort *puVar13;
   long lVar14;
   ushort uVar15;
   ushort *puVar16;
   lVar6 = (ulong)param_2 * 0x9e8 + param_1;
   puVar4 = *(ushort**)( lVar6 + 0x60 );
   if (puVar4 != (ushort*)0x0) {
      uVar7 = ( ulong ) * (uint*)( lVar6 + 0x58 );
      uVar8 = uVar7 * 0x58;
      puVar1 = puVar4 + uVar7 * 0x2c;
      uVar15 = ( -(ushort)(param_2 == 0) & 0xfffc ) + 8;
      if (puVar4 < puVar1) {
         puVar9 = *(ushort**)( param_1 + 0x30 );
         puVar16 = puVar9 + (long)*(int*)( param_1 + 0x2c ) * 0x28;
         if (puVar9 < puVar16) {
            lVar6 = ( (long)uVar8 >> 3 ) * 0x2e8ba2e8ba2e8ba3;
            do {
               uVar11 = *puVar9;
               if (( ( uVar11 & uVar15 ) == 0 ) && ( ( uVar11 & 0x10 ) == 0 )) {
                  lVar10 = *(long*)( puVar9 + 8 );
                  if (param_2 == 1) {
                     uVar3 = puVar9[0xd];
                  }
 else {
                     uVar3 = puVar9[0xc];
                     lVar10 = *(long*)( puVar9 + 4 );
                  }

                  uVar5 = *puVar4;
                  if ((short)uVar5 < (short)uVar3) {
                     if ((short)uVar3 < (short)puVar1[-0x2c]) {
                        if (uVar8 < 0x2c1) {
                           lVar12 = 0;
                           lVar10 = 0x58;
                           do {
                              lVar14 = lVar10;
                              if ((short)uVar3 <= (short)uVar5) {
                                 lVar14 = lVar12 * 0x58;
                                 break;
                              }

                              lVar12 = lVar12 + 1;
                              uVar5 = *(ushort*)( (long)puVar4 + lVar14 );
                              lVar10 = lVar14 + 0x58;
                           }
 while ( lVar12 < lVar6 );
                           puVar13 = (ushort*)( (long)puVar4 + lVar14 );
                           if (uVar3 == uVar5) {
                              lVar10 = *(long*)( puVar13 + 8 );
                              goto LAB_001013ca;
                           }

                        }
 else {
                           lVar10 = 0;
                           lVar14 = lVar6;
                           while (lVar12 = lVar14,lVar10 < lVar12) {
                              lVar14 = lVar10 + lVar12 >> 1;
                              uVar5 = puVar4[lVar14 * 0x2c];
                              if ((short)uVar5 <= (short)uVar3) {
                                 if ((short)uVar3 <= (short)uVar5) {
                                    lVar10 = *(long*)( puVar4 + lVar14 * 0x2c + 8 );
                                    goto LAB_001013ca;
                                 }

                                 lVar10 = lVar14 + 1;
                                 lVar14 = lVar12;
                              }

                           }
;
                           lVar14 = lVar10 * 0x58;
                           puVar13 = puVar4 + lVar10 * 0x2c;
                        }

                        psVar2 = (short*)( (long)puVar4 + lVar14 + -0x58 );
                        lVar10 = *(long*)( psVar2 + 0x10 );
                        if (lVar10 == 0) {
                           lVar10 = FT_DivFix(*(long*)( puVar13 + 8 ) - *(long*)( psVar2 + 8 ), (long)( (int)(short)*puVar13 - (int)*psVar2 ));
                           uVar11 = *puVar9;
                           *(long*)( psVar2 + 0x10 ) = lVar10;
                        }

                        lVar10 = (long)( (int)(short)uVar3 - (int)*psVar2 ) * (long)(int)lVar10;
                        lVar10 = ( lVar10 + 0x8000 + ( lVar10 >> 0x3f ) >> 0x10 ) + *(long*)( psVar2 + 8 );
                     }
 else {
                        lVar10 = ( lVar10 - *(long*)( puVar1 + -0x28 ) ) + *(long*)( puVar1 + -0x24 );
                     }

                  }
 else {
                     lVar10 = ( lVar10 + *(long*)( puVar4 + 8 ) ) - *(long*)( puVar4 + 4 );
                  }

                  LAB_001013ca:if (param_2 == 0) {
                     *(long*)( puVar9 + 0x10 ) = lVar10;
                  }
 else {
                     *(long*)( puVar9 + 0x14 ) = lVar10;
                  }

                  *puVar9 = uVar11 | uVar15;
               }

               puVar9 = puVar9 + 0x28;
            }
 while ( puVar9 < puVar16 );
         }

      }

   }

   return;
}
void af_cjk_metrics_scale_dim(long param_1, long param_2, uint param_3) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   uint uVar12;
   long lVar13;
   long lVar14;
   plVar1 = (long*)( param_2 + 8 );
   plVar2 = (long*)( param_2 + 0x18 );
   if (param_3 != 0) {
      plVar1 = (long*)( param_2 + 0x10 );
      plVar2 = (long*)( param_2 + 0x20 );
   }

   lVar14 = *plVar2;
   lVar13 = *plVar1;
   lVar5 = (ulong)param_3 * 0x3bf0 + param_1;
   if (( *(long*)( lVar5 + 0x3c30 ) != lVar13 ) || ( *(long*)( lVar5 + 0x3c38 ) != lVar14 )) {
      uVar10 = ( ulong )(-param_3 & 0x3bf0);
      lVar5 = (ulong)param_3 * 0x3bf0 + param_1;
      plVar1 = (long*)( param_1 + 0x3c30 + uVar10 );
      *plVar1 = lVar13;
      plVar1[1] = lVar14;
      plVar1 = (long*)( param_1 + 0x50 + uVar10 );
      *plVar1 = lVar13;
      plVar1[1] = lVar14;
      if (*(int*)( lVar5 + 0x1fc ) != 0) {
         lVar11 = (long)(int)lVar13;
         puVar8 = (undefined8*)( param_1 + 0x200 + uVar10 );
         uVar12 = 0;
         do {
            *(uint*)( puVar8 + 6 ) = *(uint*)( puVar8 + 6 ) & 0xfffffffe;
            lVar6 = (int)*puVar8 * lVar11;
            lVar7 = (int)puVar8[3] * lVar11;
            lVar9 = (int)( ( ulong )(lVar6 + 0x8000 + ( lVar6 >> 0x3f )) >> 0x10 ) + lVar14;
            lVar3 = ( (int)*puVar8 - (int)puVar8[3] ) * lVar11;
            puVar8[1] = lVar9;
            puVar8[2] = lVar9;
            lVar6 = (int)( ( ulong )(lVar7 + 0x8000 + ( lVar7 >> 0x3f )) >> 0x10 ) + lVar14;
            puVar8[4] = lVar6;
            puVar8[5] = lVar6;
            if ((long)(int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ) + 0x30U < 0x61) {
               uVar10 = lVar9 + 0x20U & 0xffffffffffffffc0;
               puVar8[2] = uVar10;
               lVar6 = FT_DivFix(uVar10, lVar13);
               lVar3 = lVar6 - puVar8[3];
               if (lVar3 < 0) {
                  lVar6 = ( (int)puVar8[3] - (int)lVar6 ) * lVar11;
                  iVar4 = (int)( ( ulong )(lVar6 + 0x8000 + ( lVar6 >> 0x3f )) >> 0x10 );
                  if (iVar4 < 0x20) {
                     uVar10 = 0;
                  }
 else {
                     uVar10 = -((long)iVar4 + 0x20U & 0xffffffffffffffc0);
                  }

               }
 else {
                  lVar6 = (int)lVar3 * lVar11;
                  lVar6 = (long)(int)( ( ulong )(lVar6 + 0x8000 + ( lVar6 >> 0x3f )) >> 0x10 );
                  uVar10 = lVar6 + 0x20U & 0xffffffffffffffc0;
                  if (lVar6 < 0x20) {
                     uVar10 = 0;
                  }

               }

               *(uint*)( puVar8 + 6 ) = *(uint*)( puVar8 + 6 ) | 1;
               puVar8[5] = puVar8[2] - uVar10;
            }

            uVar12 = uVar12 + 1;
            puVar8 = puVar8 + 7;
         }
 while ( uVar12 < *(uint*)( lVar5 + 0x1fc ) );
      }

   }

   return;
}
void af_cjk_metrics_scale(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *(undefined8*)( param_1 + 8 ) = *param_2;
   *(undefined8*)( param_1 + 0x10 ) = uVar1;
   uVar1 = param_2[3];
   *(undefined8*)( param_1 + 0x18 ) = param_2[2];
   *(undefined8*)( param_1 + 0x20 ) = uVar1;
   uVar1 = param_2[5];
   *(undefined8*)( param_1 + 0x28 ) = param_2[4];
   *(undefined8*)( param_1 + 0x30 ) = uVar1;
   af_cjk_metrics_scale_dim(param_1, param_2, 0);
   af_cjk_metrics_scale_dim(param_1, param_2, 1);
   return;
}
undefined8 af_latin_hints_compute_edges(undefined8 *param_1, uint param_2) {
   char cVar1;
   short sVar2;
   long *plVar3;
   undefined8 uVar4;
   byte *pbVar5;
   bool bVar6;
   short *psVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   long lVar12;
   byte *pbVar13;
   int iVar14;
   ulong uVar15;
   short *psVar16;
   short *psVar17;
   short *psVar18;
   undefined8 uVar19;
   ulong uVar20;
   int iVar21;
   undefined8 *puVar22;
   int iVar23;
   ulong uVar24;
   ulong uVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   byte bVar27;
   undefined1 local_61;
   short *local_48;
   long local_40;
   bVar27 = 0;
   uVar26 = 0;
   uVar24 = (ulong)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar3 = (long*)param_1[0x284];
   uVar4 = *param_1;
   lVar8 = *(long*)( af_script_classes + ( ulong ) * (uint*)( *plVar3 + 8 ) * 8 );
   uVar25 = param_1[uVar24 * 0x13d + 10];
   if (uVar25 != 0) {
      uVar26 = ( ulong ) * (uint*)( param_1 + uVar24 * 0x13d + 9 ) * 0x50 + uVar25;
   }

   *(undefined4*)( param_1 + uVar24 * 0x13d + 0xb ) = 0;
   uVar19 = param_1[3];
   if (param_2 == 0) {
      uVar19 = param_1[1];
      lVar8 = FT_DivFix(0x40);
      local_61 = 0;
   }
 else {
      local_61 = *(undefined1*)( lVar8 + 0x18 );
      lVar8 = 0;
   }

   lVar9 = FT_DivFix(0x20, uVar19);
   lVar10 = (long)(int)plVar3[uVar24 * 0x992 + 0x3d] * (long)(int)uVar19;
   lVar10 = (long)(int)( ( ulong )(lVar10 + 0x8000 + ( lVar10 >> 0x3f )) >> 0x10 );
   if (0x10 < lVar10) {
      lVar10 = 0x10;
   }

   lVar10 = FT_DivFix(lVar10, uVar19);
   if (uVar25 < uVar26) {
      uVar20 = uVar25;
      do {
         while (( ( ( lVar8 <= *(short*)( uVar20 + 10 ) && ( *(short*)( uVar20 + 4 ) <= lVar9 ) ) && ( cVar1 = *(char*)( uVar20 + 1 ) ),cVar1 != '\x04' ) ) && ( ( *(long*)( uVar20 + 0x28 ) == 0 || ( lVar8 * 3 <= (long)( *(short*)( uVar20 + 10 ) * 2 ) ) ) )) {
            if (*(uint*)( param_1 + uVar24 * 0x13d + 0xb ) != 0) {
               psVar17 = (short*)param_1[uVar24 * 0x13d + 0xc];
               psVar16 = psVar17 + ( ulong ) * (uint*)( param_1 + uVar24 * 0x13d + 0xb ) * 0x2c;
               do {
                  iVar14 = (int)*(short*)( uVar20 + 2 ) - (int)*psVar17;
                  lVar12 = (long)iVar14;
                  if (iVar14 < 0) {
                     lVar12 = -(long)iVar14;
                  }

                  if (( lVar12 < lVar10 ) && ( cVar1 == *(char*)( (long)psVar17 + 0x19 ) )) {
                     *(undefined8*)( uVar20 + 0x18 ) = *(undefined8*)( psVar17 + 0x24 );
                     *(ulong*)( *(long*)( psVar17 + 0x28 ) + 0x18 ) = uVar20;
                     *(ulong*)( psVar17 + 0x28 ) = uVar20;
                     goto LAB_001018e0;
                  }

                  psVar17 = psVar17 + 0x2c;
               }
 while ( psVar17 != psVar16 );
            }

            uVar11 = af_axis_hints_new_edge((long)param_1 + ( ulong )(-param_2 & 0x9e8) + 0x48, (int)*(short*)( uVar20 + 2 ), (int)cVar1, local_61, uVar4, &local_48);
            if ((int)uVar11 != 0) goto LAB_00101c4f;
            for (int i = 0; i < 4; i++) {
               local_48[i] = 0;
            }

            puVar22 = (undefined8*)( ( ulong )(local_48 + 4) & 0xfffffffffffffff8 );
            for (uVar15 = ( ulong )(( (int)local_48 - (int)(undefined8*)( ( ulong )(local_48 + 4) & 0xfffffffffffffff8 ) ) + 0x58U >> 3); uVar15 != 0; uVar15 = uVar15 - 1) {
               *puVar22 = 0;
               puVar22 = puVar22 + (ulong)bVar27 * -2 + 1;
            }

            *(ulong*)( local_48 + 0x24 ) = uVar20;
            *(ulong*)( local_48 + 0x28 ) = uVar20;
            *(undefined1*)( (long)local_48 + 0x19 ) = *(undefined1*)( uVar20 + 1 );
            sVar2 = *(short*)( uVar20 + 2 );
            *local_48 = sVar2;
            lVar12 = (long)sVar2 * (long)(int)uVar19;
            lVar12 = lVar12 + 0x8000 + ( lVar12 >> 0x3f ) >> 0x10;
            *(long*)( local_48 + 4 ) = lVar12;
            *(long*)( local_48 + 8 ) = lVar12;
            *(ulong*)( uVar20 + 0x18 ) = uVar20;
            uVar20 = uVar20 + 0x50;
            if (uVar26 <= uVar20) goto LAB_00101a28;
         }
;
         LAB_001018e0:uVar20 = uVar20 + 0x50;
      }
 while ( uVar20 < uVar26 );
      LAB_00101a28:psVar16 = (short*)param_1[uVar24 * 0x13d + 0xc];
      do {
         if (( *(char*)( uVar25 + 1 ) == '\x04' ) && ( *(uint*)( param_1 + uVar24 * 0x13d + 0xb ) != 0 )) {
            psVar17 = psVar16;
            do {
               iVar14 = (int)*(short*)( uVar25 + 2 ) - (int)*psVar17;
               lVar8 = (long)iVar14;
               if (iVar14 < 0) {
                  lVar8 = -(long)iVar14;
               }

               if (lVar8 < lVar10) {
                  *(undefined8*)( uVar25 + 0x18 ) = *(undefined8*)( psVar17 + 0x24 );
                  *(ulong*)( *(long*)( psVar17 + 0x28 ) + 0x18 ) = uVar25;
                  *(ulong*)( psVar17 + 0x28 ) = uVar25;
                  psVar16 = (short*)param_1[uVar24 * 0x13d + 0xc];
                  break;
               }

               psVar17 = psVar17 + 0x2c;
            }
 while ( psVar16 + ( ulong ) * (uint*)( param_1 + uVar24 * 0x13d + 0xb ) * 0x2c != psVar17 );
         }

         uVar25 = uVar25 + 0x50;
      }
 while ( uVar25 < uVar26 );
   }
 else {
      psVar16 = (short*)param_1[uVar24 * 0x13d + 0xc];
   }

   if (( psVar16 != (short*)0x0 ) && ( psVar17 = psVar16 + ( ulong ) * (uint*)( param_1 + uVar24 * 0x13d + 0xb ) * 0x2c ),psVar18 = psVar16,psVar16 < psVar17) {
      do {
         while (lVar8 = *(long*)( psVar18 + 0x24 ),lVar9 = lVar8,lVar8 == 0) {
            psVar18 = psVar18 + 0x2c;
            if (psVar17 <= psVar18) goto LAB_00101b20;
         }
;
         do {
            *(short**)( lVar9 + 0x10 ) = psVar18;
            plVar3 = (long*)( lVar9 + 0x18 );
            lVar9 = *plVar3;
         }
 while ( lVar8 != *plVar3 );
         psVar18 = psVar18 + 0x2c;
      }
 while ( psVar18 < psVar17 );
      LAB_00101b20:do {
         pbVar5 = *(byte**)( psVar16 + 0x24 );
         iVar23 = 0;
         iVar14 = 0;
         pbVar13 = pbVar5;
         do {
            while (( *pbVar13 & 1 ) != 0) {
               lVar8 = *(long*)( pbVar13 + 0x28 );
               lVar9 = *(long*)( pbVar13 + 0x20 );
               iVar14 = iVar14 + 1;
               if (lVar8 == 0) goto LAB_00101beb;
               LAB_00101b4d:psVar18 = *(short**)( lVar8 + 0x10 );
               if (( psVar18 == psVar16 ) || ( psVar18 == (short*)0x0 )) goto LAB_00101beb;
               if (*(short**)( psVar16 + 0x1c ) != (short*)0x0) {
                  bVar6 = true;
                  psVar7 = *(short**)( psVar16 + 0x1c );
                  goto LAB_00101b79;
               }

               LAB_00101bbc:*(short**)( psVar16 + 0x1c ) = psVar18;
               *(byte*)( psVar18 + 0xc ) = *(byte*)( psVar18 + 0xc ) | 2;
               LAB_00101bc4:pbVar13 = *(byte**)( pbVar13 + 0x18 );
               if (pbVar5 == pbVar13) goto LAB_00101c19;
            }
;
            lVar8 = *(long*)( pbVar13 + 0x28 );
            lVar9 = *(long*)( pbVar13 + 0x20 );
            iVar23 = iVar23 + 1;
            if (lVar8 != 0) goto LAB_00101b4d;
            LAB_00101beb:lVar8 = lVar9;
            if (( lVar8 == 0 ) || ( psVar18 = *(short**)( lVar8 + 0x10 ) ),psVar18 == (short*)0x0) goto LAB_00101bc4;
            bVar6 = false;
            psVar7 = *(short**)( psVar16 + 0x18 );
            if (*(short**)( psVar16 + 0x18 ) != (short*)0x0) {
               LAB_00101b79:psVar18 = psVar7;
               iVar21 = (int)*psVar16 - (int)*psVar18;
               lVar9 = (long)iVar21;
               if (iVar21 < 0) {
                  lVar9 = -(long)iVar21;
               }

               iVar21 = (int)*(short*)( pbVar13 + 2 ) - (int)*(short*)( lVar8 + 2 );
               lVar10 = (long)iVar21;
               if (iVar21 < 0) {
                  lVar10 = -(long)iVar21;
               }

               if (lVar10 < lVar9) {
                  psVar18 = *(short**)( lVar8 + 0x10 );
               }

               if (bVar6) goto LAB_00101bbc;
            }

            pbVar13 = *(byte**)( pbVar13 + 0x18 );
            *(short**)( psVar16 + 0x18 ) = psVar18;
         }
 while ( pbVar5 != pbVar13 );
         LAB_00101c19:*(bool*)( psVar16 + 0xc ) = 0 < iVar14 && iVar23 <= iVar14;
         if (( *(long*)( psVar16 + 0x1c ) != 0 ) && ( *(long*)( psVar16 + 0x18 ) != 0 )) {
            for (int i = 0; i < 4; i++) {
               psVar16[( i + 28 )] = 0;
            }

         }

         psVar16 = psVar16 + 0x2c;
      }
 while ( psVar16 < psVar17 );
   }

   uVar11 = 0;
   LAB_00101c4f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
void af_latin_metrics_scale_dim(long param_1, long param_2, uint param_3) {
   undefined8 *puVar1;
   ulong *puVar2;
   int iVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   long *plVar10;
   uint uVar11;
   long *plVar12;
   byte *pbVar13;
   ulong uVar14;
   int *piVar15;
   undefined8 *puVar16;
   ulong *puVar17;
   long *plVar18;
   long lVar19;
   long lVar20;
   undefined8 uVar21;
   long lVar22;
   uVar9 = (ulong)param_3;
   uVar21 = *(undefined8*)( param_2 + 0x18 );
   plVar12 = (long*)( param_2 + 8 );
   plVar18 = (long*)( param_2 + 0x18 );
   if (param_3 != 0) {
      uVar21 = *(undefined8*)( param_2 + 0x20 );
      plVar12 = (long*)( param_2 + 0x10 );
      plVar18 = (long*)( param_2 + 0x20 );
   }

   lVar22 = *plVar18;
   lVar20 = *plVar12;
   lVar6 = uVar9 * 0x4c90 + param_1;
   if (( *(long*)( lVar6 + 0x4cd0 ) != lVar20 ) || ( *(long*)( lVar6 + 0x4cd8 ) != lVar22 )) {
      lVar6 = (long)(int)lVar20;
      plVar12 = (long*)( param_1 + 0x4cd0 + ( ulong )(-param_3 & 0x4c90) );
      *plVar12 = lVar20;
      plVar12[1] = lVar22;
      if (*(uint*)( param_1 + 0x4e8c ) != 0) {
         pbVar13 = (byte*)( param_1 + 0x4ed0 );
         uVar14 = 0;
         LAB_00101d67:if (( *pbVar13 & 0x10 ) == 0) goto LAB_00101d58;
         uVar11 = *(uint*)( *(long*)( param_1 + 0x40 ) + 0x18 );
         lVar7 = *(int*)( param_1 + 0x4ea8 + uVar14 * 0x48 ) * lVar6;
         uVar14 = (ulong)(int)( ( ulong )(lVar7 + 0x8000 + ( lVar7 >> 0x3f )) >> 0x10 );
         uVar4 = ( uint ) * (ushort*)( *(long*)( *(long*)( param_1 + 8 ) + 0xa0 ) + 0x18 );
         if (( uVar11 < uVar4 || uVar4 < 6 ) || ( lVar7 = uVar11 == 0 )) {
            lVar7 = 0x28;
         }

         uVar8 = lVar7 + uVar14 & 0xffffffffffffffc0;
         if (uVar14 != uVar8) {
            if (param_3 == 1) {
               lVar7 = FT_MulDiv(lVar20, uVar8);
               uVar14 = ( ulong ) * (uint*)( param_1 + 0x48 );
               if (*(uint*)( param_1 + 0x4e8c ) != 0) {
                  puVar17 = (ulong*)( param_1 + 0x4ec0 );
                  puVar2 = puVar17 + ( ulong ) * (uint*)( param_1 + 0x4e8c ) * 9;
                  do {
                     uVar8 = -puVar17[1];
                     if ((long)-puVar17[1] < (long)*puVar17) {
                        uVar8 = *puVar17;
                     }

                     if ((long)uVar14 < (long)uVar8) {
                        uVar14 = uVar8;
                     }

                     puVar17 = puVar17 + 9;
                  }
 while ( puVar2 != puVar17 );
               }

               lVar19 = (long)( (int)lVar7 - (int)lVar20 ) * (long)(int)uVar14;
               iVar5 = (int)( ( ulong )(lVar19 + 0x8000 + ( lVar19 >> 0x3f )) >> 0x10 );
               iVar3 = -iVar5;
               if (-1 < iVar5) {
                  iVar3 = iVar5;
               }

               if (iVar3 < 0x80) {
                  *(long*)( param_1 + 0x4ce0 ) = lVar7;
                  lVar6 = (long)(int)lVar7;
                  *(undefined8*)( param_1 + 0x4ce8 ) = uVar21;
                  lVar20 = lVar7;
               }
 else {
                  *(long*)( param_1 + 0x4ce0 ) = lVar20;
                  *(long*)( param_1 + 0x4ce8 ) = lVar22;
               }

               goto LAB_00101ea9;
            }

            *(long*)( param_1 + 0x50 ) = lVar20;
            *(long*)( param_1 + 0x58 ) = lVar22;
            goto LAB_00101de0;
         }

      }

      LAB_00101e90:plVar12 = (long*)( param_1 + 0x50 + ( ulong )(-param_3 & 0x4c90) );
      *plVar12 = lVar20;
      plVar12[1] = lVar22;
      if (param_3 == 0) {
         LAB_00101de0:*(long*)( param_1 + 0x10 ) = lVar20;
         *(long*)( param_1 + 0x20 ) = lVar22;
      }
 else {
         LAB_00101ea9:*(long*)( param_1 + 0x18 ) = lVar20;
         *(long*)( param_1 + 0x28 ) = lVar22;
      }

      lVar20 = uVar9 * 0x4c90 + param_1;
      if (*(int*)( lVar20 + 0x60 ) != 0) {
         uVar11 = 0;
         piVar15 = (int*)( param_1 + 0x68 + ( ulong )(-param_3 & 0x4c90) );
         do {
            uVar11 = uVar11 + 1;
            lVar7 = (long)(int)( ( ulong )(*piVar15 * lVar6 + 0x8000 + ( *piVar15 * lVar6 >> 0x3f )) >> 0x10 );
            *(long*)( piVar15 + 2 ) = lVar7;
            *(long*)( piVar15 + 4 ) = lVar7;
            piVar15 = piVar15 + 6;
         }
 while ( uVar11 < *(uint*)( lVar20 + 0x60 ) );
      }

      lVar7 = uVar9 * 0x4c90 + param_1;
      lVar20 = *(int*)( lVar7 + 0x1f0 ) * lVar6;
      *(bool*)( lVar7 + 0x1f8 ) = (int)( ( ulong )(lVar20 + 0x8000 + ( lVar20 >> 0x3f )) >> 0x10 ) < 0x28;
      if (( param_3 == 1 ) && ( uVar11 = uVar11 != 0 )) {
         puVar16 = (undefined8*)( param_1 + 0x4e90 );
         puVar1 = puVar16 + (ulong)uVar11 * 9;
         do {
            lVar20 = (int)*puVar16 * lVar6;
            lVar7 = ( (int)*puVar16 - (int)puVar16[3] ) * lVar6;
            lVar19 = (int)puVar16[3] * lVar6;
            lVar20 = (int)( ( ulong )(lVar20 + 0x8000 + ( lVar20 >> 0x3f )) >> 0x10 ) + lVar22;
            lVar7 = (long)(int)( ( ulong )(lVar7 + 0x8000 + ( lVar7 >> 0x3f )) >> 0x10 );
            puVar16[1] = lVar20;
            puVar16[2] = lVar20;
            lVar19 = (int)( ( ulong )(lVar19 + 0x8000 + ( lVar19 >> 0x3f )) >> 0x10 ) + lVar22;
            uVar4 = *(uint*)( puVar16 + 8 );
            puVar16[4] = lVar19;
            puVar16[5] = lVar19;
            *(uint*)( puVar16 + 8 ) = uVar4 & 0xfffffffe;
            if (lVar7 + 0x30U < 0x61) {
               lVar19 = 0;
               if (lVar7 < 0) {
                  if (( lVar7 < -0x1f ) && ( lVar19 = lVar7 != -0x30 )) {
                     lVar19 = -0x20;
                  }

               }
 else if (( 0x1f < lVar7 ) && ( lVar19 = lVar7 == 0x30 )) {
                  lVar19 = 0x40;
               }

               uVar9 = lVar20 + 0x20U & 0xffffffffffffffc0;
               *(uint*)( puVar16 + 8 ) = uVar4 & 0xfffffffe | 1;
               puVar16[2] = uVar9;
               puVar16[5] = uVar9 - lVar19;
            }

            puVar16 = puVar16 + 9;
         }
 while ( puVar16 != puVar1 );
         plVar18 = (long*)( param_1 + 0x4ea0 );
         plVar12 = plVar18;
         do {
            plVar10 = plVar18;
            if (( ~*(uint *)(plVar12 + 6) & 5 ) == 0) {
               do {
                  if (( ( ( ( *(uint*)( plVar10 + 6 ) & 4 ) == 0 ) && ( ( *(uint*)( plVar10 + 6 ) & 1 ) != 0 ) ) && ( *plVar10 <= plVar12[3] ) ) && ( *plVar12 <= plVar10[3] )) {
                     *(uint*)( plVar12 + 6 ) = *(uint*)( plVar12 + 6 ) & 0xfffffffe;
                     break;
                  }

                  plVar10 = plVar10 + 9;
               }
 while ( plVar18 + (ulong)uVar11 * 9 != plVar10 );
            }

            plVar12 = plVar12 + 9;
         }
 while ( plVar18 + (ulong)uVar11 * 9 != plVar12 );
      }

   }

   return;
   LAB_00101d58:uVar11 = (int)uVar14 + 1;
   uVar14 = (ulong)uVar11;
   pbVar13 = pbVar13 + 0x48;
   if (uVar11 == *(uint*)( param_1 + 0x4e8c )) goto LAB_00101e90;
   goto LAB_00101d67;
}
void af_latin_metrics_scale(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[5];
   *(undefined8*)( param_1 + 8 ) = *param_2;
   *(undefined8*)( param_1 + 0x30 ) = uVar1;
   af_latin_metrics_scale_dim(param_1, param_2, 0);
   af_latin_metrics_scale_dim(param_1, param_2, 1);
   return;
}
void af_glyph_hints_done(long *param_1) {
   long lVar1;
   lVar1 = *param_1;
   if (lVar1 != 0) {
      param_1[9] = 0;
      if ((long*)param_1[10] != param_1 + 0xe) {
         ft_mem_free(lVar1);
         param_1[10] = 0;
      }

      param_1[0xb] = 0;
      if ((long*)param_1[0xc] != param_1 + 0xc2) {
         ft_mem_free(lVar1);
         param_1[0xc] = 0;
      }

      param_1[0x146] = 0;
      if ((long*)param_1[0x147] != param_1 + 0x14b) {
         ft_mem_free(lVar1);
         param_1[0x147] = 0;
      }

      param_1[0x148] = 0;
      if ((long*)param_1[0x149] != param_1 + 0x1ff) {
         ft_mem_free(lVar1);
         param_1[0x149] = 0;
      }

      if ((long*)param_1[8] != param_1 + 0x285) {
         ft_mem_free(lVar1);
         param_1[8] = 0;
      }

      param_1[7] = 0;
      if ((long*)param_1[6] != param_1 + 0x28d) {
         ft_mem_free(lVar1);
         param_1[6] = 0;
      }

      param_1[5] = 0;
      *param_1 = 0;
   }

   return;
}
void af_face_globals_free(long *param_1) {
   undefined8 uVar1;
   long *plVar2;
   undefined **ppuVar3;
   long lVar4;
   if (param_1 != (long*)0x0) {
      ppuVar3 = &af_style_classes;
      plVar2 = param_1 + 4;
      uVar1 = *(undefined8*)( *param_1 + 0xb8 );
      do {
         lVar4 = *plVar2;
         if (lVar4 != 0) {
            if (*(code**)( *(long*)( af_writing_system_classes + ( ulong ) * (uint*)( *ppuVar3 + 4 ) * 8 ) + 0x20 ) != (code*)0x0) {
               ( **(code**)( *(long*)( af_writing_system_classes + ( ulong ) * (uint*)( *ppuVar3 + 4 ) * 8 ) + 0x20 ) )(lVar4);
               lVar4 = *plVar2;
            }

            ft_mem_free(uVar1, lVar4);
            *plVar2 = 0;
         }

         ppuVar3 = ppuVar3 + 1;
         plVar2 = plVar2 + 1;
      }
 while ( ppuVar3 != (undefined**)&DAT_0010d1b8 );
      ft_mem_free(uVar1, param_1);
      return;
   }

   return;
}
void af_get_interface(void) {
   ft_service_list_lookup(af_services);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00102b6f) */int af_latin_hints_compute_segments(undefined8 *param_1, uint param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   ushort uVar3;
   uint uVar4;
   uint uVar5;
   undefined8 uVar6;
   ushort *puVar7;
   bool bVar8;
   bool bVar9;
   byte bVar10;
   int iVar11;
   ulong uVar12;
   ulong uVar13;
   long lVar14;
   long lVar15;
   undefined8 uVar16;
   undefined8 *puVar17;
   short sVar18;
   uint uVar19;
   int iVar20;
   ulong uVar21;
   long lVar22;
   ushort *puVar23;
   byte bVar24;
   byte bVar25;
   long lVar26;
   long lVar27;
   short sVar28;
   long lVar29;
   undefined8 *puVar30;
   ushort uVar31;
   undefined2 uVar32;
   ulong uVar33;
   long lVar34;
   long lVar35;
   long lVar36;
   long lVar37;
   undefined8 *puVar38;
   long lVar39;
   byte *pbVar40;
   byte *pbVar41;
   byte *pbVar42;
   ushort uVar43;
   long in_FS_OFFSET;
   byte bVar44;
   undefined1 auVar45[16];
   ushort *local_140;
   uint local_138;
   long local_128;
   long local_120;
   long local_110;
   long local_108;
   long local_100;
   long local_f8;
   ushort local_ec;
   ushort local_ea;
   undefined2 local_d0;
   int local_9c;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   bVar44 = 0;
   uVar33 = (ulong)param_2;
   puVar38 = (undefined8*)param_1[8];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = *param_1;
   local_98 = (undefined1[16])0x0;
   local_68 = ZEXT816(32000);
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   puVar1 = puVar38 + *(int*)( (long)param_1 + 0x3c );
   uVar12 = ( ulong )(*(uint*)( param_1[0x284] + 0x48 ) >> 1) / 7;
   uVar19 = *(uint*)( param_1 + uVar33 * 0x13d + 0xd );
   if ((int)uVar19 < 1) {
      uVar19 = -uVar19;
   }

   *(undefined4*)( param_1 + uVar33 * 0x13d + 9 ) = 0;
   if (param_2 == 0) {
      uVar13 = param_1[6];
      uVar21 = (long)*(int*)( (long)param_1 + 0x2c ) * 0x50 + uVar13;
      for (; uVar13 < uVar21; uVar13 = uVar13 + 0x50) {
         *(long*)( uVar13 + 0x30 ) = (long)*(short*)( uVar13 + 0x18 );
         *(long*)( uVar13 + 0x38 ) = (long)*(short*)( uVar13 + 0x1a );
      }

   }
 else {
      uVar13 = param_1[6];
      uVar21 = (long)*(int*)( (long)param_1 + 0x2c ) * 0x50 + uVar13;
      for (; uVar13 < uVar21; uVar13 = uVar13 + 0x50) {
         *(long*)( uVar13 + 0x30 ) = (long)*(short*)( uVar13 + 0x1a );
         *(long*)( uVar13 + 0x38 ) = (long)*(short*)( uVar13 + 0x18 );
      }

   }

   if (puVar38 < puVar1) {
      puVar2 = (undefined8*)( (long)param_1 + ( ulong )(-param_2 & 0x9e8) + 0x70 );
      lVar14 = uVar33 * 0x9e8;
      pbVar41 = (byte*)0x0;
      local_138 = uVar19;
      LAB_00102498:local_140 = (ushort*)*puVar38;
      puVar23 = *(ushort**)( local_140 + 0x24 );
      bVar25 = *(byte*)( (long)puVar23 + 3 );
      bVar10 = -bVar25;
      if ('\0' < (char)bVar25) {
         bVar10 = bVar25;
      }

      if (bVar10 == uVar19) {
         bVar10 = *(byte*)( (long)local_140 + 3 );
         bVar24 = -bVar10;
         if ('\0' < (char)bVar10) {
            bVar24 = bVar10;
         }

         if (bVar24 == uVar19) {
            while (true) {
               bVar10 = -bVar25;
               if ('\0' < (char)bVar25) {
                  bVar10 = bVar25;
               }

               if (bVar10 != uVar19) break;
               if (local_140 == puVar23) goto LAB_001024bf;
               puVar23 = *(ushort**)( puVar23 + 0x24 );
               bVar25 = *(byte*)( (long)puVar23 + 3 );
            }
;
            local_140 = *(ushort**)( puVar23 + 0x20 );
         }

      }

      LAB_001024bf:bVar9 = false;
      local_ea = 0;
      pbVar42 = (byte*)0x0;
      lVar37 = 32000;
      uVar31 = 0;
      local_ec = 0;
      uVar43 = 0;
      lVar22 = 32000;
      bVar8 = false;
      local_f8 = -32000;
      lVar36 = -32000;
      lVar29 = -32000;
      lVar26 = -32000;
      local_100 = 32000;
      lVar15 = 32000;
      local_108 = -32000;
      local_110 = 32000;
      local_120 = -32000;
      local_128 = 32000;
      puVar23 = local_140;
      do {
         pbVar40 = pbVar41;
         if (bVar8) {
            lVar39 = *(long*)( puVar23 + 0x18 );
            uVar3 = *puVar23;
            if (lVar39 < lVar15) {
               lVar15 = lVar39;
            }

            if (lVar26 < lVar39) {
               lVar26 = lVar39;
            }

            lVar39 = *(long*)( puVar23 + 0x1c );
            if (lVar39 < lVar22) {
               lVar22 = lVar39;
               uVar31 = uVar3;
            }

            if (lVar29 < lVar39) {
               lVar29 = lVar39;
               uVar43 = uVar3;
            }

            if (( uVar3 & 3 ) == 0) {
               if (lVar39 < lVar37) {
                  lVar37 = lVar39;
               }

               if (lVar36 < lVar39) {
                  lVar36 = lVar39;
               }

            }

            if (( (int)*(char*)( (long)puVar23 + 3 ) != local_138 ) || ( local_140 == puVar23 )) {
               sVar28 = (short)lVar29;
               sVar18 = (short)lVar22;
               if (( pbVar42 == (byte*)0x0 ) || ( *(long*)( pbVar41 + 0x40 ) != *(long*)( pbVar42 + 0x48 ) )) {
                  *(ushort**)( pbVar41 + 0x48 ) = puVar23;
                  *(short*)( pbVar41 + 2 ) = (short)( lVar26 + lVar15 >> 1 );
                  *(short*)( pbVar41 + 4 ) = (short)( lVar26 - lVar15 >> 1 );
                  if (( ( ( uVar31 | uVar43 ) & 3 ) != 0 ) && ( lVar36 - lVar37 < (long)uVar12 )) {
                     *pbVar41 = *pbVar41 | 1;
                  }

                  bVar8 = false;
                  *(short*)( pbVar41 + 6 ) = sVar18;
                  *(short*)( pbVar41 + 8 ) = sVar28;
                  *(short*)( pbVar41 + 10 ) = sVar28 - sVar18;
                  pbVar40 = (byte*)0x0;
                  pbVar42 = pbVar41;
                  local_128 = lVar15;
                  local_120 = lVar26;
                  local_110 = lVar22;
                  local_108 = lVar29;
                  local_100 = lVar37;
                  local_f8 = lVar36;
                  local_ec = uVar31;
                  local_ea = uVar43;
               }
 else {
                  lVar39 = local_128;
                  if (lVar15 <= local_128) {
                     lVar39 = lVar15;
                  }

                  lVar27 = local_120;
                  if (local_120 <= lVar26) {
                     lVar27 = lVar26;
                  }

                  uVar32 = ( undefined2 )(lVar39 + lVar27 >> 1);
                  local_d0 = ( undefined2 )(lVar27 - lVar39 >> 1);
                  if (*(char*)( *(long*)( pbVar42 + 0x48 ) + 2 ) == (char)puVar23[1]) {
                     if (local_110 < lVar22) {
                        lVar22 = local_110;
                        uVar31 = local_ec;
                     }

                     if (lVar29 < local_108) {
                        lVar29 = local_108;
                        uVar43 = local_ea;
                     }

                     *(ushort**)( pbVar42 + 0x48 ) = puVar23;
                     *(undefined2*)( pbVar42 + 2 ) = uVar32;
                     if (local_100 < lVar37) {
                        lVar37 = local_100;
                     }

                     if (lVar36 < local_f8) {
                        lVar36 = local_f8;
                     }

                     *(undefined2*)( pbVar42 + 4 ) = local_d0;
                     if (( ( ( uVar31 | uVar43 ) & 3 ) == 0 ) || ( (long)uVar12 <= lVar36 - lVar37 )) {
                        bVar25 = *pbVar42 & 0xfe;
                     }
 else {
                        bVar25 = *pbVar42 | 1;
                     }

                     *pbVar42 = bVar25;
                     *(short*)( pbVar42 + 6 ) = (short)lVar22;
                     *(short*)( pbVar42 + 10 ) = (short)lVar29 - (short)lVar22;
                     *(short*)( pbVar42 + 8 ) = (short)lVar29;
                     lVar15 = lVar39;
                     lVar26 = lVar27;
                  }
 else {
                     lVar34 = local_108 - local_110;
                     if (lVar34 < 1) {
                        lVar34 = -lVar34;
                     }

                     lVar35 = lVar29 - lVar22;
                     if (lVar35 < 1) {
                        lVar35 = -lVar35;
                     }

                     local_128 = lVar39;
                     local_120 = lVar27;
                     if (lVar35 < lVar34) {
                        *(ushort**)( pbVar42 + 0x48 ) = puVar23;
                        *(undefined2*)( pbVar42 + 2 ) = uVar32;
                        *(undefined2*)( pbVar42 + 4 ) = local_d0;
                     }
 else {
                        *(ushort**)( pbVar41 + 0x48 ) = puVar23;
                        *(undefined2*)( pbVar41 + 2 ) = uVar32;
                        *(undefined2*)( pbVar41 + 4 ) = local_d0;
                        if (( ( ( uVar31 | uVar43 ) & 3 ) != 0 ) && ( lVar36 - lVar37 < (long)uVar12 )) {
                           *pbVar41 = *pbVar41 | 1;
                        }

                        *(short*)( pbVar41 + 6 ) = sVar18;
                        *(short*)( pbVar41 + 8 ) = sVar28;
                        *(short*)( pbVar41 + 10 ) = sVar28 - sVar18;
                        uVar16 = *(undefined8*)( pbVar41 + 8 );
                        *(undefined8*)pbVar42 = *(undefined8*)pbVar41;
                        *(undefined8*)( pbVar42 + 8 ) = uVar16;
                        for (int i = 0; i < 4; i++) {
                           uVar16 = *(undefined8*)( pbVar41 + ( 16*i + 24 ) );
                           *(undefined8*)( pbVar42 + ( 16*i + 16 ) ) = *(undefined8*)( pbVar41 + ( 16*i + 16 ) );
                           *(undefined8*)( pbVar42 + ( 16*i + 24 ) ) = uVar16;
                        }

                        lVar15 = lVar39;
                        lVar26 = lVar27;
                        local_110 = lVar22;
                        local_108 = lVar29;
                        local_100 = lVar37;
                        local_f8 = lVar36;
                        local_ec = uVar31;
                        local_ea = uVar43;
                     }

                  }

                  pbVar40 = (byte*)0x0;
                  bVar8 = false;
                  *(int*)( param_1 + uVar33 * 0x13d + 9 ) = *(int*)( param_1 + uVar33 * 0x13d + 9 ) + -1;
               }

               goto LAB_00102681;
            }

         }
 else {
            LAB_00102681:pbVar41 = pbVar40;
            if (local_140 == puVar23) {
               if (bVar9) goto LAB_00102b78;
               bVar9 = true;
            }

         }

         if (!bVar8) {
            bVar25 = *(byte*)( (long)puVar23 + 3 );
            bVar10 = -bVar25;
            if ('\0' < (char)bVar25) {
               bVar10 = bVar25;
            }

            if (( bVar10 == uVar19 ) || ( *(ushort**)( puVar23 + 0x24 ) == puVar23 )) {
               uVar4 = *(uint*)( param_1 + uVar33 * 0x13d + 9 );
               if (1000 < uVar4) {
                  *(undefined4*)( param_1 + uVar33 * 0x13d + 9 ) = 0;
                  break;
               }

               local_138 = (uint)(char)bVar25;
               puVar17 = (undefined8*)param_1[uVar33 * 0x13d + 10];
               local_9c = 0;
               if (uVar4 < 0x12) {
                  if (puVar17 == (undefined8*)0x0) {
                     *(undefined4*)( (long)param_1 + lVar14 + 0x4c ) = 0x12;
                     *(uint*)( param_1 + uVar33 * 0x13d + 9 ) = uVar4 + 1;
                     param_1[uVar33 * 0x13d + 10] = puVar2;
                     pbVar41 = (byte*)( puVar2 + (ulong)uVar4 * 10 );
                  }
 else {
                     LAB_001026ee:*(uint*)( param_1 + uVar33 * 0x13d + 9 ) = uVar4 + 1;
                     pbVar41 = (byte*)( puVar17 + (ulong)uVar4 * 10 );
                  }

               }
 else {
                  uVar5 = *(uint*)( (long)param_1 + lVar14 + 0x4c );
                  if (uVar4 < uVar5) goto LAB_001026ee;
                  iVar20 = uVar5 + 4 + ( uVar5 >> 2 );
                  if (puVar2 == puVar17) {
                     puVar17 = (undefined8*)ft_mem_realloc(uVar6, 0x50, 0, iVar20, 0, &local_9c);
                     param_1[uVar33 * 0x13d + 10] = puVar17;
                     iVar11 = local_9c;
                     if (local_9c != 0) goto LAB_00102ae9;
                     *puVar17 = *puVar2;
                     puVar17[0xb3] = puVar2[0xb3];
                     lVar15 = (long)puVar17 - (long)( ( ulong )(puVar17 + 1) & 0xfffffffffffffff8 );
                     puVar30 = (undefined8*)( (long)puVar2 - lVar15 );
                     puVar17 = (undefined8*)( ( ulong )(puVar17 + 1) & 0xfffffffffffffff8 );
                     for (uVar13 = ( ulong )((int)lVar15 + 0x5a0U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
                        *puVar17 = *puVar30;
                        puVar30 = puVar30 + (ulong)bVar44 * -2 + 1;
                        puVar17 = puVar17 + (ulong)bVar44 * -2 + 1;
                     }

                     *(int*)( (long)param_1 + lVar14 + 0x4c ) = iVar20;
                     uVar4 = *(uint*)( param_1 + uVar33 * 0x13d + 9 );
                     *(uint*)( param_1 + uVar33 * 0x13d + 9 ) = uVar4 + 1;
                     pbVar41 = (byte*)( (ulong)uVar4 * 0x50 + param_1[uVar33 * 0x13d + 10] );
                  }
 else {
                     uVar16 = ft_mem_realloc(uVar6, 0x50);
                     param_1[uVar33 * 0x13d + 10] = uVar16;
                     iVar11 = local_9c;
                     if (local_9c != 0) goto LAB_00102ae9;
                     uVar4 = *(uint*)( param_1 + uVar33 * 0x13d + 9 );
                     *(int*)( (long)param_1 + lVar14 + 0x4c ) = iVar20;
                     *(uint*)( param_1 + uVar33 * 0x13d + 9 ) = uVar4 + 1;
                     pbVar41 = (byte*)( (ulong)uVar4 * 0x50 + param_1[uVar33 * 0x13d + 10] );
                  }

               }

               if (pbVar42 != (byte*)0x0) {
                  pbVar42 = pbVar41 + -0x50;
               }

               *(undefined8*)pbVar41 = local_98._0_8_;
               *(undefined8*)( pbVar41 + 8 ) = local_98._8_8_;
               auVar45._8_8_ = puVar23;
               auVar45._0_8_ = puVar23;
               pbVar41[1] = bVar25;
               uVar31 = *puVar23;
               *(undefined1(*) [16])( pbVar41 + 0x40 ) = auVar45;
               lVar15 = *(long*)( puVar23 + 0x18 );
               lVar22 = *(long*)( puVar23 + 0x1c );
               puVar7 = *(ushort**)( puVar23 + 0x24 );
               *(undefined8*)( pbVar41 + 0x10 ) = local_88._0_8_;
               *(undefined8*)( pbVar41 + 0x18 ) = local_88._8_8_;
               *(undefined8*)( pbVar41 + 0x20 ) = local_78._0_8_;
               *(undefined8*)( pbVar41 + 0x28 ) = local_78._8_8_;
               *(undefined8*)( pbVar41 + 0x30 ) = local_68._0_8_;
               *(undefined8*)( pbVar41 + 0x38 ) = local_68._8_8_;
               lVar26 = lVar15;
               lVar29 = lVar22;
               uVar43 = uVar31;
               if (( uVar31 & 3 ) == 0) {
                  lVar36 = lVar22;
                  lVar37 = lVar22;
                  if (puVar23 == puVar7) {
                     *(short*)( pbVar41 + 2 ) = (short)lVar15;
                     LAB_0010292b:auVar45 = pshuflw(ZEXT416((uint)lVar22), ZEXT416((uint)lVar22), 0);
                     pbVar41[10] = 0;
                     pbVar41[0xb] = 0;
                     *(int*)( pbVar41 + 6 ) = auVar45._0_4_;
                     pbVar41 = (byte*)0x0;
                  }
 else {
                     bVar8 = true;
                  }

               }
 else {
                  if (puVar23 == puVar7) {
                     *pbVar41 = *pbVar41 | 1;
                     lVar36 = -32000;
                     lVar37 = 32000;
                     *(short*)( pbVar41 + 2 ) = (short)lVar15;
                     goto LAB_0010292b;
                  }

                  lVar36 = -32000;
                  lVar37 = 32000;
                  bVar8 = true;
               }

            }

         }

         puVar23 = *(ushort**)( puVar23 + 0x20 );
      }
 while ( true );
   }

   LAB_00102d08:iVar11 = 0;
   LAB_00102ae9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102b78:puVar38 = puVar38 + 1;
   if (puVar1 <= puVar38) goto code_r0x00102b95;
   goto LAB_00102498;
   code_r0x00102b95:uVar12 = param_1[uVar33 * 0x13d + 10];
   if (uVar12 != 0) {
      uVar33 = ( ulong ) * (uint*)( param_1 + uVar33 * 0x13d + 9 ) * 0x50 + uVar12;
      for (; uVar12 < uVar33; uVar12 = uVar12 + 0x50) {
         lVar14 = *(long*)( uVar12 + 0x48 );
         lVar15 = *(long*)( *(long*)( uVar12 + 0x40 ) + 0x38 );
         lVar22 = *(long*)( lVar14 + 0x38 );
         lVar26 = *(long*)( *(long*)( *(long*)( uVar12 + 0x40 ) + 0x48 ) + 0x38 );
         if (lVar15 < lVar22) {
            if (lVar26 < lVar15) {
               *(short*)( uVar12 + 10 ) = *(short*)( uVar12 + 10 ) + (short)( lVar15 - lVar26 >> 1 );
            }

            lVar14 = *(long*)( *(long*)( lVar14 + 0x40 ) + 0x38 );
            if (lVar22 < lVar14) {
               *(short*)( uVar12 + 10 ) = *(short*)( uVar12 + 10 ) + (short)( lVar14 - lVar22 >> 1 );
            }

         }
 else {
            if (lVar15 < lVar26) {
               *(short*)( uVar12 + 10 ) = *(short*)( uVar12 + 10 ) + (short)( lVar26 - lVar15 >> 1 );
            }

            lVar14 = *(long*)( *(long*)( lVar14 + 0x40 ) + 0x38 );
            if (lVar14 < lVar22) {
               *(short*)( uVar12 + 10 ) = *(short*)( uVar12 + 10 ) + (short)( lVar22 - lVar14 >> 1 );
            }

         }

      }

   }

   goto LAB_00102d08;
}
undefined8 af_cjk_hints_detect_features(undefined8 *param_1, uint param_2) {
   long *plVar1;
   byte bVar2;
   char cVar3;
   ushort uVar4;
   ushort uVar5;
   short sVar6;
   short sVar7;
   uint uVar8;
   long lVar9;
   undefined8 uVar10;
   bool bVar11;
   undefined8 uVar12;
   long lVar13;
   ulong uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   long lVar18;
   short *psVar19;
   ushort *puVar20;
   ulong uVar21;
   ulong uVar22;
   short *psVar23;
   byte *pbVar24;
   ulong uVar25;
   int iVar26;
   ulong uVar27;
   long lVar28;
   long lVar29;
   short *psVar30;
   int iVar31;
   ulong uVar32;
   ulong uVar33;
   undefined8 *puVar34;
   int iVar35;
   byte *pbVar36;
   short *psVar37;
   long in_FS_OFFSET;
   byte bVar38;
   short *local_48;
   bVar38 = 0;
   uVar16 = (ulong)param_2;
   lVar9 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar24 = (byte*)param_1[uVar16 * 0x13d + 10];
   if (pbVar24 == (byte*)0x0) {
      uVar12 = af_latin_hints_compute_segments(param_1, uVar16);
      if ((int)uVar12 != 0) goto LAB_0010329e;
   }
 else {
      uVar8 = *(uint*)( param_1 + uVar16 * 0x13d + 9 );
      uVar12 = af_latin_hints_compute_segments(param_1, uVar16);
      if ((int)uVar12 != 0) goto LAB_0010329e;
      pbVar36 = pbVar24 + (ulong)uVar8 * 0x50;
      for (; pbVar24 < pbVar36; pbVar24 = pbVar24 + 0x50) {
         bVar2 = *pbVar24;
         puVar20 = *(ushort**)( pbVar24 + 0x40 );
         uVar4 = *puVar20;
         *pbVar24 = bVar2 & 0xfe;
         if (puVar20 != *(ushort**)( pbVar24 + 0x48 )) {
            puVar20 = *(ushort**)( puVar20 + 0x20 );
            uVar5 = *puVar20;
            if (( ( uVar4 | uVar5 ) & 3 ) != 0) {
               do {
                  uVar4 = uVar5 & 3;
                  if (*(ushort**)( pbVar24 + 0x48 ) == puVar20) {
                     *pbVar24 = bVar2 & 0xfe | 1;
                     break;
                  }

                  puVar20 = *(ushort**)( puVar20 + 0x20 );
                  uVar5 = *puVar20;
               }
 while ( uVar4 != 0 || ( uVar5 & 3 ) != 0 );
            }

         }

      }

   }

   uVar25 = 0;
   uVar27 = param_1[uVar16 * 0x13d + 10];
   if (uVar27 != 0) {
      uVar25 = ( ulong ) * (uint*)( param_1 + uVar16 * 0x13d + 9 ) * 0x50 + uVar27;
   }

   iVar26 = *(int*)( param_1 + uVar16 * 0x13d + 0xd );
   uVar8 = *(uint*)( param_1[0x284] + 0x48 );
   if (param_2 == 0) {
      uVar12 = param_1[1];
   }
 else {
      uVar12 = param_1[3];
   }

   lVar13 = FT_DivFix(0xc0, uVar12);
   uVar21 = uVar27;
   if (uVar27 < uVar25) {
      do {
         while (cVar3 = *(char*)( uVar21 + 1 ),uVar14 = uVar27,uVar22 = uVar27,iVar26 == cVar3) {
            do {
               if (( ( uVar21 != uVar14 ) && ( (int)*(char*)( uVar14 + 1 ) + (int)cVar3 == 0 ) ) && ( iVar35 = -1 < iVar35 )) {
                  sVar6 = *(short*)( uVar21 + 8 );
                  if (*(short*)( uVar14 + 8 ) < *(short*)( uVar21 + 8 )) {
                     sVar6 = *(short*)( uVar14 + 8 );
                  }

                  sVar7 = *(short*)( uVar21 + 6 );
                  if (*(short*)( uVar21 + 6 ) < *(short*)( uVar14 + 6 )) {
                     sVar7 = *(short*)( uVar14 + 6 );
                  }

                  lVar28 = (long)sVar6 - (long)sVar7;
                  if ((long)(ulong)uVar8 >> 8 <= lVar28) {
                     lVar17 = (long)iVar35;
                     lVar29 = lVar17 * 8;
                     if (( lVar29 < *(long*)( uVar21 + 0x30 ) * 9 ) && ( ( lVar29 < *(long*)( uVar21 + 0x30 ) * 7 || ( *(long*)( uVar21 + 0x38 ) < lVar28 ) ) )) {
                        *(long*)( uVar21 + 0x30 ) = lVar17;
                        *(long*)( uVar21 + 0x38 ) = lVar28;
                        *(ulong*)( uVar21 + 0x20 ) = uVar14;
                     }

                     if (( lVar29 < *(long*)( uVar14 + 0x30 ) * 9 ) && ( ( lVar29 < *(long*)( uVar14 + 0x30 ) * 7 || ( *(long*)( uVar14 + 0x38 ) < lVar28 ) ) )) {
                        *(long*)( uVar14 + 0x30 ) = lVar17;
                        *(long*)( uVar14 + 0x38 ) = lVar28;
                        *(ulong*)( uVar14 + 0x20 ) = uVar21;
                     }

                  }

               }

               uVar14 = uVar14 + 0x50;
            }
 while ( uVar14 < uVar25 );
            uVar21 = uVar21 + 0x50;
            if (uVar25 <= uVar21) goto LAB_00102f8d;
         }
;
         uVar21 = uVar21 + 0x50;
      }
 while ( uVar21 < uVar25 );
      LAB_00102f8d:do {
         lVar28 = *(long*)( uVar22 + 0x20 );
         if (( lVar28 != 0 ) && ( *(ulong*)( lVar28 + 0x20 ) == uVar22 )) {
            sVar6 = *(short*)( lVar28 + 2 );
            sVar7 = *(short*)( uVar22 + 2 );
            if (( sVar7 < sVar6 ) && ( lVar29 = lVar29 < lVar13 )) {
               uVar21 = uVar27;
               do {
                  while (( ( ( ( ( uVar22 != uVar21 && ( *(short*)( uVar21 + 2 ) <= sVar7 ) ) && ( uVar14 = *(ulong*)( uVar21 + 0x20 ) ),uVar14 != 0 ) ) && ( ( *(ulong*)( uVar14 + 0x20 ) == uVar21 && ( sVar6 <= *(short*)( uVar14 + 2 ) ) ) ) ) && ( ( sVar6 != *(short*)( uVar14 + 2 ) || ( sVar7 != *(short*)( uVar21 + 2 ) ) ) ) ) && ( ( lVar17 = *(long*)( uVar21 + 0x30 ) ),lVar29 < lVar17 && ( SBORROW8(lVar17, lVar29 * 4) != lVar17 + lVar29 * -4 < 0 ) )) {
                     uVar32 = uVar27;
                     if (SBORROW8(*(long*)( uVar22 + 0x38 ), *(long*)( uVar21 + 0x38 ) * 3) != *(long*)( uVar22 + 0x38 ) + *(long*)( uVar21 + 0x38 ) * -3 < 0) {
                        *(undefined8*)( lVar28 + 0x20 ) = 0;
                        *(undefined8*)( uVar22 + 0x20 ) = 0;
                        goto LAB_00102f80;
                     }

                     do {
                        while (*(ulong*)( uVar32 + 0x20 ) == uVar21) {
                           *(undefined8*)( uVar32 + 0x20 ) = 0;
                           uVar33 = uVar32 + 0x50;
                           *(long*)( uVar32 + 0x28 ) = lVar28;
                           uVar32 = uVar33;
                           if (uVar25 <= uVar33) goto LAB_00103060;
                        }
;
                        if (uVar14 == *(ulong*)( uVar32 + 0x20 )) {
                           *(undefined8*)( uVar32 + 0x20 ) = 0;
                           *(ulong*)( uVar32 + 0x28 ) = uVar22;
                        }

                        uVar32 = uVar32 + 0x50;
                     }
 while ( uVar32 < uVar25 );
                     LAB_00103060:uVar21 = uVar21 + 0x50;
                     if (uVar25 <= uVar21) goto LAB_00103071;
                  }
;
                  uVar21 = uVar21 + 0x50;
               }
 while ( uVar21 < uVar25 );
               LAB_00103071:uVar22 = uVar22 + 0x50;
               if (uVar25 <= uVar22) break;
               goto LAB_00102f8d;
            }

         }

         LAB_00102f80:uVar22 = uVar22 + 0x50;
      }
 while ( uVar22 < uVar25 );
      do {
         lVar28 = *(long*)( uVar27 + 0x20 );
         if (( lVar28 != 0 ) && ( *(ulong*)( lVar28 + 0x20 ) != uVar27 )) {
            lVar29 = *(long*)( lVar28 + 0x30 );
            *(undefined8*)( uVar27 + 0x20 ) = 0;
            if (( lVar29 < lVar13 ) || ( *(long*)( uVar27 + 0x30 ) < lVar29 * 4 )) {
               *(undefined8*)( uVar27 + 0x28 ) = *(undefined8*)( lVar28 + 0x20 );
            }

         }

         uVar27 = uVar27 + 0x50;
      }
 while ( uVar27 < uVar25 );
   }

   lVar13 = param_1[0x284];
   uVar27 = 0;
   uVar10 = *param_1;
   uVar25 = param_1[uVar16 * 0x13d + 10];
   if (uVar25 != 0) {
      uVar27 = uVar25 + ( ulong ) * (uint*)( param_1 + uVar16 * 0x13d + 9 ) * 0x50;
   }

   *(undefined4*)( param_1 + uVar16 * 0x13d + 0xb ) = 0;
   if (param_2 == 0) {
      iVar26 = (int)param_1[1];
   }
 else {
      iVar26 = (int)param_1[3];
   }

   lVar13 = *(long*)( lVar13 + 0x1e8 + uVar16 * 0x3bf0 );
   lVar28 = (long)(int)lVar13 * (long)iVar26;
   if (0x10 < (int)( ( ulong )(lVar28 + 0x8000 + ( lVar28 >> 0x3f )) >> 0x10 )) {
      lVar13 = FT_DivFix(0x10);
   }

   for (; uVar25 < uVar27; uVar25 = uVar25 + 0x50) {
      if (*(uint*)( param_1 + uVar16 * 0x13d + 0xb ) == 0) {
         LAB_00103480:uVar12 = af_axis_hints_new_edge((long)param_1 + ( ulong )(-param_2 & 0x9e8) + 0x48, (int)*(short*)( uVar25 + 2 ), (int)*(char*)( uVar25 + 1 ), 0, uVar10);
         if ((int)uVar12 != 0) goto LAB_0010329e;
         for (int i = 0; i < 4; i++) {
            local_48[i] = 0;
         }

         puVar34 = (undefined8*)( ( ulong )(local_48 + 4) & 0xfffffffffffffff8 );
         for (uVar21 = ( ulong )(( (int)local_48 - (int)(undefined8*)( ( ulong )(local_48 + 4) & 0xfffffffffffffff8 ) ) + 0x58U >> 3); uVar21 != 0; uVar21 = uVar21 - 1) {
            *puVar34 = 0;
            puVar34 = puVar34 + (ulong)bVar38 * -2 + 1;
         }

         *(ulong*)( local_48 + 0x24 ) = uVar25;
         *(ulong*)( local_48 + 0x28 ) = uVar25;
         *(undefined1*)( (long)local_48 + 0x19 ) = *(undefined1*)( uVar25 + 1 );
         sVar6 = *(short*)( uVar25 + 2 );
         *local_48 = sVar6;
         lVar28 = (long)sVar6 * (long)iVar26;
         lVar28 = lVar28 + 0x8000 + ( lVar28 >> 0x3f ) >> 0x10;
         *(long*)( local_48 + 4 ) = lVar28;
         *(long*)( local_48 + 8 ) = lVar28;
         *(ulong*)( uVar25 + 0x18 ) = uVar25;
      }
 else {
         psVar23 = (short*)param_1[uVar16 * 0x13d + 0xc];
         psVar30 = psVar23 + ( ulong ) * (uint*)( param_1 + uVar16 * 0x13d + 0xb ) * 0x2c;
         lVar28 = 0xffff;
         psVar19 = (short*)0x0;
         do {
            lVar29 = lVar28;
            psVar37 = psVar19;
            if (*(char*)( (long)psVar23 + 0x19 ) == *(char*)( uVar25 + 1 )) {
               iVar35 = (int)*(short*)( uVar25 + 2 ) - (int)*psVar23;
               lVar17 = (long)iVar35;
               if (iVar35 < 0) {
                  lVar17 = -(long)iVar35;
               }

               lVar15 = lVar28;
               if (lVar13 <= lVar28) {
                  lVar15 = lVar13;
               }

               if (( lVar17 < lVar15 ) && ( lVar29 = lVar17 ),psVar37 = psVar23,*(long*)( uVar25 + 0x20 ) != 0) {
                  lVar18 = 0;
                  lVar15 = *(long*)( psVar23 + 0x24 );
                  do {
                     if (*(long*)( lVar15 + 0x20 ) != 0) {
                        sVar6 = *(short*)( *(long*)( uVar25 + 0x20 ) + 2 );
                        sVar7 = *(short*)( *(long*)( lVar15 + 0x20 ) + 2 );
                        if (sVar7 < sVar6) {
                           iVar35 = (int)sVar6 - (int)sVar7;
                        }
 else {
                           iVar35 = (int)sVar7 - (int)sVar6;
                        }

                        lVar18 = (long)iVar35;
                        lVar29 = lVar28;
                        psVar37 = psVar19;
                        if (lVar13 <= lVar18) goto LAB_001031d0;
                     }

                     lVar15 = *(long*)( lVar15 + 0x18 );
                  }
 while ( *(long*)( psVar23 + 0x24 ) != lVar15 );
                  lVar29 = lVar28;
                  psVar37 = psVar19;
                  if (lVar18 < lVar13) {
                     lVar29 = lVar17;
                     psVar37 = psVar23;
                  }

               }

            }

            LAB_001031d0:psVar23 = psVar23 + 0x2c;
            lVar28 = lVar29;
            psVar19 = psVar37;
         }
 while ( psVar30 != psVar23 );
         if (psVar37 == (short*)0x0) goto LAB_00103480;
         *(undefined8*)( uVar25 + 0x18 ) = *(undefined8*)( psVar37 + 0x24 );
         *(ulong*)( *(long*)( psVar37 + 0x28 ) + 0x18 ) = uVar25;
         *(ulong*)( psVar37 + 0x28 ) = uVar25;
      }

   }

   psVar30 = (short*)param_1[uVar16 * 0x13d + 0xc];
   if (( psVar30 != (short*)0x0 ) && ( psVar23 = psVar30 + ( ulong ) * (uint*)( param_1 + uVar16 * 0x13d + 0xb ) * 0x2c ),psVar19 = psVar30,psVar30 < psVar23) {
      do {
         while (lVar13 = *(long*)( psVar19 + 0x24 ),lVar28 = lVar13,lVar13 != 0) {
            do {
               *(short**)( lVar28 + 0x10 ) = psVar19;
               plVar1 = (long*)( lVar28 + 0x18 );
               lVar28 = *plVar1;
            }
 while ( lVar13 != *plVar1 );
            psVar19 = psVar19 + 0x2c;
            if (psVar23 <= psVar19) goto LAB_00103380;
         }
;
         psVar19 = psVar19 + 0x2c;
      }
 while ( psVar19 < psVar23 );
      LAB_00103380:do {
         pbVar24 = *(byte**)( psVar30 + 0x24 );
         bVar11 = false;
         if (pbVar24 != (byte*)0x0) {
            iVar26 = 0;
            iVar35 = 0;
            pbVar36 = pbVar24;
            do {
               if (( *pbVar36 & 1 ) == 0) {
                  lVar13 = *(long*)( pbVar36 + 0x28 );
                  iVar26 = iVar26 + 1;
                  if (lVar13 == 0) goto LAB_0010342b;
                  LAB_001033ad:psVar19 = *(short**)( lVar13 + 0x10 );
                  if (psVar19 == psVar30) goto LAB_0010342b;
                  bVar11 = true;
                  psVar37 = *(short**)( psVar30 + 0x1c );
                  if (*(short**)( psVar30 + 0x1c ) != (short*)0x0) goto LAB_001033c9;
                  LAB_00103405:*(short**)( psVar30 + 0x1c ) = psVar19;
                  *(byte*)( psVar19 + 0xc ) = *(byte*)( psVar19 + 0xc ) | 2;
               }
 else {
                  lVar13 = *(long*)( pbVar36 + 0x28 );
                  iVar35 = iVar35 + 1;
                  if (lVar13 != 0) goto LAB_001033ad;
                  LAB_0010342b:lVar13 = *(long*)( pbVar36 + 0x20 );
                  if (lVar13 != 0) {
                     bVar11 = false;
                     psVar37 = *(short**)( psVar30 + 0x18 );
                     if (*(short**)( psVar30 + 0x18 ) == (short*)0x0) {
                        psVar19 = *(short**)( lVar13 + 0x10 );
                     }
 else {
                        LAB_001033c9:psVar19 = psVar37;
                        iVar31 = (int)*psVar30 - (int)*psVar19;
                        sVar6 = *(short*)( lVar13 + 2 );
                        lVar28 = (long)iVar31;
                        if (iVar31 < 0) {
                           lVar28 = -(long)iVar31;
                        }

                        sVar7 = *(short*)( pbVar36 + 2 );
                        if (sVar6 < sVar7) {
                           iVar31 = (int)sVar7 - (int)sVar6;
                        }
 else {
                           iVar31 = (int)sVar6 - (int)sVar7;
                        }

                        if (iVar31 < lVar28) {
                           psVar19 = *(short**)( lVar13 + 0x10 );
                        }

                        if (bVar11) goto LAB_00103405;
                     }

                     *(short**)( psVar30 + 0x18 ) = psVar19;
                  }

               }

               pbVar36 = *(byte**)( pbVar36 + 0x18 );
            }
 while ( pbVar24 != pbVar36 );
            bVar11 = 0 < iVar35 && iVar26 <= iVar35;
         }

         *(bool*)( psVar30 + 0xc ) = bVar11;
         if (( *(long*)( psVar30 + 0x1c ) != 0 ) && ( *(long*)( psVar30 + 0x18 ) != 0 )) {
            for (int i = 0; i < 4; i++) {
               psVar30[( i + 28 )] = 0;
            }

         }

         psVar30 = psVar30 + 0x2c;
      }
 while ( psVar30 < psVar23 );
   }

   uVar12 = 0;
   LAB_0010329e:if (lVar9 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar12;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void af_iup_interp_part_0(ulong param_1, ulong param_2, long param_3, long param_4) {
   long lVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   lVar8 = *(long*)( param_3 + 0x38 );
   lVar1 = *(long*)( param_4 + 0x38 );
   lVar5 = param_4;
   lVar7 = lVar1;
   if (lVar8 <= lVar1) {
      lVar5 = param_3;
      param_3 = param_4;
      lVar7 = lVar8;
      lVar8 = lVar1;
   }

   lVar1 = *(long*)( lVar5 + 0x30 );
   lVar5 = *(long*)( param_3 + 0x30 );
   if (( lVar1 == lVar5 ) || ( lVar8 == lVar7 )) {
      if (param_1 <= param_2) {
         do {
            while (lVar4 = *(long*)( param_1 + 0x38 ),lVar4 <= lVar7) {
               uVar6 = param_1 + 0x50;
               *(long*)( param_1 + 0x30 ) = lVar4 + ( lVar1 - lVar7 );
               param_1 = uVar6;
               if (param_2 < uVar6) {
                  return;
               }

            }
;
            lVar3 = ( lVar5 - lVar8 ) + lVar4;
            if (lVar4 < lVar8) {
               lVar3 = lVar1;
            }

            uVar6 = param_1 + 0x50;
            *(long*)( param_1 + 0x30 ) = lVar3;
            param_1 = uVar6;
         }
 while ( uVar6 <= param_2 );
      }

   }
 else {
      iVar2 = FT_DivFix(lVar5 - lVar1, lVar8 - lVar7);
      if (param_1 <= param_2) {
         do {
            lVar4 = *(long*)( param_1 + 0x38 );
            if (lVar7 < lVar4) {
               if (lVar4 < lVar8) {
                  lVar4 = (long)( (int)lVar4 - (int)lVar7 ) * (long)iVar2;
                  lVar4 = (int)( ( ulong )(lVar4 + 0x8000 + ( lVar4 >> 0x3f )) >> 0x10 ) + lVar1;
               }
 else {
                  lVar4 = lVar4 + ( lVar5 - lVar8 );
               }

            }
 else {
               lVar4 = lVar4 + ( lVar1 - lVar7 );
            }

            *(long*)( param_1 + 0x30 ) = lVar4;
            param_1 = param_1 + 0x50;
         }
 while ( param_1 <= param_2 );
      }

   }

   return;
}
void af_glyph_hints_align_weak_points(long param_1, int param_2) {
   undefined8 *puVar1;
   ushort *puVar2;
   ushort *puVar3;
   ushort *puVar4;
   ushort *puVar5;
   ushort *puVar6;
   ushort *puVar7;
   ushort *puVar8;
   ushort *puVar9;
   long lVar10;
   ushort *puVar11;
   ushort *puVar12;
   undefined8 *puVar13;
   ushort uVar14;
   puVar12 = *(ushort**)( param_1 + 0x30 );
   puVar13 = *(undefined8**)( param_1 + 0x40 );
   puVar1 = puVar13 + *(int*)( param_1 + 0x3c );
   puVar2 = puVar12 + (long)*(int*)( param_1 + 0x2c ) * 0x28;
   if (param_2 == 0) {
      puVar7 = puVar12;
      if (puVar12 < puVar2) {
         do {
            puVar6 = puVar7 + 0x28;
            *(undefined8*)( puVar7 + 0x18 ) = *(undefined8*)( puVar7 + 0x10 );
            *(undefined8*)( puVar7 + 0x1c ) = *(undefined8*)( puVar7 + 4 );
            puVar7 = puVar6;
         }
 while ( puVar6 < puVar2 );
         if (puVar1 <= puVar13) goto LAB_001038c0;
      }
 else if (puVar1 <= puVar13) {
         return;
      }

      uVar14 = 4;
   }
 else {
      puVar7 = puVar12;
      if (puVar12 < puVar2) {
         do {
            puVar6 = puVar7 + 0x28;
            *(undefined8*)( puVar7 + 0x18 ) = *(undefined8*)( puVar7 + 0x14 );
            *(undefined8*)( puVar7 + 0x1c ) = *(undefined8*)( puVar7 + 8 );
            puVar7 = puVar6;
         }
 while ( puVar6 < puVar2 );
         if (puVar1 <= puVar13) goto LAB_001038e0;
      }
 else if (puVar1 <= puVar13) {
         return;
      }

      uVar14 = 8;
   }

   LAB_00103720:puVar7 = (ushort*)*puVar13;
   puVar6 = *(ushort**)( puVar7 + 0x24 );
   puVar11 = puVar7;
   do {
      puVar5 = puVar11;
      if (puVar6 < puVar5) goto joined_r0x00103953;
      puVar11 = puVar5 + 0x28;
      puVar8 = puVar5;
   }
 while ( ( *puVar5 & uVar14 ) == 0 );
   joined_r0x0010375a:puVar4 = puVar8;
   puVar3 = puVar4 + 0x28;
   puVar8 = puVar3;
   if (puVar4 < puVar6) goto LAB_0010375c;
   goto LAB_00103778;
   LAB_0010375c:if (( puVar4[0x28] & uVar14 ) != 0) goto joined_r0x0010375a;
   LAB_00103778:if (puVar3 <= puVar6) {
      while (puVar9 = puVar8 + 0x28,( *puVar8 & uVar14 ) == 0) {
         puVar8 = puVar9;
         if (puVar6 < puVar9) {
            if (puVar4 == puVar5) goto LAB_00103909;
            if (puVar4 < puVar6) {
               af_iup_interp_part_0(puVar3, puVar6, puVar4, puVar5);
            }

            goto LAB_00103869;
         }

      }
;
      if (puVar3 <= puVar8 + -0x28) {
         af_iup_interp_part_0();
      }

      goto joined_r0x0010375a;
   }

   if (puVar4 == puVar5) {
      LAB_00103909:lVar10 = *(long*)( puVar5 + 0x18 ) - *(long*)( puVar5 + 0x1c );
      if (lVar10 != 0) {
         for (; puVar7 < puVar5; puVar7 = puVar7 + 0x28) {
            *(long*)( puVar7 + 0x18 ) = *(long*)( puVar7 + 0x1c ) + lVar10;
         }

         for (; puVar11 <= puVar6; puVar11 = puVar11 + 0x28) {
            *(long*)( puVar11 + 0x18 ) = *(long*)( puVar11 + 0x1c ) + lVar10;
         }

      }

   }
 else {
      LAB_00103869:if (( puVar12 < puVar5 ) && ( puVar7 <= puVar5 + -0x28 )) {
         af_iup_interp_part_0(puVar7, puVar5 + -0x28, puVar4, puVar5);
      }

   }

   joined_r0x00103953:puVar13 = puVar13 + 1;
   if (puVar1 <= puVar13) goto LAB_001038ad;
   goto LAB_00103720;
   LAB_001038ad:if (param_2 != 0) {
      for (; puVar12 < puVar2; puVar12 = puVar12 + 0x28) {
         LAB_001038e0:*(undefined8*)( puVar12 + 0x14 ) = *(undefined8*)( puVar12 + 0x18 );
      }

      return;
   }

   if (puVar2 <= puVar12) {
      return;
   }

   LAB_001038c0:do {
      puVar7 = puVar12 + 0x28;
      *(undefined8*)( puVar12 + 0x10 ) = *(undefined8*)( puVar12 + 0x18 );
      puVar12 = puVar7;
   }
 while ( puVar7 < puVar2 );
   return;
}
int af_face_globals_new(long param_1, long *param_2, long param_3) {
   ushort *puVar1;
   long *plVar2;
   ushort uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   ushort uVar6;
   int iVar7;
   uint uVar8;
   long *plVar9;
   long *plVar10;
   long *plVar11;
   undefined1 *puVar12;
   long *plVar13;
   ulong uVar14;
   undefined8 *puVar15;
   long lVar16;
   uint *puVar17;
   long in_FS_OFFSET;
   byte bVar18;
   undefined1 *local_68;
   int local_48;
   uint local_44;
   long local_40;
   bVar18 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar9 = (long*)ft_mem_qalloc(*(undefined8*)( param_1 + 0xb8 ), *(long*)( param_1 + 0x20 ) * 2 + 0x310, &local_48);
   if (local_48 != 0) goto LAB_001039d5;
   plVar9[4] = 0;
   plVar13 = plVar9 + 0x62;
   plVar9[0x5a] = 0;
   puVar15 = (undefined8*)( ( ulong )(plVar9 + 5) & 0xfffffffffffffff8 );
   for (uVar14 = ( ulong )(( (int)plVar9 - (int)(undefined8*)( ( ulong )(plVar9 + 5) & 0xfffffffffffffff8 ) ) + 0x2d8U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar15 = 0;
      puVar15 = puVar15 + (ulong)bVar18 * -2 + 1;
   }

   *plVar9 = param_1;
   uVar4 = *(undefined8*)( param_1 + 0x20 );
   uVar5 = *(undefined8*)( param_1 + 0xa8 );
   plVar9[2] = (long)plVar13;
   plVar9[0x61] = param_3;
   iVar7 = (int)uVar4;
   *(int*)( plVar9 + 1 ) = iVar7;
   *(undefined2*)( plVar9 + 0x5b ) = 0;
   plVar9[0x60] = 0;
   *(undefined1(*) [16])( plVar9 + 0x5c ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( plVar9 + 0x5e ) = (undefined1[16])0x0;
   if (iVar7 != 0) {
      plVar2 = (long*)( (long)plVar9 + ( ulong )(iVar7 - 1) * 2 + 0x312 );
      plVar10 = plVar13;
      if (( (int)plVar2 - (int)plVar13 & 2U ) != 0) {
         *(undefined2*)plVar13 = 0x3fff;
         plVar10 = (long*)( (long)plVar9 + 0x312 );
         if (plVar10 == plVar2) goto LAB_00103adb;
      }

      do {
         plVar11 = (long*)( (long)plVar10 + 4 );
         *(undefined2*)plVar10 = 0x3fff;
         *(undefined2*)( (long)plVar10 + 2 ) = 0x3fff;
         plVar10 = plVar11;
      }
 while ( plVar11 != plVar2 );
   }

   LAB_00103adb:iVar7 = FT_Select_Charmap(param_1, 0x756e6963);
   if (iVar7 == 0) {
      puVar17 = &af_adlm_uniranges;
      uVar6 = 0;
      local_68 = af_adlm_script_class;
      puVar12 = af_adlm_dflt_style_class;
      do {
         if (( puVar17 != (uint*)0x0 ) && ( *(int*)( puVar12 + 0x10 ) == 10 )) {
            uVar8 = *puVar17;
            joined_r0x00103b59:if (uVar8 != 0) {
               uVar14 = (ulong)uVar8;
               local_44 = FT_Get_Char_Index(param_1);
               if (local_44 == 0) goto LAB_00103bb0;
               if (*(uint*)( plVar9 + 1 ) <= local_44) goto LAB_00103bb0;
               do {
                  puVar1 = (ushort*)( (long)plVar13 + (ulong)local_44 * 2 );
                  if (( ~*puVar1 & 0x3fff ) == 0) {
                     *puVar1 = uVar6;
                  }

                  LAB_00103bb0:do {
                     uVar14 = FT_Get_Next_Char(param_1, uVar14, &local_44);
                     if (( local_44 == 0 ) || ( puVar17[1] < uVar14 )) {
                        uVar8 = puVar17[2];
                        puVar17 = puVar17 + 2;
                        goto joined_r0x00103b59;
                     }

                  }
 while ( *(uint*)( plVar9 + 1 ) <= local_44 );
               }
 while ( true );
            }

            puVar17 = *(uint**)( local_68 + 0x10 );
            uVar8 = *puVar17;
            joined_r0x00103be6:if (uVar8 != 0) {
               uVar14 = (ulong)uVar8;
               local_44 = FT_Get_Char_Index(param_1);
               if (local_44 == 0) goto LAB_00103c40;
               if (*(uint*)( plVar9 + 1 ) <= local_44) goto LAB_00103c40;
               do {
                  puVar1 = (ushort*)( (long)plVar13 + (ulong)local_44 * 2 );
                  uVar3 = *puVar1;
                  if (( uVar3 & 0x3fff ) == uVar6) {
                     *puVar1 = uVar3 | 0x4000;
                  }

                  LAB_00103c40:do {
                     uVar14 = FT_Get_Next_Char(param_1, uVar14, &local_44);
                     if (( local_44 == 0 ) || ( puVar17[1] < uVar14 )) {
                        uVar8 = puVar17[2];
                        puVar17 = puVar17 + 2;
                        goto joined_r0x00103be6;
                     }

                  }
 while ( *(uint*)( plVar9 + 1 ) <= local_44 );
               }
 while ( true );
            }

         }

         uVar6 = uVar6 + 1;
         puVar12 = ( &af_style_classes )[uVar6];
         if (puVar12 == (undefined*)0x0) goto LAB_00103c70;
         local_68 = *(undefined1**)( af_script_classes + ( ulong ) * (uint*)( puVar12 + 8 ) * 8 );
         puVar17 = *(uint**)( local_68 + 8 );
      }
 while ( true );
   }

   goto LAB_00103cbf;
   LAB_00103c70:uVar6 = 2;
   do {
      uVar14 = (ulong)uVar6;
      uVar6 = uVar6 + 1;
   }
 while ( ( &af_style_classes )[uVar14] != (undefined*)0x0 );
   lVar16 = 0x30;
   do {
      uVar8 = FT_Get_Char_Index(param_1, lVar16);
      if (( uVar8 != 0 ) && ( uVar8 < *(uint*)( plVar9 + 1 ) )) {
         puVar1 = (ushort*)( (long)plVar13 + (ulong)uVar8 * 2 );
         *puVar1 = *puVar1 | 0x8000;
      }

      lVar16 = lVar16 + 1;
   }
 while ( lVar16 != 0x3a );
   LAB_00103cbf:iVar7 = *(int*)( plVar9[0x61] + 0x18 );
   if (( iVar7 != 0x3fff ) && ( uVar8 = uVar8 != 0 )) {
      plVar13 = plVar9;
      do {
         if (( ~*(ushort *)(plVar13 + 0x62) & 0x3fff ) == 0) {
            *(ushort*)( plVar13 + 0x62 ) = *(ushort*)( plVar13 + 0x62 ) & 0xc000 | (ushort)iVar7;
         }

         plVar13 = (long*)( (long)plVar13 + 2 );
      }
 while ( (long*)( (long)plVar9 + (ulong)uVar8 * 2 ) != plVar13 );
   }

   *(undefined8*)( param_1 + 0xa8 ) = uVar5;
   *(undefined4*)( plVar9 + 3 ) = 0;
   LAB_001039d5:*param_2 = (long)plVar9;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_48;
}
int af_property_set(long param_1, char *param_2, uint *param_3, char param_4) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   undefined1 *puVar10;
   uint *puVar11;
   long lVar12;
   uint *puVar13;
   long in_FS_OFFSET;
   uint *local_70;
   uint local_68[7];
   uint local_4c[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = strcmp(param_2, "fallback-script");
   if (iVar7 == 0) {
      iVar7 = 6;
      if (param_4 != '\0') goto LAB_00103dbc;
      lVar12 = 0;
      uVar9 = 0;
      puVar10 = af_adlm_dflt_style_class;
      while (true) {
         if (( *param_3 == uVar9 ) && ( *(int*)( puVar10 + 0x10 ) == 10 )) {
            *(int*)( param_1 + 0x18 ) = (int)lVar12;
            goto LAB_00103db9;
         }

         lVar12 = lVar12 + 1;
         puVar10 = ( &af_style_classes )[lVar12];
         if (puVar10 == (undefined*)0x0) break;
         uVar9 = *(uint*)( puVar10 + 8 );
      }
;
      LAB_00103f00:iVar7 = 6;
   }
 else {
      iVar7 = strcmp(param_2, "default-script");
      if (iVar7 == 0) {
         iVar7 = 6;
         if (param_4 != '\0') goto LAB_00103dbc;
         *(uint*)( param_1 + 0x1c ) = *param_3;
      }
 else {
         iVar7 = strcmp(param_2, "increase-x-height");
         if (iVar7 == 0) {
            iVar7 = 6;
            if (param_4 != '\0') goto LAB_00103dbc;
            lVar12 = *(long*)param_3;
            if (lVar12 == 0) {
               iVar7 = 0x23;
               goto LAB_00103dbc;
            }

            puVar11 = *(uint**)( lVar12 + 0xd8 );
            if (*(uint**)( lVar12 + 0xd8 ) == (uint*)0x0) {
               iVar7 = af_face_globals_new(lVar12, &local_70, param_1);
               if (iVar7 != 0) goto LAB_00103dbc;
               *(code**)( lVar12 + 0xe0 ) = af_face_globals_free;
               *(uint**)( lVar12 + 0xd8 ) = local_70;
               puVar11 = local_70;
            }

            puVar11[6] = param_3[2];
         }
 else {
            iVar7 = strcmp(param_2, "darkening-parameters");
            if (iVar7 == 0) {
               if (param_4 == '\0') {
                  uVar9 = param_3[7];
                  puVar11 = param_3;
               }
 else {
                  puVar11 = local_68;
                  puVar13 = puVar11;
                  do {
                     lVar12 = strtol((char*)param_3, (char**)&local_70, 10);
                     *puVar13 = (uint)lVar12;
                     if (( ( byte ) * local_70 != 0x2c ) || ( local_70 == param_3 )) goto LAB_00103f00;
                     puVar13 = puVar13 + 1;
                     param_3 = (uint*)( (long)local_70 + 1 );
                  }
 while ( local_4c != puVar13 );
                  lVar12 = strtol((char*)param_3, (char**)&local_70, 10);
                  uVar9 = (uint)lVar12;
                  local_4c[0] = uVar9;
                  if (( ( *local_70 & 0xdf ) != 0 ) || ( local_70 == param_3 )) goto LAB_00103f00;
               }

               uVar1 = *puVar11;
               uVar2 = puVar11[2];
               if (-1 < (int)( uVar1 | uVar2 )) {
                  uVar3 = puVar11[4];
                  uVar4 = puVar11[6];
                  if (-1 < (int)( uVar3 | uVar4 )) {
                     uVar5 = puVar11[3];
                     if (( ( ( ( uVar5 < 0x1f5 ) && ( puVar11[1] < 0x1f5 ) ) && ( uVar6 = puVar11[5] ),uVar9 < 0x1f5 ) ) && ( ( uVar6 < 0x1f5 && ( (int)uVar1 <= (int)uVar2 ) ) )) &&( ( (int)uVar2 <= (int)uVar3 && ( (int)uVar3 <= (int)uVar4 ) ) ) * (ulong*)( param_1 + 0x24 ) = CONCAT44(puVar11[1], uVar1);
                     *(ulong*)( param_1 + 0x2c ) = CONCAT44(uVar5, uVar2);
                     *(ulong*)( param_1 + 0x34 ) = CONCAT44(uVar6, uVar3);
                     *(ulong*)( param_1 + 0x3c ) = CONCAT44(uVar9, uVar4);
                     iVar7 = 0;
                     goto LAB_00103dbc;
                  }

               }

            }

            goto LAB_00103f00;
         }

         iVar7 = 0xc;
         iVar8 = strcmp(param_2, "no-stem-darkening");
         if (iVar8 != 0) goto LAB_00103dbc;
         if (param_4 == '\0') {
            *(byte*)( param_1 + 0x20 ) = ( byte ) * param_3;
         }
 else {
            lVar12 = strtol((char*)param_3, (char**)0x0, 10);
            *(bool*)( param_1 + 0x20 ) = lVar12 != 0;
         }

      }

   }

   LAB_00103db9:iVar7 = 0;
}
LAB_00103dbc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar7;}undefined8 af_loader_compute_darkening_isra_0(long param_1, int param_2, long param_3, long param_4) {
   ushort uVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   long lVar13;
   undefined8 uVar14;
   uint uVar15;
   ulong uVar16;
   ulong uVar17;
   uint uVar18;
   long lVar19;
   lVar19 = *(long*)( param_1 + 0x308 );
   uVar1 = *(ushort*)( param_3 + 0x18 );
   lVar12 = FT_DivFix(0x3e80000, param_2 << 0x10);
   if (lVar12 < 0x28f) {
      return 0;
   }

   iVar9 = *(int*)( lVar19 + 0x30 );
   iVar10 = *(int*)( lVar19 + 0x28 );
   iVar2 = *(int*)( lVar19 + 0x24 );
   iVar3 = *(int*)( lVar19 + 0x2c );
   iVar4 = *(int*)( lVar19 + 0x34 );
   iVar5 = *(int*)( lVar19 + 0x38 );
   iVar6 = *(int*)( lVar19 + 0x3c );
   iVar7 = *(int*)( lVar19 + 0x40 );
   if (param_4 < 1) {
      iVar11 = 0x16;
      uVar18 = 0x4b0000;
      lVar19 = 0x4b0000;
   }
 else {
      lVar19 = (long)( (int)param_4 << 0x10 ) * (long)(int)lVar12;
      uVar18 = ( uint )(( ulong )(lVar19 + 0x8000 + ( lVar19 >> 0x3f )) >> 0x10);
      lVar19 = (long)(int)uVar18;
      iVar11 = 0x1f;
      if (uVar18 != 0) {
         for (; uVar18 >> iVar11 == 0; iVar11 = iVar11 + -1) {}
      }

   }

   uVar15 = (uint)uVar1 << 0x10;
   if (uVar15 < 0x40000) {
      uVar15 = 0x40000;
   }

   iVar8 = 0x1f;
   if (uVar15 != 0) {
      for (; uVar15 >> iVar8 == 0; iVar8 = iVar8 + -1) {}
   }

   if (iVar8 + iVar11 < 0x2e) {
      uVar17 = ( ulong )(uint)(iVar2 << 0x10);
      uVar16 = (ulong)(int)( ( ulong )((int)uVar15 * lVar19 + 0x8000 + ( (int)uVar15 * lVar19 >> 0x3f )) >> 0x10 );
      if ((long)uVar16 < (long)uVar17) goto LAB_00104275;
   }
 else {
      uVar16 = ( ulong )(uint)(iVar6 << 0x10);
      uVar17 = ( ulong )(uint)(iVar2 << 0x10);
      if (uVar16 < uVar17) {
         LAB_00104275:lVar19 = FT_DivFix(iVar10 << 0x10, uVar15);
         goto LAB_00104287;
      }

   }

   if ((long)uVar16 < (long)( ulong )(uint)(iVar3 << 0x10)) {
      iVar11 = FT_DivFix(uVar17, uVar15);
      if (iVar3 - iVar2 != 0) {
         lVar19 = FT_MulDiv((long)(int)( uVar18 - iVar11 ), (long)( iVar9 - iVar10 ), (long)( iVar3 - iVar2 ), iVar9 - iVar10);
         lVar13 = FT_DivFix(iVar10 << 0x10, uVar15);
         lVar19 = lVar19 + lVar13;
         goto LAB_00104287;
      }

      LAB_001041c0:iVar10 = FT_DivFix(( ulong )(uint)(iVar3 << 0x10), uVar15);
      uVar17 = ( ulong )(uint)(iVar4 << 0x10);
      if (iVar4 - iVar3 != 0) {
         lVar19 = FT_MulDiv((long)(int)( uVar18 - iVar10 ), (long)( iVar5 - iVar9 ), (long)( iVar4 - iVar3 ));
         lVar13 = FT_DivFix(iVar9 << 0x10, uVar15);
         lVar19 = lVar19 + lVar13;
         goto LAB_00104287;
      }

      LAB_00104152:iVar9 = FT_DivFix(uVar17, uVar15);
      if (iVar6 - iVar4 != 0) {
         lVar19 = FT_MulDiv((long)(int)( uVar18 - iVar9 ), (long)( iVar7 - iVar5 ), (long)( iVar6 - iVar4 ));
         lVar13 = FT_DivFix(iVar5 << 0x10, uVar15);
         lVar19 = lVar19 + lVar13;
         goto LAB_00104287;
      }

   }
 else {
      uVar17 = ( ulong )(uint)(iVar4 << 0x10);
      if ((long)uVar16 < (long)uVar17) goto LAB_001041c0;
      if ((long)uVar16 < (long)( ulong )(uint)(iVar6 << 0x10)) goto LAB_00104152;
   }

   lVar19 = FT_DivFix(iVar7 << 0x10, uVar15);
   LAB_00104287:uVar14 = FT_DivFix(lVar19, lVar12);
   return uVar14;
}
ulong af_latin_compute_stem_width_isra_0(uint param_1, long param_2, uint param_3, ulong param_4, ulong param_5, ulong param_6, byte param_7) {
   ushort uVar1;
   ulong uVar2;
   ulong uVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   bool bVar7;
   if (( ( param_1 & 4 ) == 0 ) || ( *(char*)( param_2 + 0x1f8 + (ulong)param_3 * 0x4c90 ) != '\0' )) {
      return param_4;
   }

   bVar7 = (long)param_4 < 0;
   uVar6 = param_4;
   if (bVar7) {
      uVar6 = -param_4;
   }

   if (param_3 == 1) {
      if (( param_1 & 2 ) != 0) {
         lVar5 = af_latin_snap_width(param_2 + 0x4cf8, *(undefined4*)( param_2 + 0x4cf0 ), uVar6);
         uVar3 = lVar5 + 0x10U & 0xffffffffffffffc0;
         if (lVar5 < 0x40) {
            uVar3 = 0x40;
         }

         goto LAB_0010448e;
      }

      if (( param_7 & 2 ) == 0) goto LAB_00104393;
      if ((long)uVar6 < 0xc0) goto LAB_001044e0;
      if (( param_6 & 1 ) == 0) goto LAB_001044c8;
   }
 else {
      if (( param_1 & 1 ) != 0) {
         lVar5 = af_latin_snap_width(param_2 + 0x68, *(undefined4*)( param_2 + 0x60 ), uVar6);
         if (( param_1 & 8 ) == 0) {
            if (lVar5 < 0x30) {
               uVar3 = lVar5 + 0x40 >> 1;
            }
 else if (lVar5 < 0x80) {
               uVar3 = lVar5 + 0x16U & 0xffffffffffffffc0;
               if ((long)( uVar3 - uVar6 ) < 0) {
                  if (0xf < (long)( uVar6 - uVar3 )) {
                     uVar3 = uVar6;
                  }

               }
 else if (( 0xf < (long)( uVar3 - uVar6 ) ) && ( uVar3 = (long)( uVar6 + 0x40 ) >> 1 ),0x2f < (long)uVar6) {
                  uVar3 = uVar6;
               }

            }
 else {
               uVar3 = lVar5 + 0x20U & 0xffffffffffffffc0;
            }

         }
 else {
            uVar3 = 0x40;
            if (0x3f < lVar5) {
               uVar3 = lVar5 + 0x20U & 0xffffffffffffffc0;
            }

         }

         goto LAB_0010448e;
      }

      LAB_00104393:if (( param_6 & 1 ) == 0) {
         LAB_001044c8:if ((long)uVar6 < 0x38) {
            uVar6 = 0x38;
         }

      }
 else if ((long)uVar6 < 0x50) {
         uVar6 = 0x40;
      }

   }

   lVar5 = (ulong)param_3 * 0x4c90 + param_2;
   if (*(int*)( lVar5 + 0x60 ) == 0) {
      LAB_001044e0:if (bVar7) {
         uVar6 = -uVar6;
      }

      return uVar6;
   }

   uVar2 = *(ulong*)( lVar5 + 0x70 );
   lVar5 = uVar6 - uVar2;
   if ((long)( uVar6 - uVar2 ) < 0) {
      lVar5 = uVar2 - uVar6;
   }

   if (lVar5 < 0x28) {
      uVar3 = 0x30;
      if (0x2f < (long)uVar2) {
         uVar3 = uVar2;
      }

      goto LAB_0010448e;
   }

   if ((long)uVar6 < 0xc0) {
      uVar4 = (uint)uVar6 & 0x3f;
      uVar3 = uVar6;
      if (9 < uVar4) {
         if (( uVar6 & 0x20 ) == 0) {
            uVar3 = ( uVar6 & 0xffffffffffffffc0 ) + 10;
         }
 else if (uVar4 < 0x36) {
            uVar3 = ( uVar6 & 0xffffffffffffffc0 ) + 0x36;
         }

      }

      goto LAB_0010448e;
   }

   if (( ( 0 < (long)param_4 ) && ( 0 < (long)param_5 ) ) || ( (long)( param_4 & param_5 ) < 0 )) {
      uVar1 = *(ushort*)( *(long*)( *(long*)( param_2 + 8 ) + 0xa0 ) + 0x18 );
      if (9 < uVar1) {
         if (0x1d < uVar1) goto LAB_00104448;
         param_5 = (long)( ( 0x1e - uVar1 ) * param_5 ) / 0x14;
      }

      uVar3 = -param_5;
      if (0 < (long)param_5) {
         uVar3 = param_5;
      }

      uVar6 = uVar6 - uVar3;
   }

   LAB_00104448:uVar3 = uVar6 + 0x20 & 0xffffffffffffffc0;
   LAB_0010448e:if (bVar7) {
      uVar3 = -uVar3;
   }

   return uVar3;
}
void af_glyph_hints_save_isra_0(int param_1, ushort *param_2, undefined8 *param_3, char *param_4) {
   ushort uVar1;
   undefined8 uVar2;
   char cVar3;
   ushort *puVar4;
   puVar4 = param_2 + (long)param_1 * 0x28;
   if (param_2 < puVar4) {
      do {
         uVar2 = *(undefined8*)( param_2 + 0x14 );
         uVar1 = *param_2;
         cVar3 = '\0';
         *param_3 = *(undefined8*)( param_2 + 0x10 );
         param_3[1] = uVar2;
         if (( uVar1 & 1 ) == 0) {
            cVar3 = ( ( uVar1 & 2 ) != 0 ) + '\x01';
         }

         param_2 = param_2 + 0x28;
         *param_4 = cVar3;
         param_3 = param_3 + 2;
         param_4 = param_4 + 1;
      }
 while ( param_2 < puVar4 );
   }

   return;
}
ulong af_dummy_hints_apply(undefined8 param_1, long param_2, long param_3) {
   ulong uVar1;
   uVar1 = af_glyph_hints_reload(param_2, param_3);
   if ((int)uVar1 != 0) {
      return uVar1;
   }

   af_glyph_hints_save_isra_0(*(undefined4*)( param_2 + 0x2c ), *(undefined8*)( param_2 + 0x30 ), *(undefined8*)( param_3 + 8 ), *(undefined8*)( param_3 + 0x10 ));
   return uVar1 & 0xffffffff;
}
ulong af_cjk_compute_stem_width_isra_0(uint param_1, long param_2, uint param_3, ulong param_4) {
   long lVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   uint uVar5;
   uVar3 = param_4;
   if (param_3 == 1) {
      if (( param_1 & 4 ) == 0) {
         return param_4;
      }

      if ((long)param_4 < 0) {
         uVar3 = -param_4;
      }

      uVar5 = ( uint )((long)param_4 < 0);
      if (( param_1 & 2 ) == 0) goto LAB_00104770;
      lVar1 = af_latin_snap_width(param_2 + 0x3c58, *(undefined4*)( param_2 + 0x3c50 ));
      uVar3 = lVar1 + 0x10;
   }
 else {
      if (( param_1 & 4 ) == 0) {
         return param_4;
      }

      if ((long)param_4 < 0) {
         uVar3 = -param_4;
      }

      uVar5 = ( uint )((long)param_4 < 0);
      if (( param_1 & 1 ) == 0) {
         LAB_00104770:uVar5 = ( uint )((long)param_4 < 0);
         param_2 = param_2 + (ulong)param_3 * 0x3bf0;
         if (( *(int*)( param_2 + 0x60 ) == 0 ) || ( uVar2 = *(ulong*)( param_2 + 0x70 ) ),0x4e < ( uVar3 - uVar2 ) + 0x27) {
            if ((long)uVar3 < 0x36) {
               uVar2 = ( (long)( 0x36 - uVar3 ) >> 1 ) + uVar3;
            }
 else {
               uVar2 = uVar3;
               if (( (long)uVar3 < 0xc0 ) && ( uVar4 = 9 < uVar4 )) {
                  if (uVar4 < 0x16) {
                     uVar2 = ( uVar3 & 0xffffffffffffffc0 ) + 10;
                  }
 else if (uVar4 - 0x2a < 0xc) {
                     uVar2 = ( uVar3 & 0xffffffffffffffc0 ) + 0x36;
                  }

               }

            }

         }
 else if ((long)uVar2 < 0x30) {
            uVar2 = 0x30;
         }

         goto LAB_0010475c;
      }

      lVar1 = af_latin_snap_width(param_2 + 0x68, *(undefined4*)( param_2 + 0x60 ));
      if (( param_1 & 8 ) == 0) {
         if (lVar1 < 0x30) {
            uVar2 = lVar1 + 0x40 >> 1;
         }
 else if (lVar1 < 0x80) {
            uVar2 = lVar1 + 0x16U & 0xffffffffffffffc0;
         }
 else {
            uVar2 = lVar1 + 0x20U & 0xffffffffffffffc0;
         }

         goto LAB_0010475c;
      }

      uVar3 = lVar1 + 0x20;
   }

   uVar2 = 0x40;
   if (0x3f < lVar1) {
      uVar2 = uVar3 & 0xffffffffffffffc0;
   }

   LAB_0010475c:if (uVar5 != 0) {
      uVar2 = -uVar2;
   }

   return uVar2;
}
ulong af_hint_normal_stem(long param_1, long param_2, long param_3, long param_4, int param_5) {
   ulong uVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   uint uVar5;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   ulong uVar6;
   uVar5 = *(uint*)( param_1 + 0x141c );
   uVar3 = uVar5 & 4;
   if (uVar3 == 0) {
      if (( ( *(byte*)( param_2 + 0x18 ) & 1 ) == 0 ) || ( ( *(byte*)( param_3 + 0x18 ) & 1 ) == 0 )) {
         lVar12 = ( ulong )(param_5 == 1) * 2 + 0x3b;
      }
 else {
         lVar12 = 0x31;
         if (param_5 == 1) {
            lVar12 = 0x37;
         }

      }

      lVar13 = *(long*)( param_3 + 8 );
      lVar11 = *(long*)( param_2 + 8 );
      uVar1 = af_cjk_compute_stem_width_isra_0(uVar5, *(undefined8*)( param_1 + 0x1420 ), param_5, lVar13 - lVar11);
      uVar2 = ( ( lVar13 + lVar11 ) / 2 + param_4 ) - (long)uVar1 / 2;
      uVar4 = uVar2 + uVar1;
      uVar7 = ( ulong )((uint)uVar4 & 0x3f);
      uVar5 = (uint)uVar2;
      if (( ( uVar2 & 0x3f ) != 0 ) && ( uVar7 != 0 )) {
         LAB_001049b8:uVar6 = ( ulong )(uVar5 & 0x3f);
         uVar8 = 0x40 - uVar6;
         if (lVar12 < (long)uVar1) {
            if (lVar12 == 0x40) {
               LAB_001049f6:uVar6 = ( ulong )((uint)uVar1 & 0x20);
               if (( uVar1 & 0x20 ) == 0) {
                  uVar9 = ( ulong )((uint)uVar1 & 0x3f);
                  uVar10 = uVar7;
                  if ((long)uVar8 <= (long)uVar7) {
                     uVar10 = uVar8;
                  }

                  if ((long)uVar10 <= (long)uVar9) goto LAB_00104922;
               }
 else {
                  uVar9 = 0x40 - lVar12;
               }

               uVar4 = uVar8 - uVar9;
               if ((long)( lVar12 - uVar8 ) <= (long)( uVar8 - uVar9 )) {
                  uVar4 = uVar8 - lVar12;
               }

               uVar8 = lVar12 - uVar7;
               if ((long)( uVar7 - uVar9 ) <= (long)( lVar12 - uVar7 )) {
                  uVar8 = uVar9 - uVar7;
               }

               uVar7 = -uVar4;
               if (0 < (long)uVar4) {
                  uVar7 = uVar4;
               }

               uVar6 = -uVar8;
               if (0 < (long)uVar8) {
                  uVar6 = uVar8;
               }

               if ((long)uVar7 <= (long)uVar6) {
                  uVar8 = uVar4;
               }

               LAB_00104a52:if (uVar3 == 0) {
                  if (0xe < (long)uVar8) {
                     uVar2 = uVar2 + 0xe;
                     uVar4 = uVar2 + uVar1;
                     uVar6 = 0xe;
                     goto LAB_00104922;
                  }

                  goto LAB_00104abe;
               }

               LAB_00104acc:uVar2 = uVar2 + uVar8;
               uVar4 = uVar2 + uVar1;
               uVar6 = uVar8;
               goto LAB_00104922;
            }

            if ((long)uVar6 <= (long)uVar8) {
               uVar6 = uVar8;
            }

            if ((long)uVar6 < lVar12) {
               uVar6 = 0x40 - uVar7;
               if ((long)( 0x40 - uVar7 ) < (long)uVar7) {
                  uVar6 = uVar7;
               }

               if ((long)uVar6 < lVar12) goto LAB_001049f6;
            }

         }
 else if ((long)uVar7 < (long)uVar1) {
            if ((long)uVar8 <= (long)uVar7) goto LAB_00104a52;
            uVar8 = -uVar7;
            if (uVar3 != 0) {
               uVar2 = uVar2 - uVar7;
               uVar4 = uVar2 + uVar1;
               uVar6 = uVar8;
               goto LAB_00104922;
            }

            LAB_00104abe:if ((long)uVar8 < -0xe) {
               uVar8 = 0xfffffffffffffff2;
            }

            goto LAB_00104acc;
         }

      }

   }
 else {
      lVar13 = *(long*)( param_3 + 8 );
      lVar11 = *(long*)( param_2 + 8 );
      uVar1 = af_cjk_compute_stem_width_isra_0(uVar5, *(undefined8*)( param_1 + 0x1420 ), param_5, lVar13 - lVar11);
      uVar2 = ( ( lVar13 + lVar11 ) / 2 + param_4 ) - (long)uVar1 / 2;
      uVar4 = uVar1 + uVar2;
      uVar7 = ( ulong )((uint)uVar4 & 0x3f);
      uVar5 = (uint)uVar2;
      if (( ( uVar2 & 0x3f ) != 0 ) && ( uVar7 != 0 )) {
         lVar12 = 0x40;
         goto LAB_001049b8;
      }

   }

   uVar6 = 0;
   LAB_00104922:uVar1 = uVar2;
   if (lVar13 <= lVar11) {
      uVar1 = uVar4;
      uVar4 = uVar2;
   }

   *(ulong*)( param_2 + 0x10 ) = uVar1;
   *(ulong*)( param_3 + 0x10 ) = uVar4;
   return uVar6;
}
void af_indic_get_standard_widths(long param_1, undefined8 *param_2, undefined8 *param_3) {
   if (param_2 != (undefined8*)0x0) {
      *param_2 = *(undefined8*)( param_1 + 0x3de0 );
   }

   if (param_3 != (undefined8*)0x0) {
      *param_3 = *(undefined8*)( param_1 + 0x1f0 );
   }

   return;
}
void af_indic_metrics_scale(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *(undefined8*)( param_1 + 8 ) = *param_2;
   *(undefined8*)( param_1 + 0x10 ) = uVar1;
   uVar1 = param_2[3];
   *(undefined8*)( param_1 + 0x18 ) = param_2[2];
   *(undefined8*)( param_1 + 0x20 ) = uVar1;
   uVar1 = param_2[5];
   *(undefined8*)( param_1 + 0x28 ) = param_2[4];
   *(undefined8*)( param_1 + 0x30 ) = uVar1;
   af_cjk_metrics_scale_dim(param_1, param_2, 0);
   af_cjk_metrics_scale_dim(param_1, param_2, 1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int af_autofitter_load_glyph(long param_1, long param_2, undefined8 param_3, uint param_4, uint param_5) {
   char cVar1;
   ushort uVar2;
   short sVar3;
   undefined8 uVar4;
   long *plVar5;
   long *plVar6;
   code *pcVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   long *plVar17;
   long lVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   long lVar22;
   ulong uVar23;
   ulong uVar24;
   long lVar25;
   ulong uVar26;
   long lVar27;
   undefined8 *puVar28;
   long lVar29;
   undefined *puVar30;
   long in_FS_OFFSET;
   ulong uVar31;
   ulong uVar32;
   ulong uVar33;
   ulong uVar34;
   ulong uVar35;
   ulong uVar36;
   ulong *local_33f8;
   long local_3390;
   long local_3388;
   long lStack_3380;
   ulong local_3378;
   ulong uStack_3370;
   long local_3368;
   long lStack_3360;
   long local_3358;
   long lStack_3350;
   long local_3348;
   long lStack_3340;
   long local_3338;
   uint uStack_3330;
   undefined4 uStack_332c;
   undefined1 local_3328[16];
   undefined8 *local_3318;
   long *local_3310;
   char local_3308;
   ulong local_3300;
   ulong uStack_32f8;
   long local_32f0;
   long lStack_32e8;
   long local_32e0;
   long lStack_32d8;
   ulong local_32d0;
   undefined8 local_32c8;
   ulong local_32c0;
   undefined8 uStack_32b8;
   undefined8 local_32a8;
   int local_32a0;
   ulong local_3298;
   undefined8 local_3288;
   uint local_3250;
   long local_3248;
   byte local_1e90;
   long local_40;
   lVar18 = *(long*)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = **(undefined8**)( param_1 + 8 );
   puVar28 = &local_32a8;
   for (lVar21 = 0x285; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar28 = 0;
      puVar28 = puVar28 + 1;
   }

   lVar21 = *(long*)( lVar18 + 0x98 );
   lVar25 = *(long*)( lVar18 + 0xa0 );
   puVar28 = (undefined8*)local_3328;
   local_32a8 = uVar4;
   for (lVar22 = 0xf; lVar22 != 0; lVar22 = lVar22 + -1) {
      *puVar28 = 0;
      puVar28 = puVar28 + 1;
   }

   plVar5 = *(long**)( lVar21 + 0x128 );
   lVar22 = *(long*)( lVar25 + 0x50 );
   uStack_3330 = (int)param_5 >> 0x10 & 0xf;
   lVar27 = *plVar5;
   lStack_3350 = *(long*)( lVar22 + 0x18 );
   if (( lStack_3350 == 0 ) || ( *(uint*)( lVar22 + 8 ) != uStack_3330 )) {
      uVar8 = *(undefined8*)( lVar25 + 0x18 );
      uVar9 = *(undefined8*)( lVar25 + 0x20 );
      uVar4 = *(undefined8*)( lVar25 + 0x48 );
      *(uint*)( lVar22 + 8 ) = uStack_3330;
      uVar10 = *(undefined8*)( lVar25 + 0x28 );
      uVar11 = *(undefined8*)( lVar25 + 0x30 );
      uVar12 = *(undefined8*)( lVar25 + 0x38 );
      uVar13 = *(undefined8*)( lVar25 + 0x40 );
      *(undefined8*)( lVar22 + 0x10 ) = uVar8;
      *(undefined8*)( lVar22 + 0x18 ) = uVar9;
      *(undefined8*)( lVar22 + 0x40 ) = uVar4;
      lStack_3350 = *(long*)( lVar22 + 0x18 );
      *(undefined8*)( lVar22 + 0x20 ) = uVar10;
      *(undefined8*)( lVar22 + 0x28 ) = uVar11;
      *(undefined8*)( lVar22 + 0x30 ) = uVar12;
      *(undefined8*)( lVar22 + 0x38 ) = uVar13;
   }

   local_3328._8_8_ = *(long*)( lVar18 + 0xd8 );
   local_3348 = *(long*)( lVar22 + 0x20 );
   local_3358 = lVar18;
   lStack_3340 = 0;
   local_3338 = 0;
   uStack_332c = 0;
   local_3318 = &local_32a8;
   local_3328._0_8_ = lVar18;
   if ((long*)local_3328._8_8_ == (long*)0x0) {
      iVar14 = af_face_globals_new(lVar18, local_3328 + 8, param_1);
      if (iVar14 != 0) goto LAB_00104e98;
      *(code**)( lVar18 + 0xe0 ) = af_face_globals_free;
      *(undefined8*)( lVar18 + 0xd8 ) = local_3328._8_8_;
   }

   uVar4 = local_3328._8_8_;
   local_3378 = local_3378 & 0xffffffff00000000;
   iVar14 = 6;
   if (*(uint*)( local_3328._8_8_ + 8 ) <= param_4) goto LAB_00104e98;
   uVar23 = (ulong)param_4;
   uVar24 = ( ulong )(*(ushort*)( *(long*)( local_3328._8_8_ + 0x10 ) + uVar23 * 2 ) & 0x3fff);
   puVar30 = ( &af_style_classes )[uVar24];
   plVar6 = *(long**)( local_3328._8_8_ + ( uVar24 + 4 ) * 8 );
   lVar25 = *(long*)( af_writing_system_classes + ( ulong ) * (uint*)( puVar30 + 4 ) * 8 );
   plVar17 = plVar6;
   if (plVar6 == (long*)0x0) {
      do {
         uVar8 = *(undefined8*)( *(long*)uVar4 + 0xb8 );
         plVar17 = (long*)ft_mem_alloc(uVar8, *(undefined8*)( lVar25 + 8 ), &local_3378);
         iVar14 = (int)local_3378;
         if ((int)local_3378 != 0) goto LAB_00104e98;
         pcVar7 = *(code**)( lVar25 + 0x10 );
         *plVar17 = (long)puVar30;
         plVar17[8] = uVar4;
         if (pcVar7 == (code*)0x0) {
            LAB_00105268:*(long**)( uVar4 + ( uVar24 + 4 ) * 8 ) = plVar17;
            break;
         }

         iVar14 = ( *pcVar7 )(plVar17, *(long*)uVar4);
         local_3378 = CONCAT44(local_3378._4_4_, iVar14);
         if (iVar14 == 0) goto LAB_00105268;
         if (*(code**)( lVar25 + 0x20 ) != (code*)0x0) {
            ( **(code**)( lVar25 + 0x20 ) )(plVar17);
         }

         ft_mem_free(uVar8, plVar17);
         if ((int)local_3378 != -1) {
            plVar17 = plVar6;
            iVar14 = (int)local_3378;
            if ((int)local_3378 != 0) goto LAB_00104e98;
            break;
         }

         local_3378 = local_3378 & 0xffffffff00000000;
         uVar24 = ( ulong )(*(ushort*)( *(long*)( uVar4 + 0x10 ) + uVar23 * 2 ) & 0x3fff);
         puVar30 = ( &af_style_classes )[uVar24];
         plVar17 = *(long**)( uVar4 + ( uVar24 + 4 ) * 8 );
         lVar25 = *(long*)( af_writing_system_classes + ( ulong ) * (uint*)( puVar30 + 4 ) * 8 );
      }
 while ( plVar17 == (long*)0x0 );
   }

   lVar25 = *(long*)( af_writing_system_classes + ( ulong ) * (uint*)( *plVar17 + 4 ) * 8 );
   local_3310 = plVar17;
   if (*(code**)( lVar25 + 0x18 ) == (code*)0x0) {
      plVar17[1] = local_3358;
      plVar17[2] = lStack_3350;
      plVar17[5] = local_3338;
      plVar17[6] = CONCAT44(uStack_332c, uStack_3330);
      plVar17[3] = local_3348;
      plVar17[4] = lStack_3340;
   }
 else {
      ( **(code**)( lVar25 + 0x18 ) )(plVar17, &local_3358);
   }

   if (( ( *(code**)( lVar25 + 0x30 ) != (code*)0x0 ) && ( iVar14 = ( **(code**)( lVar25 + 0x30 ) )(&local_32a8, plVar17) ),iVar14 != 0 )) goto LAB_00104e98;
   if (( uStack_3330 == 1 ) && ( ( cVar1 = *(char*)( *(long*)( lVar18 + 0xf0 ) + 0x70 ) ),cVar1 == '\0' || ( ( cVar1 < '\0' && ( *(char*)( param_1 + 0x20 ) == '\0' ) ) ) )) {
      lVar22 = *(long*)( lVar18 + 0x98 );
      local_3378 = __LC10;
      uStack_3370 = _UNK_0010e3b8;
      local_3390 = 0;
      uVar2 = *(ushort*)( lVar18 + 0x88 );
      lVar29 = *(long*)( *(long*)( lVar18 + 0xa0 ) + 0x50 );
      lVar19 = *(long*)( local_3328._8_8_ + 0x2d8 );
      local_3388 = 0;
      sVar3 = *(short*)( lVar29 + 0x10 );
      local_3368 = __LC11;
      lStack_3360 = _UNK_0010e3c8;
      if (( uVar2 != 0 ) && ( *(code**)( *(long*)( af_writing_system_classes + ( ulong ) * (uint*)( *plVar17 + 4 ) * 8 ) + 0x28 ) != (code*)0x0 )) {
         ( **(code**)( *(long*)( af_writing_system_classes + ( ulong ) * (uint*)( *plVar17 + 4 ) * 8 ) + 0x28 ) )(plVar17, &local_3388, &local_3390);
         if (( sVar3 == (short)lVar19 ) && ( ( local_3390 < 1 || ( *(long*)( uVar4 + 0x2e0 ) == local_3390 ) ) )) {
            LAB_00105986:if (( 0 < local_3388 ) && ( local_3388 != *(long*)( uVar4 + 0x2e8 ) )) goto LAB_00105730;
         }
 else {
            iVar16 = af_loader_compute_darkening_isra_0(local_3328._8_8_, *(undefined2*)( lVar18 + 0x88 ), *(undefined8*)( lVar18 + 0xa0 ));
            iVar14 = *(int*)( lVar29 + 0x18 );
            *(long*)( uVar4 + 0x2e0 ) = local_3390;
            lVar20 = (long)iVar14 * (long)iVar16;
            *(undefined2*)( uVar4 + 0x2d8 ) = *(undefined2*)( lVar29 + 0x10 );
            *(long*)( uVar4 + 0x2f0 ) = (long)(short)( ( uint )((int)( ( ulong )(lVar20 + 0x8000 + ( lVar20 >> 0x3f )) >> 0x10 ) + 0x8000) >> 0x10 );
            if (sVar3 == (short)lVar19) goto LAB_00105986;
            LAB_00105730:lVar20 = (ulong)uVar2 * 0x10000;
            lVar18 = af_loader_compute_darkening_isra_0(local_3328._8_8_, *(undefined2*)( lVar18 + 0x88 ), *(undefined8*)( lVar18 + 0xa0 ), local_3388);
            iVar14 = *(int*)( lVar29 + 0x20 );
            *(long*)( uVar4 + 0x2e8 ) = local_3388;
            lVar19 = (long)iVar14 * (long)(int)lVar18;
            *(undefined2*)( uVar4 + 0x2d8 ) = *(undefined2*)( lVar29 + 0x10 );
            *(long*)( uVar4 + 0x2f8 ) = (long)(short)( ( uint )((int)( ( ulong )(lVar19 + 0x8000 + ( lVar19 >> 0x3f )) >> 0x10 ) + 0x8000) >> 0x10 );
            lVar18 = FT_DivFix(lVar20 - ( lVar18 + 0x80000 ), lVar20);
            *(long*)( uVar4 + 0x300 ) = lVar18;
         }

         lVar22 = lVar22 + 200;
         FT_Outline_EmboldenXY(lVar22, *(long*)( uVar4 + 0x2f0 ), *(long*)( uVar4 + 0x2f8 ));
         lStack_3360 = *(long*)( uVar4 + 0x300 );
         FT_Outline_Transform(lVar22, &local_3378);
      }

   }

   local_3308 = *(char*)( (long)plVar5 + 0xc );
   if (local_3308 == '\0') {
      if (*(int*)( lVar21 + 0x90 ) == 0x6f75746c) {
         LAB_001053d3:local_32c8 = local_3288;
         local_32d0 = local_3298;
         lVar18 = (long)*(int*)( lVar21 + 0x50 ) * (long)local_32a0;
         local_32c0 = (long)(int)( ( ulong )(lVar18 + 0x8000 + ( lVar18 >> 0x3f )) >> 0x10 ) + local_3298;
         uStack_32b8 = local_3288;
         if (*(short*)( lVar21 + 0xca ) != 0) {
            if (( *(code**)( lVar25 + 0x38 ) != (code*)0x0 ) && ( iVar14 = ( **(code**)( lVar25 + 0x38 ) )(param_4, &local_32a8, lVar27 + 0x18, plVar17) ),iVar14 != 0) goto LAB_00104e98;
            if (( uStack_3330 == 1 ) || ( ( local_3250 < 2 || ( ( local_1e90 & 4 ) != 0 ) ) )) {
               uVar26 = local_32c0 + 0x20 & 0xffffffffffffffc0;
               uVar24 = local_32d0 + 0x20 & 0xffffffffffffffc0;
               *(ulong*)( lVar21 + 0x118 ) = uVar26 - local_32c0;
               *(ulong*)( lVar21 + 0x110 ) = uVar24 - local_32d0;
               local_32d0 = uVar24;
               local_32c0 = uVar26;
            }
 else {
               lVar25 = *(long*)( local_3248 + 8 );
               lVar18 = local_3248 + -0x58 + (ulong)local_3250 * 0x58;
               lVar22 = *(long*)( lVar18 + 0x10 );
               lVar19 = local_32c0 - *(long*)( lVar18 + 8 );
               lVar29 = *(long*)( local_3248 + 0x10 ) - lVar25;
               lVar18 = lVar19 + lVar22;
               if (lVar25 < 0x18) {
                  lVar29 = lVar29 + -8;
               }

               if (lVar19 < 0x18) {
                  lVar18 = lVar18 + 8;
               }

               local_32d0 = lVar29 + 0x20U & 0xffffffffffffffc0;
               local_32c0 = lVar18 + 0x20U & 0xffffffffffffffc0;
               if (( 0 < lVar25 ) && ( *(long*)( local_3248 + 0x10 ) <= (long)local_32d0 )) {
                  local_32d0 = local_32d0 - 0x40;
               }

               if (( (long)local_32c0 <= lVar22 ) && ( 0 < lVar19 )) {
                  local_32c0 = local_32c0 + 0x40;
               }

               *(ulong*)( lVar21 + 0x118 ) = local_32c0 - lVar18;
               *(ulong*)( lVar21 + 0x110 ) = local_32d0 - lVar29;
            }

         }

      }
 else {
         iVar15 = 7;
      }

   }
 else {
      local_3378 = plVar5[2];
      uStack_3370 = plVar5[3];
      local_3368 = plVar5[4];
      lStack_3360 = plVar5[5];
      local_32e0 = plVar5[6];
      lStack_32d8 = plVar5[7];
      local_3300 = local_3378;
      uStack_32f8 = uStack_3370;
      local_32f0 = local_3368;
      lStack_32e8 = lStack_3360;
      iVar14 = FT_Matrix_Invert(&local_3378);
      if (iVar14 == 0) {
         FT_Vector_Transform(&local_32e0, &local_3378);
      }

      if (*(int*)( lVar21 + 0x90 ) == 0x6f75746c) {
         if (local_3308 != '\0') {
            FT_Outline_Translate(lVar21 + 200, local_32e0, lStack_32d8);
         }

         goto LAB_001053d3;
      }

      iVar15 = 7;
   }

   local_33f8 = &local_3378;
   lVar27 = lVar27 + 0x18;
   lVar18 = (long)( (int)*(undefined8*)( lVar21 + 0x58 ) - (int)*(undefined8*)( lVar21 + 0x40 ) ) * (long)(int)plVar17[2];
   local_3388 = (long)(int)( ( ulong )(lVar18 + 0x8000 + ( lVar18 >> 0x3f )) >> 0x10 );
   lVar18 = (long)( (int)*(undefined8*)( lVar21 + 0x60 ) - (int)*(undefined8*)( lVar21 + 0x48 ) ) * (long)(int)plVar17[3];
   lStack_3380 = (long)(int)( ( ulong )(lVar18 + 0x8000 + ( lVar18 >> 0x3f )) >> 0x10 );
   if (local_3308 != '\0') {
      FT_Outline_Transform(lVar27, &local_3300);
      FT_Vector_Transform(&local_3388, &local_3300);
   }

   if (local_32d0 != 0) {
      FT_Outline_Translate(lVar27, -local_32d0, 0);
   }

   FT_Outline_Get_CBox(lVar27, local_33f8);
   uVar26 = _UNK_0010e3d8;
   uVar24 = __LC12;
   uVar33 = __LC13 + local_3368 & __LC12;
   uVar34 = _UNK_0010e3e8 + lStack_3360 & _UNK_0010e3d8;
   uVar35 = local_3378 & __LC12;
   uVar36 = uStack_3370 & _UNK_0010e3d8;
   uVar31 = local_3378 & __LC12;
   uVar32 = lStack_3360 + 0x3fU & _UNK_0010e3d8;
   *(ulong*)( lVar21 + 0x40 ) = uVar31;
   *(ulong*)( lVar21 + 0x48 ) = uVar32;
   *(ulong*)( lVar21 + 0x30 ) = uVar33 - uVar35;
   *(ulong*)( lVar21 + 0x38 ) = uVar34 - uVar36;
   *(ulong*)( lVar21 + 0x58 ) = uVar31 + local_3388 & uVar24;
   *(ulong*)( lVar21 + 0x60 ) = uVar32 + lStack_3380 & uVar26;
   if (( uStack_3330 == 1 ) || ( ( ( *(byte*)( *(long*)( lVar21 + 8 ) + 0x10 ) & 4 ) == 0 && ( ( ( *(uint*)( local_3328._8_8_ + 8 ) <= param_4 || ( -1 < *(short*)( *(long*)( local_3328._8_8_ + 0x10 ) + uVar23 * 2 ) ) ) || ( (char)plVar17[7] == '\0' ) ) ) ) )) {
      lVar18 = *(long*)( lVar21 + 0x50 );
      if (lVar18 != 0) {
         lVar18 = local_32c0 - local_32d0;
      }

   }
 else {
      lVar18 = plVar17[2];
      *(undefined1(*) [16])( lVar21 + 0x110 ) = (undefined1[16])0x0;
      lVar18 = (long)*(int*)( lVar21 + 0x50 ) * (long)(int)lVar18;
      lVar18 = (long)(int)( ( ulong )(lVar18 + 0x8000 + ( lVar18 >> 0x3f )) >> 0x10 );
   }

   lVar25 = plVar17[3];
   *(undefined4*)( lVar21 + 0x90 ) = 0x6f75746c;
   lVar25 = (long)*(int*)( lVar21 + 0x68 ) * (long)(int)lVar25;
   *(ulong*)( lVar21 + 0x50 ) = lVar18 + 0x20U & 0xffffffffffffffc0;
   *(ulong*)( lVar21 + 0x68 ) = (long)(int)( ( ulong )(lVar25 + 0x8000 + ( lVar25 >> 0x3f )) >> 0x10 ) + 0x20U & 0xffffffffffffffc0;
   iVar14 = iVar15;
   LAB_00104e98:local_3318 = (undefined8*)0x0;
   local_3328 = (undefined1[16])0x0;
   af_glyph_hints_done(&local_32a8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar14;
}
int af_cjk_hints_apply(undefined8 param_1, long param_2, long param_3, undefined8 param_4) {
   byte bVar1;
   short sVar2;
   ushort *puVar3;
   short *psVar4;
   bool bVar5;
   bool bVar6;
   int iVar7;
   uint uVar8;
   ulong uVar9;
   long lVar10;
   long lVar11;
   ushort *puVar12;
   short *psVar13;
   ushort uVar14;
   short *psVar15;
   short *psVar16;
   long lVar17;
   short *psVar18;
   ulong uVar19;
   short *psVar20;
   undefined4 uVar21;
   short *psVar22;
   uint *local_98;
   uint *local_88;
   undefined8 local_78;
   long local_58;
   iVar7 = af_glyph_hints_reload(param_2, param_3);
   if (iVar7 != 0) {
      return iVar7;
   }

   uVar8 = *(uint*)( param_2 + 0x1418 );
   if (( uVar8 & 1 ) == 0) {
      iVar7 = af_cjk_hints_detect_features(param_2, 0);
      if (iVar7 != 0) {
         return iVar7;
      }

      af_cjk_hints_compute_blue_edges(param_2, param_4, 0);
      uVar8 = *(uint*)( param_2 + 0x1418 );
      if (( uVar8 & 2 ) == 0) goto LAB_001059ff;
   }
 else {
      if (( uVar8 & 2 ) != 0) goto LAB_00105d7d;
      LAB_001059ff:iVar7 = af_cjk_hints_detect_features(param_2, 1);
      if (iVar7 != 0) {
         return iVar7;
      }

      af_cjk_hints_compute_blue_edges(param_2, param_4, 1);
      uVar8 = *(uint*)( param_2 + 0x1418 );
   }

   local_88 = (uint*)( param_2 + 0x58 );
   if (( uVar8 & 1 ) == 0) {
      psVar22 = *(short**)( param_2 + 0x60 );
      uVar21 = 0;
      if (psVar22 == (short*)0x0) goto LAB_00105d27;
      uVar9 = ( ulong ) * (uint*)( param_2 + 0x58 );
      psVar20 = psVar22 + uVar9 * 0x2c;
      if (psVar20 <= psVar22) goto LAB_00105d27;
      bVar5 = false;
      goto LAB_00105a9e;
   }

   LAB_00105d7d:local_98 = (uint*)( param_2 + 0xa40 );
   LAB_00105d85:do {
      if (( uVar8 & 2 ) != 0) {
         LAB_00105e30:af_glyph_hints_save_isra_0(*(undefined4*)( param_2 + 0x2c ), *(undefined8*)( param_2 + 0x30 ), *(undefined8*)( param_3 + 8 ), *(undefined8*)( param_3 + 0x10 ));
         return 0;
      }

      psVar22 = *(short**)( local_98 + 2 );
      local_88 = local_98;
      if (psVar22 == (short*)0x0) {
         uVar21 = 1;
         LAB_00105dd1:uVar9 = *(ulong*)( param_2 + 0xa48 );
         bVar5 = true;
         local_98 = local_88;
         if (uVar9 != 0) {
            uVar19 = uVar9 + ( ulong ) * local_88 * 0x58;
            LAB_00105df9:bVar5 = true;
            uVar8 = *(uint*)( param_2 + 0x141c ) >> 1;
            LAB_00105f64:if (uVar9 < uVar19) {
               lVar17 = *(long*)( uVar9 + 0x10 );
               lVar10 = *(long*)( uVar9 + 0x48 );
               lVar11 = lVar10;
               if (( uVar8 & 1 ) == 0) {
                  while (true) {
                     lVar17 = lVar17 - *(long*)( uVar9 + 8 );
                     lVar11 = lVar10;
                     do {
                        puVar12 = *(ushort**)( lVar11 + 0x40 );
                        puVar3 = *(ushort**)( lVar11 + 0x48 );
                        uVar14 = *puVar12;
                        if (bVar5) {
                           while (true) {
                              *(long*)( puVar12 + 0x14 ) = *(long*)( puVar12 + 0x14 ) + lVar17;
                              *puVar12 = uVar14 | 8;
                              if (puVar3 == puVar12) break;
                              puVar12 = *(ushort**)( puVar12 + 0x20 );
                              uVar14 = *puVar12;
                           }
;
                        }
 else {
                           while (true) {
                              *(long*)( puVar12 + 0x10 ) = *(long*)( puVar12 + 0x10 ) + lVar17;
                              *puVar12 = uVar14 | 4;
                              if (puVar3 == puVar12) break;
                              puVar12 = *(ushort**)( puVar12 + 0x20 );
                              uVar14 = *puVar12;
                           }
;
                        }

                        lVar11 = *(long*)( lVar11 + 0x18 );
                     }
 while ( lVar11 != lVar10 );
                     if (uVar19 <= uVar9 + 0x58) break;
                     lVar10 = *(long*)( uVar9 + 0xa0 );
                     lVar17 = *(long*)( uVar9 + 0x68 );
                     uVar9 = uVar9 + 0x58;
                  }
;
               }
 else {
                  while (true) {
                     do {
                        puVar12 = *(ushort**)( lVar10 + 0x40 );
                        puVar3 = *(ushort**)( lVar10 + 0x48 );
                        uVar14 = *puVar12;
                        if (bVar5) {
                           while (true) {
                              *(long*)( puVar12 + 0x14 ) = lVar17;
                              *puVar12 = uVar14 | 8;
                              if (puVar3 == puVar12) break;
                              puVar12 = *(ushort**)( puVar12 + 0x20 );
                              uVar14 = *puVar12;
                           }
;
                        }
 else {
                           while (true) {
                              *(long*)( puVar12 + 0x10 ) = lVar17;
                              *puVar12 = uVar14 | 4;
                              if (puVar3 == puVar12) break;
                              puVar12 = *(ushort**)( puVar12 + 0x20 );
                              uVar14 = *puVar12;
                           }
;
                        }

                        lVar10 = *(long*)( lVar10 + 0x18 );
                     }
 while ( lVar10 != lVar11 );
                     if (uVar19 <= uVar9 + 0x58) break;
                     lVar10 = *(long*)( uVar9 + 0xa0 );
                     lVar17 = *(long*)( uVar9 + 0x68 );
                     lVar11 = lVar10;
                     uVar9 = uVar9 + 0x58;
                  }
;
               }

            }

         }

      }
 else {
         uVar9 = ( ulong ) * local_98;
         bVar5 = true;
         uVar21 = 1;
         psVar20 = psVar22 + uVar9 * 0x2c;
         if (psVar20 <= psVar22) goto LAB_00105dd1;
         LAB_00105a9e:local_58 = uVar9 * 0x58;
         psVar18 = (short*)0x0;
         psVar15 = psVar22;
         do {
            if (( *(byte*)( psVar15 + 0xc ) & 4 ) == 0) {
               psVar16 = *(short**)( psVar15 + 0x18 );
               if (*(long*)( psVar15 + 0x14 ) == 0) {
                  if (( psVar16 == (short*)0x0 ) || ( *(long*)( psVar16 + 0x14 ) == 0 )) goto LAB_00105add;
                  lVar17 = *(long*)( *(long*)( psVar16 + 0x14 ) + 0x10 );
                  *(byte*)( psVar16 + 0xc ) = *(byte*)( psVar16 + 0xc ) | 4;
                  *(long*)( psVar16 + 8 ) = lVar17;
                  psVar13 = psVar16;
                  psVar16 = psVar15;
                  LAB_00105b1c:bVar1 = *(byte*)( psVar16 + 0xc );
                  lVar10 = af_cjk_compute_stem_width_isra_0(*(undefined4*)( param_2 + 0x141c ), *(undefined8*)( param_2 + 0x1420 ), uVar21, *(long*)( psVar16 + 4 ) - *(long*)( psVar13 + 4 ));
                  *(byte*)( psVar16 + 0xc ) = bVar1 | 4;
                  *(long*)( psVar16 + 8 ) = lVar10 + lVar17;
               }
 else {
                  lVar17 = *(long*)( *(long*)( psVar15 + 0x14 ) + 0x10 );
                  *(byte*)( psVar15 + 0xc ) = *(byte*)( psVar15 + 0xc ) | 4;
                  *(long*)( psVar15 + 8 ) = lVar17;
                  if (( psVar16 != (short*)0x0 ) && ( psVar13 = psVar15 * (long*)( psVar16 + 0x14 ) == 0 )) goto LAB_00105b1c;
               }

               if (psVar18 == (short*)0x0) {
                  psVar18 = psVar15;
               }

            }

            LAB_00105add:psVar15 = psVar15 + 0x2c;
         }
 while ( psVar15 < psVar20 );
         lVar17 = 0;
         bVar6 = false;
         iVar7 = 0;
         local_78 = 0;
         psVar15 = psVar22;
         do {
            while (bVar1 = *(byte*)( psVar15 + 0xc ),( bVar1 & 4 ) != 0) {
               LAB_00105c2c:psVar15 = psVar15 + 0x2c;
               if (psVar20 <= psVar15) goto LAB_00105cd8;
            }
;
            psVar16 = *(short**)( psVar15 + 0x18 );
            if (( psVar16 == (short*)0x0 ) || ( ( bVar6 && ( ( *(long*)( psVar15 + 8 ) <= lVar17 + 0x3f || ( *(long*)( psVar16 + 8 ) <= lVar17 + 0x3f ) ) ) ) )) {
               iVar7 = iVar7 + 1;
               goto LAB_00105c2c;
            }

            if (*(long*)( psVar16 + 0x14 ) == 0) {
               if (psVar16 < psVar15) {
                  lVar17 = af_cjk_compute_stem_width_isra_0(*(undefined4*)( param_2 + 0x141c ), *(undefined8*)( param_2 + 0x1420 ), uVar21, *(long*)( psVar15 + 4 ) - *(long*)( psVar16 + 4 ));
                  lVar17 = lVar17 + *(long*)( psVar16 + 8 );
                  *(byte*)( psVar15 + 0xc ) = bVar1 | 4;
                  *(long*)( psVar15 + 8 ) = lVar17;
                  bVar6 = true;
               }
 else {
                  if (( bVar5 ) || ( psVar18 != (short*)0x0 )) {
                     af_hint_normal_stem(param_2, psVar15, psVar16, local_78, uVar21);
                  }
 else {
                     local_78 = af_hint_normal_stem(param_2, psVar15, psVar16, 0);
                  }

                  *(byte*)( psVar15 + 0xc ) = *(byte*)( psVar15 + 0xc ) | 4;
                  lVar17 = *(long*)( psVar16 + 8 );
                  bVar6 = true;
                  *(byte*)( psVar16 + 0xc ) = *(byte*)( psVar16 + 0xc ) | 4;
                  psVar18 = psVar15;
               }

               goto LAB_00105c2c;
            }

            psVar13 = psVar15 + 0x2c;
            lVar11 = af_cjk_compute_stem_width_isra_0(*(undefined4*)( param_2 + 0x141c ), *(undefined8*)( param_2 + 0x1420 ), uVar21);
            lVar10 = *(long*)( psVar16 + 8 );
            *(byte*)( psVar15 + 0xc ) = bVar1 | 4;
            *(long*)( psVar15 + 8 ) = lVar11 + lVar10;
            psVar15 = psVar13;
         }
 while ( psVar13 < psVar20 );
         LAB_00105cd8:psVar15 = psVar22;
         if (bVar5) {
            if (iVar7 == 0) goto LAB_00105dd1;
            LAB_00105e50:do {
               if (( ( *(byte*)( psVar15 + 0xc ) & 4 ) == 0 ) && ( lVar17 = lVar17 != 0 )) {
                  lVar10 = *(long*)( lVar17 + 8 );
                  iVar7 = iVar7 + -1;
                  lVar17 = *(long*)( lVar17 + 0x10 );
                  *(byte*)( psVar15 + 0xc ) = *(byte*)( psVar15 + 0xc ) | 4;
                  *(long*)( psVar15 + 8 ) = ( *(long*)( psVar15 + 4 ) - lVar10 ) + lVar17;
               }

               psVar15 = psVar15 + 0x2c;
            }
 while ( psVar15 < psVar20 );
            psVar15 = psVar22;
            if (iVar7 != 0) {
               do {
                  psVar18 = psVar15;
                  if (( *(byte*)( psVar15 + 0xc ) & 4 ) == 0) {
                     do {
                        psVar18 = psVar18 + -0x2c;
                        psVar16 = psVar15;
                        if (psVar18 < psVar22) break;
                     }
 while ( ( *(byte*)( psVar18 + 0xc ) & 4 ) == 0 );
                     do {
                        psVar13 = psVar16;
                        psVar16 = psVar13 + 0x2c;
                        if (psVar20 <= psVar16) {
                           if (psVar22 <= psVar18) {
                              *(long*)( psVar15 + 8 ) = ( *(long*)( psVar15 + 4 ) - *(long*)( psVar18 + 4 ) ) + *(long*)( psVar18 + 8 );
                           }

                           goto LAB_00105ea0;
                        }

                     }
 while ( ( *(byte*)( psVar13 + 0x38 ) & 4 ) == 0 );
                     if (psVar18 < psVar22) {
                        *(long*)( psVar15 + 8 ) = ( *(long*)( psVar15 + 4 ) - *(long*)( psVar13 + 0x30 ) ) + *(long*)( psVar13 + 0x34 );
                     }
 else {
                        sVar2 = *psVar18;
                        if (*psVar16 == sVar2) {
                           *(undefined8*)( psVar15 + 8 ) = *(undefined8*)( psVar18 + 8 );
                        }
 else {
                           lVar17 = *(long*)( psVar18 + 8 );
                           lVar10 = FT_MulDiv((long)( (int)*psVar15 - (int)sVar2 ), *(long*)( psVar13 + 0x34 ) - lVar17, (long)( (int)*psVar16 - (int)sVar2 ));
                           *(long*)( psVar15 + 8 ) = lVar17 + lVar10;
                        }

                     }

                  }

                  LAB_00105ea0:psVar15 = psVar15 + 0x2c;
               }
 while ( psVar15 < psVar20 );
            }

            uVar9 = *(ulong*)( local_88 + 2 );
            if (uVar9 != 0) {
               uVar19 = uVar9 + ( ulong ) * local_88 * 0x58;
               local_98 = local_88;
               if (bVar5) goto LAB_00105df9;
               LAB_00105f59:uVar8 = *(uint*)( param_2 + 0x141c );
               bVar5 = false;
               goto LAB_00105f64;
            }

            if (bVar5) {
               af_glyph_hints_align_strong_points(param_2, uVar21);
               af_glyph_hints_align_weak_points(param_2, uVar21);
               goto LAB_00105e30;
            }

            LAB_00106161:af_glyph_hints_align_strong_points(param_2, uVar21);
            af_glyph_hints_align_weak_points(param_2, uVar21);
            local_98 = local_88 + 0x27a;
            uVar8 = *(uint*)( param_2 + 0x1418 );
            goto LAB_00105d85;
         }

         if (local_58 == 0x210) {
            psVar18 = psVar22 + 0x58;
            psVar16 = psVar22 + 0xb0;
            psVar13 = psVar22;
            LAB_0010611f:lVar11 = *(long*)( psVar16 + 4 ) - *(long*)( psVar18 + 4 );
            lVar10 = *(long*)( psVar18 + 4 ) - *(long*)( psVar13 + 4 );
            lVar17 = lVar10 - lVar11;
            if (lVar17 < 0) {
               lVar17 = lVar11 - lVar10;
            }

            if (( ( ( *(short**)( psVar13 + 0x18 ) == psVar13 + 0x2c ) && ( *(short**)( psVar18 + 0x18 ) == psVar18 + 0x2c ) ) && ( psVar4 = *(short**)( psVar16 + 0x18 ) ),psVar4 == psVar16 + 0x2c )) {
               lVar10 = *(long*)( psVar18 + 8 ) * 2 - *(long*)( psVar13 + 8 );
               lVar17 = *(long*)( psVar16 + 8 );
               *(long*)( psVar16 + 8 ) = lVar10;
               lVar17 = lVar17 - lVar10;
               *(long*)( psVar4 + 8 ) = *(long*)( psVar4 + 8 ) - lVar17;
               if (local_58 == 0x420) {
                  *(long*)( psVar22 + 0x168 ) = *(long*)( psVar22 + 0x168 ) - lVar17;
                  *(long*)( psVar22 + 0x1ec ) = *(long*)( psVar22 + 0x1ec ) - lVar17;
               }

               *(byte*)( psVar16 + 0xc ) = *(byte*)( psVar16 + 0xc ) | 4;
               *(byte*)( psVar4 + 0xc ) = *(byte*)( psVar4 + 0xc ) | 4;
            }

            if (iVar7 != 0) goto LAB_00105e50;
            uVar9 = *(ulong*)( param_2 + 0x60 );
            if (uVar9 != 0) {
               LAB_00105d36:uVar19 = uVar9 + ( ulong ) * local_88 * 0x58;
               local_98 = local_88;
               goto LAB_00105f59;
            }

            goto LAB_00106161;
         }

         if (local_58 == 0x420) {
            psVar18 = psVar22 + 0xdc;
            psVar16 = psVar22 + 0x18c;
            psVar13 = psVar22 + 0x2c;
            goto LAB_0010611f;
         }

         if (iVar7 != 0) goto LAB_00105e50;
         LAB_00105d27:uVar9 = *(ulong*)( param_2 + 0x60 );
         bVar5 = false;
         local_98 = local_88;
         if (uVar9 != 0) goto LAB_00105d36;
      }

      af_glyph_hints_align_strong_points(param_2, uVar21);
      af_glyph_hints_align_weak_points(param_2, uVar21);
      if (bVar5) goto LAB_00105e30;
      local_98 = local_98 + 0x27a;
      uVar8 = *(uint*)( param_2 + 0x1418 );
   }
 while ( true );
}
void af_indic_hints_apply(void) {
   af_cjk_hints_apply();
   return;
}
int af_latin_hints_apply(ulong param_1, long param_2, long param_3, long param_4) {
   ulong uVar1;
   short *psVar2;
   byte bVar3;
   undefined4 uVar4;
   ushort *puVar5;
   undefined8 uVar6;
   bool bVar7;
   byte bVar8;
   int iVar9;
   uint uVar10;
   uint uVar11;
   int iVar12;
   long lVar13;
   long lVar14;
   ushort *puVar15;
   long lVar16;
   long lVar17;
   ulong uVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   ulong uVar22;
   long *plVar23;
   ulong uVar24;
   long *plVar25;
   byte bVar26;
   ulong uVar27;
   long lVar28;
   short *psVar29;
   ulong uVar30;
   long lVar31;
   ulong uVar32;
   int iVar33;
   ulong *puVar34;
   ulong uVar35;
   bool bVar36;
   char local_4d;
   int local_4c;
   iVar9 = af_glyph_hints_reload(param_2, param_3);
   if (iVar9 != 0) {
      return iVar9;
   }

   uVar10 = *(uint*)( param_2 + 0x1418 );
   if (( uVar10 & 1 ) == 0) {
      uVar4 = *(undefined4*)( param_4 + 0x60 );
      iVar9 = af_latin_hints_compute_segments(param_2, 0);
      if (iVar9 != 0) {
         return iVar9;
      }

      af_latin_hints_link_segments(param_2, uVar4, param_4 + 0x68, 0);
      iVar9 = af_latin_hints_compute_edges(param_2, 0);
      if (iVar9 != 0) {
         return iVar9;
      }

      uVar10 = *(uint*)( param_2 + 0x1418 );
      if (( uVar10 & 2 ) == 0) goto LAB_001062b5;
      LAB_0010632c:puVar34 = (ulong*)( param_2 + 0x60 );
      uVar11 = uVar10 & 1;
      if (( uVar10 & 1 ) == 0) {
         uVar22 = *(ulong*)( param_2 + 0x60 );
         if (uVar22 == 0) {
            uVar27 = 0;
            goto LAB_00106dee;
         }

         bVar7 = false;
         goto LAB_00106354;
      }

   }
 else if (( uVar10 & 2 ) == 0) {
      LAB_001062b5:uVar4 = *(undefined4*)( param_4 + 0x4cf0 );
      iVar9 = af_latin_hints_compute_segments(param_2, 1);
      if (iVar9 != 0) {
         return iVar9;
      }

      af_latin_hints_link_segments(param_2, uVar4, param_4 + 0x4cf8, 1);
      iVar9 = af_latin_hints_compute_edges(param_2, 1);
      if (iVar9 != 0) {
         return iVar9;
      }

      if (( ( *(byte*)( *(long*)( *(long*)( param_4 + 0x40 ) + 0x10 ) + 1 + ( param_1 & 0xffffffff ) * 2 ) & 0x40 ) == 0 ) && ( psVar29 = *(short**)( param_2 + 0xa48 ) ),psVar29 != (short*)0x0) {
         psVar2 = psVar29 + ( ulong ) * (uint*)( param_2 + 0xa40 ) * 0x2c;
         if (psVar29 < psVar2) {
            uVar10 = *(uint*)( param_4 + 0x4e8c );
            if (uVar10 == 0) {
               do {
                  psVar29 = psVar29 + 0x2c;
               }
 while ( psVar29 < psVar2 );
            }
 else {
               lVar13 = (long)(int)*(undefined8*)( param_4 + 0x4ce0 );
               lVar14 = ( ( ulong ) * (uint*)( param_4 + 0x48 ) / 0x28 ) * lVar13;
               iVar9 = (int)( ( ulong )(lVar14 + 0x8000 + ( lVar14 >> 0x3f )) >> 0x10 );
               if (0x20 < iVar9) {
                  iVar9 = 0x20;
               }

               do {
                  bVar7 = false;
                  plVar25 = (long*)0x0;
                  plVar23 = (long*)( param_4 + 0x4e90 );
                  iVar33 = iVar9;
                  do {
                     uVar11 = *(uint*)( plVar23 + 8 );
                     if (( uVar11 & 1 ) != 0) {
                        bVar36 = ( uVar11 & 6 ) != 0;
                        uVar11 = uVar11 & 8;
                        if (( ( (int)*(char*)( (long)psVar29 + 0x19 ) == *(int*)( param_2 + 0xa50 ) ) != bVar36 ) || ( uVar11 != 0 )) {
                           lVar17 = (long)*psVar29;
                           lVar14 = *plVar23;
                           lVar31 = lVar17 - lVar14;
                           if (lVar17 - lVar14 < 0) {
                              lVar31 = lVar14 - lVar17;
                           }

                           lVar31 = (int)lVar31 * lVar13;
                           iVar12 = (int)( ( ulong )(lVar31 + 0x8000 + ( lVar31 >> 0x3f )) >> 0x10 );
                           if (iVar12 < iVar33) {
                              plVar25 = plVar23;
                              iVar33 = iVar12;
                              bVar7 = uVar11 != 0;
                           }

                           if (( ( ( ( *(byte*)( psVar29 + 0xc ) & 1 ) != 0 ) && ( iVar12 != 0 ) ) && ( uVar11 == 0 ) ) && ( bVar36 != lVar17 < lVar14 )) {
                              lVar14 = lVar17 - plVar23[3];
                              if (lVar14 < 0) {
                                 lVar14 = plVar23[3] - lVar17;
                              }

                              lVar14 = (int)lVar14 * lVar13;
                              iVar12 = (int)( ( ulong )(lVar14 + 0x8000 + ( lVar14 >> 0x3f )) >> 0x10 );
                              if (iVar12 < iVar33) {
                                 plVar25 = plVar23 + 3;
                                 bVar7 = false;
                                 iVar33 = iVar12;
                              }

                           }

                        }

                     }

                     plVar23 = plVar23 + 9;
                  }
 while ( (long*)( param_4 + 0x4e90 ) + (ulong)uVar10 * 9 != plVar23 );
                  if (( plVar25 != (long*)0x0 ) && ( *(long**)( psVar29 + 0x14 ) = bVar7 )) {
                     *(byte*)( psVar29 + 0xc ) = *(byte*)( psVar29 + 0xc ) | 8;
                  }

                  psVar29 = psVar29 + 0x2c;
               }
 while ( psVar29 < psVar2 );
            }

         }

      }

      uVar10 = *(uint*)( param_2 + 0x1418 );
      goto LAB_0010632c;
   }

   puVar34 = (ulong*)( param_2 + 0x60 );
   while (puVar34 = puVar34 + 0x13d,( uVar10 & 2 ) == 0) {
      uVar22 = *puVar34;
      uVar11 = 1;
      uVar27 = 1;
      bVar7 = true;
      if (uVar22 != 0) {
         LAB_00106354:uVar27 = (ulong)uVar11;
         plVar25 = *(long**)( param_2 + 0x1420 );
         uVar1 = uVar22 + ( ulong ) * (uint*)( param_2 + 0x58 + uVar27 * 0x9e8 ) * 0x58;
         if (bVar7) {
            local_4d = *(char*)( *(long*)( af_script_classes + ( ulong ) * (uint*)( *plVar25 + 8 ) * 8 ) + 0x18 );
            if (uVar22 < uVar1) {
               uVar35 = 0;
               uVar18 = uVar22;
               do {
                  bVar26 = *(byte*)( uVar18 + 0x18 );
                  if (( bVar26 & 4 ) != 0) goto LAB_00106b37;
                  lVar14 = *(long*)( uVar18 + 0x28 );
                  uVar24 = *(ulong*)( uVar18 + 0x30 );
                  if (lVar14 == 0) {
                     if (uVar24 != 0) {
                        LAB_00106b62:if (*(long*)( uVar24 + 0x28 ) != 0) {
                           lVar14 = *(long*)( *(long*)( uVar24 + 0x28 ) + 0x10 );
                           bVar26 = *(byte*)( uVar24 + 0x18 ) | 4;
                           *(long*)( uVar24 + 0x10 ) = lVar14;
                           *(byte*)( uVar24 + 0x18 ) = bVar26;
                           lVar13 = *(long*)( uVar18 + 0x28 );
                           uVar30 = uVar24;
                           uVar24 = uVar18;
                           LAB_00106b89:if (lVar13 == 0) goto LAB_00106ac6;
                           goto LAB_00106b30;
                        }

                     }

                  }
 else {
                     if (uVar24 == 0) {
                        uVar6 = *(undefined8*)( lVar14 + 0x10 );
                        *(byte*)( uVar18 + 0x18 ) = bVar26 | 4;
                        *(undefined8*)( uVar18 + 0x10 ) = uVar6;
                     }
 else {
                        lVar13 = *(long*)( uVar24 + 0x28 );
                        uVar30 = uVar18;
                        if (lVar13 == 0) {
                           LAB_00106ba0:lVar14 = *(long*)( lVar14 + 0x10 );
                           bVar26 = bVar26 | 4;
                           *(byte*)( uVar18 + 0x18 ) = bVar26;
                           *(long*)( uVar18 + 0x10 ) = lVar14;
                           goto LAB_00106b89;
                        }

                        if (( *(byte*)( uVar24 + 0x18 ) & 8 ) == 0) {
                           if (( bVar26 & 8 ) != 0) {
                              *(undefined8*)( uVar18 + 0x28 ) = 0;
                              *(byte*)( uVar18 + 0x18 ) = bVar26 & 0xf7;
                              goto LAB_00106b62;
                           }

                           goto LAB_00106ba0;
                        }

                        *(undefined8*)( uVar24 + 0x28 ) = 0;
                        *(byte*)( uVar24 + 0x18 ) = *(byte*)( uVar24 + 0x18 ) & 0xf7;
                        if (*(long*)( uVar18 + 0x28 ) == 0) goto LAB_00106b37;
                        lVar14 = *(long*)( *(long*)( uVar18 + 0x28 ) + 0x10 );
                        bVar26 = *(byte*)( uVar18 + 0x18 ) | 4;
                        *(long*)( uVar18 + 0x10 ) = lVar14;
                        *(byte*)( uVar18 + 0x18 ) = bVar26;
                        LAB_00106ac6:bVar3 = *(byte*)( uVar24 + 0x18 );
                        lVar13 = af_latin_compute_stem_width_isra_0(*(undefined4*)( param_2 + 0x141c ), plVar25, 1, *(long*)( uVar24 + 8 ) - *(long*)( uVar30 + 8 ), lVar14 - *(long*)( uVar30 + 8 ), bVar26, bVar3);
                        *(byte*)( uVar24 + 0x18 ) = bVar3 | 4;
                        *(long*)( uVar24 + 0x10 ) = lVar13 + lVar14;
                     }

                     LAB_00106b30:if (uVar35 == 0) {
                        uVar35 = uVar18;
                     }

                  }

                  LAB_00106b37:uVar18 = uVar18 + 0x58;
               }
 while ( uVar18 < uVar1 );
               goto LAB_001063b2;
            }

         }
 else if (uVar22 < uVar1) {
            uVar35 = 0;
            bVar7 = false;
            local_4d = '\0';
            LAB_001063b2:local_4c = 0;
            uVar18 = uVar22;
            LAB_0010649b:do {
               bVar26 = *(byte*)( uVar18 + 0x18 );
               if (( bVar26 & 4 ) == 0) {
                  lVar14 = *(long*)( uVar18 + 0x30 );
                  if (lVar14 == 0) {
                     local_4c = local_4c + 1;
                  }
 else {
                     bVar8 = bVar26 | 4;
                     lVar13 = *(long*)( uVar18 + 8 );
                     lVar31 = *(long*)( lVar14 + 8 );
                     bVar3 = *(byte*)( lVar14 + 0x18 );
                     uVar4 = *(undefined4*)( param_2 + 0x141c );
                     if (*(long*)( lVar14 + 0x28 ) != 0) {
                        lVar14 = *(long*)( lVar14 + 0x10 );
                        uVar24 = uVar18 + 0x58;
                        lVar13 = af_latin_compute_stem_width_isra_0(uVar4, plVar25, uVar11, lVar13 - lVar31, lVar14 - lVar31, bVar3, bVar26);
                        *(byte*)( uVar18 + 0x18 ) = bVar8;
                        *(long*)( uVar18 + 0x10 ) = lVar14 + lVar13;
                        uVar18 = uVar24;
                        if (uVar1 <= uVar24) break;
                        goto LAB_0010649b;
                     }

                     if (uVar35 == 0) {
                        lVar31 = lVar31 - lVar13;
                        lVar17 = af_latin_compute_stem_width_isra_0(uVar4, plVar25, uVar11, lVar31, 0, bVar26, bVar3);
                        if (lVar17 < 0x41) {
                           lVar16 = 0x20;
                           lVar19 = 0x20;
                           LAB_001069dc:lVar20 = ( lVar31 >> 1 ) + lVar13;
                           uVar35 = lVar20 + 0x20U & 0xffffffffffffffc0;
                           lVar19 = uVar35 - lVar19;
                           lVar28 = lVar20 - lVar19;
                           if (lVar20 - lVar19 < 0) {
                              lVar28 = lVar19 - lVar20;
                           }

                           lVar16 = uVar35 + lVar16;
                           lVar21 = lVar20 - lVar16;
                           if (lVar20 - lVar16 < 0) {
                              lVar21 = lVar16 - lVar20;
                           }

                           if (lVar28 < lVar21) {
                              lVar16 = lVar19;
                           }

                           lVar16 = lVar16 - lVar17 / 2;
                           *(long*)( uVar18 + 0x10 ) = lVar16;
                           *(long*)( lVar14 + 0x10 ) = lVar17 + lVar16;
                           uVar35 = *(ulong*)( uVar18 + 0x10 );
                        }
 else {
                           lVar16 = 0x1a;
                           lVar19 = 0x26;
                           if (lVar17 < 0x60) goto LAB_001069dc;
                           uVar35 = lVar13 + 0x20U & 0xffffffffffffffc0;
                           *(ulong*)( uVar18 + 0x10 ) = uVar35;
                        }

                        *(byte*)( uVar18 + 0x18 ) = bVar8;
                        lVar13 = af_latin_compute_stem_width_isra_0(uVar4, plVar25, uVar11, lVar31, uVar35 - lVar13, bVar8, *(undefined1*)( lVar14 + 0x18 ));
                        *(ulong*)( lVar14 + 0x10 ) = lVar13 + uVar35;
                        uVar35 = uVar18;
                     }
 else {
                        lVar17 = *(long*)( uVar35 + 0x10 );
                        lVar31 = lVar31 - lVar13;
                        lVar16 = *(long*)( uVar35 + 8 );
                        lVar19 = af_latin_compute_stem_width_isra_0(uVar4, plVar25, uVar11, lVar31, 0, bVar26, bVar3);
                        if (( bVar3 & 4 ) == 0) {
                           lVar17 = ( lVar13 - lVar16 ) + lVar17;
                           lVar13 = ( lVar31 >> 1 ) + lVar17;
                           if (lVar19 < 0x60) {
                              lVar31 = 0x26;
                              lVar17 = 0x1a;
                              uVar24 = lVar13 + 0x20U & 0xffffffffffffffc0;
                              if (lVar19 < 0x41) {
                                 lVar31 = 0x20;
                                 lVar17 = 0x20;
                              }

                              lVar31 = uVar24 - lVar31;
                              lVar16 = lVar13 - lVar31;
                              if (lVar13 - lVar31 < 0) {
                                 lVar16 = lVar31 - lVar13;
                              }

                              lVar17 = uVar24 + lVar17;
                              lVar28 = lVar13 - lVar17;
                              if (lVar13 - lVar17 < 0) {
                                 lVar28 = lVar17 - lVar13;
                              }

                              if (lVar16 < lVar28) {
                                 lVar17 = lVar31;
                              }

                              *(long*)( uVar18 + 0x10 ) = lVar17 - lVar19 / 2;
                              *(long*)( lVar14 + 0x10 ) = lVar17 + lVar19 / 2;
                           }
 else {
                              uVar24 = lVar17 + 0x20U & 0xffffffffffffffc0;
                              lVar16 = uVar24 + ( lVar19 >> 1 );
                              lVar28 = lVar16 - lVar13;
                              if (lVar28 < 0) {
                                 lVar28 = lVar13 - lVar16;
                              }

                              uVar30 = lVar17 + 0x20 + lVar31 & 0xffffffffffffffc0;
                              lVar31 = ( lVar19 >> 1 ) + ( uVar30 - lVar19 );
                              lVar17 = lVar31 - lVar13;
                              if (lVar17 < 0) {
                                 lVar17 = lVar13 - lVar31;
                              }

                              uVar32 = uVar30 - lVar19;
                              if (lVar28 < lVar17) {
                                 uVar30 = lVar19 + uVar24;
                                 uVar32 = uVar24;
                              }

                              *(ulong*)( uVar18 + 0x10 ) = uVar32;
                              *(ulong*)( lVar14 + 0x10 ) = uVar30;
                           }

                        }
 else {
                           *(long*)( uVar18 + 0x10 ) = *(long*)( lVar14 + 0x10 ) - lVar19;
                        }

                        *(byte*)( uVar18 + 0x18 ) = bVar8;
                        *(byte*)( lVar14 + 0x18 ) = *(byte*)( lVar14 + 0x18 ) | 4;
                        if (uVar22 < uVar18) {
                           lVar13 = *(long*)( uVar18 - 0x48 );
                           if (local_4d == '\0') {
                              bVar36 = *(long*)( uVar18 + 0x10 ) < lVar13;
                           }
 else {
                              bVar36 = lVar13 < *(long*)( uVar18 + 0x10 );
                           }

                           if (bVar36) {
                              lVar14 = *(long*)( lVar14 + 0x10 ) - lVar13;
                              if (lVar14 < 1) {
                                 lVar14 = -lVar14;
                              }

                              if (0x10 < lVar14) {
                                 *(long*)( uVar18 + 0x10 ) = lVar13;
                              }

                           }

                        }

                     }

                  }

               }

               uVar18 = uVar18 + 0x58;
            }
 while ( uVar18 < uVar1 );
            if (!bVar7) {
               lVar14 = uVar1 - uVar22;
               if (lVar14 == 0x210) {
                  lVar13 = uVar22 + 0xb0;
                  lVar31 = uVar22 + 0x160;
                  uVar18 = uVar22;
               }
 else {
                  if (lVar14 != 0x420) goto LAB_0010653e;
                  lVar13 = uVar22 + 0x1b8;
                  lVar31 = uVar22 + 0x318;
                  uVar18 = uVar22 + 0x58;
               }

               lVar19 = *(long*)( lVar31 + 8 ) - *(long*)( lVar13 + 8 );
               lVar16 = *(long*)( lVar13 + 8 ) - *(long*)( uVar18 + 8 );
               lVar17 = lVar16 - lVar19;
               if (lVar17 < 0) {
                  lVar17 = lVar19 - lVar16;
               }

               if (lVar17 < 8) {
                  lVar17 = *(long*)( lVar31 + 0x10 );
                  lVar13 = *(long*)( lVar13 + 0x10 ) * 2 - *(long*)( uVar18 + 0x10 );
                  *(long*)( lVar31 + 0x10 ) = lVar13;
                  lVar17 = lVar17 - lVar13;
                  lVar13 = *(long*)( lVar31 + 0x30 );
                  bVar26 = *(byte*)( lVar31 + 0x18 ) | 4;
                  if (lVar13 == 0) {
                     if (lVar14 == 0x420) {
                        *(long*)( uVar22 + 0x2d0 ) = *(long*)( uVar22 + 0x2d0 ) - lVar17;
                        *(long*)( uVar22 + 0x3d8 ) = *(long*)( uVar22 + 0x3d8 ) - lVar17;
                     }

                     *(byte*)( lVar31 + 0x18 ) = bVar26;
                  }
 else {
                     *(long*)( lVar13 + 0x10 ) = *(long*)( lVar13 + 0x10 ) - lVar17;
                     if (lVar14 == 0x420) {
                        *(long*)( uVar22 + 0x2d0 ) = *(long*)( uVar22 + 0x2d0 ) - lVar17;
                        *(long*)( uVar22 + 0x3d8 ) = *(long*)( uVar22 + 0x3d8 ) - lVar17;
                     }

                     *(byte*)( lVar31 + 0x18 ) = bVar26;
                     *(byte*)( lVar13 + 0x18 ) = *(byte*)( lVar13 + 0x18 ) | 4;
                  }

               }

            }

            LAB_0010653e:if (( local_4c != 0 ) || ( uVar35 == 0 )) {
               bVar26 = *(byte*)( uVar22 + 0x18 );
               uVar18 = uVar22;
               uVar24 = uVar22 + 0x58;
               if (( bVar26 & 4 ) != 0) goto LAB_00106d02;
               do {
                  lVar14 = *(long*)( uVar24 - 0x20 );
                  if (lVar14 == 0) {
                     LAB_00106d10:if (uVar35 == 0) {
                        uVar30 = uVar24 - 0x58;
                        uVar32 = *(long*)( uVar24 - 0x50 ) + 0x20U & 0xffffffffffffffc0;
                        uVar35 = uVar18;
                     }
 else {
                        for (uVar18 = uVar24 - 0xb0; ( uVar30 = uVar24 ),uVar22 <= uVar18 && ( ( *(byte*)( uVar18 + 0x18 ) & 4 ) == 0 ); uVar18 = uVar18 - 0x58) {}
                        for (; uVar30 < uVar1; uVar30 = uVar30 + 0x58) {
                           if (( *(byte*)( uVar30 + 0x18 ) & 4 ) != 0) {
                              if (( ( ( uVar22 <= uVar18 ) && ( uVar18 < uVar24 - 0x58 ) ) && ( uVar30 < uVar1 ) ) && ( uVar24 - 0x58 < uVar30 )) {
                                 lVar14 = *(long*)( uVar18 + 8 );
                                 uVar32 = *(ulong*)( uVar18 + 0x10 );
                                 if (*(long*)( uVar30 + 8 ) == lVar14) {
                                    *(ulong*)( uVar24 - 0x48 ) = uVar32;
                                 }
 else {
                                    lVar14 = FT_MulDiv(*(long*)( uVar24 - 0x50 ) - lVar14, *(long*)( uVar30 + 0x10 ) - uVar32, *(long*)( uVar30 + 8 ) - lVar14);
                                    bVar26 = *(byte*)( uVar24 - 0x40 );
                                    uVar32 = uVar32 + lVar14;
                                    *(ulong*)( uVar24 - 0x48 ) = uVar32;
                                 }

                                 *(byte*)( uVar24 - 0x40 ) = bVar26 | 4;
                                 goto LAB_00106c53;
                              }

                              break;
                           }

                        }

                        uVar30 = uVar24 - 0x58;
                        uVar32 = ( ( *(long*)( uVar24 - 0x50 ) - *(long*)( uVar35 + 8 ) ) + 0x10U & 0xffffffffffffffe0 ) + *(long*)( uVar35 + 0x10 );
                     }

                  }
 else {
                     lVar31 = *(long*)( uVar24 - 0x50 ) - *(long*)( lVar14 + 8 );
                     lVar13 = *(long*)( lVar14 + 8 ) - *(long*)( uVar24 - 0x50 );
                     if (lVar13 < 0) {
                        lVar13 = lVar31;
                     }

                     if (0x4f < lVar13) goto LAB_00106d10;
                     uVar32 = lVar31 + *(long*)( lVar14 + 0x10 );
                     uVar30 = uVar18;
                  }

                  *(ulong*)( uVar24 - 0x48 ) = uVar32;
                  *(byte*)( uVar24 - 0x40 ) = bVar26 | 4;
                  if (uVar22 < uVar30) {
                     LAB_00106c53:lVar14 = *(long*)( uVar24 - 0xa0 );
                     if (local_4d == '\0') {
                        bVar36 = (long)uVar32 < lVar14;
                     }
 else {
                        bVar36 = lVar14 < (long)uVar32;
                     }

                     if (( bVar36 ) && ( *(long*)( uVar24 - 0x28 ) != 0 )) {
                        lVar13 = *(long*)( *(long*)( uVar24 - 0x28 ) + 0x10 ) - lVar14;
                        if (lVar13 < 1) {
                           lVar13 = -lVar13;
                        }

                        if (0x10 < lVar13) {
                           *(long*)( uVar24 - 0x48 ) = lVar14;
                        }

                     }

                  }

                  if (uVar1 <= uVar24) break;
                  if (( *(byte*)( uVar24 + 0x18 ) & 4 ) != 0) {
                     lVar14 = *(long*)( uVar24 + 0x10 );
                     if (local_4d == '\0') {
                        bVar36 = lVar14 < *(long*)( uVar24 - 0x48 );
                     }
 else {
                        bVar36 = *(long*)( uVar24 - 0x48 ) < lVar14;
                     }

                     if (( bVar36 ) && ( *(long*)( uVar24 - 0x28 ) != 0 )) {
                        lVar13 = *(long*)( *(long*)( uVar24 - 0x28 ) + 0x10 ) - *(long*)( uVar24 - 0xa0 );
                        if (lVar13 < 1) {
                           lVar13 = -lVar13;
                        }

                        if (0x10 < lVar13) {
                           *(long*)( uVar24 - 0x48 ) = lVar14;
                        }

                     }

                  }

                  while (true) {
                     bVar26 = *(byte*)( uVar24 + 0x18 );
                     uVar30 = uVar24 + 0x58;
                     uVar18 = uVar24;
                     uVar24 = uVar30;
                     if (( bVar26 & 4 ) == 0) break;
                     LAB_00106d02:if (uVar1 <= uVar24) goto LAB_00106558;
                  }
;
               }
 while ( true );
            }

         }
 else {
            LAB_00106dee:bVar7 = false;
         }

      }

      LAB_00106558:lVar14 = uVar27 * 0x9e8 + param_2;
      uVar22 = *(ulong*)( lVar14 + 0x50 );
      if (uVar22 == 0) {
         af_glyph_hints_align_strong_points(param_2, uVar11);
         af_glyph_hints_align_weak_points(param_2, uVar11);
         if (bVar7) break;
      }
 else {
         uVar27 = ( ulong ) * (uint*)( lVar14 + 0x48 ) * 0x50 + uVar22;
         if (bVar7) goto LAB_00106724;
         for (; uVar22 < uVar27; uVar22 = uVar22 + 0x50) {
            if (*(long*)( uVar22 + 0x10 ) != 0) {
               puVar15 = *(ushort**)( uVar22 + 0x40 );
               puVar5 = *(ushort**)( uVar22 + 0x48 );
               uVar6 = *(undefined8*)( *(long*)( uVar22 + 0x10 ) + 0x10 );
               *puVar15 = *puVar15 | 4;
               *(undefined8*)( puVar15 + 0x10 ) = uVar6;
               while (puVar15 != puVar5) {
                  puVar15 = *(ushort**)( puVar15 + 0x20 );
                  *puVar15 = *puVar15 | 4;
                  *(undefined8*)( puVar15 + 0x10 ) = uVar6;
               }
;
            }

         }

         af_glyph_hints_align_strong_points(param_2, uVar11);
         af_glyph_hints_align_weak_points(param_2, uVar11);
      }

      uVar10 = *(uint*)( param_2 + 0x1418 );
   }
;
   LAB_0010679a:af_glyph_hints_save_isra_0(*(undefined4*)( param_2 + 0x2c ), *(undefined8*)( param_2 + 0x30 ), *(undefined8*)( param_3 + 8 ), *(undefined8*)( param_3 + 0x10 ));
   return 0;
   LAB_00106724:if (uVar22 < uVar27) {
      if (*(long*)( uVar22 + 0x10 ) == 0) {
         LAB_00106720:uVar22 = uVar22 + 0x50;
      }
 else {
         puVar15 = *(ushort**)( uVar22 + 0x40 );
         puVar5 = *(ushort**)( uVar22 + 0x48 );
         uVar6 = *(undefined8*)( *(long*)( uVar22 + 0x10 ) + 0x10 );
         *puVar15 = *puVar15 | 8;
         *(undefined8*)( puVar15 + 0x14 ) = uVar6;
         if (puVar15 == puVar5) goto LAB_00106720;
         do {
            puVar15 = *(ushort**)( puVar15 + 0x20 );
            *puVar15 = *puVar15 | 8;
            *(undefined8*)( puVar15 + 0x14 ) = uVar6;
         }
 while ( puVar5 != puVar15 );
         uVar22 = uVar22 + 0x50;
      }

      goto LAB_00106724;
   }

   af_glyph_hints_align_strong_points(param_2, uVar11);
   af_glyph_hints_align_weak_points(param_2, uVar11);
   goto LAB_0010679a;
}
undefined8 af_indic_hints_init(long param_1, long param_2) {
   uint uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
   uVar6 = *(uint*)( param_2 + 0x30 );
   uVar2 = *(undefined8*)( param_2 + 0x50 );
   uVar3 = *(undefined8*)( param_2 + 0x58 );
   *(long*)( param_1 + 0x1420 ) = param_2;
   uVar4 = *(undefined8*)( param_2 + 0x3c40 );
   uVar5 = *(undefined8*)( param_2 + 0x3c48 );
   uVar1 = *(uint*)( param_2 + 0x34 );
   *(undefined8*)( param_1 + 8 ) = uVar2;
   *(undefined8*)( param_1 + 0x10 ) = uVar3;
   *(undefined8*)( param_1 + 0x18 ) = uVar4;
   *(undefined8*)( param_1 + 0x20 ) = uVar5;
   if (( uVar6 - 2 & 0xfffffffd ) == 0) {
      uVar6 = ( uint )(uVar6 == 2) * 9 + 6;
   }
 else {
      uVar6 = ( uint )(( uVar6 & 0xfffffffd ) != 1) << 2 | ( uint )(uVar6 - 2 < 2);
   }

   *(uint*)( param_1 + 0x141c ) = uVar6;
   *(uint*)( param_1 + 0x1418 ) = uVar1 | 4;
   return 0;
}
undefined8 af_property_get(long param_1, char *param_2, long *param_3) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = strcmp(param_2, "glyph-to-script-map");
   if (iVar2 == 0) {
      lVar1 = *param_3;
      if (lVar1 == 0) {
         LAB_00107290:uVar3 = 0x23;
         goto LAB_001071a2;
      }

      lVar4 = *(long*)( lVar1 + 0xd8 );
      if (*(long*)( lVar1 + 0xd8 ) == 0) {
         uVar3 = af_face_globals_new(lVar1, &local_28, param_1);
         if ((int)uVar3 != 0) goto LAB_001071a2;
         *(code**)( lVar1 + 0xe0 ) = af_face_globals_free;
         *(long*)( lVar1 + 0xd8 ) = local_28;
         lVar4 = local_28;
      }

      param_3[1] = *(long*)( lVar4 + 0x10 );
   }
 else {
      iVar2 = strcmp(param_2, "fallback-script");
      if (iVar2 == 0) {
         *(undefined4*)param_3 = *(undefined4*)( ( &af_style_classes )[*(uint*)( param_1 + 0x18 )] + 8 );
      }
 else {
         iVar2 = strcmp(param_2, "default-script");
         if (iVar2 == 0) {
            *(undefined4*)param_3 = *(undefined4*)( param_1 + 0x1c );
         }
 else {
            iVar2 = strcmp(param_2, "increase-x-height");
            if (iVar2 == 0) {
               lVar1 = *param_3;
               if (lVar1 == 0) goto LAB_00107290;
               lVar4 = *(long*)( lVar1 + 0xd8 );
               if (*(long*)( lVar1 + 0xd8 ) == 0) {
                  uVar3 = af_face_globals_new(lVar1, &local_28, param_1);
                  if ((int)uVar3 != 0) goto LAB_001071a2;
                  *(code**)( lVar1 + 0xe0 ) = af_face_globals_free;
                  *(long*)( lVar1 + 0xd8 ) = local_28;
                  lVar4 = local_28;
               }

               *(undefined4*)( param_3 + 1 ) = *(undefined4*)( lVar4 + 0x18 );
            }
 else {
               iVar2 = strcmp(param_2, "darkening-parameters");
               if (iVar2 == 0) {
                  *(undefined4*)param_3 = *(undefined4*)( param_1 + 0x24 );
                  *(undefined4*)( (long)param_3 + 4 ) = *(undefined4*)( param_1 + 0x28 );
                  for (int i = 0; i < 3; i++) {
                     *(undefined4*)( param_3 + ( i + 1 ) ) = *(undefined4*)( param_1 + ( 8*i + 44 ) );
                     *(undefined4*)( (long)param_3 + ( 8*i + 12 ) ) = *(undefined4*)( param_1 + ( 8*i + 48 ) );
                  }

               }
 else {
                  iVar2 = strcmp(param_2, "no-stem-darkening");
                  uVar3 = 0xc;
                  if (iVar2 != 0) goto LAB_001071a2;
                  *(undefined1*)param_3 = *(undefined1*)( param_1 + 0x20 );
               }

            }

         }

      }

   }

   uVar3 = 0;
   LAB_001071a2:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 af_shaper_get_coverage(void) {
   return 0;
}
undefined8 af_shaper_buf_create(void) {
   return 0;
}
void af_shaper_buf_destroy(void) {
   return;
}
byte *af_shaper_get_cluster(byte *param_1, long param_2, ulong *param_3, undefined4 *param_4) {
   byte bVar1;
   uint uVar2;
   ulong uVar3;
   long lVar4;
   byte *pbVar5;
   int iVar6;
   ulong uVar7;
   byte *pbVar8;
   ulong uVar9;
   bVar1 = *param_1;
   while (bVar1 == 0x20) {
      pbVar8 = param_1 + 1;
      param_1 = param_1 + 1;
      bVar1 = *pbVar8;
   }
;
   uVar9 = (ulong)bVar1;
   pbVar8 = param_1 + 1;
   if ((char)bVar1 < '\0') {
      uVar2 = (uint)bVar1;
      if (uVar9 < 0xe0) {
         iVar6 = 1;
         uVar9 = ( ulong )(uVar2 & 0x1f);
      }
 else if (uVar9 < 0xf0) {
         uVar9 = ( ulong )(uVar2 & 0xf);
         iVar6 = 2;
      }
 else {
         uVar9 = ( ulong )(uVar2 & 7);
         iVar6 = 3;
      }

      do {
         bVar1 = *pbVar8;
         pbVar8 = pbVar8 + 1;
         uVar9 = uVar9 << 6 | ( ulong )(bVar1 & 0x3f);
      }
 while ( pbVar8 != param_1 + ( iVar6 + 1 ) );
   }

   uVar7 = 0;
   while (true) {
      bVar1 = *pbVar8;
      uVar3 = (ulong)bVar1;
      if (( bVar1 & 0xdf ) == 0) break;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar3;
      if ((char)bVar1 < '\0') {
         if (uVar3 < 0xe0) {
            lVar4 = 1;
            uVar7 = ( ulong )(bVar1 & 0x1f);
         }
 else if (uVar3 < 0xf0) {
            uVar7 = ( ulong )(bVar1 & 0xf);
            lVar4 = 2;
         }
 else {
            uVar7 = ( ulong )(bVar1 & 7);
            lVar4 = 3;
         }

         pbVar5 = pbVar8 + lVar4;
         do {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar7 = uVar7 << 6 | ( ulong )(bVar1 & 0x3f);
         }
 while ( pbVar8 != pbVar5 );
      }

   }
;
   if (uVar7 != 0) {
      *param_3 = 0;
      *param_4 = 0;
      return pbVar8;
   }

   uVar2 = FT_Get_Char_Index(**(undefined8**)( param_2 + 0x40 ), uVar9);
   *param_3 = (ulong)uVar2;
   *param_4 = 1;
   return pbVar8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void af_cjk_metrics_init_widths(long *param_1, long param_2) {
   undefined8 *puVar1;
   char cVar2;
   uint uVar3;
   undefined8 uVar4;
   ulong uVar5;
   long lVar6;
   undefined1 *puVar7;
   int iVar8;
   int iVar9;
   void *pvVar10;
   long lVar11;
   ulong uVar12;
   ulong uVar13;
   undefined1 *puVar14;
   undefined8 *puVar15;
   char *pcVar16;
   long *plVar17;
   long in_FS_OFFSET;
   undefined1 local_a030[40960];
   puVar7 = &stack0xffffffffffffffd0;
   do {
      puVar14 = puVar7;
      *(undefined8*)( puVar14 + -0x1000 ) = *(undefined8*)( puVar14 + -0x1000 );
      puVar7 = puVar14 + -0x1000;
   }
 while ( puVar14 + -0x1000 != local_a030 );
   uVar4 = *(undefined8*)( param_2 + 0xb8 );
   *(undefined8*)( puVar14 + 0x8ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)( puVar14 + -0x1ab8 );
   iVar8 = 0;
   *(undefined4*)( param_1 + 0xc ) = 0;
   *(undefined4*)( param_1 + 0x78a ) = 0;
   puVar15 = puVar1;
   for (lVar11 = 0x285; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
   }

   lVar11 = *param_1;
   *(undefined8*)( puVar14 + -0x1ab8 ) = uVar4;
   pcVar16 = *(char**)( *(long*)( af_script_classes + ( ulong ) * (uint*)( lVar11 + 8 ) * 8 ) + 0x20 );
   cVar2 = *pcVar16;
   if (cVar2 != '\0') {
      do {
         while (cVar2 == ' ') {
            pcVar16 = pcVar16 + 1;
            cVar2 = *pcVar16;
         }
;
         *(undefined8*)( puVar14 + -0x1ad0 ) = 0x10756f;
         pcVar16 = (char*)af_shaper_get_cluster(pcVar16, param_1, puVar14 + -0x1ac0, puVar14 + -0x1ac4);
         if (( *(uint*)( puVar14 + -0x1ac4 ) < 2 ) && ( *(long*)( puVar14 + -0x1ac0 ) != 0 )) {
            *(undefined8*)( puVar14 + -0x1ad0 ) = 0x107673;
            iVar8 = FT_Load_Glyph(param_2, *(long*)( puVar14 + -0x1ac0 ), 1);
            if (( iVar8 == 0 ) && ( lVar11 = *(long*)( param_2 + 0x98 ) ),0 < *(short*)( lVar11 + 0xca )) {
               *(undefined8*)( puVar14 + -0x1ad0 ) = 0x1076a9;
               pvVar10 = memset(puVar14 + 0x17b8, 0, 0x7830);
               lVar6 = param_1[9];
               *(long*)( puVar14 + 0x17c0 ) = param_2;
               *(void**)( puVar14 + -0x698 ) = pvVar10;
               *(int*)( puVar14 + 0x1800 ) = (int)lVar6;
               *(undefined4*)( puVar14 + -0x6a0 ) = 0;
               *(undefined8*)( puVar14 + 0x17c8 ) = __LC16;
               *(undefined8*)( puVar14 + 0x17d0 ) = _UNK_0010e3f8;
               *(undefined8*)( puVar14 + -0x1ad0 ) = 0x1076f1;
               iVar8 = af_glyph_hints_reload(puVar1, lVar11 + 200);
               if (iVar8 == 0) {
                  iVar8 = 0;
                  puVar15 = puVar1;
                  plVar17 = param_1 + 0xd;
                  goto LAB_00107703;
               }

            }

            break;
         }

         cVar2 = *pcVar16;
      }
 while ( cVar2 != '\0' );
      LAB_0010758e:iVar8 = (int)param_1[0x78a];
      if ((int)param_1[0xc] != 0) {
         uVar12 = param_1[0xd];
         goto LAB_001075a3;
      }

   }

   uVar12 = ( ulong ) * (uint*)( param_1 + 9 ) * 0x19 >> 10;
   LAB_001075a3:param_1[0x3e] = uVar12;
   *(undefined1*)( param_1 + 0x3f ) = 0;
   param_1[0x3d] = (long)uVar12 / 5;
   if (iVar8 == 0) {
      uVar12 = ( ulong ) * (uint*)( param_1 + 9 ) * 0x19 >> 10;
   }
 else {
      uVar12 = param_1[0x78b];
   }

   param_1[0x7bc] = uVar12;
   *(undefined1*)( param_1 + 0x7bd ) = 0;
   param_1[0x7bb] = (long)uVar12 / 5;
   *(undefined8*)( puVar14 + -0x1ad0 ) = 0x107620;
   af_glyph_hints_done(puVar1);
   if (*(long*)( puVar14 + 0x8ff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   *(undefined**)( puVar14 + -0x1ad0 ) = &UNK_001077f9;
   __stack_chk_fail();
   LAB_00107703:*(undefined4*)( puVar14 + -0x1ac4 ) = 0;
   *(undefined8*)( puVar14 + -0x1ad0 ) = 0x107716;
   iVar9 = af_latin_hints_compute_segments(puVar1, iVar8);
   if (iVar9 != 0) goto LAB_0010758e;
   *(undefined8*)( puVar14 + -0x1ad0 ) = 0x10772d;
   af_latin_hints_link_segments(puVar1, 0, 0, iVar8);
   uVar12 = puVar15[10];
   uVar13 = ( ulong ) * (uint*)( puVar15 + 9 ) * 0x50 + uVar12;
   for (; uVar12 < uVar13; uVar12 = uVar12 + 0x50) {
      uVar5 = *(ulong*)( uVar12 + 0x20 );
      if (( ( uVar5 != 0 ) && ( *(ulong*)( uVar5 + 0x20 ) == uVar12 ) ) && ( uVar12 < uVar5 )) {
         uVar3 = *(uint*)( puVar14 + -0x1ac4 );
         iVar9 = (int)*(short*)( uVar12 + 2 ) - (int)*(short*)( uVar5 + 2 );
         lVar11 = (long)iVar9;
         if (iVar9 < 0) {
            lVar11 = -(long)iVar9;
         }

         if (uVar3 < 0x10) {
            *(uint*)( puVar14 + -0x1ac4 ) = uVar3 + 1;
            param_1[(ulong)uVar3 * 3 + (long)iVar8 * 0x77e + 0xd] = lVar11;
         }

      }

   }

   puVar15 = puVar15 + 0x13d;
   *(undefined8*)( puVar14 + -0x1ad0 ) = 0x107790;
   af_sort_and_quantize_widths(puVar14 + -0x1ac4, plVar17, ( ulong ) * (uint*)( puVar14 + 0x1800 ) / 100);
   *(undefined4*)( plVar17 + -1 ) = *(undefined4*)( puVar14 + -0x1ac4 );
   if (iVar8 != 0) goto LAB_0010758e;
   iVar8 = 1;
   plVar17 = plVar17 + 0x77e;
   goto LAB_00107703;
}
void af_cjk_metrics_init_blues(long *param_1, long param_2) {
   int iVar1;
   char *pcVar2;
   short *psVar3;
   long *plVar4;
   bool bVar5;
   char cVar6;
   int iVar7;
   char *pcVar8;
   ulong uVar9;
   long lVar10;
   long *plVar11;
   long lVar12;
   int iVar13;
   long *plVar14;
   long *plVar15;
   long lVar16;
   int iVar17;
   uint uVar18;
   short *psVar19;
   ushort uVar20;
   uint uVar21;
   uint uVar22;
   ulong uVar23;
   long *plVar24;
   undefined1 *puVar25;
   long in_FS_OFFSET;
   uint local_384;
   long local_380;
   long local_378[52];
   long local_1d8[51];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar25 = af_blue_stringsets + ( ulong ) * (uint*)( *param_1 + 0xc ) * 8;
   uVar21 = *(uint*)( af_blue_stringsets + ( ulong ) * (uint*)( *param_1 + 0xc ) * 8 );
   do {
      if (uVar21 == 0x159b) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      plVar24 = param_1 + 10;
      if (( puVar25[4] & 2 ) == 0) {
         plVar24 = param_1 + 0x788;
      }

      pcVar8 = &af_blue_strings + uVar21;
      if (( &af_blue_strings )[uVar21] != '\0') {
         bVar5 = true;
         cVar6 = *pcVar8;
         uVar23 = 0;
         uVar9 = 0;
         do {
            while (cVar6 == ' ') {
               pcVar2 = pcVar8 + 1;
               pcVar8 = pcVar8 + 1;
               cVar6 = *pcVar2;
            }
;
            if (cVar6 == '|') {
               bVar5 = false;
               pcVar8 = pcVar8 + 1;
            }
 else {
               pcVar8 = (char*)af_shaper_get_cluster(pcVar8, param_1, &local_380, &local_384);
               if (( local_384 < 2 ) && ( local_380 != 0 )) {
                  iVar7 = FT_Load_Glyph(param_2, local_380, 1);
                  lVar12 = *(long*)( param_2 + 0x98 );
                  psVar19 = *(short**)( lVar12 + 0xe0 );
                  if (( 2 < *(short*)( lVar12 + 0xca ) ) && ( iVar7 == 0 )) {
                     if (*(short*)( lVar12 + 200 ) < 1) {
                        lVar16 = 0;
                     }
 else {
                        iVar17 = -1;
                        iVar7 = -1;
                        lVar16 = 0;
                        psVar3 = psVar19 + ( ulong )((int)*(short*)( lVar12 + 200 ) - 1) + 1;
                        do {
                           while (true) {
                              iVar13 = iVar17 + 1;
                              lVar10 = (long)iVar17;
                              iVar17 = (int)*psVar19;
                              if (iVar13 < iVar17) break;
                              joined_r0x00107be3:psVar19 = psVar19 + 1;
                              if (psVar19 == psVar3) goto LAB_00107b5d;
                           }
;
                           lVar10 = lVar10 * 0x10 + *(long*)( lVar12 + 0xd0 );
                           uVar20 = *(ushort*)( puVar25 + 4 ) & 1;
                           iVar1 = iVar17 + 1;
                           if (( *(ushort*)( puVar25 + 4 ) & 2 ) == 0) {
                              if (uVar20 == 0) {
                                 do {
                                    if (( iVar7 < 0 ) || ( *(long*)( lVar10 + 0x18 ) < lVar16 )) {
                                       lVar16 = *(long*)( lVar10 + 0x18 );
                                       iVar7 = iVar13;
                                    }

                                    iVar13 = iVar13 + 1;
                                    lVar10 = lVar10 + 0x10;
                                 }
 while ( iVar13 != iVar1 );
                              }
 else {
                                 do {
                                    if (( iVar7 < 0 ) || ( lVar16 < *(long*)( lVar10 + 0x18 ) )) {
                                       lVar16 = *(long*)( lVar10 + 0x18 );
                                       iVar7 = iVar13;
                                    }

                                    iVar13 = iVar13 + 1;
                                    lVar10 = lVar10 + 0x10;
                                 }
 while ( iVar13 != iVar1 );
                              }

                              goto joined_r0x00107be3;
                           }

                           if (uVar20 != 0) {
                              do {
                                 if (( iVar7 < 0 ) || ( lVar16 < *(long*)( lVar10 + 0x10 ) )) {
                                    lVar16 = *(long*)( lVar10 + 0x10 );
                                    iVar7 = iVar13;
                                 }

                                 iVar13 = iVar13 + 1;
                                 lVar10 = lVar10 + 0x10;
                              }
 while ( iVar13 != iVar1 );
                              goto joined_r0x00107be3;
                           }

                           do {
                              if (( iVar7 < 0 ) || ( *(long*)( lVar10 + 0x10 ) < lVar16 )) {
                                 lVar16 = *(long*)( lVar10 + 0x10 );
                                 iVar7 = iVar13;
                              }

                              iVar13 = iVar13 + 1;
                              lVar10 = lVar10 + 0x10;
                           }
 while ( iVar1 != iVar13 );
                           psVar19 = psVar19 + 1;
                        }
 while ( psVar19 != psVar3 );
                     }

                     LAB_00107b5d:if (bVar5) {
                        local_378[uVar9] = lVar16;
                        uVar9 = ( ulong )((int)uVar9 + 1);
                     }
 else {
                        local_1d8[uVar23] = lVar16;
                        uVar23 = ( ulong )((int)uVar23 + 1);
                     }

                  }

               }

            }

            cVar6 = *pcVar8;
         }
 while ( cVar6 != '\0' );
         uVar21 = (uint)uVar9;
         uVar22 = (uint)uVar23;
         if (uVar21 != 0 || uVar22 != 0) {
            plVar11 = local_378 + 1;
            uVar18 = 1;
            plVar4 = plVar11;
            plVar15 = plVar11;
            if (1 < uVar21) {
               LAB_00107983:do {
                  plVar14 = plVar4 + -1;
                  lVar12 = plVar11[-1];
                  if (*plVar11 < lVar12) {
                     *plVar14 = *plVar11;
                     *plVar4 = lVar12;
                     plVar11 = plVar11 + -1;
                     plVar4 = plVar14;
                     if (plVar14 != local_378) goto LAB_00107983;
                  }

                  uVar18 = uVar18 + 1;
                  plVar11 = plVar15 + 1;
                  plVar4 = plVar11;
                  plVar15 = plVar11;
               }
 while ( uVar21 != uVar18 );
            }

            plVar11 = local_1d8 + 1;
            uVar18 = 1;
            plVar4 = plVar11;
            plVar15 = plVar11;
            if (uVar22 < 2) {
               uVar18 = *(uint*)( (long)plVar24 + 0x1ac );
               uVar20 = *(ushort*)( puVar25 + 4 ) & 1;
               *(uint*)( (long)plVar24 + 0x1ac ) = uVar18 + 1;
               if (uVar22 != 0) goto LAB_00107a39;
               lVar12 = local_378[uVar21 >> 1];
               uVar9 = (ulong)uVar18;
               plVar24[uVar9 * 7 + 0x39] = lVar12;
               plVar24[uVar9 * 7 + 0x36] = lVar12;
            }
 else {
               LAB_001079f3:do {
                  plVar14 = plVar4 + -1;
                  lVar12 = plVar11[-1];
                  if (*plVar11 < lVar12) {
                     *plVar14 = *plVar11;
                     *plVar4 = lVar12;
                     plVar11 = plVar11 + -1;
                     plVar4 = plVar14;
                     if (local_1d8 != plVar14) goto LAB_001079f3;
                  }

                  uVar18 = uVar18 + 1;
                  plVar11 = plVar15 + 1;
                  plVar4 = plVar11;
                  plVar15 = plVar11;
               }
 while ( uVar22 != uVar18 );
               uVar18 = *(uint*)( (long)plVar24 + 0x1ac );
               uVar20 = *(ushort*)( puVar25 + 4 ) & 1;
               *(uint*)( (long)plVar24 + 0x1ac ) = uVar18 + 1;
               LAB_00107a39:lVar12 = local_1d8[uVar22 >> 1];
               if (uVar21 == 0) {
                  uVar9 = (ulong)uVar18;
                  plVar24[uVar9 * 7 + 0x39] = lVar12;
                  plVar24[uVar9 * 7 + 0x36] = lVar12;
               }
 else {
                  lVar16 = local_378[uVar21 >> 1];
                  uVar9 = (ulong)uVar18;
                  plVar24[uVar9 * 7 + 0x36] = lVar16;
                  plVar24[uVar9 * 7 + 0x39] = lVar12;
                  if (( lVar16 != lVar12 ) && ( lVar12 < lVar16 != uVar20 )) {
                     lVar12 = ( lVar16 + lVar12 ) / 2;
                     plVar24[uVar9 * 7 + 0x39] = lVar12;
                     plVar24[uVar9 * 7 + 0x36] = lVar12;
                  }

               }

            }

            if (uVar20 == 0) {
               *(undefined4*)( plVar24 + uVar9 * 7 + 0x3c ) = 0;
            }
 else {
               *(undefined4*)( plVar24 + uVar9 * 7 + 0x3c ) = 2;
            }

         }

      }

      uVar21 = *(uint*)( puVar25 + 8 );
      puVar25 = puVar25 + 8;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void af_latin_metrics_init_widths(long *param_1, long param_2) {
   undefined8 *puVar1;
   char cVar2;
   undefined8 uVar3;
   ulong uVar4;
   bool bVar5;
   long lVar6;
   undefined1 *puVar7;
   int iVar8;
   int iVar9;
   void *pvVar10;
   long lVar11;
   ulong uVar12;
   undefined1 *puVar13;
   bool bVar14;
   undefined8 *puVar15;
   char *pcVar16;
   ulong uVar17;
   ulong uVar18;
   ulong uVar19;
   long *plVar20;
   long in_FS_OFFSET;
   undefined1 local_c030[49152];
   puVar7 = &stack0xffffffffffffffd0;
   do {
      puVar13 = puVar7;
      *(undefined8*)( puVar13 + -0x1000 ) = *(undefined8*)( puVar13 + -0x1000 );
      puVar7 = puVar13 + -0x1000;
   }
 while ( puVar13 + -0x1000 != local_c030 );
   uVar3 = *(undefined8*)( param_2 + 0xb8 );
   *(undefined8*)( puVar13 + 0xaff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)( puVar13 + -0x1bf8 );
   iVar8 = 0;
   *(undefined4*)( param_1 + 0xc ) = 0;
   *(undefined4*)( param_1 + 0x99e ) = 0;
   puVar15 = puVar1;
   for (lVar11 = 0x285; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
   }

   lVar11 = *param_1;
   *(undefined8*)( puVar13 + -0x1bf8 ) = uVar3;
   pcVar16 = *(char**)( *(long*)( af_script_classes + ( ulong ) * (uint*)( lVar11 + 8 ) * 8 ) + 0x20 );
   cVar2 = *pcVar16;
   if (cVar2 != '\0') {
      do {
         while (cVar2 == ' ') {
            pcVar16 = pcVar16 + 1;
            cVar2 = *pcVar16;
         }
;
         *(undefined8*)( puVar13 + -0x1c10 ) = 0x107ddf;
         pcVar16 = (char*)af_shaper_get_cluster(pcVar16, param_1, puVar13 + -0x1c00, puVar13 + -0x1c04);
         if (( *(uint*)( puVar13 + -0x1c04 ) < 2 ) && ( *(long*)( puVar13 + -0x1c00 ) != 0 )) {
            *(undefined8*)( puVar13 + -0x1c10 ) = 0x107ee3;
            iVar8 = FT_Load_Glyph(param_2, *(long*)( puVar13 + -0x1c00 ), 1);
            if (( iVar8 == 0 ) && ( lVar11 = *(long*)( param_2 + 0x98 ) ),0 < *(short*)( lVar11 + 0xca )) {
               *(undefined8*)( puVar13 + -0x1c10 ) = 0x107f1c;
               pvVar10 = memset(puVar13 + 0x1678, 0, 0x9970);
               lVar6 = param_1[9];
               *(long*)( puVar13 + 0x1680 ) = param_2;
               *(void**)( puVar13 + -0x7d8 ) = pvVar10;
               *(int*)( puVar13 + 0x16c0 ) = (int)lVar6;
               *(undefined4*)( puVar13 + -0x7e0 ) = 0;
               *(undefined8*)( puVar13 + 0x1688 ) = __LC16;
               *(undefined8*)( puVar13 + 0x1690 ) = _UNK_0010e3f8;
               *(undefined8*)( puVar13 + -0x1c10 ) = 0x107f68;
               iVar8 = af_glyph_hints_reload(puVar1, lVar11 + 200);
               plVar20 = param_1 + 0xd;
               puVar15 = puVar1;
               if (iVar8 == 0) goto LAB_00107f73;
            }

            break;
         }

         cVar2 = *pcVar16;
      }
 while ( cVar2 != '\0' );
      LAB_00107dfe:iVar8 = (int)param_1[0x99e];
      if ((int)param_1[0xc] != 0) {
         uVar12 = param_1[0xd];
         goto LAB_00107e13;
      }

   }

   uVar12 = ( ulong ) * (uint*)( param_1 + 9 ) * 0x19 >> 10;
   LAB_00107e13:param_1[0x3e] = uVar12;
   *(undefined1*)( param_1 + 0x3f ) = 0;
   param_1[0x3d] = (long)uVar12 / 5;
   if (iVar8 == 0) {
      uVar12 = ( ulong ) * (uint*)( param_1 + 9 ) * 0x19 >> 10;
   }
 else {
      uVar12 = param_1[0x99f];
   }

   param_1[0x9d0] = uVar12;
   *(undefined1*)( param_1 + 0x9d1 ) = 0;
   param_1[0x9cf] = (long)uVar12 / 5;
   *(undefined8*)( puVar13 + -0x1c10 ) = 0x107e90;
   af_glyph_hints_done(puVar1);
   if (*(long*)( puVar13 + 0xaff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   *(undefined**)( puVar13 + -0x1c10 ) = &UNK_00108087;
   __stack_chk_fail();
   LAB_00107f73:*(undefined4*)( puVar13 + -0x1c04 ) = 0;
   *(undefined8*)( puVar13 + -0x1c10 ) = 0x107f86;
   iVar9 = af_latin_hints_compute_segments(puVar1, iVar8);
   if (iVar9 != 0) goto LAB_00107dfe;
   *(undefined8*)( puVar13 + -0x1c10 ) = 0x107f9d;
   af_latin_hints_link_segments(puVar1, 0, 0, iVar8);
   uVar12 = puVar15[10];
   if (( uVar12 != 0 ) && ( uVar17 = uVar12 < uVar17 )) {
      bVar5 = false;
      uVar18 = 0;
      do {
         uVar4 = *(ulong*)( uVar12 + 0x20 );
         uVar19 = uVar18;
         if (( uVar4 != 0 ) && ( bVar14 = *(ulong*)( uVar4 + 0x20 ) == uVar12 && uVar12<uVar4,bVar14 )) {
            iVar9 = (int)*(short*)( uVar12 + 2 ) - (int)*(short*)( uVar4 + 2 );
            lVar11 = (long)iVar9;
            if (iVar9 < 0) {
               lVar11 = -(long)iVar9;
            }

            if ((uint)uVar18 < 0x10) {
               uVar19 = ( ulong )((uint)uVar18 + 1);
               param_1[uVar18 * 3 + (long)iVar8 * 0x992 + 0xd] = lVar11;
               bVar5 = bVar14;
            }

         }

         uVar12 = uVar12 + 0x50;
         uVar18 = uVar19;
      }
 while ( uVar12 < uVar17 );
      if (bVar5) {
         *(int*)( puVar13 + -0x1c04 ) = (int)uVar19;
      }

   }

   puVar15 = puVar15 + 0x13d;
   *(undefined8*)( puVar13 + -0x1c10 ) = 0x10801a;
   af_sort_and_quantize_widths(puVar13 + -0x1c04, plVar20, ( ulong ) * (uint*)( puVar13 + 0x16c0 ) / 100);
   *(undefined4*)( plVar20 + -1 ) = *(undefined4*)( puVar13 + -0x1c04 );
   if (iVar8 != 0) goto LAB_00107dfe;
   iVar8 = 1;
   plVar20 = plVar20 + 0x992;
   goto LAB_00107f73;
}
/* WARNING: Type propagation algorithm not settling */undefined8 af_latin_metrics_init_blues(undefined8 *param_1, long param_2) {
   short *psVar1;
   ushort *puVar2;
   char cVar3;
   uint uVar4;
   uint *puVar5;
   long lVar6;
   bool bVar7;
   int iVar8;
   uint uVar9;
   undefined4 uVar10;
   int iVar11;
   long **pplVar12;
   long **pplVar13;
   long lVar14;
   long lVar15;
   ushort *puVar16;
   undefined8 uVar17;
   uint uVar18;
   long *plVar19;
   long lVar20;
   ulong uVar21;
   char *pcVar22;
   long lVar23;
   long lVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   short *psVar28;
   long lVar29;
   long *plVar30;
   uint uVar31;
   long *plVar32;
   long lVar33;
   long lVar34;
   long lVar35;
   long lVar36;
   long lVar37;
   long lVar38;
   short *psVar39;
   long lVar40;
   long *plVar41;
   uint uVar42;
   uint uVar43;
   uint uVar44;
   ulong uVar45;
   int iVar46;
   long in_FS_OFFSET;
   bool bVar47;
   long local_490;
   uint local_484;
   uint local_478;
   uint *local_470;
   long local_460;
   uint local_41c;
   ulong local_418;
   uint local_408;
   int local_3d4;
   long local_3d0;
   long *local_3c8[10];
   long local_378[52];
   long local_1d8[51];
   long local_40;
   puVar5 = (uint*)*param_1;
   uVar45 = (ulong)puVar5[3];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(uint*)( param_1 + 9 );
   local_470 = (uint*)( af_blue_stringsets + uVar45 * 8 );
   uVar9 = *(uint*)( af_blue_stringsets + uVar45 * 8 );
   if (uVar9 != 0x159b) {
      LAB_00108118:pcVar22 = &af_blue_strings + uVar9;
      if (( &af_blue_strings )[uVar9] != '\0') {
         lVar24 = 0;
         local_41c = 0;
         cVar3 = *pcVar22;
         local_460 = 0;
         uVar9 = 0;
         joined_r0x00108162:while (cVar3 == ' ') {
            pcVar22 = pcVar22 + 1;
            cVar3 = *pcVar22;
         }
;
         pcVar22 = (char*)af_shaper_get_cluster(pcVar22, param_1, &local_3d0, &local_3d4);
         lVar15 = local_3d0;
         iVar8 = local_3d4;
         if (local_3d4 != 0) {
            bVar47 = false;
            iVar46 = 0;
            local_490 = ( ulong ) - ( uint )(( local_470[1] & 1 ) == 0) - 0x80000000;
            uVar10 = (undefined4)local_3d0;
            LAB_0010848f:if (lVar15 != 0) {
               iVar11 = FT_Load_Glyph(param_2, uVar10, 1);
               lVar6 = *(long*)( param_2 + 0x98 );
               if (( *(short*)( lVar6 + 0xca ) < 3 ) || ( iVar11 != 0 )) goto LAB_00108480;
               uVar42 = local_470[1];
               if (0 < *(short*)( lVar6 + 200 )) {
                  lVar20 = 0;
                  local_484 = 0xffffffff;
                  uVar31 = 0xffffffff;
                  psVar1 = *(short**)( lVar6 + 0xe0 ) + 1;
                  lVar35 = *(long*)( lVar6 + 0xd0 );
                  uVar44 = 0xffffffff;
                  uVar18 = 0xffffffff;
                  psVar28 = *(short**)( lVar6 + 0xe0 );
                  psVar39 = psVar1;
                  do {
                     uVar43 = uVar31 + 1;
                     lVar14 = (long)(int)uVar31;
                     uVar31 = ( uint ) * psVar28;
                     if ((int)uVar43 < (int)uVar31) {
                        uVar27 = uVar31 + 1;
                        lVar14 = lVar14 * 0x10 + lVar35;
                        uVar26 = uVar43;
                        if (( uVar42 & 3 ) == 0) {
                           do {
                              if (( (int)uVar18 < 0 ) || ( lVar29 = lVar29 < lVar20 )) {
                                 lVar20 = *(long*)( lVar14 + 0x18 );
                                 uVar18 = uVar26;
                                 if (lVar20 < local_460) {
                                    local_460 = lVar20;
                                 }

                              }
 else if (lVar24 < lVar29) {
                                 lVar24 = lVar29;
                              }

                              uVar26 = uVar26 + 1;
                              lVar14 = lVar14 + 0x10;
                           }
 while ( uVar27 != uVar26 );
                        }
 else {
                           do {
                              while (( uVar25 = uVar26 ),-1 < (int)uVar18 && ( lVar29 = lVar29 <= lVar20 )) {
                                 if (lVar29 < local_460) {
                                    local_460 = lVar29;
                                 }

                                 lVar14 = lVar14 + 0x10;
                                 uVar26 = uVar25 + 1;
                                 if (uVar27 == uVar25 + 1) goto LAB_00108591;
                              }
;
                              lVar20 = *(long*)( lVar14 + 0x18 );
                              if (lVar24 < lVar20) {
                                 lVar24 = lVar20;
                              }

                              lVar14 = lVar14 + 0x10;
                              uVar26 = uVar25 + 1;
                              uVar18 = uVar25;
                           }
 while ( uVar27 != uVar25 + 1 );
                        }

                        LAB_00108591:if ((int)uVar44 < (int)uVar18) {
                           uVar44 = uVar31;
                           local_484 = uVar43;
                        }

                     }

                     if (psVar1 + ( (int)*(short*)( lVar6 + 200 ) - 1 ) == psVar39) goto LAB_001085e0;
                     psVar28 = psVar39;
                     psVar39 = psVar39 + 1;
                  }
 while ( true );
               }

               bVar7 = false;
               lVar20 = 0;
               goto LAB_001085fe;
            }

            goto LAB_00108480;
         }

         goto LAB_0010819d;
      }

      goto LAB_0010834b;
   }

   LAB_00108366:uVar4 = *(uint*)( (long)param_1 + 0x4e8c );
   if (uVar4 == 0) {
      puVar16 = *(ushort**)( param_1[8] + 0x10 );
      uVar4 = *(uint*)( param_1[8] + 8 );
      if (uVar4 != 0) {
         uVar9 = *puVar5;
         puVar2 = puVar16 + uVar4;
         do {
            if (( *puVar16 & 0x3fff ) == uVar9) {
               *puVar16 = 0x42;
            }

            puVar16 = puVar16 + 1;
         }
 while ( puVar16 != puVar2 );
      }

      uVar17 = 1;
   }
 else {
      plVar32 = param_1 + 0x9d2;
      pplVar12 = local_3c8;
      do {
         *pplVar12 = plVar32;
         pplVar12 = pplVar12 + 1;
         plVar32 = plVar32 + 9;
      }
 while ( pplVar12 != local_3c8 + uVar4 );
      if (uVar4 != 1) {
         uVar45 = 1;
         lVar24 = 0;
         pplVar12 = local_3c8;
         do {
            uVar9 = *(uint*)( pplVar12[1] + 8 );
            pplVar13 = pplVar12;
            do {
               plVar32 = *pplVar13;
               if (( *(byte*)( plVar32 + 8 ) & 6 ) == 0) {
                  lVar15 = plVar32[3];
               }
 else {
                  lVar15 = *plVar32;
               }

               plVar30 = pplVar13[uVar45 - lVar24];
               if (( uVar9 & 6 ) == 0) {
                  lVar6 = plVar30[3];
               }
 else {
                  lVar6 = *plVar30;
               }

               if (lVar15 <= lVar6) break;
               *pplVar13 = plVar30;
               pplVar13[1] = plVar32;
               bVar47 = local_3c8 != pplVar13;
               pplVar13 = pplVar13 + -1;
            }
 while ( bVar47 );
            uVar45 = uVar45 + 1;
            lVar24 = lVar24 + 1;
            pplVar12 = pplVar12 + 1;
         }
 while ( uVar4 != uVar45 );
         pplVar12 = local_3c8 + 1;
         uVar9 = *(uint*)( local_3c8[0] + 8 );
         do {
            if (( uVar9 & 6 ) == 0) {
               lVar24 = *local_3c8[0];
               plVar32 = *pplVar12;
               uVar9 = *(uint*)( plVar32 + 8 );
               if (( uVar9 & 6 ) != 0) goto LAB_00108c50;
               LAB_00108c7c:lVar15 = *plVar32;
            }
 else {
               lVar24 = local_3c8[0][3];
               local_3c8[0] = local_3c8[0] + 3;
               plVar32 = *pplVar12;
               uVar9 = *(uint*)( plVar32 + 8 );
               if (( uVar9 & 6 ) == 0) goto LAB_00108c7c;
               LAB_00108c50:lVar15 = plVar32[3];
            }

            if (lVar15 < lVar24) {
               *local_3c8[0] = lVar15;
            }

            pplVar12 = pplVar12 + 1;
            local_3c8[0] = plVar32;
         }
 while ( pplVar12 != local_3c8 + ( ulong )(uVar4 - 2) + 2 );
      }

      uVar17 = 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar17;
   LAB_001085e0:bVar7 = false;
   if ((int)uVar18 < 0) goto LAB_001085fe;
   lVar6 = *(long*)( lVar6 + 0xd8 );
   lVar14 = *(long*)( lVar35 + (long)(int)uVar18 * 0x10 );
   uVar43 = uVar18;
   uVar31 = 0xffffffff;
   local_478 = 0xffffffff;
   if (( *(byte*)( lVar6 + (int)uVar18 ) & 3 ) == 1) {
      uVar31 = uVar18;
      local_478 = uVar18;
   }

   do {
      uVar27 = uVar43 - 1;
      if ((int)uVar43 <= (int)local_484) {
         uVar27 = uVar44;
      }

      plVar32 = (long*)( (long)(int)uVar27 * 0x10 + lVar35 );
      lVar29 = plVar32[1] - lVar20;
      if (lVar29 < 1) {
         lVar29 = -lVar29;
      }

      if (5 < lVar29) {
         lVar33 = *plVar32 - lVar14;
         if (lVar33 < 1) {
            lVar33 = -lVar33;
         }

         if (lVar33 <= lVar29 * 0x14) break;
      }

      if (( ( *(byte*)( lVar6 + (int)uVar27 ) & 3 ) == 1 ) && ( local_478= uVar27,(int)uVar31 < 0 )) {
         uVar31 = uVar27;
      }

      uVar43 = uVar27;
   }
 while ( uVar18 != uVar27 );
   uVar45 = (ulong)uVar18;
   do {
      uVar27 = (int)uVar45 + 1;
      if ((int)uVar44 <= (int)uVar45) {
         uVar27 = local_484;
      }

      plVar32 = (long*)( (long)(int)uVar27 * 0x10 + lVar35 );
      lVar33 = plVar32[1] - lVar20;
      lVar29 = -lVar33;
      if (0 < lVar33) {
         lVar29 = lVar33;
      }

      if (5 < lVar29) {
         lVar33 = *plVar32 - lVar14;
         if (lVar33 < 1) {
            lVar33 = -lVar33;
         }

         if (lVar33 <= lVar29 * 0x14) break;
      }

      if (( ( *(byte*)( lVar6 + (int)uVar27 ) & 3 ) == 1 ) && ( uVar31= uVar27,(int)local_478 < 0 )) {
         local_478 = uVar27;
      }

      uVar45 = (ulong)uVar27;
   }
 while ( uVar18 != uVar27 );
   uVar27 = (uint)uVar45;
   lVar29 = (long)(int)uVar43;
   if (( uVar42 & 0x10 ) == 0) goto LAB_001088b0;
   uVar21 = ( ulong ) * (uint*)( param_1 + 9 ) / 0x19;
   lVar34 = *(long*)( lVar35 + (long)(int)uVar27 * 0x10 ) - *(long*)( lVar35 + (long)(int)uVar43 * 0x10 );
   lVar33 = -lVar34;
   if (0 < lVar34) {
      lVar33 = lVar34;
   }

   if (( (long)uVar21 <= lVar33 ) || ( uVar26 = uVar18 ),(int)( uVar44 - local_484 ) <= (int)( ( uVar27 - uVar43 ) + 1 )) goto LAB_001088b0;
   do {
      uVar25 = uVar26 - 1;
      if ((int)uVar26 <= (int)local_484) {
         uVar25 = uVar44;
      }

      lVar33 = *(long*)( lVar35 + (long)(int)uVar25 * 0x10 );
      if (lVar14 != lVar33) {
         lVar29 = (long)(int)uVar43;
         if (uVar18 != uVar25) {
            bVar7 = false;
            uVar18 = 0;
            local_408 = 0;
            local_418 = uVar45;
            goto LAB_00108b62;
         }

         break;
      }

      uVar26 = uVar25;
   }
 while ( uVar18 != uVar25 );
   goto LAB_00108480;
   LAB_00108b62:do {
      uVar26 = (uint)uVar45;
      if (bVar7) {
         lVar34 = (long)(int)local_418;
      }
 else {
         lVar34 = (long)(int)uVar26;
         uVar18 = 0xffffffff;
         local_418 = uVar45;
         local_408 = 0xffffffff;
         if (( *(byte*)( lVar6 + lVar34 ) & 3 ) == 1) {
            uVar18 = uVar26;
            local_408 = uVar26;
         }

      }

      uVar25 = uVar26 + 1;
      if ((int)uVar44 <= (int)uVar26) {
         uVar25 = local_484;
      }

      plVar30 = (long*)( lVar34 * 0x10 + lVar35 );
      uVar45 = (ulong)uVar25;
      lVar34 = plVar30[1];
      lVar40 = lVar20 - lVar34;
      lVar36 = -lVar40;
      if (0 < lVar40) {
         lVar36 = lVar40;
      }

      if ((long)( ulong )(*(uint*)( param_1 + 9 ) >> 2) < lVar36) {
         LAB_00108c81:bVar7 = false;
      }
 else {
         plVar41 = (long*)( (long)(int)uVar25 * 0x10 + lVar35 );
         lVar36 = *plVar41;
         lVar40 = *plVar30;
         lVar37 = plVar41[1] - lVar34;
         lVar23 = -lVar37;
         if (0 < lVar37) {
            lVar23 = lVar37;
         }

         lVar38 = lVar36 - lVar40;
         lVar37 = -lVar38;
         if (0 < lVar38) {
            lVar37 = lVar38;
         }

         if (( 5 < lVar23 ) && ( lVar37 <= lVar23 * 0x14 )) goto LAB_00108c81;
         if (( ( *(byte*)( lVar6 + (int)uVar25 ) & 3 ) == 1 ) && ( uVar18= uVar25,(int)local_408 < 0 )) {
            local_408 = uVar25;
         }

         if (( lVar40 < lVar36 == lVar33 < lVar14 ) && ( (long)uVar21 <= lVar37 )) {
            uVar31 = uVar18;
            goto LAB_00108d85;
         }

         bVar7 = true;
      }

   }
 while ( uVar25 != uVar43 );
   goto LAB_001088b0;
   LAB_00108d85:do {
      uVar18 = (int)uVar45 + 1;
      if ((int)uVar44 <= (int)uVar45) {
         uVar18 = local_484;
      }

      uVar45 = (ulong)(int)uVar18;
      lVar20 = *(long*)( lVar35 + 8 + uVar45 * 0x10 ) - lVar34;
      lVar14 = -lVar20;
      if (0 < lVar20) {
         lVar14 = lVar20;
      }

      lVar20 = lVar34;
      if (5 < lVar14) {
         lVar29 = *plVar32 - lVar40;
         lVar14 = -lVar29;
         if (0 < lVar29) {
            lVar14 = lVar29;
         }

         if (lVar14 == lVar23 * 0x14 || SBORROW8(lVar14, lVar23 * 0x14) != lVar14 + lVar23 * -0x14 < 0) {
            local_478 = local_408;
            if ((int)local_484 < (int)uVar18) {
               lVar29 = (long)(int)local_418;
               uVar27 = uVar18 - 1;
            }
 else {
               lVar29 = (long)(int)local_418;
               uVar27 = uVar44;
            }

            goto LAB_001088b0;
         }

      }

      if (( ( *(byte*)( lVar6 + uVar45 ) & 3 ) == 1 ) && ( (int)local_408 < 0 )) {
         local_408 = uVar18;
      }

      uVar31 = uVar18;
   }
 while ( uVar18 != uVar43 );
   lVar29 = (long)(int)local_418;
   uVar27 = uVar43;
   uVar31 = uVar43;
   local_478 = local_408;
   LAB_001088b0:if ((int)( local_478 | uVar31 ) < 0) {
      LAB_001088e9:if (( ( *(byte*)( lVar6 + lVar29 ) & 3 ) == 1 ) && ( ( *(byte*)( lVar6 + (int)uVar27 ) & 3 ) == 1 )) goto LAB_0010891c;
      bVar7 = true;
      if (( uVar42 & 4 ) == 0) goto LAB_001085fe;
   }
 else {
      lVar14 = *(long*)( lVar35 + (long)(int)uVar31 * 0x10 ) - *(long*)( lVar35 + (long)(int)local_478 * 0x10 );
      lVar35 = -lVar14;
      if (0 < lVar14) {
         lVar35 = lVar14;
      }

      if (lVar35 <= (long)( ( ulong )(uVar4 >> 1) / 7 )) goto LAB_001088e9;
      LAB_0010891c:bVar7 = false;
      LAB_001085fe:if (( uVar42 & 1 ) == 0) {
         if (lVar20 < local_490) goto joined_r0x00108625;
      }
 else if (local_490 < lVar20) goto joined_r0x00108625;
   }

   LAB_00108480:lVar20 = local_490;
   bVar7 = bVar47;
   joined_r0x00108625:bVar47 = bVar7;
   local_490 = lVar20;
   iVar46 = iVar46 + 1;
   if (iVar8 == iVar46) goto LAB_00108630;
   goto LAB_0010848f;
   LAB_00108630:if (( local_490 != -0x80000000 ) && ( local_490 != 0x7fffffff )) {
      if (bVar47) {
         uVar45 = (ulong)uVar9;
         uVar9 = uVar9 + 1;
         local_1d8[uVar45] = local_490;
      }
 else {
         local_378[local_41c] = local_490;
         local_41c = local_41c + 1;
      }

   }

   LAB_0010819d:cVar3 = *pcVar22;
   if (cVar3 == '\0') goto code_r0x001081a5;
   goto joined_r0x00108162;
   code_r0x001081a5:if (uVar9 == 0 && local_41c == 0) goto LAB_0010834b;
   plVar32 = local_1d8 + 1;
   uVar42 = 1;
   plVar30 = plVar32;
   plVar41 = plVar32;
   if (1 < uVar9) {
      LAB_00108203:do {
         plVar19 = plVar30 + -1;
         lVar15 = plVar32[-1];
         if (*plVar32 < lVar15) {
            *plVar19 = *plVar32;
            *plVar30 = lVar15;
            plVar32 = plVar32 + -1;
            plVar30 = plVar19;
            if (local_1d8 != plVar19) goto LAB_00108203;
         }

         uVar42 = uVar42 + 1;
         plVar32 = plVar41 + 1;
         plVar30 = plVar32;
         plVar41 = plVar32;
      }
 while ( uVar9 != uVar42 );
   }

   plVar32 = local_378 + 1;
   uVar42 = 1;
   plVar30 = plVar32;
   plVar41 = plVar32;
   if (local_41c < 2) {
      uVar42 = *(uint*)( (long)param_1 + 0x4e8c );
      *(uint*)( (long)param_1 + 0x4e8c ) = uVar42 + 1;
      uVar18 = (uint)(ushort)local_470[1];
      if (local_41c != 0) goto LAB_001082bd;
      uVar45 = (ulong)uVar42;
      lVar15 = local_1d8[uVar9 >> 1];
      param_1[uVar45 * 9 + 0x9d5] = lVar15;
      param_1[uVar45 * 9 + 0x9d2] = lVar15;
   }
 else {
      LAB_00108273:do {
         plVar19 = plVar30 + -1;
         lVar15 = plVar32[-1];
         if (*plVar32 < lVar15) {
            *plVar19 = *plVar32;
            *plVar30 = lVar15;
            plVar32 = plVar32 + -1;
            plVar30 = plVar19;
            if (local_378 != plVar19) goto LAB_00108273;
         }

         uVar42 = uVar42 + 1;
         plVar32 = plVar41 + 1;
         plVar30 = plVar32;
         plVar41 = plVar32;
      }
 while ( local_41c != uVar42 );
      uVar42 = *(uint*)( (long)param_1 + 0x4e8c );
      *(uint*)( (long)param_1 + 0x4e8c ) = uVar42 + 1;
      uVar18 = (uint)(ushort)local_470[1];
      LAB_001082bd:uVar45 = (ulong)uVar42;
      lVar15 = local_378[local_41c >> 1];
      if (uVar9 == 0) {
         param_1[uVar45 * 9 + 0x9d5] = lVar15;
         param_1[uVar45 * 9 + 0x9d2] = lVar15;
      }
 else {
         param_1[uVar45 * 9 + 0x9d2] = lVar15;
         lVar6 = local_1d8[uVar9 >> 1];
         param_1[uVar45 * 9 + 0x9d5] = lVar6;
         if (( lVar6 != lVar15 ) && ( ( ( uVar18 & 3 ) != 0 ) != lVar15 < lVar6 )) {
            lVar15 = ( lVar6 + lVar15 ) / 2;
            param_1[uVar45 * 9 + 0x9d5] = lVar15;
            param_1[uVar45 * 9 + 0x9d2] = lVar15;
         }

      }

   }

   param_1[uVar45 * 9 + 0x9d8] = lVar24;
   param_1[uVar45 * 9 + 0x9d9] = local_460;
   uVar9 = ( uVar18 & 1 ) * 2;
   if (( uVar18 & 2 ) != 0) {
      uVar9 = uVar9 | 4;
   }

   *(uint*)( param_1 + uVar45 * 9 + 0x9da ) = uVar9;
   if (( uVar18 & 4 ) != 0) {
      *(uint*)( param_1 + uVar45 * 9 + 0x9da ) = *(uint*)( param_1 + uVar45 * 9 + 0x9da ) | 8;
   }

   if (( uVar18 & 8 ) != 0) {
      *(uint*)( param_1 + uVar45 * 9 + 0x9da ) = *(uint*)( param_1 + uVar45 * 9 + 0x9da ) | 0x10;
   }

   LAB_0010834b:local_470 = local_470 + 2;
   uVar9 = *local_470;
   if (uVar9 == 0x159b) goto LAB_00108366;
   goto LAB_00108118;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 af_latin_metrics_init(long param_1, long param_2) {
   undefined8 uVar1;
   bool bVar2;
   ulong uVar3;
   undefined1 uVar4;
   int iVar5;
   char *pcVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   long local_80;
   uint local_6c;
   long local_68;
   ulong local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined8*)( param_2 + 0xa8 );
   *(uint*)( param_1 + 0x48 ) = ( uint ) * (ushort*)( param_2 + 0x88 );
   iVar5 = FT_Select_Charmap(param_2, 0x756e6963);
   if (iVar5 == 0) {
      af_latin_metrics_init_widths(param_1, param_2);
      iVar5 = af_latin_metrics_init_blues(param_1, param_2);
      if (iVar5 != 0) {
         uVar7 = 0xffffffff;
         goto LAB_00108eaf;
      }

      local_68 = 0;
      pcVar6 = (char*)&local_58;
      bVar2 = false;
      local_48 = 0x392038;
      local_80 = 0;
      local_58 = __LC17;
      uStack_50 = _UNK_0010e408;
      do {
         while (true) {
            pcVar6 = (char*)af_shaper_get_cluster(pcVar6, param_1, &local_60, &local_6c);
            uVar3 = local_60;
            if (local_6c < 2) break;
            LAB_00108f48:if (*pcVar6 == '\0') goto LAB_00108fc0;
         }
;
         FT_Get_Advance(**(undefined8**)( param_1 + 0x40 ), local_60 & 0xffffffff, 0x803, &local_68);
         if (uVar3 == 0) goto LAB_00108f48;
         if (bVar2) {
            if (local_68 == local_80) goto LAB_00108f48;
            uVar4 = 0;
            goto LAB_00108fc5;
         }

         bVar2 = true;
         local_80 = local_68;
      }
 while ( *pcVar6 != '\0' );
      LAB_00108fc0:uVar4 = 1;
      LAB_00108fc5:*(undefined1*)( param_1 + 0x38 ) = uVar4;
   }

   uVar7 = 0;
   LAB_00108eaf:*(undefined8*)( param_2 + 0xa8 ) = uVar1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void af_cjk_metrics_check_digits_isra_0(long param_1) {
   bool bVar1;
   ulong uVar2;
   undefined1 uVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   long local_80;
   uint local_6c;
   long local_68;
   ulong local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined4 local_48;
   long local_40;
   bVar1 = false;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar4 = (char*)&local_58;
   local_68 = 0;
   local_48 = 0x392038;
   local_80 = 0;
   local_58 = __LC17;
   uStack_50 = _UNK_0010e408;
   do {
      while (true) {
         pcVar4 = (char*)af_shaper_get_cluster(pcVar4, param_1, &local_60, &local_6c);
         uVar2 = local_60;
         if (local_6c < 2) break;
         LAB_00109048:if (*pcVar4 == '\0') goto LAB_001090c0;
      }
;
      FT_Get_Advance(**(undefined8**)( param_1 + 0x40 ), local_60 & 0xffffffff, 0x803, &local_68);
      if (uVar2 == 0) goto LAB_00109048;
      if (bVar1) {
         if (local_68 == local_80) goto LAB_00109048;
         uVar3 = 0;
         goto LAB_001090c5;
      }

      bVar1 = true;
      local_80 = local_68;
   }
 while ( *pcVar4 != '\0' );
   LAB_001090c0:uVar3 = 1;
   LAB_001090c5:*(undefined1*)( param_1 + 0x38 ) = uVar3;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 af_indic_metrics_init(long param_1, long param_2) {
   undefined8 uVar1;
   int iVar2;
   uVar1 = *(undefined8*)( param_2 + 0xa8 );
   *(uint*)( param_1 + 0x48 ) = ( uint ) * (ushort*)( param_2 + 0x88 );
   iVar2 = FT_Select_Charmap(param_2, 0x756e6963);
   if (iVar2 != 0) {
      *(undefined8*)( param_2 + 0xa8 ) = uVar1;
      return 0;
   }

   af_cjk_metrics_init_widths(param_1, param_2);
   af_cjk_metrics_check_digits_isra_0(param_1);
   *(undefined8*)( param_2 + 0xa8 ) = uVar1;
   return 0;
}
undefined8 af_cjk_metrics_init(long param_1, long param_2) {
   undefined8 uVar1;
   int iVar2;
   uVar1 = *(undefined8*)( param_2 + 0xa8 );
   *(uint*)( param_1 + 0x48 ) = ( uint ) * (ushort*)( param_2 + 0x88 );
   iVar2 = FT_Select_Charmap(param_2, 0x756e6963);
   if (iVar2 != 0) {
      *(undefined8*)( param_2 + 0xa8 ) = uVar1;
      return 0;
   }

   af_cjk_metrics_init_widths(param_1, param_2);
   af_cjk_metrics_init_blues(param_1, param_2);
   af_cjk_metrics_check_digits_isra_0(param_1);
   *(undefined8*)( param_2 + 0xa8 ) = uVar1;
   return 0;
}
ulong af_shaper_get_elem(long param_1, ulong *param_2, undefined8 param_3, long param_4, undefined8 *param_5) {
   ulong uVar1;
   uVar1 = *param_2;
   if (param_4 != 0) {
      FT_Get_Advance(**(undefined8**)( param_1 + 0x40 ), uVar1 & 0xffffffff, 0x803);
   }

   if (param_5 != (undefined8*)0x0) {
      *param_5 = 0;
   }

   return uVar1;
}


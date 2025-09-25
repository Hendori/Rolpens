undefined8 fnt_cmap_init(long *param_1) {
   long lVar1;
   uint uVar2;
   lVar1 = *(long*)( *param_1 + 0xf8 );
   uVar2 = ( uint ) * (byte*)( lVar1 + 0x74 );
   *(uint*)( param_1 + 3 ) = uVar2;
   *(uint*)( (long)param_1 + 0x1c ) = ( *(byte*)( lVar1 + 0x75 ) + 1 ) - uVar2;
   return 0;
}
int fnt_cmap_char_index(long param_1, int param_2) {
   int iVar1;
   uint uVar2;
   uVar2 = param_2 - *(int*)( param_1 + 0x18 );
   iVar1 = 0;
   if (uVar2 < *(uint*)( param_1 + 0x1c )) {
      iVar1 = uVar2 + 1;
   }

   return iVar1;
}
int fnt_cmap_char_next(long param_1, uint *param_2) {
   uint uVar1;
   int iVar2;
   uint uVar3;
   uVar3 = *(uint*)( param_1 + 0x18 );
   uVar1 = *param_2 + 1;
   iVar2 = 1;
   if (uVar3 < uVar1) {
      if (*(uint*)( param_1 + 0x1c ) <= uVar1 - uVar3) {
         *param_2 = 0;
         return 0;
      }

      iVar2 = ( uVar1 - uVar3 ) + 1;
      uVar3 = uVar1;
   }

   *param_2 = uVar3;
   return iVar2;
}
undefined8 winfnt_get_header(long param_1, undefined8 *param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 0xf8 );
   uVar2 = *(undefined8*)( lVar1 + 0x10 );
   *param_2 = *(undefined8*)( lVar1 + 8 );
   param_2[1] = uVar2;
   for (int i = 0; i < 12; i++) {
      uVar2 = *(undefined8*)( lVar1 + ( 16*i + 32 ) );
      param_2[( 2*i + 2 )] = *(undefined8*)( lVar1 + ( 16*i + 24 ) );
      param_2[( 2*i + 3 )] = uVar2;
   }

   return 0;
}
undefined8 FNT_Size_Select(long *param_1) {
   ushort uVar1;
   ushort uVar2;
   long lVar3;
   lVar3 = *(long*)( *param_1 + 0xf8 );
   FT_Select_Metrics(*param_1, 0);
   uVar1 = *(ushort*)( lVar3 + 0x5c );
   uVar2 = *(ushort*)( lVar3 + 0x6c );
   param_1[6] = (ulong)uVar1 << 6;
   param_1[7] = (long)(int)( ( (uint)uVar1 - (uint)uVar2 ) * 0x40 );
   param_1[9] = ( ulong ) * (ushort*)( lVar3 + 0x72 ) << 6;
   return 0;
}
int FNT_Load_Glyph(long param_1, long *param_2, uint param_3, uint param_4) {
   undefined1 *puVar1;
   undefined1 uVar2;
   ushort uVar3;
   ushort uVar4;
   ushort uVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   uint uVar9;
   ulong uVar10;
   ushort *puVar11;
   undefined1 *puVar12;
   int iVar13;
   ulong uVar14;
   undefined1 *puVar15;
   undefined1 *puVar16;
   undefined1 *puVar17;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *param_2;
   local_34 = 0;
   if (lVar6 == 0) {
      iVar13 = 0x23;
      goto LAB_001002d5;
   }

   lVar7 = *(long*)( lVar6 + 0xf8 );
   if (lVar7 == 0) {
      iVar13 = 6;
      goto LAB_001002d5;
   }

   iVar13 = 6;
   if (*(uint*)( lVar6 + 0x20 ) <= param_3) goto LAB_001002d5;
   if (param_3 == 0) {
      param_3 = ( uint ) * (byte*)( lVar7 + 0x76 );
      uVar14 = *(ulong*)( lVar7 + 0x10 );
      if (*(short*)( lVar7 + 8 ) != 0x300) goto LAB_001001f1;
      LAB_00100319:uVar10 = ( ulong )(param_3 * 6 + 0x94);
      if (uVar10 < uVar14 - 6) {
         puVar11 = (ushort*)( uVar10 + *(long*)( lVar7 + 0xd8 ) );
         uVar3 = *puVar11;
         *(uint*)( param_1 + 0x9c ) = (uint)uVar3;
         uVar10 = ( ulong ) * (uint*)( puVar11 + 1 );
         LAB_0010021b:if (uVar10 < uVar14) {
            uVar4 = *(ushort*)( lVar7 + 0x6c );
            *(undefined1*)( param_1 + 0xb2 ) = 1;
            *(undefined4*)( param_1 + 0xc0 ) = 0;
            uVar5 = *(ushort*)( lVar7 + 0x5c );
            *(uint*)( param_1 + 0x98 ) = (uint)uVar4;
            *(uint*)( param_1 + 0xc4 ) = (uint)uVar5;
            *(undefined4*)( param_1 + 0x90 ) = 0x62697473;
            *(ulong*)( param_1 + 0x30 ) = (ulong)uVar3 << 6;
            *(ulong*)( param_1 + 0x38 ) = (ulong)uVar4 << 6;
            *(ulong*)( param_1 + 0x50 ) = (ulong)uVar3 << 6;
            *(undefined8*)( param_1 + 0x40 ) = 0;
            *(ulong*)( param_1 + 0x48 ) = (ulong)uVar5 << 6;
            ft_synthesize_vertical_metrics(param_1 + 0x30);
            iVar13 = local_34;
            if (( param_4 & 0x400000 ) != 0) goto LAB_001002d5;
            lVar6 = *(long*)( lVar7 + 0xd8 );
            uVar8 = *(undefined8*)( *(long*)( param_1 + 8 ) + 0xb8 );
            uVar9 = *(int*)( param_1 + 0x9c ) + 7U >> 3;
            *(uint*)( param_1 + 0xa0 ) = uVar9;
            if (( uVar9 != 0 ) && ( *(int*)( param_1 + 0x98 ) * uVar9 + uVar10 <= *(ulong*)( lVar7 + 0x10 ) )) {
               puVar12 = (undefined1*)ft_mem_qrealloc(uVar8, (ulong)uVar9, 0, *(int*)( param_1 + 0x98 ), 0, &local_34);
               *(undefined1**)( param_1 + 0xa8 ) = puVar12;
               iVar13 = local_34;
               if (local_34 == 0) {
                  puVar16 = (undefined1*)( lVar6 + uVar10 );
                  puVar1 = puVar12 + uVar9;
                  do {
                     puVar17 = puVar16 + *(uint*)( param_1 + 0x98 );
                     puVar15 = puVar12;
                     if (puVar16 < puVar17) {
                        do {
                           uVar2 = *puVar16;
                           puVar16 = puVar16 + 1;
                           *puVar15 = uVar2;
                           puVar15 = puVar15 + *(int*)( param_1 + 0xa0 );
                        }
 while ( puVar17 != puVar16 );
                     }

                     puVar12 = puVar12 + 1;
                  }
 while ( puVar1 != puVar12 );
                  *(undefined4*)( *(long*)( param_1 + 0x128 ) + 8 ) = 1;
               }

               goto LAB_001002d5;
            }

         }

      }

   }
 else {
      param_3 = param_3 - 1;
      uVar14 = *(ulong*)( lVar7 + 0x10 );
      if (*(short*)( lVar7 + 8 ) == 0x300) goto LAB_00100319;
      LAB_001001f1:uVar10 = ( ulong )(param_3 * 4 + 0x76);
      if (uVar10 < uVar14 - 4) {
         puVar11 = (ushort*)( uVar10 + *(long*)( lVar7 + 0xd8 ) );
         uVar3 = *puVar11;
         *(uint*)( param_1 + 0x9c ) = (uint)uVar3;
         uVar10 = (ulong)puVar11[1];
         goto LAB_0010021b;
      }

   }

   iVar13 = 3;
   LAB_001002d5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar13;
}
void fnt_font_done(long param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 0xf8 );
   if (lVar1 != 0) {
      uVar2 = *(undefined8*)( param_1 + 0xb8 );
      if (*(long*)( lVar1 + 0xd8 ) != 0) {
         FT_Stream_ReleaseFrame(*(undefined8*)( param_1 + 0xc0 ), lVar1 + 0xd8);
      }

      ft_mem_free(uVar2, *(undefined8*)( lVar1 + 0xe8 ));
      *(undefined8*)( lVar1 + 0xe8 ) = 0;
      ft_mem_free(uVar2, lVar1);
      *(undefined8*)( param_1 + 0xf8 ) = 0;
   }

   return;
}
undefined8 fnt_font_load(undefined8 *param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = FT_Stream_Seek(param_2, *param_1);
   if (( ( iVar1 == 0 ) && ( iVar1 = FT_Stream_ReadFields(param_2, winfnt_header_fields, param_1 + 1) ),iVar1 == 0 )) {
      if (*(ushort*)( param_1 + 1 ) == 0x300) {
         if ((ulong)param_1[2] < 0x94) {
            return 2;
         }

      }
 else {
         if ((ulong)param_1[2] < 0x76) {
            return 2;
         }

         param_1[0x15] = 0;
         param_1[0x16] = 0;
      }

      if (( *(byte*)( (long)param_1 + 0x54 ) & 1 ) == 0) {
         uVar2 = FT_Stream_Seek(param_2, *param_1);
         if ((int)uVar2 == 0) {
            uVar2 = FT_Stream_ExtractFrame(param_2, param_1[2], param_1 + 0x1b);
            return uVar2;
         }

         return uVar2;
      }

   }

   return 2;
}
void winfnt_get_service(void) {
   ft_service_list_lookup(winfnt_services);
   return;
}
uint FNT_Face_Init(long param_1, ulong *param_2, int param_3) {
   long lVar1;
   undefined2 uVar2;
   ulong uVar3;
   ushort uVar4;
   ushort uVar5;
   short sVar6;
   int iVar7;
   uint uVar8;
   undefined8 *puVar9;
   undefined4 *puVar10;
   ulong uVar11;
   undefined8 uVar12;
   void *__dest;
   size_t sVar13;
   ulong uVar14;
   char *pcVar15;
   ulong uVar16;
   long lVar17;
   long *plVar18;
   bool bVar19;
   size_t __n;
   ushort uVar20;
   short sVar21;
   uint uVar22;
   long lVar23;
   uint uVar24;
   long lVar25;
   long in_FS_OFFSET;
   ushort local_15a;
   uint local_148;
   short local_142;
   ushort local_140;
   short local_13e;
   ushort local_13c;
   ushort local_13a;
   long local_138;
   ulong local_130;
   undefined1 local_128[8];
   ulong local_120;
   undefined1 local_118[8];
   long local_110;
   undefined1 local_108[20];
   ushort local_f4;
   ushort local_f2;
   undefined1 local_e8[20];
   ushort local_d4;
   ushort local_d2;
   undefined1 local_c8[20];
   ushort local_b4;
   ushort local_b2;
   uint local_a8;
   undefined4 uStack_a4;
   undefined2 local_a0;
   ushort uStack_9e;
   undefined4 uStack_9c;
   long local_98;
   ulong *local_88;
   long local_80;
   undefined1 local_68[8];
   long local_60;
   long local_50;
   long local_40;
   uVar3 = param_2[0x18];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar14 = param_2[0x17];
   param_2[0x1f] = 0;
   uVar20 = -(ushort)param_3;
   if (0 < param_3) {
      uVar20 = (ushort)param_3;
   }

   uVar11 = (ulong)uVar20;
   local_148 = FT_Stream_Seek(uVar3, 0);
   if (( local_148 == 0 ) && ( iVar7 = iVar7 == 0 )) {
      local_148 = 2;
      if (local_142 == 0x5a4d) {
         local_148 = FT_Stream_Seek(uVar3, local_140);
         uVar8 = local_148;
         if (( local_148 != 0 ) || ( uVar8 = uVar8 != 0 )) goto LAB_00100720;
         local_148 = 2;
         if (local_13e != 0x454e) {
            if (local_13e == 0x4550) {
               local_148 = FT_Stream_Seek(uVar3, local_140);
               uVar8 = local_148;
               if (( local_148 == 0 ) && ( local_148 = FT_Stream_ReadFields(uVar3, winpe32_header_fields, &local_a8) ),uVar8 = local_148,local_148 == 0) {
                  if (( CONCAT44(uStack_a4, local_a8) == 0x4550 ) && ( ( ( CONCAT44(uStack_9c, CONCAT22(uStack_9e, local_a0)) & 0xffffffff0000ffff ) == 0x10b00e00000014c && ( *param_2 = uStack_9e != 0 ) ) )) {
                     uVar4 = 0;
                     do {
                        local_148 = 0;
                        local_148 = FT_Stream_ReadFields(uVar3, winpe32_section_fields, local_68);
                        uVar8 = local_148;
                        if (local_148 != 0) goto LAB_00100720;
                        if (local_98 == local_60) {
                           local_148 = FT_Stream_Seek(uVar3, local_50);
                           uVar8 = local_148;
                           if (( local_148 != 0 ) || ( local_148 = FT_Stream_ReadFields(uVar3, winpe_rsrc_dir_fields, local_108) ),lVar23 = local_50,uVar8 = local_148,local_148 != 0) goto LAB_00100720;
                           local_15a = 0;
                           lVar1 = local_50 + 0x10;
                           goto LAB_00100ddd;
                        }

                        uVar4 = uVar4 + 1;
                     }
 while ( uVar4 < uStack_9e );
                  }

                  LAB_00100c16:uVar8 = 3;
               }

               goto LAB_00100720;
            }

            LAB_00100a19:if (*param_2 == 0) goto LAB_00100af3;
            if ((long)*param_2 <= (long)uVar11) {
               local_a8 = 6;
               goto LAB_001006c8;
            }

            LAB_00100a2e:if (local_148 != 0) goto LAB_00100651;
            local_a8 = 0;
            if (param_3 < 0) {
               uVar8 = 0;
               goto LAB_001005f0;
            }

            goto LAB_00100735;
         }

         local_148 = FT_Stream_Seek(uVar3, (uint)local_140 + (uint)local_13c);
         uVar8 = local_148;
         if (( local_148 != 0 ) || ( local_148 = FT_Stream_EnterFrame(uVar3, (long)(int)( (uint)local_13a - (uint)local_13c )) ),uVar8 = local_148,local_148 != 0) goto LAB_00100720;
         uVar4 = FT_Stream_GetUShortLE(uVar3);
         if (0x10 < uVar4) {
            local_148 = 3;
            FT_Stream_ExitFrame(uVar3);
            goto LAB_00100659;
         }

         while (sVar6 = FT_Stream_GetUShortLE(uVar3),sVar6 != 0) {
            uVar5 = FT_Stream_GetUShortLE(uVar3);
            if (sVar6 == -0x7ff8) {
               lVar23 = FT_Stream_Pos(uVar3);
               lVar23 = ( *(long*)( uVar3 + 0x40 ) - *(long*)( uVar3 + 0x48 ) ) + 4 + lVar23;
               FT_Stream_ExitFrame(uVar3);
               if (( ( uVar5 == 0 ) || ( lVar23 == 0 ) ) || ( uVar16 = (ulong)uVar5 * (ulong*)( uVar3 + 8 ) < uVar16 * 0x76 )) goto LAB_00100af3;
               *param_2 = uVar16;
               if (param_3 < 0) {
                  bVar19 = local_148 == 0;
                  goto LAB_00100669;
               }

               if (uVar16 <= uVar11) goto LAB_001006ba;
               uVar16 = ft_mem_alloc(uVar14, 0xf0, &local_148);
               param_2[0x1f] = uVar16;
               local_a8 = local_148;
               if (local_148 != 0) {
                  if ((char)local_148 != '\x02') goto LAB_001006c8;
                  goto LAB_001005b7;
               }

               local_148 = FT_Stream_Seek(uVar3, uVar11 * 0xc + lVar23);
               if (( local_148 == 0 ) && ( local_148 = local_148 == 0 )) {
                  uVar5 = FT_Stream_GetUShortLE(uVar3);
                  *(ulong*)param_2[0x1f] = (ulong)uVar5 << ( (byte)uVar4 & 0x3f );
                  uVar5 = FT_Stream_GetUShortLE(uVar3);
                  *(ulong*)( param_2[0x1f] + 0xe0 ) = (ulong)uVar5 << ( (byte)uVar4 & 0x3f );
                  *(long*)( uVar3 + 0x40 ) = *(long*)( uVar3 + 0x40 ) + 8;
                  FT_Stream_ExitFrame(uVar3);
                  local_148 = fnt_font_load(param_2[0x1f], uVar3);
                  goto LAB_00100a19;
               }

               if (local_148 != 0) goto LAB_00100651;
               local_a8 = 0;
               goto LAB_00100735;
            }

            *(long*)( uVar3 + 0x40 ) = *(long*)( uVar3 + 0x40 ) + (long)(int)( ( (uint)uVar5 + (uint)uVar5 * 2 ) * 4 + 4 );
         }
;
         FT_Stream_ExitFrame();
         LAB_00100af3:local_a8 = 3;
      }
 else {
         LAB_00100651:fnt_font_done(param_2);
         LAB_00100659:bVar19 = (bool)( local_148 == 0 & ( byte )((uint)param_3 >> 0x1f) );
         LAB_00100669:local_a8 = local_148;
         uVar8 = local_a8;
         if (bVar19 != false) goto LAB_001005f0;
         LAB_00100720:local_a8 = uVar8;
         if ((char)local_a8 == '\x02') goto LAB_001005b7;
         if (local_a8 != 0) goto LAB_001006c8;
         LAB_00100735:uVar3 = param_2[0x1f];
         if (*(short*)( uVar3 + 0x6c ) == 0) goto LAB_001008d0;
         uVar16 = param_2[2];
         sVar6 = *(short*)( uVar3 + 0x72 );
         param_2[1] = uVar11;
         param_2[2] = uVar16 | 0x12;
         if (*(short*)( uVar3 + 0x70 ) == sVar6) {
            param_2[2] = uVar16 | 0x16;
         }

         if (*(char*)( uVar3 + 0x62 ) != '\0') {
            param_2[3] = param_2[3] | 1;
         }

         if (799 < *(ushort*)( uVar3 + 0x66 )) {
            param_2[3] = param_2[3] | 2;
         }

         puVar10 = (undefined4*)ft_mem_qalloc(uVar14, 0x20, &local_a8);
         param_2[8] = (ulong)puVar10;
         if (local_a8 == 0) {
            uVar2 = *(undefined2*)( uVar3 + 0x70 );
            sVar6 = *(short*)( uVar3 + 0x60 );
            *(undefined4*)( param_2 + 7 ) = 1;
            *puVar10 = CONCAT22(uVar2, sVar6 + *(short*)( uVar3 + 0x6c ));
            sVar6 = *(short*)( uVar3 + 0x5a );
            sVar21 = *(short*)( uVar3 + 0x58 );
            lVar23 = (long)(int)( ( uint ) * (ushort*)( uVar3 + 0x56 ) << 6 );
            if (sVar6 == 0) {
               sVar6 = 0x48;
            }

            *(long*)( puVar10 + 2 ) = lVar23;
            if (sVar21 == 0) {
               sVar21 = 0x48;
            }

            lVar23 = FT_MulDiv(lVar23, sVar21, 0x48);
            uVar11 = lVar23 + 0x20U & 0xffffffffffffffc0;
            lVar23 = (long)(int)( ( uint ) * (ushort*)( uVar3 + 0x6c ) << 6 );
            *(ulong*)( puVar10 + 6 ) = uVar11;
            if (lVar23 < (long)uVar11) {
               *(long*)( puVar10 + 6 ) = lVar23;
               uVar12 = FT_MulDiv(lVar23, 0x48, sVar21);
               *(undefined8*)( puVar10 + 2 ) = uVar12;
            }
 else {
               uVar12 = *(undefined8*)( puVar10 + 2 );
            }

            lVar23 = FT_MulDiv(uVar12, sVar6, 0x48);
            *(ulong*)( puVar10 + 4 ) = lVar23 + 0x20U & 0xffffffffffffffc0;
            local_80 = 0;
            if (*(char*)( uVar3 + 0x68 ) == 'M') {
               local_80 = 0x161726d6e;
            }

            local_88 = param_2;
            local_a8 = FT_CMap_New(fnt_cmap_class_rec, 0, &local_88, 0);
            if (local_a8 == 0) {
               if (*(byte*)( uVar3 + 0x74 ) <= *(byte*)( uVar3 + 0x75 )) {
                  uVar11 = *(ulong*)( uVar3 + 0x10 );
                  param_2[4] = (long)(int)( ( ( uint ) * (byte*)( uVar3 + 0x75 ) - ( uint ) * (byte*)( uVar3 + 0x74 ) ) + 2 );
                  if (*(ulong*)( uVar3 + 0x88 ) < uVar11) {
                     __n = uVar11 - *(ulong*)( uVar3 + 0x88 );
                     __dest = (void*)ft_mem_qalloc(uVar14, __n + 1, &local_a8);
                     *(void**)( uVar3 + 0xe8 ) = __dest;
                     if (local_a8 == 0) {
                        memcpy(__dest, (void*)( *(long*)( uVar3 + 0x88 ) + *(long*)( uVar3 + 0xd8 ) ), __n);
                        *(undefined1*)( *(long*)( uVar3 + 0xe8 ) + __n ) = 0;
                        pcVar15 = *(char**)( uVar3 + 0xe8 );
                        sVar13 = strlen(pcVar15);
                        uVar14 = ft_mem_qrealloc(uVar14, 1, __n + 1, sVar13 + 1, pcVar15, &local_a8);
                        *(ulong*)( uVar3 + 0xe8 ) = uVar14;
                        if (local_a8 == 0) {
                           param_2[5] = uVar14;
                           param_2[6] = (ulong)"Regular";
                           uVar3 = param_2[3];
                           if (( uVar3 & 2 ) == 0) {
                              if (( uVar3 & 1 ) != 0) {
                                 param_2[6] = (ulong)"Italic";
                                 uVar8 = 0;
                                 goto LAB_001005f0;
                              }

                           }
 else {
                              pcVar15 = "Bold Italic";
                              if (( uVar3 & 1 ) == 0) {
                                 pcVar15 = "Bold";
                              }

                              param_2[6] = (ulong)pcVar15;
                           }

                           goto LAB_001009d0;
                        }

                     }

                     goto LAB_001006c8;
                  }

               }

               LAB_001008d0:local_a8 = 3;
            }

         }

      }

   }
 else {
      local_a8 = 2;
      LAB_001005b7:puVar9 = (undefined8*)ft_mem_alloc(uVar14, 0xf0, &local_a8);
      param_2[0x1f] = (ulong)puVar9;
      uVar8 = local_a8;
      if (local_a8 != 0) goto LAB_001005f0;
      uVar12 = *(undefined8*)( param_1 + 8 );
      *param_2 = 1;
      *puVar9 = 0;
      puVar9[0x1c] = uVar12;
      local_a8 = fnt_font_load(puVar9, param_1);
      if (local_a8 == 0) {
         if (param_3 < 0) {
            LAB_001009d0:uVar8 = 0;
            goto LAB_001005f0;
         }

         if (uVar20 == 0) goto LAB_00100735;
         LAB_001006ba:local_a8 = 6;
      }

   }

   LAB_001006c8:uVar3 = param_2[0x17];
   fnt_font_done(param_2);
   ft_mem_free(uVar3, param_2[8]);
   param_2[8] = 0;
   *(undefined4*)( param_2 + 7 ) = 0;
   uVar8 = local_a8;
   LAB_001005f0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00100ddd:if ((uint)local_f4 + (uint)local_f2 <= (uint)local_15a) goto LAB_00100a19;
   local_148 = FT_Stream_Seek(uVar3, (int)( (uint)local_15a * 8 ) + lVar1);
   uVar8 = local_148;
   if (( local_148 != 0 ) || ( local_148 = FT_Stream_ReadFields(uVar3, winpe_rsrc_dir_entry_fields, &local_138) ),uVar8 = local_148,local_148 != 0) goto LAB_00100720;
   if (( local_130 & 0x80000000 ) == 0) goto LAB_00100c16;
   local_130 = local_130 & 0xffffffff7fffffff;
   lVar25 = local_130 + local_50;
   local_148 = FT_Stream_Seek(uVar3, lVar25);
   uVar8 = local_148;
   if (( local_148 != 0 ) || ( local_148 = FT_Stream_ReadFields(uVar3, winpe_rsrc_dir_fields, local_e8) ),uVar8 = local_148,local_148 != 0) goto LAB_00100720;
   for (uVar22 = 0; ( uVar22 & 0xffff ) < (uint)local_d4 + (uint)local_d2; uVar22 = uVar22 + 1) {
      local_148 = FT_Stream_Seek(uVar3, (long)(int)( ( uVar22 & 0xffff ) * 8 ) + lVar25 + 0x10);
      uVar8 = local_148;
      if (( local_148 != 0 ) || ( local_148 = FT_Stream_ReadFields(uVar3, winpe_rsrc_dir_entry_fields, local_128) ),uVar8 = local_148,local_148 != 0) goto LAB_00100720;
      if (( local_120 & 0x80000000 ) == 0) goto LAB_00100c16;
      local_120 = local_120 & 0xffffffff7fffffff;
      lVar17 = local_120 + local_50;
      local_148 = FT_Stream_Seek(uVar3, lVar17);
      uVar8 = local_148;
      if (( local_148 != 0 ) || ( local_148 = FT_Stream_ReadFields(uVar3, winpe_rsrc_dir_fields, local_c8) ),uVar8 = local_148,local_148 != 0) goto LAB_00100720;
      for (uVar24 = 0; ( uVar24 & 0xffff ) < (uint)local_b4 + (uint)local_b2; uVar24 = uVar24 + 1) {
         local_148 = FT_Stream_Seek(uVar3, lVar17 + 0x10 + (long)(int)( ( uVar24 & 0xffff ) << 3 ));
         uVar8 = local_148;
         if (( local_148 != 0 ) || ( local_148 = FT_Stream_ReadFields(uVar3, winpe_rsrc_dir_entry_fields, local_118) ),uVar8 = local_148,local_148 != 0) goto LAB_00100720;
         if (( local_120 & 0x80000000 ) != 0) goto LAB_00100c16;
         if (local_138 == 8) {
            local_148 = FT_Stream_Seek(uVar3, local_110 + lVar23);
            uVar8 = local_148;
            if (( local_148 != 0 ) || ( local_148 = FT_Stream_ReadFields(uVar3, winpe_rsrc_data_entry_fields, &local_88) ),uVar8 = local_148,local_148 != 0) goto LAB_00100720;
            if (uVar11 == *param_2) {
               plVar18 = (long*)ft_mem_alloc(uVar14, 0xf0, &local_148);
               param_2[0x1f] = (ulong)plVar18;
               uVar8 = local_148;
               if (local_148 != 0) goto LAB_00100720;
               *plVar18 = (long)local_88 + ( local_50 - local_60 );
               plVar18[0x1c] = local_80;
               local_148 = fnt_font_load(plVar18, uVar3);
               if (local_148 != 0) goto LAB_00100a2e;
            }

            *param_2 = *param_2 + 1;
         }

      }

   }

   local_15a = local_15a + 1;
   goto LAB_00100ddd;
}
void FNT_Face_Done(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0xb8 );
      fnt_font_done();
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x40 ));
      *(undefined8*)( param_1 + 0x40 ) = 0;
      *(undefined4*)( param_1 + 0x38 ) = 0;
      return;
   }

   return;
}
undefined8 FNT_Size_Request(long *param_1, int *param_2) {
   ushort uVar1;
   ushort uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   lVar3 = *param_1;
   lVar5 = *(long*)( param_2 + 4 );
   lVar4 = *(long*)( lVar3 + 0xf8 );
   if (param_2[7] != 0) {
      lVar5 = (long)( (ulong)(uint)param_2[7] * lVar5 + 0x24 ) / 0x48;
   }

   uVar6 = lVar5 + 0x20 >> 6;
   if (*param_2 == 0) {
      if (*(long*)( *(long*)( lVar3 + 0x40 ) + 0x18 ) + 0x20 >> 6 != uVar6) {
         return 0x17;
      }

   }
 else {
      if (*param_2 != 1) {
         return 7;
      }

      if (*(ushort*)( lVar4 + 0x6c ) != uVar6) {
         return 0x17;
      }

   }

   FT_Select_Metrics(lVar3, 0);
   uVar1 = *(ushort*)( lVar4 + 0x5c );
   uVar2 = *(ushort*)( lVar4 + 0x6c );
   param_1[6] = (ulong)uVar1 << 6;
   param_1[7] = (long)(int)( ( (uint)uVar1 - (uint)uVar2 ) * 0x40 );
   param_1[9] = ( ulong ) * (ushort*)( lVar4 + 0x72 ) << 6;
   return 0;
}


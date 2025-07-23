undefined8 pcf_cmap_init(long *param_1) {
   param_1[3] = *param_1 + 0x218;
   return 0;
}
void pcf_cmap_done(long param_1) {
   *(undefined8*)( param_1 + 0x18 ) = 0;
   return;
}
undefined2 pcf_cmap_char_index(long param_1, uint param_2) {
   ushort *puVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   puVar1 = *(ushort**)( param_1 + 0x18 );
   uVar4 = ( param_2 & 0xff ) - ( uint ) * puVar1;
   uVar3 = ( param_2 >> 8 ) - (uint)puVar1[2];
   uVar2 = ( (uint)puVar1[1] - ( uint ) * puVar1 ) + 1;
   if (( uVar3 < ( (uint)puVar1[3] - (uint)puVar1[2] ) + 1 ) && ( uVar4 < uVar2 )) {
      return *(undefined2*)( *(long*)( puVar1 + 8 ) + ( ulong )(uVar3 * uVar2 + uVar4) * 2 );
   }

   return 0;
}
short pcf_cmap_char_next(long param_1, uint *param_2) {
   uint uVar1;
   ushort uVar2;
   ushort uVar3;
   ushort *puVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   short sVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   bool bVar13;
   puVar4 = *(ushort**)( param_1 + 0x18 );
   uVar2 = puVar4[2];
   uVar3 = *puVar4;
   uVar7 = (uint)uVar3;
   uVar10 = ( *param_2 + 1 >> 8 ) - (uint)uVar2;
   uVar5 = ( *param_2 + 1 & 0xff ) - (uint)uVar3;
   uVar12 = (uint)puVar4[3] - (uint)uVar2;
   uVar9 = (uint)puVar4[1] - (uint)uVar3;
   if ((int)uVar10 < 0) {
      uVar10 = 0;
   }

   if ((int)uVar5 < 0) {
      uVar5 = 0;
   }

   if (uVar10 < uVar12 + 1) {
      uVar1 = uVar9 + 1;
      sVar8 = 0;
      iVar6 = uVar10 * uVar1;
      uVar11 = uVar10;
      do {
         if (uVar5 < uVar1) {
            do {
               sVar8 = *(short*)( *(long*)( puVar4 + 8 ) + ( ulong )(uVar5 + iVar6) * 2 );
               if (sVar8 != -1) {
                  uVar7 = uVar3 + uVar5;
                  uVar10 = uVar11;
                  goto LAB_0010011b;
               }

               bVar13 = uVar5 != uVar9;
               uVar5 = uVar5 + 1;
            }
 while ( bVar13 );
         }

         uVar10 = uVar11 + 1;
         iVar6 = iVar6 + uVar1;
         uVar5 = 0;
         bVar13 = uVar11 != uVar12;
         uVar11 = uVar10;
      }
 while ( bVar13 );
   }
 else {
      uVar7 = uVar3 + uVar5;
      sVar8 = 0;
   }

   LAB_0010011b:*param_2 = ( uVar2 + uVar10 ) * 0x100 | uVar7;
   return sVar8;
}
undefined8 pcf_get_charset_id(long param_1, undefined8 *param_2, undefined8 *param_3) {
   *param_2 = *(undefined8*)( param_1 + 0x150 );
   *param_3 = *(undefined8*)( param_1 + 0x158 );
   return 0;
}
undefined8 pcf_property_set(void) {
   return 0xc;
}
undefined8 pcf_property_get(void) {
   return 0xc;
}
undefined8 pcf_driver_init(void) {
   return 0;
}
void pcf_driver_done(void) {
   return;
}
undefined8 PCF_Size_Select(long *param_1) {
   long lVar1;
   lVar1 = *param_1;
   FT_Select_Metrics(lVar1);
   param_1[6] = *(long*)( lVar1 + 0x180 ) << 6;
   param_1[7] = *(long*)( lVar1 + 0x188 ) * -0x40;
   param_1[9] = (long)( (int)*(short*)( lVar1 + 0x1b4 ) << 6 );
   return 0;
}
undefined8 PCF_Glyph_Load(long param_1, long *param_2, uint param_3, uint param_4) {
   short *psVar1;
   ushort *puVar2;
   byte bVar3;
   short sVar4;
   short sVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   uint *puVar9;
   byte *pbVar10;
   int iVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   ulong uVar14;
   uint *puVar15;
   uint *puVar16;
   ushort *puVar17;
   uint uVar18;
   byte *pbVar19;
   byte *pbVar20;
   int iVar21;
   int iVar22;
   ulong uVar23;
   lVar6 = *param_2;
   if (lVar6 == 0) {
      return 0x23;
   }

   if (*(uint*)( lVar6 + 0x20 ) <= param_3) {
      return 6;
   }

   uVar13 = *(undefined8*)( lVar6 + 0xc0 );
   psVar1 = (short*)( *(long*)( lVar6 + 0x210 ) + (ulong)param_3 * 0x18 );
   iVar21 = (int)psVar1[3];
   sVar4 = psVar1[4];
   iVar22 = (int)*psVar1;
   sVar5 = psVar1[1];
   *(undefined2*)( param_1 + 0xb0 ) = 1;
   *(undefined1*)( param_1 + 0xb2 ) = 1;
   uVar18 = *(uint*)( lVar6 + 0x230 );
   iVar11 = sVar5 - iVar22;
   *(int*)( param_1 + 0x98 ) = sVar4 + iVar21;
   uVar18 = uVar18 & 3;
   *(int*)( param_1 + 0x9c ) = iVar11;
   if (uVar18 == 2) {
      uVar18 = ( iVar11 + 0x1fU >> 5 ) << 2;
   }
 else if (1 << (sbyte)uVar18 < 5) {
      if (uVar18 == 0) {
         uVar18 = iVar11 + 7U >> 3;
      }
 else {
         uVar18 = ( iVar11 + 0xfU >> 4 ) * 2;
      }

   }
 else {
      uVar18 = ( iVar11 + 0x3fU >> 6 ) << 3;
   }

   *(uint*)( param_1 + 0xa0 ) = uVar18;
   sVar5 = psVar1[2];
   *(int*)( param_1 + 0xc0 ) = iVar22;
   *(int*)( param_1 + 0xc4 ) = iVar21;
   *(long*)( param_1 + 0x30 ) = (long)( iVar11 * 0x40 );
   *(long*)( param_1 + 0x40 ) = (long)( iVar22 << 6 );
   lVar7 = *(long*)( lVar6 + 0x188 );
   *(long*)( param_1 + 0x50 ) = (long)( (int)sVar5 << 6 );
   lVar8 = *(long*)( lVar6 + 0x180 );
   *(undefined4*)( param_1 + 0x90 ) = 0x62697473;
   *(long*)( param_1 + 0x48 ) = (long)( iVar21 << 6 );
   *(ulong*)( param_1 + 0x38 ) = ( ulong )(uint)(( sVar4 + iVar21 ) * 0x40);
   ft_synthesize_vertical_metrics(param_1 + 0x30, ( lVar7 + lVar8 ) * 0x40);
   if (( param_4 & 0x400000 ) == 0) {
      uVar23 = (long)*(int*)( param_1 + 0xa0 ) * ( ulong ) * (uint*)( param_1 + 0x98 );
      uVar12 = ft_glyphslot_alloc_bitmap(param_1, uVar23);
      if ((int)uVar12 != 0) {
         return uVar12;
      }

      uVar12 = FT_Stream_Seek(uVar13, *(undefined8*)( psVar1 + 8 ));
      if ((int)uVar12 != 0) {
         return uVar12;
      }

      uVar13 = FT_Stream_Read(uVar13, *(undefined8*)( param_1 + 0xa8 ), uVar23);
      if ((int)uVar13 != 0) {
         return uVar13;
      }

      uVar14 = *(ulong*)( lVar6 + 0x230 );
      uVar18 = ( uint )(uVar14 >> 3);
      if (( ( uVar14 >> 3 & 1 ) == 0 ) && ( pbVar10 = uVar23 != 0 )) {
         pbVar19 = pbVar10;
         do {
            bVar3 = *pbVar19;
            pbVar20 = pbVar19 + 1;
            uVar18 = bVar3 >> 1 & 0x55 | (uint)bVar3 + (uint)bVar3 & 0xaa;
            uVar18 = uVar18 >> 2 & 0x33 | ( uVar18 & 0x33 ) << 2;
            *pbVar19 = ( byte )(uVar18 << 4) | ( byte )(uVar18 >> 4);
            pbVar19 = pbVar20;
         }
 while ( pbVar20 != pbVar10 + uVar23 );
         uVar14 = *(ulong*)( lVar6 + 0x230 );
         uVar18 = ( uint )(uVar14 >> 3);
      }

      if (( ( uVar18 ^ ( uint )(uVar14 >> 2) ) & 1 ) != 0) {
         uVar18 = ( uint )(uVar14 >> 4) & 3;
         if (uVar18 == 1) {
            puVar17 = *(ushort**)( param_1 + 0xa8 );
            if (1 < uVar23) {
               puVar2 = (ushort*)( (long)puVar17 + ( uVar23 - 2 & 0xfffffffffffffffe ) + 2 );
               do {
                  *puVar17 = *puVar17 << 8 | *puVar17 >> 8;
                  puVar17 = puVar17 + 1;
               }
 while ( puVar17 != puVar2 );
               return 0;
            }

         }
 else if (( uVar18 == 2 ) && ( puVar9 = 3 < uVar23 )) {
            puVar15 = puVar9;
            do {
               uVar18 = *puVar15;
               puVar16 = puVar15 + 1;
               *puVar15 = uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18;
               puVar15 = puVar16;
            }
 while ( puVar16 != (uint*)( (long)puVar9 + ( uVar23 - 4 & 0xfffffffffffffffc ) + 4 ) );
            return 0;
         }

      }

   }

   return 0;
}
void pcf_driver_requester(void) {
   ft_service_list_lookup(pcf_services);
   return;
}
void PCF_Face_Done_part_0(long param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   uVar2 = *(undefined8*)( param_1 + 0xb8 );
   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x210 ));
   *(undefined8*)( param_1 + 0x210 ) = 0;
   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x228 ));
   lVar4 = *(long*)( param_1 + 0x200 );
   *(undefined8*)( param_1 + 0x228 ) = 0;
   if (lVar4 != 0) {
      if (0 < *(int*)( param_1 + 0x1f8 )) {
         lVar3 = 0;
         do {
            puVar1 = (undefined8*)( lVar4 + lVar3 * 0x18 );
            if (puVar1 != (undefined8*)0x0) {
               ft_mem_free(uVar2, *puVar1);
               *puVar1 = 0;
               if (*(char*)( puVar1 + 1 ) != '\0') {
                  ft_mem_free(uVar2, puVar1[2]);
                  puVar1[2] = 0;
               }

               lVar4 = *(long*)( param_1 + 0x200 );
            }

            lVar3 = lVar3 + 1;
         }
 while ( (int)lVar3 < *(int*)( param_1 + 0x1f8 ) );
      }

      ft_mem_free(uVar2);
      *(undefined8*)( param_1 + 0x200 ) = 0;
   }

   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x170 ));
   *(undefined8*)( param_1 + 0x170 ) = 0;
   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x28 ));
   *(undefined8*)( param_1 + 0x28 ) = 0;
   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x30 ));
   *(undefined8*)( param_1 + 0x30 ) = 0;
   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x40 ));
   *(undefined8*)( param_1 + 0x40 ) = 0;
   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x150 ));
   *(undefined8*)( param_1 + 0x150 ) = 0;
   ft_mem_free(uVar2, *(undefined8*)( param_1 + 0x158 ));
   *(undefined8*)( param_1 + 0x158 ) = 0;
   if (*(long*)( param_1 + 0xc0 ) != param_1 + 0xf8) {
      return;
   }

   FT_Stream_Close();
   *(undefined8*)( param_1 + 0xc0 ) = *(undefined8*)( param_1 + 0x148 );
   return;
}
void PCF_Face_Done(long param_1) {
   if (param_1 != 0) {
      PCF_Face_Done_part_0();
      return;
   }

   return;
}
undefined8 *pcf_find_property_isra_0(int param_1, undefined8 *param_2, char *param_3) {
   int iVar1;
   int iVar2;
   undefined8 *puVar3;
   if (param_1 < 1) {
      return (undefined8*)0x0;
   }

   iVar2 = 0;
   puVar3 = param_2;
   do {
      iVar2 = iVar2 + 1;
      iVar1 = strcmp((char*)*puVar3, param_3);
      if (iVar2 == param_1) {
         if (iVar1 != 0) {
            return (undefined8*)0x0;
         }

         break;
      }

      puVar3 = puVar3 + 3;
   }
 while ( iVar1 != 0 );
   return param_2 + (long)iVar2 * 3 + -3;
}
undefined8 pcf_get_bdf_property(long param_1, undefined8 param_2, undefined4 *param_3) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = pcf_find_property_isra_0(*(undefined4*)( param_1 + 0x1f8 ), *(undefined8*)( param_1 + 0x200 ), param_2);
   uVar2 = 6;
   if (lVar1 != 0) {
      uVar2 = *(undefined8*)( lVar1 + 0x10 );
      if (*(char*)( lVar1 + 8 ) == '\0') {
         param_3[2] = (int)uVar2;
         uVar2 = 0;
         *param_3 = 2;
      }
 else {
         *param_3 = 1;
         *(undefined8*)( param_3 + 2 ) = uVar2;
         uVar2 = 0;
      }

   }

   return uVar2;
}
undefined8 PCF_Size_Request(long *param_1, int *param_2) {
   long lVar1;
   long lVar2;
   lVar1 = *param_1;
   lVar2 = *(long*)( param_2 + 4 );
   if (param_2[7] != 0) {
      lVar2 = (long)( (ulong)(uint)param_2[7] * lVar2 + 0x24 ) / 0x48;
   }

   lVar2 = lVar2 + 0x20 >> 6;
   if (*param_2 == 0) {
      if (*(long*)( *(long*)( lVar1 + 0x40 ) + 0x18 ) + 0x20 >> 6 != lVar2) {
         return 0x17;
      }

   }
 else {
      if (*param_2 != 1) {
         return 7;
      }

      if (*(long*)( lVar1 + 0x188 ) + *(long*)( lVar1 + 0x180 ) != lVar2) {
         return 0x17;
      }

   }

   FT_Select_Metrics(lVar1, 0);
   param_1[6] = *(long*)( lVar1 + 0x180 ) << 6;
   param_1[7] = *(long*)( lVar1 + 0x188 ) * -0x40;
   param_1[9] = (long)( (int)*(short*)( lVar1 + 0x1b4 ) << 6 );
   return 0;
}
ulong pcf_get_accel(long param_1, long param_2, long param_3) {
   int iVar1;
   uint uVar2;
   long *plVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   undefined1 *puVar7;
   long in_FS_OFFSET;
   uint local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar3 = *(long**)( param_2 + 0x170 );
   if (*(long*)( param_2 + 0x168 ) != 0) {
      lVar5 = 0;
      do {
         if (param_3 == *plVar3) {
            if (*(ulong*)( param_1 + 0x10 ) <= (ulong)plVar3[3]) {
               iVar1 = FT_Stream_Skip(param_1, plVar3[3] - *(ulong*)( param_1 + 0x10 ));
               if (iVar1 == 0) {
                  local_34 = 0;
                  uVar2 = FT_Stream_ReadULongLE(param_1, &local_34);
                  uVar4 = (ulong)local_34;
                  if (( local_34 == 0 ) && ( uVar2 < 0x200 )) {
                     puVar7 = pcf_accel_header;
                     if (( uVar2 & 4 ) != 0) {
                        puVar7 = pcf_accel_msb_header;
                     }

                     uVar4 = FT_Stream_ReadFields(param_1, puVar7, param_2 + 0x178);
                     local_34 = (uint)uVar4;
                     if (local_34 == 0) {
                        lVar5 = *(long*)( param_2 + 0x180 );
                        lVar6 = -lVar5;
                        if (0 < lVar5) {
                           lVar6 = lVar5;
                        }

                        if (0x7fff < lVar6) {
                           *(ulong*)( param_2 + 0x180 ) = ( lVar5 >> 0x3f & 0xffffffffffff0002U ) + 0x7fff;
                        }

                        lVar5 = *(long*)( param_2 + 0x188 );
                        lVar6 = -lVar5;
                        if (0 < lVar5) {
                           lVar6 = lVar5;
                        }

                        if (0x7fff < lVar6) {
                           *(ulong*)( param_2 + 0x188 ) = ( lVar5 >> 0x3f & 0xffffffffffff0002U ) + 0x7fff;
                        }

                        puVar7 = pcf_metric_header;
                        if (( uVar2 >> 2 & 1 ) != 0) {
                           puVar7 = pcf_metric_msb_header;
                        }

                        uVar4 = FT_Stream_ReadFields(param_1, puVar7, param_2 + 0x198);
                        local_34 = (uint)uVar4;
                        if (local_34 == 0) {
                           uVar4 = FT_Stream_ReadFields(param_1, puVar7, param_2 + 0x1b0);
                           local_34 = (uint)uVar4;
                           if (local_34 == 0) {
                              if (uVar2 >> 8 == 1) {
                                 uVar4 = FT_Stream_ReadFields(param_1, puVar7, param_2 + 0x1c8);
                                 local_34 = (uint)uVar4;
                                 if (local_34 == 0) {
                                    uVar4 = FT_Stream_ReadFields(param_1, puVar7, param_2 + 0x1e0);
                                 }

                              }
 else {
                                 *(undefined8*)( param_2 + 0x1d8 ) = *(undefined8*)( param_2 + 0x1a8 );
                                 *(undefined8*)( param_2 + 0x1c8 ) = *(undefined8*)( param_2 + 0x198 );
                                 *(undefined8*)( param_2 + 0x1d0 ) = *(undefined8*)( param_2 + 0x1a0 );
                                 *(undefined8*)( param_2 + 0x1f0 ) = *(undefined8*)( param_2 + 0x1c0 );
                                 *(undefined8*)( param_2 + 0x1e0 ) = *(undefined8*)( param_2 + 0x1b0 );
                                 *(undefined8*)( param_2 + 0x1e8 ) = *(undefined8*)( param_2 + 0x1b8 );
                              }

                           }

                        }

                     }

                  }

                  goto LAB_00100a55;
               }

            }

            uVar4 = 0x53;
            goto LAB_00100a55;
         }

         lVar5 = lVar5 + 1;
         plVar3 = plVar3 + 4;
      }
 while ( *(long*)( param_2 + 0x168 ) != lVar5 );
   }

   uVar4 = 3;
   LAB_00100a55:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int pcf_load_font(long param_1, undefined8 *param_2, long param_3) {
   byte bVar1;
   ushort uVar2;
   ushort uVar3;
   ushort uVar4;
   byte *pbVar5;
   void *__src;
   undefined8 uVar6;
   undefined8 uVar7;
   short sVar8;
   ushort uVar9;
   int iVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   short *psVar14;
   ulong *puVar15;
   long *plVar16;
   char *pcVar17;
   size_t sVar18;
   char *pcVar19;
   undefined8 uVar20;
   undefined8 *puVar21;
   undefined8 uVar22;
   undefined8 uVar23;
   ulong uVar24;
   ushort uVar25;
   uint uVar26;
   undefined8 *puVar27;
   ulong *puVar28;
   ulong uVar29;
   ulong uVar30;
   undefined4 uVar31;
   undefined1 *puVar32;
   ushort uVar33;
   ulong uVar34;
   ulong uVar35;
   long lVar36;
   short *psVar37;
   short sVar38;
   long in_FS_OFFSET;
   bool bVar39;
   undefined8 local_b8;
   ulong local_a0;
   int local_98;
   int local_94;
   undefined4 local_90;
   byte local_8c;
   undefined1 local_88[16];
   undefined1 local_78[16];
   size_t local_68[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = param_2[0x17];
   local_90 = FT_Stream_Seek(param_1, 0);
   if (( ( ( local_90 == 0 ) && ( local_90 = FT_Stream_ReadFields(param_1, pcf_toc_header, param_2 + 0x2c) ),local_90 == 0 ) ) && ( param_2[0x2c] == 0x70636601 )) {
      uVar24 = *(ulong*)( param_1 + 8 ) >> 4;
      if (9 < uVar24) {
         uVar24 = 9;
      }

      if (uVar24 < uVar34) {
         param_2[0x2d] = uVar24;
         uVar34 = uVar24;
      }

      lVar13 = ft_mem_qrealloc(uVar23, 0x20, 0, uVar34, 0);
      param_2[0x2e] = lVar13;
      if (local_90 == 0) {
         uVar34 = 0;
         uVar24 = 0xffffffffffffffff;
         iVar10 = local_90;
         if (param_2[0x2d] == 0) {
            LAB_001010a8:uVar34 = 0;
            do {
               bVar39 = false;
               uVar30 = 0;
               while (uVar30 < uVar24 - uVar34) {
                  puVar21 = (undefined8*)( lVar13 + uVar30 * 0x20 );
                  uVar30 = ( ulong )((int)uVar30 + 1);
                  uVar35 = puVar21[3];
                  puVar27 = (undefined8*)( uVar30 * 0x20 + lVar13 );
                  uVar29 = puVar27[3];
                  if ((ulong)puVar27[3] < uVar35) {
                     uVar7 = puVar27[1];
                     uVar20 = *puVar21;
                     uVar6 = puVar21[1];
                     bVar39 = true;
                     uVar22 = puVar21[2];
                     *puVar21 = *puVar27;
                     puVar21[1] = uVar7;
                     uVar7 = puVar27[3];
                     puVar21[2] = puVar27[2];
                     puVar21[3] = uVar7;
                     puVar27[3] = uVar35;
                     puVar27[2] = uVar22;
                     *puVar27 = uVar20;
                     puVar27[1] = uVar6;
                     uVar29 = uVar35;
                  }

                  if (( uVar29 < (ulong)puVar21[2] ) || ( uVar29 - puVar21[2] < (ulong)puVar21[3] )) {
                     local_90 = 9;
                     goto LAB_00100c2a;
                  }

               }
;
            }
 while ( ( bVar39 ) && ( uVar34 = uVar34 < uVar24 ) );
            uVar34 = *(ulong*)( param_1 + 8 );
            uVar30 = 0;
            do {
               if (( uVar34 < *(ulong*)( lVar13 + 0x10 ) ) || ( uVar34 - *(ulong*)( lVar13 + 0x10 ) < *(ulong*)( lVar13 + 0x18 ) )) goto LAB_0010116a;
               uVar30 = uVar30 + 1;
               lVar13 = lVar13 + 0x20;
            }
 while ( uVar24 != uVar30 );
         }
 else {
            do {
               local_90 = iVar10;
               local_90 = FT_Stream_ReadFields(param_1, pcf_table_header, lVar13);
               if (local_90 != 0) goto LAB_00100c2a;
               uVar34 = ( ulong )((int)uVar34 + 1);
               lVar13 = lVar13 + 0x20;
               iVar10 = 0;
            }
 while ( uVar34 < (ulong)param_2[0x2d] );
            uVar24 = param_2[0x2d] - 1;
            lVar13 = param_2[0x2e];
            if (uVar24 != 0) goto LAB_001010a8;
            uVar34 = *(ulong*)( param_1 + 8 );
         }

         if (uVar34 < *(ulong*)( lVar13 + 0x18 )) {
            LAB_0010116a:local_90 = 8;
            LAB_00100c2a:ft_mem_free(uVar23, param_2[0x2e]);
            local_98 = local_90;
            param_2[0x2e] = 0;
            if (local_90 != 0) goto LAB_00100af5;
         }
 else {
            uVar34 = uVar34 - *(ulong*)( lVar13 + 0x18 );
            if (uVar34 < *(ulong*)( lVar13 + 0x10 )) {
               *(ulong*)( lVar13 + 0x10 ) = uVar34;
            }

            local_98 = 0;
         }

         uVar22 = _UNK_00102858;
         *param_2 = __LC2;
         param_2[1] = uVar22;
         iVar10 = 0;
         if (param_3 < 0) goto LAB_00100afa;
         uVar22 = param_2[0x17];
         plVar16 = (long*)param_2[0x2e];
         if (param_2[0x2d] != 0) {
            lVar13 = 0;
            do {
               if (*plVar16 == 1) {
                  if (( (ulong)plVar16[3] < *(ulong*)( param_1 + 0x10 ) ) || ( iVar10 = FT_Stream_Skip(param_1, plVar16[3] - *(ulong*)( param_1 + 0x10 )) ),iVar10 != 0) {
                     local_90 = 0x53;
                     goto LAB_00100cd8;
                  }

                  uVar34 = plVar16[2];
                  local_90 = 0;
                  uVar11 = FT_Stream_ReadULongLE(param_1, &local_90);
                  if (( local_90 != 0 ) || ( 0xff < uVar11 )) goto LAB_00100cd8;
                  uVar12 = uVar11 >> 2 & 1;
                  if (( uVar11 >> 2 & 1 ) == 0) {
                     uVar11 = FT_Stream_ReadULongLE(param_1, &local_90);
                  }
 else {
                     uVar11 = FT_Stream_ReadULong();
                  }

                  uVar24 = (ulong)uVar11;
                  if (local_90 != 0) goto LAB_00100cd8;
                  if (uVar34 / 9 < uVar24) {
                     local_90 = 8;
                     goto LAB_00100cd8;
                  }

                  uVar30 = 0x100;
                  if (uVar24 < 0x101) {
                     uVar30 = uVar24;
                  }

                  *(int*)( param_2 + 0x3f ) = (int)uVar30;
                  puVar15 = (ulong*)ft_mem_qrealloc(uVar22, 0x18, 0, uVar30, 0, &local_90);
                  if (local_90 != 0) goto LAB_001012d0;
                  if (uVar24 == 0) {
                     iVar10 = FT_Stream_Skip(param_1, 0);
                     if (iVar10 != 0) goto LAB_00101f13;
                     goto LAB_00101e01;
                  }

                  uVar35 = 0;
                  puVar28 = puVar15;
                  if (uVar12 != 0) goto LAB_001012b4;
                  goto LAB_001012f4;
               }

               lVar13 = lVar13 + 1;
               plVar16 = plVar16 + 4;
            }
 while ( param_2[0x2d] != lVar13 );
         }

         local_90 = 3;
         LAB_00100cd8:lVar13 = 0;
         puVar15 = (ulong*)0x0;
         goto LAB_00100cde;
      }

   }

   goto LAB_00100af5;
   LAB_001012f4:local_90 = FT_Stream_ReadFields(param_1, pcf_property_header, puVar28);
   if (local_90 != 0) goto LAB_001012d0;
   uVar35 = uVar35 + 1;
   if (uVar30 <= uVar35) goto LAB_00101dc3;
   local_90 = 0;
   puVar28 = puVar28 + 3;
   goto LAB_001012f4;
   LAB_001012b4:local_90 = FT_Stream_ReadFields(param_1, pcf_property_msb_header, puVar28);
   if (local_90 != 0) goto LAB_001012d0;
   uVar35 = uVar35 + 1;
   puVar28 = puVar28 + 3;
   if (uVar30 <= uVar35) goto LAB_00101dc3;
   local_90 = 0;
   goto LAB_001012b4;
   LAB_00101dc3:local_90 = 0;
   local_90 = FT_Stream_Skip(param_1, ( uVar24 - uVar30 ) * 9);
   if (local_90 == 0) {
      iVar10 = 0;
      if (( uVar11 & 3 ) != 0) {
         iVar10 = FT_Stream_Skip(param_1, 4 - ( ulong )(uVar11 & 3));
         if (iVar10 != 0) goto LAB_00101f13;
         local_90 = 0;
         iVar10 = local_90;
      }

      LAB_00101e01:local_90 = iVar10;
      if (uVar12 == 0) {
         uVar11 = FT_Stream_ReadULongLE(param_1, &local_90);
      }
 else {
         uVar11 = FT_Stream_ReadULong();
      }

      uVar35 = (ulong)uVar11;
      if (local_90 == 0) {
         if (uVar35 <= uVar34 + uVar24 * -9) {
            uVar34 = 0x1000100;
            if (uVar35 < 0x1000101) {
               uVar34 = uVar35;
            }

            lVar13 = ft_mem_qalloc(uVar22, uVar34 + 1, &local_90);
            if (( local_90 == 0 ) && ( local_90 = local_90 == 0 )) {
               *(undefined1*)( lVar13 + uVar34 ) = 0;
               puVar21 = (undefined8*)ft_mem_realloc(uVar22, 0x18, 0, uVar30, 0, &local_90);
               if (local_90 == 0) {
                  param_2[0x40] = puVar21;
                  if (uVar24 != 0) {
                     local_a0 = 0;
                     puVar28 = puVar15;
                     do {
                        uVar24 = *puVar28;
                        if (( (long)uVar24 < 0 ) || ( uVar34 < uVar24 )) {
                           LAB_00102175:local_90 = 9;
                           goto LAB_00100cde;
                        }

                        uVar20 = ft_mem_strdup(uVar22, lVar13 + uVar24, &local_90);
                        *puVar21 = uVar20;
                        if (local_90 != 0) goto LAB_00100cde;
                        uVar35 = puVar28[1];
                        *(char*)( puVar21 + 1 ) = (char)uVar35;
                        uVar24 = puVar28[2];
                        if ((char)uVar35 == '\0') {
                           puVar21[2] = uVar24;
                        }
 else {
                           if (( (long)uVar24 < 0 ) || ( uVar34 < uVar24 )) goto LAB_00102175;
                           uVar20 = ft_mem_strdup(uVar22, lVar13 + uVar24, &local_90);
                           puVar21[2] = uVar20;
                           if (local_90 != 0) goto LAB_00100cde;
                        }

                        local_a0 = local_a0 + 1;
                        puVar28 = puVar28 + 3;
                        puVar21 = puVar21 + 3;
                     }
 while ( local_a0 < uVar30 );
                  }

                  local_90 = 0;
               }

            }

            goto LAB_00100cde;
         }

         local_90 = 8;
      }

   }
 else {
      LAB_00101f13:local_90 = 0x53;
   }

   LAB_001012d0:lVar13 = 0;
   LAB_00100cde:ft_mem_free(uVar22, puVar15);
   ft_mem_free(uVar22, lVar13);
   local_98 = local_90;
   if (local_90 == 0) {
      lVar13 = param_2[0x2d];
      plVar16 = (long*)param_2[0x2e];
      if (lVar13 != 0) {
         lVar36 = 0;
         do {
            if (plVar16[lVar36 * 4] == 0x100) {
               local_b8 = param_2[0x17];
               bVar39 = true;
               goto LAB_00100d4f;
            }

            lVar36 = lVar36 + 1;
         }
 while ( lVar13 != lVar36 );
      }

      local_98 = pcf_get_accel(param_1, param_2, 2);
      if (local_98 == 0) {
         local_b8 = param_2[0x17];
         lVar13 = param_2[0x2d];
         plVar16 = (long*)param_2[0x2e];
         if (lVar13 != 0) {
            bVar39 = false;
            LAB_00100d4f:lVar36 = 0;
            do {
               if (*plVar16 == 4) {
                  if (( (ulong)plVar16[3] < *(ulong*)( param_1 + 0x10 ) ) || ( iVar10 = FT_Stream_Skip(param_1, plVar16[3] - *(ulong*)( param_1 + 0x10 )) ),iVar10 != 0) break;
                  uVar34 = plVar16[2];
                  local_94 = 0;
                  uVar11 = FT_Stream_ReadULongLE(param_1, &local_94);
                  if (( local_94 != 0 ) || ( 0x1ff < uVar11 )) break;
                  uVar12 = uVar11 >> 2 & 1;
                  if (uVar11 < 0x100) {
                     if (uVar12 == 0) {
                        uVar12 = FT_Stream_ReadULongLE();
                     }
 else {
                        uVar12 = FT_Stream_ReadULong();
                     }

                     if (( local_94 != 0 ) || ( uVar24 = uVar34 / 0xc < uVar24 )) break;
                  }
 else {
                     if (uVar12 == 0) {
                        uVar9 = FT_Stream_ReadUShortLE(param_1, &local_94);
                     }
 else {
                        uVar9 = FT_Stream_ReadUShort();
                     }

                     if (( local_94 != 0 ) || ( uVar24 = uVar34 / 5 < uVar24 )) break;
                  }

                  if (uVar24 != 0) {
                     if (0xfffe < uVar24) {
                        uVar24 = 0xfffe;
                     }

                     param_2[0x41] = uVar24 + 1;
                     psVar14 = (short*)ft_mem_qrealloc(local_b8, 0x18, 0, uVar24 + 1, 0, &local_94);
                     param_2[0x42] = psVar14;
                     if (local_94 == 0) {
                        if ((ulong)param_2[0x41] < 2) goto LAB_00101db6;
                        puVar32 = pcf_metric_msb_header;
                        uVar34 = 1;
                        if (( uVar11 >> 2 & 1 ) == 0) {
                           puVar32 = pcf_metric_header;
                        }

                        goto LAB_00100f2b;
                     }

                  }

                  break;
               }

               lVar36 = lVar36 + 1;
               plVar16 = plVar16 + 4;
            }
 while ( lVar36 != lVar13 );
         }

      }

   }

   goto LAB_00100af5;
   LAB_00101368:lVar13 = lVar13 + 1;
   plVar16 = plVar16 + 4;
   if (param_2[0x2d] == lVar13) goto LAB_00100af5;
   goto LAB_00101379;
   while (true) {
      if (( sVar8 < sVar38 ) || ( SBORROW4((int)psVar14[0xf], -(int)psVar14[0x10]) != (int)psVar14[0xf] + (int)psVar14[0x10] < 0 )) {
         for (int i = 0; i < 4; i++) {
            psVar37[i] = 0;
         }

         psVar14[0x10] = 0;
      }

      uVar34 = uVar34 + 1;
      psVar14 = psVar37;
      if ((ulong)param_2[0x41] <= uVar34) break;
      LAB_00100f2b:psVar37 = psVar14 + 0xc;
      if (uVar11 < 0x100) {
         local_94 = FT_Stream_ReadFields(param_1, puVar32, psVar37);
         for (int i = 0; i < 4; i++) {
            psVar14[( i + 20 )] = 0;
         }

         if (local_94 != 0) goto LAB_0010131e;
         sVar8 = psVar14[0xd];
         sVar38 = *psVar37;
      }
 else {
         local_94 = FT_Stream_ReadFields(param_1, pcf_compressed_metric_header, &local_90);
         if (local_94 != 0) {
            for (int i = 0; i < 4; i++) {
               psVar14[( i + 20 )] = 0;
            }

            goto LAB_0010131e;
         }

         sVar38 = (byte)local_90 - 0x80;
         *psVar37 = sVar38;
         sVar8 = local_90._1_1_ - 0x80;
         psVar14[0xd] = sVar8;
         psVar14[0xe] = local_90._2_1_ - 0x80;
         psVar14[0xf] = local_90._3_1_ - 0x80;
         psVar14[0x11] = 0;
         psVar14[0x14] = 0;
         psVar14[0x15] = 0;
         psVar14[0x16] = 0;
         psVar14[0x17] = 0;
         psVar14[0x10] = local_8c - 0x80;
         local_94 = 0;
      }

   }
;
   if (local_94 == 0) {
      LAB_00101db6:local_98 = 0;
   }
 else {
      LAB_0010131e:ft_mem_free(local_b8, param_2[0x42]);
      param_2[0x42] = 0;
      local_98 = local_94;
      if (local_94 != 0) goto LAB_00100af5;
   }

   plVar16 = (long*)param_2[0x2e];
   if (param_2[0x2d] != 0) {
      lVar13 = 0;
      LAB_00101379:if (*plVar16 != 8) goto LAB_00101368;
      if (( (ulong)plVar16[3] < *(ulong*)( param_1 + 0x10 ) ) || ( iVar10 = FT_Stream_Skip(param_1, plVar16[3] - *(ulong*)( param_1 + 0x10 )) ),iVar10 != 0) goto LAB_00100af5;
      uVar34 = plVar16[2];
      local_90 = 0;
      local_90 = FT_Stream_EnterFrame(param_1, 8);
      if (local_90 != 0) goto LAB_00100af5;
      uVar11 = FT_Stream_GetULongLE(param_1);
      local_b8._0_4_ = uVar11 >> 2 & 1;
      if (( uVar11 >> 2 & 1 ) == 0) {
         uVar12 = FT_Stream_GetULongLE(param_1);
      }
 else {
         uVar12 = FT_Stream_GetULong();
      }

      uVar24 = (ulong)uVar12;
      FT_Stream_ExitFrame(param_1);
      if (0xff < uVar11) goto LAB_00100af5;
      uVar30 = 0xfffe;
      if (uVar24 < 0xffff) {
         uVar30 = uVar24;
      }

      if (uVar30 != param_2[0x41] - 1) goto LAB_00100af5;
      lVar13 = *(long*)( param_1 + 0x10 ) + 0x10 + uVar30 * 4;
      if (uVar24 != 0) {
         uVar24 = 1;
         do {
            if ((uint)local_b8 == 0) {
               uVar12 = FT_Stream_ReadULongLE();
            }
 else {
               uVar12 = FT_Stream_ReadULong(param_1, &local_90);
            }

            lVar36 = lVar13 + (ulong)uVar12;
            if (uVar34 < uVar12) {
               lVar36 = lVar13;
            }

            uVar35 = uVar24 + 1;
            *(long*)( param_2[0x42] + 0x10 + uVar24 * 0x18 ) = lVar36;
            uVar24 = uVar35;
         }
 while ( uVar35 <= uVar30 );
      }

      if (local_90 != 0) goto LAB_00100af5;
      lVar13 = 4;
      lVar36 = 4;
      if ((uint)local_b8 == 0) {
         while (FT_Stream_ReadULongLE(param_1, &local_90),local_90 == 0) {
            lVar13 = lVar13 + -1;
            if (lVar13 == 0) goto LAB_00101533;
         }
;
      }
 else {
         do {
            FT_Stream_ReadULong(param_1, &local_90);
            if (local_90 != 0) goto LAB_00100af5;
            lVar36 = lVar36 + -1;
         }
 while ( lVar36 != 0 );
         LAB_00101533:lVar13 = 0;
         local_98 = 0;
         uVar22 = param_2[0x17];
         param_2[0x46] = (ulong)uVar11;
         plVar16 = (long*)param_2[0x2e];
         if (param_2[0x2d] == 0) goto LAB_00100af5;
         do {
            if (*plVar16 == 0x20) {
               if (( *(ulong*)( param_1 + 0x10 ) <= (ulong)plVar16[3] ) && ( iVar10 = FT_Stream_Skip(param_1, plVar16[3] - *(ulong*)( param_1 + 0x10 )) ),iVar10 == 0) {
                  local_90 = 0;
                  uVar11 = FT_Stream_ReadULongLE(param_1, &local_90);
                  if (( local_90 == 0 ) && ( uVar11 < 0x100 )) {
                     puVar32 = pcf_enc_header;
                     uVar11 = uVar11 >> 2 & 1;
                     if (uVar11 != 0) {
                        puVar32 = pcf_enc_msb_header;
                     }

                     local_90 = FT_Stream_ReadFields(param_1, puVar32, param_2 + 0x43);
                     if (local_90 == 0) {
                        uVar9 = *(ushort*)( param_2 + 0x43 );
                        uVar33 = *(ushort*)( (long)param_2 + 0x21a );
                        if (( uVar9 <= uVar33 ) && ( uVar33 < 0x100 )) {
                           uVar2 = *(ushort*)( (long)param_2 + 0x21c );
                           uVar3 = *(ushort*)( (long)param_2 + 0x21e );
                           if (( uVar2 <= uVar3 ) && ( uVar3 < 0x100 )) {
                              uVar4 = *(ushort*)( param_2 + 0x44 );
                              uVar12 = (uint)(byte)uVar4;
                              uVar25 = uVar4 >> 8;
                              if (( ( uVar25 < uVar2 || uVar3 < uVar25 ) || ( uVar4 & 0xff ) < uVar9 ) || ( uVar26 = (uint)uVar25 ),uVar33 < ( uVar4 & 0xff )) {
                                 uVar12 = (uint)uVar9;
                                 *(ushort*)( param_2 + 0x44 ) = uVar2 * 0x100 + uVar9;
                                 uVar26 = (uint)uVar2;
                              }

                              lVar13 = (long)(int)( ( (uint)uVar33 - (uint)uVar9 ) + 1 ) * (long)(int)( ( (uint)uVar3 - (uint)uVar2 ) + 1 );
                              local_90 = FT_Stream_EnterFrame(param_1, lVar13 * 2);
                              if (local_90 == 0) {
                                 uVar9 = *(ushort*)( *(long*)( param_1 + 0x40 ) + (long)(int)( ( ( ( ( ( uint ) * (ushort*)( (long)param_2 + 0x21a ) - ( uint ) * (ushort*)( param_2 + 0x43 ) ) + 1 ) * ( uVar26 - *(ushort*)( (long)param_2 + 0x21c ) ) + uVar12 ) - ( uint ) * (ushort*)( param_2 + 0x43 ) ) * 2 ) );
                                 if (uVar11 != 0) {
                                    uVar9 = uVar9 << 8 | uVar9 >> 8;
                                 }

                                 lVar36 = 0x18;
                                 if (( uVar9 != 0xffff ) && ( ( ulong )(ushort)(uVar9 + 1) < (ulong)param_2[0x41] )) {
                                    lVar36 = ( ulong )(ushort)(uVar9 + 1) * 0x18;
                                 }

                                 puVar21 = (undefined8*)param_2[0x42];
                                 uVar20 = ( (undefined8*)( (long)puVar21 + lVar36 ) )[1];
                                 *puVar21 = *(undefined8*)( (long)puVar21 + lVar36 );
                                 puVar21[1] = uVar20;
                                 puVar21[2] = *(undefined8*)( (long)puVar21 + lVar36 + 0x10 );
                                 psVar14 = (short*)ft_mem_qrealloc(uVar22, 2, 0, lVar13, 0, &local_90);
                                 param_2[0x45] = psVar14;
                                 if (local_90 == 0) {
                                    uVar9 = *(ushort*)( (long)param_2 + 0x21c );
                                    if (uVar9 <= *(ushort*)( (long)param_2 + 0x21e )) {
                                       do {
                                          uVar33 = *(ushort*)( param_2 + 0x43 );
                                          psVar37 = psVar14;
                                          if (uVar33 <= *(ushort*)( (long)param_2 + 0x21a )) {
                                             do {
                                                if (uVar11 == 0) {
                                                   sVar8 = FT_Stream_GetUShortLE();
                                                }
 else {
                                                   sVar8 = FT_Stream_GetUShort(param_1);
                                                }

                                                psVar14 = psVar37 + 1;
                                                uVar33 = uVar33 + 1;
                                                *psVar37 = sVar8 + ( ushort )(sVar8 != -1);
                                                psVar37 = psVar14;
                                             }
 while ( uVar33 <= *(ushort*)( (long)param_2 + 0x21a ) );
                                          }

                                          uVar9 = uVar9 + 1;
                                       }
 while ( uVar9 <= *(ushort*)( (long)param_2 + 0x21e ) );
                                    }

                                    FT_Stream_ExitFrame(param_1);
                                    local_98 = local_90;
                                    if (( local_90 == 0 ) && ( ( !bVar39 || ( local_98 = pcf_get_accel(param_1, param_2, 0x100) ),local_98 == 0 ) )) {
                                       uVar34 = param_2[2];
                                       param_2[2] = uVar34 | 0x12;
                                       if (*(char*)( (long)param_2 + 0x17b ) != '\0') {
                                          param_2[2] = uVar34 | 0x16;
                                       }

                                       uVar31 = *(undefined4*)( param_2 + 0x3f );
                                       uVar22 = param_2[0x40];
                                       param_2[3] = 0;
                                       local_90 = 0;
                                       uVar20 = param_2[0x17];
                                       local_88 = (undefined1[16])0x0;
                                       local_78 = (undefined1[16])0x0;
                                       lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "SLANT");
                                       if (( lVar13 != 0 ) && ( *(char*)( lVar13 + 8 ) != '\0' )) {
                                          pbVar5 = *(byte**)( lVar13 + 0x10 );
                                          uVar11 = *pbVar5 - 0x49;
                                          if (( (byte)uVar11 < 0x27 ) && ( ( 0x4100000041U >> ( (ulong)uVar11 & 0x3f ) & 1 ) != 0 )) {
                                             param_2[3] = 1;
                                             pcVar17 = "Italic";
                                             if (( *pbVar5 & 0xdf ) == 0x4f) {
                                                pcVar17 = "Oblique";
                                             }

                                             local_78._0_8_ = pcVar17;
                                          }

                                       }

                                       lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "WEIGHT_NAME");
                                       if (( ( lVar13 != 0 ) && ( *(char*)( lVar13 + 8 ) != '\0' ) ) && ( ( **(byte**)( lVar13 + 0x10 ) & 0xdf ) == 0x42 )) {
                                          param_2[3] = param_2[3] | 2;
                                          local_88._8_8_ = &_LC5;
                                       }

                                       lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "SETWIDTH_NAME");
                                       if (( lVar13 != 0 ) && ( *(char*)( lVar13 + 8 ) != '\0' )) {
                                          bVar1 = **(byte**)( lVar13 + 0x10 );
                                          if (( bVar1 != 0 ) && ( ( bVar1 & 0xdf ) != 0x4e )) {
                                             local_78._8_8_ = *(byte**)( lVar13 + 0x10 );
                                          }

                                       }

                                       lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "ADD_STYLE_NAME");
                                       if (( lVar13 != 0 ) && ( *(char*)( lVar13 + 8 ) != '\0' )) {
                                          bVar1 = **(byte**)( lVar13 + 0x10 );
                                          if (( bVar1 != 0 ) && ( ( bVar1 & 0xdf ) != 0x4e )) {
                                             local_88._0_8_ = *(byte**)( lVar13 + 0x10 );
                                          }

                                       }

                                       lVar13 = 0;
                                       lVar36 = 0;
                                       do {
                                          local_68[lVar36] = 0;
                                          if (*(char**)( local_88 + lVar36 * 8 ) != (char*)0x0) {
                                             sVar18 = strlen(*(char**)( local_88 + lVar36 * 8 ));
                                             local_68[lVar36] = sVar18;
                                             lVar13 = lVar13 + 1 + sVar18;
                                          }

                                          lVar36 = lVar36 + 1;
                                       }
 while ( lVar36 != 4 );
                                       if (lVar13 == 0) {
                                          lVar13 = 8;
                                          local_68[0] = 7;
                                          local_88._0_8_ = "Regular";
                                       }

                                       uVar34 = 0;
                                       pcVar17 = (char*)ft_mem_qalloc(uVar20, lVar13, &local_90);
                                       param_2[6] = pcVar17;
                                       if (local_90 == 0) {
                                          do {
                                             __src = *(void**)( local_88 + uVar34 * 8 );
                                             sVar18 = local_68[uVar34];
                                             if (__src != (void*)0x0) {
                                                pcVar19 = (char*)param_2[6];
                                                if (pcVar17 != pcVar19) {
                                                   *pcVar17 = ' ';
                                                   pcVar19 = pcVar17 + 1;
                                                }

                                                pcVar19 = (char*)memcpy(pcVar19, __src, sVar18);
                                                pcVar17 = pcVar19 + sVar18;
                                                if (( ( 9UL >> ( uVar34 & 0x3f ) & 1 ) != 0 ) && ( pcVar17 = sVar18 != 0 )) {
                                                   pcVar17 = pcVar19 + sVar18;
                                                   do {
                                                      if (*pcVar19 == ' ') {
                                                         *pcVar19 = '-';
                                                      }

                                                      pcVar19 = pcVar19 + 1;
                                                   }
 while ( pcVar19 != pcVar17 );
                                                }

                                             }

                                             uVar34 = uVar34 + 1;
                                          }
 while ( uVar34 != 4 );
                                          *pcVar17 = '\0';
                                          local_98 = local_90;
                                          if (local_90 == 0) {
                                             lVar13 = pcf_find_property_isra_0(*(undefined4*)( param_2 + 0x3f ), param_2[0x40], "FAMILY_NAME");
                                             if (( lVar13 == 0 ) || ( *(char*)( lVar13 + 8 ) == '\0' )) {
                                                param_2[5] = 0;
                                             }
 else {
                                                uVar22 = ft_mem_strdup(uVar23, *(undefined8*)( lVar13 + 0x10 ), &local_98);
                                                param_2[5] = uVar22;
                                                if (local_98 != 0) break;
                                             }

                                             *(undefined4*)( param_2 + 7 ) = 1;
                                             param_2[4] = param_2[0x41];
                                             psVar14 = (short*)ft_mem_alloc(uVar23, 0x20, &local_98);
                                             param_2[8] = psVar14;
                                             if (local_98 == 0) {
                                                uVar31 = *(undefined4*)( param_2 + 0x3f );
                                                uVar22 = param_2[0x40];
                                                lVar13 = param_2[0x30] + param_2[0x31];
                                                lVar36 = -lVar13;
                                                if (0 < lVar13) {
                                                   lVar36 = lVar13;
                                                }

                                                sVar38 = (short)param_2[0x30] + (short)param_2[0x31];
                                                sVar8 = -sVar38;
                                                if (0 < sVar38) {
                                                   sVar8 = sVar38;
                                                }

                                                if (0x7fff < lVar36) {
                                                   sVar8 = 0x7fff;
                                                }

                                                *psVar14 = sVar8;
                                                lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "AVERAGE_WIDTH");
                                                if (lVar13 == 0) {
                                                   sVar8 = (short)( ( sVar8 * 2 + 1 ) / 3 );
                                                }
 else {
                                                   lVar13 = *(long*)( lVar13 + 0x10 );
                                                   lVar36 = -lVar13;
                                                   if (0 < lVar13) {
                                                      lVar36 = lVar13;
                                                   }

                                                   sVar8 = 0x7fff;
                                                   if (lVar36 < 0x4fff2) {
                                                      sVar38 = (short)( ( lVar13 + 5 ) / 10 );
                                                      sVar8 = -sVar38;
                                                      if (0 < sVar38) {
                                                         sVar8 = sVar38;
                                                      }

                                                   }

                                                }

                                                psVar14[1] = sVar8;
                                                lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "POINT_SIZE");
                                                if (lVar13 != 0) {
                                                   lVar13 = *(long*)( lVar13 + 0x10 );
                                                   lVar36 = -lVar13;
                                                   if (0 < lVar13) {
                                                      lVar36 = lVar13;
                                                   }

                                                   if (lVar36 < 0x504c3) {
                                                      uVar20 = FT_MulDiv(lVar36, 0x70800, 0x11a4e);
                                                      uVar31 = *(undefined4*)( param_2 + 0x3f );
                                                      uVar22 = param_2[0x40];
                                                      *(undefined8*)( psVar14 + 4 ) = uVar20;
                                                   }
 else {
                                                      psVar14[4] = 0x7fff;
                                                      psVar14[5] = 0;
                                                      psVar14[6] = 0;
                                                      psVar14[7] = 0;
                                                   }

                                                }

                                                lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "PIXEL_SIZE");
                                                if (lVar13 == 0) {
                                                   uVar34 = *(ulong*)( psVar14 + 0xc );
                                                }
 else {
                                                   uVar34 = *(ulong*)( lVar13 + 0x10 );
                                                   uVar24 = -uVar34;
                                                   if (0 < (long)uVar34) {
                                                      uVar24 = uVar34;
                                                   }

                                                   if ((long)uVar24 < 0x8000) {
                                                      uVar24 = ( ulong )(ushort) - (short)uVar34;
                                                      if (0 < (short)uVar34) {
                                                         uVar24 = uVar34 & 0xffffffff;
                                                      }

                                                      uVar34 = ( ulong )(( uint )(uVar24 << 6) & 0x3fffc0);
                                                      *(ulong*)( psVar14 + 0xc ) = uVar34;
                                                   }
 else {
                                                      psVar14[0xc] = -0x40;
                                                      psVar14[0xd] = 0x1f;
                                                      psVar14[0xe] = 0;
                                                      psVar14[0xf] = 0;
                                                      uVar34 = 0x1fffc0;
                                                   }

                                                }

                                                lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "RESOLUTION_X");
                                                sVar8 = 0;
                                                if (lVar13 != 0) {
                                                   lVar13 = *(long*)( lVar13 + 0x10 );
                                                   sVar38 = (short)lVar13;
                                                   lVar36 = -lVar13;
                                                   if (0 < lVar13) {
                                                      lVar36 = lVar13;
                                                   }

                                                   if (sVar38 < 1) {
                                                      sVar38 = -sVar38;
                                                   }

                                                   sVar8 = 0x7fff;
                                                   if (lVar36 < 0x8000) {
                                                      sVar8 = sVar38;
                                                   }

                                                }

                                                lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "RESOLUTION_Y");
                                                if (lVar13 == 0) {
                                                   if (uVar34 == 0) {
                                                      uVar34 = *(ulong*)( psVar14 + 4 );
                                                      *(ulong*)( psVar14 + 0xc ) = uVar34;
                                                   }

                                                   LAB_00101ec9:*(ulong*)( psVar14 + 8 ) = uVar34;
                                                }
 else {
                                                   uVar24 = *(ulong*)( lVar13 + 0x10 );
                                                   uVar30 = -uVar24;
                                                   if (0 < (long)uVar24) {
                                                      uVar30 = uVar24;
                                                   }

                                                   if ((long)uVar30 < 0x8000) {
                                                      uVar30 = ( ulong )(ushort) - (short)uVar24;
                                                      if (0 < (short)uVar24) {
                                                         uVar30 = uVar24 & 0xffffffff;
                                                      }

                                                      sVar38 = (short)uVar30;
                                                      if (uVar34 == 0) {
                                                         uVar34 = *(ulong*)( psVar14 + 4 );
                                                         *(ulong*)( psVar14 + 0xc ) = uVar34;
                                                         if (sVar38 != 0) {
                                                            uVar30 = uVar30 & 0xffff;
                                                            goto LAB_00101cc7;
                                                         }

                                                         goto LAB_00101ec9;
                                                      }

                                                      bVar39 = sVar38 != 0;
                                                   }
 else if (uVar34 == 0) {
                                                      uVar34 = *(ulong*)( psVar14 + 4 );
                                                      uVar30 = 0x7fff;
                                                      sVar38 = 0x7fff;
                                                      *(ulong*)( psVar14 + 0xc ) = uVar34;
                                                      LAB_00101cc7:uVar34 = FT_MulDiv(uVar34, uVar30, 0x48);
                                                      *(ulong*)( psVar14 + 0xc ) = uVar34;
                                                      bVar39 = true;
                                                   }
 else {
                                                      bVar39 = true;
                                                      sVar38 = 0x7fff;
                                                   }

                                                   if (( sVar8 == 0 ) || ( !bVar39 )) {
                                                      uVar31 = *(undefined4*)( param_2 + 0x3f );
                                                      uVar22 = param_2[0x40];
                                                      goto LAB_00101ec9;
                                                   }

                                                   uVar20 = FT_MulDiv(uVar34, (long)sVar8, (long)sVar38);
                                                   uVar31 = *(undefined4*)( param_2 + 0x3f );
                                                   uVar22 = param_2[0x40];
                                                   *(undefined8*)( psVar14 + 8 ) = uVar20;
                                                }

                                                lVar13 = pcf_find_property_isra_0(uVar31, uVar22, "CHARSET_REGISTRY");
                                                lVar36 = pcf_find_property_isra_0(uVar31, uVar22, "CHARSET_ENCODING");
                                                if (( ( ( lVar13 != 0 ) && ( *(char*)( lVar13 + 8 ) != '\0' ) ) && ( lVar36 != 0 ) ) && ( *(char*)( lVar36 + 8 ) != '\0' )) {
                                                   uVar22 = ft_mem_strdup(uVar23, *(undefined8*)( lVar36 + 0x10 ), &local_98);
                                                   param_2[0x2a] = uVar22;
                                                   if (local_98 != 0) break;
                                                   uVar23 = ft_mem_strdup(uVar23, *(undefined8*)( lVar13 + 0x10 ), &local_98);
                                                   param_2[0x2b] = uVar23;
                                                }

                                                iVar10 = local_98;
                                                if (local_98 == 0) goto LAB_00100afa;
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

               break;
            }

            lVar13 = lVar13 + 1;
            plVar16 = plVar16 + 4;
         }
 while ( param_2[0x2d] != lVar13 );
      }

   }

   LAB_00100af5:iVar10 = 3;
   LAB_00100afa:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 PCF_Face_Init(undefined8 param_1, long param_2, int param_3) {
   byte *pbVar1;
   char *__s1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_48;
   uint local_40;
   ushort local_3c;
   ushort local_3a;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = pcf_load_font(param_1, param_2, (long)param_3);
   if (iVar2 != 0) {
      if (param_2 == 0) {
         lVar4 = 0xf8;
         iVar2 = FT_Stream_OpenGzip(0xf8, param_1);
         if ((char)iVar2 != '\a') goto LAB_00102227;
      }
 else {
         lVar4 = param_2 + 0xf8;
         PCF_Face_Done_part_0(param_2);
         iVar2 = FT_Stream_OpenGzip(lVar4, param_1);
         if ((char)iVar2 != '\a') {
            LAB_00102227:if (( iVar2 == 0 ) || ( ( iVar2 = FT_Stream_OpenLZW(lVar4, param_1) ),(char)iVar2 != '\a' && ( iVar2 == 0 ) )) {
               *(undefined8*)( param_2 + 0x148 ) = param_1;
               *(long*)( param_2 + 0xc0 ) = lVar4;
               iVar2 = pcf_load_font(lVar4, param_2, (long)param_3);
               if (iVar2 == 0) {
                  if (param_3 < 0) goto LAB_00102318;
                  if (( param_3 != 0 ) && ( (short)param_3 != 0 )) goto LAB_001023c2;
                  goto LAB_00102279;
               }

            }
 else if (param_2 == 0) goto LAB_001023dd;
         }

         PCF_Face_Done_part_0(param_2);
      }

      LAB_001023dd:uVar3 = 2;
      goto LAB_001022cb;
   }

   if (param_3 < 0) {
      LAB_00102318:uVar3 = 0;
      goto LAB_001022cb;
   }

   if (( param_3 != 0 ) && ( (short)param_3 != 0 )) {
      if (param_2 != 0) {
         LAB_001023c2:PCF_Face_Done_part_0(param_2);
      }

      uVar3 = 6;
      goto LAB_001022cb;
   }

   LAB_00102279:pbVar1 = *(byte**)( param_2 + 0x158 );
   __s1 = *(char**)( param_2 + 0x150 );
   if (( ( ( pbVar1 == (byte*)0x0 ) || ( __s1 == (char*)0x0 ) ) || ( ( *pbVar1 & 0xdf ) != 0x49 ) ) || ( ( ( pbVar1[1] & 0xdf ) != 0x53 || ( ( pbVar1[2] & 0xdf ) != 0x4f ) ) )) {
      LAB_001022a0:local_40 = 0;
      local_3c = 0;
      local_3a = 0;
   }
 else {
      pbVar1 = pbVar1 + 3;
      iVar2 = strcmp((char*)pbVar1, "10646");
      if (( iVar2 == 0 ) || ( ( ( iVar2 = strcmp((char*)pbVar1, "8859") ),iVar2 == 0 && ( *__s1 == '1' ) ) && ( __s1[1] == '\0' ) )) {
         local_40 = 0x756e6963;
         local_3c = 3;
         local_3a = 1;
      }
 else {
         iVar2 = strcmp((char*)pbVar1, "646.1991");
         if (iVar2 != 0) goto LAB_001022a0;
         iVar2 = strcmp(__s1, "IRV");
         local_40 = -(uint)(iVar2 == 0) & 0x756e6963;
         local_3c = -(ushort)(iVar2 == 0) & 3;
         local_3a = ( ushort )(iVar2 == 0);
      }

   }

   local_48 = param_2;
   uVar3 = FT_CMap_New(pcf_cmap_class, 0, &local_48, 0);
   LAB_001022cb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}


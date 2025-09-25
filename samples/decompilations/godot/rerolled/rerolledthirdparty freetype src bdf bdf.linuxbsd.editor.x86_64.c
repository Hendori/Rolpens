long bdf_atol_(byte *param_1) {
   byte bVar1;
   ulong uVar2;
   long lVar3;
   bool bVar4;
   if (param_1 == (byte*)0x0) {
      return 0;
   }

   bVar1 = *param_1;
   lVar3 = 0;
   if (bVar1 != 0) {
      bVar4 = bVar1 == 0x2d;
      if (bVar4) {
         bVar1 = param_1[1];
         param_1 = param_1 + 1;
      }

      uVar2 = (ulong)(char)bVar1;
      lVar3 = 0;
      if (( (byte)ddigits[( uint )(( uVar2 & 0xffffffff ) >> 3) & 0x1f] >> ( (int)(char)bVar1 & 7U ) & 1 ) != 0) {
         do {
            param_1 = param_1 + 1;
            lVar3 = (ulong)(byte)a2i[uVar2] + lVar3 * 10;
            bVar1 = *param_1;
            uVar2 = (ulong)(char)bVar1;
            if (( (byte)ddigits[bVar1 >> 3] >> ( (int)(char)bVar1 & 7U ) & 1 ) == 0) goto LAB_00100089;
         }
 while ( lVar3 < 0xccccccccccccccb );
         lVar3 = 0x7fffffffffffffff;
      }

      LAB_00100089:if (bVar4) {
         lVar3 = -lVar3;
      }

   }

   return lVar3;
}
int bdf_atos_(byte *param_1) {
   byte bVar1;
   int iVar2;
   ulong uVar3;
   bool bVar4;
   if (( param_1 != (byte*)0x0 ) && ( bVar1 = bVar1 != 0 )) {
      bVar4 = bVar1 == 0x2d;
      if (bVar4) {
         bVar1 = param_1[1];
         param_1 = param_1 + 1;
      }

      uVar3 = (ulong)(char)bVar1;
      iVar2 = 0;
      if (( (byte)ddigits[( uint )(( uVar3 & 0xffffffff ) >> 3) & 0x1f] >> ( (int)(char)bVar1 & 7U ) & 1 ) != 0) {
         while (true) {
            param_1 = param_1 + 1;
            iVar2 = (uint)(byte)a2i[uVar3] + iVar2 * 10;
            bVar1 = *param_1;
            uVar3 = (ulong)(char)bVar1;
            if (( (byte)ddigits[bVar1 >> 3] >> ( (int)(char)bVar1 & 7U ) & 1 ) == 0) break;
            if (0xcca < (short)iVar2) {
               iVar2 = 0x7fff;
               if (bVar4) {
                  iVar2 = -0x7fff;
               }

               return iVar2;
            }

         }
;
      }

      if (bVar4) {
         iVar2 = -iVar2;
      }

      return iVar2;
   }

   return 0;
}
ulong by_encoding(long param_1, long param_2) {
   ulong uVar1;
   uVar1 = 0xffffffff;
   if (*(ulong*)( param_2 + 8 ) <= *(ulong*)( param_1 + 8 )) {
      uVar1 = ( ulong )(*(ulong*)( param_2 + 8 ) < *(ulong*)( param_1 + 8 ));
   }

   return uVar1;
}
undefined8 bdf_parse_end_(void) {
   return 0;
}
undefined8 bdf_cmap_init(long *param_1) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( *param_1 + 0x108 ) + 0x58 );
   param_1[4] = *(long*)( *param_1 + 0x110 );
   param_1[3] = lVar1;
   return 0;
}
void bdf_cmap_done(long param_1) {
   *(undefined8*)( param_1 + 0x20 ) = 0;
   *(undefined8*)( param_1 + 0x18 ) = 0;
   return;
}
short bdf_cmap_char_index(long param_1, uint param_2) {
   ulong uVar1;
   ulong uVar2;
   ulong *puVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   uVar5 = *(ulong*)( param_1 + 0x18 );
   uVar1 = uVar5 >> 1;
   if (uVar5 != 0) {
      uVar4 = (ulong)param_2;
      uVar6 = 0;
      do {
         while (true) {
            puVar3 = (ulong*)( uVar1 * 0x10 + *(long*)( param_1 + 0x20 ) );
            uVar2 = *puVar3;
            if (uVar2 == uVar4) {
               return (short)puVar3[1] + 1;
            }

            if (uVar2 <= uVar4) break;
            uVar2 = ( uVar1 + uVar4 ) - uVar2;
            uVar5 = uVar1;
            if (uVar2 < uVar1) goto LAB_0010024f;
            LAB_0010027e:uVar1 = uVar6 + uVar5 >> 1;
            if (uVar5 <= uVar6) {
               return 0;
            }

         }
;
         uVar6 = uVar1 + 1;
         uVar2 = ( uVar1 + uVar4 ) - uVar2;
         if (uVar5 <= uVar2) goto LAB_0010027e;
         LAB_0010024f:uVar1 = uVar2;
         if (uVar1 < uVar6) goto LAB_0010027e;
      }
 while ( uVar6 < uVar5 );
   }

   return 0;
}
short bdf_cmap_char_next(long param_1, uint *param_2) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong *puVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   uVar1 = *(ulong*)( param_1 + 0x18 );
   uVar7 = ( ulong )(*param_2 + 1);
   uVar2 = uVar1 >> 1;
   if (uVar1 != 0) {
      uVar6 = 0;
      uVar5 = uVar1;
      do {
         while (true) {
            puVar4 = (ulong*)( uVar2 * 0x10 + *(long*)( param_1 + 0x20 ) );
            uVar3 = *puVar4;
            if (uVar7 == uVar3) {
               uVar1 = puVar4[1];
               *param_2 = *param_2 + 1;
               return (short)uVar1 + 1;
            }

            if (uVar7 < uVar3) break;
            uVar6 = uVar2 + 1;
            uVar3 = ( uVar2 + uVar7 ) - uVar3;
            if (uVar3 < uVar5) goto LAB_001002df;
            LAB_0010030b:uVar2 = uVar6 + uVar5 >> 1;
            if (uVar5 <= uVar6) goto LAB_00100317;
         }
;
         uVar3 = ( uVar2 + uVar7 ) - uVar3;
         uVar5 = uVar2;
         if (uVar2 <= uVar3) goto LAB_0010030b;
         LAB_001002df:uVar2 = uVar3;
         if (uVar2 < uVar6) goto LAB_0010030b;
      }
 while ( uVar6 < uVar5 );
      LAB_00100317:if (uVar6 < uVar1) {
         puVar4 = (ulong*)( *(long*)( param_1 + 0x20 ) + uVar6 * 0x10 );
         uVar1 = *puVar4;
         uVar2 = puVar4[1];
         uVar8 = (uint)uVar1;
         if (0xffffffff < uVar1) {
            uVar8 = 0;
         }

         *param_2 = uVar8;
         return (short)uVar2 + 1;
      }

   }

   *param_2 = 0;
   return 0;
}
undefined8 bdf_get_charset_id(long param_1, undefined8 *param_2, undefined8 *param_3) {
   *param_2 = *(undefined8*)( param_1 + 0xf8 );
   *param_3 = *(undefined8*)( param_1 + 0x100 );
   return 0;
}
undefined8 BDF_Size_Select(long *param_1) {
   long lVar1;
   lVar1 = *(long*)( *param_1 + 0x108 );
   FT_Select_Metrics();
   param_1[6] = *(long*)( lVar1 + 0x40 ) << 6;
   param_1[7] = *(long*)( lVar1 + 0x48 ) * -0x40;
   param_1[9] = ( ulong ) * (ushort*)( lVar1 + 8 ) << 6;
   return 0;
}
undefined8 BDF_Glyph_Load(long param_1, long *param_2, uint param_3) {
   long lVar1;
   ushort uVar2;
   ushort uVar3;
   ushort uVar4;
   short sVar5;
   short sVar6;
   ushort uVar7;
   uint uVar8;
   long lVar9;
   undefined8 uVar10;
   uVar10 = 6;
   lVar9 = *param_2;
   if (param_3 < *(uint*)( lVar9 + 0x20 )) {
      uVar8 = param_3 - 1;
      if (param_3 == 0) {
         uVar8 = *(uint*)( lVar9 + 0x118 );
      }

      uVar2 = *(ushort*)( *(long*)( lVar9 + 0x108 ) + 0xb0 );
      lVar1 = *(long*)( *(long*)( lVar9 + 0x108 ) + 0x60 ) + (ulong)uVar8 * 0x38;
      uVar3 = *(ushort*)( lVar1 + 0x14 );
      uVar4 = *(ushort*)( lVar1 + 0x12 );
      sVar5 = *(short*)( lVar1 + 0x18 );
      sVar6 = *(short*)( lVar1 + 0x1c );
      uVar10 = *(undefined8*)( lVar1 + 0x20 );
      uVar7 = *(ushort*)( lVar1 + 0x16 );
      *(int*)( param_1 + 0xa0 ) = (int)*(undefined8*)( lVar1 + 0x28 );
      *(uint*)( param_1 + 0x98 ) = (uint)uVar7;
      *(uint*)( param_1 + 0x9c ) = (uint)uVar3;
      ft_glyphslot_set_bitmap(param_1, uVar10);
      if (uVar2 == 4) {
         *(undefined1*)( param_1 + 0xb2 ) = 4;
      }
 else if (uVar2 < 5) {
         if (uVar2 == 1) {
            *(undefined1*)( param_1 + 0xb2 ) = 1;
         }
 else if (uVar2 == 2) {
            *(undefined1*)( param_1 + 0xb2 ) = 3;
         }

      }
 else if (uVar2 == 8) {
         *(undefined1*)( param_1 + 0xb2 ) = 2;
         *(undefined2*)( param_1 + 0xb0 ) = 0x100;
      }

      *(int*)( param_1 + 0xc4 ) = (int)sVar6;
      *(int*)( param_1 + 0xc0 ) = (int)sVar5;
      *(long*)( param_1 + 0x48 ) = (long)( (int)sVar6 << 6 );
      *(undefined4*)( param_1 + 0x90 ) = 0x62697473;
      *(ulong*)( param_1 + 0x50 ) = (ulong)uVar4 << 6;
      *(ulong*)( param_1 + 0x30 ) = ( ulong )(uint)(*(int*)( param_1 + 0x9c ) << 6);
      *(long*)( param_1 + 0x40 ) = (long)( (int)sVar5 << 6 );
      *(ulong*)( param_1 + 0x38 ) = ( ulong )(uint)(*(int*)( param_1 + 0x98 ) << 6);
      ft_synthesize_vertical_metrics(param_1 + 0x30, ( uint ) * (ushort*)( *(long*)( lVar9 + 0x108 ) + 10 ) << 6);
      uVar10 = 0;
   }

   return uVar10;
}
int bdf_list_ensure_(undefined8 *param_1, ulong param_2) {
   ulong uVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   uVar1 = param_1[1];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   iVar2 = 0;
   if (uVar1 < param_2) {
      uVar4 = uVar1 + 5 + ( uVar1 >> 1 );
      iVar2 = 0x40;
      if (uVar1 != 0xfffffff) {
         if (( uVar4 < uVar1 ) || ( 0xfffffff < uVar4 )) {
            uVar4 = 0xfffffff;
         }

         uVar3 = ft_mem_qrealloc(param_1[3], 8, uVar1, uVar4, *param_1, &local_24);
         *param_1 = uVar3;
         iVar2 = local_24;
         if (local_24 == 0) {
            param_1[1] = uVar4;
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int bdf_add_comment_(long param_1, void *param_2, size_t param_3) {
   long lVar1;
   void *pvVar2;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   lVar1 = ft_mem_qrealloc(*(undefined8*)( param_1 + 0xb8 ), 1, *(long*)( param_1 + 0xa0 ), *(long*)( param_1 + 0xa0 ) + param_3 + 1, *(undefined8*)( param_1 + 0x98 ), &local_34);
   *(long*)( param_1 + 0x98 ) = lVar1;
   if (local_34 == 0) {
      pvVar2 = memcpy((void*)( lVar1 + *(long*)( param_1 + 0xa0 ) ), param_2, param_3);
      *(undefined1*)( (long)pvVar2 + param_3 ) = 0;
      *(long*)( param_1 + 0xa0 ) = *(long*)( param_1 + 0xa0 ) + param_3 + 1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_34;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void bdf_driver_requester(void) {
   ft_service_list_lookup(bdf_services);
   return;
}
ulong bdf_atoul_(byte *param_1) {
   byte bVar1;
   ulong uVar2;
   if (param_1 == (byte*)0x0) {
      return 0;
   }

   bVar1 = *param_1;
   uVar2 = 0;
   if (( bVar1 != 0 ) && ( ( (byte)ddigits[bVar1 >> 3] >> ( (int)(char)bVar1 & 7U ) & 1 ) != 0 )) {
      while (true) {
         param_1 = param_1 + 1;
         uVar2 = (ulong)(byte)a2i[(char)bVar1] + uVar2 * 10;
         bVar1 = *param_1;
         if (( (byte)ddigits[bVar1 >> 3] >> ( (int)(char)bVar1 & 7U ) & 1 ) == 0) break;
         if (0x1999999999999997 < uVar2) {
            return 0xffffffffffffffff;
         }

      }
;
   }

   return uVar2;
}
int bdf_atous_(byte *param_1) {
   byte bVar1;
   int iVar2;
   if (param_1 == (byte*)0x0) {
      return 0;
   }

   bVar1 = *param_1;
   iVar2 = 0;
   if (bVar1 != 0) {
      if (( (byte)ddigits[bVar1 >> 3] >> ( (int)(char)bVar1 & 7U ) & 1 ) == 0) {
         return 0;
      }

      do {
         param_1 = param_1 + 1;
         iVar2 = (uint)(byte)a2i[(char)bVar1] + iVar2 * 10;
         bVar1 = *param_1;
         if (( (byte)ddigits[bVar1 >> 3] >> ( (int)(char)bVar1 & 7U ) & 1 ) == 0) {
            return iVar2;
         }

      }
 while ( (ushort)iVar2 < 0x1998 );
      iVar2 = -1;
   }

   return iVar2;
}
void bdf_free_font_part_0(undefined8 *param_1) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   long lVar6;
   uVar2 = param_1[0x17];
   ft_mem_free(uVar2, *param_1);
   *param_1 = 0;
   if (param_1[0x15] != 0) {
      ft_hash_str_free(param_1[0x15], uVar2);
      ft_mem_free(uVar2, param_1[0x15]);
      param_1[0x15] = 0;
   }

   ft_mem_free(uVar2, param_1[0x13]);
   param_1[0x13] = 0;
   lVar3 = param_1[0x12];
   if (param_1[0x10] != 0) {
      uVar4 = 0;
      do {
         while (true) {
            lVar6 = uVar4 * 0x18;
            lVar1 = lVar3 + lVar6;
            if (*(int*)( lVar1 + 8 ) != 1) break;
            uVar4 = uVar4 + 1;
            ft_mem_free(uVar2, *(undefined8*)( lVar1 + 0x10 ));
            lVar3 = param_1[0x12];
            *(undefined8*)( lVar3 + 0x10 + lVar6 ) = 0;
            if ((ulong)param_1[0x10] <= uVar4) goto LAB_00100900;
         }
;
         uVar4 = uVar4 + 1;
      }
 while ( uVar4 < (ulong)param_1[0x10] );
   }

   LAB_00100900:uVar4 = 0;
   ft_mem_free(uVar2);
   param_1[0x12] = 0;
   puVar5 = (undefined8*)param_1[0xc];
   if (param_1[0xb] != 0) {
      do {
         uVar4 = uVar4 + 1;
         ft_mem_free(uVar2, *puVar5);
         *puVar5 = 0;
         ft_mem_free(uVar2, puVar5[4]);
         puVar5[4] = 0;
         puVar5 = puVar5 + 7;
      }
 while ( uVar4 < (ulong)param_1[0xb] );
   }

   uVar4 = 0;
   puVar5 = (undefined8*)param_1[0xf];
   if (param_1[0xe] != 0) {
      do {
         uVar4 = uVar4 + 1;
         ft_mem_free(uVar2, *puVar5);
         *puVar5 = 0;
         ft_mem_free(uVar2, puVar5[4]);
         puVar5[4] = 0;
         puVar5 = puVar5 + 7;
      }
 while ( uVar4 < (ulong)param_1[0xe] );
   }

   uVar4 = 0;
   ft_mem_free(uVar2, param_1[0xc]);
   param_1[0xc] = 0;
   ft_mem_free(uVar2, param_1[0xf]);
   param_1[0xf] = 0;
   ft_hash_str_free(param_1 + 0x1a, uVar2);
   puVar5 = (undefined8*)param_1[0x18];
   if (param_1[0x19] != 0) {
      do {
         uVar4 = uVar4 + 1;
         ft_mem_free(uVar2, *puVar5);
         *puVar5 = 0;
         puVar5 = puVar5 + 3;
      }
 while ( uVar4 < (ulong)param_1[0x19] );
      puVar5 = (undefined8*)param_1[0x18];
   }

   ft_mem_free(uVar2, puVar5);
   param_1[0x18] = 0;
   return;
}
void BDF_Face_Done(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0xb8 );
      if (*(long*)( param_1 + 0x108 ) != 0) {
         bdf_free_font_part_0();
      }

      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x110 ));
      *(undefined8*)( param_1 + 0x110 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0xf8 ));
      *(undefined8*)( param_1 + 0xf8 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x100 ));
      *(undefined8*)( param_1 + 0x100 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x28 ));
      *(undefined8*)( param_1 + 0x28 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x30 ));
      *(undefined8*)( param_1 + 0x30 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x40 ));
      *(undefined8*)( param_1 + 0x40 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x108 ));
      *(undefined8*)( param_1 + 0x108 ) = 0;
      return;
   }

   return;
}
undefined8 bdf_list_split__part_0(long *param_1, byte *param_2, byte *param_3, long param_4) {
   byte bVar1;
   bool bVar2;
   undefined8 uVar3;
   long lVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   byte *pbVar9;
   byte *pbVar10;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   bVar1 = *param_2;
   uVar5 = (uint)bVar1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = 6;
   if (bVar1 != 0) {
      local_68 = (undefined1[16])0x0;
      uVar8 = (uint)param_2[1];
      local_58 = (undefined1[16])0x0;
      if (bVar1 == 0x2b) goto LAB_00100bc1;
      while (local_68[uVar5 >> 3] = local_68[uVar5 >> 3] | ( byte )(1 << ( (byte)uVar5 & 7 )),uVar5 = uVar8,pbVar10 = param_2,(char)uVar8 != '\0') {
         while (true) {
            param_2 = pbVar10 + 1;
            uVar8 = (uint)pbVar10[2];
            if ((char)uVar5 != '+') break;
            LAB_00100bc1:if ((char)uVar8 == '\0') {
               bVar2 = true;
               goto LAB_00100bcf;
            }

            local_68._0_6_ = local_68._0_6_ | 0x80000000000;
            uVar5 = uVar8;
            pbVar10 = param_2;
         }
;
      }
;
      bVar2 = false;
      LAB_00100bcf:uVar7 = param_1[2];
      uVar6 = 0;
      pbVar10 = param_3;
      if (param_3 < param_3 + param_4) {
         do {
            bVar1 = *pbVar10;
            pbVar9 = pbVar10;
            if (bVar1 == 0) break;
            do {
               if (( (uint)(int)(char)local_68[bVar1 >> 3] >> ( bVar1 & 7 ) & 1 ) != 0) break;
               bVar1 = pbVar9[1];
               pbVar9 = pbVar9 + 1;
            }
 while ( bVar1 != 0 );
            uVar6 = uVar7;
            if (param_1[1] == uVar7) {
               uVar3 = bdf_list_ensure_(param_1, uVar7 + 1);
               if ((int)uVar3 != 0) goto LAB_00100cbd;
               uVar6 = param_1[2];
            }

            uVar7 = uVar6 + 1;
            if (pbVar9 <= pbVar10) {
               pbVar10 = &empty;
            }

            param_1[2] = uVar7;
            *(byte**)( *param_1 + uVar6 * 8 ) = pbVar10;
            if (bVar2) {
               bVar1 = *pbVar9;
               pbVar10 = pbVar9;
               if (bVar1 != 0) {
                  do {
                     if (( (uint)(int)(char)local_68[bVar1 >> 3] >> ( bVar1 & 7 ) & 1 ) == 0) {
                        uVar7 = param_1[2];
                        goto joined_r0x00100d30;
                     }

                     *pbVar10 = 0;
                     bVar1 = pbVar10[1];
                     pbVar10 = pbVar10 + 1;
                  }
 while ( bVar1 != 0 );
                  goto LAB_00100c64;
               }

               uVar6 = 0;
            }
 else if (*pbVar9 == 0) {
               uVar6 = 0;
            }
 else {
               *pbVar9 = 0;
               pbVar10 = pbVar9 + 1;
               LAB_00100c64:uVar7 = param_1[2];
               joined_r0x00100d30:if (pbVar9 < pbVar10) {
                  uVar6 = ( ulong )(*pbVar10 == 0);
                  pbVar9 = pbVar10;
               }
 else {
                  uVar6 = 0;
                  pbVar9 = pbVar10;
               }

            }

            pbVar10 = pbVar9;
         }
 while ( pbVar9 < param_3 + param_4 );
         if ((ulong)param_1[1] <= uVar6 + uVar7) {
            uVar3 = bdf_list_ensure_(param_1, uVar6 + uVar7 + 1);
            if ((int)uVar3 != 0) goto LAB_00100cbd;
            uVar7 = param_1[2];
         }

         lVar4 = *param_1;
         if (uVar6 != 0) {
            param_1[2] = uVar7 + 1;
            *(undefined1**)( lVar4 + uVar7 * 8 ) = &empty;
            uVar7 = uVar7 + 1;
         }

      }
 else if (uVar7 < (ulong)param_1[1]) {
         lVar4 = *param_1;
      }
 else {
         uVar3 = bdf_list_ensure_(param_1, uVar7 + 1);
         if ((int)uVar3 != 0) goto LAB_00100cbd;
         lVar4 = *param_1;
         uVar7 = param_1[2];
      }

      *(undefined8*)( lVar4 + uVar7 * 8 ) = 0;
      uVar3 = 0;
   }

   LAB_00100cbd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
char *bdf_list_join__constprop_0(long *param_1, long *param_2) {
   char *pcVar1;
   long lVar2;
   char *pcVar4;
   char cVar5;
   ulong uVar6;
   long lVar7;
   long lVar3;
   *param_2 = 0;
   if (param_1[2] == 0) {
      return (char*)0x0;
   }

   uVar6 = 0;
   pcVar1 = *(char**)*param_1;
   pcVar4 = pcVar1;
   lVar7 = 0;
   while (true) {
      cVar5 = *pcVar4;
      lVar2 = lVar7;
      if (cVar5 != '\0') {
         lVar3 = lVar7;
         do {
            lVar2 = lVar3 + 1;
            pcVar1[lVar3] = cVar5;
            cVar5 = pcVar4[lVar2 - lVar7];
            lVar3 = lVar2;
         }
 while ( cVar5 != '\0' );
      }

      uVar6 = uVar6 + 1;
      if ((ulong)param_1[2] <= uVar6) break;
      pcVar1[lVar2] = ' ';
      lVar2 = lVar2 + 1;
      if ((ulong)param_1[2] <= uVar6) break;
      pcVar4 = *(char**)( *param_1 + uVar6 * 8 );
      lVar7 = lVar2;
   }
;
   if (pcVar1 != "") {
      pcVar1[lVar2] = '\0';
   }

   *param_2 = lVar2;
   return pcVar1;
}
void bdf_list_shift__constprop_0(undefined8 *param_1) {
   long lVar1;
   lVar1 = param_1[2];
   if (lVar1 == 0) {
      return;
   }

   if (lVar1 != 1) {
      memmove((void*)*param_1, (void*)( (long)*param_1 + 8 ), ( lVar1 + -1 ) * 8);
      param_1[2] = lVar1 + -1;
      return;
   }

   param_1[2] = 0;
   return;
}
ulong bdf_add_property__isra_0(long param_1, char *param_2, char *param_3) {
   undefined8 *puVar1;
   undefined *puVar2;
   undefined *puVar3;
   int iVar4;
   long *plVar5;
   ulong *puVar6;
   undefined **ppuVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   long lVar12;
   size_t sVar13;
   void *__dest;
   byte bVar14;
   long in_FS_OFFSET;
   uint local_48;
   uint local_44;
   long local_40;
   uVar9 = *(undefined8*)( param_1 + 0xb8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   plVar5 = (long*)ft_hash_str_lookup(param_2, *(undefined8*)( param_1 + 0xa8 ));
   if (plVar5 == (long*)0x0) {
      lVar11 = param_1 + 0xd0;
      puVar6 = (ulong*)ft_hash_str_lookup(param_2, lVar11);
      if (puVar6 == (ulong*)0x0) {
         local_44 = 0;
         uVar8 = *(undefined8*)( param_1 + 0xb8 );
         lVar12 = ft_hash_str_lookup(param_2, lVar11);
         if (lVar12 == 0) {
            lVar12 = ft_mem_qrealloc(uVar8, 0x18, *(long*)( param_1 + 200 ), *(long*)( param_1 + 200 ) + 1, *(undefined8*)( param_1 + 0xc0 ), &local_44);
            *(long*)( param_1 + 0xc0 ) = lVar12;
            uVar10 = (ulong)local_44;
            if (local_44 != 0) goto LAB_00100f4e;
            puVar1 = (undefined8*)( lVar12 + *(long*)( param_1 + 200 ) * 0x18 );
            sVar13 = strlen(param_2);
            __dest = (void*)ft_mem_qalloc(uVar8, sVar13 + 1, &local_44);
            *puVar1 = __dest;
            uVar10 = (ulong)local_44;
            if (local_44 != 0) goto LAB_00100f4e;
            memcpy(__dest, param_2, sVar13 + 1);
            lVar12 = *(long*)( param_1 + 200 );
            puVar1[1] = 1;
            puVar1[2] = 0;
            uVar10 = ft_hash_str_insert(*puVar1, lVar12 + 0x53, lVar11, uVar8);
            local_44 = (uint)uVar10;
            if (local_44 != 0) goto LAB_00100f4e;
            *(long*)( param_1 + 200 ) = *(long*)( param_1 + 200 ) + 1;
            local_48 = 0;
         }
 else {
            uVar10 = (ulong)local_44;
            local_48 = local_44;
            if (local_44 != 0) goto LAB_00100f4e;
         }

         puVar6 = (ulong*)ft_hash_str_lookup(param_2, lVar11);
      }

      lVar12 = *(long*)( param_1 + 0x88 );
      lVar11 = *(long*)( param_1 + 0x90 );
      if (lVar12 == *(long*)( param_1 + 0x80 )) {
         lVar11 = ft_mem_qrealloc(uVar9, 0x18, lVar12, lVar12 + 1, lVar11, &local_48);
         *(long*)( param_1 + 0x90 ) = lVar11;
         uVar10 = (ulong)local_48;
         if (local_48 != 0) goto LAB_00100f4e;
         *(long*)( param_1 + 0x80 ) = *(long*)( param_1 + 0x80 ) + 1;
         lVar12 = *(long*)( param_1 + 0x88 );
      }

      uVar10 = *puVar6;
      ppuVar7 = &bdf_properties_ + uVar10 * 3;
      if (0x52 < uVar10) {
         ppuVar7 = (undefined**)( *(long*)( param_1 + 0xc0 ) + -0x7c8 + uVar10 * 0x18 );
      }

      puVar2 = ppuVar7[1];
      puVar1 = (undefined8*)( lVar11 + lVar12 * 0x18 );
      puVar3 = *ppuVar7;
      puVar1[1] = puVar2;
      *puVar1 = puVar3;
      iVar4 = (int)puVar2;
      if (iVar4 == 2) {
         uVar8 = bdf_atol_(param_3);
         puVar1[2] = uVar8;
      }
 else if (iVar4 == 3) {
         uVar8 = bdf_atoul_(param_3);
         puVar1[2] = uVar8;
      }
 else if (( ( iVar4 == 1 ) && ( puVar1[2] = 0 ),param_3 != (char*)0x0 )) {
         uVar8 = ft_mem_strdup(uVar9, param_3, &local_48);
         puVar1[2] = uVar8;
         uVar10 = (ulong)local_48;
         if (local_48 != 0) goto LAB_00100f4e;
         lVar12 = *(long*)( param_1 + 0x88 );
      }

      iVar4 = strncmp(param_2, "COMMENT", 7);
      if (iVar4 != 0) goto LAB_00101280;
      bVar14 = param_2[7];
      if (( bVar14 & 0xdf ) != 0) {
         if ((char)bVar14 < '\v') {
            if ((char)bVar14 < '\t') {
               LAB_00101280:uVar10 = ft_hash_str_insert(*puVar1, lVar12, *(undefined8*)( param_1 + 0xa8 ), uVar9);
               local_48 = (uint)uVar10;
               if (local_48 != 0) goto LAB_00100f4e;
               lVar12 = *(long*)( param_1 + 0x88 );
            }

         }
 else if (bVar14 != 0xd) goto LAB_00101280;
      }

      *(long*)( param_1 + 0x88 ) = lVar12 + 1;
      iVar4 = strncmp(param_2, "DEFAULT_CHAR", 0xc);
      if (( ( iVar4 == 0 ) && ( (byte)param_2[0xc] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_2[0xc] & 0x3f ) & 1 ) == 0 )) {
         *(undefined8*)( param_1 + 0x38 ) = puVar1[2];
         uVar10 = (ulong)local_48;
         goto LAB_00100f4e;
      }

      iVar4 = strncmp(param_2, "FONT_ASCENT", 0xb);
      if (( ( iVar4 == 0 ) && ( (byte)param_2[0xb] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_2[0xb] & 0x3f ) & 1 ) == 0 )) {
         *(undefined8*)( param_1 + 0x40 ) = puVar1[2];
         uVar10 = (ulong)local_48;
         goto LAB_00100f4e;
      }

      iVar4 = strncmp(param_2, "FONT_DESCENT", 0xc);
      if (( ( iVar4 == 0 ) && ( (byte)param_2[0xc] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_2[0xc] & 0x3f ) & 1 ) == 0 )) {
         *(undefined8*)( param_1 + 0x48 ) = puVar1[2];
         uVar10 = (ulong)local_48;
         goto LAB_00100f4e;
      }

      iVar4 = strncmp(param_2, "SPACING", 7);
      if (( ( iVar4 == 0 ) && ( (byte)param_2[7] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_2[7] & 0x3f ) & 1 ) == 0 )) {
         if ((char*)puVar1[2] == (char*)0x0) {
            uVar10 = 3;
            goto LAB_00100f4e;
         }

         bVar14 = *(char*)puVar1[2] + 0xbd;
         if (bVar14 < 0x2e) {
            uVar10 = 1L << ( bVar14 & 0x3f );
            if (( uVar10 & 0x100000001 ) != 0) {
               *(undefined4*)( param_1 + 0x30 ) = 0x20;
               uVar10 = (ulong)local_48;
               goto LAB_00100f4e;
            }

            if (( uVar10 & 0x40000000400 ) == 0) {
               if (( uVar10 & 0x200000002000 ) != 0) {
                  *(undefined4*)( param_1 + 0x30 ) = 8;
                  uVar10 = (ulong)local_48;
                  goto LAB_00100f4e;
               }

            }
 else {
               *(undefined4*)( param_1 + 0x30 ) = 0x10;
            }

         }

      }

   }
 else {
      lVar11 = *(long*)( param_1 + 0x90 ) + *plVar5 * 0x18;
      iVar4 = *(int*)( lVar11 + 8 );
      if (iVar4 == 2) {
         uVar9 = bdf_atol_(param_3);
         *(undefined8*)( lVar11 + 0x10 ) = uVar9;
         uVar10 = (ulong)local_48;
         goto LAB_00100f4e;
      }

      if (iVar4 == 3) {
         uVar9 = bdf_atoul_(param_3);
         *(undefined8*)( lVar11 + 0x10 ) = uVar9;
         uVar10 = (ulong)local_48;
         goto LAB_00100f4e;
      }

      if (iVar4 == 1) {
         ft_mem_free(uVar9, *(undefined8*)( lVar11 + 0x10 ));
         *(undefined8*)( lVar11 + 0x10 ) = 0;
         if (( param_3 != (char*)0x0 ) && ( *param_3 != '\0' )) {
            uVar9 = ft_mem_strdup(uVar9, param_3, &local_48);
            *(undefined8*)( lVar11 + 0x10 ) = uVar9;
            uVar10 = (ulong)local_48;
            goto LAB_00100f4e;
         }

      }

   }

   uVar10 = (ulong)local_48;
   LAB_00100f4e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 BDF_Size_Request(long *param_1, int *param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *param_1;
   lVar3 = *(long*)( param_2 + 4 );
   lVar2 = *(long*)( lVar1 + 0x108 );
   if (param_2[7] != 0) {
      lVar3 = (long)( (ulong)(uint)param_2[7] * lVar3 + 0x24 ) / 0x48;
   }

   lVar3 = lVar3 + 0x20 >> 6;
   if (*param_2 == 0) {
      if (*(long*)( *(long*)( lVar1 + 0x40 ) + 0x18 ) + 0x20 >> 6 != lVar3) {
         return 0x17;
      }

   }
 else {
      if (*param_2 != 1) {
         return 7;
      }

      if (*(long*)( lVar2 + 0x48 ) + *(long*)( lVar2 + 0x40 ) != lVar3) {
         return 0x17;
      }

   }

   FT_Select_Metrics(lVar1, 0);
   param_1[6] = *(long*)( lVar2 + 0x40 ) << 6;
   param_1[7] = *(long*)( lVar2 + 0x48 ) * -0x40;
   param_1[9] = ( ulong ) * (ushort*)( lVar2 + 8 ) << 6;
   return 0;
}
undefined8 bdf_get_bdf_property(long param_1, char *param_2, undefined4 *param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long *plVar4;
   lVar2 = *(long*)( param_1 + 0x108 );
   if (( ( ( lVar2 != 0 ) && ( *(long*)( lVar2 + 0x80 ) != 0 ) ) && ( param_2 != (char*)0x0 ) ) && ( ( ( *param_2 != '\0' && ( plVar4 = (long*)ft_hash_str_lookup(param_2, *(undefined8*)( lVar2 + 0xa8 )) ),plVar4 != (long*)0x0 ) ) && ( lVar2 = *(long*)( lVar2 + 0x90 ) + *plVar4 * 0x18 ),lVar2 != 0 )) {
      iVar1 = *(int*)( lVar2 + 8 );
      if (iVar1 == 2) {
         uVar3 = *(undefined8*)( lVar2 + 0x10 );
         *param_3 = 2;
         param_3[2] = (int)uVar3;
      }
 else if (iVar1 == 3) {
         uVar3 = *(undefined8*)( lVar2 + 0x10 );
         *param_3 = 3;
         param_3[2] = (int)uVar3;
      }
 else {
         if (iVar1 != 1) {
            return 6;
         }

         uVar3 = *(undefined8*)( lVar2 + 0x10 );
         *param_3 = 1;
         *(undefined8*)( param_3 + 2 ) = uVar3;
      }

      return 0;
   }

   return 6;
}
undefined8 bdf_parse_properties_(byte *param_1, long param_2, undefined8 param_3, undefined8 *param_4, ulong *param_5) {
   long *plVar1;
   byte bVar2;
   ulong uVar3;
   undefined8 *puVar4;
   int iVar5;
   long *plVar6;
   ulong *puVar7;
   undefined **ppuVar8;
   byte *pbVar9;
   byte *pbVar10;
   ulong uVar11;
   undefined8 uVar12;
   byte *pbVar13;
   long in_FS_OFFSET;
   undefined1 local_d0[8];
   undefined1 local_c8[136];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = strncmp((char*)param_1, "ENDPROPERTIES", 0xd);
   if (( ( iVar5 == 0 ) && ( param_1[0xd] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)param_1[0xd] & 0x3f ) & 1 ) == 0 )) {
      uVar11 = param_5[7];
      if (( uVar11 == 0 ) || ( *(long*)( uVar11 + 0x80 ) == 0 )) {
         LAB_0010197f:*(long*)( uVar11 + 0x40 ) = (long)*(short*)( uVar11 + 0x10 );
         __snprintf_chk(local_c8, 0x80, 2, 0x80, &_LC7, (long)*(short*)( uVar11 + 0x10 ));
         uVar12 = bdf_add_property__isra_0(param_5[7], "FONT_ASCENT", local_c8);
         if ((int)uVar12 != 0) goto LAB_00101795;
         uVar11 = param_5[7];
      }
 else {
         plVar6 = (long*)ft_hash_str_lookup("FONT_ASCENT", *(undefined8*)( uVar11 + 0xa8 ));
         if (plVar6 == (long*)0x0) {
            uVar11 = param_5[7];
            goto LAB_0010197f;
         }

         plVar1 = (long*)( uVar11 + 0x90 );
         uVar11 = param_5[7];
         if (*plVar1 + *plVar6 * 0x18 == 0) goto LAB_0010197f;
      }

      if (( uVar11 == 0 ) || ( *(long*)( uVar11 + 0x80 ) == 0 )) {
         LAB_001019d7:*(long*)( uVar11 + 0x48 ) = (long)*(short*)( uVar11 + 0x12 );
         __snprintf_chk(local_c8, 0x80, 2, 0x80, &_LC7, (long)*(short*)( uVar11 + 0x12 ));
         uVar12 = bdf_add_property__isra_0(param_5[7], "FONT_DESCENT", local_c8);
         if ((int)uVar12 != 0) goto LAB_00101795;
      }
 else {
         plVar6 = (long*)ft_hash_str_lookup("FONT_DESCENT", *(undefined8*)( uVar11 + 0xa8 ));
         if (( plVar6 == (long*)0x0 ) || ( *(long*)( uVar11 + 0x90 ) + *plVar6 * 0x18 == 0 )) {
            uVar11 = param_5[7];
            goto LAB_001019d7;
         }

      }

      *param_5 = *param_5 & 0xffffffef;
      *param_4 = bdf_parse_glyphs_;
      LAB_00101793:uVar12 = 0;
   }
 else {
      iVar5 = strncmp((char*)param_1, "_XFREE86_GLYPH_RANGES", 0x15);
      if (( ( iVar5 == 0 ) && ( param_1[0x15] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)param_1[0x15] & 0x3f ) & 1 ) == 0 )) goto LAB_00101793;
      iVar5 = strncmp((char*)param_1, "COMMENT", 7);
      if (iVar5 == 0) {
         bVar2 = param_1[7];
         if (( bVar2 & 0xdf ) != 0) {
            if (( ( byte )(bVar2 - 9) < 2 ) || ( bVar2 == 0xd )) goto LAB_00101874;
            goto LAB_00101880;
         }

         pbVar13 = param_1 + 7;
         if (bVar2 != 0) {
            LAB_00101874:param_1[7] = 0;
            pbVar13 = param_1 + 8;
         }

         LAB_00101804:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar11 = param_5[7];
            goto LAB_0010181f;
         }

         goto LAB_00101b2d;
      }

      LAB_00101880:uVar11 = param_5[7];
      bVar2 = *param_1;
      pbVar13 = param_1;
      while (( ( bVar2 & 0xdf ) != 0 && ( bVar2 != 9 ) )) {
         pbVar9 = pbVar13 + 1;
         pbVar13 = pbVar13 + 1;
         bVar2 = *pbVar9;
      }
;
      *pbVar13 = 0;
      if (*param_1 == 0) {
         if (pbVar13 < param_1 + param_2) {
            LAB_00101908:do {
               do {
                  bVar2 = pbVar13[1];
                  pbVar13 = pbVar13 + 1;
               }
 while ( bVar2 == 0x20 );
            }
 while ( bVar2 == 9 );
            if (bVar2 == 0x22) goto LAB_00101aee;
            goto LAB_00101923;
         }

         LAB_00101aa5:pbVar10 = param_1 + param_2;
         bVar2 = *pbVar10;
         LAB_00101946:if (bVar2 == 0x22) {
            *pbVar10 = 0;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar11 = param_5[7];
            LAB_0010181f:uVar12 = bdf_add_property__isra_0(uVar11, param_1, pbVar13);
            return uVar12;
         }

         goto LAB_00101b2d;
      }

      puVar7 = (ulong*)ft_hash_str_lookup(param_1, uVar11 + 0xd0);
      if (puVar7 == (ulong*)0x0) {
         LAB_001018f7:if (pbVar13 < param_1 + param_2) goto LAB_00101908;
         if (*pbVar13 != 0x22) goto LAB_00101aa5;
         LAB_00101aee:pbVar13 = pbVar13 + 1;
         LAB_00101923:pbVar9 = param_1 + param_2;
         if (param_1 + param_2 <= pbVar13) goto LAB_00101aa5;
         do {
            do {
               bVar2 = pbVar9[-1];
               pbVar10 = pbVar9 + -1;
               *pbVar9 = 0;
               pbVar9 = pbVar10;
            }
 while ( bVar2 == 0x20 );
         }
 while ( bVar2 == 9 );
         goto LAB_00101946;
      }

      uVar3 = *puVar7;
      ppuVar8 = &bdf_properties_ + uVar3 * 3;
      if (( ( 0x52 < uVar3 ) && ( ppuVar8 = (undefined**)( *(long*)( uVar11 + 0xc0 ) + -0x7c8 + uVar3 * 0x18 ) ),ppuVar8 == (undefined**)0x0 )) goto LAB_001018f7;
      *pbVar13 = bVar2;
      puVar7 = param_5 + 9;
      param_5[0xb] = 0;
      if (param_5[10] != 0) {
         puVar4 = (undefined8*)param_5[9];
         puVar4[4] = &empty;
         *puVar4 = &empty;
         for (int i = 0; i < 3; i++) {
            puVar4[( i + 1 )] = &empty;
         }

      }

      if (( ( param_2 == 0 ) || ( *param_1 == 0 ) ) || ( uVar12 = bdf_list_split__part_0(puVar7, &_LC9, param_1, param_2) ),(int)uVar12 == 0) {
         param_1 = *(byte**)param_5[9];
         bdf_list_shift__constprop_0(puVar7);
         pbVar13 = (byte*)bdf_list_join__constprop_0(puVar7, local_d0);
         goto LAB_00101804;
      }

   }

   LAB_00101795:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar12;
   }

   LAB_00101b2d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong BDF_Face_Init(long param_1, code *param_2, int param_3) {
   undefined1 *__src;
   char cVar1;
   ulong uVar2;
   void *__src_00;
   undefined8 uVar3;
   uint uVar4;
   int iVar5;
   ulong uVar6;
   ulong *puVar7;
   undefined1 *__dest;
   long lVar8;
   long *plVar9;
   undefined8 uVar10;
   size_t sVar11;
   char *pcVar12;
   char *pcVar13;
   short *psVar14;
   byte *pbVar15;
   short sVar16;
   short sVar17;
   long *plVar18;
   size_t sVar19;
   size_t __n;
   ulong uVar20;
   long lVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   undefined8 local_118;
   long local_100;
   uint local_b4;
   uint local_b0;
   uint local_ac;
   undefined8 local_a8;
   undefined8 uStack_a0;
   code *local_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   size_t local_68[5];
   long local_40;
   uVar2 = *(ulong*)( param_2 + 0xb8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b4 = 0;
   uVar6 = FT_Stream_Seek(param_1, 0);
   local_b4 = (uint)uVar6;
   if (local_b4 != 0) goto LAB_00101b91;
   local_b0 = 0;
   local_a8 = __LC12;
   uStack_a0 = _UNK_00105538;
   puVar7 = (ulong*)ft_mem_alloc(uVar2, 0x78, &local_b0);
   uVar6 = (ulong)local_b0;
   if (local_b0 == 0) {
      puVar7[8] = ( ulong ) & local_a8;
      uVar6 = *(ulong*)( param_1 + 8 );
      *(undefined2*)( puVar7 + 3 ) = 0x7fff;
      *(undefined1(*) [16])( puVar7 + 0xb ) = (undefined1[16])0x0;
      puVar7[0xe] = uVar6;
      puVar7[0xd] = uVar2;
      puVar7[0xc] = uVar2;
      *(undefined1(*) [16])( puVar7 + 9 ) = (undefined1[16])0x0;
      uVar10 = *(undefined8*)( param_1 + 0x38 );
      local_ac = 0;
      __dest = (undefined1*)ft_mem_qalloc(uVar10, 0x400, &local_ac);
      if (local_ac == 0) {
         __n = 0;
         local_98 = bdf_parse_start_;
         sVar11 = 0;
         *__dest = 0;
         local_100 = 1;
         iVar5 = 0x100;
         uVar6 = 0x400;
         LAB_00101ca8:do {
            lVar8 = FT_Stream_TryRead(param_1, __dest + __n, uVar6 - __n);
            __n = __n + lVar8;
            while ((long)sVar11 < (long)__n) {
               pcVar12 = __dest + sVar11;
               sVar19 = sVar11;
               if (*pcVar12 == iVar5) {
                  sVar11 = sVar11 + 1;
                  iVar5 = 0x100;
               }
 else {
                  while (( __dest[sVar19] != '\r' && ( __dest[sVar19] != '\n' ) )) {
                     sVar19 = sVar19 + 1;
                     if (__n == sVar19) goto LAB_00101ccb;
                  }
;
                  if ((long)__n <= (long)sVar19) break;
                  pcVar13 = __dest + sVar19;
                  cVar1 = *pcVar13;
                  *pcVar13 = '\0';
                  if (( *pcVar12 != '#' && *pcVar12 != '\x1a' ) && ( (long)sVar11 < (long)sVar19 )) {
                     local_ac = ( *local_98 )(pcVar12, sVar19 - sVar11, local_100, &local_98, puVar7);
                     if (local_ac == 0xffffffff) {
                        local_ac = ( *local_98 )(pcVar12, sVar19 - sVar11, local_100, &local_98, puVar7);
                     }

                     if (local_ac != 0) goto LAB_00101d2b;
                  }

                  *pcVar13 = cVar1;
                  sVar11 = sVar19 + 1;
                  iVar5 = 0xd;
                  local_100 = local_100 + 1;
                  if (( cVar1 != '\n' ) && ( iVar5 = cVar1 == '\r' )) {
                     iVar5 = 10;
                  }

               }

            }
;
            LAB_00101ccb:if (lVar8 == 0) {
               if (local_100 == 1) {
                  local_ac = 0xb0;
               }

               break;
            }

            if (sVar11 != 0) {
               __n = __n - sVar11;
               __src = __dest + sVar11;
               sVar11 = 0;
               memmove(__dest, __src, __n);
               goto LAB_00101ca8;
            }

            if (0xffff < uVar6) {
               local_ac = 0xb0;
               if (local_100 != 1) {
                  local_ac = 6;
               }

               break;
            }

            __dest = (undefined1*)ft_mem_qrealloc(uVar10, 1, uVar6, uVar6 * 2, __dest, &local_ac);
            uVar6 = uVar6 * 2;
            if (local_ac != 0) break;
         }
 while ( true );
      }

      LAB_00101d2b:ft_mem_free(uVar10, __dest);
      uVar20 = puVar7[7];
      local_b0 = local_ac;
      if (local_ac != 0) {
         if (uVar20 == 0) goto LAB_001028a5;
         LAB_001026b9:bdf_free_font_part_0(uVar20);
         uVar6 = puVar7[7];
         LAB_001026c5:ft_mem_free(uVar2, uVar6);
         puVar7[7] = 0;
         goto LAB_001026a1;
      }

      uVar6 = *puVar7;
      if (uVar20 == 0) {
         if (( uVar6 & 1 ) == 0) {
            local_b0 = 3;
            goto LAB_001026a1;
         }

         local_b0 = ( ( uVar6 & 0x20 ) != 0 ) + 0xb9;
         LAB_001028a5:uVar6 = 0;
         goto LAB_001026c5;
      }

      if (*(int*)( uVar20 + 0x30 ) != 8) {
         *(undefined2*)( uVar20 + 0x34 ) = *(undefined2*)( uVar20 + 8 );
      }

      if (( *(int*)puVar7[8] != 0 ) && ( *(long*)( uVar20 + 0x58 ) != 0 || *(long*)( uVar20 + 0x70 ) != 0 )) {
         sVar16 = (short)puVar7[3];
         if ((int)*(short*)( (long)puVar7 + 0x1c ) - (int)sVar16 != ( uint ) * (ushort*)( uVar20 + 8 )) {
            *(short*)( uVar20 + 8 ) = *(short*)( (long)puVar7 + 0x1c ) - sVar16;
         }

         if (sVar16 != *(short*)( uVar20 + 0xc )) {
            *(short*)( uVar20 + 0xc ) = sVar16;
         }

         sVar16 = *(short*)( (long)puVar7 + 0x1e );
         if (*(short*)( uVar20 + 0x10 ) != sVar16) {
            *(short*)( uVar20 + 0x10 ) = sVar16;
         }

         sVar17 = (short)puVar7[4];
         if (*(short*)( uVar20 + 0x12 ) != sVar17) {
            *(short*)( uVar20 + 0x12 ) = sVar17;
            *(short*)( uVar20 + 0xe ) = -sVar17;
         }

         if ((int)sVar16 + (int)sVar17 != ( uint ) * (ushort*)( uVar20 + 10 )) {
            *(short*)( uVar20 + 10 ) = sVar16 + sVar17;
         }

      }

      if (( uVar6 & 1 ) != 0) {
         local_b0 = ( ( uVar6 & 0x20 ) != 0 ) + 0xb9;
         goto LAB_001026b9;
      }

      LAB_00101fa9:if (puVar7[0xc] != 0) {
         ft_mem_free(puVar7[0xc], puVar7[9]);
         *(undefined1(*) [16])( puVar7 + 9 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar7 + 0xb ) = (undefined1[16])0x0;
      }

      ft_mem_free(uVar2, puVar7[5]);
      puVar7[5] = 0;
      ft_mem_free(uVar2);
      uVar6 = (ulong)local_b0;
      local_b4 = local_b0;
      if ((char)local_b0 != -0x50) {
         if (local_b0 != 0) goto LAB_00101b91;
         *(ulong*)( param_2 + 0x108 ) = uVar20;
         uVar3 = _UNK_00105548;
         uVar10 = __LC13;
         if (( 0 < param_3 ) && ( (short)param_3 != 0 )) {
            BDF_Face_Done(param_2);
            uVar6 = 6;
            goto LAB_00101b91;
         }

         *(ulong*)( param_2 + 0x10 ) = *(ulong*)( param_2 + 0x10 ) | 0x12;
         *(undefined8*)param_2 = uVar10;
         *(undefined8*)( param_2 + 8 ) = uVar3;
         if (( uVar20 == 0 ) || ( *(long*)( uVar20 + 0x80 ) == 0 )) {
            local_118 = *(undefined8*)( param_2 + 0xb8 );
            *(undefined8*)( param_2 + 0x28 ) = 0;
            local_98 = (code*)( (ulong)local_98 & 0xffffffff00000000 );
            *(undefined8*)( param_2 + 0x18 ) = 0;
            local_88 = (undefined1[16])0x0;
            local_78 = (undefined1[16])0x0;
         }
 else {
            plVar9 = (long*)ft_hash_str_lookup("SPACING");
            if (( ( ( ( plVar9 != (long*)0x0 ) && ( lVar8 = *(long*)( uVar20 + 0x90 ) + *plVar9 * 0x18 ),lVar8 != 0 ) ) && ( *(int*)( lVar8 + 8 ) == 1 ) ) && ( ( *(byte**)( lVar8 + 0x10 ) != (byte*)0x0 && ( uVar4 = **(byte**)( lVar8 + 0x10 ) - 0x43 ),(byte)uVar4 < 0x2b ) )) {
               *(ulong*)( param_2 + 0x10 ) = *(ulong*)( param_2 + 0x10 ) | 4;
            }

            if (( ( *(long*)( uVar20 + 0x80 ) == 0 ) || ( plVar9 = (long*)ft_hash_str_lookup("FAMILY_NAME") ),plVar9 == (long*)0x0 )) {
               *(undefined8*)( param_2 + 0x28 ) = 0;
               lVar8 = *(long*)( param_2 + 0x108 );
            }
 else {
               uVar10 = ft_mem_strdup(uVar2, lVar8, &local_b4);
               *(undefined8*)( param_2 + 0x28 ) = uVar10;
               uVar6 = (ulong)local_b4;
               if (local_b4 != 0) goto LAB_00101b91;
               lVar8 = *(long*)( param_2 + 0x108 );
            }

            local_118 = *(undefined8*)( param_2 + 0xb8 );
            local_98 = (code*)( (ulong)local_98 & 0xffffffff00000000 );
            *(undefined8*)( param_2 + 0x18 ) = 0;
            local_88 = (undefined1[16])0x0;
            local_78 = (undefined1[16])0x0;
            if (( lVar8 != 0 ) && ( *(long*)( lVar8 + 0x80 ) != 0 )) {
               plVar9 = (long*)ft_hash_str_lookup("SLANT");
               if (( ( plVar9 != (long*)0x0 ) && ( ( ( lVar21 = *(long*)( lVar8 + 0x90 ) + *plVar9 * 0x18 ),lVar21 != 0 && ( *(int*)( lVar21 + 8 ) == 1 ) ) && ( pbVar15 = *(byte**)( lVar21 + 0x10 ) ),pbVar15 != (byte*)0x0 ) )) {
                  *(ulong*)( param_2 + 0x18 ) = *(ulong*)( param_2 + 0x18 ) | 1;
                  pcVar12 = "Italic";
                  if (( *pbVar15 & 0xdf ) == 0x4f) {
                     pcVar12 = "Oblique";
                  }

                  local_78._0_8_ = pcVar12;
               }

               if (*(long*)( lVar8 + 0x80 ) != 0) {
                  plVar9 = (long*)ft_hash_str_lookup("WEIGHT_NAME");
                  if (( ( plVar9 != (long*)0x0 ) && ( lVar21 = *(long*)( lVar8 + 0x90 ) + *plVar9 * 0x18 ),lVar21 != 0 )) &&( ( *(int*)( lVar21 + 8 ) == 1 && ( ( *(byte**)( lVar21 + 0x10 ) != (byte*)0x0 && ( ( **(byte**)( lVar21 + 0x10 ) & 0xdf ) == 0x42 ) ) ) ) ) * (ulong*)( param_2 + 0x18 ) = *(ulong*)( param_2 + 0x18 ) | 2;
                  local_88._8_8_ = &_LC17;
               }

               if (*(long*)( lVar8 + 0x80 ) != 0) {
                  plVar9 = (long*)ft_hash_str_lookup("SETWIDTH_NAME");
                  if (( ( ( plVar9 != (long*)0x0 ) && ( lVar21 = *(long*)( lVar8 + 0x90 ) + *plVar9 * 0x18 ),lVar21 != 0 ) ) && ( *(int*)( lVar21 + 8 ) == 1 )) &&( ( ( pbVar15 = *(byte**)( lVar21 + 0x10 ) ),pbVar15 != (byte*)0x0 && ( *pbVar15 != 0 ) ) && ( ( *pbVar15 & 0xdf ) != 0x4e ) )._8_8_ = pbVar15;
               }

               if (( ( *(long*)( lVar8 + 0x80 ) != 0 ) && ( plVar9 = (long*)ft_hash_str_lookup("ADD_STYLE_NAME") ),plVar9 != (long*)0x0 )) &&( ( lVar8 = *(long*)( lVar8 + 0x90 ) + *plVar9 * 0x18 ),lVar8 != 0 && ( ( ( ( *(int*)( lVar8 + 8 ) == 1 && ( pbVar15 = *(byte**)( lVar8 + 0x10 ) ),pbVar15 != (byte*)0x0 ) ) && ( *pbVar15 != 0 ) ) && ( ( *pbVar15 & 0xdf ) != 0x4e ) ) )._0_8_ = pbVar15;
            }

         }

      }

   }

}
lVar8 = 0;lVar21 = 0;do {
   local_68[lVar21] = 0;
   if (*(char**)( local_88 + lVar21 * 8 ) != (char*)0x0) {
      sVar11 = strlen(*(char**)( local_88 + lVar21 * 8 ));
      local_68[lVar21] = sVar11;
      lVar8 = lVar8 + 1 + sVar11;
   }

   lVar21 = lVar21 + 1;
}
 while ( lVar21 != 4 );if (lVar8 == 0) {
   lVar8 = 8;
   local_68[0] = 7;
   local_88._0_8_ = "Regular";
}
uVar22 = 0;pcVar12 = (char*)ft_mem_qalloc(local_118, lVar8, &local_98);*(char**)( param_2 + 0x30 ) = pcVar12;uVar6 = (ulong)local_98 & 0xffffffff;if ((uint)local_98 != 0) goto LAB_00101b91;do {
   while (true) {
      __src_00 = *(void**)( local_88 + uVar22 * 8 );
      sVar11 = local_68[uVar22];
      if (__src_00 != (void*)0x0) break;
      LAB_001022f0:uVar22 = uVar22 + 1;
      if (uVar22 == 4) goto LAB_00102368;
   }
;
   if (*(char**)( param_2 + 0x30 ) != pcVar12) {
      *pcVar12 = ' ';
      pcVar12 = pcVar12 + 1;
   }

   pcVar13 = (char*)memcpy(pcVar12, __src_00, sVar11);
   pcVar12 = pcVar13 + sVar11;
   if (( ( 9UL >> ( uVar22 & 0x3f ) & 1 ) == 0 ) || ( pcVar12 = sVar11 == 0 )) goto LAB_001022f0;
   pcVar12 = pcVar13 + sVar11;
   do {
      if (*pcVar13 == ' ') {
         *pcVar13 = '-';
      }

      pcVar13 = pcVar13 + 1;
   }
 while ( pcVar12 != pcVar13 );
   uVar22 = uVar22 + 1;
}
 while ( uVar22 != 4 );LAB_00102368:*pcVar12 = '\0';uVar6 = (ulong)local_98 & 0xffffffff;local_b4 = (uint)local_98;if ((uint)local_98 != 0) goto LAB_00101b91;lVar8 = *(long*)( uVar20 + 0x50 );*(undefined4*)( param_2 + 0x38 ) = 1;*(long*)( param_2 + 0x20 ) = lVar8 + 1;psVar14 = (short*)ft_mem_alloc(uVar2, 0x20, &local_b4);*(short**)( param_2 + 0x40 ) = psVar14;uVar6 = (ulong)local_b4;if (local_b4 != 0) goto LAB_00101b91;lVar8 = *(long*)( uVar20 + 0x40 );sVar16 = (short)lVar8;if (0xfffe < lVar8 + 0x7fffU) {
   *(ulong*)( uVar20 + 0x40 ) = ( lVar8 >> 0x3f & 0xffffffffffff0002U ) + 0x7fff;
   sVar16 = ( ( ushort )(lVar8 >> 0x3f) & 2 ) + 0x7fff;
}
lVar8 = *(long*)( uVar20 + 0x48 );sVar17 = sVar16 + (short)lVar8;if (0xfffe < lVar8 + 0x7fffU) {
   sVar17 = sVar16 + 0x7fff + ( ( ushort )(lVar8 >> 0x3f) & 2 );
   *(ulong*)( uVar20 + 0x48 ) = ( lVar8 >> 0x3f & 0xffffffffffff0002U ) + 0x7fff;
}
lVar8 = *(long*)( uVar20 + 0x80 );*psVar14 = sVar17;if (lVar8 == 0) {
   psVar14[1] = (short)( ( sVar17 * 2 + 1 ) / 3 );
   LAB_001028e8:uVar6 = *(ulong*)( uVar20 + 0x18 );
   if (uVar6 == 0) {
      lVar8 = (long)( (int)psVar14[1] << 6 );
   }
 else {
      lVar8 = uVar6 << 6;
      if (0x7fff < uVar6) goto LAB_001024bb;
   }

}
 else {
   plVar9 = (long*)ft_hash_str_lookup("AVERAGE_WIDTH", *(undefined8*)( uVar20 + 0xa8 ));
   if (plVar9 == (long*)0x0) {
      lVar8 = *(long*)( uVar20 + 0x80 );
      LAB_00102915:sVar16 = (short)( ( *psVar14 * 2 + 1 ) / 3 );
   }
 else {
      lVar8 = *(long*)( uVar20 + 0x80 );
      lVar21 = *(long*)( uVar20 + 0x90 ) + *plVar9 * 0x18;
      if (lVar21 == 0) goto LAB_00102915;
      lVar21 = *(long*)( lVar21 + 0x10 );
      sVar16 = 0x7fff;
      if (lVar21 + 0x4fff1U < 0x9ffe3) {
         sVar17 = (short)( ( lVar21 + 5 ) / 10 );
         sVar16 = -sVar17;
         if (0 < sVar17) {
            sVar16 = sVar17;
         }

      }

   }

   psVar14[1] = sVar16;
   if (( ( lVar8 == 0 ) || ( plVar9 = (long*)ft_hash_str_lookup("POINT_SIZE", *(undefined8*)( uVar20 + 0xa8 )) ),plVar9 == (long*)0x0 )) goto LAB_001028e8;
   lVar8 = *(long*)( lVar8 + 0x10 );
   if (lVar8 + 0x504c2U < 0xa0985) {
      lVar21 = -lVar8;
      if (0 < lVar8) {
         lVar21 = lVar8;
      }

      lVar8 = FT_MulDiv(lVar21, 0x70800, 0x11a4e);
   }
 else {
      LAB_001024bb:lVar8 = 0x7fff;
   }

}
lVar21 = *(long*)( uVar20 + 0x80 );*(long*)( psVar14 + 4 ) = lVar8;if (lVar21 == 0) {
   LAB_00102b25:lVar8 = *(long*)( uVar20 + 0x20 );
   if (lVar8 == 0) {
      sVar16 = 0;
   }
 else {
      sVar16 = (short)lVar8;
      sVar17 = -sVar16;
      if (0 < sVar16) {
         sVar17 = sVar16;
      }

      sVar16 = 0x7fff;
      if (lVar8 + 0x7fffU < 0xffff) {
         sVar16 = sVar17;
      }

   }

   LAB_00102b53:uVar6 = *(ulong*)( uVar20 + 0x28 );
}
 else {
   plVar9 = (long*)ft_hash_str_lookup("PIXEL_SIZE", *(undefined8*)( uVar20 + 0xa8 ));
   if (( plVar9 != (long*)0x0 ) && ( lVar8 = lVar8 != 0 )) {
      uVar6 = *(ulong*)( lVar8 + 0x10 );
      if (uVar6 + 0x7fff < 0xffff) {
         uVar22 = uVar6 & 0xffffffff;
         if ((short)uVar6 < 1) {
            uVar22 = ( ulong )(ushort) - (short)uVar6;
         }

         *(ulong*)( psVar14 + 0xc ) = ( ulong )(( uint )(uVar22 << 6) & 0x3fffc0);
      }
 else {
         psVar14[0xc] = -0x40;
         psVar14[0xd] = 0x1f;
         psVar14[0xe] = 0;
         psVar14[0xf] = 0;
      }

   }

   if (*(long*)( uVar20 + 0x80 ) == 0) goto LAB_00102b25;
   plVar9 = (long*)ft_hash_str_lookup("RESOLUTION_X", *(undefined8*)( uVar20 + 0xa8 ));
   if (plVar9 == (long*)0x0) {
      lVar8 = *(long*)( uVar20 + 0x80 );
      LAB_00102d05:lVar21 = *(long*)( uVar20 + 0x20 );
   }
 else {
      lVar21 = *(long*)( uVar20 + 0x90 ) + *plVar9 * 0x18;
      lVar8 = *(long*)( uVar20 + 0x80 );
      if (lVar21 == 0) goto LAB_00102d05;
      lVar21 = *(long*)( lVar21 + 0x10 );
   }

   sVar16 = 0;
   if (lVar21 != 0) {
      sVar16 = (short)lVar21;
      sVar17 = -sVar16;
      if (0 < sVar16) {
         sVar17 = sVar16;
      }

      sVar16 = 0x7fff;
      if (lVar21 + 0x7fffU < 0xffff) {
         sVar16 = sVar17;
      }

   }

   if (( ( lVar8 == 0 ) || ( plVar9 = (long*)ft_hash_str_lookup("RESOLUTION_Y", *(undefined8*)( uVar20 + 0xa8 )) ),plVar9 == (long*)0x0 )) goto LAB_00102b53;
   uVar6 = *(ulong*)( lVar8 + 0x10 );
}
lVar8 = *(long*)( psVar14 + 0xc );if (uVar6 == 0) {
   if (lVar8 == 0) {
      lVar8 = *(long*)( psVar14 + 4 );
      *(long*)( psVar14 + 0xc ) = lVar8;
   }

}
 else {
   if (uVar6 + 0x7fff < 0xffff) {
      uVar22 = ( ulong )(ushort) - (short)uVar6;
      if (0 < (short)uVar6) {
         uVar22 = uVar6 & 0xffffffff;
      }

      sVar17 = (short)uVar22;
      if (lVar8 == 0) {
         uVar10 = *(undefined8*)( psVar14 + 4 );
         uVar22 = uVar22 & 0xffff;
         LAB_00102a86:*(undefined8*)( psVar14 + 0xc ) = uVar10;
         lVar8 = FT_MulDiv(uVar10, uVar22, 0x48);
         *(long*)( psVar14 + 0xc ) = lVar8;
      }

   }
 else {
      sVar17 = 0x7fff;
      if (lVar8 == 0) {
         uVar10 = *(undefined8*)( psVar14 + 4 );
         uVar22 = 0x7fff;
         sVar17 = 0x7fff;
         goto LAB_00102a86;
      }

   }

   if (sVar16 != 0) {
      lVar8 = FT_MulDiv(lVar8, (long)sVar16, (long)sVar17);
   }

}
*(long*)( psVar14 + 8 ) = lVar8;lVar8 = *(long*)( uVar20 + 0x60 );plVar9 = (long*)ft_mem_qrealloc(uVar2, 0x10, 0, *(undefined8*)( uVar20 + 0x50 ), 0, &local_b4);*(long**)( param_2 + 0x110 ) = plVar9;uVar6 = (ulong)local_b4;if (local_b4 != 0) goto LAB_00101b91;*(undefined4*)( param_2 + 0x118 ) = 0;uVar6 = *(ulong*)( uVar20 + 0x50 );if (uVar6 != 0) {
   lVar21 = *(long*)( uVar20 + 0x38 );
   plVar18 = (long*)( lVar8 + 8 );
   uVar22 = 0;
   do {
      lVar8 = *plVar18;
      *(short*)( plVar9 + 1 ) = (short)uVar22;
      *plVar9 = lVar8;
      if (( uVar22 < 0xffffffff ) && ( lVar8 == lVar21 )) {
         *(int*)( param_2 + 0x118 ) = (int)uVar22;
      }

      uVar22 = uVar22 + 1;
      plVar18 = plVar18 + 7;
      plVar9 = plVar9 + 2;
   }
 while ( uVar22 != uVar6 );
}
if (*(long*)( uVar20 + 0x80 ) != 0) {
   plVar9 = (long*)ft_hash_str_lookup("CHARSET_REGISTRY", *(undefined8*)( uVar20 + 0xa8 ));
   if (plVar9 != (long*)0x0) {
      plVar9 = (long*)( *(long*)( uVar20 + 0x90 ) + *plVar9 * 0x18 );
   }

   if (( ( ( *(long*)( uVar20 + 0x80 ) != 0 ) && ( plVar18 = (long*)ft_hash_str_lookup("CHARSET_ENCODING", *(undefined8*)( uVar20 + 0xa8 )) ),plVar18 != (long*)0x0 ) ) && ( ( lVar8 = *(long*)( uVar20 + 0x90 ) + *plVar18 * 0x18 ),plVar9 != (long*)0x0 && ( ( ( lVar8 != 0 && ( (int)plVar9[1] == 1 ) ) && ( *(int*)( lVar8 + 8 ) == 1 ) ) ) )) {
      uVar10 = ft_mem_strdup(uVar2, *(long*)( lVar8 + 0x10 ), &local_b4);
      *(undefined8*)( param_2 + 0xf8 ) = uVar10;
      uVar6 = (ulong)local_b4;
      if (local_b4 != 0) goto LAB_00101b91;
      pbVar15 = (byte*)ft_mem_strdup(uVar2, plVar9[2], &local_b4);
      *(byte**)( param_2 + 0x100 ) = pbVar15;
      uVar6 = (ulong)local_b4;
      if (local_b4 != 0) goto LAB_00101b91;
      if (( ( ( *pbVar15 & 0xdf ) == 0x49 ) && ( ( pbVar15[1] & 0xdf ) == 0x53 ) ) && ( ( pbVar15[2] & 0xdf ) == 0x4f )) {
         pbVar15 = pbVar15 + 3;
         iVar5 = strcmp((char*)pbVar15, "10646");
         if (( iVar5 == 0 ) || ( ( iVar5 = strcmp((char*)pbVar15, "8859") ),iVar5 == 0 && ( iVar5 = strcmp(*(char**)( param_2 + 0xf8 ), "1") ),iVar5 == 0 )) {
            LAB_00102cba:local_90 = 0x10003756e6963;
         }
 else {
            iVar5 = strcmp((char*)pbVar15, "646.1991");
            if (iVar5 != 0) goto LAB_00102d53;
            iVar5 = strcmp(*(char**)( param_2 + 0xf8 ), "IRV");
            local_90 = 0;
            if (iVar5 == 0) goto LAB_00102cba;
         }

      }
 else {
         LAB_00102d53:local_90 = 0;
      }

      local_98 = param_2;
      uVar6 = FT_CMap_New(bdf_cmap_class, 0, &local_98, 0);
      goto LAB_00101b91;
   }

}
local_90 = 0x741444f42;local_98 = param_2;uVar6 = FT_CMap_New(bdf_cmap_class, 0, &local_98, 0);if (*(int*)( param_2 + 0x48 ) != 0) {
   *(undefined8*)( param_2 + 0xa8 ) = **(undefined8**)( param_2 + 0x50 );
}
goto LAB_00101b91;}
  }
  else{
   if (puVar7 != (ulong*)0x0) {
      LAB_001026a1:uVar20 = 0;
      goto LAB_00101fa9;
   }

   local_b4 = local_b0;
   if ((char)local_b0 != -0x50) goto LAB_00101b91;
}
local_b4 = local_b0;BDF_Face_Done(param_2);uVar6 = 2;LAB_00101b91:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar6;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}ulong bdf_parse_start_(char *param_1, long param_2, undefined8 param_3, undefined8 *param_4, ulong *param_5) {
   ulong *puVar1;
   undefined4 uVar2;
   undefined8 *puVar3;
   char *__s;
   undefined2 uVar4;
   short sVar5;
   short sVar6;
   ushort uVar7;
   int iVar8;
   ulong uVar9;
   ulong uVar10;
   void *pvVar11;
   size_t sVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   ulong uVar15;
   byte bVar16;
   long lVar17;
   ulong uVar18;
   undefined **ppuVar19;
   long in_FS_OFFSET;
   uint local_174;
   long local_170;
   undefined1 local_168[16];
   long local_158;
   long local_150;
   char local_148[264];
   long local_40;
   uVar14 = 0;
   uVar15 = param_5[7];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_174 = 0;
   if (uVar15 != 0) {
      uVar14 = *(undefined8*)( uVar15 + 0xb8 );
   }

   iVar8 = strncmp(param_1, "COMMENT", 7);
   if (iVar8 == 0) {
      bVar16 = param_1[7];
      if (( 0x20 < bVar16 ) || ( ( 0xfffffffeffffd9feU >> ( (ulong)bVar16 & 0x3f ) & 1 ) != 0 )) goto LAB_00102e60;
      if (( *(int*)( param_5[8] + 8 ) != 0 ) && ( uVar15 != 0 )) {
         if (bVar16 == 0) {
            param_1 = param_1 + 7;
            param_2 = param_2 + -7;
         }
 else {
            param_1 = param_1 + 8;
            param_2 = param_2 + -8;
         }

         uVar9 = bdf_add_comment_(uVar15, param_1, param_2);
         goto LAB_00102e30;
      }

      LAB_00103148:uVar9 = 0;
      goto LAB_00102e30;
   }

   LAB_00102e60:uVar10 = *param_5;
   uVar18 = ( ulong )((uint)uVar10 & 1);
   if (( uVar10 & 1 ) == 0) {
      iVar8 = strncmp(param_1, "STARTFONT", 9);
      uVar9 = 0xb0;
      if (( ( iVar8 == 0 ) && ( (byte)param_1[9] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[9] & 0x3f ) & 1 ) == 0 )) {
         uVar15 = param_5[0xd];
         *param_5 = 1;
         param_5[7] = 0;
         uVar10 = ft_mem_alloc(uVar15, 0xf8, &local_174);
         uVar9 = (ulong)local_174;
         if (local_174 == 0) {
            param_5[7] = uVar10;
            *(ulong*)( uVar10 + 0xb8 ) = param_5[0xd];
            uVar9 = ft_hash_str_init(uVar10 + 0xd0, uVar15);
            local_174 = (uint)uVar9;
            if (local_174 == 0) {
               ppuVar19 = &bdf_properties_;
               do {
                  local_174 = 0;
                  uVar9 = ft_hash_str_insert(*ppuVar19, uVar18, uVar10 + 0xd0, uVar15);
                  local_174 = (uint)uVar9;
                  if (local_174 != 0) goto LAB_00102e30;
                  ppuVar19 = ppuVar19 + 3;
                  uVar18 = uVar18 + 1;
               }
 while ( ppuVar19 != &PTR_empty_00105428 );
               uVar9 = param_5[7];
               uVar14 = ft_mem_qalloc(uVar15, 0x28, &local_174);
               *(undefined8*)( uVar9 + 0xa8 ) = uVar14;
               uVar9 = (ulong)local_174;
               if (local_174 == 0) {
                  uVar9 = ft_hash_str_init(*(undefined8*)( param_5[7] + 0xa8 ), uVar15);
                  local_174 = (uint)uVar9;
                  if (local_174 == 0) {
                     uVar15 = param_5[7];
                     uVar2 = *(undefined4*)( param_5[8] + 0xc );
                     *(undefined8*)( uVar15 + 0x38 ) = 0xffffffffffffffff;
                     *(undefined4*)( uVar15 + 0x30 ) = uVar2;
                  }

               }

            }

         }

      }

      goto LAB_00102e30;
   }

   iVar8 = strncmp(param_1, "STARTPROPERTIES", 0xf);
   if (iVar8 == 0) {
      if (( 0x20 < (byte)param_1[0xf] ) || ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[0xf] & 0x3f ) & 1 ) != 0 )) goto LAB_00103150;
      uVar9 = 0xb3;
      if (( uVar10 & 8 ) == 0) goto LAB_00102e30;
      param_5[0xb] = 0;
      if (param_5[10] != 0) {
         puVar3 = (undefined8*)param_5[9];
         puVar3[4] = &empty;
         *puVar3 = &empty;
         for (int i = 0; i < 3; i++) {
            puVar3[( i + 1 )] = &empty;
         }

      }

      if (( param_2 != 0 ) && ( *param_1 != '\0' )) {
         uVar9 = bdf_list_split__part_0(param_5 + 9, &_LC9, param_1);
         local_174 = (uint)uVar9;
         if (local_174 != 0) goto LAB_00102e30;
         uVar15 = param_5[7];
      }

      uVar9 = bdf_atoul_(*(undefined8*)( param_5[9] + 8 ));
      *(ulong*)( uVar15 + 0x80 ) = uVar9;
      param_5[1] = uVar9;
      if (uVar9 <= param_5[0xe] >> 2) {
         uVar14 = ft_mem_realloc(uVar14, 0x18, 0, uVar9, 0, &local_174);
         *(undefined8*)( uVar15 + 0x90 ) = uVar14;
         uVar9 = (ulong)local_174;
         if (local_174 == 0) {
            *param_5 = *param_5 | 0x10;
            *param_4 = bdf_parse_properties_;
         }
 else {
            *(undefined8*)( param_5[7] + 0x80 ) = 0;
         }

         goto LAB_00102e30;
      }

      *(undefined8*)( uVar15 + 0x80 ) = 0;
      LAB_0010303f:uVar9 = 6;
      goto LAB_00102e30;
   }

   iVar8 = strncmp(param_1, "FONTBOUNDINGBOX", 0xf);
   if (( ( iVar8 == 0 ) && ( (byte)param_1[0xf] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[0xf] & 0x3f ) & 1 ) == 0 )) {
      uVar9 = 0xb2;
      if (( uVar10 & 4 ) == 0) goto LAB_00102e30;
      param_5[0xb] = 0;
      if (param_5[10] != 0) {
         puVar3 = (undefined8*)param_5[9];
         puVar3[4] = &empty;
         *puVar3 = &empty;
         for (int i = 0; i < 3; i++) {
            puVar3[( i + 1 )] = &empty;
         }

      }

      if (( param_2 != 0 ) && ( *param_1 != '\0' )) {
         uVar9 = bdf_list_split__part_0(param_5 + 9, &_LC9, param_1);
         local_174 = (uint)uVar9;
         if (local_174 != 0) goto LAB_00102e30;
         uVar15 = param_5[7];
      }

      uVar9 = param_5[9];
      uVar4 = bdf_atous_(*(undefined8*)( uVar9 + 8 ));
      uVar14 = *(undefined8*)( uVar9 + 0x10 );
      *(undefined2*)( uVar15 + 8 ) = uVar4;
      sVar5 = bdf_atous_(uVar14);
      uVar14 = *(undefined8*)( uVar9 + 0x18 );
      *(short*)( uVar15 + 10 ) = sVar5;
      uVar4 = bdf_atos_(uVar14);
      uVar14 = *(undefined8*)( uVar9 + 0x20 );
      *(undefined2*)( uVar15 + 0xc ) = uVar4;
      sVar6 = bdf_atos_(uVar14);
      *(short*)( uVar15 + 0xe ) = sVar6;
      *(short*)( uVar15 + 0x10 ) = sVar5 + sVar6;
      *(short*)( uVar15 + 0x12 ) = -sVar6;
      *param_5 = *param_5 | 8;
      goto LAB_00103148;
   }

   LAB_00103150:iVar8 = strncmp(param_1, "FONT", 4);
   if (iVar8 == 0) {
      if (( 0x20 < (byte)param_1[4] ) || ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[4] & 0x3f ) & 1 ) != 0 )) goto LAB_00103430;
      param_5[0xb] = 0;
      puVar1 = param_5 + 9;
      if (param_5[10] != 0) {
         puVar3 = (undefined8*)param_5[9];
         puVar3[4] = &empty;
         *puVar3 = &empty;
         for (int i = 0; i < 3; i++) {
            puVar3[( i + 1 )] = &empty;
         }

      }

      if (( param_2 != 0 ) && ( *param_1 != '\0' )) {
         uVar9 = bdf_list_split__part_0(puVar1, &_LC9, param_1, param_2);
         local_174 = (uint)uVar9;
         if (local_174 != 0) goto LAB_00102e30;
      }

      bdf_list_shift__constprop_0(puVar1);
      pvVar11 = (void*)bdf_list_join__constprop_0(puVar1, &local_170);
      if (pvVar11 != (void*)0x0) {
         ft_mem_free(uVar14, *(undefined8*)param_5[7]);
         puVar3 = (undefined8*)param_5[7];
         *puVar3 = 0;
         uVar14 = ft_mem_qalloc(uVar14, local_170 + 1U, &local_174);
         *puVar3 = uVar14;
         uVar9 = (ulong)local_174;
         if (local_174 != 0) goto LAB_00102e30;
         memcpy(*(void**)param_5[7], pvVar11, local_170 + 1U);
         puVar3 = (undefined8*)param_5[7];
         if (( ( puVar3 != (undefined8*)0x0 ) && ( __s = (char*)*puVar3 ),__s != (char*)0x0 )) {
            local_150 = puVar3[0x17];
            local_168 = (undefined1[16])0x0;
            *(undefined4*)( puVar3 + 6 ) = *(undefined4*)( param_5[8] + 0xc );
            local_158 = 0;
            sVar12 = strlen(__s);
            uVar15 = sVar12 + 1;
            if (uVar15 < 0x100) {
               pvVar11 = memcpy(local_148, __s, uVar15);
               if (( local_148[0] == '\0' ) || ( uVar9 = bdf_list_split__part_0(local_168, &_LC39, pvVar11, uVar15) ),(int)uVar9 == 0) {
                  if (local_158 == 0xf) {
                     bVar16 = **(char**)( local_168._0_8_ + 0x58 ) + 0xbd;
                     if (bVar16 < 0x2e) {
                        uVar15 = 1L << ( bVar16 & 0x3f );
                        if (( uVar15 & 0x200000002000 ) == 0) {
                           if (( uVar15 & 0x40000000400 ) == 0) {
                              if (( uVar15 & 0x100000001 ) != 0) {
                                 *(undefined4*)( puVar3 + 6 ) = 0x20;
                              }

                           }
 else {
                              *(undefined4*)( puVar3 + 6 ) = 0x10;
                           }

                        }
 else {
                           *(undefined4*)( puVar3 + 6 ) = 8;
                        }

                     }

                     if (local_150 != 0) {
                        ft_mem_free();
                     }

                  }
 else if (local_150 != 0) {
                     ft_mem_free(local_150, local_168._0_8_);
                  }

                  *param_5 = *param_5 | 2;
                  uVar9 = 0;
               }
 else if (local_150 != 0) {
                  ft_mem_free(local_150, local_168._0_8_);
                  uVar9 = uVar9 & 0xffffffff;
               }

               goto LAB_00102e30;
            }

         }

         goto LAB_0010303f;
      }

   }
 else {
      iVar8 = strncmp(param_1, "SIZE", 4);
      if (( ( iVar8 == 0 ) && ( (byte)param_1[4] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[4] & 0x3f ) & 1 ) == 0 )) {
         uVar9 = 0xb1;
         if (( uVar10 & 2 ) != 0) {
            param_5[0xb] = 0;
            if (param_5[10] != 0) {
               puVar3 = (undefined8*)param_5[9];
               puVar3[4] = &empty;
               *puVar3 = &empty;
               for (int i = 0; i < 3; i++) {
                  puVar3[( i + 1 )] = &empty;
               }

            }

            if (( param_2 != 0 ) && ( *param_1 != '\0' )) {
               uVar9 = bdf_list_split__part_0(param_5 + 9, &_LC9, param_1);
               local_174 = (uint)uVar9;
               if (local_174 != 0) goto LAB_00102e30;
               uVar15 = param_5[7];
            }

            uVar9 = param_5[9];
            uVar13 = bdf_atoul_(*(undefined8*)( uVar9 + 8 ));
            uVar14 = *(undefined8*)( uVar9 + 0x10 );
            *(undefined8*)( uVar15 + 0x18 ) = uVar13;
            uVar13 = bdf_atoul_(uVar14);
            uVar14 = *(undefined8*)( uVar9 + 0x18 );
            *(undefined8*)( uVar15 + 0x20 ) = uVar13;
            uVar14 = bdf_atoul_(uVar14);
            uVar10 = param_5[0xb];
            *(undefined8*)( uVar15 + 0x28 ) = uVar14;
            uVar7 = 1;
            if (uVar10 == 5) {
               uVar7 = bdf_atous_(*(undefined8*)( uVar9 + 0x20 ));
               if (uVar7 < 5) {
                  if (uVar7 < 3) {
                     if (uVar7 != 2) {
                        uVar7 = 1;
                     }

                  }
 else {
                     uVar7 = 4;
                  }

               }
 else {
                  uVar7 = 8;
               }

            }

            *(ushort*)( uVar15 + 0xb0 ) = uVar7;
            uVar9 = 0;
            *param_5 = *param_5 | 4;
         }

         goto LAB_00102e30;
      }

      LAB_00103430:iVar8 = strncmp(param_1, "CHARS", 5);
      if (( iVar8 == 0 ) && ( ( (byte)param_1[5] < 0x21 && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[5] & 0x3f ) & 1 ) == 0 ) ) )) {
         uVar9 = 0xb3;
         if (( uVar10 & 8 ) != 0) {
            *(long*)( uVar15 + 0x40 ) = (long)*(short*)( uVar15 + 0x10 );
            __snprintf_chk(local_148, 0x80, 2, 0x80, &_LC7, (long)*(short*)( uVar15 + 0x10 ));
            uVar9 = bdf_add_property__isra_0(param_5[7], "FONT_ASCENT", local_148);
            local_174 = (uint)uVar9;
            if (local_174 == 0) {
               lVar17 = (long)*(short*)( param_5[7] + 0x12 );
               *(long*)( param_5[7] + 0x48 ) = lVar17;
               __snprintf_chk(local_148, 0x80, 2, 0x80, &_LC7, lVar17);
               uVar9 = bdf_add_property__isra_0(param_5[7], "FONT_DESCENT", local_148);
               if ((int)uVar9 == 0) {
                  *param_4 = bdf_parse_glyphs_;
                  uVar9 = 0xffffffff;
               }

            }

         }

         goto LAB_00102e30;
      }

   }

   uVar9 = 3;
   LAB_00102e30:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int bdf_parse_glyphs_(char *param_1, long param_2, undefined8 param_3, undefined8 *param_4, ulong *param_5) {
   ulong *puVar1;
   byte bVar2;
   short sVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   undefined *puVar7;
   undefined2 uVar8;
   short sVar9;
   short sVar10;
   ushort uVar11;
   short sVar12;
   short sVar13;
   int iVar14;
   ulong uVar15;
   void *__src;
   void *__dest;
   long lVar16;
   long lVar17;
   uint uVar18;
   undefined8 uVar19;
   byte *pbVar20;
   ulong uVar21;
   short sVar22;
   char *pcVar23;
   ulong uVar24;
   long in_FS_OFFSET;
   int local_4c;
   long local_48;
   long local_40;
   uVar24 = param_5[7];
   uVar4 = *(undefined8*)( uVar24 + 0xb8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c = 0;
   iVar14 = strncmp(param_1, "COMMENT", 7);
   puVar7 = PTR_empty_00105428;
   if (iVar14 == 0) {
      bVar2 = param_1[7];
      if (( bVar2 & 0xdf ) == 0) {
         if (*(int*)( param_5[8] + 8 ) != 0) {
            lVar17 = param_2 + -7;
            pcVar23 = param_1 + 7;
            if (bVar2 != 0) goto LAB_00103991;
            LAB_001038dd:local_4c = bdf_add_comment_(uVar24, pcVar23, lVar17);
            LAB_001038e9:if (local_4c != 0) goto LAB_00103834;
         }

      }
 else {
         if (( ( bVar2 != 10 ) && ( bVar2 != 0xd ) ) && ( bVar2 != 9 )) goto LAB_0010377d;
         if (*(int*)( param_5[8] + 8 ) != 0) {
            LAB_00103991:pcVar23 = param_1 + 8;
            lVar17 = param_2 + -8;
            goto LAB_001038dd;
         }

      }

      LAB_001038f1:iVar14 = 0;
   }
 else {
      LAB_0010377d:uVar15 = *param_5;
      uVar18 = (uint)uVar15;
      if (( uVar15 & 0x20 ) == 0) {
         iVar14 = strncmp(param_1, "CHARS", 5);
         if (( ( iVar14 == 0 ) && ( (byte)param_1[5] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[5] & 0x3f ) & 1 ) == 0 )) {
            param_5[0xb] = 0;
            if (param_5[10] != 0) {
               puVar5 = (undefined8*)param_5[9];
               puVar5[4] = &empty;
               *puVar5 = puVar7;
               for (int i = 0; i < 3; i++) {
                  puVar5[( i + 1 )] = puVar7;
               }

            }

            if (( ( param_2 == 0 ) || ( *param_1 == '\0' ) ) || ( local_4c = local_4c == 0 )) {
               uVar15 = bdf_atoul_(*(undefined8*)( param_5[9] + 8 ));
               *(ulong*)( uVar24 + 0x50 ) = uVar15;
               param_5[1] = uVar15;
               uVar21 = param_5[0xe] / 0x14;
               if (uVar21 < uVar15) {
                  *(ulong*)( uVar24 + 0x50 ) = uVar21;
                  param_5[1] = uVar21;
                  uVar15 = uVar21;
               }

               if (uVar15 == 0) {
                  *(undefined8*)( uVar24 + 0x50 ) = 0x40;
                  uVar19 = 0x40;
               }
 else {
                  if (0x10ffff < uVar15) {
                     local_4c = 6;
                     uVar21 = ( ulong )(( uint ) * param_5 & 0x40);
                     iVar14 = local_4c;
                     goto joined_r0x001038b2;
                  }

                  uVar19 = *(undefined8*)( uVar24 + 0x50 );
               }

               uVar19 = ft_mem_realloc(uVar4, 0x38, 0, uVar19, 0, &local_4c);
               *(undefined8*)( uVar24 + 0x60 ) = uVar19;
               if (local_4c == 0) {
                  *param_5 = *param_5 | 0x20;
                  goto LAB_001038f1;
               }

            }

            goto LAB_00103834;
         }

         local_4c = 0xb4;
         uVar21 = ( ulong )(uVar18 & 0x40);
         iVar14 = local_4c;
      }
 else {
         iVar14 = strncmp(param_1, "ENDFONT", 7);
         if (iVar14 == 0) {
            if (( (byte)param_1[7] < 0x21 ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[7] & 0x3f ) & 1 ) == 0 )) {
               if (( uVar15 & 0xfc0 ) == 0) {
                  qsort(*(void**)( uVar24 + 0x60 ), *(size_t*)( uVar24 + 0x58 ), 0x38, by_encoding);
                  *param_5 = *param_5 & 0xfffffffe;
                  *param_4 = bdf_parse_end_;
                  goto LAB_001038e9;
               }

               local_4c = 0xba;
               uVar21 = ( ulong )(uVar18 & 0x40);
               iVar14 = local_4c;
               goto joined_r0x001038b2;
            }

         }
 else {
            iVar14 = strncmp(param_1, "ENDCHAR", 7);
            if (( ( iVar14 == 0 ) && ( (byte)param_1[7] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[7] & 0x3f ) & 1 ) == 0 )) {
               param_5[6] = 0;
               *param_5 = ( ulong )(uVar18 & 0xfffff03f);
               goto LAB_001038f1;
            }

         }

         uVar21 = ( ulong )(uVar18 & 0x40);
         if (( ( ( uVar15 & 0x40 ) != 0 ) && ( param_5[6] == 0xffffffffffffffff ) ) && ( *(int*)( param_5[8] + 4 ) == 0 )) goto LAB_001038f1;
         iVar14 = strncmp(param_1, "STARTCHAR", 9);
         if (( ( iVar14 == 0 ) && ( (byte)param_1[9] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[9] & 0x3f ) & 1 ) == 0 )) {
            iVar14 = 0xb5;
            if (( uVar15 & 0xfc0 ) == 0) {
               puVar1 = param_5 + 9;
               ft_mem_free(uVar4, param_5[5]);
               param_5[5] = 0;
               param_5[0xb] = 0;
               if (param_5[10] != 0) {
                  puVar5 = (undefined8*)param_5[9];
                  puVar5[4] = &empty;
                  *puVar5 = puVar7;
                  for (int i = 0; i < 3; i++) {
                     puVar5[( i + 1 )] = puVar7;
                  }

               }

               if (( param_2 == 0 ) || ( *param_1 == '\0' )) {
                  local_4c = 0;
               }
 else {
                  local_4c = bdf_list_split__part_0(puVar1, &_LC9, param_1, param_2);
                  if (local_4c != 0) goto LAB_00103834;
               }

               bdf_list_shift__constprop_0(puVar1);
               __src = (void*)bdf_list_join__constprop_0(puVar1, &local_48);
               if (__src != (void*)0x0) {
                  __dest = (void*)ft_mem_qalloc(uVar4, local_48 + 1U, &local_4c);
                  param_5[5] = (ulong)__dest;
                  if (local_4c == 0) {
                     memcpy(__dest, __src, local_48 + 1U);
                     *param_5 = *param_5 | 0x40;
                     goto LAB_001038e9;
                  }

                  goto LAB_00103834;
               }

               local_4c = 3;
               uVar21 = ( ulong )(( uint ) * param_5 & 0x40);
               iVar14 = local_4c;
            }

            goto joined_r0x001038b2;
         }

         iVar14 = strncmp(param_1, "ENCODING", 8);
         if (( ( iVar14 == 0 ) && ( (byte)param_1[8] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[8] & 0x3f ) & 1 ) == 0 )) {
            iVar14 = 0xb5;
            if (uVar21 == 0) goto joined_r0x001038b2;
            param_5[0xb] = 0;
            if (param_5[10] != 0) {
               puVar5 = (undefined8*)param_5[9];
               puVar5[4] = &empty;
               *puVar5 = puVar7;
               for (int i = 0; i < 3; i++) {
                  puVar5[( i + 1 )] = puVar7;
               }

            }

            if (( ( param_2 != 0 ) && ( *param_1 != '\0' ) ) && ( local_4c = local_4c != 0 )) goto LAB_00103834;
            uVar15 = param_5[9];
            uVar21 = bdf_atol_(*(undefined8*)( uVar15 + 8 ));
            if ((long)uVar21 < -1) {
               param_5[6] = 0xffffffffffffffff;
               LAB_00104216:if (param_5[0xb] < 3) {
                  uVar21 = param_5[6];
               }
 else {
                  uVar21 = bdf_atol_(*(undefined8*)( uVar15 + 0x10 ));
                  if (0x110000 < uVar21 + 1) goto LAB_00103ae8;
               }

               param_5[6] = uVar21;
               if ((long)uVar21 < 0) goto LAB_00103af0;
               LAB_00104232:lVar17 = *(long*)( uVar24 + 0x58 );
               lVar16 = *(long*)( uVar24 + 0x60 );
               if (lVar17 == *(long*)( uVar24 + 0x50 )) {
                  lVar16 = ft_mem_realloc(uVar4, 0x38, lVar17, lVar17 + 0x40, lVar16, &local_4c);
                  *(long*)( uVar24 + 0x60 ) = lVar16;
                  if (local_4c != 0) goto LAB_00103834;
                  *(long*)( uVar24 + 0x50 ) = *(long*)( uVar24 + 0x50 ) + 0x40;
                  lVar17 = *(long*)( uVar24 + 0x58 );
                  uVar21 = param_5[6];
               }

               *(long*)( uVar24 + 0x58 ) = lVar17 + 1;
               puVar1 = (ulong*)( lVar16 + lVar17 * 0x38 );
               uVar24 = param_5[5];
               puVar1[1] = uVar21;
               *puVar1 = uVar24;
            }
 else {
               param_5[6] = uVar21;
               if (uVar21 == 0xffffffffffffffff) goto LAB_00104216;
               if (uVar21 + 1 < 0x110001) goto LAB_00104232;
               LAB_00103ae8:param_5[6] = 0xffffffffffffffff;
               LAB_00103af0:if (*(int*)( param_5[8] + 4 ) == 0) {
                  ft_mem_free(uVar4, param_5[5]);
               }
 else {
                  uVar15 = *(ulong*)( uVar24 + 0x70 );
                  lVar17 = *(long*)( uVar24 + 0x78 );
                  if (uVar15 == *(ulong*)( uVar24 + 0x68 )) {
                     lVar17 = ft_mem_realloc(uVar4, 0x38, uVar15, uVar15 + 4, lVar17, &local_4c);
                     *(long*)( uVar24 + 0x78 ) = lVar17;
                     if (local_4c != 0) goto LAB_00103834;
                     *(long*)( uVar24 + 0x68 ) = *(long*)( uVar24 + 0x68 ) + 4;
                     uVar15 = *(ulong*)( uVar24 + 0x70 );
                  }

                  puVar1 = (ulong*)( lVar17 + uVar15 * 0x38 );
                  *puVar1 = param_5[5];
                  *(ulong*)( uVar24 + 0x70 ) = uVar15 + 1;
                  puVar1[1] = uVar15;
               }

            }

            param_5[5] = 0;
            *param_5 = *param_5 & 0xffffffff3fffffff | 0x80;
            goto LAB_001038e9;
         }

         iVar14 = 0xb6;
         if (( uVar15 & 0x80 ) == 0) goto joined_r0x001038b2;
         if (param_5[6] == 0xffffffffffffffff) {
            lVar17 = *(long*)( uVar24 + 0x78 ) + -0x38 + *(long*)( uVar24 + 0x70 ) * 0x38;
         }
 else {
            lVar17 = *(long*)( uVar24 + 0x60 ) + -0x38 + *(long*)( uVar24 + 0x58 ) * 0x38;
         }

         if (( uVar15 & 0x800 ) != 0) {
            if (( ulong ) * (ushort*)( lVar17 + 0x16 ) <= param_5[2]) {
               if (( uVar15 & 0x80000000 ) == 0) {
                  *param_5 = uVar15 | 0x80000000;
               }

               goto LAB_001038f1;
            }

            lVar16 = *(long*)( lVar17 + 0x28 );
            pbVar20 = (byte*)( param_5[2] * lVar16 + *(long*)( lVar17 + 0x20 ) );
            uVar15 = lVar16 * 2;
            if (uVar15 == 0) {
               if (*(ushort*)( lVar17 + 0x14 ) != 0) {
                  *pbVar20 = *pbVar20 & *(byte*)( (long)&nibble_mask + ( ulong )(( uint ) * (ushort*)( uVar24 + 0xb0 ) * ( uint ) * (ushort*)( lVar17 + 0x14 ) & 7) );
               }

               LAB_001043c9:if (( ( (byte)hdigits[(byte)param_1[lVar16 * 2] >> 3] >> ( param_1[lVar16 * 2] & 7U ) & 1 ) != 0 ) && ( ( *param_5 & 0x40000000 ) == 0 )) {
                  *param_5 = *param_5 | 0x40000000;
               }

            }
 else {
               uVar24 = 0;
               while (bVar2 = param_1[uVar24],( (byte)hdigits[bVar2 >> 3] >> ( (int)(char)bVar2 & 7U ) & 1 ) != 0) {
                  *pbVar20 = *pbVar20 * '\x10' + a2i[(int)(char)bVar2];
                  uVar21 = uVar24 + 1;
                  if (uVar21 == uVar15) {
                     if (*(ushort*)( lVar17 + 0x14 ) == 0) goto LAB_001043c9;
                     uVar21 = ( ulong )(( uint ) * (ushort*)( param_5[7] + 0xb0 ) * ( uint ) * (ushort*)( lVar17 + 0x14 ) & 7);
                     uVar24 = uVar15;
                     goto LAB_0010404d;
                  }

                  uVar6 = uVar24 & 1;
                  uVar24 = uVar21;
                  if (uVar6 != 0) {
                     pbVar20[1] = 0;
                     pbVar20 = pbVar20 + 1;
                  }

               }
;
               uVar11 = *(ushort*)( lVar17 + 0x14 );
               uVar21 = ( ulong )(( uint ) * (ushort*)( param_5[7] + 0xb0 ) * (uint)uVar11 & 7);
               if (uVar24 < uVar15) {
                  if (( *param_5 & 0x40000000 ) == 0) {
                     *param_5 = *param_5 | 0x40000000;
                  }

                  if (uVar11 != 0) {
                     LAB_0010404d:*pbVar20 = *pbVar20 & *(byte*)( (long)&nibble_mask + uVar21 );
                     goto LAB_0010405a;
                  }

               }
 else {
                  if (uVar11 != 0) goto LAB_0010404d;
                  LAB_0010405a:if (uVar15 == uVar24) goto LAB_001043c9;
               }

            }

            param_5[2] = param_5[2] + 1;
            goto LAB_001038e9;
         }

         iVar14 = strncmp(param_1, "SWIDTH", 6);
         if (iVar14 == 0) {
            if (( (byte)param_1[6] < 0x21 ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[6] & 0x3f ) & 1 ) == 0 )) {
               param_5[0xb] = 0;
               if (param_5[10] != 0) {
                  puVar5 = (undefined8*)param_5[9];
                  puVar5[4] = &empty;
                  *puVar5 = puVar7;
                  for (int i = 0; i < 3; i++) {
                     puVar5[( i + 1 )] = puVar7;
                  }

               }

               if (( ( param_2 == 0 ) || ( *param_1 == '\0' ) ) || ( local_4c = local_4c == 0 )) {
                  uVar8 = bdf_atous_(*(undefined8*)( param_5[9] + 8 ));
                  *(undefined2*)( lVar17 + 0x10 ) = uVar8;
                  *param_5 = *param_5 | 0x100;
                  goto LAB_001038f1;
               }

            }
 else {
               LAB_00104071:if (( *param_1 != 'B' ) || ( ( ( ( param_1[1] != 'B' || ( param_1[2] != 'X' ) ) || ( 0x20 < (byte)param_1[3] ) ) || ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[3] & 0x3f ) & 1 ) != 0 ) ) )) {
                  iVar14 = strncmp(param_1, "BITMAP", 6);
                  if (( ( iVar14 == 0 ) && ( (byte)param_1[6] < 0x21 ) ) && ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[6] & 0x3f ) & 1 ) == 0 )) {
                     if (( uVar15 & 0x400 ) == 0) {
                        iVar14 = 0xb7;
                     }
 else {
                        iVar14 = (int)( ( uint ) * (ushort*)( lVar17 + 0x14 ) * ( uint ) * (ushort*)( uVar24 + 0xb0 ) + 7 ) >> 3;
                        uVar24 = ( ulong ) * (ushort*)( lVar17 + 0x16 ) * (long)iVar14;
                        *(long*)( lVar17 + 0x28 ) = (long)iVar14;
                        if (( uVar24 < 0x10000 ) && ( iVar14 < 0x10000 )) {
                           *(short*)( lVar17 + 0x30 ) = (short)uVar24;
                           uVar19 = ft_mem_alloc(uVar4, uVar24, &local_4c);
                           *(undefined8*)( lVar17 + 0x20 ) = uVar19;
                           if (local_4c == 0) {
                              *param_5 = *param_5 | 0x800;
                              param_5[2] = 0;
                              goto LAB_001038f1;
                           }

                           goto LAB_00103834;
                        }

                        iVar14 = 0xb8;
                     }

                  }
 else {
                     iVar14 = 3;
                  }

                  goto joined_r0x001038b2;
               }

               param_5[0xb] = 0;
               if (param_5[10] != 0) {
                  puVar5 = (undefined8*)param_5[9];
                  puVar5[4] = &empty;
                  *puVar5 = puVar7;
                  for (int i = 0; i < 3; i++) {
                     puVar5[( i + 1 )] = puVar7;
                  }

               }

               if (( ( param_2 == 0 ) || ( *param_1 == '\0' ) ) || ( local_4c = local_4c == 0 )) {
                  uVar15 = param_5[9];
                  sVar9 = bdf_atous_(*(undefined8*)( uVar15 + 8 ));
                  uVar19 = *(undefined8*)( uVar15 + 0x10 );
                  *(short*)( lVar17 + 0x14 ) = sVar9;
                  sVar10 = bdf_atous_(uVar19);
                  uVar19 = *(undefined8*)( uVar15 + 0x18 );
                  *(short*)( lVar17 + 0x16 ) = sVar10;
                  uVar11 = bdf_atos_(uVar19);
                  uVar19 = *(undefined8*)( uVar15 + 0x20 );
                  *(ushort*)( lVar17 + 0x18 ) = uVar11;
                  sVar12 = bdf_atos_(uVar19);
                  sVar13 = *(short*)( (long)param_5 + 0x1e );
                  sVar22 = uVar11 + sVar9;
                  sVar3 = *(short*)( (long)param_5 + 0x1c );
                  *(short*)( lVar17 + 0x1a ) = sVar12;
                  sVar10 = sVar10 + sVar12;
                  sVar12 = -sVar12;
                  *(short*)( lVar17 + 0x1c ) = sVar10;
                  if (sVar10 < sVar13) {
                     sVar10 = sVar13;
                  }

                  uVar15 = param_5[4];
                  *(short*)( lVar17 + 0x1e ) = sVar12;
                  *(short*)( (long)param_5 + 0x22 ) = sVar22;
                  sVar13 = (short)uVar15;
                  if ((short)uVar15 < sVar12) {
                     sVar13 = sVar12;
                  }

                  *(short*)( param_5 + 4 ) = sVar13;
                  uVar15 = (ulong)(ushort)param_5[3];
                  if ((short)uVar11 <= (short)(ushort)param_5[3]) {
                     uVar15 = (ulong)uVar11;
                  }

                  uVar21 = ( ulong ) * (ushort*)( (long)param_5 + 0x1a );
                  if ((short)*(ushort*)( (long)param_5 + 0x1a ) <= (short)uVar11) {
                     uVar21 = (ulong)uVar11;
                  }

                  if (sVar22 < sVar3) {
                     sVar22 = sVar3;
                  }

                  param_5[3] = ( (ulong)CONCAT22(sVar10, sVar22) << 0x10 | uVar21 ) << 0x10 | uVar15;
                  if (( *param_5 & 0x200 ) == 0) {
                     *(short*)( lVar17 + 0x12 ) = sVar9;
                  }

                  if (( *(int*)param_5[8] != 0 ) && ( sVar13 = FT_MulDiv(*(undefined2*)( lVar17 + 0x12 ), 72000, *(long*)( uVar24 + 0x18 ) * *(long*)( uVar24 + 0x20 )) * (short*)( lVar17 + 0x10 ) != sVar13 )) {
                     *(short*)( lVar17 + 0x10 ) = sVar13;
                     *param_5 = *param_5 | 0x1000;
                  }

                  *param_5 = *param_5 | 0x400;
                  goto LAB_001038e9;
               }

            }

         }
 else {
            iVar14 = strncmp(param_1, "DWIDTH", 6);
            if (( ( iVar14 != 0 ) || ( 0x20 < (byte)param_1[6] ) ) || ( ( 0xfffffffeffffd9feU >> ( (ulong)(byte)param_1[6] & 0x3f ) & 1 ) != 0 )) goto LAB_00104071;
            param_5[0xb] = 0;
            if (param_5[10] != 0) {
               puVar5 = (undefined8*)param_5[9];
               puVar5[4] = &empty;
               *puVar5 = puVar7;
               for (int i = 0; i < 3; i++) {
                  puVar5[( i + 1 )] = puVar7;
               }

            }

            if (( ( param_2 == 0 ) || ( *param_1 == '\0' ) ) || ( local_4c = local_4c == 0 )) {
               uVar8 = bdf_atous_(*(undefined8*)( param_5[9] + 8 ));
               *(undefined2*)( lVar17 + 0x12 ) = uVar8;
               if (( *param_5 & 0x100 ) == 0) {
                  uVar8 = FT_MulDiv(uVar8, 72000, *(long*)( uVar24 + 0x18 ) * *(long*)( uVar24 + 0x20 ));
                  *(undefined2*)( lVar17 + 0x10 ) = uVar8;
               }

               *param_5 = *param_5 | 0x200;
               goto LAB_001038e9;
            }

         }

         LAB_00103834:uVar21 = *param_5 & 0x40;
         iVar14 = local_4c;
      }

      joined_r0x001038b2:local_4c = iVar14;
      iVar14 = local_4c;
      if (uVar21 != 0) {
         ft_mem_free(uVar4, param_5[5]);
         param_5[5] = 0;
         iVar14 = local_4c;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar14;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}


undefined8 t42_get_ps_font_name(long param_1) {
   return *(undefined8*)( param_1 + 0x218 );
}
undefined8 t42_ps_get_font_info(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x100 );
   *param_2 = *(undefined8*)( param_1 + 0xf8 );
   param_2[1] = uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x110 );
   param_2[2] = *(undefined8*)( param_1 + 0x108 );
   param_2[3] = uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x120 );
   param_2[4] = *(undefined8*)( param_1 + 0x118 );
   param_2[5] = uVar1;
   param_2[6] = *(undefined8*)( param_1 + 0x128 );
   return 0;
}
undefined8 t42_ps_get_font_extra(long param_1, undefined2 *param_2) {
   *param_2 = *(undefined2*)( param_1 + 0x130 );
   return 0;
}
undefined8 t42_ps_has_glyph_names(void) {
   return 1;
}
void T42_Driver_Done(void) {
   return;
}
void T42_Size_Select(long *param_1, undefined4 param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   lVar1 = *param_1;
   FT_Activate_Size(param_1[0xb]);
   iVar3 = FT_Select_Size(*(undefined8*)( lVar1 + 0x328 ), param_2);
   if (iVar3 == 0) {
      lVar1 = *(long*)( *(long*)( lVar1 + 0x328 ) + 0xa0 );
      for (int i = 0; i < 3; i++) {
         lVar2 = *(long*)( lVar1 + ( 16*i + 32 ) );
         param_1[( 2*i + 3 )] = *(long*)( lVar1 + ( 16*i + 24 ) );
         param_1[( 2*i + 4 )] = lVar2;
      }

      param_1[9] = *(long*)( lVar1 + 0x48 );
   }

   return;
}
void T42_Size_Request(long *param_1, undefined8 param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   lVar1 = *param_1;
   FT_Activate_Size(param_1[0xb]);
   iVar3 = FT_Request_Size(*(undefined8*)( lVar1 + 0x328 ), param_2);
   if (iVar3 == 0) {
      lVar1 = *(long*)( *(long*)( lVar1 + 0x328 ) + 0xa0 );
      for (int i = 0; i < 3; i++) {
         lVar2 = *(long*)( lVar1 + ( 16*i + 32 ) );
         param_1[( 2*i + 3 )] = *(long*)( lVar1 + ( 16*i + 24 ) );
         param_1[( 2*i + 4 )] = lVar2;
      }

      param_1[9] = *(long*)( lVar1 + 0x48 );
   }

   return;
}
void T42_GlyphSlot_Load(long param_1, long *param_2, uint param_3, uint param_4) {
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   int iVar12;
   ulong uVar13;
   lVar2 = *(long*)( *(long*)( *(long*)( param_1 + 8 ) + 0xb0 ) + 0x38 );
   uVar13 = strtol(*(char**)( *(long*)( *param_2 + 0x290 ) + (ulong)param_3 * 8 ), (char**)0x0, 10);
   lVar3 = *(long*)( param_1 + 0x130 );
   ft_glyphslot_free_bitmap(lVar3);
   *(undefined1(*) [16])( lVar3 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x50 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0xd8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x98 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0xa8 ) = (undefined1[16])0x0;
   *(undefined8*)( lVar3 + 0xe8 ) = 0;
   *(undefined8*)( lVar3 + 0xb8 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0xf8 ) = (undefined1[16])0x0;
   lVar4 = param_2[0xb];
   uVar5 = *(undefined8*)( param_1 + 0x130 );
   *(undefined8*)( lVar3 + 0xc0 ) = 0;
   *(undefined4*)( lVar3 + 0xf0 ) = 0;
   *(undefined8*)( lVar3 + 0x108 ) = 0;
   *(undefined8*)( lVar3 + 0x120 ) = 0;
   *(undefined4*)( lVar3 + 0x90 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0x70 ) = (undefined1[16])0x0;
   iVar12 = ( **(code**)( lVar2 + 0x90 ) )(uVar5, lVar4, uVar13 & 0xffffffff, param_4 | 8);
   if (iVar12 == 0) {
      lVar2 = *(long*)( param_1 + 0x130 );
      uVar5 = *(undefined8*)( lVar2 + 0x38 );
      uVar6 = *(undefined8*)( lVar2 + 200 );
      uVar7 = *(undefined8*)( lVar2 + 0xd0 );
      uVar1 = *(undefined4*)( lVar2 + 0x90 );
      *(undefined8*)( param_1 + 0x30 ) = *(undefined8*)( lVar2 + 0x30 );
      *(undefined8*)( param_1 + 0x38 ) = uVar5;
      uVar5 = *(undefined8*)( lVar2 + 0x48 );
      uVar8 = *(undefined8*)( lVar2 + 0x98 );
      uVar9 = *(undefined8*)( lVar2 + 0xa0 );
      *(undefined8*)( param_1 + 0x40 ) = *(undefined8*)( lVar2 + 0x40 );
      *(undefined8*)( param_1 + 0x48 ) = uVar5;
      uVar5 = *(undefined8*)( lVar2 + 0x58 );
      *(undefined8*)( param_1 + 0x50 ) = *(undefined8*)( lVar2 + 0x50 );
      *(undefined8*)( param_1 + 0x58 ) = uVar5;
      uVar5 = *(undefined8*)( lVar2 + 0x68 );
      *(undefined8*)( param_1 + 0x60 ) = *(undefined8*)( lVar2 + 0x60 );
      *(undefined8*)( param_1 + 0x68 ) = uVar5;
      uVar10 = *(undefined8*)( lVar2 + 0x70 );
      uVar11 = *(undefined8*)( lVar2 + 0x78 );
      *(undefined8*)( param_1 + 200 ) = uVar6;
      *(undefined8*)( param_1 + 0xd0 ) = uVar7;
      uVar5 = *(undefined8*)( lVar2 + 0xd8 );
      uVar6 = *(undefined8*)( lVar2 + 0xe0 );
      *(undefined4*)( param_1 + 0x90 ) = uVar1;
      *(undefined8*)( param_1 + 0xd8 ) = uVar5;
      *(undefined8*)( param_1 + 0xe0 ) = uVar6;
      uVar5 = *(undefined8*)( lVar2 + 0xe8 );
      *(undefined8*)( param_1 + 0x98 ) = uVar8;
      *(undefined8*)( param_1 + 0xa0 ) = uVar9;
      uVar6 = *(undefined8*)( lVar2 + 0xa8 );
      uVar7 = *(undefined8*)( lVar2 + 0xb0 );
      *(undefined8*)( param_1 + 0xe8 ) = uVar5;
      *(undefined8*)( param_1 + 0xa8 ) = uVar6;
      *(undefined8*)( param_1 + 0xb0 ) = uVar7;
      uVar5 = *(undefined8*)( lVar2 + 0xb8 );
      *(undefined8*)( param_1 + 0x70 ) = uVar10;
      *(undefined8*)( param_1 + 0x78 ) = uVar11;
      *(undefined8*)( param_1 + 0xb8 ) = uVar5;
      *(undefined8*)( param_1 + 0xc0 ) = *(undefined8*)( lVar2 + 0xc0 );
      *(undefined4*)( param_1 + 0xf0 ) = *(undefined4*)( lVar2 + 0xf0 );
      uVar5 = *(undefined8*)( lVar2 + 0x100 );
      *(undefined8*)( param_1 + 0xf8 ) = *(undefined8*)( lVar2 + 0xf8 );
      *(undefined8*)( param_1 + 0x100 ) = uVar5;
      *(undefined8*)( param_1 + 0x108 ) = *(undefined8*)( lVar2 + 0x108 );
   }

   return;
}
void T42_GlyphSlot_Done(long param_1) {
   *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x128 ) = 0;
   FT_Done_GlyphSlot();
   return;
}
int T42_GlyphSlot_Init(long param_1) {
   long lVar1;
   undefined8 uVar2;
   int iVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( param_1 + 8 );
   uVar2 = *(undefined8*)( lVar1 + 0xb8 );
   if (*(long*)( lVar1 + 0x98 ) == 0) {
      local_28 = *(long*)( *(long*)( lVar1 + 0x328 ) + 0x98 );
      iVar3 = 0;
      *(long*)( param_1 + 0x130 ) = local_28;
   }
 else {
      iVar3 = FT_New_GlyphSlot(*(long*)( lVar1 + 0x328 ), &local_28);
      if (iVar3 == 0) {
         *(long*)( param_1 + 0x130 ) = local_28;
      }
 else {
         local_28 = *(long*)( param_1 + 0x130 );
      }

   }

   FT_GlyphLoader_Done(**(undefined8**)( local_28 + 0x128 ));
   ft_mem_free(uVar2, *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x128 ));
   lVar1 = *(long*)( param_1 + 0x130 );
   *(undefined8*)( lVar1 + 0x128 ) = 0;
   *(undefined8*)( lVar1 + 0x128 ) = *(undefined8*)( param_1 + 0x128 );
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int T42_Size_Init(long *param_1) {
   int iVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = FT_New_Size(*(undefined8*)( *param_1 + 0x328 ), &local_28);
   if (iVar1 == 0) {
      param_1[0xb] = local_28;
   }

   FT_Activate_Size();
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void T42_Face_Done(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0xb8 );
      if (*(long*)( param_1 + 0x328 ) != 0) {
         FT_Done_Face();
      }

      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0xf8 ));
      *(undefined8*)( param_1 + 0xf8 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x100 ));
      *(undefined8*)( param_1 + 0x100 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x108 ));
      *(undefined8*)( param_1 + 0x108 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x110 ));
      *(undefined8*)( param_1 + 0x110 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x118 ));
      *(undefined8*)( param_1 + 0x118 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x298 ));
      *(undefined8*)( param_1 + 0x298 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x290 ));
      *(undefined8*)( param_1 + 0x290 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x288 ));
      *(undefined8*)( param_1 + 0x288 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x250 ));
      *(undefined8*)( param_1 + 0x250 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 600 ));
      *(undefined8*)( param_1 + 600 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x238 ));
      *(undefined8*)( param_1 + 0x238 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x240 ));
      *(undefined8*)( param_1 + 0x240 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x218 ));
      *(undefined8*)( param_1 + 0x218 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x318 ));
      *(undefined8*)( param_1 + 0x318 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x380 ));
      *(undefined8*)( param_1 + 0x380 ) = 0;
      *(undefined4*)( param_1 + 0x378 ) = 0;
      *(undefined1(*) [16])( param_1 + 0x28 ) = (undefined1[16])0x0;
      return;
   }

   return;
}
undefined8 T42_Driver_Init(long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)FT_Get_Module(*(undefined8*)( param_1 + 8 ), "truetype");
   if (puVar1 != (undefined8*)0x0) {
      *(undefined8*)( param_1 + 0x38 ) = *puVar1;
      return 0;
   }

   return 0xb;
}
void t42_parse_charstrings(long param_1, long *param_2) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   byte bVar4;
   undefined8 *puVar5;
   byte *pbVar6;
   byte *pbVar7;
   char *__s2;
   bool bVar8;
   bool bVar9;
   int iVar10;
   byte *pbVar11;
   long lVar12;
   long lVar13;
   int iVar14;
   ulong uVar15;
   ulong uVar16;
   int local_5c;
   uint local_44;
   puVar5 = *(undefined8**)( param_1 + 0x310 );
   lVar13 = param_2[4];
   pbVar6 = (byte*)param_2[2];
   ( *(code*)param_2[7] )(param_2);
   if ((byte*)*param_2 < pbVar6) {
      bVar4 = *(byte*)*param_2;
      if (bVar4 - 0x30 < 10) {
         iVar10 = ( *(code*)param_2[9] )(param_2);
         *(int*)( param_2 + 0x23 ) = iVar10;
         if ((int)param_2[3] != 0) {
            return;
         }

         if (-1 < iVar10) {
            lVar12 = (long)pbVar6 - *param_2 >> 2;
            if (lVar12 < iVar10) {
               *(int*)( param_2 + 0x23 ) = (int)lVar12;
            }

            if ((byte*)*param_2 < pbVar6) {
               LAB_0010077d:if (param_2[0x3f] == 0) {
                  plVar1 = param_2 + 0x30;
                  iVar10 = ( **(code**)*puVar5 )(plVar1, (int)param_2[0x23], lVar13);
                  if (iVar10 != 0) goto LAB_00100a43;
                  plVar2 = param_2 + 0x24;
                  iVar10 = ( **(code**)*puVar5 )(plVar2, (int)param_2[0x23], lVar13);
                  if (iVar10 != 0) goto LAB_00100a43;
                  plVar3 = param_2 + 0x3c;
                  iVar10 = ( **(code**)*puVar5 )(plVar3, 4, lVar13);
                  if (iVar10 != 0) goto LAB_00100a43;
                  bVar8 = false;
                  uVar16 = 0;
                  local_5c = 0;
                  do {
                     iVar14 = (int)uVar16;
                     do {
                        ( *(code*)param_2[7] )(param_2);
                        pbVar7 = (byte*)*param_2;
                        if (pbVar6 <= pbVar7) goto LAB_001008a8;
                        if (*pbVar7 == 0x65) {
                           if (( ( ( pbVar7 + 3 < pbVar6 ) && ( pbVar7[1] == 0x6e ) ) && ( pbVar7[2] == 100 ) ) && ( ( pbVar7[3] < 0x21 && ( ( 0x100003601U >> ( (ulong)pbVar7[3] & 0x3f ) & 1 ) != 0 ) ) )) goto LAB_001008a8;
                        }
 else if (*pbVar7 == 0x3e) goto LAB_001008a8;
                        ( *(code*)param_2[8] )(param_2);
                        pbVar11 = (byte*)*param_2;
                        if (pbVar6 <= pbVar11) goto LAB_00100a3d;
                        if ((int)param_2[3] != 0) {
                           return;
                        }

                        if (*pbVar7 == 0x2f) {
                           if (pbVar6 <= pbVar7 + 2) goto LAB_00100a3d;
                           bVar9 = false;
                           local_44 = (int)pbVar11 - ( (int)pbVar7 + 1 );
                           uVar15 = ( ulong )(local_44 + 1);
                           goto LAB_00100b03;
                        }

                     }
 while ( *pbVar7 != 0x28 );
                     if (pbVar6 <= pbVar7 + 3) goto LAB_00100a3d;
                     bVar9 = true;
                     local_44 = (int)( (long)pbVar11 - (long)( pbVar7 + 1 ) ) - 1;
                     uVar15 = (long)pbVar11 - (long)( pbVar7 + 1 ) & 0xffffffff;
                     LAB_00100b03:iVar10 = ( *(code*)param_2[0x2e] )(plVar2, uVar16 & 0xffffffff, pbVar7 + 1, uVar15);
                     if (iVar10 != 0) goto LAB_00100a43;
                     *(undefined1*)( *(long*)( param_2[0x29] + uVar16 * 8 ) + (ulong)local_44 ) = 0;
                     if (pbVar7[1] == 0x2e) {
                        iVar10 = strcmp(".notdef", *(char**)( param_2[0x29] + uVar16 * 8 ));
                        if (iVar10 == 0) {
                           local_5c = iVar14;
                        }

                        if (iVar10 == 0) {
                           bVar8 = true;
                        }

                     }

                     ( *(code*)param_2[7] )(param_2);
                     if (bVar9) {
                        ( *(code*)param_2[8] )(param_2);
                     }

                     lVar13 = *param_2;
                     ( *(code*)param_2[9] )(param_2);
                     if (pbVar6 <= (byte*)*param_2) goto LAB_00100a3d;
                     uVar15 = *param_2 - lVar13;
                     iVar10 = ( *(code*)param_2[0x3a] )(plVar1, uVar16 & 0xffffffff, lVar13, (int)uVar15 + 1);
                     if (iVar10 != 0) goto LAB_00100a43;
                     *(undefined1*)( *(long*)( param_2[0x35] + uVar16 * 8 ) + ( uVar15 & 0xffffffff ) ) = 0;
                     uVar16 = uVar16 + 1;
                  }
 while ( (int)uVar16 < (int)param_2[0x23] );
                  iVar14 = iVar14 + 1;
                  LAB_001008a8:*(int*)( param_2 + 0x23 ) = iVar14;
                  if (bVar8) {
                     __s2 = *(char**)param_2[0x29];
                     iVar10 = strcmp(".notdef", __s2);
                     if (iVar10 == 0) {
                        return;
                     }

                     iVar10 = ( *(code*)param_2[0x46] )(plVar3, 0, __s2, *(undefined4*)param_2[0x2a]);
                     if (( iVar10 == 0 ) && ( iVar10 = ( *(code*)param_2[0x46] )(plVar3, 1, *(undefined8*)param_2[0x35], *(undefined4*)param_2[0x36]) ),iVar10 == 0) {
                        lVar13 = (long)local_5c;
                        iVar10 = ( *(code*)param_2[0x46] )(plVar3, 2, *(undefined8*)( param_2[0x29] + lVar13 * 8 ), *(undefined4*)( param_2[0x2a] + lVar13 * 4 ));
                        if (( iVar10 == 0 ) && ( ( ( ( iVar10 = ( *(code*)param_2[0x46] )(plVar3, 3, *(undefined8*)( param_2[0x35] + lVar13 * 8 ), *(undefined4*)( param_2[0x36] + lVar13 * 4 )) ),iVar10 == 0 && ( iVar10 = ( *(code*)param_2[0x2e] )(plVar2, local_5c, *(undefined8*)param_2[0x41], *(undefined4*)param_2[0x42]) ),iVar10 == 0 ) ) && ( iVar10 = ( *(code*)param_2[0x3a] )(plVar1, local_5c, *(undefined8*)( param_2[0x41] + 8 ), *(undefined4*)( param_2[0x42] + 4 )) ),iVar10 == 0 )) &&( ( iVar10 = ( *(code*)param_2[0x2e] )(plVar2, 0, *(undefined8*)( param_2[0x41] + 0x10 ), *(undefined4*)( param_2[0x42] + 8 )) ),iVar10 == 0 && ( iVar10 = ( *(code*)param_2[0x3a] )(plVar1, 0, *(undefined8*)( param_2[0x41] + 0x18 ), *(undefined4*)( param_2[0x42] + 0xc )) ),iVar10 == 0 );
                     }

                  }

                  goto LAB_00100a43;
               }

            }

         }

      }

   }
 else if (bVar4 == 0x3c) {
      ( *(code*)param_2[8] )(param_2);
      if ((int)param_2[3] != 0) {
         return;
      }

      ( *(code*)param_2[7] )(param_2);
      pbVar7 = (byte*)*param_2;
      if (pbVar7 < pbVar6) {
         iVar10 = 0;
         pbVar11 = pbVar7;
         do {
            if (*pbVar11 == 0x2f) {
               iVar10 = iVar10 + 1;
            }
 else if (*pbVar11 == 0x3e) {
               *(int*)( param_2 + 0x23 ) = iVar10;
               *param_2 = (long)pbVar7;
               goto LAB_0010077d;
            }

            ( *(code*)param_2[8] )(param_2);
            if ((int)param_2[3] != 0) {
               return;
            }

            ( *(code*)param_2[7] )(param_2);
            pbVar11 = (byte*)*param_2;
         }
 while ( pbVar11 < pbVar6 );
      }

   }

}
LAB_00100a3d:iVar10 = 3;LAB_00100a43:*(int*)( param_2 + 3 ) = iVar10;return;}long t42_get_name_index(long param_1, char *param_2) {
   char cVar1;
   int iVar2;
   char *__s2;
   int iVar3;
   long lVar4;
   long lVar5;
   iVar2 = *(int*)( param_1 + 0x280 );
   if (0 < iVar2) {
      lVar4 = *(long*)( param_1 + 0x288 );
      cVar1 = *param_2;
      lVar5 = 0;
      do {
         __s2 = *(char**)( lVar4 + lVar5 );
         if (cVar1 == *__s2) {
            iVar3 = strcmp(param_2, __s2);
            if (iVar3 == 0) {
               lVar4 = strtol(*(char**)( *(long*)( param_1 + 0x290 ) + lVar5 ), (char**)0x0, 10);
               return lVar4;
            }

         }

         lVar5 = lVar5 + 8;
      }
 while ( (long)iVar2 * 8 != lVar5 );
   }

   return 0;
}
void t42_parse_sfnts(long param_1, long *param_2) {
   byte bVar1;
   long lVar2;
   byte *pbVar3;
   bool bVar4;
   int iVar5;
   uint uVar6;
   undefined8 uVar7;
   ulong uVar8;
   long lVar9;
   undefined1 *puVar10;
   long lVar11;
   long lVar12;
   ulong uVar13;
   byte *pbVar14;
   undefined1 *puVar15;
   long lVar16;
   int iVar17;
   long lVar18;
   long in_FS_OFFSET;
   long local_68;
   int local_4c;
   ulong local_48;
   long local_40;
   lVar2 = param_2[4];
   pbVar3 = (byte*)param_2[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ft_mem_free(lVar2, *(undefined8*)( param_1 + 0x318 ));
   *(undefined8*)( param_1 + 0x318 ) = 0;
   *(undefined8*)( param_1 + 800 ) = 0;
   ( *(code*)param_2[7] )(param_2);
   pbVar14 = (byte*)*param_2;
   if (( pbVar14 < pbVar3 ) && ( *param_2 = (long)( pbVar14 + 1 ) * pbVar14 == 0x5b )) {
      ( *(code*)param_2[7] )(param_2);
      uVar7 = ft_mem_qalloc(lVar2, 0xc, &local_4c);
      *(undefined8*)( param_1 + 0x318 ) = uVar7;
      if (local_4c == 0) {
         pbVar14 = (byte*)*param_2;
         if (pbVar14 < pbVar3) {
            puVar10 = (undefined1*)0x0;
            iVar5 = 0;
            iVar17 = 0;
            bVar4 = false;
            uVar8 = 0;
            lVar12 = 0xc;
            local_68 = 0;
            lVar18 = 0;
            do {
               bVar1 = *pbVar14;
               if (bVar1 == 0x5d) {
                  lVar12 = param_2[3];
                  *param_2 = (long)( pbVar14 + 1 );
                  *(long*)( param_1 + 800 ) = lVar18;
                  if ((int)lVar12 == 0) goto LAB_0010119e;
                  LAB_00101238:lVar9 = *(long*)( param_1 + 0x318 );
                  goto LAB_0010116f;
               }

               if (bVar1 == 0x3c) {
                  if (( puVar10 == (undefined1*)0x0 ) || ( bVar4 )) {
                     ( *(code*)param_2[8] )(param_2);
                     if ((int)param_2[3] != 0) {
                        lVar9 = *(long*)( param_1 + 0x318 );
                        goto LAB_0010116f;
                     }

                     lVar9 = (long)( ~(ulong)pbVar14 + *param_2 ) / 2;
                     if (lVar9 != 0) {
                        puVar10 = (undefined1*)ft_mem_qrealloc(lVar2, 1, local_68, lVar9, puVar10, &local_4c);
                        if (local_4c == 0) {
                           *param_2 = (long)pbVar14;
                           ( *(code*)param_2[0xb] )(param_2, puVar10, lVar9, &local_48, 1);
                           bVar4 = true;
                           uVar8 = local_48;
                           local_68 = lVar9;
                           goto LAB_001010c9;
                        }

                        LAB_00101234:*(int*)( param_2 + 3 ) = local_4c;
                        goto LAB_00101238;
                     }

                  }

                  LAB_00100ffc:local_4c = 3;
                  *(undefined4*)( param_2 + 3 ) = 3;
                  lVar9 = *(long*)( param_1 + 0x318 );
                  goto LAB_0010116f;
               }

               if (bVar1 - 0x30 < 10) {
                  if (bVar4) {
                     *(undefined4*)( param_2 + 3 ) = 3;
                     local_4c = 3;
                     ft_mem_free(lVar2, *(undefined8*)( param_1 + 0x318 ));
                     *(undefined8*)( param_1 + 0x318 ) = 0;
                     *(undefined8*)( param_1 + 800 ) = 0;
                     goto LAB_001011a6;
                  }

                  uVar8 = ( *(code*)param_2[9] )(param_2);
                  if ((long)uVar8 < 0) goto LAB_00100f90;
                  ( *(code*)param_2[8] )(param_2);
                  if ((int)param_2[3] != 0) goto LAB_00100fc6;
                  lVar9 = *param_2;
                  puVar10 = (undefined1*)( lVar9 + 1 );
                  if (( ulong )((long)pbVar3 - lVar9) <= uVar8) goto LAB_00100f90;
                  *param_2 = lVar9 + 1 + uVar8;
               }
 else {
                  LAB_001010c9:if (puVar10 == (undefined1*)0x0) goto LAB_00100ffc;
               }

               uVar13 = uVar8;
               if (( ( ( uVar8 & 1 ) == 0 ) || ( uVar13 = uVar8 - 1 ),puVar10[uVar8 - 1] == '\0' )) goto LAB_00100ffc;
               uVar13 = (long)pbVar3 - *param_2;
               puVar15 = puVar10;
               do {
                  if (iVar17 == 1) {
                     lVar9 = *(long*)( param_1 + 0x318 );
                     lVar16 = lVar12;
                     joined_r0x001010ed:if (lVar18 < lVar16) {
                        *(undefined1*)( lVar9 + lVar18 ) = *puVar15;
                        lVar18 = lVar18 + 1;
                        iVar17 = 1;
                        lVar12 = lVar16;
                     }
 else {
                        lVar12 = lVar16;
                        if (iVar5 != 0) {
                           lVar11 = lVar9;
                           do {
                              uVar6 = *(uint*)( lVar11 + 0x18 );
                              uVar6 = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
                              if (( uVar13 < uVar6 ) || ( (long)( uVar13 - uVar6 ) < lVar12 )) goto LAB_00101146;
                              lVar11 = lVar11 + 0x10;
                              lVar12 = lVar12 + ( ulong )(uVar6 + 3 & 0xfffffffc);
                           }
 while ( (long)iVar5 * 0x10 + lVar9 != lVar11 );
                        }

                        lVar12 = lVar12 + 1;
                        uVar7 = ft_mem_qrealloc(lVar2, 1, lVar16, lVar12, lVar9, &local_4c);
                        *(undefined8*)( param_1 + 0x318 ) = uVar7;
                        if (local_4c != 0) goto LAB_00101234;
                        LAB_00100f69:if (lVar12 <= lVar18) {
                           LAB_00101146:local_4c = 3;
                           lVar9 = *(long*)( param_1 + 0x318 );
                           *(undefined4*)( param_2 + 3 ) = 3;
                           goto LAB_0010116f;
                        }

                        *(undefined1*)( *(long*)( param_1 + 0x318 ) + lVar18 ) = *puVar15;
                        lVar18 = lVar18 + 1;
                        iVar17 = 2;
                     }

                  }
 else {
                     if (iVar17 == 2) goto LAB_00100f69;
                     if (iVar17 == 0) {
                        lVar9 = *(long*)( param_1 + 0x318 );
                        if (0xb < lVar18) {
                           iVar5 = ( uint ) * (byte*)( lVar9 + 4 ) * 0x10 + ( uint ) * (byte*)( lVar9 + 5 );
                           lVar16 = (long)( iVar5 * 0x10 + 0xc );
                           if (lVar16 <= (long)uVar13) {
                              lVar9 = ft_mem_qrealloc(lVar2, 1, lVar12, lVar16, lVar9, &local_4c);
                              *(long*)( param_1 + 0x318 ) = lVar9;
                              if (local_4c == 0) goto joined_r0x001010ed;
                              goto LAB_00101234;
                           }

                           local_4c = 3;
                           *(undefined4*)( param_2 + 3 ) = 3;
                           goto LAB_0010116f;
                        }

                        *(undefined1*)( lVar9 + lVar18 ) = *puVar15;
                        lVar18 = lVar18 + 1;
                     }

                  }

                  puVar15 = puVar15 + 1;
               }
 while ( puVar10 + uVar8 != puVar15 );
               ( *(code*)param_2[7] )(param_2);
               pbVar14 = (byte*)*param_2;
            }
 while ( pbVar14 < pbVar3 );
         }
 else {
            bVar4 = false;
            puVar10 = (undefined1*)0x0;
         }

         local_4c = 3;
         lVar9 = *(long*)( param_1 + 0x318 );
         *(undefined4*)( param_2 + 3 ) = 3;
         LAB_0010116f:ft_mem_free(lVar2, lVar9);
         *(undefined8*)( param_1 + 0x318 ) = 0;
         *(undefined8*)( param_1 + 800 ) = 0;
         LAB_0010119e:if (bVar4) {
            LAB_001011a6:ft_mem_free(lVar2, puVar10);
         }

         goto LAB_00100fc6;
      }

      *(int*)( param_2 + 3 ) = local_4c;
   }
 else {
      LAB_00100f90:local_4c = 3;
      *(undefined4*)( param_2 + 3 ) = 3;
   }

   ft_mem_free(lVar2, *(undefined8*)( param_1 + 0x318 ));
   *(undefined8*)( param_1 + 0x318 ) = 0;
   *(undefined8*)( param_1 + 800 ) = 0;
   LAB_00100fc6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void t42_parse_font_matrix(long param_1, long param_2) {
   char cVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ( **(code**)( param_2 + 0x68 ) )(param_2, 6, &local_58, 0);
   if (( 5 < iVar2 ) && ( local_40 != 0 )) {
      lVar3 = -local_40;
      if (0 < local_40) {
         lVar3 = local_40;
      }

      if (lVar3 != 0x10000) {
         local_58 = FT_DivFix(local_58, lVar3);
         local_50 = FT_DivFix(local_50, lVar3);
         local_48 = FT_DivFix(local_48, lVar3);
         local_38 = FT_DivFix(local_38, lVar3);
         uStack_30 = FT_DivFix(uStack_30, lVar3);
         local_40 = ( local_40 >> 0x3f & 0xfffffffffffe0000U ) + 0x10000;
      }

      *(long*)( param_1 + 0x2c0 ) = local_40;
      *(undefined8*)( param_1 + 0x2b8 ) = local_50;
      *(undefined8*)( param_1 + 0x2a8 ) = local_58;
      *(undefined8*)( param_1 + 0x2b0 ) = local_48;
      cVar1 = FT_Matrix_Check(param_1 + 0x2a8);
      if (cVar1 != '\0') {
         *(int*)( param_1 + 0x2c8 ) = (int)( (ulong)local_38 >> 0x10 );
         *(int*)( param_1 + 0x2cc ) = (int)( (long)local_38 >> 0x30 );
         *(int*)( param_1 + 0x2d0 ) = (int)( (ulong)uStack_30 >> 0x10 );
         *(int*)( param_1 + 0x2d4 ) = (int)( (long)uStack_30 >> 0x30 );
         goto LAB_001014b7;
      }

   }

   *(undefined4*)( param_2 + 0x18 ) = 3;
   LAB_001014b7:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void T42_Get_Interface(void) {
   ft_service_list_lookup(t42_services);
   return;
}
undefined8 t42_get_glyph_name(long param_1, uint param_2, undefined8 param_3, undefined4 param_4) {
   ft_mem_strcpyn(param_3, *(undefined8*)( *(long*)( param_1 + 0x288 ) + (ulong)param_2 * 8 ), param_4);
   return 0;
}
void T42_Size_Done(long *param_1) {
   long lVar1;
   lVar1 = FT_List_Find(*(long*)( *param_1 + 0x328 ) + 200, param_1[0xb]);
   if (lVar1 != 0) {
      FT_Done_Size(param_1[0xb]);
      param_1[0xb] = 0;
   }

   return;
}
ulong T42_Face_Init(undefined8 param_1, char *param_2, int param_3, int param_4, code *param_5) {
   char *__s1;
   char cVar1;
   undefined2 uVar2;
   undefined8 uVar3;
   long *plVar4;
   long *plVar5;
   char *pcVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   code *pcVar11;
   undefined8 *puVar12;
   char cVar13;
   int iVar14;
   uint uVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   long lVar19;
   long lVar20;
   ulong uVar21;
   size_t sVar22;
   long lVar23;
   char *pcVar24;
   char *pcVar25;
   char **ppcVar26;
   undefined **ppuVar27;
   ulong uVar28;
   undefined8 *puVar29;
   long lVar30;
   long in_FS_OFFSET;
   bool bVar31;
   byte bVar32;
   int local_2c0;
   char *local_2a8[2];
   int local_298;
   char *local_288;
   undefined8 uStack_280;
   char *local_278;
   uint local_270;
   undefined8 local_268;
   undefined8 local_260;
   int local_258;
   undefined4 uStack_254;
   code *local_250;
   code *local_248;
   code *local_218;
   code *local_208;
   code *local_200;
   long *local_1f8;
   char *local_1f0;
   char *local_1e8;
   char local_1e0;
   undefined4 local_1d8;
   undefined1 local_1d0[32];
   int local_1b0;
   long local_1a8;
   code *local_178;
   int local_170;
   undefined8 local_168[5];
   undefined8 *puStack_140;
   code *local_110;
   undefined8 local_108[3];
   long local_f0;
   undefined8 uStack_e0;
   undefined8 local_d8;
   code *local_b0;
   undefined1 local_a8[88];
   code *local_50;
   long local_40;
   bVar32 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   param_2[0] = '\x01';
   param_2[1] = '\0';
   param_2[2] = '\0';
   param_2[3] = '\0';
   param_2[4] = '\0';
   param_2[5] = '\0';
   param_2[6] = '\0';
   param_2[7] = '\0';
   param_2[0x328] = '\0';
   param_2[0x329] = '\0';
   param_2[0x32a] = '\0';
   param_2[0x32b] = '\0';
   param_2[0x32c] = '\0';
   param_2[0x32d] = '\0';
   param_2[0x32e] = '\0';
   param_2[0x32f] = '\0';
   lVar19 = ft_module_get_service(*(undefined8*)( param_2 + 0xb0 ), "postscript-cmaps", 1);
   *(long*)( param_2 + 0x308 ) = lVar19;
   lVar20 = FT_Get_Module_Interface(*(undefined8*)( *(long*)( param_2 + 0xb0 ) + 8 ), "psaux");
   *(long*)( param_2 + 0x310 ) = lVar20;
   if (lVar20 == 0) {
      uVar28 = 0xb;
      goto LAB_00101898;
   }

   uVar3 = *(undefined8*)( param_2 + 0xb8 );
   plVar4 = *(long**)( param_2 + 0xc0 );
   ppcVar26 = &local_288;
   for (lVar23 = 0x48; lVar23 != 0; lVar23 = lVar23 + -1) {
      *ppcVar26 = (char*)0x0;
      ppcVar26 = ppcVar26 + (ulong)bVar32 * -2 + 1;
   }

   for (int i = 0; i < 16; i++) {
      param_2[( i + 792 )] = '\0';
   }

   local_2a8[0] = (char*)( (ulong)local_2a8[0] & 0xffffffff00000000 );
   ( *(code*)**(undefined8**)( lVar20 + 8 ) )(&local_288, 0, 0, uVar3);
   local_1e8 = (char*)0x0;
   local_1f0 = (char*)0x0;
   local_1e0 = '\0';
   local_1f8 = plVar4;
   iVar14 = FT_Stream_Seek(plVar4, 0);
   local_2a8[0] = (char*)CONCAT44(local_2a8[0]._4_4_, iVar14);
   if (iVar14 == 0) {
      iVar14 = FT_Stream_EnterFrame(plVar4, 0x11);
      local_2a8[0] = (char*)CONCAT44(local_2a8[0]._4_4_, iVar14);
      if (iVar14 != 0) goto LAB_0010168d;
      plVar5 = (long*)plVar4[8];
      if (( *plVar5 != 0x7572542d53502125 || plVar5[1] != 0x6e6f466570795465 ) || ( (char)plVar5[2] != 't' )) {
         local_2a8[0] = (char*)CONCAT44(local_2a8[0]._4_4_, 2);
      }

      FT_Stream_ExitFrame(plVar4);
      if ((int)local_2a8[0] != 0) goto LAB_0010168d;
      iVar14 = FT_Stream_Seek(plVar4, 0);
      local_2a8[0] = (char*)CONCAT44(local_2a8[0]._4_4_, iVar14);
      if (iVar14 != 0) goto LAB_0010168d;
      pcVar25 = (char*)plVar4[1];
      if (plVar4[5] != 0) {
         local_1f0 = (char*)ft_mem_qalloc(uVar3, pcVar25, local_2a8);
         if ((int)local_2a8[0] == 0) {
            iVar14 = FT_Stream_Read(plVar4, local_1f0, pcVar25);
            local_2a8[0] = (char*)CONCAT44(local_2a8[0]._4_4_, iVar14);
            if (iVar14 == 0) {
               pcVar24 = pcVar25 + (long)local_1f0;
               local_1e8 = pcVar25;
               goto LAB_001019aa;
            }

         }

         goto LAB_0010168d;
      }

      local_1f0 = (char*)( plVar4[2] + *plVar4 );
      local_1e0 = '\x01';
      local_1e8 = pcVar25;
      iVar14 = FT_Stream_Skip(plVar4, pcVar25);
      local_2a8[0] = (char*)CONCAT44(local_2a8[0]._4_4_, iVar14);
      if (iVar14 != 0) goto LAB_0010168d;
      pcVar24 = local_1e8 + (long)local_1f0;
      LAB_001019aa:uStack_280 = local_1f0;
      LAB_001019b2:local_270 = 0;
      local_288 = local_1f0;
      local_278 = pcVar24;
      ( *local_250 )(&local_288);
      pcVar25 = local_288;
      pcVar11 = local_248;
      lVar23 = local_1a8;
      iVar14 = local_170;
      uVar9 = local_168[0];
      puVar12 = puStack_140;
      while (local_288 = pcVar25,local_168[0] = uVar9,puStack_140 = puVar12,pcVar25 < pcVar24) {
         local_248 = pcVar11;
         local_1a8 = lVar23;
         local_170 = iVar14;
         if (*pcVar25 != 'F') {
            if (( *pcVar25 != '/' ) || ( pcVar24 <= pcVar25 + 2 )) goto LAB_00101ac0;
            __s1 = pcVar25 + 1;
            local_288 = __s1;
            ( *pcVar11 )(&local_288);
            if (local_270 == 0) {
               pcVar6 = local_288;
               if (( (int)( (long)local_288 - (long)__s1 ) - 1U < 0x15 ) && ( local_288 < pcVar24 )) {
                  ppuVar27 = &t42_keywords;
                  uVar28 = (long)local_288 - (long)__s1 & 0xffffffff;
                  iVar14 = 0;
                  do {
                     pcVar6 = *ppuVar27;
                     if (( ( ( pcVar6 != (char*)0x0 ) && ( pcVar25[1] == *pcVar6 ) ) && ( sVar22 = strlen(pcVar6) ),uVar28 == sVar22 )) {
                        lVar23 = (long)iVar14 * 0x30;
                        if (*(int*)( &DAT_0010296c + lVar23 ) == 0xb) {
                           ( **(code**)( lVar23 + 0x102970 ) )(param_2, &local_288);
                        }
 else {
                           local_2a8[0] = param_2 + 0x130;
                           if (*(int*)( &DAT_00102968 + lVar23 ) != 2) {
                              local_2a8[0] = param_2 + 0x2d8;
                              if (*(int*)( &DAT_00102968 + lVar23 ) != 5) {
                                 local_2a8[0] = param_2 + 0xf8;
                              }

                           }

                           if (*(int*)( &DAT_0010296c + lVar23 ) - 9U < 2) {
                              local_270 = ( *local_200 )(&local_288, &t42_keywords + (long)iVar14 * 6, local_2a8, 0, 0);
                           }
 else {
                              local_270 = ( *local_208 )();
                           }

                        }

                        goto joined_r0x00101f55;
                     }

                     iVar14 = iVar14 + 1;
                     ppuVar27 = ppuVar27 + 6;
                     pcVar6 = local_288;
                  }
 while ( iVar14 != 0x14 );
               }

               goto LAB_00101a68;
            }

            LAB_00101ad3:uVar28 = (ulong)local_270;
            goto LAB_001016a0;
         }

         if (( pcVar25 + 0x19 < pcVar24 ) && ( iVar14 = iVar14 == 0 )) {
            ( *pcVar11 )(&local_288);
            ( *local_250 )(&local_288);
            pcVar6 = local_288;
            pcVar25 = local_288;
            while (pcVar25 < pcVar24) {
               local_288 = pcVar25;
               if (( ( *pcVar25 == 'k' ) && ( pcVar25 + 5 < pcVar24 ) ) && ( iVar14 = iVar14 == 0 )) {
                  if (pcVar25 < pcVar24) {
                     ( *local_248 )(&local_288);
                     ( *local_218 )(&local_288, local_2a8);
                     if (local_298 == 3) {
                        pcVar6 = local_288;
                     }

                  }

                  break;
               }

               ( *local_248 )(&local_288);
               if (local_270 != 0) goto LAB_00101ad3;
               ( *local_250 )(&local_288);
               pcVar25 = local_288;
            }
;
         }
 else {
            LAB_00101ac0:( *pcVar11 )(&local_288);
            joined_r0x00101f55:pcVar6 = local_288;
            if (local_270 != 0) goto LAB_00101ad3;
         }

         LAB_00101a68:local_288 = pcVar6;
         ( *local_250 )(&local_288);
         pcVar25 = local_288;
         pcVar11 = local_248;
         lVar23 = local_1a8;
         iVar14 = local_170;
         uVar9 = local_168[0];
         puVar12 = puStack_140;
      }
;
      uVar28 = (ulong)local_270;
      if (( local_270 == 0 ) && ( uVar28 = 2 ),param_2[0x2a1] == '*') {
         puStack_140 = (undefined8*)0x0;
         bVar31 = local_f0 == 0;
         local_f0 = 0;
         *(int*)( param_2 + 0x280 ) = iVar14;
         *(undefined8*)( param_2 + 0x298 ) = local_d8;
         local_168[0] = 0;
         *(undefined8*)( param_2 + 0x250 ) = local_108[0];
         *(undefined8*)( param_2 + 600 ) = uVar9;
         *(undefined8**)( param_2 + 0x288 ) = puVar12;
         *(undefined8*)( param_2 + 0x290 ) = uStack_e0;
         if (*(int*)( param_2 + 0x220 ) == 1) {
            if (local_1b0 < 1) {
               local_2c0 = 0;
            }
 else {
               lVar7 = *(long*)( param_2 + 0x240 );
               lVar30 = 0;
               lVar8 = *(long*)( param_2 + 0x238 );
               local_2c0 = 0;
               do {
                  pcVar25 = *(char**)( lVar23 + lVar30 * 8 );
                  *(undefined2*)( lVar8 + lVar30 * 2 ) = 0;
                  *(char**)( lVar7 + lVar30 * 8 ) = ".notdef";
                  iVar16 = local_2c0;
                  if (( pcVar25 != (char*)0x0 ) && ( 0 < iVar14 )) {
                     iVar18 = 0;
                     puVar29 = puVar12;
                     do {
                        pcVar24 = (char*)*puVar29;
                        iVar17 = strcmp(pcVar25, pcVar24);
                        if (iVar17 == 0) {
                           *(short*)( lVar8 + lVar30 * 2 ) = (short)iVar18;
                           *(char**)( lVar7 + lVar30 * 8 ) = pcVar24;
                           iVar18 = strcmp(".notdef", pcVar24);
                           if (( local_2c0 <= (int)lVar30 ) && ( iVar16 = iVar18 == 0 )) {
                              iVar16 = local_2c0;
                           }

                           break;
                        }

                        iVar18 = iVar18 + 1;
                        puVar29 = puVar29 + 1;
                     }
 while ( iVar14 != iVar18 );
                  }

                  local_2c0 = iVar16;
                  lVar30 = lVar30 + 1;
               }
 while ( lVar30 != local_1b0 );
            }

            for (int i = 0; i < 4; i++) {
               param_2[( i + 556 )] = '\0';
            }

            *(int*)( param_2 + 0x230 ) = local_2c0;
            *(undefined4*)( param_2 + 0x228 ) = local_1d8;
         }

         uVar28 = ( ulong )(-(uint)bVar31 & 3);
      }

   }
 else {
      LAB_0010168d:uVar28 = (ulong)local_2a8[0] & 0xffffffff;
      if (local_1e0 == '\0') {
         ft_mem_free(uVar3, local_1f0);
         uVar28 = (ulong)local_2a8[0] & 0xffffffff;
         local_1f0 = (char*)0x0;
         pcVar24 = local_1e8;
         if ((int)local_2a8[0] == 0) goto LAB_001019b2;
      }

   }

   LAB_001016a0:if (local_178 != (code*)0x0) {
      ( *local_178 )(local_1d0);
   }

   if (local_b0 != (code*)0x0) {
      ( *local_b0 )(local_108);
   }

   if (local_110 != (code*)0x0) {
      ( *local_110 )(local_168);
   }

   if (local_50 != (code*)0x0) {
      ( *local_50 )(local_a8);
   }

   if (local_1e0 == '\0') {
      ft_mem_free(local_268, local_1f0);
      local_1f0 = (char*)0x0;
   }

   if ((code*)CONCAT44(uStack_254, local_258) != (code*)0x0) {
      ( *(code*)CONCAT44(uStack_254, local_258) )(&local_288);
   }

   if ((int)uVar28 != 0) {
      ft_mem_free(uVar3, *(undefined8*)( param_2 + 0x318 ));
      for (int i = 0; i < 16; i++) {
         param_2[( i + 792 )] = '\0';
      }

      goto LAB_00101898;
   }

   if (param_3 < 0) goto LAB_00101898;
   if ((short)param_3 != 0) {
      uVar28 = 6;
      goto LAB_00101898;
   }

   param_2[0x48] = '\0';
   param_2[0x49] = '\0';
   param_2[0x4a] = '\0';
   param_2[0x4b] = '\0';
   param_2[8] = '\0';
   param_2[9] = '\0';
   param_2[10] = '\0';
   param_2[0xb] = '\0';
   param_2[0xc] = '\0';
   param_2[0xd] = '\0';
   param_2[0xe] = '\0';
   param_2[0xf] = '\0';
   *(long*)( param_2 + 0x20 ) = (long)*(int*)( param_2 + 0x280 );
   uVar21 = *(ulong*)( param_2 + 0x10 ) | 0x215;
   if (param_2[0x128] == '\0') {
      uVar21 = *(ulong*)( param_2 + 0x10 ) | 0x211;
   }

   pcVar25 = *(char**)( param_2 + 0x110 );
   *(ulong*)( param_2 + 0x10 ) = uVar21 | 0x800;
   *(char**)( param_2 + 0x28 ) = pcVar25;
   *(char**)( param_2 + 0x30 ) = "Regular";
   if (pcVar25 == (char*)0x0) {
      if (*(long*)( param_2 + 0x218 ) != 0) {
         *(long*)( param_2 + 0x28 ) = *(long*)( param_2 + 0x218 );
      }

   }
 else {
      pcVar24 = *(char**)( param_2 + 0x108 );
      if (pcVar24 != (char*)0x0) {
         LAB_001017a8:cVar13 = *pcVar24;
         if (cVar13 != '\0') {
            while (cVar1 = *pcVar25,cVar1 != cVar13) {
               if (( cVar13 == ' ' ) || ( cVar13 == '-' )) {
                  pcVar24 = pcVar24 + 1;
                  goto LAB_001017a8;
               }

               if (( cVar1 != ' ' ) && ( cVar1 != '-' )) {
                  if (cVar1 == '\0') {
                     *(char**)( param_2 + 0x30 ) = pcVar24;
                  }

                  goto LAB_001017f0;
               }

               cVar13 = *pcVar24;
               pcVar25 = pcVar25 + 1;
               if (cVar13 == '\0') goto LAB_001017f0;
            }
;
            pcVar25 = pcVar25 + 1;
            pcVar24 = pcVar24 + 1;
            goto LAB_001017a8;
         }

      }

   }

   LAB_001017f0:param_2[0x38] = '\0';
   param_2[0x39] = '\0';
   param_2[0x3a] = '\0';
   param_2[0x3b] = '\0';
   param_2[0x40] = '\0';
   param_2[0x41] = '\0';
   param_2[0x42] = '\0';
   param_2[0x43] = '\0';
   param_2[0x44] = '\0';
   param_2[0x45] = '\0';
   param_2[0x46] = '\0';
   param_2[0x47] = '\0';
   local_288 = (char*)CONCAT44(local_288._4_4_, 9);
   local_260 = FT_Get_Module(*(undefined8*)( *(long*)( param_2 + 0xb0 ) + 8 ), "truetype");
   uStack_280 = *(char**)( param_2 + 0x318 );
   local_278 = *(char**)( param_2 + 800 );
   if (param_4 != 0) {
      local_288 = (char*)( (ulong)local_288 | 0x10 );
      local_258 = param_4;
      local_250 = param_5;
   }

   uVar15 = FT_Open_Face(*(undefined8*)( *(long*)( param_2 + 0xb0 ) + 8 ), &local_288, 0, param_2 + 0x328);
   if (uVar15 != 0) {
      uVar28 = (ulong)uVar15;
      goto LAB_00101898;
   }

   FT_Done_Size(*(undefined8*)( *(long*)( param_2 + 0x328 ) + 0xa0 ));
   lVar23 = *(long*)( param_2 + 0x328 );
   uVar3 = *(undefined8*)( lVar23 + 0x70 );
   uVar2 = *(undefined2*)( lVar23 + 0x88 );
   *(undefined8*)( param_2 + 0x68 ) = *(undefined8*)( lVar23 + 0x68 );
   *(undefined8*)( param_2 + 0x70 ) = uVar3;
   uVar9 = *(undefined8*)( lVar23 + 0x78 );
   uVar10 = *(undefined8*)( lVar23 + 0x80 );
   *(undefined2*)( param_2 + 0x88 ) = uVar2;
   uVar3 = *(undefined8*)( lVar23 + 0x8a );
   *(undefined8*)( param_2 + 0x78 ) = uVar9;
   *(undefined8*)( param_2 + 0x80 ) = uVar10;
   *(undefined8*)( param_2 + 0x8a ) = uVar3;
   *(uint*)( param_2 + 0x92 ) = CONCAT22(*(undefined2*)( param_2 + 0x12a ), *(undefined2*)( lVar23 + 0x92 ));
   *(undefined2*)( param_2 + 0x96 ) = *(undefined2*)( param_2 + 300 );
   *(ulong*)( param_2 + 0x18 ) = ( ulong )(*(long*)( param_2 + 0x120 ) != 0);
   if (( *(byte*)( lVar23 + 0x18 ) & 2 ) != 0) {
      *(ulong*)( param_2 + 0x18 ) = ( ulong )(*(long*)( param_2 + 0x120 ) != 0) | 2;
   }

   if (( *(byte*)( lVar23 + 0x10 ) & 0x20 ) != 0) {
      *(ulong*)( param_2 + 0x10 ) = *(ulong*)( param_2 + 0x10 ) | 0x20;
   }

   if (lVar19 == 0) goto LAB_00101898;
   plVar4 = *(long**)( lVar20 + 0x40 );
   uStack_280 = (char*)0x10003756e6963;
   local_288 = param_2;
   uVar15 = FT_CMap_New(plVar4[3], 0, &local_288, 0);
   uVar28 = (ulong)uVar15;
   if (( ( uVar15 != 0 ) && ( (char)uVar15 != -0x5d ) ) && ( ( uVar15 & 0xff ) != 7 )) goto LAB_00101898;
   uVar15 = *(uint*)( param_2 + 0x220 );
   uStack_280._0_6_ = CONCAT24(7, (undefined4)uStack_280);
   if (uVar15 == 3) {
      lVar19 = plVar4[3];
      uStack_280 = (char*)CONCAT44(uStack_280._4_4_, 0x6c617431);
      uStack_280 = (char*)CONCAT26(3, (undefined6)uStack_280);
      LAB_00101cb2:if (lVar19 != 0) {
         uVar15 = FT_CMap_New(lVar19, 0, &local_288, 0);
         uVar28 = (ulong)uVar15;
         goto LAB_00101898;
      }

   }
 else {
      if (uVar15 < 4) {
         if (uVar15 == 1) {
            lVar19 = plVar4[2];
            uStack_280 = (char*)CONCAT44(uStack_280._4_4_, 0x41444243);
            uStack_280 = (char*)CONCAT26(2, (undefined6)uStack_280);
         }
 else {
            if (uVar15 != 2) goto LAB_0010224d;
            lVar19 = *plVar4;
            uStack_280 = (char*)CONCAT44(uStack_280._4_4_, 0x41444f42);
            uStack_280 = (char*)( (ulong)uStack_280 & 0xffffffffffff );
         }

         goto LAB_00101cb2;
      }

      if (uVar15 == 4) {
         lVar19 = plVar4[1];
         uStack_280 = (char*)CONCAT44(uStack_280._4_4_, 0x41444245);
         uStack_280 = (char*)CONCAT26(1, (undefined6)uStack_280);
         goto LAB_00101cb2;
      }

   }

   LAB_0010224d:uVar28 = 0;
   LAB_00101898:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar28;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void t42_parse_encoding(long param_1, ulong *param_2) {
   ulong *puVar1;
   byte bVar2;
   undefined8 *puVar3;
   byte *pbVar4;
   code *pcVar5;
   bool bVar6;
   int iVar7;
   int iVar8;
   undefined8 uVar9;
   ulong uVar10;
   int iVar11;
   byte *pbVar12;
   byte *pbVar13;
   long in_FS_OFFSET;
   int local_74;
   int local_44;
   long local_40;
   puVar3 = *(undefined8**)( param_1 + 0x310 );
   pbVar4 = (byte*)param_2[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *(code*)param_2[7] )(param_2);
   pbVar13 = (byte*)*param_2;
   if (pbVar13 < pbVar4) {
      bVar2 = *pbVar13;
      if (( 9 < ( byte )(bVar2 - 0x30) ) && ( bVar2 != 0x5b )) {
         if (( pbVar13 + 0x11 < pbVar4 ) && ( iVar7 = iVar7 == 0 )) {
            *(undefined4*)( param_1 + 0x220 ) = 2;
         }
 else if (( pbVar13 + 0xf < pbVar4 ) && ( iVar7 = iVar7 == 0 )) {
            *(undefined4*)( param_1 + 0x220 ) = 4;
         }
 else if (( pbVar13 + 0x12 < pbVar4 ) && ( iVar7 = iVar7 == 0 )) {
            *(undefined4*)( param_1 + 0x220 ) = 3;
         }
 else {
            *(undefined4*)( param_2 + 3 ) = 0xa2;
         }

         goto LAB_00102350;
      }

      uVar10 = param_2[4];
      if (bVar2 == 0x5b) {
         bVar6 = true;
         *param_2 = ( ulong )(pbVar13 + 1);
         local_74 = 0x100;
         ( *(code*)param_2[7] )(param_2);
         pbVar12 = (byte*)*param_2;
      }
 else {
         local_74 = ( *(code*)param_2[9] )(param_2);
         bVar6 = false;
         if (0x100 < local_74) goto LAB_00102610;
         ( *(code*)param_2[7] )(param_2);
         pbVar12 = (byte*)*param_2;
      }

      if (pbVar12 < pbVar4) {
         puVar1 = param_2 + 0x17;
         if (*(long*)( param_1 + 0x238 ) != 0) {
            ft_mem_free(uVar10);
            *(undefined8*)( param_1 + 0x238 ) = 0;
            ft_mem_free(uVar10, *(undefined8*)( param_1 + 0x240 ));
            pcVar5 = (code*)param_2[0x22];
            *(undefined8*)( param_1 + 0x240 ) = 0;
            if (pcVar5 != (code*)0x0) {
               ( *pcVar5 )(puVar1);
            }

         }

         *(int*)( param_1 + 0x228 ) = local_74;
         *(int*)( param_2 + 0x16 ) = local_74;
         uVar9 = ft_mem_qrealloc(uVar10, 2, 0, (long)local_74, 0);
         *(undefined8*)( param_1 + 0x238 ) = uVar9;
         if (local_44 == 0) {
            uVar9 = ft_mem_qrealloc(uVar10, 8, 0, (long)local_74, 0, &local_44);
            *(undefined8*)( param_1 + 0x240 ) = uVar9;
            if (( local_44 == 0 ) && ( local_44 = local_44 == 0 )) {
               if (0 < local_74) {
                  iVar7 = 0;
                  do {
                     iVar11 = iVar7 + 1;
                     ( *(code*)param_2[0x21] )(puVar1, iVar7, ".notdef", 8);
                     iVar7 = iVar11;
                  }
 while ( local_74 != iVar11 );
               }

               ( *(code*)param_2[7] )(param_2);
               if ((byte*)*param_2 < pbVar4) {
                  iVar7 = 0;
                  pbVar12 = (byte*)*param_2;
                  do {
                     bVar2 = *pbVar12;
                     if (bVar2 != 100) {
                        if (bVar2 != 0x5d) {
                           if (9 < bVar2 - 0x30) goto LAB_001025b6;
                           if (bVar6) goto LAB_001026a8;
                           iVar11 = ( *(code*)param_2[9] )(param_2);
                           ( *(code*)param_2[7] )(param_2);
                           pbVar13 = (byte*)*param_2;
                           if (pbVar13 != pbVar12) {
                              pbVar12 = pbVar13;
                              if (( ( pbVar4 <= pbVar13 + 2 ) || ( *pbVar13 != 0x2f ) ) || ( local_74 <= iVar7 )) goto LAB_00102588;
                              goto LAB_001026d1;
                           }

                           LAB_00102740:*(undefined4*)( param_2 + 3 ) = 2;
                           goto LAB_00102350;
                        }

                        pbVar13 = pbVar12 + 1;
                        break;
                     }

                     pbVar13 = pbVar12 + 3;
                     if (( ( pbVar13 < pbVar4 ) && ( pbVar12[1] == 0x65 ) ) && ( ( pbVar12[2] == 0x66 && ( ( pbVar12[3] < 0x21 && ( ( 0x100003601U >> ( (ulong)pbVar12[3] & 0x3f ) & 1 ) != 0 ) ) ) ) )) break;
                     LAB_001025b6:if (bVar6) {
                        LAB_001026a8:if (( ( pbVar4 <= pbVar12 + 2 ) || ( *pbVar12 != 0x2f ) ) || ( iVar11 = local_74 <= iVar7 )) goto LAB_00102740;
                        LAB_001026d1:pbVar12 = pbVar12 + 1;
                        *param_2 = (ulong)pbVar12;
                        ( *(code*)param_2[8] )(param_2);
                        if (( pbVar4 <= (byte*)*param_2 ) || ( (int)param_2[3] != 0 )) goto LAB_00102350;
                        uVar10 = (long)*param_2 - (long)pbVar12;
                        iVar8 = ( *(code*)param_2[0x21] )(puVar1, iVar11, pbVar12, (int)uVar10 + 1);
                        *(int*)( param_2 + 3 ) = iVar8;
                        if (iVar8 != 0) goto LAB_00102350;
                        iVar7 = iVar7 + 1;
                        *(undefined1*)( *(long*)( param_2[0x1c] + (long)iVar11 * 8 ) + ( uVar10 & 0xffffffff ) ) = 0;
                     }
 else {
                        ( *(code*)param_2[8] )(param_2);
                        if ((int)param_2[3] != 0) goto LAB_00102350;
                     }

                     LAB_00102588:( *(code*)param_2[7] )(param_2);
                     pbVar13 = pbVar12;
                     pbVar12 = (byte*)*param_2;
                  }
 while ( (byte*)*param_2 < pbVar4 );
               }

               *(undefined4*)( param_1 + 0x220 ) = 1;
               *param_2 = (ulong)pbVar13;
               goto LAB_00102350;
            }

         }

         *(int*)( param_2 + 3 ) = local_44;
      }

   }
 else {
      LAB_00102610:*(undefined4*)( param_2 + 3 ) = 3;
   }

   LAB_00102350:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}


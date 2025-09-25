int afm_compare_kern_pairs(uint *param_1, uint *param_2) {
   ulong uVar1;
   int iVar2;
   ulong uVar3;
   uVar3 = ( ulong ) * param_1 << 0x10 | (ulong)param_1[1];
   uVar1 = ( ulong ) * param_2 << 0x10 | (ulong)param_2[1];
   iVar2 = 1;
   if (uVar3 <= uVar1) {
      iVar2 = -(uint)(uVar3 < uVar1);
   }

   return iVar2;
}
long PS_Conv_Strtol(ulong *param_1, byte *param_2, long param_3) {
   byte bVar1;
   char cVar2;
   byte *pbVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   bool bVar6;
   long lVar7;
   char cVar8;
   byte *pbVar9;
   long lVar10;
   bool bVar11;
   pbVar3 = (byte*)*param_1;
   lVar10 = 0;
   if (( param_2 <= pbVar3 ) || ( 0x22 < param_3 - 2U )) {
      return 0;
   }

   if (( *pbVar3 - 0x2b & 0xfd ) == 0) {
      pbVar9 = pbVar3 + 1;
      if (param_2 == pbVar9) {
         return 0;
      }

      if (( pbVar3[1] - 0x2b & 0xfd ) == 0) {
         return 0;
      }

      bVar11 = *pbVar3 == 0x2d;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(SEXT816(0x7fffffff), 8);
      auVar5 = auVar4 << 0x40 | ZEXT816(0x7fffffff);
      lVar7 = SUB168(auVar5 / SEXT816(param_3), 0);
      cVar8 = SUB161(auVar5 % SEXT816(param_3), 0);
      if (param_2 <= pbVar9) goto LAB_001000a4;
   }
 else {
      bVar11 = false;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = SUB168(SEXT816(0x7fffffff), 8);
      auVar5 = auVar5 << 0x40 | ZEXT816(0x7fffffff);
      lVar7 = SUB168(auVar5 / SEXT816(param_3), 0);
      cVar8 = SUB161(auVar5 % SEXT816(param_3), 0);
      pbVar9 = pbVar3;
   }

   bVar6 = false;
   lVar10 = 0;
   do {
      bVar1 = *pbVar9;
      if (( ( ( (char)bVar1 < '\x01' ) || ( bVar1 < 0x21 && ( 0xfffffffeffffc9ffU >> ( (ulong)bVar1 & 0x3f ) & 1 ) == 0 ) ) || ( cVar2 = ft_char_table[bVar1] ),cVar2 < '\0' )) break;
      if (( lVar7 < lVar10 ) || ( ( lVar7 == lVar10 && ( cVar8 < cVar2 ) ) )) {
         bVar6 = true;
      }
 else {
         lVar10 = lVar10 * param_3 + (long)cVar2;
      }

      pbVar9 = pbVar9 + 1;
   }
 while ( param_2 != pbVar9 );
   if (bVar6) {
      lVar10 = 0x7fffffff;
   }

   LAB_001000a4:*param_1 = (ulong)pbVar9;
   if (bVar11) {
      lVar10 = -lVar10;
   }

   return lVar10;
}
undefined8 PS_Conv_ToInt(undefined8 *param_1, char *param_2) {
   char *pcVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   char *local_38;
   long local_30;
   pcVar1 = (char*)*param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = pcVar1;
   uVar2 = PS_Conv_Strtol(&local_38, param_2, 10);
   if (pcVar1 == local_38) {
      LAB_001001f0:uVar2 = 0;
   }
 else {
      if (( local_38 < param_2 ) && ( *local_38 == '#' )) {
         pcVar1 = local_38 + 1;
         local_38 = pcVar1;
         uVar2 = PS_Conv_Strtol(&local_38, param_2, uVar2);
         if (pcVar1 == local_38) goto LAB_001001f0;
      }

      *param_1 = local_38;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void skip_spaces(undefined8 *param_1, byte *param_2) {
   byte bVar1;
   byte *pbVar2;
   byte *pbVar3;
   pbVar3 = (byte*)*param_1;
   while (pbVar3 < param_2) {
      bVar1 = *pbVar3;
      pbVar2 = pbVar3;
      if (bVar1 < 0x21) {
         if (( 0xfffffffeffffc9feU >> ( (ulong)bVar1 & 0x3f ) & 1 ) != 0) break;
         joined_r0x0010026d:pbVar3 = pbVar2 + 1;
      }
 else {
         if (bVar1 != 0x25) break;
         if (pbVar3 < param_2) {
            do {
               pbVar3 = pbVar2 + 1;
               if (( *pbVar2 == 0xd ) || ( *pbVar2 == 10 )) goto joined_r0x0010026d;
               pbVar2 = pbVar3;
            }
 while ( param_2 != pbVar3 );
         }

         pbVar3 = pbVar3 + 1;
      }

   }
;
   *param_1 = pbVar3;
   return;
}
undefined4 skip_literal_string(ulong *param_1, char *param_2) {
   char cVar1;
   byte bVar2;
   uint uVar3;
   char *pcVar4;
   char *pcVar5;
   undefined4 uVar6;
   int iVar7;
   pcVar5 = (char*)*param_1;
   if (pcVar5 < param_2) {
      iVar7 = 0;
      pcVar4 = pcVar5;
      do {
         while (true) {
            cVar1 = *pcVar4;
            pcVar5 = pcVar4 + 1;
            if (cVar1 != '\\') break;
            if (param_2 == pcVar5) {
               uVar6 = 3;
               pcVar5 = param_2;
               goto LAB_001002f5;
            }

            bVar2 = pcVar4[1];
            if (bVar2 < 0x2a) {
               if (bVar2 < 0x28) goto LAB_00100325;
            }
 else if (( 0x18 < ( byte )(bVar2 - 0x5c) ) || ( ( 0x1440441UL >> ( ( ulong )(bVar2 - 0x5c) & 0x3f ) & 1 ) == 0 )) {
               LAB_00100325:if (pcVar5 < param_2) {
                  uVar3 = 0;
                  while (( byte )(*pcVar5 - 0x30U) < 8) {
                     uVar3 = uVar3 + 1;
                     pcVar5 = pcVar5 + 1;
                     if (( 2 < uVar3 ) || ( param_2 <= pcVar5 )) break;
                  }
;
                  goto LAB_001002b5;
               }

               uVar6 = 3;
               goto LAB_001002f5;
            }

            pcVar5 = pcVar4 + 2;
            pcVar4 = pcVar5;
            if (param_2 <= pcVar5) goto LAB_001002ef;
         }
;
         if (cVar1 == '(') {
            iVar7 = iVar7 + 1;
         }
 else if (( cVar1 == ')' ) && ( iVar7 = iVar7 == 0 )) {
            uVar6 = 0;
            goto LAB_001002f5;
         }

         LAB_001002b5:pcVar4 = pcVar5;
      }
 while ( pcVar5 < param_2 );
   }

   LAB_001002ef:uVar6 = 3;
   LAB_001002f5:*param_1 = (ulong)pcVar5;
   return uVar6;
}
undefined8 skip_string(long *param_1, byte *param_2) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   byte *local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = (byte*)( *param_1 + 1 );
   if (local_18 < param_2) {
      do {
         skip_spaces();
         if (param_2 <= local_18) break;
         if (( 5 < ( byte )(( *local_18 & 0xdf ) + 0xbf) ) && ( 9 < ( byte )(*local_18 - 0x30) )) {
            uVar2 = 3;
            if (*local_18 != 0x3e) goto LAB_001003d0;
            break;
         }

         local_18 = local_18 + 1;
      }
 while ( local_18 < param_2 );
   }

   local_18 = local_18 + 1;
   uVar2 = 0;
   LAB_001003d0:*param_1 = (long)local_18;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
void ps_parser_skip_spaces(long param_1) {
   skip_spaces(param_1, *(undefined8*)( param_1 + 0x10 ));
   return;
}
void ps_parser_to_int(long param_1) {
   skip_spaces(param_1, *(undefined8*)( param_1 + 0x10 ));
   PS_Conv_ToInt();
   return;
}
undefined8 ps_parser_to_bytes(long *param_1, long param_2, long param_3, ulong *param_4, char param_5) {
   byte bVar1;
   ulong uVar2;
   byte *pbVar3;
   byte *pbVar4;
   uint uVar5;
   ulong uVar6;
   long *plVar7;
   ulong uVar8;
   ulong uVar9;
   pbVar3 = (byte*)param_1[2];
   plVar7 = param_1;
   skip_spaces();
   pbVar4 = (byte*)*plVar7;
   if (pbVar3 <= pbVar4) {
      return 0;
   }

   if (param_5 != '\0') {
      if (*pbVar4 != 0x3c) {
         return 3;
      }

      pbVar4 = pbVar4 + 1;
      if (pbVar3 <= pbVar4) {
         *param_4 = 0;
         goto LAB_0010048f;
      }

   }

   uVar6 = ( ulong )(uint)((int)pbVar3 - (int)pbVar4);
   uVar8 = param_3 * 2;
   if (uVar6 <= ( ulong )(param_3 * 2)) {
      uVar8 = uVar6;
   }

   if (uVar8 == 0) {
      uVar6 = 0;
   }
 else {
      uVar2 = 0;
      uVar5 = 1;
      uVar6 = 0;
      do {
         while (true) {
            pbVar3 = pbVar4 + uVar2;
            bVar1 = *pbVar3;
            uVar9 = uVar6;
            if (bVar1 < 0x21) break;
            if ((char)bVar1 < '\0') goto LAB_00100539;
            LAB_001004e4:if (0xf < (uint)(int)(char)ft_char_table[bVar1]) goto LAB_00100539;
            uVar5 = uVar5 << 4 | (int)(char)ft_char_table[bVar1];
            if (( uVar5 & 0x100 ) != 0) {
               uVar9 = ( ulong )((int)uVar6 + 1);
               *(char*)( param_2 + uVar6 ) = (char)uVar5;
               uVar5 = 1;
            }

            uVar2 = ( ulong )((int)uVar2 + 1);
            uVar6 = uVar9;
            if (uVar8 <= uVar2) goto LAB_00100535;
         }
;
         if (( 0xfffffffeffffc9feU >> ( (ulong)bVar1 & 0x3f ) & 1 ) != 0) goto LAB_001004e4;
         uVar2 = ( ulong )((int)uVar2 + 1);
      }
 while ( uVar2 < uVar8 );
      LAB_00100535:pbVar3 = pbVar4 + uVar2;
      uVar6 = uVar9;
      LAB_00100539:pbVar4 = pbVar3;
      if (uVar5 != 1) {
         *(char*)( param_2 + uVar6 ) = (char)( uVar5 << 4 );
         uVar6 = ( ulong )((int)uVar6 + 1);
      }

   }

   *param_4 = uVar6;
   *param_1 = (long)pbVar4;
   if (param_5 == '\0') {
      return 0;
   }

   if (( pbVar4 < (byte*)param_1[2] ) && ( *pbVar4 != 0x3e )) {
      return 3;
   }

   LAB_0010048f:*param_1 = (long)( pbVar4 + 1 );
   return 0;
}
void ps_parser_init(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   param_1[2] = param_3;
   param_1[4] = param_4;
   *param_1 = param_2;
   param_1[1] = param_2;
   *(undefined4*)( param_1 + 3 ) = 0;
   param_1[5] = ps_parser_init;
   param_1[6] = ps_parser_done;
   param_1[7] = ps_parser_skip_spaces;
   param_1[8] = ps_parser_skip_PS_token;
   param_1[9] = ps_parser_to_int;
   param_1[10] = ps_parser_to_fixed;
   param_1[0x11] = ps_parser_load_field_table;
   param_1[0xb] = ps_parser_to_bytes;
   param_1[0xc] = ps_parser_to_coord_array;
   param_1[0xd] = ps_parser_to_fixed_array;
   param_1[0xe] = ps_parser_to_token;
   param_1[0xf] = ps_parser_to_token_array;
   param_1[0x10] = ps_parser_load_field;
   return;
}
void ps_parser_done(void) {
   return;
}
void t1_builder_done(long param_1) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1 + 0x10 );
   if (lVar1 != 0) {
      puVar2 = *(undefined8**)( param_1 + 0x20 );
      uVar3 = puVar2[1];
      *(undefined8*)( lVar1 + 200 ) = *puVar2;
      *(undefined8*)( lVar1 + 0xd0 ) = uVar3;
      uVar3 = puVar2[3];
      *(undefined8*)( lVar1 + 0xd8 ) = puVar2[2];
      *(undefined8*)( lVar1 + 0xe0 ) = uVar3;
      *(undefined8*)( lVar1 + 0xe8 ) = puVar2[4];
   }

   return;
}
void t1_builder_close_contour(long param_1) {
   short sVar1;
   short sVar2;
   short *psVar3;
   int iVar4;
   int iVar5;
   long *plVar6;
   long *plVar7;
   psVar3 = *(short**)( param_1 + 0x28 );
   if (psVar3 == (short*)0x0) {
      return;
   }

   sVar1 = *psVar3;
   sVar2 = psVar3[1];
   if (sVar1 < 2) {
      if (sVar1 == 0) {
         if (sVar2 < 2) {
            return;
         }

         plVar6 = *(long**)( psVar3 + 4 );
         plVar7 = plVar6 + (long)sVar2 * 2 + -2;
         if (*plVar6 != *plVar7) {
            return;
         }

         iVar5 = 0;
         goto LAB_00100791;
      }

      if (sVar2 == 0) goto LAB_001007c8;
      iVar5 = 0;
      iVar4 = 0;
      if (1 < sVar2) goto LAB_0010071c;
   }
 else {
      iVar5 = *(short*)( *(long*)( psVar3 + 0xc ) + -4 + (long)sVar1 * 2 ) + 1;
      if (iVar5 == sVar2) {
         LAB_001007c8:*psVar3 = sVar1 + -1;
         return;
      }

      if (sVar2 < 2) goto LAB_0010074b;
      LAB_0010071c:plVar6 = (long*)( (long)iVar5 * 0x10 + *(long*)( psVar3 + 4 ) );
      plVar7 = (long*)( *(long*)( psVar3 + 4 ) + -0x10 + (long)sVar2 * 0x10 );
      iVar4 = iVar5;
      if (*plVar6 == *plVar7) {
         LAB_00100791:iVar4 = iVar5;
         if (( plVar6[1] == plVar7[1] ) && ( *(char*)( *(long*)( psVar3 + 8 ) + -1 + (long)sVar2 ) == '\x01' )) {
            psVar3[1] = sVar2 + -1;
         }

      }

   }

   iVar5 = iVar4;
   if (sVar1 < 1) {
      return;
   }

   sVar2 = psVar3[1];
   LAB_0010074b:if (sVar2 + -1 != iVar5) {
      *(short*)( *(long*)( psVar3 + 0xc ) + -2 + (long)sVar1 * 2 ) = sVar2 + -1;
      return;
   }

   psVar3[1] = sVar2 + -1;
   *psVar3 = sVar1 + -1;
   return;
}
void cff_builder_done(long param_1) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1 + 0x10 );
   if (lVar1 != 0) {
      puVar2 = *(undefined8**)( param_1 + 0x20 );
      uVar3 = puVar2[1];
      *(undefined8*)( lVar1 + 200 ) = *puVar2;
      *(undefined8*)( lVar1 + 0xd0 ) = uVar3;
      uVar3 = puVar2[3];
      *(undefined8*)( lVar1 + 0xd8 ) = puVar2[2];
      *(undefined8*)( lVar1 + 0xe0 ) = uVar3;
      *(undefined8*)( lVar1 + 0xe8 ) = puVar2[4];
   }

   return;
}
void cff_builder_add_point(long param_1, long param_2, long param_3, char param_4) {
   short sVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   lVar2 = *(long*)( param_1 + 0x28 );
   if (*(char*)( param_1 + 0x81 ) != '\0') {
      sVar1 = *(short*)( lVar2 + 2 );
      lVar3 = *(long*)( lVar2 + 0x10 );
      plVar4 = (long*)( (long)sVar1 * 0x10 + *(long*)( lVar2 + 8 ) );
      plVar4[1] = param_3 >> 10;
      *plVar4 = param_2 >> 10;
      *(char*)( sVar1 + lVar3 ) = ( param_4 == '\0' ) + '\x01';
   }

   *(short*)( lVar2 + 2 ) = *(short*)( lVar2 + 2 ) + 1;
   return;
}
void cff_builder_close_contour(long param_1) {
   short sVar1;
   short sVar2;
   short *psVar3;
   int iVar4;
   int iVar5;
   long *plVar6;
   long *plVar7;
   psVar3 = *(short**)( param_1 + 0x28 );
   if (psVar3 == (short*)0x0) {
      return;
   }

   sVar1 = *psVar3;
   sVar2 = psVar3[1];
   if (sVar1 < 2) {
      if (sVar1 == 0) {
         if (sVar2 < 2) {
            return;
         }

         plVar6 = *(long**)( psVar3 + 4 );
         plVar7 = plVar6 + (long)sVar2 * 2 + -2;
         if (*plVar6 != *plVar7) {
            return;
         }

         iVar5 = 0;
         goto LAB_00100931;
      }

      if (sVar2 == 0) goto LAB_00100968;
      iVar5 = 0;
      iVar4 = 0;
      if (1 < sVar2) goto LAB_001008bc;
   }
 else {
      iVar5 = *(short*)( *(long*)( psVar3 + 0xc ) + -4 + (long)sVar1 * 2 ) + 1;
      if (iVar5 == sVar2) {
         LAB_00100968:*psVar3 = sVar1 + -1;
         return;
      }

      if (sVar2 < 2) goto LAB_001008eb;
      LAB_001008bc:plVar6 = (long*)( (long)iVar5 * 0x10 + *(long*)( psVar3 + 4 ) );
      plVar7 = (long*)( *(long*)( psVar3 + 4 ) + -0x10 + (long)sVar2 * 0x10 );
      iVar4 = iVar5;
      if (*plVar6 == *plVar7) {
         LAB_00100931:iVar4 = iVar5;
         if (( plVar6[1] == plVar7[1] ) && ( *(char*)( *(long*)( psVar3 + 8 ) + -1 + (long)sVar2 ) == '\x01' )) {
            psVar3[1] = sVar2 + -1;
         }

      }

   }

   iVar5 = iVar4;
   if (sVar1 < 1) {
      return;
   }

   sVar2 = psVar3[1];
   LAB_001008eb:if (sVar2 + -1 != iVar5) {
      *(short*)( *(long*)( psVar3 + 0xc ) + -2 + (long)sVar1 * 2 ) = sVar2 + -1;
      return;
   }

   psVar3[1] = sVar2 + -1;
   *psVar3 = sVar1 + -1;
   return;
}
void ps_builder_done(long param_1) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1 + 0x10 );
   if (lVar1 != 0) {
      puVar2 = *(undefined8**)( param_1 + 0x20 );
      uVar3 = puVar2[1];
      *(undefined8*)( lVar1 + 200 ) = *puVar2;
      *(undefined8*)( lVar1 + 0xd0 ) = uVar3;
      uVar3 = puVar2[3];
      *(undefined8*)( lVar1 + 0xd8 ) = puVar2[2];
      *(undefined8*)( lVar1 + 0xe0 ) = uVar3;
      *(undefined8*)( lVar1 + 0xe8 ) = puVar2[4];
   }

   return;
}
uint cff_random(uint param_1) {
   param_1 = param_1 << 0xd ^ param_1;
   param_1 = param_1 >> 0x11 ^ param_1;
   return param_1 << 5 ^ param_1;
}
void t1_cmap_std_done(long param_1) {
   *(undefined4*)( param_1 + 0x28 ) = 0;
   *(undefined8*)( param_1 + 0x30 ) = 0;
   *(undefined8*)( param_1 + 0x20 ) = 0;
   *(undefined8*)( param_1 + 0x18 ) = 0;
   return;
}
undefined8 t1_cmap_standard_init(long *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *param_1;
   lVar2 = *(long*)( lVar1 + 0x308 );
   lVar3 = *(long*)( lVar1 + 0x288 );
   *(undefined4*)( param_1 + 5 ) = *(undefined4*)( lVar1 + 0x280 );
   param_1[6] = lVar3;
   param_1[4] = *(long*)( lVar2 + 0x28 );
   param_1[3] = *(long*)( lVar2 + 0x30 );
   return 0;
}
undefined8 t1_cmap_expert_init(long *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *param_1;
   lVar2 = *(long*)( lVar1 + 0x308 );
   lVar3 = *(long*)( lVar1 + 0x288 );
   *(undefined4*)( param_1 + 5 ) = *(undefined4*)( lVar1 + 0x280 );
   param_1[6] = lVar3;
   param_1[4] = *(long*)( lVar2 + 0x28 );
   param_1[3] = *(long*)( lVar2 + 0x38 );
   return 0;
}
undefined8 t1_cmap_custom_init(long *param_1) {
   int iVar1;
   undefined4 uVar2;
   int iVar3;
   long lVar4;
   lVar4 = *param_1;
   iVar1 = *(int*)( lVar4 + 0x230 );
   uVar2 = *(undefined4*)( lVar4 + 0x22c );
   iVar3 = *(int*)( lVar4 + 0x22c );
   param_1[4] = *(long*)( lVar4 + 0x238 );
   param_1[3] = CONCAT44(iVar1 - iVar3, uVar2);
   return 0;
}
void t1_cmap_custom_done(long param_1) {
   *(undefined8*)( param_1 + 0x20 ) = 0;
   *(undefined8*)( param_1 + 0x18 ) = 0;
   return;
}
undefined2 t1_cmap_custom_char_index(long param_1, uint param_2) {
   undefined2 uVar1;
   uVar1 = 0;
   if (( *(uint*)( param_1 + 0x18 ) <= param_2 ) && ( param_2 < *(uint*)( param_1 + 0x18 ) + *(int*)( param_1 + 0x1c ) )) {
      uVar1 = *(undefined2*)( *(long*)( param_1 + 0x20 ) + (ulong)param_2 * 2 );
   }

   return uVar1;
}
short t1_cmap_custom_char_next(long param_1, uint *param_2) {
   uint uVar1;
   short sVar2;
   short *psVar3;
   uint uVar4;
   uVar4 = *(uint*)( param_1 + 0x18 );
   uVar1 = *param_2 + 1;
   if (*param_2 + 1 < uVar4) {
      uVar1 = uVar4;
   }

   uVar4 = uVar4 + *(int*)( param_1 + 0x1c );
   if (uVar1 < uVar4) {
      psVar3 = (short*)( *(long*)( param_1 + 0x20 ) + (ulong)uVar1 * 2 );
      while (sVar2 = *psVar3,sVar2 == 0) {
         uVar1 = uVar1 + 1;
         psVar3 = psVar3 + 1;
         if (uVar4 <= uVar1) {
            *param_2 = 0;
            return 0;
         }

      }
;
   }
 else {
      uVar1 = 0;
      sVar2 = 0;
   }

   *param_2 = uVar1;
   return sVar2;
}
undefined8 psaux_get_glyph_name(long param_1, uint param_2) {
   return *(undefined8*)( *(long*)( param_1 + 0x288 ) + (ulong)param_2 * 8 );
}
undefined8 t1_cmap_unicode_init(long *param_1) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar2;
   lVar1 = *param_1;
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( lVar1 + 0x308 ) + 8 );
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00100be2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar1 + 0xb8 ), param_1, *(undefined4*)( lVar1 + 0x280 ), psaux_get_glyph_name, 0);
      return uVar2;
   }

   return 7;
}
void t1_cmap_unicode_char_index(long *param_1) {
   /* WARNING: Could not recover jumptable at 0x00100bfe. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( *param_1 + 0x308 ) + 0x10 ) )();
   return;
}
void t1_cmap_unicode_char_next(long *param_1) {
   /* WARNING: Could not recover jumptable at 0x00100c1e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( *param_1 + 0x308 ) + 0x18 ) )();
   return;
}
ulong cf2_hintmap_map(long param_1, int param_2) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   ulong uVar4;
   int iVar5;
   if (( *(int*)( param_1 + 0x20 ) == 0 ) || ( *(char*)( param_1 + 0x19 ) == '\0' )) {
      lVar3 = (long)param_2 * (long)*(int*)( param_1 + 0x1c );
      return lVar3 + 0x8000 + ( lVar3 >> 0x3f ) >> 0x10;
   }

   uVar1 = *(uint*)( param_1 + 0x24 );
   do {
      uVar2 = uVar1;
      if (*(int*)( param_1 + 0x20 ) - 1U <= uVar2) break;
      uVar1 = uVar2 + 1;
   }
 while ( *(int*)( param_1 + 0x38 + ( ulong )(uVar2 + 1) * 0x20 ) <= param_2 );
   if (uVar2 != 0) {
      lVar3 = (ulong)uVar2 * 0x20 + param_1;
      do {
         if (*(int*)( lVar3 + 0x38 ) <= param_2) {
            uVar4 = (ulong)uVar2;
            *(uint*)( param_1 + 0x24 ) = uVar2;
            iVar5 = *(int*)( param_1 + 0x38 + uVar4 * 0x20 );
            goto LAB_00100ca0;
         }

         lVar3 = lVar3 + -0x20;
         uVar2 = uVar2 - 1;
      }
 while ( uVar2 != 0 );
   }

   iVar5 = *(int*)( param_1 + 0x38 );
   *(undefined4*)( param_1 + 0x24 ) = 0;
   if (param_2 < iVar5) {
      lVar3 = (long)*(int*)( param_1 + 0x1c ) * (long)( param_2 - iVar5 );
      return ( ulong )(uint)(*(int*)( param_1 + 0x3c ) + (int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ));
   }

   uVar4 = 0;
   LAB_00100ca0:param_1 = uVar4 * 0x20 + param_1;
   lVar3 = (long)( param_2 - iVar5 ) * (long)*(int*)( param_1 + 0x40 );
   return ( ulong )(uint)((int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ) + *(int*)( param_1 + 0x3c ));
}
void cf2_hintmap_insertHint(long param_1, uint *param_2, uint *param_3) {
   uint uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   bool bVar4;
   int *piVar5;
   long lVar6;
   uint uVar7;
   int iVar8;
   ulong uVar9;
   long lVar10;
   uint uVar11;
   uint uVar12;
   ulong uVar13;
   int iVar14;
   if (*param_2 == 0) {
      bVar4 = false;
      param_2 = param_3;
   }
 else if (*param_3 == 0) {
      bVar4 = false;
   }
 else {
      bVar4 = true;
      if ((int)param_3[4] < (int)param_2[4]) {
         return;
      }

   }

   uVar7 = *(uint*)( param_1 + 0x20 );
   if (uVar7 == 0) {
      lVar6 = *(long*)( param_1 + 8 );
      if (*(char*)( lVar6 + 0x18 ) != '\0') {
         uVar13 = ( ulong )(*param_2 & 0x10);
         if (( *param_2 & 0x10 ) == 0) {
            uVar12 = param_2[4];
            goto LAB_00100edc;
         }

         uVar13 = 0;
         LAB_00100f64:uVar11 = uVar7 - 1;
         uVar12 = uVar7;
         if (!bVar4) goto LAB_00100e21;
         goto LAB_00100e1b;
      }

      uVar13 = 0;
      uVar7 = 0;
      iVar14 = 1;
      if (bVar4) {
         uVar11 = 0xffffffff;
         uVar12 = 1;
         uVar7 = 0;
         goto LAB_00100e29;
      }

   }
 else {
      uVar12 = param_2[4];
      piVar5 = (int*)( param_1 + 0x38 );
      uVar13 = 0;
      do {
         if ((int)uVar12 <= *piVar5) {
            if ((uint)uVar13 < uVar7) {
               uVar11 = *(uint*)( param_1 + 0x38 + uVar13 * 0x20 );
               if (uVar12 == uVar11) {
                  return;
               }

               if (( bVar4 ) && ( (int)uVar11 <= (int)param_3[4] )) {
                  return;
               }

               if (( *(byte*)( param_1 + 0x28 + uVar13 * 0x20 ) & 8 ) != 0) {
                  return;
               }

               lVar6 = *(long*)( param_1 + 8 );
               if (*(char*)( lVar6 + 0x18 ) == '\0') goto LAB_00100df1;
               goto LAB_00100ed2;
            }

            break;
         }

         uVar11 = (uint)uVar13 + 1;
         uVar13 = (ulong)uVar11;
         piVar5 = piVar5 + 8;
      }
 while ( uVar11 != uVar7 );
      lVar6 = *(long*)( param_1 + 8 );
      if (*(char*)( lVar6 + 0x18 ) == '\0') {
         LAB_00100f40:uVar12 = param_2[5];
         LAB_00100f44:if ((int)uVar12 < *(int*)( param_1 + 0x3c + ( ulong )((uint)uVar13 - 1) * 0x20 )) {
            return;
         }

         uVar7 = *(uint*)( param_1 + 0x20 );
         if (uVar7 <= (uint)uVar13) goto LAB_00100f64;
         LAB_00100dfa:if (bVar4) {
            uVar12 = param_3[5];
            goto LAB_00100e06;
         }

         uVar12 = param_2[5];
         LAB_00100fd4:if (*(int*)( param_1 + 0x3c + ( uVar13 & 0xffffffff ) * 0x20 ) < (int)uVar12) {
            return;
         }

         uVar11 = uVar7 - 1;
         uVar12 = uVar7;
      }
 else {
         LAB_00100ed2:if (( *param_2 & 0x10 ) != 0) {
            LAB_00100df1:if ((int)uVar13 != 0) goto LAB_00100f40;
            goto LAB_00100dfa;
         }

         LAB_00100edc:if (!bVar4) {
            uVar12 = cf2_hintmap_map();
            param_2[5] = uVar12;
            if ((int)uVar13 != 0) goto LAB_00100f44;
            uVar7 = *(uint*)( param_1 + 0x20 );
            if (uVar7 == 0) {
               uVar2 = *(undefined8*)( param_2 + 2 );
               *(undefined8*)( param_1 + 0x28 ) = *(undefined8*)param_2;
               *(undefined8*)( param_1 + 0x30 ) = uVar2;
               uVar2 = *(undefined8*)( param_2 + 4 );
               uVar3 = *(undefined8*)( param_2 + 6 );
               *(undefined4*)( param_1 + 0x20 ) = 1;
               *(undefined8*)( param_1 + 0x38 ) = uVar2;
               *(undefined8*)( param_1 + 0x40 ) = uVar3;
               return;
            }

            goto LAB_00100fd4;
         }

         iVar14 = cf2_hintmap_map(lVar6, uVar12 + (int)( param_3[4] - uVar12 ) / 2);
         lVar6 = (long)( (int)( param_3[4] - param_2[4] ) / 2 ) * (long)*(int*)( param_1 + 0x1c );
         iVar8 = (int)( ( ulong )(lVar6 + 0x8000 + ( lVar6 >> 0x3f )) >> 0x10 );
         uVar12 = iVar8 + iVar14;
         param_2[5] = iVar14 - iVar8;
         param_3[5] = uVar12;
         if ((int)uVar13 != 0) goto LAB_00100f40;
         uVar7 = *(uint*)( param_1 + 0x20 );
         if (uVar7 == 0) {
            uVar2 = *(undefined8*)( param_2 + 2 );
            uVar7 = 0;
            *(undefined8*)( param_1 + 0x28 ) = *(undefined8*)param_2;
            *(undefined8*)( param_1 + 0x30 ) = uVar2;
            uVar2 = *(undefined8*)( param_2 + 6 );
            *(undefined8*)( param_1 + 0x38 ) = *(undefined8*)( param_2 + 4 );
            *(undefined8*)( param_1 + 0x40 ) = uVar2;
            iVar8 = 0;
            goto LAB_00100f9c;
         }

         LAB_00100e06:uVar11 = uVar7 - 1;
         if (*(int*)( param_1 + 0x3c + ( uVar13 & 0xffffffff ) * 0x20 ) < (int)uVar12) {
            return;
         }

         LAB_00100e1b:uVar12 = uVar7 + 1;
      }

      LAB_00100e21:if (0xbf < uVar12) {
         return;
      }

      LAB_00100e29:iVar14 = uVar7 + 1;
      if (uVar7 != (uint)uVar13) {
         iVar8 = uVar12 - uVar11;
         uVar12 = ( (uint)uVar13 - uVar7 ) + uVar11;
         do {
            uVar9 = (ulong)uVar11;
            uVar1 = iVar8 + uVar11;
            uVar11 = uVar11 - 1;
            lVar10 = ( uVar9 + 1 ) * 0x20 + param_1;
            lVar6 = ( (ulong)uVar1 + 1 ) * 0x20 + param_1;
            uVar2 = *(undefined8*)( lVar10 + 0x10 );
            *(undefined8*)( lVar6 + 8 ) = *(undefined8*)( lVar10 + 8 );
            *(undefined8*)( lVar6 + 0x10 ) = uVar2;
            uVar2 = *(undefined8*)( lVar10 + 0x20 );
            *(undefined8*)( lVar6 + 0x18 ) = *(undefined8*)( lVar10 + 0x18 );
            *(undefined8*)( lVar6 + 0x20 ) = uVar2;
         }
 while ( uVar11 != uVar12 );
      }

   }

   iVar8 = (int)uVar13;
   uVar2 = *(undefined8*)( param_2 + 2 );
   lVar6 = ( ( uVar13 & 0xffffffff ) + 1 ) * 0x20 + param_1;
   *(undefined8*)( lVar6 + 8 ) = *(undefined8*)param_2;
   *(undefined8*)( lVar6 + 0x10 ) = uVar2;
   uVar2 = *(undefined8*)( param_2 + 6 );
   *(undefined8*)( lVar6 + 0x18 ) = *(undefined8*)( param_2 + 4 );
   *(undefined8*)( lVar6 + 0x20 ) = uVar2;
   *(int*)( param_1 + 0x20 ) = iVar14;
   if (!bVar4) {
      return;
   }

   LAB_00100f9c:uVar2 = *(undefined8*)( param_3 + 2 );
   lVar6 = ( ( ulong )(iVar8 + 1) + 1 ) * 0x20 + param_1;
   *(undefined8*)( lVar6 + 8 ) = *(undefined8*)param_3;
   *(undefined8*)( lVar6 + 0x10 ) = uVar2;
   uVar2 = *(undefined8*)( param_3 + 6 );
   *(undefined8*)( lVar6 + 0x18 ) = *(undefined8*)( param_3 + 4 );
   *(undefined8*)( lVar6 + 0x20 ) = uVar2;
   *(uint*)( param_1 + 0x20 ) = uVar7 + 2;
   return;
}
void cf2_glyphpath_hintPoint(long *param_1, undefined8 param_2, long *param_3, int param_4, int param_5) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   lVar3 = (long)(int)param_1[0x918] * (long)param_4;
   lVar2 = (long)*(int*)( (long)param_1 + 0x48c4 ) * (long)param_5;
   iVar5 = (int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ) + (int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 );
   iVar1 = cf2_hintmap_map(param_2, (long)param_5);
   lVar2 = *param_1;
   lVar4 = (long)*(int*)( lVar2 + 0x4c ) * (long)iVar1;
   lVar3 = (long)*(int*)( lVar2 + 0x44 ) * (long)iVar5;
   *param_3 = (long)( (int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ) + (int)param_1[0x91a] + (int)( ( ulong )(lVar4 + 0x8000 + ( lVar4 >> 0x3f )) >> 0x10 ) );
   lVar3 = (long)*(int*)( lVar2 + 0x48 ) * (long)iVar5;
   lVar2 = (long)*(int*)( lVar2 + 0x50 ) * (long)iVar1;
   param_3[1] = (long)( (int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ) + (int)param_1[0x91b] + (int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 ) );
   return;
}
void cf2_glyphpath_computeOffset(long *param_1, int param_2, int param_3, int param_4, int param_5, int *param_6, int *param_7) {
   int iVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   iVar5 = param_4 - param_2;
   iVar3 = param_5 - param_3;
   if (*(char*)( *param_1 + 0x134 ) != '\0') {
      iVar5 = param_2 - param_4;
      iVar3 = param_3 - param_5;
   }

   *param_7 = 0;
   *param_6 = 0;
   if (*(char*)( (long)param_1 + 0x48e2 ) == '\0') {
      return;
   }

   *(int*)( param_1[1] + 0x20 ) = *(int*)( param_1[1] + 0x20 ) + ( ( param_2 >> 0x10 ) * ( param_5 - param_3 >> 0x10 ) - ( param_3 >> 0x10 ) * ( param_4 - param_2 >> 0x10 ) );
   if (iVar5 < 0) {
      if (-1 < iVar3) {
         if (SBORROW4(iVar3 * 2, -iVar5) == iVar3 * 2 + iVar5 < 0) {
            iVar1 = (int)param_1[0x922];
            if (iVar5 * -2 < iVar3) goto LAB_001012c8;
            lVar2 = (long)iVar1 * 0xb333;
            LAB_0010126d:*param_6 = (int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 );
            lVar2 = (long)*(int*)( (long)param_1 + 0x4914 ) * 0x1b333;
            *param_7 = (int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 );
            return;
         }

         LAB_00101308:*param_6 = 0;
         *param_7 = *(int*)( (long)param_1 + 0x4914 ) * 2;
         return;
      }

      if (SBORROW4(iVar3 * -2, -iVar5) != iVar3 * -2 + iVar5 < 0) goto LAB_00101308;
      iVar1 = (int)param_1[0x922];
      if (-iVar3 <= iVar5 * -2) {
         lVar2 = (long)iVar1 * -0xb332;
         goto LAB_0010126d;
      }

   }
 else {
      if (-1 < iVar3) {
         if (iVar3 * 2 < iVar5) {
            LAB_001012a0:*param_6 = 0;
            *param_7 = 0;
            return;
         }

         iVar1 = (int)param_1[0x922];
         if (iVar3 <= iVar5 * 2) {
            lVar2 = (long)iVar1 * 0xb333;
            LAB_00101200:*param_6 = (int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 );
            lVar2 = (long)*(int*)( (long)param_1 + 0x4914 ) * 0x4ccd;
            *param_7 = (int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 );
            return;
         }

         goto LAB_001012c8;
      }

      iVar4 = -iVar3;
      if (iVar3 * -2 < iVar5) goto LAB_001012a0;
      iVar1 = (int)param_1[0x922];
      if (iVar4 == iVar5 * 2 || SBORROW4(iVar4, iVar5 * 2) != iVar4 + iVar5 * -2 < 0) {
         lVar2 = (long)iVar1 * -0xb332;
         goto LAB_00101200;
      }

   }

   iVar1 = -iVar1;
   LAB_001012c8:*param_6 = iVar1;
   *param_7 = *(int*)( (long)param_1 + 0x4914 );
   return;
}
undefined4 cf2_stack_popInt(long param_1) {
   undefined4 uVar1;
   long lVar2;
   int *piVar3;
   lVar2 = *(long*)( param_1 + 0x18 );
   if (lVar2 == *(long*)( param_1 + 0x10 )) {
      piVar3 = *(int**)( param_1 + 8 );
      if (( piVar3 != (int*)0x0 ) && ( *piVar3 == 0 )) {
         *piVar3 = 0xa1;
      }

   }
 else {
      if (*(int*)( lVar2 + -4 ) == 2) {
         uVar1 = *(undefined4*)( lVar2 + -8 );
         *(long*)( param_1 + 0x18 ) = lVar2 + -8;
         return uVar1;
      }

      piVar3 = *(int**)( param_1 + 8 );
      if (( piVar3 != (int*)0x0 ) && ( *piVar3 == 0 )) {
         *piVar3 = 0xa0;
      }

   }

   return 0;
}
int cf2_stack_popFixed(long param_1) {
   int iVar1;
   long lVar2;
   int *piVar3;
   lVar2 = *(long*)( param_1 + 0x18 );
   if (lVar2 == *(long*)( param_1 + 0x10 )) {
      piVar3 = *(int**)( param_1 + 8 );
      if (( piVar3 != (int*)0x0 ) && ( *piVar3 == 0 )) {
         *piVar3 = 0xa1;
      }

      return 0;
   }

   *(long*)( param_1 + 0x18 ) = lVar2 + -8;
   iVar1 = *(int*)( lVar2 + -8 );
   if (*(int*)( lVar2 + -4 ) != 1) {
      if (*(int*)( lVar2 + -4 ) == 2) {
         iVar1 = iVar1 << 0x10;
      }

      return iVar1;
   }

   return iVar1 + 0x2000 + ( iVar1 >> 0x1f ) >> 0xe;
}
int cf2_stack_getReal(long param_1, uint param_2) {
   int *piVar1;
   int iVar2;
   int iVar3;
   if (( uint )(*(long*)( param_1 + 0x18 ) - *(long*)( param_1 + 0x10 ) >> 3) <= param_2) {
      piVar1 = *(int**)( param_1 + 8 );
      if (( piVar1 != (int*)0x0 ) && ( *piVar1 == 0 )) {
         *piVar1 = 0x82;
      }

      return 0;
   }

   piVar1 = (int*)( *(long*)( param_1 + 0x10 ) + (ulong)param_2 * 8 );
   iVar2 = piVar1[1];
   iVar3 = *piVar1;
   if (iVar2 != 1) {
      if (iVar2 == 2) {
         iVar3 = iVar3 << 0x10;
      }

      return iVar3;
   }

   return iVar3 + 0x2000 + ( iVar3 >> 0x1f ) >> 0xe;
}
void ps_table_release(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1[3] != 0xdeadbeef) {
      return;
   }

   uVar1 = param_1[7];
   ft_mem_free(uVar1, *param_1);
   *param_1 = 0;
   ft_mem_free(uVar1, param_1[5]);
   param_1[5] = 0;
   ft_mem_free(uVar1, param_1[6]);
   param_1[6] = 0;
   param_1[3] = 0;
   return;
}
void afm_parser_done(undefined8 *param_1) {
   ft_mem_free(*param_1, param_1[1]);
   param_1[1] = 0;
   return;
}
void t1_cmap_unicode_done(long *param_1) {
   ft_mem_free(*(undefined8*)( *param_1 + 0xb8 ), param_1[4]);
   param_1[4] = 0;
   *(undefined4*)( param_1 + 3 ) = 0;
   return;
}
int ps_table_realloc(long *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   lVar2 = *param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = ft_mem_realloc(param_1[7], 1, param_1[2], param_2, lVar2, &local_24);
   *param_1 = lVar3;
   if (local_24 == 0) {
      if (( lVar3 != lVar2 ) && ( lVar2 != 0 )) {
         plVar4 = (long*)param_1[5];
         plVar1 = plVar4 + (int)param_1[4];
         for (; plVar4 < plVar1; plVar4 = plVar4 + 1) {
            if (*plVar4 != 0) {
               *plVar4 = ( *plVar4 - lVar2 ) + *param_1;
            }

         }

      }

      param_1[2] = param_2;
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_24;
}
void ps_table_done(long param_1) {
   ps_table_realloc(param_1, *(undefined8*)( param_1 + 8 ));
   return;
}
int ps_table_new(undefined8 *param_1, int param_2, undefined8 param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   param_1[7] = param_3;
   uVar1 = ft_mem_realloc(param_3, 8, 0, (long)param_2, 0, &local_34);
   param_1[5] = uVar1;
   if (local_34 == 0) {
      uVar1 = ft_mem_realloc(param_3, 4, 0, (long)param_2, 0, &local_34);
      param_1[6] = uVar1;
      if (local_34 == 0) {
         *(int*)( param_1 + 4 ) = param_2;
         param_1[3] = 0xdeadbeef;
         *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
         *param_1 = 0;
         param_1[8] = ps_table_new;
         param_1[9] = ps_table_done;
         param_1[10] = ps_table_add;
         param_1[0xb] = ps_table_release;
         goto LAB_0010163d;
      }

      uVar1 = param_1[5];
   }

   ft_mem_free(param_3, uVar1);
   param_1[5] = 0;
   LAB_0010163d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_34;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void t1_builder_add_point(long param_1, undefined8 param_2, undefined8 param_3, char param_4) {
   short sVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   lVar2 = *(long*)( param_1 + 0x28 );
   if (*(char*)( param_1 + 0x84 ) == '\0') {
      *(short*)( lVar2 + 2 ) = *(short*)( lVar2 + 2 ) + 1;
      return;
   }

   sVar1 = *(short*)( lVar2 + 2 );
   lVar3 = *(long*)( lVar2 + 0x10 );
   plVar5 = (long*)( (long)sVar1 * 0x10 + *(long*)( lVar2 + 8 ) );
   lVar4 = FT_RoundFix(param_2);
   *plVar5 = lVar4 >> 0x10;
   lVar4 = FT_RoundFix(param_3);
   plVar5[1] = lVar4 >> 0x10;
   *(char*)( sVar1 + lVar3 ) = ( param_4 == '\0' ) + '\x01';
   *(short*)( lVar2 + 2 ) = *(short*)( lVar2 + 2 ) + 1;
   return;
}
undefined8 cf2_arrstack_setNumElements(undefined8 *param_1, ulong param_2) {
   int *piVar1;
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = param_1[2];
   if (param_2 <= SUB168(( ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff) ) / auVar2, 0)) {
      lVar4 = param_1[2] * param_2;
      uVar3 = ft_mem_qrealloc(*param_1, 1, param_1[5], lVar4, param_1[6], &local_24);
      param_1[6] = uVar3;
      if (local_24 == 0) {
         param_1[3] = param_2;
         uVar3 = 1;
         param_1[5] = lVar4;
         if (param_2 < (ulong)param_1[4]) {
            piVar1 = (int*)param_1[1];
            if (( piVar1 != (int*)0x0 ) && ( *piVar1 == 0 )) {
               *piVar1 = 0x82;
            }

            param_1[4] = param_2;
            uVar3 = 0;
         }

         goto LAB_001017df;
      }

   }

   piVar1 = (int*)param_1[1];
   if (( piVar1 != (int*)0x0 ) && ( *piVar1 == 0 )) {
      *piVar1 = 0x40;
   }

   uVar3 = 0;
   LAB_001017df:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void cf2_arrstack_push(long param_1, void *param_2) {
   char cVar1;
   long lVar2;
   lVar2 = *(long*)( param_1 + 0x20 );
   if (lVar2 == *(long*)( param_1 + 0x18 )) {
      cVar1 = cf2_arrstack_setNumElements(param_1, lVar2 * 2 + 0x10);
      if (cVar1 == '\0') {
         return;
      }

      lVar2 = *(long*)( param_1 + 0x20 );
   }

   memcpy((void*)( lVar2 * *(size_t*)( param_1 + 0x10 ) + *(long*)( param_1 + 0x30 ) ), param_2, *(size_t*)( param_1 + 0x10 ));
   *(long*)( param_1 + 0x20 ) = *(long*)( param_1 + 0x20 ) + 1;
   return;
}
void cf2_doStems(long param_1, long param_2, undefined8 param_3, int *param_4, char *param_5, int param_6) {
   int iVar1;
   int iVar2;
   long lVar3;
   uint uVar4;
   long lVar6;
   uint uVar7;
   long in_FS_OFFSET;
   undefined1 local_58[4];
   int local_54;
   int local_50;
   undefined8 local_4c;
   long local_40;
   ulong uVar5;
   lVar6 = *(long*)( param_2 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = *(long*)( param_2 + 0x18 ) - lVar6 >> 3;
   uVar4 = (uint)uVar5;
   if (( ( *(char*)( param_1 + 0xc ) == '\0' ) && ( ( uVar5 & 1 ) != 0 ) ) && ( *param_5 == '\0' )) {
      iVar1 = cf2_stack_getReal(param_2, 0);
      lVar3 = *(long*)( param_1 + 0xf0 );
      *param_4 = (int)*(undefined8*)( *(long*)( lVar3 + 0x420 ) + 0x408 ) * 0x10000 + iVar1;
   }
 else {
      lVar3 = *(long*)( param_1 + 0xf0 );
   }

   if (*(char*)( lVar3 + 0x438 ) == '\0') {
      uVar7 = uVar4 & 1;
      if (uVar7 < uVar4) {
         do {
            iVar1 = cf2_stack_getReal(param_2, uVar7);
            uVar7 = uVar7 + 2;
            local_54 = param_6 + iVar1;
            iVar2 = cf2_stack_getReal();
            local_58[0] = 0;
            local_4c = 0;
            param_6 = param_6 + iVar1 + iVar2;
            local_50 = param_6;
            cf2_arrstack_push(param_3, local_58);
         }
 while ( uVar7 < uVar4 );
         lVar6 = *(long*)( param_2 + 0x10 );
      }

      *(long*)( param_2 + 0x18 ) = lVar6;
   }

   *param_5 = '\x01';
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong PS_Conv_ToFixed(ulong *param_1, byte *param_2, long param_3, byte *param_4) {
   byte bVar1;
   bool bVar2;
   bool bVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   byte *pbVar7;
   byte *pbVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   byte *local_48;
   long local_40;
   pbVar8 = (byte*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = pbVar8;
   if (param_2 <= pbVar8) goto LAB_00101bb0;
   bVar1 = *pbVar8;
   if (( bVar1 - 0x2b & 0xfd ) == 0) {
      param_4 = pbVar8 + 1;
      local_48 = param_4;
      if (( param_4 == param_2 ) || ( ( pbVar8[1] - 0x2b & 0xfd ) == 0 )) goto LAB_00101bb0;
      bVar10 = bVar1 == 0x2d;
      pbVar7 = param_4;
      bVar3 = bVar10;
      if (pbVar8[1] != 0x2e) goto LAB_00101a7b;
      bVar2 = false;
      if (param_4 < param_2) {
         uVar4 = 0;
         pbVar8 = param_4;
         goto LAB_00101cb0;
      }

      uVar4 = 0;
      lVar9 = 1;
      lVar6 = 0;
      local_48 = param_4;
   }
 else {
      bVar10 = false;
      bVar2 = false;
      uVar4 = 0;
      pbVar7 = pbVar8;
      bVar3 = false;
      if (bVar1 == 0x2e) {
         LAB_00101cb0:pbVar8 = pbVar8 + 1;
         local_48 = pbVar8;
         if (pbVar8 < param_2) {
            bVar3 = false;
            lVar9 = 1;
            lVar6 = 0;
            pbVar7 = pbVar8;
            do {
               bVar1 = *pbVar7;
               if (( ( (char)bVar1 < '\x01' ) || ( bVar1 < 0x21 && ( 0xfffffffeffffc9ffU >> ( (ulong)bVar1 & 0x3f ) & 1 ) == 0 ) ) || ( 9 < (byte)ft_char_table[bVar1] )) {
                  local_48 = pbVar8;
                  if (bVar3) {
                     local_48 = param_4;
                  }

                  break;
               }

               if (( lVar9 < 0xccccccc ) && ( lVar6 < 0xccccccc )) {
                  lVar6 = (long)(char)ft_char_table[bVar1] + lVar6 * 10;
                  if (( uVar4 == 0 ) && ( 0 < param_3 )) {
                     param_3 = param_3 + -1;
                  }
 else {
                     lVar9 = lVar9 * 10;
                  }

               }

               param_4 = pbVar7 + 1;
               bVar3 = true;
               pbVar7 = param_4;
               local_48 = param_2;
            }
 while ( param_4 != param_2 );
            goto LAB_00101aca;
         }

      }
 else {
         LAB_00101a7b:bVar10 = bVar3;
         local_48 = pbVar7;
         uVar4 = PS_Conv_ToInt();
         if (pbVar7 == local_48) goto LAB_00101bb0;
         bVar2 = (long)uVar4 < 0x8000;
         if (bVar2) {
            uVar4 = ( ulong )(uint)((int)uVar4 << 0x10);
         }

         bVar2 = !bVar2;
         if (( local_48 < param_2 ) && ( param_4 = local_48 ),pbVar8 = local_48,*local_48 == 0x2e) goto LAB_00101cb0;
      }

      lVar9 = 1;
      lVar6 = 0;
   }

   LAB_00101aca:pbVar8 = local_48 + 1;
   if (pbVar8 < param_2) {
      bVar3 = false;
      if (( *local_48 & 0xdf ) != 0x45) goto LAB_00101ae7;
      local_48 = pbVar8;
      lVar5 = PS_Conv_ToInt(&local_48, param_2);
      if (pbVar8 != local_48) {
         if (lVar5 < 0x3e9) {
            bVar3 = true;
            if (-0x3e9 < lVar5) {
               param_3 = param_3 + lVar5;
               bVar3 = false;
            }

            goto LAB_00101ae7;
         }

         *param_1 = (ulong)local_48;
         if (uVar4 == 0 && lVar6 == 0) goto LAB_00101bb0;
         goto LAB_00101c90;
      }

   }
 else {
      bVar3 = false;
      LAB_00101ae7:*param_1 = (ulong)local_48;
      if (uVar4 != 0 || lVar6 != 0) {
         if (bVar2) {
            LAB_00101c90:uVar4 = 0x7fffffff;
         }
 else {
            if (bVar3) goto LAB_00101bb0;
            if (param_3 < 1) {
               for (; param_3 != 0; param_3 = param_3 + 1) {
                  uVar4 = (long)uVar4 / 10;
                  if (lVar9 < 0xccccccc) {
                     lVar9 = lVar9 * 10;
                  }
 else {
                     lVar6 = lVar6 / 10;
                  }

                  if (uVar4 == 0 && lVar6 == 0) goto LAB_00101bb0;
               }

            }
 else {
               do {
                  if (0xccccccb < (long)uVar4) goto LAB_00101c90;
                  uVar4 = uVar4 * 10;
                  if (lVar6 < 0xccccccc) {
                     lVar6 = lVar6 * 10;
                  }
 else {
                     if (lVar9 == 1) goto LAB_00101c90;
                     lVar9 = lVar9 / 10;
                  }

                  param_3 = param_3 + -1;
               }
 while ( param_3 != 0 );
            }

            if (lVar6 != 0) {
               lVar6 = FT_DivFix(lVar6, lVar9);
               uVar4 = uVar4 + lVar6;
            }

         }

         if (bVar10) {
            uVar4 = -uVar4;
         }

         goto LAB_00101bb2;
      }

   }

   LAB_00101bb0:uVar4 = 0;
   LAB_00101bb2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
ulong ps_tofixedarray(undefined8 *param_1, char *param_2, int param_3, long param_4, int param_5) {
   undefined8 *puVar1;
   undefined8 uVar2;
   ulong uVar3;
   ulong uVar4;
   char cVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   char *local_50;
   undefined8 local_48;
   long local_40;
   uVar3 = 0;
   local_50 = (char*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar6 = local_50;
   if (param_2 <= local_50) goto LAB_00101f80;
   if (*local_50 == '[') {
      cVar5 = ']';
      LAB_00101ecb:local_50 = local_50 + 1;
      if (param_2 <= local_50) {
         uVar3 = 0;
         pcVar6 = local_50;
         goto LAB_00101f80;
      }

   }
 else {
      cVar5 = '}';
      if (*local_50 == '{') goto LAB_00101ecb;
      cVar5 = '\0';
   }

   uVar4 = 0;
   while (true) {
      uVar3 = uVar4 & 0xffffffff;
      skip_spaces(&local_50, param_2);
      pcVar6 = local_50;
      if (param_2 <= local_50) break;
      if (*local_50 == cVar5) {
         pcVar6 = local_50 + 1;
         break;
      }

      if (( param_4 != 0 ) && ( param_3 <= (int)uVar4 )) break;
      puVar1 = (undefined8*)( param_4 + uVar4 * 8 );
      if (param_4 == 0) {
         puVar1 = &local_48;
      }

      uVar2 = PS_Conv_ToFixed(&local_50, param_2, (long)param_5);
      *puVar1 = uVar2;
      if (pcVar6 == local_50) {
         uVar3 = 0xffffffff;
         break;
      }

      uVar3 = ( ulong )((int)uVar4 + 1);
      pcVar6 = local_50;
      if (( cVar5 == '\0' ) || ( uVar4 = param_2 <= local_50 )) break;
   }
;
   LAB_00101f80:*param_1 = pcVar6;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3 & 0xffffffff;
}
void ps_parser_to_fixed_array(long param_1) {
   skip_spaces(param_1, *(undefined8*)( param_1 + 0x10 ));
   ps_tofixedarray();
   return;
}
int ps_parser_to_coord_array(undefined8 *param_1, int param_2, undefined2 *param_3) {
   char *pcVar1;
   undefined2 extraout_var;
   undefined2 *puVar2;
   undefined2 *puVar3;
   undefined8 *puVar4;
   int iVar5;
   char *pcVar6;
   char cVar7;
   long in_FS_OFFSET;
   undefined2 local_4a;
   char *local_48;
   long local_40;
   iVar5 = 0;
   pcVar1 = (char*)param_1[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = param_1;
   skip_spaces(param_1, pcVar1);
   local_48 = (char*)*puVar4;
   pcVar6 = local_48;
   if (pcVar1 <= local_48) goto LAB_00102138;
   if (*local_48 == '[') {
      cVar7 = ']';
      LAB_00102098:local_48 = local_48 + 1;
      if (pcVar1 <= local_48) {
         iVar5 = 0;
         pcVar6 = local_48;
         goto LAB_00102138;
      }

   }
 else {
      cVar7 = '}';
      if (*local_48 == '{') goto LAB_00102098;
      cVar7 = '\0';
   }

   iVar5 = 0;
   puVar3 = param_3;
   while (skip_spaces(&local_48, pcVar1),pcVar6 = local_48,local_48 < pcVar1) {
      if (*local_48 == cVar7) {
         pcVar6 = local_48 + 1;
         break;
      }

      if (( param_3 != (undefined2*)0x0 ) && ( param_2 <= iVar5 )) break;
      PS_Conv_ToFixed(&local_48, pcVar1, 0);
      puVar2 = &local_4a;
      if (param_3 != (undefined2*)0x0) {
         puVar2 = puVar3;
      }

      *puVar2 = extraout_var;
      if (pcVar6 == local_48) {
         iVar5 = -1;
         break;
      }

      iVar5 = iVar5 + 1;
      pcVar6 = local_48;
      if (( cVar7 == '\0' ) || ( puVar3 = pcVar1 <= local_48 )) break;
   }
;
   LAB_00102138:*param_1 = pcVar6;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
void ps_parser_to_fixed(long param_1) {
   skip_spaces(param_1, *(undefined8*)( param_1 + 0x10 ));
   PS_Conv_ToFixed();
   return;
}
void ps_builder_init(undefined8 *param_1, undefined8 *param_2, char param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined1 uVar6;
   ulong uVar7;
   undefined8 *puVar8;
   *param_1 = 0;
   param_1[0xd] = 0;
   puVar8 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar7 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x70U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
   }

   uVar1 = param_2[3];
   uVar2 = param_2[4];
   uVar3 = param_2[5];
   if (param_3 == '\0') {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = uVar1;
      param_1[6] = param_2 + 6;
      param_1[7] = param_2 + 7;
      param_1[8] = param_2 + 8;
      param_1[9] = param_2 + 10;
      param_1[10] = param_2 + 0xc;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      *(undefined2*)( param_1 + 0xb ) = *(undefined2*)( param_2 + 0x10 );
      *(undefined1*)( (long)param_1 + 0x5a ) = *(undefined1*)( (long)param_2 + 0x82 );
      uVar6 = *(undefined1*)( (long)param_2 + 0x83 );
   }
 else {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = uVar1;
      param_1[6] = param_2 + 6;
      param_1[7] = param_2 + 7;
      param_1[8] = param_2 + 8;
      param_1[9] = param_2 + 10;
      param_1[10] = param_2 + 0xc;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      *(undefined2*)( (long)param_1 + 0x59 ) = *(undefined2*)( (long)param_2 + 0x84 );
      uVar6 = *(undefined1*)( (long)param_2 + 0x86 );
   }

   *(undefined1*)( (long)param_1 + 0x5b ) = uVar6;
   *(char*)( (long)param_1 + 0x5c ) = param_3;
   param_1[0xc] = ps_builder_init;
   param_1[0xd] = ps_builder_done;
   return;
}
void ps_decoder_init(undefined8 *param_1, long param_2, char param_3) {
   undefined4 uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   *param_1 = 0;
   param_1[0x9d] = 0;
   puVar9 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar8 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x4f0U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
   }

   if (param_3 != '\0') {
      ps_builder_init(param_1, param_2, param_3);
      uVar1 = *(undefined4*)( param_2 + 0xa88 );
      uVar2 = *(undefined4*)( param_2 + 0xb68 );
      param_1[0x85] = param_2 + 0xba8;
      param_1[0x91] = *(undefined8*)( param_2 + 0xa80 );
      uVar3 = *(undefined8*)( param_2 + 0xa90 );
      param_1[0x8d] = CONCAT44(uVar2, uVar1);
      param_1[0x8c] = uVar3;
      uVar5 = *(undefined8*)( param_2 + 0xb98 );
      uVar3 = *(undefined8*)( param_2 + 0xb60 );
      *(undefined4*)( param_1 + 0x88 ) = *(undefined4*)( param_2 + 0xa9c );
      param_1[0x8a] = *(undefined8*)( param_2 + 0xaa0 );
      uVar6 = *(undefined8*)( param_2 + 0xaa8 );
      uVar7 = *(undefined8*)( param_2 + 0xab0 );
      param_1[0x9b] = uVar3;
      param_1[0x9c] = uVar5;
      param_1[0x93] = uVar6;
      param_1[0x94] = uVar7;
      *(undefined4*)( param_1 + 0x9d ) = *(undefined4*)( param_2 + 0xba0 );
      *(undefined4*)( param_1 + 0x92 ) = *(undefined4*)( param_2 + 0xa98 );
      return;
   }

   ps_builder_init(param_1, param_2, 0);
   lVar4 = *(long*)( param_2 + 0xd8 );
   uVar3 = *(undefined8*)( param_2 + 0x5d8 );
   param_1[0x85] = lVar4 + 5000;
   param_1[0x83] = lVar4;
   param_1[0x84] = uVar3;
   uVar3 = *(undefined8*)( param_2 + 0x5a0 );
   uVar5 = *(undefined8*)( param_2 + 0x5b0 );
   uVar6 = *(undefined8*)( param_2 + 0x5b8 );
   param_1[0x89] = *(undefined8*)( param_2 + 0x5a8 );
   param_1[0x88] = uVar3;
   param_1[0x86] = param_2 + 0x488;
   param_1[0x8a] = uVar5;
   param_1[0x8b] = uVar6;
   *(undefined1*)( param_1 + 0x87 ) = *(undefined1*)( param_2 + 0x499 );
   *(undefined4*)( (long)param_1 + 0x46c ) = *(undefined4*)( param_2 + 0x5cc );
   uVar3 = *(undefined8*)( param_2 + 0x5e8 );
   param_1[0x8f] = *(undefined8*)( param_2 + 0x5e0 );
   param_1[0x90] = uVar3;
   return;
}
void t1_make_subfont(long param_1, long param_2, undefined8 *param_3) {
   byte bVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   uint uVar5;
   uint uVar6;
   long lVar7;
   ulong uVar8;
   uint uVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   undefined8 *local_28;
   long local_20;
   undefined1 local_14[4];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = 0;
   *param_3 = 0;
   param_3[0x98] = 0;
   puVar10 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
   for (uVar8 = ( ulong )(( (int)param_3 - (int)(undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 ) ) + 0x4c8U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
   }

   bVar1 = *(byte*)( param_2 + 8 );
   *(byte*)( param_3 + 0x29 ) = bVar1;
   if (bVar1 != 0) {
      do {
         param_3[lVar7 + 0x2a] = (long)*(short*)( param_2 + 0xc + lVar7 * 2 );
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < (uint)bVar1 );
   }

   bVar1 = *(byte*)( param_2 + 9 );
   lVar7 = 0;
   *(byte*)( (long)param_3 + 0x149 ) = bVar1;
   if (bVar1 != 0) {
      do {
         param_3[lVar7 + 0x38] = (long)*(short*)( param_2 + 0x28 + lVar7 * 2 );
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < (uint)bVar1 );
   }

   bVar1 = *(byte*)( param_2 + 10 );
   lVar7 = 0;
   *(byte*)( (long)param_3 + 0x14a ) = bVar1;
   if (bVar1 != 0) {
      do {
         param_3[lVar7 + 0x42] = (long)*(short*)( param_2 + 0x3c + lVar7 * 2 );
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < (uint)bVar1 );
   }

   bVar1 = *(byte*)( param_2 + 0xb );
   lVar7 = 0;
   *(byte*)( (long)param_3 + 0x14b ) = bVar1;
   if (bVar1 != 0) {
      do {
         param_3[lVar7 + 0x50] = (long)*(short*)( param_2 + 0x58 + lVar7 * 2 );
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < (uint)bVar1 );
   }

   param_3[0x5a] = *(undefined8*)( param_2 + 0x70 );
   param_3[0x5b] = (long)*(int*)( param_2 + 0x78 );
   param_3[0x5c] = (long)*(int*)( param_2 + 0x7c );
   param_3[0x5d] = ( ulong ) * (ushort*)( param_2 + 0x80 );
   param_3[0x5e] = ( ulong ) * (ushort*)( param_2 + 0x82 );
   bVar1 = *(byte*)( param_2 + 0x84 );
   lVar7 = 0;
   *(byte*)( param_3 + 0x5f ) = bVar1;
   if (bVar1 != 0) {
      do {
         param_3[lVar7 + 0x60] = (long)*(short*)( param_2 + 0x88 + lVar7 * 2 );
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < (uint)bVar1 );
   }

   bVar1 = *(byte*)( param_2 + 0x85 );
   lVar7 = 0;
   *(byte*)( (long)param_3 + 0x2f9 ) = bVar1;
   if (bVar1 != 0) {
      do {
         param_3[lVar7 + 0x6d] = (long)*(short*)( param_2 + 0xa2 + lVar7 * 2 );
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < (uint)bVar1 );
   }

   *(undefined1*)( param_3 + 0x7a ) = *(undefined1*)( param_2 + 0x86 );
   uVar4 = *(undefined8*)( param_2 + 0xc0 );
   uVar2 = *(undefined4*)( param_2 + 200 );
   uVar3 = *(undefined4*)( param_2 + 4 );
   param_3[0x83] = param_3;
   param_3[0x7d] = uVar4;
   param_3[0x7c] = CONCAT44(uVar2, uVar3);
   lVar7 = *(long*)( param_1 + 0xf0 );
   uVar6 = *(uint*)( lVar7 + 0x74 );
   if (uVar6 == 0xffffffff) {
      if (*(int*)( param_3 + 0x98 ) != 0) goto LAB_001026d8;
   }
 else {
      *(uint*)( param_3 + 0x98 ) = uVar6;
      if (uVar6 != 0) {
         do {
            uVar6 = uVar6 << 0xd ^ uVar6;
            uVar6 = uVar6 ^ uVar6 >> 0x11;
            uVar6 = uVar6 << 5 ^ uVar6;
         }
 while ( (int)uVar6 < 0 );
         *(uint*)( lVar7 + 0x74 ) = uVar6;
         goto LAB_001026d8;
      }

   }

   uVar5 = (uint)local_14 ^ ( uint ) & local_20 ^ ( uint ) & local_28;
   uVar9 = uVar5 >> 10 ^ uVar5;
   uVar6 = 0x7384;
   if (uVar9 != uVar5 >> 0x14) {
      uVar6 = uVar9 ^ uVar5 >> 0x14;
   }

   *(uint*)( param_3 + 0x98 ) = uVar6;
   LAB_001026d8:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      local_28 = param_3;
      local_20 = param_1;
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
undefined8 cf2_getSeacComponent(long param_1, ulong param_2, undefined1 (*param_3)[16]) {
   short sVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_3 = (undefined1[16])0x0;
   param_3[1] = (undefined1[16])0x0;
   lVar3 = *(long*)( param_1 + 8 );
   if (*(long*)( *(long*)( lVar3 + 0xf0 ) + 0x68 ) == 0) {
      lVar3 = *(long*)( param_1 + 0x418 );
      if (( *(long*)( lVar3 + 0x520 ) != 0 ) && ( (uint)param_2 < 0x100 )) {
         sVar1 = ( *(code*)**(undefined8**)( lVar3 + 0x1368 ) )(param_2 & 0xffffffff);
         if (*(uint*)( lVar3 + 0x24 ) != 0) {
            uVar4 = 0;
            do {
               if (sVar1 == *(short*)( *(long*)( lVar3 + 0x520 ) + uVar4 * 2 )) {
                  param_2 = uVar4 & 0xffffffff;
                  if (-1 < (int)uVar4) {
                     lVar3 = *(long*)( param_1 + 8 );
                     goto LAB_0010276b;
                  }

                  break;
               }

               uVar4 = uVar4 + 1;
            }
 while ( uVar4 != *(uint*)( lVar3 + 0x24 ) );
         }

      }

      uVar2 = 0x12;
   }
 else {
      LAB_0010276b:uVar2 = ( **(code**)( param_1 + 0x478 ) )(lVar3, param_2, &local_30, &local_28);
      if ((int)uVar2 == 0) {
         lVar3 = 0;
         *(long*)( *param_3 + 8 ) = local_30;
         if (local_30 != 0) {
            lVar3 = local_28 + local_30;
         }

         *(long*)param_3[1] = lVar3;
         *(long*)( param_3[1] + 8 ) = local_30;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 t1_builder_add_contour(long param_1) {
   short *psVar1;
   long lVar2;
   short sVar3;
   undefined8 uVar4;
   psVar1 = *(short**)( param_1 + 0x28 );
   if (psVar1 == (short*)0x0) {
      return 3;
   }

   if (*(char*)( param_1 + 0x84 ) == '\0') {
      *psVar1 = *psVar1 + 1;
   }
 else {
      lVar2 = *(long*)( param_1 + 0x18 );
      if (*(uint*)( lVar2 + 0xc ) < ( uint )(*(short*)( lVar2 + 0x18 ) + 1 + (int)*(short*)( lVar2 + 0x60 ))) {
         uVar4 = FT_GlyphLoader_CheckPoints(lVar2, 0, 1);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

      }

      sVar3 = *psVar1;
      if (0 < sVar3) {
         *(short*)( *(long*)( psVar1 + 0xc ) + -2 + (long)sVar3 * 2 ) = psVar1[1] + -1;
         sVar3 = *psVar1;
      }

      *psVar1 = sVar3 + 1;
   }

   return 0;
}
undefined8 cff_builder_add_contour(long param_1) {
   short *psVar1;
   long lVar2;
   short sVar3;
   undefined8 uVar4;
   psVar1 = *(short**)( param_1 + 0x28 );
   if (*(char*)( param_1 + 0x81 ) == '\0') {
      *psVar1 = *psVar1 + 1;
   }
 else {
      lVar2 = *(long*)( param_1 + 0x18 );
      if (*(uint*)( lVar2 + 0xc ) < ( uint )(*(short*)( lVar2 + 0x18 ) + 1 + (int)*(short*)( lVar2 + 0x60 ))) {
         uVar4 = FT_GlyphLoader_CheckPoints(lVar2, 0, 1);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         sVar3 = *psVar1;
      }
 else {
         sVar3 = *psVar1;
      }

      if (0 < sVar3) {
         *(short*)( *(long*)( psVar1 + 0xc ) + -2 + (long)sVar3 * 2 ) = psVar1[1] + -1;
         sVar3 = *psVar1;
      }

      *psVar1 = sVar3 + 1;
   }

   return 0;
}
void t1_builder_init(undefined8 *param_1, long param_2, long param_3, long param_4, char param_5) {
   undefined8 uVar1;
   long lVar2;
   *(undefined1*)( (long)param_1 + 0x84 ) = 1;
   uVar1 = *(undefined8*)( param_2 + 0xb8 );
   *(undefined4*)( param_1 + 0x10 ) = 0;
   param_1[2] = param_4;
   *param_1 = uVar1;
   param_1[1] = param_2;
   if (param_4 != 0) {
      lVar2 = **(long**)( param_4 + 0x128 );
      param_1[5] = lVar2 + 0x60;
      param_1[3] = lVar2;
      param_1[4] = lVar2 + 0x18;
      FT_GlyphLoader_Rewind();
      uVar1 = **(undefined8**)( param_3 + 0x50 );
      param_1[0x11] = 0;
      param_1[0x12] = uVar1;
      if (param_5 != '\0') {
         param_1[0x11] = *(undefined8*)( *(long*)( param_4 + 0x128 ) + 0x40 );
      }

   }

   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_1 + ( 2*i + 6 ) ) = (undefined1[16])0;
   }

   param_1[0x13] = t1_builder_init;
   param_1[0x14] = t1_builder_done;
   param_1[0x15] = t1_builder_check_points;
   param_1[0x16] = t1_builder_add_point;
   param_1[0x17] = t1_builder_add_point1;
   param_1[0x18] = t1_builder_add_contour;
   param_1[0x19] = t1_builder_start_point;
   param_1[0x1a] = t1_builder_close_contour;
   return;
}
void cff_builder_init(undefined8 *param_1, long param_2, long param_3, long param_4, char param_5) {
   undefined8 uVar1;
   long lVar2;
   *(undefined2*)( param_1 + 0x10 ) = 0x100;
   uVar1 = *(undefined8*)( param_2 + 0xb8 );
   param_1[2] = param_4;
   *param_1 = uVar1;
   param_1[1] = param_2;
   if (param_4 != 0) {
      lVar2 = **(long**)( param_4 + 0x128 );
      param_1[5] = lVar2 + 0x60;
      param_1[3] = lVar2;
      param_1[4] = lVar2 + 0x18;
      FT_GlyphLoader_Rewind();
      *(undefined1(*) [16])( param_1 + 0x11 ) = (undefined1[16])0x0;
      if (( ( param_5 != '\0' ) && ( param_3 != 0 ) ) && ( (undefined8*)**(undefined8**)( param_3 + 0x50 ) != (undefined8*)0x0 )) {
         uVar1 = *(undefined8*)**(undefined8**)( param_3 + 0x50 );
         param_1[0x11] = *(undefined8*)( *(long*)( param_4 + 0x128 ) + 0x40 );
         param_1[0x12] = uVar1;
      }

   }

   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_1 + ( 2*i + 6 ) ) = (undefined1[16])0;
   }

   param_1[0x13] = cff_builder_init;
   param_1[0x14] = cff_builder_done;
   param_1[0x15] = cff_check_points;
   param_1[0x16] = cff_builder_add_point;
   param_1[0x17] = cff_builder_add_point1;
   param_1[0x18] = cff_builder_add_contour;
   param_1[0x19] = cff_builder_start_point;
   param_1[0x1a] = cff_builder_close_contour;
   return;
}
int afm_parser_init(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)ft_mem_alloc(param_2, 0x20, &local_34);
   if (local_34 == 0) {
      puVar1[2] = param_4;
      *(undefined4*)( puVar1 + 3 ) = 2;
      *puVar1 = param_3;
      puVar1[1] = param_3;
      *param_1 = param_2;
      param_1[1] = puVar1;
      param_1[2] = 0;
      param_1[3] = 0;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_34;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 t1_decoder_parse_metrics(long param_1, byte *param_2, uint param_3) {
   long *plVar1;
   ulong *puVar2;
   long *plVar3;
   byte bVar4;
   long lVar5;
   uint uVar6;
   bool bVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   int *piVar11;
   ulong *puVar12;
   ulong *puVar13;
   long lVar14;
   byte *pbVar15;
   long *plVar16;
   byte *pbVar17;
   puVar2 = (ulong*)( param_1 + 0x8e0 );
   plVar3 = (long*)( param_1 + 0xd8 );
   pbVar17 = param_2 + param_3;
   *(long**)( param_1 + 0x8d8 ) = plVar3;
   *(ulong**)( param_1 + 0xa78 ) = puVar2;
   *(undefined4*)( param_1 + 0x80 ) = 0;
   *(byte**)( param_1 + 0x8e8 ) = param_2;
   *(byte**)( param_1 + 0x8f0 ) = pbVar17;
   *(byte**)( param_1 + 0x8e0 ) = param_2;
   if (param_2 < pbVar17) {
      bVar7 = false;
      puVar12 = puVar2;
      plVar16 = plVar3;
      do {
         bVar4 = *param_2;
         pbVar15 = param_2 + 1;
         puVar13 = puVar12;
         if (bVar4 < 0x20) {
            switch (bVar4) {
               default:
          goto LAB_00102d25;
               case 10:
          if (bVar7) {
            return 0xa0;
          }
          if (plVar16 == plVar3 || (long)plVar16 - (long)plVar3 < 0) {
            return 0xa1;
          }
          plVar1 = plVar16 + -1;
          plVar16 = plVar16 + -1;
          lVar10 = (long)(short)((ulong)*plVar1 >> 0x10);
          if (*(long *)(param_1 + 0xab0) != 0) {
            piVar11 = (int *)ft_hash_num_lookup();
            if (piVar11 == (int *)0x0) {
              return 0xa0;
            }
            lVar10 = (long)*piVar11;
          }
          if ((int)lVar10 < 0) {
            return 0xa0;
          }
          if (*(int *)(param_1 + 0xa9c) <= (int)lVar10) {
            return 0xa0;
          }
          if (0x168 < (long)puVar12 - (long)puVar2) {
            return 0xa0;
          }
          lVar5 = *(long *)(param_1 + 0xaa0);
          *puVar12 = (ulong)pbVar15;
          puVar13 = puVar12 + 3;
          lVar14 = *(long *)(param_1 + 0xaa8);
          pbVar15 = *(byte **)(lVar5 + lVar10 * 8);
          puVar12[4] = (ulong)pbVar15;
          if (lVar14 == 0) {
            lVar14 = (long)*(int *)(param_1 + 0xa98);
            if (*(int *)(param_1 + 0xa98) < 0) {
              lVar14 = 0;
            }
            pbVar15 = pbVar15 + lVar14;
            puVar12[4] = (ulong)pbVar15;
            pbVar17 = *(byte **)(lVar5 + 8 + lVar10 * 8);
          }
          else {
            pbVar17 = pbVar15 + *(uint *)(lVar14 + lVar10 * 4);
          }
          puVar12[5] = (ulong)pbVar17;
          puVar12[3] = (ulong)pbVar15;
          if (pbVar15 == (byte *)0x0) {
            return 0xa0;
          }
          *(ulong **)(param_1 + 0xa78) = puVar13;
          bVar7 = false;
          break;
               case 0xb:
          if (bVar7) {
            return 0xa0;
          }
          if ((long)plVar16 - (long)plVar3 < 0) {
            return 0xa1;
          }
          if (puVar12 <= puVar2) {
            return 0xa0;
          }
          puVar13 = puVar12 + -3;
          pbVar15 = (byte *)puVar12[-3];
          pbVar17 = (byte *)puVar12[-1];
          bVar7 = false;
          *(ulong **)(param_1 + 0xa78) = puVar13;
          break;
               case 0xc:
          if (pbVar17 <= pbVar15) {
            return 0xa0;
          }
          if (param_2[1] == 7) {
            if (bVar7) {
              return 0xa0;
            }
            if ((long)plVar16 - (long)plVar3 < 0x19) {
              return 0xa1;
            }
            *(undefined4 *)(param_1 + 0x80) = 1;
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + plVar16[-4];
            *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + plVar16[-3];
            *(long *)(param_1 + 0x50) = plVar16[-2];
            lVar10 = plVar16[-1];
            goto LAB_00102e05;
          }
          if (param_2[1] != 0xc) {
            return 0xa0;
          }
          if ((long)plVar16 - (long)plVar3 < 9) {
            return 0xa1;
          }
          pbVar15 = param_2 + 2;
          lVar10 = FT_DivFix(plVar16[-2],plVar16[-1]);
          bVar7 = false;
          plVar16[-2] = lVar10;
          plVar16 = plVar16 + -1;
          break;
               case 0xd:
          if (!bVar7) {
            if ((long)plVar16 - (long)plVar3 < 9) {
              return 0xa1;
            }
            *(undefined4 *)(param_1 + 0x80) = 1;
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + plVar16[-2];
            *(long *)(param_1 + 0x50) = plVar16[-1];
            lVar10 = 0;
LAB_00102e05:
            *(long *)(param_1 + 0x58) = lVar10;
            return 0;
          }
          goto LAB_00102d25;
            }

         }
 else {
            if (bVar4 == 0xff) {
               pbVar15 = param_2 + 5;
               if (pbVar17 < pbVar15) {
                  return 0xa0;
               }

               uVar9 = *(uint*)( param_2 + 1 );
               uVar6 = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8;
               uVar8 = uVar6 | ( uVar9 & 0xff00 ) << 8 | uVar9 << 0x18;
               if (uVar8 + 32000 < 0xfa01) {
                  uVar9 = uVar6 << 0x10;
                  if (bVar7) {
                     uVar9 = uVar8;
                  }

               }
 else {
                  if (bVar7) {
                     return 0xa0;
                  }

                  bVar7 = true;
                  uVar9 = uVar8;
               }

            }
 else {
               if (bVar4 < 0xf7) {
                  uVar9 = bVar4 - 0x8b;
               }
 else {
                  pbVar15 = param_2 + 2;
                  if (pbVar17 < pbVar15) {
                     return 0xa0;
                  }

                  if (bVar4 < 0xfb) {
                     uVar9 = param_2[1] + 0x6c + ( bVar4 - 0xf7 ) * 0x100;
                  }
 else {
                     uVar9 = -((bVar4 - 0xfb) * 0x100 + (uint)param_2[1]) - 0x6c;
                  }

               }

               if (!bVar7) {
                  uVar9 = uVar9 << 0x10;
               }

            }

            if (0x7f8 < (long)plVar16 - (long)plVar3) {
               return 0xa0;
            }

            *plVar16 = (long)(int)uVar9;
            plVar16 = plVar16 + 1;
         }

         *(long**)( param_1 + 0x8d8 ) = plVar16;
         puVar12 = puVar13;
         param_2 = pbVar15;
      }
 while ( pbVar15 < pbVar17 );
   }

   LAB_00102d25:return 0xa0;
}
ulong t1_lookup_glyph_by_stdcharcode_ps(long param_1, uint param_2) {
   uint uVar1;
   long lVar2;
   char *__s1;
   int iVar3;
   char *__s2;
   ulong uVar4;
   if (0xff < param_2) {
      return 0xffffffff;
   }

   __s2 = (char*)( **(code**)( *(long*)( param_1 + 0x488 ) + 0x28 ) )(*(undefined2*)( *(long*)( *(long*)( param_1 + 0x488 ) + 0x30 ) + (long)(int)param_2 * 2 ));
   uVar1 = *(uint*)( param_1 + 0x468 );
   if (uVar1 != 0) {
      lVar2 = *(long*)( param_1 + 0x460 );
      uVar4 = 0;
      do {
         __s1 = *(char**)( lVar2 + uVar4 * 8 );
         if (( __s1 != (char*)0x0 ) && ( *__s1 == *__s2 )) {
            iVar3 = strcmp(__s1, __s2);
            if (iVar3 == 0) {
               return uVar4 & 0xffffffff;
            }

         }

         uVar4 = uVar4 + 1;
      }
 while ( uVar4 != uVar1 );
   }

   return 0xffffffff;
}
ulong t1_cmap_std_char_index(long param_1, uint param_2) {
   uint uVar1;
   long lVar2;
   char *__s1;
   int iVar3;
   char *__s2;
   ulong uVar4;
   if (0xff < param_2) {
      return 0;
   }

   __s2 = (char*)( **(code**)( param_1 + 0x20 ) )(*(undefined2*)( *(long*)( param_1 + 0x18 ) + (ulong)param_2 * 2 ));
   uVar1 = *(uint*)( param_1 + 0x28 );
   if (uVar1 != 0) {
      lVar2 = *(long*)( param_1 + 0x30 );
      uVar4 = 0;
      do {
         __s1 = *(char**)( lVar2 + uVar4 * 8 );
         if (( ( __s1 != (char*)0x0 ) && ( *__s1 == *__s2 ) ) && ( iVar3 = iVar3 == 0 )) {
            return uVar4 & 0xffffffff;
         }

         uVar4 = uVar4 + 1;
      }
 while ( uVar4 != uVar1 );
   }

   return 0;
}
undefined8 t1_cmap_std_char_next(undefined8 param_1, uint *param_2) {
   undefined8 uVar1;
   uint uVar2;
   uVar2 = *param_2 + 1;
   if (uVar2 < 0x100) {
      do {
         uVar1 = t1_cmap_std_char_index(param_1, uVar2);
         if ((int)uVar1 != 0) {
            *param_2 = uVar2;
            return uVar1;
         }

         uVar2 = uVar2 + 1;
      }
 while ( uVar2 != 0x100 );
   }

   *param_2 = 0;
   return 0;
}
undefined8 t1_decoder_init(undefined8 *param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined1 param_7, undefined4 param_8, undefined8 param_9) {
   undefined8 uVar1;
   long lVar2;
   ulong uVar3;
   undefined8 *puVar4;
   *param_1 = 0;
   param_1[0x176] = 0;
   puVar4 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 3000U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   lVar2 = ft_module_get_service(*(undefined8*)( param_2 + 0xb0 ), "postscript-cmaps", 1);
   if (lVar2 != 0) {
      param_1[0x150] = lVar2;
      t1_builder_init(param_1, param_2, param_3, param_4, param_7);
      uVar1 = *(undefined8*)( param_2 + 0x20 );
      param_1[0x152] = param_5;
      param_1[0x16c] = param_6;
      *(int*)( param_1 + 0x151 ) = (int)uVar1;
      *(undefined4*)( param_1 + 0x16d ) = param_8;
      param_1[0x16e] = param_9;
      param_1[0x16f] = t1_decoder_init;
      param_1[0x170] = t1_decoder_done;
      param_1[0x171] = t1_decoder_parse_metrics;
      param_1[0x172] = cf2_decoder_parse_charstrings;
      return 0;
   }

   return 7;
}
ulong afm_tokenize(char *param_1, size_t param_2) {
   char cVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   char cVar5;
   lVar3 = 0;
   cVar5 = 'A';
   while (*param_1 != cVar5) {
      lVar3 = lVar3 + 1;
      if (lVar3 == 0x4a) {
         return 0x4b;
      }

      cVar5 = *( &afm_key_table )[lVar3];
   }
;
   uVar4 = (ulong)(int)lVar3;
   cVar1 = cVar5;
   while (true) {
      if (cVar5 != cVar1) {
         return 0x4b;
      }

      iVar2 = strncmp(( &afm_key_table )[uVar4], param_1, param_2);
      if (iVar2 == 0) break;
      uVar4 = uVar4 + 1;
      if ((int)uVar4 == 0x4a) {
         return 0x4b;
      }

      cVar1 = *( &afm_key_table )[uVar4];
   }
;
   return uVar4 & 0xffffffff;
}
undefined4 cff_decoder_prepare(long param_1, long param_2, undefined4 param_3) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   byte bVar5;
   int iVar6;
   long lVar7;
   lVar7 = *(long*)( *(long*)( param_1 + 8 ) + 0x490 );
   if (*(int*)( lVar7 + 0xb30 ) == 0) {
      lVar7 = lVar7 + 0x668;
   }
 else {
      bVar5 = ( **(code**)( *(long*)( lVar7 + 0x1368 ) + 0x10 ) )(lVar7 + 0x1338, param_3);
      if (*(uint*)( lVar7 + 0xb30 ) <= (uint)bVar5) {
         return 3;
      }

      lVar7 = *(long*)( lVar7 + 0xb38 + (ulong)bVar5 * 8 );
      if (( *(long*)( param_1 + 0x88 ) != 0 ) && ( param_2 != 0 )) {
         *(undefined8*)( param_1 + 0x90 ) = *(undefined8*)( **(long**)( param_2 + 0x50 ) + 8 + (ulong)bVar5 * 8 );
      }

   }

   uVar1 = *(uint*)( lVar7 + 0x48c );
   *(undefined8*)( param_1 + 0x5b0 ) = *(undefined8*)( lVar7 + 0x4b8 );
   iVar6 = 0;
   iVar2 = *(int*)( *(long*)( param_1 + 0xd8 ) + 0x6a4 );
   *(uint*)( param_1 + 0x5a0 ) = uVar1;
   if (( iVar2 != 1 ) && ( iVar6 = 0x4d7 < uVar1 )) {
      iVar6 = ( -(uint)(uVar1 < 0x846c) & 0xffff846b ) + 0x8000;
   }

   uVar3 = *(undefined8*)( lVar7 + 0x400 );
   uVar4 = *(undefined8*)( lVar7 + 0x408 );
   *(int*)( param_1 + 0x5a8 ) = iVar6;
   *(long*)( param_1 + 0x5d8 ) = lVar7;
   *(undefined8*)( param_1 + 0x488 ) = uVar3;
   *(undefined8*)( param_1 + 0x490 ) = uVar4;
   return 0;
}
void cf2_free_instance(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1 != (undefined8*)0x0) {
      uVar1 = *param_1;
      ft_mem_free(uVar1, param_1[0xf]);
      param_1[0xf] = 0;
      ft_mem_free(uVar1, param_1[0x11]);
      param_1[0x11] = 0;
      return;
   }

   return;
}
undefined8 ps_table_add(long *param_1, int param_2, void *param_3, uint param_4) {
   undefined8 uVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   ulong __n;
   ulong uVar5;
   if (param_2 < 0) {
      return 6;
   }

   uVar1 = 6;
   if (param_2 < (int)param_1[4]) {
      lVar4 = param_1[1];
      __n = (ulong)param_4;
      uVar3 = param_1[2];
      lVar2 = *param_1;
      if (uVar3 < lVar4 + __n) {
         uVar5 = (long)param_3 - lVar2;
         if ((long)uVar5 < 0) {
            uVar5 = 0xffffffffffffffff;
         }
 else if (uVar3 <= uVar5) {
            uVar5 = 0xffffffffffffffff;
         }

         do {
            uVar3 = uVar3 + 0x400 + ( uVar3 >> 2 ) & 0xfffffffffffffc00;
         }
 while ( uVar3 < lVar4 + __n );
         uVar1 = ps_table_realloc(param_1);
         if ((int)uVar1 != 0) {
            return uVar1;
         }

         lVar2 = *param_1;
         lVar4 = param_1[1];
         if (uVar5 != 0xffffffffffffffff) {
            param_3 = (void*)( lVar2 + uVar5 );
         }

      }

      if (lVar2 != 0) {
         lVar2 = lVar2 + lVar4;
      }

      *(long*)( param_1[5] + (long)param_2 * 8 ) = lVar2;
      lVar2 = *param_1;
      *(uint*)( param_1[6] + (long)param_2 * 4 ) = param_4;
      memcpy((void*)( lVar4 + lVar2 ), param_3, __n);
      param_1[1] = param_1[1] + __n;
      uVar1 = 0;
   }

   return uVar1;
}
void cf2_glyphpath_pushPrevElem(long param_1, undefined8 param_2, long *param_3, long param_4, long param_5, char param_6) {
   bool bVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   int iVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   long *plVar13;
   char cVar14;
   long in_FS_OFFSET;
   int local_98;
   int local_90;
   long local_88;
   long lStack_80;
   long local_78;
   long lStack_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 uStack_50;
   undefined4 local_48;
   long local_40;
   plVar13 = (long*)( param_1 + 0x4988 );
   plVar6 = (long*)( param_1 + 0x4978 );
   iVar7 = *(int*)( param_1 + 0x4974 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar7 != 2) {
      plVar6 = (long*)( param_1 + 0x4998 );
      plVar13 = (long*)( param_1 + 0x49a8 );
   }

   lVar5 = *param_3;
   lVar12 = param_3[1];
   if (( *plVar13 == lVar5 ) && ( plVar13[1] == lVar12 )) {
      LAB_0010372e:lVar8 = 0;
      lVar4 = 0;
      LAB_00103732:local_88 = *(long*)( param_1 + 0x4950 );
      lStack_80 = *(long*)( param_1 + 0x4958 );
      if (iVar7 == 2) {
         bVar1 = false;
         cVar14 = '\x01';
         goto LAB_00103aa9;
      }

      bVar1 = false;
      if (iVar7 == 4) {
         bVar1 = false;
         cVar14 = '\x01';
         LAB_00103760:local_48 = 4;
         cf2_glyphpath_hintPoint(param_1, param_2, &local_78, *(undefined4*)( param_1 + 0x4988 ), *(undefined4*)( param_1 + 0x4990 ));
         cf2_glyphpath_hintPoint(param_1, param_2, local_68, *(undefined4*)( param_1 + 0x4998 ), *(undefined4*)( param_1 + 0x49a0 ));
         cf2_glyphpath_hintPoint(param_1, param_2, &local_58, *(undefined4*)( param_1 + 0x49a8 ), *(undefined4*)( param_1 + 0x49b0 ));
         ( **(code**)( *(long*)( param_1 + 8 ) + 0x18 ) )(*(long*)( param_1 + 8 ), &local_88);
         *(undefined8*)( param_1 + 0x4950 ) = local_58;
         *(undefined8*)( param_1 + 0x4958 ) = uStack_50;
         goto LAB_001037ec;
      }

      LAB_00103829:if (param_6 == '\0') {
         cf2_glyphpath_hintPoint(param_1, param_2, &local_78, lVar5, lVar12);
         if (local_78 != *(long*)( param_1 + 0x4950 )) goto LAB_00103857;
         LAB_00103a81:if (lStack_70 != *(long*)( param_1 + 0x4958 )) goto LAB_00103857;
      }
 else {
         cf2_glyphpath_hintPoint(param_1, param_1 + 0x1838, &local_78, lVar5, lVar12);
         if (local_78 == *(long*)( param_1 + 0x4950 )) goto LAB_00103a81;
         LAB_00103857:local_88 = *(long*)( param_1 + 0x4950 );
         lStack_80 = *(long*)( param_1 + 0x4958 );
         local_48 = 2;
         ( **(code**)( *(long*)( param_1 + 8 ) + 8 ) )(*(long*)( param_1 + 8 ), &local_88);
         *(long*)( param_1 + 0x4950 ) = local_78;
         *(long*)( param_1 + 0x4958 ) = lStack_70;
      }

      if (!bVar1) goto LAB_001037fa;
   }
 else {
      local_98 = (int)param_4;
      local_90 = (int)param_5;
      lVar8 = (long)( ( local_98 - (int)lVar5 ) + 0x10 >> 5 );
      lVar10 = (long)( ( local_90 - (int)lVar12 ) + 0x10 >> 5 );
      lVar3 = ( ( (int)*plVar13 - (int)*plVar6 ) + 0x10 >> 5 ) * lVar10;
      lVar4 = ( ( (int)plVar13[1] - (int)plVar6[1] ) + 0x10 >> 5 ) * lVar8;
      iVar2 = (int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ) - (int)( ( ulong )(lVar4 + 0x8000 + ( lVar4 >> 0x3f )) >> 0x10 );
      if (iVar2 == 0) goto LAB_0010372e;
      lVar8 = ( ( (int)lVar12 - (int)plVar6[1] ) + 0x10 >> 5 ) * lVar8;
      lVar10 = ( ( (int)lVar5 - (int)*plVar6 ) + 0x10 >> 5 ) * lVar10;
      iVar2 = FT_DivFix((long)( (int)( ( ulong )(lVar10 + 0x8000 + ( lVar10 >> 0x3f )) >> 0x10 ) - (int)( ( ulong )(lVar8 + 0x8000 + ( lVar8 >> 0x3f )) >> 0x10 ) ), (long)iVar2);
      lVar3 = *plVar13;
      iVar9 = (int)*plVar6;
      lVar5 = (long)( (int)lVar3 - iVar9 ) * (long)iVar2;
      lVar10 = plVar13[1];
      iVar7 = (int)( ( ulong )(lVar5 + 0x8000 + ( lVar5 >> 0x3f )) >> 0x10 );
      iVar11 = (int)plVar6[1];
      lVar4 = (long)( iVar7 + iVar9 );
      lVar5 = (long)( (int)lVar10 - iVar11 ) * (long)iVar2;
      iVar2 = (int)( ( ulong )(lVar5 + 0x8000 + ( lVar5 >> 0x3f )) >> 0x10 );
      lVar8 = (long)( iVar2 + iVar11 );
      if (*plVar6 == lVar3) {
         if (iVar7 < 1) {
            iVar7 = -iVar7;
         }

         if (iVar7 < *(int*)( param_1 + 0x491c )) {
            lVar4 = lVar3;
         }

      }

      if (plVar6[1] == lVar10) {
         if (iVar2 < 1) {
            iVar2 = -iVar2;
         }

         if (iVar2 < *(int*)( param_1 + 0x491c )) {
            lVar8 = lVar10;
         }

      }

      lVar5 = *param_3;
      iVar2 = (int)lVar5;
      if (param_4 == lVar5) {
         iVar7 = (int)lVar4 - iVar2;
         if (iVar7 < 0) {
            iVar7 = iVar2 - (int)lVar4;
         }

         if (iVar7 < *(int*)( param_1 + 0x491c )) {
            lVar4 = lVar5;
         }

      }

      lVar12 = param_3[1];
      iVar9 = (int)lVar12;
      if (param_5 == lVar12) {
         iVar7 = (int)lVar8 - iVar9;
         if (iVar7 < 0) {
            iVar7 = iVar9 - (int)lVar8;
         }

         if (iVar7 < *(int*)( param_1 + 0x491c )) {
            lVar8 = lVar12;
         }

      }

      iVar7 = *(int*)( param_1 + 0x4974 );
      iVar2 = ( iVar2 + (int)lVar3 ) / 2;
      lVar3 = lVar4 - iVar2;
      if (lVar3 < 0) {
         lVar3 = (long)( iVar2 - (int)lVar4 );
      }

      if (*(int*)( param_1 + 0x4918 ) < lVar3) goto LAB_00103732;
      iVar2 = ( (int)lVar10 + iVar9 ) / 2;
      lVar3 = lVar8 - iVar2;
      if (lVar3 < 0) {
         lVar3 = (long)( iVar2 - (int)lVar8 );
      }

      if (*(int*)( param_1 + 0x4918 ) < lVar3) goto LAB_00103732;
      *plVar13 = lVar4;
      plVar13[1] = lVar8;
      bVar1 = true;
      local_88 = *(long*)( param_1 + 0x4950 );
      lStack_80 = *(long*)( param_1 + 0x4958 );
      cVar14 = param_6;
      if (iVar7 != 2) {
         if (iVar7 == 4) goto LAB_00103760;
         goto LAB_001037ec;
      }

      LAB_00103aa9:local_48 = 2;
      if (param_6 == '\0') {
         cf2_glyphpath_hintPoint(param_1, param_2, &local_78, *(undefined4*)( param_1 + 0x4988 ), *(undefined8*)( param_1 + 0x4990 ));
         if (local_88 == local_78) {
            LAB_00103b23:if (lStack_80 == lStack_70) goto LAB_001037ec;
         }

      }
 else {
         cf2_glyphpath_hintPoint(param_1, param_1 + 0x1838, &local_78, *(undefined4*)( param_1 + 0x4988 ), *(undefined8*)( param_1 + 0x4990 ));
         if (local_88 == local_78) goto LAB_00103b23;
      }

      ( **(code**)( *(long*)( param_1 + 8 ) + 8 ) )(*(long*)( param_1 + 8 ), &local_88);
      *(long*)( param_1 + 0x4950 ) = local_78;
      *(long*)( param_1 + 0x4958 ) = lStack_70;
      LAB_001037ec:if (cVar14 != '\0') {
         lVar5 = *param_3;
         lVar12 = param_3[1];
         goto LAB_00103829;
      }

   }

   *param_3 = lVar4;
   param_3[1] = lVar8;
   LAB_001037fa:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void cf2_computeDarkening_part_0_constprop_0(int param_1, uint param_2, int param_3, int *param_4, int param_5, char param_6, int *param_7) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   long lVar11;
   ulong uVar12;
   undefined8 extraout_RDX;
   long lVar13;
   int iVar14;
   int iVar15;
   uint uVar16;
   if (param_6 == '\0') {
      iVar10 = *param_4;
      goto LAB_00103b62;
   }

   iVar10 = param_7[5];
   iVar15 = param_7[1];
   iVar9 = *param_7;
   iVar1 = param_7[2];
   iVar2 = param_7[3];
   iVar3 = param_7[4];
   iVar4 = param_7[6];
   iVar5 = param_7[7];
   lVar11 = (long)( param_3 + param_5 ) * (long)param_1;
   lVar13 = (long)(int)param_2;
   uVar6 = 0x1f;
   uVar16 = ( uint )(( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10);
   if (uVar16 != 0) {
      for (; uVar16 >> uVar6 == 0; uVar6 = uVar6 - 1) {}
   }

   uVar7 = 0x1f;
   if (param_2 != 0) {
      for (; param_2 >> uVar7 == 0; uVar7 = uVar7 - 1) {}
   }

   uVar12 = ( ulong )(uVar7 ^ 0x1f);
   if ((int)( ( 0x3e - ( uVar7 ^ 0x1f ) ) - ( uVar6 ^ 0x1f ) ) < 0x2e) {
      iVar14 = iVar9 << 0x10;
      uVar12 = (int)uVar16 * lVar13 >> 0x3f;
      iVar8 = (int)( (int)uVar16 * lVar13 + 0x8000 + uVar12 >> 0x10 );
      if (iVar8 < iVar14) goto LAB_00103cd2;
      LAB_00103c09:if (iVar8 < iVar1 * 0x10000) {
         iVar8 = FT_DivFix((long)iVar14, lVar13);
         if (iVar1 == iVar9) goto LAB_00103c27;
         iVar9 = FT_MulDiv((long)(int)( uVar16 - iVar8 ), (long)( iVar2 - iVar15 ));
         iVar10 = FT_DivFix((long)( iVar15 << 0x10 ), lVar13, extraout_RDX, iVar15 << 0x10);
         iVar10 = iVar10 + iVar9;
      }
 else {
         iVar15 = iVar3 * 0x10000;
         if (SBORROW4(iVar8, iVar15) == iVar8 + iVar3 * -0x10000 < 0) {
            if (SBORROW4(iVar8, iVar4 * 0x10000) != iVar8 + iVar4 * -0x10000 < 0) goto LAB_00103cf2;
            LAB_00103d40:iVar10 = FT_DivFix((long)( iVar5 << 0x10 ), lVar13);
         }
 else {
            LAB_00103c27:iVar9 = FT_DivFix((long)( iVar1 * 0x10000 ), lVar13);
            iVar15 = iVar3 << 0x10;
            if (iVar3 == iVar1) {
               LAB_00103cf2:iVar15 = FT_DivFix((long)iVar15, lVar13);
               if (iVar4 - iVar3 == 0) goto LAB_00103d40;
               iVar15 = FT_MulDiv((long)(int)( uVar16 - iVar15 ), (long)( iVar5 - iVar10 ), (long)( iVar4 - iVar3 ));
               iVar10 = FT_DivFix((long)( iVar10 << 0x10 ), lVar13);
               iVar10 = iVar10 + iVar15;
            }
 else {
               iVar15 = FT_MulDiv((long)(int)( uVar16 - iVar9 ), (long)( iVar10 - iVar2 ));
               iVar10 = FT_DivFix((long)( iVar2 << 0x10 ), lVar13);
               iVar10 = iVar10 + iVar15;
            }

         }

      }

   }
 else {
      iVar8 = iVar4 * 0x10000;
      iVar14 = iVar9 * 0x10000;
      if (iVar14 == iVar8 || SBORROW4(iVar14, iVar8) != iVar14 + iVar4 * -0x10000 < 0) goto LAB_00103c09;
      LAB_00103cd2:iVar10 = FT_DivFix((long)( iVar15 << 0x10 ), lVar13, uVar12, iVar15 << 0x10);
   }

   *param_4 = iVar10;
   iVar10 = FT_DivFix((long)iVar10, (long)( param_1 * 2 ));
   LAB_00103b62:*param_4 = param_5 / 2 + iVar10;
   return;
}
undefined8 ps_builder_add_contour_constprop_0(long param_1) {
   short *psVar1;
   long lVar2;
   short sVar3;
   undefined8 uVar4;
   psVar1 = *(short**)( param_1 + 0x28 );
   if (psVar1 == (short*)0x0) {
      return 3;
   }

   if (*(char*)( param_1 + 0x59 ) == '\0') {
      *psVar1 = *psVar1 + 1;
   }
 else {
      lVar2 = *(long*)( param_1 + 0x18 );
      if (*(uint*)( lVar2 + 0xc ) < ( uint )(*(short*)( lVar2 + 0x18 ) + 1 + (int)*(short*)( lVar2 + 0x60 ))) {
         uVar4 = FT_GlyphLoader_CheckPoints(lVar2, 0, 1);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

      }

      sVar3 = *psVar1;
      if (0 < sVar3) {
         *(short*)( *(long*)( psVar1 + 0xc ) + -2 + (long)sVar3 * 2 ) = psVar1[1] + -1;
         sVar3 = *psVar1;
      }

      *psVar1 = sVar3 + 1;
   }

   return 0;
}
undefined8 cff_check_points(long param_1, int param_2) {
   long lVar1;
   undefined8 uVar2;
   if (( param_2 != 0 ) && ( lVar1 = *(long*)( param_1 + 0x18 ) * (uint*)( lVar1 + 8 ) < ( uint )((int)*(short*)( lVar1 + 0x1a ) + (int)*(short*)( lVar1 + 0x62 ) + param_2) )) {
      uVar2 = FT_GlyphLoader_CheckPoints(lVar1, param_2, 0);
      return uVar2;
   }

   return 0;
}
undefined8 ps_builder_check_points_part_0_isra_0(long param_1, int param_2) {
   undefined8 uVar1;
   if (( uint )((int)*(short*)( param_1 + 0x1a ) + (int)*(short*)( param_1 + 0x62 ) + param_2) <= *(uint*)( param_1 + 8 )) {
      return 0;
   }

   uVar1 = FT_GlyphLoader_CheckPoints(param_1, param_2, 0);
   return uVar1;
}
undefined8 t1_builder_check_points(long param_1, int param_2) {
   long lVar1;
   undefined8 uVar2;
   if (( param_2 != 0 ) && ( lVar1 = *(long*)( param_1 + 0x18 ) * (uint*)( lVar1 + 8 ) < ( uint )((int)*(short*)( lVar1 + 0x1a ) + (int)*(short*)( lVar1 + 0x62 ) + param_2) )) {
      uVar2 = FT_GlyphLoader_CheckPoints(lVar1, param_2, 0);
      return uVar2;
   }

   return 0;
}
void cf2_stack_pushInt(long param_1, undefined4 param_2) {
   undefined4 *puVar1;
   int *piVar2;
   puVar1 = *(undefined4**)( param_1 + 0x18 );
   if (puVar1 == (undefined4*)( *(long*)( param_1 + 0x10 ) + ( ulong ) * (uint*)( param_1 + 0x20 ) * 8 )) {
      piVar2 = *(int**)( param_1 + 8 );
      if (( piVar2 != (int*)0x0 ) && ( *piVar2 == 0 )) {
         *piVar2 = 0x82;
         return;
      }

   }
 else {
      *puVar1 = param_2;
      puVar1[1] = 2;
      *(undefined4**)( param_1 + 0x18 ) = puVar1 + 2;
   }

   return;
}
void afm_stream_skip_spaces_part_0_isra_0(undefined8 *param_1) {
   byte bVar1;
   byte *pbVar2;
   byte *pbVar3;
   pbVar2 = (byte*)*param_1;
   do {
      if ((byte*)param_1[2] <= pbVar2) goto LAB_00103f55;
      pbVar3 = pbVar2 + 1;
      *param_1 = pbVar3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar3;
   }
 while ( ( bVar1 == 0x20 ) || ( bVar1 == 9 ) );
   if (bVar1 != 0x1a) {
      if (0x1a < bVar1) {
         if (bVar1 == 0x3b) {
            *(undefined4*)( param_1 + 3 ) = 1;
            return;
         }

         return;
      }

      if (( bVar1 != 10 ) && ( bVar1 != 0xd )) {
         return;
      }

      *(undefined4*)( param_1 + 3 ) = 2;
      return;
   }

   LAB_00103f55:*(undefined4*)( param_1 + 3 ) = 3;
   return;
}
void cf2_freeT1SeacComponent_isra_0(long param_1, undefined8 param_2, int param_3) {
   long *plVar1;
   long in_FS_OFFSET;
   undefined8 local_28;
   int local_20;
   long local_10;
   local_20 = param_3 - (int)param_2;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar1 = *(long**)( *(long*)( param_1 + 0xf0 ) + 0x68 );
   local_28 = param_2;
   if (plVar1 != (long*)0x0) {
      ( **(code**)( *plVar1 + 8 ) )(plVar1[1], &local_28);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 cf2_getT1SeacComponent_isra_0(long param_1, ulong param_2, undefined1 (*param_3)[16]) {
   undefined8 *puVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   long local_28;
   uint local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = *(undefined8**)( *(long*)( param_1 + 0xf0 ) + 0x68 );
   if (puVar1 == (undefined8*)0x0) {
      local_28 = *(long*)( *(long*)( param_1 + 0x290 ) + ( param_2 & 0xffffffff ) * 8 );
      local_20 = *(uint*)( *(long*)( param_1 + 0x298 ) + ( param_2 & 0xffffffff ) * 4 );
   }
 else {
      uVar2 = ( **(code**)*puVar1 )(puVar1[1], param_2, &local_28);
      if ((int)uVar2 != 0) goto LAB_00104076;
   }

   *(long*)( param_3[1] + 8 ) = local_28;
   *param_3 = (undefined1[16])0x0;
   *(long*)( *param_3 + 8 ) = local_28;
   *(ulong*)param_3[1] = local_28 + (ulong)local_20;
   uVar2 = 0;
   LAB_00104076:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
void ps_builder_close_contour_isra_0(short *param_1) {
   short sVar1;
   short sVar2;
   int iVar3;
   int iVar4;
   long *plVar5;
   long *plVar6;
   if (param_1 == (short*)0x0) {
      return;
   }

   sVar1 = *param_1;
   sVar2 = param_1[1];
   if (sVar1 < 2) {
      if (sVar1 == 0) {
         if (sVar2 < 2) {
            return;
         }

         plVar5 = *(long**)( param_1 + 4 );
         plVar6 = plVar5 + (long)sVar2 * 2 + -2;
         if (*plVar5 != *plVar6) {
            return;
         }

         iVar4 = 0;
         goto LAB_00104161;
      }

      if (sVar2 == 0) goto LAB_00104198;
      iVar4 = 0;
      iVar3 = 0;
      if (1 < sVar2) goto LAB_001040e7;
   }
 else {
      iVar4 = *(short*)( *(long*)( param_1 + 0xc ) + -4 + (long)sVar1 * 2 ) + 1;
      if (iVar4 == sVar2) {
         LAB_00104198:*param_1 = sVar1 + -1;
         return;
      }

      if (sVar2 < 2) goto LAB_00104116;
      LAB_001040e7:plVar5 = (long*)( (long)iVar4 * 0x10 + *(long*)( param_1 + 4 ) );
      plVar6 = (long*)( *(long*)( param_1 + 4 ) + -0x10 + (long)sVar2 * 0x10 );
      iVar3 = iVar4;
      if (*plVar5 == *plVar6) {
         LAB_00104161:iVar3 = iVar4;
         if (( plVar5[1] == plVar6[1] ) && ( *(char*)( *(long*)( param_1 + 8 ) + -1 + (long)sVar2 ) == '\x01' )) {
            param_1[1] = sVar2 + -1;
         }

      }

   }

   iVar4 = iVar3;
   if (sVar1 < 1) {
      return;
   }

   sVar2 = param_1[1];
   LAB_00104116:if (sVar2 + -1 != iVar4) {
      *(short*)( *(long*)( param_1 + 0xc ) + -2 + (long)sVar1 * 2 ) = sVar2 + -1;
      return;
   }

   param_1[1] = sVar2 + -1;
   *param_1 = sVar1 + -1;
   return;
}
void cf2_builder_moveTo(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x38 );
   ps_builder_close_contour_isra_0(*(undefined8*)( lVar1 + 0x28 ));
   *(undefined1*)( lVar1 + 0x58 ) = 0;
   return;
}
void t1_decrypt(ulong param_1, ulong param_2, ushort param_3) {
   byte bVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   if (( param_1 != 0 ) && ( uVar3 = param_1 < param_1 + param_2 )) {
      uVar4 = param_2 & 0xffffffff;
      if (param_2 < ( param_2 & 0xffffffff )) {
         uVar4 = param_2;
      }

      if (uVar4 != 0) {
         uVar2 = 0;
         do {
            bVar1 = *(byte*)( param_1 + uVar2 );
            *(byte*)( param_1 + uVar2 ) = ( byte )(uVar3 >> 8) ^ bVar1;
            uVar3 = ( bVar1 + uVar3 ) * 0xce6d + 0x58bf & 0xffff;
            uVar2 = ( ulong )((int)uVar2 + 1);
         }
 while ( uVar2 < uVar4 );
      }

   }

   return;
}
byte *afm_stream_read_one(undefined8 *param_1) {
   byte bVar1;
   byte *pbVar2;
   byte *pbVar3;
   byte *pbVar4;
   if (( 0 < *(int*)( param_1 + 3 ) ) || ( afm_stream_skip_spaces_part_0_isra_0(),0 < *(int*)( param_1 + 3 ) )) {
      return (byte*)0x0;
   }

   pbVar2 = (byte*)*param_1;
   pbVar3 = pbVar2;
   switchD_00104290_caseD_b:do {
      while (true) {
         if ((byte*)param_1[2] <= pbVar3) goto switchD_00104290_caseD_1a;
         pbVar4 = pbVar3 + 1;
         *param_1 = pbVar4;
         bVar1 = *pbVar3;
         pbVar3 = pbVar4;
         if (0x20 < bVar1) break;
         if (8 < bVar1) goto code_r0x0010427f;
      }
;
   }
 while ( bVar1 != 0x3b );
   *(undefined4*)( param_1 + 3 ) = 1;
   goto switchD_00104290_caseD_9;
   code_r0x0010427f:switch (bVar1) {
      case 10:
      case 0xd:
    *(undefined4 *)(param_1 + 3) = 2;
    return pbVar2 + -1;
      case 0x1a:
switchD_00104290_caseD_1a:
    *(undefined4 *)(param_1 + 3) = 3;
      case 9:
      case 0x20:
switchD_00104290_caseD_9:
    return pbVar2 + -1;
   }

   goto switchD_00104290_caseD_b;
}
void cff_decoder_init(undefined8 *param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined1 param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8) {
   uint uVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   int iVar5;
   ulong uVar6;
   undefined8 *puVar7;
   lVar3 = *(long*)( param_2 + 0x490 );
   *param_1 = 0;
   param_1[0xbd] = 0;
   puVar7 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar6 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x5f0U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }

   cff_builder_init(param_1, param_2, param_3, param_4, param_5);
   uVar4 = *(undefined8*)( lVar3 + 0x640 );
   uVar1 = *(uint*)( lVar3 + 0xcc );
   param_1[0x1b] = lVar3;
   param_1[0xb7] = uVar4;
   iVar5 = 0;
   iVar2 = *(int*)( lVar3 + 0x6a4 );
   *(uint*)( (long)param_1 + 0x5a4 ) = uVar1;
   if (( iVar2 != 1 ) && ( iVar5 = 0x4d7 < uVar1 )) {
      iVar5 = ( -(uint)(uVar1 < 0x846c) & 0xffff846b ) + 0x8000;
   }

   *(int*)( (long)param_1 + 0x5ac ) = iVar5;
   *(undefined4*)( (long)param_1 + 0x5cc ) = param_6;
   param_1[0xbc] = param_7;
   param_1[0xbd] = param_8;
   return;
}
char *afm_stream_read_string(undefined8 *param_1) {
   char cVar1;
   char *pcVar2;
   int iVar3;
   char *pcVar4;
   iVar3 = *(int*)( param_1 + 3 );
   if (iVar3 < 1) {
      afm_stream_skip_spaces_part_0_isra_0();
      iVar3 = *(int*)( param_1 + 3 );
   }

   if (1 < iVar3) {
      return (char*)0x0;
   }

   pcVar2 = (char*)*param_1;
   pcVar4 = pcVar2;
   do {
      if ((char*)param_1[2] <= pcVar4) break;
      *param_1 = pcVar4 + 1;
      cVar1 = *pcVar4;
      if (( cVar1 == '\r' ) || ( cVar1 == '\n' )) {
         *(undefined4*)( param_1 + 3 ) = 2;
         return pcVar2 + -1;
      }

      pcVar4 = pcVar4 + 1;
   }
 while ( cVar1 != '\x1a' );
   *(undefined4*)( param_1 + 3 ) = 3;
   return pcVar2 + -1;
}
ulong afm_parser_read_vals(undefined8 *param_1, long param_2, uint param_3) {
   size_t __n;
   long *plVar1;
   void *__src;
   void *__dest;
   ulong uVar2;
   uint uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   int local_4c;
   void *local_48;
   long local_40;
   plVar5 = (long*)( param_2 + 8 );
   uVar3 = 0;
   plVar1 = (long*)param_1[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      uVar2 = ( ulong ) * (uint*)( plVar5 + -1 );
      if (*(uint*)( plVar5 + -1 ) == 0) {
         __src = (void*)afm_stream_read_string(plVar1);
         local_48 = __src;
         if (__src == (void*)0x0) break;
         lVar4 = *plVar1 - (long)__src;
         __n = lVar4 - 1;
         __dest = (void*)ft_mem_qalloc(*param_1, lVar4, &local_4c);
         *plVar5 = (long)__dest;
         if (local_4c == 0) {
            memcpy(__dest, __src, __n);
            *(undefined1*)( *plVar5 + __n ) = 0;
         }

      }
 else {
         local_48 = (void*)afm_stream_read_one();
         if (local_48 == (void*)0x0) break;
         if ((uint)uVar2 < 6) {
            /* WARNING: Could not recover jumptable at 0x001044e3. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( *(code*)( &DAT_0010bf40 + *(int*)( &DAT_0010bf40 + uVar2 * 4 ) ) )();
            return uVar2;
         }

      }

      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 2;
   }
 while ( param_3 != uVar3 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return (ulong)uVar3;
}
void afm_parser_next_key_constprop_0_isra_0(long *param_1, long *param_2) {
   ulong uVar1;
   if ((int)param_1[3] < 2) {
      afm_stream_read_string();
   }

   do {
      *(undefined4*)( param_1 + 3 ) = 0;
      uVar1 = afm_stream_read_one();
      if (uVar1 != 0) {
         if (param_2 != (long*)0x0) {
            *param_2 = ~uVar1 + *param_1;
            return;
         }

         return;
      }

   }
 while ( (int)param_1[3] == 2 );
   if (param_2 != (long*)0x0) {
      *param_2 = 0;
      return;
   }

   return;
}
int skip_procedure(undefined8 *param_1, byte *param_2) {
   byte bVar1;
   int iVar2;
   byte *pbVar3;
   int iVar4;
   long in_FS_OFFSET;
   bool bVar5;
   byte *local_38;
   long local_30;
   pbVar3 = (byte*)*param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = pbVar3;
   if (pbVar3 < param_2) {
      iVar4 = 0;
      do {
         bVar1 = *local_38;
         if (bVar1 == 0x3c) {
            iVar2 = skip_string(&local_38, param_2);
            bVar5 = iVar2 == 0;
         }
 else if (bVar1 < 0x3d) {
            if (bVar1 == 0x25) {
               pbVar3 = local_38;
               if (local_38 < param_2) {
                  do {
                     local_38 = pbVar3;
                     pbVar3 = local_38 + 1;
                     if (( *local_38 == 0xd ) || ( *local_38 == 10 )) break;
                     local_38 = param_2;
                  }
 while ( param_2 != pbVar3 );
               }

               bVar5 = true;
               iVar2 = 0;
            }
 else {
               if (bVar1 != 0x28) goto LAB_001046d2;
               iVar2 = skip_literal_string(&local_38, param_2);
               bVar5 = iVar2 == 0;
            }

         }
 else {
            if (bVar1 == 0x7b) {
               iVar4 = iVar4 + 1;
            }
 else if (( bVar1 == 0x7d ) && ( iVar4 = iVar4 == 0 )) {
               pbVar3 = local_38 + 1;
               iVar2 = 0;
               goto LAB_001046f5;
            }

            LAB_001046d2:bVar5 = true;
            iVar2 = 0;
         }

         pbVar3 = local_38 + 1;
         local_38 = pbVar3;
      }
 while ( ( pbVar3 < param_2 ) && ( bVar5 ) );
      if (iVar4 != 0) {
         iVar2 = 3;
      }

   }
 else {
      iVar2 = 0;
   }

   LAB_001046f5:*param_1 = pbVar3;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ps_parser_skip_PS_token(ulong *param_1) {
   byte bVar1;
   byte *pbVar2;
   ulong uVar3;
   bool bVar4;
   undefined4 uVar5;
   byte *pbVar6;
   byte *in_R9;
   byte *pbVar7;
   long in_FS_OFFSET;
   byte *local_28;
   long local_20;
   pbVar7 = (byte*)param_1[2];
   pbVar2 = (byte*)*param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = pbVar2;
   skip_spaces(&local_28, pbVar7);
   if (local_28 < pbVar7) {
      bVar1 = *local_28;
      if (bVar1 == 0x3e) {
         pbVar6 = local_28 + 1;
         if (pbVar7 <= pbVar6) {
            uVar5 = 3;
            local_28 = pbVar6;
            goto LAB_001048c2;
         }

         uVar5 = 3;
         if (local_28[1] == 0x3e) {
            LAB_0010495c:local_28 = local_28 + 2;
            uVar5 = 0;
            goto LAB_00104810;
         }

      }
 else {
         if (bVar1 < 0x3f) {
            if (bVar1 != 0x2f) {
               if (bVar1 == 0x3c) {
                  if (( local_28 + 1 < pbVar7 ) && ( local_28[1] == 0x3c )) goto LAB_0010495c;
                  uVar5 = skip_string();
               }
 else {
                  if (bVar1 != 0x28) goto LAB_00104848;
                  uVar5 = skip_literal_string();
               }

               goto LAB_00104810;
            }

            local_28 = local_28 + 1;
            if (pbVar7 <= local_28) goto LAB_001048c0;
            LAB_00104848:bVar4 = false;
            pbVar6 = local_28;
            do {
               bVar1 = *pbVar6;
               if (bVar1 < 0x3f) {
                  uVar3 = 0x5000832100003601 >> ( (ulong)bVar1 & 0x3f );
                  joined_r0x0010485e:if (( uVar3 & 1 ) != 0) {
                     if (bVar4) {
                        uVar5 = 0;
                        local_28 = in_R9;
                     }
 else {
                        uVar5 = 0;
                     }

                     goto LAB_00104810;
                  }

               }
 else if (( byte )(bVar1 - 0x5b) < 0x23) {
                  uVar3 = 0x500000005 >> ( ( ulong )(bVar1 - 0x5b) & 0x3f );
                  goto joined_r0x0010485e;
               }

               pbVar6 = pbVar6 + 1;
               bVar4 = true;
               in_R9 = pbVar6;
            }
 while ( pbVar6 != pbVar7 );
            uVar5 = 0;
            local_28 = pbVar6;
            goto LAB_00104976;
         }

         if (bVar1 != 0x5d) {
            if (bVar1 == 0x7b) {
               uVar5 = skip_procedure();
               goto LAB_00104810;
            }

            if (bVar1 != 0x5b) goto LAB_00104848;
         }

         local_28 = local_28 + 1;
         uVar5 = 0;
         LAB_00104810:pbVar6 = local_28;
         if (pbVar7 <= local_28) goto LAB_001048c2;
      }

      local_28 = pbVar6;
      pbVar7 = local_28;
      if (pbVar2 == local_28) {
         uVar5 = 3;
      }

   }
 else {
      LAB_001048c0:uVar5 = 0;
      LAB_001048c2:if (pbVar7 < local_28) goto LAB_001048ce;
      LAB_00104976:pbVar7 = local_28;
   }

   LAB_001048ce:*(undefined4*)( param_1 + 3 ) = uVar5;
   *param_1 = (ulong)pbVar7;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ps_parser_to_token(undefined8 *param_1, undefined1 (*param_2)[16]) {
   char cVar1;
   char *pcVar2;
   int iVar3;
   char *pcVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   char *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = (undefined1[16])0x0;
   pcVar4 = (char*)param_1[2];
   *(undefined4*)param_2[1] = 0;
   puVar5 = param_1;
   skip_spaces(param_1, pcVar4);
   local_38 = (char*)*puVar5;
   if (pcVar4 <= local_38) goto LAB_00104a49;
   cVar1 = *local_38;
   if (cVar1 == '[') {
      *(char**)*param_2 = local_38;
      iVar3 = 1;
      *(undefined4*)param_2[1] = 3;
      *puVar5 = local_38 + 1;
      skip_spaces();
      local_38 = (char*)*puVar5;
      while (local_38 < pcVar4) {
         if (*(int*)( param_1 + 3 ) != 0) goto LAB_00104b5d;
         if (*local_38 == '[') {
            iVar3 = iVar3 + 1;
         }
 else if (( *local_38 == ']' ) && ( iVar3 = iVar3 < 1 )) {
            pcVar4 = local_38 + 1;
            *(char**)( *param_2 + 8 ) = pcVar4;
            goto LAB_00104a46;
         }

         *param_1 = local_38;
         ps_parser_skip_PS_token(param_1);
         skip_spaces(param_1, pcVar4);
         local_38 = (char*)*param_1;
      }
;
      pcVar2 = *(char**)( *param_2 + 8 );
      pcVar4 = local_38;
   }
 else {
      if (cVar1 == '{') {
         *(undefined4*)param_2[1] = 3;
         *(char**)*param_2 = local_38;
         iVar3 = skip_procedure(&local_38);
         joined_r0x00104b57:if (iVar3 == 0) {
            *(char**)( *param_2 + 8 ) = local_38;
            pcVar4 = local_38;
            pcVar2 = local_38;
            goto joined_r0x00104a40;
         }

      }
 else {
         if (cVar1 == '(') {
            *(undefined4*)param_2[1] = 2;
            *(char**)*param_2 = local_38;
            iVar3 = skip_literal_string(&local_38);
            goto joined_r0x00104b57;
         }

         *(char**)*param_2 = local_38;
         *(uint*)param_2[1] = ( uint )(*local_38 == '/') * 3 + 1;
         ps_parser_skip_PS_token();
         local_38 = (char*)*param_1;
         if (*(int*)( param_1 + 3 ) == 0) {
            *(char**)( *param_2 + 8 ) = local_38;
            pcVar4 = local_38;
            pcVar2 = local_38;
            goto joined_r0x00104a40;
         }

      }

      LAB_00104b5d:pcVar4 = local_38;
      pcVar2 = *(char**)( *param_2 + 8 );
   }

   joined_r0x00104a40:local_38 = pcVar4;
   if (pcVar2 == (char*)0x0) {
      *(undefined8*)*param_2 = 0;
      *(undefined4*)param_2[1] = 0;
   }

   LAB_00104a46:*param_1 = pcVar4;
   LAB_00104a49:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void ps_parser_to_token_array(ulong *param_1, undefined8 *param_2, ulong param_3, int *param_4) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   int iVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   int local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   int local_48;
   undefined4 uStack_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = -1;
   ps_parser_to_token(param_1, &local_78);
   if (local_68 == 3) {
      uVar2 = *param_1;
      uVar3 = param_1[2];
      uVar1 = local_70 - 1;
      param_1[2] = uVar1;
      *param_1 = local_78 + 1U;
      if (local_78 + 1U < uVar1) {
         puVar5 = param_2;
         do {
            ps_parser_to_token(param_1, &local_58);
            if (local_48 == 0) break;
            if (( param_2 != (undefined8*)0x0 ) && ( puVar5 < param_2 + ( param_3 & 0xffffffff ) * 3 )) {
               puVar5[2] = CONCAT44(uStack_44, local_48);
               *puVar5 = local_58;
               puVar5[1] = uStack_50;
            }

            puVar5 = puVar5 + 3;
         }
 while ( *param_1 < uVar1 );
         iVar4 = (int)( (long)puVar5 - (long)param_2 >> 3 ) * -0x55555555;
      }
 else {
         iVar4 = 0;
      }

      *param_4 = iVar4;
      *param_1 = uVar2;
      param_1[2] = uVar3;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ps_parser_load_field(long *param_1, long param_2, long param_3, uint param_4) {
   char cVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   long *plVar10;
   int iVar11;
   ulong uVar12;
   char *__src;
   long in_FS_OFFSET;
   char *local_f0;
   uint local_d8;
   char *local_b0;
   char *local_a8;
   char *local_a0;
   int local_98;
   int local_88[4];
   int local_78;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ps_parser_to_token(param_1, &local_a8);
   if (local_98 == 0) goto switchD_00104d9f_caseD_0;
   iVar11 = *(int*)( param_2 + 0xc );
   local_b0 = local_a8;
   local_f0 = local_a0;
   if (iVar11 == 7) {
      lVar7 = *param_1;
      lVar8 = param_1[2];
      *param_1 = (long)( local_a8 + 1 );
      param_1[2] = (long)( local_a0 + -1 );
      ps_parser_to_token(param_1, local_88);
      param_1[2] = lVar8;
      local_d8 = 0;
      *param_1 = lVar7;
      uVar3 = 1;
      if (local_78 == 3) {
         iVar11 = 8;
         goto LAB_00104ec3;
      }

   }
 else {
      uVar3 = param_4;
      if (local_98 == 3) {
         LAB_00104ec3:if (param_4 == 0) goto switchD_00104d9f_caseD_0;
         local_b0 = local_a8 + 1;
         local_f0 = local_a0 + -1;
         local_d8 = 1;
      }
 else {
         local_d8 = 0;
         uVar3 = 1;
      }

   }

   uVar3 = uVar3 + local_d8;
   plVar10 = (long*)( ( ulong ) * (uint*)( param_2 + 0x18 ) + *(long*)( param_3 + (ulong)local_d8 * 8 ) );
   skip_spaces(&local_b0, local_f0);
   switch (iVar11) {
      case 1:
    do {
      if ((local_b0 + 3 < local_f0) && (*local_b0 == 't')) {
        lVar7 = 0;
        if (((local_b0[1] == 'r') && (lVar7 = 0, local_b0[2] == 'u')) && (local_b0[3] == 'e')) {
          local_b0 = local_b0 + 5;
          lVar7 = 1;
        }
      }
      else {
        lVar7 = 0;
        lVar8 = 0;
        if ((local_b0 + 4 < local_f0) &&
           ((((*local_b0 == 'f' && (local_b0[1] == 'a')) && (lVar7 = lVar8, local_b0[2] == 'l')) &&
            ((local_b0[3] == 's' && (local_b0[4] == 'e')))))) {
          local_b0 = local_b0 + 6;
        }
      }
      cVar1 = *(char *)(param_2 + 0x1c);
      if (cVar1 == '\x02') {
        *(short *)plVar10 = (short)lVar7;
        if (local_d8 + 1 == uVar3) {
          iVar11 = 0;
          break;
        }
      }
      else if (cVar1 == '\x04') {
        *(int *)plVar10 = (int)lVar7;
        if (uVar3 == local_d8 + 1) goto code_r0x0010524c;
      }
      else if (cVar1 == '\x01') {
        *(char *)plVar10 = (char)lVar7;
        if (uVar3 == local_d8 + 1) goto LAB_00104e54;
      }
      else {
        *plVar10 = lVar7;
        if (uVar3 == local_d8 + 1) {
          iVar11 = 0;
          break;
        }
      }
      local_d8 = local_d8 + 1;
      plVar10 = (long *)((ulong)*(uint *)(param_2 + 0x18) + *(long *)(param_3 + (ulong)local_d8 * 8)
                        );
      skip_spaces(&local_b0);
    } while( true );
      case 2:
    do {
      lVar7 = PS_Conv_ToInt(&local_b0,local_f0);
      cVar1 = *(char *)(param_2 + 0x1c);
      if (cVar1 == '\x02') {
        *(short *)plVar10 = (short)lVar7;
        if (uVar3 == local_d8 + 1) {
          iVar11 = 0;
          break;
        }
      }
      else if (cVar1 == '\x04') {
        *(int *)plVar10 = (int)lVar7;
        if (local_d8 + 1 == uVar3) goto code_r0x001052c5;
      }
      else if (cVar1 == '\x01') {
        *(char *)plVar10 = (char)lVar7;
        if (uVar3 == local_d8 + 1) goto LAB_00104e54;
      }
      else {
        *plVar10 = lVar7;
        if (uVar3 == local_d8 + 1) {
          iVar11 = 0;
          break;
        }
      }
      local_d8 = local_d8 + 1;
      plVar10 = (long *)((ulong)*(uint *)(param_2 + 0x18) + *(long *)(param_3 + (ulong)local_d8 * 8)
                        );
      skip_spaces(&local_b0,local_f0);
    } while( true );
      case 3:
    do {
      lVar7 = PS_Conv_ToFixed(&local_b0,local_f0,0);
      cVar1 = *(char *)(param_2 + 0x1c);
      if (cVar1 == '\x02') {
        *(short *)plVar10 = (short)lVar7;
        if (uVar3 == local_d8 + 1) {
          iVar11 = 0;
          break;
        }
      }
      else if (cVar1 == '\x04') {
        *(int *)plVar10 = (int)lVar7;
        if (uVar3 == local_d8 + 1) goto code_r0x00105339;
      }
      else if (cVar1 == '\x01') {
        *(char *)plVar10 = (char)lVar7;
        if (uVar3 == local_d8 + 1) goto LAB_00104e54;
      }
      else {
        *plVar10 = lVar7;
        if (uVar3 == local_d8 + 1) {
          iVar11 = 0;
          break;
        }
      }
      local_d8 = local_d8 + 1;
      plVar10 = (long *)((ulong)*(uint *)(param_2 + 0x18) + *(long *)(param_3 + (ulong)local_d8 * 8)
                        );
      skip_spaces(&local_b0,local_f0);
    } while( true );
      case 4:
    while( true ) {
      while( true ) {
        lVar7 = PS_Conv_ToFixed(&local_b0,local_f0,3);
        cVar1 = *(char *)(param_2 + 0x1c);
        if (cVar1 == '\x02') break;
        if (cVar1 == '\x04') {
          *(int *)plVar10 = (int)lVar7;
          if (local_d8 + 1 == uVar3) {
            iVar11 = 0;
            goto LAB_00104e60;
          }
        }
        else if (cVar1 == '\x01') {
          *(char *)plVar10 = (char)lVar7;
          if (uVar3 == local_d8 + 1) goto LAB_00104e54;
        }
        else {
          *plVar10 = lVar7;
          if (uVar3 == local_d8 + 1) {
            iVar11 = 0;
            goto LAB_00104e60;
          }
        }
        local_d8 = local_d8 + 1;
        plVar10 = (long *)((ulong)*(uint *)(param_2 + 0x18) +
                          *(long *)(param_3 + (ulong)local_d8 * 8));
        skip_spaces(&local_b0,local_f0);
      }
      *(short *)plVar10 = (short)lVar7;
      local_d8 = local_d8 + 1;
      if (uVar3 == local_d8) break;
      plVar10 = (long *)((ulong)*(uint *)(param_2 + 0x18) + *(long *)(param_3 + (ulong)local_d8 * 8)
                        );
      skip_spaces(&local_b0,local_f0);
    }
    goto LAB_00104e54;
      case 5:
      case 6:
    uVar12 = (ulong)local_d8;
    while( true ) {
      lVar7 = param_1[4];
      if (local_b0 < local_f0) {
        iVar11 = (int)local_f0 - (int)local_b0;
        if (local_98 == 4) {
          uVar4 = iVar11 - 1;
        }
        else {
          if (local_98 != 2) goto switchD_00104d9f_caseD_0;
          uVar4 = iVar11 - 2;
          iVar11 = iVar11 + -1;
        }
        __src = local_b0 + 1;
        local_b0 = __src;
        if (*plVar10 != 0) {
          ft_mem_free();
          *plVar10 = 0;
        }
        pvVar6 = (void *)ft_mem_qalloc(lVar7,iVar11,local_88);
        iVar11 = local_88[0];
        if (local_88[0] != 0) goto LAB_00104e60;
        pvVar6 = memcpy(pvVar6,__src,(ulong)uVar4);
        *(undefined1 *)((long)pvVar6 + (ulong)uVar4) = 0;
        *plVar10 = (long)pvVar6;
      }
      if (uVar3 == (int)uVar12 + 1U) break;
      uVar12 = (ulong)((int)uVar12 + 1);
      plVar10 = (long *)((ulong)*(uint *)(param_2 + 0x18) + *(long *)(param_3 + uVar12 * 8));
      skip_spaces(&local_b0,local_f0);
    }
LAB_00104e54:
    iVar11 = 0;
    break;
      case 7:
    while (iVar11 = ps_tofixedarray(&local_b0,local_f0,4,&local_68,0), 3 < iVar11) {
      local_d8 = local_d8 + 1;
      lVar7 = FT_RoundFix(local_68);
      *plVar10 = lVar7;
      lVar7 = FT_RoundFix(local_60);
      plVar10[1] = lVar7;
      lVar7 = FT_RoundFix(local_58);
      plVar10[2] = lVar7;
      lVar7 = FT_RoundFix(local_50);
      plVar10[3] = lVar7;
      if (uVar3 == local_d8) {
        iVar11 = 0;
        goto LAB_00104e60;
      }
      plVar10 = (long *)((ulong)*(uint *)(param_2 + 0x18) + *(long *)(param_3 + (ulong)local_d8 * 8)
                        );
      skip_spaces(&local_b0,local_f0);
    }
      default:
switchD_00104d9f_caseD_0:
    iVar11 = 3;
    break;
      case 8:
    while( true ) {
      lVar7 = param_1[4];
      lVar8 = ft_mem_qrealloc(lVar7,8,0,param_4 * 4,0,local_88);
      iVar11 = local_88[0];
      if (local_88[0] != 0) break;
      uVar12 = 0;
      iVar11 = 4;
      do {
        uVar4 = ps_tofixedarray(&local_b0,local_f0,param_4,lVar8 + uVar12 * 8);
        if (((int)uVar4 < 0) || (uVar4 < param_4)) {
          local_88[0] = 3;
          ft_mem_free(lVar7,lVar8);
          iVar11 = local_88[0];
          goto LAB_00104e60;
        }
        uVar12 = (ulong)((int)uVar12 + param_4);
        skip_spaces(&local_b0,local_f0);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar4 = param_4 * 2;
      uVar12 = 0;
      if (param_4 != 0) {
        do {
          puVar2 = *(undefined8 **)(param_3 + uVar12 * 8);
          uVar9 = FT_RoundFix(*(undefined8 *)(lVar8 + uVar12 * 8));
          *puVar2 = uVar9;
          iVar11 = (int)uVar12;
          uVar12 = uVar12 + 1;
          uVar9 = FT_RoundFix(*(undefined8 *)(lVar8 + (ulong)(param_4 + iVar11) * 8));
          puVar2[1] = uVar9;
          uVar9 = FT_RoundFix(*(undefined8 *)(lVar8 + (ulong)uVar4 * 8));
          puVar2[2] = uVar9;
          uVar5 = param_4 + uVar4;
          uVar4 = uVar4 + 1;
          uVar9 = FT_RoundFix(*(undefined8 *)(lVar8 + (ulong)uVar5 * 8));
          puVar2[3] = uVar9;
        } while (uVar12 != param_4);
      }
      ft_mem_free(lVar7,lVar8);
      local_d8 = local_d8 + 1;
      if (uVar3 == local_d8) goto LAB_00104e54;
      skip_spaces(&local_b0,local_f0);
    }
   }

   goto LAB_00104e60;
   code_r0x00105339:iVar11 = 0;
   goto LAB_00104e60;
   code_r0x001052c5:iVar11 = 0;
   goto LAB_00104e60;
   code_r0x0010524c:iVar11 = 0;
   LAB_00104e60:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar11;
}
undefined8 ps_parser_load_field_table(undefined8 *param_1, undefined8 *param_2, long *param_3, undefined4 param_4) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uint uVar4;
   undefined8 uVar5;
   uint uVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   uint local_37c;
   undefined8 local_378;
   undefined8 uStack_370;
   undefined8 local_368;
   undefined8 uStack_360;
   undefined8 local_358;
   undefined8 uStack_350;
   undefined8 local_348[97];
   long local_40;
   iVar1 = *(int*)( (long)param_2 + 0xc );
   local_378 = *param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_368 = param_2[2];
   uStack_360 = param_2[3];
   local_358 = param_2[4];
   uStack_350 = param_2[5];
   puVar7 = local_348;
   uStack_370 = CONCAT44(( iVar1 == 10 || iVar1 == 7 ) + 2, (int)param_2[1]);
   ps_parser_to_token_array(param_1, puVar7, 0x20, &local_37c);
   if ((int)local_37c < 0) {
      uVar5 = 0xa2;
   }
 else {
      if (*(uint*)( param_2 + 4 ) < local_37c) {
         local_37c = *(uint*)( param_2 + 4 );
      }

      uVar2 = *param_1;
      uVar3 = param_1[2];
      if (( iVar1 != 7 ) && ( *(uint*)( (long)param_2 + 0x24 ) != 0 )) {
         *(char*)( *param_3 + ( ulong ) * (uint*)( (long)param_2 + 0x24 ) ) = (char)local_37c;
      }

      for (uVar6 = local_37c; local_37c = uVar6,uVar6 != 0; uVar6 = uVar6 - 1) {
         *param_1 = *puVar7;
         param_1[2] = puVar7[1];
         uVar5 = ps_parser_load_field(param_1, &local_378, param_3, param_4, 0);
         if ((int)uVar5 != 0) goto LAB_00105632;
         puVar7 = puVar7 + 3;
         uVar4 = (uint)uStack_360._4_1_;
         uStack_360 = CONCAT44(uStack_360._4_4_, (int)uStack_360 + uVar4);
      }

      uVar5 = 0;
      LAB_00105632:*param_1 = uVar2;
      param_1[2] = uVar3;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 t1_builder_add_point1(long param_1, undefined8 param_2, undefined8 param_3) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 0x18 );
   if (*(uint*)( lVar1 + 8 ) < ( uint )(*(short*)( lVar1 + 0x1a ) + 1 + (int)*(short*)( lVar1 + 0x62 ))) {
      uVar2 = FT_GlyphLoader_CheckPoints(lVar1, 1, 0);
      if ((int)uVar2 != 0) {
         return uVar2;
      }

   }

   t1_builder_add_point(param_1, param_2, param_3, 1);
   return 0;
}
undefined8 t1_builder_start_point(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(int*)( param_1 + 0x80 ) == 3) {
      return 0;
   }

   *(undefined4*)( param_1 + 0x80 ) = 3;
   uVar1 = t1_builder_add_contour();
   if ((int)uVar1 != 0) {
      return uVar1;
   }

   uVar1 = t1_builder_add_point1(param_1, param_2, param_3);
   return uVar1;
}
void cf2_stack_setReal(long param_1, uint param_2, undefined4 param_3) {
   undefined4 *puVar1;
   int *piVar2;
   if (( uint )(*(long*)( param_1 + 0x18 ) - *(long*)( param_1 + 0x10 ) >> 3) < param_2) {
      piVar2 = *(int**)( param_1 + 8 );
      if (( piVar2 != (int*)0x0 ) && ( *piVar2 == 0 )) {
         *piVar2 = 0x82;
         return;
      }

   }
 else {
      puVar1 = (undefined4*)( *(long*)( param_1 + 0x10 ) + (ulong)param_2 * 8 );
      *puVar1 = param_3;
      puVar1[1] = 0;
   }

   return;
}
void t1_decoder_done(undefined8 *param_1) {
   long lVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   lVar1 = param_1[2];
   uVar2 = *param_1;
   if (lVar1 != 0) {
      puVar3 = (undefined8*)param_1[4];
      uVar4 = puVar3[1];
      *(undefined8*)( lVar1 + 200 ) = *puVar3;
      *(undefined8*)( lVar1 + 0xd0 ) = uVar4;
      uVar4 = puVar3[3];
      *(undefined8*)( lVar1 + 0xd8 ) = puVar3[2];
      *(undefined8*)( lVar1 + 0xe0 ) = uVar4;
      *(undefined8*)( lVar1 + 0xe8 ) = puVar3[4];
   }

   if ((code*)param_1[0x176] != (code*)0x0) {
      ( *(code*)param_1[0x176] )(param_1[0x175]);
      ft_mem_free(uVar2, param_1[0x175]);
      param_1[0x175] = 0;
   }

   return;
}
void cf2_stack_pushFixed(long param_1, undefined4 param_2) {
   undefined4 *puVar1;
   int *piVar2;
   puVar1 = *(undefined4**)( param_1 + 0x18 );
   if (puVar1 == (undefined4*)( *(long*)( param_1 + 0x10 ) + ( ulong ) * (uint*)( param_1 + 0x20 ) * 8 )) {
      piVar2 = *(int**)( param_1 + 8 );
      if (( piVar2 != (int*)0x0 ) && ( *piVar2 == 0 )) {
         *piVar2 = 0x82;
         return;
      }

   }
 else {
      *puVar1 = param_2;
      puVar1[1] = 0;
      *(undefined4**)( param_1 + 0x18 ) = puVar1 + 2;
   }

   return;
}
void cf2_hintmask_read(undefined8 *param_1, undefined8 *param_2, ulong param_3) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   int *piVar3;
   ulong uVar4;
   ulong uVar5;
   if (param_3 < 0x61) {
      param_1[2] = param_3;
      uVar5 = param_3 + 7 >> 3;
      *(undefined2*)( param_1 + 1 ) = 0x101;
      param_1[3] = uVar5;
      if (param_3 != 0) {
         puVar1 = (undefined1*)param_2[2];
         uVar4 = 0;
         do {
            while (puVar2 = (undefined1*)param_2[3],puVar1 <= puVar2) {
               piVar3 = (int*)*param_2;
               if (( piVar3 != (int*)0x0 ) && ( *piVar3 == 0 )) {
                  *piVar3 = 0x55;
               }

               *(undefined1*)( (long)param_1 + uVar4 + 0x20 ) = 0;
               uVar4 = uVar4 + 1;
               if (uVar5 <= uVar4) {
                  return;
               }

            }
;
            param_2[3] = puVar2 + 1;
            *(undefined1*)( (long)param_1 + uVar4 + 0x20 ) = *puVar2;
            uVar4 = uVar4 + 1;
         }
 while ( uVar4 < uVar5 );
      }

   }
 else {
      piVar3 = (int*)*param_1;
      if (( piVar3 != (int*)0x0 ) && ( *piVar3 == 0 )) {
         *piVar3 = 0x12;
         return;
      }

   }

   return;
}
undefined8 cff_builder_add_point1(long param_1, long param_2, long param_3) {
   short sVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long *plVar5;
   lVar2 = *(long*)( param_1 + 0x18 );
   if (*(uint*)( lVar2 + 8 ) < ( uint )(*(short*)( lVar2 + 0x1a ) + 1 + (int)*(short*)( lVar2 + 0x62 ))) {
      uVar4 = FT_GlyphLoader_CheckPoints(lVar2, 1, 0);
      if ((int)uVar4 != 0) {
         return uVar4;
      }

   }

   lVar2 = *(long*)( param_1 + 0x28 );
   if (*(char*)( param_1 + 0x81 ) != '\0') {
      sVar1 = *(short*)( lVar2 + 2 );
      lVar3 = *(long*)( lVar2 + 0x10 );
      plVar5 = (long*)( (long)sVar1 * 0x10 + *(long*)( lVar2 + 8 ) );
      *plVar5 = param_2 >> 10;
      plVar5[1] = param_3 >> 10;
      *(undefined1*)( lVar3 + sVar1 ) = 1;
   }

   *(short*)( lVar2 + 2 ) = *(short*)( lVar2 + 2 ) + 1;
   return 0;
}
undefined8 cff_builder_start_point(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (*(char*)( param_1 + 0x80 ) != '\0') {
      return 0;
   }

   *(undefined1*)( param_1 + 0x80 ) = 1;
   uVar1 = cff_builder_add_contour();
   if ((int)uVar1 != 0) {
      return uVar1;
   }

   uVar1 = cff_builder_add_point1(param_1, param_2, param_3);
   return uVar1;
}
void cf2_hint_init(undefined1 (*param_1)[16], long param_2, ulong param_3, long param_4, int param_5, int param_6, char param_7) {
   int iVar1;
   int *piVar2;
   int iVar3;
   uint uVar4;
   undefined4 uVar5;
   ulong uVar6;
   char *pcVar7;
   int iVar8;
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   uVar6 = param_3;
   if (*(ulong*)( param_2 + 0x20 ) <= param_3) {
      piVar2 = *(int**)( param_2 + 8 );
      if (( piVar2 != (int*)0x0 ) && ( *piVar2 == 0 )) {
         *piVar2 = 0x82;
      }

      uVar6 = 0;
   }

   pcVar7 = (char*)( uVar6 * *(long*)( param_2 + 0x10 ) + *(long*)( param_2 + 0x30 ) );
   iVar1 = *(int*)( pcVar7 + 8 );
   iVar8 = *(int*)( pcVar7 + 4 );
   iVar3 = iVar1 - iVar8;
   if (iVar3 == -0x150000) {
      if (param_7 != '\0') {
         iVar8 = param_5 + iVar1;
         uVar5 = 1;
         uVar4 = 1;
         goto LAB_00105af1;
      }

      LAB_00105aa0:iVar8 = param_5 + *(int*)param_1[1];
      *(undefined4*)*param_1 = 0;
      *(int*)param_1[1] = iVar8;
      *(int*)( param_1[1] + 8 ) = param_6;
      *(ulong*)( *param_1 + 8 ) = param_3;
   }
 else {
      if (iVar3 == -0x140000) {
         if (param_7 != '\0') goto LAB_00105aa0;
         uVar4 = 2;
      }
 else {
         if (iVar3 < 0) {
            iVar3 = iVar8;
            if (param_7 != '\0') {
               iVar8 = param_5 + iVar1;
               uVar5 = 4;
               uVar4 = 4;
               goto LAB_00105af1;
            }

         }
 else {
            iVar3 = iVar1;
            if (param_7 != '\0') {
               iVar8 = param_5 + iVar8;
               uVar4 = 4;
               uVar5 = 4;
               LAB_00105af1:*(undefined4*)*param_1 = uVar5;
               *(int*)param_1[1] = iVar8;
               *(int*)( param_1[1] + 8 ) = param_6;
               *(ulong*)( *param_1 + 8 ) = param_3;
               if (*pcVar7 != '\0') {
                  uVar5 = *(undefined4*)( pcVar7 + 0xc );
                  goto LAB_00105a88;
               }

               goto LAB_00105ab6;
            }

         }

         iVar8 = iVar3;
         uVar4 = 8;
      }

      iVar1 = *(int*)( param_4 + 0x130 );
      *(uint*)*param_1 = uVar4;
      *(int*)( param_1[1] + 8 ) = param_6;
      *(ulong*)( *param_1 + 8 ) = param_3;
      iVar8 = param_5 + iVar1 * 2 + iVar8;
      *(int*)param_1[1] = iVar8;
      if (*pcVar7 != '\0') {
         uVar5 = *(undefined4*)( pcVar7 + 0x10 );
         LAB_00105a88:*(undefined4*)( param_1[1] + 4 ) = uVar5;
         *(uint*)*param_1 = uVar4 | 0x10;
         return;
      }

   }

   LAB_00105ab6:*(int*)( param_1[1] + 4 ) = (int)( ( ulong )((long)iVar8 * (long)param_6 + 0x8000 + ( (long)iVar8 * (long)param_6 >> 0x3f )) >> 0x10 );
   return;
}
int afm_parser_parse(undefined8 *param_1) {
   undefined4 *puVar1;
   undefined1 *puVar2;
   undefined8 uVar3;
   bool bVar4;
   bool bVar5;
   int iVar6;
   undefined4 uVar7;
   uint uVar8;
   int iVar9;
   char *__s1;
   long lVar10;
   long lVar11;
   undefined8 uVar12;
   long *plVar13;
   long lVar14;
   ulong uVar15;
   undefined8 *puVar16;
   long in_FS_OFFSET;
   long local_b8;
   undefined8 local_b0;
   int local_a8;
   undefined4 uStack_a4;
   uint local_a0;
   undefined4 local_98[2];
   undefined4 local_90;
   undefined4 uStack_8c;
   undefined4 local_88;
   undefined4 local_80;
   undefined4 uStack_7c;
   undefined4 local_78;
   undefined4 local_70;
   undefined4 uStack_6c;
   undefined4 local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined8 local_50;
   long local_40;
   puVar2 = (undefined1*)param_1[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (puVar2 == (undefined1*)0x0) {
      iVar9 = 6;
   }
 else {
      plVar13 = (long*)param_1[1];
      uVar3 = *param_1;
      iVar9 = 2;
      __s1 = (char*)afm_parser_next_key_constprop_0_isra_0(plVar13, &local_b8);
      if (( ( __s1 != (char*)0x0 ) && ( local_b8 == 0x10 ) ) && ( iVar6 = iVar6 == 0 )) {
         iVar9 = 0xa0;
         switchD_00105c0f_caseD_1:lVar10 = afm_parser_next_key_constprop_0_isra_0(plVar13, &local_b8);
         if (lVar10 == 0) goto LAB_00105d13;
         uVar7 = afm_tokenize(lVar10, local_b8);
         switch (uVar7) {
            case 0:
        local_98[0] = 2;
        iVar6 = afm_parser_read_vals(param_1,local_98,1);
        if (iVar6 != 1) goto LAB_00105d13;
        plVar13 = (long *)param_1[1];
        *(ulong *)(puVar2 + 0x28) = CONCAT44(uStack_8c,local_90);
            default:
        goto switchD_00105c0f_caseD_1;
            case 0xe:
        local_98[0] = 2;
        iVar6 = afm_parser_read_vals(param_1,local_98,1);
        if (iVar6 != 1) goto LAB_00105d13;
        *(ulong *)(puVar2 + 0x30) = CONCAT44(uStack_8c,local_90);
        break;
            case 0x14:
        goto switchD_00105c0f_caseD_14;
            case 0x1a:
        local_98[0] = 2;
        local_88 = 2;
        local_78 = 2;
        local_68 = 2;
        iVar6 = afm_parser_read_vals(param_1,local_98,4);
        if (iVar6 != 4) goto LAB_00105d13;
        plVar13 = (long *)param_1[1];
        *(ulong *)(puVar2 + 8) = CONCAT44(uStack_8c,local_90);
        *(ulong *)(puVar2 + 0x10) = CONCAT44(uStack_7c,local_80);
        *(ulong *)(puVar2 + 0x18) = CONCAT44(uStack_6c,local_70);
        *(ulong *)(puVar2 + 0x20) = CONCAT44(uStack_5c,local_60);
        goto switchD_00105c0f_caseD_1;
            case 0x1e:
        local_98[0] = 4;
        iVar6 = afm_parser_read_vals(param_1,local_98,1);
        if (iVar6 != 1) goto LAB_00105d13;
        *puVar2 = (undefined1)local_90;
        plVar13 = (long *)param_1[1];
        goto switchD_00105c0f_caseD_1;
            case 0x28:
        local_a8 = 3;
        iVar6 = afm_parser_read_vals(param_1,&local_a8,1);
        if (iVar6 != 1) goto LAB_00105d13;
        if ((local_a0 & 0xfffffffd) != 0) {
          iVar9 = 7;
          goto LAB_00105d13;
        }
        break;
            case 0x2d:
        local_a8 = 3;
        iVar6 = afm_parser_read_vals(param_1,&local_a8,1);
        if (iVar6 != 1) goto LAB_00105d13;
        plVar13 = (long *)param_1[1];
        uVar15 = (ulong)local_a0;
        while (0 < (int)uVar15) {
          uVar15 = (ulong)((int)uVar15 - 1);
          lVar10 = afm_parser_next_key_constprop_0_isra_0(plVar13,0);
          if (lVar10 == 0) goto LAB_00105ce1;
        }
        do {
          lVar10 = afm_parser_next_key_constprop_0_isra_0(plVar13,&local_a8);
          if (lVar10 == 0) goto LAB_00105ce1;
          iVar9 = afm_tokenize(lVar10,CONCAT44(uStack_a4,local_a8));
        } while ((iVar9 != 0x11) && (iVar9 != 0x14));
        iVar9 = 0;
        goto switchD_00105c0f_caseD_1;
            case 0x31:
        bVar4 = false;
        bVar5 = false;
        goto LAB_00105eba;
         }

         plVar13 = (long*)param_1[1];
         goto switchD_00105c0f_caseD_1;
      }

   }

   goto LAB_00105c1e;
   LAB_00105eba:do {
      lVar10 = afm_parser_next_key_constprop_0_isra_0(plVar13, &local_b0);
      if (lVar10 == 0) goto LAB_00105f00;
      uVar8 = afm_tokenize(lVar10, local_b0);
      if (uVar8 == 0x35) {
         if (bVar5) goto LAB_00105f00;
         lVar10 = param_1[2];
         local_a8 = 3;
         iVar9 = afm_parser_read_vals(param_1, &local_a8, 1);
         if (( iVar9 != 1 ) || ( (int)local_a0 < 0 )) goto LAB_00105f00;
         lVar14 = plVar13[2];
         lVar11 = *plVar13;
         *(uint*)( lVar10 + 0x40 ) = local_a0;
         if (( ulong )(lVar14 - lVar11) / 0x14 < (ulong)(long)(int)local_a0) goto LAB_00105f00;
         if (local_a0 != 0) {
            uVar12 = ft_mem_qrealloc(*param_1, 0x28, 0, (long)(int)local_a0, 0, &local_a8);
            *(undefined8*)( lVar10 + 0x38 ) = uVar12;
            iVar9 = local_a8;
            if (local_a8 != 0) goto LAB_00105d13;
         }

         plVar13 = (long*)param_1[1];
         iVar9 = -1;
         while (true) {
            while (true) {
               lVar14 = afm_parser_next_key_constprop_0_isra_0(plVar13, &local_a8);
               if (lVar14 == 0) goto LAB_00105f00;
               uVar8 = afm_tokenize(lVar14, CONCAT44(uStack_a4, local_a8));
               if (uVar8 != 0x38) break;
               iVar9 = iVar9 + 1;
               if (*(int*)( lVar10 + 0x40 ) <= iVar9) goto LAB_00105f00;
               local_98[0] = 3;
               local_88 = 2;
               local_78 = 2;
               puVar1 = (undefined4*)( *(long*)( lVar10 + 0x38 ) + (long)iVar9 * 0x28 );
               local_68 = 2;
               local_58 = 2;
               iVar6 = afm_parser_read_vals(param_1, local_98, 5);
               if (iVar6 != 5) goto LAB_00105f00;
               *puVar1 = local_90;
               *(ulong*)( puVar1 + 2 ) = CONCAT44(uStack_7c, local_80);
               *(ulong*)( puVar1 + 4 ) = CONCAT44(uStack_6c, local_70);
               *(ulong*)( puVar1 + 6 ) = CONCAT44(uStack_5c, local_60);
               *(undefined8*)( puVar1 + 8 ) = local_50;
               plVar13 = (long*)param_1[1];
            }
;
            if (uVar8 < 0x39) break;
            if (uVar8 != 0x4b) goto LAB_00105f00;
         }
;
         if (uVar8 < 0x16) {
            if (uVar8 < 0x14) goto LAB_00105f00;
         }
 else if (uVar8 != 0x17) goto LAB_00105f00;
         bVar5 = true;
         if (*(int*)( lVar10 + 0x40 ) != iVar9 + 1) {
            *(int*)( lVar10 + 0x40 ) = iVar9 + 1;
         }

      }
 else {
         if (uVar8 < 0x36) {
            if (uVar8 < 0x16) {
               if (0x13 < uVar8) goto switchD_00105c0f_caseD_14;
            }
 else if (( uVar8 - 0x32 < 2 ) && ( !bVar4 )) {
               lVar10 = param_1[2];
               local_a8 = 3;
               iVar9 = afm_parser_read_vals(param_1, &local_a8, 1);
               if (( iVar9 == 1 ) && ( -1 < (int)local_a0 )) {
                  lVar14 = plVar13[2];
                  lVar11 = *plVar13;
                  *(uint*)( lVar10 + 0x50 ) = local_a0;
                  if ((ulong)(long)(int)local_a0 <= ( ulong )(lVar14 - lVar11) / 10) {
                     if (local_a0 != 0) {
                        uVar12 = ft_mem_qrealloc(*param_1, 0x10, 0, (long)(int)local_a0, 0, &local_a8);
                        *(undefined8*)( lVar10 + 0x48 ) = uVar12;
                        iVar9 = local_a8;
                        if (local_a8 != 0) goto LAB_00105d13;
                     }

                     lVar14 = 0;
                     do {
                        uVar12 = param_1[1];
                        while (true) {
                           lVar11 = afm_parser_next_key_constprop_0_isra_0(uVar12, &local_a8);
                           if (lVar11 == 0) goto LAB_00105f00;
                           uVar8 = afm_tokenize(lVar11, CONCAT44(uStack_a4, local_a8));
                           if (uVar8 < 0x26) break;
                           if (uVar8 != 0x4b) goto LAB_00105f00;
                        }
;
                        iVar9 = (int)lVar14;
                        if (uVar8 < 0x24) {
                           if (uVar8 < 0x17) goto code_r0x00105fbf;
                           if (uVar8 != 0x22) break;
                        }

                        if (*(int*)( lVar10 + 0x50 ) <= iVar9) break;
                        local_98[0] = 5;
                        puVar16 = (undefined8*)( lVar14 * 0x10 + *(long*)( lVar10 + 0x48 ) );
                        local_88 = 5;
                        local_78 = 3;
                        local_68 = 3;
                        iVar9 = afm_parser_read_vals(param_1, local_98, 4);
                        if (iVar9 < 3) break;
                        *puVar16 = CONCAT44(local_80, local_90);
                        if (uVar8 == 0x25) {
                           *(undefined4*)( puVar16 + 1 ) = 0;
                           uVar7 = local_70;
                        }
 else {
                           *(undefined4*)( puVar16 + 1 ) = local_70;
                           if (( uVar8 != 0x22 ) || ( uVar7 = iVar9 != 4 )) {
                              uVar7 = 0;
                           }

                        }

                        *(undefined4*)( (long)puVar16 + 0xc ) = uVar7;
                        lVar14 = lVar14 + 1;
                     }
 while ( true );
                  }

               }

            }

            goto LAB_00105f00;
         }

         if (uVar8 != 0x4b) goto LAB_00105f00;
      }

   }
 while ( true );
   code_r0x00105fbf:if (uVar8 < 0x14) goto LAB_00105f00;
   if (*(int*)( lVar10 + 0x50 ) != iVar9) {
      *(int*)( lVar10 + 0x50 ) = iVar9;
   }

   qsort(*(void**)( lVar10 + 0x48 ), (long)iVar9, 0x10, afm_compare_kern_pairs);
   bVar4 = true;
   plVar13 = (long*)param_1[1];
   goto LAB_00105eba;
   LAB_00105ce1:iVar9 = 0xa0;
   goto LAB_00105c1e;
   switchD_00105c0f_caseD_14:iVar9 = 0;
   goto LAB_00105c1e;
   LAB_00105f00:iVar9 = 0xa0;
   LAB_00105d13:ft_mem_free(uVar3, *(undefined8*)( puVar2 + 0x38 ));
   *(undefined8*)( puVar2 + 0x38 ) = 0;
   *(undefined4*)( puVar2 + 0x40 ) = 0;
   ft_mem_free(uVar3, *(undefined8*)( puVar2 + 0x48 ));
   *puVar2 = 0;
   *(undefined8*)( puVar2 + 0x48 ) = 0;
   *(undefined4*)( puVar2 + 0x50 ) = 0;
   LAB_00105c1e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void cf2_builder_cubeTo(long param_1, ulong *param_2) {
   undefined1 auVar1[16];
   short sVar2;
   int iVar3;
   long lVar4;
   int *piVar5;
   ulong uVar6;
   ulong uVar7;
   int iVar8;
   long lVar9;
   undefined4 *puVar10;
   long lVar11;
   lVar4 = *(long*)( param_1 + 0x38 );
   if (*(char*)( lVar4 + 0x58 ) == '\0') {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      *(undefined1*)( lVar4 + 0x58 ) = 1;
      iVar8 = ps_builder_add_contour_constprop_0(lVar4);
      if (( iVar8 != 0 ) || ( ( lVar9 = *(long*)( lVar4 + 0x18 ) * (uint*)( lVar9 + 8 ) < ( uint )(*(short*)( lVar9 + 0x1a ) + 1 + (int)*(short*)( lVar9 + 0x62 )) && ( iVar8 = FT_GlyphLoader_CheckPoints(lVar9, 1, 0) != 0 ) ) )) {
         piVar5 = *(int**)( param_1 + 0x30 );
         iVar3 = *piVar5;
         goto joined_r0x001064b4;
      }

      lVar9 = *(long*)( lVar4 + 0x28 );
      if (*(char*)( lVar4 + 0x59 ) != '\0') {
         sVar2 = *(short*)( lVar9 + 2 );
         lVar11 = *(long*)( lVar9 + 0x10 );
         puVar10 = (undefined4*)( (long)sVar2 * 0x10 + *(long*)( lVar9 + 8 ) );
         *puVar10 = (int)( uVar6 >> 10 );
         puVar10[1] = (int)( (long)uVar6 >> 0x2a );
         puVar10[2] = (int)( uVar7 >> 10 );
         puVar10[3] = (int)( (long)uVar7 >> 0x2a );
         *(undefined1*)( lVar11 + sVar2 ) = 1;
      }

      *(short*)( lVar9 + 2 ) = *(short*)( lVar9 + 2 ) + 1;
   }

   lVar9 = *(long*)( lVar4 + 0x18 );
   if (( ( uint )(*(short*)( lVar9 + 0x1a ) + 3 + (int)*(short*)( lVar9 + 0x62 )) <= *(uint*)( lVar9 + 8 ) ) || ( iVar8 = iVar8 == 0 )) {
      lVar9 = *(long*)( lVar4 + 0x28 );
      lVar11 = lVar9;
      if (*(char*)( lVar4 + 0x59 ) != '\0') {
         auVar1 = *(undefined1(*) [16])( param_2 + 2 );
         sVar2 = *(short*)( lVar9 + 2 );
         lVar11 = *(long*)( lVar9 + 0x10 );
         puVar10 = (undefined4*)( (long)sVar2 * 0x10 + *(long*)( lVar9 + 8 ) );
         *puVar10 = (int)( auVar1._0_8_ >> 10 );
         puVar10[1] = auVar1._4_4_ >> 10;
         puVar10[2] = (int)( auVar1._8_8_ >> 10 );
         puVar10[3] = auVar1._12_4_ >> 10;
         *(undefined1*)( lVar11 + sVar2 ) = 2;
         lVar11 = *(long*)( lVar4 + 0x28 );
      }

      *(short*)( lVar9 + 2 ) = *(short*)( lVar9 + 2 ) + 1;
      lVar9 = lVar11;
      if (*(char*)( lVar4 + 0x59 ) != '\0') {
         auVar1 = *(undefined1(*) [16])( param_2 + 4 );
         sVar2 = *(short*)( lVar11 + 2 );
         lVar9 = *(long*)( lVar11 + 0x10 );
         puVar10 = (undefined4*)( (long)sVar2 * 0x10 + *(long*)( lVar11 + 8 ) );
         *puVar10 = (int)( auVar1._0_8_ >> 10 );
         puVar10[1] = auVar1._4_4_ >> 10;
         puVar10[2] = (int)( auVar1._8_8_ >> 10 );
         puVar10[3] = auVar1._12_4_ >> 10;
         *(undefined1*)( lVar9 + sVar2 ) = 2;
         lVar9 = *(long*)( lVar4 + 0x28 );
      }

      *(short*)( lVar11 + 2 ) = *(short*)( lVar11 + 2 ) + 1;
      if (*(char*)( lVar4 + 0x59 ) != '\0') {
         auVar1 = *(undefined1(*) [16])( param_2 + 6 );
         sVar2 = *(short*)( lVar9 + 2 );
         lVar4 = *(long*)( lVar9 + 0x10 );
         puVar10 = (undefined4*)( (long)sVar2 * 0x10 + *(long*)( lVar9 + 8 ) );
         *puVar10 = (int)( auVar1._0_8_ >> 10 );
         puVar10[1] = auVar1._4_4_ >> 10;
         puVar10[2] = (int)( auVar1._8_8_ >> 10 );
         puVar10[3] = auVar1._12_4_ >> 10;
         *(undefined1*)( lVar4 + sVar2 ) = 1;
      }

      *(short*)( lVar9 + 2 ) = *(short*)( lVar9 + 2 ) + 1;
      return;
   }

   piVar5 = *(int**)( param_1 + 0x30 );
   iVar3 = *piVar5;
   joined_r0x001064b4:if (iVar3 == 0) {
      *piVar5 = iVar8;
   }

   return;
}
void cf2_hintmap_build(long *param_1, long param_2, long param_3, undefined8 *param_4, undefined4 param_5, char param_6) {
   byte bVar1;
   long lVar2;
   long lVar3;
   ushort uVar4;
   long lVar5;
   int iVar6;
   undefined4 uVar7;
   int iVar8;
   long *plVar9;
   uint *puVar10;
   int *piVar11;
   undefined1 *puVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   ulong uVar16;
   byte bVar17;
   byte *pbVar18;
   uint uVar19;
   int iVar20;
   long *plVar21;
   uint uVar22;
   ulong uVar23;
   long *plVar24;
   ulong uVar25;
   long lVar26;
   byte *pbVar27;
   uint uVar28;
   long in_FS_OFFSET;
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 auStack_70[16];
   undefined1 auStack_60[16];
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar26 = *param_1;
   if (( param_6 == '\0' ) && ( *(char*)( param_1[1] + 0x18 ) == '\0' )) {
      local_78 = *param_4;
      uStack_50 = 0;
      auStack_70 = (undefined1[16])0x0;
      auStack_60 = (undefined1[16])0x0;
      cf2_hintmap_build();
   }

   uVar15 = *(ulong*)( param_2 + 0x20 );
   if (*(char*)( param_4 + 1 ) == '\0') {
      uVar25 = *(long*)( param_3 + 0x20 ) + uVar15;
      if (0x60 < uVar25) {
         piVar11 = (int*)*param_4;
         if (( piVar11 != (int*)0x0 ) && ( *piVar11 == 0 )) {
            *piVar11 = 0x12;
         }

         if (*(char*)( lVar26 + 0xc ) != '\0') {
            *piVar11 = 0;
            *(undefined1*)( (long)param_1 + 0x19 ) = 0;
         }

         goto LAB_001066a0;
      }

      param_4[2] = uVar25;
      uVar16 = uVar25 + 7 >> 3;
      *(undefined2*)( param_4 + 1 ) = 0x101;
      param_4[3] = uVar16;
      if (uVar25 != 0) {
         uVar13 = (uint)uVar16;
         if (uVar13 < 8) {
            if (( uVar16 & 4 ) == 0) {
               if (( uVar13 != 0 ) && ( *(undefined1*)( param_4 + 4 ) = 0xff(uVar16 & 2) != 0 )) {
                  *(undefined2*)( (long)param_4 + ( uVar16 & 0xffffffff ) + 0x1e ) = 0xffff;
               }

            }
 else {
               *(undefined4*)( param_4 + 4 ) = 0xffffffff;
               *(undefined4*)( (long)param_4 + ( uVar16 & 0xffffffff ) + 0x1c ) = 0xffffffff;
            }

         }
 else {
            param_4[4] = 0xffffffffffffffff;
            *(undefined8*)( (long)param_4 + ( uVar16 & 0xffffffff ) + 0x18 ) = 0xffffffffffffffff;
            uVar13 = ( ( (int)param_4 + 0x20 ) - (int)( ( ulong )(param_4 + 5) & 0xfffffffffffffff8 ) ) + uVar13 & 0xfffffff8;
            if (7 < uVar13) {
               uVar22 = 0;
               do {
                  uVar23 = (ulong)uVar22;
                  uVar22 = uVar22 + 8;
                  *(undefined8*)( ( ( ulong )(param_4 + 5) & 0xfffffffffffffff8 ) + uVar23 ) = 0xffffffffffffffff;
               }
 while ( uVar22 < uVar13 );
            }

         }

         pbVar18 = (byte*)( (long)param_4 + uVar16 + 0x1f );
         *pbVar18 = *pbVar18 & ( byte )(-1 << ( -(char)uVar25 & 7U ));
      }

   }
 else {
      uVar25 = param_4[2];
   }

   local_78 = *param_4;
   auStack_70 = *(undefined1(*) [16])( param_4 + 1 );
   auStack_60._0_8_ = param_4[3];
   param_1[4] = 0;
   auStack_60._8_8_ = param_4[4];
   uStack_50 = param_4[5];
   if (uVar25 < uVar15) goto LAB_001066a0;
   if (*(char*)( lVar26 + 0x141 ) != '\0') {
      local_98 = (undefined1[16])0x0;
      local_88 = (undefined1[16])0x0;
      cf2_hintmap_insertHint(param_1, lVar26 + 0x178, local_98);
      cf2_hintmap_insertHint(param_1, local_98, lVar26 + 0x158);
   }

   if (uVar15 == 0) {
      uVar15 = ( ulong ) * (uint*)( param_1 + 4 );
      if (param_6 != '\0') goto LAB_001067b3;
      LAB_0010681f:*(undefined8*)( param_1[2] + 0x20 ) = 0;
      if ((int)uVar15 != 0) goto LAB_00106833;
   }
 else {
      pbVar18 = auStack_60 + 8;
      uVar25 = 0;
      bVar17 = 0x80;
      pbVar27 = pbVar18;
      do {
         bVar1 = *pbVar27;
         if (( bVar1 & bVar17 ) != 0) {
            cf2_hint_init(local_b8, param_2, uVar25, lVar26, param_5, *(undefined4*)( (long)param_1 + 0x1c ), 1);
            cf2_hint_init(local_98, param_2, uVar25, lVar26, param_5, *(undefined4*)( (long)param_1 + 0x1c ));
            if (( local_b8 & (undefined1[16])0x10 ) == (undefined1[16])0x0) {
               uVar13 = local_98._0_4_ & 0x10;
               if (( local_98 & (undefined1[16])0x10 ) == (undefined1[16])0x0) {
                  iVar20 = *(int*)( lVar26 + 0x14c );
                  if (*(uint*)( lVar26 + 0x13c ) != 0) {
                     piVar11 = (int*)( lVar26 + 0x198 );
                     do {
                        uVar7 = local_a8._4_4_;
                        if ((char)piVar11[4] == '\0') {
                           if (( ( ( local_98 & (undefined1[16])0xa ) != (undefined1[16])0x0 ) && ( *piVar11 - iVar20 <= (int)local_88._0_4_ ) ) && ( (int)local_88._0_4_ <= piVar11[1] + iVar20 )) {
                              if (*(char*)( lVar26 + 0x140 ) == '\0') {
                                 uVar22 = local_88._4_4_ + 0x8000 & 0xffff0000;
                                 if (( *(int*)( lVar26 + 0x148 ) <= local_88._0_4_ - *piVar11 ) && ( uVar13 = *(int*)( lVar26 + 0x1a4 + (ulong)uVar13 * 0x14 ) + 0x10000 ),(int)uVar22 < (int)uVar13) {
                                    uVar22 = uVar13;
                                 }

                              }
 else {
                                 uVar22 = *(uint*)( lVar26 + 0x1a4 + (ulong)uVar13 * 0x14 );
                              }

                              iVar20 = uVar22 - local_88._4_4_;
                              if (local_b8._0_4_ != 0) {
                                 local_a8._4_4_ = local_a8._4_4_ + iVar20;
                                 local_b8._0_4_ = local_b8._0_4_ | 0x10;
                              }

                              LAB_00106d08:local_88._4_4_ = iVar20 + local_88._4_4_;
                              local_98._0_4_ = local_98._0_4_ | 0x10;
                              goto LAB_00106675;
                           }

                        }
 else if (( ( ( local_b8 & (undefined1[16])0x5 ) != (undefined1[16])0x0 ) && ( *piVar11 - iVar20 <= (int)local_a8._0_4_ ) ) && ( (int)local_a8._0_4_ <= iVar20 + piVar11[1] )) {
                           if (*(char*)( lVar26 + 0x140 ) == '\0') {
                              uVar4 = ( ushort )(( uint )(local_a8._4_4_ + 0x8000) >> 0x10);
                              iVar20 = (uint)uVar4 * 0x10000;
                              local_a8._4_4_ = iVar20;
                              if (( *(int*)( lVar26 + 0x148 ) <= piVar11[1] - local_a8._0_4_ ) && ( local_a8._4_4_ = *(int*)( lVar26 + 0x1a4 + (ulong)uVar13 * 0x14 ) + -0x10000 ),iVar20 <= (int)local_a8._4_4_) {
                                 local_a8._4_4_ = (uint)uVar4 << 0x10;
                              }

                           }
 else {
                              local_a8._4_4_ = *(int*)( lVar26 + 0x1a4 + (ulong)uVar13 * 0x14 );
                           }

                           local_b8._0_4_ = local_b8._0_4_ | 0x10;
                           if (local_98._0_4_ != 0) {
                              iVar20 = local_a8._4_4_ - uVar7;
                              goto LAB_00106d08;
                           }

                           goto LAB_00106675;
                        }

                        uVar13 = uVar13 + 1;
                        piVar11 = piVar11 + 5;
                     }
 while ( *(uint*)( lVar26 + 0x13c ) != uVar13 );
                  }

                  goto LAB_001065d0;
               }

            }

            LAB_00106675:cf2_hintmap_insertHint(param_1, local_b8, local_98);
            *pbVar27 = ~bVar17 & bVar1;
         }

         LAB_001065d0:bVar17 = bVar17 >> 1;
         if (( ~uVar25 & 7 ) == 0) {
            pbVar27 = pbVar27 + 1;
            bVar17 = 0x80;
         }

         uVar25 = uVar25 + 1;
      }
 while ( uVar25 != uVar15 );
      if (param_6 == '\0') {
         uVar25 = 0;
         bVar17 = 0x80;
         do {
            if (( bVar17 & *pbVar18 ) != 0) {
               uVar16 = 0;
               cf2_hint_init(local_b8, param_2, uVar25, lVar26, param_5, *(undefined4*)( (long)param_1 + 0x1c ), 1);
               cf2_hint_init(local_98, param_2, uVar25, lVar26, param_5, *(undefined4*)( (long)param_1 + 0x1c ), uVar16 & 0xffffffff00000000);
               cf2_hintmap_insertHint(param_1, local_b8, local_98);
            }

            bVar17 = bVar17 >> 1;
            if (( ~(uint)uVar25 & 7 ) == 0) {
               pbVar18 = pbVar18 + 1;
               bVar17 = 0x80;
            }

            uVar25 = uVar25 + 1;
         }
 while ( uVar25 != uVar15 );
         uVar13 = *(uint*)( param_1 + 4 );
         uVar15 = (ulong)uVar13;
         *(undefined8*)( param_1[2] + 0x20 ) = 0;
         if (uVar13 != 0) goto LAB_00106833;
      }
 else {
         uVar15 = ( ulong ) * (uint*)( param_1 + 4 );
         LAB_001067b3:if (( ( (int)uVar15 == 0 ) || ( 0 < (int)param_1[7] ) ) || ( (int)param_1[( ulong )((int)uVar15 - 1) * 4 + 7] < 0 )) {
            local_b8._4_12_ = SUB1612((undefined1[16])0x0, 4);
            local_b8._0_4_ = 0x31;
            local_a8 = ZEXT416(*(uint*)( (long)param_1 + 0x1c )) << 0x40;
            local_98 = (undefined1[16])0x0;
            local_88 = (undefined1[16])0x0;
            cf2_hintmap_insertHint(param_1, local_b8, local_98);
            uVar15 = ( ulong ) * (uint*)( param_1 + 4 );
            goto LAB_0010681f;
         }

         *(undefined8*)( param_1[2] + 0x20 ) = 0;
         LAB_00106833:uVar25 = 0;
         do {
            uVar13 = *(uint*)( param_1 + ( uVar25 + 1 ) * 4 + 1 ) & 0xc;
            uVar16 = uVar25 + 1;
            if (uVar13 == 0) {
               uVar16 = uVar25;
            }

            uVar28 = *(uint*)( (long)param_1 + uVar25 * 0x20 + 0x3c );
            uVar23 = uVar16 + 1;
            uVar22 = *(uint*)( (long)param_1 + uVar16 * 0x20 + 0x3c );
            if (( *(uint*)( param_1 + ( uVar25 + 1 ) * 4 + 1 ) & 0x10 ) == 0) {
               uVar19 = uVar28 & 0xffff;
               uVar14 = uVar22 & 0xffff;
               iVar20 = 0x10000 - uVar19;
               if (uVar19 == 0) {
                  iVar20 = 0;
               }

               iVar6 = 0x10000 - uVar14;
               if (uVar14 == 0) {
                  iVar6 = 0;
               }

               if (iVar20 <= iVar6) {
                  iVar6 = iVar20;
               }

               if (uVar19 <= uVar14) {
                  uVar14 = uVar19;
               }

               iVar20 = -uVar14;
               if (( uVar16 < (int)uVar15 - 1 ) && ( *(int*)( (long)param_1 + uVar23 * 0x20 + 0x3c ) < (int)( uVar22 + 0x8000 + iVar6 ) )) {
                  if (uVar25 == 0) {
                     uVar28 = uVar28 - uVar14;
                     if (iVar6 < (int)uVar14) {
                        LAB_001068f0:bVar17 = *(byte*)( param_1 + uVar23 * 4 + 5 );
                        goto joined_r0x00106f0e;
                     }

                     *(uint*)( (long)param_1 + 0x3c ) = uVar28;
                     joined_r0x00106bfc:if (uVar13 == 0) goto joined_r0x001069c2;
                     LAB_00106b5f:*(uint*)( (long)param_1 + uVar16 * 0x20 + 0x3c ) = iVar20 + uVar22;
                  }
 else {
                     if (*(int*)( (long)param_1 + ( uVar25 - 1 ) * 0x20 + 0x3c ) <= (int)( ( uVar28 - uVar14 ) + -0x8000 )) {
                        iVar8 = iVar20;
                        if ((int)uVar14 <= iVar6) goto LAB_00106b9b;
                        uVar28 = uVar28 - uVar14;
                        goto LAB_001068f0;
                     }

                     bVar17 = *(byte*)( param_1 + uVar23 * 4 + 5 );
                     iVar20 = 0;
                     joined_r0x00106f0e:if (( bVar17 & 0x10 ) == 0) {
                        local_98._8_4_ = iVar6 - iVar20;
                        local_98._0_8_ = uVar16;
                        cf2_arrstack_push(param_1[2], local_98);
                     }

                     *(uint*)( (long)param_1 + uVar25 * 0x20 + 0x3c ) = uVar28;
                     if (uVar13 == 0) {
                        if (uVar25 != 0) goto LAB_00106924;
                        goto LAB_001069d0;
                     }

                     *(uint*)( (long)param_1 + uVar16 * 0x20 + 0x3c ) = uVar22 + iVar20;
                     if (uVar25 != 0) goto LAB_00106bc0;
                  }

                  goto LAB_00106978;
               }

               if (uVar25 != 0) {
                  iVar8 = iVar6;
                  if (( *(int*)( (long)param_1 + ( uVar25 - 1 ) * 0x20 + 0x3c ) <= (int)( ( uVar28 - uVar14 ) + -0x8000 ) ) && ( (int)uVar14 < iVar6 )) {
                     iVar8 = iVar20;
                  }

                  LAB_00106b9b:*(uint*)( (long)param_1 + uVar25 * 0x20 + 0x3c ) = uVar28 + iVar8;
                  if (uVar13 == 0) {
                     LAB_00106924:plVar24 = param_1 + uVar25 * 4;
                     iVar20 = (int)plVar24[7];
                     iVar6 = (int)param_1[( uVar25 - 1 ) * 4 + 7];
                     if (iVar6 == iVar20) goto LAB_001069d0;
                  }
 else {
                     *(uint*)( (long)param_1 + uVar16 * 0x20 + 0x3c ) = iVar8 + uVar22;
                     LAB_00106bc0:plVar24 = param_1 + uVar25 * 4;
                     iVar20 = (int)plVar24[7];
                     iVar6 = (int)param_1[( uVar25 - 1 ) * 4 + 7];
                     if (iVar6 == iVar20) goto LAB_00106978;
                  }

                  uVar28 = *(uint*)( (long)plVar24 + 0x3c );
                  LAB_0010694b:uVar7 = FT_DivFix((long)(int)( uVar28 - *(int*)( (long)param_1 + ( uVar25 - 1 ) * 0x20 + 0x3c ) ), (long)( iVar20 - iVar6 ));
                  *(undefined4*)( param_1 + ( uVar25 - 1 ) * 4 + 8 ) = uVar7;
                  goto LAB_00106974;
               }

               if (iVar6 <= (int)uVar14) {
                  *(uint*)( (long)param_1 + 0x3c ) = uVar28 + iVar6;
                  iVar20 = iVar6;
                  goto joined_r0x00106bfc;
               }

               *(uint*)( (long)param_1 + 0x3c ) = uVar28 - uVar14;
               if (uVar13 != 0) goto LAB_00106b5f;
            }
 else {
               if (uVar25 != 0) {
                  iVar20 = (int)param_1[uVar25 * 4 + 7];
                  iVar6 = (int)param_1[( uVar25 - 1 ) * 4 + 7];
                  if (iVar20 != iVar6) goto LAB_0010694b;
               }

               LAB_00106974:if (uVar13 != 0) {
                  LAB_00106978:lVar26 = uVar16 - 1;
                  if ((int)param_1[uVar16 * 4 + 7] != (int)param_1[lVar26 * 4 + 7]) {
                     uVar7 = FT_DivFix((long)( *(int*)( (long)param_1 + uVar16 * 0x20 + 0x3c ) - *(int*)( (long)param_1 + lVar26 * 0x20 + 0x3c ) ), (long)( (int)param_1[uVar16 * 4 + 7] - (int)param_1[lVar26 * 4 + 7] ));
                     uVar15 = ( ulong ) * (uint*)( param_1 + 4 );
                     *(undefined4*)( param_1 + lVar26 * 4 + 8 ) = uVar7;
                     goto joined_r0x001069c2;
                  }

               }

               LAB_001069d0:uVar15 = ( ulong ) * (uint*)( param_1 + 4 );
            }

            joined_r0x001069c2:uVar25 = uVar23;
         }
 while ( uVar23 < uVar15 );
         lVar26 = param_1[2];
         uVar15 = *(ulong*)( lVar26 + 0x20 );
         if (uVar15 != 0) {
            lVar2 = *(long*)( lVar26 + 0x10 );
            plVar24 = *(long**)( lVar26 + 0x30 );
            plVar21 = (long*)( ( uVar15 - 1 ) * lVar2 + (long)plVar24 );
            uVar25 = uVar15;
            do {
               uVar25 = uVar25 - 1;
               plVar9 = plVar21;
               if (( ( uVar15 <= uVar25 ) && ( piVar11 = *(int**)( lVar26 + 8 ) ),plVar9 = plVar24,piVar11 != (int*)0x0 )) {
                  *piVar11 = 0x82;
               }

               lVar3 = *plVar9;
               lVar5 = plVar9[1];
               iVar20 = *(int*)( (long)param_1 + lVar3 * 0x20 + 0x3c ) + (int)lVar5;
               if (( iVar20 + 0x8000 <= *(int*)( (long)param_1 + ( lVar3 + 1 ) * 0x20 + 0x3c ) ) && ( *(int*)( (long)param_1 + lVar3 * 0x20 + 0x3c ) = iVar20(*(byte*)( param_1 + ( lVar3 + 1 ) * 4 + 1 ) & 0xc) != 0 )) {
                  piVar11 = (int*)( (long)param_1 + ( lVar3 + -1 ) * 0x20 + 0x3c );
                  *piVar11 = *piVar11 + (int)lVar5;
               }

               plVar21 = (long*)( (long)plVar21 - lVar2 );
            }
 while ( uVar25 != 0 );
         }

         if (param_6 != '\0') goto LAB_00106698;
      }

      if ((int)param_1[4] != 0) {
         puVar10 = (uint*)( param_1 + 5 );
         uVar15 = 0;
         do {
            uVar13 = *puVar10;
            if (( uVar13 & 0x20 ) == 0) {
               uVar25 = *(ulong*)( puVar10 + 2 );
               if (*(ulong*)( param_2 + 0x20 ) <= *(ulong*)( puVar10 + 2 )) {
                  piVar11 = *(int**)( param_2 + 8 );
                  uVar25 = 0;
                  if (( piVar11 != (int*)0x0 ) && ( *piVar11 == 0 )) {
                     *piVar11 = 0x82;
                     uVar13 = *puVar10;
                     uVar25 = 0;
                  }

               }

               puVar12 = (undefined1*)( uVar25 * *(long*)( param_2 + 0x10 ) + *(long*)( param_2 + 0x30 ) );
               if (( uVar13 & 10 ) == 0) {
                  *(uint*)( puVar12 + 0xc ) = puVar10[5];
               }
 else {
                  *(uint*)( puVar12 + 0x10 ) = puVar10[5];
               }

               *puVar12 = 1;
            }

            uVar15 = uVar15 + 1;
            puVar10 = puVar10 + 8;
         }
 while ( uVar15 < *(uint*)( param_1 + 4 ) );
      }

   }

   LAB_00106698:*(undefined1*)( param_1 + 3 ) = 1;
   *(undefined1*)( (long)param_4 + 9 ) = 0;
   LAB_001066a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void cf2_glyphpath_lineTo(long param_1, uint param_2, int param_3) {
   ulong uVar1;
   ulong uVar2;
   bool bVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   long in_FS_OFFSET;
   int local_60;
   int local_5c;
   long local_58;
   long lStack_50;
   long local_40;
   uVar1 = *(ulong*)( param_1 + 0x4948 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(ulong*)( param_1 + 0x4940 );
   if (( *(char*)( *(long*)( param_1 + 0x48f8 ) + 9 ) == '\0' ) || ( *(char*)( param_1 + 0x48e1 ) != '\0' )) {
      if (uVar2 == (long)(int)param_2) {
         if (uVar1 == (long)param_3) goto LAB_0010720d;
         bVar3 = false;
         uVar5 = (ulong)param_2;
      }
 else {
         bVar3 = false;
         uVar5 = uVar2 & 0xffffffff;
      }

   }
 else {
      bVar3 = true;
      uVar5 = uVar2 & 0xffffffff;
   }

   cf2_glyphpath_computeOffset(param_1, uVar5, uVar1 & 0xffffffff, param_2, param_3, &local_60);
   local_58 = (long)( (int)uVar2 + local_60 );
   lVar4 = (long)(int)( param_2 + local_60 );
   lVar6 = (long)( param_3 + local_5c );
   lStack_50 = (long)( local_5c + (int)uVar1 );
   if (*(char*)( param_1 + 0x48e3 ) != '\0') {
      cf2_glyphpath_pushMove();
      *(undefined1*)( param_1 + 0x48e3 ) = 0;
      *(undefined1*)( param_1 + 0x48e0 ) = 1;
      *(long*)( param_1 + 0x4930 ) = lVar4;
      *(long*)( param_1 + 0x4938 ) = lVar6;
   }

   if (*(char*)( param_1 + 0x4970 ) != '\0') {
      cf2_glyphpath_pushPrevElem(param_1, param_1 + 0x10, &local_58, lVar4, lVar6, 0);
   }

   *(undefined1*)( param_1 + 0x4970 ) = 1;
   *(undefined4*)( param_1 + 0x4974 ) = 2;
   *(long*)( param_1 + 0x4978 ) = local_58;
   *(long*)( param_1 + 0x4980 ) = lStack_50;
   *(long*)( param_1 + 0x4988 ) = lVar4;
   *(long*)( param_1 + 0x4990 ) = lVar6;
   if (bVar3) {
      cf2_hintmap_build(param_1 + 0x10, *(undefined8*)( param_1 + 0x48e8 ), *(undefined8*)( param_1 + 0x48f0 ), *(undefined8*)( param_1 + 0x48f8 ), *(undefined4*)( param_1 + 0x4900 ), 0);
   }

   *(long*)( param_1 + 0x4940 ) = (long)(int)param_2;
   *(long*)( param_1 + 0x4948 ) = (long)param_3;
   LAB_0010720d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void cf2_glyphpath_moveTo(long param_1, int param_2, int param_3) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   puVar2 = (undefined8*)( param_1 + 0x10 );
   if (*(char*)( param_1 + 0x48e0 ) != '\0') {
      *(undefined1*)( param_1 + 0x48e1 ) = 1;
      cf2_glyphpath_lineTo(param_1, *(undefined4*)( param_1 + 0x4960 ), *(undefined4*)( param_1 + 0x4968 ));
      if (*(char*)( param_1 + 0x4970 ) != '\0') {
         cf2_glyphpath_pushPrevElem(param_1, puVar2, param_1 + 0x4920, *(undefined8*)( param_1 + 0x4930 ), *(undefined8*)( param_1 + 0x4938 ), 1);
      }

      *(undefined1*)( param_1 + 0x4970 ) = 0;
      *(undefined2*)( param_1 + 0x48e0 ) = 0;
   }

   *(undefined1*)( param_1 + 0x48e3 ) = 1;
   *(long*)( param_1 + 0x4940 ) = (long)param_2;
   *(long*)( param_1 + 0x4948 ) = (long)param_3;
   *(long*)( param_1 + 0x4960 ) = (long)param_2;
   *(long*)( param_1 + 0x4968 ) = (long)param_3;
   if (( *(char*)( param_1 + 0x28 ) == '\0' ) || ( *(char*)( *(long*)( param_1 + 0x48f8 ) + 9 ) != '\0' )) {
      cf2_hintmap_build(puVar2, *(undefined8*)( param_1 + 0x48e8 ), *(undefined8*)( param_1 + 0x48f0 ), *(long*)( param_1 + 0x48f8 ), *(undefined4*)( param_1 + 0x4900 ), 0);
   }

   puVar3 = (undefined8*)( param_1 + 0x1838 );
   for (lVar1 = 0x305; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
   }

   return;
}
void cf2_glyphpath_pushMove(long param_1, ulong param_2, ulong param_3) {
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined4 local_38;
   long local_30;
   local_78 = *(undefined8*)( param_1 + 0x4950 );
   uStack_70 = *(undefined8*)( param_1 + 0x4958 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 1;
   if (*(char*)( param_1 + 0x28 ) == '\0') {
      cf2_glyphpath_moveTo(param_1, *(undefined4*)( param_1 + 0x4960 ), *(undefined4*)( param_1 + 0x4968 ));
   }

   cf2_glyphpath_hintPoint(param_1, param_1 + 0x10, &local_68, param_2 & 0xffffffff, param_3 & 0xffffffff);
   ( *(code*)**(undefined8**)( param_1 + 8 ) )(*(undefined8**)( param_1 + 8 ), &local_78);
   *(ulong*)( param_1 + 0x4920 ) = param_2;
   *(ulong*)( param_1 + 0x4928 ) = param_3;
   *(undefined8*)( param_1 + 0x4950 ) = local_68;
   *(undefined8*)( param_1 + 0x4958 ) = uStack_60;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void cf2_glyphpath_curveTo(long param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7) {
   int *piVar1;
   char cVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   int local_68;
   int local_64;
   int local_60;
   int local_5c;
   long local_58;
   long lStack_50;
   long local_40;
   uVar3 = *(ulong*)( param_1 + 0x4948 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(ulong*)( param_1 + 0x4940 );
   lVar5 = param_1;
   cf2_glyphpath_computeOffset(param_1, uVar4 & 0xffffffff, uVar3 & 0xffffffff, param_2, param_3, &local_68, &local_64);
   cf2_glyphpath_computeOffset();
   piVar1 = (int*)( *(long*)( lVar5 + 8 ) + 0x20 );
   *piVar1 = *piVar1 + ( ( param_5 - param_3 >> 0x10 ) * ( param_2 >> 0x10 ) - ( param_4 - param_2 >> 0x10 ) * ( param_3 >> 0x10 ) );
   local_58 = (long)( (int)uVar4 + local_68 );
   lVar5 = (long)( local_68 + param_2 );
   lStack_50 = (long)( (int)uVar3 + local_64 );
   lVar6 = (long)( local_64 + param_3 );
   if (*(char*)( param_1 + 0x48e3 ) == '\0') {
      cVar2 = *(char*)( param_1 + 0x4970 );
   }
 else {
      cf2_glyphpath_pushMove(param_1);
      cVar2 = *(char*)( param_1 + 0x4970 );
      *(undefined1*)( param_1 + 0x48e3 ) = 0;
      *(undefined1*)( param_1 + 0x48e0 ) = 1;
      *(long*)( param_1 + 0x4930 ) = lVar5;
      *(long*)( param_1 + 0x4938 ) = lVar6;
   }

   if (cVar2 != '\0') {
      cf2_glyphpath_pushPrevElem(param_1, param_1 + 0x10, &local_58, lVar5, lVar6, 0);
   }

   *(long*)( param_1 + 0x4988 ) = lVar5;
   *(undefined1*)( param_1 + 0x4970 ) = 1;
   *(undefined4*)( param_1 + 0x4974 ) = 4;
   *(long*)( param_1 + 0x4990 ) = lVar6;
   *(long*)( param_1 + 0x4998 ) = (long)( param_4 + local_60 );
   *(long*)( param_1 + 0x49a0 ) = (long)( param_5 + local_5c );
   *(long*)( param_1 + 0x49a8 ) = (long)( local_60 + param_6 );
   *(long*)( param_1 + 0x49b0 ) = (long)( local_5c + param_7 );
   *(long*)( param_1 + 0x4978 ) = local_58;
   *(long*)( param_1 + 0x4980 ) = lStack_50;
   if (*(char*)( *(long*)( param_1 + 0x48f8 ) + 9 ) != '\0') {
      cf2_hintmap_build(param_1 + 0x10, *(undefined8*)( param_1 + 0x48e8 ), *(undefined8*)( param_1 + 0x48f0 ), *(long*)( param_1 + 0x48f8 ), *(undefined4*)( param_1 + 0x4900 ), 0);
   }

   *(long*)( param_1 + 0x4940 ) = (long)param_6;
   *(long*)( param_1 + 0x4948 ) = (long)param_7;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void cf2_doFlex(long param_1, int *param_2, int *param_3, undefined8 param_4, char *param_5, undefined8 param_6) {
   char *pcVar1;
   char cVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   ulong uVar7;
   char cVar8;
   int *piVar9;
   char *pcVar10;
   long in_FS_OFFSET;
   int local_7c;
   int local_70;
   undefined4 local_6c;
   undefined4 local_68;
   undefined4 local_64;
   undefined4 local_60;
   undefined4 local_5c;
   undefined4 local_58;
   undefined4 local_54;
   int local_50;
   int local_4c;
   long local_40;
   piVar9 = &local_70;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = param_5[9];
   uVar7 = 0;
   pcVar1 = param_5 + (int)( 10 - ( uint )(cVar2 == '\0') );
   pcVar10 = param_5;
   do {
      while (true) {
         cVar8 = (char)param_6;
         iVar4 = piVar9[-2];
         cVar3 = *pcVar10;
         *piVar9 = iVar4;
         if (cVar3 == '\0') break;
         pcVar10 = pcVar10 + 1;
         piVar9 = piVar9 + 1;
         iVar5 = cf2_stack_getReal(param_1);
         cVar8 = (char)param_6;
         uVar7 = ( ulong )((int)uVar7 + 1);
         piVar9[-1] = iVar4 + iVar5;
         if (pcVar10 == pcVar1) goto LAB_001077cd;
      }
;
      pcVar10 = pcVar10 + 1;
      piVar9 = piVar9 + 1;
   }
 while ( pcVar10 != pcVar1 );
   LAB_001077cd:iVar4 = local_4c;
   if (cVar2 == '\0') {
      iVar4 = *param_3;
   }

   if (cVar8 == '\0') {
      if (param_5[10] == '\0') {
         local_7c = *param_2;
         cVar2 = param_5[0xb];
      }
 else {
         uVar7 = ( ulong )((int)uVar7 + 1);
         local_7c = cf2_stack_getReal(param_1);
         uVar7 = uVar7 & 0xffffffff;
         local_7c = local_7c + local_50;
         cVar2 = param_5[0xb];
      }

      if (cVar2 == '\0') {
         iVar5 = *param_3;
      }
 else {
         iVar5 = cf2_stack_getReal(param_1, uVar7);
         iVar5 = iVar4 + iVar5;
      }

   }
 else {
      iVar5 = local_50 - *param_2;
      if (iVar5 < 0) {
         iVar5 = *param_2 - local_50;
      }

      iVar6 = iVar4 - *param_3;
      if (iVar6 < 0) {
         iVar6 = *param_3 - iVar4;
      }

      if (iVar6 < iVar5) {
         local_7c = cf2_stack_getReal(param_1);
         iVar5 = *param_3;
         local_7c = local_7c + local_50;
      }
 else {
         iVar5 = cf2_stack_getReal(param_1);
         local_7c = *param_2;
         iVar5 = iVar5 + iVar4;
      }

   }

   cf2_glyphpath_curveTo(param_4, local_70, local_6c, local_68, local_64, local_60, local_5c);
   cf2_glyphpath_curveTo(param_4, local_58, local_54, local_50, iVar4, local_7c, iVar5);
   *(undefined8*)( param_1 + 0x18 ) = *(undefined8*)( param_1 + 0x10 );
   *param_2 = local_7c;
   *param_3 = iVar5;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void cf2_builder_lineTo(long param_1, undefined1 (*param_2)[16]) {
   undefined1 auVar1[16];
   short sVar2;
   int iVar3;
   long lVar4;
   int *piVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   undefined4 *puVar9;
   lVar4 = *(long*)( param_1 + 0x38 );
   if (*(char*)( lVar4 + 0x58 ) == '\0') {
      auVar1 = *param_2;
      *(undefined1*)( lVar4 + 0x58 ) = 1;
      iVar8 = ps_builder_add_contour_constprop_0(lVar4);
      if (( iVar8 != 0 ) || ( ( lVar6 = *(long*)( lVar4 + 0x18 ) * (uint*)( lVar6 + 8 ) < ( uint )(*(short*)( lVar6 + 0x1a ) + 1 + (int)*(short*)( lVar6 + 0x62 )) && ( iVar8 = FT_GlyphLoader_CheckPoints(lVar6, 1, 0) != 0 ) ) )) {
         piVar5 = *(int**)( param_1 + 0x30 );
         iVar3 = *piVar5;
         goto joined_r0x00107a81;
      }

      lVar6 = *(long*)( lVar4 + 0x28 );
      if (*(char*)( lVar4 + 0x59 ) != '\0') {
         sVar2 = *(short*)( lVar6 + 2 );
         lVar7 = *(long*)( lVar6 + 0x10 );
         puVar9 = (undefined4*)( (long)sVar2 * 0x10 + *(long*)( lVar6 + 8 ) );
         *puVar9 = (int)( auVar1._0_8_ >> 10 );
         puVar9[1] = auVar1._4_4_ >> 10;
         puVar9[2] = (int)( auVar1._8_8_ >> 10 );
         puVar9[3] = auVar1._12_4_ >> 10;
         *(undefined1*)( lVar7 + sVar2 ) = 1;
      }

      *(short*)( lVar6 + 2 ) = *(short*)( lVar6 + 2 ) + 1;
   }

   lVar6 = *(long*)( lVar4 + 0x18 );
   auVar1 = param_2[1];
   if (( ( uint )(*(short*)( lVar6 + 0x1a ) + 1 + (int)*(short*)( lVar6 + 0x62 )) <= *(uint*)( lVar6 + 8 ) ) || ( iVar8 = iVar8 == 0 )) {
      lVar6 = *(long*)( lVar4 + 0x28 );
      if (*(char*)( lVar4 + 0x59 ) != '\0') {
         sVar2 = *(short*)( lVar6 + 2 );
         lVar4 = *(long*)( lVar6 + 0x10 );
         puVar9 = (undefined4*)( (long)sVar2 * 0x10 + *(long*)( lVar6 + 8 ) );
         *puVar9 = (int)( auVar1._0_8_ >> 10 );
         puVar9[1] = auVar1._4_4_ >> 10;
         puVar9[2] = (int)( auVar1._8_8_ >> 10 );
         puVar9[3] = auVar1._12_4_ >> 10;
         *(undefined1*)( lVar4 + sVar2 ) = 1;
      }

      *(short*)( lVar6 + 2 ) = *(short*)( lVar6 + 2 ) + 1;
      return;
   }

   piVar5 = *(int**)( param_1 + 0x30 );
   iVar3 = *piVar5;
   joined_r0x00107a81:if (iVar3 == 0) {
      *piVar5 = iVar8;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void cf2_interpT2CharString(undefined8 *param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6) {
   byte *pbVar1;
   uint *puVar2;
   undefined1 *puVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined8 uVar6;
   code *pcVar7;
   void *__src;
   undefined8 uVar8;
   undefined8 uVar9;
   char cVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   uint uVar14;
   int iVar15;
   undefined4 uVar16;
   undefined4 uVar17;
   uint uVar18;
   uint uVar19;
   undefined4 extraout_var;
   undefined8 *puVar20;
   undefined8 uVar21;
   ulong uVar22;
   int *piVar23;
   long lVar24;
   ulong uVar25;
   long lVar26;
   undefined4 extraout_var_00;
   undefined1(*pauVar27)[16];
   undefined1 uVar28;
   long lVar29;
   long lVar30;
   undefined8 uVar31;
   byte *pbVar32;
   undefined8 *puVar33;
   long lVar34;
   byte bVar35;
   uint uVar36;
   undefined1 *puVar37;
   long *plVar38;
   undefined1 *puVar39;
   undefined4 *puVar40;
   uint *puVar41;
   ulong uVar42;
   ulong uVar43;
   int iVar44;
   byte *pbVar45;
   undefined1 *puVar46;
   long in_FS_OFFSET;
   bool bVar47;
   byte bVar48;
   undefined1 local_6030[24576];
   bVar48 = 0;
   puVar46 = &stack0xffffffffffffffd0;
   do {
      puVar37 = puVar46;
      *(undefined8*)( puVar37 + -0x1000 ) = *(undefined8*)( puVar37 + -0x1000 );
      puVar46 = puVar37 + -0x1000;
   }
 while ( puVar37 + -0x1000 != local_6030 );
   uVar16 = *(undefined4*)( param_1 + 7 );
   uVar17 = *(undefined4*)( puVar37 + 0x5038 );
   *(undefined8**)( puVar37 + -0x14e8 ) = param_1;
   *(undefined8*)( puVar37 + -0x1460 ) = param_3;
   puVar46 = puVar37 + 0x638;
   *(undefined8*)( puVar37 + -0x1458 ) = param_4;
   *(undefined4*)( puVar37 + -0x1418 ) = param_5;
   *(undefined4*)( puVar37 + -0x13fc ) = param_6;
   *(undefined8*)( puVar37 + -0x1478 ) = *(undefined8*)( puVar37 + 0x5040 );
   *(undefined8*)( puVar37 + 0x4ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   lVar29 = param_1[0x1e];
   *(undefined8**)( puVar37 + -0x14b8 ) = param_1 + 1;
   uVar31 = *param_1;
   *(undefined8*)( puVar37 + -0x13b8 ) = __LC7;
   *(undefined8*)( puVar37 + -0x13b0 ) = _UNK_0010cc38;
   *(undefined1(*) [16])( puVar37 + -0x12f8 ) = (undefined1[16])0x0;
   uVar21 = *(undefined8*)( puVar37 + -0x14b8 );
   *(undefined8*)( puVar37 + -0x14d8 ) = uVar31;
   *(undefined8*)( puVar37 + -0x13c8 ) = uVar31;
   *(undefined8*)( puVar37 + -0x13c0 ) = uVar21;
   *(undefined8*)( puVar37 + -5000 ) = uVar31;
   *(undefined8*)( puVar37 + -0x1380 ) = uVar21;
   *(long*)( puVar37 + -0x14d0 ) = lVar29;
   lVar29 = *(long*)( lVar29 + 0x420 );
   *(undefined1(*) [16])( puVar37 + -0x13a8 ) = (undefined1[16])0x0;
   uVar6 = *(undefined8*)( lVar29 + 0x408 );
   *(undefined4*)( puVar37 + -0x1434 ) = uVar16;
   puVar20 = (undefined8*)( puVar37 + -0x1278 );
   for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
   }

   *(undefined8*)( puVar37 + -0x1304 ) = 0;
   *(undefined4*)( puVar37 + -0x12fc ) = 0;
   *(undefined8*)( puVar37 + -0x12e8 ) = 0;
   *(undefined8*)( puVar37 + -0x1398 ) = 0;
   *(undefined8*)( puVar37 + -0x1378 ) = __LC8;
   *(undefined8*)( puVar37 + -0x1370 ) = _UNK_0010cc48;
   *(undefined1**)( puVar37 + -0x1468 ) = puVar37 + -0x12d8;
   *(undefined8*)( puVar37 + -0x12d8 ) = *(undefined8*)( puVar37 + -0x14b8 );
   *(undefined8*)( puVar37 + -0x1348 ) = uVar31;
   *(undefined8*)( puVar37 + -0x1340 ) = uVar21;
   *(undefined8*)( puVar37 + -0x14f8 ) = uVar31;
   *(undefined8*)( puVar37 + -0x14f0 ) = uVar21;
   *(undefined1(*) [16])( puVar37 + -0x12d0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar37 + -0x12c0 ) = (undefined1[16])0x0;
   *(undefined8*)( puVar37 + -0x1358 ) = 0;
   *(undefined8*)( puVar37 + -0x1318 ) = 0;
   *(undefined8*)( puVar37 + -0x12b0 ) = 0;
   *(undefined1(*) [16])( puVar37 + -0x1368 ) = (undefined1[16])0x0;
   *(undefined8*)( puVar37 + -0x1338 ) = __LC8;
   *(undefined8*)( puVar37 + -0x1330 ) = _UNK_0010cc48;
   *(undefined1(*) [16])( puVar37 + -0x1328 ) = (undefined1[16])0x0;
   *(undefined8*)( puVar37 + -0x1500 ) = 0x107c87;
   memset(puVar46, 0, 0x49b8);
   uVar4 = *(undefined4*)( (long)param_1 + 0x2c );
   *(undefined1**)( puVar37 + -0x1420 ) = puVar37 + 0x648;
   uVar5 = *(undefined4*)( (long)param_1 + 0x34 );
   puVar39 = puVar37 + 0x4ec0;
   *(undefined8*)( puVar37 + 0x640 ) = *(undefined8*)( puVar37 + -0x1460 );
   puVar3 = puVar37 + 0x3698;
   uVar28 = *(undefined1*)( param_1 + 0x20 );
   *(undefined1**)( puVar37 + -0x1428 ) = puVar3;
   uVar31 = *(undefined8*)( puVar37 + -0x14f8 );
   uVar8 = *(undefined8*)( puVar37 + -0x14f0 );
   for (int i = 0; i < 3; i++) {
      *(undefined1**)( puVar37 + ( -6184*i + 13984 ) ) = puVar3;
   }

   puVar37[0x36b1] = uVar28;
   uVar21 = **(undefined8**)( puVar37 + -0x1458 );
   uVar9 = ( *(undefined8**)( puVar37 + -0x1458 ) )[1];
   *(undefined1**)( puVar37 + -0x1430 ) = puVar39;
   *(undefined1**)( puVar37 + 0x36a8 ) = puVar39;
   puVar37[0x1e89] = uVar28;
   *(undefined1**)( puVar37 + 0x1e80 ) = puVar39;
   puVar37[0x661] = uVar28;
   *(undefined1**)( puVar37 + 0x658 ) = puVar39;
   *(ulong*)( puVar37 + 0x4ef8 ) = CONCAT44(uVar5, uVar4);
   *(undefined8**)( puVar37 + 0x638 ) = param_1;
   *(undefined8*)( puVar37 + 0x4ed0 ) = 0x10;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( puVar37 + ( -6184*i + 14004 ) ) = uVar16;
      *(undefined8**)( puVar37 + ( -6184*i + 13976 ) ) = param_1;
   }

   *(undefined4*)( puVar37 + 0x4f00 ) = uVar16;
   *(undefined8*)( puVar37 + 0x4ec0 ) = uVar31;
   *(undefined8*)( puVar37 + 0x4ec8 ) = uVar8;
   *(undefined8*)( puVar37 + -0x14f8 ) = uVar21;
   *(undefined8*)( puVar37 + -0x14f0 ) = uVar9;
   *(undefined8*)( puVar37 + 0x4f08 ) = uVar21;
   *(undefined8*)( puVar37 + 0x4f10 ) = uVar9;
   *(undefined1**)( puVar37 + -0x1470 ) = puVar37 + -0x1348;
   *(undefined8**)( puVar37 + 0x4f40 ) = param_1 + 0x27;
   uVar28 = *(undefined1*)( (long)param_1 + 0x101 );
   *(undefined1**)( puVar37 + -0x1440 ) = puVar37 + -5000;
   puVar37[0x4f1a] = uVar28;
   *(undefined1**)( puVar37 + 0x4f20 ) = puVar37 + -5000;
   *(undefined8*)( puVar37 + 0x4f28 ) = *(undefined8*)( puVar37 + -0x1470 );
   uVar21 = *(undefined8*)( (long)param_1 + 300 );
   puVar37[0x4f1b] = 1;
   iVar15 = (int)( (ulong)uVar21 >> 0x20 );
   *(undefined8*)( puVar37 + 0x4f30 ) = *(undefined8*)( puVar37 + -0x1468 );
   *(undefined4*)( puVar37 + 0x4f38 ) = uVar17;
   *(undefined4*)( puVar37 + 0x4f54 ) = 0x199a;
   if (iVar15 < 1) {
      iVar15 = -iVar15;
   }

   *(undefined4*)( puVar37 + -0x148c ) = 0x30;
   *(undefined8*)( puVar37 + 0x4f48 ) = uVar21;
   iVar44 = (int)uVar21;
   if (iVar44 < 1) {
      iVar44 = -iVar44;
   }

   lVar29 = *(long*)( puVar37 + -0x14d0 );
   if (iVar15 < iVar44) {
      iVar15 = iVar44;
   }

   cVar10 = *(char*)( (long)param_1 + 0xd );
   *(int*)( puVar37 + 0x4f50 ) = iVar15 * 2;
   lVar34 = *(long*)( lVar29 + 0x420 );
   puVar37[-0x13ed] = cVar10 != '\0';
   **(int**)( puVar37 + -0x1478 ) = (int)*(undefined8*)( lVar34 + 0x400 ) << 0x10;
   if (cVar10 != '\0') {
      *(undefined4*)( puVar37 + -0x148c ) = *(undefined4*)( *(long*)( lVar29 + 0x418 ) + 0x7a8 );
   }

   *(undefined8*)( puVar37 + -0x14f8 ) = uVar31;
   *(undefined8*)( puVar37 + -0x14f0 ) = uVar8;
   *(undefined1**)( puVar37 + -0x1450 ) = puVar37 + -0x13e8;
   *(undefined8*)( puVar37 + -0x1500 ) = 0x107ecc;
   puVar20 = (undefined8*)ft_mem_qalloc(*(undefined8*)( puVar37 + -0x14d8 ), 0x28, puVar37 + -0x13e8);
   uVar21 = *(undefined8*)( puVar37 + -0x14f0 );
   if (*(int*)( puVar37 + -0x13e8 ) == 0) {
      uVar16 = *(undefined4*)( puVar37 + -0x148c );
      uVar31 = *(undefined8*)( puVar37 + -0x14d8 );
      *puVar20 = *(undefined8*)( puVar37 + -0x14f8 );
      puVar20[1] = uVar21;
      *(undefined8*)( puVar37 + -0x1500 ) = 0x107f08;
      uVar21 = ft_mem_qrealloc(uVar31, 8, 0, uVar16, 0, *(undefined8*)( puVar37 + -0x1450 ));
      iVar15 = *(int*)( puVar37 + -0x13e8 );
      puVar20[2] = uVar21;
      if (iVar15 == 0) {
         uVar16 = *(undefined4*)( puVar37 + -0x148c );
         puVar20[3] = uVar21;
         *(undefined4*)( puVar20 + 4 ) = uVar16;
         *(undefined8*)( puVar37 + -0x1500 ) = 0x107f3b;
         cVar10 = cf2_arrstack_setNumElements(puVar37 + -0x13c8, 0x11);
         if (cVar10 != '\0') {
            *(undefined8*)( puVar37 + -0x13a8 ) = 0x11;
         }

         lVar29 = *(long*)( puVar37 + -0x14e8 );
         puVar33 = *(undefined8**)( puVar37 + -0x1398 );
         iVar15 = *(int*)( lVar29 + 8 );
         *(undefined8**)( puVar37 + -0x1480 ) = puVar33;
         *(undefined8*)( puVar37 + -0x14d8 ) = *(undefined8*)( puVar37 + -0x13c8 );
         if (iVar15 == 0) {
            uVar21 = *param_2;
            uVar31 = param_2[1];
            *(undefined4*)( puVar37 + -0x14a4 ) = 0;
            uVar22 = 0;
            puVar37[-0x14c8] = 0;
            *puVar33 = uVar21;
            puVar33[1] = uVar31;
            uVar21 = param_2[2];
            uVar31 = param_2[3];
            *(int*)( puVar37 + -0x1400 ) = (int)uVar6 << 0x10;
            *(undefined8*)( puVar37 + -0x14f8 ) = uVar21;
            *(undefined8*)( puVar37 + -0x14f0 ) = uVar31;
            *(undefined4*)( puVar37 + -0x1498 ) = 0;
            *(undefined8**)( puVar37 + -0x14f8 ) = puVar33;
            *(undefined4*)( puVar37 + -0x1414 ) = 0;
            *(undefined4*)( puVar37 + -0x14e0 ) = 20000000;
            puVar37[-0x1435] = 0;
            puVar33[2] = uVar21;
            puVar33[3] = uVar31;
            cVar10 = *(char*)( lVar29 + 0xc );
            pbVar45 = (byte*)puVar33[2];
            pbVar32 = (byte*)puVar33[3];
            uVar19 = 0;
            LAB_00107fe0:if (pbVar32 < pbVar45) goto LAB_0010813f;
            LAB_00107fe9:if (*(int*)( puVar37 + -0x14a4 ) != 0) goto LAB_001083a8;
            if (cVar10 != '\0') {
               if (puVar37[-0x1435] != '\0') {
                  uVar36 = 0xe;
                  if (*(int*)( puVar37 + -0x1498 ) < 1) goto LAB_0010833d;
                  *(undefined4*)( puVar37 + -0x1498 ) = 0;
                  uVar36 = 0xe;
                  puVar37[-0x14c8] = 0;
                  goto LAB_001081a0;
               }

               uVar36 = 0xe;
               goto LAB_00108437;
            }

            if ((int)uVar22 != 0) goto LAB_00108205;
            piVar23 = (int*)( puVar37 + -0x14e0 );
            *piVar23 = *piVar23 + -1;
            if (*piVar23 == 0) goto LAB_001083c8;
            switchD_001081c9_caseD_e:if (( cVar10 == '\0' ) || ( puVar37[-0x1435] != '\0' )) {
               if (( ( ( uint )((long)( puVar20[3] - puVar20[2] ) >> 3) & 0xfffffffb ) == 1 ) && ( puVar37[-0x13ed] == '\0' )) {
                  *(undefined8*)( puVar37 + -0x1500 ) = 0x109e9e;
                  iVar15 = cf2_stack_getReal(puVar20, 0);
                  **(int**)( puVar37 + -0x1478 ) = iVar15 + *(int*)( puVar37 + -0x1400 );
               }

               puVar37[-0x13ed] = 1;
               if (*(char*)( *(long*)( puVar37 + -0x14d0 ) + 0x438 ) == '\0') {
                  if (puVar37[0x4f18] != '\0') {
                     puVar37[0x4f19] = 1;
                     *(undefined8*)( puVar37 + -0x1500 ) = 0x109ed4;
                     cf2_glyphpath_lineTo(puVar46, *(undefined4*)( puVar37 + 0x4f98 ), *(undefined4*)( puVar37 + 0x4fa0 ));
                     if (puVar37[0x4fa8] != '\0') {
                        *(undefined8*)( puVar37 + -0x1500 ) = 0x109f32;
                        cf2_glyphpath_pushPrevElem(puVar46, *(undefined8*)( puVar37 + -0x1420 ), puVar37 + 0x4f58, *(undefined8*)( puVar37 + 0x4f68 ), *(undefined8*)( puVar37 + 0x4f70 ), 1);
                     }

                     puVar37[0x4f1b] = 1;
                     *(undefined2*)( puVar37 + 0x4f18 ) = 0;
                     puVar37[0x4fa8] = 0;
                  }

                  lVar29 = *(long*)( puVar37 + -0x14e8 );
                  if (*(short*)( lVar29 + 0xc ) == 0) {
                     if (( uint )((long)( puVar20[3] - puVar20[2] ) >> 3) < 2) goto LAB_00109dc4;
                     uVar18 = 0x12;
                     if (puVar37[-0x1418] == '\0') {
                        *(undefined8*)( puVar37 + -0x1500 ) = 0x1096e8;
                        cf2_stack_popInt(puVar20);
                        *(undefined8*)( puVar37 + -0x1500 ) = 0x1096ef;
                        uVar16 = cf2_stack_popInt();
                        *(undefined8*)( puVar37 + -0x1500 ) = 0x1096f7;
                        uVar19 = cf2_stack_popFixed();
                        *(uint*)( puVar37 + 0x5038 ) = uVar19;
                        *(undefined8*)( puVar37 + -0x1500 ) = 0x109706;
                        uVar17 = cf2_stack_popFixed();
                        *(undefined4*)( puVar37 + -0x13fc ) = uVar17;
                        *(undefined8*)( puVar37 + -0x1500 ) = 0x109721;
                        uVar18 = cf2_getSeacComponent(*(undefined8*)( puVar37 + -0x14d0 ));
                        if (uVar18 == 0) {
                           *(undefined1**)( puVar37 + -0x1500 ) = puVar37 + -0x13ec;
                           *(ulong*)( puVar37 + -0x1508 ) = (ulong)uVar19;
                           uVar21 = *(undefined8*)( puVar37 + -0x1450 );
                           *(undefined8*)( puVar37 + -0x1510 ) = 0x10976d;
                           cf2_interpT2CharString(*(undefined8*)( puVar37 + -0x14e8 ), uVar21, *(undefined8*)( puVar37 + -0x1460 ), *(undefined8*)( puVar37 + -0x1458 ), 1, uVar17);
                           lVar29 = *(long*)( puVar37 + -0x14d0 );
                           uVar31 = *(undefined8*)( lVar29 + 8 );
                           pcVar7 = *(code**)( lVar29 + 0x480 );
                           *(undefined8*)( puVar37 + -0x1510 ) = 0x109790;
                           ( *pcVar7 )(uVar31, puVar37 + -0x13e0, *(long*)( puVar37 + -0x13d8 ) - *(long*)( puVar37 + -0x13e0 ));
                           *(undefined8*)( puVar37 + -0x1510 ) = 0x10979e;
                           uVar18 = cf2_getSeacComponent(lVar29, uVar16, uVar21);
                           if (uVar18 == 0) {
                              *(undefined1**)( puVar37 + -0x1500 ) = puVar37 + -0x13ec;
                              *(undefined8*)( puVar37 + -0x1508 ) = 0;
                              lVar29 = *(long*)( puVar37 + -0x14e8 );
                              *(undefined8*)( puVar37 + -0x1510 ) = 0x10ab9a;
                              cf2_interpT2CharString(lVar29, *(undefined8*)( puVar37 + -0x1450 ), *(undefined8*)( puVar37 + -0x1460 ), *(undefined8*)( puVar37 + -0x1458 ), 1, 0);
                              uVar21 = *(undefined8*)( *(long*)( puVar37 + -0x14d0 ) + 8 );
                              pcVar7 = *(code**)( *(long*)( puVar37 + -0x14d0 ) + 0x480 );
                              *(undefined8*)( puVar37 + -0x1510 ) = 0x10abbc;
                              ( *pcVar7 )(uVar21, puVar37 + -0x13e0, *(long*)( puVar37 + -0x13d8 ) - *(long*)( puVar37 + -0x13e0 ));
                              iVar15 = *(int*)( lVar29 + 8 );
                              goto LAB_001081f9;
                           }

                        }

                     }

                     LAB_001097ac:iVar15 = *(int*)( *(long*)( puVar37 + -0x14e8 ) + 8 );
                     goto LAB_001081f9;
                  }

               }
 else {
                  LAB_00109dc4:lVar29 = *(long*)( puVar37 + -0x14e8 );
               }

               iVar15 = *(int*)( lVar29 + 8 );
               uVar18 = 0;
               goto LAB_001081f9;
            }

            *(undefined8*)( puVar37 + -0x1500 ) = 0x108040;
            cf2_glyphpath_moveTo(puVar46, *(undefined4*)( puVar37 + -0x13fc ), *(undefined4*)( puVar37 + 0x5038 ));
            iVar15 = *(int*)( puVar37 + -0x14a4 );
            *(undefined1(*) [16])( puVar37 + -0x12d0 ) = (undefined1[16])0x0;
            *(undefined8*)( puVar37 + -0x1328 ) = 0;
            *(undefined8*)( puVar37 + -0x1368 ) = 0;
            *(undefined8*)( puVar37 + -0x12b0 ) = 0;
            *(undefined8*)( puVar37 + -0x12d8 ) = *(undefined8*)( puVar37 + -0x14b8 );
            puVar37[-0x12cf] = 1;
            *(undefined1(*) [16])( puVar37 + -0x12c0 ) = (undefined1[16])0x0;
            if (0 < iVar15) {
               lVar29 = *(long*)( puVar37 + -0x13b8 );
               uVar22 = (long)iVar15 - 1;
               uVar25 = *(ulong*)( puVar37 + -0x13a8 );
               piVar23 = *(int**)( puVar37 + -0x13c0 );
               lVar34 = uVar22 * lVar29 + *(long*)( puVar37 + -0x1480 );
               do {
                  lVar24 = lVar34;
                  if (uVar25 <= uVar22) {
                     if (( piVar23 != (int*)0x0 ) && ( *piVar23 == 0 )) {
                        *piVar23 = 0x82;
                     }

                     lVar24 = *(long*)( puVar37 + -0x1480 );
                  }

                  uVar22 = uVar22 - 1;
                  lVar34 = lVar34 - lVar29;
               }
 while ( ( (long)iVar15 + -2 ) - ( ulong )(iVar15 - 1) != uVar22 );
               *(long*)( puVar37 + -0x14f8 ) = lVar24;
               *(undefined4*)( puVar37 + -0x14a4 ) = 0;
            }

            lVar29 = *(long*)( puVar37 + -0x14f8 );
            uVar21 = puVar20[2];
            puVar37[-0x1435] = 1;
            pbVar32 = *(byte**)( lVar29 + 8 );
            pbVar45 = *(byte**)( lVar29 + 0x10 );
            *(byte**)( lVar29 + 0x18 ) = pbVar32;
            uVar19 = *(uint*)( *(long*)( puVar37 + -0x14e8 ) + 8 );
            cVar10 = *(char*)( *(long*)( puVar37 + -0x14e8 ) + 0xc );
            uVar22 = (ulong)uVar19;
            LAB_00108132:puVar20[3] = uVar21;
            LAB_00108136:while (true) {
               if (pbVar45 <= pbVar32) goto LAB_00107fe9;
               LAB_0010813f:*(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 ) = pbVar32 + 1;
               bVar35 = *pbVar32;
               uVar36 = (uint)bVar35;
               if (( bVar35 != 0xb ) && ( bVar35 != 0xe )) break;
               if (*(char*)( *(long*)( puVar37 + -0x14e8 ) + 0xd ) == '\0') {
                  if (cVar10 != '\0') {
                     if (puVar37[-0x1435] == '\0') {
                        LAB_001083eb:if (( bVar35 != 0xd ) && ( bVar35 != 10 )) {
                           if (( byte )(bVar35 - 0xb) < 2) goto LAB_0010833d;
                           goto LAB_00108437;
                        }

                     }

                     LAB_00108400:if (( 0 < *(int*)( puVar37 + -0x1498 ) ) && ( ( 2 < ( byte )((byte)uVar36 - 10) && ( (byte)uVar36 < 0x20 ) ) )) goto LAB_0010818e;
                     goto LAB_0010833d;
                  }

                  goto LAB_001081a0;
               }

               if (cVar10 != '\0') {
                  if (puVar37[-0x1435] != '\0') {
                     uVar36 = 0;
                     if (0 < *(int*)( puVar37 + -0x1498 )) {
                        *(undefined4*)( puVar37 + -0x1498 ) = 0;
                        uVar36 = 0;
                        puVar37[-0x14c8] = 0;
                        goto LAB_001081a0;
                     }

                     LAB_0010833d:if (puVar37[-0x14c8] != '\0') {
                        puVar37[-0x14c8] = 0x1f < (byte)uVar36 || (byte)uVar36 == 0xc;
                     }

                     goto LAB_001081a0;
                  }

                  uVar36 = 0;
                  LAB_00108437:if (( (byte)uVar36 == 0xe ) || ( 0x1f < (byte)uVar36 )) goto LAB_00108400;
                  uVar21 = puVar20[2];
                  puVar37[-0x1435] = 0;
                  puVar20[3] = uVar21;
                  pbVar32 = *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 );
                  goto LAB_00107fe0;
               }

               if ((int)uVar22 != 0) goto LAB_00108205;
               piVar23 = (int*)( puVar37 + -0x14e0 );
               *piVar23 = *piVar23 + -1;
               if (*piVar23 == 0) goto LAB_001083c8;
               switchD_001081c9_caseD_0:uVar22 = 0;
               pbVar32 = *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 );
               puVar20[3] = puVar20[2];
            }
;
            if (cVar10 != '\0') {
               if (puVar37[-0x1435] != '\0') goto LAB_00108400;
               if (( bVar35 & 0xfd ) != 1) goto LAB_001083eb;
               if (*(int*)( puVar37 + -0x1498 ) < 1) goto LAB_0010833d;
               LAB_0010818e:*(undefined4*)( puVar37 + -0x1498 ) = 0;
               puVar37[-0x14c8] = 0;
            }

            LAB_001081a0:if ((int)uVar22 != 0) goto LAB_00108205;
            piVar23 = (int*)( puVar37 + -0x14e0 );
            *piVar23 = *piVar23 + -1;
            if (*piVar23 == 0) goto LAB_001083c8;
            bVar35 = (byte)uVar36;
            uVar18 = 0;
            switch (uVar36) {
               case 0:
               case 2:
               case 0x11:
          goto switchD_001081c9_caseD_0;
               case 1:
               case 0x12:
          if ((cVar10 != '\0') || (puVar37[-0x12d0] == '\0')) {
            uVar31 = *(undefined8 *)(puVar37 + -0x1478);
            uVar21 = *(undefined8 *)(puVar37 + -0x1440);
LAB_001089a5:
            lVar29 = *(long *)(puVar37 + -0x14e8);
            *(undefined8 *)(puVar37 + -0x1500) = 0x1089b5;
            cf2_doStems(lVar29,puVar20,uVar21,uVar31,puVar37 + -0x13ed);
            if (*(char *)(*(long *)(puVar37 + -0x14d0) + 0x438) != '\0') goto LAB_001097ac;
            uVar19 = *(uint *)(lVar29 + 8);
            uVar22 = (ulong)uVar19;
            cVar10 = *(char *)(lVar29 + 0xc);
            pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
            puVar20[3] = puVar20[2];
            goto LAB_00108136;
          }
          break;
               case 3:
               case 0x17:
          if ((cVar10 != '\0') || (puVar37[-0x12d0] == '\0')) {
            uVar31 = *(undefined8 *)(puVar37 + -0x1478);
            uVar21 = *(undefined8 *)(puVar37 + -0x1470);
            goto LAB_001089a5;
          }
          break;
               case 4:
          lVar29 = puVar20[2];
          if ((1 < (uint)(puVar20[3] - lVar29 >> 3)) && (puVar37[-0x13ed] == '\0')) {
            *(undefined8 *)(puVar37 + -0x1500) = 0x1098c3;
            iVar15 = cf2_stack_getReal(puVar20,0);
            **(int **)(puVar37 + -0x1478) = iVar15 + *(int *)(puVar37 + -0x1400);
          }
          puVar37[-0x13ed] = 1;
          if (*(char *)(*(long *)(puVar37 + -0x14d0) + 0x438) != '\0') goto LAB_001097ac;
          *(undefined8 *)(puVar37 + -0x1500) = 0x108f24;
          iVar11 = cf2_stack_popFixed(puVar20);
          iVar44 = *(int *)(puVar37 + 0x5038);
          *(int *)(puVar37 + 0x5038) = iVar11 + iVar44;
          if (*(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a0) == 0) {
            iVar15 = *(int *)(puVar37 + -0x13fc);
            uVar22 = (ulong)(uint)(iVar11 + iVar44);
            goto LAB_0010916e;
          }
LAB_00108f45:
          pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
          uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
          uVar22 = (ulong)uVar19;
          cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
          puVar20[3] = lVar29;
          goto LAB_00108136;
               case 5:
          lVar29 = puVar20[2];
          uVar36 = (uint)(puVar20[3] - lVar29 >> 3);
          if (uVar36 != 0) {
            iVar15 = *(int *)(puVar37 + -0x13fc);
            iVar44 = *(int *)(puVar37 + 0x5038);
            uVar19 = 0;
            do {
              *(undefined8 *)(puVar37 + -0x1500) = 0x108e7b;
              iVar11 = cf2_stack_getReal(puVar20,uVar19);
              uVar19 = uVar19 + 2;
              iVar15 = iVar15 + iVar11;
              *(int *)(puVar37 + -0x13fc) = iVar15;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108e92;
              iVar11 = cf2_stack_getReal();
              iVar44 = iVar44 + iVar11;
              *(int *)(puVar37 + 0x5038) = iVar44;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108ea7;
              cf2_glyphpath_lineTo(puVar46,iVar15,iVar44);
            } while (uVar19 < uVar36);
            goto LAB_00108eac;
          }
          goto LAB_00108ec6;
               case 6:
               case 7:
          lVar29 = puVar20[2];
          bVar47 = bVar35 == 6;
          iVar15 = (int)(puVar20[3] - lVar29 >> 3);
          if (iVar15 != 0) {
            *(undefined8 **)(puVar37 + -0x14a0) = puVar20;
            iVar44 = *(int *)(puVar37 + -0x13fc);
            iVar12 = 0;
            iVar11 = *(int *)(puVar37 + 0x5038);
            do {
              *(undefined8 *)(puVar37 + -0x1500) = 0x108a64;
              iVar13 = cf2_stack_getReal(*(undefined8 *)(puVar37 + -0x14a0),iVar12);
              if (bVar47) {
                iVar44 = iVar44 + iVar13;
                *(int *)(puVar37 + -0x13fc) = iVar44;
              }
              else {
                iVar11 = iVar11 + iVar13;
                *(int *)(puVar37 + 0x5038) = iVar11;
              }
              iVar12 = iVar12 + 1;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108a4b;
              cf2_glyphpath_lineTo(puVar46,iVar44,iVar11);
              bVar47 = (bool)(bVar47 ^ 1);
            } while (iVar12 != iVar15);
            puVar20 = *(undefined8 **)(puVar37 + -0x14a0);
LAB_00108eac:
            lVar29 = puVar20[2];
            pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            uVar22 = (ulong)uVar19;
          }
LAB_00108ec6:
          lVar34 = *(long *)(puVar37 + -0x14f8);
          puVar20[3] = lVar29;
          pbVar32 = *(byte **)(lVar34 + 0x18);
          goto LAB_00107fe0;
               case 8:
               case 0x18:
          uVar19 = (uint)((long)(puVar20[3] - puVar20[2]) >> 3);
          if (uVar19 < 6) {
            uVar18 = 0;
          }
          else {
            puVar37[-0x1488] = bVar35;
            iVar15 = *(int *)(puVar37 + -0x13fc);
            uVar22 = (ulong)*(uint *)(puVar37 + 0x5038);
            *(undefined1 **)(puVar37 + -0x14a0) = puVar46;
            uVar36 = 6;
            do {
              uVar18 = uVar36;
              *(undefined8 *)(puVar37 + -0x1500) = 0x1088bb;
              iVar44 = cf2_stack_getReal(puVar20,uVar18 - 6);
              uVar25 = (ulong)(uint)(iVar44 + iVar15);
              *(undefined8 *)(puVar37 + -0x1500) = 0x1088c7;
              iVar15 = cf2_stack_getReal();
              uVar43 = (ulong)(uint)(iVar15 + (int)uVar22);
              *(undefined8 *)(puVar37 + -0x1500) = 0x1088d3;
              iVar44 = cf2_stack_getReal();
              iVar44 = iVar44 + (int)uVar25;
              *(undefined8 *)(puVar37 + -0x1500) = 0x1088df;
              iVar11 = cf2_stack_getReal();
              iVar11 = iVar11 + (int)uVar43;
              *(undefined8 *)(puVar37 + -0x1500) = 0x1088eb;
              iVar15 = cf2_stack_getReal();
              iVar15 = iVar15 + iVar44;
              *(undefined8 *)(puVar37 + -0x1500) = 0x1088f7;
              iVar12 = cf2_stack_getReal();
              uVar22 = (ulong)(uint)(iVar12 + iVar11);
              *(ulong *)(puVar37 + -0x1508) = uVar22;
              *(undefined8 *)(puVar37 + -0x1510) = 0x108916;
              cf2_glyphpath_curveTo
                        (*(undefined8 *)(puVar37 + -0x14a0),uVar25 & 0xffffffff,uVar43 & 0xffffffff,
                         iVar44);
              *(int *)(puVar37 + -0x13fc) = iVar15;
              *(int *)(puVar37 + 0x5038) = iVar12 + iVar11;
              uVar36 = uVar18 + 6;
            } while (uVar18 + 6 <= uVar19);
            uVar36 = (uint)(byte)puVar37[-0x1488];
            puVar46 = *(undefined1 **)(puVar37 + -0x14a0);
          }
          if ((char)uVar36 == '\x18') {
            *(undefined8 *)(puVar37 + -0x1500) = 0x109843;
            iVar15 = cf2_stack_getReal(puVar20,uVar18);
            uVar22 = (ulong)(uint)(iVar15 + *(int *)(puVar37 + -0x13fc));
            *(int *)(puVar37 + -0x13fc) = iVar15 + *(int *)(puVar37 + -0x13fc);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10985d;
            iVar44 = cf2_stack_getReal();
            iVar15 = *(int *)(puVar37 + 0x5038);
            *(int *)(puVar37 + 0x5038) = iVar44 + iVar15;
            *(undefined8 *)(puVar37 + -0x1500) = 0x109878;
            cf2_glyphpath_lineTo(puVar46,uVar22 & 0xffffffff,iVar44 + iVar15);
          }
          goto LAB_0010894b;
               case 9:
          if (cVar10 != '\0') {
            if (puVar37[0x4f18] != '\0') {
              puVar37[0x4f19] = 1;
              *(undefined8 *)(puVar37 + -0x1500) = 0x1099ad;
              cf2_glyphpath_lineTo
                        (puVar46,*(undefined4 *)(puVar37 + 0x4f98),*(undefined4 *)(puVar37 + 0x4fa0)
                        );
              if (puVar37[0x4fa8] != '\0') {
                *(undefined8 *)(puVar37 + -0x1500) = 0x109d02;
                cf2_glyphpath_pushPrevElem
                          (puVar46,*(undefined8 *)(puVar37 + -0x1420),puVar37 + 0x4f58,
                           *(undefined8 *)(puVar37 + 0x4f68),*(undefined8 *)(puVar37 + 0x4f70));
              }
              puVar37[0x4f1b] = 1;
              *(undefined2 *)(puVar37 + 0x4f18) = 0;
              puVar37[0x4fa8] = 0;
              pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              uVar22 = (ulong)uVar19;
            }
            puVar37[-0x13ed] = 1;
          }
          break;
               case 10:
               case 0x1d:
          if (0x10 < *(int *)(puVar37 + -0x14a4)) goto LAB_001083c8;
          uVar22 = (long)*(int *)(puVar37 + -0x14a4) + 1;
          if (*(ulong *)(puVar37 + -0x13a8) <= uVar22) {
            piVar23 = *(int **)(puVar37 + -0x13c0);
            if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
              *piVar23 = 0x82;
            }
            uVar22 = 0;
          }
          *(ulong *)(puVar37 + -0x14f8) =
               uVar22 * *(long *)(puVar37 + -0x13b8) + *(long *)(puVar37 + -0x1480);
          *(undefined8 *)(puVar37 + -0x1500) = 0x1087c6;
          iVar15 = cf2_stack_popInt(puVar20);
          if ((*(char *)(*(long *)(puVar37 + -0x14e8) + 0xc) != '\0') &&
             (*(long *)(*(long *)(puVar37 + -0x14d0) + 0x4a0) != 0)) {
            *(undefined8 *)(puVar37 + -0x1500) = 0x1087e9;
            piVar23 = (int *)ft_hash_num_lookup();
            iVar15 = -1;
            if (piVar23 != (int *)0x0) {
              iVar15 = *piVar23;
            }
          }
          pauVar27 = *(undefined1 (**) [16])(puVar37 + -0x14f8);
          *pauVar27 = (undefined1  [16])0x0;
          pauVar27[1] = (undefined1  [16])0x0;
          lVar29 = *(long *)(puVar37 + -0x14d0);
          if (bVar35 == 0x1d) {
            uVar19 = iVar15 + *(int *)(lVar29 + 0x44c);
            if (*(uint *)(lVar29 + 0x444) <= uVar19) goto LAB_001092ab;
            lVar29 = *(long *)(puVar37 + -0x14f8);
            lVar34 = *(long *)(*(long *)(puVar37 + -0x14d0) + 0x458);
            pbVar32 = *(byte **)(lVar34 + (ulong)uVar19 * 8);
            *(byte **)(lVar29 + 0x18) = pbVar32;
            *(byte **)(lVar29 + 8) = pbVar32;
            pbVar45 = *(byte **)(lVar34 + (ulong)(uVar19 + 1) * 8);
            *(byte **)(lVar29 + 0x10) = pbVar45;
          }
          else {
            uVar19 = iVar15 + *(int *)(lVar29 + 0x448);
            if (*(uint *)(lVar29 + 0x440) <= uVar19) goto LAB_001092ab;
            lVar29 = *(long *)(puVar37 + -0x14d0);
            lVar34 = *(long *)(lVar29 + 0x450);
            pbVar32 = *(byte **)(lVar34 + (ulong)uVar19 * 8);
            *(byte **)(*(long *)(puVar37 + -0x14f8) + 8) = pbVar32;
            if (*(char *)(lVar29 + 0x5c) == '\0') {
              pbVar45 = *(byte **)(lVar34 + (ulong)(uVar19 + 1) * 8);
            }
            else if (*(long *)(lVar29 + 0x498) == 0) {
              lVar29 = (long)*(int *)(*(long *)(puVar37 + -0x14d0) + 0x490);
              if (*(int *)(*(long *)(puVar37 + -0x14d0) + 0x490) < 0) {
                lVar29 = 0;
              }
              pbVar32 = pbVar32 + lVar29;
              *(byte **)(*(long *)(puVar37 + -0x14f8) + 8) = pbVar32;
              pbVar45 = *(byte **)(lVar34 + (ulong)(uVar19 + 1) * 8);
            }
            else {
              pbVar45 = (byte *)0x0;
              if (pbVar32 != (byte *)0x0) {
                pbVar45 = pbVar32 + *(uint *)(*(long *)(lVar29 + 0x498) + (ulong)uVar19 * 4);
              }
            }
            lVar29 = *(long *)(puVar37 + -0x14f8);
            *(byte **)(lVar29 + 0x10) = pbVar45;
            *(byte **)(lVar29 + 0x18) = pbVar32;
          }
          *(int *)(puVar37 + -0x14a4) = *(int *)(puVar37 + -0x14a4) + 1;
          uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
          cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
          uVar22 = (ulong)uVar19;
          goto LAB_00107fe0;
               case 0xb:
          goto switchD_001081c9_caseD_b;
               case 0xc:
          pbVar1 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
          if (pbVar1 < pbVar45) {
            pbVar32 = pbVar1 + 1;
            *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18) = pbVar32;
            bVar35 = *pbVar1;
            if (bVar35 == 0x23) {
              *(undefined8 *)(puVar37 + -0x1500) = 0x109933;
              cf2_doFlex(puVar20,puVar37 + -0x13fc,puVar37 + 0x5038,puVar46,readFromStack_2);
              uVar21 = puVar20[2];
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              uVar22 = (ulong)uVar19;
              goto LAB_00108132;
            }
            if (0x23 < bVar35) {
              if ((bVar35 == 0x24) || (bVar35 == 0x25)) {
LAB_00109059:
                *(undefined8 *)(puVar37 + -0x1500) = 0x10906c;
                cf2_doFlex(puVar20,puVar37 + -0x13fc,puVar37 + 0x5038,puVar46);
                goto LAB_00108953;
              }
LAB_001094e9:
              uVar21 = puVar20[2];
              uVar22 = (ulong)uVar19;
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              goto LAB_00108132;
            }
            if (0x1a < (byte)(bVar35 - 8)) goto LAB_001094d5;
            if ((0x182082100U >> ((ulong)bVar35 & 0x3f) & 1) != 0) {
              uVar21 = puVar20[2];
              goto LAB_00108132;
            }
            if (bVar35 == 0x22) goto LAB_00109059;
          }
          else {
            piVar23 = (int *)**(undefined8 **)(puVar37 + -0x14f8);
            if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
              *piVar23 = 0x55;
            }
            bVar35 = 0;
          }
LAB_001094d5:
          if (*(char *)(*(long *)(puVar37 + -0x14e8) + 0xd) != '\0') {
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            goto LAB_001094e9;
          }
          if (cVar10 == '\0') {
            switch(bVar35) {
            case 3:
              goto switchD_00109e91_caseD_3;
            case 4:
              goto switchD_00109e91_caseD_4;
            case 5:
              goto switchD_00109e91_caseD_5;
            case 9:
              goto switchD_00109e91_caseD_9;
            case 10:
              goto switchD_00109e91_caseD_a;
            case 0xb:
              goto switchD_00109e91_caseD_b;
            case 0xc:
              goto switchD_00109e91_caseD_c;
            case 0xe:
              goto switchD_00109e91_caseD_e;
            case 0xf:
              goto switchD_00109e91_caseD_f;
            case 0x10:
            case 0x11:
              goto switchD_00109de6_caseD_10;
            case 0x12:
              goto switchD_00109e91_caseD_12;
            case 0x14:
              goto switchD_00109e91_caseD_14;
            case 0x15:
              goto switchD_00109e91_caseD_15;
            case 0x16:
              goto switchD_00109e91_caseD_16;
            case 0x17:
              goto switchD_00109e91_caseD_17;
            case 0x18:
              goto switchD_00109e91_caseD_18;
            case 0x1a:
              goto switchD_00109e91_caseD_1a;
            case 0x1b:
              goto switchD_00109e91_caseD_1b;
            case 0x1c:
              goto switchD_00109e91_caseD_1c;
            case 0x1d:
              goto switchD_00109e91_caseD_1d;
            case 0x1e:
              goto switchD_00109e91_caseD_1e;
            }
            goto switchD_00109e91_caseD_0;
          }
          if ((0 < *(int *)(puVar37 + -0x1498)) && (bVar35 != 0x11)) {
            uVar21 = puVar20[2];
            *(undefined4 *)(puVar37 + -0x1498) = 0;
            pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            uVar22 = (ulong)uVar19;
            goto LAB_00108132;
          }
          switch(bVar35) {
          default:
            goto switchD_00109e91_caseD_0;
          case 1:
          case 2:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a8df;
            cf2_stack_getReal(puVar20,0);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a8ec;
            cf2_stack_getReal();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a8f9;
            cf2_stack_getReal();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a906;
            cf2_stack_getReal();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a919;
            cf2_stack_setReal();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a923;
            cf2_stack_getReal();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a935;
            cf2_stack_setReal();
            if (bVar35 == 1) {
              uVar21 = *(undefined8 *)(puVar37 + -0x1470);
            }
            else {
              uVar21 = *(undefined8 *)(puVar37 + -0x1440);
            }
            uVar31 = *(undefined8 *)(puVar37 + -0x1478);
            goto LAB_001089a5;
          case 3:
switchD_00109e91_caseD_3:
            *(undefined8 *)(puVar37 + -0x1500) = 0x109e42;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x109e49;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x109e5f;
            cf2_stack_pushInt();
            break;
          case 4:
switchD_00109e91_caseD_4:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ae12;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ae19;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ae28;
            cf2_stack_pushInt();
            break;
          case 5:
switchD_00109e91_caseD_5:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10adfa;
            cf2_stack_popFixed(puVar20,0);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ae05;
            cf2_stack_pushInt();
            break;
          case 6:
            lVar29 = *(long *)(*(long *)(puVar37 + -0x14d0) + 8);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a798;
            uVar16 = cf2_stack_popInt(puVar20);
            *(undefined4 *)(puVar37 + -0x14f8) = uVar16;
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a7a0;
            uVar19 = cf2_stack_popInt();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a7a7;
            uVar36 = cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a7af;
            iVar15 = cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10a7b6;
            uVar16 = cf2_stack_popFixed();
            *(undefined4 *)(puVar37 + -0x14a4) = uVar16;
            if ((puVar37[-0x1418] == '\0') &&
               (*(char *)(*(long *)(puVar37 + -0x14d0) + 0x5b) == '\0')) {
              lVar29 = *(long *)(*(long *)(lVar29 + 0xf0) + 0x68);
              if (*(long *)(*(long *)(puVar37 + -0x14d0) + 0x460) == 0) {
                if (lVar29 == 0) goto LAB_0010ab45;
                *(long *)(puVar37 + -0x14e0) =
                     (long)iVar15 + **(long **)(*(long *)(puVar37 + -0x14d0) + 0x40);
              }
              else {
                *(long *)(puVar37 + -0x14e0) =
                     (long)iVar15 + **(long **)(*(long *)(puVar37 + -0x14d0) + 0x40);
                if (lVar29 == 0) {
                  uVar21 = *(undefined8 *)(puVar37 + -0x14d0);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10aaf1;
                  uVar19 = t1_lookup_glyph_by_stdcharcode_ps(uVar21,uVar19);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10aafe;
                  uVar16 = t1_lookup_glyph_by_stdcharcode_ps
                                     (uVar21,*(undefined4 *)(puVar37 + -0x14f8));
                  *(undefined4 *)(puVar37 + -0x14f8) = uVar16;
                }
              }
              if (-1 < (int)(*(uint *)(puVar37 + -0x14f8) | uVar19)) {
                if (*(char *)(*(long *)(puVar37 + -0x14d0) + 0x5a) == '\0') {
                  lVar29 = *(long *)(puVar37 + -0x14d0);
                  uVar21 = *(undefined8 *)(lVar29 + 0x18);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a9a4;
                  FT_GlyphLoader_Prepare(uVar21);
                  uVar21 = *(undefined8 *)(puVar37 + -0x1450);
                  uVar31 = *(undefined8 *)(lVar29 + 8);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a9ba;
                  uVar18 = cf2_getT1SeacComponent_isra_0(uVar31,uVar19,uVar21);
                  if (uVar18 == 0) {
                    uVar31 = (*(undefined8 **)(lVar29 + 0x40))[1];
                    puVar33 = *(undefined8 **)(lVar29 + 0x48);
                    *(undefined8 *)(puVar37 + -0x14b8) = **(undefined8 **)(lVar29 + 0x40);
                    *(undefined8 *)(puVar37 + -0x14b0) = uVar31;
                    uVar31 = puVar33[1];
                    *(undefined8 *)(puVar37 + -0x14c8) = *puVar33;
                    *(undefined8 *)(puVar37 + -0x14c0) = uVar31;
                    *(undefined1 **)(puVar37 + -0x1500) = puVar37 + -0x13ec;
                    *(undefined8 *)(puVar37 + -0x1508) = 0;
                    *(undefined8 *)(puVar37 + -0x1510) = 0x10aa12;
                    cf2_interpT2CharString
                              (*(undefined8 *)(puVar37 + -0x14e8),uVar21,
                               *(undefined8 *)(puVar37 + -0x1460),*(undefined8 *)(puVar37 + -0x1458)
                               ,1,0);
                    uVar21 = *(undefined8 *)(lVar29 + 8);
                    *(undefined8 *)(puVar37 + -0x1510) = 0x10aa2b;
                    cf2_freeT1SeacComponent_isra_0
                              (uVar21,*(undefined8 *)(puVar37 + -0x13e0),
                               *(undefined8 *)(puVar37 + -0x13d8));
                    if (puVar37[-0x13ed] == '\0') {
                      pauVar27 = *(undefined1 (**) [16])(*(long *)(puVar37 + -0x14d0) + 0x40);
                      puVar33 = *(undefined8 **)(*(long *)(puVar37 + -0x14d0) + 0x48);
                      uVar21 = *(undefined8 *)(*pauVar27 + 8);
                      *(undefined8 *)(puVar37 + -0x14b8) = *(undefined8 *)*pauVar27;
                      *(undefined8 *)(puVar37 + -0x14b0) = uVar21;
                      uVar21 = puVar33[1];
                      *(undefined8 *)(puVar37 + -0x14c8) = *puVar33;
                      *(undefined8 *)(puVar37 + -0x14c0) = uVar21;
                    }
                    else {
                      pauVar27 = *(undefined1 (**) [16])(lVar29 + 0x40);
                    }
                    uVar21 = *(undefined8 *)(puVar37 + -0x1450);
                    uVar16 = *(undefined4 *)(puVar37 + -0x14f8);
                    *pauVar27 = (undefined1  [16])0x0;
                    uVar31 = *(undefined8 *)(*(long *)(puVar37 + -0x14d0) + 8);
                    *(undefined8 *)(puVar37 + -0x1500) = 0x10aa61;
                    uVar18 = cf2_getT1SeacComponent_isra_0(uVar31,uVar16,uVar21);
                    if (uVar18 == 0) {
                      *(undefined1 **)(puVar37 + -0x1500) = puVar37 + -0x13ec;
                      *(ulong *)(puVar37 + -0x1508) = (ulong)uVar36;
                      *(undefined8 *)(puVar37 + -0x1510) = 0x10aaa2;
                      cf2_interpT2CharString
                                (*(undefined8 *)(puVar37 + -0x14e8),
                                 *(undefined8 *)(puVar37 + -0x1450),
                                 *(undefined8 *)(puVar37 + -0x1460),
                                 *(undefined8 *)(puVar37 + -0x1458),1,
                                 *(int *)(puVar37 + -0x14e0) - *(int *)(puVar37 + -0x14a4));
                      lVar29 = *(long *)(puVar37 + -0x14d0);
                      uVar21 = *(undefined8 *)(lVar29 + 8);
                      *(undefined8 *)(puVar37 + -0x1510) = 0x10aac0;
                      cf2_freeT1SeacComponent_isra_0
                                (uVar21,*(undefined8 *)(puVar37 + -0x13e0),
                                 *(undefined8 *)(puVar37 + -0x13d8));
                      puVar33 = *(undefined8 **)(lVar29 + 0x40);
                      uVar21 = *(undefined8 *)(puVar37 + -0x14b0);
                      *puVar33 = *(undefined8 *)(puVar37 + -0x14b8);
                      puVar33[1] = uVar21;
                      uVar21 = *(undefined8 *)(puVar37 + -0x14c0);
                      puVar33 = *(undefined8 **)(lVar29 + 0x48);
                      *puVar33 = *(undefined8 *)(puVar37 + -0x14c8);
                      puVar33[1] = uVar21;
                    }
                  }
                }
                else {
                  lVar29 = *(long *)(*(long *)(puVar37 + -0x14d0) + 0x10);
                  lVar34 = **(long **)(lVar29 + 0x128);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a842;
                  uVar18 = FT_GlyphLoader_CheckSubGlyphs(lVar34,2);
                  if (uVar18 == 0) {
                    puVar41 = *(uint **)(lVar34 + 0xa0);
                    lVar24 = *(long *)(puVar37 + -0x14e0);
                    puVar41[2] = 0;
                    puVar41[3] = 0;
                    uVar14 = *(uint *)(puVar37 + -0x14f8);
                    *puVar41 = uVar19;
                    puVar41[0xc] = uVar14;
                    iVar15 = *(int *)(puVar37 + -0x14a4);
                    *(undefined2 *)(puVar41 + 1) = 0x202;
                    *(undefined2 *)(puVar41 + 0xd) = 2;
                    *(uint **)(puVar37 + -0x14f8) = puVar41;
                    *(undefined8 *)(puVar37 + -0x1500) = 0x10a884;
                    FT_RoundFix(lVar24 - iVar15);
                    *(undefined4 *)(*(long *)(puVar37 + -0x14f8) + 0x38) = extraout_var;
                    *(undefined8 *)(puVar37 + -0x1500) = 0x10a897;
                    FT_RoundFix((long)(int)uVar36);
                    *(undefined4 *)(*(long *)(puVar37 + -0x14f8) + 0x3c) = extraout_var_00;
                    uVar21 = *(undefined8 *)(lVar34 + 0x58);
                    *(undefined4 *)(lVar29 + 0xf0) = 2;
                    *(undefined8 *)(lVar29 + 0xf8) = uVar21;
                    *(undefined4 *)(lVar29 + 0x90) = 0x636f6d70;
                    *(undefined4 *)(lVar34 + 0x98) = 2;
                  }
                }
                goto LAB_001097ac;
              }
            }
LAB_0010ab45:
            uVar18 = 0x12;
            goto LAB_001097ac;
          case 7:
            *(undefined8 *)(puVar37 + -0x1500) = 0x109fc6;
            iVar15 = cf2_stack_popFixed(puVar20);
            lVar29 = *(long *)(puVar37 + -0x14d0);
            plVar38 = *(long **)(lVar29 + 0x48);
            plVar38[1] = (long)iVar15;
            *(undefined8 *)(puVar37 + -0x1500) = 0x109fda;
            iVar15 = cf2_stack_popFixed();
            *plVar38 = (long)iVar15;
            *(undefined8 *)(puVar37 + -0x1500) = 0x109fe4;
            iVar15 = cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x109feb;
            iVar44 = cf2_stack_popFixed();
            puVar37[-0x13ed] = 1;
            plVar38 = *(long **)(lVar29 + 0x40);
            *plVar38 = (long)((int)*plVar38 + iVar44);
            plVar38[1] = (long)((int)plVar38[1] + iVar15);
            if (*(char *)(lVar29 + 0x5b) != '\0') goto LAB_001097ac;
            lVar29 = *(long *)(puVar37 + -0x14e8);
            uVar21 = puVar20[2];
            uVar19 = *(uint *)(lVar29 + 8);
            uVar22 = (ulong)uVar19;
            pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            if (puVar37[-0x1435] != '\0') {
              *(int *)(puVar37 + -0x13fc) = *(int *)(puVar37 + -0x13fc) + iVar44;
              lVar29 = *(long *)(puVar37 + -0x14e8);
              *(int *)(puVar37 + 0x5038) = *(int *)(puVar37 + 0x5038) + iVar15;
            }
            cVar10 = *(char *)(lVar29 + 0xc);
            goto LAB_00108132;
          case 9:
switchD_00109e91_caseD_9:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad5f;
            iVar15 = cf2_stack_popFixed(puVar20);
            if (iVar15 == -0x80000000) {
LAB_0010ade1:
              *(undefined8 *)(puVar37 + -0x1500) = 0x10adeb;
              cf2_stack_pushFixed();
            }
            else {
              *(undefined8 *)(puVar37 + -0x1500) = 0x10ad72;
              cf2_stack_pushFixed();
            }
            break;
          case 10:
switchD_00109e91_caseD_a:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad44;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad4b;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad52;
            cf2_stack_pushFixed();
            break;
          case 0xb:
switchD_00109e91_caseD_b:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10afc0;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10afc8;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10afd2;
            cf2_stack_pushFixed();
            break;
          case 0xc:
switchD_00109e91_caseD_c:
            if ((cVar10 == '\0') || ((puVar37[-0x14c8] & 1) == 0)) {
              *(undefined8 *)(puVar37 + -0x1500) = 0x10af76;
              cf2_stack_popFixed();
              *(undefined8 *)(puVar37 + -0x1500) = 0x10af7e;
              iVar15 = cf2_stack_popFixed();
              uVar28 = puVar37[-0x14c8];
            }
            else {
              *(undefined8 *)(puVar37 + -0x1500) = 0x10afdc;
              cf2_stack_popInt(puVar20);
              *(undefined8 *)(puVar37 + -0x1500) = 0x10afe4;
              iVar15 = cf2_stack_popInt();
              uVar28 = 0;
            }
            *(undefined8 *)(puVar37 + -0x1500) = 0x10af8b;
            uVar16 = FT_DivFix((long)iVar15);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10af95;
            cf2_stack_pushFixed(puVar20,uVar16);
            puVar37[-0x14c8] = uVar28;
            pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            uVar22 = (ulong)uVar19;
            goto LAB_00107fe0;
          case 0xe:
switchD_00109e91_caseD_e:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10af49;
            iVar15 = cf2_stack_popFixed(puVar20);
            if (iVar15 == -0x80000000) goto LAB_0010ade1;
            *(undefined8 *)(puVar37 + -0x1500) = 0x10af5d;
            cf2_stack_pushFixed();
            break;
          case 0xf:
switchD_00109e91_caseD_f:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10af26;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10af2d;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10af3c;
            cf2_stack_pushInt();
            break;
          case 0x10:
            *(undefined8 *)(puVar37 + -0x1500) = 0x109f75;
            puVar33 = puVar20;
            uVar16 = cf2_stack_popInt();
            *(undefined4 *)(puVar37 + -0x1498) = uVar16;
            *(undefined8 *)(puVar37 + -0x1500) = 0x109f7e;
            uVar19 = cf2_stack_popInt();
            lVar29 = puVar20[3];
            lVar34 = puVar20[2];
            *(uint *)(puVar37 + -0x1414) = uVar19;
            uVar36 = (uint)(lVar29 - lVar34 >> 3);
            if (uVar36 < uVar19) goto LAB_001092ab;
            switch(*(undefined4 *)(puVar37 + -0x1498)) {
            case 0:
              if ((*(int *)(puVar37 + -0x1414) != 3) ||
                 ((puVar37[-0x1435] != '\0' &&
                  ((*(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a0) == 0 ||
                   (*(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a4) != 7)))))) goto LAB_001092ab;
              *(undefined8 *)(puVar37 + -0x1500) = 0x10a700;
              cf2_stack_pushFixed(puVar20,*(undefined4 *)(puVar37 + -0x13fc));
              *(undefined8 *)(puVar37 + -0x1500) = 0x10a70c;
              cf2_stack_pushFixed();
              *(undefined4 *)(puVar37 + -0x1414) = 2;
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              uVar22 = (ulong)uVar19;
              break;
            case 1:
              if (*(int *)(puVar37 + -0x1414) == 0) {
                if (puVar37[-0x1435] == '\0') goto LAB_0010a51e;
                uVar21 = *(undefined8 *)(*(long *)(puVar37 + -0x14d0) + 0x18);
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a612;
                iVar15 = ps_builder_check_points_part_0_isra_0(uVar21,6);
                *(int *)(puVar37 + -0x1498) = iVar15;
                if (iVar15 != 0) goto LAB_00109dc4;
                *(undefined8 *)(*(long *)(puVar37 + -0x14d0) + 0x3a0) = 1;
                goto LAB_00108953;
              }
              goto LAB_001092ab;
            case 2:
              if (*(int *)(puVar37 + -0x1414) == 0) {
                if (puVar37[-0x1435] == '\0') {
LAB_0010a51e:
                  pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
                }
                else {
                  if (*(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a0) == 0) goto LAB_001092ab;
                  iVar15 = *(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a4);
                  *(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a4) = iVar15 + 1;
                  if (5 < iVar15 - 1U) goto LAB_0010a51e;
                  uVar21 = *(undefined8 *)(*(long *)(puVar37 + -0x14d0) + 0x18);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a4a6;
                  iVar44 = ps_builder_check_points_part_0_isra_0(uVar21,1);
                  *(int *)(puVar37 + -0x1414) = iVar44;
                  if (iVar44 != 0) goto LAB_001092ab;
                  iVar44 = iVar15 * 2;
                  if (3 < iVar15) {
                    iVar44 = iVar15 * 2 + -6;
                  }
                  *(ulong *)(puVar37 + (long)(iVar44 + -2) * 4 + -0x12f8) =
                       CONCAT44(*(undefined4 *)(puVar37 + 0x5038),*(undefined4 *)(puVar37 + -0x13fc)
                               );
                  if ((iVar15 == 3) || (iVar15 == 6)) {
                    *(long *)(puVar37 + -0x1500) = (long)(iVar44 + -2);
                    *(ulong *)(puVar37 + -0x1508) = (ulong)*(uint *)(puVar37 + -0x12e4);
                    *(undefined8 *)(puVar37 + -0x1510) = 0x10a669;
                    cf2_glyphpath_curveTo
                              (puVar46,*(undefined4 *)(puVar37 + -0x12f8),
                               *(undefined4 *)(puVar37 + -0x12f4),*(undefined4 *)(puVar37 + -0x12f0)
                               ,*(undefined4 *)(puVar37 + -0x12ec));
                    pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
                    pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
                    uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
                    cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
                    *(undefined4 *)(puVar37 + -0x1498) = 0;
                    uVar22 = (ulong)uVar19;
                    break;
                  }
                  pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
                  pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
                }
                *(undefined4 *)(puVar37 + -0x1498) = 0;
                uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
                cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
                uVar22 = (ulong)uVar19;
                break;
              }
              goto LAB_001092ab;
            case 3:
              if (*(int *)(puVar37 + -0x1414) != 1) goto LAB_001092ab;
              if (puVar37[-0x1435] == '\0') goto LAB_0010a540;
              *(undefined8 *)(puVar37 + -0x1328) = 0;
              *(undefined8 *)(puVar37 + -0x1368) = 0;
              puVar40 = (undefined4 *)(puVar37 + -0x12d0);
              for (lVar29 = 10; lVar29 != 0; lVar29 = lVar29 + -1) {
                *puVar40 = 0;
                puVar40 = puVar40 + (ulong)bVar48 * -2 + 1;
              }
              puVar37[-0x12cf] = 1;
              *(undefined8 *)(puVar37 + -0x12d8) = *(undefined8 *)(puVar37 + -0x14b8);
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
LAB_0010a548:
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              *(undefined4 *)(puVar37 + -0x1498) = 0;
              uVar22 = (ulong)uVar19;
              break;
            default:
              if ((int)(*(uint *)(puVar37 + -0x1498) | *(uint *)(puVar37 + -0x1414)) < 0)
              goto LAB_001092ab;
              uVar22 = 1;
              lVar29 = 3;
              if (*(int *)(puVar37 + -0x1414) < 4) {
                lVar29 = (long)*(int *)(puVar37 + -0x1414);
              }
              *(int *)(puVar37 + -0x1498) = (int)lVar29;
              puVar40 = (undefined4 *)(puVar37 + lVar29 * 4 + -0x1304);
              while ((int)uVar22 <= *(int *)(puVar37 + -0x1498)) {
                puVar40 = puVar40 + -1;
                uVar22 = (ulong)((int)uVar22 + 1);
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a782;
                uVar16 = cf2_stack_popFixed(puVar20);
                *puVar40 = uVar16;
              }
              *(undefined4 *)(puVar37 + -0x1414) = 0;
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              uVar22 = (ulong)uVar19;
              break;
            case 0xc:
            case 0xd:
              puVar20[3] = lVar34;
LAB_0010a1c4:
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
LAB_0010a1cc:
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              *(undefined4 *)(puVar37 + -0x1498) = 0;
              *(undefined4 *)(puVar37 + -0x1414) = 0;
              uVar22 = (ulong)uVar19;
              break;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
              puVar41 = *(uint **)(*(long *)(puVar37 + -0x14d0) + 0x4d8);
              if ((puVar41 != (uint *)0x0) &&
                 (uVar19 = *(int *)(puVar37 + -0x1498) + -0xd +
                           (uint)(*(int *)(puVar37 + -0x1498) == 0x12),
                 *(int *)(puVar37 + -0x1414) == *puVar41 * uVar19)) {
                *(undefined1 **)(puVar37 + -0x1498) = puVar46;
                *(uint *)(puVar37 + -0x14a0) = (uVar36 - *(int *)(puVar37 + -0x1414)) + uVar19;
                uVar22 = (ulong)(uVar36 - *(int *)(puVar37 + -0x1414));
                uVar25 = (ulong)uVar19;
                while( true ) {
                  uVar19 = (uint)uVar22;
                  uVar22 = 1;
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a3b3;
                  cf2_stack_getReal();
                  uVar43 = (ulong)uVar19;
                  while ((uint)uVar22 < *puVar41) {
                    uVar22 = (ulong)((uint)uVar22 + 1);
                    *(undefined8 *)(puVar37 + -0x1500) = 0x10a3df;
                    cf2_stack_getReal();
                  }
                  uVar25 = uVar25 & 0xffffffff;
                  uVar22 = (ulong)((int)uVar43 + 1);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a424;
                  cf2_stack_setReal();
                  if ((int)uVar22 == *(int *)(puVar37 + -0x14a0)) break;
                  uVar22 = uVar22 & 0xffffffff;
                }
                puVar46 = *(undefined1 **)(puVar37 + -0x1498);
                uVar19 = *(int *)(puVar37 + -0x1414) - (int)uVar25;
                if (uVar36 < uVar19) {
                  piVar23 = (int *)puVar33[1];
                  if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
                    *piVar23 = 0xa1;
                  }
                }
                else {
                  puVar33[3] = lVar29 + (ulong)uVar19 * -8;
                }
                *(int *)(puVar37 + -0x1414) = (int)uVar25;
                puVar20 = puVar33;
LAB_0010a540:
                pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
                goto LAB_0010a548;
              }
LAB_001092ab:
              uVar18 = 0x12;
              iVar15 = *(int *)(*(long *)(puVar37 + -0x14e8) + 8);
              goto LAB_001081f9;
            case 0x13:
              puVar41 = *(uint **)(*(long *)(puVar37 + -0x14d0) + 0x4d8);
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14d0) + 0x4e8);
              if ((*(int *)(puVar37 + -0x1414) == 1) && (puVar41 != (uint *)0x0)) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a2da;
                uVar18 = cf2_stack_popInt();
                uVar36 = *puVar41;
                if ((uVar36 <= uVar19) && (uVar18 <= uVar19 - uVar36)) {
                  lVar29 = *(long *)(*(long *)(puVar37 + -0x14d0) + 0x4e0);
                  if ((lVar29 == 0) || (__src = *(void **)(puVar41 + 0x42), __src == (void *)0x0))
                  goto LAB_0010a1c4;
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a327;
                  memcpy((void *)(lVar29 + (ulong)uVar18 * 8),__src,(ulong)uVar36 * 8);
                  pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
                  pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
                  goto LAB_0010a1cc;
                }
              }
              goto LAB_001092ab;
            case 0x14:
              if (*(int *)(puVar37 + -0x1414) == 2) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a29e;
                cf2_stack_popFixed();
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a2a5;
                cf2_stack_popFixed();
LAB_0010a0f9:
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a0fe;
                cf2_stack_pushFixed();
                pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
LAB_0010a106:
                *(undefined4 *)(puVar37 + -0x1414) = 1;
                uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
                cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
                *(undefined4 *)(puVar37 + -0x1498) = 0;
                uVar22 = (ulong)uVar19;
                break;
              }
              goto LAB_001092ab;
            case 0x15:
              if (*(int *)(puVar37 + -0x1414) == 2) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a279;
                cf2_stack_popFixed();
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a281;
                cf2_stack_popFixed();
                goto LAB_0010a0f9;
              }
              goto LAB_001092ab;
            case 0x16:
              if (*(int *)(puVar37 + -0x1414) == 2) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a245;
                cf2_stack_popFixed();
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a24d;
                cf2_stack_popFixed();
                goto LAB_0010a0f9;
              }
              goto LAB_001092ab;
            case 0x17:
              if (*(int *)(puVar37 + -0x1414) == 2) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a1ff;
                iVar15 = cf2_stack_popFixed();
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a207;
                iVar44 = cf2_stack_popFixed();
                if (iVar15 != 0) {
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a217;
                  uVar16 = FT_DivFix((long)iVar44);
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a221;
                  cf2_stack_pushFixed(puVar20,uVar16);
                  pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
                  pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
                  goto LAB_0010a106;
                }
              }
              goto LAB_001092ab;
            case 0x18:
              if ((*(long *)(*(long *)(puVar37 + -0x14d0) + 0x4d8) != 0) &&
                 (*(int *)(puVar37 + -0x1414) == 2)) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a19a;
                uVar19 = cf2_stack_popInt();
                uVar22 = (ulong)uVar19;
                if (uVar19 < *(uint *)(*(long *)(puVar37 + -0x14d0) + 0x4e8)) {
                  *(undefined8 *)(puVar37 + -0x1500) = 0x10a1b2;
                  iVar15 = cf2_stack_popFixed();
                  *(long *)(*(long *)(*(long *)(puVar37 + -0x14d0) + 0x4e0) + uVar22 * 8) =
                       (long)iVar15;
                  goto LAB_0010a1c4;
                }
              }
              goto LAB_001092ab;
            case 0x19:
              if ((*(long *)(*(long *)(puVar37 + -0x14d0) + 0x4d8) != 0) &&
                 (*(int *)(puVar37 + -0x1414) == 1)) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a150;
                uVar19 = cf2_stack_popInt();
                if (uVar19 < *(uint *)(*(long *)(puVar37 + -0x14d0) + 0x4e8)) goto LAB_0010a0f9;
              }
              goto LAB_001092ab;
            case 0x1b:
              if (*(int *)(puVar37 + -0x1414) == 4) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a0dc;
                cf2_stack_popFixed();
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a0e4;
                cf2_stack_popFixed();
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a0ec;
                cf2_stack_popFixed();
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a0f3;
                cf2_stack_popFixed();
                goto LAB_0010a0f9;
              }
              goto LAB_001092ab;
            case 0x1c:
              if (*(int *)(puVar37 + -0x1414) == 0) {
                uVar19 = *(uint *)(*(long *)(*(long *)(puVar37 + -0x14d0) + 0x420) + 0x4c0);
                uVar19 = uVar19 << 0xd ^ uVar19;
                uVar19 = uVar19 ^ uVar19 >> 0x11;
                *(uint *)(*(long *)(*(long *)(puVar37 + -0x14d0) + 0x420) + 0x4c0) =
                     uVar19 ^ uVar19 << 5;
                *(undefined8 *)(puVar37 + -0x1500) = 0x10a09e;
                cf2_stack_pushFixed();
                *(undefined4 *)(puVar37 + -0x1498) = 0;
                *(undefined4 *)(puVar37 + -0x1414) = 1;
                pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
                uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
                cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
                uVar22 = (ulong)uVar19;
                break;
              }
              goto LAB_001092ab;
            }
            goto LAB_00107fe0;
          case 0x11:
            if (*(int *)(puVar37 + -0x1414) < 1) {
              if (*(int *)(puVar37 + -0x1498) == 0) goto LAB_001092ab;
              *(int *)(puVar37 + -0x1498) = *(int *)(puVar37 + -0x1498) + -1;
              uVar16 = *(undefined4 *)(puVar37 + (long)*(int *)(puVar37 + -0x1498) * 4 + -0x1304);
              *(undefined8 *)(puVar37 + -0x1500) = 0x10b046;
              cf2_stack_pushFixed(puVar20,uVar16);
            }
            else {
              *(int *)(puVar37 + -0x1414) = *(int *)(puVar37 + -0x1414) + -1;
            }
            break;
          case 0x12:
switchD_00109e91_caseD_12:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10b012;
            cf2_stack_popFixed(puVar20);
            break;
          case 0x14:
switchD_00109e91_caseD_14:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10afee;
            uVar19 = cf2_stack_popInt(puVar20);
            uVar22 = (ulong)uVar19;
            *(undefined8 *)(puVar37 + -0x1500) = 0x10aff5;
            uVar16 = cf2_stack_popFixed();
            if ((uint)uVar22 < 0x20) {
              *(undefined4 *)(puVar37 + uVar22 * 4 + -0x1278) = uVar16;
            }
            break;
          case 0x15:
switchD_00109e91_caseD_15:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10acba;
            uVar19 = cf2_stack_popInt(puVar20);
            if (uVar19 < 0x20) {
              *(undefined8 *)(puVar37 + -0x1500) = 0x10acd1;
              cf2_stack_pushFixed();
            }
            break;
          case 0x16:
switchD_00109e91_caseD_16:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ac8b;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ac93;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ac9b;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10aca2;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10acad;
            cf2_stack_pushFixed();
            break;
          case 0x17:
switchD_00109e91_caseD_17:
            uVar19 = *(uint *)(*(long *)(*(long *)(puVar37 + -0x14d0) + 0x420) + 0x4c0);
            uVar36 = uVar19 << 0xd ^ uVar19;
            uVar36 = uVar36 ^ uVar36 >> 0x11;
            *(uint *)(*(long *)(*(long *)(puVar37 + -0x14d0) + 0x420) + 0x4c0) =
                 uVar36 ^ uVar36 << 5;
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ac7e;
            cf2_stack_pushFixed(puVar20,(uVar19 & 0xffff) + 1);
            break;
          case 0x18:
switchD_00109e91_caseD_18:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ac1d;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ac25;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ac3e;
            cf2_stack_pushFixed();
            break;
          case 0x1a:
switchD_00109e91_caseD_1a:
            *(undefined8 *)(puVar37 + -0x1500) = 0x109f3c;
            iVar15 = cf2_stack_popFixed(puVar20);
            if (0 < iVar15) {
              uVar25 = (long)iVar15;
              if (9 < iVar15) {
                uVar25 = (long)(iVar15 >> 1);
              }
              do {
                *(undefined8 *)(puVar37 + -0x1500) = 0x10b066;
                lVar29 = FT_DivFix((long)iVar15,uVar25);
                uVar22 = (long)(uVar25 + 1 + lVar29) >> 1;
                bVar47 = uVar25 != uVar22;
                uVar25 = uVar22;
              } while (bVar47);
            }
            *(undefined8 *)(puVar37 + -0x1500) = 0x109f4e;
            cf2_stack_pushFixed(puVar20,uVar22 & 0xffffffff);
            pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            uVar22 = (ulong)uVar19;
            cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            goto LAB_00107fe0;
          case 0x1b:
switchD_00109e91_caseD_1b:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ab57;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ab5e;
            cf2_stack_pushFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ab63;
            cf2_stack_pushFixed();
            break;
          case 0x1c:
switchD_00109e91_caseD_1c:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad7f;
            cf2_stack_popFixed(puVar20);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad86;
            cf2_stack_popFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad8e;
            cf2_stack_pushFixed();
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ad96;
            cf2_stack_pushFixed();
            break;
          case 0x1d:
switchD_00109e91_caseD_1d:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ada3;
            uVar19 = cf2_stack_popInt(puVar20);
            uVar36 = (uint)((long)(puVar20[3] - puVar20[2]) >> 3);
            if (uVar36 != 0) {
              iVar15 = uVar36 - 1;
              if ((-1 < (int)uVar19) && (iVar15 = 0, uVar19 < uVar36)) {
                iVar15 = (uVar36 - 1) - uVar19;
              }
              *(undefined8 *)(puVar37 + -0x1500) = 0x10add5;
              cf2_stack_getReal(puVar20,iVar15);
              *(undefined8 *)(puVar37 + -0x1500) = 0x10addc;
              cf2_stack_pushFixed();
            }
            break;
          case 0x1e:
switchD_00109e91_caseD_1e:
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ae35;
            uVar19 = cf2_stack_popInt(puVar20);
            uVar25 = (ulong)uVar19;
            *(undefined8 *)(puVar37 + -0x1500) = 0x10ae3c;
            uVar19 = cf2_stack_popInt();
            if ((int)uVar19 < 2) {
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              uVar22 = (ulong)uVar19;
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            }
            else {
              lVar29 = puVar20[2];
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              if ((uint)(puVar20[3] - lVar29 >> 3) < uVar19) goto LAB_00109e6c;
              iVar15 = (int)uVar25;
              if (iVar15 < 0) {
                iVar15 = -(-iVar15 % (int)uVar19);
              }
              else {
                iVar15 = (int)((long)((ulong)(uint)(iVar15 >> 0x1f) << 0x20 | uVar25 & 0xffffffff) %
                              (long)(int)uVar19);
              }
              lVar34 = *(long *)(puVar37 + -0x14e8);
              cVar10 = *(char *)(lVar34 + 0xc);
              if (iVar15 == 0) goto LAB_00108b36;
              uVar36 = 0;
              uVar16 = 2;
              iVar11 = -1;
              iVar44 = -1;
              while( true ) {
                uVar17 = (undefined4)uVar22;
                uVar4 = uVar16;
                if (iVar44 == iVar11) {
                  iVar11 = iVar44 + 1;
                  puVar40 = (undefined4 *)(lVar29 + (long)iVar11 * 8);
                  uVar17 = *puVar40;
                  uVar4 = puVar40[1];
                  iVar44 = iVar11;
                }
                iVar11 = iVar11 + iVar15;
                if (iVar11 < (int)uVar19) {
                  if (iVar11 < 0) {
                    iVar11 = iVar11 + uVar19;
                  }
                }
                else {
                  iVar11 = iVar11 - uVar19;
                }
                uVar36 = uVar36 + 1;
                puVar40 = (undefined4 *)(lVar29 + (long)iVar11 * 8);
                uVar16 = *puVar40;
                *puVar40 = uVar17;
                *(undefined4 *)(puVar37 + -0x14a0) = uVar16;
                uVar16 = puVar40[1];
                puVar40[1] = uVar4;
                if (uVar19 == uVar36) break;
                uVar22 = (ulong)*(uint *)(puVar37 + -0x14a0);
              }
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              uVar22 = (ulong)uVar19;
            }
            goto LAB_00107fe0;
          case 0x21:
            if (puVar37[-0x1435] != '\0') {
              *(undefined8 *)(puVar37 + -0x1500) = 0x109dfd;
              uVar16 = cf2_stack_popFixed(puVar20);
              *(undefined4 *)(puVar37 + 0x5038) = uVar16;
              *(undefined8 *)(puVar37 + -0x1500) = 0x109e09;
              uVar16 = cf2_stack_popFixed();
              *(undefined4 *)(puVar37 + -0x13fc) = uVar16;
              *(undefined4 *)(*(long *)(puVar37 + -0x14d0) + 0x3a0) = 0;
            }
switchD_00109e91_caseD_0:
            uVar21 = puVar20[2];
            pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            uVar22 = (ulong)uVar19;
            goto LAB_00108132;
          }
switchD_00109de6_caseD_10:
          pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
LAB_00109d43:
          uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
          cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
          uVar22 = (ulong)uVar19;
          goto LAB_00107fe0;
               case 0xd:
          if (cVar10 != '\0') {
            *(undefined8 *)(puVar37 + -0x1500) = 0x109089;
            iVar15 = cf2_stack_popFixed(puVar20);
            lVar29 = *(long *)(puVar37 + -0x14d0);
            plVar38 = *(long **)(lVar29 + 0x48);
            *plVar38 = (long)iVar15;
            plVar38[1] = 0;
            *(undefined8 *)(puVar37 + -0x1500) = 0x1090a4;
            iVar15 = cf2_stack_popFixed();
            plVar38 = *(long **)(lVar29 + 0x40);
            puVar37[-0x13ed] = 1;
            *plVar38 = (long)((int)*plVar38 + iVar15);
            if (*(char *)(lVar29 + 0x5b) != '\0') goto LAB_001097ac;
            uVar21 = puVar20[2];
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            uVar22 = (ulong)uVar19;
            if (puVar37[-0x1435] == '\0') {
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            }
            else {
              *(int *)(puVar37 + -0x13fc) = *(int *)(puVar37 + -0x13fc) + iVar15;
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            }
            goto LAB_00108132;
          }
          break;
               case 0xe:
          goto switchD_001081c9_caseD_e;
               case 0xf:
          if (*(char *)(*(long *)(puVar37 + -0x14e8) + 0xd) != '\0') {
            lVar29 = *(long *)(puVar37 + -0x14e8);
            if (*(char *)(lVar29 + 0x61) != '\0') goto LAB_001083c8;
            *(undefined8 *)(puVar37 + -0x1500) = 0x108fc2;
            iVar15 = cf2_stack_popInt(puVar20);
            if (iVar15 < 0) {
              uVar19 = *(uint *)(lVar29 + 8);
              uVar21 = puVar20[2];
              cVar10 = *(char *)(lVar29 + 0xc);
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
              uVar22 = (ulong)uVar19;
            }
            else {
              lVar29 = *(long *)(puVar37 + -0x14e8);
              uVar21 = puVar20[2];
              uVar19 = *(uint *)(lVar29 + 8);
              cVar10 = *(char *)(lVar29 + 0xc);
              *(int *)(lVar29 + 0x90) = iVar15;
              uVar22 = (ulong)uVar19;
              pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
            }
            goto LAB_00108132;
          }
          break;
               case 0x10:
          if (*(char *)(*(long *)(puVar37 + -0x14e8) + 0xd) != '\0') {
            lVar29 = *(long *)(puVar37 + -0x14e8);
            if (*(long *)(lVar29 + 0x68) == 0) goto LAB_001083c8;
            uVar21 = *(undefined8 *)(lVar29 + 0x98);
            uVar16 = *(undefined4 *)(lVar29 + 0x94);
            uVar17 = *(undefined4 *)(lVar29 + 0x90);
            pcVar7 = *(code **)(*(long *)(lVar29 + 0x288) + 0x18);
            *(undefined8 *)(puVar37 + -0x1500) = 0x10926b;
            cVar10 = (*pcVar7)(lVar29 + 0x60,uVar17,uVar16,uVar21);
            if (cVar10 != '\0') {
              uVar21 = *(undefined8 *)(lVar29 + 0x98);
              uVar16 = *(undefined4 *)(lVar29 + 0x94);
              uVar17 = *(undefined4 *)(lVar29 + 0x90);
              pcVar7 = *(code **)(*(long *)(lVar29 + 0x288) + 0x20);
              *(undefined8 *)(puVar37 + -0x1500) = 0x10928f;
              uVar18 = (*pcVar7)(lVar29 + 0x60,uVar17,uVar16,uVar21);
              if (uVar18 != 0) goto LAB_001097ac;
            }
            *(undefined8 *)(puVar37 + -0x1500) = 0x1092a1;
            puVar33 = puVar20;
            uVar19 = cf2_stack_popInt();
            if (*(uint *)(puVar37 + -0x148c) < uVar19) goto LAB_001092ab;
            lVar29 = *(long *)(puVar37 + -0x14e8);
            lVar34 = puVar20[3];
            lVar24 = puVar20[2];
            iVar15 = *(int *)(lVar29 + 0x80) * uVar19;
            uVar22 = lVar34 - lVar24 >> 3;
            uVar25 = uVar22 & 0xffffffff;
            uVar18 = (int)uVar22 - iVar15;
            uVar36 = iVar15 - uVar19;
            uVar14 = uVar19 + uVar18;
            if (uVar19 == 0) goto LAB_00109b1e;
            lVar26 = *(long *)(lVar29 + 0x88);
            uVar43 = (ulong)uVar14;
            *(uint *)(puVar37 + -0x1448) = uVar36;
            *(ulong *)(puVar37 + -0x1410) = uVar22;
            *(long *)(puVar37 + -0x14a0) = lVar26 + 4;
            *(long *)(puVar37 + -0x1488) = lVar34;
            *(undefined1 **)(puVar37 + -0x1408) = puVar46;
            do {
              *(undefined8 *)(puVar37 + -0x1500) = 0x109a78;
              iVar15 = cf2_stack_getReal();
              if (1 < *(uint *)(lVar29 + 0x80)) {
                lVar34 = *(long *)(puVar37 + -0x14a0);
                uVar22 = (ulong)(1 - (int)uVar43);
                uVar43 = uVar43 & 0xffffffff;
                do {
                  lVar34 = lVar34 + 4;
                  uVar19 = (int)uVar43 + 1;
                  uVar43 = (ulong)uVar19;
                  *(undefined8 *)(puVar37 + -0x1500) = 0x109aa8;
                  iVar44 = cf2_stack_getReal();
                  lVar26 = (long)*(int *)(lVar34 + -4) * (long)iVar44;
                  iVar15 = iVar15 + (int)((ulong)(lVar26 + 0x8000 + (lVar26 >> 0x3f)) >> 0x10);
                } while ((int)uVar22 + uVar19 < *(uint *)(lVar29 + 0x80));
              }
              if ((uint)uVar25 < uVar18) {
                piVar23 = (int *)puVar33[1];
                if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
                  *piVar23 = 0x82;
                }
              }
              else {
                piVar23 = (int *)(lVar24 + (ulong)uVar18 * 8);
                *piVar23 = iVar15;
                piVar23[1] = 0;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar14);
            uVar36 = *(uint *)(puVar37 + -0x1448);
            lVar34 = *(long *)(puVar37 + -0x1488);
            puVar46 = *(undefined1 **)(puVar37 + -0x1408);
            puVar20 = puVar33;
            if ((uint)*(undefined8 *)(puVar37 + -0x1410) < uVar36) {
              piVar23 = (int *)puVar33[1];
              if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
                *piVar23 = 0xa1;
              }
            }
            else {
LAB_00109b1e:
              puVar20[3] = lVar34 + (ulong)uVar36 * -8;
            }
            lVar29 = *(long *)(puVar37 + -0x14e8);
            lVar34 = *(long *)(puVar37 + -0x14f8);
            uVar19 = *(uint *)(lVar29 + 8);
            cVar10 = *(char *)(lVar29 + 0xc);
            *(undefined1 *)(lVar29 + 0x61) = 1;
            pbVar32 = *(byte **)(lVar34 + 0x18);
            pbVar45 = *(byte **)(lVar34 + 0x10);
            uVar22 = (ulong)uVar19;
            goto LAB_00107fe0;
          }
          break;
               case 0x13:
               case 0x14:
          goto switchD_001081c9_caseD_13;
               case 0x15:
          lVar29 = puVar20[2];
          if ((2 < (uint)(puVar20[3] - lVar29 >> 3)) && (puVar37[-0x13ed] == '\0')) {
            *(undefined8 *)(puVar37 + -0x1500) = 0x109977;
            iVar15 = cf2_stack_getReal(puVar20,0);
            **(int **)(puVar37 + -0x1478) = iVar15 + *(int *)(puVar37 + -0x1400);
          }
          puVar37[-0x13ed] = 1;
          if (*(char *)(*(long *)(puVar37 + -0x14d0) + 0x438) == '\0') {
            *(undefined8 *)(puVar37 + -0x1500) = 0x1091e4;
            iVar44 = cf2_stack_popFixed(puVar20);
            iVar15 = *(int *)(puVar37 + 0x5038);
            *(int *)(puVar37 + 0x5038) = iVar44 + iVar15;
            uVar22 = (ulong)(uint)(iVar44 + iVar15);
            *(undefined8 *)(puVar37 + -0x1500) = 0x1091fa;
            iVar15 = cf2_stack_popFixed();
            iVar15 = iVar15 + *(int *)(puVar37 + -0x13fc);
            *(int *)(puVar37 + -0x13fc) = iVar15;
            if (*(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a0) != 0) goto LAB_00108f45;
            uVar22 = uVar22 & 0xffffffff;
            goto LAB_0010916e;
          }
          goto LAB_001097ac;
               case 0x16:
          lVar29 = puVar20[2];
          if ((1 < (uint)(puVar20[3] - lVar29 >> 3)) && (puVar37[-0x13ed] == '\0')) {
            *(undefined8 *)(puVar37 + -0x1500) = 0x1098a1;
            iVar15 = cf2_stack_getReal(puVar20,0);
            **(int **)(puVar37 + -0x1478) = iVar15 + *(int *)(puVar37 + -0x1400);
          }
          puVar37[-0x13ed] = 1;
          if (*(char *)(*(long *)(puVar37 + -0x14d0) + 0x438) != '\0') goto LAB_001097ac;
          *(undefined8 *)(puVar37 + -0x1500) = 0x109144;
          iVar15 = cf2_stack_popFixed(puVar20);
          iVar15 = iVar15 + *(int *)(puVar37 + -0x13fc);
          *(int *)(puVar37 + -0x13fc) = iVar15;
          if (*(int *)(*(long *)(puVar37 + -0x14d0) + 0x3a0) != 0) goto LAB_00108f45;
          uVar22 = (ulong)*(uint *)(puVar37 + 0x5038);
LAB_0010916e:
          *(undefined8 *)(puVar37 + -0x1500) = 0x109176;
          cf2_glyphpath_moveTo(puVar46,iVar15,uVar22);
          uVar21 = puVar20[2];
          lVar24 = *(long *)(puVar37 + -0x14f8);
LAB_0010917e:
          pbVar32 = *(byte **)(lVar24 + 0x18);
          pbVar45 = *(byte **)(lVar24 + 0x10);
          uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
          uVar22 = (ulong)uVar19;
          cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
          puVar20[3] = uVar21;
          goto LAB_00108136;
               case 0x19:
          lVar29 = (long)(puVar20[3] - puVar20[2]) >> 3;
          uVar19 = (uint)lVar29;
          *(uint *)(puVar37 + -0x1488) = uVar19;
          if (uVar19 < 7) {
            uVar36 = 0;
          }
          else {
            iVar15 = *(int *)(puVar37 + -0x13fc);
            *(long *)(puVar37 + -0x14a0) = lVar29;
            iVar44 = *(int *)(puVar37 + 0x5038);
            uVar18 = 0;
            do {
              *(undefined8 *)(puVar37 + -0x1500) = 0x108d3b;
              iVar11 = cf2_stack_getReal(puVar20,uVar18);
              iVar15 = iVar15 + iVar11;
              *(int *)(puVar37 + -0x13fc) = iVar15;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108d4d;
              iVar11 = cf2_stack_getReal();
              iVar44 = iVar44 + iVar11;
              *(int *)(puVar37 + 0x5038) = iVar44;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108d62;
              cf2_glyphpath_lineTo(puVar46,iVar15,iVar44);
              uVar36 = uVar18 + 2;
              uVar14 = uVar18 + 8;
              uVar18 = uVar36;
            } while (uVar14 < uVar19);
            lVar29 = *(long *)(puVar37 + -0x14a0);
          }
          if (uVar36 < (uint)lVar29) {
            *(undefined1 **)(puVar37 + -0x14a0) = puVar46;
            iVar15 = *(int *)(puVar37 + -0x13fc);
            uVar22 = (ulong)*(uint *)(puVar37 + 0x5038);
            uVar19 = *(uint *)(puVar37 + -0x1488);
            do {
              *(undefined8 *)(puVar37 + -0x1500) = 0x108dab;
              iVar44 = cf2_stack_getReal(puVar20,uVar36);
              uVar25 = (ulong)(uint)(iVar44 + iVar15);
              *(undefined8 *)(puVar37 + -0x1500) = 0x108db9;
              iVar15 = cf2_stack_getReal();
              uVar43 = (ulong)(uint)(iVar15 + (int)uVar22);
              *(undefined8 *)(puVar37 + -0x1500) = 0x108dc7;
              iVar44 = cf2_stack_getReal();
              iVar44 = iVar44 + (int)uVar25;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108dd5;
              iVar11 = cf2_stack_getReal();
              iVar11 = iVar11 + (int)uVar43;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108de3;
              iVar15 = cf2_stack_getReal();
              uVar36 = uVar36 + 6;
              iVar15 = iVar15 + iVar44;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108df5;
              iVar12 = cf2_stack_getReal();
              uVar22 = (ulong)(uint)(iVar12 + iVar11);
              *(ulong *)(puVar37 + -0x1508) = uVar22;
              *(undefined8 *)(puVar37 + -0x1510) = 0x108e14;
              cf2_glyphpath_curveTo
                        (*(undefined8 *)(puVar37 + -0x14a0),uVar25 & 0xffffffff,uVar43 & 0xffffffff,
                         iVar44);
              *(int *)(puVar37 + -0x13fc) = iVar15;
              *(int *)(puVar37 + 0x5038) = iVar12 + iVar11;
            } while (uVar36 < uVar19);
            puVar46 = *(undefined1 **)(puVar37 + -0x14a0);
          }
LAB_0010894b:
          puVar20[3] = puVar20[2];
LAB_00108953:
          pbVar32 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
          pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
          uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
          cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
          uVar22 = (ulong)uVar19;
          goto LAB_00107fe0;
               case 0x1a:
          lVar29 = puVar20[2];
          uVar36 = (uint)(puVar20[3] - lVar29 >> 3);
          uVar18 = uVar36 & 2;
          uVar36 = uVar36 & 0xfffffffd;
          if (uVar18 < uVar36) {
            uVar19 = *(uint *)(puVar37 + -0x13fc);
            uVar22 = (ulong)*(uint *)(puVar37 + 0x5038);
            do {
              if ((uVar36 - uVar18 & 1) != 0) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x108cdb;
                uVar14 = uVar18 + 1;
                iVar15 = cf2_stack_getReal(puVar20,uVar18);
                uVar18 = uVar14;
                uVar19 = uVar19 + iVar15;
              }
              uVar43 = (ulong)uVar19;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108c62;
              iVar15 = cf2_stack_getReal(puVar20,uVar18);
              uVar25 = (ulong)(uint)(iVar15 + (int)uVar22);
              *(undefined8 *)(puVar37 + -0x1500) = 0x108c6e;
              iVar15 = cf2_stack_getReal();
              uVar19 = uVar19 + iVar15;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108c79;
              iVar15 = cf2_stack_getReal();
              uVar18 = uVar18 + 4;
              iVar15 = iVar15 + (int)uVar25;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108c8b;
              iVar44 = cf2_stack_getReal();
              uVar22 = (ulong)(uint)(iVar44 + iVar15);
              *(ulong *)(puVar37 + -0x1508) = uVar22;
              *(undefined8 *)(puVar37 + -0x1510) = 0x108ca5;
              cf2_glyphpath_curveTo(puVar46,uVar43 & 0xffffffff,uVar25 & 0xffffffff,uVar19);
              *(uint *)(puVar37 + -0x13fc) = uVar19;
              *(int *)(puVar37 + 0x5038) = iVar44 + iVar15;
            } while (uVar18 < uVar36);
            goto LAB_00109338;
          }
          goto LAB_00109352;
               case 0x1b:
          lVar29 = puVar20[2];
          uVar36 = (uint)(puVar20[3] - lVar29 >> 3);
          uVar18 = uVar36 & 2;
          uVar36 = uVar36 & 0xfffffffd;
          if (uVar18 < uVar36) {
            *(undefined1 **)(puVar37 + -0x14a0) = puVar46;
            uVar22 = (ulong)*(uint *)(puVar37 + 0x5038);
            iVar15 = *(int *)(puVar37 + -0x13fc);
            do {
              uVar19 = (uint)uVar22;
              if ((uVar36 - uVar18 & 1) != 0) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x108c09;
                uVar14 = uVar18 + 1;
                iVar44 = cf2_stack_getReal(puVar20,uVar18);
                uVar18 = uVar14;
                uVar19 = uVar19 + iVar44;
              }
              uVar43 = (ulong)uVar19;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108b8a;
              iVar44 = cf2_stack_getReal(puVar20,uVar18);
              uVar25 = (ulong)(uint)(iVar44 + iVar15);
              *(undefined8 *)(puVar37 + -0x1500) = 0x108b96;
              iVar44 = cf2_stack_getReal();
              iVar44 = iVar44 + (int)uVar25;
              *(undefined8 *)(puVar37 + -0x1500) = 0x108ba2;
              iVar11 = cf2_stack_getReal();
              uVar18 = uVar18 + 4;
              uVar22 = (ulong)(uVar19 + iVar11);
              *(undefined8 *)(puVar37 + -0x1500) = 0x108bb0;
              iVar15 = cf2_stack_getReal();
              *(ulong *)(puVar37 + -0x1508) = uVar22;
              iVar15 = iVar15 + iVar44;
              *(undefined8 *)(puVar37 + -0x1510) = 0x108bd3;
              cf2_glyphpath_curveTo
                        (*(undefined8 *)(puVar37 + -0x14a0),uVar25 & 0xffffffff,uVar43 & 0xffffffff,
                         iVar44,uVar22,iVar15);
              *(int *)(puVar37 + -0x13fc) = iVar15;
              *(uint *)(puVar37 + 0x5038) = uVar19 + iVar11;
            } while (uVar18 < uVar36);
            puVar46 = *(undefined1 **)(puVar37 + -0x14a0);
            goto LAB_00109338;
          }
          goto LAB_00109352;
               case 0x1c:
          pbVar1 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18);
          if (pbVar1 < pbVar45) {
            pbVar32 = pbVar1 + 1;
            *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18) = pbVar32;
            bVar35 = *pbVar1;
            if (pbVar32 < pbVar45) {
              *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x18) = pbVar1 + 2;
              uVar18 = (uint)CONCAT11(bVar35,pbVar1[1]);
              pbVar32 = pbVar1 + 2;
            }
            else {
              uVar18 = (uint)(short)((ushort)bVar35 << 8);
              piVar23 = (int *)**(undefined8 **)(puVar37 + -0x14f8);
              if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
                lVar29 = *(long *)(puVar37 + -0x14f8);
                *piVar23 = 0x55;
                pbVar32 = *(byte **)(lVar29 + 0x18);
              }
            }
          }
          else {
            piVar23 = (int *)**(undefined8 **)(puVar37 + -0x14f8);
            pbVar32 = pbVar1;
            if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
              *piVar23 = 0x55;
            }
          }
          puVar41 = (uint *)puVar20[3];
          if (puVar41 == (uint *)(puVar20[2] + (ulong)*(uint *)(puVar20 + 4) * 8)) {
LAB_001098db:
            piVar23 = (int *)puVar20[1];
joined_r0x001098e5:
            if ((piVar23 != (int *)0x0) && (*piVar23 == 0)) {
              *piVar23 = 0x82;
              uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
              uVar22 = (ulong)uVar19;
              cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
              goto LAB_00107fe0;
            }
          }
          else {
            *puVar41 = uVar18;
            puVar41[1] = 2;
            puVar20[3] = puVar41 + 2;
          }
LAB_00108b2d:
          lVar34 = *(long *)(puVar37 + -0x14e8);
          cVar10 = *(char *)(lVar34 + 0xc);
LAB_00108b36:
          uVar19 = *(uint *)(lVar34 + 8);
          uVar22 = (ulong)uVar19;
          goto LAB_00107fe0;
               case 0x1e:
               case 0x1f:
          lVar29 = puVar20[2];
          bVar47 = bVar35 == 0x1f;
          uVar36 = (uint)(puVar20[3] - lVar29 >> 3);
          uVar18 = uVar36 & 0xfffffffd;
          uVar36 = uVar36 & 2;
          if (uVar36 < uVar18) {
            *(uint *)(puVar37 + -0x14a0) = uVar18;
            *(undefined1 **)(puVar37 + -0x1448) = puVar46;
            uVar25 = (ulong)*(uint *)(puVar37 + -0x13fc);
            uVar22 = (ulong)*(uint *)(puVar37 + 0x5038);
            do {
              uVar19 = uVar36 + 4;
              iVar44 = *(int *)(puVar37 + -0x14a0) - uVar36;
              *(int *)(puVar37 + -0x1488) = iVar44;
              iVar15 = (int)uVar25;
              if (bVar47) {
                *(undefined8 *)(puVar37 + -0x1500) = 0x108525;
                iVar11 = cf2_stack_getReal(puVar20,uVar36);
                *(int *)(puVar37 + -0x1488) = iVar15 + iVar11;
                *(undefined8 *)(puVar37 + -0x1500) = 0x108533;
                iVar12 = cf2_stack_getReal();
                uVar42 = (ulong)(uint)(iVar12 + iVar15 + iVar11);
                *(undefined8 *)(puVar37 + -0x1500) = 0x10853f;
                iVar15 = cf2_stack_getReal();
                iVar15 = iVar15 + (int)uVar22;
                *(undefined8 *)(puVar37 + -0x1500) = 0x10854b;
                iVar11 = cf2_stack_getReal();
                uVar43 = (ulong)(uint)(iVar11 + iVar15);
                if (iVar44 == 5) {
                  bVar47 = false;
                  *(undefined8 *)(puVar37 + -0x1500) = 0x109439;
                  iVar15 = cf2_stack_getReal();
                  uVar36 = uVar36 + 5;
                  uVar25 = (ulong)(uint)(iVar15 + (int)uVar42);
                }
                else {
                  uVar25 = uVar42 & 0xffffffff;
                  bVar47 = false;
                  uVar36 = uVar19;
                }
              }
              else {
                *(undefined8 *)(puVar37 + -0x1500) = 0x1085d8;
                iVar44 = cf2_stack_getReal(puVar20,uVar36);
                uVar18 = iVar44 + (int)uVar22;
                uVar22 = (ulong)uVar18;
                *(undefined8 *)(puVar37 + -0x1500) = 0x1085e4;
                iVar44 = cf2_stack_getReal();
                uVar42 = (ulong)(uint)(iVar44 + iVar15);
                *(undefined8 *)(puVar37 + -0x1500) = 0x1085f0;
                iVar44 = cf2_stack_getReal();
                uVar43 = (ulong)(iVar44 + uVar18);
                *(undefined8 *)(puVar37 + -0x1500) = 0x1085fc;
                iVar44 = cf2_stack_getReal();
                iVar11 = (int)uVar43;
                uVar25 = (ulong)(uint)(iVar44 + (int)uVar42);
                if (*(int *)(puVar37 + -0x1488) == 5) {
                  bVar47 = true;
                  *(undefined8 *)(puVar37 + -0x1500) = 0x109462;
                  iVar44 = cf2_stack_getReal();
                  *(int *)(puVar37 + -0x1488) = iVar15;
                  uVar25 = uVar25 & 0xffffffff;
                  uVar43 = (ulong)(uint)(iVar44 + iVar11);
                  uVar36 = uVar36 + 5;
                }
                else {
                  *(int *)(puVar37 + -0x1488) = iVar15;
                  uVar43 = uVar43 & 0xffffffff;
                  bVar47 = true;
                  uVar36 = uVar19;
                }
              }
              *(ulong *)(puVar37 + -0x1508) = uVar43;
              *(undefined8 *)(puVar37 + -0x1510) = 0x108587;
              cf2_glyphpath_curveTo
                        (*(undefined8 *)(puVar37 + -0x1448),*(undefined4 *)(puVar37 + -0x1488),
                         uVar22,uVar42 & 0xffffffff);
              *(int *)(puVar37 + -0x13fc) = (int)uVar25;
              *(int *)(puVar37 + 0x5038) = (int)uVar43;
              uVar22 = uVar43;
            } while (uVar36 < *(uint *)(puVar37 + -0x14a0));
            puVar46 = *(undefined1 **)(puVar37 + -0x1448);
LAB_00109338:
            lVar29 = puVar20[2];
            pbVar45 = *(byte **)(*(long *)(puVar37 + -0x14f8) + 0x10);
            uVar19 = *(uint *)(*(long *)(puVar37 + -0x14e8) + 8);
            cVar10 = *(char *)(*(long *)(puVar37 + -0x14e8) + 0xc);
            uVar22 = (ulong)uVar19;
          }
LAB_00109352:
          lVar34 = *(long *)(puVar37 + -0x14f8);
          puVar20[3] = lVar29;
          pbVar32 = *(byte **)(lVar34 + 0x18);
          goto LAB_00107fe0;
               default:
          goto switchD_001081c9_default;
            }

            lVar29 = puVar20[2];
            LAB_00108f8c:pbVar32 = *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 );
            puVar20[3] = lVar29;
            goto LAB_00108136;
         }

         goto LAB_00108205;
      }

      *(undefined8*)( puVar37 + -0x1500 ) = 0x1081dd;
      ft_mem_free(*(undefined8*)( puVar37 + -0x14d8 ), puVar20);
   }

   puVar20 = (undefined8*)0x0;
   uVar18 = 0x40;
   *(undefined8*)( puVar37 + -0x1480 ) = 0;
   iVar15 = *(int*)( *(long*)( puVar37 + -0x14e8 ) + 8 );
   LAB_001081f9:if (iVar15 == 0) {
      LAB_001081fd:*(uint*)( *(long*)( puVar37 + -0x14e8 ) + 8 ) = uVar18;
   }

   LAB_00108205:*(undefined8*)( puVar37 + 0x4ee8 ) = 0;
   *(undefined1(*) [16])( puVar37 + 0x4ed8 ) = (undefined1[16])0x0;
   *(undefined8*)( puVar37 + -0x1500 ) = 0x108232;
   ft_mem_free(*(undefined8*)( puVar37 + 0x4ec0 ), *(undefined8*)( puVar37 + 0x4ef0 ));
   *(undefined1(*) [16])( puVar37 + -0x1330 ) = (undefined1[16])0x0;
   *(undefined8*)( puVar37 + 0x4ef0 ) = 0;
   *(undefined8*)( puVar37 + -0x1320 ) = 0;
   *(undefined8*)( puVar37 + -0x1500 ) = 0x10826b;
   ft_mem_free(*(undefined8*)( puVar37 + -0x1348 ), *(undefined8*)( puVar37 + -0x1318 ));
   *(undefined1(*) [16])( puVar37 + -0x1370 ) = (undefined1[16])0x0;
   *(undefined8*)( puVar37 + -0x1318 ) = 0;
   *(undefined8*)( puVar37 + -0x1360 ) = 0;
   *(undefined8*)( puVar37 + -0x1500 ) = 0x1082a4;
   ft_mem_free(*(undefined8*)( puVar37 + -5000 ), *(undefined8*)( puVar37 + -0x1358 ));
   *(undefined8*)( puVar37 + -0x1358 ) = 0;
   *(undefined8*)( puVar37 + -0x13a0 ) = 0;
   *(undefined1(*) [16])( puVar37 + -0x13b0 ) = (undefined1[16])0x0;
   *(undefined8*)( puVar37 + -0x1500 ) = 0x1082d7;
   ft_mem_free(*(undefined8*)( puVar37 + -0x14d8 ), *(undefined8*)( puVar37 + -0x1480 ));
   *(undefined8*)( puVar37 + -0x1398 ) = 0;
   if (puVar20 != (undefined8*)0x0) {
      uVar21 = *puVar20;
      uVar31 = puVar20[2];
      *(undefined8*)( puVar37 + -0x1500 ) = 0x1082f7;
      ft_mem_free(uVar21, uVar31);
      puVar20[2] = 0;
      *(undefined8*)( puVar37 + -0x1500 ) = 0x10830a;
      ft_mem_free(uVar21, puVar20);
   }

   if (*(long*)( puVar37 + 0x4ff0 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined8*)( puVar37 + -0x1500 ) = 0x109f04;
      __stack_chk_fail();
   }

   return;
   LAB_001083a8:if (cVar10 != '\0') {
      uVar36 = 0xb;
      goto LAB_0010833d;
   }

   if ((int)uVar22 != 0) goto LAB_00108205;
   piVar23 = (int*)( puVar37 + -0x14e0 );
   *piVar23 = *piVar23 + -1;
   if (*piVar23 != 0) {
      switchD_001081c9_caseD_b:if (0 < *(int*)( puVar37 + -0x14a4 )) {
         iVar15 = *(int*)( puVar37 + -0x14a4 ) + -1;
         uVar22 = 0;
         *(int*)( puVar37 + -0x14a4 ) = iVar15;
         uVar25 = (ulong)iVar15;
         if (*(ulong*)( puVar37 + -0x13a8 ) <= uVar25) {
            piVar23 = *(int**)( puVar37 + -0x13c0 );
            uVar25 = 0;
            if (( piVar23 != (int*)0x0 ) && ( *piVar23 == 0 )) {
               lVar29 = *(long*)( puVar37 + -0x14e8 );
               *piVar23 = 0x82;
               uVar19 = *(uint*)( lVar29 + 8 );
               cVar10 = *(char*)( lVar29 + 0xc );
               uVar25 = 0;
               uVar22 = (ulong)uVar19;
            }

         }

         lVar29 = uVar25 * *(long*)( puVar37 + -0x13b8 ) + *(long*)( puVar37 + -0x1480 );
         pbVar32 = *(byte**)( lVar29 + 0x18 );
         pbVar45 = *(byte**)( lVar29 + 0x10 );
         *(long*)( puVar37 + -0x14f8 ) = lVar29;
         goto LAB_00107fe0;
      }

   }

   LAB_001083c8:uVar18 = 0x12;
   goto LAB_001081fd;
   switchD_001081c9_default:puVar41 = (uint*)puVar20[3];
   lVar29 = puVar20[2];
   pbVar32 = *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 );
   if (bVar35 < 0xf7) {
      if (puVar41 == (uint*)( lVar29 + ( ulong ) * (uint*)( puVar20 + 4 ) * 8 )) {
         piVar23 = (int*)puVar20[1];
         if (( piVar23 != (int*)0x0 ) && ( *piVar23 == 0 )) {
            LAB_00109642:*piVar23 = 0x82;
            uVar19 = *(uint*)( *(long*)( puVar37 + -0x14e8 ) + 8 );
            cVar10 = *(char*)( *(long*)( puVar37 + -0x14e8 ) + 0xc );
            uVar22 = (ulong)uVar19;
         }

      }
 else {
         lVar29 = *(long*)( puVar37 + -0x14e8 );
         *puVar41 = uVar36 - 0x8b;
         puVar41[1] = 2;
         uVar19 = *(uint*)( lVar29 + 8 );
         puVar20[3] = puVar41 + 2;
         uVar22 = (ulong)uVar19;
      }

      goto LAB_00107fe0;
   }

   if (bVar35 < 0xfb) {
      iVar15 = ( uVar36 - 0xf7 ) * 0x100;
      if (pbVar32 < pbVar45) {
         *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 ) = pbVar32 + 1;
         iVar15 = iVar15 + ( uint ) * pbVar32;
         pbVar32 = pbVar32 + 1;
      }
 else {
         piVar23 = (int*)**(undefined8**)( puVar37 + -0x14f8 );
         if (( piVar23 != (int*)0x0 ) && ( *piVar23 == 0 )) {
            *piVar23 = 0x55;
         }

      }

      if (puVar41 != (uint*)( lVar29 + ( ulong ) * (uint*)( puVar20 + 4 ) * 8 )) {
         *puVar41 = iVar15 + 0x6c;
         lVar29 = *(long*)( puVar37 + -0x14e8 );
         puVar41[1] = 2;
         uVar19 = *(uint*)( lVar29 + 8 );
         puVar20[3] = puVar41 + 2;
         cVar10 = *(char*)( lVar29 + 0xc );
         uVar22 = (ulong)uVar19;
         goto LAB_00107fe0;
      }

      piVar23 = (int*)puVar20[1];
   }
 else {
      if (bVar35 == 0xff) {
         if (pbVar32 < pbVar45) {
            pbVar1 = pbVar32 + 1;
            *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 ) = pbVar1;
            bVar35 = *pbVar32;
            if (pbVar1 < pbVar45) {
               uVar19 = (uint)bVar35 << 0x18;
               *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 ) = pbVar32 + 2;
               if (pbVar32 + 2 < pbVar45) {
                  uVar36 = (uint)pbVar32[1] << 0x10;
                  *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 ) = pbVar32 + 3;
                  bVar35 = pbVar32[2];
                  if (pbVar32 + 3 < pbVar45) {
                     *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 ) = pbVar32 + 4;
                     uVar19 = (uint)bVar35 << 8 | uVar36 | uVar19 | (uint)pbVar32[3];
                     pbVar32 = pbVar32 + 4;
                     uVar18 = uVar19;
                     goto LAB_00109be6;
                  }

                  puVar33 = *(undefined8**)( puVar37 + -0x14f8 );
                  piVar23 = (int*)*puVar33;
                  uVar19 = (uint)bVar35 << 8 | uVar36 | uVar19;
                  uVar18 = uVar19;
                  if (piVar23 != (int*)0x0) goto LAB_0010acec;
               }
 else {
                  piVar23 = (int*)**(undefined8**)( puVar37 + -0x14f8 );
                  uVar19 = (uint)pbVar32[1] << 0x10 | uVar19;
                  uVar18 = uVar19;
                  if (piVar23 != (int*)0x0) goto LAB_0010acec;
                  LAB_0010acf8:puVar33 = *(undefined8**)( puVar37 + -0x14f8 );
               }

               pbVar32 = (byte*)puVar33[3];
            }
 else {
               uVar19 = (uint)bVar35 << 0x18;
               uVar18 = (uint)bVar35 << 0x18;
               piVar23 = (int*)**(undefined8**)( puVar37 + -0x14f8 );
               pbVar32 = pbVar1;
               if (piVar23 != (int*)0x0) {
                  LAB_0010acec:if (*piVar23 == 0) {
                     *piVar23 = 0x55;
                  }

                  goto LAB_0010acf8;
               }

            }

         }
 else {
            piVar23 = (int*)**(undefined8**)( puVar37 + -0x14f8 );
            uVar19 = 0;
            if (piVar23 != (int*)0x0) {
               if (*piVar23 == 0) {
                  *piVar23 = 0x55;
               }

               uVar19 = 0;
            }

         }

         LAB_00109be6:puVar2 = (uint*)( lVar29 + ( ulong ) * (uint*)( puVar20 + 4 ) * 8 );
         if (cVar10 == '\0') {
            if (puVar2 == puVar41) goto LAB_001098db;
            *puVar41 = uVar18;
            puVar41[1] = 0;
            puVar20[3] = puVar41 + 2;
            goto LAB_00108b2d;
         }

         uVar28 = puVar37[-0x14c8];
         if (64000 < uVar19 + 32000) {
            uVar28 = 1;
         }

         puVar37[-0x14c8] = uVar28;
         if (puVar2 == puVar41) {
            LAB_00109e6c:piVar23 = (int*)puVar20[1];
            goto joined_r0x001098e5;
         }

         lVar29 = *(long*)( puVar37 + -0x14e8 );
         *puVar41 = uVar18;
         puVar41[1] = 2;
         uVar19 = *(uint*)( lVar29 + 8 );
         uVar22 = (ulong)uVar19;
         puVar20[3] = puVar41 + 2;
         cVar10 = *(char*)( lVar29 + 0xc );
         goto LAB_00107fe0;
      }

      iVar15 = ( uVar36 - 0xfb ) * 0x100;
      if (pbVar32 < pbVar45) {
         *(byte**)( *(long*)( puVar37 + -0x14f8 ) + 0x18 ) = pbVar32 + 1;
         iVar15 = iVar15 + ( uint ) * pbVar32;
         pbVar32 = pbVar32 + 1;
      }
 else {
         piVar23 = (int*)**(undefined8**)( puVar37 + -0x14f8 );
         if (( piVar23 != (int*)0x0 ) && ( *piVar23 == 0 )) {
            *piVar23 = 0x55;
         }

      }

      if (puVar41 != (uint*)( lVar29 + ( ulong ) * (uint*)( puVar20 + 4 ) * 8 )) {
         lVar29 = *(long*)( puVar37 + -0x14e8 );
         *puVar41 = -iVar15 - 0x6c;
         puVar41[1] = 2;
         uVar19 = *(uint*)( lVar29 + 8 );
         puVar20[3] = puVar41 + 2;
         cVar10 = *(char*)( lVar29 + 0xc );
         uVar22 = (ulong)uVar19;
         goto LAB_00107fe0;
      }

      piVar23 = (int*)puVar20[1];
   }

   if (( piVar23 != (int*)0x0 ) && ( *piVar23 == 0 )) goto LAB_00109642;
   goto LAB_00109d43;
   switchD_001081c9_caseD_13:lVar29 = puVar20[2];
   if (( 1 < ( uint )(puVar20[3] - lVar29 >> 3) ) && ( puVar37[-0x12d0] != '\0' )) goto LAB_00108f8c;
   *(undefined8*)( puVar37 + -0x1500 ) = 0x10866a;
   cf2_doStems(*(undefined8*)( puVar37 + -0x14e8 ), puVar20, *(undefined8*)( puVar37 + -0x1470 ), *(undefined8*)( puVar37 + -0x1478 ), puVar37 + -0x13ed, 0);
   if (*(char*)( *(long*)( puVar37 + -0x14d0 ) + 0x438 ) != '\0') goto LAB_001097ac;
   lVar29 = *(long*)( puVar37 + -0x1368 );
   lVar34 = *(long*)( puVar37 + -0x1328 );
   if (bVar35 == 0x13) {
      lVar24 = *(long*)( puVar37 + -0x14f8 );
      *(undefined8*)( puVar37 + -0x1500 ) = 0x10982c;
      cf2_hintmask_read(*(undefined8*)( puVar37 + -0x1468 ), lVar24, lVar29 + lVar34);
      uVar21 = puVar20[2];
      goto LAB_0010917e;
   }

   lVar24 = *(long*)( puVar37 + -0x14e8 );
   lVar26 = *(long*)( puVar37 + -0x14f8 );
   *(undefined8*)( puVar37 + -0x1280 ) = 0;
   *(undefined1(*) [16])( puVar37 + -0x12a0 ) = (undefined1[16])0x0;
   puVar33 = (undefined8*)( puVar37 + -0x11f8 );
   for (lVar30 = 0x305; lVar30 != 0; lVar30 = lVar30 + -1) {
      *puVar33 = 0;
      puVar33 = puVar33 + (ulong)bVar48 * -2 + 1;
   }

   uVar28 = *(undefined1*)( lVar24 + 0x100 );
   puVar39 = puVar37 + -0x12a8;
   *(long*)( puVar37 + -0x11f8 ) = lVar24;
   *(undefined1(*) [16])( puVar37 + -0x1290 ) = (undefined1[16])0x0;
   puVar37[-0x11df] = uVar28;
   *(undefined4*)( puVar37 + -0x11dc ) = *(undefined4*)( puVar37 + -0x1434 );
   *(undefined8*)( puVar37 + -0x11f0 ) = *(undefined8*)( puVar37 + -0x1428 );
   *(undefined8*)( puVar37 + -0x11e8 ) = *(undefined8*)( puVar37 + -0x1430 );
   *(undefined8*)( puVar37 + -0x12a8 ) = *(undefined8*)( puVar37 + -0x14b8 );
   *(undefined8*)( puVar37 + -0x1500 ) = 0x108734;
   cf2_hintmask_read(puVar39, lVar26, lVar29 + lVar34);
   *(undefined8*)( puVar37 + -0x1500 ) = 0x108755;
   cf2_hintmap_build(puVar37 + -0x11f8, *(undefined8*)( puVar37 + -0x1440 ), *(undefined8*)( puVar37 + -0x1470 ), puVar39, 0);
   cVar10 = *(char*)( lVar24 + 0xc );
   uVar19 = *(uint*)( lVar24 + 8 );
   uVar22 = (ulong)uVar19;
   pbVar32 = *(byte**)( lVar26 + 0x18 );
   uVar21 = puVar20[2];
   pbVar45 = *(byte**)( lVar26 + 0x10 );
   goto LAB_00108132;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 cf2_decoder_parse_charstrings(undefined8 *param_1, long param_2, long param_3) {
   char cVar1;
   char cVar2;
   char cVar3;
   byte bVar4;
   ushort uVar5;
   long lVar6;
   undefined8 uVar7;
   char cVar8;
   int iVar9;
   undefined4 uVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   long lVar15;
   undefined8 uVar16;
   long lVar17;
   ulong uVar18;
   int *piVar19;
   uint uVar20;
   ulong uVar21;
   ulong extraout_RDX;
   int iVar22;
   undefined8 *puVar23;
   int iVar24;
   undefined8 *puVar25;
   ulong uVar26;
   int iVar27;
   undefined1 uVar28;
   ulong uVar29;
   long in_FS_OFFSET;
   bool bVar30;
   byte bVar31;
   undefined8 uVar32;
   int local_ac;
   int local_a8;
   undefined4 local_a4;
   undefined8 local_a0;
   undefined1 local_98[16];
   undefined1 local_88[8];
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_68;
   long local_60;
   long local_58;
   long local_50;
   long local_40;
   bVar31 = 0;
   cVar8 = *(char*)( (long)param_1 + 0x5c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_ac = 0;
   if (( cVar8 != '\0' ) && ( param_1[0x84] == 0 )) {
      uVar10 = 8;
      goto LAB_0010b8d9;
   }

   puVar25 = (undefined8*)param_1[0x85];
   uVar32 = *param_1;
   puVar23 = (undefined8*)*puVar25;
   if (puVar23 == (undefined8*)0x0) {
      puVar25[1] = cf2_free_instance;
      uVar16 = ft_mem_alloc(uVar32, 0x290, &local_ac);
      *puVar25 = uVar16;
      uVar10 = 0x40;
      if (local_ac != 0) goto LAB_0010b8d9;
      puVar23 = *(undefined8**)param_1[0x85];
      *puVar23 = uVar32;
      if (cVar8 == '\0') {
         puVar23[0x51] = *(undefined8*)( param_1[0x83] + 0x1368 );
      }

      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( puVar23 + ( 2*i + 24 ) ) = (undefined1[16])0;
      }

      puVar23[0x19] = cf2_builder_cubeTo;
      puVar23[0x1b] = uVar32;
      puVar23[0x1c] = puVar23 + 1;
      puVar23[0x16] = cf2_builder_moveTo;
      puVar23[0x17] = cf2_builder_lineTo;
   }

   lVar17 = param_1[1];
   puVar23[0x1d] = param_1;
   puVar23[0x1e] = param_1;
   local_58 = param_2;
   if (param_2 != 0) {
      local_58 = param_3 + param_2;
   }

   lVar15 = *(long*)( lVar17 + 0xb0 );
   cVar1 = *(char*)( *(long*)( lVar17 + 0xf0 ) + 0x70 );
   lVar6 = param_1[2];
   local_68 = 0;
   cVar2 = *(char*)( lVar15 + 0x3c );
   cVar3 = *(char*)( lVar6 + 0x131 );
   local_78 = 0;
   stack0xffffffffffffff7c = SUB1612((undefined1[16])0x0, 4);
   if (*(char*)( lVar6 + 0x130 ) == '\0') {
      local_88._0_4_ = 0x400;
      uStack_80._4_4_ = 0x400;
      uVar28 = 0;
      if (cVar8 == '\0') {
         uVar28 = *(undefined1*)( lVar17 + 0x4b8 );
      }

      *(undefined1*)( (long)puVar23 + 0xd ) = uVar28;
      uVar20 = 0;
      *(char*)( (long)puVar23 + 0xc ) = cVar8;
   }
 else {
      iVar14 = (int)*(undefined8*)( lVar6 + 0x138 );
      iVar11 = iVar14 + 0x20;
      iVar14 = iVar14 + 0x5f;
      if (-1 < iVar11) {
         iVar14 = iVar11;
      }

      local_88._0_4_ = iVar14 >> 6;
      iVar14 = (int)*(undefined8*)( lVar6 + 0x140 );
      iVar11 = iVar14 + 0x20;
      iVar14 = iVar14 + 0x5f;
      if (-1 < iVar11) {
         iVar14 = iVar11;
      }

      uVar28 = 0;
      uStack_80._4_4_ = iVar14 >> 6;
      if (cVar8 == '\0') {
         uVar28 = *(undefined1*)( lVar17 + 0x4b8 );
      }

      *(ushort*)( (long)puVar23 + 0xc ) = CONCAT11(uVar28, cVar8);
      uVar20 = 1;
   }

   *(uint*)( puVar23 + 2 ) = uVar20;
   if (( cVar3 != '\0' ) && ( ( cVar1 == '\0' || ( ( cVar1 < '\0' && ( cVar2 == '\0' ) ) ) ) )) {
      *(uint*)( puVar23 + 2 ) = uVar20 | 2;
   }

   uVar32 = *(undefined8*)( lVar15 + 0x40 );
   uVar16 = *(undefined8*)( lVar15 + 0x48 );
   uVar7 = *(undefined8*)( lVar15 + 0x58 );
   uVar5 = *(ushort*)( lVar17 + 0x88 );
   *(undefined8*)( (long)puVar23 + 0x114 ) = *(undefined8*)( lVar15 + 0x50 );
   *(undefined8*)( (long)puVar23 + 0x11c ) = uVar7;
   *(uint*)( puVar23 + 0x14 ) = (uint)uVar5;
   *(undefined8*)( (long)puVar23 + 0x104 ) = uVar32;
   *(undefined8*)( (long)puVar23 + 0x10c ) = uVar16;
   local_60 = param_2;
   local_50 = param_2;
   if (cVar3 != '\0') {
      iVar14 = local_88._0_4_;
      if (( (int)local_88._0_4_ < 1 ) || ( iVar11 = uStack_80._4_4_ < 1 )) {
         uVar10 = 0x24;
         goto LAB_0010b8d9;
      }

      if (uVar5 < 0x8000) {
         iVar9 = FT_DivFix(0x7d00000, (long)(int)( (uint)uVar5 << 0x10 ));
         if (iVar14 < iVar11) {
            iVar14 = iVar11;
         }

         if (iVar14 <= iVar9) {
            param_1 = (undefined8*)puVar23[0x1e];
            lVar17 = param_1[1];
            goto LAB_0010b239;
         }

      }

      uVar10 = 0xa4;
      goto LAB_0010b8d9;
   }

   LAB_0010b239:iVar14 = *(int*)( (long)puVar23 + 0xa4 );
   local_a8 = 0;
   local_98 = (undefined1[16])0x0;
   iVar11 = *(int*)( puVar23 + 0x15 );
   lVar15 = param_1[0x84];
   local_a4 = 0;
   local_a0 = 0;
   *(undefined4*)( puVar23 + 1 ) = 0;
   bVar30 = lVar15 != puVar23[0x1f];
   if (bVar30) {
      puVar23[0x1f] = lVar15;
   }

   if (( *(char*)( (long)puVar23 + 0xc ) == '\0' ) && ( *(int*)( param_1[0x83] + 0x1398 ) != 0 )) {
      lVar6 = puVar23[0x51];
      iVar9 = ( **(code**)( *(long*)( lVar17 + 0x380 ) + 0x88 ) )(lVar17, &local_a4, 0, &local_a0, 0);
      *(int*)( puVar23 + 1 ) = iVar9;
      if (iVar9 == 0) {
         cVar8 = ( **(code**)( lVar6 + 0x18 ) )(lVar15 + 0x420, *(undefined4*)( lVar15 + 0x410 ), local_a4, local_a0);
         if (cVar8 != '\0') {
            ( **(code**)( lVar6 + 8 ) )(param_1[0x83], lVar15, local_a4, local_a0);
         }

         bVar30 = cVar8 != '\0' || bVar30;
         uVar32 = *(undefined8*)( lVar15 + 0x428 );
         *(undefined1*)( (long)puVar23 + 0x61 ) = 0;
         uVar10 = *(undefined4*)( lVar15 + 0x410 );
         lVar17 = param_1[1];
         puVar23[0xd] = uVar32;
         puVar23[0x13] = local_a0;
         puVar23[0x12] = CONCAT44(local_a4, uVar10);
         goto LAB_0010b2ab;
      }

   }
 else {
      LAB_0010b2ab:iVar9 = ( uint ) * (ushort*)( *(long*)( lVar17 + 0xa0 ) + 0x1a ) << 0x10;
      if (iVar9 != *(int*)( (long)puVar23 + 0x5c )) {
         *(int*)( (long)puVar23 + 0x5c ) = iVar9;
         bVar30 = true;
      }

      *(char*)( puVar23 + 0x20 ) = (char)*(uint*)( puVar23 + 2 );
      *(byte*)( puVar23 + 0x20 ) = *(byte*)( puVar23 + 0x20 ) & 1;
      uVar20 = *(uint*)( puVar23 + 2 ) & 2;
      uVar21 = (ulong)uVar20;
      if (local_88 == ( undefined1[8] ) * (long*)( (long)puVar23 + 0x14 ) && uStack_80 == *(long*)( (long)puVar23 + 0x1c )) {
         if (*(byte*)( (long)puVar23 + 0x102 ) != uVar20) goto LAB_0010b332;
         if (bVar30) goto LAB_0010b33b;
      }
 else {
         *(undefined8*)( (long)puVar23 + 0x24 ) = 0;
         *(undefined1(*) [8])( (long)puVar23 + 0x14 ) = local_88;
         *(long*)( (long)puVar23 + 0x1c ) = uStack_80;
         *(undefined1(*) [8])( (long)puVar23 + 0x2c ) = local_88;
         *(long*)( (long)puVar23 + 0x34 ) = uStack_80;
         uVar16 = _UNK_0010cc58;
         uVar32 = __LC10;
         *(undefined8*)( (long)puVar23 + 0x3c ) = local_78;
         *(undefined8*)( (long)puVar23 + 0x44 ) = uVar32;
         *(undefined8*)( (long)puVar23 + 0x4c ) = uVar16;
         if (*(byte*)( (long)puVar23 + 0x102 ) != uVar20) {
            LAB_0010b332:*(bool*)( (long)puVar23 + 0x102 ) = uVar20 != 0;
         }

         LAB_0010b33b:iVar9 = *(int*)( puVar23 + 0x14 );
         if (iVar9 == 0) {
            bVar30 = false;
            uVar29 = 0x10000;
            iVar9 = 1000;
         }
 else {
            uVar21 = 0x3e80000 % (long)iVar9 & 0xffffffff;
            iVar24 = (int)( 0x3e80000 / (long)iVar9 );
            uVar29 = (ulong)iVar24;
            bVar30 = iVar24 < 0x28f;
         }

         iVar24 = *(int*)( (long)puVar23 + 0x5c );
         if (*(int*)( (long)puVar23 + 0x5c ) < 0x40000) {
            iVar24 = 0x40000;
         }

         iVar27 = (int)*(undefined8*)( param_1[0x84] + 0x2f0 );
         *(int*)( (long)puVar23 + 0x124 ) = iVar27 << 0x10;
         if (iVar27 << 0x10 < 1) {
            uVar10 = FT_DivFix(0x4b0000, uVar29, uVar21);
            *(undefined4*)( (long)puVar23 + 0x124 ) = uVar10;
            uVar21 = extraout_RDX;
         }

         lVar17 = (long)puVar23 + 0x104;
         if (iVar14 < 1) {
            *(undefined4*)( (long)puVar23 + 300 ) = 0;
            if (( *(char*)( (long)puVar23 + 0x102 ) != '\0' ) && ( !bVar30 )) {
               cf2_computeDarkening_part_0_constprop_0(uVar29 & 0xffffffff, iVar24, *(undefined4*)( (long)puVar23 + 0x124 ), (long)puVar23 + 300, 0, *(char*)( (long)puVar23 + 0x102 ), lVar17);
            }

         }
 else {
            lVar15 = FT_DivFix((long)( iVar9 << 0x10 ), (long)iVar24, uVar21);
            uVar21 = (ulong)iVar14;
            if (lVar15 < (long)uVar21) {
               *(undefined4*)( (long)puVar23 + 300 ) = 0;
               uVar10 = *(undefined4*)( (long)puVar23 + 0x124 );
            }
 else {
               uVar20 = FT_DivFix((long)( iVar9 << 0x10 ), (long)iVar24);
               uVar10 = *(undefined4*)( (long)puVar23 + 0x124 );
               *(undefined4*)( (long)puVar23 + 300 ) = 0;
               uVar21 = (ulong)uVar20;
               if (uVar20 == 0) goto LAB_0010b416;
            }

            if (0x28e < (int)uVar29) {
               cf2_computeDarkening_part_0_constprop_0(uVar29 & 0xffffffff, iVar24, uVar10, (long)puVar23 + 300, uVar21 & 0xffffffff, 0, lVar17);
            }

         }

         LAB_0010b416:iVar14 = (int)*(undefined8*)( param_1[0x84] + 0x2e8 );
         if (( iVar14 << 0x10 < 1 ) || ( iVar9 = *(int*)( (long)puVar23 + 0x124 ) ),iVar9 == iVar14 * 0x20000 || SBORROW4(iVar9, iVar14 * 0x20000) != iVar9 + iVar14 * -0x20000 < 0) {
            uVar10 = FT_DivFix(0x6e0000, uVar29);
         }
 else {
            uVar10 = FT_DivFix(0x4b0000, uVar29);
         }

         *(undefined4*)( puVar23 + 0x25 ) = uVar10;
         *(undefined4*)( puVar23 + 0x26 ) = 0;
         if (( iVar11 != 0 || *(char*)( (long)puVar23 + 0x102 ) != '\0' ) && ( !bVar30 )) {
            cf2_computeDarkening_part_0_constprop_0(uVar29 & 0xffffffff, iVar24, uVar10, puVar23 + 0x26, iVar11, *(char*)( (long)puVar23 + 0x102 ), lVar17);
         }

         bVar30 = true;
         if (*(int*)( (long)puVar23 + 300 ) == 0) {
            bVar30 = *(int*)( puVar23 + 0x26 ) != 0;
         }

         *(bool*)( (long)puVar23 + 0x101 ) = bVar30;
         lVar17 = puVar23[0x1e];
         puVar23[0x27] = 0;
         *(undefined1*)( (long)puVar23 + 0x134 ) = 0;
         puVar23[0x50] = 0;
         puVar25 = (undefined8*)( ( ulong )(puVar23 + 0x28) & 0xfffffffffffffff8 );
         for (uVar21 = ( ulong )(( (int)puVar23 - (int)(undefined8*)( ( ulong )(puVar23 + 0x28) & 0xfffffffffffffff8 ) ) + 0x288U >> 3); uVar21 != 0; uVar21 = uVar21 - 1) {
            *puVar25 = 0;
            puVar25 = puVar25 + (ulong)bVar31 * -2 + 1;
         }

         *(undefined4*)( puVar23 + 0x27 ) = *(undefined4*)( puVar23 + 7 );
         uVar10 = FT_DivFix(*(undefined8*)( *(long*)( lVar17 + 0x420 ) + 0x2d0 ), 0x3e80000);
         lVar17 = *(long*)( lVar17 + 0x420 );
         *(undefined4*)( (long)puVar23 + 0x144 ) = uVar10;
         *(int*)( puVar23 + 0x29 ) = *(int*)( lVar17 + 0x2d8 ) << 0x10;
         *(int*)( (long)puVar23 + 0x14c ) = *(int*)( lVar17 + 0x2e0 ) << 0x10;
         uVar21 = ( ulong ) * (byte*)( lVar17 + 0x148 );
         bVar31 = *(byte*)( lVar17 + 0x149 );
         uVar29 = ( ulong ) * (byte*)( lVar17 + 0x14a );
         bVar4 = *(byte*)( lVar17 + 0x14b );
         if (*(int*)( lVar17 + 0x3e4 ) == 1) {
            if (uVar21 != 0) {
               iVar14 = 0;
               uVar18 = 0;
               if (( ( ( uVar21 != 4 ) || ( -0x780001 < *(int*)( lVar17 + 0x150 ) * 0x10000 ) ) || ( -0x780001 < *(int*)( lVar17 + 0x158 ) * 0x10000 ) ) || ( ( uVar18 = 0 * (int*)( lVar17 + 0x160 ) * 0x10000 < 0x3700001 || ( *(int*)( lVar17 + 0x168 ) * 0x10000 < 0x3700001 ) ) )) goto LAB_0010b588;
            }

            iVar11 = *(int*)( puVar23 + 0x27 );
            *(undefined4*)( puVar23 + 0x31 ) = 0xff87ffff;
            *(undefined4*)( puVar23 + 0x2f ) = 0x31;
            *(int*)( puVar23 + 0x32 ) = iVar11;
            *(int*)( puVar23 + 0x2e ) = iVar11;
            *(undefined1*)( (long)puVar23 + 0x141 ) = 1;
            *(undefined4*)( puVar23 + 0x2b ) = 0x32;
            lVar17 = (long)iVar11 * -0x780001;
            *(uint*)( (long)puVar23 + 0x18c ) = ( (int)( ( ulong )(lVar17 + 0x8000 + ( lVar17 >> 0x3f )) >> 0x10 ) + 0x8000U & 0xffff0000 ) - 0x8000;
            iVar14 = *(int*)( puVar23 + 0x26 ) * 2 + 0x3700001;
            *(int*)( puVar23 + 0x2d ) = iVar14;
            lVar17 = (long)iVar14 * (long)iVar11;
            *(uint*)( (long)puVar23 + 0x16c ) = ( (int)( ( ulong )(lVar17 + 0x8000 + ( lVar17 >> 0x3f )) >> 0x10 ) + 0x8000U & 0xffff0000 ) + 0x8000;
         }
 else {
            iVar14 = 0;
            uVar18 = 0;
            if (uVar21 != 0) {
               LAB_0010b588:do {
                  uVar20 = *(uint*)( (long)puVar23 + 0x13c );
                  uVar26 = (ulong)uVar20;
                  iVar9 = *(int*)( lVar17 + 0x150 + uVar18 * 8 );
                  iVar24 = iVar9 * 0x10000;
                  iVar11 = *(int*)( lVar17 + 0x158 + uVar18 * 8 );
                  *(int*)( (long)puVar23 + uVar26 * 0x14 + 0x198 ) = iVar24;
                  iVar11 = iVar11 * 0x10000;
                  *(int*)( (long)puVar23 + uVar26 * 0x14 + 0x19c ) = iVar11;
                  iVar9 = iVar11 + iVar9 * -0x10000;
                  if (-1 < iVar9) {
                     if (iVar14 < iVar9) {
                        iVar14 = iVar9;
                     }

                     if (uVar18 != 0) {
                        iVar9 = *(int*)( puVar23 + 0x26 );
                        *(int*)( (long)puVar23 + uVar26 * 0x14 + 0x19c ) = iVar11 + iVar9 * 2;
                        iVar11 = iVar24 + iVar9 * 2;
                        *(int*)( (long)puVar23 + uVar26 * 0x14 + 0x198 ) = iVar11;
                     }

                     *(int*)( (long)puVar23 + uVar26 * 0x14 + 0x1a0 ) = iVar11;
                     *(bool*)( (long)puVar23 + uVar26 * 0x14 + 0x1a8 ) = uVar18 == 0;
                     *(uint*)( (long)puVar23 + 0x13c ) = uVar20 + 1;
                  }

                  uVar18 = uVar18 + 2;
               }
 while ( uVar18 < uVar21 );
            }

            if ((ulong)bVar31 != 0) {
               piVar19 = (int*)( lVar17 + 0x1c0 );
               do {
                  uVar20 = *(uint*)( (long)puVar23 + 0x13c );
                  iVar11 = *piVar19;
                  iVar9 = piVar19[2];
                  *(int*)( (long)puVar23 + (ulong)uVar20 * 0x14 + 0x198 ) = iVar11 * 0x10000;
                  iVar9 = iVar9 * 0x10000;
                  *(int*)( (long)puVar23 + (ulong)uVar20 * 0x14 + 0x19c ) = iVar9;
                  iVar11 = iVar9 + iVar11 * -0x10000;
                  if (-1 < iVar11) {
                     *(undefined1*)( (long)puVar23 + (ulong)uVar20 * 0x14 + 0x1a8 ) = 1;
                     if (iVar14 < iVar11) {
                        iVar14 = iVar11;
                     }

                     *(int*)( (long)puVar23 + (ulong)uVar20 * 0x14 + 0x1a0 ) = iVar9;
                     *(uint*)( (long)puVar23 + 0x13c ) = uVar20 + 1;
                  }

                  piVar19 = piVar19 + 4;
               }
 while ( (int*)( lVar17 + 0x1d0 + ( (ulong)bVar31 * 8 - 8 & 0xfffffffffffffff0 ) ) != piVar19 );
            }

            iVar11 = FT_DivFix(0x10000, (long)*(int*)( puVar23 + 0x27 ));
            uVar20 = *(uint*)( (long)puVar23 + 0x13c );
            uVar21 = 0;
            piVar19 = (int*)( puVar23 + 0x34 );
            if (uVar20 != 0) {
               do {
                  iVar9 = *piVar19;
                  if ((char)piVar19[2] == '\0') {
                     if (2 < uVar29) {
                        iVar24 = *(int*)( puVar23 + 0x26 );
                        iVar27 = 0x7fffffff;
                        uVar18 = 2;
                        do {
                           iVar12 = *(int*)( lVar17 + 0x210 + uVar18 * 8 ) * 0x10000 + iVar24 * 2;
                           iVar13 = iVar9 - iVar12;
                           if (iVar9 - iVar12 < 0) {
                              iVar13 = iVar12 - iVar9;
                           }

                           iVar22 = iVar11;
                           if (iVar27 <= iVar11) {
                              iVar22 = iVar27;
                           }

                        }
 while ( uVar18 = uVar18 < uVar29 );
                     }

                  }
 else {
                     iVar24 = 0x7fffffff;
                     if ((ulong)bVar4 != 0) {
                        uVar18 = 0;
                        do {
                           iVar27 = *(int*)( lVar17 + 0x288 + uVar18 * 8 );
                           iVar13 = iVar27 * 0x10000;
                           iVar27 = iVar9 + iVar27 * -0x10000;
                           if (iVar27 < 0) {
                              iVar27 = iVar13 - iVar9;
                           }

                           iVar12 = iVar24;
                           if (iVar11 <= iVar24) {
                              iVar12 = iVar11;
                           }

                           if (( iVar27 < iVar12 ) && ( *piVar19= iVar13,iVar24 = iVar27,iVar27 == 0 )) {
                              iVar24 = 0;
                              break;
                           }

                           uVar18 = uVar18 + 2;
                        }
 while ( uVar18 < bVar4 );
                     }

                     if (1 < uVar29) {
                        iVar13 = *(int*)( lVar17 + 0x218 ) * 0x10000;
                        iVar27 = iVar9 + *(int*)( lVar17 + 0x218 ) * -0x10000;
                        if (iVar27 < 0) {
                           iVar27 = iVar13 - iVar9;
                        }

                        if (iVar11 <= iVar24) {
                           iVar24 = iVar11;
                        }

                        if (iVar27 < iVar24) {
                           *piVar19 = iVar13;
                        }

                     }

                  }

                  uVar21 = uVar21 + 1;
                  piVar19 = piVar19 + 5;
               }
 while ( uVar20 != uVar21 );
            }

            iVar11 = *(int*)( (long)puVar23 + 0x144 );
            if (iVar14 < 1) {
               LAB_0010b763:iVar14 = *(int*)( puVar23 + 0x27 );
               if (iVar14 < iVar11) {
                  LAB_0010bb9b:*(undefined1*)( puVar23 + 0x28 ) = 1;
                  iVar14 = FT_MulDiv(0x999a, (long)iVar14, (long)iVar11);
                  iVar14 = 0x999a - iVar14;
                  if (0x7fff < iVar14) {
                     iVar14 = 0x7fff;
                  }

                  *(int*)( puVar23 + 0x2a ) = iVar14;
               }

            }
 else {
               lVar17 = FT_DivFix(0x10000, (long)iVar14);
               if (lVar17 < iVar11) {
                  iVar11 = FT_DivFix(0x10000, (long)iVar14);
                  *(int*)( (long)puVar23 + 0x144 ) = iVar11;
                  goto LAB_0010b763;
               }

               iVar11 = *(int*)( (long)puVar23 + 0x144 );
               iVar14 = *(int*)( puVar23 + 0x27 );
               if (iVar14 < iVar11) goto LAB_0010bb9b;
            }

            if (*(char*)( (long)puVar23 + 0x102 ) != '\0') {
               *(undefined4*)( puVar23 + 0x2a ) = 0;
            }

            uVar21 = ( ulong ) * (uint*)( (long)puVar23 + 0x13c );
            if (uVar21 != 0) {
               iVar14 = *(int*)( puVar23 + 0x2a );
               iVar11 = *(int*)( puVar23 + 0x27 );
               uVar29 = 0;
               piVar19 = (int*)( puVar23 + 0x34 );
               do {
                  while (iVar9 = (int)( ( ulong )((long)*piVar19 * (long)iVar11 + 0x8000 + ( (long)*piVar19 * (long)iVar11 >> 0x3f )) >> 0x10 ),(char)piVar19[2] != '\0') {
                     uVar29 = uVar29 + 1;
                     piVar19[1] = ( iVar9 - iVar14 ) + 0x8000U & 0xffff0000;
                     piVar19 = piVar19 + 5;
                     if (uVar21 == uVar29) goto LAB_0010b806;
                  }
;
                  uVar29 = uVar29 + 1;
                  piVar19[1] = iVar14 + 0x8000 + iVar9 & 0xffff0000;
                  piVar19 = piVar19 + 5;
               }
 while ( uVar21 != uVar29 );
            }

         }

      }

      LAB_0010b806:if (*(int*)( puVar23 + 1 ) == 0) {
         *(undefined1*)( (long)puVar23 + 0x134 ) = 0;
         cVar8 = *(char*)( (long)puVar23 + 0x101 );
         while (true) {
            *(undefined4*)( puVar23 + 0x1a ) = 0;
            FT_GlyphLoader_Rewind(*(undefined8*)( puVar23[0x1d] + 0x18 ));
            uVar32 = 0;
            cf2_interpT2CharString(puVar23, &local_68, puVar23 + 0x16, local_98, 0, 0, 0);
            if (*(int*)( puVar23 + 1 ) != 0) break;
            if (( cVar8 == '\0' ) || ( -1 < *(int*)( puVar23 + 0x1a ) )) {
               lVar17 = puVar23[0x1d];
               ps_builder_close_contour_isra_0(*(undefined8*)( lVar17 + 0x28 ), 0, uVar32, &local_a8);
               FT_GlyphLoader_Add(*(undefined8*)( lVar17 + 0x18 ));
               if (*(int*)( puVar23 + 1 ) == 0) {
                  uVar10 = 0;
                  if (*(char*)( puVar23[0x1d] + 0x5c ) == '\0') {
                     **(long**)( puVar23[0x1d] + 0x430 ) = (long)(short)( ( uint )(local_a8 + 0x8000) >> 0x10 );
                  }

                  goto LAB_0010b8d9;
               }

               break;
            }

            *(undefined1*)( (long)puVar23 + 0x134 ) = 1;
            cVar8 = '\0';
         }
;
      }

   }

   uVar10 = 3;
   LAB_0010b8d9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}


int compare_kern_pairs(uint *param_1, uint *param_2) {
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
undefined8 t1_get_ps_name(long param_1) {
   return *(undefined8*)( param_1 + 0x218 );
}
undefined8 t1_ps_get_font_info(long param_1, undefined8 *param_2) {
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
undefined8 t1_ps_get_font_extra(long param_1, undefined2 *param_2) {
   *param_2 = *(undefined2*)( param_1 + 0x130 );
   return 0;
}
undefined8 t1_ps_has_glyph_names(void) {
   return 1;
}
undefined8 t1_ps_get_font_private(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x140 );
   *param_2 = *(undefined8*)( param_1 + 0x138 );
   param_2[1] = uVar1;
   for (int i = 0; i < 13; i++) {
      uVar1 = *(undefined8*)( param_1 + ( 16*i + 336 ) );
      param_2[( 2*i + 2 )] = *(undefined8*)( param_1 + ( 16*i + 328 ) );
      param_2[( 2*i + 3 )] = uVar1;
   }

   return 0;
}
undefined8 T1_Get_Multi_Master(long param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   uint uVar6;
   puVar1 = *(undefined8**)( param_1 + 0x350 );
   if (puVar1 != (undefined8*)0x0) {
      lVar4 = 0;
      uVar5 = 0;
      uVar6 = ( uint )(( ulong ) * puVar1 >> 0x20);
      *param_2 = CONCAT44((int)*puVar1, uVar6);
      if (uVar6 != 0) {
         do {
            lVar3 = uVar5 + 1;
            uVar5 = uVar5 + 1;
            *(undefined8*)( (long)param_2 + lVar4 + 8 ) = puVar1[lVar3];
            puVar2 = *(undefined8**)( (long)puVar1 + lVar4 + 0xb0 );
            *(undefined8*)( (long)param_2 + lVar4 + 0x10 ) = *puVar2;
            *(undefined8*)( (long)param_2 + lVar4 + 0x18 ) = puVar2[( ulong ) * (byte*)( (long)puVar1 + lVar4 + 0xa8 ) - 1];
            lVar4 = lVar4 + 0x18;
         }
 while ( uVar5 != uVar6 );
      }

      return 0;
   }

   return 6;
}
undefined8 T1_Set_MM_WeightVector(long param_1, uint param_2, long param_3) {
   uint uVar1;
   uint *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   puVar2 = *(uint**)( param_1 + 0x350 );
   if (puVar2 == (uint*)0x0) {
      return 6;
   }

   if (param_2 == 0) {
      if (param_3 == 0) {
         uVar1 = *puVar2;
         if (uVar1 == 0) {
            return 0;
         }

         lVar3 = *(long*)( puVar2 + 0x44 );
         lVar5 = *(long*)( puVar2 + 0x42 );
         lVar4 = 0;
         do {
            *(undefined8*)( lVar5 + lVar4 ) = *(undefined8*)( lVar3 + lVar4 );
            lVar4 = lVar4 + 8;
         }
 while ( (ulong)uVar1 << 3 != lVar4 );
         return 0;
      }

   }
 else if (param_3 == 0) {
      return 6;
   }

   uVar1 = *puVar2;
   if (uVar1 <= param_2) {
      param_2 = uVar1;
   }

   if (param_2 != 0) {
      lVar3 = *(long*)( puVar2 + 0x42 );
      lVar5 = 0;
      do {
         *(undefined8*)( lVar3 + lVar5 ) = *(undefined8*)( param_3 + lVar5 );
         lVar5 = lVar5 + 8;
      }
 while ( lVar5 != (ulong)param_2 << 3 );
   }

   if (uVar1 <= param_2) {
      return 0;
   }

   memset((void*)( *(long*)( puVar2 + 0x42 ) + (ulong)param_2 * 8 ), 0, ( ulong )(( uVar1 - 1 ) - param_2) * 8 + 8);
   return 0;
}
undefined8 T1_Get_MM_WeightVector(long param_1, uint *param_2, long param_3) {
   uint uVar1;
   uint uVar2;
   uint *puVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   puVar3 = *(uint**)( param_1 + 0x350 );
   if (puVar3 == (uint*)0x0) {
      return 6;
   }

   uVar1 = *param_2;
   uVar2 = *puVar3;
   if (uVar2 <= uVar1) {
      if (uVar2 == 0) {
         uVar6 = 0;
      }
 else {
         lVar4 = *(long*)( puVar3 + 0x42 );
         lVar5 = 0;
         do {
            *(undefined8*)( param_3 + lVar5 ) = *(undefined8*)( lVar4 + lVar5 );
            lVar5 = lVar5 + 8;
         }
 while ( (ulong)uVar2 << 3 != lVar5 );
         uVar6 = (ulong)uVar2;
      }

      if ((uint)uVar6 < uVar1) {
         memset((void*)( param_3 + uVar6 * 8 ), 0, ( ulong )(( uVar1 - 1 ) - (uint)uVar6) * 8 + 8);
      }

      *param_2 = uVar2;
      return 0;
   }

   *param_2 = uVar2;
   return 6;
}
void parse_buildchar(long param_1, long param_2) {
   undefined4 uVar1;
   uVar1 = ( **(code**)( param_2 + 0x68 ) )(param_2, 0, 0, 0);
   *(undefined4*)( param_1 + 0x360 ) = uVar1;
   return;
}
void parse_private(undefined8 param_1, long param_2) {
   *(uint*)( param_2 + 0x2c4 ) = *(uint*)( param_2 + 0x2c4 ) | 1;
   return;
}
bool read_binary_data(long *param_1, long *param_2, long *param_3, char param_4) {
   byte *pbVar1;
   long lVar2;
   long lVar3;
   pbVar1 = (byte*)param_1[2];
   ( *(code*)param_1[7] )();
   if (( (byte*)*param_1 < pbVar1 ) && ( *(byte*)*param_1 - 0x30 < 10 )) {
      lVar3 = ( *(code*)param_1[9] )(param_1);
      ( *(code*)param_1[8] )(param_1);
      lVar2 = *param_1;
      *param_3 = lVar2 + 1;
      if (( -1 < lVar3 ) && ( lVar3 < (long)pbVar1 - ( lVar2 + 1 ) )) {
         lVar2 = param_1[3];
         *param_1 = *param_1 + lVar3 + 1;
         *param_2 = lVar3;
         return (int)lVar2 == 0;
      }

   }

   if (param_4 == '\0') {
      *(undefined4*)( param_1 + 3 ) = 3;
   }

   return false;
}
void T1_GlyphSlot_Done(long param_1) {
   if (*(long*)( param_1 + 0x128 ) != 0) {
      *(undefined8*)( *(long*)( param_1 + 0x128 ) + 0x40 ) = 0;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 T1_Driver_Init(long param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   uint uVar3;
   long in_FS_OFFSET;
   long local_20;
   undefined1 local_14[4];
   long local_10;
   uVar1 = _UNK_001077a8;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 0x40 ) = __LC0;
   *(undefined8*)( param_1 + 0x48 ) = uVar1;
   uVar2 = _UNK_001077b8;
   uVar1 = __LC1;
   uVar3 = (uint)local_14 ^ ( uint ) & local_20 ^ *(uint*)( param_1 + 0x10 );
   *(undefined4*)( param_1 + 0x38 ) = 1;
   *(undefined1*)( param_1 + 0x3c ) = 1;
   *(undefined8*)( param_1 + 0x50 ) = uVar1;
   *(undefined8*)( param_1 + 0x58 ) = uVar2;
   uVar3 = uVar3 >> 10 ^ uVar3 >> 0x14 ^ uVar3;
   if ((int)uVar3 < 0) {
      uVar3 = -uVar3;
   }
 else if (uVar3 == 0) {
      uVar3 = 0x75bcd15;
   }

   *(uint*)( param_1 + 0x60 ) = uVar3;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   local_20 = param_1;
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void T1_Driver_Done(void) {
   return;
}
undefined8 T1_GlyphSlot_Init(undefined8 *param_1) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1[1] + 0x370 );
   if (lVar1 != 0) {
      lVar2 = FT_Get_Module(*param_1, "pshinter");
      if (lVar2 != 0) {
         uVar3 = ( **(code**)( lVar1 + 8 ) )(lVar2);
         *(undefined8*)( param_1[0x25] + 0x40 ) = uVar3;
      }

   }

   return 0;
}
void T1_Parse_Glyph_And_Get_Char_String(long param_1, uint param_2, undefined8 *param_3, undefined1 *param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   int iVar10;
   long in_FS_OFFSET;
   long local_a28[3];
   long local_a10;
   undefined1 local_a08[1232];
   undefined1 local_538[1056];
   undefined1 *local_118;
   long local_40;
   lVar1 = *(long*)( param_1 + 8 );
   uVar5 = *(undefined8*)( lVar1 + 0x2b0 );
   lVar2 = *(long*)( lVar1 + 0x310 );
   uVar6 = *(undefined8*)( lVar1 + 0x2b8 );
   uVar7 = *(undefined8*)( lVar1 + 0x2c0 );
   uVar8 = *(undefined8*)( lVar1 + 0x2c8 );
   uVar9 = *(undefined8*)( lVar1 + 0x2d0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( lVar2 + 0x18 );
   plVar4 = *(long**)( *(long*)( lVar1 + 0xf0 ) + 0x68 );
   *(undefined8*)( param_1 + 0xab8 ) = *(undefined8*)( lVar1 + 0x2a8 );
   *(undefined8*)( param_1 + 0xac0 ) = uVar5;
   *(undefined8*)( param_1 + 0xac8 ) = uVar6;
   *(undefined8*)( param_1 + 0xad0 ) = uVar7;
   *(undefined8*)( param_1 + 0xad8 ) = uVar8;
   *(undefined8*)( param_1 + 0xae0 ) = uVar9;
   if (plVar4 == (long*)0x0) {
      *param_3 = *(undefined8*)( *(long*)( lVar1 + 0x290 ) + (ulong)param_2 * 8 );
      *(undefined4*)( param_3 + 1 ) = *(undefined4*)( *(long*)( lVar1 + 0x298 ) + (ulong)param_2 * 4 );
   }
 else {
      iVar10 = ( **(code**)*plVar4 )(plVar4[1]);
      if (iVar10 != 0) goto LAB_001005e2;
   }

   if (*(char*)( param_1 + 0x86 ) == '\0') {
      ( **(code**)( lVar2 + 0x30 ) )(local_538, param_1, 1);
      ( **(code**)( lVar2 + 0x38 ) )(lVar1, lVar1 + 0x138, local_a08);
      local_118 = local_a08;
      iVar10 = ( **(code**)( lVar3 + 0x18 ) )(local_538, *param_3, *(undefined4*)( param_3 + 1 ));
      if ((char)iVar10 == -0x5c) {
         *(undefined1*)( *(long*)( param_1 + 0x10 ) + 0x130 ) = 0;
         *param_4 = 1;
         iVar10 = ( **(code**)( lVar3 + 0x18 ) )(local_538, *param_3, *(undefined4*)( param_3 + 1 ));
      }

   }
 else {
      iVar10 = ( **(code**)( lVar3 + 0x10 ) )(param_1, *param_3, *(undefined4*)( param_3 + 1 ));
   }

   if (( ( iVar10 == 0 ) && ( plVar4 != (long*)0x0 ) ) && ( *(long*)( *plVar4 + 0x10 ) != 0 )) {
      local_a28[0] = FT_RoundFix(*(undefined8*)( param_1 + 0x40 ));
      local_a28[1] = 0;
      local_a28[0] = local_a28[0] >> 0x10;
      local_a28[2] = FT_RoundFix(*(undefined8*)( param_1 + 0x50 ));
      local_a28[2] = local_a28[2] >> 0x10;
      local_a10 = FT_RoundFix(*(undefined8*)( param_1 + 0x58 ));
      local_a10 = local_a10 >> 0x10;
      ( **(code**)( *plVar4 + 0x10 ) )(plVar4[1], param_2, 0, local_a28);
      *(long*)( param_1 + 0x40 ) = local_a28[0] << 0x10;
      *(long*)( param_1 + 0x50 ) = local_a28[2] << 0x10;
      *(long*)( param_1 + 0x58 ) = local_a10 << 0x10;
   }

   LAB_001005e2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int T1_Parse_Glyph(long param_1, undefined8 param_2) {
   long *plVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined1 local_39;
   undefined1 local_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = T1_Parse_Glyph_And_Get_Char_String(param_1, param_2, local_38, &local_39);
   if (( iVar2 == 0 ) && ( plVar1 = *(long**)( *(long*)( *(long*)( param_1 + 8 ) + 0xf0 ) + 0x68 ) ),plVar1 != (long*)0x0) {
      ( **(code**)( *plVar1 + 8 ) )(plVar1[1], local_38);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int T1_Compute_Max_Advance(long param_1, long *param_2) {
   long lVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined1 auStack_bf8[80];
   long local_ba8;
   undefined1 local_b74;
   undefined1 local_b72;
   undefined4 local_15c;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   undefined8 local_60;
   undefined4 local_58;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x310 );
   uVar2 = *(undefined8*)( param_1 + 0x350 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0;
   iVar3 = ( *(code*)**(undefined8**)( lVar1 + 0x18 ) )(auStack_bf8, param_1, 0, 0, *(undefined8*)( param_1 + 0x288 ), uVar2, 0, 0, T1_Parse_Glyph);
   if (iVar3 == 0) {
      local_15c = *(undefined4*)( param_1 + 0x260 );
      local_158 = *(undefined8*)( param_1 + 0x268 );
      uStack_150 = *(undefined8*)( param_1 + 0x270 );
      local_b72 = 1;
      local_b74 = 0;
      local_148 = *(undefined8*)( param_1 + 0x278 );
      local_60 = *(undefined8*)( param_1 + 0x368 );
      local_58 = *(undefined4*)( param_1 + 0x360 );
      *param_2 = 0;
      if (0 < *(int*)( param_1 + 0x280 )) {
         iVar4 = 0;
         T1_Parse_Glyph(auStack_bf8, 0);
         while (true) {
            *param_2 = local_ba8;
            iVar4 = iVar4 + 1;
            if (*(int*)( param_1 + 0x280 ) <= iVar4) break;
            while (true) {
               T1_Parse_Glyph(auStack_bf8, iVar4);
               if (*param_2 < local_ba8) break;
               iVar4 = iVar4 + 1;
               if (*(int*)( param_1 + 0x280 ) <= iVar4) goto LAB_00100927;
            }
;
         }
;
      }

      LAB_00100927:( **(code**)( *(long*)( lVar1 + 0x18 ) + 8 ) )(auStack_bf8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 T1_Get_Advances(long param_1, int param_2, uint param_3, uint param_4, long *param_5) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined1 auStack_be8[80];
   undefined8 local_b98;
   undefined1 local_b64;
   undefined1 local_b62;
   undefined4 local_14c;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 local_50;
   undefined4 local_48;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 & 0x10 ) == 0) {
      uVar2 = ( *(code*)**(undefined8**)( *(long*)( param_1 + 0x310 ) + 0x18 ) )(auStack_be8, param_1, 0, 0, *(undefined8*)( param_1 + 0x288 ), *(undefined8*)( param_1 + 0x350 ), 0, 0, T1_Parse_Glyph);
      if ((int)uVar2 != 0) goto LAB_00100a82;
      local_14c = *(undefined4*)( param_1 + 0x260 );
      local_b62 = 1;
      local_148 = *(undefined8*)( param_1 + 0x268 );
      uStack_140 = *(undefined8*)( param_1 + 0x270 );
      local_b64 = 0;
      local_138 = *(undefined8*)( param_1 + 0x278 );
      local_50 = *(undefined8*)( param_1 + 0x368 );
      local_48 = *(undefined4*)( param_1 + 0x360 );
      if (param_3 != 0) {
         iVar4 = param_3 + param_2;
         do {
            while (true) {
               iVar1 = T1_Parse_Glyph(auStack_be8, param_2);
               if (iVar1 != 0) break;
               param_2 = param_2 + 1;
               lVar3 = FT_RoundFix(local_b98);
               *param_5 = lVar3 >> 0x10;
               param_5 = param_5 + 1;
               if (iVar4 == param_2) goto LAB_00100a80;
            }
;
            param_2 = param_2 + 1;
            *param_5 = 0;
            param_5 = param_5 + 1;
         }
 while ( iVar4 != param_2 );
      }

   }
 else if (param_3 != 0) {
      memset(param_5, 0, (ulong)param_3 * 8);
      uVar2 = 0;
      goto LAB_00100a82;
   }

   LAB_00100a80:uVar2 = 0;
   LAB_00100a82:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void T1_Done_Blend(long param_1) {
   uint uVar1;
   uint uVar2;
   uint *puVar3;
   undefined8 uVar4;
   size_t __n;
   uint *puVar5;
   uint *puVar6;
   puVar3 = *(uint**)( param_1 + 0x350 );
   if (puVar3 == (uint*)0x0) {
      return;
   }

   uVar4 = *(undefined8*)( param_1 + 0xb8 );
   uVar1 = *puVar3;
   uVar2 = puVar3[1];
   ft_mem_free(uVar4);
   puVar3[10] = 0;
   puVar3[0xb] = 0;
   if (uVar1 < 2) {
      ft_mem_free(uVar4, *(undefined8*)( puVar3 + 0x6a ));
      puVar3[0x6a] = 0;
      puVar3[0x6b] = 0;
      ft_mem_free(uVar4, *(undefined8*)( puVar3 + 0x48 ));
      puVar3[0x48] = 0;
      puVar3[0x49] = 0;
      ft_mem_free(uVar4);
      puVar3[0x8e] = 0;
      puVar3[0x8f] = 0;
      if (uVar1 == 0) goto LAB_00100bb7;
   }
 else {
      memset(puVar3 + 0xc, 0, ( ulong )(uVar1 - 1) << 3);
      ft_mem_free(uVar4, *(undefined8*)( puVar3 + 0x6a ));
      puVar3[0x6a] = 0;
      puVar3[0x6b] = 0;
      ft_mem_free(uVar4, *(undefined8*)( puVar3 + 0x48 ));
      puVar3[0x48] = 0;
      puVar3[0x49] = 0;
      ft_mem_free(uVar4);
      puVar3[0x8e] = 0;
      puVar3[0x8f] = 0;
   }

   __n = (ulong)uVar1 << 3;
   memset(puVar3 + 0x46, 0, __n);
   memset(puVar3 + 0x68, 0, __n);
   memset(puVar3 + 0x8c, 0, __n);
   LAB_00100bb7:ft_mem_free(uVar4, *(undefined8*)( puVar3 + 0x42 ));
   *(undefined1(*) [16])( puVar3 + 0x42 ) = (undefined1[16])0x0;
   if (uVar2 != 0) {
      puVar5 = puVar3;
      do {
         puVar6 = puVar5 + 2;
         puVar5 = puVar5 + 2;
         ft_mem_free(uVar4, *(undefined8*)puVar6);
         puVar5[0] = 0;
         puVar5[1] = 0;
      }
 while ( puVar5 != puVar3 + (ulong)uVar2 * 2 );
      puVar5 = puVar3;
      do {
         puVar6 = puVar5 + 6;
         ft_mem_free(uVar4, *(undefined8*)( puVar5 + 0x2c ));
         *(undefined1*)( puVar5 + 0x2a ) = 0;
         puVar5[0x2c] = 0;
         puVar5[0x2d] = 0;
         puVar5 = puVar6;
      }
 while ( puVar6 != puVar3 + (ulong)uVar2 * 6 );
   }

   ft_mem_free(uVar4, *(undefined8*)( param_1 + 0x350 ));
   *(undefined8*)( param_1 + 0x350 ) = 0;
   return;
}
void parse_encoding(long param_1, ulong *param_2) {
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
   byte *__s1;
   long in_FS_OFFSET;
   int local_78;
   int local_74;
   int local_44;
   long local_40;
   byte *pbVar12;
   puVar3 = *(undefined8**)( param_1 + 0x310 );
   pbVar4 = (byte*)param_2[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *(code*)param_2[7] )(param_2);
   __s1 = (byte*)*param_2;
   if (__s1 < pbVar4) {
      bVar2 = *__s1;
      if (( ( byte )(bVar2 - 0x30) < 10 ) || ( bVar2 == 0x5b )) {
         uVar10 = param_2[4];
         if (bVar2 == 0x5b) {
            bVar6 = true;
            *param_2 = ( ulong )(__s1 + 1);
            local_74 = 0x100;
            local_78 = 0x100;
         }
 else {
            local_74 = ( *(code*)param_2[9] )(param_2);
            bVar6 = false;
            local_78 = 0x100;
            if (local_74 < 0x101) {
               local_78 = local_74;
            }

         }

         ( *(code*)param_2[7] )(param_2);
         if ((byte*)*param_2 < pbVar4) {
            puVar1 = param_2 + 0x19;
            if (*(long*)( param_1 + 0x238 ) != 0) {
               ft_mem_free(uVar10);
               *(undefined8*)( param_1 + 0x238 ) = 0;
               ft_mem_free(uVar10, *(undefined8*)( param_1 + 0x240 ));
               pcVar5 = (code*)param_2[0x24];
               *(undefined8*)( param_1 + 0x240 ) = 0;
               if (pcVar5 != (code*)0x0) {
                  ( *pcVar5 )(puVar1);
               }

            }

            *(int*)( param_1 + 0x228 ) = local_78;
            *(int*)( param_2 + 0x18 ) = local_78;
            uVar9 = ft_mem_qrealloc(uVar10, 2, 0, (long)local_78, 0);
            *(undefined8*)( param_1 + 0x238 ) = uVar9;
            if (local_44 == 0) {
               uVar9 = ft_mem_qrealloc(uVar10, 8, 0, (long)local_78, 0, &local_44);
               *(undefined8*)( param_1 + 0x240 ) = uVar9;
               if (( local_44 == 0 ) && ( local_44 = local_44 == 0 )) {
                  if (0 < local_78) {
                     iVar7 = 0;
                     do {
                        iVar11 = iVar7 + 1;
                        ( *(code*)param_2[0x23] )(puVar1, iVar7, ".notdef", 8);
                        iVar7 = iVar11;
                     }
 while ( local_78 != iVar11 );
                  }

                  ( *(code*)param_2[7] )(param_2);
                  pbVar12 = (byte*)*param_2;
                  if (pbVar12 < pbVar4) {
                     iVar7 = 0;
                     do {
                        bVar2 = *pbVar12;
                        if (bVar2 == 100) {
                           __s1 = pbVar12 + 3;
                           if (( ( __s1 < pbVar4 ) && ( pbVar12[1] == 0x65 ) ) && ( pbVar12[2] == 0x66 )) {
                              bVar2 = pbVar12[3];
                              if (bVar2 < 0x3f) {
                                 uVar10 = 0x5000832100003601 >> ( (ulong)bVar2 & 0x3f );
                              }
 else {
                                 if (0x22 < ( byte )(bVar2 - 0x5b)) goto LAB_0010104e;
                                 uVar10 = 0x500000005 >> ( ( ulong )(bVar2 - 0x5b) & 0x3f );
                              }

                              if (( uVar10 & 1 ) != 0) break;
                           }

                           LAB_0010104e:if (bVar6) {
                              LAB_001010a8:if (( ( pbVar12 + 2 < pbVar4 ) && ( *pbVar12 == 0x2f ) ) && ( iVar11 = iVar7 < local_74 )) goto LAB_001010cc;
                              LAB_00101140:*(undefined4*)( param_2 + 3 ) = 2;
                              goto LAB_00100d60;
                           }

                           ( *(code*)param_2[8] )(param_2);
                           __s1 = pbVar12;
                           if ((int)param_2[3] != 0) goto LAB_00100d60;
                        }
 else {
                           if (bVar2 == 0x5d) {
                              __s1 = pbVar12 + 1;
                              break;
                           }

                           if (9 < bVar2 - 0x30) goto LAB_0010104e;
                           if (bVar6) goto LAB_001010a8;
                           iVar11 = ( *(code*)param_2[9] )(param_2);
                           ( *(code*)param_2[7] )(param_2);
                           __s1 = (byte*)*param_2;
                           if (__s1 == pbVar12) goto LAB_00101140;
                           if (( ( pbVar4 <= __s1 + 2 ) || ( *__s1 != 0x2f ) ) || ( pbVar12 = local_74 <= iVar7 )) goto LAB_00101020;
                           LAB_001010cc:__s1 = pbVar12 + 1;
                           *param_2 = (ulong)__s1;
                           ( *(code*)param_2[8] )(param_2);
                           if (( pbVar4 <= (byte*)*param_2 ) || ( (int)param_2[3] != 0 )) goto LAB_00100d60;
                           if (iVar7 < local_78) {
                              uVar10 = (long)*param_2 - (long)__s1;
                              iVar8 = ( *(code*)param_2[0x23] )(puVar1, iVar11, __s1, (int)uVar10 + 1);
                              *(int*)( param_2 + 3 ) = iVar8;
                              if (iVar8 != 0) goto LAB_00100d60;
                              *(undefined1*)( *(long*)( param_2[0x1e] + (long)iVar11 * 8 ) + ( uVar10 & 0xffffffff ) ) = 0;
                           }

                           iVar7 = iVar7 + 1;
                        }

                        LAB_00101020:( *(code*)param_2[7] )(param_2);
                        pbVar12 = (byte*)*param_2;
                     }
 while ( pbVar12 < pbVar4 );
                  }

                  *(undefined4*)( param_1 + 0x220 ) = 1;
                  *param_2 = (ulong)__s1;
                  goto LAB_00100d60;
               }

            }

            *(int*)( param_2 + 3 ) = local_44;
         }

      }
 else if (( __s1 + 0x11 < pbVar4 ) && ( iVar7 = iVar7 == 0 )) {
         *(undefined4*)( param_1 + 0x220 ) = 2;
      }
 else if (( __s1 + 0xf < pbVar4 ) && ( iVar7 = iVar7 == 0 )) {
         *(undefined4*)( param_1 + 0x220 ) = 4;
      }
 else if (( __s1 + 0x12 < pbVar4 ) && ( iVar7 = iVar7 == 0 )) {
         *(undefined4*)( param_1 + 0x220 ) = 3;
      }
 else {
         *(undefined4*)( param_2 + 3 ) = 0xa2;
      }

   }
 else {
      *(undefined4*)( param_2 + 3 ) = 3;
   }

   LAB_00100d60:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int T1_Load_Glyph(long param_1, long param_2, uint param_3, uint param_4) {
   char cVar1;
   short sVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   undefined8 *puVar6;
   long *plVar7;
   int iVar8;
   long lVar9;
   long lVar10;
   long *plVar11;
   long *plVar12;
   undefined1 uVar13;
   undefined8 uVar14;
   long in_FS_OFFSET;
   bool bVar15;
   undefined8 uVar16;
   uint local_c74;
   long local_c70;
   char local_c49;
   undefined8 local_c48;
   uint local_c40;
   long local_c38;
   long lStack_c30;
   long local_c28;
   long lStack_c20;
   long local_c18;
   long lStack_c10;
   long local_c08;
   long lStack_c00;
   undefined1 local_bf8[32];
   long local_bd8;
   undefined8 local_bb8;
   undefined8 local_ba8;
   undefined8 local_ba0;
   undefined1 local_b73;
   long local_b70;
   undefined4 local_15c;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   long local_140;
   long lStack_138;
   long local_130;
   long lStack_128;
   long local_120;
   long lStack_118;
   undefined8 local_60;
   undefined4 local_58;
   long local_40;
   uVar16 = _UNK_001077c8;
   uVar14 = __LC7;
   lVar5 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c49 = '\0';
   puVar6 = *(undefined8**)( *(long*)( lVar5 + 0x310 ) + 0x18 );
   if (( *(uint*)( lVar5 + 0x20 ) <= param_3 ) && ( *(long*)( *(long*)( lVar5 + 0xf0 ) + 0x68 ) == 0 )) {
      iVar8 = 6;
      goto LAB_001015e4;
   }

   if (( param_4 & 0x400 ) == 0) {
      local_c74 = param_4 & 3;
      if (param_2 != 0) {
         LAB_0010125f:uVar14 = *(undefined8*)( param_2 + 0x20 );
         uVar16 = *(undefined8*)( param_2 + 0x28 );
      }

      *(undefined4*)( param_1 + 200 ) = 0;
      *(undefined8*)( param_1 + 0x138 ) = uVar14;
      *(undefined8*)( param_1 + 0x140 ) = uVar16;
      if (local_c74 != 0) goto LAB_00101635;
      uVar14 = 1;
      uVar13 = 1;
      bVar15 = true;
   }
 else {
      param_4 = param_4 | 3;
      if (param_2 != 0) {
         local_c74 = 3;
         goto LAB_0010125f;
      }

      *(undefined4*)( param_1 + 200 ) = 0;
      *(undefined8*)( param_1 + 0x138 ) = uVar14;
      *(undefined8*)( param_1 + 0x140 ) = uVar16;
      LAB_00101635:uVar14 = 0;
      uVar13 = 0;
      local_c74 = param_4 & 1;
      bVar15 = ( param_4 & 1 ) == 0;
   }

   local_c70 = param_1 + 200;
   *(bool*)( param_1 + 0x131 ) = bVar15;
   *(undefined1*)( param_1 + 0x130 ) = uVar13;
   uVar16 = *(undefined8*)( lVar5 + 0x350 );
   *(undefined4*)( param_1 + 0x90 ) = 0x6f75746c;
   iVar8 = ( *(code*)*puVar6 )(local_bf8, lVar5, param_2, param_1, *(undefined8*)( lVar5 + 0x288 ), uVar16, uVar14, (int)param_4 >> 0x10 & 0xf, T1_Parse_Glyph);
   if (iVar8 == 0) {
      local_b73 = ( param_4 & 0x400 ) != 0;
      local_15c = *(undefined4*)( lVar5 + 0x260 );
      local_158 = *(undefined8*)( lVar5 + 0x268 );
      uStack_150 = *(undefined8*)( lVar5 + 0x270 );
      local_148 = *(undefined8*)( lVar5 + 0x278 );
      local_60 = *(undefined8*)( lVar5 + 0x368 );
      local_58 = *(undefined4*)( lVar5 + 0x360 );
      iVar8 = T1_Parse_Glyph_And_Get_Char_String(local_bf8, param_3, &local_c48, &local_c49);
      if (iVar8 == 0) {
         cVar1 = *(char*)( param_1 + 0x130 );
         local_c38 = local_140;
         lStack_c30 = lStack_138;
         local_c28 = local_130;
         lStack_c20 = lStack_128;
         ( *(code*)puVar6[1] )();
         *(uint*)( param_1 + 0xe8 ) = *(uint*)( param_1 + 0xe8 ) & 1 | 4;
         if (( param_4 & 0x400 ) == 0) {
            lVar9 = FT_RoundFix(local_ba8);
            *(long*)( param_1 + 0x50 ) = lVar9 >> 0x10;
            lVar9 = FT_RoundFix(local_ba8);
            *(long*)( param_1 + 0x70 ) = lVar9 >> 0x10;
            *(undefined1*)( *(long*)( param_1 + 0x128 ) + 0xc ) = 0;
            if (( param_4 & 0x10 ) == 0) {
               lVar9 = FT_RoundFix(local_ba0);
               *(long*)( param_1 + 0x68 ) = lVar9 >> 0x10;
               lVar9 = FT_RoundFix(local_ba0);
               lVar9 = lVar9 >> 0x10;
            }
 else {
               lVar9 = *(long*)( lVar5 + 0x2f0 ) - *(long*)( lVar5 + 0x2e0 ) >> 0x10;
               *(long*)( param_1 + 0x68 ) = lVar9;
            }

            *(long*)( param_1 + 0x78 ) = lVar9;
            *(undefined4*)( param_1 + 0x90 ) = 0x6f75746c;
            if (( param_2 != 0 ) && ( *(ushort*)( param_2 + 0x1a ) < 0x18 )) {
               *(uint*)( param_1 + 0xe8 ) = *(uint*)( param_1 + 0xe8 ) | 0x100;
            }

            if (( ( local_c38 != 0x10000 ) || ( lStack_c20 != 0x10000 ) ) || ( lStack_c30 != 0 || local_c28 != 0 )) {
               FT_Outline_Transform(local_c70, &local_c38);
               lVar9 = (long)*(int*)( param_1 + 0x50 ) * (long)(int)local_c38;
               *(long*)( param_1 + 0x50 ) = (long)(int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
               lVar9 = (long)(int)lStack_c20 * (long)*(int*)( param_1 + 0x68 );
               *(long*)( param_1 + 0x68 ) = (long)(int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
            }

            if (lStack_118 != 0 || local_120 != 0) {
               FT_Outline_Translate(local_c70, local_120, lStack_118);
               *(long*)( param_1 + 0x50 ) = *(long*)( param_1 + 0x50 ) + local_120;
               *(long*)( param_1 + 0x68 ) = *(long*)( param_1 + 0x68 ) + lStack_118;
            }

            if (( local_c74 == 0 ) || ( local_c49 != '\0' )) {
               iVar3 = *(int*)( param_1 + 0x140 );
               iVar4 = *(int*)( param_1 + 0x138 );
               if (( ( cVar1 == '\0' ) || ( local_b70 == 0 ) ) && ( sVar2= *(short *)(local_bd8 + 2),0 < sVar2 )) {
                  plVar7 = *(long**)( local_bd8 + 8 );
                  plVar11 = plVar7;
                  do {
                     plVar12 = plVar11 + 2;
                     lVar9 = (long)(int)*plVar11 * (long)iVar4;
                     *plVar11 = (long)(int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
                     lVar9 = (long)(int)plVar11[1] * (long)iVar3;
                     plVar11[1] = (long)(int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
                     plVar11 = plVar12;
                  }
 while ( plVar12 != plVar7 + (ulong)(uint)(int)sVar2 * 2 );
               }

               lVar9 = (long)*(int*)( param_1 + 0x50 ) * (long)iVar4;
               *(long*)( param_1 + 0x50 ) = (long)(int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
               lVar9 = (long)*(int*)( param_1 + 0x68 ) * (long)iVar3;
               *(long*)( param_1 + 0x68 ) = (long)(int)( ( ulong )(lVar9 + 0x8000 + ( lVar9 >> 0x3f )) >> 0x10 );
            }

            FT_Outline_Get_CBox(local_c70, &local_c18);
            *(long*)( param_1 + 0x30 ) = local_c08 - local_c18;
            *(long*)( param_1 + 0x38 ) = lStack_c00 - lStack_c10;
            *(long*)( param_1 + 0x40 ) = local_c18;
            *(long*)( param_1 + 0x48 ) = lStack_c00;
            if (( param_4 & 0x10 ) != 0) {
               ft_synthesize_vertical_metrics(param_1 + 0x30, *(undefined8*)( param_1 + 0x68 ));
            }

         }
 else {
            lVar9 = *(long*)( param_1 + 0x128 );
            lVar10 = FT_RoundFix(local_bb8);
            *(long*)( param_1 + 0x40 ) = lVar10 >> 0x10;
            lVar10 = FT_RoundFix(local_ba8);
            *(long*)( param_1 + 0x50 ) = lVar10 >> 0x10;
            *(long*)( lVar9 + 0x10 ) = local_c38;
            *(long*)( lVar9 + 0x18 ) = lStack_c30;
            *(undefined1*)( lVar9 + 0xc ) = 1;
            *(long*)( lVar9 + 0x20 ) = local_c28;
            *(long*)( lVar9 + 0x28 ) = lStack_c20;
            *(long*)( lVar9 + 0x30 ) = local_120;
            *(long*)( lVar9 + 0x38 ) = lStack_118;
         }

         *(undefined8*)( param_1 + 0x100 ) = local_c48;
         *(ulong*)( param_1 + 0x108 ) = (ulong)local_c40;
         plVar7 = *(long**)( *(long*)( lVar5 + 0xf0 ) + 0x68 );
         if (plVar7 != (long*)0x0) {
            ( **(code**)( *plVar7 + 8 ) )(plVar7[1], &local_c48);
            *(undefined8*)( param_1 + 0x100 ) = 0;
            *(undefined8*)( param_1 + 0x108 ) = 0;
         }

      }
 else {
         ( *(code*)puVar6[1] )(local_bf8);
      }

   }

   LAB_001015e4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar8;
}
ulong t1_get_name_index(long param_1, char *param_2) {
   int iVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   iVar1 = *(int*)( param_1 + 0x280 );
   if (0 < iVar1) {
      lVar2 = *(long*)( param_1 + 0x288 );
      uVar4 = 0;
      do {
         iVar3 = strcmp(param_2, *(char**)( lVar2 + uVar4 * 8 ));
         if (iVar3 == 0) {
            return uVar4 & 0xffffffff;
         }

         uVar4 = uVar4 + 1;
      }
 while ( (long)iVar1 != uVar4 );
   }

   return 0;
}
int t1_allocate_blend(long param_1, int param_2, int param_3) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   int *piVar6;
   long *plVar7;
   long *plVar8;
   long lVar9;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   piVar6 = *(int**)( param_1 + 0x350 );
   uVar1 = *(undefined8*)( param_1 + 0xb8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   if (piVar6 == (int*)0x0) {
      piVar6 = (int*)ft_mem_alloc(uVar1, 0x300, &local_44);
      iVar2 = local_44;
      if (local_44 != 0) goto LAB_001019f9;
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      piVar6[0xbe] = 0;
      *(undefined1(*) [16])( piVar6 + 0x42 ) = (undefined1[16])0x0;
      *(int**)( param_1 + 0x350 ) = piVar6;
   }

   if (param_2 == 0) {
      LAB_001019f0:iVar2 = local_44;
      if (param_3 == 0) goto LAB_001019f9;
      if (( piVar6[1] == param_3 ) || ( piVar6[1] == 0 )) {
         piVar6[1] = param_3;
         goto LAB_001019f9;
      }

   }
 else {
      if (*piVar6 == 0) {
         uVar3 = ft_mem_realloc(uVar1, 0x38, 0, param_2, 0, &local_44);
         *(undefined8*)( piVar6 + 0x48 ) = uVar3;
         iVar2 = local_44;
         if (local_44 != 0) goto LAB_001019f9;
         uVar3 = ft_mem_realloc(uVar1, 0xe0, 0, param_2, 0, &local_44);
         *(undefined8*)( piVar6 + 0x6a ) = uVar3;
         iVar2 = local_44;
         if (local_44 != 0) goto LAB_001019f9;
         lVar4 = ft_mem_realloc(uVar1, 0x20, 0, param_2, 0, &local_44);
         *(long*)( piVar6 + 0x8e ) = lVar4;
         iVar2 = local_44;
         if (local_44 != 0) goto LAB_001019f9;
         *(long*)( piVar6 + 0x46 ) = param_1 + 0xf8;
         *(long*)( piVar6 + 0x68 ) = param_1 + 0x138;
         *(long*)( piVar6 + 0x8c ) = param_1 + 0x2d8;
         if (param_2 != 1) {
            lVar9 = *(long*)( piVar6 + 0x6a );
            lVar5 = *(long*)( piVar6 + 0x48 );
            plVar7 = (long*)( piVar6 + 0x4a );
            do {
               lVar5 = lVar5 + 0x38;
               lVar9 = lVar9 + 0xe0;
               lVar4 = lVar4 + 0x20;
               plVar8 = plVar7 + 1;
               *plVar7 = lVar5;
               plVar7[0x11] = lVar9;
               plVar7[0x23] = lVar4;
               plVar7 = plVar8;
            }
 while ( plVar8 != (long*)( piVar6 + ( ulong )(param_2 - 2) * 2 + 0x4c ) );
         }

         *piVar6 = param_2;
         goto LAB_001019f0;
      }

      if (*piVar6 == param_2) goto LAB_001019f0;
   }

   iVar2 = 3;
   LAB_001019f9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
void parse_weight_vector(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   int *piVar9;
   long in_FS_OFFSET;
   int local_1d0;
   int local_1cc;
   undefined8 local_1c8[49];
   long local_40;
   uVar1 = *(undefined8*)( param_1 + 0xb8 );
   piVar9 = *(int**)( param_1 + 0x350 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1cc = 0;
   ( *(code*)param_2[0xf] )(param_2, local_1c8, 0x10, &local_1d0);
   iVar4 = 0xa2;
   if (-1 < local_1d0) {
      if (( local_1d0 == 0 ) || ( 0x10 < local_1d0 )) {
         iVar4 = 3;
      }
 else {
         if (( piVar9 == (int*)0x0 ) || ( *piVar9 == 0 )) {
            iVar4 = t1_allocate_blend(param_1, local_1d0, 0);
            local_1cc = iVar4;
            if (iVar4 != 0) goto LAB_00101bae;
            piVar9 = *(int**)( param_1 + 0x350 );
         }
 else {
            iVar4 = 3;
            if (*piVar9 != local_1d0) goto LAB_00101bae;
         }

         lVar6 = *(long*)( piVar9 + 0x42 );
         if (lVar6 == 0) {
            lVar6 = ft_mem_qrealloc(uVar1, 8, 0, (long)( local_1d0 * 2 ), 0, &local_1cc);
            *(long*)( piVar9 + 0x42 ) = lVar6;
            iVar4 = local_1cc;
            if (local_1cc != 0) goto LAB_00101bae;
         }

         uVar1 = *param_2;
         *(long*)( piVar9 + 0x44 ) = lVar6 + (long)local_1d0 * 8;
         uVar2 = param_2[2];
         if (0 < local_1d0) {
            lVar7 = 0;
            puVar8 = local_1c8;
            while (true) {
               *param_2 = *puVar8;
               param_2[2] = puVar8[1];
               uVar5 = ( *(code*)param_2[10] )(param_2, 0);
               lVar3 = *(long*)( piVar9 + 0x44 );
               *(undefined8*)( lVar6 + lVar7 * 8 ) = uVar5;
               *(undefined8*)( lVar3 + lVar7 * 8 ) = uVar5;
               lVar7 = lVar7 + 1;
               if (local_1d0 <= (int)lVar7) break;
               lVar6 = *(long*)( piVar9 + 0x42 );
               puVar8 = puVar8 + 3;
            }
;
         }

         *param_2 = uVar1;
         param_2[2] = uVar2;
         iVar4 = local_1cc;
      }

   }

   LAB_00101bae:*(int*)( param_2 + 3 ) = iVar4;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void parse_blend_design_positions(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   undefined8 uVar5;
   long *plVar6;
   long lVar7;
   long *plVar8;
   long *plVar9;
   long lVar10;
   int iVar11;
   undefined8 *puVar12;
   long lVar13;
   undefined8 *puVar14;
   long in_FS_OFFSET;
   int local_2f4;
   int local_2b4;
   int local_2b0;
   int local_2ac;
   undefined8 local_2a8[12];
   long local_248[16];
   undefined8 local_1c8[49];
   long local_40;
   puVar14 = local_1c8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined8*)( param_1 + 0xb8 );
   local_2b0 = 0;
   local_248[0] = 0;
   ( *(code*)param_2[0xf] )(param_2, puVar14, 0x10, &local_2b4);
   if (local_2b4 < 0) {
      local_2b0 = 0xa2;
   }
 else {
      if (( local_2b4 != 0 ) && ( local_2b4 < 0x11 )) {
         uVar2 = *param_2;
         uVar3 = param_2[2];
         lVar10 = 0;
         local_2f4 = 0;
         do {
            *param_2 = *puVar14;
            param_2[2] = puVar14[1];
            ( *(code*)param_2[0xf] )(param_2, local_2a8, 4, &local_2ac);
            iVar4 = local_2ac;
            if (lVar10 == 0) {
               local_2f4 = local_2ac;
               if (3 < local_2ac - 1U) goto LAB_00101f4e;
               local_2b0 = t1_allocate_blend(param_1, local_2b4, local_2ac);
               lVar7 = local_248[0];
               if (local_2b0 != 0) goto LAB_00101e50;
               lVar7 = ft_mem_qrealloc(uVar1, 8, 0, (long)( local_2b4 * iVar4 ), 0, &local_2b0);
               local_248[0] = lVar7;
               if (local_2b0 != 0) goto LAB_00101e50;
               iVar11 = local_2ac;
               if (1 < local_2b4) {
                  plVar8 = local_248 + 1;
                  do {
                     lVar7 = lVar7 + (long)iVar4 * 8;
                     *plVar8 = lVar7;
                     plVar8 = plVar8 + 1;
                  }
 while ( plVar8 != local_248 + ( ulong )(local_2b4 - 2) + 2 );
               }

            }
 else {
               iVar11 = local_2f4;
               if (local_2ac != local_2f4) {
                  LAB_00101f4e:local_2b0 = 3;
                  lVar7 = local_248[0];
                  goto LAB_00101e50;
               }

            }

            if (0 < iVar11) {
               lVar7 = local_248[lVar10];
               lVar13 = 0;
               puVar12 = local_2a8;
               do {
                  *param_2 = *puVar12;
                  param_2[2] = puVar12[1];
                  uVar5 = ( *(code*)param_2[10] )(param_2, 0);
                  *(undefined8*)( lVar7 + lVar13 * 8 ) = uVar5;
                  lVar13 = lVar13 + 1;
                  puVar12 = puVar12 + 3;
               }
 while ( (int)lVar13 < local_2ac );
            }

            lVar10 = lVar10 + 1;
            puVar14 = puVar14 + 3;
         }
 while ( (int)lVar10 < local_2b4 );
         *param_2 = uVar2;
         param_2[2] = uVar3;
         lVar10 = *(long*)( param_1 + 0x350 );
         if (*(long*)( lVar10 + 0x28 ) != 0) {
            ft_mem_free(uVar1);
            *(undefined8*)( lVar10 + 0x28 ) = 0;
         }

         lVar7 = local_248[0];
         if (0 < local_2b4) {
            plVar6 = local_248;
            plVar8 = plVar6 + local_2b4;
            plVar9 = (long*)( lVar10 + 0x28 );
            do {
               lVar10 = *plVar6;
               *plVar6 = 0;
               plVar6 = plVar6 + 1;
               *plVar9 = lVar10;
               lVar7 = local_248[0];
               plVar9 = plVar9 + 1;
            }
 while ( plVar6 != plVar8 );
         }

         goto LAB_00101e50;
      }

      local_2b0 = 3;
   }

   lVar7 = 0;
   LAB_00101e50:ft_mem_free(uVar1, lVar7);
   *(int*)( param_2 + 3 ) = local_2b0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
ulong parse_dict(long *param_1, long *param_2, long param_3, long param_4) {
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   long *plVar4;
   bool bVar5;
   byte bVar6;
   int iVar7;
   ulong uVar8;
   size_t sVar9;
   long *plVar10;
   long **pplVar11;
   byte *pbVar12;
   byte *__s1;
   char *__s;
   undefined1 *puVar13;
   long in_FS_OFFSET;
   undefined1 local_50[8];
   long *local_48;
   long local_40;
   pbVar2 = (byte*)( param_3 + param_4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = param_3;
   param_2[2] = (long)pbVar2;
   *(int*)( param_2 + 3 ) = 0;
   ( *(code*)param_2[7] )(param_2);
   __s1 = (byte*)*param_2;
   if (pbVar2 <= __s1) {
      LAB_001020e0:uVar8 = ( ulong ) * (uint*)( param_2 + 3 );
      LAB_001020e4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   bVar5 = false;
   pbVar12 = (byte*)0x0;
   LAB_0010206f:bVar3 = *__s1;
   if (bVar3 == 0x65) {
      if (pbVar2 == __s1 + 6) {
         LAB_0010209c:iVar7 = strncmp((char*)__s1, "eexec", 5);
         joined_r0x00102147:if (iVar7 == 0) goto LAB_001020e0;
      }
 else if (__s1 + 6 < pbVar2) {
         bVar3 = __s1[5];
         if (bVar3 < 0x3f) {
            uVar8 = 0x5000832100003601 >> ( (ulong)bVar3 & 0x3f );
         }
 else {
            if (0x22 < ( byte )(bVar3 - 0x5b)) goto LAB_001020b8;
            uVar8 = 0x500000005 >> ( ( ulong )(bVar3 - 0x5b) & 0x3f );
         }

         if (( uVar8 & 1 ) != 0) goto LAB_0010209c;
      }

   }
 else {
      if (bVar3 == 99) {
         if (pbVar2 == __s1 + 10) {
            LAB_00102131:iVar7 = strncmp((char*)__s1, "closefile", 9);
            goto joined_r0x00102147;
         }

         if (__s1 + 10 < pbVar2) {
            bVar3 = __s1[9];
            if (bVar3 < 0x3f) {
               uVar8 = 0x5000832100003601 >> ( (ulong)bVar3 & 0x3f );
            }
 else {
               if (0x22 < ( byte )(bVar3 - 0x5b)) goto LAB_001020b8;
               uVar8 = 0x500000005 >> ( ( ulong )(bVar3 - 0x5b) & 0x3f );
            }

            if (( uVar8 & 1 ) != 0) goto LAB_00102131;
         }

         goto LAB_001020b8;
      }

      if (bVar3 == 0x46) {
         if (pbVar2 == __s1 + 0xe) {
            LAB_00102029:iVar7 = strncmp((char*)__s1, "FontDirectory", 0xd);
            if (iVar7 == 0) {
               if (( *(uint*)( (long)param_2 + 0x2c4 ) & 1 ) != 0) {
                  *(uint*)( (long)param_2 + 0x2c4 ) = *(uint*)( (long)param_2 + 0x2c4 ) | 2;
               }

               *param_2 = (long)( __s1 + 0xd );
               __s1 = pbVar12;
               goto LAB_00102060;
            }

         }
 else if (__s1 + 0xe < pbVar2) {
            bVar3 = __s1[0xd];
            if (bVar3 < 0x3f) {
               uVar8 = 0x5000832100003601 >> ( (ulong)bVar3 & 0x3f );
            }
 else {
               if (0x22 < ( byte )(bVar3 - 0x5b)) goto LAB_001020b8;
               uVar8 = 0x500000005 >> ( ( ulong )(bVar3 - 0x5b) & 0x3f );
            }

            if (( uVar8 & 1 ) != 0) goto LAB_00102029;
         }

         goto LAB_001020b8;
      }

      if (bVar3 - 0x30 < 10) {
         ( *(code*)param_2[8] )(param_2);
         uVar8 = ( ulong ) * (uint*)( param_2 + 3 );
         if (*(uint*)( param_2 + 3 ) != 0) goto LAB_001020e4;
         bVar5 = true;
         LAB_00102060:( *(code*)param_2[7] )(param_2);
         pbVar1 = (byte*)*param_2;
         pbVar12 = __s1;
         goto joined_r0x0010206d;
      }

      if (bVar3 != 0x52) {
         if (bVar3 == 0x2d) {
            if (( __s1 + 6 < pbVar2 ) && ( __s1[1] == 0x7c )) goto LAB_0010219c;
            goto LAB_001020b8;
         }

         if (( bVar3 != 0x2f ) || ( pbVar2 <= __s1 + 2 )) goto LAB_001020b8;
         pbVar1 = __s1 + 1;
         *param_2 = (long)pbVar1;
         ( *(code*)param_2[8] )(param_2);
         uVar8 = ( ulong ) * (uint*)( param_2 + 3 );
         if (*(uint*)( param_2 + 3 ) == 0) {
            uVar8 = *param_2 - (long)pbVar1;
            if (( (int)uVar8 - 1U < 0x15 ) && ( (byte*)*param_2 < pbVar2 )) {
               bVar3 = __s1[1];
               uVar8 = uVar8 & 0xffffffff;
               bVar6 = 0x76;
               __s = "version";
               puVar13 = t1_keywords;
               while (( ( bVar3 != bVar6 || ( sVar9 = strlen(__s) ),uVar8 != sVar9 ) ) || ( iVar7 = iVar7 != 0 )) {
                  __s = *(char**)( puVar13 + 0x30 );
                  puVar13 = puVar13 + 0x30;
                  if ((byte*)__s == (byte*)0x0) goto LAB_001020c7;
                  bVar6 = *__s;
               }
;
               if (( ( ( *(uint*)( (long)param_2 + 0x2c4 ) & 1 ) + 1 & *(uint*)( puVar13 + 0x28 ) ) != 0 ) && ( ( ( *(uint*)( (long)param_2 + 0x2c4 ) & 2 ) == 0 || ( iVar7 = strcmp(__s, "CharStrings") ),iVar7 == 0 ) )) {
                  plVar4 = (long*)param_1[0x6a];
                  plVar10 = (long*)0x0;
                  if (( plVar4 != (long*)0x0 ) && ( (int)*plVar4 != 0 )) {
                     plVar10 = plVar4;
                  }

                  if (*(int*)( puVar13 + 0xc ) == 0xb) {
                     ( **(code**)( puVar13 + 0x10 ) )(param_1, param_2);
                     uVar8 = ( ulong ) * (uint*)( param_2 + 3 );
                     LAB_00102413:*(int*)( param_2 + 3 ) = (int)uVar8;
                     if ((int)uVar8 == 0) goto LAB_001020c7;
                     if ((char)uVar8 != -0x5e) goto LAB_001020e4;
                  }
 else {
                     switch (*(undefined4*)( puVar13 + 8 )) {
                        default:
                local_48 = param_1 + 0x1f;
                break;
                        case 2:
                local_48 = param_1 + 0x26;
                break;
                        case 3:
                local_48 = param_1 + 0x1f;
                if (plVar10 == (long *)0x0) break;
                iVar7 = (int)*plVar10;
                pplVar11 = (long **)(plVar10 + 0x23);
                goto LAB_00102440;
                        case 4:
                local_48 = param_1 + 0x27;
                if (plVar10 != (long *)0x0) {
                  iVar7 = (int)*plVar10;
                  pplVar11 = (long **)(plVar10 + 0x34);
                  goto LAB_00102440;
                }
                break;
                        case 5:
                local_48 = param_1 + 0x5b;
                if (plVar10 != (long *)0x0) {
                  iVar7 = (int)*plVar10;
                  pplVar11 = (long **)(plVar10 + 0x46);
                  goto LAB_00102440;
                }
                break;
                        case 6:
                local_48 = param_2;
                break;
                        case 7:
                local_48 = param_1;
                break;
                        case 8:
                local_48 = plVar4;
                     }

                     iVar7 = 0;
                     pplVar11 = &local_48;
                     LAB_00102440:if (*pplVar11 != (long*)0x0) {
                        if (*(int*)( puVar13 + 0xc ) - 9U < 2) {
                           uVar8 = ( *(code*)param_2[0x11] )(param_2, puVar13, pplVar11, iVar7, 0);
                        }
 else {
                           uVar8 = ( *(code*)param_2[0x10] )();
                        }

                        goto LAB_00102413;
                     }

                  }

                  *(int*)( param_2 + 3 ) = 0;
               }

            }

            goto LAB_001020c7;
         }

         goto LAB_001020e4;
      }

      if (( __s1 + 6 < pbVar2 ) && ( __s1[1] == 0x44 )) {
         LAB_0010219c:if (!bVar5) goto LAB_001020b8;
         *param_2 = (long)pbVar12;
         iVar7 = read_binary_data(param_2, local_50, &local_48, *(long*)( param_1[0x1e] + 0x68 ) != 0);
         if (iVar7 != 0) goto LAB_001020c7;
         uVar8 = 3;
         goto LAB_001020e4;
      }

   }

   LAB_001020b8:( *(code*)param_2[8] )(param_2);
   uVar8 = ( ulong ) * (uint*)( param_2 + 3 );
   if (*(uint*)( param_2 + 3 ) != 0) goto LAB_001020e4;
   LAB_001020c7:bVar5 = false;
   ( *(code*)param_2[7] )(param_2);
   pbVar1 = (byte*)*param_2;
   joined_r0x0010206d:__s1 = pbVar1;
   if (pbVar2 <= __s1) goto LAB_001020e0;
   goto LAB_0010206f;
}
void read_pfb_tag(undefined8 param_1, short *param_2, ulong *param_3) {
   short sVar1;
   uint uVar2;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0;
   *param_3 = 0;
   sVar1 = FT_Stream_ReadUShort(param_1, &local_34);
   if (local_34 == 0) {
      if (( ushort )(sVar1 + 0x7fffU) < 2) {
         uVar2 = FT_Stream_ReadULongLE(param_1, &local_34);
         if (local_34 == 0) {
            *param_3 = (ulong)uVar2;
         }

      }

      *param_2 = sVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void parse_charstrings(long param_1, long *param_2) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   byte bVar4;
   char *pcVar5;
   long lVar6;
   undefined8 *puVar7;
   char *pcVar8;
   char *pcVar9;
   bool bVar10;
   char cVar11;
   int iVar12;
   int iVar13;
   void *__dest;
   long lVar14;
   ulong uVar15;
   int iVar16;
   long in_FS_OFFSET;
   int local_78;
   int local_5c;
   ulong local_58;
   void *local_50;
   undefined4 local_45;
   undefined1 local_41;
   long local_40;
   lVar14 = *param_2;
   pcVar5 = (char*)param_2[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = param_2[4];
   puVar7 = *(undefined8**)( param_1 + 0x310 );
   iVar12 = ( *(code*)param_2[9] )(param_2);
   if (iVar12 < 0) {
      LAB_001028d0:iVar13 = 3;
   }
 else {
      lVar14 = (long)pcVar5 - lVar14 >> 3;
      if (lVar14 < iVar12) {
         iVar12 = (int)lVar14;
      }

      if (( iVar12 == 0 ) || ( (int)param_2[3] != 0 )) goto LAB_001028d9;
      plVar1 = param_2 + 0x32;
      plVar2 = param_2 + 0x26;
      plVar3 = param_2 + 0x3e;
      if ((int)param_2[0x25] == 0) {
         iVar13 = ( **(code**)*puVar7 )(plVar1, iVar12 + 6, lVar6);
         local_5c = iVar13;
         if (( ( iVar13 == 0 ) && ( iVar13 = ( **(code**)*puVar7 )(plVar2, iVar12 + 6, lVar6) ),local_5c = iVar13,iVar13 == 0 )) goto LAB_00102685;
      }
 else {
         LAB_00102685:bVar10 = false;
         iVar16 = 0;
         local_78 = 0;
         while (true) {
            ( *(code*)param_2[7] )(param_2);
            pcVar8 = (char*)*param_2;
            if (pcVar5 <= pcVar8) break;
            if (pcVar8 + 3 < pcVar5) {
               bVar4 = pcVar8[3];
               if (bVar4 < 0x3f) {
                  if (( 0x5000832100003601U >> ( (ulong)bVar4 & 0x3f ) & 1 ) != 0) {
                     cVar11 = *pcVar8;
                     if (cVar11 == 'd') goto LAB_0010295b;
                     LAB_001026ee:if (( ( cVar11 == 'e' ) && ( pcVar8[1] == 'n' ) ) && ( pcVar8[2] == 'd' )) break;
                  }

               }
 else if (( ( byte )(bVar4 - 0x5b) < 0x23 ) && ( ( 0x500000005U >> ( ( ulong )(bVar4 - 0x5b) & 0x3f ) & 1 ) != 0 )) {
                  cVar11 = *pcVar8;
                  if (cVar11 != 'd') goto LAB_001026ee;
                  LAB_0010295b:if (( ( pcVar8[1] == 'e' ) && ( pcVar8[2] == 'f' ) ) && ( iVar16 != 0 )) goto LAB_00102980;
               }

            }

            ( *(code*)param_2[8] )(param_2);
            pcVar9 = (char*)*param_2;
            if (pcVar5 <= pcVar9) goto LAB_001028d0;
            if ((int)param_2[3] != 0) goto LAB_001028d9;
            if (*pcVar8 == '/') {
               if (pcVar5 <= pcVar8 + 2) goto LAB_001028d0;
               iVar13 = read_binary_data(param_2, &local_58, &local_50, *(long*)( *(long*)( param_1 + 0xf0 ) + 0x68 ) != 0);
               if (iVar13 == 0) goto LAB_001028d9;
               if ((int)param_2[0x25] == 0) {
                  uVar15 = (long)pcVar9 - (long)( pcVar8 + 1 );
                  local_5c = ( *(code*)param_2[0x30] )(plVar2, iVar16, pcVar8 + 1, (int)uVar15 + 1);
                  iVar13 = local_5c;
                  if (local_5c != 0) goto LAB_001028d5;
                  *(undefined1*)( *(long*)( param_2[0x2b] + (long)iVar16 * 8 ) + ( uVar15 & 0xffffffff ) ) = 0;
                  if (pcVar8[1] == '.') {
                     iVar13 = strcmp(".notdef", *(char**)( param_2[0x2b] + (long)iVar16 * 8 ));
                     if (iVar13 == 0) {
                        local_78 = iVar16;
                     }

                     if (iVar13 == 0) {
                        bVar10 = true;
                     }

                  }

                  uVar15 = local_58;
                  if (( *(int*)( param_1 + 0x13c ) < 0 ) || ( iVar12 + 4 < iVar16 )) {
                     local_5c = ( *(code*)param_2[0x3c] )(plVar1, iVar16, local_50, local_58 & 0xffffffff);
                  }
 else {
                     if (local_58 <= ( ulong )(long) * (int*)( param_1 + 0x13c )) goto LAB_001028d0;
                     __dest = (void*)ft_mem_qalloc(lVar6, local_58, &local_5c);
                     iVar13 = local_5c;
                     if (local_5c != 0) goto LAB_001028d5;
                     memcpy(__dest, local_50, uVar15);
                     ( *(code*)puVar7[4] )(__dest, uVar15, 0x10ea);
                     local_58 = uVar15 - (long)*(int*)( param_1 + 0x13c );
                     local_5c = ( *(code*)param_2[0x3c] )(plVar1, iVar16, (long)*(int*)( param_1 + 0x13c ) + (long)__dest);
                     ft_mem_free(lVar6);
                  }

                  iVar13 = local_5c;
                  if (local_5c != 0) goto LAB_001028d5;
                  iVar16 = iVar16 + 1;
               }

            }

         }
;
         if (iVar16 == 0) goto LAB_001028d0;
         LAB_00102980:*(int*)( param_2 + 0x25 ) = iVar16;
         pcVar5 = *(char**)param_2[0x2b];
         if (bVar10) {
            iVar12 = strcmp(".notdef", pcVar5);
            if (iVar12 == 0) goto LAB_001028d9;
            iVar13 = ( *(code*)param_2[0x48] )(plVar3, 0, pcVar5, *(undefined4*)param_2[0x2c]);
            local_5c = iVar13;
            if (( iVar13 == 0 ) && ( iVar13 = ( *(code*)param_2[0x48] )(plVar3, 1, *(undefined8*)param_2[0x37], *(undefined4*)param_2[0x38]) ),local_5c = iVar13,iVar13 == 0) {
               lVar14 = (long)local_78;
               iVar13 = ( *(code*)param_2[0x48] )(plVar3, 2, *(undefined8*)( param_2[0x2b] + lVar14 * 8 ), *(undefined4*)( param_2[0x2c] + lVar14 * 4 ));
               local_5c = iVar13;
               if (( iVar13 == 0 ) && ( ( ( ( iVar13 = ( *(code*)param_2[0x48] )(plVar3, 3, *(undefined8*)( param_2[0x37] + lVar14 * 8 ), *(undefined4*)( param_2[0x38] + lVar14 * 4 )) ),local_5c = iVar13,iVar13 == 0 && ( iVar13 = ( *(code*)param_2[0x30] )(plVar2, local_78, *(undefined8*)param_2[0x43], *(undefined4*)param_2[0x44]) ),local_5c = iVar13,iVar13 == 0 ) ) && ( iVar13 = ( *(code*)param_2[0x3c] )(plVar1, local_78, *(undefined8*)( param_2[0x43] + 8 ), *(undefined4*)( param_2[0x44] + 4 )) ),local_5c = iVar13,iVar13 == 0 )) &&( ( iVar13 = ( *(code*)param_2[0x30] )(plVar2, 0, *(undefined8*)( param_2[0x43] + 0x10 ), *(undefined4*)( param_2[0x44] + 8 )) ),local_5c = iVar13,iVar13 == 0 && ( iVar13 = ( *(code*)param_2[0x3c] )(plVar1, 0, *(undefined8*)( param_2[0x43] + 0x18 ), *(undefined4*)( param_2[0x44] + 0xc )) ),iVar13 == 0 );
            }

         }
 else {
            local_45 = 0xde1f78b;
            local_41 = 0xe;
            iVar13 = ( *(code*)param_2[0x48] )(plVar3, 0, pcVar5, *(undefined4*)param_2[0x2c]);
            local_5c = iVar13;
            if (( ( iVar13 == 0 ) && ( iVar13 = ( *(code*)param_2[0x48] )(plVar3, 1, *(undefined8*)param_2[0x37], *(undefined4*)param_2[0x38]) ),local_5c = iVar13,iVar13 == 0 )) {
               *(int*)( param_2 + 0x25 ) = (int)param_2[0x25] + 1;
               goto LAB_001028d9;
            }

         }

      }

   }

   LAB_001028d5:*(int*)( param_2 + 3 ) = iVar13;
   LAB_001028d9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void parse_subrs(long param_1, ulong *param_2) {
   ulong *puVar1;
   ulong uVar2;
   undefined8 *puVar3;
   int iVar4;
   int iVar5;
   char *pcVar6;
   void *__dest;
   ulong uVar7;
   long lVar8;
   int iVar9;
   int iVar10;
   long in_FS_OFFSET;
   int local_5c;
   int local_54;
   ulong local_50;
   void *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_2[4];
   puVar3 = *(undefined8**)( param_1 + 0x310 );
   ( *(code*)param_2[7] )(param_2);
   if (( (char*)*param_2 < (char*)param_2[2] ) && ( *(char*)*param_2 == '[' )) {
      ( *(code*)param_2[8] )(param_2);
      ( *(code*)param_2[7] )(param_2);
      if (( (char*)*param_2 < (char*)param_2[2] ) && ( *(char*)*param_2 == ']' )) goto LAB_00102de0;
   }
 else {
      local_5c = ( *(code*)param_2[9] )();
      if (-1 < local_5c) {
         if (( param_2[2] < *param_2 ) || ( lVar8 = local_5c <= lVar8 )) {
            LAB_00102d58:( *(code*)param_2[8] )(param_2);
            if ((int)param_2[3] != 0) goto LAB_00102de0;
            puVar1 = param_2 + 0x4b;
            ( *(code*)param_2[7] )(param_2);
            if (( (int)param_2[0x4a] != 0 ) || ( local_54 = ( **(code**)*puVar3 )(puVar1, local_5c, uVar2) ),iVar5 = local_54,local_54 == 0) {
               pcVar6 = (char*)*param_2;
               if (pcVar6 + 4 < (char*)param_2[2]) {
                  iVar9 = 0;
                  do {
                     if (( ( *pcVar6 != 'd' ) || ( pcVar6[1] != 'u' ) ) || ( pcVar6[2] != 'p' )) break;
                     ( *(code*)param_2[8] )(param_2);
                     iVar4 = ( *(code*)param_2[9] )(param_2);
                     iVar5 = read_binary_data(param_2, &local_50, &local_48, *(long*)( *(long*)( param_1 + 0xf0 ) + 0x68 ) != 0);
                     if (( iVar5 == 0 ) || ( ( *(code*)param_2[8] )(param_2),(int)param_2[3] != 0 )) goto LAB_00102de0;
                     ( *(code*)param_2[7] )(param_2);
                     pcVar6 = (char*)*param_2;
                     if (( ( pcVar6 + 4 < (char*)param_2[2] ) && ( ( *pcVar6 == 'p' && ( pcVar6[1] == 'u' ) ) ) ) && ( pcVar6[2] == 't' )) {
                        ( *(code*)param_2[8] )(param_2);
                        ( *(code*)param_2[7] )(param_2);
                     }

                     if (param_2[0x57] != 0) {
                        ft_hash_num_insert(iVar4, iVar9, param_2[0x57], uVar2);
                        iVar4 = iVar9;
                     }

                     uVar7 = local_50;
                     if ((int)param_2[0x4a] == 0) {
                        iVar10 = (int)local_50;
                        if (*(int*)( param_1 + 0x13c ) < 0) {
                           local_54 = ( *(code*)param_2[0x55] )(puVar1, iVar4, local_48, local_50 & 0xffffffff);
                        }
 else {
                           if (local_50 < ( ulong )(long) * (int*)( param_1 + 0x13c )) {
                              iVar5 = 3;
                              goto LAB_00102fc8;
                           }

                           __dest = (void*)ft_mem_qalloc(uVar2, local_50, &local_54);
                           iVar5 = local_54;
                           if (local_54 != 0) goto LAB_00102fc8;
                           memcpy(__dest, local_48, uVar7);
                           ( *(code*)puVar3[4] )(__dest, uVar7, 0x10ea);
                           local_54 = ( *(code*)param_2[0x55] )(puVar1, iVar4, (long)__dest + (long)*(int*)( param_1 + 0x13c ), iVar10 - *(int*)( param_1 + 0x13c ));
                           ft_mem_free(uVar2, __dest);
                        }

                        iVar5 = local_54;
                        if (local_54 != 0) goto LAB_00102fc8;
                     }

                     pcVar6 = (char*)*param_2;
                     iVar9 = iVar9 + 1;
                  }
 while ( pcVar6 + 4 < (char*)param_2[2] );
               }

               if ((int)param_2[0x4a] == 0) {
                  *(int*)( param_2 + 0x4a ) = local_5c;
               }

               goto LAB_00102de0;
            }

         }
 else {
            if (param_2[0x57] != 0) {
               LAB_00102d51:local_5c = (int)lVar8;
               goto LAB_00102d58;
            }

            uVar7 = ft_mem_qalloc(uVar2, 0x28, &local_54);
            param_2[0x57] = uVar7;
            iVar5 = local_54;
            if (( local_54 == 0 ) && ( iVar5 = ft_hash_num_init(uVar7, uVar2) ),local_54 = iVar5,iVar5 == 0) goto LAB_00102d51;
         }

         LAB_00102fc8:*(int*)( param_2 + 3 ) = iVar5;
         goto LAB_00102de0;
      }

   }

   *(undefined4*)( param_2 + 3 ) = 3;
   LAB_00102de0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void t1_parse_font_matrix(long param_1, long param_2) {
   char cVar1;
   undefined2 uVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ( **(code**)( param_2 + 0x68 ) )(param_2, 6, &local_58, 3);
   if (( 5 < iVar3 ) && ( local_40 != 0 )) {
      lVar4 = -local_40;
      if (0 < local_40) {
         lVar4 = local_40;
      }

      if (lVar4 != 0x10000) {
         uVar2 = FT_DivFix(1000, lVar4);
         *(undefined2*)( param_1 + 0x88 ) = uVar2;
         local_58 = FT_DivFix(local_58, lVar4);
         local_50 = FT_DivFix(local_50, lVar4);
         local_48 = FT_DivFix(local_48, lVar4);
         local_38 = FT_DivFix(local_38, lVar4);
         uStack_30 = FT_DivFix(uStack_30, lVar4);
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
         goto LAB_0010317f;
      }

   }

   *(undefined4*)( param_2 + 0x18 ) = 3;
   LAB_0010317f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void Get_Interface(void) {
   ft_service_list_lookup(t1_services);
   return;
}
long mm_axis_unmap(byte *param_1, long param_2) {
   byte bVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   plVar2 = *(long**)( param_1 + 0x10 );
   plVar3 = *(long**)( param_1 + 8 );
   if (param_2 <= *plVar2) {
      return *plVar3 << 0x10;
   }

   bVar1 = *param_1;
   lVar6 = 8;
   if (1 < bVar1) {
      do {
         if (param_2 <= *(long*)( (long)plVar2 + lVar6 )) {
            lVar4 = *(long*)( (long)plVar3 + lVar6 + -8 );
            lVar5 = *(long*)( (long)plVar2 + lVar6 + -8 );
            lVar6 = FT_MulDiv(param_2 - lVar5, *(long*)( (long)plVar3 + lVar6 ) - lVar4, *(long*)( (long)plVar2 + lVar6 ) - lVar5);
            return ( lVar6 + lVar4 ) * 0x10000;
         }

         lVar6 = lVar6 + 8;
      }
 while ( (ulong)bVar1 * 8 - lVar6 != 0 );
   }

   return plVar3[(ulong)bVar1 - 1] << 0x10;
}
undefined8 T1_Get_Track_Kerning(long param_1, long param_2, int param_3, long *param_4) {
   int *piVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   lVar2 = *(long*)( param_1 + 0x318 );
   if (lVar2 == 0) {
      return 6;
   }

   lVar4 = 0;
   if (*(int*)( lVar2 + 0x40 ) == 0) {
      return 0;
   }

   do {
      while (piVar1 = (int*)( *(long*)( lVar2 + 0x38 ) + lVar4 * 0x28 ),*piVar1 != param_3) {
         LAB_00103287:lVar4 = lVar4 + 1;
         if (*(uint*)( lVar2 + 0x40 ) <= (uint)lVar4) {
            return 0;
         }

      }
;
      lVar3 = *(long*)( piVar1 + 2 );
      if (param_2 < lVar3) {
         *param_4 = *(long*)( piVar1 + 4 );
         goto LAB_00103287;
      }

      if (param_2 <= *(long*)( piVar1 + 6 )) {
         lVar3 = FT_MulDiv(param_2 - lVar3, *(long*)( piVar1 + 8 ) - *(long*)( piVar1 + 4 ), *(long*)( piVar1 + 6 ) - lVar3);
         *param_4 = lVar3 + *(long*)( piVar1 + 4 );
         goto LAB_00103287;
      }

      *param_4 = *(long*)( piVar1 + 8 );
      lVar4 = lVar4 + 1;
      if (*(uint*)( lVar2 + 0x40 ) <= (uint)lVar4) {
         return 0;
      }

   }
 while ( true );
}
ulong t1_ps_get_font_value(long param_1, uint param_2, uint param_3, undefined8 *param_4, ulong param_5) {
   ulong uVar1;
   size_t sVar2;
   undefined8 uVar3;
   uint *puVar4;
   void *pvVar5;
   ulong uVar6;
   char *pcVar7;
   ulong uVar8;
   uVar1 = 0;
   if (-1 < (long)param_5) {
      uVar1 = param_5;
   }

   if (0x2d < param_2) {
      return 0xffffffffffffffff;
   }

   uVar6 = (ulong)param_3;
   switch (param_2) {
      case 0:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x2a1);
    }
    break;
      case 1:
    if (3 < param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar1 < 8) {
      return 8;
    }
    if (param_3 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x2b8);
    }
    else if (param_3 == 3) {
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
    }
    else if (param_3 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x2b0);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x2a8);
    }
    goto LAB_0010369a;
      case 2:
    if (3 < param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar1 < 8) {
      return 8;
    }
    if (param_3 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x2e8);
    }
    else if (param_3 == 3) {
      uVar3 = *(undefined8 *)(param_1 + 0x2f0);
    }
    else if (param_3 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x2e0);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x2d8);
    }
    goto LAB_0010369a;
      case 3:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x2a0);
    }
    break;
      case 4:
    pcVar7 = *(char **)(param_1 + 0x218);
    goto joined_r0x001033ff;
      case 5:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar1 < 4) {
      return 4;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x138);
    return 4;
      case 6:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar1 < 4) {
      return 4;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x280);
    return 4;
      case 7:
    if (*(uint *)(param_1 + 0x280) <= param_3) {
      return 0xffffffffffffffff;
    }
    pcVar7 = *(char **)(*(long *)(param_1 + 0x288) + uVar6 * 8);
    goto LAB_00103408;
      case 8:
    if (*(uint *)(param_1 + 0x280) <= param_3) {
      return 0xffffffffffffffff;
    }
    uVar8 = (ulong)(*(int *)(*(long *)(param_1 + 0x298) + uVar6 * 4) + 1);
    if ((param_4 != (undefined8 *)0x0) && (uVar8 <= uVar1)) {
      pvVar5 = memcpy(param_4,*(void **)(*(long *)(param_1 + 0x290) + uVar6 * 8),uVar8 - 1);
      *(undefined1 *)((long)pvVar5 + (uVar8 - 1)) = 0;
    }
    goto LAB_00103900;
      case 9:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar1 < 4) {
      return 4;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x220);
    return 4;
      case 10:
    if (*(int *)(param_1 + 0x220) != 1) {
      return 0xffffffffffffffff;
    }
    if (*(uint *)(param_1 + 0x228) <= param_3) {
      return 0xffffffffffffffff;
    }
    pcVar7 = *(char **)(*(long *)(param_1 + 0x240) + uVar6 * 8);
    sVar2 = strlen(pcVar7);
    uVar6 = sVar2 + 1;
    if (param_4 == (undefined8 *)0x0) {
      return uVar6;
    }
    if (uVar6 <= uVar1) {
      pvVar5 = memcpy(param_4,pcVar7,sVar2);
      *(undefined1 *)((long)pvVar5 + sVar2) = 0;
      return uVar6;
    }
    return uVar6;
      case 0xb:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar1 < 4) {
      return 4;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x260);
    return 4;
      case 0xc:
    if (*(long *)(param_1 + 0x278) == 0) {
      if (*(uint *)(param_1 + 0x260) <= param_3) {
        return 0xffffffffffffffff;
      }
    }
    else {
      puVar4 = (uint *)ft_hash_num_lookup();
      if (puVar4 == (uint *)0x0) {
        return 0xffffffffffffffff;
      }
      uVar6 = (ulong)*puVar4;
    }
    if (*(long *)(param_1 + 0x268) == 0) {
      return 0xffffffffffffffff;
    }
    uVar8 = (ulong)(*(int *)(*(long *)(param_1 + 0x270) + uVar6 * 4) + 1);
    if ((param_4 != (undefined8 *)0x0) && (uVar8 <= uVar1)) {
      pvVar5 = memcpy(param_4,*(void **)(*(long *)(param_1 + 0x268) + uVar6 * 8),uVar8 - 1);
      *(undefined1 *)((long)pvVar5 + (uVar8 - 1)) = 0;
    }
LAB_00103900:
    if (uVar8 == 0) {
      return 0xffffffffffffffff;
    }
    return uVar8;
      case 0xd:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1b8);
    return 2;
      case 0xe:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1ba);
    return 2;
      case 0xf:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x140);
    }
    break;
      case 0x10:
    if (*(byte *)(param_1 + 0x140) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x144 + uVar6 * 2);
    return 2;
      case 0x11:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar1 < 4) {
      return 4;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x1b4);
    return 4;
      case 0x12:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x141);
    }
    break;
      case 0x13:
    if (*(byte *)(param_1 + 0x141) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x160 + uVar6 * 2);
    return 2;
      case 0x14:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x142);
    }
    break;
      case 0x15:
    if (*(byte *)(param_1 + 0x142) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x174 + uVar6 * 2);
    return 2;
      case 0x16:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x143);
    }
    break;
      case 0x17:
    if (*(byte *)(param_1 + 0x143) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 400 + uVar6 * 2);
    return 2;
      case 0x18:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar1 < 8) {
      return 8;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
LAB_0010369a:
    *param_4 = uVar3;
    return 8;
      case 0x19:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar1 < 4) {
      return 4;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x1b0);
    return 4;
      case 0x1a:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x1bc);
    }
    break;
      case 0x1b:
    if (*(byte *)(param_1 + 0x1bc) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1c0 + uVar6 * 2);
    return 2;
      case 0x1c:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x1bd);
    }
    break;
      case 0x1d:
    if (*(byte *)(param_1 + 0x1bd) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1da + uVar6 * 2);
    return 2;
      case 0x1e:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x1be);
    }
    break;
      case 0x1f:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x1bf);
    }
    break;
      case 0x20:
    if (1 < param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x210 + (ulong)param_3 * 2);
    return 2;
      case 0x21:
    if ((param_4 != (undefined8 *)0x0) && (3 < uVar1)) {
      *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x13c);
    }
    return 4;
      case 0x22:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar1 < 8) {
      return 8;
    }
    *param_4 = *(undefined8 *)(param_1 + 0x208);
    return 8;
      case 0x23:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar1 < 8) {
      return 8;
    }
    *param_4 = *(undefined8 *)(param_1 + 0x200);
    return 8;
      case 0x24:
    pcVar7 = *(char **)(param_1 + 0xf8);
    goto joined_r0x0010348f;
      case 0x25:
    pcVar7 = *(char **)(param_1 + 0x100);
joined_r0x0010348f:
    if (pcVar7 == (char *)0x0) {
      return 0xffffffffffffffff;
    }
    goto LAB_00103408;
      case 0x26:
    pcVar7 = *(char **)(param_1 + 0x108);
    goto joined_r0x001033ff;
      case 0x27:
    pcVar7 = *(char **)(param_1 + 0x110);
    goto joined_r0x001033ff;
      case 0x28:
    pcVar7 = *(char **)(param_1 + 0x118);
joined_r0x001033ff:
    if (pcVar7 == (char *)0x0) {
      return 0xffffffffffffffff;
    }
LAB_00103408:
    sVar2 = strlen(pcVar7);
    uVar6 = sVar2 + 1;
    if (param_4 == (undefined8 *)0x0) {
      return uVar6;
    }
    if (uVar6 <= uVar1) {
      memcpy(param_4,pcVar7,uVar6);
      return uVar6;
    }
    return uVar6;
      case 0x29:
    if ((param_4 != (undefined8 *)0x0) && (uVar1 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x128);
    }
    break;
      case 0x2a:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x12a);
    return 2;
      case 0x2b:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar1 < 2) {
      return 2;
    }
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 300);
    return 2;
      case 0x2c:
    if ((param_4 != (undefined8 *)0x0) && (1 < uVar1)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x130);
    }
    return 2;
      case 0x2d:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar1 < 8) {
      return 8;
    }
    *param_4 = *(undefined8 *)(param_1 + 0x120);
    return 8;
   }

   return 1;
}
undefined8 t1_get_glyph_name(long param_1, uint param_2, undefined8 param_3, undefined4 param_4) {
   ft_mem_strcpyn(param_3, *(undefined8*)( *(long*)( param_1 + 0x288 ) + (ulong)param_2 * 8 ), param_4);
   return 0;
}
void mm_weights_unmap(long param_1, long *param_2, int param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 8 );
   if (param_3 == 1) {
      *param_2 = lVar1;
      return;
   }

   lVar2 = *(long*)( param_1 + 0x18 );
   if (param_3 != 2) {
      if (param_3 != 3) {
         *param_2 = *(long*)( param_1 + 0x68 ) + *(long*)( param_1 + 0x78 ) + *(long*)( param_1 + 0x58 ) + *(long*)( param_1 + 0x48 ) + *(long*)( param_1 + 0x38 ) + *(long*)( param_1 + 0x28 ) + lVar2 + lVar1;
         param_2[1] = *(long*)( param_1 + 0x70 ) + *(long*)( param_1 + 0x78 ) + *(long*)( param_1 + 0x58 ) + *(long*)( param_1 + 0x50 ) + *(long*)( param_1 + 0x38 ) + *(long*)( param_1 + 0x30 ) + *(long*)( param_1 + 0x18 ) + *(long*)( param_1 + 0x10 );
         param_2[2] = *(long*)( param_1 + 0x70 ) + *(long*)( param_1 + 0x78 ) + *(long*)( param_1 + 0x68 ) + *(long*)( param_1 + 0x60 ) + *(long*)( param_1 + 0x38 ) + *(long*)( param_1 + 0x30 ) + *(long*)( param_1 + 0x28 ) + *(long*)( param_1 + 0x20 );
         param_2[3] = *(long*)( param_1 + 0x70 ) + *(long*)( param_1 + 0x78 ) + *(long*)( param_1 + 0x68 ) + *(long*)( param_1 + 0x60 ) + *(long*)( param_1 + 0x58 ) + *(long*)( param_1 + 0x50 ) + *(long*)( param_1 + 0x48 ) + *(long*)( param_1 + 0x40 );
         return;
      }

      *param_2 = *(long*)( param_1 + 0x28 ) + *(long*)( param_1 + 0x38 ) + lVar2 + lVar1;
      param_2[1] = *(long*)( param_1 + 0x30 ) + *(long*)( param_1 + 0x38 ) + *(long*)( param_1 + 0x18 ) + *(long*)( param_1 + 0x10 );
      param_2[2] = *(long*)( param_1 + 0x30 ) + *(long*)( param_1 + 0x38 ) + *(long*)( param_1 + 0x28 ) + *(long*)( param_1 + 0x20 );
      return;
   }

   *param_2 = lVar2 + lVar1;
   param_2[1] = *(long*)( param_1 + 0x10 ) + *(long*)( param_1 + 0x18 );
   return;
}
undefined8 T1_Get_MM_Blend(long param_1, uint param_2, void *param_3) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined1 *__src;
   uint uVar6;
   long in_FS_OFFSET;
   undefined1 auStack_48[40];
   long local_20;
   __src = auStack_48;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( param_1 + 0x350 );
   if (lVar2 == 0) {
      uVar5 = 6;
      goto LAB_00103dfa;
   }

   uVar6 = *(uint*)( lVar2 + 4 );
   mm_weights_unmap(*(undefined8*)( lVar2 + 0x108 ), auStack_48, uVar6);
   if (param_2 < uVar6) {
      uVar6 = param_2;
   }

   if (uVar6 != 0) {
      memcpy(param_3, __src, (ulong)uVar6 << 3);
   }

   if (uVar6 < param_2) {
      puVar4 = (undefined8*)( (long)param_3 + (ulong)uVar6 * 8 );
      puVar1 = (undefined8*)( (long)param_3 + ( ( ulong )(( param_2 - 1 ) - uVar6) + (ulong)uVar6 ) * 8 + 8 );
      puVar3 = puVar4;
      if (( (int)puVar1 - (int)puVar4 & 8U ) != 0) {
         *puVar4 = 0x8000;
         puVar3 = puVar4 + 1;
         if (puVar4 + 1 == puVar1) goto LAB_00103df8;
      }

      do {
         *puVar3 = 0x8000;
         puVar4 = puVar3 + 2;
         puVar3[1] = 0x8000;
         puVar3 = puVar4;
      }
 while ( puVar4 != puVar1 );
   }

   LAB_00103df8:uVar5 = 0;
   LAB_00103dfa:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 T1_Get_Var_Design(long param_1, uint param_2, long param_3) {
   undefined8 uVar1;
   ulong uVar2;
   uint uVar3;
   long lVar5;
   long in_FS_OFFSET;
   undefined1 local_68[40];
   long local_40;
   ulong uVar4;
   lVar5 = *(long*)( param_1 + 0x350 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar5 == 0) {
      uVar1 = 6;
   }
 else {
      uVar3 = *(uint*)( lVar5 + 4 );
      mm_weights_unmap(*(undefined8*)( lVar5 + 0x108 ), local_68, (ulong)uVar3);
      uVar4 = (ulong)uVar3;
      if (param_2 < uVar3) {
         uVar4 = (ulong)param_2;
      }

      uVar3 = (uint)uVar4;
      if (uVar3 != 0) {
         uVar2 = 0;
         lVar5 = lVar5 + 0xa8;
         do {
            uVar1 = mm_axis_unmap(lVar5);
            *(undefined8*)( param_3 + uVar2 * 8 ) = uVar1;
            uVar2 = uVar2 + 1;
            lVar5 = lVar5 + 0x18;
         }
 while ( uVar4 != uVar2 );
      }

      if (uVar3 < param_2) {
         memset((void*)( param_3 + uVar4 * 8 ), 0, ( ulong )(( param_2 - 1 ) - uVar3) * 8 + 8);
      }

      uVar1 = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int T1_Get_MM_Var(long param_1, long *param_2) {
   long lVar1;
   char *__s1;
   int iVar2;
   ulong uVar3;
   undefined8 *puVar4;
   void *pvVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   uint *puVar8;
   undefined8 *puVar9;
   long lVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   int local_cc;
   undefined8 local_c8[4];
   uint local_a8;
   undefined4 local_a4;
   long local_40;
   uVar6 = *(undefined8*)( param_1 + 0xb8 );
   puVar8 = &local_a8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar10 = *(long*)( param_1 + 0x350 );
   local_cc = T1_Get_Multi_Master(param_1, puVar8);
   iVar2 = local_cc;
   if (local_cc == 0) {
      uVar11 = (ulong)local_a8;
      uVar3 = uVar11 * 2 + 7 & 0xfffffffffffffff8;
      puVar4 = (undefined8*)ft_mem_qalloc(uVar6, uVar3 + 0x20 + uVar11 * 0x30, &local_cc);
      iVar2 = local_cc;
      if (local_cc == 0) {
         *(undefined4*)( puVar4 + 1 ) = 0;
         *puVar4 = CONCAT44(local_a4, local_a8);
         pvVar5 = memset(puVar4 + 4, 0, uVar11 * 2);
         puVar4[3] = 0;
         puVar9 = (undefined8*)( uVar3 + (long)pvVar5 );
         puVar4[2] = puVar9;
         if (local_a8 != 0) {
            puVar7 = puVar9;
            do {
               lVar1 = *(long*)( puVar8 + 4 );
               __s1 = *(char**)( puVar8 + 2 );
               *(undefined4*)( puVar7 + 5 ) = 0xffffffff;
               *puVar7 = __s1;
               puVar7[1] = lVar1 << 0x10;
               puVar7[3] = *(long*)( puVar8 + 6 ) << 0x10;
               puVar7[4] = 0xffffffff;
               if (__s1 != (char*)0x0) {
                  iVar2 = strcmp(__s1, "Weight");
                  if (iVar2 == 0) {
                     puVar7[4] = 0x77676874;
                  }
 else {
                     iVar2 = strcmp(__s1, "Width");
                     if (iVar2 == 0) {
                        puVar7[4] = 0x77647468;
                     }
 else {
                        iVar2 = strcmp(__s1, "OpticalSize");
                        if (iVar2 == 0) {
                           puVar7[4] = 0x6f70737a;
                        }
 else {
                           iVar2 = strcmp(__s1, "Slant");
                           if (iVar2 == 0) {
                              puVar7[4] = 0x736c6e74;
                           }
 else {
                              iVar2 = strcmp(__s1, "Italic");
                              if (iVar2 == 0) {
                                 puVar7[4] = 0x6974616c;
                              }

                           }

                        }

                     }

                  }

               }

               puVar7 = puVar7 + 6;
               puVar8 = puVar8 + 6;
            }
 while ( puVar7 != puVar9 + uVar11 * 6 );
            mm_weights_unmap(*(undefined8*)( lVar10 + 0x110 ), local_c8, *(undefined4*)( lVar10 + 4 ));
            uVar3 = 0;
            lVar10 = lVar10 + 0xa8;
            while (true) {
               uVar6 = mm_axis_unmap(lVar10, local_c8[uVar3]);
               puVar9[uVar3 * 6 + 2] = uVar6;
               iVar2 = local_cc;
               if (uVar11 == uVar3 + 1) break;
               puVar9 = (undefined8*)puVar4[2];
               uVar3 = uVar3 + 1;
               lVar10 = lVar10 + 0x18;
            }
;
         }

         *param_2 = (long)puVar4;
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
ulong t1_get_index(char *param_1, ulong param_2, long param_3) {
   int iVar1;
   long lVar2;
   char *__s;
   int iVar3;
   size_t sVar4;
   ulong uVar5;
   if (0xffff < param_2) {
      return 0;
   }

   iVar1 = *(int*)( param_3 + 0x188 );
   if (iVar1 < 1) {
      return 0;
   }

   lVar2 = *(long*)( param_3 + 400 );
   uVar5 = 0;
   while (( ( ( __s = *(char**)( lVar2 + uVar5 * 8 ) ),__s == (char*)0x0 || ( *__s != *param_1 ) ) || ( sVar4 = param_2 != sVar4 ) ) || ( iVar3 = iVar3 != 0 )) {
      uVar5 = uVar5 + 1;
      if ((long)iVar1 == uVar5) {
         return 0;
      }

   }
;
   return uVar5 & 0xffffffff;
}
ulong check_type1_format_part_0(long param_1, void *param_2, size_t param_3) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   short local_2a;
   undefined1 local_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = read_pfb_tag(param_1, &local_2a, local_28);
   if ((int)uVar2 == 0) {
      if (local_2a != -0x7fff) {
         uVar2 = FT_Stream_Seek(param_1, 0);
         if ((int)uVar2 != 0) goto LAB_001042aa;
      }

      uVar2 = FT_Stream_EnterFrame(param_1, param_3);
      if ((int)uVar2 == 0) {
         iVar1 = memcmp(*(void**)( param_1 + 0x40 ), param_2, param_3);
         FT_Stream_ExitFrame(param_1);
         uVar2 = ( ulong )(( uint )(iVar1 != 0) * 2);
      }

   }

   LAB_001042aa:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 Get_Kerning(long param_1, uint param_2, uint param_3, undefined1 (*param_4)[16]) {
   uint uVar1;
   long lVar2;
   uint *puVar3;
   uint *puVar4;
   ulong uVar5;
   ulong uVar6;
   uint *puVar7;
   lVar2 = *(long*)( param_1 + 0x318 );
   *param_4 = (undefined1[16])0x0;
   if (lVar2 != 0) {
      puVar4 = *(uint**)( lVar2 + 0x48 );
      uVar6 = (ulong)param_2 << 0x10 | (ulong)param_3;
      puVar7 = puVar4 + ( ulong ) * (uint*)( lVar2 + 0x50 ) * 4 + -4;
      while (puVar4 <= puVar7) {
         while (true) {
            puVar3 = puVar4 + ( (long)puVar7 - (long)puVar4 >> 5 ) * 4;
            uVar5 = ( ulong ) * puVar3 << 0x10 | (ulong)puVar3[1];
            if (uVar6 == uVar5) {
               uVar1 = puVar3[3];
               *(long*)*param_4 = (long)(int)puVar3[2];
               *(long*)( *param_4 + 8 ) = (long)(int)uVar1;
               return 0;
            }

            if (uVar6 <= uVar5) break;
            puVar4 = puVar3 + 4;
            if (puVar7 < puVar4) {
               return 0;
            }

         }
;
         puVar7 = puVar3 + -4;
      }
;
   }

   return 0;
}
undefined8 T1_Size_Get_Globals_Funcs_isra_0(long param_1) {
   undefined8 *puVar1;
   code *UNRECOVERED_JUMPTABLE;
   long lVar2;
   undefined8 uVar3;
   puVar1 = *(undefined8**)( param_1 + 0x370 );
   lVar2 = FT_Get_Module(*(undefined8*)( *(long*)( param_1 + 0xb0 ) + 8 ), "pshinter");
   if (( ( lVar2 != 0 ) && ( puVar1 != (undefined8*)0x0 ) ) && ( UNRECOVERED_JUMPTABLE = (code*)*puVar1 ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001043d5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar3 = ( *UNRECOVERED_JUMPTABLE )(lVar2);
      return uVar3;
   }

   return 0;
}
undefined8 T1_Size_Init(long *param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)T1_Size_Get_Globals_Funcs_isra_0(*param_1);
   uVar2 = 0;
   if (puVar1 != (undefined8*)0x0) {
      uVar2 = ( *(code*)*puVar1 )(*(undefined8*)( *param_1 + 0xb8 ), *param_1 + 0x138, &local_18);
      if ((int)uVar2 == 0) {
         *(undefined8*)param_1[10] = local_18;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void T1_Size_Done(undefined8 *param_1) {
   long lVar1;
   if (*(long*)param_1[10] != 0) {
      lVar1 = T1_Size_Get_Globals_Funcs_isra_0(*param_1);
      if (lVar1 != 0) {
         ( **(code**)( lVar1 + 0x10 ) )(*(undefined8*)param_1[10]);
      }

      *(undefined8*)param_1[10] = 0;
      return;
   }

   return;
}
int T1_Size_Request(undefined8 *param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   lVar2 = T1_Size_Get_Globals_Funcs_isra_0(*param_1);
   iVar1 = FT_Request_Metrics(*param_1, param_2);
   if (( lVar2 != 0 ) && ( iVar1 == 0 )) {
      ( **(code**)( lVar2 + 8 ) )(*(undefined8*)param_1[10], param_1[4], param_1[5], 0, 0);
   }

   return iVar1;
}
int t1_set_mm_blend_isra_0(uint *param_1, uint param_2, long param_3) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   byte bVar9;
   if (param_1 == (uint*)0x0) {
      return 6;
   }

   uVar1 = param_1[1];
   uVar2 = *param_1;
   if (uVar1 <= param_2) {
      param_2 = uVar1;
   }

   if (uVar2 == 0) {
      iVar4 = -1;
   }
 else {
      uVar8 = 0;
      bVar9 = 0;
      lVar3 = *(long*)( param_1 + 0x42 );
      do {
         uVar7 = 0;
         lVar5 = 0x10000;
         if (uVar1 != 0) {
            do {
               while ((uint)uVar7 < param_2) {
                  lVar6 = *(long*)( param_3 + uVar7 * 8 );
                  if (( 1 << ( (byte)uVar7 & 0x1f ) & (uint)uVar8 ) == 0) {
                     lVar6 = 0x10000 - lVar6;
                  }

                  if (lVar6 < 1) {
                     lVar5 = 0;
                     goto LAB_001045d0;
                  }

                  if (lVar6 < 0x10000) {
                     lVar6 = (int)lVar5 * lVar6;
                     lVar5 = lVar6 + 0x8000 + ( lVar6 >> 0x3f ) >> 0x10;
                  }

                  uVar7 = uVar7 + 1;
                  if (uVar1 == uVar7) goto LAB_001045d0;
               }
;
               uVar7 = uVar7 + 1;
               lVar5 = lVar5 >> 1;
            }
 while ( uVar1 != uVar7 );
         }

         LAB_001045d0:if (*(long*)( lVar3 + uVar8 * 8 ) != lVar5) {
            *(long*)( lVar3 + uVar8 * 8 ) = lVar5;
            bVar9 = 1;
         }

         uVar8 = uVar8 + 1;
      }
 while ( uVar2 != uVar8 );
      iVar4 = bVar9 - 1;
   }

   return iVar4;
}
undefined8 T1_Set_MM_Design(long param_1, uint param_2, long param_3) {
   byte bVar1;
   long *plVar2;
   undefined8 *puVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   ulong uVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   byte *pbVar11;
   long lVar12;
   long in_FS_OFFSET;
   undefined8 local_c8[17];
   long local_40;
   lVar12 = *(long*)( param_1 + 0x350 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar12 == 0) {
      uVar6 = 6;
   }
 else {
      uVar10 = *(uint*)( lVar12 + 4 );
      if (uVar10 <= param_2) {
         param_2 = uVar10;
      }

      if (uVar10 != 0) {
         pbVar11 = (byte*)( lVar12 + 0xa8 );
         lVar9 = 0;
         do {
            plVar2 = *(long**)( pbVar11 + 8 );
            puVar3 = *(undefined8**)( pbVar11 + 0x10 );
            if ((uint)lVar9 < param_2) {
               bVar1 = *pbVar11;
               uVar7 = (ulong)bVar1;
               lVar8 = *(long*)( param_3 + lVar9 * 8 );
               if (bVar1 == 0) goto LAB_00104760;
               LAB_001046ba:lVar5 = 0;
               do {
                  if (lVar8 == plVar2[lVar5]) {
                     uVar6 = puVar3[lVar5];
                     goto LAB_001046dc;
                  }

                  if (lVar8 < plVar2[lVar5]) {
                     iVar4 = (int)lVar5;
                     if (iVar4 == 0) goto LAB_00104760;
                     uVar6 = FT_MulDiv(lVar8 - plVar2[iVar4 + -1], puVar3[iVar4] - puVar3[iVar4 + -1], plVar2[iVar4] - plVar2[iVar4 + -1]);
                     uVar10 = *(uint*)( lVar12 + 4 );
                     goto LAB_001046dc;
                  }

                  lVar5 = lVar5 + 1;
               }
 while ( (int)lVar5 < (int)(uint)bVar1 );
               uVar6 = puVar3[uVar7 - 1];
            }
 else {
               bVar1 = *pbVar11;
               uVar7 = (ulong)bVar1;
               lVar8 = ( plVar2[uVar7 - 1] - *plVar2 ) / 2;
               if (bVar1 != 0) goto LAB_001046ba;
               LAB_00104760:uVar6 = *puVar3;
            }

            LAB_001046dc:local_c8[lVar9] = uVar6;
            lVar9 = lVar9 + 1;
            pbVar11 = pbVar11 + 0x18;
         }
 while ( (uint)lVar9 < uVar10 );
         lVar12 = *(long*)( param_1 + 0x350 );
      }

      uVar6 = t1_set_mm_blend_isra_0(lVar12, uVar10, local_c8);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
void T1_Set_Var_Design(undefined8 param_1, uint param_2, long param_3) {
   long lVar1;
   long lVar2;
   uint uVar3;
   long in_FS_OFFSET;
   long local_58[5];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = 4;
   if (param_2 < 5) {
      uVar3 = param_2;
   }

   if (param_2 != 0) {
      lVar2 = 0;
      do {
         lVar1 = FT_RoundFix(*(undefined8*)( param_3 + lVar2 * 8 ));
         local_58[lVar2] = lVar1 >> 0x10;
         lVar2 = lVar2 + 1;
      }
 while ( (uint)lVar2 < uVar3 );
   }

   T1_Set_MM_Design(param_1, uVar3, local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void T1_Reset_MM_Blend(long param_1) {
   t1_set_mm_blend_isra_0(*(undefined8*)( param_1 + 0x350 ), 0, 0);
   return;
}
void T1_Set_MM_Blend(long param_1) {
   t1_set_mm_blend_isra_0(*(undefined8*)( param_1 + 0x350 ));
   return;
}
int T1_Open_Face(long param_1) {
   int *piVar1;
   byte bVar2;
   long lVar3;
   long *plVar4;
   char *__s1;
   char *__s2;
   bool bVar5;
   byte *pbVar6;
   undefined8 *puVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   void *pvVar11;
   void *pvVar12;
   int *piVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   long lVar16;
   size_t __n;
   byte **ppbVar17;
   byte *pbVar18;
   undefined8 *puVar19;
   byte *__n_00;
   long lVar20;
   long in_FS_OFFSET;
   int local_33c;
   int local_320;
   int local_31c;
   byte *local_318;
   byte *local_310;
   byte *local_308[3];
   int local_2f0;
   undefined8 local_2e8;
   code *local_2d8;
   code *local_2d0;
   code *local_2c8;
   long *local_278;
   byte *local_270;
   byte *local_268;
   byte *local_260;
   byte *local_258;
   undefined2 local_250;
   undefined1 local_24e;
   undefined4 local_248;
   undefined1 local_240[32];
   int local_220;
   long local_218;
   code *local_1e8;
   int local_1e0;
   undefined8 local_1d8[5];
   undefined8 *puStack_1b0;
   code *local_180;
   undefined8 local_178[3];
   long local_160;
   undefined8 uStack_150;
   undefined8 local_148;
   code *local_120;
   undefined1 local_118[88];
   code *local_c0;
   undefined4 local_b8;
   undefined8 local_b0[3];
   long local_98;
   undefined8 local_88;
   undefined8 uStack_80;
   code *local_58;
   undefined8 local_50;
   long local_40;
   lVar3 = *(long*)( param_1 + 0x310 );
   plVar4 = *(long**)( param_1 + 0xc0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar15 = *(undefined8*)( param_1 + 0xb8 );
   *(undefined8*)( param_1 + 0x358 ) = 0xffffffffffffffff;
   *(undefined4*)( param_1 + 0x360 ) = 0;
   *(undefined4*)( param_1 + 0x13c ) = 4;
   *(undefined8*)( param_1 + 0x1f8 ) = 0xf5c;
   *(undefined8*)( param_1 + 0x1a8 ) = 0x27a000;
   ppbVar17 = local_308;
   for (lVar16 = 0x59; lVar16 != 0; lVar16 = lVar16 + -1) {
      *ppbVar17 = (byte*)0x0;
      ppbVar17 = ppbVar17 + 1;
   }

   *(undefined8*)( param_1 + 0x1b0 ) = _LC19;
   ( *(code*)**(undefined8**)( lVar3 + 8 ) )(local_308, 0, 0, uVar15);
   local_268 = (byte*)0x0;
   local_270 = (byte*)0x0;
   local_258 = (byte*)0x0;
   local_260 = (byte*)0x0;
   local_250 = 0;
   local_24e = 0;
   local_278 = plVar4;
   iVar8 = FT_Stream_Seek(plVar4, 0);
   if (iVar8 == 0) {
      iVar8 = check_type1_format_part_0(plVar4, "%!PS-AdobeFont", 0xe);
      local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
      if (iVar8 != 0) goto LAB_00104991;
      LAB_00104af8:iVar8 = FT_Stream_Seek(plVar4, 0);
      local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
      if (iVar8 != 0) goto LAB_001049ab;
      iVar8 = read_pfb_tag(plVar4, &local_31c, &local_310);
      local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
      if (iVar8 != 0) goto LAB_001049ab;
      if ((short)local_31c == -0x7fff) {
         local_250 = CONCAT11(local_250._1_1_, 1);
      }
 else {
         iVar8 = FT_Stream_Seek(plVar4, 0);
         local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
         if (iVar8 != 0) goto LAB_001049ab;
         local_310 = (byte*)plVar4[1];
      }

      pbVar18 = local_310;
      if (plVar4[5] != 0) {
         local_270 = (byte*)ft_mem_qalloc(uVar15, local_310, &local_318);
         if ((int)local_318 == 0) {
            iVar8 = FT_Stream_Read(plVar4, local_270, pbVar18);
            local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
            if (iVar8 == 0) {
               local_308[2] = local_270 + (long)pbVar18;
               local_268 = pbVar18;
               goto LAB_00104c71;
            }

         }

         goto LAB_001049ab;
      }

      local_270 = (byte*)( plVar4[2] + *plVar4 );
      local_250 = CONCAT11(1, (char)local_250);
      local_268 = local_310;
      iVar8 = FT_Stream_Skip(plVar4, local_310);
      local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
      if (iVar8 != 0) goto LAB_001049ab;
      local_308[2] = local_270 + (long)local_268;
      LAB_00104c71:local_320 = 0;
      local_308[0] = local_270;
      local_308[1] = local_270;
   }
 else {
      local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
      LAB_00104991:if ((char)iVar8 == '\x02') {
         iVar8 = FT_Stream_Seek(plVar4, 0);
         if (iVar8 == 0) {
            iVar8 = check_type1_format_part_0(plVar4, "%!FontType", 10);
            local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
            if (iVar8 == 0) goto LAB_00104af8;
         }
 else {
            local_318 = (byte*)CONCAT44(local_318._4_4_, iVar8);
         }

      }

      LAB_001049ab:if (local_250._1_1_ != '\0') {
         local_320 = (int)local_318;
         iVar8 = local_320;
         goto LAB_001049c9;
      }

      ft_mem_free(uVar15, local_270);
      local_270 = (byte*)0x0;
      local_320 = (int)local_318;
      iVar8 = local_320;
      if ((int)local_318 != 0) goto LAB_001049c9;
   }

   local_320 = parse_dict(param_1, local_308, local_270, local_268);
   plVar4 = local_278;
   uVar15 = local_2e8;
   iVar8 = local_320;
   if (local_320 != 0) goto LAB_001049c9;
   local_31c = 0;
   if ((char)local_250 != '\0') {
      uVar14 = FT_Stream_Pos(local_278);
      local_258 = (byte*)0x0;
      while (local_31c = read_pfb_tag(plVar4, &local_310, &local_318),iVar8 = local_31c,local_31c == 0) {
         if ((short)local_310 != -0x7ffe) {
            if (local_258 == (byte*)0x0) {
               local_320 = 3;
               iVar8 = local_320;
            }
 else {
               local_31c = FT_Stream_Seek(plVar4, uVar14);
               iVar8 = local_31c;
               if (( local_31c == 0 ) && ( local_260 = (byte*)ft_mem_qalloc(uVar15, local_258, &local_31c) ),iVar8 = local_31c,local_31c == 0) {
                  local_258 = (byte*)0x0;
                  goto LAB_001053af;
               }

            }

            break;
         }

         local_258 = local_258 + (long)local_318;
         local_31c = FT_Stream_Skip(plVar4);
         iVar8 = local_31c;
         if (local_31c != 0) break;
      }
;
      goto LAB_001049c9;
   }

   pbVar18 = local_270 + (long)local_268;
   local_308[0] = local_270;
   local_308[2] = pbVar18;
   if (local_270 < pbVar18) {
      while (( ( ( ( *local_308[0] != 0x65 || ( pbVar18 <= local_308[0] + 9 ) ) || ( local_308[0][1] != 0x65 ) ) || ( ( local_308[0][2] != 0x78 || ( local_308[0][3] != 0x65 ) ) ) ) || ( local_308[0][4] != 99 ) )) {
         ( *local_2c8 )(local_308);
         if (( local_2f0 != 0 ) || ( ( *local_2d0 )(local_308),pbVar18 <= local_308[0] )) goto LAB_001051b8;
      }
;
      local_308[2] = local_270 + (long)local_268;
      ( *local_2c8 )(local_308);
      pbVar6 = local_308[2];
      pbVar18 = local_308[0];
      __n = (long)local_308[2] - (long)local_308[0];
      pvVar11 = memchr(local_308[0], 10, __n);
      if (pvVar11 == (void*)0x0) {
         bVar5 = true;
      }
 else {
         pvVar12 = memchr(pbVar18, 0xd, __n);
         bVar5 = pvVar12 < pvVar11;
      }

      if (pbVar18 < pbVar6) goto LAB_00104dcc;
   }

   goto LAB_001051b8;
   LAB_001053af:local_31c = read_pfb_tag(plVar4, &local_310, &local_318);
   pbVar18 = local_318;
   if (( local_31c != 0 ) || ( (short)local_310 != -0x7ffe )) goto LAB_001053e4;
   local_31c = FT_Stream_Read(plVar4, local_260 + (long)local_258, local_318);
   iVar8 = local_31c;
   if (local_31c != 0) goto LAB_001049c9;
   local_258 = local_258 + (long)pbVar18;
   local_31c = 0;
   goto LAB_001053af;
   LAB_001053e4:local_31c = 0;
   LAB_00104f1e:( **(code**)( lVar3 + 0x20 ) )(local_260, local_258, 0xd971);
   if ((byte*)0x3 < local_258) {
      *local_260 = 0x20;
      for (int i = 0; i < 3; i++) {
         local_260[( i + 1 )] = 32;
      }

      local_308[0] = local_260;
      local_308[2] = local_260 + (long)local_258;
      local_308[1] = local_260;
      local_320 = local_31c;
      iVar8 = local_320;
      if (( local_31c != 0 ) || ( local_320 = parse_dict(param_1, local_308) ),iVar8 = local_320,local_320 != 0) goto LAB_001049c9;
      piVar13 = *(int**)( param_1 + 0x350 );
      *(byte*)( param_1 + 0x140 ) = *(byte*)( param_1 + 0x140 ) & 0xfe;
      if (piVar13 == (int*)0x0) {
         LAB_00105530:*(undefined4*)( param_1 + 0x360 ) = 0;
      }
 else {
         if (*piVar13 == 1 << ( (byte)piVar13[1] & 0x1f )) {
            if (piVar13[0xbe] == 0) {
               LAB_00104ff4:if (piVar13[1] == 0) goto LAB_00104ffb;
            }
 else if (piVar13[1] != piVar13[0xbe]) {
               piVar13[0xbe] = 0;
               goto LAB_00104ff4;
            }

         }
 else {
            T1_Done_Blend(param_1);
            piVar13 = *(int**)( param_1 + 0x350 );
            if (piVar13 == (int*)0x0) goto LAB_00105530;
            if (piVar13[0xbe] == 0) {
               LAB_001052ef:if (*piVar13 != 0) goto LAB_00104ff4;
            }
 else {
               if (piVar13[0xbe] != piVar13[1]) {
                  piVar13[0xbe] = 0;
                  goto LAB_001052ef;
               }

               if (*piVar13 != 0) goto LAB_00105013;
            }

            LAB_00104ffb:T1_Done_Blend(param_1);
            piVar13 = *(int**)( param_1 + 0x350 );
            if (piVar13 == (int*)0x0) goto LAB_00105530;
         }

         LAB_00105013:if (*(long*)( piVar13 + 0x42 ) == 0) {
            T1_Done_Blend(param_1);
            piVar13 = *(int**)( param_1 + 0x350 );
            if (piVar13 == (int*)0x0) goto LAB_00105530;
         }

         if (*(long*)( piVar13 + 10 ) == 0) {
            T1_Done_Blend(param_1);
            piVar13 = *(int**)( param_1 + 0x350 );
            if (piVar13 == (int*)0x0) goto LAB_00105530;
         }

         if (piVar13[1] != 0) {
            piVar1 = piVar13 + (ulong)(uint)piVar13[1] * 6;
            do {
               if ((char)piVar13[0x2a] == '\0') {
                  T1_Done_Blend(param_1);
                  break;
               }

               piVar13 = piVar13 + 6;
            }
 while ( piVar13 != piVar1 );
            if (*(long*)( param_1 + 0x350 ) == 0) goto LAB_00105530;
         }

         if (*(int*)( param_1 + 0x360 ) != 0) {
            uVar15 = ft_mem_realloc(*(undefined8*)( param_1 + 0xb8 ), 8, 0, *(int*)( param_1 + 0x360 ), 0, &local_320);
            *(undefined8*)( param_1 + 0x368 ) = uVar15;
            if (local_320 != 0) {
               *(undefined4*)( param_1 + 0x360 ) = 0;
               iVar8 = local_320;
               goto LAB_001049c9;
            }

         }

      }

      uVar14 = local_50;
      puVar7 = puStack_1b0;
      uVar15 = local_1d8[0];
      *(int*)( param_1 + 0x280 ) = local_1e0;
      if (local_98 != 0) {
         local_98 = 0;
         *(undefined4*)( param_1 + 0x260 ) = local_b8;
         *(undefined8*)( param_1 + 0x268 ) = local_88;
         *(undefined8*)( param_1 + 0x270 ) = uStack_80;
         *(undefined8*)( param_1 + 0x248 ) = local_b0[0];
         local_50 = 0;
         *(undefined8*)( param_1 + 0x278 ) = uVar14;
      }

      if (( *(long*)( *(long*)( param_1 + 0xf0 ) + 0x68 ) == 0 ) && ( local_160 == 0 )) {
         local_320 = 3;
      }

      local_160 = 0;
      puStack_1b0 = (undefined8*)0x0;
      *(undefined8*)( param_1 + 0x298 ) = local_148;
      local_1d8[0] = 0;
      *(undefined8*)( param_1 + 0x250 ) = local_178[0];
      *(undefined8*)( param_1 + 600 ) = uVar15;
      *(undefined8**)( param_1 + 0x288 ) = puVar7;
      *(undefined8*)( param_1 + 0x290 ) = uStack_150;
      if (*(int*)( param_1 + 0x220 ) == 1) {
         if (local_220 < 1) {
            local_33c = 0;
         }
 else {
            lVar20 = 0;
            lVar3 = *(long*)( param_1 + 0x238 );
            lVar16 = *(long*)( param_1 + 0x240 );
            local_33c = 0;
            do {
               __s1 = *(char**)( local_218 + lVar20 * 8 );
               *(undefined2*)( lVar3 + lVar20 * 2 ) = 0;
               *(char**)( lVar16 + lVar20 * 8 ) = ".notdef";
               iVar8 = local_33c;
               if (( __s1 != (char*)0x0 ) && ( 0 < local_1e0 )) {
                  iVar10 = 0;
                  puVar19 = puVar7;
                  do {
                     __s2 = (char*)*puVar19;
                     iVar9 = strcmp(__s1, __s2);
                     if (iVar9 == 0) {
                        *(short*)( lVar3 + lVar20 * 2 ) = (short)iVar10;
                        *(char**)( lVar16 + lVar20 * 8 ) = __s2;
                        iVar10 = strcmp(".notdef", __s2);
                        if (( iVar10 != 0 ) && ( iVar8 = (int)lVar20 + 1 ),(int)lVar20 < local_33c) {
                           iVar8 = local_33c;
                        }

                        break;
                     }

                     iVar10 = iVar10 + 1;
                     puVar19 = puVar19 + 1;
                  }
 while ( local_1e0 != iVar10 );
               }

               local_33c = iVar8;
               lVar20 = lVar20 + 1;
            }
 while ( lVar20 != local_220 );
         }

         *(undefined4*)( param_1 + 0x22c ) = 0;
         *(int*)( param_1 + 0x230 ) = local_33c;
         *(undefined4*)( param_1 + 0x228 ) = local_248;
      }

      if (1000 < *(uint*)( param_1 + 0x1b0 )) {
         *(undefined4*)( param_1 + 0x1b0 ) = 7;
      }

      iVar8 = local_320;
      if (1000 < *(uint*)( param_1 + 0x1b4 )) {
         *(undefined4*)( param_1 + 0x1b4 ) = 1;
      }

      goto LAB_001049c9;
   }

   goto LAB_001051b8;
   while (pbVar18 = pbVar18 + 1,pbVar6 != pbVar18) {
      LAB_00104dcc:bVar2 = *pbVar18;
      if (( ( 1 < ( byte )(bVar2 - 9) ) && ( bVar2 != 0x20 ) ) && ( ( bVar2 != 0xd || ( !bVar5 ) ) )) {
         if (pbVar18 < pbVar6) {
            __n_00 = local_270 + ( (long)local_268 - (long)pbVar18 );
            local_318 = __n_00;
            if (local_250._1_1_ == '\0') {
               local_24e = 1;
               local_260 = local_270;
               local_270 = (byte*)0x0;
               local_268 = (byte*)0x0;
            }
 else {
               local_260 = (byte*)ft_mem_qalloc(uVar15, __n_00 + 1, &local_31c);
               iVar8 = local_31c;
               if (local_31c != 0) goto LAB_001049c9;
            }

            local_258 = __n_00;
            if (( ( ( ( ( pbVar18 + 3 < pbVar6 ) && ( ( byte )(*pbVar18 - 0x30) < 0x37 ) ) && ( ( 0x7e0000007e03ffU >> ( ( ulong )(*pbVar18 - 0x30) & 0x3f ) & 1 ) != 0 ) ) && ( ( ( byte )(pbVar18[1] - 0x30) < 0x37 && ( ( 0x7e0000007e03ffU >> ( ( ulong )(pbVar18[1] - 0x30) & 0x3f ) & 1 ) != 0 ) ) ) ) && ( ( ( byte )(pbVar18[2] - 0x30) < 0x37 && ( ( ( 0x7e0000007e03ffU >> ( ( ulong )(pbVar18[2] - 0x30) & 0x3f ) & 1 ) != 0 && ( ( byte )(pbVar18[3] - 0x30) < 0x37 ) ) ) ) ) ) && ( ( 0x7e0000007e03ffU >> ( ( ulong )(pbVar18[3] - 0x30) & 0x3f ) & 1 ) != 0 )) {
               local_308[0] = pbVar18;
               ( **(code**)( *(long*)( lVar3 + 8 ) + 0x30 ) )(local_308, local_260, __n_00, &local_310, 0);
               local_258 = local_310;
               local_260[(long)local_310] = 0;
            }
 else {
               memmove(local_260, pbVar18, (size_t)__n_00);
            }

            goto LAB_00104f1e;
         }

         break;
      }

   }
;
   LAB_001051b8:iVar8 = 3;
   LAB_001049c9:local_320 = iVar8;
   uVar15 = local_2e8;
   if (local_1e8 != (code*)0x0) {
      ( *local_1e8 )(local_240);
   }

   if (local_120 != (code*)0x0) {
      ( *local_120 )(local_178);
   }

   if (local_180 != (code*)0x0) {
      ( *local_180 )(local_1d8);
   }

   if (local_c0 != (code*)0x0) {
      ( *local_c0 )(local_118);
   }

   if (local_58 != (code*)0x0) {
      ( *local_58 )(local_b0);
   }

   ft_hash_str_free(local_50, uVar15);
   ft_mem_free(uVar15, local_50);
   local_50 = 0;
   ft_mem_free(local_2e8, local_260);
   local_260 = (byte*)0x0;
   if (local_250._1_1_ == '\0') {
      ft_mem_free(local_2e8, local_270);
      local_270 = (byte*)0x0;
   }

   ( *local_2d8 )(local_308);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_320;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint T1_Face_Init(undefined8 param_1, undefined8 *param_2, int param_3) {
   undefined1 auVar1[16];
   char cVar2;
   ushort uVar3;
   long *plVar4;
   char cVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   undefined2 extraout_var;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   char *pcVar12;
   short sVar13;
   char *pcVar14;
   short sVar15;
   short sVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   long lVar18;
   long lVar19;
   undefined8 *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 1;
   lVar9 = ft_module_get_service(param_2[0x16], "postscript-cmaps", 1);
   param_2[0x61] = lVar9;
   lVar10 = FT_Get_Module_Interface(*(undefined8*)( param_2[0x16] + 8 ), "psaux");
   param_2[0x62] = lVar10;
   if (lVar10 == 0) {
      uVar6 = 0xb;
      goto LAB_00105a40;
   }

   uVar11 = FT_Get_Module_Interface(*(undefined8*)( param_2[0x16] + 8 ), "pshinter");
   param_2[0x6e] = uVar11;
   uVar6 = T1_Open_Face(param_2);
   if (( uVar6 != 0 ) || ( param_3 < 0 )) goto LAB_00105a40;
   if ((short)param_3 != 0) {
      uVar6 = 6;
      goto LAB_00105a40;
   }

   param_2[1] = 0;
   param_2[4] = (long)*(int*)( param_2 + 0x50 );
   uVar17 = param_2[2];
   param_2[2] = uVar17 | 0xa11;
   if (*(char*)( param_2 + 0x25 ) != '\0') {
      param_2[2] = uVar17 | 0xa15;
   }

   if (param_2[0x6a] != 0) {
      param_2[2] = param_2[2] | 0x100;
   }

   pcVar14 = (char*)param_2[0x22];
   param_2[6] = 0;
   param_2[5] = pcVar14;
   if (pcVar14 == (char*)0x0) {
      if (param_2[0x43] != 0) {
         param_2[5] = param_2[0x43];
      }

      LAB_00105ab0:pcVar14 = (char*)param_2[0x23];
      if (pcVar14 == (char*)0x0) {
         param_2[6] = "Regular";
         param_2[3] = ( ulong )(param_2[0x24] != 0);
      }
 else {
         param_2[6] = pcVar14;
         if (param_2[0x24] == 0) {
            param_2[3] = 0;
            uVar17 = 0;
         }
 else {
            param_2[3] = 1;
            uVar17 = 1;
         }

         LAB_00105848:iVar7 = strcmp(pcVar14, "Bold");
         if (( iVar7 == 0 ) || ( iVar7 = iVar7 == 0 )) {
            param_2[3] = uVar17 | 2;
         }

      }

   }
 else {
      pcVar12 = (char*)param_2[0x21];
      if (pcVar12 == (char*)0x0) goto LAB_00105ab0;
      LAB_001057e0:cVar5 = *pcVar12;
      if (cVar5 != '\0') {
         while (cVar2 = *pcVar14,cVar2 != cVar5) {
            if (( cVar5 == ' ' ) || ( cVar5 == '-' )) {
               pcVar12 = pcVar12 + 1;
               goto LAB_001057e0;
            }

            if (( cVar2 != ' ' ) && ( cVar2 != '-' )) {
               if (( cVar2 != '\0' ) || ( param_2[6] = pcVar12 ),pcVar12 == (char*)0x0) goto LAB_00105ab0;
               goto LAB_00105829;
            }

            cVar5 = *pcVar12;
            pcVar14 = pcVar14 + 1;
            if (cVar5 == '\0') goto LAB_0010581e;
         }
;
         pcVar14 = pcVar14 + 1;
         pcVar12 = pcVar12 + 1;
         goto LAB_001057e0;
      }

      LAB_0010581e:param_2[6] = "Regular";
      LAB_00105829:pcVar14 = (char*)param_2[0x23];
      uVar17 = ( ulong )(param_2[0x24] != 0);
      param_2[3] = uVar17;
      if (pcVar14 != (char*)0x0) goto LAB_00105848;
   }

   auVar1 = *(undefined1(*) [16])( param_2 + 0x5b );
   *(undefined4*)( param_2 + 7 ) = 0;
   lVar18 = param_2[0x5d] + __LC27;
   lVar19 = param_2[0x5e] + _UNK_001077d8;
   param_2[8] = 0;
   uVar3 = *(ushort*)( param_2 + 0x11 );
   *(int*)( param_2 + 0xd ) = auVar1._2_4_;
   *(int*)( (long)param_2 + 0x6c ) = auVar1._4_4_ >> 0x10;
   *(int*)( param_2 + 0xe ) = auVar1._10_4_;
   *(int*)( (long)param_2 + 0x74 ) = auVar1._12_4_ >> 0x10;
   *(int*)( param_2 + 0xf ) = (int)( (ulong)lVar18 >> 0x10 );
   *(int*)( (long)param_2 + 0x7c ) = (int)( lVar18 >> 0x30 );
   *(int*)( param_2 + 0x10 ) = (int)( (ulong)lVar19 >> 0x10 );
   *(int*)( (long)param_2 + 0x84 ) = (int)( lVar19 >> 0x30 );
   if (uVar3 == 0) {
      iVar7 = 0x4b0;
      *(undefined2*)( param_2 + 0x11 ) = 1000;
      sVar16 = 0x4b0;
   }
 else {
      uVar8 = ( (uint)uVar3 + (uint)uVar3 * 2 ) * 4;
      sVar16 = (short)( uVar8 / 10 );
      iVar7 = (int)(short)( uVar8 / 10 );
   }

   sVar13 = (short)( ( ulong )(param_2[0x5e] + 0xffff) >> 0x10 );
   sVar15 = (short)( (ulong)param_2[0x5c] >> 0x10 );
   if (iVar7 < (int)sVar13 - (int)sVar15) {
      sVar16 = (short)( (ulong)lVar19 >> 0x10 ) - auVar1._10_2_;
   }

   *(short*)( (long)param_2 + 0x8c ) = sVar15;
   *(short*)( param_2 + 0x12 ) = (short)( (ulong)lVar18 >> 0x10 );
   *(short*)( (long)param_2 + 0x8a ) = sVar13;
   *(short*)( (long)param_2 + 0x8e ) = sVar16;
   iVar7 = T1_Compute_Max_Advance(param_2);
   if (iVar7 == 0) {
      FT_RoundFix(local_58);
      *(undefined2*)( param_2 + 0x12 ) = extraout_var;
   }

   *(uint*)( (long)param_2 + 0x92 ) = CONCAT22(*(undefined2*)( (long)param_2 + 0x12a ), *(undefined2*)( (long)param_2 + 0x8e ));
   *(undefined2*)( (long)param_2 + 0x96 ) = *(undefined2*)( (long)param_2 + 300 );
   if (lVar9 == 0) goto LAB_00105a40;
   plVar4 = *(long**)( lVar10 + 0x40 );
   local_50 = 0x10003756e6963;
   local_58 = param_2;
   uVar6 = FT_CMap_New(plVar4[3], 0, &local_58, 0);
   if (( ( uVar6 != 0 ) && ( (char)uVar6 != -0x5d ) ) && ( ( uVar6 & 0xff ) != 7 )) goto LAB_00105a40;
   uVar6 = *(uint*)( param_2 + 0x44 );
   local_50._0_6_ = CONCAT24(7, (undefined4)local_50);
   if (uVar6 == 3) {
      local_50 = CONCAT44(local_50._4_4_, 0x6c617431);
      lVar9 = plVar4[3];
      local_50 = CONCAT26(3, (undefined6)local_50);
      LAB_00105a20:if (lVar9 != 0) {
         uVar6 = FT_CMap_New(lVar9, 0, &local_58, 0);
         goto LAB_00105a40;
      }

   }
 else {
      if (uVar6 < 4) {
         if (uVar6 == 1) {
            local_50 = CONCAT44(local_50._4_4_, 0x41444243);
            lVar9 = plVar4[2];
            local_50 = CONCAT26(2, (undefined6)local_50);
         }
 else {
            if (uVar6 != 2) goto LAB_00105c00;
            local_50 = CONCAT44(local_50._4_4_, 0x41444f42);
            lVar9 = *plVar4;
            local_50 = local_50 & 0xffffffffffff;
         }

         goto LAB_00105a20;
      }

      if (uVar6 == 4) {
         local_50 = CONCAT44(local_50._4_4_, 0x41444245);
         lVar9 = plVar4[1];
         local_50 = CONCAT26(1, (undefined6)local_50);
         goto LAB_00105a20;
      }

   }

   LAB_00105c00:uVar6 = 0;
   LAB_00105a40:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
void T1_Face_Done(long param_1) {
   undefined8 uVar1;
   long lVar2;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0xb8 );
      if (*(long*)( param_1 + 0x368 ) != 0) {
         ft_mem_free(uVar1);
         *(undefined8*)( param_1 + 0x368 ) = 0;
         *(undefined4*)( param_1 + 0x360 ) = 0;
      }

      T1_Done_Blend(param_1);
      *(undefined8*)( param_1 + 0x350 ) = 0;
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
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x268 ));
      *(undefined8*)( param_1 + 0x268 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x270 ));
      *(undefined8*)( param_1 + 0x270 ) = 0;
      ft_hash_str_free(*(undefined8*)( param_1 + 0x278 ), uVar1);
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x278 ));
      *(undefined8*)( param_1 + 0x278 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x248 ));
      *(undefined8*)( param_1 + 0x248 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x250 ));
      *(undefined8*)( param_1 + 0x250 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 600 ));
      *(undefined8*)( param_1 + 600 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x238 ));
      *(undefined8*)( param_1 + 0x238 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x240 ));
      *(undefined8*)( param_1 + 0x240 ) = 0;
      ft_mem_free(uVar1, *(undefined8*)( param_1 + 0x218 ));
      lVar2 = *(long*)( param_1 + 0x318 );
      *(undefined8*)( param_1 + 0x218 ) = 0;
      if (lVar2 != 0) {
         ft_mem_free(uVar1, *(undefined8*)( lVar2 + 0x48 ));
         *(undefined8*)( lVar2 + 0x48 ) = 0;
         *(undefined4*)( lVar2 + 0x50 ) = 0;
         ft_mem_free(uVar1, *(undefined8*)( lVar2 + 0x38 ));
         *(undefined8*)( lVar2 + 0x38 ) = 0;
         *(undefined4*)( lVar2 + 0x40 ) = 0;
         ft_mem_free(uVar1, lVar2);
      }

      *(undefined1(*) [16])( param_1 + 0x28 ) = (undefined1[16])0x0;
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int T1_Read_Metrics(long param_1, long param_2) {
   long *plVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined1 auVar4[16];
   ushort uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined4 uVar11;
   long lVar12;
   undefined4 *puVar13;
   long *plVar14;
   ushort *puVar15;
   ushort *puVar16;
   ushort *puVar17;
   long in_FS_OFFSET;
   long lVar18;
   long lVar19;
   int local_70;
   int local_6c;
   undefined1 local_68[16];
   long local_58;
   code *local_50;
   long local_48;
   long local_40;
   lVar12 = *(long*)( param_1 + 0x318 );
   uVar6 = *(undefined8*)( param_2 + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 2;
   if (lVar12 != 0) {
      ft_mem_free(uVar6, *(undefined8*)( lVar12 + 0x48 ));
      *(undefined8*)( lVar12 + 0x48 ) = 0;
      *(undefined4*)( lVar12 + 0x50 ) = 0;
      ft_mem_free(uVar6, *(undefined8*)( lVar12 + 0x38 ));
      *(undefined8*)( lVar12 + 0x38 ) = 0;
      *(undefined4*)( lVar12 + 0x40 ) = 0;
      ft_mem_free(uVar6, lVar12);
      *(undefined8*)( param_1 + 0x318 ) = 0;
   }

   lVar12 = ft_mem_alloc(uVar6, 0x58, &local_70);
   if (( local_70 == 0 ) && ( local_70 = local_70 == 0 )) {
      lVar18 = *(long*)( param_1 + 0x310 );
      uVar2 = *(undefined8*)( param_1 + 0x2f0 );
      uVar8 = *(undefined8*)( param_1 + 0x2e0 );
      uVar9 = *(undefined8*)( param_1 + 0x2e8 );
      uVar10 = *(undefined8*)( param_1 + 0x2f0 );
      uVar3 = *(undefined8*)( param_1 + 0x2e0 );
      puVar7 = *(undefined8**)( lVar18 + 0x48 );
      *(undefined8*)( lVar12 + 8 ) = *(undefined8*)( param_1 + 0x2d8 );
      *(undefined8*)( lVar12 + 0x10 ) = uVar8;
      *(undefined8*)( lVar12 + 0x18 ) = uVar9;
      *(undefined8*)( lVar12 + 0x20 ) = uVar10;
      *(undefined8*)( lVar12 + 0x28 ) = uVar2;
      *(undefined8*)( lVar12 + 0x30 ) = uVar3;
      if (puVar7 == (undefined8*)0x0) {
         LAB_001060ba:uVar2 = *(undefined8*)( lVar12 + 0x10 );
         uVar3 = *(undefined8*)( lVar12 + 0x18 );
         uVar8 = *(undefined8*)( lVar12 + 0x20 );
         *(undefined8*)( param_1 + 0x2d8 ) = *(undefined8*)( lVar12 + 8 );
         *(undefined8*)( param_1 + 0x2e0 ) = uVar2;
         *(undefined8*)( param_1 + 0x2e8 ) = uVar3;
         *(undefined8*)( param_1 + 0x2f0 ) = uVar8;
         auVar4 = *(undefined1(*) [16])( lVar12 + 8 );
         *(int*)( param_1 + 0x68 ) = auVar4._2_4_;
         *(int*)( param_1 + 0x6c ) = auVar4._4_4_ >> 0x10;
         *(int*)( param_1 + 0x70 ) = auVar4._10_4_;
         *(int*)( param_1 + 0x74 ) = auVar4._12_4_ >> 0x10;
         lVar18 = *(long*)( lVar12 + 0x18 ) + __LC27;
         lVar19 = *(long*)( lVar12 + 0x20 ) + _UNK_001077d8;
         *(int*)( param_1 + 0x78 ) = (int)( (ulong)lVar18 >> 0x10 );
         *(int*)( param_1 + 0x7c ) = (int)( lVar18 >> 0x30 );
         *(int*)( param_1 + 0x80 ) = (int)( (ulong)lVar19 >> 0x10 );
         *(int*)( param_1 + 0x84 ) = (int)( lVar19 >> 0x30 );
         lVar18 = *(long*)( lVar12 + 0x30 );
         if (lVar18 < *(long*)( lVar12 + 0x28 )) {
            *(short*)( param_1 + 0x8a ) = (short)( ( ulong )(*(long*)( lVar12 + 0x28 ) + 0x8000) >> 0x10 );
            *(short*)( param_1 + 0x8c ) = (short)( ( ulong )(lVar18 + 0x8000) >> 0x10 );
         }

         if (*(int*)( lVar12 + 0x50 ) != 0) {
            *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) | 0x40;
            *(long*)( param_1 + 0x318 ) = lVar12;
            FT_Stream_ExitFrame(param_2);
            goto LAB_00105f53;
         }

      }
 else {
         local_70 = ( *(code*)*puVar7 )(local_68, *(undefined8*)( param_2 + 0x38 ), *(undefined8*)( param_2 + 0x40 ), *(undefined8*)( param_2 + 0x48 ));
         if (local_70 == 0) {
            local_50 = t1_get_index;
            local_48 = param_1 + 0xf8;
            local_58 = lVar12;
            local_70 = ( **(code**)( *(long*)( lVar18 + 0x48 ) + 0x10 ) )(local_68);
            ( **(code**)( *(long*)( lVar18 + 0x48 ) + 8 ) )(local_68);
            if ((char)local_70 == '\x02') goto LAB_00105ffe;
            joined_r0x001060b4:if (local_70 == 0) goto LAB_001060ba;
         }
 else if ((char)local_70 == '\x02') {
            LAB_00105ffe:puVar17 = *(ushort**)( param_2 + 0x40 );
            if (( ( 6 < *(ulong*)( param_2 + 8 ) ) && ( *(byte*)( (long)puVar17 + 1 ) < 4 ) ) && ( *(ulong*)( param_2 + 8 ) == ( ulong ) * (uint*)( puVar17 + 1 ) )) {
               puVar16 = *(ushort**)( param_2 + 0x48 );
               local_6c = 0;
               uVar2 = *(undefined8*)( param_2 + 0x38 );
               if (puVar16 < (ushort*)( (long)puVar17 + 0x65U )) goto LAB_0010630d;
               puVar15 = (ushort*)( (long)puVar17 + ( ulong ) * (ushort*)( (long)puVar17 + 99 ) + 0x75 );
               if (( ( puVar16 < puVar15 + 9 ) || ( *puVar15 < 0x12 ) ) || ( puVar15 = puVar17 == puVar15 )) goto LAB_00106300;
               puVar17 = puVar15 + 1;
               if (puVar16 < puVar17) {
                  LAB_0010630d:local_6c = 2;
               }
 else {
                  uVar5 = *puVar15;
                  *(uint*)( lVar12 + 0x50 ) = (uint)uVar5;
                  if (puVar16 < (ushort*)( ( ulong )((uint)uVar5 * 4) + (long)puVar17 )) goto LAB_0010630d;
                  if (uVar5 == 0) {
                     LAB_00106300:local_70 = 0;
                     goto LAB_001060ba;
                  }

                  puVar13 = (undefined4*)ft_mem_qrealloc(uVar2, 0x10, 0, uVar5, 0, &local_6c);
                  *(undefined4**)( lVar12 + 0x48 ) = puVar13;
                  if (local_6c == 0) {
                     uVar3 = *(undefined8*)( param_1 + 0xa8 );
                     puVar16 = (ushort*)( ( ulong )(uint)(*(int*)( lVar12 + 0x50 ) * 4) + (long)puVar17 );
                     if (0 < *(int*)( param_1 + 0x48 )) {
                        plVar14 = *(long**)( param_1 + 0x50 );
                        plVar1 = plVar14 + *(int*)( param_1 + 0x48 );
                        do {
                           if (*(short*)( *plVar14 + 0xc ) == 7) {
                              *(long*)( param_1 + 0xa8 ) = *plVar14;
                              break;
                           }

                           plVar14 = plVar14 + 1;
                        }
 while ( plVar1 != plVar14 );
                     }

                     for (; puVar17 < puVar16; puVar17 = puVar17 + 2) {
                        uVar11 = FT_Get_Char_Index(param_1, (char)*puVar17);
                        *puVar13 = uVar11;
                        uVar11 = FT_Get_Char_Index(param_1, *(undefined1*)( (long)puVar17 + 1 ));
                        puVar13[1] = uVar11;
                        uVar5 = puVar17[1];
                        puVar13[3] = 0;
                        puVar13[2] = (int)(short)uVar5;
                        puVar13 = puVar13 + 4;
                     }

                     *(undefined8*)( param_1 + 0xa8 ) = uVar3;
                     qsort(*(void**)( lVar12 + 0x48 ), ( ulong ) * (uint*)( lVar12 + 0x50 ), 0x10, compare_kern_pairs);
                     if (local_6c == 0) goto LAB_00106300;
                  }

               }

               ft_mem_free(uVar2, *(undefined8*)( lVar12 + 0x48 ));
               *(undefined8*)( lVar12 + 0x48 ) = 0;
               *(undefined4*)( lVar12 + 0x50 ) = 0;
               local_70 = local_6c;
               goto joined_r0x001060b4;
            }

         }

      }

      FT_Stream_ExitFrame(param_2);
   }
 else if (lVar12 == 0) goto LAB_00105f53;
   ft_mem_free(uVar6, *(undefined8*)( lVar12 + 0x48 ));
   *(undefined8*)( lVar12 + 0x48 ) = 0;
   *(undefined4*)( lVar12 + 0x50 ) = 0;
   ft_mem_free(uVar6, *(undefined8*)( lVar12 + 0x38 ));
   *(undefined8*)( lVar12 + 0x38 ) = 0;
   *(undefined4*)( lVar12 + 0x40 ) = 0;
   ft_mem_free(uVar6, lVar12);
   LAB_00105f53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_70;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void parse_blend_axis_types(long param_1, long param_2) {
   undefined8 uVar1;
   void *__src;
   int iVar2;
   void *pvVar3;
   char *pcVar4;
   long lVar5;
   int iVar6;
   ulong uVar7;
   long lVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   int local_b4;
   int local_b0;
   int local_ac;
   undefined8 local_a8[13];
   long local_40;
   uVar1 = *(undefined8*)( param_1 + 0xb8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar9 = local_a8;
   local_b0 = 0;
   ( **(code**)( param_2 + 0x78 ) )(param_2, puVar9, 4, &local_b4);
   iVar2 = local_b4;
   iVar6 = 0xa2;
   if (-1 < local_b4) {
      if (( local_b4 == 0 ) || ( 4 < local_b4 )) {
         LAB_001064b0:iVar6 = 3;
      }
 else {
         lVar5 = *(long*)( param_1 + 0x350 );
         local_ac = 0;
         if (lVar5 == 0) {
            lVar5 = ft_mem_alloc(*(undefined8*)( param_1 + 0xb8 ), 0x300, &local_ac);
            iVar6 = local_ac;
            if (local_ac != 0) goto LAB_001064b5;
            *(undefined8*)( lVar5 + 0x28 ) = 0;
            *(undefined4*)( lVar5 + 0x2f8 ) = 0;
            *(undefined1(*) [16])( lVar5 + 0x108 ) = (undefined1[16])0x0;
            *(long*)( param_1 + 0x350 ) = lVar5;
         }

         if (( *(int*)( lVar5 + 4 ) == 0 ) || ( iVar6 = 3 ),iVar2 == *(int*)( lVar5 + 4 )) {
            *(int*)( lVar5 + 4 ) = iVar2;
            local_b0 = local_ac;
            iVar6 = local_ac;
            if (( local_ac == 0 ) && ( lVar5= *(long *)(param_1 + 0x350),0 < local_b4 )) {
               lVar8 = 0;
               do {
                  pcVar4 = (char*)*puVar9;
                  if (*pcVar4 == '/') {
                     pcVar4 = pcVar4 + 1;
                     *puVar9 = pcVar4;
                  }

                  uVar7 = puVar9[1] - (long)pcVar4;
                  if ((int)puVar9[1] == (int)pcVar4) goto LAB_001064b0;
                  if (*(long*)( lVar5 + 8 + lVar8 * 8 ) != 0) {
                     ft_mem_free(uVar1);
                  }

                  pvVar3 = (void*)ft_mem_qalloc(uVar1, (int)uVar7 + 1, &local_b0);
                  *(void**)( lVar5 + 8 + lVar8 * 8 ) = pvVar3;
                  iVar6 = local_b0;
                  if (local_b0 != 0) break;
                  __src = (void*)*puVar9;
                  uVar7 = uVar7 & 0xffffffff;
                  lVar8 = lVar8 + 1;
                  puVar9 = puVar9 + 3;
                  pvVar3 = memcpy(pvVar3, __src, uVar7);
                  *(undefined1*)( (long)pvVar3 + uVar7 ) = 0;
                  iVar6 = local_b0;
               }
 while ( (int)lVar8 < local_b4 );
            }

         }

      }

   }

   LAB_001064b5:*(int*)( param_2 + 0x18 ) = iVar6;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void parse_blend_design_map(long param_1, long *param_2) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   undefined8 uVar8;
   long lVar9;
   int iVar10;
   undefined1 *puVar11;
   long *plVar12;
   long *plVar13;
   long in_FS_OFFSET;
   int local_2d8;
   int local_294;
   int local_290;
   int local_28c;
   long local_288[12];
   long local_228[61];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(undefined8*)( param_1 + 0xb8 );
   plVar12 = local_288;
   local_294 = 0;
   ( *(code*)param_2[0xf] )(param_2, plVar12, 4, &local_290);
   iVar6 = local_290;
   iVar10 = 0xa2;
   if (-1 < local_290) {
      if (( local_290 == 0 ) || ( 4 < local_290 )) {
         iVar10 = 3;
      }
 else {
         lVar3 = *param_2;
         lVar4 = param_2[2];
         local_28c = 0;
         lVar7 = *(long*)( param_1 + 0x350 );
         if (lVar7 == 0) {
            lVar7 = ft_mem_alloc(*(undefined8*)( param_1 + 0xb8 ), 0x300, &local_28c);
            iVar10 = local_28c;
            if (local_28c != 0) goto LAB_001067a0;
            *(undefined4*)( lVar7 + 0x2f8 ) = 0;
            *(undefined8*)( lVar7 + 0x28 ) = 0;
            *(undefined1(*) [16])( lVar7 + 0x108 ) = (undefined1[16])0x0;
            *(long*)( param_1 + 0x350 ) = lVar7;
         }

         if (( *(int*)( lVar7 + 4 ) == 0 ) || ( iVar10 = 3 ),iVar6 == *(int*)( lVar7 + 4 )) {
            *(int*)( lVar7 + 4 ) = iVar6;
            local_294 = local_28c;
            iVar10 = local_28c;
            if (local_28c == 0) {
               if (0 < local_290) {
                  puVar11 = (undefined1*)( *(long*)( param_1 + 0x350 ) + 0xa8 );
                  local_2d8 = local_28c;
                  do {
                     *param_2 = *plVar12;
                     param_2[2] = plVar12[1];
                     ( *(code*)param_2[0xf] )(param_2, local_228, 0x14, &local_28c);
                     if (( 0x13 < local_28c - 1U ) || ( *(long*)( puVar11 + 8 ) != 0 )) {
                        iVar10 = 3;
                        goto LAB_001067a0;
                     }

                     lVar7 = ft_mem_qrealloc(uVar2, 8, 0, (long)( local_28c * 2 ), 0, &local_294);
                     *(long*)( puVar11 + 8 ) = lVar7;
                     iVar10 = local_294;
                     if (local_294 != 0) goto LAB_001067a0;
                     *(long*)( puVar11 + 0x10 ) = lVar7 + (long)local_28c * 8;
                     *puVar11 = (char)local_28c;
                     if (0 < local_28c) {
                        lVar9 = 0;
                        plVar13 = local_228;
                        while (true) {
                           lVar1 = lVar9 * 8;
                           lVar9 = lVar9 + 1;
                           *param_2 = *plVar13 + 1;
                           param_2[2] = plVar13[1] + -1;
                           uVar8 = ( *(code*)param_2[9] )(param_2);
                           lVar5 = *(long*)( puVar11 + 0x10 );
                           *(undefined8*)( lVar7 + lVar1 ) = uVar8;
                           uVar8 = ( *(code*)param_2[10] )(param_2, 0);
                           *(undefined8*)( lVar1 + lVar5 ) = uVar8;
                           if (local_28c <= (int)lVar9) break;
                           lVar7 = *(long*)( puVar11 + 8 );
                           plVar13 = plVar13 + 3;
                        }
;
                     }

                     local_2d8 = local_2d8 + 1;
                     plVar12 = plVar12 + 3;
                     puVar11 = puVar11 + 0x18;
                  }
 while ( local_2d8 < local_290 );
               }

               *param_2 = lVar3;
               param_2[2] = lVar4;
               iVar10 = local_294;
            }

         }

      }

   }

   LAB_001067a0:*(int*)( param_2 + 3 ) = iVar10;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}


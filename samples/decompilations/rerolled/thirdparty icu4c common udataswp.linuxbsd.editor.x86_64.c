/* uprv_readSwapUInt16(unsigned short) */undefined4 uprv_readSwapUInt16(ushort param_1) {
   undefined2 in_register_0000003a;
   return CONCAT22(in_register_0000003a, param_1 << 8 | param_1 >> 8);
}
/* uprv_readDirectUInt16(unsigned short) */undefined4 uprv_readDirectUInt16(ushort param_1) {
   undefined2 in_register_0000003a;
   return CONCAT22(in_register_0000003a, param_1);
}
/* uprv_readSwapUInt32(unsigned int) */uint uprv_readSwapUInt32(uint param_1) {
   return param_1 >> 0x18 | ( param_1 & 0xff0000 ) >> 8 | ( param_1 & 0xff00 ) << 8 | param_1 << 0x18;
}
/* uprv_readDirectUInt32(unsigned int) */uint uprv_readDirectUInt32(uint param_1) {
   return param_1;
}
/* uprv_writeSwapUInt16(unsigned short*, unsigned short) */void uprv_writeSwapUInt16(ushort *param_1, ushort param_2) {
   *param_1 = param_2 << 8 | param_2 >> 8;
   return;
}
/* uprv_writeDirectUInt16(unsigned short*, unsigned short) */void uprv_writeDirectUInt16(ushort *param_1, ushort param_2) {
   *param_1 = param_2;
   return;
}
/* uprv_writeSwapUInt32(unsigned int*, unsigned int) */void uprv_writeSwapUInt32(uint *param_1, uint param_2) {
   *param_1 = param_2 >> 0x18 | ( param_2 & 0xff0000 ) >> 8 | ( param_2 & 0xff00 ) << 8 | param_2 << 0x18;
   return;
}
/* uprv_writeDirectUInt32(unsigned int*, unsigned int) */void uprv_writeDirectUInt32(uint *param_1, uint param_2) {
   *param_1 = param_2;
   return;
}
/* uprv_swapArray16(UDataSwapper const*, void const*, int, void*, UErrorCode*) */int uprv_swapArray16(UDataSwapper *param_1, void *param_2, int param_3, void *param_4, UErrorCode *param_5) {
   ushort uVar1;
   ulong uVar2;
   if (( param_5 != (UErrorCode*)0x0 ) && ( *(int*)param_5 < 1 )) {
      if (( param_1 != (UDataSwapper*)0x0 && param_2 != (void*)0x0 ) && ( ( ( -1 < param_3 && ( param_4 != (void*)0x0 ) ) && ( ( param_3 & 1U ) == 0 ) ) )) {
         uVar2 = 0;
         if (param_3 >> 1 != 0) {
            do {
               uVar1 = *(ushort*)( (long)param_2 + uVar2 * 2 );
               *(ushort*)( (long)param_4 + uVar2 * 2 ) = uVar1 << 8 | uVar1 >> 8;
               uVar2 = uVar2 + 1;
            }
 while ( ( uint )(param_3 >> 1) != uVar2 );
         }

         return param_3;
      }

      *(undefined4*)param_5 = 1;
   }

   return 0;
}
/* uprv_copyArray16(UDataSwapper const*, void const*, int, void*, UErrorCode*) */int uprv_copyArray16(UDataSwapper *param_1, void *param_2, int param_3, void *param_4, UErrorCode *param_5) {
   if (( param_5 == (UErrorCode*)0x0 ) || ( 0 < *(int*)param_5 )) {
      return 0;
   }

   if (( ( ( param_1 != (UDataSwapper*)0x0 && param_2 != (void*)0x0 ) && ( -1 < param_3 ) ) && ( param_4 != (void*)0x0 ) ) && ( ( param_3 & 1U ) == 0 )) {
      if (( 0 < param_3 ) && ( param_2 != param_4 )) {
         memcpy(param_4, param_2, (long)param_3);
      }

      return param_3;
   }

   *(undefined4*)param_5 = 1;
   return 0;
}
/* uprv_swapArray32(UDataSwapper const*, void const*, int, void*, UErrorCode*) */int uprv_swapArray32(UDataSwapper *param_1, void *param_2, int param_3, void *param_4, UErrorCode *param_5) {
   uint uVar1;
   ulong uVar2;
   if (( param_5 != (UErrorCode*)0x0 ) && ( *(int*)param_5 < 1 )) {
      if (( param_1 != (UDataSwapper*)0x0 && param_2 != (void*)0x0 ) && ( ( ( -1 < param_3 && ( ( param_3 & 3U ) == 0 ) ) && ( param_4 != (void*)0x0 ) ) )) {
         uVar2 = 0;
         if (param_3 >> 2 != 0) {
            do {
               uVar1 = *(uint*)( (long)param_2 + uVar2 * 4 );
               *(uint*)( (long)param_4 + uVar2 * 4 ) = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
               uVar2 = uVar2 + 1;
            }
 while ( uVar2 != ( uint )(param_3 >> 2) );
         }

         return param_3;
      }

      *(undefined4*)param_5 = 1;
   }

   return 0;
}
/* uprv_copyArray32(UDataSwapper const*, void const*, int, void*, UErrorCode*) */int uprv_copyArray32(UDataSwapper *param_1, void *param_2, int param_3, void *param_4, UErrorCode *param_5) {
   if (( param_5 == (UErrorCode*)0x0 ) || ( 0 < *(int*)param_5 )) {
      return 0;
   }

   if (( ( ( param_1 != (UDataSwapper*)0x0 && param_2 != (void*)0x0 ) && ( -1 < param_3 ) ) && ( ( param_3 & 3U ) == 0 ) ) && ( param_4 != (void*)0x0 )) {
      if (( 0 < param_3 ) && ( param_2 != param_4 )) {
         memcpy(param_4, param_2, (long)param_3);
      }

      return param_3;
   }

   *(undefined4*)param_5 = 1;
   return 0;
}
/* uprv_swapArray64(UDataSwapper const*, void const*, int, void*, UErrorCode*) */int uprv_swapArray64(UDataSwapper *param_1, void *param_2, int param_3, void *param_4, UErrorCode *param_5) {
   ulong uVar1;
   ulong uVar2;
   if (( param_5 != (UErrorCode*)0x0 ) && ( *(int*)param_5 < 1 )) {
      if (( param_1 != (UDataSwapper*)0x0 && param_2 != (void*)0x0 ) && ( ( ( -1 < param_3 && ( ( param_3 & 7U ) == 0 ) ) && ( param_4 != (void*)0x0 ) ) )) {
         uVar2 = 0;
         if (param_3 >> 3 != 0) {
            do {
               uVar1 = *(ulong*)( (long)param_2 + uVar2 * 8 );
               *(ulong*)( (long)param_4 + uVar2 * 8 ) = uVar1 >> 0x38 | ( uVar1 & 0xff000000000000 ) >> 0x28 | ( uVar1 & 0xff0000000000 ) >> 0x18 | ( uVar1 & 0xff00000000 ) >> 8 | ( uVar1 & 0xff000000 ) << 8 | ( uVar1 & 0xff0000 ) << 0x18 | ( uVar1 & 0xff00 ) << 0x28 | uVar1 << 0x38;
               uVar2 = uVar2 + 1;
            }
 while ( ( uint )(param_3 >> 3) != uVar2 );
         }

         return param_3;
      }

      *(undefined4*)param_5 = 1;
   }

   return 0;
}
/* uprv_copyArray64(UDataSwapper const*, void const*, int, void*, UErrorCode*) */int uprv_copyArray64(UDataSwapper *param_1, void *param_2, int param_3, void *param_4, UErrorCode *param_5) {
   if (( param_5 == (UErrorCode*)0x0 ) || ( 0 < *(int*)param_5 )) {
      return 0;
   }

   if (( ( ( param_1 != (UDataSwapper*)0x0 && param_2 != (void*)0x0 ) && ( -1 < param_3 ) ) && ( ( param_3 & 7U ) == 0 ) ) && ( param_4 != (void*)0x0 )) {
      if (( 0 < param_3 ) && ( param_2 != param_4 )) {
         memcpy(param_4, param_2, (long)param_3);
      }

      return param_3;
   }

   *(undefined4*)param_5 = 1;
   return 0;
}
void udata_readInt16_76_godot(long param_1, undefined2 param_2) {
   /* WARNING: Could not recover jumptable at 0x0010032a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 8 ) )(param_2);
   return;
}
void udata_readInt32_76_godot(long param_1, undefined4 param_2) {
   /* WARNING: Could not recover jumptable at 0x00100339. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x10 ) )(param_2);
   return;
}
int udata_swapInvStringBlock_76_godot(long param_1, long param_2, int param_3, long param_4, int *param_5) {
   bool bVar1;
   ulong uVar2;
   int iVar3;
   if (param_5 == (int*)0x0) {
      return 0;
   }

   if (*param_5 < 1) {
      if (( ( param_2 == 0 || param_3 < 0 ) || ( param_1 == 0 ) ) || ( ( 0 < param_3 && ( param_4 == 0 ) ) )) {
         *param_5 = 1;
      }
 else {
         if (param_3 == 0) {
            ( **(code**)( param_1 + 0x48 ) )(param_1, param_2, 0, param_4, param_5);
         }
 else {
            uVar2 = (ulong)param_3;
            do {
               if (*(char*)( param_2 + -1 + uVar2 ) == '\0') {
                  bVar1 = (int)uVar2 < param_3;
                  goto LAB_001003bc;
               }

               uVar2 = uVar2 - 1;
            }
 while ( (int)uVar2 != 0 );
            bVar1 = true;
            LAB_001003bc:iVar3 = (int)uVar2;
            ( **(code**)( param_1 + 0x48 ) )(param_1, param_2, uVar2 & 0xffffffff, param_4, param_5);
            if (( param_2 != param_4 ) && ( bVar1 )) {
               memcpy((void*)( param_4 + iVar3 ), (void*)( iVar3 + param_2 ), (long)( param_3 - iVar3 ));
            }

         }

         if (*param_5 < 1) {
            return param_3;
         }

      }

   }

   return 0;
}
void udata_printError_76_godot(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   char in_AL;
   long in_FS_OFFSET;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = param_1;
      local_78 = param_2;
      local_68 = param_3;
      local_58 = param_4;
      local_48 = param_5;
      local_38 = param_6;
      local_28 = param_7;
      local_18 = param_8;
   }

   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = param_11;
   local_a0 = param_12;
   local_98 = param_13;
   local_90 = param_14;
   if (*(long*)( param_9 + 0x50 ) != 0) {
      local_d0 = &stack0x00000008;
      local_d8 = 0x10;
      local_c8 = local_b8;
      local_d4 = 0x30;
      ( **(code**)( param_9 + 0x50 ) )(*(undefined8*)( param_9 + 0x58 ), param_10, &local_d8);
   }

   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ushort udata_swapDataHeader_76_godot(long param_1, undefined2 *param_2, uint param_3, undefined2 *param_4, int *param_5) {
   ushort uVar1;
   ushort uVar2;
   char *pcVar3;
   int iVar4;
   int iVar5;
   ulong uVar6;
   uint uVar7;
   if (( param_5 != (int*)0x0 ) && ( *param_5 < 1 )) {
      if (( ( param_1 == 0 || param_2 == (undefined2*)0x0 ) || ( (int)param_3 < -1 ) ) || ( ( 0 < (int)param_3 && ( param_4 == (undefined2*)0x0 ) ) )) {
         *param_5 = 1;
      }
 else if (( ( param_3 < 0x18 ) || ( param_2[1] != 0x27da ) ) || ( *(char*)( param_2 + 5 ) != '\x02' )) {
         udata_printError_76_godot(param_1, "udata_swapDataHeader(): initial bytes do not look like ICU data\n");
         *param_5 = 0x10;
      }
 else {
         uVar1 = ( **(code**)( param_1 + 8 ) )(*param_2);
         uVar2 = ( **(code**)( param_1 + 8 ) )(param_2[2]);
         uVar7 = (uint)uVar1;
         if (( 0x17 < uVar1 ) && ( 0x13 < uVar2 )) {
            uVar6 = (ulong)uVar2 + 4;
            if (uVar6 <= uVar1) {
               if (param_3 == 0xffffffff) {
                  return uVar1;
               }

               if ((int)uVar7 <= (int)param_3) {
                  if (param_2 != param_4) {
                     memcpy(param_4, param_2, (ulong)uVar1);
                  }

                  *(undefined1*)( param_4 + 4 ) = *(undefined1*)( param_1 + 2 );
                  *(undefined1*)( (long)param_4 + 9 ) = *(undefined1*)( param_1 + 3 );
                  ( **(code**)( param_1 + 0x30 ) )(param_1, param_2, 2, param_4, param_5);
                  ( **(code**)( param_1 + 0x30 ) )(param_1, param_2 + 2, 4, param_4 + 2, param_5);
                  iVar4 = uVar7 - ( ushort )(uVar2 + 4);
                  if (iVar4 < 1) {
                     iVar5 = 0;
                  }
 else {
                     iVar5 = 0;
                     pcVar3 = (char*)( (long)param_2 + uVar6 );
                     do {
                        if (*pcVar3 == '\0') break;
                        iVar5 = iVar5 + 1;
                        pcVar3 = pcVar3 + 1;
                     }
 while ( iVar4 != iVar5 );
                  }

                  ( **(code**)( param_1 + 0x48 ) )(param_1, (char*)( (long)param_2 + uVar6 ), iVar5, (long)param_4 + uVar6, param_5);
                  return uVar1;
               }

            }

         }

         udata_printError_76_godot(param_1, "udata_swapDataHeader(): header size mismatch - headerSize %d infoSize %d length %d\n", uVar7, uVar2, param_3);
         *param_5 = 8;
      }

   }

   return 0;
}
char *udata_openSwapper_76_godot(char param_1, byte param_2, char param_3, byte param_4, int *param_5) {
   char *pcVar1;
   code *pcVar2;
   ulong uVar3;
   code *pcVar4;
   code *pcVar5;
   undefined8 *puVar6;
   code *pcVar7;
   code *pcVar8;
   code *pcVar9;
   code *pcVar10;
   undefined *puVar11;
   bool bVar12;
   byte bVar13;
   bVar13 = 0;
   if (param_5 == (int*)0x0) {
      return (char*)0x0;
   }

   if (*param_5 < 1) {
      if (( param_4 | param_2 ) < 2) {
         pcVar1 = (char*)uprv_malloc_76_godot(0x60);
         if (pcVar1 != (char*)0x0) {
            for (int i = 0; i < 8; i++) {
               pcVar1[( i + 4 )] = '\0';
            }

            pcVar10 = uprv_readSwapUInt16;
            for (int i = 0; i < 8; i++) {
               pcVar1[( i + 88 )] = '\0';
            }

            pcVar9 = uprv_readSwapUInt32;
            pcVar8 = uprv_writeDirectUInt16;
            puVar6 = (undefined8*)( ( ulong )(pcVar1 + 0xc) & 0xfffffffffffffff8 );
            for (uVar3 = ( ulong )(( (int)pcVar1 - (int)(undefined8*)( ( ulong )(pcVar1 + 0xc) & 0xfffffffffffffff8 ) ) + 0x60U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
               *puVar6 = 0;
               puVar6 = puVar6 + (ulong)bVar13 * -2 + 1;
            }

            pcVar7 = uprv_writeDirectUInt32;
            if (param_1 == '\0') {
               pcVar10 = uprv_readDirectUInt16;
               pcVar9 = uprv_readDirectUInt32;
            }

            if (param_3 != '\0') {
               pcVar8 = uprv_writeSwapUInt16;
               pcVar7 = uprv_writeSwapUInt32;
            }

            if (param_4 == 0) {
               puVar11 = &uprv_compareInvAscii_76_godot;
            }
 else {
               puVar11 = &uprv_compareInvEbcdic_76_godot;
            }

            bVar12 = param_1 != param_3;
            pcVar5 = uprv_copyArray16;
            *pcVar1 = param_1;
            if (bVar12) {
               pcVar5 = uprv_swapArray16;
            }

            pcVar4 = uprv_copyArray32;
            pcVar1[1] = param_2;
            if (bVar12) {
               pcVar4 = uprv_swapArray32;
            }

            pcVar1[2] = param_3;
            pcVar2 = uprv_copyArray64;
            pcVar1[3] = param_4;
            if (bVar12) {
               pcVar2 = uprv_swapArray64;
            }

            *(code**)( pcVar1 + 8 ) = pcVar10;
            *(code**)( pcVar1 + 0x10 ) = pcVar9;
            *(code**)( pcVar1 + 0x20 ) = pcVar8;
            *(code**)( pcVar1 + 0x28 ) = pcVar7;
            *(undefined**)( pcVar1 + 0x18 ) = puVar11;
            *(code**)( pcVar1 + 0x30 ) = pcVar5;
            *(code**)( pcVar1 + 0x38 ) = pcVar4;
            *(code**)( pcVar1 + 0x40 ) = pcVar2;
            if (param_2 == 0) {
               if (param_4 == 0) {
                  puVar11 = &uprv_copyAscii_76_godot;
               }
 else {
                  puVar11 = &uprv_ebcdicFromAscii_76_godot;
               }

            }
 else if (param_4 == 1) {
               puVar11 = &uprv_copyEbcdic_76_godot;
            }
 else {
               puVar11 = &uprv_asciiFromEbcdic_76_godot;
            }

            *(undefined**)( pcVar1 + 0x48 ) = puVar11;
            return pcVar1;
         }

         *param_5 = 7;
      }
 else {
         *param_5 = 1;
      }

   }

   return (char*)0x0;
}
undefined8 udata_openSwapperForInputData_76_godot(ushort *param_1, uint param_2, char param_3, byte param_4, int *param_5) {
   ushort uVar1;
   undefined8 uVar2;
   ushort uVar3;
   if (( param_5 != (int*)0x0 ) && ( *param_5 < 1 )) {
      if (( param_1 == (ushort*)0x0 || param_2 < 0x18 ) || ( 1 < param_4 )) {
         *param_5 = 1;
         return 0;
      }

      if (( param_1[1] == 0x27da ) && ( (char)param_1[5] == '\x02' )) {
         uVar3 = *param_1;
         uVar1 = param_1[2];
         if ((char)param_1[4] != '\0') {
            uVar3 = uVar3 << 8 | uVar3 >> 8;
            uVar1 = uVar1 << 8 | uVar1 >> 8;
         }

         if (( ( ( 0x17 < uVar3 ) && ( 0x13 < uVar1 ) ) && ( (ulong)uVar1 + 4 <= (ulong)uVar3 ) ) && ( uVar3 <= param_2 )) {
            uVar2 = udata_openSwapper_76_godot((int)(char)param_1[4], *(undefined1*)( (long)param_1 + 9 ), (int)param_3, param_4);
            return uVar2;
         }

      }

      *param_5 = 0x10;
   }

   return 0;
}
void udata_closeSwapper_76_godot(void) {
   uprv_free_76_godot();
   return;
}


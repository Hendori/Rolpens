void png_format_buffer_isra_0(uint param_1, long param_2, long param_3) {
   int iVar1;
   int iVar2;
   char cVar3;
   ulong uVar4;
   int iVar5;
   ulong uVar6;
   int iVar7;
   uint uVar8;
   long lVar9;
   uint uVar10;
   iVar5 = 0;
   iVar7 = 0x18;
   do {
      uVar10 = param_1 >> ( (byte)iVar7 & 0x1f );
      iVar7 = iVar7 + -8;
      uVar8 = uVar10 & 0xff;
      if (( uVar8 - 0x41 < 0x3a ) && ( 5 < uVar8 - 0x5b )) {
         *(undefined1*)( iVar5 + param_2 ) = (char)uVar10;
         iVar5 = iVar5 + 1;
      }
 else {
         *(undefined1*)( iVar5 + param_2 ) = 0x5b;
         iVar1 = iVar5 + 2;
         cVar3 = "0123456789ABCDEFlibpng warning: %s"[uVar10 & 0xf];
         *(char*)( param_2 + ( iVar5 + 1 ) ) = "0123456789ABCDEFlibpng warning: %s"[(int)uVar8 >> 4];
         iVar2 = iVar5 + 3;
         iVar5 = iVar5 + 4;
         *(char*)( param_2 + iVar1 ) = cVar3;
         *(undefined1*)( param_2 + iVar2 ) = 0x5d;
      }

   }
 while ( iVar7 != -8 );
   lVar9 = (long)iVar5;
   if (param_3 == 0) {
      *(undefined1*)( param_2 + lVar9 ) = 0;
      return;
   }

   *(undefined2*)( param_2 + lVar9 ) = 0x203a;
   uVar4 = (long)( iVar5 + 2 );
   do {
      uVar6 = uVar4;
      cVar3 = *(char*)( ( param_3 - lVar9 ) + -2 + uVar6 );
      if (cVar3 == '\0') goto LAB_00100087;
      *(char*)( param_2 + uVar6 ) = cVar3;
      uVar4 = uVar6 + 1;
   }
 while ( lVar9 + 0xc5U != uVar6 + 1 );
   uVar6 = ( ulong )((int)uVar6 + 1);
   LAB_00100087:*(undefined1*)( param_2 + (int)uVar6 ) = 0;
   return;
}
void png_safecat(long param_1, ulong param_2, ulong param_3, char *param_4) {
   ulong uVar1;
   char cVar2;
   if (( param_1 != 0 ) && ( param_3 < param_2 )) {
      uVar1 = param_3;
      if (( param_4 != (char*)0x0 ) && ( ( cVar2 = *param_4 ),cVar2 != '\0' && ( param_3 < param_2 - 1 ) )) {
         do {
            uVar1 = uVar1 + 1;
            *(char*)( param_1 + -1 + uVar1 ) = cVar2;
            cVar2 = param_4[uVar1 - param_3];
            if (cVar2 == '\0') break;
         }
 while ( uVar1 != param_2 - 1 );
      }

      *(undefined1*)( param_1 + uVar1 ) = 0;
   }

   return;
}
char *png_format_number(char *param_1, long param_2, int param_3, ulong param_4) {
   bool bVar1;
   char cVar2;
   ulong uVar3;
   int iVar4;
   char *pcVar5;
   char *pcVar6;
   int iVar7;
   pcVar6 = (char*)( param_2 - 1 );
   *(undefined1*)( param_2 + -1 ) = 0;
   if (pcVar6 <= param_1) {
      return pcVar6;
   }

   iVar7 = 1;
   iVar4 = 0;
   do {
      switch (param_3) {
         default:
      uVar3 = 0;
      goto LAB_001001aa;
         case 1:
      do {
        pcVar5 = pcVar6 + -1;
        iVar4 = iVar4 + 1;
        pcVar6[-1] = "0123456789ABCDEF"[param_4 % 10];
        if (pcVar5 <= param_1) {
          return pcVar5;
        }
        bVar1 = 9 < param_4;
        param_4 = param_4 / 10;
        pcVar6 = pcVar5;
      } while (bVar1 || iVar4 < iVar7);
      return pcVar5;
         case 2:
      uVar3 = param_4 / 10;
      cVar2 = "0123456789ABCDEF"[param_4 % 10];
      break;
         case 3:
      do {
        pcVar5 = pcVar6 + -1;
        uVar3 = param_4 >> 4;
        iVar4 = iVar4 + 1;
        pcVar6[-1] = "0123456789ABCDEF"[(uint)param_4 & 0xf];
        if (pcVar5 <= param_1) {
          return pcVar5;
        }
        param_4 = uVar3;
        pcVar6 = pcVar5;
      } while (iVar4 < iVar7 || uVar3 != 0);
      return pcVar5;
         case 4:
      uVar3 = param_4 >> 4;
      cVar2 = "0123456789ABCDEF"[(uint)param_4 & 0xf];
      break;
         case 5:
      bVar1 = false;
      goto LAB_001002ba;
      }

      pcVar6 = pcVar6 + -1;
      *pcVar6 = cVar2;
      iVar7 = 2;
      LAB_001001aa:iVar4 = iVar4 + 1;
      if (pcVar6 <= param_1) {
         return pcVar6;
      }

      param_4 = uVar3;
      if (( uVar3 == 0 ) && ( iVar7 <= iVar4 )) {
         return pcVar6;
      }

   }
 while ( true );
   LAB_001002ba:uVar3 = param_4 % 10;
   pcVar5 = pcVar6;
   if (!bVar1) goto LAB_00100375;
   LAB_0010030b:do {
      pcVar6 = pcVar5 + -1;
      iVar4 = iVar4 + 1;
      pcVar5[-1] = "0123456789ABCDEF"[uVar3];
      if (( param_3 != 5 ) || ( iVar4 != 5 )) break;
      bVar1 = true;
      uVar3 = param_4 / 10;
      while (true) {
         param_4 = uVar3;
         if (pcVar6 <= param_1) {
            return pcVar6;
         }

         iVar4 = param_3;
         if (bVar1) break;
         if (param_4 == 0) {
            pcVar6[-1] = '0';
            return pcVar6 + -1;
         }

         uVar3 = param_4 % 10;
         LAB_00100375:pcVar5 = pcVar6;
         if (uVar3 != 0) goto LAB_0010030b;
         iVar4 = iVar4 + 1;
         bVar1 = false;
         if (( param_3 != 5 ) || ( uVar3 = iVar4 != 5 )) {
            if (pcVar6 <= param_1) {
               return pcVar6;
            }

            if (( param_4 < 10 ) && ( 4 < iVar4 )) {
               return pcVar6;
            }

            bVar1 = false;
            param_4 = param_4 / 10;
            goto LAB_001002ba;
         }

      }
;
      pcVar5 = pcVar6 + -1;
      pcVar6[-1] = '.';
      if (pcVar5 <= param_1) {
         return pcVar5;
      }

      if (param_4 == 0) {
         return pcVar5;
      }

      uVar3 = param_4 % 10;
   }
 while ( true );
   if (pcVar6 <= param_1) {
      return pcVar6;
   }

   if (( param_4 < 10 ) && ( 4 < iVar4 )) {
      return pcVar6;
   }

   bVar1 = true;
   param_4 = param_4 / 10;
   goto LAB_001002ba;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void png_warning(long param_1, char *param_2) {
   char *pcVar1;
   char *pcVar2;
   if (param_1 != 0) {
      if (*param_2 == '#') {
         pcVar1 = param_2 + 1;
         pcVar2 = param_2 + 0xf;
         do {
            param_2 = pcVar1;
            if (*pcVar1 == ' ') break;
            pcVar1 = pcVar1 + 1;
            param_2 = pcVar2;
         }
 while ( pcVar2 != pcVar1 );
      }

      if (*(code**)( param_1 + 0xe8 ) != (code*)0x0) {
         /* WARNING: Could not recover jumptable at 0x0010042a. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( param_1 + 0xe8 ) )();
         return;
      }

   }

   __fprintf_chk(_stderr, 2, "libpng warning: %s", param_2);
   fputc(10, _stderr);
   return;
}
void png_warning_parameter(long param_1, int param_2, char *param_3) {
   long lVar1;
   char cVar3;
   undefined1 *puVar4;
   long lVar2;
   if (( 7 < param_2 - 1U ) || ( puVar4 = (undefined1*)( param_1 + -0x20 + (long)param_2 * 0x20 ) ),puVar4 == (undefined1*)0x0) {
      return;
   }

   if (( param_3 != (char*)0x0 ) && ( cVar3 = cVar3 != '\0' )) {
      lVar2 = 0;
      do {
         lVar1 = lVar2 + 1;
         puVar4[lVar2] = cVar3;
         cVar3 = param_3[lVar1];
         if (cVar3 == '\0') {
            puVar4 = puVar4 + lVar1;
            goto LAB_001004f1;
         }

         lVar2 = lVar1;
      }
 while ( lVar1 != 0x1f );
      puVar4 = puVar4 + 0x1f;
   }

   LAB_001004f1:*puVar4 = 0;
   return;
}
void png_warning_parameter_unsigned(long param_1, int param_2) {
   char *pcVar1;
   char cVar2;
   long lVar3;
   undefined1 *puVar5;
   long in_FS_OFFSET;
   undefined1 local_38[16];
   undefined8 local_28;
   long local_20[2];
   long lVar4;
   local_20[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined1[16])0x0;
   local_28 = 0;
   pcVar1 = (char*)png_format_number(local_38, local_20);
   if (( param_2 - 1U < 8 ) && ( puVar5 = (undefined1*)( param_1 + -0x20 + (long)param_2 * 0x20 ) ),puVar5 != (undefined1*)0x0) {
      if (( pcVar1 != (char*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
         lVar4 = 0;
         do {
            lVar3 = lVar4 + 1;
            puVar5[lVar4] = cVar2;
            cVar2 = pcVar1[lVar3];
            if (cVar2 == '\0') {
               puVar5 = puVar5 + lVar3;
               goto LAB_00100599;
            }

            lVar4 = lVar3;
         }
 while ( lVar3 != 0x1f );
         puVar5 = puVar5 + 0x1f;
      }

      LAB_00100599:*puVar5 = 0;
   }

   if (local_20[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void png_warning_parameter_signed(long param_1, int param_2, undefined8 param_3, int param_4) {
   char *pcVar1;
   char cVar2;
   long lVar3;
   undefined1 *puVar5;
   long in_FS_OFFSET;
   undefined1 local_38[16];
   undefined8 local_28;
   long local_20;
   long lVar4;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined1[16])0x0;
   local_28 = 0;
   if (param_4 < 0) {
      pcVar1 = (char*)png_format_number(local_38, &local_20, param_3, -(long)param_4);
      if (local_38 < pcVar1) {
         pcVar1[-1] = '-';
         pcVar1 = pcVar1 + -1;
      }

   }
 else {
      pcVar1 = (char*)png_format_number(local_38, &local_20, param_3, (long)param_4);
   }

   if (( param_2 - 1U < 8 ) && ( puVar5 = (undefined1*)( param_1 + -0x20 + (long)param_2 * 0x20 ) ),puVar5 != (undefined1*)0x0) {
      if (( pcVar1 != (char*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
         lVar4 = 0;
         do {
            lVar3 = lVar4 + 1;
            puVar5[lVar4] = cVar2;
            cVar2 = pcVar1[lVar3];
            if (cVar2 == '\0') {
               puVar5 = puVar5 + lVar3;
               goto LAB_00100689;
            }

            lVar4 = lVar3;
         }
 while ( lVar3 != 0x1f );
         puVar5 = puVar5 + 0x1f;
      }

      LAB_00100689:*puVar5 = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void png_formatted_warning(undefined8 param_1, char *param_2, char *param_3) {
   char cVar1;
   char *pcVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   char local_d8[200];
   long local_10;
   lVar4 = 0;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   LAB_001006f7:do {
      cVar1 = *param_3;
      if (cVar1 == '\0') goto LAB_00100725;
      if (( param_2 == (char*)0x0 ) || ( cVar1 != '@' )) {
         LAB_001006e0:local_d8[lVar4] = cVar1;
         param_3 = param_3 + 1;
         lVar4 = lVar4 + 1;
      }
 else {
         cVar1 = param_3[1];
         if (cVar1 == '\0') {
            cVar1 = '@';
            goto LAB_001006e0;
         }

         if (cVar1 == '1') {
            lVar5 = 0x20;
            pcVar2 = param_2;
         }
 else {
            lVar5 = 1;
            do {
               lVar3 = lVar5;
               if (valid_parameters_0[lVar3] == '\0') break;
               lVar5 = lVar3 + 1;
            }
 while ( cVar1 != valid_parameters_0[lVar3] );
            if (7 < (int)lVar3) {
               param_3 = param_3 + 1;
               goto LAB_001006e0;
            }

            lVar3 = (long)(int)lVar3 * 0x20;
            lVar5 = lVar3 + 0x20;
            pcVar2 = param_2 + lVar3;
         }

         cVar1 = *pcVar2;
         if (( param_2 + lVar5 <= pcVar2 ) || ( cVar1 == '\0' )) {
            param_3 = param_3 + 2;
            goto LAB_001006f7;
         }

         do {
            lVar3 = lVar4 + 1;
            pcVar2 = pcVar2 + 1;
            local_d8[lVar4] = cVar1;
            lVar4 = lVar3;
            if (( lVar3 == 0xbf ) || ( cVar1 = param_2 + lVar5 <= pcVar2 )) break;
         }
 while ( cVar1 != '\0' );
         param_3 = param_3 + 2;
      }

      if (lVar4 == 0xbf) {
         lVar4 = 0xbf;
         LAB_00100725:local_d8[lVar4] = '\0';
         png_warning(param_1, local_d8);
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void png_chunk_warning(long param_1, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined1 auStack_e8[216];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      __fprintf_chk(_stderr, 2, "libpng warning: %s", param_2);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         fputc(10, _stderr);
         return;
      }

   }
 else {
      png_format_buffer_isra_0(*(undefined4*)( param_1 + 0x218 ), auStack_e8, param_2);
      png_warning(param_1);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void png_free_jmpbuf(long param_1) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   __jmp_buf_tag local_d8;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      lVar1 = *(long*)( param_1 + 0xd0 );
      if (( ( lVar1 != 0 ) && ( *(long*)( param_1 + 0xd8 ) != 0 ) ) && ( param_1 != lVar1 )) {
         iVar2 = _setjmp(&local_d8);
         if (iVar2 == 0) {
            *(__jmp_buf_tag**)( param_1 + 0xd0 ) = &local_d8;
            *(undefined8*)( param_1 + 0xd8 ) = 0;
            *(code**)( param_1 + 200 ) = __longjmp_chk;
            png_free(param_1, lVar1);
         }

      }

      for (int i = 0; i < 3; i++) {
         *(undefined8*)( param_1 + ( -8*i + 216 ) ) = 0;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void png_longjmp(long param_1) {
   if (( ( param_1 != 0 ) && ( *(code**)( param_1 + 200 ) != (code*)0x0 ) ) && ( *(long*)( param_1 + 0xd0 ) != 0 )) {
      ( **(code**)( param_1 + 200 ) )();
      /* WARNING: Subroutine does not return */
      png_longjmp_cold();
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void png_default_error(undefined8 param_1, char *param_2) {
   if (param_2 == (char*)0x0) {
      param_2 = "undefined";
   }

   __fprintf_chk(_stderr, 2, "libpng error: %s", param_2);
   fputc(10, _stderr);
   /* WARNING: Subroutine does not return */
   png_longjmp(param_1, 1);
}
void png_error(long param_1, undefined8 param_2) {
   if (( param_1 != 0 ) && ( *(code**)( param_1 + 0xe0 ) != (code*)0x0 )) {
      ( **(code**)( param_1 + 0xe0 ) )();
   }

   png_default_error(param_1, param_2);
   if (( *(byte*)( param_1 + 0x132 ) & 0x20 ) != 0) {
      png_warning();
      return;
   }

   /* WARNING: Subroutine does not return */
   png_error();
}
void png_app_warning(long param_1) {
   if (( *(byte*)( param_1 + 0x132 ) & 0x20 ) != 0) {
      png_warning();
      return;
   }

   /* WARNING: Subroutine does not return */
   png_error();
}
void png_app_error(long param_1) {
   if (( *(byte*)( param_1 + 0x132 ) & 0x40 ) != 0) {
      png_warning();
      return;
   }

   /* WARNING: Subroutine does not return */
   png_error();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void png_fixed_error(undefined8 param_1, long param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   char local_e0[208];
   undefined8 local_10;
   local_10 = *(undefined8*)( in_FS_OFFSET + 0x28 );
   local_e8 = 0x206e6920776f6c66;
   lVar1 = 0;
   local_f8 = __LC5;
   uStack_f0 = _UNK_00100ff8;
   if (param_2 != 0) {
      do {
         if (*(char*)( param_2 + lVar1 ) == '\0') goto LAB_00100b07;
         local_e0[lVar1] = *(char*)( param_2 + lVar1 );
         lVar1 = lVar1 + 1;
      }
 while ( lVar1 != 0xc3 );
      lVar1 = 0xc3;
   }

   LAB_00100b07:*(undefined1*)( (long)&local_f8 + ( ulong )((int)lVar1 + 0x18) ) = 0;
   /* WARNING: Subroutine does not return */
   png_error(param_1, &local_f8);
}
long png_set_longjmp_fn(long param_1, undefined8 param_2, ulong param_3) {
   long lVar1;
   if (param_1 == 0) {
      return 0;
   }

   lVar1 = *(long*)( param_1 + 0xd0 );
   if (lVar1 == 0) {
      *(undefined8*)( param_1 + 0xd8 ) = 0;
      if (param_3 < 0xc9) {
         *(long*)( param_1 + 0xd0 ) = param_1;
         lVar1 = param_1;
      }
 else {
         lVar1 = png_malloc_warn(param_1, param_3);
         *(long*)( param_1 + 0xd0 ) = lVar1;
         if (lVar1 == 0) {
            return 0;
         }

         *(ulong*)( param_1 + 0xd8 ) = param_3;
      }

   }
 else if (*(ulong*)( param_1 + 0xd8 ) == 0) {
      if (lVar1 != param_1) {
         /* WARNING: Subroutine does not return */
         png_error(param_1, "Libpng jmp_buf still allocated");
      }

      if (param_3 != 200) goto LAB_00100b7f;
   }
 else if (*(ulong*)( param_1 + 0xd8 ) != param_3) {
      LAB_00100b7f:png_warning(param_1, "Application jmp_buf size changed");
      return 0;
   }

   *(undefined8*)( param_1 + 200 ) = param_2;
   return lVar1;
}
void png_chunk_error(long param_1, undefined8 param_2) {
   uint uVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 auStack_e8[216];
   undefined8 local_10;
   local_10 = *(undefined8*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      png_format_buffer_isra_0(*(undefined4*)( param_1 + 0x218 ), auStack_e8);
      /* WARNING: Subroutine does not return */
      png_error(param_1);
   }

   lVar2 = 0;
   png_default_error(0, param_2, param_2);
   if (( *(byte*)( lVar2 + 0x132 ) & 0x10 ) != 0) {
      png_chunk_warning();
      return;
   }

   png_chunk_error();
   uVar1 = *(uint*)( lVar2 + 300 ) & 0x8000;
   if (( *(byte*)( lVar2 + 0x132 ) & 0x10 ) == 0) {
      if (( uVar1 == 0 ) || ( *(int*)( lVar2 + 0x218 ) == 0 )) {
         /* WARNING: Subroutine does not return */
         png_error();
      }

      png_chunk_error();
   }
 else if (( uVar1 == 0 ) || ( *(int*)( lVar2 + 0x218 ) == 0 )) {
      png_warning();
      return;
   }

   png_chunk_warning();
   return;
}
void png_chunk_benign_error(long param_1) {
   uint uVar1;
   if (( *(byte*)( param_1 + 0x132 ) & 0x10 ) != 0) {
      png_chunk_warning();
      return;
   }

   png_chunk_error();
   uVar1 = *(uint*)( param_1 + 300 ) & 0x8000;
   if (( *(byte*)( param_1 + 0x132 ) & 0x10 ) == 0) {
      if (( uVar1 == 0 ) || ( *(int*)( param_1 + 0x218 ) == 0 )) {
         /* WARNING: Subroutine does not return */
         png_error();
      }

      png_chunk_error();
   }
 else if (( uVar1 == 0 ) || ( *(int*)( param_1 + 0x218 ) == 0 )) {
      png_warning();
      return;
   }

   png_chunk_warning();
   return;
}
void png_benign_error(long param_1) {
   uint uVar1;
   uVar1 = *(uint*)( param_1 + 300 ) & 0x8000;
   if (( *(byte*)( param_1 + 0x132 ) & 0x10 ) == 0) {
      if (( uVar1 == 0 ) || ( *(int*)( param_1 + 0x218 ) == 0 )) {
         /* WARNING: Subroutine does not return */
         png_error();
      }

      png_chunk_error();
   }
 else if (( uVar1 == 0 ) || ( *(int*)( param_1 + 0x218 ) == 0 )) {
      png_warning();
      return;
   }

   png_chunk_warning();
   return;
}
void png_chunk_report(long param_1, undefined8 param_2, int param_3, undefined8 param_4) {
   uint uVar1;
   undefined4 extraout_EDX;
   undefined4 extraout_var;
   if (( *(byte*)( param_1 + 0x12d ) & 0x80 ) != 0) {
      if (( 1 < param_3 ) && ( ( *(byte*)( param_1 + 0x132 ) & 0x10 ) == 0 )) {
         png_chunk_error();
         if (param_1 != 0) {
            *(undefined8*)( param_1 + 0xf0 ) = param_2;
            *(ulong*)( param_1 + 0xe0 ) = CONCAT44(extraout_var, extraout_EDX);
            *(undefined8*)( param_1 + 0xe8 ) = param_4;
         }

         return;
      }

      png_chunk_warning();
      return;
   }

   if (param_3 < 1) {
      uVar1 = *(uint*)( param_1 + 0x130 ) & 0x200000;
   }
 else {
      uVar1 = *(uint*)( param_1 + 0x130 ) & 0x400000;
   }

   if (uVar1 != 0) {
      png_warning();
      return;
   }

   /* WARNING: Subroutine does not return */
   png_error();
}
void png_set_error_fn(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0xf0 ) = param_2;
      *(undefined8*)( param_1 + 0xe0 ) = param_3;
      *(undefined8*)( param_1 + 0xe8 ) = param_4;
   }

   return;
}
undefined8 png_get_error_ptr(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0xf0 );
   }

   return 0;
}
void png_safe_error(long param_1, undefined8 param_2) {
   long lVar1;
   long *plVar2;
   long lVar3;
   plVar2 = *(long**)( param_1 + 0xf0 );
   if (plVar2 == (long*)0x0) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   lVar3 = (long)plVar2 + 0x24;
   png_safecat(lVar3, 0x40, 0, param_2, plVar2, param_2);
   *(uint*)( plVar2 + 4 ) = *(uint*)( plVar2 + 4 ) | 2;
   if (( *plVar2 != 0 ) && ( lVar1 = lVar1 != 0 )) {
      /* WARNING: Subroutine does not return */
      __longjmp_chk(lVar1, 1);
   }

   png_safecat(lVar3, 0x40, 0, "bad longjmp: ");
   png_safecat();
   /* WARNING: Subroutine does not return */
   png_safe_error_cold();
}
void png_safe_warning(long param_1, char *param_2) {
   long lVar1;
   long lVar2;
   char cVar3;
   undefined1 *puVar4;
   lVar1 = *(long*)( param_1 + 0xf0 );
   if (*(int*)( lVar1 + 0x20 ) != 0) {
      return;
   }

   puVar4 = (undefined1*)( lVar1 + 0x24 );
   if (( param_2 != (char*)0x0 ) && ( cVar3 = cVar3 != '\0' )) {
      lVar2 = 0;
      do {
         lVar2 = lVar2 + 1;
         *(char*)( lVar1 + 0x23 + lVar2 ) = cVar3;
         cVar3 = param_2[lVar2];
         if (cVar3 == '\0') {
            puVar4 = puVar4 + lVar2;
            goto LAB_00100e34;
         }

      }
 while ( lVar2 != 0x3f );
      puVar4 = (undefined1*)( lVar1 + 99 );
   }

   LAB_00100e34:*puVar4 = 0;
   *(uint*)( lVar1 + 0x20 ) = *(uint*)( lVar1 + 0x20 ) | 1;
   return;
}
undefined8 png_safe_execute(long *param_1, code *param_2, undefined8 param_3) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   __jmp_buf_tag local_d8;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined8*)( *param_1 + 0x10 );
   iVar2 = _setjmp(&local_d8);
   if (iVar2 == 0) {
      *(__jmp_buf_tag**)( *param_1 + 0x10 ) = &local_d8;
      uVar3 = ( *param_2 )(param_3);
      *(undefined8*)( *param_1 + 0x10 ) = uVar1;
   }
 else {
      *(undefined8*)( *param_1 + 0x10 ) = uVar1;
      png_image_free(param_1);
      uVar3 = 0;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void png_longjmp_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void png_safe_error_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}


undefined4 read_number(undefined8 *param_1, ushort *param_2, int param_3, uint param_4, undefined4 param_5, uint *param_6, undefined4 *param_7) {
   ushort uVar1;
   ushort *puVar2;
   uint uVar3;
   int iVar4;
   undefined4 uVar5;
   puVar2 = (ushort*)*param_1;
   *param_7 = 0;
   if (( puVar2 < param_2 ) && ( -1 < param_3 )) {
      uVar1 = *puVar2;
      if (uVar1 == 0x2b) {
         param_4 = param_4 - param_3;
         puVar2 = puVar2 + 1;
         iVar4 = 1;
      }
 else {
         iVar4 = 0;
         if (uVar1 != 0x2d) goto LAB_00100063;
         puVar2 = puVar2 + 1;
         iVar4 = -1;
      }

   }
 else {
      iVar4 = 0;
   }

   if (param_2 <= puVar2) {
      return 0;
   }

   uVar1 = *puVar2;
   LAB_00100063:uVar3 = 0;
   if (9 < ( ushort )(uVar1 - 0x30)) {
      return 0;
   }

   while (( puVar2<param_2&&(uVar1 = *puVar2, (, ushort)(uVar1, - 0x30) < 10 )) {
      puVar2 = puVar2 + 1;
      uVar3 = ( uVar1 - 0x30 ) + uVar3 * 10;
      if (param_4 < uVar3) {
         *param_7 = param_5;
         uVar5 = 0;
         LAB_001000b3:*param_6 = uVar3;
         *param_1 = puVar2;
         return uVar5;
      }

   }
;
   if (( iVar4 != 0 ) && ( -1 < param_3 )) {
      if (uVar3 == 0) {
         *param_7 = 0x7e;
         uVar5 = 0;
         goto LAB_001000b3;
      }

      if (iVar4 == 1) {
         uVar3 = uVar3 + param_3;
         uVar5 = 1;
         goto LAB_001000b3;
      }

      if (param_3 < (int)uVar3) {
         *param_7 = 0x73;
         uVar5 = 0;
         goto LAB_001000b3;
      }

      uVar3 = ( param_3 + 1 ) - uVar3;
   }

   uVar5 = 1;
   goto LAB_001000b3;
}
undefined8 read_repeat_counts(ulong *param_1, short *param_2, int *param_3, int *param_4, int *param_5, short *param_6) {
   bool bVar1;
   bool bVar2;
   short *psVar3;
   undefined8 uVar4;
   short *psVar5;
   short sVar6;
   short *in_R10;
   short *in_R11;
   short *unaff_R15;
   long in_FS_OFFSET;
   int local_50;
   int local_4c;
   short *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (short*)*param_1;
   local_50 = 0;
   local_4c = 0x10000;
   *param_5 = 0;
   if (local_48 < param_2) {
      psVar5 = local_48;
      bVar2 = false;
      do {
         sVar6 = *psVar5;
         if (sVar6 != 0x20 && sVar6 != 9) {
            if (bVar2) {
               local_48 = param_6;
            }

            if (psVar5 < param_2) {
               if (( ushort )(*psVar5 - 0x30U) < 10) goto LAB_00100280;
               bVar2 = false;
               goto LAB_001001d9;
            }

            break;
         }

         psVar5 = psVar5 + 1;
         param_6 = psVar5;
         bVar2 = sVar6 == 0x20 || sVar6 == 9;
      }
 while ( psVar5 < param_2 );
   }

   goto LAB_00100248;
   while (( ushort )(*psVar5 - 0x30U) < 10) {
      LAB_00100280:psVar5 = psVar5 + 1;
      if (param_2 <= psVar5) goto LAB_00100248;
   }
;
   bVar2 = true;
   LAB_001001d9:do {
      sVar6 = *psVar5;
      bVar1 = sVar6 == 0x20 || sVar6 == 9;
      if (sVar6 != 0x20 && sVar6 != 9) {
         if (psVar5 < param_2) {
            if (sVar6 == 0x7d) {
               if (bVar2) goto LAB_00100294;
            }
 else if (sVar6 == 0x2c) goto LAB_00100210;
         }

         break;
      }

      psVar5 = psVar5 + 1;
   }
 while ( psVar5 < param_2 );
   goto LAB_00100248;
   LAB_00100294:uVar4 = read_number(&local_48, param_2, 0xffffffff, 0xffff, 0x69, &local_50, param_5);
   if ((int)uVar4 == 0) {
      psVar5 = local_48;
      if (*param_5 == 0) {
         psVar5 = local_48 + 1;
         local_48 = psVar5;
         while (local_48 < param_2) {
            sVar6 = *local_48;
            if (sVar6 != 0x20 && sVar6 != 9) {
               local_48 = psVar5;
               if (bVar1) {
                  local_48 = in_R10;
               }

               break;
            }

            local_48 = local_48 + 1;
            in_R10 = local_48;
            bVar1 = sVar6 == 0x20 || sVar6 == 9;
         }
;
         uVar4 = read_number(&local_48);
         psVar5 = local_48;
         if (( (int)uVar4 != 0 ) || ( *param_5 == 0 )) goto joined_r0x001003bb;
      }

   }
 else {
      sVar6 = *local_48;
      psVar5 = local_48;
      psVar3 = local_48;
      bVar2 = false;
      if (local_48 < param_2) {
         do {
            psVar5 = psVar3;
            sVar6 = *psVar5;
            if (sVar6 != 0x20 && sVar6 != 9) {
               if (bVar2) {
                  local_48 = unaff_R15;
               }

               goto LAB_00100324;
            }

            unaff_R15 = psVar5 + 1;
            psVar3 = unaff_R15;
            bVar2 = sVar6 == 0x20 || sVar6 == 9;
         }
 while ( unaff_R15 < param_2 );
         sVar6 = psVar5[1];
         psVar5 = unaff_R15;
         local_48 = unaff_R15;
      }

      LAB_00100324:if (sVar6 == 0x7d) {
         local_4c = local_50;
         psVar5 = local_48;
         joined_r0x001003bb:do {
            psVar3 = psVar5;
            if (param_2 <= psVar3) break;
            psVar5 = psVar3 + 1;
         }
 while ( ( *psVar3 == 0x20 ) || ( *psVar3 == 9 ) );
         if (param_3 != (int*)0x0) {
            *param_3 = local_50;
         }

         if (param_4 != (int*)0x0) {
            *param_4 = local_4c;
         }

         uVar4 = 1;
         psVar5 = psVar3 + 1;
      }
 else {
         local_48 = psVar5 + 1;
         while (local_48 < param_2) {
            sVar6 = *local_48;
            if (sVar6 != 0x20 && sVar6 != 9) {
               local_48 = psVar5 + 1;
               if (bVar1) {
                  local_48 = in_R11;
               }

               break;
            }

            local_48 = local_48 + 1;
            in_R11 = local_48;
            bVar1 = sVar6 == 0x20 || sVar6 == 9;
         }
;
         uVar4 = read_number(&local_48);
         psVar5 = local_48;
         if (( (int)uVar4 != 0 ) || ( *param_5 == 0 )) {
            if (local_50 <= local_4c) goto joined_r0x001003bb;
            *param_5 = 0x68;
            uVar4 = 0;
         }

      }

   }

   *param_1 = (ulong)psVar5;
   goto LAB_0010024a;
   while (( sVar6 = *psVar5 ),sVar6 == 0x20 || ( sVar6 == 9 )) {
      LAB_00100210:psVar5 = psVar5 + 1;
      if (param_2 <= psVar5) goto LAB_00100248;
   }
;
   if (psVar5 < param_2) {
      if (( ushort )(sVar6 - 0x30U) < 10) {
         do {
            psVar5 = psVar5 + 1;
            if (param_2 <= psVar5) goto LAB_00100248;
         }
 while ( ( ushort )(*psVar5 - 0x30U) < 10 );
      }
 else if (!bVar2) goto LAB_00100248;
      do {
         sVar6 = *psVar5;
         if (( sVar6 != 0x20 ) && ( sVar6 != 9 )) {
            if (( psVar5 < param_2 ) && ( sVar6 == 0x7d )) goto LAB_00100294;
            break;
         }

         psVar5 = psVar5 + 1;
      }
 while ( psVar5 < param_2 );
   }

   LAB_00100248:uVar4 = 0;
   LAB_0010024a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 check_posix_syntax(short *param_1, long param_2, undefined8 *param_3) {
   short sVar1;
   short sVar2;
   short *psVar3;
   psVar3 = param_1 + 1;
   sVar1 = *param_1;
   do {
      if (param_2 - (long)psVar3 < 3) {
         return 0;
      }

      while (sVar2 = *psVar3,sVar2 != 0x5c) {
         if (sVar2 == 0x5b) {
            if (psVar3[1] == sVar1) {
               return 0;
            }

            if (sVar1 == 0x5b) {
               LAB_001005eb:if (psVar3[1] == 0x5d) {
                  *param_3 = psVar3;
                  return 1;
               }

            }

         }
 else {
            if (sVar2 == 0x5d) {
               return 0;
            }

            if (sVar2 == sVar1) goto LAB_001005eb;
         }

         psVar3 = psVar3 + 1;
         if (param_2 - (long)psVar3 < 3) {
            return 0;
         }

      }
;
      if (( ushort )(psVar3[1] - 0x5cU) < 2) {
         psVar3 = psVar3 + 1;
      }

      psVar3 = psVar3 + 1;
   }
 while ( true );
}
undefined8 read_name(undefined8 *param_1, ushort *param_2, uint param_3, int param_4, long *param_5, undefined8 *param_6, undefined4 *param_7, int *param_8, long param_9) {
   byte bVar1;
   short sVar2;
   ushort uVar3;
   uint uVar4;
   int iVar5;
   ushort *puVar6;
   ushort *puVar7;
   ushort *puVar8;
   ushort uVar9;
   sVar2 = *(short*)*param_1;
   puVar6 = (ushort*)( (short*)*param_1 + 1 );
   if (param_4 == 0x7d) {
      for (; puVar6 < param_2; puVar6 = puVar6 + 1) {
         if (( *puVar6 != 0x20 ) && ( *puVar6 != 9 )) goto LAB_00100623;
      }

   }
 else {
      LAB_00100623:if (puVar6 < param_2) {
         *param_6 = puVar6;
         uVar3 = *puVar6;
         uVar4 = (uint)uVar3;
         *param_5 = (long)puVar6 - *(long*)( param_9 + 0x38 ) >> 1;
         puVar7 = puVar6;
         if (sVar2 == 0x2a) {
            LAB_0010086b:do {
               if (( 0xff < *puVar7 ) || ( ( *(byte*)( *(long*)( param_9 + 0x20 ) + ( ulong ) * puVar7 ) & 0x10 ) == 0 )) break;
               puVar7 = puVar7 + 1;
            }
 while ( puVar7 < param_2 );
            if (puVar6 + 0x20 < puVar7) {
               iVar5 = 0x94;
               goto LAB_0010077f;
            }

            *param_7 = (int)( (long)puVar7 - (long)puVar6 >> 1 );
            if (sVar2 == 0x2a) goto LAB_0010073a;
         }
 else {
            if (( param_3 & 1 ) == 0) {
               if (( sVar2 != 0x2a ) && ( ( ushort )(uVar3 - 0x30) < 10 )) {
                  iVar5 = 0x90;
                  goto LAB_0010077f;
               }

               goto LAB_0010086b;
            }

            if (( uVar3 & 0xfc00 ) == 0xd800) {
               uVar4 = ( ( uVar4 & 0x3ff ) << 10 | puVar6[1] & 0x3ff ) + 0x10000;
            }

            bVar1 = ( &DAT_00110019 )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar4 >> 7 ) * 2 ) * 0x80 + ( uVar4 & 0x7f ) ) * 2 ) * 0xc];
            puVar8 = puVar6;
            if (bVar1 == 0xd) {
               iVar5 = 0x90;
               goto LAB_0010077f;
            }

            while (( ( ( bVar1 == 0xd || ( *(int*)( &_pcre2_ucp_gentype_16 + (ulong)bVar1 * 4 ) == 1 ) ) || ( puVar7 = puVar8 ),uVar4 == 0x5f ) ) && ( puVar7 = puVar7 < param_2 )) {
               uVar3 = puVar8[1];
               uVar9 = uVar3 & 0xfc00;
               if (uVar9 == 0xdc00) {
                  puVar7 = puVar8 + 2;
                  if (param_2 <= puVar7) break;
                  uVar3 = puVar8[2];
                  uVar9 = uVar3 & 0xfc00;
               }

               uVar4 = (uint)uVar3;
               if (uVar9 == 0xd800) {
                  uVar4 = ( ( uVar4 & 0x3ff ) << 10 | puVar7[1] & 0x3ff ) + 0x10000;
               }

               bVar1 = ( &DAT_00110019 )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar4 >> 7 ) * 2 ) * 0x80 + ( uVar4 & 0x7f ) ) * 2 ) * 0xc];
               puVar8 = puVar7;
            }
;
            iVar5 = 0x94;
            if (puVar6 + 0x20 < puVar7) goto LAB_0010077f;
            *param_7 = (int)( (long)puVar7 - (long)puVar6 >> 1 );
         }

         if (puVar6 == puVar7) {
            iVar5 = 0xa2;
         }
 else {
            if (param_4 == 0x7d) {
               for (; puVar7 < param_2; puVar7 = puVar7 + 1) {
                  if (( *puVar7 != 0x20 ) && ( *puVar7 != 9 )) goto LAB_00100723;
               }

            }
 else {
               LAB_00100723:if (( puVar7 < param_2 ) && ( *puVar7 == (ushort)param_4 )) {
                  puVar7 = puVar7 + 1;
                  LAB_0010073a:*param_1 = puVar7;
                  return 1;
               }

            }

            iVar5 = 0x8e;
         }

         goto LAB_0010077f;
      }

   }

   iVar5 = ( sVar2 != 0x2a ) + 0xa0 + ( uint )(sVar2 != 0x2a);
   puVar7 = puVar6;
   LAB_0010077f:*param_8 = iVar5;
   *param_1 = puVar7;
   return 0;
}
undefined4 *manage_callouts(long param_1, undefined8 *param_2, int param_3, undefined4 *param_4, long param_5) {
   undefined8 uVar1;
   undefined4 *puVar2;
   int iVar3;
   puVar2 = (undefined4*)*param_2;
   if (puVar2 == (undefined4*)0x0) {
      if (param_3 == 0) goto LAB_00100954;
      iVar3 = (int)( param_1 - *(long*)( param_5 + 0x38 ) >> 1 );
   }
 else {
      iVar3 = (int)( param_1 - *(long*)( param_5 + 0x38 ) >> 1 );
      puVar2[2] = iVar3 - puVar2[1];
      if (param_3 == 0) {
         LAB_00100954:*param_2 = 0;
         return param_4;
      }

      if (( puVar2 == param_4 + -4 ) && ( puVar2[3] == 0xff )) goto LAB_0010093d;
   }

   uVar1 = _LC0;
   *param_4 = 0x80060000;
   *(undefined8*)( param_4 + 2 ) = uVar1;
   puVar2 = param_4;
   param_4 = param_4 + 4;
   LAB_0010093d:puVar2[1] = iVar3;
   *param_2 = puVar2;
   return param_4;
}
int *handle_escdsw(int param_1, int *param_2, uint param_3, uint param_4) {
   uint uVar1;
   uVar1 = param_1 - 6;
   if (uVar1 < 6) {
      if (( ( param_3 & 0x20000 ) != 0 ) && ( ( param_4 & *(uint*)( CSWTCH_1349 + (ulong)uVar1 * 4 ) ) == 0 )) {
         *param_2 = *(int*)( CSWTCH_1350 + (ulong)uVar1 * 4 ) + -0x7fe80000;
         if (9 < param_1) {
            param_2[1] = 0x90000;
            return param_2 + 2;
         }

         if (param_1 < 8) {
            param_2[1] = 0x3000d;
            return param_2 + 2;
         }

         param_2[1] = 0x70000;
         return param_2 + 2;
      }

   }
 else if (( param_3 & 0x20000 ) != 0) {
      *param_2 = -0x7fe7fff0;
      return param_2 + 1;
   }

   *param_2 = param_1 + -0x7fe80000;
   return param_2 + 1;
}
void first_significant_code(ushort *param_1, int param_2) {
   ushort uVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   LAB_00100a40:uVar3 = ( ulong ) * param_1;
   if (0x96 < *param_1) goto LAB_00100a97;
   LAB_00100a4a:if ((ushort)uVar3 < 0x76) {
      if (( ushort )((ushort)uVar3 - 4) < 2) goto LAB_00100a80;
      return;
   }

   switch ((int)uVar3 - 0x76U & 0xffff) {
      case 0:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
    goto switchD_00100a63_caseD_0;
      case 1:
    goto switchD_00100a63_caseD_1;
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
    if (param_2 != 0) goto LAB_00100ae8;
    break;
      case 0x15:
      case 0x1a:
    if ((param_1[2] == 0x95) && (param_1[param_1[1]] == 0x79)) {
      param_1 = param_1 + (ulong)param_1[1] + 2;
      goto LAB_00100a40;
    }
   }

   return;
   LAB_00100ae8:do {
      param_1 = param_1 + param_1[1];
   }
 while ( *param_1 == 0x78 );
   param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_16)[*param_1];
   goto LAB_00100a40;
   switchD_00100a63_caseD_1:param_1 = param_1 + param_1[3];
   goto LAB_00100a40;
   switchD_00100a63_caseD_0:while (true) {
      param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_16)[uVar3];
      uVar3 = ( ulong ) * param_1;
      if (*param_1 < 0x97) break;
      LAB_00100a97:iVar2 = (int)uVar3 + -0x9a;
      uVar1 = (ushort)iVar2;
      if (0x10 < uVar1) {
         return;
      }

      uVar4 = 1L << ( (byte)iVar2 & 0x3f );
      if (( uVar4 & 0x155 ) != 0) {
         param_1 = param_1 + (int)( ( uint )(byte)(&_pcre2_OP_lengths_16)[uVar3] + (uint)param_1[1] );
         goto LAB_00100a40;
      }

      if (( uVar4 & 0x18000 ) == 0) {
         if (uVar1 != 0xd) {
            return;
         }

         param_1 = param_1 + (ulong)param_1[2] + 3;
         goto LAB_00100a40;
      }

      LAB_00100a80:if (param_2 == 0) {
         return;
      }

   }
;
   goto LAB_00100a4a;
}
ulong is_anchored(ushort *param_1, uint param_2, long param_3, int param_4, uint param_5) {
   ushort uVar1;
   int iVar2;
   ushort *puVar3;
   ulong uVar4;
   uint uVar5;
   uVar1 = *param_1;
   do {
      puVar3 = (ushort*)first_significant_code(param_1 + ( byte )(&_pcre2_OP_lengths_16)[uVar1], 0);
      uVar1 = *puVar3;
      if (0x90 < uVar1) {
         return 0;
      }

      iVar2 = param_4;
      uVar5 = param_5;
      if (uVar1 < 0x87) {
         if (uVar1 == 0x7f) {
            LAB_00100d30:uVar5 = 1;
            goto LAB_00100be3;
         }

         if (0x7f < uVar1) {
            if (uVar1 != 0x83) {
               if (uVar1 != 0x85) {
                  return 0;
               }

               iVar2 = param_4 + 1;
               goto LAB_00100be3;
            }

            goto LAB_00100d30;
         }

         if (uVar1 < 0x57) {
            if (0x54 < uVar1) goto LAB_00100c8c;
            if (( 1 < uVar1 - 1 ) && ( uVar1 != 0x1b )) {
               return 0;
            }

         }
 else {
            if (uVar1 != 0x5e) {
               return 0;
            }

            LAB_00100c8c:if (( ( ( puVar3[1] != 0xd ) || ( ( param_2 & *(uint*)( param_3 + 0xf4 ) ) != 0 ) ) || ( 0 < param_4 ) ) || ( uVar5 = uVar5 != 0 )) {
               return 0;
            }

            if (( *(byte*)( param_3 + 0xc5 ) & 0x80 ) != 0) {
               return (ulong)uVar5;
            }

         }

      }
 else {
         uVar4 = 1L << ( (char)uVar1 + 0x79U & 0x3f );
         if (( uVar4 & 0x18c ) == 0) {
            if (( uVar4 & 99 ) == 0) {
               if (( uVar4 & 0x210 ) == 0) {
                  return 0;
               }

               if (puVar3[puVar3[1]] != 0x78) {
                  return 0;
               }

            }

            LAB_00100be3:uVar4 = is_anchored(puVar3, param_2, param_3, iVar2, uVar5);
            iVar2 = (int)uVar4;
         }
 else {
            uVar5 = 1 << ( (byte)puVar3[2] & 0x1f );
            if (0x1f < puVar3[2]) {
               uVar5 = 1;
            }

            uVar4 = is_anchored(puVar3, uVar5 | param_2, param_3, param_4, param_5);
            iVar2 = (int)uVar4;
         }

         if (iVar2 == 0) {
            return uVar4;
         }

      }

      param_1 = param_1 + param_1[1];
      uVar1 = *param_1;
      if (uVar1 != 0x78) {
         return 1;
      }

   }
 while ( true );
}
ulong is_startline(ushort *param_1, uint param_2, long param_3, int param_4, uint param_5) {
   short sVar1;
   ushort uVar2;
   int iVar3;
   short *psVar4;
   ulong uVar5;
   uint uVar6;
   ushort *puVar7;
   uVar2 = *param_1;
   do {
      psVar4 = (short*)first_significant_code(param_1 + ( byte )(&_pcre2_OP_lengths_16)[uVar2], 0);
      sVar1 = *psVar4;
      if (sVar1 == 0x8b) {
         uVar2 = psVar4[2];
         puVar7 = (ushort*)( psVar4 + 2 );
         if (uVar2 == 0x76) {
            puVar7 = puVar7 + DAT_0011009e;
            uVar2 = *puVar7;
            joined_r0x00100f53:if (0x96 < uVar2) goto LAB_00100ee0;
            LAB_00100de6:if (0x90 < uVar2) {
               return 0;
            }

         }
 else {
            if (uVar2 == 0x77) {
               puVar7 = puVar7 + (ushort)psVar4[5];
               uVar2 = *puVar7;
               goto joined_r0x00100f53;
            }

            if (uVar2 < 0x97) goto LAB_00100de6;
            LAB_00100ee0:if (uVar2 == 0xa3) {
               return 0;
            }

         }

         uVar5 = is_startline(puVar7, param_2, param_3, param_4, 1);
         if ((int)uVar5 == 0) {
            return uVar5;
         }

         do {
            puVar7 = puVar7 + puVar7[1];
         }
 while ( *puVar7 == 0x78 );
         psVar4 = (short*)first_significant_code(puVar7 + 2, 0);
         sVar1 = *psVar4;
      }

      iVar3 = param_4;
      uVar6 = param_5;
      switch (sVar1) {
         case 0x1b:
         case 0x1c:
      goto switchD_00100dbd_caseD_1b;
         default:
      return 0;
         case 0x55:
         case 0x56:
         case 0x5e:
      if (psVar4[1] != 0xc) {
        return 0;
      }
      if ((param_2 & *(uint *)(param_3 + 0xf4)) != 0) {
        return 0;
      }
      if (0 < param_4) {
        return 0;
      }
      uVar6 = param_5 | *(uint *)(param_3 + 0x120);
      if (uVar6 != 0) {
        return 0;
      }
      if ((*(byte *)(param_3 + 0xc5) & 0x80) != 0) {
        return (ulong)uVar6;
      }
      goto switchD_00100dbd_caseD_1b;
         case 0x7f:
         case 0x83:
      uVar6 = 1;
      break;
         case 0x85:
      iVar3 = param_4 + 1;
      break;
         case 0x87:
         case 0x88:
         case 0x8c:
         case 0x8d:
      break;
         case 0x89:
         case 0x8a:
         case 0x8e:
         case 0x8f:
      uVar6 = 1 << ((byte)psVar4[2] & 0x1f);
      if (0x1f < (ushort)psVar4[2]) {
        uVar6 = 1;
      }
      uVar5 = is_startline(psVar4,uVar6 | param_2,param_3,param_4,param_5);
      iVar3 = (int)uVar5;
      goto joined_r0x00100e2f;
      }

      uVar5 = is_startline(psVar4, param_2, param_3, iVar3, uVar6);
      iVar3 = (int)uVar5;
      joined_r0x00100e2f:if (iVar3 == 0) {
         return uVar5;
      }

      switchD_00100dbd_caseD_1b:param_1 = param_1 + param_1[1];
      uVar2 = *param_1;
      if (uVar2 != 0x78) {
         return 1;
      }

   }
 while ( true );
}
ushort *find_recurse(ushort *param_1, int param_2) {
   ushort *puVar1;
   ulong uVar2;
   ushort uVar3;
   uVar3 = *param_1;
   do {
      if (uVar3 == 0) {
         return (ushort*)0x0;
      }

      if (uVar3 == 0x75) {
         return param_1;
      }

      if (uVar3 == 0x70) {
         param_1 = param_1 + param_1[1];
      }
 else if (uVar3 == 0x77) {
         param_1 = param_1 + param_1[3];
      }
 else {
         uVar2 = ( ulong )(byte)(&_pcre2_OP_lengths_16)[uVar3];
         if (uVar3 < 0x61) {
            if (uVar3 < 0x5e) {
               if (0x5a < uVar3) goto LAB_00101098;
               if (uVar3 < 0x55) {
                  param_1 = param_1 + uVar2;
                  if (( ( param_2 != 0 ) && ( uVar3 - 0x1d < 0x38 ) ) && ( ( param_1[-1] & 0xfc00 ) == 0xd800 )) {
                     param_1 = param_1 + 1;
                  }

                  goto LAB_00101003;
               }

            }

            uVar3 = param_1[1];
         }
 else {
            if (uVar3 != 0x61) {
               if (( ( ushort )(uVar3 - 0x9a) < 9 ) && ( ( 0x155UL >> ( ( ulong )(ushort)(uVar3 - 0x9a) & 0x3f ) & 1 ) != 0 )) {
                  param_1 = param_1 + param_1[1] + uVar2;
               }
 else {
                  param_1 = param_1 + uVar2;
               }

               goto LAB_00101003;
            }

            LAB_00101098:uVar3 = param_1[2];
         }

         puVar1 = param_1 + uVar2;
         param_1 = param_1 + uVar2 + 2;
         if (1 < ( ushort )(uVar3 - 0xf)) {
            param_1 = puVar1;
         }

      }

      LAB_00101003:uVar3 = *param_1;
   }
 while ( true );
}
uint find_firstassertedcu(short *param_1, uint *param_2, int param_3) {
   short sVar1;
   ushort uVar2;
   uint uVar3;
   uint uVar4;
   ushort *puVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   uVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0xfffffffe;
   sVar1 = *param_1;
   uVar7 = 0xfffffffe;
   LAB_001010fe:puVar5 = (ushort*)first_significant_code(( ulong )(( uint )(( ushort )(sVar1 - 0x8eU) < 2 || ( ushort )(sVar1 - 0x89U) < 2) * 2 + 4) + (long)param_1, 1);
   uVar2 = *puVar5;
   if (0x38 < uVar2) {
      uVar4 = uVar2 - 0x7f;
      if (( ( 0x10 < (ushort)uVar4 ) || ( ( 0x18fd1UL >> ( (ulong)uVar4 & 0x3f ) & 1 ) == 0 ) ) || ( uVar4 = find_firstassertedcu(puVar5, &local_44, param_3 + ( uint )(( uVar4 & 0xfffb ) == 0)) ),0xfffffffd < local_44) goto switchD_00101157_caseD_2;
      uVar8 = local_44;
      uVar3 = uVar4;
      if (uVar7 != 0xfffffffe) {
         if (local_44 != uVar7) goto switchD_00101157_caseD_2;
         goto joined_r0x001011d5;
      }

      goto LAB_001011d7;
   }

   if (uVar2 < 0x1d) goto switchD_00101157_caseD_2;
   switch (uVar2 - 0x1d & 0xffff) {
      case 0:
      case 6:
      case 7:
      case 0xe:
    goto switchD_00101157_caseD_0;
      case 1:
      case 0x13:
      case 0x14:
      case 0x1b:
    goto switchD_00101157_caseD_1;
      default:
    goto switchD_00101157_caseD_2;
      case 0xc:
    break;
      case 0x19:
    puVar5 = puVar5 + 1;
switchD_00101157_caseD_1:
    if (param_3 == 0) goto switchD_00101157_caseD_2;
    uVar2 = puVar5[1];
    uVar4 = (uint)uVar2;
    if ((ushort)(uVar2 + 0x2800) < 0x800) goto switchD_00101157_caseD_2;
    if (uVar7 != 0xfffffffe) goto joined_r0x001011d5;
    uVar8 = 1;
    uVar3 = (uint)uVar2;
    goto LAB_001011d7;
   }

   puVar5 = puVar5 + 1;
   switchD_00101157_caseD_0:if (param_3 == 0) {
      switchD_00101157_caseD_2:uVar6 = 0;
      goto LAB_00101182;
   }

   if (uVar7 == 0xfffffffe) {
      uVar8 = 0;
      uVar3 = (uint)puVar5[1];
   }
 else {
      uVar4 = (uint)puVar5[1];
      joined_r0x001011d5:uVar8 = uVar7;
      uVar3 = uVar6;
      if (uVar6 != uVar4) goto switchD_00101157_caseD_2;
   }

   LAB_001011d7:uVar6 = uVar3;
   param_1 = param_1 + (ushort)param_1[1];
   sVar1 = *param_1;
   uVar7 = uVar8;
   if (sVar1 != 0x78) {
      *param_2 = uVar8;
      LAB_00101182:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar6;
   }

   goto LAB_001010fe;
}
uint *parsed_skip(uint *param_1, int param_2) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   int iVar5;
   bool bVar6;
   iVar5 = 0;
   uVar1 = *param_1;
   lVar4 = ( ulong )(ushort)(uVar1 >> 0x10) << 0x10;
   uVar2 = (uint)lVar4;
   bVar6 = uVar2 == 0x800d0000;
   if (bVar6) goto LAB_00101398;
   do {
      uVar3 = (uint)lVar4;
      if (uVar2 < 0x800d0000 || bVar6) {
         if (uVar3 == 0x80010000) {
            if (iVar5 == 0 && param_2 == 0) {
               return param_1;
            }

         }
 else if (uVar3 < 0x80010001) {
            if (uVar3 == 0x80000000) {
               return (uint*)0x0;
            }

            if ((int)uVar3 < 0) {
               LAB_00101413:if (( uVar1 & 0x7fc00000 ) != 0) {
                  return (uint*)0x0;
               }

               LAB_001013d3:param_1 = param_1 + ( byte )(&meta_extra_lengths)[uVar3 >> 0x10 & 0x7fff];
            }

         }
 else {
            if (uVar3 != 0x80030000) {
               if (( uVar3 == 0x80080000 ) || ( uVar3 == 0x80020000 )) goto LAB_001013d0;
               goto LAB_001013d3;
            }

            if (9 < (ushort)uVar1) {
               param_1 = param_1 + 2;
            }

         }

      }
 else if (uVar3 == 0x80190000) {
         if (iVar5 == 0) {
            return param_1;
         }

         iVar5 = iVar5 + -1;
      }
 else if (uVar3 < 0x80190001) {
         if (uVar3 != 0x80180000) {
            if (0x80180000 < uVar3) goto LAB_001013d3;
            if (uVar3 == 0x80120000) {
               LAB_001013d0:iVar5 = iVar5 + 1;
            }
 else if (uVar3 < 0x80120001) {
               if (( ( uVar1 & 0xfffe0000 ) == 0x80100000 ) || ( uVar3 == 0x800f0000 )) goto LAB_001013d0;
            }
 else if (( ( uVar1 & 0xfffe0000 ) == 0x80140000 ) || ( uVar3 == 0x80130000 )) goto LAB_001013d0;
            goto LAB_001013d3;
         }

         if ((ushort)uVar1 < 0x11) {
            if (0xe < ( uVar1 & 0xffff )) {
               param_1 = param_1 + 1;
            }

         }
 else if (( uVar1 & 0xffff ) - 0x1b < 2) {
            param_1 = param_1 + 3;
         }

      }
 else {
         if (uVar3 != 0x802d0000) {
            if (uVar3 < 0x802d0001) {
               if (uVar3 != 0x80260000) {
                  if (uVar3 < 0x80260001) {
                     if (uVar3 != 0x80230000) {
                        if (uVar3 < 0x80230001) {
                           if (( uVar3 + 0x7fe60000 & 0xfff70000 ) == 0) goto LAB_001013d0;
                        }
 else if (( uVar1 & 0xfffe0000 ) == 0x80240000) goto LAB_001013d0;
                        goto LAB_001013d3;
                     }

                  }
 else {
                     if (uVar3 == 0x80290000) goto LAB_0010133c;
                     if (( 0x80290000 < uVar3 ) || ( ( uVar3 + 0x7fd90000 & 0xfffe0000 ) != 0 )) goto LAB_001013d3;
                  }

               }

               goto LAB_001013d0;
            }

            if (( ( uVar1 & 0xfffd0000 ) != 0x80310000 ) && ( uVar3 != 0x802f0000 )) goto LAB_00101413;
         }

         LAB_0010133c:param_1 = param_1 + ( ulong )(byte)(&meta_extra_lengths)[uVar3 >> 0x10 & 0x7fff] + (ulong)param_1[1];
      }

      while (true) {
         uVar1 = param_1[1];
         param_1 = param_1 + 1;
         lVar4 = ( ulong )(ushort)(uVar1 >> 0x10) << 0x10;
         uVar2 = (uint)lVar4;
         bVar6 = uVar2 == 0x800d0000;
         if (!bVar6) break;
         LAB_00101398:if (param_2 == 1) {
            return param_1;
         }

      }
;
   }
 while ( true );
}
int get_branchlength(undefined8 *param_1, int *param_2, int *param_3, int *param_4, long *param_5, long param_6) {
   long lVar1;
   bool bVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   uint *puVar6;
   uint *puVar7;
   long *plVar8;
   uint uVar9;
   int iVar10;
   ulong uVar11;
   uint uVar12;
   uint *puVar13;
   int iVar14;
   int iVar15;
   undefined8 *puVar16;
   long in_FS_OFFSET;
   int local_6c;
   uint *local_68;
   uint *local_60;
   long *local_58;
   uint *local_50;
   long local_40;
   local_68 = (uint*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar15 = *param_4;
   *param_4 = iVar15 + 1;
   if (2000 < iVar15) {
      *param_3 = 0x87;
      LAB_001017f7:iVar10 = -1;
      LAB_001017fc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return iVar10;
   }

   uVar4 = *local_68;
   iVar15 = 0;
   uVar11 = 0;
   iVar14 = 0;
   iVar10 = 0;
   LAB_0010159d:if (-1 < (int)uVar4) goto LAB_00101570;
   uVar9 = uVar4 & 0xffff0000;
   if (uVar9 == 0x80160000) goto LAB_00101920;
   iVar3 = (int)uVar11;
   puVar6 = local_68;
   if (uVar9 < 0x80160001) {
      if (uVar9 != 0x80080000) {
         if (0x80080000 < uVar9) {
            if (uVar9 == 0x80100000) {
               local_68 = (uint*)parsed_skip(local_68 + 1);
               goto LAB_00101920;
            }

            if (0x80100000 < uVar9) {
               if (uVar9 != 0x80150000) {
                  if (0x80150000 < uVar9) goto LAB_001017f0;
                  if (uVar9 != 0x80130000) {
                     if (uVar9 < 0x80130001) {
                        if (( uVar9 + 0x7fef0000 & 0xfffe0000 ) == 0) goto LAB_00101a20;
                     }
 else if (uVar9 == 0x80140000) goto LAB_00101a20;
                     goto LAB_001017f0;
                  }

               }

               LAB_00101a20:local_68 = local_68 + 4;
               uVar4 = 0;
               goto LAB_00101a27;
            }

            if (uVar9 != 0x800e0000) {
               if (uVar9 < 0x800e0001) {
                  if (uVar9 == 0x800a0000) goto LAB_00101e00;
                  if (uVar9 == 0x800c0000) goto LAB_00101570;
                  if (uVar9 == 0x80090000) goto LAB_00101920;
               }
 else if (uVar9 == 0x800f0000) {
                  local_68 = local_68 + 1;
                  uVar4 = 0;
                  goto LAB_00101a27;
               }

               goto LAB_001017f0;
            }

            LAB_00101e00:local_68 = (uint*)parsed_skip(local_68, 1);
            if (local_68 != (uint*)0x0) {
               LAB_00101570:iVar10 = iVar10 + 1;
               iVar15 = 1;
               uVar11 = 1;
               goto LAB_0010157d;
            }

            LAB_0010197a:*param_3 = 0xbe;
            goto LAB_001017f7;
         }

         if (uVar9 == 0x80050000) {
            LAB_00101c78:local_68 = local_68 + 1;
            goto LAB_00101570;
         }

         if (uVar9 < 0x80050001) {
            if (uVar9 == 0x80030000) {
               if (( ( *(byte*)( param_6 + 0xc5 ) & 2 ) == 0 ) && ( ( *(byte*)( param_6 + 0xca ) & 0x20 ) == 0 )) {
                  if ((ushort)uVar4 < 10) {
                     lVar5 = *(long*)( param_6 + 0x58 + ( ulong )(uVar4 & 0xffff) * 8 );
                  }
 else {
                     LAB_001017ba:puVar6 = local_68 + 1;
                     puVar13 = local_68 + 2;
                     local_68 = local_68 + 2;
                     lVar5 = CONCAT44(*puVar6, *puVar13);
                  }

                  uVar4 = uVar4 & 0xffff;
                  if (*(uint*)( param_6 + 0xcc ) < uVar4) {
                     LAB_00101f37:*(long*)( param_6 + 0xa8 ) = lVar5;
                     *param_3 = 0x73;
                     goto LAB_001017f7;
                  }

                  if (uVar4 != 0) {
                     LAB_00101714:local_60 = *(uint**)( param_6 + 0xd8 );
                     uVar9 = *local_60;
                     puVar6 = local_60;
                     if (uVar9 != 0x80000000) {
                        bVar2 = false;
                        do {
                           if (uVar9 >> 0x10 == 0x8005) {
                              puVar6 = puVar6 + 1;
                           }
 else if (uVar9 == ( uVar4 | 0x80080000 )) {
                              if (!bVar2) goto LAB_00101a91;
                              break;
                           }

                           puVar13 = puVar6 + 1;
                           uVar9 = puVar6[1];
                           bVar2 = true;
                           puVar6 = puVar13;
                        }
 while ( uVar9 != 0x80000000 );
                        local_60 = puVar6;
                     }

                     LAB_00101a91:puVar13 = puVar6 + 1;
                     puVar7 = (uint*)parsed_skip(puVar13, 2);
                     if (puVar7 == (uint*)0x0) goto LAB_0010197a;
                     if (( local_68 <= puVar6 ) || ( puVar7 <= local_68 )) {
                        plVar8 = param_5;
                        if (param_5 != (long*)0x0) {
                           do {
                              if ((uint*)plVar8[1] == puVar6) goto LAB_001017f0;
                              plVar8 = (long*)*plVar8;
                           }
 while ( plVar8 != (long*)0x0 );
                        }

                        local_60 = puVar13;
                        local_58 = param_5;
                        local_50 = puVar6;
                        uVar4 = get_grouplength(&local_60, &local_6c, 0, param_3, param_4);
                        if (-1 < (int)uVar4) goto LAB_00101a54;
                        if (*param_3 != 0) goto LAB_001017f7;
                     }

                  }

               }

            }
 else {
               if (uVar9 < 0x80030001) {
                  if (uVar9 != 0x80010000) {
                     if (uVar9 == 0x80020000) goto LAB_00101ca8;
                     goto LAB_001017f0;
                  }

                  LAB_001019b7:*param_1 = puVar6;
                  *param_2 = iVar14;
                  goto LAB_001017fc;
               }

               if (( uVar9 == 0x80040000 ) && ( ( *(byte*)( param_6 + 0xc5 ) & 2 ) == 0 )) goto LAB_00101608;
            }

         }
 else {
            if (uVar9 == 0x80060000) goto LAB_00101c20;
            if (uVar9 == 0x80070000) {
               uVar4 = local_68[6];
               iVar15 = 0;
               local_68 = local_68 + 5;
               uVar11 = 0;
               goto LAB_00101591;
            }

         }

         goto LAB_001017f0;
      }

      uVar4 = uVar4 & 0xffff;
      LAB_00101cab:local_68 = local_68 + 1;
      LAB_00101a27:uVar4 = get_grouplength(&local_68, &local_6c, 1, param_3, param_4, uVar4, param_5, param_6);
      if ((int)uVar4 < 0) goto LAB_001017f7;
      LAB_00101a54:uVar11 = (ulong)uVar4;
      uVar12 = 0x7fffffff - iVar10;
      iVar15 = local_6c;
   }
 else {
      if (uVar9 == 0x80240000) {
         LAB_00101ccc:iVar15 = check_lookbehinds(local_68 + 1, &local_68, param_5, param_6, param_4);
         *param_3 = iVar15;
         if (iVar15 != 0) goto LAB_001017f7;
         uVar4 = local_68[1];
         if (uVar4 != 0x803d0000) {
            if (uVar4 < 0x803d0001) {
               if (uVar4 != 0x80380000) {
                  if (uVar4 < 0x80380001) {
                     if (uVar4 != 0x80360000) {
                        if (uVar4 < 0x80360001) {
                           if (( uVar4 & 0xfffeffff ) == 0x80340000) goto LAB_00101d35;
                        }
 else if (uVar4 == 0x80370000) goto LAB_00101d35;
                        LAB_00101923:iVar15 = 0;
                        uVar11 = 0;
                        goto LAB_00101591;
                     }

                  }
 else if (uVar4 != 0x803b0000) {
                     if (uVar4 < 0x803b0001) {
                        if (( uVar4 + 0x7fc70000 & 0xfffeffff ) == 0) goto LAB_00101d35;
                     }
 else if (uVar4 == 0x803c0000) goto LAB_00101d35;
                     goto LAB_00101923;
                  }

               }

               LAB_00101d35:uVar4 = local_68[2];
               iVar15 = 0;
               local_68 = local_68 + 1;
               uVar11 = 0;
               goto LAB_00101591;
            }

            if (( uVar4 & 0xfffeffff ) != 0x803e0000) goto LAB_00101923;
         }

         LAB_00101c20:uVar4 = local_68[4];
         iVar15 = 0;
         local_68 = local_68 + 3;
         uVar11 = 0;
         goto LAB_00101591;
      }

      if (uVar9 < 0x80240001) {
         if (uVar9 == 0x801b0000) {
            uVar4 = local_68[3];
            iVar15 = 0;
            local_68 = local_68 + 2;
            uVar11 = 0;
            goto LAB_00101591;
         }

         if (uVar9 < 0x801b0001) {
            if (uVar9 == 0x80180000) {
               uVar9 = uVar4 & 0xffff;
               if ((ushort)uVar4 == 0x16) goto LAB_001017f7;
               if (uVar9 != 0x11) {
                  if (0x10 < uVar9 - 6) goto LAB_00101920;
                  if (( ( *(byte*)( param_6 + 0xc6 ) & 8 ) == 0 ) || ( uVar9 != 0xe )) {
                     if (uVar9 - 0xf < 2) goto LAB_00101c78;
                     goto LAB_00101570;
                  }

                  *param_3 = 0x88;
                  goto LAB_001017f7;
               }

               iVar10 = iVar10 + 2;
               iVar15 = 1;
               uVar11 = 2;
               LAB_0010157d:if (iVar10 < 0x10000) goto LAB_00101589;
               goto LAB_00101a78;
            }

            if (uVar9 < 0x80180001) {
               if (uVar9 == 0x80170000) goto LAB_00101570;
            }
 else {
               if (uVar9 == 0x80190000) goto LAB_001019b7;
               if (uVar9 == 0x801a0000) goto LAB_00101ca8;
            }

         }
 else {
            if (uVar9 == 0x80210000) {
               LAB_00101608:puVar6 = local_68 + 3;
               uVar4 = local_68[1];
               puVar16 = *(undefined8**)( param_6 + 0xb8 );
               lVar5 = CONCAT44(local_68[2], local_68[3]);
               lVar1 = *(long*)( param_6 + 0x38 );
               local_68 = puVar6;
               if (*(short*)( param_6 + 0xb0 ) != 0) {
                  iVar15 = 0;
                  while (( *(ushort*)( (long)puVar16 + 0xc ) != uVar4 || ( iVar3 = _pcre2_strncmp_16(lVar1 + lVar5 * 2, *puVar16, uVar4) ),iVar3 != 0 )) {
                     iVar15 = iVar15 + 1;
                     puVar16 = puVar16 + 2;
                     if ((int)( uint ) * (ushort*)( param_6 + 0xb0 ) <= iVar15) goto LAB_00101b40;
                  }
;
                  uVar4 = *(uint*)( puVar16 + 1 );
                  if (uVar4 != 0) {
                     if (( uVar9 == 0x80210000 ) || ( ( *(short*)( (long)puVar16 + 0xe ) == 0 && ( ( *(byte*)( param_6 + 0xca ) & 0x20 ) == 0 ) ) )) {
                        if (uVar4 <= *(uint*)( param_6 + 0xcc )) goto LAB_00101714;
                        goto LAB_00101f37;
                     }

                     goto LAB_001017f0;
                  }

               }

               LAB_00101b40:*param_3 = 0x73;
               *(long*)( param_6 + 0xa8 ) = lVar5;
               goto LAB_001017f7;
            }

            if (uVar9 < 0x80210001) {
               if (uVar9 == 0x80200000) goto LAB_001017ba;
            }
 else {
               if (uVar9 == 0x80220000) {
                  LAB_00101ca8:uVar4 = 0;
                  goto LAB_00101cab;
               }

               if (uVar9 == 0x80230000) goto LAB_00101ccc;
            }

         }

         LAB_001017f0:*param_3 = 0x7d;
         goto LAB_001017f7;
      }

      if (uVar9 == 0x802e0000) goto LAB_00101920;
      if (uVar9 < 0x802e0001) {
         if (uVar9 == 0x80290000) goto LAB_00101bd8;
         if (0x80290000 < uVar9) {
            if (uVar9 != 0x802b0000) {
               if (uVar9 < 0x802b0001) {
                  if (uVar9 == 0x802a0000) goto LAB_0010196b;
               }
 else {
                  if (uVar9 == 0x802c0000) goto LAB_00101920;
                  if (uVar9 == 0x802d0000) goto LAB_00101bd8;
               }

               goto LAB_001017f0;
            }

            LAB_0010196b:puVar6 = (uint*)parsed_skip(local_68, 0);
            if (puVar6 != (uint*)0x0) goto LAB_001019b7;
            goto LAB_0010197a;
         }

         if (uVar9 == 0x80270000) goto LAB_00101ccc;
         if (uVar9 < 0x80270001) {
            if (( uVar9 + 0x7fdb0000 & 0xfffe0000 ) != 0) goto LAB_001017f0;
            LAB_00101b7c:iVar15 = set_lookbehind_lengths(&local_68, param_3, param_4, param_5, param_6);
            if (iVar15 != 0) goto LAB_00101920;
            goto LAB_001017f7;
         }

         if (uVar9 == 0x80280000) goto LAB_00101b7c;
         goto LAB_001017f0;
      }

      if (uVar9 == 0x803b0000) {
         LAB_00101d5d:iVar14 = iVar14 - iVar15;
         iVar15 = 0;
         if (iVar3 != 0) {
            uVar11 = 0;
         }

         goto LAB_00101589;
      }

      if (uVar9 < 0x803b0001) {
         if (uVar9 == 0x80320000) {
            LAB_00101920:uVar4 = local_68[1];
            goto LAB_00101923;
         }

         if (uVar9 < 0x80320001) {
            if (uVar9 == 0x80300000) goto LAB_00101920;
            if (( uVar9 + 0x7fd10000 & 0xfffd0000 ) == 0) goto LAB_00101bd8;
         }
 else {
            if (uVar9 == 0x80330000) {
               LAB_00101bd8:iVar15 = 0;
               uVar11 = 0;
               local_68 = local_68 + ( local_68[1] + 1 );
               uVar4 = local_68[1];
               goto LAB_00101591;
            }

            if (uVar9 == 0x803a0000) goto LAB_00101d5d;
         }

         goto LAB_001017f0;
      }

      if (uVar9 != 0x803e0000) {
         if (uVar9 < 0x803e0001) {
            if (uVar9 == 0x803c0000) goto LAB_00101d5d;
            if (uVar9 == 0x803d0000) goto LAB_0010186e;
         }
 else if (uVar9 == 0x803f0000) goto LAB_0010186e;
         goto LAB_001017f0;
      }

      LAB_0010186e:uVar4 = local_68[2];
      uVar9 = local_68[1];
      local_68 = local_68 + 2;
      if (uVar4 == 0x10000) goto LAB_001017f0;
      if (( iVar3 != 0 ) && ( uVar4 != 0 )) {
         uVar12 = 0x7fffffff - iVar10;
         if (uVar4 - 1 <= ( uint )(uVar12 / uVar11)) {
            uVar4 = iVar3 * ( uVar4 - 1 );
            uVar11 = (ulong)uVar4;
            if (uVar9 == 0) {
               iVar14 = iVar14 - iVar15;
               iVar15 = 0;
            }
 else {
               iVar15 = iVar15 * ( uVar9 - 1 );
            }

            goto LAB_00101a61;
         }

         LAB_00101a78:*param_3 = 0xbb;
         goto LAB_001017f7;
      }

      if (uVar9 == 0) {
         iVar14 = iVar14 - iVar15;
         iVar15 = 0;
      }
 else {
         iVar15 = iVar15 * ( uVar9 - 1 );
      }

      if (uVar4 == 0) {
         iVar10 = iVar10 - iVar3;
         uVar11 = 0;
         goto LAB_0010157d;
      }

      uVar4 = iVar3 * ( uVar4 - 1 );
      uVar11 = (ulong)uVar4;
      uVar12 = 0x7fffffff - iVar10;
   }

   LAB_00101a61:if (( (int)uVar12 < (int)uVar4 ) || ( iVar10 = 0xffff < iVar10 )) goto LAB_00101a78;
   LAB_00101589:uVar4 = local_68[1];
   LAB_00101591:local_68 = local_68 + 1;
   iVar14 = iVar14 + iVar15;
   goto LAB_0010159d;
}
undefined8 set_lookbehind_lengths(undefined8 *param_1, int *param_2, undefined8 param_3, undefined8 param_4, long param_5) {
   uint uVar1;
   uint uVar2;
   uint *puVar3;
   bool bVar4;
   uint uVar5;
   uint *puVar6;
   undefined8 uVar7;
   uint *puVar8;
   uint uVar9;
   uint uVar10;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   uVar10 = 0;
   uVar9 = 0x7fffffff;
   bVar4 = false;
   puVar3 = (uint*)*param_1;
   uVar1 = puVar3[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = puVar3[1];
   puVar6 = puVar3 + 2;
   puVar8 = puVar3;
   do {
      *param_1 = puVar6 + 1;
      uVar5 = get_branchlength(param_1, &local_44, param_2, param_3, param_4, param_5);
      if ((int)uVar5 < 0) {
         if (*param_2 == 0) {
            *param_2 = 0x7d;
         }

         if (*(long*)( param_5 + 0xa8 ) == -1) goto LAB_001020bc;
         uVar7 = 0;
         goto LAB_001020dd;
      }

      if (local_44 != uVar5) {
         bVar4 = true;
      }

      if ((int)local_44 < (int)uVar9) {
         uVar9 = local_44;
      }

      if ((int)uVar10 < (int)uVar5) {
         uVar10 = uVar5;
      }

      if (*(int*)( param_5 + 0x118 ) < (int)uVar5) {
         *(uint*)( param_5 + 0x118 ) = uVar5;
      }

      *puVar8 = *puVar8 | uVar5;
      puVar6 = (uint*)*param_1;
      puVar8 = puVar6;
   }
 while ( *puVar6 == 0x80010000 );
   if (bVar4) {
      puVar3[1] = uVar9;
      if (*(uint*)( param_5 + 0x114 ) < uVar10) {
         *param_2 = 200;
         LAB_001020bc:*(ulong*)( param_5 + 0xa8 ) = CONCAT44(uVar2, uVar1);
         uVar7 = 0;
         goto LAB_001020dd;
      }

   }
 else {
      uVar9 = 0xffff;
   }

   puVar3[1] = uVar9;
   uVar7 = 1;
   LAB_001020dd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
undefined4 check_lookbehinds(uint *param_1, undefined8 *param_2, undefined8 param_3, long param_4, undefined8 param_5) {
   undefined4 uVar1;
   int iVar2;
   uint *puVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   long in_FS_OFFSET;
   uint *local_40;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   uVar5 = *param_1;
   *(undefined8*)( param_4 + 0xa8 ) = 0xffffffffffffffff;
   local_40 = param_1;
   if (uVar5 == 0x80000000) {
      LAB_001024e8:uVar1 = 0;
      LAB_00102245:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   iVar6 = 0;
   LAB_001021c4:if ((int)uVar5 < 0) {
      uVar4 = uVar5 & 0xffff0000;
      if (uVar4 == 0x80180000) {
         puVar3 = local_40 + 1;
         if (uVar5 + 0x7fe7fff1 < 2) goto LAB_001021ad;
         goto LAB_001021a8;
      }

      if (0x80180000 < uVar4) {
         if (uVar4 == 0x80220000) goto LAB_001023f8;
         if (0x80220000 < uVar4) {
            if (uVar4 == 0x802d0000) {
               LAB_001023a8:puVar3 = local_40 + ( local_40[1] + 1 );
               goto LAB_001021ad;
            }

            if (0x802d0000 < uVar4) {
               if (uVar4 == 0x80390000) goto LAB_001021a8;
               if (uVar4 < 0x80390001) {
                  if (uVar4 != 0x80310000) {
                     if (uVar4 < 0x80310001) {
                        if (uVar4 != 0x802f0000) {
                           uVar5 = uVar4 + 0x7fd20000 & 0xfffd0000;
                           joined_r0x00102598:if (uVar5 == 0) goto LAB_001021a8;
                           goto LAB_00102240;
                        }

                     }
 else if (uVar4 != 0x80330000) {
                        if (uVar4 < 0x80330001) {
                           if (uVar4 != 0x80320000) goto LAB_00102240;
                        }
 else if (uVar4 != 0x80360000) {
                           if (0x80360000 < uVar4) {
                              uVar5 = uVar4 + 0x7fc90000 & 0xfffe0000;
                              goto joined_r0x00102598;
                           }

                           if (( uVar5 & 0xfffe0000 ) != 0x80340000) goto LAB_00102240;
                        }

                        goto LAB_001021a8;
                     }

                  }

                  goto LAB_001023a8;
               }

               if (uVar4 == 0x803e0000) {
                  LAB_00102472:puVar3 = local_40 + 2;
                  goto LAB_001021ad;
               }

               if (uVar4 < 0x803e0001) {
                  if (uVar4 == 0x803d0000) goto LAB_00102472;
                  if (( uVar4 < 0x803d0001 ) && ( ( ( uVar5 & 0xfffe0000 ) == 0x803a0000 || ( uVar4 == 0x803c0000 ) ) )) goto LAB_001021a8;
               }
 else if (uVar4 == 0x803f0000) {
                  puVar3 = local_40 + 2;
                  goto LAB_001021ad;
               }

               goto LAB_00102240;
            }

            if (uVar4 != 0x80260000) {
               if (uVar4 < 0x80260001) {
                  if (uVar4 == 0x80250000) goto LAB_0010242c;
                  if (( uVar4 < 0x80250001 ) && ( ( uVar4 + 0x7fdd0000 & 0xfffe0000 ) == 0 )) {
                     LAB_001023f8:iVar6 = iVar6 + 1;
                     puVar3 = local_40;
                     goto LAB_001021ad;
                  }

               }
 else {
                  if (uVar4 == 0x80280000) goto LAB_0010242c;
                  if (uVar4 < 0x80280001) {
                     if (uVar4 == 0x80270000) goto LAB_001023f8;
                  }
 else {
                     if (uVar4 == 0x80290000) goto LAB_001023a8;
                     if (( 0x8028ffff < uVar4 ) && ( ( ( uVar5 & 0xfffe0000 ) == 0x802a0000 || ( uVar4 == 0x802c0000 ) ) )) goto LAB_001021a8;
                  }

               }

               goto LAB_00102240;
            }

            LAB_0010242c:iVar2 = set_lookbehind_lengths(&local_40, &local_34, param_5, param_3, param_4);
            uVar1 = local_34;
            if (iVar2 != 0) goto LAB_001021a8;
            goto LAB_00102245;
         }

         if (uVar4 == 0x801d0000) {
            LAB_001023de:puVar3 = local_40 + 1;
            goto LAB_001021ad;
         }

         if (uVar4 < 0x801d0001) {
            if (uVar4 != 0x80190000) {
               if (0x8018ffff < uVar4) {
                  if (uVar4 == 0x801b0000) goto LAB_00102472;
                  if (uVar4 == 0x801c0000) goto LAB_001023de;
                  if (uVar4 == 0x801a0000) goto LAB_001023f8;
               }

               goto LAB_00102240;
            }

            iVar6 = iVar6 + -1;
            if (-1 < iVar6) goto LAB_001021a8;
            if (param_2 != (undefined8*)0x0) {
               *param_2 = local_40;
            }

            goto LAB_001024e8;
         }

         puVar3 = local_40 + 2;
         if (uVar4 == 0x80200000) goto LAB_001021ad;
         if (uVar4 < 0x80200001) {
            if (( uVar5 & 0xfffe0000 ) == 0x801e0000) goto LAB_001021a8;
         }
 else if (uVar4 == 0x80210000) goto LAB_0010232a;
         LAB_00102240:uVar1 = 0xaa;
         goto LAB_00102245;
      }

      if (uVar4 == 0x800c0000) goto LAB_001021a8;
      if (uVar4 < 0x800c0001) {
         if (uVar4 != 0x80060000) {
            if (uVar4 < 0x80060001) {
               if (uVar4 == 0x80040000) goto LAB_0010232a;
               if (uVar4 < 0x80040001) {
                  if (uVar4 == 0x80020000) goto LAB_001023f8;
                  if (( uVar5 & 0xfffd0000 ) == 0x80010000) goto LAB_001021a8;
               }
 else if (uVar4 == 0x80050000) goto LAB_001023de;
            }
 else {
               puVar3 = local_40 + 5;
               if (uVar4 == 0x80070000) goto LAB_001021ad;
               if (0x8006ffff < uVar4) {
                  if (uVar4 == 0x80080000) goto LAB_001023f8;
                  if (( 0x8007ffff < uVar4 ) && ( ( uVar4 == 0x800a0000 || ( ( uVar5 & 0xfffd0000 ) == 0x80090000 ) ) )) goto LAB_001021a8;
               }

            }

            goto LAB_00102240;
         }

         LAB_0010232a:puVar3 = local_40 + 3;
      }
 else {
         if (uVar4 != 0x80120000) {
            if (uVar4 < 0x80120001) {
               if (uVar4 != 0x80100000) {
                  if (uVar4 < 0x80100001) {
                     if (uVar4 == 0x800f0000) goto LAB_001023f8;
                     if (uVar4 < 0x800f0001) {
                        uVar5 = uVar4 + 0x7ff30000 & 0xfffe0000;
                        goto joined_r0x00102598;
                     }

                  }
 else if (uVar4 == 0x80110000) {
                     puVar3 = local_40 + 3;
                     iVar6 = iVar6 + 1;
                     goto LAB_001021ad;
                  }

                  goto LAB_00102240;
               }

               puVar3 = local_40 + 2;
               iVar6 = iVar6 + 1;
               goto LAB_001021ad;
            }

            if (uVar4 != 0x80150000) {
               if (uVar4 < 0x80150001) {
                  if (( uVar4 + 0x7fed0000 & 0xfffe0000 ) == 0) {
                     puVar3 = local_40 + 3;
                     iVar6 = iVar6 + 1;
                     goto LAB_001021ad;
                  }

               }
 else if (( uVar5 & 0xfffe0000 ) == 0x80160000) goto LAB_001021a8;
               goto LAB_00102240;
            }

         }

         puVar3 = local_40 + 3;
         iVar6 = iVar6 + 1;
      }

   }
 else {
      LAB_001021a8:puVar3 = local_40;
   }

   LAB_001021ad:uVar5 = puVar3[1];
   local_40 = puVar3 + 1;
   if (uVar5 == 0x80000000) goto LAB_001024e8;
   goto LAB_001021c4;
}
ulong get_grouplength(undefined8 *param_1, uint *param_2, int param_3, undefined8 param_4, undefined8 param_5, int param_6, undefined8 param_7, long param_8) {
   uint *puVar1;
   uint uVar2;
   undefined8 uVar3;
   uint uVar4;
   ulong uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (uint*)( *(long*)( param_8 + 0xe8 ) + (long)( param_6 * 2 ) * 4 );
   if (( param_6 < 1 ) || ( ( *(byte*)( param_8 + 0xca ) & 0x20 ) != 0 )) {
      LAB_001026aa:uVar6 = 0x7fffffff;
      uVar4 = 0xffffffff;
      while (uVar2 = get_branchlength(param_1, &local_44, param_4, param_5, param_7, param_8),-1 < (int)uVar2) {
         if ((int)uVar4 < (int)uVar2) {
            uVar4 = uVar2;
         }

         if ((int)local_44 < (int)uVar6) {
            uVar6 = local_44;
         }

         if (*(int*)*param_1 == -0x7fe70000) {
            uVar5 = (ulong)uVar4;
            if (0 < param_6) {
               puVar1[1] = uVar6;
               *puVar1 = *puVar1 | uVar4 | 0x80000000;
            }

            *param_2 = uVar6;
            goto LAB_00102739;
         }

         *param_1 = (int*)*param_1 + 1;
      }
;
      if (0 < param_6) {
         *puVar1 = *puVar1 | 0x40000000;
      }

   }
 else {
      uVar4 = *puVar1;
      uVar5 = (ulong)uVar4;
      if (( uVar4 & 0x40000000 ) == 0) {
         if ((int)uVar4 < 0) {
            if (param_3 != 0) {
               uVar3 = parsed_skip(*param_1, 2);
               *param_1 = uVar3;
            }

            uVar5 = uVar5 & 0xffff;
            *param_2 = puVar1[1];
            goto LAB_00102739;
         }

         goto LAB_001026aa;
      }

   }

   uVar5 = 0xffffffff;
   LAB_00102739:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
uint add_to_class_internal(long param_1, undefined8 *param_2, uint param_3, uint param_4, long param_5, uint param_6, uint param_7) {
   byte *pbVar1;
   uint *puVar2;
   byte bVar3;
   undefined2 *puVar4;
   bool bVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   ulong uVar12;
   uint *puVar13;
   uint uVar14;
   undefined2 *puVar15;
   ulong uVar16;
   uint uVar17;
   uint uVar18;
   bool bVar19;
   uint local_6c;
   uint local_60;
   uint local_48;
   local_48 = 0xff;
   if (param_7 < 0x100) {
      local_48 = param_7;
   }

   local_6c = param_3 & 8;
   local_60 = param_3;
   if (( param_3 & 8 ) == 0) {
      LAB_001029c5:bVar5 = true;
      if (( local_60 & 0x80000 ) != 0) goto LAB_001029d8;
   }
 else {
      local_6c = param_3 & 0xa0000;
      if (( param_3 & 0xa0000 ) != 0) {
         local_60 = param_3 & 0xfffffff7;
         local_6c = 0;
         uVar8 = param_6;
         uVar11 = param_6;
         LAB_00102867:param_6 = uVar11;
         uVar17 = uVar8;
         if (uVar8 <= param_7) {
            while (true) {
               uVar8 = uVar17 + 0x7f;
               if (-1 < (int)uVar17) {
                  uVar8 = uVar17;
               }

               bVar3 = ( &DAT_0011001b )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar8 >> 7 ) * 2 ) * 0x80 + (int)uVar17 % 0x80 ) * 2 ) * 0xc];
               uVar11 = param_6;
               if (( bVar3 != 0 ) && ( ( ( param_4 & 0x80 ) == 0 || ( 0x7f < *(uint*)( &_pcre2_ucd_caseless_sets_16 + (ulong)bVar3 * 4 ) ) ) )) {
                  puVar13 = (uint*)( &_pcre2_ucd_caseless_sets_16 + (ulong)bVar3 * 4 );
                  uVar8 = uVar17 + 1;
                  uVar18 = *puVar13;
                  if (uVar18 != 0xffffffff) {
                     iVar9 = 0;
                     do {
                        if (uVar18 == uVar17) {
                           uVar18 = puVar13[1];
                           puVar13 = puVar13 + 1;
                        }
 else {
                           uVar16 = 0;
                           do {
                              uVar12 = uVar16;
                              uVar14 = (int)uVar12 + 1;
                              puVar2 = puVar13 + uVar14;
                              uVar16 = (ulong)uVar14;
                           }
 while ( *puVar2 == uVar14 + uVar18 );
                           iVar10 = add_to_class_internal(param_1, param_2, local_60, param_4, param_5, uVar18, puVar13[uVar12]);
                           uVar18 = *puVar2;
                           iVar9 = iVar9 + iVar10;
                           puVar13 = puVar2;
                        }

                     }
 while ( uVar18 != 0xffffffff );
                     local_6c = local_6c + iVar9;
                  }

                  goto LAB_00102867;
               }

               uVar18 = *(int*)( &DAT_0011001c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar8 >> 7 ) * 2 ) * 0x80 + (int)uVar17 % 0x80 ) * 2 ) * 0xc ) + uVar17;
               if (uVar18 != uVar17) break;
               uVar17 = uVar17 + 1;
               if (param_7 < uVar17) goto LAB_001029c5;
            }
;
            uVar14 = uVar18;
            if (param_7 < uVar17) goto LAB_001029c5;
            while (uVar6 = uVar14,uVar8 = uVar17 + 1,uVar8 <= param_7) {
               uVar7 = uVar17 + 0x80;
               if (-1 < (int)uVar8) {
                  uVar7 = uVar8;
               }

               if (( ( &DAT_0011001b )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar7 >> 7 ) * 2 ) * 0x80 + (int)uVar8 % 0x80 ) * 2 ) * 0xc] != '\0' ) || ( uVar14 = uVar6 + 1 ),uVar17 = uVar8,*(int*)( &DAT_0011001c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar7 >> 7 ) * 2 ) * 0x80 + (int)uVar8 % 0x80 ) * 2 ) * 0xc ) + uVar8 != uVar6 + 1) break;
            }
;
            if (( ( uVar18 < *(uint*)( param_5 + 0x100 ) ) || ( *(uint*)( param_5 + 0x104 ) < uVar6 ) ) && ( ( param_6 <= uVar18 || ( uVar11 = uVar18 ),uVar6 < param_6 - 1 ) )) {
               if (( param_7 < uVar6 ) && ( uVar18 <= param_7 + 1 )) {
                  uVar17 = 0xff;
                  if (uVar6 < 0x100) {
                     uVar17 = uVar6;
                  }

                  param_7 = uVar6;
                  uVar11 = param_6;
                  if (local_48 < uVar6) {
                     local_48 = uVar17;
                  }

               }
 else {
                  iVar9 = add_to_class_internal(param_1, param_2, local_60, param_4, param_5, uVar18, uVar6);
                  local_6c = local_6c + iVar9;
                  uVar11 = param_6;
               }

            }

            goto LAB_00102867;
         }

         goto LAB_001029c5;
      }

      uVar16 = (ulong)param_6;
      if (param_6 <= local_48) {
         do {
            bVar3 = *(byte*)( *(long*)( param_5 + 0x10 ) + uVar16 );
            uVar16 = uVar16 + 1;
            pbVar1 = (byte*)( param_1 + ( ulong )(bVar3 >> 3) );
            *pbVar1 = *pbVar1 | ( byte )(1 << ( bVar3 & 7 ));
         }
 while ( (uint)uVar16 <= local_48 );
         local_6c = ( 1 - param_6 ) + local_48;
      }

   }

   if (0xffff < param_7) {
      param_7 = 0xffff;
   }

   bVar5 = false;
   LAB_001029d8:if (( param_6 <= *(uint*)( param_5 + 0x100 ) ) || ( *(uint*)( param_5 + 0x104 ) <= param_7 )) {
      uVar8 = param_6;
      if (param_6 <= local_48) {
         do {
            pbVar1 = (byte*)( param_1 + ( ulong )(uVar8 >> 3) );
            *pbVar1 = *pbVar1 | ( byte )(1 << ( (byte)uVar8 & 7 ));
            bVar19 = local_48 != uVar8;
            uVar8 = uVar8 + 1;
         }
 while ( bVar19 );
         local_6c = ( local_48 + 1 + local_6c ) - param_6;
      }

      uVar8 = 0x100;
      if (0xff < param_6) {
         uVar8 = param_6;
      }

      if (uVar8 <= param_7) {
         puVar4 = (undefined2*)*param_2;
         if (bVar5) {
            puVar15 = puVar4 + 1;
            if (uVar8 < param_7) {
               *puVar4 = 2;
               uVar8 = _pcre2_ord2utf_16(uVar8, puVar15);
               uVar11 = _pcre2_ord2utf_16(param_7, puVar15 + uVar8);
               puVar15 = puVar15 + uVar8 + uVar11;
            }
 else {
               *puVar4 = 1;
               uVar8 = _pcre2_ord2utf_16(uVar8, puVar15);
               puVar15 = puVar15 + uVar8;
            }

         }
 else if (uVar8 < param_7) {
            puVar4[1] = (short)uVar8;
            puVar15 = puVar4 + 3;
            *puVar4 = 2;
            puVar4[2] = (short)param_7;
         }
 else {
            puVar4[1] = (short)uVar8;
            *puVar4 = 1;
            puVar15 = puVar4 + 2;
         }

         *param_2 = puVar15;
      }

   }

   return local_6c;
}
undefined8 find_dupname_details_constprop_0(long param_1, uint param_2, uint *param_3, int *param_4, undefined4 *param_5, long param_6) {
   ushort uVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   uint uVar7;
   ushort *puVar8;
   puVar8 = *(ushort**)( param_6 + 0x48 );
   if (*(short*)( param_6 + 0xb0 ) != 0) {
      uVar6 = (ulong)param_2;
      uVar7 = 0;
      do {
         iVar2 = _pcre2_strncmp_16(param_1, puVar8 + 1, uVar6);
         if (( iVar2 == 0 ) && ( puVar8[param_2 + 1] == 0 )) {
            uVar1 = *(ushort*)( param_6 + 0xb0 );
            if (uVar7 < uVar1) {
               *param_3 = uVar7;
               iVar2 = 0;
               goto LAB_00102d83;
            }

            break;
         }

         uVar7 = uVar7 + 1;
         puVar8 = puVar8 + *(ushort*)( param_6 + 0xb2 );
      }
 while ( uVar7 < *(ushort*)( param_6 + 0xb0 ) );
   }

   *param_5 = 0x99;
   *(long*)( param_6 + 0xa8 ) = param_1 - *(long*)( param_6 + 0x38 ) >> 1;
   return 0;
   LAB_00102d83:iVar2 = iVar2 + 1;
   uVar4 = 1 << ( ( byte ) * puVar8 & 0x1f );
   uVar5 = ( uint ) * puVar8;
   if (0x1f < uVar5) {
      uVar4 = 1;
   }

   *(uint*)( param_6 + 0xf4 ) = *(uint*)( param_6 + 0xf4 ) | uVar4;
   if (*(uint*)( param_6 + 0xf0 ) < uVar5) {
      *(uint*)( param_6 + 0xf0 ) = uVar5;
   }

   if ((uint)uVar1 <= iVar2 + uVar7) {
      LAB_00102db3:*param_4 = iVar2;
      return 1;
   }

   puVar8 = puVar8 + *(ushort*)( param_6 + 0xb2 );
   iVar3 = _pcre2_strncmp_16(param_1, puVar8 + 1, uVar6);
   if (( iVar3 != 0 ) || ( puVar8[uVar6 + 1] != 0 )) goto LAB_00102db3;
   uVar1 = *(ushort*)( param_6 + 0xb0 );
   goto LAB_00102d83;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 get_ucp_constprop_0_isra_0(ulong *param_1, undefined4 *param_2, short *param_3, undefined2 *param_4, undefined4 *param_5, long param_6, ushort *param_7) {
   long lVar1;
   short sVar2;
   ushort *puVar3;
   short sVar4;
   ushort uVar5;
   int iVar6;
   __int32_t **pp_Var7;
   ushort **ppuVar8;
   undefined8 uVar9;
   ushort uVar10;
   ulong uVar11;
   ushort *puVar12;
   ulong uVar13;
   ulong uVar14;
   long in_FS_OFFSET;
   long local_d8;
   ushort *local_d0;
   ushort *local_c8;
   undefined8 local_b8[2];
   ushort local_a8[4];
   undefined1 local_a0[96];
   long local_40;
   puVar3 = (ushort*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar12 = puVar3;
   if (puVar3 < param_7) {
      uVar10 = *puVar3;
      puVar12 = puVar3 + 1;
      *param_2 = 0;
      if (uVar10 == 0x7b) {
         if (puVar12 < param_7) {
            if (puVar3[1] != 0x5e) {
               LAB_00102f3c:local_d0 = (ushort*)0x0;
               local_d8 = 0;
               local_c8 = local_a8;
               LAB_00102f58:uVar10 = *puVar12;
               do {
                  puVar12 = puVar12 + 1;
                  if (( uVar10 != 0x5f ) && ( uVar10 != 0x2d )) {
                     uVar5 = uVar10;
                     if (0xff < uVar10) goto LAB_00103032;
                     ppuVar8 = __ctype_b_loc();
                     if (( *(byte*)( (long)*ppuVar8 + (ulong)uVar10 * 2 + 1 ) & 0x20 ) == 0) goto LAB_00103070;
                  }

                  if (param_7 <= puVar12) {
                     *param_5 = 0x92;
                     *param_1 = (ulong)puVar12;
                     goto LAB_00102f01;
                  }

                  uVar10 = *puVar12;
               }
 while ( true );
            }

            puVar12 = puVar3 + 2;
            *param_2 = 1;
            if (puVar12 < param_7) goto LAB_00102f3c;
         }

      }
 else if (( uVar10 < 0x100 ) && ( ( *(byte*)( param_6 + (ulong)uVar10 ) & 2 ) != 0 )) {
         pp_Var7 = __ctype_tolower_loc();
         local_a8[1] = 0;
         local_a8[0] = ( ushort )(*pp_Var7)[uVar10];
         *param_1 = (ulong)puVar12;
         LAB_00102e6e:local_c8._0_2_ = 0xff;
         local_d0 = (ushort*)0x0;
         LAB_00102e80:uVar13 = 0;
         uVar11 = __pcre2_utt_size_16;
         if (__pcre2_utt_size_16 != 0) {
            do {
               uVar14 = uVar13 + uVar11 >> 1;
               lVar1 = ( ( uVar13 + uVar11 & 0xfffffffffffffffe ) + uVar14 ) * 2;
               iVar6 = _pcre2_strcmp_c8_16(local_a8, &_pcre2_utt_names_16 + *(ushort*)( &_pcre2_utt_16 + lVar1 ));
               if (iVar6 == 0) {
                  *param_4 = *(undefined2*)( &DAT_0011005c + lVar1 );
                  sVar2 = *(short*)( &DAT_0011005a + lVar1 );
                  sVar4 = sVar2;
                  if (( ( ( local_d0 == (ushort*)0x0 ) || ( (short)local_c8 == 0xff ) ) || ( sVar2 == 4 ) ) || ( sVar4 = sVar2 == 5 )) {
                     *param_3 = sVar4;
                     uVar9 = 1;
                     goto LAB_00102f03;
                  }

                  break;
               }

               if (0 < iVar6) {
                  uVar13 = uVar14 + 1;
                  uVar14 = uVar11;
               }

               uVar11 = uVar14;
            }
 while ( uVar13 < uVar14 );
         }

         LAB_00102fd0:*param_5 = 0x93;
         goto LAB_00102f01;
      }

   }

   LAB_00102ef8:*param_5 = 0x92;
   *param_1 = (ulong)puVar12;
   LAB_00102f01:uVar9 = 0;
   LAB_00102f03:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
   LAB_00103070:if (uVar10 == 0) goto LAB_00102ef8;
   if (uVar10 == 0x7d) {
      *param_1 = (ulong)puVar12;
      local_a8[local_d8] = 0;
      if (local_d0 == (ushort*)0x0) goto LAB_00102e6e;
      *local_d0 = 0;
      iVar6 = _pcre2_strcmp_c8_16(local_a8, "bidiclass");
      if (( iVar6 == 0 ) || ( iVar6 = iVar6 == 0 )) {
         local_b8[0] = __LC2;
         _pcre2_memmove16(local_a0, local_d0 + 1, (long)local_a8 + ( local_d8 * 2 - (long)local_d0 ));
         _pcre2_memmove16(local_a8, local_b8, 8);
         local_c8._0_2_ = 0xff;
         goto LAB_00102e80;
      }

      iVar6 = _pcre2_strcmp_c8_16(local_a8, "script");
      if (( iVar6 == 0 ) || ( iVar6 = iVar6 == 0 )) {
         local_c8._0_2_ = 4;
      }
 else {
         iVar6 = _pcre2_strcmp_c8_16(local_a8, "scriptextensions");
         if (( iVar6 != 0 ) && ( iVar6 = iVar6 != 0 )) goto LAB_00102fd0;
         local_c8._0_2_ = 5;
      }

      _pcre2_memmove16(local_a8, local_d0 + 1, (long)local_a8 + ( local_d8 * 2 - (long)local_d0 ));
      goto LAB_00102e80;
   }

   pp_Var7 = __ctype_tolower_loc();
   uVar5 = *(ushort*)( *pp_Var7 + uVar10 );
   if (( uVar10 == 0x3a || uVar10 == 0x3d ) && ( local_d0 == (ushort*)0x0 )) {
      local_d0 = local_c8;
   }

   LAB_00103032:local_d8 = local_d8 + 1;
   *local_c8 = uVar5;
   if (( local_d8 == 0x31 ) || ( local_c8 = param_7 <= puVar12 )) goto LAB_00102ef8;
   goto LAB_00102f58;
}
void add_list_to_class_constprop_0_isra_0(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, long param_5, int *param_6) {
   int *piVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   uint uVar5;
   iVar2 = *param_6;
   while (iVar2 != -1) {
      uVar3 = 0;
      do {
         uVar4 = uVar3;
         uVar5 = (int)uVar4 + 1;
         piVar1 = param_6 + uVar5;
         uVar3 = (ulong)uVar5;
      }
 while ( *piVar1 == uVar5 + iVar2 );
      *(int*)( param_5 + 0x100 ) = iVar2;
      iVar2 = param_6[uVar4];
      *(int*)( param_5 + 0x104 ) = iVar2;
      add_to_class_internal(param_1, param_2, param_3, param_4, param_5, *param_6, iVar2);
      param_6 = piVar1;
      iVar2 = *piVar1;
   }
;
   return;
}
void add_not_list_to_class_isra_0(undefined8 param_1, undefined8 param_2, uint param_3, undefined4 param_4, long param_5, int *param_6) {
   int iVar1;
   int iVar2;
   iVar2 = *param_6;
   if (iVar2 != 0) {
      *(undefined4*)( param_5 + 0x100 ) = 0;
      *(int*)( param_5 + 0x104 ) = iVar2 + -1;
      add_to_class_internal();
      iVar2 = *param_6;
      if (*param_6 == -1) {
         return;
      }

   }

   do {
      while (true) {
         iVar1 = param_6[1];
         iVar2 = iVar2 + 1;
         if (iVar1 != iVar2) break;
         param_6 = param_6 + 1;
         iVar2 = iVar1;
      }
;
      if (iVar1 == -1) {
         iVar1 = -1;
         if (( param_3 & 0x80000 ) != 0) {
            iVar1 = 0x10ffff;
         }

      }
 else {
         iVar1 = iVar1 + -1;
      }

      *(int*)( param_5 + 0x100 ) = iVar2;
      *(int*)( param_5 + 0x104 ) = iVar1;
      add_to_class_internal(param_1, param_2, param_3, param_4, param_5, iVar2, iVar1);
      iVar2 = param_6[1];
      param_6 = param_6 + 1;
   }
 while ( iVar2 != -1 );
   return;
}
/* WARNING: Type propagation algorithm not settling */undefined4 compile_regex(uint param_1, uint param_2, long *param_3, undefined8 *param_4, int *param_5, int param_6, uint *param_7, uint *param_8, uint *param_9, uint *param_10, undefined8 param_11, long *******param_12, long *param_13, long *param_14) {
   long *******ppppppplVar1;
   byte bVar2;
   short sVar3;
   undefined4 uVar4;
   ushort *puVar5;
   code *pcVar6;
   byte *pbVar7;
   bool bVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   bool bVar12;
   bool bVar13;
   int iVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   ulong *puVar21;
   ulong *puVar22;
   ushort *puVar23;
   long *******ppppppplVar24;
   void *pvVar25;
   ulong uVar26;
   byte *pbVar27;
   int iVar28;
   int iVar29;
   size_t __n;
   byte *pbVar30;
   ushort uVar31;
   int iVar32;
   uint *puVar33;
   long lVar34;
   undefined8 *puVar35;
   ushort *puVar36;
   uint *puVar37;
   uint *puVar38;
   undefined4 uVar39;
   ushort uVar40;
   uint uVar41;
   ushort *puVar42;
   ushort uVar43;
   undefined8 uVar44;
   undefined *puVar45;
   uint uVar46;
   uint uVar47;
   ulong uVar48;
   ushort *puVar49;
   ushort *puVar50;
   long in_FS_OFFSET;
   bool bVar51;
   bool bVar52;
   bool bVar53;
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 local_268[16];
   ushort *local_248;
   uint local_240;
   uint local_23c;
   uint local_238;
   uint local_230;
   uint local_22c;
   uint local_218;
   uint local_214;
   uint local_210;
   uint local_20c;
   long *******local_208;
   uint local_1f0;
   uint local_1ec;
   long local_1e8;
   uint local_1e0;
   uint local_1dc;
   ushort *local_1d8;
   short local_1d0;
   uint local_1c4;
   uint local_1bc;
   uint local_1b8;
   ushort *local_1b0;
   uint local_188;
   ushort *local_180;
   uint local_174;
   uint local_154;
   uint local_150;
   uint local_14c;
   uint local_148;
   uint local_f4;
   uint local_f0;
   uint local_ec;
   ulong local_e8;
   uint *local_e0;
   ulong local_d8;
   ushort *local_d0;
   ushort *local_c8;
   ushort local_c0;
   undefined2 uStack_be;
   undefined4 uStack_bc;
   long *******local_b8;
   undefined4 local_b0;
   undefined1 local_a8[16];
   uint local_98[4];
   undefined1 local_88[16];
   undefined1 local_78[16];
   byte local_68;
   byte bStack_67;
   undefined6 uStack_66;
   uint uStack_60;
   undefined4 uStack_5c;
   ulong local_58;
   ulong uStack_50;
   long local_40;
   local_208 = param_12;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = (ushort*)*param_3;
   puVar37 = (uint*)*param_4;
   pcVar6 = *(code**)( *param_13 + 0x18 );
   auVar54._8_8_ = puVar5;
   auVar54._0_8_ = param_11;
   if (( pcVar6 == (code*)0x0 ) || ( iVar14 = ( *pcVar6 )(*(undefined2*)( (long)param_13 + 0xb4 ), *(undefined8*)( *param_13 + 0x20 )) ),local_268 = auVar54,iVar14 == 0) {
      local_a8 = auVar54;
      local_174 = *puVar37;
      local_e8 = ( ulong )(param_6 + 4);
      uVar31 = *puVar5;
      bVar8 = ( ushort )(uVar31 - 0x81) < 2 || uVar31 == 0x84;
      if (bVar8) {
         uVar17 = (uint)(ushort)puVar37[-1];
         puVar37 = puVar37 + 2;
      }
 else if (uVar31 == 0x89) {
         uVar17 = 0;
         local_174 = 0;
         local_b8 = param_12;
         local_b0 = CONCAT22(*(undefined2*)( (long)param_13 + 0xb6 ), puVar5[2]);
         local_208 = (long*******)&local_b8;
      }
 else {
         local_174 = 0;
         uVar17 = 0;
      }

      local_150 = 0xffffffff;
      puVar5[1] = 0;
      uVar48 = (ulong)uVar17;
      local_154 = 0xffffffff;
      local_248 = puVar5 + ( param_6 + 2 );
      local_148 = 0;
      local_14c = 0;
      puVar21 = (ulong*)0x0;
      if (param_14 != (long*)0x0) {
         puVar21 = &local_e8;
      }

      uVar39 = 1;
      local_218 = param_2;
      local_1e0 = param_1;
      local_180 = puVar5;
      do {
         if (( (uint)uVar48 != 0 ) && ( bVar8 )) {
            if (( local_174 == 0xffff ) || ( (uint)uVar48 == local_174 )) {
               local_e8 = local_e8 + 2;
               *local_248 = 0x7d;
               local_248[1] = (ushort)uVar48;
               local_248 = local_248 + 2;
            }
 else {
               local_e8 = local_e8 + 3;
               *local_248 = 0x7e;
               local_248[1] = (ushort)local_174;
               local_248[2] = (ushort)uVar48;
               local_248 = local_248 + 3;
            }

         }

         local_e0 = puVar37;
         uVar26 = ( ulong ) * puVar37;
         local_d8 = 0;
         pbVar7 = (byte*)param_13[3];
         local_268._0_8_ = local_248;
         local_1c4 = local_1e0;
         uVar15 = local_1e0 & 0x80000;
         local_23c = local_1e0;
         bVar51 = ( local_1e0 & 0x40000 ) == 0;
         local_22c = 0;
         local_188 = (uint)!bVar51;
         uVar17 = 0xffffffff;
         local_1bc = (uint)bVar51;
         local_1ec = 0xffffffff;
         local_1dc = local_1e0 >> 3 & 1;
         local_214 = 0xffffffff;
         uVar46 = 0;
         bVar51 = false;
         local_1e8 = 0;
         local_230 = 0xffffffff;
         uVar18 = 0;
         local_1f0 = 0;
         local_210 = 0;
         local_20c = 0;
         iVar14 = 0;
         local_240 = 0xffffffff;
         puVar23 = (ushort*)0x0;
         local_1d8 = local_248;
         LAB_00103962:uVar19 = (uint)uVar26;
         uVar41 = uVar19 & 0xffff0000;
         local_e0 = puVar37;
         if (param_14 == (long*)0x0) {
            if (0xb0000 < uVar41 + 0x7fcc0000) goto LAB_0010376c;
            LAB_001039af:if (uVar41 == 0x803a0000) {
               LAB_00105298:uVar19 = 1;
               uVar16 = 2;
               goto LAB_00103a00;
            }

            if (uVar41 < 0x803a0001) {
               if (uVar41 != 0x80370000) {
                  if (uVar41 < 0x80370001) {
                     if (( ( uVar19 & 0xfffe0000 ) == 0x80340000 ) || ( uVar41 == 0x80360000 )) {
                        uVar19 = 0x10000;
                        uVar16 = 2;
                        goto LAB_00103a00;
                     }

                  }
 else if (( uVar19 & 0xfffe0000 ) == 0x80380000) goto LAB_00104959;
                  goto LAB_00104240;
               }

               LAB_00104959:uVar16 = 2;
               uVar19 = 0x10000;
               uVar47 = 1;
               if (uVar46 != 0) goto LAB_00104642;
               LAB_00103a26:if (uVar41 == 0x803b0000) goto LAB_00104658;
               LAB_00103a32:puVar42 = local_1d8;
               uVar20 = local_1bc;
               if (uVar41 < 0x803b0001) {
                  if (uVar41 == 0x80380000) goto LAB_00104658;
                  if (uVar41 < 0x80380001) {
                     if (uVar41 == 0x80350000) goto LAB_00104658;
                     if (uVar41 == 0x80360000) goto LAB_0010492c;
                  }
 else if (uVar41 == 0x80390000) {
                     LAB_0010492c:bVar52 = false;
                     goto LAB_00103a80;
                  }

                  bVar52 = false;
                  uVar20 = local_188;
               }
 else {
                  if (uVar41 == 0x803e0000) goto LAB_00104658;
                  if (uVar41 == 0x803f0000) goto LAB_0010492c;
                  if (uVar41 != 0x803c0000) {
                     uVar20 = local_188;
                  }

                  bVar52 = false;
               }

            }
 else {
               if (uVar41 != 0x803d0000) {
                  if (uVar41 < 0x803d0001) {
                     if (( uVar41 + 0x7fc50000 & 0xfffe0000 ) != 0) goto LAB_00104240;
                     goto LAB_00105298;
                  }

                  joined_r0x00106012:if (( uVar19 & 0xfffe0000 ) != 0x803e0000) goto LAB_00104240;
               }

               uVar47 = puVar37[1];
               uVar19 = puVar37[2];
               local_e0 = puVar37 + 2;
               uVar16 = ( uint )(uVar47 != uVar19) * 2;
               if (uVar47 == 0) {
                  LAB_00103a00:uVar46 = 0;
                  uVar47 = 0;
                  local_214 = local_1ec;
                  local_210 = local_1f0;
                  local_230 = uVar17;
                  local_20c = uVar18;
                  goto LAB_00103a26;
               }

               if (uVar46 == 0) {
                  if (uVar47 != 0) {
                     uVar46 = 0;
                     goto LAB_00103a26;
                  }

                  goto LAB_00103a00;
               }

               LAB_00104642:uVar46 = 1;
               if (uVar41 != 0x803b0000) goto LAB_00103a32;
               LAB_00104658:bVar52 = true;
               uVar20 = 0;
               puVar42 = local_1d8;
            }

            LAB_00103a80:uVar31 = *puVar23;
            local_d0 = puVar23;
            uVar43 = (ushort)uVar19;
            local_1d8 = puVar23;
            puVar49 = puVar42;
            if (uVar31 < 0x21) {
               if (uVar31 < 0x1d) goto switchD_00103ab5_caseD_76;
               if (( uVar19 == 1 ) && ( uVar47 == 1 )) goto switchD_00103ab5_caseD_a3;
               iVar29 = *(int*)( chartypeoffset + (long)(int)( uVar31 - 0x1d ) * 4 );
               uVar40 = puVar42[-1];
               if (( uVar15 == 0 ) || ( ( uVar40 & 0xfc00 ) != 0xdc00 )) {
                  local_98[0] = CONCAT22(local_98[0]._2_2_, uVar40);
                  if (( uVar31 < 0x1f ) && ( 1 < uVar47 )) {
                     local_214 = *(uint*)( param_13 + 0x22 );
                     local_210 = (uint)uVar40;
                     if (uVar31 == 0x1e) {
                        local_214 = local_214 | 1;
                        uVar40 = 0xffff;
                        uVar41 = 0xffffffff;
                        lVar34 = 1;
                        goto joined_r0x001051b3;
                     }

                  }

                  uVar40 = 0xffff;
                  uVar41 = 0xffffffff;
                  lVar34 = 1;
               }
 else {
                  uVar40 = 0xffff;
                  uVar41 = 0xffffffff;
                  lVar34 = 2;
                  local_98[0] = *(uint*)( puVar42 + -2 );
               }

               joined_r0x001051b3:puVar49 = puVar23;
               if (uVar19 == 0) goto switchD_00103ab5_caseD_a3;
               iVar28 = uVar20 + iVar29;
               iVar32 = (int)lVar34;
               sVar3 = (short)iVar28;
               if (uVar47 == 0) {
                  if (uVar19 == 0x10000) {
                     puVar49 = puVar23 + 1;
                     *puVar23 = sVar3 + 0x21;
                  }
 else if (uVar19 == 1) {
                     puVar49 = puVar23 + 1;
                     *puVar23 = sVar3 + 0x25;
                  }
 else {
                     puVar23[1] = uVar43;
                     *puVar23 = sVar3 + 0x27;
                     puVar49 = puVar23 + 2;
                  }

                  LAB_00103b3c:if (iVar32 == 0) {
                     *puVar49 = uVar31;
                     if (uVar41 == 0xffffffff) {
                        puVar49 = puVar49 + 1;
                        goto LAB_00103b70;
                     }

                     uVar41 = (uint)uVar40 << 0x10 | uVar41 & 0xffff;
                     LAB_00103b5a:*(uint*)( puVar49 + 1 ) = uVar41;
                     puVar49 = puVar49 + 3;
                     goto LAB_00103b70;
                  }

               }
 else {
                  if (uVar47 == 1) {
                     if (uVar19 == 0x10000) {
                        puVar49 = puVar23 + 1;
                        *puVar23 = sVar3 + 0x23;
                     }
 else {
                        puVar49 = puVar42;
                        if (uVar19 == 1) goto switchD_00103ab5_caseD_a3;
                        *puVar42 = sVar3 + 0x27;
                        puVar42[1] = uVar43 - 1;
                        puVar49 = puVar42 + 2;
                     }

                     goto LAB_00103b3c;
                  }

                  puVar23[1] = (ushort)uVar47;
                  *puVar23 = (short)iVar29 + 0x29;
                  puVar49 = puVar23 + 2;
                  if (uVar47 == uVar19) goto LAB_00103b3c;
                  if (iVar32 == 0) {
                     puVar23[2] = uVar31;
                     if (uVar41 == 0xffffffff) {
                        if (uVar19 == 0x10000) {
                           puVar49 = puVar23 + 5;
                           *(uint*)( puVar23 + 3 ) = (uint)uVar31 << 0x10 | iVar28 + 0x21U & 0xffff;
                           goto LAB_00103b70;
                        }

                        puVar42 = puVar23 + 3;
                        LAB_001063f8:if (uVar19 - uVar47 == 1) {
                           puVar49 = puVar42 + 1;
                           *puVar42 = sVar3 + 0x25;
                        }
 else {
                           puVar42[1] = ( ushort )(uVar19 - uVar47);
                           *puVar42 = sVar3 + 0x27;
                           puVar49 = puVar42 + 2;
                        }

                        goto LAB_00103b3c;
                     }

                     puVar23[3] = (ushort)uVar41;
                     puVar23[4] = uVar40;
                     if (uVar19 != 0x10000) {
                        puVar42 = puVar23 + 5;
                        goto LAB_001063f8;
                     }

                     uVar41 = (uint)uVar40 << 0x10 | uVar41 & 0xffff;
                     puVar49 = puVar23 + 6;
                     *(uint*)( puVar23 + 5 ) = (uint)uVar31 << 0x10 | iVar28 + 0x21U & 0xffff;
                     goto LAB_00103b5a;
                  }

                  if (iVar32 != 0) {
                     uVar20 = 0;
                     do {
                        uVar48 = (ulong)uVar20;
                        uVar20 = uVar20 + 1;
                        *(undefined1*)( (long)puVar49 + uVar48 ) = *(undefined1*)( (long)local_98 + uVar48 );
                     }
 while ( uVar20 < ( uint )(iVar32 * 2) );
                  }

                  puVar42 = puVar49 + lVar34;
                  if (uVar19 != 0x10000) goto LAB_001063f8;
                  puVar49 = puVar42 + 1;
                  *puVar42 = sVar3 + 0x21;
               }

               if (iVar32 != 0) {
                  uVar41 = 0;
                  do {
                     uVar48 = (ulong)uVar41;
                     uVar41 = uVar41 + 1;
                     *(undefined1*)( (long)puVar49 + uVar48 ) = *(undefined1*)( (long)local_98 + uVar48 );
                  }
 while ( uVar41 < ( uint )(iVar32 * 2) );
               }

               puVar49 = puVar49 + lVar34;
               LAB_00103b70:puVar50 = puVar49;
               if (bVar52) {
                  LAB_00103b7e:uVar31 = *puVar23;
                  puVar49 = puVar50;
                  if (uVar31 < 0x70) {
                     if (uVar31 < 0x6e) {
                        if (uVar31 < 0x51) {
                           if (( ( ( 0x1c < uVar31 ) && ( ( 0x800400200100fU >> ( ( ulong )(uVar31 - 0x1d) & 0x3f ) & 1 ) != 0 ) ) && ( local_d0 = puVar23 + ( byte )(&_pcre2_OP_lengths_16)[uVar31] ),uVar15 != 0 )) {
                              local_d0 = local_d0 + 1;
                           }

                        }
 else if (uVar31 == 0x5d) {
                           local_d0 = puVar23 + (int)( (uint)DAT_00110085 + ( uint )(( ushort )(puVar23[2] - 0xf) < 2) * 2 );
                        }

                     }
 else {
                        local_d0 = puVar23 + 0x11;
                     }

                  }
 else if (uVar31 == 0x70) {
                     local_d0 = puVar23 + puVar23[1];
                  }

                  LAB_00103bf0:puVar23 = local_d0;
                  lVar34 = (long)puVar49 - (long)local_d0 >> 1;
                  if (0 < (int)lVar34) {
                     if (( *local_d0 < 0x76 ) && ( opcode_possessify[*local_d0] != 0 )) {
                        *local_d0 = (ushort)(byte)opcode_possessify[*local_d0];
                     }
 else {
                        uVar31 = (short)lVar34 + 2;
                        _pcre2_memmove16(local_d0 + 2, local_d0, (long)(int)( (long)puVar49 - (long)local_d0 ));
                        *puVar23 = 0x85;
                        puVar49[2] = 0x79;
                        puVar49[3] = uVar31;
                        puVar23[1] = uVar31;
                        puVar49 = puVar49 + 4;
                     }

                  }

               }

            }
 else {
               local_1d0 = (short)uVar20;
               puVar36 = puVar23;
               switch (uVar31) {
                  case 0x6e:
                  case 0x6f:
                  case 0x70:
                  case 0x71:
                  case 0x72:
                  case 0x73:
                  case 0x74:
            puVar49 = puVar23;
            if (uVar19 != 0) {
              if ((uVar19 != 1) || (puVar49 = puVar42, uVar47 != 1)) {
                if ((uVar47 != 0) || (uVar19 != 0x10000)) {
                  if ((uVar47 != 1) || (uVar19 != 0x10000)) {
                    if ((uVar19 != 1) || (uVar47 != 0)) {
                      puVar42[1] = (ushort)uVar47;
                      puVar49 = puVar42 + 3;
                      *puVar42 = local_1d0 + 0x68;
                      puVar42[2] = uVar43;
                    }
                    else {
                      puVar49 = puVar42 + 1;
                      *puVar42 = local_1d0 + 0x66;
                    }
                  }
                  else {
                    puVar49 = puVar42 + 1;
                    *puVar42 = local_1d0 + 100;
                  }
                }
                else {
                  puVar49 = puVar42 + 1;
                  *puVar42 = local_1d0 + 0x62;
                }
                goto LAB_00103b70;
              }
            }
            break;
                  case 0x75:
            if ((uVar19 == 1) && (uVar47 == 1)) {
              if (!bVar52) break;
              uVar41 = 0;
              if (param_14 != (long *)0x0) goto LAB_00103f6c;
              goto LAB_00103bf0;
            }
            if (uVar47 != 0) {
              if ((uVar47 == 1) && (uVar19 == 0x10000)) {
                uVar19 = 0x10000;
                uVar47 = 1;
              }
              else {
                if (uVar47 == uVar19) {
                  uVar41 = uVar47 - 1;
                  if (param_14 != (long *)0x0) goto LAB_00103f6c;
                  if (0 < (int)uVar41) goto LAB_00106d71;
LAB_00103fea:
                  puVar42 = puVar49;
                  if (uVar47 == uVar19) goto LAB_00103b70;
                }
                else {
                  uVar41 = uVar47;
                  if (param_14 != (long *)0x0) {
LAB_00103f6c:
                    iVar29 = _pcre2_ckd_smul(&local_c0,uVar41,2);
                    if (iVar29 == 0) {
                      uVar48 = CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0));
                      if (uVar48 <= 0x7fffffeb - *puVar21) {
                        *puVar21 = *puVar21 + uVar48;
                        goto LAB_00103fea;
                      }
                    }
                    goto LAB_001052e0;
                  }
                  if (0 < (int)uVar47) {
LAB_00106d71:
                    uVar4 = *(undefined4 *)puVar23;
                    if ((uVar41 & 1) == 0) goto LAB_00106d90;
                    *(undefined4 *)puVar42 = uVar4;
                    for (puVar49 = puVar42 + 2; puVar49 != puVar42 + (long)(int)uVar41 * 2;
                        puVar49 = puVar49 + 4) {
LAB_00106d90:
                      *(undefined4 *)puVar49 = uVar4;
                      *(undefined4 *)(puVar49 + 2) = uVar4;
                    }
                    local_1d8 = puVar42 + (ulong)uVar41 * 2 + -2;
                    puVar49 = puVar42 + (ulong)uVar41 * 2;
                    goto LAB_00103fea;
                  }
                }
                puVar36 = local_1d8;
                if (uVar19 == 0x10000) {
                  uVar47 = 0;
                }
                else {
                  uVar19 = uVar19 - uVar47;
                  uVar47 = 0;
                }
              }
            }
            puVar42 = puVar42 + 4;
            _pcre2_memmove16(puVar36 + 2,puVar36,4);
            local_d8 = 6;
            iVar14 = -1;
            lVar34 = (long)puVar42 - (long)puVar36;
            puVar36[0] = 0x87;
            puVar36[1] = 4;
            puVar36[4] = 0x79;
            puVar36[5] = 4;
            local_1b8 = (uint)(lVar34 >> 1);
            local_1d8 = puVar36;
            puVar49 = puVar42;
            if (uVar47 == 0) goto LAB_00103ca4;
LAB_001060fd:
            if (uVar47 != 1) goto LAB_00106107;
LAB_001061af:
            puVar36 = (ushort *)0x0;
            if (uVar19 != 0x10000) goto LAB_00106b4e;
            goto LAB_001061be;
                  case 0x76:
                  case 0x77:
                  case 0x78:
                  case 0x79:
                  case 0x7a:
                  case 0x7b:
                  case 0x7c:
                  case 0x7d:
                  case 0x7e:
                  case 0x88:
                  case 0x8a:
                  case 0x8c:
                  case 0x8d:
                  case 0x8e:
                  case 0x8f:
                  case 0x90:
                  case 0x91:
                  case 0x92:
                  case 0x93:
                  case 0x94:
                  case 0x95:
                  case 0x96:
                  case 0x97:
                  case 0x98:
                  case 0x99:
                  case 0x9a:
                  case 0x9b:
                  case 0x9c:
                  case 0x9d:
                  case 0x9e:
                  case 0x9f:
                  case 0xa0:
                  case 0xa1:
                  case 0xa2:
switchD_00103ab5_caseD_76:
            if (0x16 < uVar31) goto switchD_00103ab5_default;
            if ((uVar19 != 1) || (uVar47 != 1)) {
              if ((ushort)(uVar31 - 0xf) < 2) {
                uVar41 = (uint)puVar23[1];
                uVar40 = puVar23[2];
                lVar34 = 0;
                iVar29 = 0x34;
              }
              else {
                uVar40 = 0xffff;
                uVar41 = 0xffffffff;
                lVar34 = 0;
                iVar29 = 0x34;
              }
              goto joined_r0x001051b3;
            }
            break;
                  case 0x7f:
                  case 0x80:
                  case 0x81:
                  case 0x82:
                  case 0x83:
                  case 0x84:
                  case 0x85:
                  case 0x86:
                  case 0x87:
                  case 0x89:
                  case 0x8b:
            lVar34 = (long)puVar42 - (long)puVar23;
            local_1b8 = (uint)(lVar34 >> 1);
            if ((uVar19 == 1) && (uVar47 == 1)) {
              if (!bVar52) break;
              if (uVar31 == 0x8b) {
                if (puVar23[2] == 0x95) {
                  if (puVar23[puVar23[1]] != 0x78) break;
                  goto LAB_00106b3a;
                }
              }
              else {
LAB_00106b3a:
                uVar47 = 1;
                uVar19 = 1;
              }
LAB_00106b4e:
              iVar29 = (int)lVar34;
              local_1b0 = (ushort *)0x0;
              iVar28 = uVar19 - uVar47;
              puVar36 = (ushort *)0x0;
            }
            else {
              if (uVar31 != 0x8b) {
                if (0x84 < uVar31) goto LAB_00103c9b;
                if (uVar19 == 0x10000) {
                  uVar19 = uVar47 + 1;
                  goto LAB_00103c9b;
                }
                if (uVar47 == 0) goto LAB_00103ca4;
                if (uVar47 == 1) goto LAB_00106b4e;
LAB_00106107:
                if (param_14 == (long *)0x0) {
                  if ((0xfffffffd < local_214) && (bVar51)) {
                    local_214 = local_230;
                    local_210 = local_20c;
                  }
                  uVar41 = 1;
                  puVar42 = puVar49;
                  do {
                    uVar41 = uVar41 + 1;
                    pvVar25 = memcpy(puVar42,local_1d8,(long)(int)lVar34);
                    puVar42 = (ushort *)((long)pvVar25 + (long)(int)local_1b8 * 2);
                  } while (uVar41 != uVar47);
                  puVar49 = (ushort *)
                            ((long)puVar49 + (ulong)(uVar47 - 1) * (long)(int)local_1b8 * 2);
                  goto LAB_001061af;
                }
                iVar29 = _pcre2_ckd_smul(&local_c0,uVar47 - 1,local_d8 & 0xffffffff);
                if (iVar29 != 0) goto LAB_001052e0;
                uVar48 = CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0));
                if (0x7fffffeb - *puVar21 < uVar48) goto LAB_001052e0;
                *puVar21 = *puVar21 + uVar48;
                goto LAB_001061af;
              }
              if ((puVar23[2] == 0x95) && (puVar23[puVar23[1]] != 0x78)) break;
LAB_00103c9b:
              if (uVar47 != 0) goto LAB_001060fd;
LAB_00103ca4:
              iVar29 = (int)lVar34;
              if ((uVar19 < 2) || (uVar19 == 0x10000)) {
                local_1d8 = puVar36 + 1;
                puVar49 = puVar42 + 1;
                _pcre2_memmove16(local_1d8,puVar36,(long)iVar29);
                if (uVar19 == 0) {
                  *puVar36 = 0xa7;
                  break;
                }
                *puVar36 = local_1d0 + 0x97;
                if (uVar19 == 0x10000) {
                  uVar47 = 0;
                  goto LAB_001061be;
                }
                local_1b0 = (ushort *)0x0;
              }
              else {
                local_1d8 = puVar36 + 3;
                puVar49 = puVar42 + 3;
                _pcre2_memmove16(local_1d8,puVar36,(long)iVar29);
                puVar36[1] = 0x87;
                puVar36[2] = 0;
                *puVar36 = local_1d0 + 0x97;
                local_1b0 = puVar36 + 2;
                puVar36 = (ushort *)0x0;
              }
              iVar28 = uVar19 - 1;
              uVar47 = 0;
            }
            if (iVar28 == 0x10000) {
LAB_001061be:
              uVar31 = puVar49[-1];
              puVar42 = puVar49 + (-2 - (ulong)uVar31);
              uVar43 = *puVar42;
              if (uVar43 == 0x85) {
                if (!bVar52) {
LAB_00106202:
                  puVar49[-2] = local_1d0 + 0x7a;
                  break;
                }
                uVar43 = 0x88;
                *puVar42 = 0x87;
                if (param_14 == (long *)0x0) {
                  if (iVar14 < 0) {
                    *puVar42 = 0x8c;
                  }
                  uVar43 = *puVar42;
LAB_00107536:
                  uVar43 = uVar43 + 1;
                }
                *puVar42 = uVar43;
                puVar49[-2] = 0x7c;
                puVar50 = puVar49;
              }
              else {
                if (uVar43 == 0x86) {
                  puVar49[-2] = local_1d0 + 0x7a;
                  goto LAB_00103b70;
                }
                if (param_14 == (long *)0x0) {
                  if (iVar14 < 0) {
                    *puVar42 = uVar43 + 5;
                    goto LAB_001061f6;
                  }
                  if (uVar43 != 0x8b) goto LAB_001061f6;
                  if (puVar42[puVar42[1]] != 0x78) {
                    *puVar42 = 0x90;
                  }
                  if (!bVar52) goto LAB_00106202;
                }
                else {
LAB_001061f6:
                  if (!bVar52) goto LAB_00106202;
                  uVar43 = *puVar42;
                  if ((uVar43 != 0x8b) && (uVar43 != 0x90)) goto LAB_00107536;
                }
                lVar34 = -((ulong)uVar31 * -2 + -4);
                _pcre2_memmove16(puVar42 + 2,puVar42,lVar34);
                uVar31 = (short)(lVar34 >> 1) + 2;
                puVar50 = puVar49 + 4;
                *puVar42 = (ushort)(*puVar42 != 0x8b) * 5 + 0x88;
                puVar49[2] = 0x7c;
                puVar49[3] = uVar31;
                puVar42[1] = uVar31;
              }
              if (puVar36 != (ushort *)0x0) {
                *puVar36 = 0x99;
              }
              puVar49 = puVar50;
              if (uVar47 < 2) break;
              goto LAB_00103b7e;
            }
            if (iVar28 != 0) {
              if (param_14 != (long *)0x0) {
                iVar29 = _pcre2_ckd_smul(&local_c0,iVar28,(int)local_d8 + 5);
                if ((iVar29 != 0) ||
                   (uVar48 = CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0)),
                   0x7fffffef - local_e8 < uVar48)) goto LAB_001052e0;
                local_e8 = (local_e8 - 4) + uVar48;
              }
              else if (iVar28 != 0) {
                *puVar49 = local_1d0 + 0x97U;
                if (iVar28 != 1) {
                  puVar42 = puVar49 + 2;
                  puVar49[1] = 0x87;
                  lVar34 = 0;
                  if (local_1b0 != (ushort *)0x0) goto LAB_00103e7d;
                  while( true ) {
                    local_1b0 = puVar42;
                    puVar49[2] = (ushort)lVar34;
                    memcpy(puVar49 + 3,local_1d8,(long)iVar29);
                    puVar49 = puVar49 + (long)(int)local_1b8 + 3;
                    iVar28 = iVar28 + -1;
                    *puVar49 = local_1d0 + 0x97U;
                    if (iVar28 == 1) break;
                    puVar42 = puVar49 + 2;
                    puVar49[1] = 0x87;
LAB_00103e7d:
                    lVar34 = (long)puVar42 - (long)local_1b0 >> 1;
                  }
                }
                pvVar25 = memcpy(puVar49 + 1,local_1d8,(long)iVar29);
                puVar49 = (ushort *)((long)(int)local_1b8 * 2 + (long)pvVar25);
              }
            }
            if (local_1b0 != (ushort *)0x0) {
              iVar29 = (int)((long)puVar49 - (long)local_1b0 >> 1) + 1;
              puVar42 = puVar49 + -(long)iVar29;
              uVar31 = puVar42[1];
              puVar36 = puVar49;
              while( true ) {
                puVar49 = puVar36 + 2;
                uVar43 = (ushort)iVar29;
                if (uVar31 == 0) break;
                puVar49[-1] = uVar43;
                local_1b0 = local_1b0 + -(ulong)uVar31;
                puVar49[-2] = 0x79;
                puVar42[1] = uVar43;
                iVar29 = (int)((long)puVar49 - (long)local_1b0 >> 1) + 1;
                puVar42 = puVar49 + -(long)iVar29;
                uVar31 = puVar42[1];
                puVar36 = puVar49;
              }
              puVar36[1] = uVar43;
              *puVar36 = 0x79;
              puVar42[1] = uVar43;
            }
            goto LAB_00103b70;
                  case 0xa3:
            break;
                  default:
switchD_00103ab5_default:
            *param_5 = 0x6e;
            goto LAB_00103f12;
               }

            }

            switchD_00103ab5_caseD_a3:*(uint*)( param_13 + 0x22 ) = *(uint*)( param_13 + 0x22 ) | uVar16;
            uVar26 = (ulong)local_e0[1];
            puVar37 = local_e0;
            uVar47 = local_20c;
            goto LAB_00103956;
         }

         if ((ushort*)( param_13[5] + -200 + param_13[10] * 2 ) < local_1d8) {
            *param_5 = ( -(uint)(local_1d8 < (ushort *)(param_13[5] + param_13[10] * 2)) & 0x22 ) + 0x98;
            goto LAB_00103f12;
         }

         if (local_1d8 < (ulong)local_268._0_8_) {
            local_1d8 = (ushort*)local_268._0_8_;
         }

         if (uVar41 + 0x7fcc0000 < 0xb0001) {
            local_268._0_8_ = local_1d8;
            goto LAB_001039af;
         }

         uVar48 = (long)local_1d8 - (long)local_248 >> 1;
         if (( 0x7fffffeb - *puVar21 < uVar48 ) || ( uVar48 = *puVar21 + uVar48 ),*puVar21 = uVar48,0x10000 < uVar48) goto LAB_001052e0;
         local_268._0_8_ = local_248;
         local_1d8 = local_248;
         LAB_0010376c:uVar16 = ( local_22c ^ 1 ) & uVar46;
         if (uVar16 == 0) {
            uVar16 = local_240;
         }

         puVar49 = local_1d8;
         local_240 = uVar16;
         uVar47 = local_20c;
         if (uVar41 == 0x801b0000) {
            local_23c = puVar37[1];
            local_218 = puVar37[2];
            uVar26 = (ulong)puVar37[3];
            bVar52 = ( local_23c & 0x40000 ) == 0;
            local_188 = (uint)!bVar52;
            puVar37 = puVar37 + 2;
            uVar46 = 0;
            local_1bc = (uint)bVar52;
            local_1dc = local_23c >> 3 & 1;
            local_1c4 = local_23c;
            goto LAB_00103956;
         }

         uVar48 = uVar26 & 0xffff;
         uVar20 = (uint)uVar48;
         if (0x801b0000 < uVar41) {
            if (uVar41 == 0x802a0000) {
               *(undefined4*)( (long)param_13 + 0x11c ) = 1;
               uVar31 = *(ushort*)( (long)param_13 + 0xb6 );
               puVar23 = local_1d8;
               ppppppplVar24 = local_208;
               while (puVar49 = puVar23,ppppppplVar24 != (long*******)0x0) {
                  while (true) {
                     if (*(ushort*)( (long)ppppppplVar24 + 10 ) < uVar31) {
                        uVar31 = 0xa5;
                        goto LAB_00104890;
                     }

                     if (param_14 != (long*)0x0) break;
                     puVar23 = puVar49 + 2;
                     *puVar49 = 0xa6;
                     ppppppplVar1 = ppppppplVar24 + 1;
                     ppppppplVar24 = (long*******)*ppppppplVar24;
                     puVar49[1] = *(ushort*)ppppppplVar1;
                     uVar31 = *(ushort*)( (long)param_13 + 0xb6 );
                     puVar49 = puVar23;
                     if (ppppppplVar24 == (long*******)0x0) goto LAB_00104883;
                  }
;
                  ppppppplVar24 = (long*******)*ppppppplVar24;
                  *puVar21 = *puVar21 + 3;
                  puVar23 = puVar49;
               }
;
               LAB_00104883:uVar31 = 0xa5 - ( uVar31 == 0 );
               puVar49 = puVar23;
               LAB_00104890:*puVar49 = uVar31;
               puVar49 = puVar49 + 1;
               local_22c = 1;
               uVar41 = 0xfffffffe;
               if (local_230 != 0xffffffff) {
                  uVar41 = local_230;
               }

               uVar26 = (ulong)puVar37[1];
               uVar46 = 0;
               local_230 = uVar41;
            }
 else if (uVar41 < 0x802a0001) {
               if (uVar41 == 0x80250000) {
                  *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                  uVar31 = 0x81;
                  uVar44 = 0;
                  bVar52 = false;
                  iVar29 = 0x81;
               }
 else if (uVar41 < 0x80250001) {
                  if (uVar41 == 0x80220000) {
                     uVar31 = 0x86;
                     uVar44 = 0;
                     bVar52 = true;
                     iVar29 = 0x86;
                  }
 else {
                     if (uVar41 < 0x80220001) {
                        if (uVar41 != 0x80200000) {
                           if (uVar41 == 0x80210000) goto LAB_001057d6;
                           goto LAB_00104240;
                        }

                        puVar33 = puVar37 + 2;
                        local_1e8 = CONCAT44(puVar37[1], puVar37[2]);
                        if (uVar20 <= *(uint*)( (long)param_13 + 0xcc )) {
                           LAB_0010540b:local_1d8[1] = (ushort)uVar48;
                           puVar49 = local_1d8 + 2;
                           *local_1d8 = 0x75;
                           *(undefined4*)( (long)param_13 + 0x124 ) = 1;
                           uVar26 = (ulong)puVar33[1];
                           puVar37 = puVar33;
                           if (local_230 == 0xffffffff) {
                              uVar46 = 0;
                              bVar51 = false;
                              local_230 = 0xfffffffe;
                              uVar17 = 0xfffffffe;
                              uVar18 = local_20c;
                           }
 else {
                              uVar46 = 0;
                              bVar51 = false;
                              uVar17 = local_230;
                              uVar18 = local_20c;
                           }

                           goto LAB_00103956;
                        }

                        param_13[0x15] = local_1e8;
                        *param_5 = 0x73;
                        local_e0 = puVar33;
                        goto LAB_00103f12;
                     }

                     if (uVar41 == 0x80230000) {
                        *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                        uVar31 = 0x7f;
                        uVar44 = 0;
                        bVar52 = false;
                        iVar29 = 0x7f;
                     }
 else {
                        if (uVar41 != 0x80240000) goto LAB_00104240;
                        if (( puVar37[1] == 0x80190000 ) && ( uVar26 = (ulong)puVar37[2] ),0xb0000 < puVar37[2] + 0x7fcc0000) {
                           puVar37 = puVar37 + 1;
                           puVar49 = local_1d8 + 1;
                           uVar46 = 0;
                           *local_1d8 = 0xa3;
                           goto LAB_00103956;
                        }

                        *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                        uVar31 = 0x80;
                        uVar44 = 0;
                        bVar52 = false;
                        iVar29 = 0x80;
                     }

                  }

               }
 else {
                  if (uVar41 != 0x80270000) {
                     if (uVar41 < 0x80270001) {
                        if (uVar41 == 0x80260000) {
                           *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                           uVar31 = 0x82;
                           uVar44 = 0;
                           bVar52 = false;
                           iVar29 = 0x82;
                           goto LAB_00103800;
                        }

                     }
 else {
                        if (uVar41 == 0x80280000) {
                           *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                           uVar31 = 0x84;
                           uVar44 = 0;
                           bVar52 = false;
                           iVar29 = 0x84;
                           goto LAB_00103800;
                        }

                        if (uVar41 == 0x80290000) goto LAB_0010430e;
                     }

                     goto LAB_00104240;
                  }

                  *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                  uVar31 = 0x83;
                  uVar44 = 0;
                  bVar52 = false;
                  iVar29 = 0x83;
               }

               LAB_00103800:local_e0 = puVar37 + 1;
               *(short*)( (long)param_13 + 0xb4 ) = *(short*)( (long)param_13 + 0xb4 ) + 1;
               *local_1d8 = uVar31;
               puVar22 = &local_d8;
               if (param_14 == (long*)0x0) {
                  puVar22 = (ulong*)0x0;
               }

               uVar41 = *(uint*)( param_13 + 0x22 );
               local_d8 = 0;
               local_d0 = local_1d8;
               iVar14 = compile_regex(local_23c, local_218, &local_d0, &local_e0, param_5, uVar44, &local_f0, &local_c0, &local_f4, &local_ec, local_a8, local_208, param_13, puVar22);
               if (iVar14 == 0) goto LAB_00103f12;
               *(short*)( (long)param_13 + 0xb4 ) = *(short*)( (long)param_13 + 0xb4 ) + -1;
               uVar19 = iVar29 - 0x7f;
               puVar37 = local_e0;
               puVar49 = local_d0;
               if (( iVar29 == 0x8b ) || ( !bVar52 )) {
                  if (uVar19 < 6) {
                     LAB_001041d0:*(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + -1;
                     if (param_14 == (long*)0x0) {
                        uVar46 = 0;
                        LAB_0010470b:uVar26 = (ulong)local_e0[1];
                        if (( ( ( uVar19 & 0xfffffffb ) == 0 ) && ( local_ec < 0xfffffffe ) ) && ( CONCAT22(uStack_be, local_c0) < 0xfffffffe )) {
                           local_1ec = local_214;
                           bVar51 = false;
                           local_1f0 = local_210;
                           local_214 = local_ec;
                           local_210 = local_f4;
                           uVar17 = local_230;
                           uVar18 = local_20c;
                        }
 else {
                           bVar51 = false;
                           local_1ec = local_214;
                           local_1f0 = local_210;
                           uVar17 = local_230;
                           uVar18 = local_20c;
                        }

                        goto LAB_00103956;
                     }

                  }
 else {
                     if (iVar29 != 0x8b) goto LAB_00104489;
                     if (param_14 == (long*)0x0) {
                        iVar29 = 0;
                        puVar23 = local_1d8;
                        do {
                           iVar29 = iVar29 + 1;
                           puVar23 = puVar23 + puVar23[1];
                        }
 while ( *puVar23 != 0x79 );
                        if (local_1d8[2] == 0xa8) {
                           if (iVar29 == 1) {
                              uVar46 = 0;
                              local_1d8[2] = 0x95;
                              uVar26 = (ulong)local_e0[1];
                              goto LAB_00103956;
                           }

                           param_13[0x15] = local_1e8;
                           *param_5 = 0x9a;
                           goto LAB_00103f12;
                        }

                        if (2 < iVar29) {
                           param_13[0x15] = local_1e8;
                           *param_5 = 0x7f;
                           goto LAB_00103f12;
                        }

                        uVar46 = ( uint )(0 < iVar14);
                        if (iVar29 != 1) goto LAB_0010412d;
                        if (local_230 == 0xffffffff) {
                           local_230 = 0xfffffffe;
                        }

                        uVar46 = 0;
                        bVar51 = false;
                        local_1ec = local_214;
                        uVar26 = (ulong)local_e0[1];
                        local_1f0 = local_210;
                        uVar17 = local_230;
                        uVar18 = local_20c;
                        goto LAB_00103956;
                     }

                  }

                  LAB_001041e3:uVar46 = 0;
               }
 else {
                  if (iVar14 < 1) {
                     if (uVar19 < 6) goto LAB_001041d0;
                     LAB_00104489:if (param_14 != (long*)0x0) goto LAB_001041e3;
                     uVar46 = 0;
                     LAB_0010412d:uVar18 = CONCAT22(uStack_be, local_c0);
                     uVar19 = local_ec;
                     if (local_230 == 0xffffffff) {
                        uVar17 = uVar18;
                        if (uVar18 == 0xffffffff) {
                           LAB_00106697:bVar51 = false;
                        }
 else if (uVar18 == 0xfffffffe) {
                           local_230 = 0xfffffffe;
                           bVar51 = false;
                        }
 else {
                           bVar51 = true;
                           local_230 = uVar18;
                           uVar47 = local_f0;
                           uVar17 = 0xfffffffe;
                        }

                        LAB_0010417a:uVar26 = (ulong)local_e0[1];
                        if (0xfffffffd < uVar19) {
                           local_1ec = local_214;
                           local_1f0 = local_210;
                           uVar18 = local_20c;
                           goto LAB_00103956;
                        }

                     }
 else {
                        uVar17 = local_230;
                        if (0xfffffffd < uVar18) goto LAB_00106697;
                        if (0xfffffffd < local_ec) {
                           local_f4 = local_f0;
                           bVar51 = false;
                           uVar19 = uVar18 | uVar41;
                           goto LAB_0010417a;
                        }

                        bVar51 = false;
                     }

                     uVar26 = (ulong)local_e0[1];
                     local_1ec = local_214;
                     local_1f0 = local_210;
                     local_210 = local_f4;
                     local_214 = uVar19;
                     uVar18 = local_20c;
                     goto LAB_00103956;
                  }

                  if (uVar19 < 6) {
                     *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + -1;
                     if (param_14 == (long*)0x0) {
                        uVar46 = 1;
                        goto LAB_0010470b;
                     }

                  }
 else if (param_14 == (long*)0x0) {
                     uVar46 = 1;
                     goto LAB_0010412d;
                  }

                  uVar46 = 1;
               }

               if (0x7fffffeb - *puVar21 < local_d8 - 4) goto LAB_001052e0;
               *puVar21 = *puVar21 + ( local_d8 - 4 );
               *(undefined4*)( local_1d8 + 1 ) = _LC10;
               uVar26 = (ulong)local_e0[1];
               local_1d8[3] = 2;
               puVar49 = local_1d8 + 4;
            }
 else {
               if (uVar41 != 0x80330000) {
                  if (uVar41 < 0x80330001) {
                     if (uVar41 == 0x802f0000) {
                        LAB_00104302:*(undefined4*)( param_13 + 0x24 ) = 1;
                        goto LAB_0010430e;
                     }

                     if (uVar41 < 0x802f0001) {
                        if (uVar41 == 0x802d0000) goto LAB_0010430e;
                        if (uVar41 < 0x802d0001) {
                           if (( uVar41 + 0x7fd50000 & 0xfffe0000 ) == 0) {
                              LAB_001045c4:uVar26 = (ulong)puVar37[1];
                              puVar49 = local_1d8 + 1;
                              uVar46 = 0;
                              *local_1d8 = ( ushort ) * (undefined4*)( verbops + ( ulong )(uVar41 + 0x7fd70000 >> 0x10) * 4 );
                              goto LAB_00103956;
                           }

                        }
 else if (uVar41 == 0x802e0000) {
                           LAB_001045b8:*(undefined4*)( param_13 + 0x24 ) = 1;
                           goto LAB_001045c4;
                        }

                     }
 else {
                        if (uVar41 == 0x80320000) {
                           puVar49 = local_1d8 + 1;
                           uVar46 = 0;
                           *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x1000;
                           *local_1d8 = 0x9f;
                           uVar26 = (ulong)puVar37[1];
                           goto LAB_00103956;
                        }

                        if (uVar41 < 0x80320001) {
                           if (uVar41 == 0x80300000) goto LAB_001045b8;
                           if (uVar41 == 0x80310000) goto LAB_00104302;
                        }

                     }

                  }
 else {
                     puVar23 = local_1d8;
                     if (0x803a0000 < uVar41) goto joined_r0x00106012;
                  }

                  LAB_00104240:*param_5 = 0xbd;
                  goto LAB_00103f12;
               }

               *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x1000;
               LAB_0010430e:uVar46 = puVar37[1];
               local_d0 = local_1d8 + 1;
               *local_1d8 = ( ushort ) * (undefined4*)( verbops + ( ulong )(uVar41 + 0x7fd70000 >> 0x10) * 4 );
               puVar23 = local_1d8 + 2;
               if ((int)uVar46 < 1) {
                  uVar31 = 0;
                  puVar37 = puVar37 + 1;
               }
 else {
                  puVar33 = puVar37 + 2;
                  iVar29 = 0;
                  do {
                     while (true) {
                        uVar31 = (ushort)iVar29;
                        local_e0 = puVar33;
                        if (uVar15 != 0) break;
                        local_98[0] = CONCAT22(local_98[0]._2_2_, (short)*puVar33);
                        uVar48 = 1;
                        if (param_14 == (long*)0x0) goto LAB_001043eb;
                        LAB_001043b8:puVar33 = puVar33 + 1;
                        *puVar21 = *puVar21 + uVar48;
                        if (puVar33 == puVar37 + ( ulong )(uVar46 - 1) + 3) goto LAB_00104430;
                     }
;
                     uVar41 = _pcre2_ord2utf_16(*puVar33, local_98);
                     uVar48 = (ulong)uVar41;
                     if (param_14 != (long*)0x0) goto LAB_001043b8;
                     LAB_001043eb:puVar33 = puVar33 + 1;
                     memcpy(puVar23, local_98, ( ulong )(uint)((int)uVar48 * 2));
                     iVar29 = iVar29 + (int)uVar48;
                     uVar31 = (ushort)iVar29;
                     puVar23 = puVar23 + uVar48;
                  }
 while ( puVar33 != puVar37 + ( ulong )(uVar46 - 1) + 3 );
                  LAB_00104430:puVar37 = puVar37 + 1 + uVar46;
               }

               local_1d8[1] = uVar31;
               puVar49 = puVar23 + 1;
               uVar46 = 0;
               *puVar23 = 0;
               uVar26 = (ulong)puVar37[1];
            }

            goto LAB_00103956;
         }

         if (uVar41 == 0x800e0000) {
            LAB_00104d35:uVar46 = puVar37[1];
            uVar26 = (ulong)uVar46;
            if ((int)uVar46 < 0) goto LAB_00104e30;
            uVar16 = puVar37[2];
            if (uVar16 != 0x800d0000) {
               if (( ( uVar41 == 0x800a0000 ) && ( -1 < (int)uVar16 ) ) && ( puVar37[3] == 0x800d0000 )) {
                  if (( &DAT_0011001b )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar46 >> 7 ) * 2 ) * 0x80 + ( uVar46 & 0x7f ) ) * 2 ) * 0xc] == '\0') {
                     if (( local_1e0 & 0xa0000 ) == 0) {
                        if (0xff < uVar46) goto LAB_00104e30;
                        LAB_00104dbe:uVar17 = ( uint ) * (byte*)( param_13[2] + (ulong)uVar46 );
                     }
 else {
                        if (uVar46 < 0x80) goto LAB_00104dbe;
                        uVar17 = *(int*)( &DAT_0011001c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar46 >> 7 ) * 2 ) * 0x80 + ( uVar46 & 0x7f ) ) * 2 ) * 0xc ) + uVar46;
                     }

                     if (( uVar16 == uVar17 ) && ( uVar46 != uVar17 )) {
                        puVar33 = puVar37 + 3;
                        local_e0 = puVar33;
                        if (( local_23c & 8 ) == 0) {
                           local_23c = local_23c | 8;
                           local_1dc = 1;
                           uVar46 = 1;
                           local_1f0 = 0;
                        }
 else {
                           LAB_0010560b:uVar46 = 0;
                           local_1f0 = local_1dc ^ 1;
                        }

                        uVar41 = 8;
                        uVar17 = uVar46;
                        if (uVar15 == 0) goto LAB_00105638;
                        LAB_00105780:uVar17 = _pcre2_ord2utf_16();
                        __n = (size_t)( uVar17 * 2 );
                        lVar34 = (ulong)uVar17 * 2;
                        bVar52 = uVar17 == 1;
                        goto LAB_0010565d;
                     }

                  }
 else if (( (char)local_218 < '\0' ) && ( ( uVar46 | uVar16 ) < 0x80 )) goto LAB_00104dbe;
               }

               LAB_00104e30:bVar52 = uVar41 == 0x800e0000;
               local_88 = (undefined1[16])0x0;
               puVar23 = local_1d8 + 3;
               local_78 = (undefined1[16])0x0;
               uVar17 = puVar37[1];
               local_c8 = puVar23;
               if (uVar17 == 0x800d0000) {
                  uVar17 = 0xfffffffe;
                  if (local_230 != 0xffffffff) {
                     uVar17 = local_230;
                  }

                  bVar53 = false;
                  puVar37 = puVar37 + 1;
                  local_230 = uVar17;
               }
 else {
                  local_1b8 = uVar19 & 0xffff0000;
                  iVar29 = 0;
                  bVar12 = false;
                  bVar53 = false;
                  local_1f0 = 0;
                  bVar13 = false;
                  puVar33 = puVar37;
                  local_e0 = puVar37 + 1;
                  do {
                     puVar49 = local_c8;
                     if (( uVar17 & 0xfffeffff ) == 0x801c0000) {
                        puVar38 = puVar33 + 2;
                        bVar53 = uVar17 == 0x801d0000;
                        uVar18 = puVar33[2];
                        if (( ( local_23c >> 3 & 1 ) == 0 ) || ( 2 < (int)uVar18 )) {
                           if (( ( local_23c & 0x20000 ) != 0 ) && ( ( local_218 & 0x800 ) == 0 )) {
                              if (uVar18 - 8 < 3) {
                                 *local_c8 = ( uVar17 == 0x801d0000 ) + 3;
                                 uVar31 = 0xe;
                                 if (uVar18 != 8) {
                                    uVar31 = ( uVar18 != 9 ) + 0xf;
                                 }

                                 local_c8[1] = uVar31;
                                 bVar12 = true;
                                 local_c8 = local_c8 + 3;
                                 puVar49[2] = 0;
                                 goto LAB_00104f70;
                              }

                              LAB_00105cd6:bVar13 = (bool)( bVar13 | bVar53 );
                           }

                           LAB_00105cde:iVar28 = uVar18 * 3;
                           uVar48 = *(ulong*)( pbVar7 + (int)( &posix_class_maps )[iVar28] );
                           uVar26 = *(ulong*)( (long)( pbVar7 + (int)( &posix_class_maps )[iVar28] ) + 8 );
                           local_58 = *(ulong*)( pbVar7 + (long)(int)( &posix_class_maps )[iVar28] + 0x10 );
                           uStack_50 = *(ulong*)( (long)( pbVar7 + (long)(int)( &posix_class_maps )[iVar28] + 0x10 ) + 8 );
                           iVar29 = ( &posix_class_maps )[iVar28 + 1];
                           local_68 = (byte)uVar48;
                           bStack_67 = ( byte )(uVar48 >> 8);
                           uStack_66 = ( undefined6 )(uVar48 >> 0x10);
                           uStack_60 = (uint)uVar26;
                           uStack_5c = ( undefined4 )(uVar26 >> 0x20);
                           iVar28 = ( &posix_class_maps )[iVar28 + 2];
                           if (-1 < iVar29) {
                              if (iVar28 < 0) goto LAB_00106bbb;
                              puVar22 = (ulong*)( pbVar7 + iVar29 );
                              uVar48 = *puVar22 | uVar48;
                              local_68 = (byte)uVar48;
                              bStack_67 = ( byte )(uVar48 >> 8);
                              uStack_66 = ( undefined6 )(uVar48 >> 0x10);
                              uStack_60 = ( uint )(puVar22[1] | uVar26);
                              uStack_5c = ( undefined4 )(( puVar22[1] | uVar26 ) >> 0x20);
                              local_58 = puVar22[2] | local_58;
                              uStack_50 = puVar22[3] | uStack_50;
                           }

                        }
 else {
                           if (( local_23c & 0x20000 ) != 0) {
                              uVar18 = 0;
                              if (( local_218 & 0x800 ) == 0) goto LAB_00105cd6;
                              goto LAB_00105cde;
                           }

                           uVar44 = *(undefined8*)( pbVar7 + 0xa0 );
                           iVar28 = -2;
                           iVar29 = 0x40;
                           local_58 = *(ulong*)( pbVar7 + 0xb0 );
                           uStack_50 = *(ulong*)( pbVar7 + 0xb8 );
                           local_68 = (byte)uVar44;
                           bStack_67 = ( byte )((ulong)uVar44 >> 8);
                           uStack_66 = ( undefined6 )((ulong)uVar44 >> 0x10);
                           uStack_60 = ( uint ) * (undefined8*)( pbVar7 + 0xa8 );
                           uStack_5c = ( undefined4 )(( ulong ) * (undefined8*)( pbVar7 + 0xa8 ) >> 0x20);
                           LAB_00106bbb:puVar22 = (ulong*)( pbVar7 + iVar29 );
                           uVar48 = ~*puVar22 & CONCAT62(uStack_66, CONCAT11(bStack_67, local_68));
                           uVar26 = ~puVar22[1] & CONCAT44(uStack_5c, uStack_60);
                           local_68 = (byte)uVar48;
                           bStack_67 = ( byte )(uVar48 >> 8);
                           uStack_66 = ( undefined6 )(uVar48 >> 0x10);
                           uStack_60 = (uint)uVar26;
                           uStack_5c = ( undefined4 )(uVar26 >> 0x20);
                           local_58 = ~puVar22[2] & local_58;
                           uStack_50 = ~puVar22[3] & uStack_50;
                        }

                        iVar29 = -iVar28;
                        if (0 < iVar28) {
                           iVar29 = iVar28;
                        }

                        if (iVar29 == 1) {
                           bStack_67 = bStack_67 & 0xc3;
                        }
 else if (iVar29 == 2) {
                           uStack_60 = uStack_60 & 0x7fffffff;
                        }

                        if (uVar17 == 0x801d0000) {
                           auVar9[1] = bStack_67;
                           auVar9[0] = local_68;
                           auVar9._2_6_ = uStack_66;
                           auVar9._8_4_ = uStack_60;
                           auVar9._12_4_ = uStack_5c;
                           auVar55._8_4_ = 0xffffffff;
                           auVar55._0_8_ = 0xffffffffffffffff;
                           auVar55._12_4_ = 0xffffffff;
                           iVar29 = 1;
                           auVar11._8_8_ = uStack_50;
                           auVar11._0_8_ = local_58;
                           local_88 = auVar9 ^ auVar55 | local_88;
                           local_78 = auVar55 ^ auVar11 | local_78;
                        }
 else {
                           iVar29 = 1;
                           local_88._8_8_ = local_88._8_8_ | CONCAT44(uStack_5c, uStack_60);
                           local_88._0_8_ = local_88._0_8_ | CONCAT62(uStack_66, CONCAT11(bStack_67, local_68));
                           auVar10._8_8_ = uStack_50;
                           auVar10._0_8_ = local_58;
                           local_78 = local_78 | auVar10;
                        }

                        goto LAB_00104f70;
                     }

                     if (uVar17 == 0x80050000) {
                        local_e0 = puVar33 + 2;
                        uVar17 = puVar33[2];
                        LAB_00105bc8:puVar38 = local_e0;
                        if (( uVar17 == 0xd ) || ( uVar17 == 10 )) {
                           *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x800;
                           uVar18 = local_e0[1];
                        }
 else {
                           uVar18 = local_e0[1];
                        }

                        if (( uVar18 & 0xfffeffff ) == 0x801e0000) {
                           uVar18 = local_e0[2];
                           puVar38 = local_e0 + 2;
                           if (uVar18 == 0x80050000) {
                              puVar38 = local_e0 + 3;
                              uVar18 = local_e0[3];
                           }

                           if (( uVar18 == 0xd ) || ( uVar18 == 10 )) {
                              *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x800;
                           }

                           *(uint*)( param_13 + 0x20 ) = uVar17;
                           *(uint*)( (long)param_13 + 0x104 ) = uVar18;
                           local_e0 = puVar38;
                           iVar28 = add_to_class_internal(local_88, &local_c8, local_23c, local_218, param_13, uVar17, uVar18);
                           iVar29 = iVar29 + iVar28;
                        }
 else {
                           param_13[0x20] = CONCAT44(uVar17, uVar17);
                           iVar28 = add_to_class_internal(local_88, &local_c8, local_23c, local_218, param_13, uVar17, uVar17);
                           iVar29 = iVar29 + iVar28;
                        }

                        goto LAB_00104f70;
                     }

                     if (-1 < (int)uVar17) goto LAB_00105bc8;
                     if (( uVar17 & 0xffff0000 ) != 0x80180000) goto LAB_00104240;
                     switch (uVar17 & 0xffff) {
                        case 6:
                pbVar30 = pbVar7 + 0x40;
                pbVar27 = local_88;
                do {
                  bVar2 = *pbVar30;
                  pbVar30 = pbVar30 + 1;
                  *pbVar27 = *pbVar27 | ~bVar2;
                  pbVar27 = pbVar27 + 1;
                } while (pbVar27 != &local_68);
                goto LAB_0010779f;
                        case 7:
                pbVar30 = pbVar7 + 0x40;
                pbVar27 = local_88;
                do {
                  *pbVar27 = *pbVar27 | *pbVar30;
                  pbVar27 = pbVar27 + 1;
                  pbVar30 = pbVar30 + 1;
                } while (pbVar27 != &local_68);
                break;
                        case 8:
                pbVar30 = local_88;
                pbVar27 = pbVar7;
                do {
                  bVar2 = *pbVar27;
                  pbVar27 = pbVar27 + 1;
                  *pbVar30 = *pbVar30 | ~bVar2;
                  pbVar30 = pbVar30 + 1;
                } while (pbVar30 != &local_68);
                goto LAB_0010779f;
                        case 9:
                pbVar30 = local_88;
                pbVar27 = pbVar7;
                do {
                  *pbVar30 = *pbVar30 | *pbVar27;
                  pbVar30 = pbVar30 + 1;
                  pbVar27 = pbVar27 + 1;
                } while (pbVar30 != &local_68);
                break;
                        case 10:
                pbVar30 = pbVar7 + 0xa0;
                pbVar27 = local_88;
                do {
                  bVar2 = *pbVar30;
                  pbVar30 = pbVar30 + 1;
                  *pbVar27 = *pbVar27 | ~bVar2;
                  pbVar27 = pbVar27 + 1;
                } while (pbVar27 != &local_68);
LAB_0010779f:
                bVar53 = true;
                puVar38 = local_e0;
                iVar29 = iVar29 + 1;
                goto LAB_00104f70;
                        case 0xb:
                pbVar30 = pbVar7 + 0xa0;
                pbVar27 = local_88;
                do {
                  *pbVar27 = *pbVar27 | *pbVar30;
                  pbVar27 = pbVar27 + 1;
                  pbVar30 = pbVar30 + 1;
                } while (pbVar27 != &local_68);
                break;
                        case 0xf:
                        case 0x10:
                uVar18 = puVar33[2];
                bVar12 = true;
                local_c8[1] = (ushort)(uVar18 >> 0x10);
                *local_c8 = ((uVar17 & 0xffff) != 0x10) + 3;
                local_c8 = local_c8 + 3;
                puVar49[2] = (ushort)uVar18;
                puVar38 = puVar33 + 2;
                goto LAB_00104f70;
                        case 0x12:
                puVar45 = &_pcre2_hspace_list_16;
                goto LAB_0010774c;
                        case 0x13:
                puVar45 = &_pcre2_hspace_list_16;
                goto LAB_00104f44;
                        case 0x14:
                puVar45 = &_pcre2_vspace_list_16;
LAB_0010774c:
                add_not_list_to_class_isra_0
                          (local_88,&local_c8,local_23c & 0xfffffff7,local_218,param_13,puVar45);
                break;
                        case 0x15:
                puVar45 = &_pcre2_vspace_list_16;
LAB_00104f44:
                add_list_to_class_constprop_0_isra_0
                          (local_88,&local_c8,local_23c & 0xfffffff7,local_218,param_13,puVar45);
                     }

                     puVar38 = local_e0;
                     iVar29 = iVar29 + 1;
                     LAB_00104f70:if (puVar23 < local_c8) {
                        if (param_14 != (long*)0x0) {
                           lVar34 = (long)local_c8 - (long)puVar23;
                           local_c8 = puVar23;
                           *puVar21 = *puVar21 + ( lVar34 >> 1 );
                        }

                        local_1f0 = 1;
                     }

                     uVar17 = puVar38[1];
                     puVar37 = puVar38 + 1;
                     puVar33 = puVar38;
                     local_e0 = puVar37;
                  }
 while ( uVar17 != 0x800d0000 );
                  uVar17 = 0xfffffffe;
                  if (local_230 != 0xffffffff) {
                     uVar17 = local_230;
                  }

                  local_230 = uVar17;
                  if (local_1f0 != 0) {
                     puVar42 = local_c8;
                     if (( local_23c & 0x20000 ) == 0) {
                        if (bVar53 == true && !bVar12) goto LAB_0010755e;
                        if (( bVar13 ) || ( ( local_1b8 != 0x800e0000 && ( bVar53 != false ) ) )) goto LAB_0010502f;
                     }
 else if (bVar13) {
                        LAB_0010502f:*local_c8 = 2;
                        if (uVar15 == 0) {
                           local_c8[1] = 0x100;
                           local_c8[2] = 0xffff;
                           puVar42 = local_c8 + 3;
                        }
 else {
                           local_c8 = local_c8 + 1;
                           uVar17 = _pcre2_ord2utf_16(0x100);
                           local_c8 = local_c8 + uVar17;
                           uVar17 = _pcre2_ord2utf_16(0x10ffff);
                           puVar42 = local_c8 + uVar17;
                        }

                     }

                     puVar49 = puVar42 + 1;
                     local_c8 = puVar49;
                     *puVar42 = 0;
                     *local_1d8 = 0x70;
                     if (bVar12) {
                        local_1d8[2] = bVar52 | 4;
                        if (0 < iVar29) {
                           local_1d8[2] = local_1d8[2] | 2;
                           _pcre2_memmove16(local_1d8 + 0x13, puVar23, (long)puVar49 - (long)puVar23);
                           goto LAB_00107925;
                        }

                     }
 else {
                        local_1d8[2] = (ushort)bVar52;
                        if (0 < iVar29) {
                           local_1d8[2] = local_1d8[2] | 2;
                           _pcre2_memmove16(local_1d8 + 0x13, puVar23, (long)puVar49 - (long)puVar23);
                           if (( uVar19 & 0xffff0000 ) == 0x800e0000) {
                              auVar56._8_4_ = 0xffffffff;
                              auVar56._0_8_ = 0xffffffffffffffff;
                              auVar56._12_4_ = 0xffffffff;
                              local_88 = local_88 ^ auVar56;
                              local_78 = auVar56 ^ local_78;
                           }

                           LAB_00107925:*(undefined8*)( local_1d8 + 3 ) = local_88._0_8_;
                           *(undefined8*)( local_1d8 + 7 ) = local_88._8_8_;
                           puVar49 = local_c8 + 0x10;
                           *(undefined8*)( local_1d8 + 0xb ) = local_78._0_8_;
                           *(undefined8*)( local_1d8 + 0xf ) = local_78._8_8_;
                        }

                     }

                     uVar17 = puVar38[2];
                     local_1d8[1] = ( ushort )((long)puVar49 - (long)local_1d8 >> 1);
                     uVar46 = local_1f0;
                     LAB_00105f13:uVar26 = (ulong)uVar17;
                     local_1ec = local_214;
                     local_1f0 = local_210;
                     uVar17 = local_230;
                     uVar18 = local_20c;
                     goto LAB_00103956;
                  }

               }

               LAB_0010755e:*local_1d8 = ( bVar52 != bVar53 ) + 0x6e;
               if (param_14 == (long*)0x0) {
                  if (( uVar19 & 0xffff0000 ) == 0x800e0000) {
                     auVar57._8_4_ = 0xffffffff;
                     auVar57._0_8_ = 0xffffffffffffffff;
                     auVar57._12_4_ = 0xffffffff;
                     local_88 = local_88 ^ auVar57;
                     local_78 = auVar57 ^ local_78;
                  }

                  *(undefined8*)( local_1d8 + 1 ) = local_88._0_8_;
                  *(undefined8*)( local_1d8 + 5 ) = local_88._8_8_;
                  *(undefined8*)( local_1d8 + 9 ) = local_78._0_8_;
                  *(undefined8*)( local_1d8 + 0xd ) = local_78._8_8_;
               }

               uVar26 = (ulong)puVar37[1];
               puVar49 = local_1d8 + 0x11;
               puVar33 = puVar37;
               goto LAB_0010456b;
            }

            puVar33 = puVar37 + 2;
            local_e0 = puVar33;
            if (uVar41 == 0x800a0000) goto LAB_0010557a;
            uVar17 = 0xfffffffe;
            if (local_230 != 0xffffffff) {
               uVar17 = local_230;
            }

            if (( local_1e0 & 0xa0000 ) == 0) {
               if (( local_23c & 8 ) == 0) {
                  *local_1d8 = 0x1f;
               }
 else {
                  *local_1d8 = 0x20;
               }

               LAB_001065b3:local_1d8[1] = (ushort)uVar46;
               lVar34 = 2;
               LAB_001065bd:puVar49 = (ushort*)( (long)local_1d8 + lVar34 + 2 );
            }
 else {
               if (( local_23c & 8 ) == 0) {
                  uVar31 = 0x1f;
                  LAB_0010759e:*local_1d8 = uVar31;
                  if (( uVar46 < 0x10000 ) || ( uVar15 == 0 )) goto LAB_001065b3;
                  uVar18 = _pcre2_ord2utf_16(uVar26, local_1d8 + 1);
                  lVar34 = (ulong)uVar18 * 2;
                  goto LAB_001065bd;
               }

               bVar2 = ( &DAT_0011001b )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar46 >> 7 ) * 2 ) * 0x80 + ( uVar46 & 0x7f ) ) * 2 ) * 0xc];
               if (( bVar2 == 0 ) || ( ( ( local_218 & 0x80 ) != 0 && ( *(uint*)( &_pcre2_ucd_caseless_sets_16 + (ulong)bVar2 * 4 ) < 0x80 ) ) )) {
                  uVar31 = 0x20;
                  goto LAB_0010759e;
               }

               local_1d8[0] = 0xf;
               local_1d8[1] = 10;
               puVar49 = local_1d8 + 3;
               local_1d8[2] = (ushort)bVar2;
            }

            uVar26 = (ulong)puVar37[3];
            local_230 = uVar17;
            LAB_0010456b:uVar46 = 1;
            local_1ec = local_214;
            local_1f0 = local_210;
            puVar37 = puVar33;
            uVar17 = local_230;
            uVar18 = local_20c;
            LAB_00103956:local_20c = uVar47;
            puVar37 = puVar37 + 1;
            local_e0 = puVar37;
            puVar23 = local_1d8;
            local_1d8 = puVar49;
            goto LAB_00103962;
         }

         puVar33 = puVar37;
         if (0x800e0000 < uVar41) {
            if (uVar41 == 0x80150000) {
               uVar46 = puVar37[2];
               if (puVar37[1] == 0) {
                  uVar31 = 0x95;
                  if (uVar46 == 10) {
                     uVar31 = ( puVar37[3] == 0x2b ) + 0x95;
                  }

               }
 else {
                  uVar31 = 0x96;
                  if (( 9 < uVar46 ) && ( uVar31 = uVar46 == 10 )) {
                     uVar31 = ~-(ushort)(puVar37[3] < 0x2c) + 0x96;
                  }

               }

               local_1d8[2] = uVar31;
               puVar37 = puVar37 + 3;
               uVar31 = 0x8b;
               uVar44 = 1;
               bVar52 = true;
               iVar29 = 0x8b;
               goto LAB_00103800;
            }

            if (uVar41 < 0x80150001) {
               if (uVar41 == 0x80110000) {
                  LAB_00104a37:puVar33 = puVar37 + 3;
                  uVar46 = puVar37[1];
                  puVar35 = (undefined8*)param_13[0x17];
                  local_1e8 = CONCAT44(puVar37[2], puVar37[3]);
                  lVar34 = param_13[7] + local_1e8 * 2;
                  local_e0 = puVar33;
                  if ((short)param_13[0x16] != 0) {
                     uVar41 = 0;
                     local_238 = uVar19 & 0xffff0000;
                     do {
                        if (( uVar46 == *(ushort*)( (long)puVar35 + 0xc ) ) && ( iVar14 = iVar14 == 0 )) {
                           if (*(short*)( (long)puVar35 + 0xe ) == 0) {
                              local_1d8[2] = ( local_238 == 0x80130000 ) + 0x91 + ( ushort )(local_238 == 0x80130000);
                              uVar46 = *(uint*)( puVar35 + 1 );
                              local_1d8[3] = (ushort)uVar46;
                              if (*(uint*)( param_13 + 0x1e ) < uVar46) {
                                 *(uint*)( param_13 + 0x1e ) = uVar46;
                              }

                              goto LAB_00105356;
                           }

                           if (uVar41 < *(ushort*)( param_13 + 0x16 )) {
                              local_ec = 0;
                              uVar31 = ( ushort )(local_238 == 0x80130000) * 2 + 0x91;
                              local_1d8[2] = uVar31;
                              local_c0 = 0;
                              uStack_be = 0;
                              if (param_14 == (long*)0x0) {
                                 iVar14 = find_dupname_details_constprop_0(lVar34, uVar46, &local_c0, &local_ec, param_5, param_13);
                                 if (iVar14 == 0) goto LAB_00103f12;
                                 uVar31 = local_1d8[2];
                              }
 else {
                                 local_ec._0_2_ = 0;
                              }

                              local_1d8[3] = local_c0;
                              uVar44 = 3;
                              bVar52 = true;
                              local_1d8[2] = uVar31 + 1;
                              iVar29 = 0x8b;
                              uVar31 = 0x8b;
                              local_1d8[4] = (ushort)local_ec;
                              puVar37 = puVar33;
                              goto LAB_00103800;
                           }

                           break;
                        }

                        uVar41 = uVar41 + 1;
                        puVar35 = puVar35 + 2;
                     }
 while ( uVar41 < *(ushort*)( param_13 + 0x16 ) );
                  }

                  if (( uVar19 & 0xffff0000 ) != 0x80140000) {
                     LAB_00107249:*param_5 = 0x73;
                     param_13[0x15] = local_1e8;
                     goto LAB_00103f12;
                  }

                  if (uVar46 < 2) {
                     uVar31 = 0xffff;
                  }
 else {
                     uVar41 = *(ushort*)( lVar34 + 2 ) - 0x30;
                     if (0xffff < uVar41) {
                        uVar48 = 1;
                        LAB_00106cdb:*param_5 = 0xa1;
                        param_13[0x15] = local_1e8 + uVar48;
                        goto LAB_00103f12;
                     }

                     uVar26 = 2;
                     while (uVar48 = uVar26,uVar48 != uVar46) {
                        uVar41 = ( *(ushort*)( lVar34 + uVar48 * 2 ) - 0x30 ) + uVar41 * 10;
                        uVar26 = uVar48 + 1;
                        if (0xffff < uVar41) goto LAB_00106cdb;
                     }
;
                     if (*(uint*)( (long)param_13 + 0xcc ) < uVar41) goto LAB_00107249;
                     uVar31 = (ushort)uVar41;
                     if (uVar41 == 0) {
                        uVar31 = 0xffff;
                     }

                  }

                  local_1d8[3] = uVar31;
                  local_1d8[2] = 0x93;
               }
 else {
                  if (uVar41 < 0x80110001) {
                     if (uVar41 == 0x800f0000) {
                        uVar31 = 0x8b;
                        uVar44 = 0;
                        bVar52 = true;
                        iVar29 = 0x8b;
                     }
 else {
                        if (uVar41 != 0x80100000) goto LAB_00104240;
                        uVar46 = puVar37[1];
                        uVar41 = puVar37[2];
                        local_1d8[2] = 0xa8;
                        uVar44 = 1;
                        bVar52 = false;
                        iVar29 = 0x8b;
                        local_1e8 = CONCAT44(uVar46, uVar41);
                        uVar31 = 0x8b;
                        puVar37 = puVar37 + 2;
                     }

                     goto LAB_00103800;
                  }

                  if (uVar41 != 0x80120000) {
                     if (( uVar41 < 0x80120000 ) || ( ( uVar41 + 0x7fed0000 & 0xfffe0000 ) != 0 )) goto LAB_00104240;
                     goto LAB_00104a37;
                  }

                  uVar46 = puVar37[1];
                  uVar41 = puVar37[2];
                  uVar19 = puVar37[3];
                  if (*(uint*)( (long)param_13 + 0xcc ) < uVar19) {
                     *param_5 = 0x73;
                     param_13[0x15] = CONCAT44(uVar46, uVar41);
                     local_e0 = puVar37 + 3;
                     goto LAB_00103f12;
                  }

                  if (*(uint*)( param_13 + 0x1e ) < uVar19) {
                     *(uint*)( param_13 + 0x1e ) = uVar19;
                  }

                  local_1e8 = CONCAT44(uVar46, uVar41) + -2;
                  local_1d8[3] = (ushort)uVar19;
                  local_1d8[2] = 0x91;
               }

               LAB_00105356:uVar31 = 0x8b;
               uVar44 = 2;
               bVar52 = true;
               iVar29 = 0x8b;
               puVar37 = puVar37 + 3;
               goto LAB_00103800;
            }

            if (uVar41 != 0x80180000) {
               if (uVar41 < 0x80180001) {
                  if (uVar41 == 0x80160000) {
                     uVar26 = (ulong)puVar37[1];
                     puVar49 = local_1d8 + 1;
                     uVar46 = 0;
                     *local_1d8 = ( ( local_23c & 0x400 ) != 0 ) + 0x19;
                     goto LAB_00103956;
                  }

                  if (uVar41 == 0x80170000) {
                     uVar26 = (ulong)puVar37[1];
                     puVar49 = local_1d8 + 1;
                     uVar17 = 0xfffffffe;
                     if (local_230 != 0xffffffff) {
                        uVar17 = local_230;
                     }

                     *local_1d8 = ( ( local_23c & 0x20 ) != 0 ) + 0xc;
                     local_230 = uVar17;
                     goto LAB_0010456b;
                  }

                  goto LAB_00104240;
               }

               if (uVar41 == 0x80190000) {
                  if (-1 < (int)uVar16) {
                     if (param_14 == (long*)0x0) goto LAB_0010689a;
                     goto LAB_00106a0e;
                  }

                  if (param_14 == (long*)0x0) {
                     uVar39 = 0xffffffff;
                     goto LAB_0010689a;
                  }

                  uVar39 = 0xffffffff;
                  goto LAB_00106a0e;
               }

               if (uVar41 == 0x801a0000) {
                  uVar31 = 0x87;
                  uVar44 = 0;
                  bVar52 = true;
                  iVar29 = 0x87;
                  goto LAB_00103800;
               }

               goto LAB_00104240;
            }

            if (0x10 < uVar20 - 6) {
               if (( *(short*)( (long)param_13 + 0xb6 ) == 0 ) || ( uVar20 != 3 )) {
                  if (5 < uVar20) {
                     LAB_001067fc:uVar46 = 0;
                     goto LAB_00105f07;
                  }

                  if (( uVar26 & 0xfffc ) == 0) {
                     uVar48 = 1;
                     if (uVar20 != 1) goto LAB_001067fc;
                  }
 else {
                     uVar48 = uVar26;
                     if (( ( local_23c & 0x20000 ) != 0 ) && ( ( local_218 & 0x400 ) == 0 )) {
                        uVar48 = ( ulong )(ushort)(( uVar20 != 4 ) + 0xa9);
                     }

                  }

                  if ((int)param_13[0x23] == 0) {
                     *(undefined4*)( param_13 + 0x23 ) = 1;
                  }

               }
 else {
                  if (( local_218 & 0x40 ) == 0) {
                     *param_5 = 199;
                     goto LAB_00103f12;
                  }

                  uVar48 = 3;
               }

               uVar46 = 0;
               uVar26 = uVar48;
               LAB_00105f07:*local_1d8 = (ushort)uVar26;
               uVar17 = puVar37[1];
               puVar49 = local_1d8 + 1;
               goto LAB_00105f13;
            }

            puVar33 = puVar37 + 1;
            uVar17 = 0xfffffffe;
            if (local_230 != 0xffffffff) {
               uVar17 = local_230;
            }

            local_230 = uVar17;
            if (1 < uVar20 - 0xf) {
               if (uVar20 == 0xe) {
                  *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x400000;
                  uVar46 = 1;
                  uVar26 = ( ulong )(0xe - ( uVar15 == 0 ));
               }
 else {
                  uVar46 = 1;
               }

               goto LAB_00105f07;
            }

            uVar17 = puVar37[1];
            if (( uVar20 == 0x10 ) && ( uVar17 >> 0x10 == 0 )) {
               puVar49 = local_1d8 + 1;
               *local_1d8 = 0xd;
               uVar26 = (ulong)puVar37[2];
            }
 else {
               local_1d8[1] = ( ushort )(uVar17 >> 0x10);
               uVar26 = (ulong)puVar37[2];
               local_1d8[2] = (ushort)uVar17;
               puVar49 = local_1d8 + 3;
               *local_1d8 = ( uVar20 == 0x10 ) + 0xf;
            }

            goto LAB_0010456b;
         }

         if (uVar41 == 0x80060000) {
            uVar41 = puVar37[1];
            uVar26 = (ulong)puVar37[4];
            *local_1d8 = 0x76;
            uVar46 = 0;
            local_1d8[1] = (ushort)uVar41;
            local_1d8[2] = (ushort)puVar37[2];
            local_1d8[3] = (ushort)puVar37[3];
            puVar49 = local_1d8 + DAT_0011009e;
            puVar37 = puVar37 + 3;
            goto LAB_00103956;
         }

         if (0x80060000 < uVar41) {
            if (uVar41 != 0x80090000) {
               if (uVar41 < 0x80090001) {
                  if (uVar41 == 0x80070000) {
                     uVar41 = puVar37[3];
                     if (param_14 == (long*)0x0) {
                        uVar46 = puVar37[1];
                        uVar19 = puVar37[5];
                        *local_1d8 = 0x77;
                        local_1d8[1] = (ushort)uVar46;
                        local_1d8[2] = (ushort)puVar37[2];
                        local_1e8 = CONCAT44(puVar37[4], uVar19);
                        puVar23 = local_1d8 + 6;
                        puVar49 = (ushort*)( param_13[7] + local_1e8 * 2 );
                        uVar31 = *puVar49;
                        local_1d8[5] = uVar31;
                        if (uVar31 == 0x7b) {
                           uVar31 = 0x7d;
                        }

                        local_1d8[4] = (short)uVar19 + 1;
                        do {
                           puVar49 = puVar49 + 1;
                           uVar46 = uVar41;
                           puVar42 = puVar23;
                           uVar41 = uVar41 - 1;
                           while (true) {
                              if (uVar41 < 2) {
                                 puVar49 = puVar42 + 1;
                                 uVar46 = 0;
                                 *puVar42 = 0;
                                 uVar26 = (ulong)puVar37[6];
                                 local_1d8[3] = ( ushort )((long)puVar49 - (long)local_1d8 >> 1);
                                 puVar37 = puVar37 + 5;
                                 goto LAB_00103956;
                              }

                              puVar23 = puVar42 + 1;
                              if (( *puVar49 != uVar31 ) || ( uVar31 != puVar49[1] )) break;
                              puVar49 = puVar49 + 2;
                              uVar41 = uVar46 - 3;
                              *puVar42 = uVar31;
                              uVar46 = uVar46 - 2;
                              puVar42 = puVar23;
                           }
;
                           *puVar42 = *puVar49;
                        }
 while ( true );
                     }

                     uVar26 = (ulong)puVar37[6];
                     uVar46 = 0;
                     *puVar21 = *puVar21 + ( ulong )(uVar41 + 5);
                     puVar37 = puVar37 + 5;
                     goto LAB_00103956;
                  }

                  if (uVar41 == 0x80080000) {
                     local_1d8[2] = (ushort)uVar26;
                     uVar31 = 0x89;
                     uVar44 = 1;
                     iVar29 = 0x89;
                     *(uint*)( param_13 + 0x1a ) = uVar20;
                     bVar52 = true;
                     goto LAB_00103800;
                  }

               }
 else {
                  if (( uVar41 + 0x7ff50000 & 0xfffe0000 ) == 0) {
                     uVar26 = (ulong)puVar37[1];
                     uVar31 = 0xa3;
                     if (uVar41 == 0x800c0000) {
                        uVar31 = 0xd;
                     }

                     puVar49 = local_1d8 + 1;
                     *local_1d8 = uVar31;
                     if (local_230 == 0xffffffff) {
                        uVar17 = 0xfffffffe;
                        uVar46 = 1;
                        local_230 = 0xfffffffe;
                        uVar18 = local_20c;
                     }
 else {
                        uVar46 = 1;
                        uVar17 = local_230;
                        uVar18 = local_20c;
                     }

                     goto LAB_00103956;
                  }

                  if (uVar41 == 0x800a0000) goto LAB_00104d35;
               }

               goto LAB_00104240;
            }

            uVar26 = (ulong)puVar37[1];
            puVar49 = local_1d8 + 1;
            if (( local_23c & 0x400 ) == 0) {
               *local_1d8 = 0x1b;
               uVar46 = 0;
            }
 else {
               if (local_230 == 0xffffffff) {
                  uVar17 = 0xfffffffe;
                  local_230 = 0xfffffffe;
               }

               uVar46 = 0;
               *local_1d8 = 0x1c;
            }

            goto LAB_00103956;
         }

         if (uVar41 == 0x80030000) {
            if (uVar20 < 10) {
               local_1e8 = param_13[uVar48 + 0xb];
            }
 else {
               local_e0 = puVar37 + 2;
               local_1e8 = CONCAT44(puVar37[1], puVar37[2]);
            }

            if (*(uint*)( (long)param_13 + 0xcc ) < uVar20) {
               param_13[0x15] = local_1e8;
               *param_5 = 0x73;
               goto LAB_00103f12;
            }

            LAB_001049a8:if (local_230 == 0xffffffff) {
               uVar17 = 0xfffffffe;
               local_230 = 0xfffffffe;
            }

            uVar41 = (uint)uVar48;
            local_1d8[1] = (ushort)uVar48;
            puVar49 = local_1d8 + 2;
            *local_1d8 = ( ( local_23c & 8 ) != 0 ) + 0x71;
            uVar46 = 1 << ( (byte)uVar48 & 0x1f );
            if (0x1f < uVar41) {
               uVar46 = 1;
            }

            *(uint*)( (long)param_13 + 0xf4 ) = *(uint*)( (long)param_13 + 0xf4 ) | uVar46;
            if (*(uint*)( param_13 + 0x1e ) < uVar41) {
               *(uint*)( param_13 + 0x1e ) = uVar41;
            }

            uVar46 = 0;
            uVar26 = (ulong)local_e0[1];
            puVar37 = local_e0;
            goto LAB_00103956;
         }

         if (0x80030000 < uVar41) {
            if (uVar41 != 0x80040000) {
               if (uVar41 != 0x80050000) goto LAB_00104240;
               puVar33 = puVar37 + 1;
               uVar26 = (ulong)puVar37[1];
               local_e0 = puVar33;
               LAB_0010557a:iVar29 = (int)uVar26;
               uVar41 = local_23c & 8;
               if (( ( local_1e0 & 0xa0000 ) != 0 ) && ( uVar41 != 0 )) {
                  iVar28 = iVar29 + 0x7f;
                  if (-1 < iVar29) {
                     iVar28 = iVar29;
                  }

                  bVar2 = ( &DAT_0011001b )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( iVar28 >> 7 ) * 2 ) * 0x80 + iVar29 % 0x80 ) * 2 ) * 0xc];
                  if (( bVar2 != 0 ) && ( ( ( local_218 & 0x80 ) == 0 || ( 0x7f < *(uint*)( &_pcre2_ucd_caseless_sets_16 + (ulong)bVar2 * 4 ) ) ) )) {
                     uVar26 = (ulong)puVar33[1];
                     local_1d8[2] = (ushort)bVar2;
                     puVar49 = local_1d8 + 3;
                     local_1d8[0] = 0x10;
                     local_1d8[1] = 10;
                     uVar46 = 1;
                     puVar37 = puVar33;
                     if (local_230 == 0xffffffff) {
                        local_230 = 0xfffffffe;
                        uVar17 = 0xfffffffe;
                     }

                     goto LAB_00103956;
                  }

                  goto LAB_0010560b;
               }

               uVar46 = 0;
               local_1f0 = local_1dc ^ 1;
               uVar17 = 0;
               if (uVar15 != 0) goto LAB_00105780;
               LAB_00105638:uVar46 = uVar17;
               bVar52 = true;
               lVar34 = 2;
               __n = 2;
               uVar17 = 1;
               local_98[0] = CONCAT22(local_98[0]._2_2_, (short)uVar26);
               LAB_0010565d:puVar49 = (ushort*)( (long)( local_1d8 + 1 ) + lVar34 );
               *local_1d8 = 0x1e - ( uVar41 == 0 );
               memcpy(local_1d8 + 1, local_98, __n);
               uVar41 = local_210;
               uVar19 = local_214;
               if (( (short)local_98[0] == 0xd ) || ( (short)local_98[0] == 10 )) {
                  *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x800;
                  if (local_230 != 0xffffffff) goto LAB_001056b9;
                  LAB_0010592f:if (( uVar17 == 1 ) || ( local_1dc == 0 )) {
                     local_20c = local_98[0] & 0xffff;
                     if (uVar17 == 1) {
                        local_230 = local_1dc;
                        uVar17 = 0xfffffffe;
                     }
 else {
                        local_230 = local_1dc;
                        uVar41 = (uint)puVar49[-1];
                        uVar19 = *(uint*)( param_13 + 0x22 );
                        uVar17 = 0xfffffffe;
                     }

                  }
 else {
                     local_230 = 0xfffffffe;
                     uVar19 = 0xfffffffe;
                     uVar17 = 0xfffffffe;
                  }

               }
 else {
                  if (local_230 == 0xffffffff) goto LAB_0010592f;
                  LAB_001056b9:if (( local_1f0 != 0 ) || ( uVar17= local_230,uVar18 = local_20c,bVar52 )) {
                     uVar41 = (uint)puVar49[-1];
                     uVar19 = local_1dc | *(uint*)( param_13 + 0x22 );
                     uVar17 = local_230;
                     uVar18 = local_20c;
                  }

               }

               uVar26 = (ulong)puVar33[1];
               puVar37 = puVar33;
               uVar47 = local_20c;
               if (uVar46 == 0) {
                  uVar46 = 1;
                  local_1ec = local_214;
                  local_1f0 = local_210;
                  local_214 = uVar19;
                  local_210 = uVar41;
               }
 else {
                  local_23c = local_23c & 0xfffffff7;
                  local_1ec = local_214;
                  local_1dc = 0;
                  local_1f0 = local_210;
                  local_214 = uVar19;
                  local_210 = uVar41;
               }

               goto LAB_00103956;
            }

            LAB_001057d6:puVar35 = (undefined8*)param_13[0x17];
            uVar46 = puVar37[1];
            local_1e8 = CONCAT44(puVar37[2], puVar37[3]);
            puVar33 = puVar37 + 3;
            lVar34 = param_13[7] + local_1e8 * 2;
            local_e0 = puVar33;
            if ((short)param_13[0x16] == 0) goto LAB_00107249;
            uVar16 = 0;
            uVar19 = 0;
            sVar3 = 0;
            do {
               if (( uVar46 == *(ushort*)( (long)puVar35 + 0xc ) ) && ( iVar29 = iVar29 == 0 )) {
                  sVar3 = *(short*)( (long)puVar35 + 0xe );
                  uVar19 = *(uint*)( puVar35 + 1 );
                  if (uVar41 == 0x80210000) {
                     uVar48 = (ulong)uVar19;
                     goto LAB_0010540b;
                  }

                  uVar20 = 1 << ( (byte)uVar19 & 0x1f );
                  if (0x1f < uVar19) {
                     uVar20 = 1;
                  }

                  *(uint*)( (long)param_13 + 0xf4 ) = *(uint*)( (long)param_13 + 0xf4 ) | uVar20;
                  if (*(uint*)( param_13 + 0x1e ) < uVar19) {
                     *(uint*)( param_13 + 0x1e ) = uVar19;
                  }

               }

               uVar16 = uVar16 + 1;
               puVar35 = puVar35 + 2;
            }
 while ( uVar16 < *(ushort*)( param_13 + 0x16 ) );
            uVar48 = (ulong)uVar19;
            if (uVar19 != 0) {
               if (sVar3 == 0) goto LAB_001049a8;
               local_ec = 0;
               local_ec._0_2_ = 0;
               local_c0 = 0;
               uStack_be = 0;
               if (param_14 == (long*)0x0) {
                  iVar29 = find_dupname_details_constprop_0(lVar34, uVar46, &local_c0, &local_ec);
                  if (iVar29 == 0) goto LAB_00103f12;
               }

               uVar26 = (ulong)puVar37[4];
               puVar49 = local_1d8 + 3;
               local_1d8[1] = local_c0;
               local_1d8[2] = (ushort)local_ec;
               uVar41 = 0xfffffffe;
               if (local_230 != 0xffffffff) {
                  uVar41 = local_230;
               }

               uVar46 = 0;
               *local_1d8 = ( ( local_23c & 8 ) != 0 ) + 0x73;
               puVar37 = puVar33;
               local_230 = uVar41;
               goto LAB_00103956;
            }

            goto LAB_00107249;
         }

         if (uVar41 == 0x80020000) {
            uVar31 = 0x85;
            uVar44 = 0;
            bVar52 = true;
            iVar29 = 0x85;
            goto LAB_00103800;
         }

         if (0x80020000 < uVar41) goto LAB_00104240;
         if (( uVar19 & 0xfffe0000 ) != 0x80000000) {
            if (-1 < (int)uVar41) goto LAB_0010557a;
            goto LAB_00104240;
         }

         if ((int)uVar16 < 0) {
            uVar39 = 0xffffffff;
         }

         if (param_14 == (long*)0x0) {
            LAB_0010689a:if (*local_180 == 0x78) {
               if (( local_154 == local_230 ) && ( local_14c == local_20c )) {
                  if (0xfffffffd < local_230) {
                     LAB_0010696f:local_230 = local_154;
                  }

                  local_20c = local_210;
               }
 else {
                  if (( local_154 < 0xfffffffe ) && ( 0xfffffffd < local_150 )) {
                     local_150 = local_154;
                     local_148 = local_14c;
                  }

                  local_154 = 0xfffffffe;
                  if (( 0xfffffffd < local_230 ) || ( local_154 = local_214 < 0xfffffffe )) goto LAB_0010696f;
                  local_214 = local_230;
                  local_230 = 0xfffffffe;
               }

               local_210 = local_148;
               if (( ( ( local_214 ^ local_150 ) & 0xfffffffd ) == 0 ) && ( local_20c == local_148 )) {
                  local_214 = local_214 | local_150;
                  local_20c = local_14c;
               }
 else {
                  local_20c = local_14c;
                  local_214 = 0xfffffffe;
               }

            }

            local_248 = local_1d8 + 2;
            if (uVar41 != 0x80010000) {
               uVar48 = (long)local_1d8 - (long)local_180 >> 1;
               do {
                  uVar26 = (ulong)local_180[1];
                  local_180[1] = (ushort)uVar48;
                  local_180 = local_180 + -uVar26;
                  uVar48 = uVar26;
               }
 while ( uVar26 != 0 );
               local_1d8[1] = ( ushort )((long)local_1d8 - (long)puVar5 >> 1);
               *local_1d8 = 0x79;
               *param_3 = (long)local_248;
               *param_4 = puVar37;
               *param_7 = local_20c;
               *param_8 = local_230;
               *param_9 = local_210;
               *param_10 = local_214;
               goto LAB_00103f15;
            }

            local_150 = local_214;
            *local_1d8 = 0x78;
            local_154 = local_230;
            local_148 = local_210;
            local_14c = local_20c;
            local_1d8[1] = ( ushort )((long)local_1d8 - (long)local_180 >> 1);
            local_a8._8_8_ = local_1d8;
            local_180 = local_1d8;
         }
 else {
            if (uVar41 != 0x80010000) goto LAB_00106a0e;
            local_e8 = local_e8 + 2;
            local_248 = (ushort*)( ( ulong )(param_6 + 2) * 2 + *param_3 );
         }

         puVar37 = puVar37 + 1;
         local_1e0 = local_1c4;
      }
 while ( true );
   }

   *param_5 = 0x85;
   LAB_00103f12:uVar39 = 0;
   LAB_00103f15:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar39;
   LAB_00106a0e:*local_1d8 = 0x79;
   lVar34 = *param_14;
   local_1d8[1] = ( ushort )((long)local_1d8 - (long)puVar5 >> 1);
   *param_3 = (long)( local_1d8 + 2 );
   *param_4 = puVar37;
   *param_7 = local_14c;
   *param_8 = local_154;
   *param_9 = local_148;
   *param_10 = local_150;
   if (local_e8 <= 0x7fffffebU - lVar34) {
      *param_14 = lVar34 + local_e8;
      goto LAB_00103f15;
   }

   LAB_001052e0:*param_5 = 0x78;
   goto LAB_00103f12;
}
void *pcre2_code_copy_16(undefined8 *param_1) {
   void *pvVar1;
   if (param_1 == (undefined8*)0x0) {
      return (void*)0x0;
   }

   pvVar1 = (void*)( *(code*)*param_1 )(param_1[9], param_1[2]);
   if (pvVar1 != (void*)0x0) {
      pvVar1 = memcpy(pvVar1, param_1, param_1[9]);
      *(undefined8*)( (long)pvVar1 + 0x20 ) = 0;
      if (( *(byte*)( (long)param_1 + 0x62 ) & 4 ) != 0) {
         *(long*)( param_1[3] + 0x440 ) = *(long*)( param_1[3] + 0x440 ) + 1;
      }

      return pvVar1;
   }

   return (void*)0x0;
}
void *pcre2_code_copy_with_tables_16(undefined8 *param_1) {
   undefined8 uVar1;
   void *__dest;
   undefined8 *puVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   byte bVar7;
   bVar7 = 0;
   if (param_1 != (undefined8*)0x0) {
      __dest = (void*)( *(code*)*param_1 )(param_1[9], param_1[2]);
      if (__dest != (void*)0x0) {
         memcpy(__dest, param_1, param_1[9]);
         uVar1 = param_1[2];
         *(undefined8*)( (long)__dest + 0x20 ) = 0;
         puVar2 = (undefined8*)( *(code*)*param_1 )(0x448, uVar1);
         if (puVar2 != (undefined8*)0x0) {
            puVar5 = (undefined8*)param_1[3];
            lVar3 = (long)puVar2 - (long)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
            *puVar2 = *puVar5;
            puVar2[0x87] = puVar5[0x87];
            puVar5 = (undefined8*)( (long)puVar5 - lVar3 );
            puVar6 = (undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
            for (uVar4 = ( ulong )((int)lVar3 + 0x440U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
               *puVar6 = *puVar5;
               puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
               puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
            }

            puVar2[0x88] = 1;
            *(undefined8**)( (long)__dest + 0x18 ) = puVar2;
            *(uint*)( (long)__dest + 0x60 ) = *(uint*)( (long)__dest + 0x60 ) | 0x40000;
            return __dest;
         }

         ( *(code*)param_1[1] )(__dest, param_1[2]);
      }

   }

   return (void*)0x0;
}
void pcre2_code_free_16(long param_1) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long lVar2;
   undefined8 uVar3;
   if (param_1 != 0) {
      if (*(long*)( param_1 + 0x20 ) != 0) {
         _pcre2_jit_free_16(*(long*)( param_1 + 0x20 ), param_1);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 8 );
      uVar3 = *(undefined8*)( param_1 + 0x10 );
      if (( *(byte*)( param_1 + 0x62 ) & 4 ) != 0) {
         lVar1 = *(long*)( param_1 + 0x18 );
         if (*(long*)( lVar1 + 0x440 ) != 0) {
            lVar2 = *(long*)( lVar1 + 0x440 ) + -1;
            *(long*)( lVar1 + 0x440 ) = lVar2;
            if (lVar2 == 0) {
               ( *UNRECOVERED_JUMPTABLE )(lVar1, uVar3);
               UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 8 );
               uVar3 = *(undefined8*)( param_1 + 0x10 );
            }

         }

      }

      /* WARNING: Could not recover jumptable at 0x00107d07. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(param_1, uVar3);
      return;
   }

   return;
}
long pcre2_compile_16(ushort *param_1, long param_2, uint param_3, undefined4 *param_4, undefined8 *param_5, undefined8 param_6) {
   short *psVar1;
   ulong uVar2;
   short sVar3;
   ushort uVar4;
   undefined2 uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   code *pcVar8;
   undefined8 *puVar9;
   int *piVar10;
   short *psVar11;
   undefined8 uVar12;
   bool bVar13;
   ushort uVar14;
   int iVar15;
   uint uVar16;
   uint uVar17;
   undefined4 uVar18;
   uint uVar19;
   int iVar20;
   undefined *puVar21;
   undefined8 uVar22;
   uint *puVar23;
   uint *puVar24;
   void *pvVar25;
   undefined8 *puVar26;
   ulong uVar27;
   uint *puVar28;
   long lVar29;
   ushort *puVar30;
   uint *puVar31;
   undefined8 uVar32;
   uint uVar33;
   long lVar34;
   long extraout_RDX;
   ushort *puVar35;
   size_t __n;
   undefined1 *puVar36;
   undefined2 *puVar37;
   ulong uVar38;
   uint uVar39;
   undefined *puVar40;
   char *pcVar41;
   char cVar42;
   uint uVar43;
   ushort *puVar44;
   ushort *puVar45;
   undefined2 uVar46;
   ushort *puVar47;
   ushort *puVar48;
   long lVar49;
   ulong uVar50;
   undefined **ppuVar51;
   int iVar52;
   undefined8 *puVar53;
   undefined1 *puVar54;
   undefined2 *puVar55;
   long in_FS_OFFSET;
   bool bVar56;
   bool bVar57;
   undefined8 extraout_XMM0_Qa;
   undefined8 extraout_XMM0_Qa_00;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM1_Qa;
   undefined8 extraout_XMM1_Qb;
   undefined1 auVar59[16];
   undefined1 local_4030[16384];
   undefined1 auVar58[16];
   puVar54 = &stack0xffffffffffffffd0;
   do {
      puVar36 = puVar54;
      *(undefined8*)( puVar36 + -0x1000 ) = *(undefined8*)( puVar36 + -0x1000 );
      puVar54 = puVar36 + -0x1000;
   }
 while ( puVar36 + -0x1000 != local_4030 );
   *(long*)( puVar36 + -0x1788 ) = param_2;
   *(undefined4**)( puVar36 + -0x1760 ) = param_4;
   *(undefined8**)( puVar36 + -0x1750 ) = param_5;
   *(undefined8*)( puVar36 + -0x1778 ) = param_6;
   *(undefined8*)( puVar36 + 0x2ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( puVar36 + -0x1618 ) = 1;
   *(undefined4*)( puVar36 + -0x1640 ) = 0;
   if (param_4 == (undefined4*)0x0 || param_5 == (undefined8*)0x0) {
      LAB_00109037:lVar49 = 0;
      goto LAB_00109040;
   }

   *param_4 = 100;
   *param_5 = 0;
   if (( param_1 == (ushort*)0x0 ) && ( param_1 = param_2 != 0 )) {
      *param_4 = 0x74;
      goto LAB_00109037;
   }

   puVar40 = &_pcre2_default_compile_context_16;
   if (*(undefined**)( puVar36 + -0x1778 ) != (undefined*)0x0) {
      puVar40 = *(undefined**)( puVar36 + -0x1778 );
   }

   *(undefined**)( puVar36 + -0x1778 ) = puVar40;
   if (( param_3 & 0x4000000 ) != 0) {
      param_3 = param_3 | 0x80000;
   }

   if (( ( param_3 & 0x18000000 ) != 0 ) || ( 0x1fff < *(uint*)( puVar40 + 0x40 ) )) {
      **(undefined4**)( puVar36 + -0x1760 ) = 0x75;
      goto LAB_00109037;
   }

   if (( ( param_3 & 0x2000000 ) != 0 ) && ( ( param_3 & 0x1976fef3 ) != 0 || ( *(uint*)( puVar40 + 0x40 ) & 0xffffff73 ) != 0 )) {
      **(undefined4**)( puVar36 + -0x1760 ) = 0xc0;
      goto LAB_00109037;
   }

   if (*(long*)( puVar36 + -0x1788 ) == -1) {
      *(undefined8*)( puVar36 + -0x1790 ) = 0x1092b3;
      uVar22 = _pcre2_strlen_16(param_1);
      *(undefined8*)( puVar36 + -0x1788 ) = uVar22;
   }

   if (*(ulong*)( *(long*)( puVar36 + -0x1778 ) + 0x30 ) < *(ulong*)( puVar36 + -0x1788 )) {
      **(undefined4**)( puVar36 + -0x1760 ) = 0xbc;
      goto LAB_00109037;
   }

   lVar49 = *(long*)( puVar36 + -0x1778 );
   *(undefined8*)( puVar36 + -0x14c0 ) = 0;
   *(uint*)( puVar36 + -0x14a4 ) = param_3;
   puVar40 = *(undefined**)( lVar49 + 0x28 );
   *(long*)( puVar36 + -0x1568 ) = lVar49;
   *(undefined8*)( puVar36 + -0x1444 ) = 0;
   *(undefined8*)( puVar36 + -0x14a0 ) = 0;
   puVar21 = &_pcre2_default_tables_16;
   if (puVar40 != (undefined*)0x0) {
      puVar21 = puVar40;
   }

   *(undefined4*)( puVar36 + -0x1498 ) = 0;
   *(undefined4*)( puVar36 + -0x1450 ) = 0;
   *(undefined**)( puVar36 + -0x16b0 ) = puVar21;
   *(undefined**)( puVar36 + -0x1560 ) = puVar21;
   *(undefined**)( puVar36 + -0x1558 ) = puVar21 + 0x100;
   *(undefined**)( puVar36 + -0x1550 ) = puVar21 + 0x200;
   *(undefined**)( puVar36 + -0x1548 ) = puVar21 + 0x340;
   *(undefined8*)( puVar36 + -0x1520 ) = 0;
   *(undefined4*)( puVar36 + -0x14a8 ) = 0x14;
   *(ushort**)( puVar36 + -0x1528 ) = param_1 + *(long*)( puVar36 + -0x1788 );
   *(undefined1**)( puVar36 + -0x1720 ) = puVar36 + -0x12f8;
   *(undefined1**)( puVar36 + -0x1480 ) = puVar36 + -0x12f8;
   uVar18 = *(undefined4*)( lVar49 + 0x44 );
   *(undefined8*)( puVar36 + -0x14b8 ) = 0;
   *(undefined4*)( puVar36 + -0x1454 ) = uVar18;
   *(undefined1**)( puVar36 + -0x14b0 ) = puVar36 + -0x1438;
   *(undefined1**)( puVar36 + -0x1718 ) = puVar36 + -0xef8;
   *(undefined1**)( puVar36 + -0x1490 ) = puVar36 + -0xef8;
   puVar54 = puVar36 + 0x108;
   *(ushort**)( puVar36 + -0x1530 ) = param_1;
   *(undefined4*)( puVar36 + -0x1458 ) = 0;
   *(undefined1**)( puVar36 + -0x1540 ) = puVar54;
   *(undefined1**)( puVar36 + -0x1538 ) = puVar54;
   *(undefined1**)( puVar36 + -0x16b8 ) = puVar54;
   *(undefined8*)( puVar36 + -0x1518 ) = 3000;
   *(undefined8*)( puVar36 + -0x1478 ) = 0;
   for (int i = 0; i < 20; i++) {
      *(undefined4*)( puVar36 + ( 4*i + -5392 ) ) = 4294967295;
   }

   if (( param_3 & 0x2000000 ) == 0) {
      *(undefined4*)( puVar36 + -0x1704 ) = 0;
      *(undefined4*)( puVar36 + -0x1708 ) = 0;
      *(undefined4*)( puVar36 + -0x173c ) = 0;
      *(undefined4*)( puVar36 + -0x16d4 ) = 0xffffffff;
      *(undefined4*)( puVar36 + -0x16e0 ) = 0xffffffff;
      *(undefined4*)( puVar36 + -0x16a8 ) = 0xffffffff;
      *(uint*)( puVar36 + -0x1758 ) = param_3;
      uVar16 = 0;
      switchD_0010918e_default:lVar49 = *(long*)( puVar36 + -0x1788 );
      uVar27 = (ulong)uVar16;
      puVar48 = param_1 + uVar27;
      if (( ( 1 < lVar49 - uVar27 ) && ( *puVar48 == 0x28 ) ) && ( param_1[uVar16 + 1] == 0x2a )) {
         *(uint*)( puVar36 + -0x1768 ) = uVar16;
         iVar52 = 0;
         *(ulong*)( puVar36 + -6000 ) = uVar27;
         ppuVar51 = &pso_list;
         do {
            if (( ulong ) * (ushort*)( ppuVar51 + 1 ) <= ( lVar49 - uVar27 ) - 2) {
               *(undefined8*)( puVar36 + -0x1790 ) = 0x109159;
               iVar15 = _pcre2_strncmp_c8_16(param_1 + uVar27 + 2);
               if (iVar15 == 0) goto code_r0x0010915d;
            }

            iVar52 = iVar52 + 1;
            ppuVar51 = ppuVar51 + 2;
            if (iVar52 == 0x15) {
               uVar27 = *(ulong*)( puVar36 + -6000 );
               param_3 = *(uint*)( puVar36 + -0x1758 );
               uVar16 = *(uint*)( puVar36 + -0x14a4 );
               goto LAB_00108f60;
            }

         }
 while ( true );
      }

      uVar16 = *(uint*)( puVar36 + -0x14a4 );
      param_3 = *(uint*)( puVar36 + -0x1758 );
      goto LAB_00108f60;
   }

   *(undefined4*)( puVar36 + -0x173c ) = 0;
   uVar27 = 0;
   *(undefined4*)( puVar36 + -0x1704 ) = 0;
   *(undefined4*)( puVar36 + -0x1708 ) = 0;
   *(undefined4*)( puVar36 + -0x16d4 ) = 0xffffffff;
   *(undefined4*)( puVar36 + -0x16e0 ) = 0xffffffff;
   *(undefined4*)( puVar36 + -0x16a8 ) = 0xffffffff;
   puVar48 = param_1;
   uVar16 = param_3;
   LAB_00108f60:*(uint*)( puVar36 + -0x16d8 ) = uVar16 & 0x80000;
   if (( uVar16 & 0x80000 ) != 0) {
      if (( param_3 & 0x1000 ) != 0) {
         uVar17 = 0xae;
         lVar49 = 0;
         *(undefined4*)( puVar36 + -0x1640 ) = 0xae;
         uVar27 = (long)puVar48 - (long)param_1 >> 1;
         goto LAB_001092e9;
      }

      if (( param_3 & 0x40000000 ) != 0) {
         LAB_00108f89:uVar16 = *(uint*)( puVar36 + -0x14a4 );
         if (( *(byte*)( *(long*)( puVar36 + -0x1778 ) + 0x40 ) & 1 ) == 0) goto LAB_00108fa0;
         uVar17 = 0xbf;
         lVar49 = 0;
         *(undefined4*)( puVar36 + -0x1640 ) = 0xbf;
         uVar27 = (long)puVar48 - (long)param_1 >> 1;
         goto LAB_001092e9;
      }

      *(ulong*)( puVar36 + -6000 ) = uVar27;
      *(undefined8*)( puVar36 + -0x1790 ) = 0x109e89;
      uVar17 = _pcre2_valid_utf_16(param_1, *(undefined8*)( puVar36 + -0x1788 ), *(undefined8*)( puVar36 + -0x1750 ));
      uVar27 = *(ulong*)( puVar36 + -6000 );
      *(uint*)( puVar36 + -0x1640 ) = uVar17;
      if (uVar17 == 0) goto LAB_00108f89;
      lVar49 = 0;
      goto LAB_001092f1;
   }

   LAB_00108fa0:if (( ~uVar16 & 0x20800 ) == 0) {
      uVar17 = 0xaf;
      lVar49 = 0;
      *(undefined4*)( puVar36 + -0x1640 ) = 0xaf;
      uVar27 = (long)puVar48 - (long)param_1 >> 1;
      goto LAB_001092e9;
   }

   if (*(int*)( puVar36 + -0x1708 ) == 0) {
      *(uint*)( puVar36 + -0x1708 ) = ( uint ) * (ushort*)( *(long*)( puVar36 + -0x1778 ) + 0x38 );
   }

   if (*(int*)( puVar36 + -0x173c ) == 0) {
      *(uint*)( puVar36 + -0x173c ) = ( uint ) * (ushort*)( *(long*)( puVar36 + -0x1778 ) + 0x3a );
   }

   *(undefined4*)( puVar36 + -0x1470 ) = 0;
   switch (*(undefined4*)( puVar36 + -0x173c )) {
      default:
    uVar17 = 0x9c;
    lVar49 = 0;
    *(undefined4 *)(puVar36 + -0x1640) = 0x9c;
    uVar27 = (long)puVar48 - (long)param_1 >> 1;
    goto LAB_001092e9;
      case 1:
    *(undefined4 *)(puVar36 + -0x146c) = 1;
    *(undefined2 *)(puVar36 + -0x1460) = 0xd;
    break;
      case 2:
    *(undefined4 *)(puVar36 + -0x146c) = 1;
    *(undefined2 *)(puVar36 + -0x1460) = 10;
    break;
      case 3:
    *(undefined4 *)(puVar36 + -0x146c) = 2;
    *(undefined4 *)(puVar36 + -0x1460) = 0xa000d;
    break;
      case 4:
    *(undefined4 *)(puVar36 + -0x1470) = 1;
    break;
      case 5:
    *(undefined4 *)(puVar36 + -0x1470) = 2;
    break;
      case 6:
    *(undefined4 *)(puVar36 + -0x146c) = 1;
    *(undefined2 *)(puVar36 + -0x1460) = 0;
   }

   uVar38 = *(long*)( puVar36 + -0x1788 ) - uVar27;
   if (( *(byte*)( *(long*)( puVar36 + -0x1778 ) + 0x40 ) & 0xc ) != 0) {
      uVar38 = ( *(long*)( puVar36 + -0x1788 ) - uVar27 ) + 4;
   }

   if (( param_3 & 4 ) != 0) {
      uVar38 = uVar38 * 5 + 5;
   }

   if (uVar38 < 0x400) {
      *(uint*)( puVar36 + -0x1730 ) = uVar16;
      puVar23 = *(uint**)( puVar36 + -0x1490 );
      LAB_001093f8:*(ushort**)( puVar36 + -0x1610 ) = puVar48;
      *(uint**)( puVar36 + -0x16c0 ) = puVar23 + uVar38 + 1;
      puVar47 = *(ushort**)( puVar36 + -0x1528 );
      *(uint**)( puVar36 + -0x1488 ) = puVar23 + uVar38 + 1;
      lVar49 = *(long*)( puVar36 + -0x1568 );
      uVar43 = *(uint*)( puVar36 + -0x1730 ) & 4;
      *(undefined8*)( puVar36 + -0x1608 ) = 0;
      uVar17 = *(uint*)( lVar49 + 0x40 );
      uVar27 = (ulong)uVar43;
      *(undefined4*)( puVar36 + -0x1634 ) = 0;
      *(uint*)( puVar36 + -0x1700 ) = *(uint*)( puVar36 + -0x1730 ) & 0x80000;
      *(uint*)( puVar36 + -0x16f8 ) = uVar17;
      uVar17 = uVar17 & 8;
      *(uint*)( puVar36 + -0x169c ) = ( uint )(uVar43 != 0);
      if (uVar17 == 0) {
         puVar24 = puVar23;
         if (( puVar36[-0x16f8] & 4 ) != 0) {
            puVar24 = puVar23 + 2;
            *(undefined8*)puVar23 = _LC18;
         }

      }
 else {
         *(undefined8*)puVar23 = _LC17;
         puVar24 = puVar23 + 2;
      }

      if (( *(uint*)( puVar36 + -0x1730 ) & 0x2000000 ) == 0) {
         uVar43 = *(uint*)( puVar36 + -0x1730 );
         *(ulong*)( puVar36 + -0x1690 ) = ( *(long*)( puVar36 + -0x1518 ) * 2 & 0xfffffffffffffff1U ) + *(long*)( puVar36 + -0x1540 );
         uVar33 = uVar43 | 0x80;
         if (( uVar43 & 0x1000000 ) == 0) {
            uVar33 = uVar43;
         }

         *(uint*)( puVar36 + -0x1730 ) = uVar33;
         *(ulong*)( puVar36 + -0x16f0 ) = CONCAT44(*(undefined4*)( puVar36 + -0x16f8 ), uVar33);
         if (puVar48 < puVar47) {
            *(undefined4*)( puVar36 + -0x162c ) = 0;
            *(undefined4*)( puVar36 + -0x1628 ) = 0;
            if (puVar24 < *(uint**)( puVar36 + -0x16c0 )) {
               *(uint*)( puVar36 + -0x1768 ) = param_3;
               *(undefined4*)( puVar36 + -0x1678 ) = 0;
               *(undefined4*)( puVar36 + -0x16a4 ) = 0;
               puVar36[-0x1671] = *(int*)( puVar36 + -0x1700 ) != 0;
               puVar23 = (uint*)0x0;
               *(undefined2*)( puVar36 + -0x1748 ) = 0;
               uVar38 = 0;
               uVar50 = 0;
               *(uint*)( puVar36 + -0x16d0 ) = ( uint )(*(int*)( puVar36 + -0x1700 ) != 0);
               uVar43 = 0;
               *(undefined8*)( puVar36 + -0x1758 ) = 0;
               *(undefined8*)( puVar36 + -0x1698 ) = 0;
               *(undefined8*)( puVar36 + -0x1680 ) = 0;
               *(undefined8*)( puVar36 + -0x1688 ) = 0;
               *(undefined4*)( puVar36 + -0x16a0 ) = 0;
               *(undefined4*)( puVar36 + -0x16e8 ) = 0;
               *(undefined8*)( puVar36 + -0x1710 ) = 0;
               *(uint*)( puVar36 + -6000 ) = uVar16;
               puVar30 = puVar48;
               uVar27 = uVar38;
               puVar28 = puVar24;
               puVar44 = puVar47;
               LAB_00109716:uVar2 = *(ulong*)( puVar36 + -0x16f0 );
               *(int*)( puVar36 + -0x1738 ) = (int)uVar2;
               *(int*)( puVar36 + -0x16c8 ) = (int)( uVar2 >> 0x20 );
               auVar59._8_8_ = 0;
               auVar59._0_8_ = uVar2 & _LC19;
               if (*(uint*)( lVar49 + 0x3c ) < ( uint ) * (ushort*)( puVar36 + -0x1748 )) goto LAB_0010afe2;
               uVar14 = *puVar30;
               puVar48 = puVar30 + 1;
               *(ushort**)( puVar36 + -0x1610 ) = puVar48;
               *(uint*)( puVar36 + -0x1728 ) = (uint)uVar14;
               if (*(uint**)( puVar36 + -0x1710 ) != puVar28) {
                  puVar23 = *(uint**)( puVar36 + -0x1710 );
               }

               *(uint*)( puVar36 + -0x163c ) = (uint)uVar14;
               *(uint**)( puVar36 + -0x1710 ) = puVar23;
               iVar52 = (int)uVar38;
               iVar15 = (int)uVar50;
               puVar24 = puVar28;
               if (( *(int*)( puVar36 + -0x1700 ) != 0 ) && ( ( uVar14 & 0xfc00 ) == 0xd800 )) {
                  uVar14 = puVar30[1];
                  puVar48 = puVar30 + 2;
                  *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                  iVar20 = ( ( *(uint*)( puVar36 + -0x1728 ) & 0x3ff ) << 10 | uVar14 & 0x3ff ) + 0x10000;
                  *(int*)( puVar36 + -0x1728 ) = iVar20;
                  *(int*)( puVar36 + -0x163c ) = iVar20;
                  if ((int)uVar27 == 0) {
                     if (*(int*)( puVar36 + -0x16e8 ) != 0) {
                        LAB_0010a3b3:puVar48 = *(ushort**)( puVar36 + -0x1610 );
                        uVar27 = 0;
                        *(undefined4*)( puVar36 + -0x16e8 ) = 1;
                        *puVar28 = *(uint*)( puVar36 + -0x1728 );
                        puVar24 = puVar28 + 1;
                        goto LAB_00109d2d;
                     }

                     uVar27 = ( ulong ) * (uint*)( puVar36 + -0x1728 );
                     LAB_00109e0e:uVar16 = (uint)uVar27;
                     if (( puVar36[-0x1738] & 0x80 ) == 0) {
                        LAB_0010a0af:if (uVar16 != 0x28) goto LAB_0010a1c6;
                        puVar48 = *(ushort**)( puVar36 + -0x1610 );
                        if (( ( 2 < (long)puVar44 - (long)puVar48 ) && ( *puVar48 == 0x3f ) ) && ( puVar48[1] == 0x23 )) {
                           do {
                              puVar30 = puVar48;
                              puVar48 = puVar30 + 1;
                              if (puVar44 <= puVar48) {
                                 uVar16 = *(uint*)( puVar36 + -6000 );
                                 param_3 = *(uint*)( puVar36 + -0x1768 );
                                 uVar17 = 0x76;
                                 goto LAB_001097e2;
                              }

                           }
 while ( *puVar48 != 0x29 );
                           goto LAB_0010a43f;
                        }

                     }
 else {
                        if (uVar16 < 0x100) {
                           if (( ( *(byte*)( *(long*)( puVar36 + -0x1548 ) + uVar27 ) & 1 ) != 0 ) || ( uVar16 == 0x85 )) {
                              LAB_0010a8b4:puVar48 = *(ushort**)( puVar36 + -0x1610 );
                              LAB_0010a8bc:uVar27 = 0;
                              goto LAB_00109d2d;
                           }

                           if (uVar16 == 0x23) {
                              LAB_0010b879:puVar48 = *(ushort**)( puVar36 + -0x1610 );
                              if (puVar48 < puVar44) {
                                 *(uint*)( puVar36 + -0x1738 ) = uVar43;
                                 puVar54 = puVar36 + -0x146c;
                                 uVar50 = uVar50 & 0xffffffff;
                                 LAB_0010b8e0:do {
                                    puVar30 = puVar48;
                                    if (*(int*)( puVar36 + -0x1470 ) == 0) {
                                       if (( ( puVar30 <= *(ushort**)( puVar36 + -0x1528 ) + -(ulong) * (uint*)( puVar36 + -0x146c ) ) && ( *puVar30 == *(ushort*)( puVar36 + -0x1460 ) ) ) && ( ( *(uint*)( puVar36 + -0x146c ) == 1 || ( puVar30[1] == *(ushort*)( puVar36 + -0x145e ) ) ) )) {
                                          LAB_0010b928:uVar27 = 0;
                                          uVar43 = *(uint*)( puVar36 + -0x1738 );
                                          puVar48 = puVar30 + *(uint*)( puVar36 + -0x146c );
                                          *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                                          goto LAB_00109d2d;
                                       }

                                    }
 else if (puVar30 < *(ushort**)( puVar36 + -0x1528 )) {
                                       puVar47 = (ushort*)( ulong ) * (uint*)( puVar36 + -0x16d0 );
                                       *(undefined1**)( puVar36 + -0x1728 ) = puVar54;
                                       *(undefined8*)( puVar36 + -0x1790 ) = 0x10b99b;
                                       iVar52 = _pcre2_is_newline_16();
                                       puVar54 = *(undefined1**)( puVar36 + -0x1728 );
                                       if (iVar52 != 0) goto LAB_0010b928;
                                    }

                                    puVar48 = puVar30 + 1;
                                    *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                                    if (puVar44 <= puVar48) break;
                                    if (puVar36[-0x1671] != '\0') {
                                       if (( puVar30[1] & 0xfc00 ) != 0xdc00) goto LAB_0010b8e0;
                                       puVar48 = puVar30 + 2;
                                       *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                                    }

                                 }
 while ( puVar48 < puVar44 );
                                 uVar43 = *(uint*)( puVar36 + -0x1738 );
                              }

                              uVar27 = 0;
                              goto LAB_00109d2d;
                           }

                           goto LAB_0010a0af;
                        }

                        LAB_00109e26:uVar16 = (uint)uVar27 | 1;
                        if (( uVar16 == 0x200f ) || ( uVar16 == 0x2029 )) {
                           puVar48 = *(ushort**)( puVar36 + -0x1610 );
                           uVar27 = 0;
                           goto LAB_00109d2d;
                        }

                     }

                     goto LAB_0010a0d7;
                  }

                  LAB_001097c6:if (iVar52 < 1) {
                     uVar27 = ( ulong ) * (uint*)( puVar36 + -0x16e8 );
                     if (*(uint*)( puVar36 + -0x16e8 ) == 0) {
                        iVar52 = *(int*)( puVar36 + -0x16a0 ) + -1;
                        puVar23 = puVar28;
                        if (*(int*)( puVar36 + -0x16a0 ) < 1) {
                           puVar47 = (ushort*)( puVar36 + -0x1568 );
                           *(undefined8*)( puVar36 + -0x1790 ) = 0x10b9d2;
                           puVar23 = (uint*)manage_callouts(puVar30, puVar36 + -0x1608, *(undefined4*)( puVar36 + -0x169c ), puVar28);
                        }

                        uVar50 = 0;
                        *(int*)( puVar36 + -0x16a0 ) = iVar52;
                        uVar43 = 1;
                        uVar27 = 1;
                        *puVar23 = *(uint*)( puVar36 + -0x1728 );
                        puVar24 = puVar23 + 1;
                     }
 else {
                        uVar50 = 0;
                        *puVar28 = *(uint*)( puVar36 + -0x1728 );
                        puVar24 = puVar28 + 1;
                     }

                     goto LAB_00109d2d;
                  }

                  uVar16 = *(uint*)( puVar36 + -6000 );
                  param_3 = *(uint*)( puVar36 + -0x1768 );
                  uVar17 = 0x80;
                  puVar48 = puVar48 + -1;
                  goto LAB_001097e2;
               }

               if ((int)uVar27 != 0) {
                  if (( ( *(int*)( puVar36 + -0x1728 ) != 0x5c ) || ( puVar44 <= puVar48 ) ) || ( uVar14 = puVar30[1] ),*(undefined4*)( puVar36 + -0x1728 ) = 0x5c,uVar14 != 0x45) goto LAB_001097c6;
                  LAB_0010a43f:puVar48 = puVar30 + 2;
                  uVar27 = 0;
                  *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                  goto LAB_00109d2d;
               }

               if (*(int*)( puVar36 + -0x16e8 ) != 0) {
                  if (( ~*(uint *)(puVar36 + -0x1738) & 0x400080 ) == 0) {
                     if (0xff < *(uint*)( puVar36 + -0x1728 )) {
                        if (( ( uVar14 | 1 ) != 0x2029 ) && ( ( uVar14 | 1 ) != 0x200f )) goto LAB_0010a3b3;
                        uVar27 = ( ulong ) * (uint*)( puVar36 + -0x1728 );
                        if (( puVar36[-0x1738] & 0x80 ) == 0) goto LAB_0010a1c6;
                        goto LAB_00109e26;
                     }

                     if (*(int*)( puVar36 + -0x1728 ) == 0x23) {
                        uVar27 = 0x23;
                        if (( puVar36[-0x1738] & 0x80 ) == 0) goto LAB_0010a0d7;
                        if (( *(byte*)( *(long*)( puVar36 + -0x1548 ) + 0x23 ) & 1 ) == 0) goto LAB_0010b879;
                        goto LAB_0010a8b4;
                     }

                     if (( ( *(byte*)( *(long*)( puVar36 + -0x1548 ) + (ulong)uVar14 ) & 1 ) != 0 ) || ( *(int*)( puVar36 + -0x1728 ) == 0x85 )) goto LAB_00109dfc;
                  }

                  if (*(int*)( puVar36 + -0x1728 ) == 0x29) {
                     if (0x20000 < (long)puVar48 - *(long*)( puVar36 + -0x1680 )) {
                        uVar16 = *(uint*)( puVar36 + -6000 );
                        param_3 = *(uint*)( puVar36 + -0x1768 );
                        uVar17 = 0xb0;
                        puVar48 = puVar30;
                        goto LAB_001097e2;
                     }

                     **(int**)( puVar36 + -0x1688 ) = (int)( (long)puVar28 - (long)*(int**)( puVar36 + -0x1688 ) >> 2 ) + -1;
                     if (*(uint*)( puVar36 + -0x1678 ) == 0) {
                        *(undefined4*)( puVar36 + -0x16e8 ) = 0;
                     }
 else {
                        *puVar28 = *(uint*)( puVar36 + -0x1678 );
                        *(undefined4*)( puVar36 + -0x16e8 ) = 0;
                        *(undefined4*)( puVar36 + -0x1678 ) = 0;
                        puVar24 = puVar28 + 1;
                     }

                  }
 else {
                     if (*(int*)( puVar36 + -0x1728 ) != 0x5c) goto LAB_0010a3b3;
                     if (( *(uint*)( puVar36 + -0x1738 ) & 0x400000 ) == 0) {
                        puVar48 = *(ushort**)( puVar36 + -0x1610 );
                        LAB_00109d19:*puVar28 = *(uint*)( puVar36 + -0x1728 );
                        puVar24 = puVar28 + 1;
                     }
 else {
                        *(int*)( puVar36 + -0x1728 ) = iVar15;
                        *(undefined4*)( puVar36 + -0x1670 ) = 0;
                        *(undefined1**)( puVar36 + -0x1790 ) = puVar36 + -0x1568;
                        *(undefined8*)( puVar36 + -0x1798 ) = 0;
                        *(undefined8*)( puVar36 + -0x17a0 ) = 0x10aa9f;
                        iVar52 = _pcre2_check_escape_16(puVar36 + -0x1610, puVar44, puVar36 + -0x163c, puVar36 + -0x1634, *(undefined4*)( puVar36 + -0x1738 ), *(undefined4*)( puVar36 + -0x16c8 ));
                        uVar17 = *(uint*)( puVar36 + -0x1634 );
                        puVar47 = *(ushort**)( puVar36 + -0x1798 );
                        if (uVar17 != 0) {
                           uVar16 = *(uint*)( puVar36 + -6000 );
                           param_3 = *(uint*)( puVar36 + -0x1768 );
                           puVar48 = *(ushort**)( puVar36 + -0x1610 );
                           goto LAB_001097e2;
                        }

                        puVar48 = *(ushort**)( puVar36 + -0x1610 );
                        uVar50 = ( ulong ) * (uint*)( puVar36 + -0x1728 );
                        if (iVar52 == 0x1a) {
                           uVar27 = ( ulong ) * (uint*)( puVar36 + -0x16e8 );
                        }
 else {
                           if (iVar52 < 0x1b) {
                              uVar27 = ( ulong ) * (uint*)( puVar36 + -0x1670 );
                              if (iVar52 == 0) {
                                 *(undefined4*)( puVar36 + -0x1728 ) = *(undefined4*)( puVar36 + -0x163c );
                                 goto LAB_00109d19;
                              }

                              if (iVar52 != 0x19) goto LAB_0010cad5;
                              uVar27 = 0;
                              goto LAB_00109d2d;
                           }

                           if (iVar52 != 0x1d) {
                              LAB_0010cad5:uVar16 = *(uint*)( puVar36 + -6000 );
                              param_3 = *(uint*)( puVar36 + -0x1768 );
                              uVar17 = 0x8c;
                              goto LAB_001097e2;
                           }

                           uVar43 = *(uint*)( puVar36 + -0x16e8 );
                           uVar27 = 0;
                           *(undefined8*)puVar28 = _LC20;
                           puVar24 = puVar28 + 2;
                        }

                     }

                  }

                  goto LAB_00109d2d;
               }

               LAB_00109dfc:uVar27 = ( ulong ) * (uint*)( puVar36 + -0x163c );
               if (*(uint*)( puVar36 + -0x163c ) != 0x5c) goto LAB_00109e0e;
               puVar48 = *(ushort**)( puVar36 + -0x1610 );
               if (( puVar48 < puVar44 ) && ( ( uVar14 = *puVar48 ),uVar14 == 0x45 || ( uVar14 == 0x51 ) )) {
                  puVar48 = puVar48 + 1;
                  uVar27 = ( ulong )(uVar14 == 0x51);
                  *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                  goto LAB_00109d2d;
               }

               if (( puVar36[-0x1738] & 0x80 ) == 0) goto LAB_0010a0d7;
               if (( *(byte*)( *(long*)( puVar36 + -0x1548 ) + 0x5c ) & 1 ) != 0) goto LAB_0010a8bc;
               LAB_0010a1c6:iVar20 = (int)uVar27;
               if (( iVar20 - 0x2aU < 2 ) || ( iVar20 == 0x3f )) {
                  if (iVar52 < 1) {
                     if (iVar15 == 0) goto LAB_0010a8f4;
                     if (( iVar20 == 0x3f ) || ( iVar20 == 0x2b )) {
                        puVar48 = *(ushort**)( puVar36 + -0x1610 );
                        iVar52 = 0x10000;
                        if (iVar20 == 0x3f) {
                           iVar52 = 0x20000;
                        }

                        uVar43 = 0;
                        uVar27 = 0;
                        uVar38 = 0;
                        uVar50 = 0;
                        puVar28[( ulong )(iVar15 != -0x7fc30000) * 2 + -3] = iVar52 + iVar15;
                        goto LAB_00109d2d;
                     }

                     switchD_0010a90b_caseD_2a:uVar27 = 0x2a;
                     uVar50 = 0x80340000;
                     goto LAB_0010a958;
                  }

                  uVar16 = *(uint*)( puVar36 + -6000 );
                  param_3 = *(uint*)( puVar36 + -0x1768 );
                  puVar48 = *(ushort**)( puVar36 + -0x1610 );
                  LAB_0010a1f2:uVar17 = 0x80;
                  puVar48 = puVar48 + -1;
                  goto LAB_001097e2;
               }

               if (iVar20 == 0x7b) {
                  puVar47 = (ushort*)( puVar36 + -0x1634 );
                  *(ushort**)( puVar36 + -0x1658 ) = puVar30;
                  *(undefined4*)( puVar36 + -0x1668 ) = 0x7b;
                  *(ulong*)( puVar36 + -0x1660 ) = uVar2 & _LC19;
                  *(undefined8*)( puVar36 + -0x15f8 ) = *(undefined8*)( puVar36 + -0x1610 );
                  *(undefined8*)( puVar36 + -0x1670 ) = *(undefined8*)( puVar36 + -0x1610 );
                  *(undefined8*)( puVar36 + -0x1790 ) = 0x10b61e;
                  iVar15 = read_repeat_counts(puVar36 + -0x15f8, puVar44, 0, 0);
                  uVar27 = ( ulong ) * (uint*)( puVar36 + -0x1668 );
                  auVar59._8_8_ = 0;
                  auVar59._0_8_ = *(ulong*)( puVar36 + -0x1660 );
                  puVar30 = *(ushort**)( puVar36 + -0x1658 );
                  if (iVar15 == 0) goto LAB_0010a0d7;
                  puVar48 = *(ushort**)( puVar36 + -0x1670 );
                  if (0 < iVar52) goto LAB_0010a8d9;
                  LAB_0010b652:puVar47 = (ushort*)( puVar36 + -0x1634 );
                  *(undefined8*)( puVar36 + -0x1790 ) = 0x10b675;
                  iVar52 = read_repeat_counts(puVar36 + -0x1610, puVar44, puVar36 + -0x162c, puVar36 + -0x1628);
                  if (iVar52 != 0) {
                     uVar27 = 0x7b;
                     uVar50 = 0x803d0000;
                     goto LAB_0010a958;
                  }

                  uVar17 = *(uint*)( puVar36 + -0x1634 );
                  uVar38 = (ulong)uVar17;
                  if (uVar17 == 0) {
                     *puVar28 = 0x7b;
                     puVar24 = puVar28 + 1;
                     uVar50 = 0;
                     uVar43 = 1;
                     puVar48 = *(ushort**)( puVar36 + -0x1610 );
                     goto LAB_0010a929;
                  }

                  uVar16 = *(uint*)( puVar36 + -6000 );
                  param_3 = *(uint*)( puVar36 + -0x1768 );
                  puVar48 = *(ushort**)( puVar36 + -0x1610 );
                  goto LAB_001097e2;
               }

               LAB_0010a0d7:iVar15 = *(int*)( puVar36 + -0x16a0 ) + -1;
               if (*(int*)( puVar36 + -0x16a0 ) < 1) {
                  puVar47 = (ushort*)( puVar36 + -0x1568 );
                  *(undefined8*)( puVar36 + -0x1790 ) = 0x10b3b2;
                  puVar28 = (uint*)manage_callouts(puVar30, puVar36 + -0x1608, *(undefined4*)( puVar36 + -0x169c ), puVar28);
                  auVar59._8_8_ = extraout_XMM0_Qb;
                  auVar59._0_8_ = extraout_XMM0_Qa;
               }

               if (iVar52 < 1) {
                  *(int*)( puVar36 + -0x16a0 ) = iVar15;
                  LAB_0010a8f4:switch ((uint)uVar27) {
                     case 0x24:
              *puVar28 = 0x80160000;
              uVar50 = 0;
              uVar43 = 0;
              uVar38 = 0;
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              puVar24 = puVar28 + 1;
              break;
                     default:
              *puVar28 = (uint)uVar27;
              puVar24 = puVar28 + 1;
              uVar50 = 0;
              uVar38 = 0;
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              uVar43 = 1;
              break;
                     case 0x28:
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              puVar30 = puVar48;
              if (puVar44 <= puVar48) goto LAB_00109f43;
              puVar45 = puVar48;
              if (*puVar48 == 0x3f) goto LAB_0010bbb5;
              if (*puVar48 == 0x2a) {
                puVar23 = puVar28;
                if (2 < (long)puVar44 - (long)puVar48) goto LAB_0010a6da;
LAB_0010bb9e:
                uVar50 = 0;
                uVar43 = 0;
                uVar38 = 0;
                puVar24 = puVar28;
              }
              else {
                *(short *)(puVar36 + -0x1748) = *(short *)(puVar36 + -0x1748) + 1;
                uVar50 = (ulong)(*(uint *)(puVar36 + -0x1738) & 0x2000);
                if ((*(uint *)(puVar36 + -0x1738) & 0x2000) == 0) {
                  if (0xfffe < *(uint *)(puVar36 + -0x149c)) {
                    uVar16 = *(uint *)(puVar36 + -6000);
                    param_3 = *(uint *)(puVar36 + -0x1768);
                    uVar17 = 0xc5;
                    goto LAB_001097e2;
                  }
                  uVar16 = *(uint *)(puVar36 + -0x149c) + 1;
                  puVar24 = puVar28 + 1;
                  uVar43 = 0;
                  uVar38 = 0;
                  *(uint *)(puVar36 + -0x149c) = uVar16;
                  *puVar28 = uVar16 | 0x80080000;
                }
                else {
                  *puVar28 = 0x801a0000;
                  uVar50 = 0;
                  uVar43 = 0;
                  uVar38 = 0;
                  puVar24 = puVar28 + 1;
                }
              }
              break;
                     case 0x29:
              psVar11 = *(short **)(puVar36 + -0x1758);
              uVar43 = 1;
              puVar24 = puVar28;
              if ((psVar11 != (short *)0x0) && (*psVar11 == *(short *)(puVar36 + -0x1748))) {
                uVar27 = *(ulong *)(psVar11 + 4);
                uVar14 = psVar11[3];
                *(uint *)(puVar36 + -0x1730) =
                     *(uint *)(puVar36 + -0x1730) & 0xfefbdb17 | *(uint *)(psVar11 + 4);
                *(uint *)(puVar36 + -0x16f8) =
                     *(uint *)(puVar36 + -0x16f8) & 0xffffe07f | *(uint *)(psVar11 + 6);
                *(ulong *)(puVar36 + -0x16f0) = *(ulong *)(puVar36 + -0x16f0) & _LC28 | uVar27;
                if (((uVar14 & 1) != 0) && (*(uint *)(puVar36 + -0x149c) < (uint)(ushort)psVar11[2])
                   ) {
                  *(uint *)(puVar36 + -0x149c) = (uint)(ushort)psVar11[2];
                }
                uVar43 = (uVar14 >> 1 ^ 1) & 1;
                if ((uVar14 & 4) != 0) {
                  *puVar28 = 0x80190000;
                  puVar24 = puVar28 + 1;
                }
                if (*(long *)(puVar36 + -0x1540) == *(long *)(puVar36 + -0x1758)) {
                  *(undefined8 *)(puVar36 + -0x1758) = 0;
                }
                else {
                  *(long *)(puVar36 + -0x1758) = *(long *)(puVar36 + -0x1758) + -0x10;
                }
              }
              sVar3 = *(short *)(puVar36 + -0x1748);
              if (sVar3 != 0) {
                *puVar24 = 0x80190000;
                puVar24 = puVar24 + 1;
                uVar50 = 0;
                *(short *)(puVar36 + -0x1748) = sVar3 + -1;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
                uVar38 = 0;
                break;
              }
              puVar30 = *(ushort **)(puVar36 + -0x1610);
              uVar17 = 0x7a;
              goto LAB_0010b109;
                     case 0x2a:
              goto switchD_0010a90b_caseD_2a;
                     case 0x2b:
              uVar50 = 0x80370000;
              goto LAB_0010a958;
                     case 0x2e:
              puVar24 = puVar28 + 1;
              uVar50 = 0;
              uVar43 = 1;
              uVar38 = 0;
              *puVar28 = 0x80170000;
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              break;
                     case 0x3f:
              uVar50 = 0x803a0000;
LAB_0010a958:
              iVar52 = (int)uVar27;
              if (uVar43 == 0) {
                puVar30 = *(ushort **)(puVar36 + -0x1610);
                uVar17 = 0x6d;
LAB_0010b109:
                *(uint *)(puVar36 + -0x1640) = uVar17;
                uVar27 = (long)puVar30 + (-2 - *(long *)(puVar36 + -0x1530)) >> 1;
                *(ulong *)(puVar36 + -0x14c0) = uVar27;
                goto LAB_00109cc4;
              }
              puVar23 = puVar28;
              if (**(int **)(puVar36 + -0x1710) == -0x7fd60000) {
                if (*(uint **)(puVar36 + -0x1698) <= puVar28 + -1) {
                  *(int *)(puVar36 + -0x1728) = (int)uVar50;
                  *(int *)(puVar36 + -0x1738) = iVar52;
                  uVar27 = (ulong)((long)puVar28 + (-4 - *(long *)(puVar36 + -0x1698))) >> 2;
                  *(undefined8 *)(puVar36 + -0x1790) = 0x10c3f4;
                  memmove(puVar28 + -uVar27,puVar28 + -1 + -uVar27,uVar27 * 4 + 4);
                  iVar52 = *(int *)(puVar36 + -0x1738);
                  uVar50 = (ulong)*(uint *)(puVar36 + -0x1728);
                }
                **(undefined4 **)(puVar36 + -0x1698) = 0x801a0000;
                puVar23 = puVar28 + 2;
                puVar28[1] = 0x80190000;
              }
              *puVar23 = (uint)uVar50;
              if (iVar52 == 0x7b) {
                puVar24 = puVar23 + 3;
                uVar43 = 0;
                uVar38 = 0;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
                *(undefined8 *)(puVar23 + 1) = *(undefined8 *)(puVar36 + -0x162c);
              }
              else {
                puVar48 = *(ushort **)(puVar36 + -0x1610);
                puVar24 = puVar23 + 1;
                uVar43 = 0;
                uVar38 = 0;
              }
              break;
                     case 0x5b:
              puVar30 = *(ushort **)(puVar36 + -0x1610);
              puVar48 = puVar30;
              if ((long)puVar44 - (long)puVar30 < 0xb) {
LAB_0010ac81:
                if (puVar48 < puVar44) {
                  uVar38 = (ulong)*puVar48;
                  uVar27 = uVar38;
                  if ((*puVar48 < 0x3e) && ((0x2400400000000000U >> (uVar38 & 0x3f) & 1) != 0)) {
                    *(ushort **)(puVar36 + -0x1728) = puVar48;
                    *(undefined8 *)(puVar36 + -0x1790) = 0x10acc0;
                    iVar52 = check_posix_syntax(puVar48,puVar44,puVar36 + -0x15f8);
                    if (iVar52 != 0) {
                      param_3 = *(uint *)(puVar36 + -0x1768);
                      puVar48 = (ushort *)(*(long *)(puVar36 + -0x1728) + -2);
                      uVar16 = *(uint *)(puVar36 + -6000);
                      uVar17 = ((short)uVar27 != 0x3a) + 0x70;
                      goto LAB_001097e2;
                    }
                  }
                  bVar56 = false;
                  while( true ) {
                    puVar48 = puVar30 + 1;
                    uVar16 = (uint)uVar38;
                    *(uint *)(puVar36 + -0x163c) = uVar16;
                    *(ushort **)(puVar36 + -0x1610) = puVar48;
                    if ((*(int *)(puVar36 + -0x1700) != 0) && (((ushort)uVar27 & 0xfc00) == 0xd800))
                    break;
                    if (uVar16 == 0x5c) {
                      if (puVar44 <= puVar48) goto LAB_0010ad5a;
                      if (puVar30[1] == 0x45) {
                        *(ushort **)(puVar36 + -0x1610) = puVar30 + 2;
                        puVar30 = puVar30 + 2;
                      }
                      else {
                        if ((long)puVar44 - (long)puVar48 < 5) goto LAB_0010ad5a;
                        *(undefined8 *)(puVar36 + -0x1790) = 0x10b47c;
                        iVar52 = _pcre2_strncmp_c8_16(puVar48,&_LC23,3);
                        if (iVar52 != 0) goto LAB_0010ad5a;
                        *(ushort **)(puVar36 + -0x1610) = puVar30 + 4;
                        puVar30 = puVar30 + 4;
                      }
                    }
                    else {
                      puVar30 = puVar48;
                      if (((*(uint *)(puVar36 + -0x1738) & 0x1000000) == 0) ||
                         ((uVar16 != 0x20 && (uVar16 != 9)))) {
                        if (bVar56) goto LAB_0010ba33;
                        if (uVar16 != 0x5e) goto LAB_0010b097;
                        bVar56 = true;
                      }
                    }
                    if (puVar44 <= puVar30) goto LAB_0010ad5a;
                    uVar38 = (ulong)*puVar30;
                    uVar27 = (ulong)*puVar30;
                  }
                  uVar14 = puVar30[1];
                  *(ushort **)(puVar36 + -0x1610) = puVar30 + 2;
                  uVar16 = ((uVar16 & 0x3ff) << 10 | uVar14 & 0x3ff) + 0x10000;
                  *(uint *)(puVar36 + -0x163c) = uVar16;
                  if ((*(uint *)(puVar36 + -0x1738) & 0x1000000) != 0) {
                    if (bVar56) {
LAB_0010ba33:
                      bVar56 = true;
                      if (uVar16 != 0x5d) goto LAB_0010ba42;
                    }
                    else {
LAB_0010b097:
                      bVar56 = false;
                      if (uVar16 != 0x5d) goto LAB_0010ad63;
                    }
                    if ((puVar36[-0x14a4] & 1) != 0) {
                      if (!bVar56) goto LAB_0010ba71;
                      uVar16 = 0x800c0000;
                      goto LAB_0010ac4a;
                    }
                  }
LAB_0010ad5a:
                  if (!bVar56) goto LAB_0010ad63;
LAB_0010ba42:
                  uVar16 = 0x800e0000;
                }
                else {
                  if ((*(int *)(puVar36 + -0x1728) == 0x5d) && ((puVar36[-0x14a4] & 1) != 0)) {
LAB_0010ba71:
                    uVar16 = 0x800b0000;
                    goto LAB_0010ac4a;
                  }
LAB_0010ad63:
                  uVar16 = 0x800a0000;
                }
                puVar48 = *(ushort **)(puVar36 + -0x1610);
                *puVar28 = uVar16;
                puVar24 = puVar28 + 1;
                uVar27 = 0;
                uVar16 = *(uint *)(puVar36 + -0x163c);
                *(uint **)(puVar36 + -0x1728) = puVar28;
                uVar38 = uVar27;
LAB_0010ad8c:
                uVar43 = (uint)uVar27;
                if ((int)uVar38 != 0) {
                  if (uVar16 != 0x5c) goto LAB_0010aedc;
                  if ((puVar48 < puVar44) && (*puVar48 == 0x45)) {
                    uVar38 = 0;
                    puVar47 = puVar48 + 1;
                    goto LAB_0010ae90;
                  }
                  if (uVar43 != 1) goto LAB_0010aeeb;
                  if (puVar24[-2] == 0x5c) goto LAB_0010b180;
                  if (puVar24[-2] < 0x5d) goto LAB_0010af5c;
LAB_0010b0fb:
                  puVar30 = *(ushort **)(puVar36 + -0x1610);
                  uVar17 = 0x6c;
                  goto LAB_0010b109;
                }
                if (((*(uint *)(puVar36 + -0x1738) & 0x1000000) == 0) ||
                   ((puVar47 = puVar48, uVar16 != 0x20 && (uVar16 != 9)))) {
                  if (uVar16 != 0x5b) goto LAB_0010adbd;
                  if ((long)puVar44 - (long)puVar48 < 5) goto LAB_0010af3b;
                  uVar14 = *puVar48;
                  if (0x3d < uVar14) goto LAB_0010af3b;
                  if ((0x2400400000000000U >> ((ulong)uVar14 & 0x3f) & 1) == 0) goto LAB_0010af3b;
                  *(undefined8 *)(puVar36 + -0x1790) = 0x10b1d9;
                  iVar52 = check_posix_syntax(puVar48,puVar44,puVar36 + -0x15f8);
                  if (iVar52 == 0) goto LAB_0010af3b;
                  if (uVar43 != 1) {
                    if (uVar14 == 0x3a) {
                      *(ushort **)(puVar36 + -0x1610) = puVar48 + 1;
                      uVar14 = puVar48[1];
                      if (uVar14 == 0x5e) {
                        *(ushort **)(puVar36 + -0x1610) = puVar48 + 2;
                      }
                      puVar48 = *(ushort **)(puVar36 + -0x1610);
                      *(ushort **)(puVar36 + -0x1670) = puVar44;
                      *(uint **)(puVar36 + -0x1658) = puVar24;
                      puVar54 = posix_name_lengths;
                      *(long *)(puVar36 + -0x1668) = *(long *)(puVar36 + -0x15f8);
                      uVar16 = 5;
                      *(uint *)(puVar36 + -0x1660) = (uint)(uVar14 == 0x5e);
                      uVar17 = (uint)(*(long *)(puVar36 + -0x15f8) - (long)puVar48 >> 1);
                      lVar49 = (long)(int)uVar17;
                      do {
                        if (uVar17 == uVar16) {
                          *(long *)(puVar36 + -0x1650) = lVar49;
                          *(undefined8 *)(puVar36 + -0x1790) = 0x10b2b1;
                          uVar16 = _pcre2_strncmp_c8_16(puVar48);
                          lVar49 = *(long *)(puVar36 + -0x1650);
                          uVar38 = (ulong)uVar16;
                          if (uVar16 == 0) goto code_r0x0010b2c7;
                        }
                        puVar54 = puVar54 + 1;
                        uVar16 = (uint)(byte)*puVar54;
                        if (*puVar54 == 0) {
                          param_3 = *(uint *)(puVar36 + -0x1768);
                          uVar16 = *(uint *)(puVar36 + -6000);
                          uVar17 = 0x82;
                          goto LAB_001097e2;
                        }
                      } while( true );
                    }
                    puVar30 = *(ushort **)(puVar36 + -0x1610);
                    uVar17 = 0x71;
                    goto LAB_0010b109;
                  }
                  uVar16 = *(uint *)(puVar36 + -6000);
                  param_3 = *(uint *)(puVar36 + -0x1768);
                  uVar17 = 0x96;
                  goto LAB_001097e2;
                }
                goto LAB_0010ae90;
              }
              *(ushort **)(puVar36 + -0x1670) = puVar30;
              *(undefined8 *)(puVar36 + -0x1790) = 0x10c141;
              iVar52 = _pcre2_strncmp_c8_16(puVar30,"[:<:]]",6);
              puVar48 = *(ushort **)(puVar36 + -0x1670);
              if (iVar52 != 0) {
                *(ushort **)(puVar36 + -0x1670) = puVar48;
                *(undefined8 *)(puVar36 + -0x1790) = 0x10c217;
                iVar52 = _pcre2_strncmp_c8_16(puVar48,"[:>:]]",6);
                puVar48 = *(ushort **)(puVar36 + -0x1670);
                if (iVar52 != 0) goto LAB_0010ac81;
              }
              uVar14 = puVar48[2];
              *puVar28 = 0x80180005;
              if (uVar14 == 0x3c) {
                puVar23 = puVar28 + 2;
                uVar16 = 0x80230000;
              }
              else {
                puVar23 = puVar28 + 4;
                uVar16 = 0x80250000;
                *(undefined4 *)(puVar36 + -0x16a4) = 1;
                puVar28[2] = 0;
                puVar28[3] = 0;
              }
              puVar28[1] = uVar16;
              if ((*(uint *)(puVar36 + -0x1738) & 0x20000) == 0) {
                puVar31 = puVar23 + 1;
                uVar16 = 0x8018000b;
              }
              else {
                puVar23[1] = 0x90000;
                puVar31 = puVar23 + 2;
                uVar16 = 0x80180010;
              }
              puVar48 = puVar48 + 6;
              *puVar23 = uVar16;
              puVar24 = puVar31 + 1;
              uVar50 = 0;
              *puVar31 = 0x80190000;
              uVar43 = 1;
              uVar38 = 0;
              *(ushort **)(puVar36 + -0x1610) = puVar48;
              break;
                     case 0x5c:
              puVar48 = (ushort *)(puVar36 + -0x1634);
              *(undefined8 *)(puVar36 + -0x1728) = *(undefined8 *)(puVar36 + -0x1610);
              *(undefined8 *)(puVar36 + -0x15f8) = *(undefined8 *)(puVar36 + -0x1610);
              *(undefined1 **)(puVar36 + -0x1670) = puVar36 + -0x1568;
              *(undefined1 **)(puVar36 + -0x1790) = puVar36 + -0x1568;
              *(undefined8 *)(puVar36 + -0x1798) = 0;
              uVar27 = (ulong)*(uint *)(puVar36 + -0x16c8);
              puVar47 = (ushort *)(ulong)*(uint *)(puVar36 + -0x1738);
              *(undefined1 **)(puVar36 + -0x1668) = puVar36 + -0x1610;
              *(undefined8 *)(puVar36 + -0x17a0) = 0x10abf4;
              iVar52 = _pcre2_check_escape_16(puVar36 + -0x1610,puVar44,puVar36 + -0x163c,puVar48);
              uVar38 = (ulong)*(uint *)(puVar36 + -0x1634);
              uVar22 = *(undefined8 *)(puVar36 + -0x1668);
              if (*(uint *)(puVar36 + -0x1634) != 0) goto LAB_0010ac10;
              if (iVar52 == 0) {
LAB_0010ac3f:
                uVar16 = *(uint *)(puVar36 + -0x163c);
LAB_0010ac4a:
                puVar24 = puVar28 + 1;
                *puVar28 = uVar16;
                uVar50 = 0;
                uVar43 = 1;
                uVar38 = 0;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
                break;
              }
              if (iVar52 < 0) {
                puVar48 = *(ushort **)(puVar36 + -0x1610);
                puVar24 = puVar28 + 1;
                uVar16 = -iVar52;
                lVar49 = ((long)puVar48 - *(long *)(puVar36 + -0x1530) >> 1) + -1;
                *(long *)(puVar36 + -0x15f0) = lVar49;
                *puVar28 = uVar16 | 0x80030000;
                if (iVar52 < -9) {
                  puVar28[2] = (uint)lVar49;
                  puVar24 = puVar28 + 3;
                  uVar50 = 0;
                  uVar43 = 1;
                  puVar28[1] = (uint)((ulong)lVar49 >> 0x20);
                }
                else if (*(long *)(puVar36 + (long)(int)uVar16 * 8 + -0x1510) == -1) {
                  *(long *)(puVar36 + ((long)(int)uVar16 + 10) * 8 + -0x1560) = lVar49;
                  uVar50 = 0;
                  uVar43 = 1;
                }
                else {
                  uVar50 = 0;
                  uVar43 = 1;
                }
                break;
              }
              if (iVar52 - 6U < 0x18) {
                uVar16 = (&switchD_0010bc88::switchdataD_0010e7fc)[iVar52 - 6U];
                switch(iVar52) {
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                  uVar50 = 0;
                  uVar43 = 1;
                  *(undefined8 *)(puVar36 + -0x1790) = 0x10d39d;
                  puVar24 = (uint *)handle_escdsw(iVar52,puVar28,*(undefined4 *)(puVar36 + -0x1738),
                                                  *(undefined4 *)(puVar36 + -0x16c8));
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  break;
                default:
                  puVar24 = puVar28 + 1;
                  uVar50 = 0;
                  uVar43 = 1;
                  *puVar28 = iVar52 + 0x80180000;
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  break;
                case 0xd:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                  goto switchD_0010bc88_caseD_d;
                case 0xe:
                  uVar50 = (ulong)(*(uint *)(puVar36 + -0x1738) & 0x100000);
                  if ((*(uint *)(puVar36 + -0x1738) & 0x100000) != 0) {
                    *(undefined4 *)(puVar36 + -0x1634) = 0xb7;
                    goto LAB_0010ac10;
                  }
                  *puVar28 = 0x8018000e;
                  puVar24 = puVar28 + 1;
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  uVar43 = 1;
                  break;
                case 0xf:
                case 0x10:
                  *(undefined2 *)(puVar36 + -0x1620) = 0;
                  *(undefined2 *)(puVar36 + -0x161c) = 0;
                  *(long *)(puVar36 + -0x1790) =
                       (long)&switchD_0010bc88::switchdataD_0010e7fc + (long)(int)uVar16;
                  *(undefined8 *)(puVar36 + -0x1798) = *(undefined8 *)(puVar36 + -0x1528);
                  *(undefined8 *)(puVar36 + -0x17a0) = 0x10ca29;
                  iVar15 = get_ucp_constprop_0_isra_0
                                     (uVar22,puVar36 + -0x15f0,puVar36 + -0x1620,puVar36 + -0x161c);
                  puVar47 = puVar48;
                  if (iVar15 == 0) goto LAB_0010ac10;
                  if (*(int *)(puVar36 + -0x15f0) != 0) {
                    if (iVar52 == 0xf) {
                      iVar52 = 0x10;
                    }
                    else {
                      iVar52 = 0xf;
                    }
                  }
                  uVar46 = *(undefined2 *)(puVar36 + -0x161c);
                  puVar24 = puVar28 + 2;
                  uVar50 = 0;
                  *puVar28 = iVar52 + 0x80180000;
                  uVar43 = 1;
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  puVar28[1] = CONCAT22(*(undefined2 *)(puVar36 + -0x1620),uVar46);
                  break;
                case 0x1b:
                case 0x1c:
                  puVar30 = *(ushort **)(puVar36 + -0x1610);
                  if (puVar44 <= puVar30) {
LAB_0010d60f:
                    uVar18 = 0xa9;
                    if (iVar52 == 0x1b) {
                      uVar18 = 0x9d;
                    }
                    *(undefined4 *)(puVar36 + -0x1634) = uVar18;
                    goto LAB_0010ac10;
                  }
                  uVar14 = *puVar30;
                  if (uVar14 == 0x7b) {
                    uVar18 = 0x7d;
LAB_0010d5b7:
                    *(ushort **)(puVar36 + -0x1790) = puVar30;
                    *(undefined8 *)(puVar36 + -0x1798) = *(undefined8 *)(puVar36 + -0x1670);
                    *(ushort **)(puVar36 + -0x17a0) = puVar48;
                    *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
                    puVar30 = (ushort *)(puVar36 + -0x15f0);
                    *(undefined8 *)(puVar36 + -0x17b0) = 0x10d5ee;
                    iVar52 = read_name(uVar22,puVar44,*(undefined4 *)(puVar36 + -0x16d0),uVar18);
                    puVar47 = puVar30;
                    if (iVar52 != 0) {
                      uVar18 = 0x80040000;
LAB_0010d559:
                      uVar22 = *(undefined8 *)(puVar36 + -0x15f0);
                      puVar24 = puVar28 + 4;
                      uVar50 = 0;
                      uVar7 = *(undefined4 *)(puVar36 + -0x15f0);
                      puVar48 = *(ushort **)(puVar36 + -0x1610);
                      uVar43 = 1;
                      *(ulong *)puVar28 = CONCAT44(*(undefined4 *)(puVar36 + -0x1638),uVar18);
                      *(ulong *)(puVar28 + 2) = CONCAT44(uVar7,(int)((ulong)uVar22 >> 0x20));
                      puVar47 = puVar30;
                      break;
                    }
                  }
                  else {
                    if (uVar14 == 0x3c) {
                      uVar18 = 0x3e;
                    }
                    else {
                      if (uVar14 != 0x27) goto LAB_0010d60f;
                      uVar18 = 0x27;
                    }
                    if (iVar52 != 0x1b) goto LAB_0010d5b7;
                    *(undefined8 *)(puVar36 + -0x1660) = uVar22;
                    puVar47 = (ushort *)0xa1;
                    *(undefined4 *)(puVar36 + -0x1668) = uVar18;
                    *(ushort **)(puVar36 + -0x15f0) = puVar30 + 1;
                    *(ulong *)(puVar36 + -0x1790) = uVar27;
                    *(ushort **)(puVar36 + -0x1798) = puVar48;
                    *(undefined1 **)(puVar36 + -0x1738) = puVar36 + -0x15f0;
                    *(undefined8 *)(puVar36 + -0x17a0) = 0x10d4c4;
                    iVar52 = read_number(puVar36 + -0x15f0,puVar44,
                                         *(undefined4 *)(puVar36 + -0x149c),0xffff);
                    puVar30 = *(ushort **)(puVar36 + -0x1738);
                    if (iVar52 != 0) {
                      puVar30 = *(ushort **)(puVar36 + -0x15f0);
                      if ((puVar44 <= puVar30) || (*(uint *)(puVar36 + -0x1668) != (uint)*puVar30))
                      {
                        *(undefined4 *)(puVar36 + -0x1634) = 0x9d;
                        goto LAB_0010ac10;
                      }
                      goto LAB_0010bcb7;
                    }
                    if (*(int *)(puVar36 + -0x1634) == 0) {
                      *(ushort **)(puVar36 + -0x1790) = puVar47;
                      *(undefined8 *)(puVar36 + -0x1798) = *(undefined8 *)(puVar36 + -0x1670);
                      *(ushort **)(puVar36 + -0x17a0) = puVar48;
                      *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
                      *(undefined8 *)(puVar36 + -0x17b0) = 0x10d548;
                      iVar52 = read_name();
                      puVar47 = puVar30;
                      if (iVar52 == 0) goto LAB_0010ac10;
                      uVar18 = 0x80210000;
                      goto LAB_0010d559;
                    }
                  }
LAB_0010ac10:
                  if ((puVar36[-0x16c8] & 2) == 0) goto LAB_0010cb2c;
                  *(ushort **)(puVar36 + -0x1610) = *(ushort **)(puVar36 + -0x1728);
                  if (*(ushort **)(puVar36 + -0x1728) < puVar44) {
                    puVar48 = *(ushort **)(puVar36 + -0x1728);
                    *(ushort **)(puVar36 + -0x1610) = puVar48 + 1;
                    uVar14 = *puVar48;
                    *(uint *)(puVar36 + -0x163c) = (uint)uVar14;
                    if ((*(int *)(puVar36 + -0x1700) != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                      *(ushort **)(puVar36 + -0x1610) = puVar48 + 2;
                      *(uint *)(puVar36 + -0x163c) =
                           ((uVar14 & 0x3ff) << 10 | puVar48[1] & 0x3ff) + 0x10000;
                    }
                  }
                  else {
                    *(undefined4 *)(puVar36 + -0x163c) = 0x5c;
                  }
                  goto LAB_0010ac3f;
                case 0x1d:
                  puVar24 = puVar28 + 2;
                  uVar50 = 0;
                  uVar43 = 1;
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  *(undefined8 *)puVar28 = _LC20;
                }
              }
              else {
switchD_0010bc88_caseD_d:
                puVar24 = puVar28 + 1;
                uVar43 = 0;
                uVar50 = 0;
                *puVar28 = iVar52 + 0x80180000;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
              }
              break;
                     case 0x5e:
              *puVar28 = 0x80090000;
              uVar50 = 0;
              uVar43 = 0;
              uVar38 = 0;
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              puVar24 = puVar28 + 1;
              break;
                     case 0x7b:
              goto LAB_0010b652;
                     case 0x7c:
              psVar11 = *(short **)(puVar36 + -0x1758);
              if (((psVar11 != (short *)0x0) && (*psVar11 == *(short *)(puVar36 + -0x1748))) &&
                 ((*(byte *)(psVar11 + 3) & 1) != 0)) {
                if ((uint)(ushort)psVar11[2] < *(uint *)(puVar36 + -0x149c)) {
                  psVar11[2] = (short)*(uint *)(puVar36 + -0x149c);
                }
                *(uint *)(puVar36 + -0x149c) = (uint)*(ushort *)(*(long *)(puVar36 + -0x1758) + 2);
              }
              *puVar28 = 0x80010000;
              uVar50 = 0;
              uVar43 = 0;
              uVar38 = 0;
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              puVar24 = puVar28 + 1;
                  }

               }
 else {
                  puVar48 = *(ushort**)( puVar36 + -0x1610 );
                  if (( ( (int)uVar27 != 0x28 ) || ( (long)puVar44 - (long)puVar48 < 5 ) ) || ( ( uVar14 = *puVar48 ),uVar14 != 0x3f && ( uVar14 != 0x2a ) )) {
                     LAB_0010a8d9:uVar16 = *(uint*)( puVar36 + -6000 );
                     param_3 = *(uint*)( puVar36 + -0x1768 );
                     goto LAB_0010a1f2;
                  }

                  uVar4 = puVar48[1];
                  puVar30 = puVar48;
                  if (uVar14 == 0x2a) {
                     if (( 0xff < uVar4 ) || ( ( *(byte*)( *(long*)( puVar36 + -0x1548 ) + (ulong)uVar4 ) & 4 ) == 0 )) goto LAB_0010a8d9;
                     if (puVar44 <= puVar48) goto LAB_00109f43;
                     *(int*)( puVar36 + -0x16a0 ) = iVar15;
                     puVar23 = puVar28;
                     LAB_0010a6da:uVar14 = puVar48[1];
                     uVar27 = (ulong)uVar14;
                     *(uint*)( puVar36 + -0x163c ) = (uint)uVar14;
                     puVar28 = puVar23;
                     if (uVar14 == 0x29) goto LAB_0010bb9e;
                     if (( uVar14 < 0x100 ) && ( ( *(byte*)( *(long*)( puVar36 + -0x1548 ) + uVar27 ) & 4 ) != 0 )) {
                        *(ulong*)( puVar36 + -0x1790 ) = uVar27;
                        *(undefined1**)( puVar36 + -0x1798 ) = puVar36 + -0x1568;
                        *(undefined1**)( puVar36 + -0x17a0 ) = puVar36 + -0x1634;
                        *(undefined1**)( puVar36 + -0x17a8 ) = puVar36 + -0x1638;
                        puVar47 = (ushort*)( puVar36 + -0x15f0 );
                        *(undefined8*)( puVar36 + -0x17b0 ) = 0x10cb87;
                        iVar15 = read_name(puVar36 + -0x1610, puVar44, *(undefined4*)( puVar36 + -0x16d0 ));
                        if (iVar15 == 0) goto LAB_0010cb2c;
                        puVar48 = *(ushort**)( puVar36 + -0x1610 );
                        if (( puVar48 < puVar44 ) && ( *puVar48 == 0x3a )) {
                           *(int*)( puVar36 + -0x1738 ) = iVar52;
                           puVar40 = &alasnames;
                           *(uint**)( puVar36 + -0x1728 ) = puVar23;
                           iVar52 = 0;
                           uVar22 = extraout_XMM0_Qa_00;
                           do {
                              *(int*)( puVar36 + -0x1630 ) = iVar52;
                              if (iVar52 == 0x11) break;
                              iVar15 = ( &alasmeta )[(long)iVar52 * 2];
                              if (iVar15 == *(int*)( puVar36 + -0x1638 )) {
                                 *(ushort**)( puVar36 + -0x1670 ) = puVar48;
                                 *(undefined**)( puVar36 + -0x16c8 ) = puVar40;
                                 *(undefined8*)( puVar36 + -0x1668 ) = uVar22;
                                 *(undefined8*)( puVar36 + -0x1790 ) = 0x10cc19;
                                 iVar20 = _pcre2_strncmp_c8_16(*(undefined8*)( puVar36 + -0x1600 ), puVar40, iVar15);
                                 puVar40 = *(undefined**)( puVar36 + -0x16c8 );
                                 puVar48 = *(ushort**)( puVar36 + -0x1670 );
                                 uVar22 = *(undefined8*)( puVar36 + -0x1668 );
                                 if (iVar20 == 0) goto code_r0x0010cc40;
                              }

                              iVar52 = iVar52 + 1;
                              puVar40 = puVar40 + ( iVar15 + 1 );
                           }
 while ( true );
                        }

                        uVar16 = *(uint*)( puVar36 + -6000 );
                        param_3 = *(uint*)( puVar36 + -0x1768 );
                        uVar17 = 0xc3;
                        goto LAB_001097e2;
                     }

                     *(ulong*)( puVar36 + -0x1790 ) = uVar27;
                     *(undefined1**)( puVar36 + -0x1798 ) = puVar36 + -0x1568;
                     *(undefined1**)( puVar36 + -0x17a0 ) = puVar36 + -0x1634;
                     *(undefined1**)( puVar36 + -0x17a8 ) = puVar36 + -0x1638;
                     *(undefined8*)( puVar36 + -0x17b0 ) = 0x10a750;
                     iVar52 = read_name(puVar36 + -0x1610, puVar44, *(undefined4*)( puVar36 + -0x16d0 ), 0, puVar36 + -0x15f0);
                     if (iVar52 != 0) {
                        puVar48 = *(ushort**)( puVar36 + -0x1610 );
                        if (( puVar48 < puVar44 ) && ( ( *puVar48 == 0x3a || ( *puVar48 == 0x29 ) ) )) {
                           uVar16 = *(uint*)( puVar36 + -0x1638 );
                           uVar27 = (ulong)uVar16;
                           iVar52 = 0;
                           *(ushort**)( puVar36 + -0x1738 ) = puVar44;
                           *(uint**)( puVar36 + -0x16c8 ) = puVar23;
                           puVar24 = &verbs;
                           *(undefined4*)( puVar36 + -0x1630 ) = 0;
                           *(uint**)( puVar36 + -0x1728 ) = puVar23;
                           do {
                              if (*puVar24 == uVar16) {
                                 *(ushort**)( puVar36 + -0x1670 ) = puVar48;
                                 *(ulong*)( puVar36 + -0x1698 ) = uVar27;
                                 *(undefined8*)( puVar36 + -0x1790 ) = 0x10a80a;
                                 uVar17 = _pcre2_strncmp_c8_16();
                                 uVar27 = *(ulong*)( puVar36 + -0x1698 );
                                 puVar48 = *(ushort**)( puVar36 + -0x1670 );
                                 uVar38 = (ulong)uVar17;
                                 if (uVar17 == 0) goto code_r0x0010a827;
                              }

                              iVar52 = iVar52 + 1;
                              puVar24 = puVar24 + 3;
                              *(int*)( puVar36 + -0x1630 ) = iVar52;
                              if (iVar52 == 9) break;
                           }
 while ( true );
                        }

                        uVar16 = *(uint*)( puVar36 + -6000 );
                        param_3 = *(uint*)( puVar36 + -0x1768 );
                        uVar17 = 0xa0;
                        goto LAB_001097e2;
                     }

                     LAB_0010cb2c:uVar16 = *(uint*)( puVar36 + -6000 );
                     param_3 = *(uint*)( puVar36 + -0x1768 );
                     uVar17 = *(uint*)( puVar36 + -0x1634 );
                     puVar48 = *(ushort**)( puVar36 + -0x1610 );
                     goto LAB_001097e2;
                  }

                  if (uVar4 != 0x3d) {
                     if (uVar4 < 0x3e) {
                        if (( uVar4 != 0x21 ) && ( ( uVar4 != 0x3c || ( ( puVar48[2] != 0x3d && ( puVar48[2] != 0x21 ) ) ) ) )) goto LAB_0010a8d9;
                     }
 else if (( uVar4 != 0x43 ) || ( iVar52 != 2 )) goto LAB_0010a8d9;
                  }

                  if (puVar44 <= puVar48) goto LAB_00109f43;
                  *(int*)( puVar36 + -0x16a0 ) = iVar15;
                  puVar45 = puVar48;
                  LAB_0010bbb5:uVar22 = auVar59._0_8_;
                  puVar48 = puVar45 + 1;
                  *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                  puVar30 = puVar48;
                  if (puVar44 <= puVar48) goto LAB_00109f43;
                  puVar23 = puVar28;
                  switch (puVar45[1]) {
                     case 0x21:
              goto switchD_0010bbec_caseD_21;
                     default:
              if (((puVar45[1] == 0x2d) && (2 < (long)puVar44 - (long)puVar48)) &&
                 ((ushort)(puVar45[2] - 0x30) < 10)) goto LAB_0010c482;
              puVar47 = (ushort *)(ulong)(*(ushort *)(puVar36 + -0x1748) + 1);
              if (*(long *)(puVar36 + -0x1758) != 0) {
                *(long *)(puVar36 + -0x1758) = *(long *)(puVar36 + -0x1758) + 0x10;
                if (*(ulong *)(puVar36 + -0x1758) < *(ulong *)(puVar36 + -0x1690))
                goto LAB_0010ce08;
                goto LAB_0010cd98;
              }
              *(undefined8 *)(puVar36 + -0x1758) = *(undefined8 *)(puVar36 + -0x1540);
LAB_0010ce08:
              puVar55 = *(undefined2 **)(puVar36 + -0x1758);
              uVar46 = (undefined2)(*(ushort *)(puVar36 + -0x1748) + 1);
              *puVar55 = uVar46;
              puVar55[3] = 0;
              uVar14 = puVar45[1];
              *(undefined8 *)(puVar55 + 4) = uVar22;
              if (uVar14 == 0x7c) {
                puVar48 = puVar45 + 2;
                *(undefined2 *)(puVar36 + -0x1748) = uVar46;
                uVar38 = 0;
                uVar16 = *(uint *)(puVar36 + -0x149c);
                uVar50 = 0;
                puVar55[3] = 1;
                uVar43 = 0;
                *(ushort **)(puVar36 + -0x1610) = puVar48;
                auVar59 = pshuflw(auVar59,ZEXT416(uVar16),0);
                *(int *)(puVar55 + 1) = auVar59._0_4_;
                *(uint *)(puVar36 + -0x14a0) = *(uint *)(puVar36 + -0x14a0) | 0x200000;
                *puVar28 = 0x801a0000;
                puVar24 = puVar28 + 1;
                break;
              }
              *(undefined4 *)(puVar36 + -0x1620) = 0;
              *(undefined4 *)(*(long *)(puVar36 + -0x1758) + 2) = 0;
              uVar14 = puVar45[1];
              *(undefined4 *)(puVar36 + -0x1624) = 0;
              *(undefined4 *)(puVar36 + -0x15f0) = 0;
              *(undefined4 *)(puVar36 + -0x161c) = 0;
              if (uVar14 == 0x5e) {
                *(ushort **)(puVar36 + -0x1610) = puVar45 + 2;
                uVar17 = *(uint *)(puVar36 + -0x1730) & 0xfeffdb57;
                uVar16 = *(uint *)(puVar36 + -0x16f8) & 0xffffff7f;
                *(ulong *)(puVar36 + -0x16f0) = *(ulong *)(puVar36 + -0x16f0) & _LC24;
              }
              else {
                uVar16 = *(uint *)(puVar36 + -0x16f8);
                uVar17 = *(uint *)(puVar36 + -0x1730);
              }
              bVar56 = uVar14 != 0x5e;
              cVar42 = '\0';
              puVar23 = (uint *)(puVar36 + -0x161c);
              puVar24 = (uint *)(puVar36 + -0x1624);
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              while (puVar48 < puVar44) {
                uVar14 = *puVar48;
                puVar36[-0x1738] = uVar14 != 0x29 && uVar14 != 0x3a;
                if (uVar14 == 0x29 || uVar14 == 0x3a) break;
                puVar30 = puVar48 + 1;
                switch(uVar14) {
                case 0x2d:
                  if (!bVar56) {
                    uVar16 = *(uint *)(puVar36 + -6000);
                    param_3 = *(uint *)(puVar36 + -0x1768);
                    uVar17 = 0xc2;
                    goto LAB_001097e2;
                  }
                  bVar56 = false;
                  puVar23 = (uint *)(puVar36 + -0x15f0);
                  puVar24 = (uint *)(puVar36 + -0x1620);
                  break;
                default:
                  uVar16 = *(uint *)(puVar36 + -6000);
                  param_3 = *(uint *)(puVar36 + -0x1768);
                  uVar17 = 0x6f;
                  goto LAB_001097e2;
                case 0x4a:
                  *puVar24 = *puVar24 | 0x40;
                  *(uint *)(puVar36 + -0x14a0) = *(uint *)(puVar36 + -0x14a0) | 0x400;
                  break;
                case 0x55:
                  *puVar24 = *puVar24 | 0x40000;
                  break;
                case 0x61:
                  uVar43 = *puVar23;
                  if (puVar30 < puVar44) {
                    switch(puVar48[1]) {
                    case 0x44:
                      puVar30 = puVar48 + 2;
                      *puVar23 = uVar43 | 0x100;
                      break;
                    default:
                      goto switchD_0010d016_caseD_45;
                    case 0x50:
                      puVar30 = puVar48 + 2;
                      *puVar23 = uVar43 | 0x1800;
                      break;
                    case 0x53:
                      puVar30 = puVar48 + 2;
                      *puVar23 = uVar43 | 0x200;
                      break;
                    case 0x54:
                      puVar30 = puVar48 + 2;
                      *puVar23 = uVar43 | 0x1000;
                      break;
                    case 0x57:
                      puVar30 = puVar48 + 2;
                      *puVar23 = uVar43 | 0x400;
                    }
                  }
                  else {
switchD_0010d016_caseD_45:
                    *puVar23 = uVar43 | 0x1f00;
                  }
                  break;
                case 0x69:
                  *puVar24 = *puVar24 | 8;
                  break;
                case 0x6d:
                  *puVar24 = *puVar24 | 0x400;
                  break;
                case 0x6e:
                  *puVar24 = *puVar24 | 0x2000;
                  break;
                case 0x72:
                  *puVar23 = *puVar23 | 0x80;
                  break;
                case 0x73:
                  *puVar24 = *puVar24 | 0x20;
                  break;
                case 0x78:
                  uVar43 = *puVar24;
                  *puVar24 = uVar43 | 0x80;
                  if ((puVar30 < puVar44) && (puVar48[1] == 0x78)) {
                    puVar30 = puVar48 + 2;
                    *puVar24 = uVar43 | 0x1000080;
                  }
                }
                cVar42 = puVar36[-0x1738];
                puVar48 = puVar30;
              }
              if (cVar42 != '\0') {
                *(ushort **)(puVar36 + -0x1610) = puVar48;
              }
              uVar43 = *(uint *)(puVar36 + -0x1624);
              uVar33 = *(uint *)(puVar36 + -0x1620);
              if (((uVar43 & 0x1000080) == 0x80) || ((uVar33 & 0x80) != 0)) {
                uVar33 = uVar33 | 0x1000000;
                *(uint *)(puVar36 + -0x1620) = uVar33;
              }
              uVar17 = ~uVar33 & (uVar17 | uVar43);
              uVar16 = ~*(uint *)(puVar36 + -0x15f0) & (uVar16 | *(uint *)(puVar36 + -0x161c));
              *(ulong *)(puVar36 + -0x16f0) =
                   ~CONCAT44(*(uint *)(puVar36 + -0x15f0),uVar33) &
                   (CONCAT44(*(uint *)(puVar36 + -0x161c),uVar43) | *(ulong *)(puVar36 + -0x16f0));
              if (puVar44 <= puVar48) {
                puVar30 = *(ushort **)(puVar36 + -0x1610);
                goto LAB_00109f43;
              }
              uVar14 = *puVar48;
              *(ushort **)(puVar36 + -0x1610) = puVar48 + 1;
              if (uVar14 == 0x29) {
                puVar24 = puVar28;
                if ((*(ulong *)(puVar36 + -0x1540) < *(ulong *)(puVar36 + -0x1758)) &&
                   (*(short *)(*(ulong *)(puVar36 + -0x1758) - 0x10) ==
                    *(short *)(puVar36 + -0x1748))) {
                  *(long *)(puVar36 + -0x1758) = *(long *)(puVar36 + -0x1758) + -0x10;
                }
                else {
                  **(undefined2 **)(puVar36 + -0x1758) = *(undefined2 *)(puVar36 + -0x1748);
                }
              }
              else {
                *puVar28 = 0x801a0000;
                *(undefined2 *)(puVar36 + -0x1748) = uVar46;
                puVar24 = puVar28 + 1;
              }
              if ((uVar17 == *(uint *)(puVar36 + -0x1730)) &&
                 (uVar16 == *(uint *)(puVar36 + -0x16f8))) {
                *(uint *)(puVar36 + -0x1730) = uVar17;
                uVar50 = 0;
                uVar43 = 0;
                uVar38 = 0;
                *(uint *)(puVar36 + -0x16f8) = uVar16;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
              }
              else {
                *puVar24 = 0x801b0000;
                uVar50 = 0;
                uVar38 = 0;
                uVar22 = *(undefined8 *)(puVar36 + -0x16f0);
                *(uint *)(puVar36 + -0x1730) = uVar17;
                uVar43 = 0;
                *(uint *)(puVar36 + -0x16f8) = uVar16;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
                puVar24[1] = (uint)uVar22;
                puVar24[2] = (uint)((ulong)uVar22 >> 0x20);
                puVar24 = puVar24 + 3;
              }
              break;
                     case 0x26:
switchD_0010bbec_caseD_26:
              *(ushort **)(puVar36 + -0x1790) = puVar47;
              *(undefined1 **)(puVar36 + -0x1798) = puVar36 + -0x1568;
              *(undefined1 **)(puVar36 + -0x17a0) = puVar36 + -0x1634;
              *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
              puVar47 = (ushort *)(puVar36 + -0x15f0);
              *(undefined8 *)(puVar36 + -0x17b0) = 0x10cd12;
              iVar52 = read_name(puVar36 + -0x1610,puVar44,*(undefined4 *)(puVar36 + -0x16d0),0x29);
              if (iVar52 == 0) goto LAB_0010cb2c;
              *puVar28 = 0x80210000;
              goto LAB_0010cd25;
                     case 0x27:
              uVar22 = 0x27;
LAB_0010c5e9:
              *(ushort **)(puVar36 + -0x1790) = puVar47;
              *(undefined1 **)(puVar36 + -0x1798) = puVar36 + -0x1568;
              *(undefined1 **)(puVar36 + -0x17a0) = puVar36 + -0x1634;
              *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
              puVar47 = (ushort *)(puVar36 + -0x15f0);
              *(undefined8 *)(puVar36 + -0x17b0) = 0x10c62d;
              iVar52 = read_name(puVar36 + -0x1610,puVar44,*(undefined4 *)(puVar36 + -0x16d0),uVar22
                                );
              if (iVar52 == 0) goto LAB_0010cb2c;
              if (*(uint *)(puVar36 + -0x149c) < 0xffff) {
                uVar16 = *(uint *)(puVar36 + -0x149c) + 1;
                *(short *)(puVar36 + -0x1748) = *(short *)(puVar36 + -0x1748) + 1;
                puVar24 = puVar28 + 1;
                *(uint *)(puVar36 + -0x149c) = uVar16;
                *puVar28 = uVar16 | 0x80080000;
                if (*(ushort *)(puVar36 + -0x14b8) < 10000) {
                  uVar16 = *(uint *)(puVar36 + -0x1638);
                  if ((uint)*(ushort *)(puVar36 + -0x14b6) < uVar16 + 2) {
                    *(short *)(puVar36 + -0x14b6) = (short)uVar16 + 2;
                  }
                  puVar26 = *(undefined8 **)(puVar36 + -0x14b0);
                  *(undefined4 *)(puVar36 + -0x1630) = 0;
                  *(undefined4 *)(puVar36 + -0x1728) = 0;
                  if (*(ushort *)(puVar36 + -0x14b8) == 0) {
                    uVar17 = 0;
                    uVar14 = 0;
                  }
                  else {
                    puVar47 = (ushort *)0x0;
                    *(uint *)(puVar36 + -0x1738) = *(uint *)(puVar36 + -0x1738) & 0x40;
                    puVar48 = puVar47;
                    do {
                      if (uVar16 == *(ushort *)((long)puVar26 + 0xc)) {
                        uVar22 = *puVar26;
                        *(undefined8 *)(puVar36 + -0x1790) = 0x10c718;
                        iVar52 = _pcre2_strncmp_16(*(undefined8 *)(puVar36 + -0x1600),uVar22,uVar16)
                        ;
                        if (iVar52 != 0) goto LAB_0010c6d2;
                        if (*(int *)(puVar26 + 1) == *(int *)(puVar36 + -0x149c)) {
                          uVar14 = *(ushort *)(puVar36 + -0x14b8);
                          uVar17 = (uint)uVar14;
                          uVar38 = 0;
                          if ((int)(uint)uVar14 <= (int)puVar47) goto LAB_0010c778;
                          puVar48 = *(ushort **)(puVar36 + -0x1610);
                          uVar43 = 0;
                          uVar50 = 0;
                          goto LAB_0010a929;
                        }
                        if (*(int *)(puVar36 + -0x1738) == 0) {
                          uVar16 = *(uint *)(puVar36 + -6000);
                          param_3 = *(uint *)(puVar36 + -0x1768);
                          uVar17 = 0x8f;
                          puVar48 = *(ushort **)(puVar36 + -0x1610);
                          goto LAB_001097e2;
                        }
                        *(undefined2 *)((long)puVar26 + 0xe) = 1;
                        *(undefined4 *)(puVar36 + -0x1728) = 1;
                        *(undefined4 *)(puVar36 + -0x1440) = 1;
                      }
                      else {
LAB_0010c6d2:
                        if (*(int *)(puVar26 + 1) == *(int *)(puVar36 + -0x149c)) {
                          uVar16 = *(uint *)(puVar36 + -6000);
                          param_3 = *(uint *)(puVar36 + -0x1768);
                          uVar17 = 0xa5;
                          puVar48 = *(ushort **)(puVar36 + -0x1610);
                          goto LAB_001097e2;
                        }
                      }
                      uVar17 = (int)puVar47 + 1;
                      puVar47 = (ushort *)(ulong)uVar17;
                      puVar26 = puVar26 + 2;
                      *(uint *)(puVar36 + -0x1630) = uVar17;
                    } while ((int)uVar17 < (int)(uint)*(ushort *)(puVar36 + -0x14b8));
                    uVar14 = *(ushort *)(puVar36 + -0x14b8);
                    uVar17 = (uint)uVar14;
                    puVar47 = puVar48;
                  }
LAB_0010c778:
                  if (*(uint *)(puVar36 + -0x14a8) <= uVar17) {
                    uVar17 = *(uint *)(puVar36 + -0x14a8) * 2;
                    pcVar8 = (code *)**(undefined8 **)(puVar36 + -0x1568);
                    *(undefined8 *)(puVar36 + -0x1790) = 0x10c79d;
                    pvVar25 = (void *)(*pcVar8)((ulong)uVar17 << 4);
                    if (pvVar25 == (void *)0x0) {
                      uVar16 = *(uint *)(puVar36 + -6000);
                      param_3 = *(uint *)(puVar36 + -0x1768);
                      uVar17 = 0x79;
                      puVar48 = *(ushort **)(puVar36 + -0x1610);
                      goto LAB_001097e2;
                    }
                    *(undefined8 *)(puVar36 + -0x1790) = 0x10c7c4;
                    memcpy(pvVar25,*(void **)(puVar36 + -0x14b0),
                           (ulong)*(uint *)(puVar36 + -0x14a8) << 4);
                    if (0x14 < *(uint *)(puVar36 + -0x14a8)) {
                      pcVar8 = *(code **)(*(long *)(puVar36 + -0x1568) + 8);
                      *(undefined8 *)(puVar36 + -0x1790) = 0x10c7e5;
                      (*pcVar8)();
                    }
                    *(void **)(puVar36 + -0x14b0) = pvVar25;
                    uVar14 = *(ushort *)(puVar36 + -0x14b8);
                    *(uint *)(puVar36 + -0x14a8) = uVar17;
                  }
                  uVar38 = 0;
                  puVar26 = (undefined8 *)((ulong)uVar14 * 0x10 + *(long *)(puVar36 + -0x14b0));
                  uVar50 = 0;
                  *puVar26 = *(undefined8 *)(puVar36 + -0x1600);
                  uVar18 = *(undefined4 *)(puVar36 + -0x149c);
                  *(short *)((long)puVar26 + 0xc) = (short)uVar16;
                  uVar43 = 0;
                  *(undefined4 *)(puVar26 + 1) = uVar18;
                  *(undefined2 *)((long)puVar26 + 0xe) = *(undefined2 *)(puVar36 + -0x1728);
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  *(ushort *)(puVar36 + -0x14b8) = uVar14 + 1;
                  break;
                }
                uVar16 = *(uint *)(puVar36 + -6000);
                param_3 = *(uint *)(puVar36 + -0x1768);
                uVar17 = 0x95;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
              }
              else {
                uVar16 = *(uint *)(puVar36 + -6000);
                param_3 = *(uint *)(puVar36 + -0x1768);
                uVar17 = 0xc5;
                puVar48 = *(ushort **)(puVar36 + -0x1610);
              }
              goto LAB_001097e2;
                     case 0x28:
              puVar30 = puVar45 + 2;
              *(ushort **)(puVar36 + -0x1610) = puVar30;
              if (puVar44 <= puVar30) goto LAB_00109f43;
              uVar14 = puVar45[2];
              *(short *)(puVar36 + -0x1748) = *(short *)(puVar36 + -0x1748) + 1;
              bVar57 = uVar14 == 0x2a;
              bVar56 = uVar14 == 0x3f || bVar57;
              if (uVar14 == 0x3f || bVar57) {
                puVar24 = puVar28 + 1;
                uVar50 = 0;
                uVar43 = 0;
                uVar38 = 2;
                *puVar28 = 0x800f0000;
                *(ushort **)(puVar36 + -0x1610) = puVar48;
              }
              else {
                *(ulong *)(puVar36 + -0x1790) = (ulong)CONCAT11((char)(uVar14 >> 8),bVar57);
                puVar47 = (ushort *)0xa1;
                puVar54 = puVar36 + -0x1634;
                *(undefined1 **)(puVar36 + -0x1798) = puVar54;
                *(undefined1 **)(puVar36 + -0x1738) = puVar36 + -0x1610;
                *(undefined8 *)(puVar36 + -0x17a0) = 0x10c92c;
                pcVar41 = (char *)puVar44;
                iVar52 = read_number(puVar36 + -0x1610,puVar44,*(undefined4 *)(puVar36 + -0x149c),
                                     0xffff);
                uVar32 = *(undefined8 *)(puVar36 + -0x1790);
                uVar22 = *(undefined8 *)(puVar36 + -0x1738);
                if (iVar52 == 0) {
                  uVar17 = *(uint *)(puVar36 + -0x1634);
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  if (uVar17 != 0) {
                    uVar16 = *(uint *)(puVar36 + -6000);
                    param_3 = *(uint *)(puVar36 + -0x1768);
                    goto LAB_001097e2;
                  }
                  lVar49 = (long)puVar44 - (long)puVar48;
                  if (lVar49 < 0x13) {
                    uVar14 = *puVar48;
                    if (uVar14 != 0x52) goto LAB_0010d68f;
                    if (lVar49 < 3) goto LAB_0010d764;
LAB_0010d824:
                    if (puVar48[1] != 0x26) goto LAB_0010d764;
                    *(ushort **)(puVar36 + -0x1610) = puVar48 + 1;
                    *(ushort **)(puVar36 + -0x1790) = puVar48 + 1;
                    *(undefined1 **)(puVar36 + -0x1798) = puVar36 + -0x1568;
                    *(undefined1 **)(puVar36 + -0x17a0) = puVar54;
                    *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
                    puVar47 = (ushort *)(puVar36 + -0x15f0);
                    *(undefined8 *)(puVar36 + -0x17b0) = 0x10d878;
                    iVar52 = read_name(uVar22,puVar44,*(undefined4 *)(puVar36 + -0x16d0),0x29);
                    if (iVar52 == 0) goto LAB_0010cb2c;
                    *(long *)(puVar36 + -0x1610) = *(long *)(puVar36 + -0x1610) + -2;
                    uVar16 = *(uint *)(puVar36 + -0x1638);
                    *puVar28 = 0x80130000;
LAB_0010d6ee:
                    puVar28[1] = uVar16;
                    puVar23 = puVar28 + 2;
                  }
                  else {
                    *(undefined8 *)(puVar36 + -0x1728) = uVar22;
                    pcVar41 = "VERSION";
                    *(ushort **)(puVar36 + -0x1738) = puVar48;
                    *(undefined8 *)(puVar36 + -0x1790) = 0x10d92d;
                    iVar52 = _pcre2_strncmp_c8_16(puVar48,"VERSION",7,uVar32);
                    puVar48 = *(ushort **)(puVar36 + -0x1738);
                    uVar22 = *(undefined8 *)(puVar36 + -0x1728);
                    if ((iVar52 == 0) && (uVar14 = puVar48[7], uVar14 != 0x29)) {
                      if (uVar14 == 0x3e) {
                        puVar30 = puVar48 + 8;
                      }
                      else {
                        puVar30 = puVar48 + 7;
                      }
                      uVar4 = *puVar30;
                      *(ushort **)(puVar36 + -0x1610) = puVar30;
                      *(undefined4 *)(puVar36 + -0x15f0) = 0;
                      if (uVar4 == 0x3d) {
                        uVar4 = puVar30[1];
                        *(ushort **)(puVar36 + -0x1610) = puVar30 + 1;
                        puVar30 = puVar30 + 1;
                        if ((ushort)(uVar4 - 0x30) < 10) {
                          *(ulong *)(puVar36 + -0x1790) = uVar27;
                          puVar47 = (ushort *)0xb3;
                          *(undefined1 **)(puVar36 + -0x1798) = puVar54;
                          *(undefined8 *)(puVar36 + -0x17a0) = 0x10d9bf;
                          iVar52 = read_number(uVar22,puVar44,0xffffffff,1000);
                          if (iVar52 == 0) goto LAB_0010cb2c;
                          puVar48 = *(ushort **)(puVar36 + -0x1610);
                          puVar30 = puVar48;
                          if (puVar48 < puVar44) {
                            uVar16 = 0;
                            if (*puVar48 != 0x2e) {
LAB_0010d9e1:
                              *puVar28 = 0x80150000;
                              puVar24 = puVar28 + 4;
                              puVar28[1] = (uint)(uVar14 == 0x3e);
                              puVar28[2] = *(uint *)(puVar36 + -0x15f0);
                              puVar28[3] = uVar16;
                              goto LAB_0010c98b;
                            }
                            puVar30 = puVar48 + 1;
                            *(ushort **)(puVar36 + -0x1610) = puVar30;
                            if ((puVar30 < puVar44) &&
                               (uVar4 = puVar48[1], (ushort)(uVar4 - 0x30) < 10)) {
                              puVar30 = puVar48 + 2;
                              *(ushort **)(puVar36 + -0x1610) = puVar30;
                              uVar16 = (uVar4 - 0x30) * 10;
                              if (puVar30 < puVar44) {
                                if ((ushort)(puVar48[2] - 0x30) < 10) {
                                  puVar30 = puVar48 + 3;
                                  uVar16 = (uVar16 - 0x30) + (uint)puVar48[2];
                                  *(ushort **)(puVar36 + -0x1610) = puVar30;
                                  if (puVar44 <= puVar30) goto LAB_0010da92;
                                }
                                if (*puVar30 == 0x29) {
                                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                                  goto LAB_0010d9e1;
                                }
                                puVar30 = *(ushort **)(puVar36 + -0x1610);
                              }
                            }
                          }
                        }
                      }
LAB_0010da92:
                      *(undefined4 *)(puVar36 + -0x1640) = 0xb3;
                      uVar17 = 0xb3;
                      uVar27 = (long)puVar30 - *(long *)(puVar36 + -0x1530) >> 1;
                      *(ulong *)(puVar36 + -0x14c0) = uVar27;
                      goto LAB_00109cc4;
                    }
                    uVar14 = *puVar48;
                    lVar49 = extraout_RDX;
                    if (uVar14 == 0x52) goto LAB_0010d824;
LAB_0010d68f:
                    uVar32 = 0x3e;
                    if ((uVar14 == 0x3c) || (uVar32 = 0x27, uVar14 == 0x27)) {
                      *(char **)(puVar36 + -0x1790) = pcVar41;
                      *(undefined1 **)(puVar36 + -0x1798) = puVar36 + -0x1568;
                      *(undefined1 **)(puVar36 + -0x17a0) = puVar54;
                      *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
                      puVar47 = (ushort *)(puVar36 + -0x15f0);
                      *(undefined8 *)(puVar36 + -0x17b0) = 0x10d6d4;
                      iVar52 = read_name(uVar22,puVar44,*(undefined4 *)(puVar36 + -0x16d0),uVar32);
                      if (iVar52 == 0) goto LAB_0010cb2c;
                      *puVar28 = 0x80110000;
                      uVar16 = *(uint *)(puVar36 + -0x1638);
                      goto LAB_0010d6ee;
                    }
LAB_0010d764:
                    *(ushort **)(puVar36 + -0x1610) = puVar48 + -1;
                    *(long *)(puVar36 + -0x1790) = lVar49;
                    *(undefined1 **)(puVar36 + -0x1798) = puVar36 + -0x1568;
                    *(undefined1 **)(puVar36 + -0x17a0) = puVar54;
                    *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
                    puVar47 = (ushort *)(puVar36 + -0x15f0);
                    *(undefined8 *)(puVar36 + -0x17b0) = 0x10d7ab;
                    iVar52 = read_name(uVar22,puVar44,*(undefined4 *)(puVar36 + -0x16d0),0x29);
                    if (iVar52 == 0) goto LAB_0010cb2c;
                    uVar16 = *(uint *)(puVar36 + -0x1638);
                    psVar11 = *(short **)(puVar36 + -0x1600);
                    uVar17 = uVar16;
                    if (uVar16 != 6) {
LAB_0010d7d1:
                      *(undefined4 *)(puVar36 + -0x1630) = 1;
                      lVar49 = 1;
                      while (iVar52 = (int)lVar49, iVar52 < (int)uVar17) {
                        psVar1 = psVar11 + lVar49;
                        lVar49 = lVar49 + 1;
                        if (9 < (ushort)(*psVar1 - 0x30U)) {
                          if (bVar56) {
                            *(int *)(puVar36 + -0x1630) = iVar52;
                          }
                          goto LAB_0010d8ac;
                        }
                        bVar56 = true;
                      }
                      if (bVar56) {
                        *(int *)(puVar36 + -0x1630) = iVar52;
                      }
LAB_0010d8ac:
                      if ((*psVar11 != 0x52) || (uVar43 = 0x80140000, iVar52 < (int)uVar17)) {
                        uVar43 = 0x80110000;
                      }
                      *(long *)(puVar36 + -0x1610) = *(long *)(puVar36 + -0x1610) + -2;
                      *puVar28 = uVar43;
                      goto LAB_0010d6ee;
                    }
                    *(undefined4 *)(puVar36 + -0x1738) = 6;
                    *(undefined8 *)(puVar36 + -0x1790) = 0x10d8ea;
                    iVar52 = _pcre2_strncmp_c8_16(psVar11,"DEFINE",6);
                    uVar17 = *(uint *)(puVar36 + -0x1738);
                    if (iVar52 != 0) {
                      uVar16 = *(uint *)(puVar36 + -0x1638);
                      goto LAB_0010d7d1;
                    }
                    *(long *)(puVar36 + -0x1610) = *(long *)(puVar36 + -0x1610) + -2;
                    puVar23 = puVar28 + 1;
                    *puVar28 = 0x80100000;
                  }
                  uVar22 = *(undefined8 *)(puVar36 + -0x15f0);
                  puVar24 = puVar23 + 2;
                  puVar23[1] = (uint)uVar22;
                  *puVar23 = (uint)((ulong)uVar22 >> 0x20);
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                }
                else {
                  puVar48 = *(ushort **)(puVar36 + -0x1610);
                  uVar16 = *(uint *)(puVar36 + -0x1630);
                  if ((int)uVar16 < 1) {
                    uVar16 = *(uint *)(puVar36 + -6000);
                    param_3 = *(uint *)(puVar36 + -0x1768);
                    uVar17 = 0x73;
                    goto LAB_001097e2;
                  }
                  lVar49 = ((long)puVar48 - *(long *)(puVar36 + -0x1530) >> 1) + -2;
                  *puVar28 = 0x80120000;
                  puVar24 = puVar28 + 4;
                  *(long *)(puVar36 + -0x15f0) = lVar49;
                  puVar28[2] = (uint)lVar49;
                  puVar28[1] = (uint)((ulong)lVar49 >> 0x20);
                  puVar28[3] = uVar16;
                }
LAB_0010c98b:
                if ((puVar44 <= puVar48) || (*puVar48 != 0x29)) {
                  uVar16 = *(uint *)(puVar36 + -6000);
                  param_3 = *(uint *)(puVar36 + -0x1768);
                  uVar17 = 0x7c;
                  goto LAB_001097e2;
                }
                puVar48 = puVar48 + 1;
                uVar50 = 0;
                uVar43 = 0;
                uVar38 = 0;
                *(ushort **)(puVar36 + -0x1610) = puVar48;
              }
              break;
                     case 0x2a:
              goto switchD_0010bbec_caseD_2a;
                     case 0x2b:
              if ((2 < (long)puVar44 - (long)puVar48) && ((ushort)(puVar45[2] - 0x30) < 10)) {
LAB_0010c482:
                uVar18 = *(undefined4 *)(puVar36 + -0x149c);
                goto LAB_0010c489;
              }
              uVar16 = *(uint *)(puVar36 + -6000);
              param_3 = *(uint *)(puVar36 + -0x1768);
              uVar17 = 0x81;
              goto LAB_001097e2;
                     case 0x30:
                     case 0x31:
                     case 0x32:
                     case 0x33:
                     case 0x34:
                     case 0x35:
                     case 0x36:
                     case 0x37:
                     case 0x38:
                     case 0x39:
              uVar18 = 0xffffffff;
LAB_0010c489:
              *(ushort **)(puVar36 + -0x1790) = puVar48;
              puVar47 = (ushort *)0xa1;
              *(undefined1 **)(puVar36 + -0x1798) = puVar36 + -0x1634;
              *(undefined8 *)(puVar36 + -0x17a0) = 0x10c4b7;
              iVar52 = read_number(puVar36 + -0x1610,puVar44,uVar18,0xffff);
              if (iVar52 != 0) {
                puVar30 = *(ushort **)(puVar36 + -0x1610);
                if (*(int *)(puVar36 + -0x1630) < 0) {
                  uVar17 = 0x73;
                  goto LAB_0010b109;
                }
                if ((puVar30 < puVar44) && (*puVar30 == 0x29)) {
LAB_0010bcb7:
                  uVar50 = 0;
                  uVar38 = 0;
                  uVar43 = 1;
                  *puVar28 = *(uint *)(puVar36 + -0x1630) | 0x80200000;
                  lVar49 = *(long *)(puVar36 + -0x1530);
                  puVar48 = puVar30 + 1;
                  *(ushort **)(puVar36 + -0x1610) = puVar48;
                  puVar28[1] = (uint)((long)puVar30 - lVar49 >> 0x21);
                  puVar28[2] = (uint)((long)puVar30 - lVar49 >> 1);
                  puVar24 = puVar28 + 3;
                  break;
                }
                goto LAB_00109f43;
              }
              goto LAB_0010cb2c;
                     case 0x3c:
              if ((long)puVar44 - (long)puVar48 < 3) {
LAB_0010cfd1:
                uVar22 = 0x3e;
                goto LAB_0010c5e9;
              }
              uVar14 = puVar45[2];
              if ((uVar14 == 0x3d) || (uVar14 == 0x21)) {
                uVar16 = 0x80260000;
                if (uVar14 == 0x3d) {
                  uVar16 = 0x80250000;
                }
              }
              else {
                if (uVar14 != 0x2a) goto LAB_0010cfd1;
                uVar16 = 0x80280000;
              }
              *puVar28 = uVar16;
              goto LAB_0010cf70;
                     case 0x3d:
              goto switchD_0010bbec_caseD_3d;
                     case 0x3e:
              goto switchD_0010bbec_caseD_3e;
                     case 0x43:
              puVar30 = puVar45 + 2;
              *(ushort **)(puVar36 + -0x1610) = puVar30;
              if (puVar44 <= puVar30) goto LAB_00109f43;
              puVar23 = *(uint **)(puVar36 + -0x1608);
              puVar31 = puVar28;
              if ((((puVar23 != (uint *)0x0) && ((puVar36[-0x1738] & 4) != 0)) &&
                  (puVar23 == puVar28 + -4)) && (puVar31 = puVar23, puVar28[-1] != 0xff)) {
                puVar31 = puVar28;
              }
              uVar14 = puVar45[2];
              puVar47 = (ushort *)(ulong)uVar14;
              *(uint **)(puVar36 + -0x1608) = puVar31;
              bVar56 = 9 < (ushort)(uVar14 - 0x30);
              bVar57 = bVar56 && uVar14 != 0x29;
              if (bVar56 && uVar14 != 0x29) {
                *(undefined4 *)(puVar36 + -0x1630) = 0;
                lVar49 = 0;
                bVar56 = false;
                do {
                  bVar13 = bVar56;
                  lVar29 = lVar49;
                  if (*(uint *)(&_pcre2_callout_start_delims_16 + lVar29 * 4) == 0)
                  goto LAB_0010dc28;
                  lVar49 = lVar29 + 1;
                  bVar56 = bVar57;
                } while ((uint)uVar14 != *(uint *)(&_pcre2_callout_start_delims_16 + lVar29 * 4));
                if (bVar13) {
                  *(int *)(puVar36 + -0x1630) = (int)lVar29;
                }
                uVar16 = *(uint *)(&_pcre2_callout_end_delims_16 + (long)(int)lVar29 * 4);
                if (uVar16 == 0) {
LAB_0010dc28:
                  uVar16 = *(uint *)(puVar36 + -6000);
                  param_3 = *(uint *)(puVar36 + -0x1768);
                  uVar17 = 0xb6;
                  puVar48 = puVar30;
                  goto LAB_001097e2;
                }
                *puVar31 = 0x80070000;
                puVar48 = puVar30;
                do {
                  puVar35 = puVar48;
                  puVar48 = puVar35 + 1;
                  if (puVar44 <= puVar48) {
                    uVar16 = *(uint *)(puVar36 + -6000);
                    param_3 = *(uint *)(puVar36 + -0x1768);
                    uVar17 = 0xb5;
                    puVar48 = puVar30;
                    goto LAB_001097e2;
                  }
                } while ((uVar16 != *puVar48) ||
                        ((puVar48 = puVar35 + 2, puVar48 < puVar44 && (uVar16 == puVar35[2]))));
                *(ushort **)(puVar36 + -0x1610) = puVar48;
                puVar47 = (ushort *)0x1fffffffe;
                lVar49 = *(long *)(puVar36 + -0x1530);
                if (0x1fffffffe < (ulong)((long)puVar35 - (long)puVar45)) {
                  uVar16 = *(uint *)(puVar36 + -6000);
                  param_3 = *(uint *)(puVar36 + -0x1768);
                  uVar17 = 0xac;
                  goto LAB_001097e2;
                }
                puVar31[3] = (uint)((long)puVar35 - (long)puVar45 >> 1);
                puVar24 = puVar31 + 6;
                lVar29 = (long)puVar30 - lVar49 >> 1;
                *(long *)(puVar36 + -0x15f0) = lVar29;
                puVar31[5] = (uint)lVar29;
                puVar31[4] = (uint)((long)puVar30 - lVar49 >> 0x21);
              }
              else {
                *puVar31 = 0x80060000;
                uVar16 = 0;
                do {
                  uVar14 = *puVar30;
                  if (9 < (ushort)(uVar14 - 0x30)) {
                    if (!bVar57) goto LAB_0010deea;
                    break;
                  }
                  puVar30 = puVar30 + 1;
                  uVar16 = uVar16 * 10 + -0x30 + (uint)uVar14;
                  if (0xff < (int)uVar16) {
                    uVar16 = *(uint *)(puVar36 + -6000);
                    param_3 = *(uint *)(puVar36 + -0x1768);
                    uVar17 = 0x8a;
                    puVar48 = puVar30;
                    goto LAB_001097e2;
                  }
                  bVar57 = true;
                } while (puVar30 < puVar44);
                *(ushort **)(puVar36 + -0x1610) = puVar30;
LAB_0010deea:
                puVar31[3] = uVar16;
                lVar49 = *(long *)(puVar36 + -0x1530);
                puVar24 = puVar31 + 4;
              }
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              if ((puVar44 <= puVar48) || (*puVar48 != 0x29)) {
                uVar16 = *(uint *)(puVar36 + -6000);
                param_3 = *(uint *)(puVar36 + -0x1768);
                uVar17 = 0x8b;
                goto LAB_001097e2;
              }
              puVar48 = puVar48 + 1;
              uVar38 = (ulong)(iVar52 - 1);
              uVar50 = 0;
              puVar31[2] = 0;
              uVar43 = 0;
              *(ushort **)(puVar36 + -0x1610) = puVar48;
              *(undefined4 *)(puVar36 + -0x16a0) = 1;
              puVar31[1] = (uint)((long)puVar48 - lVar49 >> 1);
              break;
                     case 0x50:
              puVar30 = puVar45 + 2;
              *(ushort **)(puVar36 + -0x1610) = puVar30;
              if (puVar44 <= puVar30) goto LAB_00109f43;
              uVar14 = puVar45[2];
              if (uVar14 == 0x3c) goto LAB_0010cfd1;
              if (uVar14 == 0x3e) goto switchD_0010bbec_caseD_26;
              if (uVar14 != 0x3d) {
                uVar16 = *(uint *)(puVar36 + -6000);
                param_3 = *(uint *)(puVar36 + -0x1768);
                uVar17 = 0x8d;
                puVar48 = puVar30;
                goto LAB_001097e2;
              }
              *(ulong *)(puVar36 + -0x1790) = uVar38;
              *(undefined1 **)(puVar36 + -0x1798) = puVar36 + -0x1568;
              *(undefined1 **)(puVar36 + -0x17a0) = puVar36 + -0x1634;
              *(undefined1 **)(puVar36 + -0x17a8) = puVar36 + -0x1638;
              puVar47 = (ushort *)(puVar36 + -0x15f0);
              *(undefined8 *)(puVar36 + -0x17b0) = 0x10db78;
              iVar52 = read_name(puVar36 + -0x1610,puVar44,*(undefined4 *)(puVar36 + -0x16d0),0x29);
              if (iVar52 == 0) goto LAB_0010cb2c;
              *puVar28 = 0x80040000;
LAB_0010cd25:
              puVar24 = puVar28 + 4;
              uVar50 = 0;
              uVar38 = 0;
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              uVar43 = 1;
              puVar28[1] = *(uint *)(puVar36 + -0x1638);
              uVar22 = *(undefined8 *)(puVar36 + -0x15f0);
              puVar28[2] = (uint)((ulong)uVar22 >> 0x20);
              puVar28[3] = (uint)uVar22;
              break;
                     case 0x52:
              puVar30 = puVar45 + 2;
              *(undefined4 *)(puVar36 + -0x1630) = 0;
              *(ushort **)(puVar36 + -0x1610) = puVar30;
              if ((puVar30 < puVar44) && (puVar45[2] == 0x29)) goto LAB_0010bcb7;
              uVar16 = *(uint *)(puVar36 + -6000);
              param_3 = *(uint *)(puVar36 + -0x1768);
              uVar17 = 0x9e;
              puVar48 = puVar30;
              goto LAB_001097e2;
                  }

               }

               goto LAB_0010a929;
            }

            *(undefined4*)( puVar36 + -0x16a4 ) = 0;
            LAB_0010b404:uVar17 = 0xa3;
            goto LAB_001097e2;
         }

         LAB_0010a9f9:*(undefined4*)( puVar36 + -0x16a4 ) = 0;
         *(undefined2*)( puVar36 + -0x1748 ) = 0;
         LAB_00109ee7:*(undefined8*)( puVar36 + -0x1790 ) = 0x109f09;
         puVar26 = (undefined8*)manage_callouts(puVar48, puVar36 + -0x1608, *(undefined4*)( puVar36 + -0x169c ), puVar24, puVar36 + -0x1568);
         if (uVar17 == 0) {
            puVar53 = puVar26;
            if (( puVar36[-0x16f8] & 4 ) != 0) {
               puVar53 = puVar26 + 1;
               *puVar26 = _LC30;
            }

         }
 else {
            *puVar26 = _LC29;
            puVar53 = puVar26 + 1;
         }

         if (puVar53 < *(undefined8**)( puVar36 + -0x16c0 )) {
            sVar3 = *(short*)( puVar36 + -0x1748 );
            *(undefined4*)puVar53 = 0x80000000;
            puVar30 = puVar48;
            if (sVar3 == 0) {
               *(undefined4*)( puVar36 + -0x1640 ) = 0;
               goto LAB_00109809;
            }

            LAB_00109f43:*(undefined4*)( puVar36 + -0x1640 ) = 0x72;
            uVar17 = 0x72;
            uVar27 = (long)puVar30 - *(long*)( puVar36 + -0x1530 ) >> 1;
            *(ulong*)( puVar36 + -0x14c0 ) = uVar27;
            goto LAB_00109cc4;
         }

      }
 else {
         if (puVar47 <= puVar48) goto LAB_0010a9f9;
         puVar23 = *(uint**)( puVar36 + -0x16c0 );
         if (puVar24 < puVar23) {
            *(uint*)( puVar36 + -6000 ) = uVar17;
            uVar38 = ( ulong ) * (uint*)( puVar36 + -0x1700 );
            puVar44 = puVar48;
            do {
               uVar14 = *puVar44;
               uVar17 = (uint)uVar14;
               puVar48 = puVar44 + 1;
               *(ushort**)( puVar36 + -0x1610 ) = puVar48;
               *(uint*)( puVar36 + -0x163c ) = (uint)uVar14;
               if (( (int)uVar38 != 0 ) && ( ( uVar14 & 0xfc00 ) == 0xd800 )) {
                  uVar4 = puVar44[1];
                  puVar48 = puVar44 + 2;
                  *(ushort**)( puVar36 + -0x1610 ) = puVar48;
                  uVar17 = ( ( uVar14 & 0x3ff ) << 10 | uVar4 & 0x3ff ) + 0x10000;
                  *(uint*)( puVar36 + -0x163c ) = uVar17;
               }

               if ((int)uVar27 != 0) {
                  *(undefined8*)( puVar36 + -0x1790 ) = 0x109571;
                  puVar24 = (uint*)manage_callouts(puVar44, puVar36 + -0x1608, 1, puVar24, puVar36 + -0x1568);
               }

               *puVar24 = uVar17;
               puVar24 = puVar24 + 1;
               if (puVar47 <= puVar48) {
                  uVar17 = *(uint*)( puVar36 + -6000 );
                  *(undefined4*)( puVar36 + -0x16a4 ) = 0;
                  *(undefined2*)( puVar36 + -0x1748 ) = 0;
                  goto LAB_00109ee7;
               }

               puVar44 = puVar48;
            }
 while ( puVar24 < puVar23 );
         }

      }

      *(undefined4*)( puVar36 + -0x1640 ) = 0xa3;
      uVar17 = 0xa3;
      uVar27 = (long)puVar48 - *(long*)( puVar36 + -0x1530 ) >> 1;
      *(ulong*)( puVar36 + -0x14c0 ) = uVar27;
      goto LAB_00109cc4;
   }

   uVar22 = ( *(undefined8**)( puVar36 + -0x1778 ) )[2];
   pcVar8 = (code*)**(undefined8**)( puVar36 + -0x1778 );
   *(undefined8*)( puVar36 + -0x1790 ) = 0x1093d9;
   puVar23 = (uint*)( *pcVar8 )(uVar38 * 4 + 4, uVar22);
   if (puVar23 != (uint*)0x0) {
      *(uint**)( puVar36 + -0x1490 ) = puVar23;
      *(undefined4*)( puVar36 + -0x1730 ) = *(undefined4*)( puVar36 + -0x14a4 );
      goto LAB_001093f8;
   }

   **(undefined4**)( puVar36 + -0x1760 ) = 0x79;
   LAB_00109301:lVar49 = 0;
   LAB_00109304:if (*(long*)( puVar36 + -0x1490 ) != *(long*)( puVar36 + -0x1718 )) {
      *(long*)( puVar36 + -0x1788 ) = lVar49;
      uVar22 = *(undefined8*)( *(long*)( puVar36 + -0x1778 ) + 0x10 );
      pcVar8 = *(code**)( *(long*)( puVar36 + -0x1778 ) + 8 );
      *(undefined8*)( puVar36 + -0x1790 ) = 0x109326;
      ( *pcVar8 )(*(long*)( puVar36 + -0x1490 ), uVar22);
      lVar49 = *(long*)( puVar36 + -0x1788 );
   }

   if (0x14 < *(uint*)( puVar36 + -0x14a8 )) {
      *(long*)( puVar36 + -0x1788 ) = lVar49;
      uVar22 = *(undefined8*)( *(long*)( puVar36 + -0x1778 ) + 0x10 );
      pcVar8 = *(code**)( *(long*)( puVar36 + -0x1778 ) + 8 );
      *(undefined8*)( puVar36 + -0x1790 ) = 0x10934c;
      ( *pcVar8 )(*(undefined8*)( puVar36 + -0x14b0 ), uVar22);
      lVar49 = *(long*)( puVar36 + -0x1788 );
   }

   if (*(long*)( puVar36 + -0x1480 ) != *(long*)( puVar36 + -0x1720 )) {
      *(long*)( puVar36 + -0x1788 ) = lVar49;
      uVar22 = *(undefined8*)( *(long*)( puVar36 + -0x1778 ) + 0x10 );
      pcVar8 = *(code**)( *(long*)( puVar36 + -0x1778 ) + 8 );
      *(undefined8*)( puVar36 + -0x1790 ) = 0x109376;
      ( *pcVar8 )(*(long*)( puVar36 + -0x1480 ), uVar22);
      lVar49 = *(long*)( puVar36 + -0x1788 );
   }

   LAB_00109040:if (*(long*)( puVar36 + 0x2ff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar49;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar36 + -0x1790 ) = 0x10b9df;
   __stack_chk_fail();
   code_r0x0010915d:sVar3 = *(short*)( (long)ppuVar51 + 10 );
   uVar16 = *(int*)( puVar36 + -0x1768 ) + 2 + ( uint ) * (ushort*)( ppuVar51 + 1 );
   switch (sVar3) {
      case 0:
    *(uint *)(puVar36 + -0x14a4) = *(uint *)(puVar36 + -0x14a4) | *(uint *)((long)ppuVar51 + 0xc);
    break;
      case 1:
    *(uint *)(puVar36 + -0x1704) = *(uint *)(puVar36 + -0x1704) | *(uint *)((long)ppuVar51 + 0xc);
    break;
      case 2:
    *(uint *)(puVar36 + -0x1704) = *(uint *)(puVar36 + -0x1704) | 0x8000;
    *(undefined4 *)(puVar36 + -0x173c) = *(undefined4 *)((long)ppuVar51 + 0xc);
    break;
      case 3:
    *(uint *)(puVar36 + -0x1704) = *(uint *)(puVar36 + -0x1704) | 0x4000;
    *(undefined4 *)(puVar36 + -0x1708) = *(undefined4 *)((long)ppuVar51 + 0xc);
    break;
      case 4:
      case 5:
      case 6:
    uVar14 = param_1[uVar16];
    if (9 < (ushort)(uVar14 - 0x30)) {
      uVar17 = 0xa0;
      lVar49 = 0;
      *(undefined4 *)(puVar36 + -0x1640) = 0xa0;
      uVar27 = (long)((ulong)uVar16 * 2) >> 1;
      goto LAB_001092e9;
    }
    uVar17 = 0;
    while( true ) {
      uVar43 = uVar16;
      uVar17 = (uVar14 - 0x30) + uVar17 * 10;
      uVar14 = param_1[uVar43 + 1];
      if (9 < (ushort)(uVar14 - 0x30)) break;
      uVar16 = uVar43 + 1;
      if (0x19999998 < uVar17) goto LAB_00109dae;
    }
    uVar16 = uVar43 + 2;
    if (uVar14 != 0x29) {
LAB_00109dae:
      uVar27 = (ulong)(uVar43 + 2);
      *(undefined4 *)(puVar36 + -0x1640) = 0xa0;
      uVar17 = 0xa0;
      lVar49 = 0;
      goto LAB_001092e9;
    }
    if (sVar3 == 4) {
      *(uint *)(puVar36 + -0x16a8) = uVar17;
    }
    else {
      uVar43 = *(uint *)(puVar36 + -0x16d4);
      if (sVar3 != 5) {
        uVar43 = uVar17;
      }
      if (sVar3 != 5) {
        uVar17 = *(uint *)(puVar36 + -0x16e0);
      }
      *(uint *)(puVar36 + -0x16d4) = uVar43;
      *(uint *)(puVar36 + -0x16e0) = uVar17;
    }
   }

   goto switchD_0010918e_default;
   LAB_0010afe2:uVar16 = *(uint*)( puVar36 + -6000 );
   param_3 = *(uint*)( puVar36 + -0x1768 );
   uVar17 = 0x77;
   puVar48 = *(ushort**)( puVar36 + -0x1610 );
   LAB_001097e2:*(uint*)( puVar36 + -0x1640 ) = uVar17;
   uVar27 = (long)puVar48 - *(long*)( puVar36 + -0x1530 ) >> 1;
   *(ulong*)( puVar36 + -0x14c0 ) = uVar27;
   if (uVar17 != 0) {
      LAB_00109cc4:lVar49 = 0;
      LAB_001092e9:**(ulong**)( puVar36 + -0x1750 ) = uVar27;
      LAB_001092f1:**(uint**)( puVar36 + -0x1760 ) = uVar17;
      *(undefined8*)( puVar36 + -0x1790 ) = 0x109301;
      pcre2_code_free_16(lVar49);
      goto LAB_00109301;
   }

   LAB_00109809:if (*(int*)( puVar36 + -0x16a4 ) == 0) {
      *(undefined1**)( puVar36 + -0x1768 ) = puVar36 + -0x1568;
      *(undefined1**)( puVar36 + -0x1730 ) = puVar36 + -0x15f0;
   }
 else {
      uVar17 = *(uint*)( puVar36 + -0x149c );
      *(undefined4*)( puVar36 + -0x15f0 ) = 0;
      if (uVar17 < 0x80) {
         pvVar25 = *(void**)( puVar36 + -0x1480 );
      }
 else {
         pcVar8 = (code*)**(undefined8**)( puVar36 + -0x1778 );
         *(undefined8*)( puVar36 + -0x1790 ) = 0x109848;
         pvVar25 = (void*)( *pcVar8 )(( ulong )(uVar17 * 2 + 2) << 2);
         *(void**)( puVar36 + -0x1480 ) = pvVar25;
         if (pvVar25 == (void*)0x0) {
            *(undefined4*)( puVar36 + -0x1640 ) = 0x79;
            uVar17 = 0x79;
            uVar27 = 0;
            *(undefined8*)( puVar36 + -0x14c0 ) = 0;
            goto LAB_00109cc4;
         }

         uVar17 = *(uint*)( puVar36 + -0x149c );
      }

      *(undefined8*)( puVar36 + -0x1790 ) = 0x109872;
      memset(pvVar25, 0, ( ulong )(uVar17 * 2 + 1) << 2);
      *(undefined1**)( puVar36 + -0x1768 ) = puVar36 + -0x1568;
      *(undefined1**)( puVar36 + -0x1730 ) = puVar36 + -0x15f0;
      *(undefined8*)( puVar36 + -0x1790 ) = 0x1098a0;
      uVar17 = check_lookbehinds(*(undefined8*)( puVar36 + -0x1490 ), 0, 0, puVar36 + -0x1568);
      *(uint*)( puVar36 + -0x1640 ) = uVar17;
      if (uVar17 != 0) {
         uVar27 = *(long*)( puVar36 + -0x14c0 ) * 2 >> 1;
         goto LAB_00109cc4;
      }

   }

   *(undefined1**)( puVar36 + -0x1700 ) = puVar36 + -0x1640;
   *(undefined8*)( puVar36 + -0x14c0 ) = *(undefined8*)( puVar36 + -0x1788 );
   *(undefined1**)( puVar36 + -0x16d0 ) = puVar36 + -0x15f8;
   *(undefined8*)( puVar36 + -0x15f0 ) = *(undefined8*)( puVar36 + -0x1490 );
   *(undefined2*)( puVar36 + 0x108 ) = 0x87;
   *(undefined8*)( puVar36 + -0x15f8 ) = *(undefined8*)( puVar36 + -0x16b8 );
   uVar18 = *(undefined4*)( *(long*)( puVar36 + -0x1778 ) + 0x40 );
   *(undefined1**)( puVar36 + -0x1790 ) = puVar36 + -0x1618;
   *(undefined8*)( puVar36 + -0x1798 ) = *(undefined8*)( puVar36 + -0x1768 );
   *(undefined8*)( puVar36 + -0x17a0 ) = 0;
   *(undefined8*)( puVar36 + -0x17a8 ) = 0;
   *(undefined1**)( puVar36 + -0x16f8 ) = puVar36 + -0x1610;
   *(undefined1**)( puVar36 + -0x17b0 ) = puVar36 + -0x1610;
   *(undefined1**)( puVar36 + -0x16e8 ) = puVar36 + -0x1600;
   *(undefined1**)( puVar36 + -0x17b8 ) = puVar36 + -0x1600;
   *(undefined1**)( puVar36 + -0x1710 ) = puVar36 + -0x161c;
   *(undefined1**)( puVar36 + -0x17c0 ) = puVar36 + -0x161c;
   *(undefined1**)( puVar36 + -0x16f0 ) = puVar36 + -0x1608;
   *(undefined1**)( puVar36 + -0x17c8 ) = puVar36 + -0x1608;
   *(undefined8*)( puVar36 + -0x17d0 ) = 0x10997f;
   compile_regex(*(undefined4*)( puVar36 + -0x14a4 ), uVar18, puVar36 + -0x15f8, *(undefined8*)( puVar36 + -0x1730 ));
   uVar17 = *(uint*)( puVar36 + -0x1640 );
   if (uVar17 != 0) {
      lVar49 = 0;
      uVar27 = *(long*)( puVar36 + -0x14c0 ) * 2 >> 1;
      goto LAB_001092e9;
   }

   *(ulong*)( puVar36 + -0x1728 ) = *(ulong*)( puVar36 + -0x1618 );
   if (0x10000 < *(ulong*)( puVar36 + -0x1618 )) {
      uVar17 = 0x78;
      lVar49 = 0;
      *(undefined4*)( puVar36 + -0x1640 ) = 0x78;
      uVar27 = *(long*)( puVar36 + -0x14c0 ) * 2 >> 1;
      goto LAB_001092e9;
   }

   uVar14 = *(ushort*)( puVar36 + -0x14b8 );
   uVar4 = *(ushort*)( puVar36 + -0x14b6 );
   lVar49 = *(long*)( puVar36 + -0x1728 );
   uVar22 = ( *(undefined8**)( puVar36 + -0x1778 ) )[2];
   pcVar8 = (code*)**(undefined8**)( puVar36 + -0x1778 );
   *(undefined8*)( puVar36 + -0x1790 ) = 0x1099dc;
   puVar26 = (undefined8*)( *pcVar8 )(( lVar49 + 0x44 + (ulong)uVar14 * (ulong)uVar4 ) * 2, uVar22);
   auVar58._8_8_ = extraout_XMM1_Qb;
   auVar58._0_8_ = extraout_XMM1_Qa;
   if (puVar26 == (undefined8*)0x0) {
      uVar17 = 0x79;
      *(undefined4*)( puVar36 + -0x1640 ) = 0x79;
      uVar27 = *(long*)( puVar36 + -0x14c0 ) * 2 >> 1;
      lVar49 = 0;
      goto LAB_001092e9;
   }

   puVar9 = *(undefined8**)( puVar36 + -0x1778 );
   puVar26[0x10] = 0;
   puVar53 = puVar26 + 0x11;
   uVar32 = *puVar9;
   uVar12 = puVar9[1];
   *puVar26 = uVar32;
   puVar26[1] = uVar12;
   uVar22 = puVar9[2];
   *(undefined1(*) [16])( puVar26 + 5 ) = (undefined1[16])0x0;
   puVar26[2] = uVar22;
   uVar22 = *(undefined8*)( puVar36 + -0x16b0 );
   *(undefined1(*) [16])( puVar26 + 7 ) = (undefined1[16])0x0;
   uVar6 = *(undefined4*)( puVar36 + -0x14a4 );
   uVar7 = *(undefined4*)( puVar9 + 8 );
   puVar26[3] = uVar22;
   uVar17 = *(uint*)( puVar36 + -0x1704 );
   uVar43 = *(uint*)( puVar36 + -0x14a0 );
   puVar26[4] = 0;
   puVar26[9] = ( lVar49 + 0x44 + (ulong)uVar14 * (ulong)uVar4 ) * 2;
   *(uint*)( puVar26 + 0xc ) = uVar17 | uVar43 | 2;
   uVar18 = *(undefined4*)( puVar36 + -0x16a8 );
   *(undefined4*)( puVar26 + 10 ) = 0x50435245;
   *(undefined4*)( (long)puVar26 + 100 ) = uVar18;
   uVar18 = *(undefined4*)( puVar36 + -0x16e0 );
   *(uint*)( (long)puVar26 + 0x54 ) = param_3;
   *(undefined4*)( puVar26 + 0xd ) = uVar18;
   uVar18 = *(undefined4*)( puVar36 + -0x16d4 );
   *(undefined4*)( puVar26 + 0xb ) = uVar6;
   *(undefined4*)( (long)puVar26 + 0x6c ) = uVar18;
   uVar46 = *(undefined2*)( puVar36 + -0x1708 );
   *(undefined4*)( (long)puVar26 + 0x5c ) = uVar7;
   *(undefined2*)( puVar26 + 0xf ) = uVar46;
   uVar46 = *(undefined2*)( puVar36 + -0x173c );
   puVar26[0xe] = 0;
   *(undefined8*)( puVar36 + -0x1788 ) = uVar32;
   *(undefined8*)( puVar36 + -0x1780 ) = uVar12;
   *(undefined2*)( (long)puVar26 + 0x7a ) = uVar46;
   *(undefined4*)( (long)puVar26 + 0x7c ) = 0;
   uVar17 = *(uint*)( puVar36 + -0x14b8 );
   *(undefined8**)( puVar36 + -0x1520 ) = puVar53;
   auVar59 = pshuflw(auVar58, ZEXT416(uVar17), 0xe1);
   *(int*)( (long)puVar26 + 0x84 ) = auVar59._0_4_;
   *(undefined4*)( puVar36 + -0x14b4 ) = 0;
   *(undefined4*)( puVar36 + -0x1498 ) = 0;
   *(undefined4*)( puVar36 + -0x1458 ) = 0;
   puVar55 = (undefined2*)( (long)puVar26 + (long)(int)( ( uVar17 >> 0x10 ) * ( uVar17 & 0xffff ) ) * 2 + 0x88 );
   *(undefined8*)( puVar36 + -0x144c ) = 0;
   *(undefined2**)( puVar36 + -0x1538 ) = puVar55;
   if ((short)uVar17 != 0) {
      puVar9 = *(undefined8**)( puVar36 + -0x14b0 );
      *(undefined4*)( puVar36 + -0x1788 ) = 0;
      puVar37 = (undefined2*)( (long)puVar26 + 0x8a );
      *(undefined2**)( puVar36 + -0x16e0 ) = puVar55;
      uVar18 = *(undefined4*)( puVar9 + 1 );
      uVar14 = *(ushort*)( (long)puVar9 + 0xc );
      *(undefined8**)( puVar36 + -0x1748 ) = puVar9;
      *(uint*)( puVar36 + -0x16d4 ) = uVar16;
      pvVar25 = (void*)*puVar9;
      *(undefined4*)( puVar36 + -0x173c ) = uVar18;
      *(undefined8**)( puVar36 + -0x16c8 ) = puVar26;
      *(ushort*)( puVar36 + -0x1738 ) = uVar14;
      *(uint*)( puVar36 + -0x1708 ) = (uint)uVar14;
      __n = (size_t)(int)( (uint)uVar14 * 2 );
      while (true) {
         *(undefined2*)puVar53 = *(undefined2*)( puVar36 + -0x173c );
         *(undefined8*)( puVar36 + -0x1790 ) = 0x109b91;
         memcpy(puVar37, pvVar25, __n);
         *(undefined8*)( puVar36 + -0x1790 ) = 0x109bba;
         memset((void*)( (long)puVar53 + ( ulong ) * (ushort*)( puVar36 + -0x1738 ) * 2 + 2 ), 0, (long)(int)( ( ( uint ) * (ushort*)( puVar36 + -0x14b6 ) - *(int*)( puVar36 + -0x1708 ) ) * 2 + -2 ));
         *(long*)( puVar36 + -0x1748 ) = *(long*)( puVar36 + -0x1748 ) + 0x10;
         *(uint*)( puVar36 + -0x1758 ) = *(int*)( puVar36 + -0x1788 ) + 1U;
         if (( uint ) * (ushort*)( puVar36 + -0x14b8 ) <= *(int*)( puVar36 + -0x1788 ) + 1U) break;
         puVar26 = *(undefined8**)( puVar36 + -0x1748 );
         puVar53 = *(undefined8**)( puVar36 + -0x1520 );
         uVar18 = *(undefined4*)( puVar26 + 1 );
         pvVar25 = (void*)*puVar26;
         *(ushort*)( puVar36 + -0x1704 ) = *(ushort*)( puVar36 + -0x14b6 );
         lVar49 = ( ulong ) * (ushort*)( puVar36 + -0x14b6 ) * 2;
         *(undefined4*)( puVar36 + -0x173c ) = uVar18;
         uVar14 = *(ushort*)( (long)puVar26 + 0xc );
         *(ushort*)( puVar36 + -0x1738 ) = uVar14;
         *(uint*)( puVar36 + -0x1708 ) = (uint)uVar14;
         *(ulong*)( puVar36 + -6000 ) = ( ulong )(uVar14 + 1);
         __n = (size_t)(int)( (uint)uVar14 * 2 );
         iVar52 = 0;
         do {
            puVar37 = (undefined2*)( (long)puVar53 + 2 );
            *(undefined8*)( puVar36 + -0x1790 ) = 0x109c66;
            iVar15 = memcmp(pvVar25, puVar37, __n);
            if (iVar15 == 0) {
               if (*(short*)( (long)puVar53 + *(long*)( puVar36 + -6000 ) * 2 ) != 0) goto LAB_00109c6c;
            }
 else if (iVar15 < 0) {
               LAB_00109c6c:*(undefined8*)( puVar36 + -0x1790 ) = 0x109c8e;
               _pcre2_memmove16((undefined2*)( (long)puVar53 + lVar49 ), puVar53, ( *(int*)( puVar36 + -0x1758 ) - iVar52 ) * ( uint ) * (ushort*)( puVar36 + -0x1704 ) * 2);
               goto LAB_00109c8e;
            }

            puVar53 = (undefined8*)( (long)puVar53 + lVar49 );
            bVar56 = iVar52 != *(int*)( puVar36 + -0x1788 );
            iVar52 = iVar52 + 1;
         }
 while ( bVar56 );
         puVar37 = (undefined2*)( (long)puVar53 + 2 );
         LAB_00109c8e:*(undefined4*)( puVar36 + -0x1788 ) = *(undefined4*)( puVar36 + -0x1758 );
      }
;
      puVar26 = *(undefined8**)( puVar36 + -0x16c8 );
      puVar55 = *(undefined2**)( puVar36 + -0x16e0 );
      uVar16 = *(uint*)( puVar36 + -0x16d4 );
      uVar7 = *(undefined4*)( *(long*)( puVar36 + -0x1778 ) + 0x40 );
      uVar6 = *(undefined4*)( puVar26 + 0xb );
   }

   *(undefined8**)( puVar36 + -0x1788 ) = puVar26;
   *(undefined2**)( puVar36 + -0x15f8 ) = puVar55;
   *(undefined8*)( puVar36 + -0x15f0 ) = *(undefined8*)( puVar36 + -0x1490 );
   *puVar55 = 0x87;
   *(undefined8*)( puVar36 + -0x1790 ) = 0;
   *(undefined8*)( puVar36 + -0x1798 ) = *(undefined8*)( puVar36 + -0x1768 );
   *(undefined8*)( puVar36 + -0x17a0 ) = 0;
   *(undefined8*)( puVar36 + -0x17a8 ) = 0;
   *(undefined8*)( puVar36 + -0x17b0 ) = *(undefined8*)( puVar36 + -0x16f8 );
   *(undefined8*)( puVar36 + -0x17b8 ) = *(undefined8*)( puVar36 + -0x16e8 );
   *(undefined8*)( puVar36 + -0x17c0 ) = *(undefined8*)( puVar36 + -0x1710 );
   *(undefined8*)( puVar36 + -0x17c8 ) = *(undefined8*)( puVar36 + -0x16f0 );
   *(undefined8*)( puVar36 + -0x17d0 ) = 0x10a291;
   iVar52 = compile_regex(uVar6, uVar7, *(undefined8*)( puVar36 + -0x16d0 ), *(undefined8*)( puVar36 + -0x1730 ), *(undefined8*)( puVar36 + -0x1700 ));
   lVar49 = *(long*)( puVar36 + -0x1788 );
   if (iVar52 < 0) {
      *(uint*)( lVar49 + 0x60 ) = *(uint*)( lVar49 + 0x60 ) | 0x2000;
   }

   iVar52 = *(int*)( puVar36 + -0x144c );
   *(short*)( lVar49 + 0x80 ) = (short)*(undefined4*)( puVar36 + -0x149c );
   *(short*)( lVar49 + 0x82 ) = (short)*(undefined4*)( puVar36 + -0x1478 );
   *(short*)( lVar49 + 0x7c ) = (short)*(undefined4*)( puVar36 + -0x1450 );
   if (iVar52 != 0) {
      *(uint*)( lVar49 + 0x60 ) = *(uint*)( lVar49 + 0x60 ) | 0x800000;
      *(undefined4*)( puVar36 + -0x1600 ) = 0;
      *(undefined4*)( puVar36 + -0x1610 ) = 0xfffffffe;
   }

   puVar37 = *(undefined2**)( puVar36 + -0x15f8 ) + 1;
   **(undefined2**)( puVar36 + -0x15f8 ) = 0;
   *(undefined2**)( puVar36 + -0x15f8 ) = puVar37;
   uVar27 = (long)puVar37 - (long)puVar55 >> 1;
   if (*(ulong*)( puVar36 + -0x1728 ) < uVar27) {
      *(undefined4*)( puVar36 + -0x1640 ) = 0x7b;
      uVar17 = 0x7b;
      LAB_0010a33a:uVar27 = *(long*)( puVar36 + -0x14c0 ) * 2 >> 1;
      goto LAB_001092e9;
   }

   uVar17 = *(uint*)( puVar36 + -0x1640 );
   *(long*)( lVar49 + 0x48 ) = *(long*)( lVar49 + 0x48 ) + ( *(long*)( puVar36 + -0x1728 ) - uVar27 ) * -2;
   if (uVar17 != 0) goto LAB_0010a33a;
   if (*(int*)( puVar36 + -0x1444 ) != 0) {
      uVar17 = 0;
      *(uint*)( puVar36 + -0x1788 ) = ( uint )(*(int*)( puVar36 + -0x16d8 ) != 0);
      *(undefined8*)( puVar36 + -0x1790 ) = 0x10b6e1;
      lVar29 = find_recurse(puVar55);
      if (lVar29 != 0) {
         uVar43 = 8;
         do {
            uVar14 = *(ushort*)( lVar29 + 2 );
            uVar46 = 0;
            if (uVar14 != 0) {
               uVar33 = (uint)uVar14;
               puVar37 = puVar55;
               if (uVar17 != 0) {
                  uVar39 = 0;
                  uVar19 = uVar43;
                  do {
                     lVar34 = (long)(int)uVar19 * 0x10;
                     if (*(uint*)( puVar36 + lVar34 + -0x15e0 ) == uVar33) {
                        if (*(long*)( puVar36 + lVar34 + -0x15e8 ) != 0) {
                           uVar46 = ( undefined2 )(*(long*)( puVar36 + lVar34 + -0x15e8 ) - (long)puVar55 >> 1);
                           goto LAB_0010b700;
                        }

                        break;
                     }

                     if ((int)*(uint*)( puVar36 + lVar34 + -0x15e0 ) < (int)uVar33) {
                        puVar37 = *(undefined2**)( puVar36 + lVar34 + -0x15e8 );
                     }

                     uVar39 = uVar39 + 1;
                     uVar19 = uVar19 + 1 & 7;
                  }
 while ( uVar39 != uVar17 );
               }

               *(uint*)( puVar36 + -6000 ) = uVar33;
               *(undefined8*)( puVar36 + -0x1790 ) = 0x10b77e;
               lVar34 = _pcre2_find_bracket_16(puVar37, *(undefined4*)( puVar36 + -0x1788 ), uVar14);
               uVar18 = *(undefined4*)( puVar36 + -6000 );
               if (lVar34 == 0) {
                  *(undefined4*)( puVar36 + -0x1640 ) = 0x99;
                  break;
               }

               uVar43 = uVar43 - 1;
               if ((int)uVar43 < 0) {
                  uVar43 = 7;
               }

               *(long*)( puVar36 + (long)(int)uVar43 * 0x10 + -0x15e8 ) = lVar34;
               uVar46 = ( undefined2 )(lVar34 - (long)puVar55 >> 1);
               *(undefined4*)( puVar36 + (long)(int)uVar43 * 0x10 + -0x15e0 ) = uVar18;
               uVar17 = uVar17 + ( uVar17 < 8 );
            }

            LAB_0010b700:*(undefined2*)( lVar29 + 2 ) = uVar46;
            *(undefined8*)( puVar36 + -0x1790 ) = 0x10b710;
            lVar29 = find_recurse(lVar29 + 4);
         }
 while ( lVar29 != 0 );
      }

      uVar17 = *(uint*)( puVar36 + -0x1640 );
      if (uVar17 != 0) goto LAB_0010a33a;
   }

   uVar17 = *(uint*)( lVar49 + 0x58 );
   if (( uVar17 & 0x4000 ) == 0) {
      *(long*)( puVar36 + -0x1788 ) = lVar49;
      *(undefined8*)( puVar36 + -0x1790 ) = 0x10b7f1;
      iVar52 = _pcre2_auto_possessify_16(puVar55, *(undefined8*)( puVar36 + -0x1768 ));
      lVar49 = *(long*)( puVar36 + -0x1788 );
      if (iVar52 != 0) {
         *(undefined4*)( puVar36 + -0x1640 ) = 0xb4;
         uVar17 = 0xb4;
         goto LAB_0010a33a;
      }

      uVar17 = *(uint*)( puVar36 + -0x1640 );
      if (uVar17 != 0) {
         uVar27 = *(long*)( puVar36 + -0x14c0 ) * 2 >> 1;
         goto LAB_001092e9;
      }

      uVar17 = *(uint*)( lVar49 + 0x58 );
   }

   if (-1 < (int)uVar17) {
      *(undefined8*)( puVar36 + -0x1790 ) = 0x10a694;
      iVar52 = is_anchored(puVar55, 0, *(undefined8*)( puVar36 + -0x1768 ), 0, 0);
      if (iVar52 != 0) {
         uVar17 = uVar17 | 0x80000000;
         *(uint*)( lVar49 + 0x58 ) = uVar17;
      }

   }

   if (( uVar17 & 0x10000 ) == 0) {
      uVar43 = *(uint*)( puVar36 + -0x161c );
      uVar33 = *(uint*)( puVar36 + -0x1610 );
      if (uVar43 < 0xfffffffe) {
         LAB_0010a500:uVar19 = *(uint*)( lVar49 + 0x60 );
         uVar39 = *(uint*)( puVar36 + -0x1608 );
         *(uint*)( lVar49 + 0x70 ) = uVar39;
         *(uint*)( lVar49 + 0x60 ) = uVar19 | 0x10;
         if (( uVar43 & 1 ) == 0) {
            joined_r0x0010a590:if (0xfffffffd < uVar33) goto LAB_0010b4ca;
            if (( ( ( uVar17 & 0x80000 ) == 0 ) || ( ( uVar39 & 0xf800 ) != 0xd800 ) ) || ( ( *(uint*)( puVar36 + -0x1600 ) & 0xfc00 ) != 0xdc00 )) goto LAB_0010a5c3;
            uVar43 = 1;
            LAB_0010a5c9:if ((int)uVar17 < 0) {
               LAB_0010b513:if (( uVar33 & 2 ) != 0) goto LAB_0010a5d1;
            }
 else {
               LAB_0010a5d1:uVar17 = *(uint*)( lVar49 + 0x60 );
               uVar19 = *(uint*)( puVar36 + -0x1600 );
               *(uint*)( lVar49 + 0x74 ) = uVar19;
               *(uint*)( lVar49 + 0x60 ) = uVar17 | 0x80;
               if (( uVar33 & 1 ) != 0) {
                  if (uVar19 < 0x80) {
                     LAB_0010ba86:if (uVar19 != *(byte*)( *(long*)( puVar36 + -0x1558 ) + (ulong)uVar19 )) {
                        LAB_0010a646:*(uint*)( lVar49 + 0x60 ) = uVar17 | 0x180;
                     }

                  }
 else if (( uVar16 & 0x20000 ) == 0 && *(int*)( puVar36 + -0x16d8 ) == 0) {
                     if (uVar19 < 0xff) goto LAB_0010ba86;
                  }
 else if (( uVar19 < 0x110000 ) && ( *(int*)( &DAT_0011001c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uVar19 & 0x7f ) + ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar19 >> 7 ) * 2 ) * 0x80 ) * 2 ) * 0xc ) != 0 )) goto LAB_0010a646;
               }

            }

         }
 else {
            if (0x7f < uVar39) {
               if (*(int*)( puVar36 + -0x16d8 ) == 0 && ( uVar16 & 0x20000 ) == 0) {
                  if (uVar39 < 0xff) goto LAB_0010c368;
               }
 else if (( uVar39 < 0x110000 ) && ( *(int*)( &DAT_0011001c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar39 >> 7 ) * 2 ) * 0x80 + ( uVar39 & 0x7f ) ) * 2 ) * 0xc ) != 0 )) {
                  *(uint*)( lVar49 + 0x60 ) = uVar19 | 0x30;
               }

               goto joined_r0x0010a590;
            }

            LAB_0010c368:if (uVar39 == *(byte*)( *(long*)( puVar36 + -0x1558 ) + (ulong)uVar39 )) {
               if (0xfffffffd < uVar33) goto LAB_0010b4ca;
               LAB_0010a5c3:uVar43 = 2;
               goto LAB_0010a5c9;
            }

            *(uint*)( lVar49 + 0x60 ) = uVar19 | 0x30;
            if (uVar33 < 0xfffffffe) goto LAB_0010a5c3;
            LAB_0010b4ca:uVar43 = 1;
         }

         *(long*)( puVar36 + -0x1788 ) = lVar49;
         *(undefined8*)( puVar36 + -0x1790 ) = 0x10a65c;
         iVar52 = _pcre2_study_16(lVar49);
         lVar49 = *(long*)( puVar36 + -0x1788 );
         if (iVar52 != 0) {
            LAB_0010b829:uVar17 = 0x83;
            *(undefined4*)( puVar36 + -0x1640 ) = 0x83;
            uVar27 = *(long*)( puVar36 + -0x14c0 ) * 2 >> 1;
            goto LAB_001092e9;
         }

      }
 else {
         *(long*)( puVar36 + -0x1788 ) = lVar49;
         *(undefined8*)( puVar36 + -0x1790 ) = 0x10b4e8;
         uVar18 = find_firstassertedcu(puVar55, *(undefined8*)( puVar36 + -0x1710 ), 0);
         lVar49 = *(long*)( puVar36 + -0x1788 );
         *(undefined4*)( puVar36 + -0x1608 ) = uVar18;
         uVar43 = *(uint*)( puVar36 + -0x161c );
         if (uVar43 < 0xfffffffe) goto LAB_0010a500;
         if (-1 < (int)uVar17) {
            *(undefined8*)( puVar36 + -0x1790 ) = 0x10b536;
            iVar52 = is_startline(puVar55, 0, *(undefined8*)( puVar36 + -0x1768 ), 0, 0);
            if (iVar52 != 0) {
               *(uint*)( lVar49 + 0x60 ) = *(uint*)( lVar49 + 0x60 ) | 0x200;
            }

            uVar43 = 1;
            if (0xfffffffd < uVar33) goto LAB_0010b552;
            goto LAB_0010a5d1;
         }

         if (uVar33 < 0xfffffffe) {
            uVar43 = 1;
            goto LAB_0010b513;
         }

         LAB_0010b552:*(long*)( puVar36 + -0x1788 ) = lVar49;
         *(undefined8*)( puVar36 + -0x1790 ) = 0x10b55e;
         iVar52 = _pcre2_study_16(lVar49);
         lVar49 = *(long*)( puVar36 + -0x1788 );
         if (iVar52 != 0) goto LAB_0010b829;
         uVar43 = *(uint*)( lVar49 + 0x60 ) >> 6 & 1;
      }

      if (*(ushort*)( lVar49 + 0x7e ) < uVar43) {
         *(short*)( lVar49 + 0x7e ) = (short)uVar43;
      }

   }

   goto LAB_00109304;
   code_r0x0010b2c7:puVar44 = *(ushort**)( puVar36 + -0x1670 );
   lVar49 = *(long*)( puVar36 + -0x1668 );
   iVar52 = *(int*)( puVar36 + -0x1660 );
   piVar10 = *(int**)( puVar36 + -0x1658 );
   puVar48 = (ushort*)( lVar49 + 4 );
   *(ushort**)( puVar36 + -0x1610 ) = puVar48;
   if (( ( puVar48 < puVar44 + -1 ) && ( *(short*)( lVar49 + 4 ) == 0x2d ) ) && ( *(short*)( lVar49 + 6 ) != 0x5d )) {
      LAB_0010be26:uVar16 = *(uint*)( puVar36 + -6000 );
      param_3 = *(uint*)( puVar36 + -0x1768 );
      uVar17 = 0x96;
      goto LAB_001097e2;
   }

   uVar16 = (int)puVar54 - 0x10ec48;
   puVar47 = puVar48;
   if (( *(uint*)( puVar36 + -0x1738 ) & 0x20000 ) != 0) {
      uVar17 = *(uint*)( puVar36 + -0x16c8 ) & 0x800;
      uVar27 = (ulong)uVar17;
      if (( uVar17 == 0 ) && ( ( ( *(uint*)( puVar36 + -0x16c8 ) & 0x1000 ) == 0 || ( ( 0x2080UL >> ( (ulong)uVar16 & 0x3f ) & 1 ) == 0 ) ) )) {
         iVar15 = ( &posix_substitutes )[(int)( uVar16 * 2 )];
         uVar17 = ( &posix_substitutes )[(int)( uVar16 * 2 + 1 )];
         if (-1 < iVar15) {
            puVar24 = (uint*)( piVar10 + 2 );
            *piVar10 = -0x7fe7fff0 - iVar52;
            piVar10[1] = iVar15 << 0x10 | uVar17;
            goto LAB_0010ae90;
         }

         if (uVar17 != 0) {
            puVar24 = (uint*)( piVar10 + 1 );
            *piVar10 = -0x7fe7ffed - iVar52;
            goto LAB_0010ae90;
         }

      }

   }

   piVar10[1] = uVar16;
   puVar24 = (uint*)( piVar10 + 2 );
   uVar27 = 0;
   *piVar10 = ( -(uint)(iVar52 == 0) & 0xffff0000 ) + 0x801d0000;
   LAB_0010ae90:while (true) {
      uVar43 = (uint)uVar27;
      if (puVar44 <= puVar47) {
         uVar16 = *(uint*)( puVar36 + -6000 );
         param_3 = *(uint*)( puVar36 + -0x1768 );
         uVar17 = 0x6a;
         puVar48 = puVar47;
         goto LAB_001097e2;
      }

      uVar14 = *puVar47;
      uVar16 = (uint)uVar14;
      puVar48 = puVar47 + 1;
      *(ushort**)( puVar36 + -0x1610 ) = puVar48;
      *(uint*)( puVar36 + -0x163c ) = uVar16;
      if (( *(int*)( puVar36 + -0x1700 ) == 0 ) || ( ( uVar14 & 0xfc00 ) != 0xd800 )) break;
      uVar14 = puVar47[1];
      puVar48 = puVar47 + 2;
      *(ushort**)( puVar36 + -0x1610 ) = puVar48;
      uVar16 = ( ( uVar16 & 0x3ff ) << 10 | uVar14 & 0x3ff ) + 0x10000;
      *(uint*)( puVar36 + -0x163c ) = uVar16;
      if ((int)uVar38 != 0) goto LAB_0010aedc;
      if (( *(uint*)( puVar36 + -0x1738 ) & 0x1000000 ) != 0) {
         LAB_0010af3b:uVar38 = 0;
         if (uVar43 != 1) goto LAB_0010aeeb;
         if (puVar24[-2] == uVar16) {
            LAB_0010b17d:uVar38 = 0;
            goto LAB_0010b180;
         }

         if (puVar24[-2] <= uVar16) {
            LAB_0010af59:uVar38 = 0;
            goto LAB_0010af5c;
         }

         goto LAB_0010b0fb;
      }

      LAB_0010adbd:uVar43 = (uint)uVar27;
      puVar47 = puVar48;
      if (uVar16 == 0x2d) {
         if (uVar43 < 2) goto LAB_0010af3b;
         uVar16 = 0x801e0000;
         if (uVar43 == 3) {
            uVar16 = 0x801f0000;
         }

         uVar27 = 1;
         uVar38 = 0;
         *puVar24 = uVar16;
         puVar24 = puVar24 + 1;
      }
 else {
         if (uVar16 != 0x5c) goto LAB_0010af3b;
         *(ushort**)( puVar36 + -0x15f8 ) = puVar48;
         *(undefined1**)( puVar36 + -0x1790 ) = puVar36 + -0x1568;
         *(undefined8*)( puVar36 + -0x1798 ) = 1;
         uVar50 = ( ulong ) * (uint*)( puVar36 + -0x1738 );
         *(undefined1**)( puVar36 + -0x1668 ) = puVar36 + -0x1634;
         *(undefined1**)( puVar36 + -0x1670 ) = puVar36 + -0x1610;
         *(undefined8*)( puVar36 + -0x17a0 ) = 0x10ae24;
         uVar33 = _pcre2_check_escape_16(puVar36 + -0x1610, puVar44, puVar36 + -0x163c, puVar36 + -0x1634);
         uVar17 = *(uint*)( puVar36 + -0x1634 );
         uVar38 = (ulong)uVar17;
         uVar22 = *(undefined8*)( puVar36 + -0x1670 );
         if (uVar17 != 0) {
            if (( puVar36[-0x16c8] & 2 ) != 0) {
               *(ushort**)( puVar36 + -0x1610 ) = puVar48;
               if (puVar48 < puVar44) {
                  uVar14 = *puVar48;
                  uVar16 = (uint)uVar14;
                  puVar47 = puVar48 + 1;
                  *(ushort**)( puVar36 + -0x1610 ) = puVar47;
                  *(uint*)( puVar36 + -0x163c ) = uVar16;
                  if (*(int*)( puVar36 + -0x1700 ) == 0) {
                     if (uVar43 == 1) goto LAB_0010bf12;
                  }
 else {
                     if (( uVar14 & 0xfc00 ) == 0xd800) {
                        uVar14 = puVar48[1];
                        puVar47 = puVar48 + 2;
                        *(ushort**)( puVar36 + -0x1610 ) = puVar47;
                        uVar16 = ( ( uVar16 & 0x3ff ) << 10 | uVar14 & 0x3ff ) + 0x10000;
                        *(uint*)( puVar36 + -0x163c ) = uVar16;
                     }

                     if (uVar43 == 1) {
                        bVar56 = uVar16 < puVar24[-2];
                        if (uVar16 != puVar24[-2]) goto LAB_0010bf22;
                        goto LAB_0010b17d;
                     }

                  }

                  uVar38 = 0;
                  uVar27 = 2;
                  goto LAB_0010ae88;
               }

               *(undefined4*)( puVar36 + -0x163c ) = 0x5c;
               if (uVar43 != 1) {
                  uVar38 = 0;
                  uVar27 = 2;
                  goto LAB_0010ae88;
               }

               if (puVar24[-2] == 0x5c) goto LAB_0010b17d;
               if (puVar24[-2] < 0x5d) goto LAB_0010be81;
               goto LAB_0010b0fb;
            }

            uVar16 = *(uint*)( puVar36 + -6000 );
            param_3 = *(uint*)( puVar36 + -0x1768 );
            puVar48 = *(ushort**)( puVar36 + -0x1610 );
            goto LAB_001097e2;
         }

         switch (uVar33) {
            case 0:
        uVar16 = *(uint *)(puVar36 + -0x163c);
        if (uVar43 != 1) {
          puVar47 = *(ushort **)(puVar36 + -0x1610);
          uVar38 = (ulong)uVar33;
          uVar27 = 2;
          goto LAB_0010ae88;
        }
LAB_0010bf12:
        if (puVar24[-2] == uVar16) goto LAB_0010b17d;
        bVar56 = uVar16 < puVar24[-2];
LAB_0010bf22:
        if (!bVar56) {
LAB_0010be81:
          if (puVar24[-1] == 0x801f0000) {
            puVar24[-1] = 0x801e0000;
          }
          puVar48 = *(ushort **)(puVar36 + -0x1610);
          goto LAB_0010af59;
        }
        goto LAB_0010b0fb;
            default:
        if (uVar43 == 1) {
          uVar16 = *(uint *)(puVar36 + -6000);
          param_3 = *(uint *)(puVar36 + -0x1768);
          uVar17 = 0x96;
          puVar48 = *(ushort **)(puVar36 + -0x1610);
          goto LAB_001097e2;
        }
        if ((int)uVar33 < 0x11) {
          if ((int)uVar33 < 0xf) {
            if (0xb < (int)uVar33) {
              uVar16 = *(uint *)(puVar36 + -6000);
              param_3 = *(uint *)(puVar36 + -0x1768);
              if (uVar33 != 0xc) goto LAB_0010c10e;
              puVar48 = *(ushort **)(puVar36 + -0x1610);
              uVar17 = 0xab;
              goto LAB_001097e2;
            }
            if ((int)uVar33 < 6) goto LAB_0010c105;
            *(undefined8 *)(puVar36 + -0x1790) = 0x10c01e;
            puVar23 = (uint *)handle_escdsw(uVar33,puVar24,*(undefined4 *)(puVar36 + -0x1738),
                                            *(undefined4 *)(puVar36 + -0x16c8));
          }
          else {
            *(uint *)(puVar36 + -0x1670) = uVar33;
            *(undefined2 *)(puVar36 + -0x1620) = 0;
            *(undefined2 *)(puVar36 + -0x161c) = 0;
            *(ulong *)(puVar36 + -0x1790) = uVar50;
            *(undefined8 *)(puVar36 + -0x1798) = *(undefined8 *)(puVar36 + -0x1528);
            *(undefined8 *)(puVar36 + -0x17a0) = 0x10c2c0;
            iVar15 = get_ucp_constprop_0_isra_0
                               (uVar22,puVar36 + -0x15f0,puVar36 + -0x1620,puVar36 + -0x161c,
                                *(undefined8 *)(puVar36 + -0x1668),
                                *(undefined8 *)(puVar36 + -0x1548));
            iVar52 = *(int *)(puVar36 + -0x1670);
            if (iVar15 == 0) goto LAB_0010cb2c;
            if (*(int *)(puVar36 + -0x15f0) != 0) {
              if (iVar52 == 0xf) {
                iVar52 = 0x10;
              }
              else {
                iVar52 = 0xf;
              }
            }
            uVar46 = *(undefined2 *)(puVar36 + -0x1620);
            uVar5 = *(undefined2 *)(puVar36 + -0x161c);
            puVar23 = puVar24 + 2;
            *puVar24 = iVar52 + 0x80180000;
            puVar24[1] = CONCAT22(uVar46,uVar5);
          }
        }
        else {
          if (3 < uVar33 - 0x12) {
LAB_0010c105:
            uVar16 = *(uint *)(puVar36 + -6000);
            param_3 = *(uint *)(puVar36 + -0x1768);
LAB_0010c10e:
            uVar17 = 0x6b;
            puVar48 = (ushort *)(*(long *)(puVar36 + -0x1610) + -2);
            goto LAB_001097e2;
          }
          puVar23 = puVar24 + 1;
          *puVar24 = uVar33 + 0x80180000;
        }
        puVar48 = *(ushort **)(puVar36 + -0x1610);
        if (((puVar48 < puVar44 + -1) && (*puVar48 == 0x2d)) && (puVar48[1] != 0x5d))
        goto LAB_0010be26;
        uVar27 = 0;
        puVar47 = puVar48;
        puVar24 = puVar23;
        break;
            case 4:
            case 0x11:
            case 0x16:
        uVar16 = *(uint *)(puVar36 + -6000);
        param_3 = *(uint *)(puVar36 + -0x1768);
        uVar17 = 0x6b;
        puVar48 = (ushort *)(*(long *)(puVar36 + -0x1610) + -2);
        goto LAB_001097e2;
            case 5:
        *(undefined4 *)(puVar36 + -0x163c) = 8;
        if (uVar43 != 1) {
          puVar47 = *(ushort **)(puVar36 + -0x1610);
          uVar16 = 8;
          uVar27 = 2;
          goto LAB_0010ae88;
        }
        if (puVar24[-2] == 8) goto LAB_0010b17d;
        if (puVar24[-2] < 9) {
          uVar16 = 8;
          goto LAB_0010be81;
        }
        goto LAB_0010b0fb;
            case 0x19:
        puVar47 = *(ushort **)(puVar36 + -0x1610);
        break;
            case 0x1a:
        uVar38 = 1;
        puVar47 = *(ushort **)(puVar36 + -0x1610);
         }

      }

   }
;
   if (uVar16 == 0x5d) {
      if ((int)uVar38 == 0) {
         puVar28 = *(uint**)( puVar36 + -0x1728 );
         if (uVar43 == 1) {
            puVar24[-1] = 0x2d;
         }

         *puVar24 = 0x800d0000;
         puVar24 = puVar24 + 1;
         uVar50 = 0;
         uVar43 = 1;
         puVar48 = *(ushort**)( puVar36 + -0x1610 );
         goto LAB_0010a929;
      }

      LAB_0010aedc:uVar38 = 1;
      if (uVar43 == 1) {
         if (puVar24[-2] == uVar16) {
            LAB_0010b180:uVar27 = 0;
            puVar47 = *(ushort**)( puVar36 + -0x1610 );
            puVar24 = puVar24 + -1;
         }
 else {
            if (uVar16 < puVar24[-2]) goto LAB_0010b0fb;
            LAB_0010af5c:*puVar24 = uVar16;
            uVar27 = 0;
            puVar47 = puVar48;
            puVar24 = puVar24 + 1;
         }

      }
 else {
         LAB_0010aeeb:uVar27 = 3;
         puVar47 = puVar48;
         LAB_0010ae88:*puVar24 = uVar16;
         puVar24 = puVar24 + 1;
      }

      goto LAB_0010ae90;
   }

   goto LAB_0010ad8c;
   code_r0x0010a827:lVar49 = (long)iVar52;
   puVar44 = *(ushort**)( puVar36 + -0x1738 );
   puVar23 = *(uint**)( puVar36 + -0x1728 );
   puVar28 = *(uint**)( puVar36 + -0x16c8 );
   iVar52 = ( &DAT_0010eea8 )[lVar49 * 3];
   puVar47 = (ushort*)&verbs;
   if (*puVar48 == 0x3a) {
      puVar30 = puVar48 + 1;
      if (( puVar30 < puVar44 ) && ( puVar48[1] == 0x29 )) {
         *(ushort**)( puVar36 + -0x1610 ) = puVar30;
         if (iVar52 < 1) goto LAB_0010ddc2;
         if (*puVar30 != 0x3a) goto LAB_0010bd25;
         LAB_0010dd44:uVar16 = ( &DAT_0010eea4 )[lVar49 * 3];
         uVar43 = ( uint )(uVar16 == 0x802a0000);
         puVar45 = puVar30 + 1;
         *(ushort**)( puVar36 + -0x1610 ) = puVar45;
         LAB_0010dd65:uVar17 = ( uint )(uVar16 != 0x80290000) * 0x10000 + uVar16;
         uVar16 = *(uint*)( puVar36 + -0x1678 );
         puVar23 = puVar28;
      }
 else {
         puVar30 = *(ushort**)( puVar36 + -0x1610 );
         if (0 < iVar52) goto LAB_0010dd44;
         LAB_0010ddc2:puVar45 = puVar30 + 1;
         *(ushort**)( puVar36 + -0x1610 ) = puVar45;
         uVar16 = ( &DAT_0010eea4 )[lVar49 * 3];
         uVar43 = ( uint )(uVar16 == 0x802a0000);
         if (*puVar30 != 0x3a) goto LAB_0010a875;
         uVar17 = 0x80290000;
         if (iVar52 == 0) goto LAB_0010dd65;
      }

      *puVar28 = uVar17;
      puVar48 = *(ushort**)( puVar36 + -0x1610 );
      uVar50 = 0;
      *(uint**)( puVar36 + -0x1688 ) = puVar23 + 1;
      *(ushort**)( puVar36 + -0x1680 ) = puVar45;
      *(uint*)( puVar36 + -0x1678 ) = uVar16;
      *(uint**)( puVar36 + -0x1698 ) = puVar28;
      *(undefined4*)( puVar36 + -0x16e8 ) = 1;
      puVar24 = puVar23 + 2;
   }
 else {
      if (0 < iVar52) {
         LAB_0010bd25:uVar16 = *(uint*)( puVar36 + -6000 );
         param_3 = *(uint*)( puVar36 + -0x1768 );
         uVar17 = 0xa6;
         puVar48 = *(ushort**)( puVar36 + -0x1610 );
         goto LAB_001097e2;
      }

      uVar16 = ( &DAT_0010eea4 )[lVar49 * 3];
      uVar43 = ( uint )(uVar16 == 0x802a0000);
      *(long*)( puVar36 + -0x1610 ) = *(long*)( puVar36 + -0x1610 ) + 2;
      LAB_0010a875:*puVar28 = uVar16;
      puVar48 = *(ushort**)( puVar36 + -0x1610 );
      uVar50 = 0;
      *(uint**)( puVar36 + -0x1698 ) = puVar28;
      puVar24 = puVar23 + 1;
   }

   goto LAB_0010a929;
   code_r0x0010cc40:uVar38 = ( ulong ) * (uint*)( puVar36 + -0x1738 );
   puVar28 = *(uint**)( puVar36 + -0x1728 );
   uVar17 = ( &DAT_0010ece4 )[(long)iVar52 * 2];
   if (( 0 < (int)*(uint*)( puVar36 + -0x1738 ) ) && ( 0x30000 < uVar17 + 0x7fdd0000 )) {
      uVar16 = *(uint*)( puVar36 + -6000 );
      param_3 = *(uint*)( puVar36 + -0x1768 );
      uVar17 = ( -(uint)((uVar17 + 0x7fd90000 & 0xfffeffff) == 0) & 0x46 ) + 0x80;
      goto LAB_001097e2;
   }

   if (uVar17 == 0x80240000) {
      switchD_0010bbec_caseD_21:iVar52 = (int)uVar38;
      lVar49 = *(long*)( puVar36 + -0x1610 );
      *puVar28 = 0x80240000;
      puVar24 = puVar23 + 1;
      puVar48 = (ushort*)( lVar49 + 2 );
   }
 else {
      uVar43 = 0;
      if (uVar17 < 0x80240001) {
         if (uVar17 == 0x80220000) {
            puVar48 = puVar48 + 1;
            *puVar23 = 0x80220000;
            uVar38 = 0;
            uVar50 = 0;
            *(short*)( puVar36 + -0x1748 ) = *(short*)( puVar36 + -0x1748 ) + 1;
            *(ushort**)( puVar36 + -0x1610 ) = puVar48;
            puVar24 = puVar23 + 1;
         }
 else {
            if (uVar17 == 0x80230000) {
               switchD_0010bbec_caseD_3d:iVar52 = (int)uVar38;
               lVar49 = *(long*)( puVar36 + -0x1610 );
               *puVar28 = 0x80230000;
               puVar24 = puVar23 + 1;
               puVar48 = (ushort*)( lVar49 + 2 );
               goto LAB_0010c50c;
            }

            if (uVar17 != 0x80020000) goto LAB_0010de39;
            switchD_0010bbec_caseD_3e:*(short*)( puVar36 + -0x1748 ) = *(short*)( puVar36 + -0x1748 ) + 1;
            uVar50 = 0;
            uVar43 = 0;
            *(long*)( puVar36 + -0x1610 ) = *(long*)( puVar36 + -0x1610 ) + 2;
            uVar38 = 0;
            puVar48 = *(ushort**)( puVar36 + -0x1610 );
            *puVar28 = 0x80020000;
            puVar24 = puVar23 + 1;
         }

         goto LAB_0010a929;
      }

      if (uVar17 == 0x80270000) {
         switchD_0010bbec_caseD_2a:iVar52 = (int)uVar38;
         lVar49 = *(long*)( puVar36 + -0x1610 );
         *puVar28 = 0x80270000;
         puVar24 = puVar23 + 1;
         puVar48 = (ushort*)( lVar49 + 2 );
      }
 else {
         if (uVar17 < 0x80270001) {
            if (( uVar17 + 0x7fdb0000 & 0xfffeffff ) != 0) {
               LAB_0010de39:uVar16 = *(uint*)( puVar36 + -6000 );
               param_3 = *(uint*)( puVar36 + -0x1768 );
               uVar17 = 0xbd;
               goto LAB_001097e2;
            }

         }
 else if (uVar17 != 0x80280000) {
            if (uVar17 != 0x8fff0000) goto LAB_0010de39;
            puVar48 = puVar48 + 1;
            *(short*)( puVar36 + -0x1748 ) = *(short*)( puVar36 + -0x1748 ) + 1;
            lVar49 = *(long*)( puVar36 + -0x1758 );
            *(ushort**)( puVar36 + -0x1610 ) = puVar48;
            puVar28[0] = 0x80220000;
            puVar28[1] = 0x80020000;
            if (lVar49 == 0) {
               *(undefined8*)( puVar36 + -0x1758 ) = *(undefined8*)( puVar36 + -0x1540 );
            }
 else {
               *(long*)( puVar36 + -0x1758 ) = *(long*)( puVar36 + -0x1758 ) + 0x10;
               if (*(ulong*)( puVar36 + -0x1690 ) <= *(ulong*)( puVar36 + -0x1758 )) goto LAB_0010cd98;
            }

            puVar55 = *(undefined2**)( puVar36 + -0x1758 );
            uVar38 = 0;
            uVar50 = 0;
            puVar48 = *(ushort**)( puVar36 + -0x1610 );
            *puVar55 = *(undefined2*)( puVar36 + -0x1748 );
            puVar55[3] = 4;
            *(undefined8*)( puVar55 + 4 ) = uVar22;
            puVar24 = puVar23 + 2;
            goto LAB_0010a929;
         }

         *puVar23 = uVar17;
         *(ushort**)( puVar36 + -0x1610 ) = puVar48 + -1;
         LAB_0010cf70:iVar52 = (int)uVar38;
         puVar24 = puVar23 + 3;
         *(undefined4*)( puVar36 + -0x16a4 ) = 1;
         puVar48 = (ushort*)( *(long*)( puVar36 + -0x1610 ) + 4 );
         lVar49 = ( *(long*)( puVar36 + -0x1610 ) - *(long*)( puVar36 + -0x1530 ) >> 1 ) + -2;
         *(long*)( puVar36 + -0x15f0 ) = lVar49;
         puVar23[2] = (uint)lVar49;
         puVar23[1] = ( uint )((ulong)lVar49 >> 0x20);
      }

   }

   LAB_0010c50c:*(short*)( puVar36 + -0x1748 ) = *(short*)( puVar36 + -0x1748 ) + 1;
   *(ushort**)( puVar36 + -0x1610 ) = puVar48;
   if (iVar52 < 1) {
      uVar50 = 0;
      uVar43 = 0;
      uVar38 = 0;
   }
 else {
      if (*(long*)( puVar36 + -0x1758 ) == 0) {
         *(undefined8*)( puVar36 + -0x1758 ) = *(undefined8*)( puVar36 + -0x1540 );
      }
 else {
         *(long*)( puVar36 + -0x1758 ) = *(long*)( puVar36 + -0x1758 ) + 0x10;
         if (*(ulong*)( puVar36 + -0x1690 ) <= *(ulong*)( puVar36 + -0x1758 )) {
            LAB_0010cd98:uVar16 = *(uint*)( puVar36 + -6000 );
            param_3 = *(uint*)( puVar36 + -0x1768 );
            uVar17 = 0xb8;
            goto LAB_001097e2;
         }

      }

      puVar55 = *(undefined2**)( puVar36 + -0x1758 );
      uVar50 = 0;
      uVar43 = 0;
      uVar38 = 0;
      *puVar55 = *(undefined2*)( puVar36 + -0x1748 );
      puVar48 = *(ushort**)( puVar36 + -0x1610 );
      puVar55[3] = 2;
      *(undefined8*)( puVar55 + 4 ) = uVar22;
   }

   LAB_0010a929:uVar27 = 0;
   LAB_00109d2d:if (puVar44 <= puVar48) {
      uVar16 = *(uint*)( puVar36 + -6000 );
      param_3 = *(uint*)( puVar36 + -0x1768 );
      if (*(int*)( puVar36 + -0x16e8 ) != 0) {
         *(undefined4*)( puVar36 + -0x1640 ) = 0xa0;
         uVar17 = 0xa0;
         uVar27 = (long)puVar48 - *(long*)( puVar36 + -0x1530 ) >> 1;
         *(ulong*)( puVar36 + -0x14c0 ) = uVar27;
         goto LAB_00109cc4;
      }

      uVar17 = *(uint*)( puVar36 + -0x16f8 ) & 8;
      goto LAB_00109ee7;
   }

   *(undefined4*)( puVar36 + -0x162c ) = 0;
   *(undefined4*)( puVar36 + -0x1628 ) = 0;
   if (*(uint**)( puVar36 + -0x16c0 ) <= puVar24) {
      uVar16 = *(uint*)( puVar36 + -6000 );
      param_3 = *(uint*)( puVar36 + -0x1768 );
      goto LAB_0010b404;
   }

   puVar23 = *(uint**)( puVar36 + -0x1710 );
   lVar49 = *(long*)( puVar36 + -0x1568 );
   *(uint**)( puVar36 + -0x1710 ) = puVar28;
   puVar30 = puVar48;
   puVar28 = puVar24;
   goto LAB_00109716;
}


undefined4 read_number(undefined8 *param_1, int *param_2, int param_3, uint param_4, undefined4 param_5, uint *param_6, undefined4 *param_7) {
   int *piVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   undefined4 uVar5;
   piVar1 = (int*)*param_1;
   *param_7 = 0;
   if (( piVar1 < param_2 ) && ( -1 < param_3 )) {
      iVar2 = *piVar1;
      if (iVar2 == 0x2b) {
         param_4 = param_4 - param_3;
         piVar1 = piVar1 + 1;
         iVar4 = 1;
      }
 else {
         iVar4 = 0;
         if (iVar2 != 0x2d) goto LAB_00100062;
         piVar1 = piVar1 + 1;
         iVar4 = -1;
      }

   }
 else {
      iVar4 = 0;
   }

   if (param_2 <= piVar1) {
      return 0;
   }

   iVar2 = *piVar1;
   LAB_00100062:if (9 < iVar2 - 0x30U) {
      return 0;
   }

   uVar3 = 0;
   while ((piVar1<param_2&&(iVar2 = *piVar1, iVar2, - 0x30U < 10))){piVar1 = piVar1 + 1;uVar3 = iVar2 + -0x30 + uVar3 * 10 ;;;
   if (param_4 < uVar3) {
      *param_7 = param_5;
      uVar5 = 0;
      LAB_001000b4:*param_6 = uVar3;
      *param_1 = piVar1;
      return uVar5;
   }

}
if (( iVar4 != 0 ) && ( -1 < param_3 )) {
   if (uVar3 == 0) {
      *param_7 = 0x7e;
      uVar5 = 0;
      goto LAB_001000b4;
   }

   if (iVar4 == 1) {
      uVar3 = uVar3 + param_3;
      uVar5 = 1;
      goto LAB_001000b4;
   }

   if (param_3 < (int)uVar3) {
      *param_7 = 0x73;
      uVar5 = 0;
      goto LAB_001000b4;
   }

   uVar3 = ( param_3 + 1 ) - uVar3;
}
uVar5 = 1;goto LAB_001000b4;}undefined8 read_repeat_counts(ulong *param_1, int *param_2, int *param_3, int *param_4, int *param_5, int *param_6) {
   bool bVar1;
   bool bVar2;
   int *piVar3;
   undefined8 uVar4;
   int *piVar5;
   int iVar6;
   int *in_R10;
   int *in_R11;
   int *unaff_R15;
   long in_FS_OFFSET;
   int local_50;
   int local_4c;
   int *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (int*)*param_1;
   local_50 = 0;
   local_4c = 0x10000;
   *param_5 = 0;
   if (local_48 < param_2) {
      piVar5 = local_48;
      bVar2 = false;
      do {
         iVar6 = *piVar5;
         if (iVar6 != 0x20 && iVar6 != 9) {
            if (bVar2) {
               local_48 = param_6;
            }

            if (piVar5 < param_2) {
               if (*piVar5 - 0x30U < 10) goto LAB_00100256;
               bVar2 = false;
               goto LAB_001001c9;
            }

            break;
         }

         piVar5 = piVar5 + 1;
         param_6 = piVar5;
         bVar2 = iVar6 == 0x20 || iVar6 == 9;
      }
 while ( piVar5 < param_2 );
   }

   goto LAB_00100220;
   while (*piVar5 - 0x30U < 10) {
      LAB_00100256:piVar5 = piVar5 + 1;
      if (param_2 <= piVar5) goto LAB_00100220;
   }
;
   bVar2 = true;
   LAB_001001c9:do {
      iVar6 = *piVar5;
      bVar1 = iVar6 == 0x20 || iVar6 == 9;
      if (iVar6 != 0x20 && iVar6 != 9) {
         if (piVar5 < param_2) {
            if (iVar6 == 0x7d) {
               if (bVar2) goto LAB_0010026c;
            }
 else if (iVar6 == 0x2c) goto LAB_001001f0;
         }

         break;
      }

      piVar5 = piVar5 + 1;
   }
 while ( piVar5 < param_2 );
   goto LAB_00100220;
   LAB_0010026c:uVar4 = read_number(&local_48, param_2, 0xffffffff, 0xffff, 0x69, &local_50, param_5);
   if ((int)uVar4 == 0) {
      piVar5 = local_48;
      if (*param_5 == 0) {
         piVar5 = local_48 + 1;
         local_48 = piVar5;
         while (local_48 < param_2) {
            iVar6 = *local_48;
            if (iVar6 != 0x20 && iVar6 != 9) {
               local_48 = piVar5;
               if (bVar1) {
                  local_48 = in_R10;
               }

               break;
            }

            local_48 = local_48 + 1;
            in_R10 = local_48;
            bVar1 = iVar6 == 0x20 || iVar6 == 9;
         }
;
         uVar4 = read_number(&local_48);
         piVar5 = local_48;
         if (( (int)uVar4 != 0 ) || ( *param_5 == 0 )) goto joined_r0x00100390;
      }

   }
 else {
      iVar6 = *local_48;
      piVar5 = local_48;
      piVar3 = local_48;
      bVar2 = false;
      if (local_48 < param_2) {
         do {
            piVar5 = piVar3;
            iVar6 = *piVar5;
            if (iVar6 != 0x20 && iVar6 != 9) {
               if (bVar2) {
                  local_48 = unaff_R15;
               }

               goto LAB_001002f9;
            }

            unaff_R15 = piVar5 + 1;
            piVar3 = unaff_R15;
            bVar2 = iVar6 == 0x20 || iVar6 == 9;
         }
 while ( unaff_R15 < param_2 );
         iVar6 = piVar5[1];
         piVar5 = unaff_R15;
         local_48 = unaff_R15;
      }

      LAB_001002f9:if (iVar6 == 0x7d) {
         local_4c = local_50;
         piVar5 = local_48;
         joined_r0x00100390:do {
            piVar3 = piVar5;
            if (param_2 <= piVar3) break;
            piVar5 = piVar3 + 1;
         }
 while ( ( *piVar3 == 0x20 ) || ( *piVar3 == 9 ) );
         if (param_3 != (int*)0x0) {
            *param_3 = local_50;
         }

         if (param_4 != (int*)0x0) {
            *param_4 = local_4c;
         }

         uVar4 = 1;
         piVar5 = piVar3 + 1;
      }
 else {
         local_48 = piVar5 + 1;
         while (local_48 < param_2) {
            iVar6 = *local_48;
            if (iVar6 != 0x20 && iVar6 != 9) {
               local_48 = piVar5 + 1;
               if (bVar1) {
                  local_48 = in_R11;
               }

               break;
            }

            local_48 = local_48 + 1;
            in_R11 = local_48;
            bVar1 = iVar6 == 0x20 || iVar6 == 9;
         }
;
         uVar4 = read_number(&local_48);
         piVar5 = local_48;
         if (( (int)uVar4 != 0 ) || ( *param_5 == 0 )) {
            if (local_50 <= local_4c) goto joined_r0x00100390;
            *param_5 = 0x68;
            uVar4 = 0;
         }

      }

   }

   *param_1 = (ulong)piVar5;
   goto LAB_00100222;
   while (( iVar6 = *piVar5 ),iVar6 == 0x20 || ( iVar6 == 9 )) {
      LAB_001001f0:piVar5 = piVar5 + 1;
      if (param_2 <= piVar5) goto LAB_00100220;
   }
;
   if (piVar5 < param_2) {
      if (iVar6 - 0x30U < 10) {
         do {
            piVar5 = piVar5 + 1;
            if (param_2 <= piVar5) goto LAB_00100220;
         }
 while ( *piVar5 - 0x30U < 10 );
      }
 else if (!bVar2) goto LAB_00100220;
      do {
         iVar6 = *piVar5;
         if (( iVar6 != 0x20 ) && ( iVar6 != 9 )) {
            if (( piVar5 < param_2 ) && ( iVar6 == 0x7d )) goto LAB_0010026c;
            break;
         }

         piVar5 = piVar5 + 1;
      }
 while ( piVar5 < param_2 );
   }

   LAB_00100220:uVar4 = 0;
   LAB_00100222:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 check_posix_syntax(int *param_1, long param_2, undefined8 *param_3) {
   int iVar1;
   int iVar2;
   int *piVar3;
   piVar3 = param_1 + 1;
   iVar1 = *param_1;
   do {
      if (param_2 - (long)piVar3 < 5) {
         return 0;
      }

      while (iVar2 = *piVar3,iVar2 != 0x5c) {
         if (iVar2 == 0x5b) {
            if (piVar3[1] == iVar1) {
               return 0;
            }

            if (iVar1 == 0x5b) {
               LAB_00100591:if (piVar3[1] == 0x5d) {
                  *param_3 = piVar3;
                  return 1;
               }

            }

         }
 else {
            if (iVar2 == 0x5d) {
               return 0;
            }

            if (iVar2 == iVar1) goto LAB_00100591;
         }

         piVar3 = piVar3 + 1;
         if (param_2 - (long)piVar3 < 5) {
            return 0;
         }

      }
;
      if (piVar3[1] - 0x5cU < 2) {
         piVar3 = piVar3 + 1;
      }

      piVar3 = piVar3 + 1;
   }
 while ( true );
}
undefined8 read_name(undefined8 *param_1, uint *param_2, uint param_3, uint param_4, long *param_5, undefined8 *param_6, undefined4 *param_7, int *param_8, long param_9) {
   byte bVar1;
   int iVar2;
   undefined *puVar3;
   uint *puVar4;
   uint *puVar5;
   uint uVar6;
   iVar2 = *(int*)*param_1;
   puVar5 = (uint*)( (int*)*param_1 + 1 );
   if (param_4 == 0x7d) {
      for (; puVar5 < param_2; puVar5 = puVar5 + 1) {
         if (( *puVar5 != 0x20 ) && ( *puVar5 != 9 )) goto LAB_001005c6;
      }

   }
 else {
      LAB_001005c6:if (puVar5 < param_2) {
         *param_6 = puVar5;
         uVar6 = *puVar5;
         *param_5 = (long)puVar5 - *(long*)( param_9 + 0x38 ) >> 2;
         puVar4 = puVar5;
         if (iVar2 == 0x2a) {
            LAB_00100753:while (*puVar4 < 0x100) {
               if (( ( *(byte*)( *(long*)( param_9 + 0x20 ) + ( ulong ) * puVar4 ) & 0x10 ) == 0 ) || ( puVar4 = param_2 <= puVar4 )) break;
            }
;
            if (puVar5 + 0x20 < puVar4) {
               LAB_00100800:iVar2 = 0x94;
               puVar5 = puVar4;
               goto LAB_00100721;
            }

            *param_7 = (int)( (long)puVar4 - (long)puVar5 >> 2 );
            if (iVar2 == 0x2a) goto LAB_001006df;
            LAB_001006b6:if (puVar5 == puVar4) {
               iVar2 = 0xa2;
            }
 else {
               if (param_4 == 0x7d) {
                  for (; puVar4 < param_2; puVar4 = puVar4 + 1) {
                     if (( *puVar4 != 0x20 ) && ( *puVar4 != 9 )) goto LAB_001006c9;
                  }

               }
 else {
                  LAB_001006c9:if (( puVar4 < param_2 ) && ( *puVar4 == param_4 )) {
                     puVar4 = puVar4 + 1;
                     LAB_001006df:*param_1 = puVar4;
                     return 1;
                  }

               }

               iVar2 = 0x8e;
               puVar5 = puVar4;
            }

         }
 else {
            if (( param_3 & 1 ) == 0) {
               if (( iVar2 == 0x2a ) || ( 9 < uVar6 - 0x30 )) goto LAB_00100753;
            }
 else {
               puVar3 = &_pcre2_dummy_ucd_record_32;
               if (uVar6 < 0x110000) {
                  puVar3 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar6 >> 7 ) * 2 ) * 0x80 + ( uVar6 & 0x7f ) ) * 2 ) * 0xc;
               }

               bVar1 = puVar3[1];
               if (bVar1 != 0xd) {
                  while (( ( ( bVar1 == 0xd || ( *(int*)( &_pcre2_ucp_gentype_32 + (ulong)bVar1 * 4 ) == 1 ) ) || ( uVar6 == 0x5f ) ) && ( puVar4 = puVar4 < param_2 ) )) {
                     uVar6 = *puVar4;
                     puVar3 = &_pcre2_dummy_ucd_record_32;
                     if (uVar6 < 0x110000) {
                        puVar3 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar6 >> 7 ) * 2 ) * 0x80 + ( uVar6 & 0x7f ) ) * 2 ) * 0xc;
                     }

                     bVar1 = puVar3[1];
                  }
;
                  if (puVar5 + 0x20 < puVar4) goto LAB_00100800;
                  *param_7 = (int)( (long)puVar4 - (long)puVar5 >> 2 );
                  goto LAB_001006b6;
               }

            }

            iVar2 = 0x90;
         }

         goto LAB_00100721;
      }

   }

   iVar2 = ( iVar2 != 0x2a ) + 0xa0 + ( uint )(iVar2 != 0x2a);
   LAB_00100721:*param_8 = iVar2;
   *param_1 = puVar5;
   return 0;
}
undefined4 *manage_callouts(long param_1, undefined8 *param_2, int param_3, undefined4 *param_4, long param_5) {
   undefined8 uVar1;
   undefined4 *puVar2;
   int iVar3;
   puVar2 = (undefined4*)*param_2;
   if (puVar2 == (undefined4*)0x0) {
      if (param_3 == 0) goto LAB_00100894;
      iVar3 = (int)( param_1 - *(long*)( param_5 + 0x38 ) >> 2 );
   }
 else {
      iVar3 = (int)( param_1 - *(long*)( param_5 + 0x38 ) >> 2 );
      puVar2[2] = iVar3 - puVar2[1];
      if (param_3 == 0) {
         LAB_00100894:*param_2 = 0;
         return param_4;
      }

      if (( puVar2 == param_4 + -4 ) && ( puVar2[3] == 0xff )) goto LAB_0010087e;
   }

   uVar1 = _LC0;
   *param_4 = 0x80060000;
   *(undefined8*)( param_4 + 2 ) = uVar1;
   puVar2 = param_4;
   param_4 = param_4 + 4;
   LAB_0010087e:puVar2[1] = iVar3;
   *param_2 = puVar2;
   return param_4;
}
int *handle_escdsw(int param_1, int *param_2, uint param_3, uint param_4) {
   uint uVar1;
   uVar1 = param_1 - 6;
   if (uVar1 < 6) {
      if (( ( param_3 & 0x20000 ) != 0 ) && ( ( param_4 & *(uint*)( CSWTCH_1382 + (ulong)uVar1 * 4 ) ) == 0 )) {
         *param_2 = *(int*)( CSWTCH_1383 + (ulong)uVar1 * 4 ) + -0x7fe80000;
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
void first_significant_code(uint *param_1, int param_2) {
   uint uVar1;
   ulong uVar2;
   ulong uVar3;
   LAB_00100980:uVar2 = ( ulong ) * param_1;
   if (0x96 < *param_1) goto LAB_001009cf;
   LAB_0010098a:uVar1 = (uint)uVar2;
   if (uVar1 < 0x76) {
      if (uVar1 - 4 < 2) goto LAB_001009b8;
      return;
   }

   switch (uVar1) {
      case 0x76:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
    goto switchD_0010099e_caseD_76;
      case 0x77:
    goto switchD_0010099e_caseD_77;
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x84:
    if (param_2 != 0) goto LAB_00100a20;
    break;
      case 0x8b:
      case 0x90:
    if ((param_1[2] == 0x95) && (param_1[param_1[1]] == 0x79)) {
      param_1 = param_1 + (param_1[1] + 2);
      goto LAB_00100980;
    }
   }

   return;
   LAB_00100a20:do {
      param_1 = param_1 + param_1[1];
   }
 while ( *param_1 == 0x78 );
   param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_32)[*param_1];
   goto LAB_00100980;
   switchD_0010099e_caseD_77:param_1 = param_1 + param_1[3];
   goto LAB_00100980;
   switchD_0010099e_caseD_76:while (true) {
      param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_32)[uVar2];
      uVar2 = ( ulong ) * param_1;
      if (*param_1 < 0x97) break;
      LAB_001009cf:uVar1 = (int)uVar2 - 0x9a;
      if (0x10 < uVar1) {
         return;
      }

      uVar3 = 1L << ( (byte)uVar1 & 0x3f );
      if (( uVar3 & 0x155 ) != 0) {
         param_1 = param_1 + ( ( uint )(byte)(&_pcre2_OP_lengths_32)[uVar2] + param_1[1] );
         goto LAB_00100980;
      }

      if (( uVar3 & 0x18000 ) == 0) {
         if (uVar1 != 0xd) {
            return;
         }

         param_1 = param_1 + ( param_1[2] + 3 );
         goto LAB_00100980;
      }

      LAB_001009b8:if (param_2 == 0) {
         return;
      }

   }
;
   goto LAB_0010098a;
}
ulong is_anchored(uint *param_1, uint param_2, long param_3, int param_4, uint param_5) {
   int iVar1;
   uint *puVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   uVar4 = *param_1;
   do {
      puVar2 = (uint*)first_significant_code(param_1 + ( byte )(&_pcre2_OP_lengths_32)[uVar4], 0);
      uVar4 = *puVar2;
      if (0x90 < uVar4) {
         return 0;
      }

      iVar1 = param_4;
      uVar5 = param_5;
      if (uVar4 < 0x87) {
         if (uVar4 == 0x7f) {
            LAB_00100c48:uVar5 = 1;
            goto LAB_00100b0c;
         }

         if (0x7f < uVar4) {
            if (uVar4 != 0x83) {
               if (uVar4 != 0x85) {
                  return 0;
               }

               iVar1 = param_4 + 1;
               goto LAB_00100b0c;
            }

            goto LAB_00100c48;
         }

         if (uVar4 < 0x57) {
            if (0x54 < uVar4) goto LAB_00100baa;
            if (( 1 < uVar4 - 1 ) && ( uVar4 != 0x1b )) {
               return 0;
            }

         }
 else {
            if (uVar4 != 0x5e) {
               return 0;
            }

            LAB_00100baa:if (( ( ( puVar2[1] != 0xd ) || ( ( param_2 & *(uint*)( param_3 + 0xf4 ) ) != 0 ) ) || ( 0 < param_4 ) ) || ( uVar4 = uVar4 != 0 )) {
               return 0;
            }

            if (( *(byte*)( param_3 + 0xc5 ) & 0x80 ) != 0) {
               return (ulong)uVar4;
            }

         }

      }
 else {
         uVar3 = 1L << ( (char)uVar4 + 0x79U & 0x3f );
         if (( uVar3 & 0x18c ) == 0) {
            if (( uVar3 & 99 ) == 0) {
               if (( uVar3 & 0x210 ) == 0) {
                  return 0;
               }

               if (puVar2[puVar2[1]] != 0x78) {
                  return 0;
               }

            }

            LAB_00100b0c:uVar3 = is_anchored(puVar2, param_2, param_3, iVar1, uVar5);
            iVar1 = (int)uVar3;
         }
 else {
            uVar4 = 1 << ( (byte)puVar2[2] & 0x1f );
            if (0x1f < (int)puVar2[2]) {
               uVar4 = 1;
            }

            uVar3 = is_anchored(puVar2, uVar4 | param_2, param_3, param_4, param_5);
            iVar1 = (int)uVar3;
         }

         if (iVar1 == 0) {
            return uVar3;
         }

      }

      param_1 = param_1 + param_1[1];
      uVar4 = *param_1;
      if (uVar4 != 0x78) {
         return 1;
      }

   }
 while ( true );
}
ulong is_startline(uint *param_1, uint param_2, long param_3, int param_4, uint param_5) {
   int iVar1;
   int *piVar2;
   ulong uVar3;
   int iVar4;
   uint uVar5;
   uint *puVar6;
   uVar5 = *param_1;
   do {
      piVar2 = (int*)first_significant_code(param_1 + ( byte )(&_pcre2_OP_lengths_32)[uVar5], 0);
      iVar1 = *piVar2;
      if (iVar1 == 0x8b) {
         uVar5 = piVar2[2];
         puVar6 = (uint*)( piVar2 + 2 );
         if (uVar5 == 0x76) {
            puVar6 = puVar6 + DAT_001100a6;
            uVar5 = *puVar6;
            joined_r0x00100e5b:if (0x96 < uVar5) goto LAB_00100de8;
            LAB_00100d04:if (0x90 < uVar5) {
               return 0;
            }

         }
 else {
            if (uVar5 == 0x77) {
               puVar6 = puVar6 + (uint)piVar2[5];
               uVar5 = *puVar6;
               goto joined_r0x00100e5b;
            }

            if (uVar5 < 0x97) goto LAB_00100d04;
            LAB_00100de8:if (uVar5 == 0xa3) {
               return 0;
            }

         }

         uVar3 = is_startline(puVar6, param_2, param_3, param_4, 1);
         if ((int)uVar3 == 0) {
            return uVar3;
         }

         do {
            puVar6 = puVar6 + puVar6[1];
         }
 while ( *puVar6 == 0x78 );
         piVar2 = (int*)first_significant_code(puVar6 + 2, 0);
         iVar1 = *piVar2;
      }

      iVar4 = param_4;
      uVar5 = param_5;
      switch (iVar1) {
         case 0x1b:
         case 0x1c:
      goto switchD_00100cdc_caseD_1b;
         default:
      return 0;
         case 0x55:
         case 0x56:
         case 0x5e:
      if (piVar2[1] != 0xc) {
        return 0;
      }
      if ((param_2 & *(uint *)(param_3 + 0xf4)) != 0) {
        return 0;
      }
      if (0 < param_4) {
        return 0;
      }
      uVar5 = param_5 | *(uint *)(param_3 + 0x128);
      if (uVar5 != 0) {
        return 0;
      }
      if ((*(byte *)(param_3 + 0xc5) & 0x80) != 0) {
        return (ulong)uVar5;
      }
      goto switchD_00100cdc_caseD_1b;
         case 0x7f:
         case 0x83:
      uVar5 = 1;
      break;
         case 0x85:
      iVar4 = param_4 + 1;
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
      uVar5 = 1 << ((byte)piVar2[2] & 0x1f);
      if (0x1f < piVar2[2]) {
        uVar5 = 1;
      }
      uVar3 = is_startline(piVar2,uVar5 | param_2,param_3,param_4,param_5);
      iVar1 = (int)uVar3;
      goto joined_r0x00100d4e;
      }

      uVar3 = is_startline(piVar2, param_2, param_3, iVar4, uVar5);
      iVar1 = (int)uVar3;
      joined_r0x00100d4e:if (iVar1 == 0) {
         return uVar3;
      }

      switchD_00100cdc_caseD_1b:param_1 = param_1 + param_1[1];
      uVar5 = *param_1;
      if (uVar5 != 0x78) {
         return 1;
      }

   }
 while ( true );
}
uint find_firstassertedcu(int *param_1, uint *param_2, int param_3) {
   uint uVar1;
   int iVar2;
   uint uVar3;
   uint *puVar4;
   uint uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   uint local_44;
   long local_40;
   uVar6 = 0xfffffffe;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0xfffffffe;
   iVar2 = *param_1;
   uVar5 = 0;
   LAB_00100ecd:puVar4 = (uint*)first_significant_code(( ulong )(( uint )(iVar2 - 0x8eU < 2 || iVar2 - 0x89U < 2) * 4 + 8) + (long)param_1, 1);
   uVar3 = *puVar4;
   if (0x38 < uVar3) {
      uVar3 = uVar3 - 0x7f;
      if (( ( 0x10 < uVar3 ) || ( ( 0x18fd1UL >> ( (ulong)uVar3 & 0x3f ) & 1 ) == 0 ) ) || ( uVar3 = find_firstassertedcu(puVar4, &local_44, param_3 + ( uint )(( uVar3 & 0xfffffffb ) == 0)) ),0xfffffffd < local_44) goto switchD_00100f1d_caseD_1f;
      uVar1 = local_44;
      if (uVar6 != 0xfffffffe) {
         if (local_44 != uVar6) goto switchD_00100f1d_caseD_1f;
         goto LAB_00100fa1;
      }

      goto LAB_00100fa5;
   }

   if (uVar3 < 0x1d) goto switchD_00100f1d_caseD_1f;
   switch (uVar3) {
      case 0x1d:
      case 0x23:
      case 0x24:
      case 0x2b:
    goto switchD_00100f1d_caseD_1d;
      case 0x1e:
      case 0x30:
      case 0x31:
      case 0x38:
    goto switchD_00100f1d_caseD_1e;
      default:
    goto switchD_00100f1d_caseD_1f;
      case 0x29:
    break;
      case 0x36:
    puVar4 = puVar4 + 1;
switchD_00100f1d_caseD_1e:
    if (param_3 == 0) goto switchD_00100f1d_caseD_1f;
    uVar3 = puVar4[1];
    if (uVar6 != 0xfffffffe) goto LAB_00100fa1;
    uVar1 = 1;
    goto LAB_00100fa5;
   }

   puVar4 = puVar4 + 1;
   switchD_00100f1d_caseD_1d:if (param_3 == 0) {
      switchD_00100f1d_caseD_1f:uVar3 = 0;
      goto LAB_00100f62;
   }

   uVar3 = puVar4[1];
   if (uVar6 == 0xfffffffe) {
      uVar1 = 0;
   }
 else {
      LAB_00100fa1:bVar7 = uVar5 != uVar3;
      uVar1 = uVar6;
      uVar3 = uVar5;
      if (bVar7) goto switchD_00100f1d_caseD_1f;
   }

   LAB_00100fa5:uVar6 = uVar1;
   param_1 = param_1 + (uint)param_1[1];
   iVar2 = *param_1;
   uVar5 = uVar3;
   if (iVar2 != 0x78) {
      *param_2 = uVar6;
      LAB_00100f62:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar3;
   }

   goto LAB_00100ecd;
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
   if (bVar6) goto LAB_00101108;
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
               LAB_00101183:if (( uVar1 & 0x7fc00000 ) != 0) {
                  return (uint*)0x0;
               }

               LAB_00101143:param_1 = param_1 + ( byte )(&meta_extra_lengths)[uVar3 >> 0x10 & 0x7fff];
            }

         }
 else {
            if (uVar3 != 0x80030000) {
               if (( uVar3 == 0x80080000 ) || ( uVar3 == 0x80020000 )) goto LAB_00101140;
               goto LAB_00101143;
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
            if (0x80180000 < uVar3) goto LAB_00101143;
            if (uVar3 == 0x80120000) {
               LAB_00101140:iVar5 = iVar5 + 1;
            }
 else if (uVar3 < 0x80120001) {
               if (( ( uVar1 & 0xfffe0000 ) == 0x80100000 ) || ( uVar3 == 0x800f0000 )) goto LAB_00101140;
            }
 else if (( ( uVar1 & 0xfffe0000 ) == 0x80140000 ) || ( uVar3 == 0x80130000 )) goto LAB_00101140;
            goto LAB_00101143;
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
                           if (( uVar3 + 0x7fe60000 & 0xfff70000 ) == 0) goto LAB_00101140;
                        }
 else if (( uVar1 & 0xfffe0000 ) == 0x80240000) goto LAB_00101140;
                        goto LAB_00101143;
                     }

                  }
 else {
                     if (uVar3 == 0x80290000) goto LAB_001010ac;
                     if (( 0x80290000 < uVar3 ) || ( ( uVar3 + 0x7fd90000 & 0xfffe0000 ) != 0 )) goto LAB_00101143;
                  }

               }

               goto LAB_00101140;
            }

            if (( ( uVar1 & 0xfffd0000 ) != 0x80310000 ) && ( uVar3 != 0x802f0000 )) goto LAB_00101183;
         }

         LAB_001010ac:param_1 = param_1 + ( ulong )(byte)(&meta_extra_lengths)[uVar3 >> 0x10 & 0x7fff] + (ulong)param_1[1];
      }

      while (true) {
         uVar1 = param_1[1];
         param_1 = param_1 + 1;
         lVar4 = ( ulong )(ushort)(uVar1 >> 0x10) << 0x10;
         uVar2 = (uint)lVar4;
         bVar6 = uVar2 == 0x800d0000;
         if (!bVar6) break;
         LAB_00101108:if (param_2 == 1) {
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
   undefined8 *puVar11;
   ulong uVar12;
   uint uVar13;
   uint *puVar14;
   int iVar15;
   int iVar16;
   long in_FS_OFFSET;
   int local_6c;
   uint *local_68;
   uint *local_60;
   long *local_58;
   uint *local_50;
   long local_40;
   local_68 = (uint*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar16 = *param_4;
   *param_4 = iVar16 + 1;
   if (2000 < iVar16) {
      *param_3 = 0x87;
      LAB_00101567:iVar10 = -1;
      LAB_0010156c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return iVar10;
   }

   uVar4 = *local_68;
   iVar16 = 0;
   uVar12 = 0;
   iVar15 = 0;
   iVar10 = 0;
   LAB_0010130d:if (-1 < (int)uVar4) goto LAB_001012e0;
   uVar9 = uVar4 & 0xffff0000;
   if (uVar9 == 0x80160000) goto LAB_00101690;
   iVar3 = (int)uVar12;
   puVar6 = local_68;
   if (uVar9 < 0x80160001) {
      if (uVar9 != 0x80080000) {
         if (0x80080000 < uVar9) {
            if (uVar9 == 0x80100000) {
               local_68 = (uint*)parsed_skip(local_68 + 1);
               goto LAB_00101690;
            }

            if (0x80100000 < uVar9) {
               if (uVar9 != 0x80150000) {
                  if (0x80150000 < uVar9) goto LAB_00101560;
                  if (uVar9 != 0x80130000) {
                     if (uVar9 < 0x80130001) {
                        if (( uVar9 + 0x7fef0000 & 0xfffe0000 ) == 0) goto LAB_00101790;
                     }
 else if (uVar9 == 0x80140000) goto LAB_00101790;
                     goto LAB_00101560;
                  }

               }

               LAB_00101790:local_68 = local_68 + 4;
               uVar4 = 0;
               goto LAB_00101797;
            }

            if (uVar9 != 0x800e0000) {
               if (uVar9 < 0x800e0001) {
                  if (uVar9 == 0x800a0000) goto LAB_00101b50;
                  if (uVar9 == 0x800c0000) goto LAB_001012e0;
                  if (uVar9 == 0x80090000) goto LAB_00101690;
               }
 else if (uVar9 == 0x800f0000) {
                  local_68 = local_68 + 1;
                  uVar4 = 0;
                  goto LAB_00101797;
               }

               goto LAB_00101560;
            }

            LAB_00101b50:local_68 = (uint*)parsed_skip(local_68, 1);
            if (local_68 != (uint*)0x0) {
               LAB_001012e0:iVar10 = iVar10 + 1;
               iVar16 = 1;
               uVar12 = 1;
               goto LAB_001012ed;
            }

            LAB_001016ea:*param_3 = 0xbe;
            goto LAB_00101567;
         }

         if (uVar9 == 0x80050000) {
            LAB_001019d0:local_68 = local_68 + 1;
            goto LAB_001012e0;
         }

         if (uVar9 < 0x80050001) {
            if (uVar9 == 0x80030000) {
               if (( ( *(byte*)( param_6 + 0xc5 ) & 2 ) == 0 ) && ( ( *(byte*)( param_6 + 0xca ) & 0x20 ) == 0 )) {
                  if ((ushort)uVar4 < 10) {
                     lVar5 = *(long*)( param_6 + 0x58 + ( ulong )(uVar4 & 0xffff) * 8 );
                  }
 else {
                     LAB_0010152a:puVar6 = local_68 + 1;
                     puVar14 = local_68 + 2;
                     local_68 = local_68 + 2;
                     lVar5 = CONCAT44(*puVar6, *puVar14);
                  }

                  uVar4 = uVar4 & 0xffff;
                  if (*(uint*)( param_6 + 0xcc ) < uVar4) {
                     LAB_00101c77:*(long*)( param_6 + 0xa8 ) = lVar5;
                     *param_3 = 0x73;
                     goto LAB_00101567;
                  }

                  if (uVar4 != 0) {
                     LAB_00101485:local_60 = *(uint**)( param_6 + 0xd8 );
                     uVar9 = *local_60;
                     puVar6 = local_60;
                     if (uVar9 != 0x80000000) {
                        bVar2 = false;
                        do {
                           if (uVar9 >> 0x10 == 0x8005) {
                              puVar6 = puVar6 + 1;
                           }
 else if (( uVar4 | 0x80080000 ) == uVar9) {
                              if (!bVar2) goto LAB_00101801;
                              break;
                           }

                           puVar14 = puVar6 + 1;
                           uVar9 = puVar6[1];
                           bVar2 = true;
                           puVar6 = puVar14;
                        }
 while ( uVar9 != 0x80000000 );
                        local_60 = puVar6;
                     }

                     LAB_00101801:puVar14 = puVar6 + 1;
                     puVar7 = (uint*)parsed_skip(puVar14, 2);
                     if (puVar7 == (uint*)0x0) goto LAB_001016ea;
                     if (( local_68 <= puVar6 ) || ( puVar7 <= local_68 )) {
                        plVar8 = param_5;
                        if (param_5 != (long*)0x0) {
                           do {
                              if ((uint*)plVar8[1] == puVar6) goto LAB_00101560;
                              plVar8 = (long*)*plVar8;
                           }
 while ( plVar8 != (long*)0x0 );
                        }

                        local_60 = puVar14;
                        local_58 = param_5;
                        local_50 = puVar6;
                        uVar4 = get_grouplength(&local_60, &local_6c, 0, param_3, param_4);
                        if (-1 < (int)uVar4) goto LAB_001017c4;
                        if (*param_3 != 0) goto LAB_00101567;
                     }

                  }

               }

            }
 else {
               if (uVar9 < 0x80030001) {
                  if (uVar9 != 0x80010000) {
                     if (uVar9 == 0x80020000) goto LAB_001019f8;
                     goto LAB_00101560;
                  }

                  LAB_00101727:*param_1 = puVar6;
                  *param_2 = iVar15;
                  goto LAB_0010156c;
               }

               if (( uVar9 == 0x80040000 ) && ( ( *(byte*)( param_6 + 0xc5 ) & 2 ) == 0 )) goto LAB_00101378;
            }

         }
 else {
            if (uVar9 == 0x80060000) goto LAB_00101990;
            if (uVar9 == 0x80070000) {
               uVar4 = local_68[6];
               iVar16 = 0;
               local_68 = local_68 + 5;
               uVar12 = 0;
               goto LAB_00101301;
            }

         }

         goto LAB_00101560;
      }

      uVar4 = uVar4 & 0xffff;
      LAB_001019fb:local_68 = local_68 + 1;
      LAB_00101797:uVar4 = get_grouplength(&local_68, &local_6c, 1, param_3, param_4, uVar4, param_5, param_6);
      if ((int)uVar4 < 0) goto LAB_00101567;
      LAB_001017c4:uVar12 = (ulong)uVar4;
      uVar13 = 0x7fffffff - iVar10;
      iVar16 = local_6c;
   }
 else {
      if (uVar9 == 0x80240000) {
         LAB_00101a1c:iVar16 = check_lookbehinds(local_68 + 1, &local_68, param_5, param_6, param_4);
         *param_3 = iVar16;
         if (iVar16 != 0) goto LAB_00101567;
         uVar4 = local_68[1];
         if (uVar4 != 0x803d0000) {
            if (uVar4 < 0x803d0001) {
               if (uVar4 != 0x80380000) {
                  if (uVar4 < 0x80380001) {
                     if (uVar4 != 0x80360000) {
                        if (uVar4 < 0x80360001) {
                           if (( uVar4 & 0xfffeffff ) == 0x80340000) goto LAB_00101a85;
                        }
 else if (uVar4 == 0x80370000) goto LAB_00101a85;
                        LAB_00101693:iVar16 = 0;
                        uVar12 = 0;
                        goto LAB_00101301;
                     }

                  }
 else if (uVar4 != 0x803b0000) {
                     if (uVar4 < 0x803b0001) {
                        if (( uVar4 + 0x7fc70000 & 0xfffeffff ) == 0) goto LAB_00101a85;
                     }
 else if (uVar4 == 0x803c0000) goto LAB_00101a85;
                     goto LAB_00101693;
                  }

               }

               LAB_00101a85:uVar4 = local_68[2];
               iVar16 = 0;
               local_68 = local_68 + 1;
               uVar12 = 0;
               goto LAB_00101301;
            }

            if (( uVar4 & 0xfffeffff ) != 0x803e0000) goto LAB_00101693;
         }

         LAB_00101990:uVar4 = local_68[4];
         iVar16 = 0;
         local_68 = local_68 + 3;
         uVar12 = 0;
         goto LAB_00101301;
      }

      if (uVar9 < 0x80240001) {
         if (uVar9 == 0x801b0000) {
            uVar4 = local_68[3];
            iVar16 = 0;
            local_68 = local_68 + 2;
            uVar12 = 0;
            goto LAB_00101301;
         }

         if (uVar9 < 0x801b0001) {
            if (uVar9 == 0x80180000) {
               uVar9 = uVar4 & 0xffff;
               if ((ushort)uVar4 == 0x16) goto LAB_00101567;
               if (uVar9 != 0x11) {
                  if (0x10 < uVar9 - 6) goto LAB_00101690;
                  if (uVar9 - 0xf < 2) goto LAB_001019d0;
                  goto LAB_001012e0;
               }

               iVar10 = iVar10 + 2;
               iVar16 = 1;
               uVar12 = 2;
               LAB_001012ed:if (iVar10 < 0x10000) goto LAB_001012f9;
               goto LAB_001017e8;
            }

            if (uVar9 < 0x80180001) {
               if (uVar9 == 0x80170000) goto LAB_001012e0;
            }
 else {
               if (uVar9 == 0x80190000) goto LAB_00101727;
               if (uVar9 == 0x801a0000) goto LAB_001019f8;
            }

         }
 else {
            if (uVar9 == 0x80210000) {
               LAB_00101378:puVar6 = local_68 + 3;
               uVar4 = local_68[1];
               puVar11 = *(undefined8**)( param_6 + 0xb8 );
               lVar5 = CONCAT44(local_68[2], local_68[3]);
               lVar1 = *(long*)( param_6 + 0x38 );
               local_68 = puVar6;
               if (*(short*)( param_6 + 0xb0 ) != 0) {
                  iVar16 = 0;
                  while (( *(ushort*)( (long)puVar11 + 0xc ) != uVar4 || ( iVar3 = _pcre2_strncmp_32(lVar1 + lVar5 * 4, *puVar11, uVar4) ),iVar3 != 0 )) {
                     iVar16 = iVar16 + 1;
                     puVar11 = puVar11 + 2;
                     if ((int)( uint ) * (ushort*)( param_6 + 0xb0 ) <= iVar16) goto LAB_001018b0;
                  }
;
                  uVar4 = *(uint*)( puVar11 + 1 );
                  if (uVar4 != 0) {
                     if (( uVar9 == 0x80210000 ) || ( ( *(short*)( (long)puVar11 + 0xe ) == 0 && ( ( *(byte*)( param_6 + 0xca ) & 0x20 ) == 0 ) ) )) {
                        if (uVar4 <= *(uint*)( param_6 + 0xcc )) goto LAB_00101485;
                        goto LAB_00101c77;
                     }

                     goto LAB_00101560;
                  }

               }

               LAB_001018b0:*param_3 = 0x73;
               *(long*)( param_6 + 0xa8 ) = lVar5;
               goto LAB_00101567;
            }

            if (uVar9 < 0x80210001) {
               if (uVar9 == 0x80200000) goto LAB_0010152a;
            }
 else {
               if (uVar9 == 0x80220000) {
                  LAB_001019f8:uVar4 = 0;
                  goto LAB_001019fb;
               }

               if (uVar9 == 0x80230000) goto LAB_00101a1c;
            }

         }

         LAB_00101560:*param_3 = 0x7d;
         goto LAB_00101567;
      }

      if (uVar9 == 0x802e0000) goto LAB_00101690;
      if (uVar9 < 0x802e0001) {
         if (uVar9 == 0x80290000) goto LAB_00101948;
         if (0x80290000 < uVar9) {
            if (uVar9 != 0x802b0000) {
               if (uVar9 < 0x802b0001) {
                  if (uVar9 == 0x802a0000) goto LAB_001016db;
               }
 else {
                  if (uVar9 == 0x802c0000) goto LAB_00101690;
                  if (uVar9 == 0x802d0000) goto LAB_00101948;
               }

               goto LAB_00101560;
            }

            LAB_001016db:puVar6 = (uint*)parsed_skip(local_68, 0);
            if (puVar6 != (uint*)0x0) goto LAB_00101727;
            goto LAB_001016ea;
         }

         if (uVar9 == 0x80270000) goto LAB_00101a1c;
         if (uVar9 < 0x80270001) {
            if (( uVar9 + 0x7fdb0000 & 0xfffe0000 ) != 0) goto LAB_00101560;
            LAB_001018ec:iVar16 = set_lookbehind_lengths(&local_68, param_3, param_4, param_5, param_6);
            if (iVar16 != 0) goto LAB_00101690;
            goto LAB_00101567;
         }

         if (uVar9 == 0x80280000) goto LAB_001018ec;
         goto LAB_00101560;
      }

      if (uVar9 == 0x803b0000) {
         LAB_00101aad:iVar15 = iVar15 - iVar16;
         iVar16 = 0;
         if (iVar3 != 0) {
            uVar12 = 0;
         }

         goto LAB_001012f9;
      }

      if (uVar9 < 0x803b0001) {
         if (uVar9 == 0x80320000) {
            LAB_00101690:uVar4 = local_68[1];
            goto LAB_00101693;
         }

         if (uVar9 < 0x80320001) {
            if (uVar9 == 0x80300000) goto LAB_00101690;
            if (( uVar9 + 0x7fd10000 & 0xfffd0000 ) == 0) goto LAB_00101948;
         }
 else {
            if (uVar9 == 0x80330000) {
               LAB_00101948:iVar16 = 0;
               uVar12 = 0;
               local_68 = local_68 + ( local_68[1] + 1 );
               uVar4 = local_68[1];
               goto LAB_00101301;
            }

            if (uVar9 == 0x803a0000) goto LAB_00101aad;
         }

         goto LAB_00101560;
      }

      if (uVar9 != 0x803e0000) {
         if (uVar9 < 0x803e0001) {
            if (uVar9 == 0x803c0000) goto LAB_00101aad;
            if (uVar9 == 0x803d0000) goto LAB_001015de;
         }
 else if (uVar9 == 0x803f0000) goto LAB_001015de;
         goto LAB_00101560;
      }

      LAB_001015de:uVar4 = local_68[2];
      uVar9 = local_68[1];
      local_68 = local_68 + 2;
      if (uVar4 == 0x10000) goto LAB_00101560;
      if (( iVar3 != 0 ) && ( uVar4 != 0 )) {
         uVar13 = 0x7fffffff - iVar10;
         if (uVar4 - 1 <= ( uint )(uVar13 / uVar12)) {
            uVar4 = iVar3 * ( uVar4 - 1 );
            uVar12 = (ulong)uVar4;
            if (uVar9 == 0) {
               iVar15 = iVar15 - iVar16;
               iVar16 = 0;
            }
 else {
               iVar16 = iVar16 * ( uVar9 - 1 );
            }

            goto LAB_001017d1;
         }

         LAB_001017e8:*param_3 = 0xbb;
         goto LAB_00101567;
      }

      if (uVar9 == 0) {
         iVar15 = iVar15 - iVar16;
         iVar16 = 0;
      }
 else {
         iVar16 = iVar16 * ( uVar9 - 1 );
      }

      if (uVar4 == 0) {
         iVar10 = iVar10 - iVar3;
         uVar12 = 0;
         goto LAB_001012ed;
      }

      uVar4 = iVar3 * ( uVar4 - 1 );
      uVar12 = (ulong)uVar4;
      uVar13 = 0x7fffffff - iVar10;
   }

   LAB_001017d1:if (( (int)uVar13 < (int)uVar4 ) || ( iVar10 = 0xffff < iVar10 )) goto LAB_001017e8;
   LAB_001012f9:uVar4 = local_68[1];
   LAB_00101301:local_68 = local_68 + 1;
   iVar15 = iVar15 + iVar16;
   goto LAB_0010130d;
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

         if (*(long*)( param_5 + 0xa8 ) == -1) goto LAB_00101dfc;
         uVar7 = 0;
         goto LAB_00101e1d;
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

      if (*(int*)( param_5 + 0x120 ) < (int)uVar5) {
         *(uint*)( param_5 + 0x120 ) = uVar5;
      }

      *puVar8 = *puVar8 | uVar5;
      puVar6 = (uint*)*param_1;
      puVar8 = puVar6;
   }
 while ( *puVar6 == 0x80010000 );
   if (bVar4) {
      puVar3[1] = uVar9;
      if (*(uint*)( param_5 + 0x11c ) < uVar10) {
         *param_2 = 200;
         LAB_00101dfc:*(ulong*)( param_5 + 0xa8 ) = CONCAT44(uVar2, uVar1);
         uVar7 = 0;
         goto LAB_00101e1d;
      }

   }
 else {
      uVar9 = 0xffff;
   }

   puVar3[1] = uVar9;
   uVar7 = 1;
   LAB_00101e1d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
      LAB_00102228:uVar1 = 0;
      LAB_00101f85:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   iVar6 = 0;
   LAB_00101f04:if ((int)uVar5 < 0) {
      uVar4 = uVar5 & 0xffff0000;
      if (uVar4 == 0x80180000) {
         puVar3 = local_40 + 1;
         if (uVar5 + 0x7fe7fff1 < 2) goto LAB_00101eed;
         goto LAB_00101ee8;
      }

      if (0x80180000 < uVar4) {
         if (uVar4 == 0x80220000) goto LAB_00102138;
         if (0x80220000 < uVar4) {
            if (uVar4 == 0x802d0000) {
               LAB_001020e8:puVar3 = local_40 + ( local_40[1] + 1 );
               goto LAB_00101eed;
            }

            if (0x802d0000 < uVar4) {
               if (uVar4 == 0x80390000) goto LAB_00101ee8;
               if (uVar4 < 0x80390001) {
                  if (uVar4 != 0x80310000) {
                     if (uVar4 < 0x80310001) {
                        if (uVar4 != 0x802f0000) {
                           uVar5 = uVar4 + 0x7fd20000 & 0xfffd0000;
                           joined_r0x001022d8:if (uVar5 == 0) goto LAB_00101ee8;
                           goto LAB_00101f80;
                        }

                     }
 else if (uVar4 != 0x80330000) {
                        if (uVar4 < 0x80330001) {
                           if (uVar4 != 0x80320000) goto LAB_00101f80;
                        }
 else if (uVar4 != 0x80360000) {
                           if (0x80360000 < uVar4) {
                              uVar5 = uVar4 + 0x7fc90000 & 0xfffe0000;
                              goto joined_r0x001022d8;
                           }

                           if (( uVar5 & 0xfffe0000 ) != 0x80340000) goto LAB_00101f80;
                        }

                        goto LAB_00101ee8;
                     }

                  }

                  goto LAB_001020e8;
               }

               if (uVar4 == 0x803e0000) {
                  LAB_001021b2:puVar3 = local_40 + 2;
                  goto LAB_00101eed;
               }

               if (uVar4 < 0x803e0001) {
                  if (uVar4 == 0x803d0000) goto LAB_001021b2;
                  if (( uVar4 < 0x803d0001 ) && ( ( ( uVar5 & 0xfffe0000 ) == 0x803a0000 || ( uVar4 == 0x803c0000 ) ) )) goto LAB_00101ee8;
               }
 else if (uVar4 == 0x803f0000) {
                  puVar3 = local_40 + 2;
                  goto LAB_00101eed;
               }

               goto LAB_00101f80;
            }

            if (uVar4 != 0x80260000) {
               if (uVar4 < 0x80260001) {
                  if (uVar4 == 0x80250000) goto LAB_0010216c;
                  if (( uVar4 < 0x80250001 ) && ( ( uVar4 + 0x7fdd0000 & 0xfffe0000 ) == 0 )) {
                     LAB_00102138:iVar6 = iVar6 + 1;
                     puVar3 = local_40;
                     goto LAB_00101eed;
                  }

               }
 else {
                  if (uVar4 == 0x80280000) goto LAB_0010216c;
                  if (uVar4 < 0x80280001) {
                     if (uVar4 == 0x80270000) goto LAB_00102138;
                  }
 else {
                     if (uVar4 == 0x80290000) goto LAB_001020e8;
                     if (( 0x8028ffff < uVar4 ) && ( ( ( uVar5 & 0xfffe0000 ) == 0x802a0000 || ( uVar4 == 0x802c0000 ) ) )) goto LAB_00101ee8;
                  }

               }

               goto LAB_00101f80;
            }

            LAB_0010216c:iVar2 = set_lookbehind_lengths(&local_40, &local_34, param_5, param_3, param_4);
            uVar1 = local_34;
            if (iVar2 != 0) goto LAB_00101ee8;
            goto LAB_00101f85;
         }

         if (uVar4 == 0x801d0000) {
            LAB_0010211e:puVar3 = local_40 + 1;
            goto LAB_00101eed;
         }

         if (uVar4 < 0x801d0001) {
            if (uVar4 != 0x80190000) {
               if (0x8018ffff < uVar4) {
                  if (uVar4 == 0x801b0000) goto LAB_001021b2;
                  if (uVar4 == 0x801c0000) goto LAB_0010211e;
                  if (uVar4 == 0x801a0000) goto LAB_00102138;
               }

               goto LAB_00101f80;
            }

            iVar6 = iVar6 + -1;
            if (-1 < iVar6) goto LAB_00101ee8;
            if (param_2 != (undefined8*)0x0) {
               *param_2 = local_40;
            }

            goto LAB_00102228;
         }

         puVar3 = local_40 + 2;
         if (uVar4 == 0x80200000) goto LAB_00101eed;
         if (uVar4 < 0x80200001) {
            if (( uVar5 & 0xfffe0000 ) == 0x801e0000) goto LAB_00101ee8;
         }
 else if (uVar4 == 0x80210000) goto LAB_0010206a;
         LAB_00101f80:uVar1 = 0xaa;
         goto LAB_00101f85;
      }

      if (uVar4 == 0x800c0000) goto LAB_00101ee8;
      if (uVar4 < 0x800c0001) {
         if (uVar4 != 0x80060000) {
            if (uVar4 < 0x80060001) {
               if (uVar4 == 0x80040000) goto LAB_0010206a;
               if (uVar4 < 0x80040001) {
                  if (uVar4 == 0x80020000) goto LAB_00102138;
                  if (( uVar5 & 0xfffd0000 ) == 0x80010000) goto LAB_00101ee8;
               }
 else if (uVar4 == 0x80050000) goto LAB_0010211e;
            }
 else {
               puVar3 = local_40 + 5;
               if (uVar4 == 0x80070000) goto LAB_00101eed;
               if (0x8006ffff < uVar4) {
                  if (uVar4 == 0x80080000) goto LAB_00102138;
                  if (( 0x8007ffff < uVar4 ) && ( ( uVar4 == 0x800a0000 || ( ( uVar5 & 0xfffd0000 ) == 0x80090000 ) ) )) goto LAB_00101ee8;
               }

            }

            goto LAB_00101f80;
         }

         LAB_0010206a:puVar3 = local_40 + 3;
      }
 else {
         if (uVar4 != 0x80120000) {
            if (uVar4 < 0x80120001) {
               if (uVar4 != 0x80100000) {
                  if (uVar4 < 0x80100001) {
                     if (uVar4 == 0x800f0000) goto LAB_00102138;
                     if (uVar4 < 0x800f0001) {
                        uVar5 = uVar4 + 0x7ff30000 & 0xfffe0000;
                        goto joined_r0x001022d8;
                     }

                  }
 else if (uVar4 == 0x80110000) {
                     puVar3 = local_40 + 3;
                     iVar6 = iVar6 + 1;
                     goto LAB_00101eed;
                  }

                  goto LAB_00101f80;
               }

               puVar3 = local_40 + 2;
               iVar6 = iVar6 + 1;
               goto LAB_00101eed;
            }

            if (uVar4 != 0x80150000) {
               if (uVar4 < 0x80150001) {
                  if (( uVar4 + 0x7fed0000 & 0xfffe0000 ) == 0) {
                     puVar3 = local_40 + 3;
                     iVar6 = iVar6 + 1;
                     goto LAB_00101eed;
                  }

               }
 else if (( uVar5 & 0xfffe0000 ) == 0x80160000) goto LAB_00101ee8;
               goto LAB_00101f80;
            }

         }

         puVar3 = local_40 + 3;
         iVar6 = iVar6 + 1;
      }

   }
 else {
      LAB_00101ee8:puVar3 = local_40;
   }

   LAB_00101eed:uVar5 = puVar3[1];
   local_40 = puVar3 + 1;
   if (uVar5 == 0x80000000) goto LAB_00102228;
   goto LAB_00101f04;
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
      LAB_001023ea:uVar6 = 0x7fffffff;
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
            goto LAB_00102479;
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
            goto LAB_00102479;
         }

         goto LAB_001023ea;
      }

   }

   uVar5 = 0xffffffff;
   LAB_00102479:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
uint add_to_class_internal(long param_1, undefined8 *param_2, uint param_3, uint param_4, long param_5, uint param_6, uint param_7) {
   byte *pbVar1;
   uint *puVar2;
   byte bVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   uint uVar7;
   undefined *puVar8;
   ulong uVar9;
   ulong uVar10;
   undefined4 *puVar11;
   uint *puVar12;
   uint uVar13;
   undefined4 *puVar14;
   ulong uVar15;
   uint uVar16;
   uint local_60;
   uint local_5c;
   uVar9 = (ulong)param_6;
   uVar4 = 0xff;
   if (param_7 < 0x100) {
      uVar4 = param_7;
   }

   local_60 = param_3 & 8;
   local_5c = param_3;
   if (( param_3 & 8 ) == 0) {
      LAB_00102706:if (*(uint*)( param_5 + 0x100 ) < (uint)uVar9) {
         LAB_00102804:if (param_7 < *(uint*)( param_5 + 0x104 )) {
            return local_60;
         }

      }

      param_6 = (uint)uVar9;
      if (param_6 <= uVar4) {
         LAB_00102718:param_6 = (uint)uVar9;
         do {
            uVar7 = (uint)uVar9;
            pbVar1 = (byte*)( param_1 + ( uVar9 >> 3 ) );
            *pbVar1 = *pbVar1 | ( byte )(1 << ( (byte)uVar9 & 7 ));
            uVar9 = ( ulong )(uVar7 + 1);
         }
 while ( uVar7 != uVar4 );
         local_60 = ( uVar4 + 1 + local_60 ) - param_6;
      }

      LAB_0010274c:uVar4 = 0x100;
      if (0xff < param_6) {
         uVar4 = param_6;
      }

      if (param_7 < uVar4) {
         return local_60;
      }

      puVar11 = (undefined4*)*param_2;
      if (( local_5c & 0x80000 ) != 0) {
         puVar14 = puVar11 + 1;
         if (uVar4 < param_7) {
            *puVar11 = 2;
            uVar4 = _pcre2_ord2utf_32(uVar4, puVar14);
            uVar7 = _pcre2_ord2utf_32(param_7, puVar14 + uVar4);
            puVar14 = puVar14 + uVar4 + uVar7;
         }
 else {
            *puVar11 = 1;
            uVar4 = _pcre2_ord2utf_32(uVar4, puVar14);
            puVar14 = puVar14 + uVar4;
         }

         goto LAB_00102791;
      }

   }
 else {
      local_60 = param_3 & 0xa0000;
      if (( param_3 & 0xa0000 ) != 0) {
         local_5c = param_3 & 0xfffffff7;
         local_60 = 0;
         LAB_0010259d:do {
            if (( param_7 < param_6 ) || ( uVar7 = 0x10ffff < param_6 )) goto LAB_00102706;
            while (true) {
               bVar3 = ( &DAT_0011002b )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar7 >> 7 ) * 2 ) * 0x80 + ( uVar7 & 0x7f ) ) * 2 ) * 0xc];
               if (( bVar3 != 0 ) && ( ( ( param_4 & 0x80 ) == 0 || ( 0x7f < *(uint*)( &_pcre2_ucd_caseless_sets_32 + (ulong)bVar3 * 4 ) ) ) )) {
                  puVar12 = (uint*)( &_pcre2_ucd_caseless_sets_32 + (ulong)bVar3 * 4 );
                  param_6 = uVar7 + 1;
                  iVar5 = 0;
                  uVar16 = *puVar12;
                  if (uVar16 != 0xffffffff) {
                     do {
                        if (uVar7 == uVar16) {
                           uVar16 = puVar12[1];
                           puVar12 = puVar12 + 1;
                        }
 else {
                           uVar15 = 0;
                           do {
                              uVar10 = uVar15;
                              uVar13 = (int)uVar10 + 1;
                              puVar2 = puVar12 + uVar13;
                              uVar15 = (ulong)uVar13;
                           }
 while ( *puVar2 == uVar13 + uVar16 );
                           iVar6 = add_to_class_internal(param_1, param_2, local_5c, param_4, param_5, uVar16, puVar12[uVar10]);
                           uVar16 = *puVar2;
                           iVar5 = iVar5 + iVar6;
                           puVar12 = puVar2;
                        }

                     }
 while ( uVar16 != 0xffffffff );
                     local_60 = local_60 + iVar5;
                  }

                  goto LAB_0010259d;
               }

               uVar16 = *(int*)( &DAT_0011002c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar7 >> 7 ) * 2 ) * 0x80 + ( uVar7 & 0x7f ) ) * 2 ) * 0xc ) + uVar7;
               if (uVar7 != uVar16) break;
               uVar7 = uVar7 + 1;
               if (( param_7 < uVar7 ) || ( uVar7 == 0x110000 )) goto LAB_00102706;
            }
;
            uVar13 = uVar16;
            param_6 = uVar7;
            if (param_7 < uVar7) goto LAB_00102706;
            while (uVar7 = uVar13,param_6 = param_6 + 1,param_6 <= param_7) {
               puVar8 = &_pcre2_dummy_ucd_record_32;
               if (param_6 < 0x110000) {
                  puVar8 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)param_6 >> 7 ) * 2 ) * 0x80 + ( param_6 & 0x7f ) ) * 2 ) * 0xc;
               }

               if (( puVar8[3] != '\0' ) || ( uVar13 = uVar7 + 1 * (int*)( puVar8 + 4 ) + param_6 != uVar7 + 1 )) break;
            }
;
            if (( uVar16 < *(uint*)( param_5 + 0x100 ) ) || ( *(uint*)( param_5 + 0x104 ) < uVar7 )) {
               if (( uVar16 < (uint)uVar9 ) && ( (uint)uVar9 - 1 <= uVar7 )) {
                  uVar9 = (ulong)uVar16;
               }
 else if (( param_7 < uVar7 ) && ( uVar16 <= param_7 + 1 )) {
                  uVar16 = 0xff;
                  if (uVar7 < 0x100) {
                     uVar16 = uVar7;
                  }

                  param_7 = uVar7;
                  if (uVar4 < uVar7) {
                     uVar4 = uVar16;
                  }

               }
 else {
                  iVar5 = add_to_class_internal(param_1, param_2, local_5c, param_4, param_5, uVar16, uVar7);
                  local_60 = local_60 + iVar5;
               }

            }

         }
 while ( true );
      }

      uVar15 = (ulong)param_6;
      if (param_6 <= uVar4) {
         do {
            bVar3 = *(byte*)( *(long*)( param_5 + 0x10 ) + uVar15 );
            uVar15 = uVar15 + 1;
            pbVar1 = (byte*)( param_1 + ( ulong )(bVar3 >> 3) );
            *pbVar1 = *pbVar1 | ( byte )(1 << ( bVar3 & 7 ));
         }
 while ( (uint)uVar15 <= uVar4 );
         local_60 = ( 1 - param_6 ) + uVar4;
         if (*(uint*)( param_5 + 0x100 ) < param_6) goto LAB_00102804;
         goto LAB_00102718;
      }

      if (*(uint*)( param_5 + 0x100 ) < param_6) {
         if (param_7 < *(uint*)( param_5 + 0x104 )) {
            return local_60;
         }

         goto LAB_0010274c;
      }

      uVar4 = 0x100;
      if (0xff < param_6) {
         uVar4 = param_6;
      }

      if (param_7 < uVar4) {
         return local_60;
      }

      puVar11 = (undefined4*)*param_2;
   }

   if (uVar4 < param_7) {
      *puVar11 = 2;
      puVar14 = puVar11 + 3;
      puVar11[1] = uVar4;
      puVar11[2] = param_7;
   }
 else {
      *puVar11 = 1;
      puVar14 = puVar11 + 2;
      puVar11[1] = uVar4;
   }

   LAB_00102791:*param_2 = puVar14;
   return local_60;
}
undefined8 find_dupname_details_constprop_0(long param_1, uint param_2, uint *param_3, int *param_4, undefined4 *param_5, long param_6) {
   ushort uVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   uint uVar7;
   uint *puVar8;
   puVar8 = *(uint**)( param_6 + 0x48 );
   if (*(short*)( param_6 + 0xb0 ) != 0) {
      uVar6 = (ulong)param_2;
      uVar7 = 0;
      do {
         iVar3 = _pcre2_strncmp_32(param_1, puVar8 + 1, uVar6);
         if (( iVar3 == 0 ) && ( puVar8[param_2 + 1] == 0 )) {
            uVar1 = *(ushort*)( param_6 + 0xb0 );
            if (uVar7 < uVar1) {
               *param_3 = uVar7;
               iVar3 = 0;
               goto LAB_00102b03;
            }

            break;
         }

         uVar7 = uVar7 + 1;
         puVar8 = puVar8 + *(ushort*)( param_6 + 0xb2 );
      }
 while ( uVar7 < *(ushort*)( param_6 + 0xb0 ) );
   }

   *param_5 = 0x99;
   *(long*)( param_6 + 0xa8 ) = param_1 - *(long*)( param_6 + 0x38 ) >> 2;
   return 0;
   LAB_00102b03:uVar2 = *puVar8;
   iVar3 = iVar3 + 1;
   uVar5 = 1 << ( (byte)uVar2 & 0x1f );
   if (0x1f < uVar2) {
      uVar5 = 1;
   }

   *(uint*)( param_6 + 0xf4 ) = *(uint*)( param_6 + 0xf4 ) | uVar5;
   if (*(uint*)( param_6 + 0xf0 ) < uVar2) {
      *(uint*)( param_6 + 0xf0 ) = uVar2;
   }

   if ((uint)uVar1 <= iVar3 + uVar7) {
      LAB_00102b32:*param_4 = iVar3;
      return 1;
   }

   puVar8 = puVar8 + *(ushort*)( param_6 + 0xb2 );
   iVar4 = _pcre2_strncmp_32(param_1, puVar8 + 1, uVar6);
   if (( iVar4 != 0 ) || ( puVar8[uVar6 + 1] != 0 )) goto LAB_00102b32;
   uVar1 = *(ushort*)( param_6 + 0xb0 );
   goto LAB_00102b03;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 get_ucp_constprop_0_isra_0(ulong *param_1, undefined4 *param_2, short *param_3, undefined2 *param_4, undefined4 *param_5, long param_6, uint *param_7) {
   long lVar1;
   short sVar2;
   uint *puVar3;
   short sVar4;
   int iVar5;
   __int32_t **pp_Var6;
   ushort **ppuVar7;
   undefined8 uVar8;
   uint uVar9;
   ulong uVar10;
   uint uVar11;
   uint *puVar12;
   ulong uVar13;
   ulong uVar14;
   long in_FS_OFFSET;
   long local_140;
   uint *local_138;
   uint *local_130;
   undefined8 local_128;
   undefined8 uStack_120;
   uint local_108[4];
   undefined1 local_f8[184];
   long local_40;
   puVar3 = (uint*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar12 = puVar3;
   if (puVar3 < param_7) {
      uVar9 = *puVar3;
      puVar12 = puVar3 + 1;
      *param_2 = 0;
      if (uVar9 == 0x7b) {
         if (puVar12 < param_7) {
            if (puVar3[1] != 0x5e) {
               LAB_00102cbb:local_138 = (uint*)0x0;
               local_140 = 0;
               local_130 = local_108;
               LAB_00102cd7:uVar9 = *puVar12;
               do {
                  puVar12 = puVar12 + 1;
                  if (( uVar9 != 0x5f ) && ( uVar9 != 0x2d )) {
                     if (0xff < uVar9) {
                        uVar11 = uVar9;
                        if (0x17f < uVar9 + 0x80) goto LAB_00102de2;
                        goto LAB_00102db1;
                     }

                     ppuVar7 = __ctype_b_loc();
                     if (( *(byte*)( (long)*ppuVar7 + (ulong)uVar9 * 2 + 1 ) & 0x20 ) == 0) goto LAB_00102da0;
                  }

                  if (param_7 <= puVar12) {
                     *param_5 = 0x92;
                     *param_1 = (ulong)puVar12;
                     goto LAB_00102c81;
                  }

                  uVar9 = *puVar12;
               }
 while ( true );
            }

            puVar12 = puVar3 + 2;
            *param_2 = 1;
            if (puVar12 < param_7) goto LAB_00102cbb;
         }

      }
 else if (( uVar9 < 0x100 ) && ( ( *(byte*)( param_6 + (ulong)uVar9 ) & 2 ) != 0 )) {
         pp_Var6 = __ctype_tolower_loc();
         local_108[0] = ( *pp_Var6 )[uVar9];
         local_108[1] = 0;
         *param_1 = (ulong)puVar12;
         LAB_00102bed:local_130._0_2_ = 0xff;
         local_138 = (uint*)0x0;
         LAB_00102c00:uVar13 = 0;
         uVar10 = __pcre2_utt_size_32;
         if (__pcre2_utt_size_32 != 0) {
            do {
               uVar14 = uVar10 + uVar13 >> 1;
               lVar1 = ( ( uVar10 + uVar13 & 0xfffffffffffffffe ) + uVar14 ) * 2;
               iVar5 = _pcre2_strcmp_c8_32(local_108, &_pcre2_utt_names_32 + *(ushort*)( &_pcre2_utt_32 + lVar1 ));
               if (iVar5 == 0) {
                  *param_4 = *(undefined2*)( &DAT_00110064 + lVar1 );
                  sVar2 = *(short*)( &DAT_00110062 + lVar1 );
                  sVar4 = sVar2;
                  if (( ( ( local_138 == (uint*)0x0 ) || ( (short)local_130 == 0xff ) ) || ( sVar2 == 4 ) ) || ( sVar4 = sVar2 == 5 )) {
                     *param_3 = sVar4;
                     uVar8 = 1;
                     goto LAB_00102c83;
                  }

                  break;
               }

               if (0 < iVar5) {
                  uVar13 = uVar14 + 1;
                  uVar14 = uVar10;
               }

               uVar10 = uVar14;
            }
 while ( uVar13 < uVar14 );
         }

         LAB_00102d40:*param_5 = 0x93;
         goto LAB_00102c81;
      }

   }

   LAB_00102c78:*param_5 = 0x92;
   *param_1 = (ulong)puVar12;
   LAB_00102c81:uVar8 = 0;
   LAB_00102c83:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
   LAB_00102da0:if (uVar9 == 0) goto LAB_00102c78;
   if (uVar9 == 0x7d) {
      *param_1 = (ulong)puVar12;
      local_108[local_140] = 0;
      if (local_138 == (uint*)0x0) goto LAB_00102bed;
      *local_138 = 0;
      iVar5 = _pcre2_strcmp_c8_32(local_108, "bidiclass");
      if (( iVar5 == 0 ) || ( iVar5 = iVar5 == 0 )) {
         local_128 = __LC2;
         uStack_120 = _UNK_0010ee78;
         _pcre2_memmove32(local_f8, local_138 + 1, (long)local_108 + ( local_140 * 4 - (long)local_138 ));
         _pcre2_memmove32(local_108, &local_128, 0x10);
         local_130._0_2_ = 0xff;
         goto LAB_00102c00;
      }

      iVar5 = _pcre2_strcmp_c8_32(local_108, "script");
      if (( iVar5 == 0 ) || ( iVar5 = iVar5 == 0 )) {
         local_130._0_2_ = 4;
      }
 else {
         iVar5 = _pcre2_strcmp_c8_32(local_108, "scriptextensions");
         if (( iVar5 != 0 ) && ( iVar5 = iVar5 != 0 )) goto LAB_00102d40;
         local_130._0_2_ = 5;
      }

      _pcre2_memmove32(local_108, local_138 + 1, (long)local_108 + ( local_140 * 4 - (long)local_138 ));
      goto LAB_00102c00;
   }

   LAB_00102db1:pp_Var6 = __ctype_tolower_loc();
   uVar11 = ( *pp_Var6 )[(int)uVar9];
   if (( uVar9 == 0x3a || uVar9 == 0x3d ) && ( local_138 == (uint*)0x0 )) {
      local_138 = local_130;
   }

   LAB_00102de2:local_140 = local_140 + 1;
   *local_130 = uVar11;
   if (( local_140 == 0x31 ) || ( local_130 = param_7 <= puVar12 )) goto LAB_00102c78;
   goto LAB_00102cd7;
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
uint *find_recurse_isra_0(uint *param_1) {
   uint uVar1;
   uVar1 = *param_1;
   do {
      if (uVar1 == 0) {
         return (uint*)0x0;
      }

      if (uVar1 == 0x75) {
         return param_1;
      }

      if (uVar1 == 0x70) {
         param_1 = param_1 + param_1[1];
      }
 else if (uVar1 == 0x77) {
         param_1 = param_1 + param_1[3];
      }
 else {
         if (uVar1 < 0x61) {
            if (uVar1 < 0x5e) {
               if (0x5a < uVar1) goto LAB_001030b0;
               if (uVar1 < 0x55) goto LAB_00103050;
            }

            if (param_1[1] - 0xf < 2) {
               param_1 = param_1 + 2;
            }

         }
 else if (uVar1 == 0x61) {
            LAB_001030b0:if (param_1[2] - 0xf < 2) {
               param_1 = param_1 + 2;
            }

         }
 else if (( uVar1 - 0x9a < 9 ) && ( ( 0x155UL >> ( ( ulong )(uVar1 - 0x9a) & 0x3f ) & 1 ) != 0 )) {
            param_1 = param_1 + param_1[1];
         }

         LAB_00103050:param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_32)[uVar1];
      }

      uVar1 = *param_1;
   }
 while ( true );
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
   byte bVar1;
   ushort uVar2;
   ushort uVar3;
   short sVar4;
   uint *puVar5;
   code *pcVar6;
   byte *pbVar7;
   bool bVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   bool bVar12;
   bool bVar13;
   undefined8 uVar14;
   int iVar15;
   undefined4 uVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   uint uVar21;
   ulong *puVar22;
   ulong *puVar23;
   uint *puVar24;
   long *******ppppppplVar25;
   void *pvVar26;
   undefined *puVar27;
   ulong uVar28;
   byte *pbVar29;
   uint uVar30;
   int iVar31;
   uint uVar32;
   uint uVar33;
   byte *pbVar34;
   uint uVar35;
   ulong uVar36;
   long lVar37;
   uint uVar38;
   size_t __n;
   uint *puVar39;
   undefined8 uVar40;
   uint *puVar41;
   uint *puVar42;
   uint *puVar43;
   int iVar44;
   undefined8 *puVar45;
   long in_FS_OFFSET;
   bool bVar46;
   bool bVar47;
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 local_278[16];
   uint local_25c;
   uint *local_250;
   int local_248;
   uint local_240;
   uint local_23c;
   uint local_228;
   uint local_224;
   uint local_220;
   uint local_21c;
   long *******local_218;
   uint local_210;
   uint local_20c;
   uint *local_208;
   uint local_200;
   uint local_1fc;
   long local_1f0;
   uint local_1e8;
   uint local_1e4;
   uint local_1d8;
   uint local_1c4;
   long local_1c0;
   int local_1b8;
   uint local_190;
   uint *local_188;
   uint local_170;
   uint local_16c;
   uint local_168;
   uint local_164;
   uint local_160;
   uint *local_158;
   uint local_104;
   uint local_100;
   uint local_fc;
   ulong local_f8;
   uint *local_f0;
   ulong local_e8;
   uint *local_e0;
   uint *local_d8;
   uint local_d0;
   undefined4 uStack_cc;
   long *******local_c8;
   undefined4 local_c0;
   undefined1 local_b8[16];
   uint local_a8[8];
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
   local_218 = param_12;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = (uint*)*param_3;
   puVar39 = (uint*)*param_4;
   pcVar6 = *(code**)( *param_13 + 0x18 );
   auVar48._8_8_ = puVar5;
   auVar48._0_8_ = param_11;
   if (( pcVar6 == (code*)0x0 ) || ( iVar15 = ( *pcVar6 )(*(undefined2*)( (long)param_13 + 0xb4 ), *(undefined8*)( *param_13 + 0x20 )) ),local_278 = auVar48,iVar15 == 0) {
      local_f8 = ( ulong )(param_6 + 4);
      uVar20 = *puVar5;
      bVar8 = uVar20 - 0x81 < 2 || uVar20 == 0x84;
      if (bVar8) {
         local_170 = *puVar39;
         uVar36 = (ulong)(ushort)puVar39[-1];
         puVar39 = puVar39 + 2;
      }
 else if (uVar20 == 0x89) {
         uVar36 = 0;
         local_170 = 0;
         local_c8 = param_12;
         local_c0 = CONCAT22(*(undefined2*)( (long)param_13 + 0xb6 ), (short)puVar5[2]);
         local_218 = (long*******)&local_c8;
      }
 else {
         local_170 = 0;
         uVar36 = 0;
      }

      local_168 = 0xffffffff;
      local_250 = puVar5 + ( param_6 + 2 );
      local_16c = 0xffffffff;
      local_160 = 0;
      local_164 = 0;
      puVar22 = (ulong*)0x0;
      if (param_14 != (long*)0x0) {
         puVar22 = &local_f8;
      }

      puVar5[1] = 0;
      uVar16 = 1;
      local_220 = param_2;
      local_1e8 = param_1;
      local_188 = puVar5;
      local_b8 = auVar48;
      do {
         uVar20 = (uint)uVar36;
         if (( uVar20 != 0 ) && ( bVar8 )) {
            if (( local_170 == 0xffff ) || ( uVar20 == local_170 )) {
               local_f8 = local_f8 + 2;
               *local_250 = 0x7d;
               local_250[1] = uVar20;
               local_250 = local_250 + 2;
            }
 else {
               local_f8 = local_f8 + 3;
               *local_250 = 0x7e;
               local_250[1] = local_170;
               local_250[2] = uVar20;
               local_250 = local_250 + 3;
            }

         }

         pbVar7 = (byte*)param_13[3];
         local_1d8 = local_1e8;
         local_278._0_8_ = local_250;
         uVar17 = local_1e8 & 0x80000;
         local_240 = local_1e8;
         bVar46 = ( local_1e8 & 0x40000 ) == 0;
         local_190 = (uint)!bVar46;
         local_e8 = 0;
         uVar19 = 0;
         local_228 = 0;
         local_1c4 = (uint)bVar46;
         local_20c = 0xffffffff;
         local_1e4 = local_1e8 >> 3 & 1;
         bVar46 = false;
         local_1f0 = 0;
         uVar20 = 0xffffffff;
         local_224 = 0xffffffff;
         local_23c = 0xffffffff;
         local_200 = 0;
         local_1fc = 0;
         local_21c = 0;
         local_210 = 0;
         iVar15 = 0;
         local_25c = 0xffffffff;
         puVar41 = local_250;
         puVar24 = (uint*)0x0;
         LAB_0010378a:uVar14 = _LC13;
         uVar40 = _LC8;
         uVar35 = *puVar39;
         uVar32 = uVar35 & 0xffff0000;
         local_f0 = puVar39;
         if (param_14 == (long*)0x0) {
            local_208 = puVar41;
            if (0xb0000 < uVar32 + 0x7fcc0000) goto LAB_00103595;
            LAB_001037e1:if (uVar32 == 0x803a0000) {
               LAB_00104f38:uVar35 = 1;
               uVar18 = 2;
               goto LAB_00103830;
            }

            if (uVar32 < 0x803a0001) {
               if (uVar32 != 0x80370000) {
                  if (uVar32 < 0x80370001) {
                     if (( ( uVar35 & 0xfffe0000 ) == 0x80340000 ) || ( uVar32 == 0x80360000 )) {
                        uVar35 = 0x10000;
                        uVar18 = 2;
                        goto LAB_00103830;
                     }

                  }
 else if (( uVar35 & 0xfffe0000 ) == 0x80380000) goto LAB_001046eb;
                  goto LAB_00103ee8;
               }

               LAB_001046eb:uVar18 = 2;
               uVar35 = 0x10000;
               uVar36 = 1;
               if (uVar19 != 0) goto LAB_00104469;
               LAB_00103858:if (uVar32 == 0x803b0000) goto LAB_00104480;
               LAB_00103865:uVar33 = local_1c4;
               if (uVar32 < 0x803b0001) {
                  if (uVar32 == 0x80380000) goto LAB_00104480;
                  if (uVar32 < 0x80380001) {
                     if (uVar32 == 0x80350000) goto LAB_00104480;
                     if (uVar32 == 0x80360000) goto LAB_0010464d;
                  }
 else if (uVar32 == 0x80390000) {
                     LAB_0010464d:bVar47 = false;
                     goto LAB_001038b0;
                  }

                  bVar47 = false;
                  uVar33 = local_190;
               }
 else {
                  if (uVar32 == 0x803e0000) goto LAB_00104480;
                  if (uVar32 == 0x803f0000) goto LAB_0010464d;
                  if (uVar32 != 0x803c0000) {
                     uVar33 = local_190;
                  }

                  bVar47 = false;
               }

            }
 else {
               if (uVar32 != 0x803d0000) {
                  if (uVar32 < 0x803d0001) {
                     if (( uVar32 + 0x7fc50000 & 0xfffe0000 ) != 0) goto LAB_00103ee8;
                     goto LAB_00104f38;
                  }

                  joined_r0x00105c30:if (( uVar35 & 0xfffe0000 ) != 0x803e0000) goto LAB_00103ee8;
               }

               uVar33 = puVar39[1];
               uVar36 = (ulong)uVar33;
               uVar35 = puVar39[2];
               local_f0 = puVar39 + 2;
               uVar18 = ( uint )(uVar33 != uVar35) * 2;
               if (uVar33 == 0) {
                  LAB_00103830:uVar19 = 0;
                  uVar36 = 0;
                  local_23c = local_20c;
                  local_21c = local_1fc;
                  local_210 = local_200;
                  local_224 = uVar20;
                  goto LAB_00103858;
               }

               if (uVar19 == 0) {
                  if (uVar33 != 0) {
                     uVar19 = 0;
                     goto LAB_00103858;
                  }

                  goto LAB_00103830;
               }

               LAB_00104469:uVar19 = 1;
               if (uVar32 != 0x803b0000) goto LAB_00103865;
               LAB_00104480:bVar47 = true;
               uVar33 = 0;
            }

            LAB_001038b0:uVar32 = *puVar24;
            uVar21 = (uint)uVar36;
            local_208 = puVar24;
            puVar42 = puVar41;
            local_e0 = puVar24;
            if (uVar32 < 0x21) {
               if (uVar32 < 0x1d) goto switchD_001038df_caseD_76;
               if (( uVar35 == 1 ) && ( uVar21 == 1 )) goto switchD_001038df_caseD_a3;
               iVar31 = *(int*)( chartypeoffset + ( ulong )(uVar32 - 0x1d) * 4 );
               local_a8[0] = puVar41[-1];
               if (( uVar32 < 0x1f ) && ( ( 1 < uVar21 && ( local_224 = *(uint*)( param_13 + 0x23 ) ),local_21c = local_a8[0],uVar32 == 0x1e ) )) {
                  uVar30 = 0xffffffff;
                  uVar38 = 0xffffffff;
                  bVar12 = true;
                  local_224 = local_224 | 1;
               }
 else {
                  uVar30 = 0xffffffff;
                  uVar38 = 0xffffffff;
                  bVar12 = true;
               }

               joined_r0x00104626:puVar42 = puVar24;
               if (uVar35 == 0) goto switchD_001038df_caseD_a3;
               iVar44 = uVar33 + iVar31;
               if (uVar21 == 0) {
                  if (uVar35 == 0x10000) {
                     puVar41 = puVar24 + 1;
                     *puVar24 = iVar44 + 0x21;
                  }
 else if (uVar35 == 1) {
                     puVar41 = puVar24 + 1;
                     *puVar24 = iVar44 + 0x25;
                  }
 else {
                     puVar24[1] = uVar35;
                     *puVar24 = iVar44 + 0x27;
                     puVar41 = puVar24 + 2;
                  }

                  LAB_00103961:if (bVar12) {
                     LAB_00106705:*puVar41 = local_a8[0];
                     puVar42 = puVar41 + 1;
                     goto LAB_00103988;
                  }

                  *puVar41 = uVar32;
                  if ((int)uVar38 < 0) {
                     puVar42 = puVar41 + 1;
                     goto LAB_00103988;
                  }

               }
 else {
                  if (uVar21 == 1) {
                     if (uVar35 == 0x10000) {
                        puVar41 = puVar24 + 1;
                        *puVar24 = iVar44 + 0x23;
                     }
 else {
                        puVar42 = puVar41;
                        if (uVar35 == 1) goto switchD_001038df_caseD_a3;
                        *puVar41 = iVar44 + 0x27;
                        puVar41[1] = uVar35 - 1;
                        puVar41 = puVar41 + 2;
                     }

                     goto LAB_00103961;
                  }

                  puVar24[1] = uVar21;
                  *puVar24 = iVar31 + 0x29;
                  puVar41 = puVar24 + 2;
                  if (uVar21 == uVar35) goto LAB_00103961;
                  if (bVar12) {
                     puVar24[2] = local_a8[0];
                     if (uVar35 != 0x10000) goto LAB_00106c46;
                     puVar41 = puVar24 + 4;
                     puVar24[3] = iVar44 + 0x21;
                     goto LAB_00106705;
                  }

                  puVar24[2] = uVar32;
                  if ((int)uVar38 < 0) {
                     if (uVar35 == 0x10000) {
                        puVar42 = puVar24 + 5;
                        *(ulong*)( puVar24 + 3 ) = CONCAT44(uVar32, iVar44 + 0x21);
                        goto LAB_00103988;
                     }

                     LAB_00106c46:puVar39 = puVar24 + 3;
                     LAB_00105f88:if (uVar35 - uVar21 == 1) {
                        puVar41 = puVar39 + 1;
                        *puVar39 = iVar44 + 0x25;
                     }
 else {
                        puVar39[1] = uVar35 - uVar21;
                        puVar41 = puVar39 + 2;
                        *puVar39 = iVar44 + 0x27;
                     }

                     goto LAB_00103961;
                  }

                  puVar24[3] = uVar38;
                  puVar39 = puVar24 + 5;
                  puVar24[4] = uVar30;
                  if (uVar35 != 0x10000) goto LAB_00105f88;
                  puVar41 = puVar24 + 6;
                  *(ulong*)( puVar24 + 5 ) = CONCAT44(uVar32, iVar44 + 0x21);
               }

               puVar41[1] = uVar38;
               puVar42 = puVar41 + 3;
               puVar41[2] = uVar30;
               LAB_00103988:puVar43 = puVar42;
               if (!bVar47) goto switchD_001038df_caseD_a3;
               LAB_00103994:uVar35 = *puVar24;
               puVar42 = puVar43;
               if (uVar35 < 0x70) {
                  if (uVar35 < 0x6e) {
                     if (uVar35 < 0x51) {
                        if (( 0x1c < uVar35 ) && ( ( 0x800400200100fU >> ( ( ulong )(uVar35 - 0x1d) & 0x3f ) & 1 ) != 0 )) {
                           local_e0 = puVar24 + ( byte )(&_pcre2_OP_lengths_32)[uVar35];
                        }

                     }
 else if (uVar35 == 0x5d) {
                        local_e0 = puVar24 + (int)( (uint)DAT_0011008d + ( uint )(puVar24[2] - 0xf < 2) * 2 );
                     }

                  }
 else {
                     local_e0 = puVar24 + 9;
                  }

               }
 else if (uVar35 == 0x70) {
                  local_e0 = puVar24 + puVar24[1];
               }

               LAB_001039f0:puVar39 = local_e0;
               iVar31 = (int)( (long)puVar42 - (long)local_e0 >> 2 );
               if (0 < iVar31) {
                  if (( *local_e0 < 0x76 ) && ( opcode_possessify[*local_e0] != 0 )) {
                     *local_e0 = (uint)(byte)opcode_possessify[*local_e0];
                  }
 else {
                     uVar35 = iVar31 + 2;
                     _pcre2_memmove32(local_e0 + 2, local_e0, (long)(int)( (long)puVar42 - (long)local_e0 ));
                     *puVar39 = 0x85;
                     puVar42[2] = 0x79;
                     puVar42[3] = uVar35;
                     puVar39[1] = uVar35;
                     puVar42 = puVar42 + 4;
                  }

               }

            }
 else {
               puVar39 = puVar24;
               switch (uVar32) {
                  case 0x6e:
                  case 0x6f:
                  case 0x70:
                  case 0x71:
                  case 0x72:
                  case 0x73:
                  case 0x74:
            puVar42 = puVar24;
            if (uVar35 != 0) {
              if ((uVar35 != 1) || (puVar42 = puVar41, uVar21 != 1)) {
                if ((uVar21 != 0) || (uVar35 != 0x10000)) {
                  if ((uVar21 != 1) || (uVar35 != 0x10000)) {
                    if ((uVar35 != 1) || (uVar21 != 0)) {
                      puVar41[1] = uVar21;
                      *puVar41 = uVar33 + 0x68;
                      if (uVar35 == 0x10000) {
                        uVar35 = 0;
                      }
                      puVar42 = puVar41 + 3;
                      puVar41[2] = uVar35;
                    }
                    else {
                      puVar42 = puVar41 + 1;
                      *puVar41 = uVar33 + 0x66;
                    }
                  }
                  else {
                    puVar42 = puVar41 + 1;
                    *puVar41 = uVar33 + 100;
                  }
                }
                else {
                  puVar42 = puVar41 + 1;
                  *puVar41 = uVar33 + 0x62;
                }
                goto LAB_00103988;
              }
            }
            break;
                  case 0x75:
            if ((uVar35 == 1) && (uVar21 == 1)) {
              if (!bVar47) break;
              uVar36 = 0;
              if (param_14 != (long *)0x0) goto LAB_00103d3e;
              goto LAB_001039f0;
            }
            if (uVar21 != 0) {
              if ((uVar21 == 1) && (uVar35 == 0x10000)) {
                uVar35 = 0x10000;
                uVar36 = 1;
              }
              else {
                if (uVar21 == uVar35) {
                  uVar36 = (ulong)(uVar21 - 1);
                  if (param_14 != (long *)0x0) goto LAB_00103d3e;
                  if (0 < (int)(uVar21 - 1)) goto LAB_00106946;
LAB_00103da7:
                  puVar41 = puVar42;
                  if (uVar21 == uVar35) goto LAB_00103988;
                }
                else {
                  if (param_14 != (long *)0x0) {
LAB_00103d3e:
                    iVar31 = _pcre2_ckd_smul(&local_d0,uVar36,2);
                    if (iVar31 == 0) {
                      if (CONCAT44(uStack_cc,local_d0) <= 0x7fffffeb - *puVar22) {
                        *puVar22 = *puVar22 + CONCAT44(uStack_cc,local_d0);
                        goto LAB_00103da7;
                      }
                    }
                    goto LAB_00104f80;
                  }
                  if (0 < (int)uVar21) {
LAB_00106946:
                    uVar40 = *(undefined8 *)puVar24;
                    puVar39 = puVar41;
                    if ((uVar36 & 1) == 0) goto LAB_00106965;
                    *(undefined8 *)puVar41 = uVar40;
                    for (puVar39 = puVar41 + 2; puVar39 != puVar41 + (long)(int)uVar36 * 2;
                        puVar39 = puVar39 + 4) {
LAB_00106965:
                      *(undefined8 *)puVar39 = uVar40;
                      *(undefined8 *)(puVar39 + 2) = uVar40;
                    }
                    local_208 = puVar41 + uVar36 * 2 + -2;
                    puVar42 = puVar41 + uVar36 * 2;
                    goto LAB_00103da7;
                  }
                }
                puVar39 = local_208;
                if (uVar35 == 0x10000) {
                  uVar36 = 0;
                }
                else {
                  uVar35 = uVar35 - uVar21;
                  uVar36 = 0;
                }
              }
            }
            _pcre2_memmove32(puVar39 + 2,puVar39,8);
            local_e8 = 6;
            iVar15 = -1;
            *(undefined8 *)puVar39 = _LC11;
            puVar41 = puVar41 + 4;
            *(undefined8 *)(puVar39 + 4) = _LC12;
            local_1c0 = (long)puVar41 - (long)puVar39;
            local_1b8 = (int)(local_1c0 >> 2);
            local_208 = puVar39;
            puVar42 = puVar41;
            if ((int)uVar36 != 0) {
LAB_00105d0d:
              if ((int)uVar36 != 1) goto LAB_00105d16;
              goto LAB_00105d97;
            }
LAB_00103aa5:
            if ((uVar35 < 2) || (uVar35 == 0x10000)) {
              local_208 = puVar39 + 1;
              _pcre2_memmove32(local_208,puVar39,(long)(int)local_1c0);
              puVar42 = puVar41 + 1;
              if (uVar35 == 0) {
                *puVar39 = 0xa7;
                break;
              }
              *puVar39 = uVar33 + 0x97;
              if (uVar35 == 0x10000) {
                uVar32 = 0;
                goto LAB_00105da6;
              }
              local_158 = (uint *)0x0;
            }
            else {
              local_208 = puVar39 + 3;
              _pcre2_memmove32(local_208,puVar39,(long)(int)local_1c0);
              puVar39[1] = 0x87;
              puVar39[2] = 0;
              *puVar39 = uVar33 + 0x97;
              local_158 = puVar39 + 2;
              puVar42 = puVar41 + 3;
              puVar39 = (uint *)0x0;
            }
            iVar31 = uVar35 - 1;
            uVar32 = 0;
LAB_00103b35:
            if (iVar31 == 0x10000) goto LAB_00105da6;
            if (iVar31 != 0) {
              if (param_14 != (long *)0x0) {
                iVar31 = _pcre2_ckd_smul(&local_d0,iVar31,(int)local_e8 + 5);
                if ((iVar31 != 0) || (0x7fffffef - local_f8 < CONCAT44(uStack_cc,local_d0)))
                goto LAB_00104f80;
                local_f8 = (local_f8 - 4) + CONCAT44(uStack_cc,local_d0);
              }
              else if (iVar31 != 0) {
                *puVar42 = uVar33 + 0x97;
                if (iVar31 != 1) {
                  puVar39 = puVar42 + 2;
                  lVar37 = 0;
                  puVar42[1] = 0x87;
                  if (local_158 != (uint *)0x0) goto LAB_00103c48;
                  while( true ) {
                    local_158 = puVar39;
                    puVar42[2] = (uint)lVar37;
                    memcpy(puVar42 + 3,local_208,(long)(int)local_1c0);
                    puVar42 = puVar42 + (long)local_1b8 + 3;
                    iVar31 = iVar31 + -1;
                    *puVar42 = uVar33 + 0x97;
                    if (iVar31 == 1) break;
                    puVar42[1] = 0x87;
                    puVar39 = puVar42 + 2;
LAB_00103c48:
                    lVar37 = (long)puVar39 - (long)local_158 >> 2;
                  }
                }
                pvVar26 = memcpy(puVar42 + 1,local_208,(long)(int)local_1c0);
                puVar42 = (uint *)((long)pvVar26 + (long)local_1b8 * 4);
              }
            }
            if (local_158 != (uint *)0x0) {
              uVar32 = (int)((long)puVar42 - (long)local_158 >> 2) + 1;
              puVar39 = puVar42 + -(long)(int)uVar32;
              uVar35 = puVar39[1];
              puVar41 = puVar42;
              while (puVar42 = puVar41 + 2, uVar35 != 0) {
                puVar42[-1] = uVar32;
                puVar42[-2] = 0x79;
                local_158 = local_158 + -(long)(int)uVar35;
                puVar39[1] = uVar32;
                uVar32 = (int)((long)puVar42 - (long)local_158 >> 2) + 1;
                puVar39 = puVar42 + -(long)(int)uVar32;
                puVar41 = puVar42;
                uVar35 = puVar39[1];
              }
              *puVar41 = 0x79;
              puVar41[1] = uVar32;
              puVar39[1] = uVar32;
            }
            goto LAB_00103988;
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
switchD_001038df_caseD_76:
            if (0x16 < uVar32) goto switchD_001038df_default;
            if ((uVar35 != 1) || (uVar21 != 1)) {
              if (uVar32 - 0xf < 2) {
                uVar38 = puVar24[1];
                uVar30 = puVar24[2];
                bVar12 = false;
                iVar31 = 0x34;
              }
              else {
                uVar30 = 0xffffffff;
                uVar38 = 0xffffffff;
                bVar12 = false;
                iVar31 = 0x34;
              }
              goto joined_r0x00104626;
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
            local_1c0 = (long)puVar41 - (long)puVar24;
            local_1b8 = (int)(local_1c0 >> 2);
            if ((uVar35 == 1) && (uVar21 == 1)) {
              if (!bVar47) break;
              if (uVar32 == 0x8b) {
                if (puVar24[2] == 0x95) {
                  if (puVar24[puVar24[1]] != 0x78) break;
                  goto LAB_0010672c;
                }
              }
              else {
LAB_0010672c:
                uVar36 = 1;
                uVar35 = 1;
              }
LAB_0010673c:
              puVar39 = (uint *)0x0;
              local_158 = (uint *)0x0;
              uVar32 = (uint)uVar36;
              iVar31 = uVar35 - uVar32;
              goto LAB_00103b35;
            }
            if (uVar32 == 0x8b) {
              if ((puVar24[2] == 0x95) && (puVar24[puVar24[1]] != 0x78)) break;
LAB_00103a9d:
              if (uVar21 == 0) goto LAB_00103aa5;
              goto LAB_00105d0d;
            }
            if (0x84 < uVar32) goto LAB_00103a9d;
            if (uVar35 == 0x10000) {
              uVar35 = uVar21 + 1;
              goto LAB_00103a9d;
            }
            if (uVar21 == 0) goto LAB_00103aa5;
            if (uVar21 == 1) goto LAB_0010673c;
LAB_00105d16:
            iVar31 = (int)uVar36;
            if (param_14 == (long *)0x0) {
              if ((0xfffffffd < local_224) && (bVar46)) {
                local_224 = local_23c;
                local_21c = local_210;
              }
              iVar44 = 1;
              puVar39 = puVar42;
              do {
                iVar44 = iVar44 + 1;
                pvVar26 = memcpy(puVar39,local_208,(long)(int)local_1c0);
                puVar39 = (uint *)((long)pvVar26 + (long)local_1b8 * 4);
              } while (iVar44 != iVar31);
              puVar42 = (uint *)((long)puVar42 + (ulong)(iVar31 - 1) * (long)local_1b8 * 4);
            }
            else {
              iVar31 = _pcre2_ckd_smul(&local_d0,iVar31 + -1,local_e8 & 0xffffffff);
              if (iVar31 != 0) goto LAB_00104f80;
              if (0x7fffffeb - *puVar22 < CONCAT44(uStack_cc,local_d0)) goto LAB_00104f80;
              *puVar22 = *puVar22 + CONCAT44(uStack_cc,local_d0);
            }
LAB_00105d97:
            uVar32 = (uint)uVar36;
            puVar39 = (uint *)0x0;
            if (uVar35 != 0x10000) goto LAB_0010673c;
LAB_00105da6:
            uVar35 = puVar42[-1];
            puVar41 = puVar42 + (-2 - (ulong)uVar35);
            uVar21 = *puVar41;
            if (uVar21 == 0x85) {
              if (!bVar47) {
LAB_00105dec:
                puVar42[-2] = uVar33 + 0x7a;
                break;
              }
              *puVar41 = 0x87;
              uVar33 = 0x88;
              if (param_14 == (long *)0x0) {
                if (iVar15 < 0) {
                  *puVar41 = 0x8c;
                }
                uVar33 = *puVar41;
LAB_001070db:
                uVar33 = uVar33 + 1;
              }
              *puVar41 = uVar33;
              puVar42[-2] = 0x7c;
              puVar43 = puVar42;
            }
            else {
              if (uVar21 == 0x86) {
                puVar42[-2] = uVar33 + 0x7a;
                goto LAB_00103988;
              }
              if (param_14 == (long *)0x0) {
                if (iVar15 < 0) {
                  *puVar41 = uVar21 + 5;
                  goto LAB_00105de0;
                }
                if (uVar21 != 0x8b) goto LAB_00105de0;
                if (puVar41[puVar41[1]] != 0x78) {
                  *puVar41 = 0x90;
                }
                if (!bVar47) goto LAB_00105dec;
              }
              else {
LAB_00105de0:
                if (!bVar47) goto LAB_00105dec;
                uVar33 = *puVar41;
                if ((uVar33 != 0x8b) && (uVar33 != 0x90)) goto LAB_001070db;
              }
              lVar37 = -((ulong)uVar35 * -4 + -8);
              _pcre2_memmove32(puVar41 + 2,puVar41,(long)(int)lVar37);
              local_248 = (int)(lVar37 >> 2);
              puVar43 = puVar42 + 4;
              *puVar41 = (uint)(*puVar41 != 0x8b) * 5 + 0x88;
              puVar42[2] = 0x7c;
              puVar42[3] = local_248 + 2U;
              puVar41[1] = local_248 + 2U;
            }
            if (puVar39 != (uint *)0x0) {
              *puVar39 = 0x99;
            }
            puVar42 = puVar43;
            if (1 < uVar32) goto LAB_00103994;
            break;
                  case 0xa3:
            break;
                  default:
switchD_001038df_default:
            *param_5 = 0x6e;
            goto LAB_00103ce4;
               }

            }

            switchD_001038df_caseD_a3:*(uint*)( param_13 + 0x23 ) = *(uint*)( param_13 + 0x23 ) | uVar18;
            puVar39 = local_f0;
            puVar41 = puVar42;
            uVar33 = local_224;
            LAB_0010377e:local_224 = uVar33;
            puVar39 = puVar39 + 1;
            puVar24 = local_208;
            goto LAB_0010378a;
         }

         if ((uint*)( param_13[5] + -400 + param_13[10] * 4 ) < puVar41) {
            *param_5 = ( -(uint)(puVar41 < (uint *)(param_13[5] + param_13[10] * 4)) & 0x22 ) + 0x98;
            goto LAB_00103ce4;
         }

         if (puVar41 < (ulong)local_278._0_8_) {
            puVar41 = (uint*)local_278._0_8_;
         }

         if (uVar32 + 0x7fcc0000 < 0xb0001) {
            local_278._0_8_ = puVar41;
            goto LAB_001037e1;
         }

         uVar36 = (long)puVar41 - (long)local_250 >> 2;
         if (( 0x7fffffeb - *puVar22 < uVar36 ) || ( uVar36 = *puVar22 + uVar36 ),*puVar22 = uVar36,0x40000000 < uVar36) goto LAB_00104f80;
         local_278._0_8_ = local_250;
         local_208 = local_250;
         LAB_00103595:uVar18 = ( local_228 ^ 1 ) & uVar19;
         if (uVar18 == 0) {
            uVar18 = local_25c;
         }

         puVar41 = local_208;
         local_25c = uVar18;
         uVar33 = local_224;
         if (uVar32 == 0x801b0000) {
            local_240 = puVar39[1];
            local_220 = puVar39[2];
            bVar47 = ( local_240 & 0x40000 ) == 0;
            local_190 = (uint)!bVar47;
            puVar39 = puVar39 + 2;
            uVar19 = 0;
            local_1c4 = (uint)bVar47;
            local_1e4 = local_240 >> 3 & 1;
            local_1d8 = local_240;
            goto LAB_0010377e;
         }

         uVar36 = (ulong)uVar35 & 0xffff;
         uVar21 = (uint)uVar36;
         if (0x801b0000 < uVar32) {
            if (uVar32 == 0x802a0000) {
               *(undefined4*)( (long)param_13 + 0x124 ) = 1;
               uVar2 = *(ushort*)( (long)param_13 + 0xb6 );
               ppppppplVar25 = local_218;
               while (puVar24 = puVar41,ppppppplVar25 != (long*******)0x0) {
                  while (true) {
                     puVar41 = puVar24;
                     if (*(ushort*)( (long)ppppppplVar25 + 10 ) < uVar2) goto LAB_001059f0;
                     if (param_14 != (long*)0x0) break;
                     uVar3 = *(ushort*)( ppppppplVar25 + 1 );
                     ppppppplVar25 = (long*******)*ppppppplVar25;
                     *puVar24 = 0xa6;
                     puVar41 = puVar24 + 2;
                     puVar24[1] = (uint)uVar3;
                     puVar24 = puVar41;
                     if (ppppppplVar25 == (long*******)0x0) goto LAB_00104e9c;
                  }
;
                  ppppppplVar25 = (long*******)*ppppppplVar25;
                  *puVar22 = *puVar22 + 5;
               }
;
               LAB_00104e9c:uVar19 = 0xa4;
               if (uVar2 != 0) {
                  LAB_001059f0:uVar19 = 0xa5;
               }

               *puVar41 = uVar19;
               local_228 = 1;
               uVar35 = 0xfffffffe;
               if (local_23c != 0xffffffff) {
                  uVar35 = local_23c;
               }

               uVar19 = 0;
               puVar41 = puVar41 + 1;
               local_23c = uVar35;
            }
 else {
               if (0x802a0000 < uVar32) {
                  if (uVar32 == 0x80330000) {
                     *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x1000;
                     LAB_00104159:local_e0 = local_208 + 1;
                     *local_208 = *(uint*)( verbops + ( ulong )(uVar32 + 0x7fd70000 >> 0x10) * 4 );
                     uVar19 = puVar39[1];
                     puVar41 = local_208 + 2;
                     if ((int)uVar19 < 1) {
                        uVar35 = 0;
                        puVar39 = puVar39 + 1;
                     }
 else {
                        puVar24 = puVar39 + 2;
                        uVar35 = 0;
                        do {
                           while (uVar32 = *puVar24,local_f0 = puVar24,uVar17 != 0) {
                              uVar32 = _pcre2_ord2utf_32(uVar32, local_a8);
                              uVar36 = (ulong)uVar32;
                              if (param_14 == (long*)0x0) goto LAB_0010423d;
                              LAB_00104208:puVar24 = puVar24 + 1;
                              *puVar22 = *puVar22 + uVar36;
                              if (puVar39 + ( ulong )(uVar19 - 1) + 3 == puVar24) goto LAB_00104288;
                           }
;
                           uVar36 = 1;
                           local_a8[0] = uVar32;
                           if (param_14 != (long*)0x0) goto LAB_00104208;
                           LAB_0010423d:puVar24 = puVar24 + 1;
                           memcpy(puVar41, local_a8, ( ulong )(uint)((int)uVar36 * 4));
                           uVar35 = uVar35 + (int)uVar36;
                           puVar41 = puVar41 + uVar36;
                        }
 while ( puVar39 + ( ulong )(uVar19 - 1) + 3 != puVar24 );
                        LAB_00104288:puVar39 = puVar39 + 1 + uVar19;
                     }

                     local_208[1] = uVar35;
                     uVar19 = 0;
                     *puVar41 = 0;
                     puVar41 = puVar41 + 1;
                     goto LAB_0010377e;
                  }

                  if (uVar32 < 0x80330001) {
                     if (uVar32 == 0x802f0000) {
                        LAB_0010414d:*(undefined4*)( param_13 + 0x25 ) = 1;
                        goto LAB_00104159;
                     }

                     if (uVar32 < 0x802f0001) {
                        if (uVar32 == 0x802d0000) goto LAB_00104159;
                        if (uVar32 < 0x802d0001) {
                           if (( uVar32 + 0x7fd50000 & 0xfffe0000 ) == 0) {
                              LAB_001043e9:uVar19 = 0;
                              *local_208 = *(uint*)( verbops + ( ulong )(uVar32 + 0x7fd70000 >> 0x10) * 4 );
                              puVar41 = local_208 + 1;
                              goto LAB_0010377e;
                           }

                        }
 else if (uVar32 == 0x802e0000) {
                           LAB_001043dd:*(undefined4*)( param_13 + 0x25 ) = 1;
                           goto LAB_001043e9;
                        }

                     }
 else {
                        if (uVar32 == 0x80320000) {
                           *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x1000;
                           uVar19 = 0;
                           *local_208 = 0x9f;
                           puVar41 = local_208 + 1;
                           goto LAB_0010377e;
                        }

                        if (uVar32 < 0x80320001) {
                           if (uVar32 == 0x80300000) goto LAB_001043dd;
                           if (uVar32 == 0x80310000) goto LAB_0010414d;
                        }

                     }

                  }
 else {
                     puVar24 = local_208;
                     if (0x803a0000 < uVar32) goto joined_r0x00105c30;
                  }

                  goto LAB_00103ee8;
               }

               if (uVar32 == 0x80250000) {
                  *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                  uVar35 = 0x81;
                  uVar40 = 0;
                  bVar47 = false;
                  uVar32 = 0x81;
               }
 else if (uVar32 < 0x80250001) {
                  if (uVar32 == 0x80220000) {
                     uVar35 = 0x86;
                     uVar40 = 0;
                     bVar47 = true;
                     uVar32 = 0x86;
                  }
 else {
                     if (uVar32 < 0x80220001) {
                        if (uVar32 != 0x80200000) {
                           if (uVar32 == 0x80210000) goto LAB_0010522c;
                           goto LAB_00103ee8;
                        }

                        puVar41 = puVar39 + 2;
                        local_1f0 = CONCAT44(puVar39[1], puVar39[2]);
                        if (uVar21 <= *(uint*)( (long)param_13 + 0xcc )) {
                           LAB_0010547c:*local_208 = 0x75;
                           local_208[1] = (uint)uVar36;
                           *(undefined4*)( (long)param_13 + 300 ) = 1;
                           puVar39 = puVar41;
                           puVar41 = local_208 + 2;
                           if (local_23c == 0xffffffff) {
                              local_20c = 0xfffffffe;
                              uVar19 = 0;
                              bVar46 = false;
                              local_200 = local_210;
                              local_23c = 0xfffffffe;
                           }
 else {
                              local_20c = local_23c;
                              uVar19 = 0;
                              bVar46 = false;
                              local_200 = local_210;
                           }

                           goto LAB_0010377e;
                        }

                        param_13[0x15] = local_1f0;
                        *param_5 = 0x73;
                        local_f0 = puVar41;
                        goto LAB_00103ce4;
                     }

                     if (uVar32 == 0x80230000) {
                        *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                        uVar35 = 0x7f;
                        uVar40 = 0;
                        bVar47 = false;
                        uVar32 = 0x7f;
                     }
 else {
                        if (uVar32 != 0x80240000) goto LAB_00103ee8;
                        if (( puVar39[1] == 0x80190000 ) && ( 0xb0000 < puVar39[2] + 0x7fcc0000 )) {
                           *local_208 = 0xa3;
                           puVar39 = puVar39 + 1;
                           uVar19 = 0;
                           puVar41 = local_208 + 1;
                           goto LAB_0010377e;
                        }

                        *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                        uVar35 = 0x80;
                        uVar40 = 0;
                        bVar47 = false;
                        uVar32 = 0x80;
                     }

                  }

               }
 else {
                  if (uVar32 != 0x80270000) {
                     if (uVar32 < 0x80270001) {
                        if (uVar32 == 0x80260000) {
                           *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                           uVar35 = 0x82;
                           uVar40 = 0;
                           bVar47 = false;
                           uVar32 = 0x82;
                           goto LAB_00103630;
                        }

                     }
 else {
                        if (uVar32 == 0x80280000) {
                           *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                           uVar35 = 0x84;
                           uVar40 = 0;
                           bVar47 = false;
                           uVar32 = 0x84;
                           goto LAB_00103630;
                        }

                        if (uVar32 == 0x80290000) goto LAB_00104159;
                     }

                     goto LAB_00103ee8;
                  }

                  *(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + 1;
                  uVar35 = 0x83;
                  uVar40 = 0;
                  bVar47 = false;
                  uVar32 = 0x83;
               }

               LAB_00103630:local_f0 = puVar39 + 1;
               *(short*)( (long)param_13 + 0xb4 ) = *(short*)( (long)param_13 + 0xb4 ) + 1;
               *local_208 = uVar35;
               uVar18 = *(uint*)( param_13 + 0x23 );
               puVar23 = &local_e8;
               if (param_14 == (long*)0x0) {
                  puVar23 = (ulong*)0x0;
               }

               local_e8 = 0;
               local_e0 = local_208;
               iVar15 = compile_regex(local_240, local_220, &local_e0, &local_f0, param_5, uVar40, &local_100, &local_d0, &local_104, &local_fc, local_b8, local_218, param_13, puVar23);
               if (iVar15 == 0) goto LAB_00103ce4;
               *(short*)( (long)param_13 + 0xb4 ) = *(short*)( (long)param_13 + 0xb4 ) + -1;
               uVar35 = uVar35 - 0x7f;
               puVar39 = local_f0;
               puVar41 = local_e0;
               if (( uVar32 == 0x8b ) || ( !bVar47 )) {
                  if (uVar35 < 6) {
                     uVar19 = 0;
                     goto LAB_00103721;
                  }

                  if (( uVar32 == 0x8b ) && ( param_14 == (long*)0x0 )) {
                     iVar31 = 0;
                     puVar24 = local_208;
                     do {
                        iVar31 = iVar31 + 1;
                        puVar24 = puVar24 + puVar24[1];
                     }
 while ( *puVar24 != 0x79 );
                     if (local_208[2] != 0xa8) {
                        if (iVar31 < 3) {
                           if (iVar31 != 1) {
                              uVar19 = ( uint )(0 < iVar15);
                              goto LAB_00103ffe;
                           }

                           if (local_23c == 0xffffffff) {
                              local_20c = 0xfffffffe;
                              uVar19 = 0;
                              bVar46 = false;
                              local_23c = 0xfffffffe;
                              local_200 = local_210;
                              local_1fc = local_21c;
                              uVar20 = local_224;
                           }
 else {
                              uVar19 = 0;
                              bVar46 = false;
                              local_20c = local_23c;
                              local_200 = local_210;
                              local_1fc = local_21c;
                              uVar20 = local_224;
                           }

                           goto LAB_0010377e;
                        }

                        param_13[0x15] = local_1f0;
                        *param_5 = 0x7f;
                        goto LAB_00103ce4;
                     }

                     if (iVar31 != 1) {
                        param_13[0x15] = local_1f0;
                        *param_5 = 0x9a;
                        goto LAB_00103ce4;
                     }

                     local_208[2] = 0x95;
                     uVar19 = 0;
                     goto LAB_0010377e;
                  }

                  uVar19 = 0;
                  if (param_14 == (long*)0x0) goto LAB_00103ffe;
               }
 else {
                  uVar19 = ( uint )(0 < iVar15);
                  if (uVar35 < 6) {
                     LAB_00103721:*(short*)( (long)param_13 + 0xb6 ) = *(short*)( (long)param_13 + 0xb6 ) + -1;
                  }

                  if (param_14 == (long*)0x0) {
                     if (uVar32 < 0x85) {
                        if (( ( ( uVar35 & 0xfffffffb ) == 0 ) && ( local_fc < 0xfffffffe ) ) && ( local_d0 < 0xfffffffe )) {
                           bVar46 = false;
                           local_20c = local_23c;
                           local_200 = local_210;
                           local_1fc = local_21c;
                           uVar33 = local_fc;
                           local_21c = local_104;
                           uVar20 = local_224;
                        }
 else {
                           bVar46 = false;
                           local_20c = local_23c;
                           local_200 = local_210;
                           local_1fc = local_21c;
                           uVar20 = local_224;
                        }

                        goto LAB_0010377e;
                     }

                     LAB_00103ffe:uVar33 = local_fc;
                     uVar20 = local_210;
                     if (local_23c == 0xffffffff) {
                        local_23c = local_d0;
                        if (local_d0 == 0xffffffff) {
                           local_20c = 0xffffffff;
                           bVar46 = false;
                        }
 else if (local_d0 == 0xfffffffe) {
                           local_20c = 0xfffffffe;
                           bVar46 = false;
                        }
 else {
                           local_20c = 0xfffffffe;
                           bVar46 = true;
                           uVar20 = local_100;
                        }

                        joined_r0x001062e3:if (0xfffffffd < uVar33) {
                           local_200 = local_210;
                           local_1fc = local_21c;
                           uVar33 = local_224;
                           local_210 = uVar20;
                           uVar20 = local_224;
                           goto LAB_0010377e;
                        }

                     }
 else {
                        if (0xfffffffd < local_d0) {
                           bVar46 = false;
                           local_20c = local_23c;
                           goto joined_r0x001062e3;
                        }

                        if (0xfffffffd < local_fc) {
                           bVar46 = false;
                           local_104 = local_100;
                           uVar33 = uVar18 | local_d0;
                           local_20c = local_23c;
                           goto joined_r0x001062e3;
                        }

                        local_20c = local_23c;
                        bVar46 = false;
                     }

                     local_200 = local_210;
                     local_1fc = local_21c;
                     local_21c = local_104;
                     local_210 = uVar20;
                     uVar20 = local_224;
                     goto LAB_0010377e;
                  }

               }

               uVar40 = _LC10;
               uVar36 = *puVar22;
               if (0x7fffffeb - uVar36 < local_e8 - 4) goto LAB_00104f80;
               local_208[3] = 2;
               *puVar22 = uVar36 + ( local_e8 - 4 );
               *(undefined8*)( local_208 + 1 ) = uVar40;
               puVar39 = local_f0;
               puVar41 = local_208 + 4;
            }

            goto LAB_0010377e;
         }

         if (uVar32 == 0x800e0000) {
            LAB_001048e7:uVar35 = puVar39[1];
            if ((int)uVar35 < 0) {
               LAB_00104930:local_88 = (undefined1[16])0x0;
               puVar24 = local_208 + 3;
               local_78 = (undefined1[16])0x0;
               uVar20 = puVar39[1];
               local_f0 = puVar39 + 1;
               local_d8 = puVar24;
               if (uVar20 == 0x800d0000) {
                  bVar47 = false;
                  puVar39 = local_f0;
                  uVar20 = 0xfffffffe;
                  if (local_23c != 0xffffffff) {
                     uVar20 = local_23c;
                  }

               }
 else {
                  bVar47 = false;
                  bVar12 = false;
                  bVar13 = false;
                  local_200 = 0;
                  iVar31 = 0;
                  puVar41 = puVar39;
                  do {
                     if (( uVar20 & 0xfffeffff ) == 0x801c0000) {
                        bVar47 = uVar20 == 0x801d0000;
                        puVar42 = puVar41 + 2;
                        uVar19 = puVar41[2];
                        if (( ( local_240 >> 3 & 1 ) == 0 ) || ( 2 < (int)uVar19 )) {
                           if (( ( local_240 & 0x20000 ) != 0 ) && ( ( local_220 & 0x800 ) == 0 )) {
                              if (uVar19 - 8 < 3) {
                                 *local_d8 = ( uVar20 == 0x801d0000 ) + 3;
                                 uVar20 = 0xe;
                                 if (uVar19 != 8) {
                                    uVar20 = ( uVar19 != 9 ) + 0xf;
                                 }

                                 local_d8[1] = uVar20;
                                 local_d8[2] = 0;
                                 bVar12 = true;
                                 local_d8 = local_d8 + 3;
                                 goto LAB_00104a70;
                              }

                              LAB_00105837:bVar13 = (bool)( bVar13 | bVar47 );
                           }

                           LAB_00105842:iVar44 = uVar19 * 3;
                           uVar36 = *(ulong*)( pbVar7 + (int)( &posix_class_maps )[iVar44] );
                           uVar28 = *(ulong*)( (long)( pbVar7 + (int)( &posix_class_maps )[iVar44] ) + 8 );
                           local_58 = *(ulong*)( pbVar7 + (long)(int)( &posix_class_maps )[iVar44] + 0x10 );
                           uStack_50 = *(ulong*)( (long)( pbVar7 + (long)(int)( &posix_class_maps )[iVar44] + 0x10 ) + 8 );
                           iVar31 = ( &posix_class_maps )[iVar44 + 1];
                           local_68 = (byte)uVar36;
                           bStack_67 = ( byte )(uVar36 >> 8);
                           uStack_66 = ( undefined6 )(uVar36 >> 0x10);
                           uStack_60 = (uint)uVar28;
                           uStack_5c = ( undefined4 )(uVar28 >> 0x20);
                           iVar44 = ( &posix_class_maps )[iVar44 + 2];
                           if (-1 < iVar31) {
                              if (iVar44 < 0) goto LAB_001067cf;
                              puVar23 = (ulong*)( pbVar7 + iVar31 );
                              uVar36 = *puVar23 | uVar36;
                              local_68 = (byte)uVar36;
                              bStack_67 = ( byte )(uVar36 >> 8);
                              uStack_66 = ( undefined6 )(uVar36 >> 0x10);
                              uStack_60 = ( uint )(puVar23[1] | uVar28);
                              uStack_5c = ( undefined4 )(( puVar23[1] | uVar28 ) >> 0x20);
                              local_58 = puVar23[2] | local_58;
                              uStack_50 = puVar23[3] | uStack_50;
                           }

                        }
 else {
                           if (( local_240 & 0x20000 ) != 0) {
                              uVar19 = 0;
                              if (( local_220 & 0x800 ) == 0) goto LAB_00105837;
                              goto LAB_00105842;
                           }

                           uVar40 = *(undefined8*)( pbVar7 + 0xa0 );
                           iVar44 = -2;
                           iVar31 = 0x40;
                           local_58 = *(ulong*)( pbVar7 + 0xb0 );
                           uStack_50 = *(ulong*)( pbVar7 + 0xb8 );
                           local_68 = (byte)uVar40;
                           bStack_67 = ( byte )((ulong)uVar40 >> 8);
                           uStack_66 = ( undefined6 )((ulong)uVar40 >> 0x10);
                           uStack_60 = ( uint ) * (undefined8*)( pbVar7 + 0xa8 );
                           uStack_5c = ( undefined4 )(( ulong ) * (undefined8*)( pbVar7 + 0xa8 ) >> 0x20);
                           LAB_001067cf:puVar23 = (ulong*)( pbVar7 + iVar31 );
                           uVar36 = ~*puVar23 & CONCAT62(uStack_66, CONCAT11(bStack_67, local_68));
                           uVar28 = ~puVar23[1] & CONCAT44(uStack_5c, uStack_60);
                           local_68 = (byte)uVar36;
                           bStack_67 = ( byte )(uVar36 >> 8);
                           uStack_66 = ( undefined6 )(uVar36 >> 0x10);
                           uStack_60 = (uint)uVar28;
                           uStack_5c = ( undefined4 )(uVar28 >> 0x20);
                           local_58 = ~puVar23[2] & local_58;
                           uStack_50 = ~puVar23[3] & uStack_50;
                        }

                        iVar31 = -iVar44;
                        if (0 < iVar44) {
                           iVar31 = iVar44;
                        }

                        if (iVar31 == 1) {
                           bStack_67 = bStack_67 & 0xc3;
                        }
 else if (iVar31 == 2) {
                           uStack_60 = uStack_60 & 0x7fffffff;
                        }

                        if (uVar20 == 0x801d0000) {
                           auVar9[1] = bStack_67;
                           auVar9[0] = local_68;
                           auVar9._2_6_ = uStack_66;
                           auVar9._8_4_ = uStack_60;
                           auVar9._12_4_ = uStack_5c;
                           auVar49._8_4_ = 0xffffffff;
                           auVar49._0_8_ = 0xffffffffffffffff;
                           auVar49._12_4_ = 0xffffffff;
                           iVar31 = 1;
                           auVar11._8_8_ = uStack_50;
                           auVar11._0_8_ = local_58;
                           local_88 = auVar9 ^ auVar49 | local_88;
                           local_78 = auVar49 ^ auVar11 | local_78;
                        }
 else {
                           iVar31 = 1;
                           local_88._8_8_ = local_88._8_8_ | CONCAT44(uStack_5c, uStack_60);
                           local_88._0_8_ = local_88._0_8_ | CONCAT62(uStack_66, CONCAT11(bStack_67, local_68));
                           auVar10._8_8_ = uStack_50;
                           auVar10._0_8_ = local_58;
                           local_78 = local_78 | auVar10;
                        }

                        goto LAB_00104a70;
                     }

                     if (uVar20 == 0x80050000) {
                        local_f0 = puVar41 + 2;
                        uVar20 = puVar41[2];
                        LAB_00105728:puVar42 = local_f0;
                        if (( uVar20 == 0xd ) || ( uVar20 == 10 )) {
                           *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x800;
                           uVar19 = local_f0[1];
                        }
 else {
                           uVar19 = local_f0[1];
                        }

                        if (( uVar19 & 0xfffeffff ) == 0x801e0000) {
                           uVar19 = local_f0[2];
                           puVar42 = local_f0 + 2;
                           if (uVar19 == 0x80050000) {
                              puVar42 = local_f0 + 3;
                              uVar19 = local_f0[3];
                           }

                           if (( uVar19 == 0xd ) || ( uVar19 == 10 )) {
                              *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x800;
                           }

                           *(uint*)( param_13 + 0x20 ) = uVar20;
                           *(uint*)( (long)param_13 + 0x104 ) = uVar19;
                           local_f0 = puVar42;
                           iVar44 = add_to_class_internal(local_88, &local_d8, local_240, local_220, param_13, uVar20, uVar19);
                           iVar31 = iVar31 + iVar44;
                        }
 else {
                           param_13[0x20] = CONCAT44(uVar20, uVar20);
                           iVar44 = add_to_class_internal(local_88, &local_d8, local_240, local_220, param_13, uVar20, uVar20);
                           iVar31 = iVar31 + iVar44;
                        }

                        goto LAB_00104a70;
                     }

                     if (-1 < (int)uVar20) goto LAB_00105728;
                     if (( uVar20 & 0xffff0000 ) != 0x80180000) goto LAB_00103ee8;
                     switch (uVar20 & 0xffff) {
                        case 6:
                pbVar34 = pbVar7 + 0x40;
                pbVar29 = local_88;
                do {
                  bVar1 = *pbVar34;
                  pbVar34 = pbVar34 + 1;
                  *pbVar29 = *pbVar29 | ~bVar1;
                  pbVar29 = pbVar29 + 1;
                } while (&local_68 != pbVar29);
                goto LAB_00107324;
                        case 7:
                pbVar34 = pbVar7 + 0x40;
                pbVar29 = local_88;
                do {
                  *pbVar29 = *pbVar29 | *pbVar34;
                  pbVar29 = pbVar29 + 1;
                  pbVar34 = pbVar34 + 1;
                } while (&local_68 != pbVar29);
                break;
                        case 8:
                pbVar34 = local_88;
                pbVar29 = pbVar7;
                do {
                  bVar1 = *pbVar29;
                  pbVar29 = pbVar29 + 1;
                  *pbVar34 = *pbVar34 | ~bVar1;
                  pbVar34 = pbVar34 + 1;
                } while (&local_68 != pbVar34);
                goto LAB_00107324;
                        case 9:
                pbVar34 = local_88;
                pbVar29 = pbVar7;
                do {
                  *pbVar34 = *pbVar34 | *pbVar29;
                  pbVar34 = pbVar34 + 1;
                  pbVar29 = pbVar29 + 1;
                } while (&local_68 != pbVar34);
                break;
                        case 10:
                pbVar34 = pbVar7 + 0xa0;
                pbVar29 = local_88;
                do {
                  bVar1 = *pbVar34;
                  pbVar34 = pbVar34 + 1;
                  *pbVar29 = *pbVar29 | ~bVar1;
                  pbVar29 = pbVar29 + 1;
                } while (&local_68 != pbVar29);
LAB_00107324:
                bVar47 = true;
                puVar42 = local_f0;
                iVar31 = iVar31 + 1;
                goto LAB_00104a70;
                        case 0xb:
                pbVar34 = pbVar7 + 0xa0;
                pbVar29 = local_88;
                do {
                  *pbVar29 = *pbVar29 | *pbVar34;
                  pbVar29 = pbVar29 + 1;
                  pbVar34 = pbVar34 + 1;
                } while (&local_68 != pbVar29);
                break;
                        case 0xf:
                        case 0x10:
                uVar19 = puVar41[2];
                bVar12 = true;
                local_d8[2] = uVar19 & 0xffff;
                local_d8[1] = uVar19 >> 0x10;
                *local_d8 = ((uVar20 & 0xffff) != 0x10) + 3;
                puVar42 = puVar41 + 2;
                local_d8 = local_d8 + 3;
                goto LAB_00104a70;
                        case 0x12:
                puVar27 = &_pcre2_hspace_list_32;
                goto LAB_001072c2;
                        case 0x13:
                puVar27 = &_pcre2_hspace_list_32;
                goto LAB_00104a4c;
                        case 0x14:
                puVar27 = &_pcre2_vspace_list_32;
LAB_001072c2:
                add_not_list_to_class_isra_0
                          (local_88,&local_d8,local_240 & 0xfffffff7,local_220,param_13,puVar27);
                break;
                        case 0x15:
                puVar27 = &_pcre2_vspace_list_32;
LAB_00104a4c:
                add_list_to_class_constprop_0_isra_0
                          (local_88,&local_d8,local_240 & 0xfffffff7,local_220,param_13,puVar27);
                     }

                     puVar42 = local_f0;
                     iVar31 = iVar31 + 1;
                     LAB_00104a70:if (puVar24 < local_d8) {
                        if (param_14 != (long*)0x0) {
                           lVar37 = (long)local_d8 - (long)puVar24;
                           local_d8 = puVar24;
                           *puVar22 = *puVar22 + ( lVar37 >> 2 );
                        }

                        local_200 = 1;
                     }

                     uVar20 = puVar42[1];
                     puVar39 = puVar42 + 1;
                     puVar41 = puVar42;
                     local_f0 = puVar39;
                  }
 while ( uVar20 != 0x800d0000 );
                  uVar20 = 0xfffffffe;
                  if (local_23c != 0xffffffff) {
                     uVar20 = local_23c;
                  }

                  if (local_200 != 0) {
                     if (( local_240 & 0x20000 ) == 0) {
                        if (bVar47 == true && !bVar12) goto LAB_00107100;
                        if (( bVar13 ) || ( ( uVar32 != 0x800e0000 && ( bVar47 != false ) ) )) goto LAB_00104b32;
                     }
 else if (bVar13) {
                        LAB_00104b32:*local_d8 = 2;
                        if (uVar17 == 0) {
                           *(undefined8*)( local_d8 + 1 ) = _LC9;
                           local_d8 = local_d8 + 3;
                        }
 else {
                           local_d8 = local_d8 + 1;
                           uVar19 = _pcre2_ord2utf_32(0x100);
                           local_d8 = local_d8 + uVar19;
                           uVar19 = _pcre2_ord2utf_32(0x10ffff);
                           local_d8 = local_d8 + uVar19;
                        }

                     }

                     puVar41 = local_d8 + 1;
                     *local_d8 = 0;
                     *local_208 = 0x70;
                     uVar19 = ( uint )(uVar32 == 0x800e0000);
                     local_d8 = puVar41;
                     if (bVar12) {
                        local_208[2] = uVar19 | 4;
                        if (0 < iVar31) {
                           local_208[2] = local_208[2] | 2;
                           _pcre2_memmove32(local_208 + 0xb, puVar24, (long)puVar41 - (long)puVar24);
                           goto LAB_001074c4;
                        }

                     }
 else {
                        local_208[2] = uVar19;
                        if (0 < iVar31) {
                           local_208[2] = local_208[2] | 2;
                           _pcre2_memmove32(local_208 + 0xb, puVar24, (long)puVar41 - (long)puVar24);
                           if (uVar32 == 0x800e0000) {
                              auVar50._8_4_ = 0xffffffff;
                              auVar50._0_8_ = 0xffffffffffffffff;
                              auVar50._12_4_ = 0xffffffff;
                              local_88 = local_88 ^ auVar50;
                              local_78 = auVar50 ^ local_78;
                           }

                           LAB_001074c4:*(undefined8*)( local_208 + 3 ) = local_88._0_8_;
                           *(undefined8*)( local_208 + 5 ) = local_88._8_8_;
                           puVar41 = local_d8 + 8;
                           *(undefined8*)( local_208 + 7 ) = local_78._0_8_;
                           *(undefined8*)( local_208 + 9 ) = local_78._8_8_;
                        }

                     }

                     local_208[1] = ( uint )((long)puVar41 - (long)local_208 >> 2);
                     uVar19 = local_200;
                     local_23c = uVar20;
                     LAB_00105b28:local_20c = local_23c;
                     local_200 = local_210;
                     local_1fc = local_21c;
                     uVar20 = local_224;
                     goto LAB_0010377e;
                  }

               }

               LAB_00107100:local_23c = uVar20;
               *local_208 = ( ( uVar32 == 0x800e0000 ) != bVar47 ) + 0x6e;
               if (param_14 == (long*)0x0) {
                  if (uVar32 == 0x800e0000) {
                     auVar51._8_4_ = 0xffffffff;
                     auVar51._0_8_ = 0xffffffffffffffff;
                     auVar51._12_4_ = 0xffffffff;
                     local_88 = local_88 ^ auVar51;
                     local_78 = auVar51 ^ local_78;
                  }

                  *(undefined8*)( local_208 + 1 ) = local_88._0_8_;
                  *(undefined8*)( local_208 + 3 ) = local_88._8_8_;
                  *(undefined8*)( local_208 + 5 ) = local_78._0_8_;
                  *(undefined8*)( local_208 + 7 ) = local_78._8_8_;
               }

               puVar41 = local_208 + 9;
               puVar24 = puVar39;
            }
 else {
               uVar19 = puVar39[2];
               if (uVar19 != 0x800d0000) {
                  if (( ( uVar32 == 0x800a0000 ) && ( -1 < (int)uVar19 ) ) && ( puVar39[3] == 0x800d0000 )) {
                     if (uVar35 < 0x110000) {
                        puVar27 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar35 >> 7 ) * 2 ) * 0x80 + ( uVar35 & 0x7f ) ) * 2 ) * 0xc;
                        if (( &DAT_0011002b )[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar35 >> 7 ) * 2 ) * 0x80 + ( uVar35 & 0x7f ) ) * 2 ) * 0xc] == '\0') {
                           if (( local_1e8 & 0xa0000 ) == 0) {
                              if (0xff < uVar35) goto LAB_00104930;
                           }
 else if (0x7f < uVar35) goto LAB_00106bbc;
                        }
 else if (( -1 < (char)local_220 ) || ( 0x7f < ( uVar35 | uVar19 ) )) goto LAB_00104930;
                        uVar20 = ( uint ) * (byte*)( param_13[2] + (ulong)uVar35 );
                     }
 else {
                        if (( DAT_0011000b != '\0' ) || ( ( local_1e8 & 0xa0000 ) == 0 )) goto LAB_00104930;
                        puVar27 = &_pcre2_dummy_ucd_record_32;
                        LAB_00106bbc:uVar20 = *(int*)( puVar27 + 4 ) + uVar35;
                     }

                     if (( uVar19 == uVar20 ) && ( uVar35 != uVar20 )) {
                        puVar24 = puVar39 + 3;
                        local_f0 = puVar24;
                        if (( local_240 & 8 ) == 0) {
                           local_240 = local_240 | 8;
                           uVar32 = 8;
                           local_1e4 = 1;
                           uVar19 = 1;
                           local_20c = 0;
                        }
 else {
                           LAB_001059ce:uVar32 = 8;
                           uVar19 = 0;
                           local_20c = local_1e4 ^ 1;
                        }

                        LAB_001051c1:if (uVar17 == 0) goto LAB_001050c5;
                        uVar20 = _pcre2_ord2utf_32();
                        __n = (size_t)( uVar20 * 4 );
                        lVar37 = (ulong)uVar20 << 2;
                        bVar47 = uVar20 == 1;
                        goto LAB_001050e9;
                     }

                  }

                  goto LAB_00104930;
               }

               puVar24 = puVar39 + 2;
               local_f0 = puVar24;
               if (uVar32 == 0x800a0000) goto LAB_0010509c;
               uVar20 = 0xfffffffe;
               if (local_23c != 0xffffffff) {
                  uVar20 = local_23c;
               }

               local_23c = uVar20;
               if (( local_1e8 & 0xa0000 ) == 0) {
                  iVar31 = 0x20 - ( uint )(( local_240 & 8 ) == 0);
                  LAB_00106b04:puVar41 = local_208 + 2;
                  *(ulong*)local_208 = CONCAT44(uVar35, iVar31);
               }
 else {
                  if (( local_240 & 8 ) == 0) {
                     iVar31 = 0x1f;
                     goto LAB_00106b04;
                  }

                  puVar27 = &_pcre2_dummy_ucd_record_32;
                  if (uVar35 < 0x110000) {
                     puVar27 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar35 >> 7 ) * 2 ) * 0x80 + ( uVar35 & 0x7f ) ) * 2 ) * 0xc;
                  }

                  bVar1 = puVar27[3];
                  if (( bVar1 == 0 ) || ( ( ( local_220 & 0x80 ) != 0 && ( *(uint*)( &_pcre2_ucd_caseless_sets_32 + (ulong)(uint)bVar1 * 4 ) < 0x80 ) ) )) {
                     iVar31 = 0x20;
                     goto LAB_00106b04;
                  }

                  local_208[2] = (uint)bVar1;
                  puVar41 = local_208 + 3;
                  *(undefined8*)local_208 = uVar40;
               }

            }

            LAB_00106075:local_20c = local_23c;
            LAB_001043aa:uVar19 = 1;
            local_200 = local_210;
            local_1fc = local_21c;
            puVar39 = puVar24;
            local_23c = local_20c;
            uVar20 = local_224;
            goto LAB_0010377e;
         }

         puVar24 = puVar39;
         if (0x800e0000 < uVar32) {
            if (uVar32 == 0x80150000) {
               uVar19 = puVar39[2];
               if (puVar39[1] == 0) {
                  uVar35 = 0x95;
                  if (uVar19 == 10) {
                     uVar35 = ( puVar39[3] == 0x2b ) + 0x95;
                  }

               }
 else {
                  uVar35 = 0x96;
                  if (( 9 < uVar19 ) && ( uVar35 = uVar19 == 10 )) {
                     uVar35 = ~-(uint)(puVar39[3] < 0x2c) + 0x96;
                  }

               }

               local_208[2] = uVar35;
               puVar39 = puVar39 + 3;
               uVar35 = 0x8b;
               uVar40 = 1;
               bVar47 = true;
               uVar32 = 0x8b;
               goto LAB_00103630;
            }

            if (uVar32 < 0x80150001) {
               if (uVar32 == 0x80110000) {
                  LAB_0010475f:puVar41 = puVar39 + 3;
                  uVar19 = puVar39[1];
                  puVar45 = (undefined8*)param_13[0x17];
                  local_1f0 = CONCAT44(puVar39[2], puVar39[3]);
                  lVar37 = param_13[7] + local_1f0 * 4;
                  local_f0 = puVar41;
                  if ((short)param_13[0x16] != 0) {
                     uVar35 = 0;
                     do {
                        if (( uVar19 == *(ushort*)( (long)puVar45 + 0xc ) ) && ( iVar15 = iVar15 == 0 )) {
                           if (*(short*)( (long)puVar45 + 0xe ) == 0) {
                              local_208[2] = ( uVar32 == 0x80130000 ) + 0x91 + ( uint )(uVar32 == 0x80130000);
                              uVar19 = *(uint*)( puVar45 + 1 );
                              local_208[3] = uVar19;
                              if (*(uint*)( param_13 + 0x1e ) < uVar19) {
                                 *(uint*)( param_13 + 0x1e ) = uVar19;
                              }

                              goto LAB_00104ff4;
                           }

                           if (uVar35 < *(ushort*)( param_13 + 0x16 )) {
                              local_fc = 0;
                              uVar32 = ( uint )(uVar32 == 0x80130000) * 2 + 0x91;
                              local_208[2] = uVar32;
                              local_d0 = 0;
                              if (param_14 == (long*)0x0) {
                                 iVar15 = find_dupname_details_constprop_0(lVar37, uVar19, &local_d0, &local_fc, param_5, param_13);
                                 if (iVar15 == 0) goto LAB_00103ce4;
                                 uVar32 = local_208[2];
                              }

                              local_208[3] = local_d0;
                              uVar35 = 0x8b;
                              uVar40 = 3;
                              local_208[2] = uVar32 + 1;
                              bVar47 = true;
                              uVar32 = 0x8b;
                              local_208[4] = local_fc;
                              puVar39 = puVar41;
                              goto LAB_00103630;
                           }

                           break;
                        }

                        uVar35 = uVar35 + 1;
                        puVar45 = puVar45 + 2;
                     }
 while ( uVar35 < *(ushort*)( param_13 + 0x16 ) );
                  }

                  if (uVar32 != 0x80140000) {
                     LAB_00106e02:*param_5 = 0x73;
                     param_13[0x15] = local_1f0;
                     goto LAB_00103ce4;
                  }

                  if (uVar19 < 2) {
                     uVar35 = 0xffff;
                  }
 else {
                     uVar35 = *(int*)( lVar37 + 4 ) - 0x30;
                     if (0xffff < uVar35) {
                        uVar36 = 1;
                        LAB_00106994:*param_5 = 0xa1;
                        param_13[0x15] = local_1f0 + uVar36;
                        goto LAB_00103ce4;
                     }

                     uVar28 = 2;
                     while (uVar36 = uVar28,uVar19 != uVar36) {
                        uVar35 = *(int*)( lVar37 + uVar36 * 4 ) + -0x30 + uVar35 * 10;
                        uVar28 = uVar36 + 1;
                        if (0xffff < uVar35) goto LAB_00106994;
                     }
;
                     if (*(uint*)( (long)param_13 + 0xcc ) < uVar35) goto LAB_00106e02;
                     if (uVar35 == 0) {
                        uVar35 = 0xffff;
                     }

                  }

                  local_208[2] = 0x93;
                  local_208[3] = uVar35;
               }
 else {
                  if (uVar32 < 0x80110001) {
                     if (uVar32 == 0x800f0000) {
                        uVar35 = 0x8b;
                        uVar40 = 0;
                        bVar47 = true;
                        uVar32 = 0x8b;
                     }
 else {
                        if (uVar32 != 0x80100000) goto LAB_00103ee8;
                        uVar19 = puVar39[1];
                        uVar18 = puVar39[2];
                        uVar35 = 0x8b;
                        uVar40 = 1;
                        bVar47 = false;
                        local_208[2] = 0xa8;
                        uVar32 = 0x8b;
                        local_1f0 = CONCAT44(uVar19, uVar18);
                        puVar39 = puVar39 + 2;
                     }

                     goto LAB_00103630;
                  }

                  if (uVar32 != 0x80120000) {
                     if (( uVar32 < 0x80120000 ) || ( ( uVar32 + 0x7fed0000 & 0xfffe0000 ) != 0 )) goto LAB_00103ee8;
                     goto LAB_0010475f;
                  }

                  uVar19 = puVar39[1];
                  uVar35 = puVar39[2];
                  uVar32 = puVar39[3];
                  if (*(uint*)( (long)param_13 + 0xcc ) < uVar32) {
                     *param_5 = 0x73;
                     param_13[0x15] = CONCAT44(uVar19, uVar35);
                     local_f0 = puVar39 + 3;
                     goto LAB_00103ce4;
                  }

                  if (*(uint*)( param_13 + 0x1e ) < uVar32) {
                     *(uint*)( param_13 + 0x1e ) = uVar32;
                  }

                  local_1f0 = CONCAT44(uVar19, uVar35) + -2;
                  local_208[2] = 0x91;
                  local_208[3] = uVar32;
               }

               LAB_00104ff4:uVar35 = 0x8b;
               uVar40 = 2;
               bVar47 = true;
               uVar32 = 0x8b;
               puVar39 = puVar39 + 3;
               goto LAB_00103630;
            }

            if (uVar32 == 0x80180000) {
               if (uVar21 - 6 < 0x11) {
                  puVar24 = puVar39 + 1;
                  local_20c = 0xfffffffe;
                  if (local_23c != 0xffffffff) {
                     local_20c = local_23c;
                  }

                  local_23c = local_20c;
                  if (1 < uVar21 - 0xf) {
                     if (uVar21 == 0xe) {
                        uVar19 = 1;
                        uVar36 = 0xd;
                        *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x400000;
                     }
 else {
                        uVar19 = 1;
                     }

                     goto LAB_00105b20;
                  }

                  uVar20 = puVar39[1];
                  uVar19 = uVar20 >> 0x10;
                  if (( uVar21 != 0x10 ) || ( uVar19 != 0 )) {
                     local_208[1] = uVar19;
                     puVar41 = local_208 + 3;
                     local_208[2] = uVar20 & 0xffff;
                     *local_208 = ( uVar21 == 0x10 ) + 0xf;
                     goto LAB_00106075;
                  }

                  *local_208 = 0xd;
                  puVar41 = local_208 + 1;
                  goto LAB_001043aa;
               }

               if (( *(short*)( (long)param_13 + 0xb6 ) == 0 ) || ( uVar21 != 3 )) {
                  if (uVar21 < 6) {
                     if (( uVar35 & 0xfffc ) == 0) {
                        if (uVar21 != 1) goto LAB_00105b1d;
                     }
 else if (( ( local_240 & 0x20000 ) != 0 ) && ( ( local_220 & 0x400 ) == 0 )) {
                        uVar36 = ( ulong )(( uVar21 != 4 ) + 0xa9);
                     }

                     if ((int)param_13[0x24] == 0) {
                        *(undefined4*)( param_13 + 0x24 ) = 1;
                     }

                  }

                  LAB_00105b1d:uVar19 = 0;
               }
 else {
                  if (( local_220 & 0x40 ) == 0) {
                     *param_5 = 199;
                     goto LAB_00103ce4;
                  }

                  uVar19 = 0;
                  uVar36 = 3;
               }

               LAB_00105b20:*local_208 = (uint)uVar36;
               puVar41 = local_208 + 1;
               goto LAB_00105b28;
            }

            if (uVar32 < 0x80180001) {
               if (uVar32 == 0x80160000) {
                  uVar19 = 0;
                  *local_208 = ( ( local_240 & 0x400 ) != 0 ) + 0x19;
                  puVar41 = local_208 + 1;
                  goto LAB_0010377e;
               }

               if (uVar32 == 0x80170000) {
                  puVar41 = local_208 + 1;
                  local_20c = 0xfffffffe;
                  if (local_23c != 0xffffffff) {
                     local_20c = local_23c;
                  }

                  *local_208 = ( ( local_240 & 0x20 ) != 0 ) + 0xc;
                  goto LAB_001043aa;
               }

               goto LAB_00103ee8;
            }

            if (uVar32 == 0x80190000) {
               if (-1 < (int)uVar18) {
                  if (param_14 != (long*)0x0) goto LAB_0010660c;
                  goto LAB_001064a3;
               }

               if (param_14 != (long*)0x0) {
                  uVar16 = 0xffffffff;
                  goto LAB_0010660c;
               }

               uVar16 = 0xffffffff;
               goto LAB_001064a3;
            }

            if (uVar32 == 0x801a0000) {
               uVar35 = 0x87;
               uVar40 = 0;
               bVar47 = true;
               uVar32 = 0x87;
               goto LAB_00103630;
            }

            LAB_00103ee8:*param_5 = 0xbd;
            goto LAB_00103ce4;
         }

         if (uVar32 == 0x80060000) {
            *local_208 = 0x76;
            uVar19 = 0;
            for (int i = 0; i < 3; i++) {
               local_208[( i + 1 )] = puVar39[( i + 1 )];
            }

            puVar39 = puVar39 + 3;
            puVar41 = local_208 + DAT_001100a6;
            goto LAB_0010377e;
         }

         if (0x80060000 < uVar32) {
            if (uVar32 != 0x80090000) {
               if (uVar32 < 0x80090001) {
                  if (uVar32 == 0x80070000) {
                     uVar35 = puVar39[3];
                     if (param_14 == (long*)0x0) {
                        *local_208 = 0x77;
                        local_208[1] = puVar39[1];
                        local_208[2] = puVar39[2];
                        uVar19 = puVar39[5];
                        local_1f0 = CONCAT44(puVar39[4], uVar19);
                        puVar41 = local_208 + 6;
                        puVar24 = (uint*)( param_13[7] + local_1f0 * 4 );
                        uVar32 = *puVar24;
                        local_208[5] = uVar32;
                        if (uVar32 == 0x7b) {
                           uVar32 = 0x7d;
                        }

                        local_208[4] = uVar19 + 1;
                        do {
                           puVar24 = puVar24 + 1;
                           uVar19 = uVar35;
                           puVar42 = puVar41;
                           uVar35 = uVar35 - 1;
                           while (true) {
                              if (uVar35 < 2) {
                                 *puVar42 = 0;
                                 uVar19 = 0;
                                 local_208[3] = ( uint )((long)( puVar42 + 1 ) - (long)local_208 >> 2);
                                 puVar39 = puVar39 + 5;
                                 puVar41 = puVar42 + 1;
                                 goto LAB_0010377e;
                              }

                              uVar18 = *puVar24;
                              puVar41 = puVar42 + 1;
                              if (( uVar18 != uVar32 ) || ( uVar32 != puVar24[1] )) break;
                              *puVar42 = uVar18;
                              puVar24 = puVar24 + 2;
                              uVar35 = uVar19 - 3;
                              uVar19 = uVar19 - 2;
                              puVar42 = puVar41;
                           }
;
                           *puVar42 = uVar18;
                        }
 while ( true );
                     }

                     uVar19 = 0;
                     *puVar22 = *puVar22 + ( ulong )(uVar35 + 5);
                     puVar39 = puVar39 + 5;
                     goto LAB_0010377e;
                  }

                  if (uVar32 == 0x80080000) {
                     local_208[2] = uVar21;
                     uVar40 = 1;
                     bVar47 = true;
                     uVar32 = 0x89;
                     *(uint*)( param_13 + 0x1a ) = uVar21;
                     uVar35 = 0x89;
                     goto LAB_00103630;
                  }

               }
 else {
                  if (( uVar32 + 0x7ff50000 & 0xfffe0000 ) == 0) {
                     uVar19 = 0xa3;
                     if (uVar32 == 0x800c0000) {
                        uVar19 = 0xd;
                     }

                     *local_208 = uVar19;
                     puVar41 = local_208 + 1;
                     if (local_23c == 0xffffffff) {
                        local_20c = 0xfffffffe;
                        uVar19 = 1;
                        local_23c = 0xfffffffe;
                        local_200 = local_210;
                     }
 else {
                        local_20c = local_23c;
                        uVar19 = 1;
                        local_200 = local_210;
                     }

                     goto LAB_0010377e;
                  }

                  if (uVar32 == 0x800a0000) goto LAB_001048e7;
               }

               goto LAB_00103ee8;
            }

            puVar41 = local_208 + 1;
            if (( local_240 & 0x400 ) == 0) {
               *local_208 = 0x1b;
               uVar19 = 0;
            }
 else {
               if (local_23c == 0xffffffff) {
                  local_20c = 0xfffffffe;
                  local_23c = 0xfffffffe;
               }

               *local_208 = 0x1c;
               uVar19 = 0;
            }

            goto LAB_0010377e;
         }

         if (uVar32 == 0x80030000) {
            if (uVar21 < 10) {
               local_1f0 = param_13[uVar36 + 0xb];
            }
 else {
               local_f0 = puVar39 + 2;
               local_1f0 = CONCAT44(puVar39[1], puVar39[2]);
            }

            if (*(uint*)( (long)param_13 + 0xcc ) < uVar21) {
               param_13[0x15] = local_1f0;
               *param_5 = 0x73;
               goto LAB_00103ce4;
            }

            LAB_00104dc6:if (local_23c == 0xffffffff) {
               local_20c = 0xfffffffe;
               local_23c = 0xfffffffe;
            }

            uVar35 = (uint)uVar36;
            local_208[1] = uVar35;
            *local_208 = ( ( local_240 & 8 ) != 0 ) + 0x71;
            uVar19 = 1 << ( (byte)uVar36 & 0x1f );
            if (0x1f < uVar35) {
               uVar19 = 1;
            }

            *(uint*)( (long)param_13 + 0xf4 ) = *(uint*)( (long)param_13 + 0xf4 ) | uVar19;
            if (*(uint*)( param_13 + 0x1e ) < uVar35) {
               *(uint*)( param_13 + 0x1e ) = uVar35;
            }

            uVar19 = 0;
            puVar39 = local_f0;
            puVar41 = local_208 + 2;
            goto LAB_0010377e;
         }

         if (0x80030000 < uVar32) {
            if (uVar32 == 0x80040000) {
               LAB_0010522c:puVar41 = puVar39 + 3;
               uVar19 = puVar39[1];
               puVar45 = (undefined8*)param_13[0x17];
               local_1f0 = CONCAT44(puVar39[2], puVar39[3]);
               lVar37 = param_13[7] + local_1f0 * 4;
               local_f0 = puVar41;
               if ((short)param_13[0x16] != 0) {
                  uVar36 = 0;
                  uVar35 = 0;
                  sVar4 = 0;
                  do {
                     if (( uVar19 == *(ushort*)( (long)puVar45 + 0xc ) ) && ( iVar31 = iVar31 == 0 )) {
                        sVar4 = *(short*)( (long)puVar45 + 0xe );
                        uVar18 = *(uint*)( puVar45 + 1 );
                        uVar36 = (ulong)uVar18;
                        if (uVar32 == 0x80210000) goto LAB_0010547c;
                        uVar21 = 1 << ( (byte)uVar18 & 0x1f );
                        if (0x1f < uVar18) {
                           uVar21 = 1;
                        }

                        *(uint*)( (long)param_13 + 0xf4 ) = *(uint*)( (long)param_13 + 0xf4 ) | uVar21;
                        if (*(uint*)( param_13 + 0x1e ) < uVar18) {
                           *(uint*)( param_13 + 0x1e ) = uVar18;
                        }

                     }

                     uVar35 = uVar35 + 1;
                     puVar45 = puVar45 + 2;
                  }
 while ( uVar35 < *(ushort*)( param_13 + 0x16 ) );
                  if ((int)uVar36 == 0) goto LAB_00106e02;
                  if (sVar4 == 0) goto LAB_00104dc6;
                  local_fc = 0;
                  local_d0 = 0;
                  if (( param_14 != (long*)0x0 ) || ( iVar31 = find_dupname_details_constprop_0(lVar37, uVar19, &local_d0, &local_fc, param_5, param_13) ),iVar31 != 0) {
                     local_208[1] = local_d0;
                     local_208[2] = local_fc;
                     uVar35 = 0xfffffffe;
                     if (local_23c != 0xffffffff) {
                        uVar35 = local_23c;
                     }

                     uVar19 = 0;
                     *local_208 = ( ( local_240 & 8 ) != 0 ) + 0x73;
                     puVar39 = puVar41;
                     puVar41 = local_208 + 3;
                     local_23c = uVar35;
                     goto LAB_0010377e;
                  }

                  goto LAB_00103ce4;
               }

               goto LAB_00106e02;
            }

            if (uVar32 != 0x80050000) goto LAB_00103ee8;
            puVar24 = puVar39 + 1;
            uVar35 = puVar39[1];
            local_f0 = puVar24;
            LAB_0010509c:uVar32 = local_240 & 8;
            if (( local_1e8 & 0xa0000 ) != 0) {
               if (uVar32 != 0) {
                  puVar27 = &_pcre2_dummy_ucd_record_32;
                  if (uVar35 < 0x110000) {
                     puVar27 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar35 >> 7 ) * 2 ) * 0x80 + ( uVar35 & 0x7f ) ) * 2 ) * 0xc;
                  }

                  bVar1 = puVar27[3];
                  if (( bVar1 != 0 ) && ( ( ( local_220 & 0x80 ) == 0 || ( 0x7f < *(uint*)( &_pcre2_ucd_caseless_sets_32 + (ulong)(uint)bVar1 * 4 ) ) ) )) {
                     local_208[2] = (uint)bVar1;
                     uVar19 = 1;
                     *(undefined8*)local_208 = uVar14;
                     puVar39 = puVar24;
                     puVar41 = local_208 + 3;
                     if (local_23c == 0xffffffff) {
                        local_20c = 0xfffffffe;
                        local_23c = 0xfffffffe;
                     }

                     goto LAB_0010377e;
                  }

                  goto LAB_001059ce;
               }

               uVar19 = 0;
               local_20c = local_1e4 ^ 1;
               goto LAB_001051c1;
            }

            uVar19 = 0;
            local_20c = local_1e4 ^ 1;
            LAB_001050c5:local_a8[0] = uVar35;
            bVar47 = true;
            lVar37 = 4;
            uVar20 = 1;
            __n = 4;
            LAB_001050e9:*local_208 = 0x1e - ( uVar32 == 0 );
            pvVar26 = memcpy(local_208 + 1, local_a8, __n);
            puVar41 = (uint*)( (long)pvVar26 + lVar37 );
            uVar35 = local_21c;
            if (( local_a8[0] == 0xd ) || ( local_a8[0] == 10 )) {
               *(uint*)( param_13 + 0x19 ) = *(uint*)( param_13 + 0x19 ) | 0x800;
               if (local_23c == 0xffffffff) goto LAB_00105377;
               LAB_0010513b:if (( local_20c != 0 ) || ( bVar47 )) {
                  local_20c = local_23c;
                  local_200 = local_210;
                  uVar35 = puVar41[-1];
                  uVar33 = local_1e4 | *(uint*)( param_13 + 0x23 );
               }
 else {
                  local_20c = local_23c;
                  local_200 = local_210;
               }

            }
 else {
               if (local_23c != 0xffffffff) goto LAB_0010513b;
               LAB_00105377:if (uVar20 == 1) {
                  LAB_00106905:local_210 = local_a8[0];
                  local_20c = 0xfffffffe;
                  local_23c = local_1e4;
               }
 else if (local_1e4 == 0) {
                  if (uVar20 == 1) goto LAB_00106905;
                  local_23c = local_1e4;
                  local_20c = 0xfffffffe;
                  uVar35 = puVar41[-1];
                  local_210 = local_a8[0];
                  uVar33 = *(uint*)( param_13 + 0x23 );
               }
 else {
                  local_20c = 0xfffffffe;
                  local_23c = 0xfffffffe;
                  uVar33 = 0xfffffffe;
               }

            }

            puVar39 = puVar24;
            if (uVar19 == 0) {
               uVar19 = 1;
               local_1fc = local_21c;
               local_21c = uVar35;
               uVar20 = local_224;
            }
 else {
               local_240 = local_240 & 0xfffffff7;
               local_1e4 = 0;
               local_1fc = local_21c;
               local_21c = uVar35;
               uVar20 = local_224;
            }

            goto LAB_0010377e;
         }

         if (uVar32 == 0x80020000) {
            uVar35 = 0x85;
            uVar40 = 0;
            bVar47 = true;
            uVar32 = 0x85;
            goto LAB_00103630;
         }

         if (0x80020000 < uVar32) goto LAB_00103ee8;
         if (( uVar35 & 0xfffe0000 ) != 0x80000000) {
            if (-1 < (int)uVar32) goto LAB_0010509c;
            goto LAB_00103ee8;
         }

         if ((int)uVar18 < 0) {
            uVar16 = 0xffffffff;
         }

         if (param_14 == (long*)0x0) {
            LAB_001064a3:if (*local_188 == 0x78) {
               if (( local_16c == local_23c ) && ( local_164 == local_210 )) {
                  if (0xfffffffd < local_23c) {
                     LAB_00106576:local_23c = local_16c;
                  }

                  local_210 = local_21c;
               }
 else {
                  if (( local_16c < 0xfffffffe ) && ( 0xfffffffd < local_168 )) {
                     local_168 = local_16c;
                     local_160 = local_164;
                  }

                  local_16c = 0xfffffffe;
                  if (( 0xfffffffd < local_23c ) || ( local_16c = local_224 < 0xfffffffe )) goto LAB_00106576;
                  local_224 = local_23c;
                  local_23c = 0xfffffffe;
               }

               local_21c = local_160;
               if (( ( ( local_224 ^ local_168 ) & 0xfffffffd ) == 0 ) && ( local_210 == local_160 )) {
                  local_224 = local_224 | local_168;
                  local_210 = local_164;
               }
 else {
                  local_210 = local_164;
                  local_224 = 0xfffffffe;
               }

            }

            local_250 = local_208 + 2;
            if (uVar32 != 0x80010000) {
               uVar36 = (long)local_208 - (long)local_188 >> 2;
               do {
                  uVar28 = (ulong)local_188[1];
                  local_188[1] = (uint)uVar36;
                  local_188 = local_188 + -uVar28;
                  uVar36 = uVar28;
               }
 while ( uVar28 != 0 );
               local_208[1] = ( uint )((long)local_208 - (long)puVar5 >> 2);
               *local_208 = 0x79;
               *param_3 = (long)local_250;
               *param_4 = puVar39;
               *param_7 = local_210;
               *param_8 = local_23c;
               *param_9 = local_21c;
               *param_10 = local_224;
               goto LAB_00103ce7;
            }

            *local_208 = 0x78;
            local_208[1] = ( uint )((long)local_208 - (long)local_188 >> 2);
            local_168 = local_224;
            local_b8._8_8_ = local_208;
            uVar36 = ( ulong )(ushort) * puVar39;
            local_16c = local_23c;
            local_160 = local_21c;
            local_164 = local_210;
            local_188 = local_208;
         }
 else {
            if (uVar32 != 0x80010000) goto LAB_0010660c;
            local_f8 = local_f8 + 2;
            local_250 = (uint*)( ( ulong )(param_6 + 2) * 4 + *param_3 );
         }

         puVar39 = puVar39 + 1;
         local_1e8 = local_1d8;
      }
 while ( true );
   }

   *param_5 = 0x85;
   LAB_00103ce4:uVar16 = 0;
   LAB_00103ce7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar16;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_0010660c:*local_208 = 0x79;
   lVar37 = *param_14;
   local_208[1] = ( uint )((long)local_208 - (long)puVar5 >> 2);
   *param_3 = (long)( local_208 + 2 );
   *param_4 = puVar39;
   *param_7 = local_164;
   *param_8 = local_16c;
   *param_9 = local_160;
   *param_10 = local_168;
   if (local_f8 <= 0x7fffffebU - lVar37) {
      *param_14 = lVar37 + local_f8;
      goto LAB_00103ce7;
   }

   LAB_00104f80:*param_5 = 0x78;
   goto LAB_00103ce4;
}
void *pcre2_code_copy_32(undefined8 *param_1) {
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
void *pcre2_code_copy_with_tables_32(undefined8 *param_1) {
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
void pcre2_code_free_32(long param_1) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long lVar2;
   undefined8 uVar3;
   if (param_1 != 0) {
      if (*(long*)( param_1 + 0x20 ) != 0) {
         _pcre2_jit_free_32(*(long*)( param_1 + 0x20 ), param_1);
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

      /* WARNING: Could not recover jumptable at 0x00107837. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(param_1, uVar3);
      return;
   }

   return;
}
long pcre2_compile_32(uint *param_1, long param_2, uint param_3, uint *param_4, undefined1 *param_5, undefined8 param_6) {
   int *piVar1;
   short sVar2;
   ushort uVar3;
   undefined4 uVar4;
   uint uVar5;
   code *pcVar6;
   undefined8 *puVar7;
   short *psVar8;
   undefined2 *puVar9;
   bool bVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   ushort uVar13;
   int iVar14;
   int iVar15;
   uint uVar16;
   uint uVar17;
   undefined4 uVar18;
   undefined *puVar19;
   undefined8 uVar20;
   ulong uVar21;
   undefined8 *puVar22;
   uint *puVar23;
   void *pvVar24;
   ulong uVar25;
   long lVar26;
   uint *puVar27;
   undefined1(*pauVar28)[16];
   undefined4 *puVar29;
   uint *puVar30;
   ulong uVar31;
   uint *puVar32;
   undefined1(*pauVar33)[16];
   uint uVar34;
   long lVar35;
   uint *extraout_RDX;
   uint *extraout_RDX_00;
   uint *extraout_RDX_01;
   long lVar36;
   uint *extraout_RDX_02;
   uint *extraout_RDX_03;
   uint *extraout_RDX_04;
   uint *extraout_RDX_05;
   uint *extraout_RDX_06;
   uint *extraout_RDX_07;
   uint *extraout_RDX_08;
   uint *extraout_RDX_09;
   uint *extraout_RDX_10;
   uint *extraout_RDX_11;
   uint *extraout_RDX_12;
   undefined4 *puVar37;
   uint *extraout_RDX_13;
   uint *extraout_RDX_14;
   uint *extraout_RDX_15;
   uint *extraout_RDX_16;
   uint *extraout_RDX_17;
   uint *extraout_RDX_18;
   uint *extraout_RDX_19;
   uint *extraout_RDX_20;
   uint *extraout_RDX_21;
   uint *extraout_RDX_22;
   uint *extraout_RDX_23;
   uint *extraout_RDX_24;
   size_t __n;
   int *piVar38;
   undefined *puVar39;
   undefined1 *puVar40;
   uint uVar41;
   ulong uVar42;
   char *pcVar43;
   undefined2 uVar44;
   uint *puVar45;
   undefined1 *puVar46;
   int iVar47;
   uint uVar48;
   uint *puVar49;
   undefined8 *puVar50;
   undefined1 *puVar51;
   uint *puVar52;
   undefined **ppuVar53;
   uint *puVar54;
   long in_FS_OFFSET;
   bool bVar55;
   bool bVar56;
   undefined8 extraout_XMM0_Qa;
   undefined8 extraout_XMM0_Qa_00;
   undefined8 extraout_XMM0_Qa_01;
   undefined8 extraout_XMM0_Qa_02;
   undefined8 extraout_XMM0_Qa_03;
   undefined8 extraout_XMM0_Qa_04;
   undefined8 extraout_XMM0_Qa_05;
   undefined8 extraout_XMM0_Qa_06;
   undefined8 extraout_XMM0_Qa_07;
   undefined8 extraout_XMM0_Qa_08;
   undefined8 extraout_XMM0_Qa_09;
   undefined8 extraout_XMM0_Qa_10;
   undefined8 extraout_XMM0_Qa_11;
   undefined8 extraout_XMM0_Qa_12;
   undefined8 extraout_XMM0_Qa_13;
   undefined8 extraout_XMM0_Qa_14;
   undefined8 extraout_XMM0_Qa_15;
   undefined8 extraout_XMM0_Qa_16;
   undefined8 extraout_XMM0_Qa_17;
   undefined8 extraout_XMM0_Qa_18;
   undefined8 extraout_XMM0_Qa_19;
   undefined8 extraout_XMM0_Qa_20;
   undefined8 extraout_XMM0_Qa_21;
   undefined8 extraout_XMM0_Qa_22;
   undefined8 extraout_XMM0_Qa_23;
   undefined8 extraout_XMM0_Qa_24;
   undefined8 extraout_XMM0_Qa_25;
   undefined8 extraout_XMM0_Qa_26;
   undefined8 extraout_XMM0_Qa_27;
   undefined8 extraout_XMM0_Qa_28;
   undefined8 extraout_XMM0_Qa_29;
   undefined8 extraout_XMM0_Qa_30;
   undefined8 extraout_XMM0_Qa_31;
   undefined8 extraout_XMM0_Qa_32;
   undefined8 extraout_XMM0_Qa_33;
   undefined8 extraout_XMM0_Qa_34;
   undefined8 extraout_XMM0_Qa_35;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM0_Qb_00;
   undefined8 extraout_XMM0_Qb_01;
   undefined8 extraout_XMM0_Qb_02;
   undefined8 extraout_XMM0_Qb_03;
   undefined8 extraout_XMM0_Qb_04;
   undefined8 extraout_XMM0_Qb_05;
   undefined8 extraout_XMM0_Qb_06;
   undefined8 extraout_XMM0_Qb_07;
   undefined8 extraout_XMM0_Qb_08;
   undefined8 extraout_XMM0_Qb_09;
   undefined8 extraout_XMM0_Qb_10;
   undefined8 extraout_XMM0_Qb_11;
   undefined8 extraout_XMM0_Qb_12;
   undefined8 extraout_XMM0_Qb_13;
   undefined8 extraout_XMM0_Qb_14;
   undefined8 extraout_XMM0_Qb_15;
   undefined1 extraout_XMM0[16];
   undefined8 extraout_XMM0_Qb_16;
   undefined8 extraout_XMM0_Qb_17;
   undefined8 extraout_XMM0_Qb_18;
   undefined8 extraout_XMM0_Qb_19;
   undefined8 extraout_XMM0_Qb_20;
   undefined8 extraout_XMM0_Qb_21;
   undefined8 extraout_XMM0_Qb_22;
   undefined8 extraout_XMM0_Qb_23;
   undefined8 extraout_XMM0_Qb_24;
   undefined8 extraout_XMM0_Qb_25;
   undefined8 extraout_XMM0_Qb_26;
   undefined8 extraout_XMM0_Qb_27;
   undefined8 extraout_XMM0_Qb_28;
   undefined1 extraout_XMM0_00[16];
   undefined8 extraout_XMM0_Qb_29;
   undefined8 extraout_XMM0_Qb_30;
   undefined8 extraout_XMM0_Qb_31;
   undefined8 extraout_XMM0_Qb_32;
   undefined8 extraout_XMM0_Qb_33;
   undefined8 extraout_XMM0_Qb_34;
   undefined8 extraout_XMM0_Qb_35;
   undefined8 extraout_XMM0_Qb_36;
   undefined8 extraout_XMM1_Qa;
   undefined8 extraout_XMM1_Qb;
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   long lStack_7508;
   undefined4 auStack_7500[308];
   undefined1 local_7030[28672];
   undefined1 auVar57[16];
   puVar51 = &stack0xffffffffffffffd0;
   do {
      puVar40 = puVar51;
      *(undefined8*)( puVar40 + -0x1000 ) = *(undefined8*)( puVar40 + -0x1000 );
      puVar51 = puVar40 + -0x1000;
   }
 while ( puVar40 + -0x1000 != local_7030 );
   *(long*)( puVar40 + -0x1678 ) = param_2;
   uVar25 = (ulong)param_3;
   *(undefined1**)( puVar40 + -0x1638 ) = param_5;
   *(undefined8*)( puVar40 + -0x1660 ) = param_6;
   *(undefined8*)( puVar40 + 0x5ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( puVar40 + -0x1508 ) = 1;
   *(undefined4*)( puVar40 + -0x1530 ) = 0;
   if (param_4 == (uint*)0x0 || (uint*)param_5 == (uint*)0x0) {
      LAB_00108a27:lVar35 = 0;
      goto LAB_00108a30;
   }

   *param_4 = 100;
   *(uint*)( (long)param_5 + 0 ) = 0;
   *(uint*)( (long)param_5 + 4 ) = 0;
   if (( param_1 == (uint*)0x0 ) && ( param_1 = param_2 != 0 )) {
      *param_4 = 0x74;
      goto LAB_00108a27;
   }

   puVar39 = &_pcre2_default_compile_context_32;
   if (*(undefined**)( puVar40 + -0x1660 ) != (undefined*)0x0) {
      puVar39 = *(undefined**)( puVar40 + -0x1660 );
   }

   *(undefined**)( puVar40 + -0x1660 ) = puVar39;
   if (( param_3 & 0x4000000 ) != 0) {
      uVar25 = ( ulong )(param_3 | 0x80000);
   }

   if (( ( uVar25 & 0x18000000 ) != 0 ) || ( 0x1fff < *(uint*)( puVar39 + 0x40 ) )) {
      *param_4 = 0x75;
      goto LAB_00108a27;
   }

   if (( ( uVar25 & 0x2000000 ) != 0 ) && ( ( uVar25 & 0x1976fef3 ) != 0 || ( *(uint*)( puVar39 + 0x40 ) & 0xffffff73 ) != 0 )) {
      *param_4 = 0xc0;
      goto LAB_00108a27;
   }

   if (*(long*)( puVar40 + -0x1678 ) == -1) {
      *(uint**)( puVar40 + -0x1658 ) = param_1;
      *(undefined8*)( puVar40 + -0x1680 ) = 0x108cbc;
      uVar20 = _pcre2_strlen_32();
      param_1 = *(uint**)( puVar40 + -0x1658 );
      *(undefined8*)( puVar40 + -0x1678 ) = uVar20;
   }

   if (*(ulong*)( *(long*)( puVar40 + -0x1660 ) + 0x30 ) < *(ulong*)( puVar40 + -0x1678 )) {
      *param_4 = 0xbc;
      goto LAB_00108a27;
   }

   lVar35 = *(long*)( puVar40 + -0x1660 );
   *(undefined8*)( puVar40 + -0x13b0 ) = 0;
   *(int*)( puVar40 + -0x1394 ) = (int)uVar25;
   puVar39 = *(undefined**)( lVar35 + 0x28 );
   *(long*)( puVar40 + -0x1458 ) = lVar35;
   *(undefined8*)( puVar40 + -0x132c ) = 0;
   *(undefined8*)( puVar40 + -0x1390 ) = 0;
   puVar19 = &_pcre2_default_tables_32;
   if (puVar39 != (undefined*)0x0) {
      puVar19 = puVar39;
   }

   *(undefined4*)( puVar40 + -5000 ) = 0;
   *(undefined4*)( puVar40 + -0x1338 ) = 0;
   *(undefined**)( puVar40 + -0x15a0 ) = puVar19;
   *(undefined**)( puVar40 + -0x1450 ) = puVar19;
   *(undefined**)( puVar40 + -0x1448 ) = puVar19 + 0x100;
   *(undefined**)( puVar40 + -0x1440 ) = puVar19 + 0x200;
   *(undefined**)( puVar40 + -0x1438 ) = puVar19 + 0x340;
   *(undefined8*)( puVar40 + -0x1410 ) = 0;
   *(undefined4*)( puVar40 + -0x1398 ) = 0x14;
   *(uint**)( puVar40 + -0x1418 ) = param_1 + *(long*)( puVar40 + -0x1678 );
   *(undefined1**)( puVar40 + -0x1608 ) = puVar40 + -0x11d8;
   *(undefined1**)( puVar40 + -0x1370 ) = puVar40 + -0x11d8;
   uVar18 = *(undefined4*)( lVar35 + 0x44 );
   *(undefined8*)( puVar40 + -0x13a8 ) = 0;
   *(undefined4*)( puVar40 + -0x133c ) = uVar18;
   *(undefined1**)( puVar40 + -0x13a0 ) = puVar40 + -0x1318;
   *(undefined1**)( puVar40 + -0x1600 ) = puVar40 + -0xdd8;
   *(undefined1**)( puVar40 + -0x1380 ) = puVar40 + -0xdd8;
   puVar51 = puVar40 + 0x228;
   *(uint**)( puVar40 + -0x1420 ) = param_1;
   *(undefined4*)( puVar40 + -0x1340 ) = 0;
   *(undefined1**)( puVar40 + -0x1430 ) = puVar51;
   *(undefined1**)( puVar40 + -0x1428 ) = puVar51;
   auVar58._8_4_ = 0xffffffff;
   auVar58._0_8_ = 0xffffffffffffffff;
   auVar58._12_4_ = 0xffffffff;
   *(undefined1**)( puVar40 + -0x15a8 ) = puVar51;
   *(undefined8*)( puVar40 + -0x1408 ) = 3000;
   *(undefined8*)( puVar40 + -0x1368 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined1(*) [16])( puVar40 + ( 16*i + -5120 ) ) = auVar58;
   }

   if (( uVar25 & 0x2000000 ) == 0) {
      *(undefined4*)( puVar40 + -0x15e8 ) = 0;
      *(undefined4*)( puVar40 + -0x15f8 ) = 0;
      *(undefined4*)( puVar40 + -0x1624 ) = 0;
      *(undefined4*)( puVar40 + -0x15c8 ) = 0xffffffff;
      *(undefined4*)( puVar40 + -0x1598 ) = 0xffffffff;
      *(undefined4*)( puVar40 + -0x15b8 ) = 0xffffffff;
      *(int*)( puVar40 + -0x163c ) = (int)uVar25;
      uVar34 = 0;
      *(uint**)( puVar40 + -0x1648 ) = param_4;
      switchD_00108b8a_default:lVar35 = *(long*)( puVar40 + -0x1678 );
      uVar31 = (ulong)uVar34;
      puVar30 = param_1 + uVar31;
      param_5 = (undefined1*)puVar30;
      if (( ( 1 < lVar35 - uVar31 ) && ( *puVar30 == 0x28 ) ) && ( param_1[uVar34 + 1] == 0x2a )) {
         *(uint*)( puVar40 + -0x1650 ) = uVar34;
         iVar47 = 0;
         *(ulong*)( puVar40 + -0x1658 ) = uVar31;
         ppuVar53 = &pso_list;
         do {
            if (( ulong ) * (ushort*)( ppuVar53 + 1 ) <= ( lVar35 - uVar31 ) - 2) {
               puVar39 = *ppuVar53;
               *(undefined8*)( puVar40 + -0x1680 ) = 0x108b57;
               iVar14 = _pcre2_strncmp_c8_32(param_1 + uVar31 + 2, puVar39);
               auVar58._8_8_ = extraout_XMM0_Qb;
               auVar58._0_8_ = extraout_XMM0_Qa;
               if (iVar14 == 0) goto code_r0x00108b5b;
            }

            iVar47 = iVar47 + 1;
            ppuVar53 = ppuVar53 + 2;
            if (iVar47 == 0x15) {
               uVar31 = *(ulong*)( puVar40 + -0x1658 );
               uVar25 = ( ulong ) * (uint*)( puVar40 + -0x163c );
               param_4 = *(uint**)( puVar40 + -0x1648 );
               uVar42 = ( ulong ) * (uint*)( puVar40 + -0x1394 );
               goto LAB_00108970;
            }

         }
 while ( true );
      }

      uVar25 = ( ulong ) * (uint*)( puVar40 + -0x163c );
      param_4 = *(uint**)( puVar40 + -0x1648 );
      uVar42 = ( ulong ) * (uint*)( puVar40 + -0x1394 );
      goto LAB_00108970;
   }

   *(undefined4*)( puVar40 + -0x1624 ) = 0;
   uVar31 = 0;
   *(undefined4*)( puVar40 + -0x15e8 ) = 0;
   *(undefined4*)( puVar40 + -0x15f8 ) = 0;
   *(undefined4*)( puVar40 + -0x15c8 ) = 0xffffffff;
   *(undefined4*)( puVar40 + -0x1598 ) = 0xffffffff;
   *(undefined4*)( puVar40 + -0x15b8 ) = 0xffffffff;
   puVar30 = param_1;
   uVar42 = uVar25;
   LAB_00108970:*(uint*)( puVar40 + -0x15f4 ) = (uint)uVar42 & 0x80000;
   uVar18 = (undefined4)uVar25;
   if (( uVar42 & 0x80000 ) == 0) goto LAB_0010899b;
   if (( uVar25 & 0x1000 ) != 0) {
      uVar16 = 0xae;
      lVar35 = 0;
      *(undefined4*)( puVar40 + -0x1530 ) = 0xae;
      uVar25 = (long)puVar30 - (long)param_1 >> 2;
      goto LAB_00108cf4;
   }

   if (( uVar25 & 0x40000000 ) == 0) {
      *(uint**)( puVar40 + -0x1658 ) = param_1;
      *(undefined8*)( puVar40 + -0x1680 ) = 0x109a3e;
      uVar16 = _pcre2_valid_utf_32(param_1, *(undefined8*)( puVar40 + -0x1678 ), *(undefined8*)( puVar40 + -0x1638 ));
      auVar58._8_8_ = extraout_XMM0_Qb_02;
      auVar58._0_8_ = extraout_XMM0_Qa_02;
      *(uint*)( puVar40 + -0x1530 ) = uVar16;
      if (uVar16 == 0) {
         uVar42 = ( ulong ) * (uint*)( puVar40 + -0x1394 );
         param_1 = *(uint**)( puVar40 + -0x1658 );
         goto LAB_0010899b;
      }

      lVar35 = 0;
      goto LAB_00108cfc;
   }

   LAB_0010899b:uVar34 = (uint)uVar42;
   if (( ~uVar34 & 0x20800 ) == 0) {
      uVar16 = 0xaf;
      lVar35 = 0;
      *(undefined4*)( puVar40 + -0x1530 ) = 0xaf;
      uVar25 = (long)puVar30 - (long)param_1 >> 2;
      goto LAB_00108cf4;
   }

   if (*(int*)( puVar40 + -0x15f8 ) == 0) {
      *(uint*)( puVar40 + -0x15f8 ) = ( uint ) * (ushort*)( *(long*)( puVar40 + -0x1660 ) + 0x38 );
   }

   if (*(int*)( puVar40 + -0x1624 ) == 0) {
      *(uint*)( puVar40 + -0x1624 ) = ( uint ) * (ushort*)( *(long*)( puVar40 + -0x1660 ) + 0x3a );
   }

   *(undefined4*)( puVar40 + -0x1360 ) = 0;
   switch (*(undefined4*)( puVar40 + -0x1624 )) {
      default:
    uVar16 = 0x9c;
    lVar35 = 0;
    *(undefined4 *)(puVar40 + -0x1530) = 0x9c;
    uVar25 = (long)puVar30 - (long)param_1 >> 2;
    goto LAB_00108cf4;
      case 1:
    *(undefined4 *)(puVar40 + -0x135c) = 1;
    *(undefined4 *)(puVar40 + -0x1350) = 0xd;
    break;
      case 2:
    *(undefined4 *)(puVar40 + -0x135c) = 1;
    *(undefined4 *)(puVar40 + -0x1350) = 10;
    break;
      case 3:
    *(undefined4 *)(puVar40 + -0x135c) = 2;
    *(undefined8 *)(puVar40 + -0x1350) = _LC16;
    break;
      case 4:
    *(undefined4 *)(puVar40 + -0x1360) = 1;
    break;
      case 5:
    *(undefined4 *)(puVar40 + -0x1360) = 2;
    break;
      case 6:
    *(undefined4 *)(puVar40 + -0x135c) = 1;
    *(undefined4 *)(puVar40 + -0x1350) = 0;
   }

   lVar35 = 0;
   if (*(int*)( puVar40 + -0x15f4 ) == 0) {
      for (puVar52 = puVar30; puVar52 < *(uint**)( puVar40 + -0x1418 ); puVar52 = puVar52 + 1) {
         lVar35 = ( lVar35 + 1 ) - ( ulong )(*puVar52 < 0x80000000);
      }

   }

   uVar21 = ( *(long*)( puVar40 + -0x1678 ) - uVar31 ) + lVar35;
   if (( *(byte*)( *(long*)( puVar40 + -0x1660 ) + 0x40 ) & 0xc ) != 0) {
      uVar21 = ( *(long*)( puVar40 + -0x1678 ) - uVar31 ) + lVar35 + 4;
   }

   if (( uVar25 & 4 ) != 0) {
      uVar21 = uVar21 * 5 + 5;
   }

   lVar35 = uVar21 * 4 + 4;
   if (uVar21 < 0x400) {
      puVar22 = *(undefined8**)( puVar40 + -0x1380 );
      LAB_00108e36:lVar35 = (long)puVar22 + lVar35;
      uVar48 = (uint)uVar42;
      *(uint**)( puVar40 + -0x1500 ) = puVar30;
      *(long*)( puVar40 + -0x15d0 ) = lVar35;
      uVar25 = ( ulong )(uVar48 & 4);
      puVar52 = *(uint**)( puVar40 + -0x1418 );
      *(long*)( puVar40 + -0x1378 ) = lVar35;
      lVar35 = *(long*)( puVar40 + -0x1458 );
      *(undefined8*)( puVar40 + -0x14f8 ) = 0;
      uVar16 = *(uint*)( lVar35 + 0x40 );
      *(uint*)( puVar40 + -0x157c ) = ( uint )(( uVar42 & 4 ) != 0);
      *(undefined4*)( puVar40 + -0x1524 ) = 0;
      *(uint*)( puVar40 + -0x15f0 ) = uVar16;
      uVar16 = uVar16 & 8;
      if (uVar16 == 0) {
         *(undefined8**)( puVar40 + -0x1658 ) = puVar22;
         if (( puVar40[-0x15f0] & 4 ) != 0) {
            *(undefined8**)( puVar40 + -0x1658 ) = puVar22 + 1;
            *puVar22 = _LC18;
         }

      }
 else {
         *(undefined8**)( puVar40 + -0x1658 ) = puVar22 + 1;
         *puVar22 = _LC17;
      }

      if (( uVar42 & 0x2000000 ) == 0) {
         *(ulong*)( puVar40 + -0x1570 ) = ( *(long*)( puVar40 + -0x1408 ) * 4 & 0xfffffffffffffff3U ) + *(long*)( puVar40 + -0x1430 );
         puVar23 = (uint*)( uVar42 | 0x80 );
         uVar17 = (uint)puVar23;
         if (( uVar42 & 0x1000000 ) == 0) {
            uVar17 = uVar48;
         }

         *(uint*)( puVar40 + -0x1580 ) = uVar17;
         *(ulong*)( puVar40 + -0x15b0 ) = CONCAT44(*(undefined4*)( puVar40 + -0x15f0 ), uVar17);
         if (puVar30 < puVar52) {
            *(undefined4*)( puVar40 + -0x151c ) = 0;
            *(undefined4*)( puVar40 + -0x1518 ) = 0;
            if (*(ulong*)( puVar40 + -0x1658 ) < *(ulong*)( puVar40 + -0x15d0 )) {
               *(undefined4*)( puVar40 + -0x1620 ) = 0;
               *(undefined8*)( puVar40 + -0x1630 ) = 0;
               puVar45 = (uint*)0x0;
               uVar25 = 0;
               *(undefined4*)( puVar40 + -0x1550 ) = 0;
               *(undefined4*)( puVar40 + -0x1594 ) = 0;
               *(undefined8*)( puVar40 + -0x1578 ) = 0;
               *(undefined8*)( puVar40 + -0x1560 ) = 0;
               *(undefined8*)( puVar40 + -0x1568 ) = 0;
               *(undefined4*)( puVar40 + -0x15d8 ) = 0;
               *(undefined4*)( puVar40 + -0x15e0 ) = 0;
               *(undefined8*)( puVar40 + -0x1618 ) = 0;
               *(undefined2*)( puVar40 + -0x1628 ) = 0;
               *(undefined4*)( puVar40 + -0x163c ) = uVar18;
               *(uint**)( puVar40 + -0x1650 ) = param_4;
               *(uint*)( puVar40 + -0x15c0 ) = uVar48 >> 0x13 & 1;
               puVar49 = (uint*)0x0;
               *(uint*)( puVar40 + -0x1648 ) = uVar34;
               uVar34 = 0;
               puVar32 = puVar30;
               puVar54 = puVar45;
               LAB_00109126:iVar47 = (int)puVar54;
               puVar23 = (uint*)( ulong ) * (ushort*)( puVar40 + -0x1628 );
               if (*(uint*)( lVar35 + 0x3c ) < ( uint ) * (ushort*)( puVar40 + -0x1628 )) goto LAB_0010a5b0;
               puVar27 = *(uint**)( puVar40 + -0x1658 );
               puVar30 = puVar32 + 1;
               uVar16 = *puVar32;
               *(uint**)( puVar40 + -0x1500 ) = puVar30;
               if (*(uint**)( puVar40 + -0x1618 ) != puVar27) {
                  puVar49 = *(uint**)( puVar40 + -0x1618 );
               }

               *(uint*)( puVar40 + -0x152c ) = uVar16;
               *(uint**)( puVar40 + -0x1618 ) = puVar49;
               puVar49 = puVar32;
               if (*(int*)( puVar40 + -0x15e0 ) != 0) {
                  if (( uVar16 == 0x5c ) && ( puVar30 < puVar52 )) {
                     if (puVar32[1] == 0x45) {
                        puVar30 = puVar32 + 2;
                        *(undefined4*)( puVar40 + -0x15e0 ) = 0;
                        *(uint**)( puVar40 + -0x1500 ) = puVar30;
                        goto LAB_00109787;
                     }

                     if (iVar47 < 1) {
                        if (*(int*)( puVar40 + -0x15d8 ) == 0) {
                           uVar34 = *(int*)( puVar40 + -0x1620 ) - 1;
                           puVar45 = (uint*)(ulong)uVar34;
                           if (*(int*)( puVar40 + -0x1620 ) < 1) goto LAB_0010a8a3;
                           *(uint*)( puVar40 + -0x1620 ) = uVar34;
                           puVar27 = *(uint**)( puVar40 + -0x1658 );
                           goto LAB_0010a0f0;
                        }

                        puVar27 = *(uint**)( puVar40 + -0x1658 );
                        goto LAB_0010984c;
                     }

                  }
 else if (iVar47 < 1) {
                     if (*(int*)( puVar40 + -0x15d8 ) == 0) {
                        uVar34 = *(int*)( puVar40 + -0x1620 ) - 1;
                        puVar45 = (uint*)(ulong)uVar34;
                        if (*(int*)( puVar40 + -0x1620 ) < 1) {
                           LAB_0010a8a3:param_5 = puVar40 + -0x1458;
                           *(undefined8*)( puVar40 + -0x1680 ) = 0x10a8c7;
                           puVar27 = (uint*)manage_callouts(puVar32, puVar40 + -0x14f8, *(undefined4*)( puVar40 + -0x157c ));
                           auVar58._8_8_ = extraout_XMM0_Qb_07;
                           auVar58._0_8_ = extraout_XMM0_Qa_07;
                           *(int*)( puVar40 + -0x1620 ) = (int)puVar45;
                        }
 else {
                           *(uint*)( puVar40 + -0x1620 ) = uVar34;
                           puVar27 = *(uint**)( puVar40 + -0x1658 );
                        }

                        if ((int)uVar16 < 0) {
                           *puVar27 = 0x80050000;
                           puVar27 = puVar27 + 1;
                        }

                        LAB_0010a0f0:*puVar27 = uVar16;
                        uVar34 = *(uint*)( puVar40 + -0x15e0 );
                        puVar27 = puVar27 + 1;
                        uVar25 = 0;
                        *(undefined4*)( puVar40 + -0x15d8 ) = 0;
                        goto LAB_00109787;
                     }

                     puVar27 = *(uint**)( puVar40 + -0x1658 );
                     if ((int)uVar16 < 0) {
                        *puVar27 = 0x80050000;
                        puVar27 = puVar27 + 1;
                     }

                     LAB_0010984c:uVar18 = *(undefined4*)( puVar40 + -0x15e0 );
                     *puVar27 = uVar16;
                     puVar27 = puVar27 + 1;
                     uVar25 = 0;
                     *(undefined4*)( puVar40 + -0x15d8 ) = uVar18;
                     goto LAB_00109787;
                  }

                  goto LAB_00109196;
               }

               uVar31 = *(ulong*)( puVar40 + -0x15b0 );
               *(int*)( puVar40 + -0x1590 ) = (int)( uVar31 >> 0x20 );
               *(uint*)( puVar40 + -0x1610 ) = (uint)uVar31;
               *(ulong*)( puVar40 + -0x1588 ) = uVar31 & _LC19;
               if (*(int*)( puVar40 + -0x15d8 ) == 0) {
                  if (uVar16 == 0x5c) {
                     LAB_00109c74:if (puVar30 < puVar52) {
                        uVar48 = puVar32[1];
                        puVar23 = (uint*)(ulong)uVar48;
                        if (( uVar48 == 0x45 ) || ( uVar48 == 0x51 )) {
                           puVar30 = puVar32 + 2;
                           *(uint*)( puVar40 + -0x15e0 ) = ( uint )(uVar48 == 0x51);
                           puVar27 = *(uint**)( puVar40 + -0x1658 );
                           *(uint**)( puVar40 + -0x1500 ) = puVar30;
                           goto LAB_00109787;
                        }

                     }

                     if (( puVar40[-0x1610] & 0x80 ) == 0) goto LAB_0010a053;
                     if (( *(byte*)( *(long*)( puVar40 + -0x1438 ) + 0x5c ) & 1 ) != 0) goto LAB_0010a2b5;
                     if (*(int*)( puVar40 + -0x1620 ) < 1) goto LAB_0010a878;
                     *(int*)( puVar40 + -0x1620 ) = *(int*)( puVar40 + -0x1620 ) + -1;
                     LAB_001098c1:if (iVar47 < 1) goto LAB_001098ca;
                     goto LAB_00109196;
                  }

                  if (( puVar40[-0x1610] & 0x80 ) != 0) {
                     if (uVar16 < 0x100) {
                        puVar23 = *(uint**)( puVar40 + -0x1438 );
                        if (( ( *(byte*)( (long)puVar23 + (ulong)uVar16 ) & 1 ) == 0 ) && ( uVar16 != 0x85 )) {
                           if (uVar16 == 0x23) goto LAB_0010aa9d;
                           goto LAB_00109cd9;
                        }

                        LAB_00109777:*(undefined4*)( puVar40 + -0x15e0 ) = 0;
                        puVar27 = *(uint**)( puVar40 + -0x1658 );
                     }
 else {
                        LAB_0010988b:puVar27 = *(uint**)( puVar40 + -0x1658 );
                        uVar48 = uVar16 | 1;
                        puVar23 = (uint*)(ulong)uVar48;
                        if (( uVar48 != 0x200f ) && ( uVar48 != 0x2029 )) goto LAB_001098ae;
                     }

                     goto LAB_00109787;
                  }

                  LAB_00109cd9:if (uVar16 != 0x28) {
                     LAB_001098ae:if (( uVar16 - 0x2a < 2 ) || ( uVar16 == 0x3f )) goto LAB_001098c1;
                     if (uVar16 != 0x7b) {
                        LAB_0010a82a:param_5 = (undefined1*)( ulong ) * (uint*)( puVar40 + -0x1620 );
                        if ((int)*(uint*)( puVar40 + -0x1620 ) < 1) goto LAB_0010a878;
                        goto LAB_0010a834;
                     }

                     *(int*)( puVar40 + -0x154c ) = (int)uVar25;
                     *(undefined4*)( puVar40 + -0x1558 ) = 0x7b;
                     *(uint**)( puVar40 + -0x14e8 ) = puVar30;
                     *(undefined8*)( puVar40 + -0x1680 ) = 0x10a1f3;
                     iVar14 = read_repeat_counts(puVar40 + -0x14e8, puVar52, 0, 0, puVar40 + -0x1524);
                     auVar58._8_8_ = extraout_XMM0_Qb_03;
                     auVar58._0_8_ = extraout_XMM0_Qa_03;
                     uVar16 = *(uint*)( puVar40 + -0x1558 );
                     uVar25 = ( ulong ) * (uint*)( puVar40 + -0x154c );
                     puVar23 = extraout_RDX;
                     if (iVar14 == 0) goto LAB_0010a82a;
                     if (0 < iVar47) goto LAB_00109196;
                     goto LAB_0010a214;
                  }

                  if (( ( 4 < (long)puVar52 - (long)puVar30 ) && ( puVar32[1] == 0x3f ) ) && ( puVar32[2] == 0x23 )) {
                     do {
                        puVar32 = puVar30;
                        puVar49 = puVar32 + 1;
                        if (puVar52 <= puVar49) {
                           uVar34 = *(uint*)( puVar40 + -0x1648 );
                           uVar18 = *(undefined4*)( puVar40 + -0x163c );
                           uVar16 = 0x76;
                           param_4 = *(uint**)( puVar40 + -0x1650 );
                           goto LAB_001091ab;
                        }

                        puVar30 = puVar49;
                     }
 while ( *puVar49 != 0x29 );
                     puVar30 = puVar32 + 2;
                     puVar27 = *(uint**)( puVar40 + -0x1658 );
                     *(uint**)( puVar40 + -0x1500 ) = puVar30;
                     goto LAB_00109787;
                  }

                  if (*(int*)( puVar40 + -0x1620 ) < 1) goto LAB_0010a878;
                  *(int*)( puVar40 + -0x1620 ) = *(int*)( puVar40 + -0x1620 ) + -1;
                  if (iVar47 < 1) goto LAB_001098ca;
                  LAB_00109d15:if (8 < (long)puVar52 - (long)puVar30) {
                     uVar34 = puVar32[1];
                     puVar23 = (uint*)(ulong)uVar34;
                     if (( uVar34 == 0x3f ) || ( uVar34 == 0x2a )) {
                        uVar16 = puVar32[2];
                        if (uVar34 == 0x2a) {
                           if (( uVar16 < 0x100 ) && ( puVar23 = *(uint**)( puVar40 + -0x1438 )(*(byte*)( (long)puVar23 + (ulong)uVar16 ) & 4) != 0 )) {
                              if (puVar30 < puVar52) goto LAB_0010a2e5;
                              goto LAB_00109d75;
                           }

                        }
 else {
                           if (uVar16 == 0x3d) {
                              LAB_00109d6c:if (puVar30 < puVar52) goto LAB_0010b9d5;
                              goto LAB_00109d75;
                           }

                           if (uVar16 < 0x3e) {
                              if (( uVar16 == 0x21 ) || ( ( uVar16 == 0x3c && ( ( puVar32[3] == 0x3d || ( puVar32[3] == 0x21 ) ) ) ) )) goto LAB_00109d6c;
                           }
 else if (( uVar16 == 0x43 ) && ( iVar47 == 2 )) goto LAB_00109d6c;
                        }

                     }

                  }

                  LAB_00109196:uVar34 = *(uint*)( puVar40 + -0x1648 );
                  uVar18 = *(undefined4*)( puVar40 + -0x163c );
                  uVar16 = 0x80;
                  param_4 = *(uint**)( puVar40 + -0x1650 );
                  goto LAB_001091ab;
               }

               if (( ~(uint)uVar31 & 0x400080 ) == 0) {
                  if (uVar16 < 0x100) {
                     if (uVar16 != 0x23) {
                        puVar23 = *(uint**)( puVar40 + -0x1438 );
                        if (( *(byte*)( (long)puVar23 + (ulong)uVar16 ) & 1 ) == 0) {
                           if (uVar16 != 0x85) {
                              if (uVar16 == 0x29) goto LAB_00109e16;
                              puVar27 = *(uint**)( puVar40 + -0x1658 );
                              if (uVar16 == 0x5c) goto LAB_001096ed;
                              goto LAB_00109e0a;
                           }

                           if (( puVar40[-0x1610] & 0x80 ) == 0) goto LAB_0010a053;
                        }
 else {
                           if (uVar16 == 0x5c) goto LAB_00109c74;
                           if (( puVar40[-0x1610] & 0x80 ) == 0) goto LAB_00109cd9;
                        }

                        LAB_0010a2b5:puVar27 = *(uint**)( puVar40 + -0x1658 );
                        goto LAB_00109787;
                     }

                     if (( puVar40[-0x1610] & 0x80 ) != 0) {
                        puVar27 = *(uint**)( puVar40 + -0x1658 );
                        if (( *(byte*)( *(long*)( puVar40 + -0x1438 ) + 0x23 ) & 1 ) == 0) {
                           LAB_0010aa9d:if (puVar52 <= puVar30) goto LAB_0010a2b5;
                           uVar25 = uVar25 & 0xffffffff;
                           do {
                              if (*(int*)( puVar40 + -0x1360 ) == 0) {
                                 if (( ( puVar30 <= *(uint**)( puVar40 + -0x1418 ) + -(ulong) * (uint*)( puVar40 + -0x135c ) ) && ( *puVar30 == *(uint*)( puVar40 + -0x1350 ) ) ) && ( ( *(uint*)( puVar40 + -0x135c ) == 1 || ( puVar30[1] == *(uint*)( puVar40 + -0x134c ) ) ) )) {
                                    LAB_0010ab1f:puVar30 = puVar30 + *(uint*)( puVar40 + -0x135c );
                                    puVar27 = *(uint**)( puVar40 + -0x1658 );
                                    *(uint**)( puVar40 + -0x1500 ) = puVar30;
                                    goto LAB_00109787;
                                 }

                              }
 else if (puVar30 < *(uint**)( puVar40 + -0x1418 )) {
                                 param_5 = (undefined1*)( ulong ) * (uint*)( puVar40 + -0x15c0 );
                                 *(undefined8*)( puVar40 + -0x1680 ) = 0x10abb1;
                                 iVar47 = _pcre2_is_newline_32(puVar30);
                                 auVar58._8_8_ = extraout_XMM0_Qb_09;
                                 auVar58._0_8_ = extraout_XMM0_Qa_09;
                                 if (iVar47 != 0) goto LAB_0010ab1f;
                              }

                              puVar30 = puVar30 + 1;
                              *(uint**)( puVar40 + -0x1500 ) = puVar30;
                           }
 while ( puVar30 < puVar52 );
                           puVar27 = *(uint**)( puVar40 + -0x1658 );
                        }

                        goto LAB_00109787;
                     }

                  }
 else {
                     if (( ( uVar16 | 1 ) != 0x200f ) && ( ( uVar16 | 1 ) != 0x2029 )) goto LAB_00109df3;
                     if (( puVar40[-0x1610] & 0x80 ) != 0) goto LAB_0010988b;
                  }

                  LAB_0010a053:if (*(int*)( puVar40 + -0x1620 ) < 1) {
                     LAB_0010a878:param_5 = puVar40 + -0x1458;
                     *(undefined8*)( puVar40 + -0x1680 ) = 0x10a89c;
                     uVar20 = manage_callouts(puVar32, puVar40 + -0x14f8, *(undefined4*)( puVar40 + -0x157c ));
                     auVar58._8_8_ = extraout_XMM0_Qb_06;
                     auVar58._0_8_ = extraout_XMM0_Qa_06;
                     *(undefined8*)( puVar40 + -0x1658 ) = uVar20;
                     puVar23 = extraout_RDX_02;
                     LAB_0010a834:*(int*)( puVar40 + -0x1620 ) = *(int*)( puVar40 + -0x1620 ) + -1;
                     if (0 < iVar47) {
                        if (uVar16 == 0x28) goto LAB_00109d15;
                        goto LAB_00109196;
                     }

                  }
 else {
                     if (0 < iVar47) goto LAB_00109196;
                     *(int*)( puVar40 + -0x1620 ) = *(int*)( puVar40 + -0x1620 ) + -1;
                  }

                  LAB_001098ca:iVar14 = (int)uVar25;
                  if (( iVar14 == 0 ) || ( ( uVar16 != 0x3f && ( uVar16 != 0x2b ) ) )) {
                     puVar23 = &switchD_001098fa::switchdataD_0010dff0;
                     switch (uVar16) {
                        case 0x24:
                puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                uVar34 = 0;
                puVar54 = (uint *)0x0;
                uVar25 = 0;
                *puVar29 = 0x80160000;
                pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                break;
                        default:
                puVar23 = *(uint **)(puVar40 + -0x1658);
                if ((int)uVar16 < 0) {
                  *puVar23 = 0x80050000;
                  puVar23 = puVar23 + 1;
                }
                *puVar23 = uVar16;
                puVar54 = (uint *)0x0;
                uVar25 = 0;
                uVar34 = 1;
                pauVar28 = (undefined1 (*) [16])(puVar23 + 1);
                break;
                        case 0x28:
                if (puVar52 <= puVar30) goto LAB_00109d75;
                if (puVar32[1] == 0x3f) {
LAB_0010b9d5:
                  puVar49 = puVar32 + 2;
                  *(uint **)(puVar40 + -0x1500) = puVar49;
                  puVar30 = puVar49;
                  if (puVar52 <= puVar49) goto LAB_00109d75;
                  uVar34 = puVar32[2];
                  puVar23 = &switchD_0010ba07::switchdataD_0010e1b4;
                  switch(uVar34) {
                  case 0x21:
                    goto switchD_0010ba07_caseD_21;
                  default:
                    if (((uVar34 == 0x2d) && (4 < (long)puVar52 - (long)puVar49)) &&
                       (puVar32[3] - 0x30 < 10)) goto LAB_0010b118;
                    uVar13 = *(ushort *)(puVar40 + -0x1628);
                    param_5 = (undefined1 *)(ulong)(uVar13 + 1);
                    if (*(long *)(puVar40 + -0x1630) != 0) {
                      *(long *)(puVar40 + -0x1630) = *(long *)(puVar40 + -0x1630) + 0x10;
                      if (*(ulong *)(puVar40 + -0x1630) < *(ulong *)(puVar40 + -0x1570))
                      goto LAB_0010cc8a;
                      goto LAB_0010b745;
                    }
                    *(undefined8 *)(puVar40 + -0x1630) = *(undefined8 *)(puVar40 + -0x1430);
LAB_0010cc8a:
                    puVar9 = *(undefined2 **)(puVar40 + -0x1630);
                    *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar40 + -0x1588);
                    uVar34 = puVar32[2];
                    uVar44 = (undefined2)(uVar13 + 1);
                    *puVar9 = uVar44;
                    puVar9[3] = 0;
                    if (uVar34 != 0x7c) {
                      *(undefined4 *)(puVar40 + -0x1510) = 0;
                      *(undefined4 *)(*(long *)(puVar40 + -0x1630) + 2) = 0;
                      *(undefined4 *)(puVar40 + -0x1514) = 0;
                      *(undefined4 *)(puVar40 + -0x14e0) = 0;
                      *(undefined4 *)(puVar40 + -0x150c) = 0;
                      if (uVar34 == 0x5e) {
                        *(uint **)(puVar40 + -0x1500) = puVar32 + 3;
                        *(ulong *)(puVar40 + -0x15b0) = *(ulong *)(puVar40 + -0x15b0) & _LC24;
                        uVar16 = *(uint *)(puVar40 + -0x1580) & 0xfeffdb57;
                        puVar45 = (uint *)((ulong)*(uint *)(puVar40 + -0x15f0) & 0xffffffffffffff7f)
                        ;
                      }
                      else {
                        puVar45 = (uint *)(ulong)*(uint *)(puVar40 + -0x15f0);
                        uVar16 = *(uint *)(puVar40 + -0x1580);
                      }
                      bVar55 = uVar34 != 0x5e;
                      puVar32 = (uint *)(puVar40 + -0x150c);
                      puVar23 = (uint *)(puVar40 + -0x1514);
                      puVar30 = *(uint **)(puVar40 + -0x1500);
                      bVar56 = false;
LAB_0010cf39:
                      puVar49 = puVar30;
                      if (puVar49 < puVar52) {
                        uVar34 = *puVar49;
                        bVar10 = uVar34 != 0x3a && uVar34 != 0x29;
                        if (uVar34 == 0x3a || uVar34 == 0x29) goto LAB_0010d01d;
                        puVar30 = puVar49 + 1;
                        bVar56 = bVar10;
                        switch(uVar34) {
                        case 0x2d:
                          if (!bVar55) {
                            uVar34 = *(uint *)(puVar40 + -0x1648);
                            uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                            uVar16 = 0xc2;
                            param_4 = *(uint **)(puVar40 + -0x1650);
                            goto LAB_001091ab;
                          }
                          bVar55 = false;
                          puVar32 = (uint *)(puVar40 + -0x14e0);
                          puVar23 = (uint *)(puVar40 + -0x1510);
                          break;
                        default:
                          uVar34 = *(uint *)(puVar40 + -0x1648);
                          uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                          uVar16 = 0x6f;
                          param_4 = *(uint **)(puVar40 + -0x1650);
                          goto LAB_001091ab;
                        case 0x4a:
                          *puVar23 = *puVar23 | 0x40;
                          *(uint *)(puVar40 + -0x1390) = *(uint *)(puVar40 + -0x1390) | 0x400;
                          break;
                        case 0x55:
                          *puVar23 = *puVar23 | 0x40000;
                          break;
                        case 0x61:
                          uVar34 = *puVar32;
                          if (puVar30 < puVar52) {
                            switch(puVar49[1]) {
                            case 0x44:
                              *puVar32 = uVar34 | 0x100;
                              puVar30 = puVar49 + 2;
                              goto LAB_0010cf39;
                            case 0x50:
                              *puVar32 = uVar34 | 0x1800;
                              puVar30 = puVar49 + 2;
                              goto LAB_0010cf39;
                            case 0x53:
                              *puVar32 = uVar34 | 0x200;
                              puVar30 = puVar49 + 2;
                              goto LAB_0010cf39;
                            case 0x54:
                              *puVar32 = uVar34 | 0x1000;
                              puVar30 = puVar49 + 2;
                              goto LAB_0010cf39;
                            case 0x57:
                              *puVar32 = uVar34 | 0x400;
                              puVar30 = puVar49 + 2;
                              goto LAB_0010cf39;
                            }
                          }
                          *puVar32 = uVar34 | 0x1f00;
                          break;
                        case 0x69:
                          *puVar23 = *puVar23 | 8;
                          break;
                        case 0x6d:
                          *puVar23 = *puVar23 | 0x400;
                          break;
                        case 0x6e:
                          *puVar23 = *puVar23 | 0x2000;
                          break;
                        case 0x72:
                          *puVar32 = *puVar32 | 0x80;
                          break;
                        case 0x73:
                          *puVar23 = *puVar23 | 0x20;
                          break;
                        case 0x78:
                          uVar34 = *puVar23;
                          *puVar23 = uVar34 | 0x80;
                          if ((puVar30 < puVar52) && (puVar49[1] == 0x78)) {
                            *puVar23 = uVar34 | 0x1000080;
                            puVar30 = puVar49 + 2;
                          }
                        }
                        goto LAB_0010cf39;
                      }
LAB_0010d01d:
                      if (bVar56) {
                        *(uint **)(puVar40 + -0x1500) = puVar49;
                      }
                      uVar34 = *(uint *)(puVar40 + -0x1514);
                      uVar48 = *(uint *)(puVar40 + -0x1510);
                      if (((uVar34 & 0x1000080) == 0x80) || ((uVar48 & 0x80) != 0)) {
                        uVar48 = uVar48 | 0x1000000;
                        *(uint *)(puVar40 + -0x1510) = uVar48;
                      }
                      uVar17 = ~uVar48 & (uVar16 | uVar34);
                      uVar25 = CONCAT44(*(uint *)(puVar40 + -0x150c),uVar34) |
                               *(ulong *)(puVar40 + -0x15b0);
                      auVar58._8_8_ = 0;
                      auVar58._0_8_ = uVar25;
                      uVar16 = ~*(uint *)(puVar40 + -0x14e0) &
                               ((uint)puVar45 | *(uint *)(puVar40 + -0x150c));
                      *(ulong *)(puVar40 + -0x15b0) =
                           ~CONCAT44(*(uint *)(puVar40 + -0x14e0),uVar48) & uVar25;
                      if (puVar49 < puVar52) {
                        puVar30 = puVar49 + 1;
                        uVar34 = *puVar49;
                        *(uint **)(puVar40 + -0x1500) = puVar30;
                        if (uVar34 == 0x29) {
                          if ((*(ulong *)(puVar40 + -0x1430) < *(ulong *)(puVar40 + -0x1630)) &&
                             (*(short *)(*(ulong *)(puVar40 + -0x1630) - 0x10) ==
                              *(short *)(puVar40 + -0x1628))) {
                            *(long *)(puVar40 + -0x1630) = *(long *)(puVar40 + -0x1630) + -0x10;
                            pauVar33 = *(undefined1 (**) [16])(puVar40 + -0x1658);
                          }
                          else {
                            pauVar33 = *(undefined1 (**) [16])(puVar40 + -0x1658);
                            **(undefined2 **)(puVar40 + -0x1630) =
                                 *(undefined2 *)(puVar40 + -0x1628);
                          }
                        }
                        else {
                          puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                          *(undefined2 *)(puVar40 + -0x1628) = uVar44;
                          *puVar29 = 0x801a0000;
                          pauVar33 = (undefined1 (*) [16])(puVar29 + 1);
                        }
                        if ((*(uint *)(puVar40 + -0x1580) == uVar17) &&
                           (uVar16 == *(uint *)(puVar40 + -0x15f0))) {
                          *(uint *)(puVar40 + -0x15f0) = uVar16;
                          uVar34 = 0;
                          puVar54 = (uint *)0x0;
                          uVar25 = 0;
                          *(uint *)(puVar40 + -0x1580) = uVar17;
                          pauVar28 = pauVar33;
                        }
                        else {
                          *(uint *)*pauVar33 = 0x801b0000;
                          uVar34 = 0;
                          puVar54 = (uint *)0x0;
                          uVar25 = 0;
                          uVar20 = *(undefined8 *)(puVar40 + -0x15b0);
                          *(uint *)(puVar40 + -0x15f0) = uVar16;
                          pauVar28 = (undefined1 (*) [16])((long)*pauVar33 + 0xc);
                          *(uint *)(puVar40 + -0x1580) = uVar17;
                          *(uint *)((long)*pauVar33 + 4) = (uint)uVar20;
                          *(uint *)((long)*pauVar33 + 8) = (uint)((ulong)uVar20 >> 0x20);
                        }
                        goto LAB_00109927;
                      }
                      param_4 = *(uint **)(puVar40 + -0x1650);
                      puVar30 = *(uint **)(puVar40 + -0x1500);
                      goto LAB_001099fe;
                    }
                    puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                    uVar34 = 0;
                    puVar54 = (uint *)0x0;
                    uVar16 = *(uint *)(puVar40 + -0x138c);
                    *(uint **)(puVar40 + -0x1500) = puVar32 + 3;
                    uVar25 = 0;
                    puVar9[3] = 1;
                    auVar58 = pshuflw(auVar58,ZEXT416(uVar16),0);
                    *(undefined2 *)(puVar40 + -0x1628) = uVar44;
                    *(int *)(puVar9 + 1) = auVar58._0_4_;
                    *(uint *)(puVar40 + -0x1390) = *(uint *)(puVar40 + -0x1390) | 0x200000;
                    *puVar29 = 0x801a0000;
                    pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                    puVar30 = puVar32 + 3;
                    goto LAB_00109927;
                  case 0x26:
switchD_0010ba07_caseD_26:
                    *(undefined1 **)(puVar40 + -0x1680) = param_5;
                    *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                    *(undefined1 **)(puVar40 + -0x1690) = puVar40 + -0x1524;
                    *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                    puVar45 = (uint *)(puVar40 + -0x14f0);
                    param_5 = puVar40 + -0x14e0;
                    *(undefined8 *)(puVar40 + -0x16a0) = 0x10cc34;
                    iVar47 = read_name(puVar40 + -0x1500,puVar52,*(undefined4 *)(puVar40 + -0x15c0),
                                       0x29);
                    auVar58._8_8_ = extraout_XMM0_Qb_30;
                    auVar58._0_8_ = extraout_XMM0_Qa_29;
                    puVar23 = extraout_RDX_19;
                    if (iVar47 == 0) break;
                    puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                    *puVar29 = 0x80210000;
LAB_0010c77f:
                    puVar30 = *(uint **)(puVar40 + -0x1500);
                    pauVar28 = (undefined1 (*) [16])(puVar29 + 4);
                    puVar54 = (uint *)0x0;
                    puVar29[1] = *(undefined4 *)(puVar40 + -0x1528);
                    uVar20 = *(undefined8 *)(puVar40 + -0x14e0);
                    puVar29[3] = (int)uVar20;
                    puVar29[2] = (int)((ulong)uVar20 >> 0x20);
LAB_0010b3af:
                    uVar25 = 0;
                    uVar34 = 1;
                    goto LAB_00109927;
                  case 0x27:
switchD_0010ba07_caseD_27:
                    *(undefined1 **)(puVar40 + -0x1680) = param_5;
                    *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                    *(undefined1 **)(puVar40 + -0x1690) = puVar40 + -0x1524;
                    *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                    puVar45 = (uint *)(puVar40 + -0x14f0);
                    *(undefined8 *)(puVar40 + -0x16a0) = 0x10c835;
                    iVar47 = read_name(puVar40 + -0x1500,puVar52,*(undefined4 *)(puVar40 + -0x15c0),
                                       uVar34,puVar40 + -0x14e0);
                    auVar58._8_8_ = extraout_XMM0_Qb_27;
                    auVar58._0_8_ = extraout_XMM0_Qa_27;
                    puVar23 = extraout_RDX_17;
                    if (iVar47 != 0) {
                      if (*(uint *)(puVar40 + -0x138c) < 0xffff) {
                        puVar30 = *(uint **)(puVar40 + -0x1658);
                        uVar34 = *(uint *)(puVar40 + -0x138c) + 1;
                        *(short *)(puVar40 + -0x1628) = *(short *)(puVar40 + -0x1628) + 1;
                        *(uint *)(puVar40 + -0x138c) = uVar34;
                        *puVar30 = uVar34 | 0x80080000;
                        pauVar28 = (undefined1 (*) [16])(puVar30 + 1);
                        if (*(ushort *)(puVar40 + -0x13a8) < 10000) {
                          uVar16 = *(uint *)(puVar40 + -0x1528);
                          if ((uint)*(ushort *)(puVar40 + -0x13a6) < uVar16 + 2) {
                            *(short *)(puVar40 + -0x13a6) = (short)uVar16 + 2;
                          }
                          puVar23 = (uint *)(ulong)(uVar16 + 2);
                          puVar49 = *(uint **)(puVar40 + -0x13a0);
                          uVar44 = 0;
                          *(undefined4 *)(puVar40 + -0x1520) = 0;
                          if (*(ushort *)(puVar40 + -0x13a8) == 0) {
                            uVar34 = 0;
                            uVar13 = 0;
                          }
                          else {
                            uVar34 = *(uint *)(puVar40 + -0x1610);
                            iVar47 = 0;
                            *(uint **)(puVar40 + -0x1610) = puVar52;
                            param_5 = (undefined1 *)puVar49;
                            uVar44 = 0;
                            do {
                              if (uVar16 == (ushort)puVar49[3]) {
                                uVar20 = *(undefined8 *)puVar49;
                                *(undefined1 (**) [16])(puVar40 + -0x1590) = pauVar28;
                                *(undefined8 *)(puVar40 + -0x1680) = 0x10c933;
                                uVar48 = _pcre2_strncmp_32(*(undefined8 *)(puVar40 + -0x14f0),uVar20
                                                           ,uVar16);
                                auVar58._8_8_ = extraout_XMM0_Qb_28;
                                auVar58._0_8_ = extraout_XMM0_Qa_28;
                                pauVar28 = *(undefined1 (**) [16])(puVar40 + -0x1590);
                                puVar54 = (uint *)(ulong)uVar48;
                                puVar23 = extraout_RDX_18;
                                if (uVar48 != 0) goto LAB_0010c8e0;
                                if (puVar49[2] == *(uint *)(puVar40 + -0x138c)) {
                                  uVar13 = *(ushort *)(puVar40 + -0x13a8);
                                  uVar34 = (uint)uVar13;
                                  puVar52 = *(uint **)(puVar40 + -0x1610);
                                  puVar49 = (uint *)param_5;
                                  if ((int)(uint)uVar13 <= iVar47) goto LAB_0010ca06;
                                  uVar34 = 0;
                                  uVar25 = 0;
                                  puVar30 = *(uint **)(puVar40 + -0x1500);
                                  goto LAB_00109927;
                                }
                                if ((uVar34 & 0x40) == 0) {
                                  uVar34 = *(uint *)(puVar40 + -0x1648);
                                  uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                                  uVar16 = 0x8f;
                                  param_4 = *(uint **)(puVar40 + -0x1650);
                                  puVar49 = *(uint **)(puVar40 + -0x1500);
                                  goto LAB_001091ab;
                                }
                                *(undefined2 *)((long)puVar49 + 0xe) = 1;
                                uVar44 = 1;
                                *(undefined4 *)(puVar40 + -0x1328) = 1;
                              }
                              else {
LAB_0010c8e0:
                                if (puVar49[2] == *(uint *)(puVar40 + -0x138c)) {
                                  uVar34 = *(uint *)(puVar40 + -0x1648);
                                  uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                                  uVar16 = 0xa5;
                                  param_4 = *(uint **)(puVar40 + -0x1650);
                                  puVar49 = *(uint **)(puVar40 + -0x1500);
                                  goto LAB_001091ab;
                                }
                              }
                              iVar47 = iVar47 + 1;
                              puVar49 = puVar49 + 4;
                              *(int *)(puVar40 + -0x1520) = iVar47;
                            } while (iVar47 < (int)(uint)*(ushort *)(puVar40 + -0x13a8));
                            uVar13 = *(ushort *)(puVar40 + -0x13a8);
                            uVar34 = (uint)uVar13;
                            puVar52 = *(uint **)(puVar40 + -0x1610);
                            puVar49 = (uint *)param_5;
                          }
LAB_0010ca06:
                          if (*(uint *)(puVar40 + -0x1398) <= uVar34) {
                            uVar34 = *(uint *)(puVar40 + -0x1398) * 2;
                            *(undefined1 (**) [16])(puVar40 + -0x1610) = pauVar28;
                            pcVar6 = (code *)**(undefined8 **)(puVar40 + -0x1458);
                            *(undefined8 *)(puVar40 + -0x1680) = 0x10ca32;
                            auVar58 = (*pcVar6)((ulong)uVar34 << 4);
                            puVar23 = auVar58._8_8_;
                            pvVar24 = auVar58._0_8_;
                            if (pvVar24 == (void *)0x0) {
                              uVar34 = *(uint *)(puVar40 + -0x1648);
                              uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                              uVar16 = 0x79;
                              param_4 = *(uint **)(puVar40 + -0x1650);
                              puVar49 = *(uint **)(puVar40 + -0x1500);
                              goto LAB_001091ab;
                            }
                            *(undefined8 *)(puVar40 + -0x1610) = *(undefined8 *)(puVar40 + -0x1610);
                            *(undefined8 *)(puVar40 + -0x1680) = 0x10ca63;
                            memcpy(pvVar24,*(void **)(puVar40 + -0x13a0),
                                   (ulong)*(uint *)(puVar40 + -0x1398) << 4);
                            pauVar28 = *(undefined1 (**) [16])(puVar40 + -0x1610);
                            auVar58 = extraout_XMM0_00;
                            if (0x14 < *(uint *)(puVar40 + -0x1398)) {
                              uVar20 = *(undefined8 *)(*(long *)(puVar40 + -0x1458) + 0x10);
                              pcVar6 = *(code **)(*(long *)(puVar40 + -0x1458) + 8);
                              *(undefined8 *)(puVar40 + -0x1680) = 0x10ca89;
                              auVar58._0_8_ = (*pcVar6)(*(undefined8 *)(puVar40 + -0x13a0),uVar20);
                              auVar58._8_8_ = extraout_XMM0_Qb_29;
                              pauVar28 = *(undefined1 (**) [16])(puVar40 + -0x1610);
                            }
                            *(void **)(puVar40 + -0x13a0) = pvVar24;
                            uVar13 = *(ushort *)(puVar40 + -0x13a8);
                            *(uint *)(puVar40 + -0x1398) = uVar34;
                          }
                          uVar34 = 0;
                          puVar54 = (uint *)0x0;
                          uVar20 = *(undefined8 *)(puVar40 + -0x14f0);
                          uVar25 = 0;
                          puVar22 = (undefined8 *)
                                    ((ulong)uVar13 * 0x10 + *(long *)(puVar40 + -0x13a0));
                          *(short *)((long)puVar22 + 0xc) = (short)uVar16;
                          *puVar22 = uVar20;
                          uVar18 = *(undefined4 *)(puVar40 + -0x138c);
                          *(undefined2 *)((long)puVar22 + 0xe) = uVar44;
                          puVar30 = *(uint **)(puVar40 + -0x1500);
                          *(undefined4 *)(puVar22 + 1) = uVar18;
                          *(ushort *)(puVar40 + -0x13a8) = uVar13 + 1;
                          param_5 = (undefined1 *)puVar49;
                          goto LAB_00109927;
                        }
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        uVar16 = 0x95;
                        param_4 = *(uint **)(puVar40 + -0x1650);
                        puVar49 = *(uint **)(puVar40 + -0x1500);
                      }
                      else {
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        uVar16 = 0xc5;
                        param_4 = *(uint **)(puVar40 + -0x1650);
                        puVar49 = *(uint **)(puVar40 + -0x1500);
                      }
                      goto LAB_001091ab;
                    }
                    break;
                  case 0x28:
                    puVar30 = puVar32 + 3;
                    *(uint **)(puVar40 + -0x1500) = puVar30;
                    if (puVar52 <= puVar30) {
                      param_4 = *(uint **)(puVar40 + -0x1650);
                      goto LAB_001099fe;
                    }
                    uVar34 = puVar32[3];
                    *(short *)(puVar40 + -0x1628) = *(short *)(puVar40 + -0x1628) + 1;
                    bVar56 = uVar34 == 0x2a;
                    bVar55 = uVar34 == 0x3f || bVar56;
                    if (uVar34 == 0x3f || bVar56) {
                      puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                      uVar34 = 0;
                      uVar25 = 0;
                      puVar54 = (uint *)0x2;
                      *(uint **)(puVar40 + -0x1500) = puVar49;
                      *puVar29 = 0x800f0000;
                      pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                      puVar30 = puVar49;
                      goto LAB_00109927;
                    }
                    param_5 = (undefined1 *)0xa1;
                    *(undefined1 **)(puVar40 + -0x1588) = puVar40 + -0x1500;
                    *(ulong *)(puVar40 + -0x1680) = (ulong)CONCAT31((int3)(uVar34 >> 8),bVar56);
                    puVar51 = puVar40 + -0x1524;
                    *(undefined1 **)(puVar40 + -0x1688) = puVar51;
                    puVar46 = puVar40 + -0x1520;
                    *(undefined8 *)(puVar40 + -0x1690) = 0x10cd43;
                    pcVar43 = (char *)puVar52;
                    iVar47 = read_number(puVar40 + -0x1500,puVar52,
                                         *(undefined4 *)(puVar40 + -0x138c),0xffff);
                    auVar58._8_8_ = extraout_XMM0_Qb_31;
                    auVar58._0_8_ = extraout_XMM0_Qa_30;
                    puVar23 = *(uint **)(puVar40 + -0x1688);
                    uVar20 = *(undefined8 *)(puVar40 + -0x1680);
                    if (iVar47 != 0) {
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      uVar34 = *(uint *)(puVar40 + -0x1520);
                      puVar23 = (uint *)(ulong)uVar34;
                      if ((int)uVar34 < 1) {
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        uVar16 = 0x73;
                        param_4 = *(uint **)(puVar40 + -0x1650);
                      }
                      else {
                        puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                        lVar35 = ((long)puVar49 - *(long *)(puVar40 + -0x1420) >> 2) + -2;
                        *puVar29 = 0x80120000;
                        *(long *)(puVar40 + -0x14e0) = lVar35;
                        puVar29[2] = (int)lVar35;
                        puVar29[3] = uVar34;
                        puVar29[1] = (int)((ulong)lVar35 >> 0x20);
                        pauVar28 = (undefined1 (*) [16])(puVar29 + 4);
LAB_0010cda1:
                        if ((puVar49 < puVar52) && (*puVar49 == 0x29)) {
                          puVar30 = puVar49 + 1;
                          uVar34 = 0;
                          puVar54 = (uint *)0x0;
                          uVar25 = 0;
                          *(uint **)(puVar40 + -0x1500) = puVar30;
                          puVar45 = puVar49;
                          goto LAB_00109927;
                        }
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        uVar16 = 0x7c;
                        param_4 = *(uint **)(puVar40 + -0x1650);
                      }
                      goto LAB_001091ab;
                    }
                    uVar16 = *(uint *)(puVar40 + -0x1524);
                    puVar30 = *(uint **)(puVar40 + -0x1500);
                    if (uVar16 != 0) goto LAB_0010ae72;
                    if ((long)puVar52 - (long)puVar30 < 0x25) {
                      uVar34 = *puVar30;
                      if (uVar34 != 0x52) goto LAB_0010d1b0;
                      if (4 < (long)puVar52 - (long)puVar30) {
LAB_0010d353:
                        if (puVar30[1] != 0x26) goto LAB_0010d28f;
                        *(uint **)(puVar40 + -0x1500) = puVar30 + 1;
                        *(undefined1 **)(puVar40 + -0x1680) = puVar46;
                        *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                        *(undefined1 **)(puVar40 + -0x1690) = puVar51;
                        *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                        param_5 = puVar40 + -0x14e0;
                        *(undefined8 *)(puVar40 + -0x16a0) = 0x10d3aa;
                        iVar47 = read_name(*(undefined8 *)(puVar40 + -0x1588),puVar52,
                                           *(undefined4 *)(puVar40 + -0x15c0),0x29,param_5,
                                           puVar40 + -0x14f0);
                        auVar58._8_8_ = extraout_XMM0_Qb_34;
                        auVar58._0_8_ = extraout_XMM0_Qa_33;
                        puVar23 = extraout_RDX_22;
                        if (iVar47 == 0) break;
                        *(long *)(puVar40 + -0x1500) = *(long *)(puVar40 + -0x1500) + -4;
                        **(undefined4 **)(puVar40 + -0x1658) = 0x80130000;
                        iVar47 = *(int *)(puVar40 + -0x1528);
                        goto LAB_0010d217;
                      }
LAB_0010d28f:
                      *(uint **)(puVar40 + -0x1500) = puVar30 + -1;
                      *(uint **)(puVar40 + -0x1680) = puVar23;
                      *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                      *(undefined1 **)(puVar40 + -0x1690) = puVar51;
                      *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                      param_5 = puVar40 + -0x14e0;
                      *(undefined8 *)(puVar40 + -0x16a0) = 0x10d2db;
                      iVar47 = read_name(*(undefined8 *)(puVar40 + -0x1588),puVar52,
                                         *(undefined4 *)(puVar40 + -0x15c0),0x29,param_5,
                                         puVar40 + -0x14f0);
                      auVar58._8_8_ = extraout_XMM0_Qb_33;
                      auVar58._0_8_ = extraout_XMM0_Qa_32;
                      puVar23 = extraout_RDX_21;
                      if (iVar47 == 0) break;
                      iVar14 = *(int *)(puVar40 + -0x1528);
                      piVar38 = *(int **)(puVar40 + -0x14f0);
                      iVar47 = iVar14;
                      if (iVar14 != 6) {
LAB_0010d302:
                        *(undefined4 *)(puVar40 + -0x1520) = 1;
                        lVar35 = 1;
                        while (iVar15 = (int)lVar35, iVar15 < iVar14) {
                          piVar1 = piVar38 + lVar35;
                          lVar35 = lVar35 + 1;
                          if (9 < *piVar1 - 0x30U) {
                            if (bVar55) {
                              *(int *)(puVar40 + -0x1520) = iVar15;
                            }
                            goto LAB_0010d515;
                          }
                          bVar55 = true;
                        }
                        if (bVar55) {
                          *(int *)(puVar40 + -0x1520) = iVar15;
                        }
LAB_0010d515:
                        if ((*piVar38 != 0x52) || (uVar18 = 0x80140000, iVar15 < iVar14)) {
                          uVar18 = 0x80110000;
                        }
                        *(long *)(puVar40 + -0x1500) = *(long *)(puVar40 + -0x1500) + -4;
                        **(undefined4 **)(puVar40 + -0x1658) = uVar18;
                        goto LAB_0010d217;
                      }
                      *(undefined8 *)(puVar40 + -0x1680) = 0x10d617;
                      iVar47 = _pcre2_strncmp_c8_32(piVar38,"DEFINE",6);
                      auVar58._8_8_ = extraout_XMM0_Qb_36;
                      auVar58._0_8_ = extraout_XMM0_Qa_35;
                      if (iVar47 != 0) {
                        iVar47 = *(int *)(puVar40 + -0x1528);
                        goto LAB_0010d302;
                      }
                      *(long *)(puVar40 + -0x1500) = *(long *)(puVar40 + -0x1500) + -4;
                      puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                      *puVar29 = 0x80100000;
                      puVar23 = puVar29 + 1;
LAB_0010d223:
                      uVar20 = *(undefined8 *)(puVar40 + -0x14e0);
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      puVar23[1] = (uint)uVar20;
                      *puVar23 = (uint)((ulong)uVar20 >> 0x20);
                      pauVar28 = (undefined1 (*) [16])(puVar23 + 2);
                      goto LAB_0010cda1;
                    }
                    pcVar43 = "VERSION";
                    *(undefined8 *)(puVar40 + -0x1680) = 0x10d43d;
                    iVar47 = _pcre2_strncmp_c8_32(puVar30,"VERSION",7,uVar20);
                    if ((iVar47 == 0) && (uVar34 = puVar30[7], uVar34 != 0x29)) {
                      if (uVar34 == 0x3e) {
                        puVar49 = puVar30 + 8;
                      }
                      else {
                        puVar49 = puVar30 + 7;
                      }
                      *(uint **)(puVar40 + -0x1500) = puVar49;
                      *(undefined4 *)(puVar40 + -0x14e0) = 0;
                      if (*puVar49 == 0x3d) {
                        uVar16 = puVar49[1];
                        puVar49 = puVar49 + 1;
                        *(uint **)(puVar40 + -0x1500) = puVar49;
                        if (uVar16 - 0x30 < 10) {
                          *(ulong *)(puVar40 + -0x1680) = uVar25;
                          param_5 = (undefined1 *)0xb3;
                          *(undefined1 **)(puVar40 + -0x1688) = puVar51;
                          *(undefined8 *)(puVar40 + -0x1690) = 0x10d4c1;
                          iVar47 = read_number(*(undefined8 *)(puVar40 + -0x1588),puVar52,0xffffffff
                                               ,1000,0xb3,puVar40 + -0x14e0);
                          auVar58._8_8_ = extraout_XMM0_Qb_35;
                          auVar58._0_8_ = extraout_XMM0_Qa_34;
                          puVar23 = extraout_RDX_24;
                          if (iVar47 == 0) break;
                          puVar49 = *(uint **)(puVar40 + -0x1500);
                          if (puVar49 < puVar52) {
                            uVar16 = 0;
                            if (*puVar49 != 0x2e) {
LAB_0010d4e3:
                              puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                              *puVar29 = 0x80150000;
                              pauVar28 = (undefined1 (*) [16])(puVar29 + 4);
                              puVar29[1] = (uint)(uVar34 == 0x3e);
                              uVar18 = *(undefined4 *)(puVar40 + -0x14e0);
                              puVar29[3] = uVar16;
                              puVar29[2] = uVar18;
                              goto LAB_0010cda1;
                            }
                            puVar30 = puVar49 + 1;
                            *(uint **)(puVar40 + -0x1500) = puVar30;
                            if ((puVar30 < puVar52) && (uVar16 = puVar49[1], uVar16 - 0x30 < 10)) {
                              puVar30 = puVar49 + 2;
                              *(uint **)(puVar40 + -0x1500) = puVar30;
                              uVar16 = uVar16 * 10 - 0x1e0;
                              puVar23 = (uint *)(ulong)uVar16;
                              if (puVar30 < puVar52) {
                                if (puVar49[2] - 0x30 < 10) {
                                  puVar30 = puVar49 + 3;
                                  uVar16 = uVar16 + (puVar49[2] - 0x30);
                                  *(uint **)(puVar40 + -0x1500) = puVar30;
                                  if (puVar52 <= puVar30) goto LAB_0010d5af;
                                }
                                if (*puVar30 != 0x29) {
                                  param_4 = *(uint **)(puVar40 + -0x1650);
                                  puVar49 = *(uint **)(puVar40 + -0x1500);
                                  goto LAB_0010d5b7;
                                }
                                puVar49 = *(uint **)(puVar40 + -0x1500);
                                goto LAB_0010d4e3;
                              }
                            }
LAB_0010d5af:
                            param_4 = *(uint **)(puVar40 + -0x1650);
                            puVar49 = puVar30;
                          }
                          else {
                            param_4 = *(uint **)(puVar40 + -0x1650);
                          }
                        }
                        else {
                          param_4 = *(uint **)(puVar40 + -0x1650);
                        }
                      }
                      else {
                        param_4 = *(uint **)(puVar40 + -0x1650);
                      }
LAB_0010d5b7:
                      *(undefined4 *)(puVar40 + -0x1530) = 0xb3;
                      uVar16 = 0xb3;
                      uVar25 = (long)puVar49 - *(long *)(puVar40 + -0x1420) >> 2;
                      *(ulong *)(puVar40 + -0x13b0) = uVar25;
                      goto LAB_00109805;
                    }
                    uVar34 = *puVar30;
                    puVar23 = extraout_RDX_23;
                    if (uVar34 == 0x52) goto LAB_0010d353;
LAB_0010d1b0:
                    if (uVar34 == 0x3c) {
                      uVar34 = 0x3e;
                    }
                    else if (uVar34 != 0x27) goto LAB_0010d28f;
                    *(char **)(puVar40 + -0x1680) = pcVar43;
                    *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                    *(undefined1 **)(puVar40 + -0x1690) = puVar51;
                    *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                    param_5 = puVar40 + -0x14e0;
                    *(undefined8 *)(puVar40 + -0x16a0) = 0x10d1f9;
                    iVar47 = read_name(*(undefined8 *)(puVar40 + -0x1588),puVar52,
                                       *(undefined4 *)(puVar40 + -0x15c0),uVar34,param_5,
                                       puVar40 + -0x14f0);
                    auVar58._8_8_ = extraout_XMM0_Qb_32;
                    auVar58._0_8_ = extraout_XMM0_Qa_31;
                    puVar23 = extraout_RDX_20;
                    if (iVar47 != 0) {
                      **(undefined4 **)(puVar40 + -0x1658) = 0x80110000;
                      iVar47 = *(int *)(puVar40 + -0x1528);
LAB_0010d217:
                      lVar35 = *(long *)(puVar40 + -0x1658);
                      *(int *)(lVar35 + 4) = iVar47;
                      puVar23 = (uint *)(lVar35 + 8);
                      goto LAB_0010d223;
                    }
                    break;
                  case 0x2a:
                    goto switchD_0010ba07_caseD_2a;
                  case 0x2b:
                    if ((4 < (long)puVar52 - (long)puVar49) && (puVar32[3] - 0x30 < 10)) {
LAB_0010b118:
                      uVar18 = *(undefined4 *)(puVar40 + -0x138c);
                      goto LAB_0010b11f;
                    }
                    uVar34 = *(uint *)(puVar40 + -0x1648);
                    uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                    uVar16 = 0x81;
                    param_4 = *(uint **)(puVar40 + -0x1650);
                    goto LAB_001091ab;
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
LAB_0010b11f:
                    *(uint **)(puVar40 + -0x1680) = puVar45;
                    param_5 = (undefined1 *)0xa1;
                    *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1524;
                    *(undefined8 *)(puVar40 + -0x1690) = 0x10b14d;
                    iVar47 = read_number(puVar40 + -0x1500,puVar52,uVar18,0xffff,0xa1,
                                         puVar40 + -0x1520);
                    auVar58._8_8_ = extraout_XMM0_Qb_13;
                    auVar58._0_8_ = extraout_XMM0_Qa_13;
                    puVar23 = extraout_RDX_07;
                    if (iVar47 == 0) break;
                    puVar45 = *(uint **)(puVar40 + -0x1500);
                    if (-1 < *(int *)(puVar40 + -0x1520)) {
                      puVar30 = puVar45;
                      if ((puVar45 < puVar52) && (*puVar45 == 0x29)) {
LAB_0010b185:
                        puVar30 = *(uint **)(puVar40 + -0x1658);
                        puVar54 = (uint *)0x0;
                        uVar25 = 0;
                        *(uint **)(puVar40 + -0x1500) = puVar45 + 1;
                        uVar34 = 1;
                        pauVar28 = (undefined1 (*) [16])(puVar30 + 3);
                        *puVar30 = *(uint *)(puVar40 + -0x1520) | 0x80200000;
                        lVar35 = *(long *)(puVar40 + -0x1420);
                        puVar30[2] = (uint)((long)puVar45 - lVar35 >> 2);
                        puVar30[1] = (uint)((long)puVar45 - lVar35 >> 0x22);
                        puVar30 = puVar45 + 1;
                        goto LAB_00109927;
                      }
                      goto LAB_00109d75;
                    }
                    param_4 = *(uint **)(puVar40 + -0x1650);
                    uVar16 = 0x73;
                    puVar49 = puVar45;
                    goto LAB_0010b470;
                  case 0x3c:
                    if ((long)puVar52 - (long)puVar49 < 5) {
LAB_0010c7ec:
                      uVar34 = 0x3e;
                      goto switchD_0010ba07_caseD_27;
                    }
                    uVar34 = puVar32[3];
                    if ((uVar34 == 0x3d) || (uVar34 == 0x21)) {
                      uVar16 = 0x80260000;
                      if (uVar34 == 0x3d) {
                        uVar16 = 0x80250000;
                      }
                    }
                    else {
                      if (uVar34 != 0x2a) goto LAB_0010c7ec;
                      uVar16 = 0x80280000;
                    }
                    puVar30 = *(uint **)(puVar40 + -0x1658);
                    *puVar30 = uVar16;
                    goto LAB_0010b865;
                  case 0x3d:
                    goto switchD_0010ba07_caseD_3d;
                  case 0x3e:
                    goto switchD_0010ba07_caseD_3e;
                  case 0x43:
                    puVar30 = puVar32 + 3;
                    *(uint **)(puVar40 + -0x1500) = puVar30;
                    if (puVar52 <= puVar30) goto LAB_00109d75;
                    puVar29 = *(undefined4 **)(puVar40 + -0x14f8);
                    if (((puVar29 == (undefined4 *)0x0) || ((puVar40[-0x1610] & 4) == 0)) ||
                       (puVar37 = *(undefined4 **)(puVar40 + -0x1658), puVar29 != puVar37 + -4)) {
                      puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                    }
                    else if (puVar37[-1] != 0xff) {
                      puVar29 = puVar37;
                    }
                    uVar34 = puVar32[3];
                    *(undefined4 **)(puVar40 + -0x14f8) = puVar29;
                    uVar48 = uVar34 - 0x30;
                    uVar16 = CONCAT31((int3)(uVar48 >> 8),9 < uVar48 && uVar34 != 0x29);
                    puVar23 = (uint *)(ulong)uVar16;
                    puVar49 = puVar30;
                    if (9 < uVar48 && uVar34 != 0x29) {
                      *(undefined4 *)(puVar40 + -0x1520) = 0;
                      puVar45 = (uint *)0x0;
                      uVar48 = 0;
                      do {
                        uVar41 = uVar48;
                        puVar32 = puVar45;
                        uVar17 = *(uint *)(&_pcre2_callout_start_delims_32 + (long)puVar32 * 4);
                        param_5 = (undefined1 *)(ulong)uVar17;
                        if (uVar17 == 0) goto LAB_0010c62f;
                        puVar45 = (uint *)((long)puVar32 + 1);
                        uVar48 = uVar16;
                      } while (uVar34 != uVar17);
                      if ((char)uVar41 != '\0') {
                        *(int *)(puVar40 + -0x1520) = (int)puVar32;
                      }
                      uVar34 = *(uint *)(&_pcre2_callout_end_delims_32 + (long)(int)puVar32 * 4);
                      puVar23 = (uint *)(ulong)uVar34;
                      if (uVar34 == 0) {
LAB_0010c62f:
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        uVar16 = 0xb6;
                        param_4 = *(uint **)(puVar40 + -0x1650);
                        goto LAB_001091ab;
                      }
                      *puVar29 = 0x80070000;
                      do {
                        puVar32 = puVar49;
                        puVar49 = puVar32 + 1;
                        if (puVar52 <= puVar49) {
                          uVar34 = *(uint *)(puVar40 + -0x1648);
                          uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                          uVar16 = 0xb5;
                          param_4 = *(uint **)(puVar40 + -0x1650);
                          puVar49 = puVar30;
                          goto LAB_001091ab;
                        }
                      } while ((uVar34 != *puVar49) ||
                              ((puVar49 = puVar32 + 2, puVar49 < puVar52 && (uVar34 == puVar32[2])))
                              );
                      *(uint **)(puVar40 + -0x1500) = puVar49;
                      lVar35 = *(long *)(puVar40 + -0x1420);
                      puVar23 = (uint *)((long)puVar49 - (long)puVar30);
                      if ((uint *)0x3fffffffc < puVar23) {
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        uVar16 = 0xac;
                        param_4 = *(uint **)(puVar40 + -0x1650);
                        goto LAB_001091ab;
                      }
                      puVar29[3] = (int)((long)puVar23 >> 2);
                      puVar23 = (uint *)((long)puVar30 - lVar35 >> 2);
                      *(uint **)(puVar40 + -0x14e0) = puVar23;
                      puVar29[5] = (int)puVar23;
                      puVar29[4] = (int)((long)puVar30 - lVar35 >> 0x22);
                      pauVar28 = (undefined1 (*) [16])(puVar29 + 6);
                    }
                    else {
                      *puVar29 = 0x80060000;
                      iVar14 = 0;
                      do {
                        uVar34 = *puVar49;
                        if (9 < uVar34 - 0x30) {
                          if ((char)puVar23 == '\0') goto LAB_0010d72e;
                          break;
                        }
                        puVar49 = puVar49 + 1;
                        iVar14 = iVar14 * 10 + (uVar34 - 0x30);
                        if (0xff < iVar14) {
                          uVar34 = *(uint *)(puVar40 + -0x1648);
                          uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                          uVar16 = 0x8a;
                          param_4 = *(uint **)(puVar40 + -0x1650);
                          goto LAB_001091ab;
                        }
                        puVar23 = (uint *)0x1;
                      } while (puVar49 < puVar52);
                      *(uint **)(puVar40 + -0x1500) = puVar49;
LAB_0010d72e:
                      puVar29[3] = iVar14;
                      pauVar28 = (undefined1 (*) [16])(puVar29 + 4);
                      lVar35 = *(long *)(puVar40 + -0x1420);
                    }
                    puVar49 = *(uint **)(puVar40 + -0x1500);
                    if ((puVar49 < puVar52) && (*puVar49 == 0x29)) {
                      puVar30 = puVar49 + 1;
                      puVar54 = (uint *)(ulong)(iVar47 - 1);
                      uVar34 = 0;
                      uVar25 = 0;
                      *(uint **)(puVar40 + -0x1500) = puVar30;
                      *(undefined4 *)(puVar40 + -0x1620) = 1;
                      puVar29[2] = 0;
                      puVar29[1] = (int)((long)puVar30 - lVar35 >> 2);
                      goto LAB_00109927;
                    }
                    uVar34 = *(uint *)(puVar40 + -0x1648);
                    uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                    uVar16 = 0x8b;
                    param_4 = *(uint **)(puVar40 + -0x1650);
                    goto LAB_001091ab;
                  case 0x50:
                    puVar30 = puVar32 + 3;
                    *(uint **)(puVar40 + -0x1500) = puVar30;
                    if (puVar30 < puVar52) {
                      uVar34 = puVar32[3];
                      if (uVar34 == 0x3c) goto LAB_0010c7ec;
                      if (uVar34 == 0x3e) goto switchD_0010ba07_caseD_26;
                      if (uVar34 == 0x3d) {
                        *(uint **)(puVar40 + -0x1680) = puVar30;
                        *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                        *(undefined1 **)(puVar40 + -0x1690) = puVar40 + -0x1524;
                        *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                        puVar45 = (uint *)(puVar40 + -0x14f0);
                        param_5 = puVar40 + -0x14e0;
                        *(undefined8 *)(puVar40 + -0x16a0) = 0x10c768;
                        iVar47 = read_name(puVar40 + -0x1500,puVar52,
                                           *(undefined4 *)(puVar40 + -0x15c0),0x29);
                        auVar58._8_8_ = extraout_XMM0_Qb_26;
                        auVar58._0_8_ = extraout_XMM0_Qa_26;
                        puVar23 = extraout_RDX_16;
                        if (iVar47 == 0) break;
                        puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                        *puVar29 = 0x80040000;
                        goto LAB_0010c77f;
                      }
                      uVar34 = *(uint *)(puVar40 + -0x1648);
                      uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                      uVar16 = 0x8d;
                      param_4 = *(uint **)(puVar40 + -0x1650);
                      puVar49 = puVar30;
                      goto LAB_001091ab;
                    }
LAB_00109d75:
                    param_4 = *(uint **)(puVar40 + -0x1650);
                    goto LAB_001099fe;
                  case 0x52:
                    puVar45 = puVar32 + 3;
                    *(undefined4 *)(puVar40 + -0x1520) = 0;
                    *(uint **)(puVar40 + -0x1500) = puVar45;
                    if ((puVar45 < puVar52) && (puVar32[3] == 0x29)) goto LAB_0010b185;
                    uVar34 = *(uint *)(puVar40 + -0x1648);
                    uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                    uVar16 = 0x9e;
                    param_4 = *(uint **)(puVar40 + -0x1650);
                    puVar49 = puVar45;
                    goto LAB_001091ab;
                  }
LAB_0010acbd:
                  uVar34 = *(uint *)(puVar40 + -0x1648);
                  uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                  param_4 = *(uint **)(puVar40 + -0x1650);
                  uVar16 = *(uint *)(puVar40 + -0x1524);
                  puVar49 = *(uint **)(puVar40 + -0x1500);
                  goto LAB_001091ab;
                }
                if (puVar32[1] == 0x2a) {
LAB_0010a2e5:
                  if (4 < (long)puVar52 - (long)puVar30) {
                    uVar34 = puVar32[2];
                    uVar25 = (ulong)uVar34;
                    *(uint *)(puVar40 + -0x152c) = uVar34;
                    if (uVar34 != 0x29) {
                      if ((uVar34 < 0x100) &&
                         ((*(byte *)(*(long *)(puVar40 + -0x1438) + uVar25) & 4) != 0)) {
                        *(ulong *)(puVar40 + -0x1680) = uVar25;
                        *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                        *(undefined1 **)(puVar40 + -0x1690) = puVar40 + -0x1524;
                        *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                        *(undefined8 *)(puVar40 + -0x16a0) = 0x10b4e5;
                        iVar14 = read_name(puVar40 + -0x1500,puVar52,
                                           *(undefined4 *)(puVar40 + -0x15c0),0,puVar40 + -0x14e0,
                                           puVar40 + -0x14f0);
                        puVar23 = extraout_RDX_08;
                        if (iVar14 == 0) goto LAB_0010acbd;
                        puVar49 = *(uint **)(puVar40 + -0x1500);
                        if ((puVar49 < puVar52) && (*puVar49 == 0x3a)) {
                          *(uint **)(puVar40 + -0x1610) = puVar49;
                          iVar14 = 0;
                          *(int *)(puVar40 + -0x1590) = iVar47;
                          puVar39 = &alasnames;
                          do {
                            *(int *)(puVar40 + -0x1520) = iVar14;
                            if (iVar14 == 0x11) {
                              puVar49 = *(uint **)(puVar40 + -0x1610);
                              uVar34 = *(uint *)(puVar40 + -0x1648);
                              uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                              param_4 = *(uint **)(puVar40 + -0x1650);
                              goto LAB_0010b91a;
                            }
                            param_5 = (undefined1 *)(long)iVar14;
                            iVar47 = (&alasmeta)[(long)param_5 * 2];
                            if (iVar47 == *(int *)(puVar40 + -0x1528)) {
                              *(undefined8 *)(puVar40 + -0x1680) = 0x10b56f;
                              iVar15 = _pcre2_strncmp_c8_32
                                                 (*(undefined8 *)(puVar40 + -0x14f0),puVar39,iVar47)
                              ;
                              auVar58._8_8_ = extraout_XMM0_Qb_16;
                              auVar58._0_8_ = extraout_XMM0_Qa_16;
                              puVar45 = &alasmeta;
                              puVar23 = extraout_RDX_09;
                              if (iVar15 == 0) goto code_r0x0010b57d;
                            }
                            iVar14 = iVar14 + 1;
                            puVar39 = puVar39 + (iVar47 + 1);
                          } while( true );
                        }
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        param_4 = *(uint **)(puVar40 + -0x1650);
LAB_0010b91a:
                        uVar16 = 0xc3;
                        goto LAB_001091ab;
                      }
                      *(ulong *)(puVar40 + -0x1680) = uVar25;
                      *(undefined1 **)(puVar40 + -0x1688) = puVar40 + -0x1458;
                      *(undefined1 **)(puVar40 + -0x1690) = puVar40 + -0x1524;
                      *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                      param_5 = puVar40 + -0x14e0;
                      *(undefined8 *)(puVar40 + -0x16a0) = 0x10a366;
                      iVar47 = read_name(puVar40 + -0x1500,puVar52,
                                         *(undefined4 *)(puVar40 + -0x15c0),0,param_5,
                                         puVar40 + -0x14f0);
                      puVar23 = extraout_RDX_01;
                      if (iVar47 != 0) {
                        puVar49 = *(uint **)(puVar40 + -0x1500);
                        if ((puVar49 < puVar52) && ((*puVar49 == 0x3a || (*puVar49 == 0x29)))) {
                          puVar23 = (uint *)(ulong)*(uint *)(puVar40 + -0x1528);
                          iVar47 = 0;
                          *(undefined4 *)(puVar40 + -0x1520) = 0;
                          *(uint **)(puVar40 + -0x1610) = puVar49;
                          piVar38 = &verbs;
                          *(uint **)(puVar40 + -0x1590) = puVar52;
                          puVar45 = puVar23;
                          do {
                            if (*piVar38 == (int)puVar45) {
                              *(int *)(puVar40 + -0x1578) = (int)puVar45;
                              *(uint **)(puVar40 + -0x1588) = puVar23;
                              *(undefined8 *)(puVar40 + -0x1680) = 0x10a419;
                              uVar34 = _pcre2_strncmp_c8_32(*(undefined8 *)(puVar40 + -0x14f0));
                              auVar58._8_8_ = extraout_XMM0_Qb_05;
                              auVar58._0_8_ = extraout_XMM0_Qa_05;
                              puVar23 = *(uint **)(puVar40 + -0x1588);
                              puVar45 = (uint *)(ulong)*(uint *)(puVar40 + -0x1578);
                              puVar54 = (uint *)(ulong)uVar34;
                              if (uVar34 == 0) goto code_r0x0010a430;
                            }
                            iVar47 = iVar47 + 1;
                            piVar38 = piVar38 + 3;
                            *(int *)(puVar40 + -0x1520) = iVar47;
                            if (iVar47 == 9) {
                              puVar49 = *(uint **)(puVar40 + -0x1610);
                              uVar34 = *(uint *)(puVar40 + -0x1648);
                              uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                              param_4 = *(uint **)(puVar40 + -0x1650);
                              goto LAB_0010acb2;
                            }
                          } while( true );
                        }
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        param_4 = *(uint **)(puVar40 + -0x1650);
LAB_0010acb2:
                        uVar16 = 0xa0;
                        goto LAB_001091ab;
                      }
                      goto LAB_0010acbd;
                    }
                  }
                  pauVar28 = *(undefined1 (**) [16])(puVar40 + -0x1658);
                  uVar34 = 0;
                  puVar54 = (uint *)0x0;
                  uVar25 = 0;
                  break;
                }
                *(short *)(puVar40 + -0x1628) = *(short *)(puVar40 + -0x1628) + 1;
                uVar25 = (ulong)(*(uint *)(puVar40 + -0x1610) & 0x2000);
                if ((*(uint *)(puVar40 + -0x1610) & 0x2000) != 0) {
                  puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                  uVar34 = 0;
                  puVar54 = (uint *)0x0;
                  uVar25 = 0;
                  *puVar29 = 0x801a0000;
                  pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                  break;
                }
                if (0xfffe < *(uint *)(puVar40 + -0x138c)) {
                  uVar34 = *(uint *)(puVar40 + -0x1648);
                  uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                  uVar16 = 0xc5;
                  param_4 = *(uint **)(puVar40 + -0x1650);
                  puVar49 = puVar30;
                  goto LAB_001091ab;
                }
                puVar23 = *(uint **)(puVar40 + -0x1658);
                uVar16 = *(uint *)(puVar40 + -0x138c) + 1;
                uVar34 = 0;
                puVar54 = (uint *)0x0;
                *(uint *)(puVar40 + -0x138c) = uVar16;
                *puVar23 = uVar16 | 0x80080000;
                pauVar28 = (undefined1 (*) [16])(puVar23 + 1);
                break;
                        case 0x29:
                psVar8 = *(short **)(puVar40 + -0x1630);
                puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                uVar34 = 1;
                if ((psVar8 != (short *)0x0) && (*psVar8 == *(short *)(puVar40 + -0x1628))) {
                  uVar25 = *(ulong *)(psVar8 + 4);
                  uVar13 = psVar8[3];
                  *(uint *)(puVar40 + -0x1580) =
                       *(uint *)(puVar40 + -0x1580) & 0xfefbdb17 | *(uint *)(psVar8 + 4);
                  auVar58._8_8_ = 0;
                  auVar58._0_8_ = *(ulong *)(puVar40 + -0x15b0) & _LC28 | uVar25;
                  *(uint *)(puVar40 + -0x15f0) =
                       *(uint *)(puVar40 + -0x15f0) & 0xffffe07f | *(uint *)(psVar8 + 6);
                  *(ulong *)(puVar40 + -0x15b0) = *(ulong *)(puVar40 + -0x15b0) & _LC28 | uVar25;
                  if (((uVar13 & 1) != 0) &&
                     (*(uint *)(puVar40 + -0x138c) < (uint)(ushort)psVar8[2])) {
                    *(uint *)(puVar40 + -0x138c) = (uint)(ushort)psVar8[2];
                  }
                  puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                  uVar34 = (uVar13 >> 1 ^ 1) & 1;
                  if ((uVar13 & 4) != 0) {
                    *puVar29 = 0x80190000;
                    puVar29 = puVar29 + 1;
                  }
                  if (*(long *)(puVar40 + -0x1430) == *(long *)(puVar40 + -0x1630)) {
                    *(undefined8 *)(puVar40 + -0x1630) = 0;
                  }
                  else {
                    *(long *)(puVar40 + -0x1630) = *(long *)(puVar40 + -0x1630) + -0x10;
                  }
                }
                sVar2 = *(short *)(puVar40 + -0x1628);
                if (sVar2 != 0) {
                  *puVar29 = 0x80190000;
                  pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                  puVar54 = (uint *)0x0;
                  *(short *)(puVar40 + -0x1628) = sVar2 + -1;
                  uVar25 = 0;
                  break;
                }
                param_4 = *(uint **)(puVar40 + -0x1650);
                puVar49 = *(uint **)(puVar40 + -0x1500);
                uVar16 = 0x7a;
                goto LAB_0010b470;
                        case 0x2a:
                uVar25 = 0x80340000;
                goto LAB_0010a257;
                        case 0x2b:
                uVar25 = 0x80370000;
                goto LAB_0010a257;
                        case 0x2e:
                puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                puVar54 = (uint *)0x0;
                uVar25 = 0;
                uVar34 = 1;
                *puVar29 = 0x80170000;
                pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                break;
                        case 0x3f:
                uVar25 = 0x803a0000;
LAB_0010a257:
                if (uVar34 == 0) {
                  param_4 = *(uint **)(puVar40 + -0x1650);
                  puVar49 = *(uint **)(puVar40 + -0x1500);
                  uVar16 = 0x6d;
LAB_0010b470:
                  *(uint *)(puVar40 + -0x1530) = uVar16;
                  uVar25 = (long)puVar49 + (-4 - *(long *)(puVar40 + -0x1420)) >> 2;
                  *(ulong *)(puVar40 + -0x13b0) = uVar25;
                  goto LAB_00109805;
                }
                puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                if (**(int **)(puVar40 + -0x1618) == -0x7fd60000) {
                  if (*(undefined4 **)(puVar40 + -0x1578) <= puVar29 + -1) {
                    *(uint *)(puVar40 + -0x1610) = uVar16;
                    *(int *)(puVar40 + -0x1590) = (int)uVar25;
                    uVar25 = (*(long *)(puVar40 + -0x1658) - *(long *)(puVar40 + -0x1578)) - 4U >> 2
                    ;
                    *(undefined8 *)(puVar40 + -0x1680) = 0x10b42d;
                    memmove((void *)(*(long *)(puVar40 + -0x1658) + uVar25 * -4),
                            puVar29 + -1 + -uVar25,uVar25 * 4 + 4);
                    uVar16 = *(uint *)(puVar40 + -0x1610);
                    uVar25 = (ulong)*(uint *)(puVar40 + -0x1590);
                    auVar58 = extraout_XMM0;
                  }
                  **(undefined4 **)(puVar40 + -0x1578) = 0x801a0000;
                  lVar35 = *(long *)(puVar40 + -0x1658);
                  *(undefined4 *)(lVar35 + 4) = 0x80190000;
                  puVar29 = (undefined4 *)(lVar35 + 8);
                }
                *puVar29 = (int)uVar25;
                if (uVar16 == 0x7b) {
                  pauVar28 = (undefined1 (*) [16])(puVar29 + 3);
                  uVar34 = 0;
                  puVar54 = (uint *)0x0;
                  auVar58._8_8_ = 0;
                  auVar58._0_8_ = *(ulong *)(puVar40 + -0x151c);
                  *(ulong *)(puVar29 + 1) = *(ulong *)(puVar40 + -0x151c);
                }
                else {
                  pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                  uVar34 = 0;
                  puVar54 = (uint *)0x0;
                }
                break;
                        case 0x5b:
                if ((long)puVar52 - (long)puVar30 < 0x15) {
LAB_0010ba30:
                  if (puVar30 < puVar52) {
                    puVar45 = (uint *)(ulong)puVar32[1];
                    if (puVar32[1] < 0x3e) {
                      if ((0x2400400000000000U >> ((ulong)puVar45 & 0x3f) & 1) != 0) {
                        *(undefined8 *)(puVar40 + -0x1680) = 0x10ba65;
                        iVar47 = check_posix_syntax(puVar30,puVar52,puVar40 + -0x14e8);
                        auVar58._8_8_ = extraout_XMM0_Qb_17;
                        auVar58._0_8_ = extraout_XMM0_Qa_17;
                        puVar23 = extraout_RDX_10;
                        if (iVar47 != 0) {
                          uVar34 = *(uint *)(puVar40 + -0x1648);
                          uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                          param_4 = *(uint **)(puVar40 + -0x1650);
                          uVar16 = ((int)puVar45 != 0x3a) + 0x70;
                          goto LAB_001091ab;
                        }
                      }
                      if (puVar52 <= puVar30) goto LAB_0010bfd1;
                    }
                    bVar55 = false;
                    do {
                      uVar34 = *puVar30;
                      puVar49 = puVar30 + 1;
                      *(uint **)(puVar40 + -0x1500) = puVar49;
                      *(uint *)(puVar40 + -0x152c) = uVar34;
                      if (uVar34 == 0x5c) {
                        if (puVar52 <= puVar49) break;
                        if (puVar30[1] == 0x45) {
                          puVar49 = puVar30 + 2;
                          *(uint **)(puVar40 + -0x1500) = puVar49;
                        }
                        else {
                          if ((long)puVar52 - (long)puVar49 < 9) break;
                          *(undefined8 *)(puVar40 + -0x1680) = 0x10beff;
                          iVar47 = _pcre2_strncmp_c8_32(puVar49,&_LC23,3);
                          auVar58._8_8_ = extraout_XMM0_Qb_20;
                          auVar58._0_8_ = extraout_XMM0_Qa_20;
                          puVar23 = extraout_RDX_12;
                          if (iVar47 != 0) break;
                          puVar49 = puVar30 + 4;
                          *(uint **)(puVar40 + -0x1500) = puVar49;
                        }
                      }
                      else if (((*(uint *)(puVar40 + -0x1610) & 0x1000000) == 0) ||
                              ((uVar34 != 0x20 && (uVar34 != 9)))) {
                        if (bVar55) {
                          if ((uVar34 != 0x5d) || ((puVar40[-0x1394] & 1) == 0)) goto LAB_0010baf3;
                          uVar18 = 0x800c0000;
                        }
                        else {
                          if (uVar34 == 0x5e) {
                            bVar55 = true;
                            goto LAB_0010babf;
                          }
                          if ((uVar34 != 0x5d) || (uVar18 = 0x800b0000, (puVar40[-0x1394] & 1) == 0)
                             ) goto LAB_0010bfd1;
                        }
                        puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                        puVar54 = (uint *)0x0;
                        uVar25 = 0;
                        uVar34 = 1;
                        puVar30 = *(uint **)(puVar40 + -0x1500);
                        *puVar29 = uVar18;
                        pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                        goto LAB_00109927;
                      }
LAB_0010babf:
                      puVar30 = puVar49;
                    } while (puVar49 < puVar52);
                    if (bVar55) {
LAB_0010baf3:
                      uVar18 = 0x800e0000;
                      goto LAB_0010baf8;
                    }
                  }
LAB_0010bfd1:
                  uVar18 = 0x800a0000;
LAB_0010baf8:
                  puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                  uVar34 = *(uint *)(puVar40 + -0x152c);
                  uVar17 = 0;
                  uVar48 = 0;
                  *puVar29 = uVar18;
                  puVar30 = puVar29 + 1;
LAB_0010bb81:
                  if (uVar48 != 0) {
                    if (uVar34 != 0x5c) goto LAB_0010bbf1;
                    puVar45 = *(uint **)(puVar40 + -0x1500);
                    if ((puVar45 < puVar52) && (*puVar45 == 0x45)) {
                      puVar49 = puVar45 + 1;
                      uVar48 = 0;
                      goto LAB_0010bb57;
                    }
                    puVar49 = puVar45;
                    if (uVar17 != 1) {
                      uVar17 = 3;
                      goto LAB_0010bb50;
                    }
                    if (puVar30[-2] == 0x5c) goto LAB_0010bf4d;
                    if (puVar30[-2] < 0x5d) goto LAB_0010bc2a;
LAB_0010bf32:
                    param_4 = *(uint **)(puVar40 + -0x1650);
                    puVar49 = puVar45;
                    goto LAB_0010bf3a;
                  }
                  if (((*(uint *)(puVar40 + -0x1610) & 0x1000000) != 0) &&
                     ((uVar34 == 0x20 || (uVar34 == 9)))) {
                    puVar49 = *(uint **)(puVar40 + -0x1500);
                    goto LAB_0010bb57;
                  }
                  if (uVar34 == 0x5b) {
                    puVar49 = *(uint **)(puVar40 + -0x1500);
                    if ((long)puVar52 - (long)puVar49 < 9) {
LAB_0010beac:
                      puVar45 = puVar49;
                      if (uVar17 != 1) {
                        uVar17 = 3;
                        goto LAB_0010bb50;
                      }
LAB_0010bf20:
                      puVar49 = puVar45;
                      if (puVar30[-2] == uVar34) goto LAB_0010bf4d;
                      if (puVar30[-2] <= uVar34) goto LAB_0010bc1a;
                      goto LAB_0010bf32;
                    }
                    uVar16 = *puVar49;
                    puVar45 = puVar49;
                    if ((0x3d < uVar16) ||
                       ((0x2400400000000000U >> ((ulong)uVar16 & 0x3f) & 1) == 0)) {
                      if (uVar17 != 1) {
                        uVar17 = 3;
                        goto LAB_0010bb50;
                      }
                      goto LAB_0010bf20;
                    }
                    *(undefined8 *)(puVar40 + -0x1680) = 0x10bcfa;
                    iVar47 = check_posix_syntax(puVar49,puVar52,puVar40 + -0x14e8);
                    auVar58._8_8_ = extraout_XMM0_Qb_18;
                    auVar58._0_8_ = extraout_XMM0_Qa_18;
                    puVar23 = extraout_RDX_11;
                    if (iVar47 == 0) goto LAB_0010bea4;
                    if (uVar17 == 1) goto LAB_0010bf82;
                    if (uVar16 != 0x3a) {
                      param_4 = *(uint **)(puVar40 + -0x1650);
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      uVar16 = 0x71;
                      goto LAB_0010b470;
                    }
                    *(uint **)(puVar40 + -0x1500) = puVar45 + 1;
                    uVar34 = puVar45[1];
                    if (uVar34 == 0x5e) {
                      puVar45 = puVar45 + 2;
                      *(uint **)(puVar40 + -0x1500) = puVar45;
                    }
                    puVar49 = *(uint **)(puVar40 + -0x1500);
                    *(uint **)(puVar40 + -0x1588) = puVar52;
                    *(uint **)(puVar40 + -0x1548) = puVar30;
                    *(long *)(puVar40 + -0x1558) = *(long *)(puVar40 + -0x14e8);
                    uVar16 = 5;
                    *(uint *)(puVar40 + -0x154c) = (uint)(uVar34 == 0x5e);
                    uVar34 = (uint)(*(long *)(puVar40 + -0x14e8) - (long)puVar49 >> 2);
                    puVar23 = (uint *)(long)(int)uVar34;
                    puVar51 = posix_name_lengths;
                    goto LAB_0010bdb6;
                  }
                  if (uVar34 == 0x2d) {
                    if (1 < uVar17) {
                      puVar23 = (uint *)0x801f0000;
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      uVar34 = 0x801e0000;
                      if (uVar17 == 3) {
                        uVar34 = 0x801f0000;
                      }
                      uVar17 = 1;
                      *puVar30 = uVar34;
                      puVar30 = puVar30 + 1;
                      goto LAB_0010bb57;
                    }
LAB_0010bea4:
                    puVar49 = *(uint **)(puVar40 + -0x1500);
                    goto LAB_0010beac;
                  }
                  if (uVar34 != 0x5c) {
                    if (uVar17 != 1) goto LAB_0010bbcb;
                    puVar45 = *(uint **)(puVar40 + -0x1500);
                    goto LAB_0010bf20;
                  }
                  puVar49 = *(uint **)(puVar40 + -0x1500);
                  *(uint **)(puVar40 + -0x14e8) = puVar49;
                  *(undefined1 **)(puVar40 + -0x1680) = puVar40 + -0x1458;
                  *(undefined8 *)(puVar40 + -0x1688) = 1;
                  puVar45 = (uint *)(ulong)*(uint *)(puVar40 + -0x1590);
                  param_5 = (undefined1 *)(ulong)*(uint *)(puVar40 + -0x1610);
                  *(undefined1 **)(puVar40 + -0x1558) = puVar40 + -0x1524;
                  *(undefined1 **)(puVar40 + -0x1588) = puVar40 + -0x1500;
                  *(undefined8 *)(puVar40 + -0x1690) = 0x10c1db;
                  uVar41 = _pcre2_check_escape_32
                                     (puVar40 + -0x1500,puVar52,puVar40 + -0x152c,puVar40 + -0x1524)
                  ;
                  auVar58._8_8_ = extraout_XMM0_Qb_23;
                  auVar58._0_8_ = extraout_XMM0_Qa_23;
                  uVar16 = *(uint *)(puVar40 + -0x1524);
                  uVar25 = (ulong)uVar16;
                  uVar20 = *(undefined8 *)(puVar40 + -0x1588);
                  puVar32 = *(uint **)(puVar40 + -0x1558);
                  puVar23 = extraout_RDX_14;
                  if (uVar16 == 0) {
                    if (0x1a < uVar41) {
switchD_0010c2ec_caseD_1:
                      if (uVar17 == 1) {
                        uVar34 = *(uint *)(puVar40 + -0x1648);
                        uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                        uVar16 = 0x96;
                        param_4 = *(uint **)(puVar40 + -0x1650);
                        puVar49 = *(uint **)(puVar40 + -0x1500);
                        goto LAB_001091ab;
                      }
                      if ((int)uVar41 < 0x11) {
                        if ((int)uVar41 < 0xf) {
                          if (0xb < (int)uVar41) {
                            uVar34 = *(uint *)(puVar40 + -0x1648);
                            uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                            param_4 = *(uint **)(puVar40 + -0x1650);
                            if (uVar41 != 0xc) goto LAB_0010c43e;
                            uVar16 = 0xab;
                            puVar49 = *(uint **)(puVar40 + -0x1500);
                            goto LAB_001091ab;
                          }
                          if ((int)uVar41 < 6) goto LAB_0010c42f;
                          *(undefined8 *)(puVar40 + -0x1680) = 0x10c402;
                          puVar54 = (uint *)handle_escdsw(uVar41,puVar30,
                                                          *(undefined4 *)(puVar40 + -0x1610),
                                                          *(undefined4 *)(puVar40 + -0x1590));
                          auVar58._8_8_ = extraout_XMM0_Qb_24;
                          auVar58._0_8_ = extraout_XMM0_Qa_24;
                          puVar23 = extraout_RDX_15;
                        }
                        else {
                          *(uint *)(puVar40 + -0x1588) = uVar41;
                          *(undefined2 *)(puVar40 + -0x1510) = 0;
                          *(undefined2 *)(puVar40 + -0x150c) = 0;
                          *(ulong *)(puVar40 + -0x1680) = uVar25;
                          *(undefined8 *)(puVar40 + -0x1688) = *(undefined8 *)(puVar40 + -0x1418);
                          puVar45 = *(uint **)(puVar40 + -0x1438);
                          *(undefined8 *)(puVar40 + -0x1690) = 0x10c4c9;
                          iVar14 = get_ucp_constprop_0_isra_0
                                             (uVar20,puVar40 + -0x14e0,puVar40 + -0x1510,
                                              puVar40 + -0x150c);
                          auVar58._8_8_ = extraout_XMM0_Qb_25;
                          auVar58._0_8_ = extraout_XMM0_Qa_25;
                          puVar23 = *(uint **)(puVar40 + -0x1688);
                          iVar47 = *(int *)(puVar40 + -0x1588);
                          if (iVar14 == 0) goto LAB_0010acbd;
                          if (*(int *)(puVar40 + -0x14e0) != 0) {
                            if (iVar47 == 0xf) {
                              iVar47 = 0x10;
                            }
                            else {
                              iVar47 = 0xf;
                            }
                          }
                          uVar44 = *(undefined2 *)(puVar40 + -0x1510);
                          uVar13 = *(ushort *)(puVar40 + -0x150c);
                          puVar23 = (uint *)(ulong)uVar13;
                          puVar54 = puVar30 + 2;
                          *puVar30 = iVar47 + 0x80180000;
                          puVar30[1] = CONCAT22(uVar44,uVar13);
                          param_5 = (undefined1 *)puVar32;
                        }
                      }
                      else {
                        if (3 < uVar41 - 0x12) {
LAB_0010c42f:
                          uVar34 = *(uint *)(puVar40 + -0x1648);
                          uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                          param_4 = *(uint **)(puVar40 + -0x1650);
LAB_0010c43e:
                          uVar16 = 0x6b;
                          puVar49 = (uint *)(*(long *)(puVar40 + -0x1500) + -4);
                          goto LAB_001091ab;
                        }
                        puVar54 = puVar30 + 1;
                        *puVar30 = uVar41 + 0x80180000;
                      }
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      if (((puVar52 + -1 <= puVar49) || (*puVar49 != 0x2d)) || (puVar49[1] == 0x5d))
                      {
                        uVar48 = 0;
                        uVar17 = 0;
                        puVar30 = puVar54;
                        goto LAB_0010bb57;
                      }
                      goto LAB_0010bf82;
                    }
                    puVar23 = &switchD_0010c2ec::switchdataD_0010e27c;
                    uVar25 = (long)&switchD_0010c2ec::switchdataD_0010e27c +
                             (long)(int)(&switchD_0010c2ec::switchdataD_0010e27c)[uVar41];
                    switch(uVar41) {
                    case 0:
                      uVar34 = *(uint *)(puVar40 + -0x152c);
                      if (uVar17 != 1) {
LAB_0010c28b:
                        uVar17 = 2;
                        uVar48 = uVar41;
                        goto LAB_0010bbd0;
                      }
                      if (puVar30[-2] == uVar34) goto LAB_0010bf45;
                      if (puVar30[-2] <= uVar34) goto LAB_0010c2ff;
                      break;
                    default:
                      goto switchD_0010c2ec_caseD_1;
                    case 4:
                    case 0x11:
                    case 0x16:
                      uVar34 = *(uint *)(puVar40 + -0x1648);
                      uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                      uVar16 = 0x6b;
                      param_4 = *(uint **)(puVar40 + -0x1650);
                      puVar49 = (uint *)(*(long *)(puVar40 + -0x1500) + -4);
                      goto LAB_001091ab;
                    case 5:
                      *(undefined4 *)(puVar40 + -0x152c) = 8;
                      if (uVar17 != 1) {
                        puVar49 = *(uint **)(puVar40 + -0x1500);
                        uVar48 = 0;
                        uVar34 = 8;
                        uVar17 = 2;
                        goto LAB_0010bb50;
                      }
                      if (puVar30[-2] == 8) goto LAB_0010bf45;
                      if (puVar30[-2] < 9) {
                        uVar34 = 8;
LAB_0010c243:
                        if (puVar30[-1] == 0x801f0000) {
                          puVar30[-1] = 0x801e0000;
                        }
                        puVar49 = *(uint **)(puVar40 + -0x1500);
                        goto LAB_0010bc2a;
                      }
                      break;
                    case 0x19:
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      uVar48 = 0;
                      goto LAB_0010bb57;
                    case 0x1a:
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      uVar48 = 1;
                      goto LAB_0010bb57;
                    }
                  }
                  else {
                    if ((puVar40[-0x1590] & 2) == 0) {
                      uVar34 = *(uint *)(puVar40 + -0x1648);
                      uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                      param_4 = *(uint **)(puVar40 + -0x1650);
                      puVar49 = *(uint **)(puVar40 + -0x1500);
                      goto LAB_001091ab;
                    }
                    *(uint **)(puVar40 + -0x1500) = puVar49;
                    if (puVar52 <= puVar49) {
                      *(undefined4 *)(puVar40 + -0x152c) = 0x5c;
                      bVar55 = uVar17 != 1;
                      uVar17 = 2;
                      if (bVar55) goto LAB_0010bb50;
                      if (puVar30[-2] == 0x5c) goto LAB_0010bf4d;
                      if (puVar30[-2] < 0x5d) goto LAB_0010c243;
                      param_4 = *(uint **)(puVar40 + -0x1650);
                      goto LAB_0010bf3a;
                    }
                    uVar34 = *puVar49;
                    puVar45 = puVar49 + 1;
                    *(uint **)(puVar40 + -0x1500) = puVar45;
                    *(uint *)(puVar40 + -0x152c) = uVar34;
                    uVar41 = uVar48;
                    if (uVar17 != 1) goto LAB_0010c28b;
                    puVar49 = puVar45;
                    if (uVar34 == puVar30[-2]) goto LAB_0010bf4d;
                    if (uVar34 < puVar30[-2]) goto LAB_0010bf32;
LAB_0010c2ff:
                    if (puVar30[-1] == 0x801f0000) {
                      puVar30[-1] = 0x801e0000;
                    }
                    do {
                      puVar45 = *(uint **)(puVar40 + -0x1500);
LAB_0010bc1a:
                      puVar49 = puVar45;
                      if ((int)uVar34 < 0) {
                        *puVar30 = 0x80050000;
                        puVar30 = puVar30 + 1;
                      }
LAB_0010bc2a:
                      *puVar30 = uVar34;
                      uVar17 = 0;
                      puVar45 = puVar49;
                      puVar30 = puVar30 + 1;
LAB_0010bb57:
                      while( true ) {
                        while( true ) {
                          if (puVar52 <= puVar49) {
                            uVar34 = *(uint *)(puVar40 + -0x1648);
                            uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                            uVar16 = 0x6a;
                            param_4 = *(uint **)(puVar40 + -0x1650);
                            goto LAB_001091ab;
                          }
                          uVar34 = *puVar49;
                          *(uint **)(puVar40 + -0x1500) = puVar49 + 1;
                          *(uint *)(puVar40 + -0x152c) = uVar34;
                          if (uVar34 != 0x5d) goto LAB_0010bb81;
                          if (uVar48 == 0) {
                            puVar54 = (uint *)0x0;
                            if (uVar17 == 1) {
                              puVar30[-1] = 0x2d;
                            }
                            *puVar30 = 0x800d0000;
                            pauVar28 = (undefined1 (*) [16])(puVar30 + 1);
                            uVar25 = 0;
                            uVar34 = 1;
                            puVar30 = puVar49 + 1;
                            goto LAB_00109927;
                          }
LAB_0010bbf1:
                          uVar48 = 1;
                          if (uVar17 == 1) break;
LAB_0010bbcb:
                          uVar17 = 3;
LAB_0010bbd0:
                          if ((int)uVar34 < 0) {
                            *puVar30 = 0x80050000;
                            puVar30 = puVar30 + 1;
                            puVar49 = *(uint **)(puVar40 + -0x1500);
                          }
                          else {
                            puVar49 = *(uint **)(puVar40 + -0x1500);
                            puVar45 = puVar49;
                          }
LAB_0010bb50:
                          *puVar30 = uVar34;
                          puVar30 = puVar30 + 1;
                        }
                        if (puVar30[-2] != uVar34) break;
LAB_0010bf45:
                        puVar49 = *(uint **)(puVar40 + -0x1500);
LAB_0010bf4d:
                        uVar17 = 0;
                        puVar45 = puVar49;
                        puVar30 = puVar30 + -1;
                      }
                    } while (puVar30[-2] <= uVar34);
                  }
                  param_4 = *(uint **)(puVar40 + -0x1650);
                  puVar49 = *(uint **)(puVar40 + -0x1500);
LAB_0010bf3a:
                  uVar16 = 0x6c;
                  goto LAB_0010b470;
                }
                *(undefined8 *)(puVar40 + -0x1680) = 0x10bfef;
                iVar47 = _pcre2_strncmp_c8_32(puVar30,"[:<:]]",6);
                auVar58._8_8_ = extraout_XMM0_Qb_21;
                auVar58._0_8_ = extraout_XMM0_Qa_21;
                if (iVar47 != 0) {
                  *(undefined8 *)(puVar40 + -0x1680) = 0x10c10e;
                  iVar47 = _pcre2_strncmp_c8_32(puVar30,"[:>:]]",6);
                  auVar58._8_8_ = extraout_XMM0_Qb_22;
                  auVar58._0_8_ = extraout_XMM0_Qa_22;
                  puVar23 = extraout_RDX_13;
                  if (iVar47 != 0) goto LAB_0010ba30;
                }
                **(undefined4 **)(puVar40 + -0x1658) = 0x80180005;
                if (puVar32[3] == 0x3c) {
                  uVar18 = 0x80230000;
                  puVar29 = (undefined4 *)(*(long *)(puVar40 + -0x1658) + 8);
                }
                else {
                  lVar35 = *(long *)(puVar40 + -0x1658);
                  param_5 = (undefined1 *)0x0;
                  uVar18 = 0x80250000;
                  *(undefined4 *)(puVar40 + -0x1594) = 1;
                  *(undefined8 *)(lVar35 + 8) = 0;
                  puVar29 = (undefined4 *)(lVar35 + 0x10);
                }
                *(undefined4 *)(*(long *)(puVar40 + -0x1658) + 4) = uVar18;
                if ((*(uint *)(puVar40 + -0x1610) & 0x20000) == 0) {
                  puVar37 = puVar29 + 1;
                  uVar18 = 0x8018000b;
                }
                else {
                  puVar29[1] = 0x90000;
                  puVar37 = puVar29 + 2;
                  uVar18 = 0x80180010;
                }
                *puVar29 = uVar18;
                puVar54 = (uint *)0x0;
                pauVar28 = (undefined1 (*) [16])(puVar37 + 1);
                *puVar37 = 0x80190000;
                uVar25 = 0;
                uVar34 = 1;
                *(uint **)(puVar40 + -0x1500) = puVar32 + 7;
                puVar30 = puVar32 + 7;
                break;
                        case 0x5c:
                *(uint *)(puVar40 + -0x154c) = uVar16;
                puVar49 = (uint *)(puVar40 + -0x1524);
                *(uint **)(puVar40 + -0x14e8) = puVar30;
                *(undefined1 **)(puVar40 + -0x1588) = puVar40 + -0x1500;
                *(undefined1 **)(puVar40 + -0x1558) = puVar40 + -0x1458;
                *(undefined1 **)(puVar40 + -0x1680) = puVar40 + -0x1458;
                *(undefined8 *)(puVar40 + -0x1688) = 0;
                puVar45 = (uint *)(ulong)*(uint *)(puVar40 + -0x1590);
                param_5 = (undefined1 *)(ulong)*(uint *)(puVar40 + -0x1610);
                *(undefined8 *)(puVar40 + -0x1690) = 0x10a981;
                iVar14 = _pcre2_check_escape_32(puVar40 + -0x1500,puVar52,puVar40 + -0x152c);
                auVar58._8_8_ = extraout_XMM0_Qb_08;
                auVar58._0_8_ = extraout_XMM0_Qa_08;
                puVar54 = (uint *)(ulong)*(uint *)(puVar40 + -0x1524);
                iVar47 = *(int *)(puVar40 + -0x154c);
                puVar23 = extraout_RDX_03;
                if (*(uint *)(puVar40 + -0x1524) != 0) goto LAB_0010a99f;
                if (iVar14 == 0) {
LAB_0010adee:
                  piVar38 = *(int **)(puVar40 + -0x1658);
                  iVar47 = *(int *)(puVar40 + -0x152c);
                  if (iVar47 < 0) {
                    *piVar38 = -0x7ffb0000;
                    piVar38 = piVar38 + 1;
                  }
LAB_0010a9ce:
                  *piVar38 = iVar47;
                  pauVar28 = (undefined1 (*) [16])(piVar38 + 1);
                  puVar54 = (uint *)0x0;
                  uVar25 = 0;
                  uVar34 = 1;
                  puVar30 = *(uint **)(puVar40 + -0x1500);
                  break;
                }
                if (iVar14 < 0) {
                  puVar30 = *(uint **)(puVar40 + -0x1500);
                  uVar34 = -iVar14;
                  pauVar28 = (undefined1 (*) [16])(*(uint **)(puVar40 + -0x1658) + 1);
                  lVar35 = ((long)puVar30 - *(long *)(puVar40 + -0x1420) >> 2) + -1;
                  *(long *)(puVar40 + -0x14e0) = lVar35;
                  **(uint **)(puVar40 + -0x1658) = uVar34 | 0x80030000;
                  if (iVar14 < -9) {
                    lVar26 = *(long *)(puVar40 + -0x1658);
                    uVar25 = 0;
                    uVar34 = 1;
                    *(int *)(lVar26 + 4) = (int)((ulong)lVar35 >> 0x20);
                    pauVar28 = (undefined1 (*) [16])(lVar26 + 0xc);
                    *(int *)(lVar26 + 8) = (int)lVar35;
                  }
                  else {
                    if (*(long *)(puVar40 + (long)(int)uVar34 * 8 + -0x1400) != -1)
                    goto LAB_0010b3af;
                    *(long *)(puVar40 + ((long)(int)uVar34 + 10) * 8 + -0x1450) = lVar35;
                    uVar25 = 0;
                    uVar34 = 1;
                  }
                }
                else if (iVar14 - 6U < 0x18) {
                  puVar23 = &switchD_0010ae3a::switchdataD_0010e154;
                  uVar34 = (&switchD_0010ae3a::switchdataD_0010e154)[iVar14 - 6U];
                  switch(iVar14) {
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 0xb:
                    uVar25 = 0;
                    uVar34 = 1;
                    *(undefined8 *)(puVar40 + -0x1680) = 0x10b31f;
                    pauVar28 = (undefined1 (*) [16])
                               handle_escdsw(iVar14,*(undefined8 *)(puVar40 + -0x1658),
                                             *(undefined4 *)(puVar40 + -0x1610),
                                             *(undefined4 *)(puVar40 + -0x1590));
                    auVar58._8_8_ = extraout_XMM0_Qb_15;
                    auVar58._0_8_ = extraout_XMM0_Qa_15;
                    puVar30 = *(uint **)(puVar40 + -0x1500);
                    break;
                  default:
                    piVar38 = *(int **)(puVar40 + -0x1658);
                    uVar25 = 0;
                    uVar34 = 1;
                    puVar30 = *(uint **)(puVar40 + -0x1500);
                    *piVar38 = iVar14 + -0x7fe80000;
                    pauVar28 = (undefined1 (*) [16])(piVar38 + 1);
                    break;
                  case 0xd:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                    goto switchD_0010ae3a_caseD_d;
                  case 0xe:
                    uVar25 = (ulong)(*(uint *)(puVar40 + -0x1610) & 0x100000);
                    if ((*(uint *)(puVar40 + -0x1610) & 0x100000) != 0) {
                      *(undefined4 *)(puVar40 + -0x1524) = 0xb7;
                      goto LAB_0010a99f;
                    }
                    puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                    puVar30 = *(uint **)(puVar40 + -0x1500);
                    uVar34 = 1;
                    *puVar29 = 0x8018000e;
                    pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                    break;
                  case 0xf:
                  case 0x10:
                    *(int *)(puVar40 + -0x1610) = iVar47;
                    *(undefined2 *)(puVar40 + -0x1510) = 0;
                    *(undefined2 *)(puVar40 + -0x150c) = 0;
                    *(long *)(puVar40 + -0x1680) =
                         (long)&switchD_0010ae3a::switchdataD_0010e154 + (long)(int)uVar34;
                    *(undefined8 *)(puVar40 + -0x1688) = *(undefined8 *)(puVar40 + -0x1418);
                    puVar45 = *(uint **)(puVar40 + -0x1438);
                    *(undefined8 *)(puVar40 + -0x1690) = 0x10b229;
                    iVar15 = get_ucp_constprop_0_isra_0
                                       (*(undefined8 *)(puVar40 + -0x1588),puVar40 + -0x14e0,
                                        puVar40 + -0x1510,puVar40 + -0x150c);
                    auVar58._8_8_ = extraout_XMM0_Qb_14;
                    auVar58._0_8_ = extraout_XMM0_Qa_14;
                    puVar23 = *(uint **)(puVar40 + -0x1688);
                    iVar47 = *(int *)(puVar40 + -0x1610);
                    param_5 = (undefined1 *)puVar49;
                    if (iVar15 == 0) goto LAB_0010a99f;
                    if (*(int *)(puVar40 + -0x14e0) != 0) {
                      if (iVar14 == 0xf) {
                        iVar14 = 0x10;
                      }
                      else {
                        iVar14 = 0xf;
                      }
                    }
                    piVar38 = *(int **)(puVar40 + -0x1658);
                    uVar25 = 0;
                    uVar44 = *(undefined2 *)(puVar40 + -0x150c);
                    puVar30 = *(uint **)(puVar40 + -0x1500);
                    uVar34 = 1;
                    *piVar38 = iVar14 + -0x7fe80000;
                    pauVar28 = (undefined1 (*) [16])(piVar38 + 2);
                    piVar38[1] = CONCAT22(*(undefined2 *)(puVar40 + -0x1510),uVar44);
                    break;
                  case 0x1b:
                  case 0x1c:
                    puVar23 = *(uint **)(puVar40 + -0x1500);
                    if (puVar52 <= puVar23) {
LAB_0010b0dc:
                      puVar23 = (uint *)0x9d;
                      uVar18 = 0xa9;
                      if (iVar14 == 0x1b) {
                        uVar18 = 0x9d;
                      }
                      *(undefined4 *)(puVar40 + -0x1524) = uVar18;
                      goto LAB_0010a99f;
                    }
                    uVar34 = *puVar23;
                    uVar25 = (ulong)uVar34;
                    if (uVar34 == 0x7b) {
                      uVar25 = 0x7d;
LAB_0010b075:
                      *(int *)(puVar40 + -0x1610) = iVar47;
                      *(uint **)(puVar40 + -0x1680) = puVar23;
                      *(undefined8 *)(puVar40 + -0x1688) = *(undefined8 *)(puVar40 + -0x1558);
                      *(uint **)(puVar40 + -0x1690) = puVar49;
                      *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                      puVar45 = (uint *)(puVar40 + -0x14f0);
                      puVar27 = (uint *)(puVar40 + -0x14e0);
                      *(undefined8 *)(puVar40 + -0x16a0) = 0x10b0b6;
                      iVar14 = read_name(*(undefined8 *)(puVar40 + -0x1588),puVar52,
                                         *(undefined4 *)(puVar40 + -0x15c0),uVar25);
                      auVar58._8_8_ = extraout_XMM0_Qb_12;
                      auVar58._0_8_ = extraout_XMM0_Qa_12;
                      iVar47 = *(int *)(puVar40 + -0x1610);
                      puVar23 = extraout_RDX_06;
                      param_5 = (undefined1 *)puVar27;
                      if (iVar14 != 0) {
                        uVar18 = 0x80040000;
LAB_0010b014:
                        uVar25 = 0;
                        puVar30 = *(uint **)(puVar40 + -0x1500);
                        uVar34 = 1;
                        pauVar28 = *(undefined1 (**) [16])(puVar40 + -0x1658) + 1;
                        auVar58._12_4_ = *(undefined4 *)(puVar40 + -0x14e0);
                        auVar58._8_4_ = (int)((ulong)*(undefined8 *)(puVar40 + -0x14e0) >> 0x20);
                        auVar58._4_4_ = *(undefined4 *)(puVar40 + -0x1528);
                        auVar58._0_4_ = uVar18;
                        **(undefined1 (**) [16])(puVar40 + -0x1658) = auVar58;
                        param_5 = (undefined1 *)puVar27;
                        break;
                      }
                    }
                    else {
                      if (uVar34 == 0x3c) {
                        uVar25 = 0x3e;
                      }
                      else if (uVar34 != 0x27) goto LAB_0010b0dc;
                      if (iVar14 != 0x1b) goto LAB_0010b075;
                      *(int *)(puVar40 + -0x1548) = (int)uVar25;
                      param_5 = (undefined1 *)0xa1;
                      *(int *)(puVar40 + -0x154c) = iVar47;
                      *(uint **)(puVar40 + -0x14e0) = puVar23 + 1;
                      *(ulong *)(puVar40 + -0x1680) = uVar25;
                      *(uint **)(puVar40 + -0x1688) = puVar49;
                      puVar45 = (uint *)(puVar40 + -0x1520);
                      *(undefined1 **)(puVar40 + -0x1610) = puVar40 + -0x14e0;
                      *(undefined8 *)(puVar40 + -0x1690) = 0x10af73;
                      iVar14 = read_number(puVar40 + -0x14e0,puVar52,
                                           *(undefined4 *)(puVar40 + -0x138c),0xffff);
                      auVar58._8_8_ = extraout_XMM0_Qb_10;
                      auVar58._0_8_ = extraout_XMM0_Qa_10;
                      puVar27 = *(uint **)(puVar40 + -0x1610);
                      iVar47 = *(int *)(puVar40 + -0x154c);
                      puVar23 = extraout_RDX_04;
                      if (iVar14 != 0) {
                        puVar45 = *(uint **)(puVar40 + -0x14e0);
                        if ((puVar52 <= puVar45) || (*(uint *)(puVar40 + -0x1548) != *puVar45)) {
                          *(undefined4 *)(puVar40 + -0x1524) = 0x9d;
                          goto LAB_0010a99f;
                        }
                        goto LAB_0010b185;
                      }
                      if (*(int *)(puVar40 + -0x1524) == 0) {
                        *(int *)(puVar40 + -0x1610) = iVar47;
                        *(uint **)(puVar40 + -0x1680) = puVar45;
                        *(undefined8 *)(puVar40 + -0x1688) = *(undefined8 *)(puVar40 + -0x1558);
                        *(uint **)(puVar40 + -0x1690) = puVar49;
                        *(undefined1 **)(puVar40 + -0x1698) = puVar40 + -0x1528;
                        puVar45 = (uint *)(puVar40 + -0x14f0);
                        *(undefined8 *)(puVar40 + -0x16a0) = 0x10affe;
                        iVar14 = read_name(*(undefined8 *)(puVar40 + -0x1588));
                        auVar58._8_8_ = extraout_XMM0_Qb_11;
                        auVar58._0_8_ = extraout_XMM0_Qa_11;
                        iVar47 = *(int *)(puVar40 + -0x1610);
                        puVar23 = extraout_RDX_05;
                        param_5 = (undefined1 *)puVar27;
                        if (iVar14 == 0) goto LAB_0010a99f;
                        uVar18 = 0x80210000;
                        goto LAB_0010b014;
                      }
                    }
LAB_0010a99f:
                    if ((puVar40[-0x1590] & 2) == 0) goto LAB_0010acbd;
                    *(uint **)(puVar40 + -0x1500) = puVar30;
                    if (puVar30 < puVar52) {
                      *(uint **)(puVar40 + -0x1500) = puVar32 + 2;
                      *(uint *)(puVar40 + -0x152c) = puVar32[1];
                      goto LAB_0010adee;
                    }
                    *(undefined4 *)(puVar40 + -0x152c) = 0x5c;
                    piVar38 = *(int **)(puVar40 + -0x1658);
                    goto LAB_0010a9ce;
                  case 0x1d:
                    puVar22 = *(undefined8 **)(puVar40 + -0x1658);
                    uVar25 = 0;
                    uVar34 = 1;
                    puVar30 = *(uint **)(puVar40 + -0x1500);
                    *puVar22 = _LC20;
                    pauVar28 = (undefined1 (*) [16])(puVar22 + 1);
                  }
                }
                else {
switchD_0010ae3a_caseD_d:
                  piVar38 = *(int **)(puVar40 + -0x1658);
                  uVar25 = 0;
                  uVar34 = 0;
                  puVar30 = *(uint **)(puVar40 + -0x1500);
                  *piVar38 = iVar14 + -0x7fe80000;
                  pauVar28 = (undefined1 (*) [16])(piVar38 + 1);
                }
                break;
                        case 0x5e:
                puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                uVar34 = 0;
                puVar54 = (uint *)0x0;
                uVar25 = 0;
                *puVar29 = 0x80090000;
                pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                break;
                        case 0x7b:
LAB_0010a214:
                param_5 = puVar40 + -0x1524;
                *(uint *)(puVar40 + -0x1610) = uVar16;
                *(undefined8 *)(puVar40 + -0x1680) = 0x10a23c;
                iVar47 = read_repeat_counts(puVar40 + -0x1500,puVar52,puVar40 + -0x151c,
                                            puVar40 + -0x1518);
                auVar58._8_8_ = extraout_XMM0_Qb_04;
                auVar58._0_8_ = extraout_XMM0_Qa_04;
                if (iVar47 != 0) {
                  puVar30 = *(uint **)(puVar40 + -0x1500);
                  uVar16 = *(uint *)(puVar40 + -0x1610);
                  uVar25 = 0x803d0000;
                  goto LAB_0010a257;
                }
                uVar16 = *(uint *)(puVar40 + -0x1524);
                puVar54 = (uint *)(ulong)uVar16;
                puVar30 = *(uint **)(puVar40 + -0x1500);
                puVar23 = extraout_RDX_00;
                if (uVar16 != 0) {
LAB_0010ae72:
                  uVar34 = *(uint *)(puVar40 + -0x1648);
                  uVar18 = *(undefined4 *)(puVar40 + -0x163c);
                  param_4 = *(uint **)(puVar40 + -0x1650);
                  puVar49 = puVar30;
                  goto LAB_001091ab;
                }
                puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                uVar25 = 0;
                uVar34 = 1;
                *puVar29 = 0x7b;
                pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                break;
                        case 0x7c:
                psVar8 = *(short **)(puVar40 + -0x1630);
                if (((psVar8 != (short *)0x0) && (*psVar8 == *(short *)(puVar40 + -0x1628))) &&
                   ((*(byte *)(psVar8 + 3) & 1) != 0)) {
                  if ((uint)(ushort)psVar8[2] < *(uint *)(puVar40 + -0x138c)) {
                    psVar8[2] = (short)*(uint *)(puVar40 + -0x138c);
                  }
                  *(uint *)(puVar40 + -0x138c) = (uint)*(ushort *)(*(long *)(puVar40 + -0x1630) + 2)
                  ;
                }
                puVar29 = *(undefined4 **)(puVar40 + -0x1658);
                uVar34 = 0;
                puVar54 = (uint *)0x0;
                uVar25 = 0;
                *puVar29 = 0x80010000;
                pauVar28 = (undefined1 (*) [16])(puVar29 + 1);
                     }

                     LAB_00109927:puVar23 = *(uint**)( puVar40 + -0x1658 );
                     *(undefined1(**) [16])( puVar40 + -0x1658 ) = pauVar28;
                     LAB_00109794:if (puVar52 <= puVar30) {
                        uVar34 = *(uint*)( puVar40 + -0x1648 );
                        uVar18 = *(undefined4*)( puVar40 + -0x163c );
                        param_4 = *(uint**)( puVar40 + -0x1650 );
                        uVar16 = *(uint*)( puVar40 + -0x15f0 ) & 8;
                        if (*(int*)( puVar40 + -0x15d8 ) == 0) goto LAB_0010999f;
                        *(undefined4*)( puVar40 + -0x1530 ) = 0xa0;
                        uVar16 = 0xa0;
                        uVar25 = (long)puVar30 - *(long*)( puVar40 + -0x1420 ) >> 2;
                        *(ulong*)( puVar40 + -0x13b0 ) = uVar25;
                        goto LAB_00109805;
                     }

                     *(undefined4*)( puVar40 + -0x151c ) = 0;
                     *(undefined4*)( puVar40 + -0x1518 ) = 0;
                     if (*(ulong*)( puVar40 + -0x15d0 ) <= *(ulong*)( puVar40 + -0x1658 )) {
                        uVar34 = *(uint*)( puVar40 + -0x1648 );
                        uVar18 = *(undefined4*)( puVar40 + -0x163c );
                        param_4 = *(uint**)( puVar40 + -0x1650 );
                        goto LAB_0010a9fd;
                     }

                     puVar49 = *(uint**)( puVar40 + -0x1618 );
                     lVar35 = *(long*)( puVar40 + -0x1458 );
                     *(uint**)( puVar40 + -0x1618 ) = puVar23;
                     puVar32 = puVar30;
                     goto LAB_00109126;
                  }

                  puVar27 = *(uint**)( puVar40 + -0x1658 );
                  iVar47 = 0x10000;
                  if (uVar16 == 0x3f) {
                     iVar47 = 0x20000;
                  }

                  uVar34 = 0;
                  puVar54 = (uint*)0x0;
                  uVar25 = 0;
                  puVar27[( ulong )(iVar14 != -0x7fc30000) * 2 + -3] = iVar47 + iVar14;
               }
 else if (uVar16 == 0x29) {
                  LAB_00109e16:if (0x40000 < (long)puVar30 - *(long*)( puVar40 + -0x1560 )) {
                     uVar34 = *(uint*)( puVar40 + -0x1648 );
                     uVar18 = *(undefined4*)( puVar40 + -0x163c );
                     uVar16 = 0xb0;
                     param_4 = *(uint**)( puVar40 + -0x1650 );
                     goto LAB_001091ab;
                  }

                  piVar38 = *(int**)( puVar40 + -0x1658 );
                  **(int**)( puVar40 + -0x1568 ) = (int)( (long)piVar38 - (long)*(int**)( puVar40 + -0x1568 ) >> 2 ) + -1;
                  if (*(int*)( puVar40 + -0x1550 ) == 0) {
                     *(undefined4*)( puVar40 + -0x15d8 ) = 0;
                     puVar27 = *(uint**)( puVar40 + -0x1658 );
                  }
 else {
                     *piVar38 = *(int*)( puVar40 + -0x1550 );
                     puVar27 = (uint*)( piVar38 + 1 );
                     *(undefined4*)( puVar40 + -0x15d8 ) = 0;
                     *(undefined4*)( puVar40 + -0x1550 ) = 0;
                  }

               }
 else if (uVar16 == 0x5c) {
                  LAB_001096ed:param_5 = (undefined1*)( ulong ) * (uint*)( puVar40 + -0x1610 );
                  if (( *(uint*)( puVar40 + -0x1610 ) & 0x400000 ) == 0) {
                     piVar38 = *(int**)( puVar40 + -0x1658 );
                     iVar47 = 0x5c;
                     LAB_0010a54b:*piVar38 = iVar47;
                     puVar27 = (uint*)( piVar38 + 1 );
                     goto LAB_00109787;
                  }

                  *(int*)( puVar40 + -0x1610 ) = (int)uVar25;
                  *(undefined1**)( puVar40 + -0x1680 ) = puVar40 + -0x1458;
                  *(undefined8*)( puVar40 + -0x1688 ) = 0;
                  *(undefined8*)( puVar40 + -0x1690 ) = 0x109737;
                  iVar47 = _pcre2_check_escape_32(puVar40 + -0x1500, puVar52, puVar40 + -0x152c, puVar40 + -0x1524, param_5, *(undefined4*)( puVar40 + -0x1590 ));
                  auVar58._8_8_ = extraout_XMM0_Qb_01;
                  auVar58._0_8_ = extraout_XMM0_Qa_01;
                  uVar16 = *(uint*)( puVar40 + -0x1524 );
                  puVar23 = (uint*)(ulong)uVar16;
                  puVar45 = *(uint**)( puVar40 + -0x1688 );
                  if (uVar16 != 0) {
                     uVar34 = *(uint*)( puVar40 + -0x1648 );
                     uVar18 = *(undefined4*)( puVar40 + -0x163c );
                     param_4 = *(uint**)( puVar40 + -0x1650 );
                     puVar49 = *(uint**)( puVar40 + -0x1500 );
                     goto LAB_001091ab;
                  }

                  puVar30 = *(uint**)( puVar40 + -0x1500 );
                  uVar25 = ( ulong ) * (uint*)( puVar40 + -0x1610 );
                  if (iVar47 != 0x1a) {
                     if (iVar47 < 0x1b) {
                        if (iVar47 == 0) {
                           iVar47 = *(int*)( puVar40 + -0x152c );
                           piVar38 = *(undefined4**)( puVar40 + -0x1658 ) + 1;
                           if (iVar47 < 0) {
                              **(undefined4**)( puVar40 + -0x1658 ) = 0x80050000;
                           }
 else {
                              piVar38 = *(int**)( puVar40 + -0x1658 );
                           }

                           goto LAB_0010a54b;
                        }

                        if (iVar47 == 0x19) goto LAB_00109777;
                     }
 else if (iVar47 == 0x1d) {
                        puVar22 = *(undefined8**)( puVar40 + -0x1658 );
                        *(undefined4*)( puVar40 + -0x15e0 ) = 0;
                        uVar34 = *(uint*)( puVar40 + -0x15d8 );
                        *puVar22 = _LC20;
                        puVar27 = (uint*)( puVar22 + 1 );
                        goto LAB_00109787;
                     }

                     uVar34 = *(uint*)( puVar40 + -0x1648 );
                     uVar18 = *(undefined4*)( puVar40 + -0x163c );
                     uVar16 = 0x8c;
                     param_4 = *(uint**)( puVar40 + -0x1650 );
                     puVar49 = puVar30;
                     goto LAB_001091ab;
                  }

                  *(undefined4*)( puVar40 + -0x15e0 ) = *(undefined4*)( puVar40 + -0x15d8 );
                  puVar27 = *(uint**)( puVar40 + -0x1658 );
               }
 else {
                  LAB_00109df3:puVar27 = *(uint**)( puVar40 + -0x1658 );
                  if ((int)uVar16 < 0) {
                     *puVar27 = 0x80050000;
                     puVar27 = puVar27 + 1;
                  }

                  LAB_00109e0a:*puVar27 = uVar16;
                  puVar27 = puVar27 + 1;
               }

               LAB_00109787:puVar23 = *(uint**)( puVar40 + -0x1658 );
               *(uint**)( puVar40 + -0x1658 ) = puVar27;
               goto LAB_00109794;
            }

            *(undefined4*)( puVar40 + -0x1594 ) = 0;
            LAB_0010a9fd:uVar16 = 0xa3;
            puVar49 = puVar30;
            goto LAB_001091ab;
         }

         LAB_0010a4ee:*(undefined4*)( puVar40 + -0x1594 ) = 0;
         *(undefined2*)( puVar40 + -0x1628 ) = 0;
         LAB_0010999f:*(undefined8*)( puVar40 + -0x1680 ) = 0x1099c3;
         auVar59 = manage_callouts(puVar30, puVar40 + -0x14f8, *(undefined4*)( puVar40 + -0x157c ), *(undefined8*)( puVar40 + -0x1658 ), puVar40 + -0x1458);
         puVar22 = auVar59._0_8_;
         if (uVar16 == 0) {
            if (( puVar40[-0x15f0] & 4 ) != 0) {
               auVar59._8_8_ = _LC30;
               auVar59._0_8_ = puVar22 + 1;
               *puVar22 = _LC30;
            }

         }
 else {
            auVar59._8_8_ = _LC29;
            auVar59._0_8_ = puVar22 + 1;
            *puVar22 = _LC29;
         }

         puVar23 = auVar59._8_8_;
         if (*(undefined4**)( puVar40 + -0x15d0 ) <= auVar59._0_8_) goto LAB_001097dd;
         sVar2 = *(short*)( puVar40 + -0x1628 );
         *auVar59._0_8_ = 0x80000000;
         if (sVar2 != 0) {
            LAB_001099fe:*(undefined4*)( puVar40 + -0x1530 ) = 0x72;
            uVar16 = 0x72;
            uVar25 = (long)puVar30 - *(long*)( puVar40 + -0x1420 ) >> 2;
            *(ulong*)( puVar40 + -0x13b0 ) = uVar25;
            goto LAB_00109805;
         }

         *(undefined4*)( puVar40 + -0x1530 ) = 0;
         goto LAB_001091d3;
      }

      if (puVar52 <= puVar30) goto LAB_0010a4ee;
      puVar23 = *(uint**)( puVar40 + -0x1658 );
      puVar45 = *(uint**)( puVar40 + -0x15d0 );
      if (puVar23 < puVar45) {
         *(uint*)( puVar40 + -0x1658 ) = uVar16;
         puVar51 = puVar40 + -0x1458;
         puVar49 = puVar30;
         do {
            uVar16 = *puVar49;
            puVar30 = puVar49 + 1;
            *(uint**)( puVar40 + -0x1500 ) = puVar30;
            *(uint*)( puVar40 + -0x152c ) = uVar16;
            if ((int)uVar25 != 0) {
               *(undefined8*)( puVar40 + -0x1680 ) = 0x108f57;
               puVar23 = (uint*)manage_callouts(puVar49, puVar40 + -0x14f8, 1, puVar23, puVar51);
            }

            if ((int)uVar16 < 0) {
               *puVar23 = 0x80050000;
               puVar23 = puVar23 + 1;
            }

            *puVar23 = uVar16;
            puVar23 = puVar23 + 1;
            if (puVar52 <= puVar30) {
               uVar16 = *(uint*)( puVar40 + -0x1658 );
               *(undefined4*)( puVar40 + -0x1594 ) = 0;
               *(uint**)( puVar40 + -0x1658 ) = puVar23;
               *(undefined2*)( puVar40 + -0x1628 ) = 0;
               goto LAB_0010999f;
            }

            puVar49 = puVar30;
         }
 while ( puVar23 < puVar45 );
      }

      LAB_001097dd:*(undefined4*)( puVar40 + -0x1530 ) = 0xa3;
      uVar16 = 0xa3;
      uVar25 = (long)puVar30 - *(long*)( puVar40 + -0x1420 ) >> 2;
      *(ulong*)( puVar40 + -0x13b0 ) = uVar25;
      goto LAB_00109805;
   }

   uVar20 = ( *(undefined8**)( puVar40 + -0x1660 ) )[2];
   pcVar6 = (code*)**(undefined8**)( puVar40 + -0x1660 );
   *(undefined8*)( puVar40 + -0x1680 ) = 0x108e1b;
   puVar22 = (undefined8*)( *pcVar6 )(lVar35, uVar20);
   auVar58._8_8_ = extraout_XMM0_Qb_00;
   auVar58._0_8_ = extraout_XMM0_Qa_00;
   if (puVar22 != (undefined8*)0x0) {
      *(undefined8**)( puVar40 + -0x1380 ) = puVar22;
      uVar42 = ( ulong ) * (uint*)( puVar40 + -0x1394 );
      goto LAB_00108e36;
   }

   *param_4 = 0x79;
   goto LAB_00108d08;
   code_r0x00108b5b:sVar2 = *(short*)( (long)ppuVar53 + 10 );
   uVar34 = *(int*)( puVar40 + -0x1650 ) + 2 + ( uint ) * (ushort*)( ppuVar53 + 1 );
   switch (sVar2) {
      case 0:
    *(uint *)(puVar40 + -0x1394) = *(uint *)(puVar40 + -0x1394) | *(uint *)((long)ppuVar53 + 0xc);
    break;
      case 1:
    *(uint *)(puVar40 + -0x15e8) = *(uint *)(puVar40 + -0x15e8) | *(uint *)((long)ppuVar53 + 0xc);
    break;
      case 2:
    *(uint *)(puVar40 + -0x15e8) = *(uint *)(puVar40 + -0x15e8) | 0x8000;
    *(undefined4 *)(puVar40 + -0x1624) = *(undefined4 *)((long)ppuVar53 + 0xc);
    break;
      case 3:
    *(uint *)(puVar40 + -0x15e8) = *(uint *)(puVar40 + -0x15e8) | 0x4000;
    *(undefined4 *)(puVar40 + -0x15f8) = *(undefined4 *)((long)ppuVar53 + 0xc);
    break;
      case 4:
      case 5:
      case 6:
    uVar16 = param_1[uVar34] - 0x30;
    if (9 < uVar16) {
      param_4 = *(uint **)(puVar40 + -0x1648);
      uVar16 = 0xa0;
      lVar35 = 0;
      *(undefined4 *)(puVar40 + -0x1530) = 0xa0;
      uVar25 = (long)((ulong)uVar34 * 4) >> 2;
      goto LAB_00108cf4;
    }
    uVar48 = 0;
    while( true ) {
      uVar17 = uVar34;
      uVar48 = uVar16 + uVar48 * 10;
      uVar16 = param_1[uVar17 + 1] - 0x30;
      if (9 < uVar16) break;
      uVar34 = uVar17 + 1;
      if (0x19999998 < uVar48) {
        param_4 = *(uint **)(puVar40 + -0x1648);
        goto LAB_00109942;
      }
    }
    uVar34 = uVar17 + 2;
    if (param_1[uVar17 + 1] != 0x29) {
      param_4 = *(uint **)(puVar40 + -0x1648);
LAB_00109942:
      uVar25 = (ulong)(uVar17 + 2);
      *(undefined4 *)(puVar40 + -0x1530) = 0xa0;
      uVar16 = 0xa0;
      lVar35 = 0;
      goto LAB_00108cf4;
    }
    if (sVar2 == 4) {
      *(uint *)(puVar40 + -0x15b8) = uVar48;
    }
    else {
      uVar16 = *(uint *)(puVar40 + -0x15c8);
      if (sVar2 != 5) {
        uVar16 = uVar48;
      }
      if (sVar2 != 5) {
        uVar48 = *(uint *)(puVar40 + -0x1598);
      }
      *(uint *)(puVar40 + -0x15c8) = uVar16;
      *(uint *)(puVar40 + -0x1598) = uVar48;
    }
   }

   goto switchD_00108b8a_default;
   LAB_0010a5b0:uVar34 = *(uint*)( puVar40 + -0x1648 );
   uVar18 = *(undefined4*)( puVar40 + -0x163c );
   uVar16 = 0x77;
   param_4 = *(uint**)( puVar40 + -0x1650 );
   puVar49 = *(uint**)( puVar40 + -0x1500 );
   goto LAB_001091ab;
   LAB_0010bdb6:if (uVar34 != uVar16) goto LAB_0010bda0;
   *(uint**)( puVar40 + -0x1540 ) = puVar23;
   *(undefined8*)( puVar40 + -0x1680 ) = 0x10bdd1;
   iVar47 = _pcre2_strncmp_c8_32(puVar49);
   auVar58._8_8_ = extraout_XMM0_Qb_19;
   auVar58._0_8_ = extraout_XMM0_Qa_19;
   puVar23 = *(uint**)( puVar40 + -0x1540 );
   param_5 = posix_name_lengths;
   if (iVar47 != 0) goto LAB_0010bda0;
   puVar52 = *(uint**)( puVar40 + -0x1588 );
   lVar35 = *(long*)( puVar40 + -0x1558 );
   iVar47 = *(int*)( puVar40 + -0x154c );
   puVar32 = *(uint**)( puVar40 + -0x1548 );
   puVar49 = (uint*)( lVar35 + 8 );
   puVar23 = puVar52 + -1;
   *(uint**)( puVar40 + -0x1500 ) = puVar49;
   if (( ( puVar23 <= puVar49 ) || ( *(int*)( lVar35 + 8 ) != 0x2d ) ) || ( *(int*)( lVar35 + 0xc ) == 0x5d )) {
      uVar34 = (int)puVar51 - 0x10e668;
      uVar48 = 0;
      if (( ( ( *(uint*)( puVar40 + -0x1610 ) & 0x20000 ) != 0 ) && ( ( *(uint*)( puVar40 + -0x1590 ) & 0x800 ) == 0 ) ) && ( ( ( *(uint*)( puVar40 + -0x1590 ) & 0x1000 ) == 0 || ( puVar23 = (uint*)0x2080(0x2080UL >> ( (ulong)uVar34 & 0x3f ) & 1) == 0 ) ) )) {
         uVar16 = ( &posix_substitutes )[(int)( uVar34 * 2 )];
         puVar23 = (uint*)(ulong)uVar16;
         uVar41 = ( &posix_substitutes )[(int)( uVar34 * 2 + 1 )];
         uVar17 = 0;
         if (-1 < (int)uVar16) {
            puVar30 = puVar32 + 2;
            *puVar32 = 0x80180010 - iVar47;
            puVar32[1] = uVar16 << 0x10 | uVar41;
            goto LAB_0010bb57;
         }

         if (uVar41 != 0) {
            puVar30 = puVar32 + 1;
            puVar23 = (uint*)( ulong )(0x80180013U - iVar47);
            *puVar32 = 0x80180013U - iVar47;
            goto LAB_0010bb57;
         }

      }

      puVar32[1] = uVar34;
      puVar30 = puVar32 + 2;
      uVar17 = 0;
      *puVar32 = ( -(uint)(iVar47 == 0) & 0xffff0000 ) + 0x801d0000;
      goto LAB_0010bb57;
   }

   LAB_0010bf82:uVar34 = *(uint*)( puVar40 + -0x1648 );
   uVar18 = *(undefined4*)( puVar40 + -0x163c );
   uVar16 = 0x96;
   param_4 = *(uint**)( puVar40 + -0x1650 );
   goto LAB_001091ab;
   LAB_0010bda0:puVar51 = puVar51 + 1;
   uVar16 = ( uint )(byte) * puVar51;
   if (*puVar51 == 0) goto LAB_0010c2b4;
   goto LAB_0010bdb6;
   code_r0x0010b57d:iVar47 = *(int*)( puVar40 + -0x1590 );
   puVar49 = *(uint**)( puVar40 + -0x1610 );
   uVar16 = ( &DAT_0010e704 )[(long)param_5 * 2];
   if (( 0 < iVar47 ) && ( puVar23 = (uint*)( ulong )(uVar16 + 0x7fdd0000) ),0x30000 < uVar16 + 0x7fdd0000) {
      uVar34 = *(uint*)( puVar40 + -0x1648 );
      uVar18 = *(undefined4*)( puVar40 + -0x163c );
      param_4 = *(uint**)( puVar40 + -0x1650 );
      uVar16 = ( -(uint)((uVar16 + 0x7fd90000 & 0xfffeffff) == 0) & 0x46 ) + 0x80;
      goto LAB_001091ab;
   }

   if (uVar16 == 0x80240000) {
      switchD_0010ba07_caseD_21:puVar29 = *(undefined4**)( puVar40 + -0x1658 );
      *puVar29 = 0x80240000;
      pauVar28 = (undefined1(*) [16])( puVar29 + 1 );
      puVar49 = (uint*)( *(long*)( puVar40 + -0x1500 ) + 4 );
   }
 else {
      uVar34 = 0;
      if (uVar16 < 0x80240001) {
         if (uVar16 == 0x80220000) {
            puVar29 = *(undefined4**)( puVar40 + -0x1658 );
            puVar54 = (uint*)0x0;
            uVar25 = 0;
            *(short*)( puVar40 + -0x1628 ) = *(short*)( puVar40 + -0x1628 ) + 1;
            *puVar29 = 0x80220000;
            pauVar28 = (undefined1(*) [16])( puVar29 + 1 );
            *(uint**)( puVar40 + -0x1500 ) = puVar49 + 1;
            puVar30 = puVar49 + 1;
            goto LAB_00109927;
         }

         if (uVar16 != 0x80230000) {
            if (uVar16 != 0x80020000) goto LAB_0010b679;
            switchD_0010ba07_caseD_3e:puVar29 = *(undefined4**)( puVar40 + -0x1658 );
            uVar34 = 0;
            puVar54 = (uint*)0x0;
            uVar25 = 0;
            *(short*)( puVar40 + -0x1628 ) = *(short*)( puVar40 + -0x1628 ) + 1;
            *puVar29 = 0x80020000;
            pauVar28 = (undefined1(*) [16])( puVar29 + 1 );
            lVar35 = *(long*)( puVar40 + -0x1500 );
            *(uint**)( puVar40 + -0x1500 ) = (uint*)( lVar35 + 4 );
            puVar30 = (uint*)( lVar35 + 4 );
            goto LAB_00109927;
         }

         switchD_0010ba07_caseD_3d:puVar29 = *(undefined4**)( puVar40 + -0x1658 );
         *puVar29 = 0x80230000;
         pauVar28 = (undefined1(*) [16])( puVar29 + 1 );
         puVar49 = (uint*)( *(long*)( puVar40 + -0x1500 ) + 4 );
      }
 else if (uVar16 == 0x80270000) {
         switchD_0010ba07_caseD_2a:puVar29 = *(undefined4**)( puVar40 + -0x1658 );
         *puVar29 = 0x80270000;
         pauVar28 = (undefined1(*) [16])( puVar29 + 1 );
         puVar49 = (uint*)( *(long*)( puVar40 + -0x1500 ) + 4 );
      }
 else {
         if (uVar16 < 0x80270001) {
            uVar34 = uVar16 + 0x7fdb0000 & 0xfffeffff;
            puVar23 = (uint*)(ulong)uVar34;
            if (uVar34 != 0) {
               LAB_0010b679:uVar34 = *(uint*)( puVar40 + -0x1648 );
               uVar18 = *(undefined4*)( puVar40 + -0x163c );
               uVar16 = 0xbd;
               param_4 = *(uint**)( puVar40 + -0x1650 );
               goto LAB_001091ab;
            }

         }
 else if (uVar16 != 0x80280000) {
            if (uVar16 != 0x8fff0000) goto LAB_0010b679;
            puVar22 = *(undefined8**)( puVar40 + -0x1658 );
            puVar49 = puVar49 + 1;
            *(short*)( puVar40 + -0x1628 ) = *(short*)( puVar40 + -0x1628 ) + 1;
            lVar35 = *(long*)( puVar40 + -0x1630 );
            *(uint**)( puVar40 + -0x1500 ) = puVar49;
            *puVar22 = 0x8002000080220000;
            pauVar28 = (undefined1(*) [16])( puVar22 + 1 );
            if (lVar35 == 0) {
               *(undefined8*)( puVar40 + -0x1630 ) = *(undefined8*)( puVar40 + -0x1430 );
            }
 else {
               *(long*)( puVar40 + -0x1630 ) = *(long*)( puVar40 + -0x1630 ) + 0x10;
               if (*(ulong*)( puVar40 + -0x1570 ) <= *(ulong*)( puVar40 + -0x1630 )) goto LAB_0010b745;
            }

            puVar9 = *(undefined2**)( puVar40 + -0x1630 );
            puVar54 = (uint*)0x0;
            uVar25 = 0;
            *puVar9 = *(undefined2*)( puVar40 + -0x1628 );
            uVar20 = *(undefined8*)( puVar40 + -0x1588 );
            puVar9[3] = 4;
            *(undefined8*)( puVar9 + 4 ) = uVar20;
            puVar30 = puVar49;
            goto LAB_00109927;
         }

         puVar30 = *(uint**)( puVar40 + -0x1658 );
         *(uint**)( puVar40 + -0x1500 ) = puVar49 + -1;
         *puVar30 = uVar16;
         LAB_0010b865:puVar23 = puVar30 + 1;
         *(undefined4*)( puVar40 + -0x1594 ) = 1;
         puVar49 = (uint*)( *(long*)( puVar40 + -0x1500 ) + 8 );
         lVar35 = ( *(long*)( puVar40 + -0x1500 ) - *(long*)( puVar40 + -0x1420 ) >> 2 ) + -2;
         *(long*)( puVar40 + -0x14e0 ) = lVar35;
         puVar30[2] = (uint)lVar35;
         *puVar23 = ( uint )((ulong)lVar35 >> 0x20);
         pauVar28 = (undefined1(*) [16])( puVar30 + 3 );
      }

   }

   *(short*)( puVar40 + -0x1628 ) = *(short*)( puVar40 + -0x1628 ) + 1;
   *(uint**)( puVar40 + -0x1500 ) = puVar49;
   puVar30 = puVar49;
   if (iVar47 < 1) {
      uVar34 = 0;
      puVar54 = (uint*)0x0;
      uVar25 = 0;
   }
 else {
      if (*(long*)( puVar40 + -0x1630 ) == 0) {
         *(undefined8*)( puVar40 + -0x1630 ) = *(undefined8*)( puVar40 + -0x1430 );
      }
 else {
         *(long*)( puVar40 + -0x1630 ) = *(long*)( puVar40 + -0x1630 ) + 0x10;
         if (*(ulong*)( puVar40 + -0x1570 ) <= *(ulong*)( puVar40 + -0x1630 )) {
            LAB_0010b745:uVar34 = *(uint*)( puVar40 + -0x1648 );
            uVar18 = *(undefined4*)( puVar40 + -0x163c );
            uVar16 = 0xb8;
            param_4 = *(uint**)( puVar40 + -0x1650 );
            goto LAB_001091ab;
         }

      }

      puVar9 = *(undefined2**)( puVar40 + -0x1630 );
      uVar34 = 0;
      puVar54 = (uint*)0x0;
      uVar25 = 0;
      *puVar9 = *(undefined2*)( puVar40 + -0x1628 );
      uVar20 = *(undefined8*)( puVar40 + -0x1588 );
      puVar9[3] = 2;
      *(undefined8*)( puVar9 + 4 ) = uVar20;
   }

   goto LAB_00109927;
   code_r0x0010a430:lVar35 = (long)iVar47;
   piVar38 = *(int**)( puVar40 + -0x1610 );
   puVar52 = *(uint**)( puVar40 + -0x1590 );
   puVar23 = &verbs + lVar35 * 3;
   iVar47 = ( &DAT_0010e8c8 )[lVar35 * 3];
   if (*piVar38 == 0x3a) {
      puVar45 = (uint*)( piVar38 + 1 );
      if (puVar45 < puVar52) {
         if (piVar38[1] == 0x29) {
            *(uint**)( puVar40 + -0x1500 ) = puVar45;
            uVar34 = *puVar45;
            puVar30 = puVar45;
            if (0 < iVar47) goto LAB_0010ce06;
         }
 else {
            puVar45 = *(uint**)( puVar40 + -0x1500 );
            puVar30 = puVar45;
            if (0 < iVar47) goto LAB_0010d901;
         }

         puVar30 = puVar45 + 1;
         *(uint**)( puVar40 + -0x1500 ) = puVar30;
         pauVar28 = (undefined1(*) [16])( *(long*)( puVar40 + -0x1658 ) + 4 );
         iVar14 = ( &DAT_0010e8c4 )[lVar35 * 3];
         uVar34 = ( uint )(iVar14 == -0x7fd60000);
         if (*puVar45 != 0x3a) goto LAB_0010a487;
         LAB_0010d9d0:iVar15 = -0x7fd70000;
         pauVar33 = pauVar28;
         if (-1 < iVar47) goto LAB_0010d92b;
      }
 else {
         puVar30 = *(uint**)( puVar40 + -0x1500 );
         uVar34 = *puVar30;
         if (iVar47 < 1) {
            iVar14 = ( &DAT_0010e8c4 )[lVar35 * 3];
            pauVar28 = (undefined1(*) [16])( *(long*)( puVar40 + -0x1658 ) + 4 );
            uVar34 = ( uint )(iVar14 == -0x7fd60000);
            puVar30 = puVar30 + 1;
            *(uint**)( puVar40 + -0x1500 ) = puVar30;
            goto LAB_0010d9d0;
         }

         LAB_0010ce06:if (uVar34 != 0x3a) {
            LAB_0010ce0f:uVar34 = *(uint*)( puVar40 + -0x1648 );
            uVar18 = *(undefined4*)( puVar40 + -0x163c );
            uVar16 = 0xa6;
            param_4 = *(uint**)( puVar40 + -0x1650 );
            puVar49 = *(uint**)( puVar40 + -0x1500 );
            goto LAB_001091ab;
         }

         LAB_0010d901:pauVar28 = (undefined1(*) [16])( *(long*)( puVar40 + -0x1658 ) + 4 );
         iVar14 = ( &DAT_0010e8c4 )[lVar35 * 3];
         uVar34 = ( uint )(iVar14 == -0x7fd60000);
         puVar30 = puVar30 + 1;
         *(uint**)( puVar40 + -0x1500 ) = puVar30;
         LAB_0010d92b:iVar15 = ( uint )(iVar14 != -0x7fd70000) * 0x10000 + iVar14;
         iVar14 = *(int*)( puVar40 + -0x1550 );
         pauVar33 = pauVar28;
      }

      piVar38 = *(int**)( puVar40 + -0x1658 );
      uVar25 = 0;
      pauVar28 = (undefined1(*) [16])( (long)*pauVar33 + 4 );
      *(uint**)( puVar40 + -0x1560 ) = puVar30;
      *(int*)( puVar40 + -0x1550 ) = iVar14;
      puVar30 = *(uint**)( puVar40 + -0x1500 );
      *piVar38 = iVar15;
      *(int**)( puVar40 + -0x1578 ) = piVar38;
      *(undefined1(**) [16])( puVar40 + -0x1568 ) = pauVar33;
      *(undefined4*)( puVar40 + -0x15d8 ) = 1;
   }
 else {
      if (0 < iVar47) goto LAB_0010ce0f;
      iVar14 = ( &DAT_0010e8c4 )[lVar35 * 3];
      puVar30 = (uint*)( *(long*)( puVar40 + -0x1500 ) + 4 );
      *(uint**)( puVar40 + -0x1500 ) = puVar30;
      uVar34 = ( uint )(iVar14 == -0x7fd60000);
      pauVar28 = (undefined1(*) [16])( *(long*)( puVar40 + -0x1658 ) + 4 );
      LAB_0010a487:piVar38 = *(int**)( puVar40 + -0x1658 );
      uVar25 = 0;
      *piVar38 = iVar14;
      *(int**)( puVar40 + -0x1578 ) = piVar38;
   }

   goto LAB_00109927;
   LAB_0010c2b4:uVar34 = *(uint*)( puVar40 + -0x1648 );
   uVar18 = *(undefined4*)( puVar40 + -0x163c );
   uVar16 = 0x82;
   param_4 = *(uint**)( puVar40 + -0x1650 );
   LAB_001091ab:*(uint*)( puVar40 + -0x1530 ) = uVar16;
   uVar25 = (long)puVar49 - *(long*)( puVar40 + -0x1420 ) >> 2;
   *(ulong*)( puVar40 + -0x13b0 ) = uVar25;
   if (uVar16 == 0) {
      LAB_001091d3:if (*(int*)( puVar40 + -0x1594 ) == 0) {
         *(undefined1**)( puVar40 + -0x1648 ) = puVar40 + -0x1458;
         *(undefined1**)( puVar40 + -0x1620 ) = puVar40 + -0x14e0;
      }
 else {
         uVar16 = *(uint*)( puVar40 + -0x138c );
         *(undefined4*)( puVar40 + -0x14e0 ) = 0;
         if (uVar16 < 0x80) {
            pvVar24 = *(void**)( puVar40 + -0x1370 );
         }
 else {
            uVar20 = ( *(undefined8**)( puVar40 + -0x1660 ) )[2];
            pcVar6 = (code*)**(undefined8**)( puVar40 + -0x1660 );
            *(undefined8*)( puVar40 + -0x1680 ) = 0x109212;
            pvVar24 = (void*)( *pcVar6 )(( ulong )(uVar16 * 2 + 2) << 2, uVar20, puVar23);
            *(void**)( puVar40 + -0x1370 ) = pvVar24;
            if (pvVar24 == (void*)0x0) {
               *(undefined4*)( puVar40 + -0x1530 ) = 0x79;
               uVar16 = 0x79;
               uVar25 = 0;
               *(undefined8*)( puVar40 + -0x13b0 ) = 0;
               goto LAB_00109805;
            }

            uVar16 = *(uint*)( puVar40 + -0x138c );
         }

         *(undefined8*)( puVar40 + -0x1680 ) = 0x10923c;
         memset(pvVar24, 0, ( ulong )(uVar16 * 2 + 1) << 2);
         *(undefined1**)( puVar40 + -0x1648 ) = puVar40 + -0x1458;
         *(undefined1**)( puVar40 + -0x1620 ) = puVar40 + -0x14e0;
         *(undefined8*)( puVar40 + -0x1680 ) = 0x10926a;
         uVar16 = check_lookbehinds(*(undefined8*)( puVar40 + -0x1380 ), 0, 0, puVar40 + -0x1458);
         *(uint*)( puVar40 + -0x1530 ) = uVar16;
         if (uVar16 != 0) {
            uVar25 = ( *(long*)( puVar40 + -0x13b0 ) << 2 ) >> 2;
            goto LAB_00109805;
         }

      }

      *(undefined1**)( puVar40 + -0x15c0 ) = puVar40 + -0x14e8;
      *(undefined8*)( puVar40 + -0x13b0 ) = *(undefined8*)( puVar40 + -0x1678 );
      *(undefined1**)( puVar40 + -0x15f0 ) = puVar40 + -0x1530;
      *(undefined8*)( puVar40 + -0x14e0 ) = *(undefined8*)( puVar40 + -0x1380 );
      *(undefined4*)( puVar40 + 0x228 ) = 0x87;
      *(undefined8*)( puVar40 + -0x14e8 ) = *(undefined8*)( puVar40 + -0x15a8 );
      uVar4 = *(undefined4*)( *(long*)( puVar40 + -0x1660 ) + 0x40 );
      *(undefined1**)( puVar40 + -0x1680 ) = puVar40 + -0x1508;
      *(undefined8*)( puVar40 + -0x1688 ) = *(undefined8*)( puVar40 + -0x1648 );
      *(undefined8*)( puVar40 + -0x1690 ) = 0;
      *(undefined8*)( puVar40 + -0x1698 ) = 0;
      *(undefined1**)( puVar40 + -0x15e0 ) = puVar40 + -0x1500;
      *(undefined1**)( puVar40 + -0x16a0 ) = puVar40 + -0x1500;
      *(undefined1**)( puVar40 + -0x15d0 ) = puVar40 + -0x14f0;
      *(undefined1**)( puVar40 + -0x16a8 ) = puVar40 + -0x14f0;
      *(undefined1**)( puVar40 + -0x1610 ) = puVar40 + -0x150c;
      *(undefined1**)( puVar40 + -0x16b0 ) = puVar40 + -0x150c;
      *(undefined1**)( puVar40 + -0x15d8 ) = puVar40 + -0x14f8;
      *(undefined1**)( puVar40 + -0x16b8 ) = puVar40 + -0x14f8;
      *(undefined8*)( puVar40 + -0x16c0 ) = 0x109347;
      compile_regex(*(undefined4*)( puVar40 + -0x1394 ), uVar4, puVar40 + -0x14e8, *(undefined8*)( puVar40 + -0x1620 ), puVar40 + -0x1530, 0);
      uVar16 = *(uint*)( puVar40 + -0x1530 );
      if (uVar16 != 0) {
         lVar35 = 0;
         uVar25 = ( *(long*)( puVar40 + -0x13b0 ) << 2 ) >> 2;
         goto LAB_00108cf4;
      }

      *(ulong*)( puVar40 + -0x1618 ) = *(ulong*)( puVar40 + -0x1508 );
      if (0x40000000 < *(ulong*)( puVar40 + -0x1508 )) {
         uVar16 = 0x78;
         lVar35 = 0;
         *(undefined4*)( puVar40 + -0x1530 ) = 0x78;
         uVar25 = ( *(long*)( puVar40 + -0x13b0 ) << 2 ) >> 2;
         goto LAB_00108cf4;
      }

      uVar13 = *(ushort*)( puVar40 + -0x13a8 );
      uVar3 = *(ushort*)( puVar40 + -0x13a6 );
      lVar35 = *(long*)( puVar40 + -0x1618 );
      uVar20 = ( *(undefined8**)( puVar40 + -0x1660 ) )[2];
      pcVar6 = (code*)**(undefined8**)( puVar40 + -0x1660 );
      *(undefined8*)( puVar40 + -0x1680 ) = 0x1093a5;
      puVar22 = (undefined8*)( *pcVar6 )(( lVar35 + 0x22 + (ulong)uVar13 * (ulong)uVar3 ) * 4, uVar20);
      auVar57._8_8_ = extraout_XMM1_Qb;
      auVar57._0_8_ = extraout_XMM1_Qa;
      if (puVar22 == (undefined8*)0x0) {
         uVar16 = 0x79;
         *(undefined4*)( puVar40 + -0x1530 ) = 0x79;
         uVar25 = ( *(long*)( puVar40 + -0x13b0 ) << 2 ) >> 2;
         lVar35 = 0;
         goto LAB_00108cf4;
      }

      puVar7 = *(undefined8**)( puVar40 + -0x1660 );
      puVar22[0x10] = 0;
      uVar11 = *puVar7;
      uVar12 = puVar7[1];
      *puVar22 = uVar11;
      puVar22[1] = uVar12;
      uVar20 = puVar7[2];
      *(undefined1(*) [16])( puVar22 + 5 ) = (undefined1[16])0x0;
      puVar22[2] = uVar20;
      uVar20 = *(undefined8*)( puVar40 + -0x15a0 );
      *(undefined1(*) [16])( puVar22 + 7 ) = (undefined1[16])0x0;
      puVar22[3] = uVar20;
      uVar4 = *(undefined4*)( puVar40 + -0x1394 );
      *(undefined4*)( (long)puVar22 + 0x54 ) = uVar18;
      puVar50 = puVar22 + 0x11;
      *(undefined4*)( puVar22 + 0xb ) = uVar4;
      uVar18 = *(undefined4*)( puVar7 + 8 );
      puVar22[4] = 0;
      *(undefined4*)( (long)puVar22 + 0x5c ) = uVar18;
      uVar16 = *(uint*)( puVar40 + -0x15e8 );
      uVar48 = *(uint*)( puVar40 + -0x1390 );
      puVar22[9] = ( lVar35 + 0x22 + (ulong)uVar13 * (ulong)uVar3 ) * 4;
      *(undefined4*)( puVar22 + 10 ) = 0x50435245;
      *(uint*)( puVar22 + 0xc ) = uVar16 | uVar48 | 4;
      uVar18 = *(undefined4*)( puVar40 + -0x15b8 );
      puVar22[0xe] = 0;
      *(undefined4*)( (long)puVar22 + 100 ) = uVar18;
      *(undefined8*)( puVar40 + -0x1678 ) = uVar11;
      *(undefined8*)( puVar40 + -0x1670 ) = uVar12;
      *(undefined4*)( puVar22 + 0xd ) = *(undefined4*)( puVar40 + -0x1598 );
      *(undefined4*)( (long)puVar22 + 0x6c ) = *(undefined4*)( puVar40 + -0x15c8 );
      *(undefined2*)( puVar22 + 0xf ) = *(undefined2*)( puVar40 + -0x15f8 );
      *(undefined2*)( (long)puVar22 + 0x7a ) = *(undefined2*)( puVar40 + -0x1624 );
      *(undefined4*)( (long)puVar22 + 0x7c ) = 0;
      uVar16 = *(uint*)( puVar40 + -0x13a8 );
      *(undefined8**)( puVar40 + -0x1410 ) = puVar50;
      auVar58 = pshuflw(auVar57, ZEXT416(uVar16), 0xe1);
      *(int*)( (long)puVar22 + 0x84 ) = auVar58._0_4_;
      *(undefined4*)( puVar40 + -0x13a4 ) = 0;
      *(undefined4*)( puVar40 + -5000 ) = 0;
      *(undefined4*)( puVar40 + -0x1340 ) = 0;
      puVar29 = (undefined4*)( (long)puVar22 + (long)(int)( ( uVar16 >> 0x10 ) * ( uVar16 & 0xffff ) ) * 4 + 0x88 );
      *(undefined8*)( puVar40 + -0x1334 ) = 0;
      *(undefined4**)( puVar40 + -0x1428 ) = puVar29;
      if ((short)uVar16 != 0) {
         puVar7 = *(undefined8**)( puVar40 + -0x13a0 );
         puVar37 = (undefined4*)( (long)puVar22 + 0x8c );
         *(undefined8**)( puVar40 + -0x15c8 ) = puVar22;
         *(uint**)( puVar40 + -0x15b8 ) = param_4;
         uVar18 = *(undefined4*)( puVar7 + 1 );
         *(undefined8**)( puVar40 + -0x1650 ) = puVar7;
         *(undefined4**)( puVar40 + -0x15e8 ) = puVar29;
         *(undefined4*)( puVar40 + -0x1624 ) = uVar18;
         uVar13 = *(ushort*)( (long)puVar7 + 0xc );
         pvVar24 = (void*)*puVar7;
         *(uint*)( puVar40 + -0x1598 ) = uVar34;
         iVar47 = 0;
         *(ushort*)( puVar40 + -0x1630 ) = uVar13;
         *(uint*)( puVar40 + -0x1628 ) = (uint)uVar13;
         __n = (size_t)(int)( (uint)uVar13 << 2 );
         while (true) {
            *(undefined4*)puVar50 = *(undefined4*)( puVar40 + -0x1624 );
            *(undefined8*)( puVar40 + -0x1680 ) = 0x10956c;
            memcpy(puVar37, pvVar24, __n);
            *(undefined8*)( puVar40 + -0x1680 ) = 0x109595;
            memset((void*)( (long)puVar50 + ( ulong ) * (ushort*)( puVar40 + -0x1630 ) * 4 + 4 ), 0, (long)(int)( ( ( uint ) * (ushort*)( puVar40 + -0x13a6 ) - *(int*)( puVar40 + -0x1628 ) ) * 4 + -4 ));
            *(long*)( puVar40 + -0x1650 ) = *(long*)( puVar40 + -0x1650 ) + 0x10;
            *(uint*)( puVar40 + -0x163c ) = iVar47 + 1U;
            puVar22 = *(undefined8**)( puVar40 + -0x1650 );
            if (( uint ) * (ushort*)( puVar40 + -0x13a8 ) <= iVar47 + 1U) break;
            pvVar24 = (void*)*puVar22;
            puVar50 = *(undefined8**)( puVar40 + -0x1410 );
            *(undefined4*)( puVar40 + -0x1624 ) = *(undefined4*)( puVar22 + 1 );
            uVar13 = *(ushort*)( (long)puVar22 + 0xc );
            *(ushort*)( puVar40 + -0x15f8 ) = *(ushort*)( puVar40 + -0x13a6 );
            *(ushort*)( puVar40 + -0x1630 ) = uVar13;
            *(uint*)( puVar40 + -0x1628 ) = (uint)uVar13;
            *(ulong*)( puVar40 + -0x1678 ) = ( ulong ) * (ushort*)( puVar40 + -0x13a6 ) * 4;
            __n = (size_t)(int)( (uint)uVar13 * 4 );
            *(ulong*)( puVar40 + -0x1658 ) = ( ulong )(uVar13 + 1);
            iVar14 = 0;
            do {
               puVar37 = (undefined4*)( (long)puVar50 + 4 );
               *(undefined8*)( puVar40 + -0x1680 ) = 0x109648;
               iVar15 = memcmp(pvVar24, puVar37, __n);
               if (iVar15 == 0) {
                  if (*(int*)( (long)puVar50 + *(long*)( puVar40 + -0x1658 ) * 4 ) != 0) goto LAB_0010964e;
               }
 else if (iVar15 < 0) {
                  LAB_0010964e:*(undefined8*)( puVar40 + -0x1680 ) = 0x109679;
                  _pcre2_memmove32(*(long*)( puVar40 + -0x1678 ) + (long)puVar50, puVar50, ( *(int*)( puVar40 + -0x163c ) - iVar14 ) * ( uint ) * (ushort*)( puVar40 + -0x15f8 ) * 4);
                  goto LAB_00109679;
               }

               puVar50 = (undefined8*)( (long)puVar50 + *(long*)( puVar40 + -0x1678 ) );
               bVar55 = iVar14 != iVar47;
               iVar14 = iVar14 + 1;
            }
 while ( bVar55 );
            puVar37 = (undefined4*)( (long)puVar50 + 4 );
            LAB_00109679:iVar47 = *(int*)( puVar40 + -0x163c );
         }
;
         puVar29 = *(undefined4**)( puVar40 + -0x15e8 );
         uVar34 = *(uint*)( puVar40 + -0x1598 );
         puVar22 = *(undefined8**)( puVar40 + -0x15c8 );
         param_4 = *(uint**)( puVar40 + -0x15b8 );
      }

      *(undefined4**)( puVar40 + -0x14e8 ) = puVar29;
      *(undefined8**)( puVar40 + -0x1678 ) = puVar22;
      *(undefined8*)( puVar40 + -0x14e0 ) = *(undefined8*)( puVar40 + -0x1380 );
      lVar35 = *(long*)( puVar40 + -0x1660 );
      *puVar29 = 0x87;
      uVar18 = *(undefined4*)( puVar22 + 0xb );
      uVar4 = *(undefined4*)( lVar35 + 0x40 );
      *(undefined8*)( puVar40 + -0x1680 ) = 0;
      *(undefined8*)( puVar40 + -0x1688 ) = *(undefined8*)( puVar40 + -0x1648 );
      *(undefined8*)( puVar40 + -0x1690 ) = 0;
      *(undefined8*)( puVar40 + -0x1698 ) = 0;
      *(undefined8*)( puVar40 + -0x16a0 ) = *(undefined8*)( puVar40 + -0x15e0 );
      *(undefined8*)( puVar40 + -0x16a8 ) = *(undefined8*)( puVar40 + -0x15d0 );
      *(undefined8*)( puVar40 + -0x16b0 ) = *(undefined8*)( puVar40 + -0x1610 );
      *(undefined8*)( puVar40 + -0x16b8 ) = *(undefined8*)( puVar40 + -0x15d8 );
      *(undefined8*)( puVar40 + -0x16c0 ) = 0x109baa;
      iVar47 = compile_regex(uVar18, uVar4, *(undefined8*)( puVar40 + -0x15c0 ), *(undefined8*)( puVar40 + -0x1620 ), *(undefined8*)( puVar40 + -0x15f0 ), 0);
      lVar35 = *(long*)( puVar40 + -0x1678 );
      if (iVar47 < 0) {
         *(uint*)( lVar35 + 0x60 ) = *(uint*)( lVar35 + 0x60 ) | 0x2000;
      }

      iVar47 = *(int*)( puVar40 + -0x1334 );
      *(short*)( lVar35 + 0x80 ) = (short)*(undefined4*)( puVar40 + -0x138c );
      *(short*)( lVar35 + 0x82 ) = (short)*(undefined4*)( puVar40 + -0x1368 );
      *(short*)( lVar35 + 0x7c ) = (short)*(undefined4*)( puVar40 + -0x1338 );
      if (iVar47 != 0) {
         *(uint*)( lVar35 + 0x60 ) = *(uint*)( lVar35 + 0x60 ) | 0x800000;
         *(undefined4*)( puVar40 + -0x14f0 ) = 0;
         *(undefined4*)( puVar40 + -0x1500 ) = 0xfffffffe;
      }

      puVar37 = *(undefined4**)( puVar40 + -0x14e8 ) + 1;
      **(undefined4**)( puVar40 + -0x14e8 ) = 0;
      *(undefined4**)( puVar40 + -0x14e8 ) = puVar37;
      uVar25 = (long)puVar37 - (long)puVar29 >> 2;
      if (*(ulong*)( puVar40 + -0x1618 ) < uVar25) {
         *(undefined4*)( puVar40 + -0x1530 ) = 0x7b;
         uVar16 = 0x7b;
         LAB_00109c53:uVar25 = ( *(long*)( puVar40 + -0x13b0 ) << 2 ) >> 2;
         goto LAB_00108cf4;
      }

      uVar16 = *(uint*)( puVar40 + -0x1530 );
      *(long*)( lVar35 + 0x48 ) = *(long*)( lVar35 + 0x48 ) + ( *(long*)( puVar40 + -0x1618 ) - uVar25 ) * -4;
      if (uVar16 != 0) goto LAB_00109c53;
      if (*(int*)( puVar40 + -0x132c ) != 0) {
         *(undefined8*)( puVar40 + -0x1680 ) = 0x10a5da;
         lVar26 = find_recurse_isra_0(puVar29);
         if (lVar26 != 0) {
            *(uint**)( puVar40 + -0x1678 ) = param_4;
            uVar16 = 8;
            uVar48 = 0;
            *(uint*)( puVar40 + -0x1658 ) = ( uint )(*(int*)( puVar40 + -0x15f4 ) != 0);
            do {
               iVar47 = *(int*)( lVar26 + 4 );
               uVar18 = 0;
               if (iVar47 != 0) {
                  puVar37 = puVar29;
                  if (uVar48 != 0) {
                     uVar41 = 0;
                     uVar17 = uVar16;
                     do {
                        lVar36 = (long)(int)uVar17 * 0x10;
                        if (*(int*)( puVar40 + lVar36 + -0x14d0 ) == iVar47) {
                           if (*(long*)( puVar40 + lVar36 + -0x14d8 ) != 0) {
                              uVar18 = ( undefined4 )(*(long*)( puVar40 + lVar36 + -0x14d8 ) - (long)puVar29 >> 2);
                              goto LAB_0010a610;
                           }

                           break;
                        }

                        if (*(int*)( puVar40 + lVar36 + -0x14d0 ) < iVar47) {
                           puVar37 = *(undefined4**)( puVar40 + lVar36 + -0x14d8 );
                        }

                        uVar41 = uVar41 + 1;
                        uVar17 = uVar17 + 1 & 7;
                     }
 while ( uVar41 != uVar48 );
                  }

                  *(int*)( puVar40 + -0x1650 ) = iVar47;
                  *(undefined8*)( puVar40 + -0x1680 ) = 0x10a68c;
                  lVar36 = _pcre2_find_bracket_32(puVar37, *(undefined4*)( puVar40 + -0x1658 ), iVar47);
                  uVar4 = *(undefined4*)( puVar40 + -0x1650 );
                  if (lVar36 == 0) {
                     *(undefined4*)( puVar40 + -0x1530 ) = 0x99;
                     param_4 = *(uint**)( puVar40 + -0x1678 );
                     goto LAB_0010a6d5;
                  }

                  uVar16 = uVar16 - 1;
                  if ((int)uVar16 < 0) {
                     uVar16 = 7;
                  }

                  *(long*)( puVar40 + (long)(int)uVar16 * 0x10 + -0x14d8 ) = lVar36;
                  uVar18 = ( undefined4 )(lVar36 - (long)puVar29 >> 2);
                  *(undefined4*)( puVar40 + (long)(int)uVar16 * 0x10 + -0x14d0 ) = uVar4;
                  uVar48 = uVar48 + ( uVar48 < 8 );
               }

               LAB_0010a610:*(undefined4*)( lVar26 + 4 ) = uVar18;
               *(undefined8*)( puVar40 + -0x1680 ) = 0x10a61c;
               lVar26 = find_recurse_isra_0(lVar26 + 8);
            }
 while ( lVar26 != 0 );
            param_4 = *(uint**)( puVar40 + -0x1678 );
         }

         LAB_0010a6d5:uVar16 = *(uint*)( puVar40 + -0x1530 );
         if (uVar16 != 0) goto LAB_00109c53;
      }

      uVar16 = *(uint*)( lVar35 + 0x58 );
      if (( uVar16 & 0x4000 ) == 0) {
         *(long*)( puVar40 + -0x1678 ) = lVar35;
         *(undefined8*)( puVar40 + -0x1680 ) = 0x10ab66;
         iVar47 = _pcre2_auto_possessify_32(puVar29, *(undefined8*)( puVar40 + -0x1648 ));
         lVar35 = *(long*)( puVar40 + -0x1678 );
         if (iVar47 == 0) {
            uVar16 = *(uint*)( puVar40 + -0x1530 );
            if (uVar16 == 0) {
               uVar16 = *(uint*)( lVar35 + 0x58 );
               goto LAB_00109ec0;
            }

         }
 else {
            *(undefined4*)( puVar40 + -0x1530 ) = 0xb4;
            uVar16 = 0xb4;
         }

         goto LAB_00109c53;
      }

      LAB_00109ec0:if (-1 < (int)uVar16) {
         *(long*)( puVar40 + -0x1678 ) = lVar35;
         *(undefined8*)( puVar40 + -0x1680 ) = 0x10a4d2;
         iVar47 = is_anchored(puVar29, 0, *(undefined8*)( puVar40 + -0x1648 ), 0, 0);
         lVar35 = *(long*)( puVar40 + -0x1678 );
         if (iVar47 != 0) {
            uVar16 = uVar16 | 0x80000000;
            *(uint*)( lVar35 + 0x58 ) = uVar16;
         }

      }

      if (( uVar16 & 0x10000 ) == 0) {
         uVar48 = *(uint*)( puVar40 + -0x150c );
         uVar17 = *(uint*)( puVar40 + -0x1500 );
         if (uVar48 < 0xfffffffe) {
            LAB_00109ef7:uVar41 = *(uint*)( lVar35 + 0x60 );
            uVar5 = *(uint*)( puVar40 + -0x14f8 );
            *(uint*)( lVar35 + 0x70 ) = uVar5;
            *(uint*)( lVar35 + 0x60 ) = uVar41 | 0x10;
            if (( uVar48 & 1 ) == 0) goto LAB_00109f74;
            if (uVar5 < 0x80) {
               LAB_0010b95d:if (uVar5 != *(byte*)( *(long*)( puVar40 + -0x1448 ) + (ulong)uVar5 )) {
                  LAB_00109f6d:*(uint*)( lVar35 + 0x60 ) = uVar41 | 0x30;
               }

            }
 else if (*(int*)( puVar40 + -0x15f4 ) == 0 && ( uVar34 & 0x20000 ) == 0) {
               if (uVar5 < 0xff) goto LAB_0010b95d;
            }
 else if (( uVar5 < 0x110000 ) && ( *(int*)( &DAT_0011002c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uVar5 & 0x7f ) + ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar5 >> 7 ) * 2 ) * 0x80 ) * 2 ) * 0xc ) != 0 )) goto LAB_00109f6d;
            LAB_00109f74:uVar18 = 1;
            if (uVar17 < 0xfffffffe) {
               uVar18 = 2;
               if ((int)uVar16 < 0) {
                  LAB_0010a72e:if (( uVar17 & 2 ) == 0) goto LAB_0010a011;
               }

               LAB_00109f91:uVar16 = *(uint*)( lVar35 + 0x60 );
               uVar48 = *(uint*)( puVar40 + -0x14f0 );
               *(uint*)( lVar35 + 0x74 ) = uVar48;
               *(uint*)( lVar35 + 0x60 ) = uVar16 | 0x80;
               if (( uVar17 & 1 ) != 0) {
                  if (uVar48 < 0x80) {
                     LAB_0010b620:if (uVar48 != *(byte*)( *(long*)( puVar40 + -0x1448 ) + (ulong)uVar48 )) {
                        LAB_0010a007:*(uint*)( lVar35 + 0x60 ) = uVar16 | 0x180;
                     }

                  }
 else if (( uVar34 & 0x20000 ) == 0 && *(int*)( puVar40 + -0x15f4 ) == 0) {
                     if (uVar48 < 0xff) goto LAB_0010b620;
                  }
 else if (( uVar48 < 0x110000 ) && ( *(int*)( &DAT_0011002c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uVar48 & 0x7f ) + ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar48 >> 7 ) * 2 ) * 0x80 ) * 2 ) * 0xc ) != 0 )) goto LAB_0010a007;
               }

            }

            LAB_0010a011:*(undefined4*)( puVar40 + -0x1658 ) = uVar18;
            *(long*)( puVar40 + -0x1678 ) = lVar35;
            *(undefined8*)( puVar40 + -0x1680 ) = 0x10a021;
            iVar47 = _pcre2_study_32(lVar35);
            lVar35 = *(long*)( puVar40 + -0x1678 );
            uVar34 = *(uint*)( puVar40 + -0x1658 );
            if (iVar47 != 0) {
               LAB_0010a58a:uVar16 = 0x83;
               *(undefined4*)( puVar40 + -0x1530 ) = 0x83;
               uVar25 = ( *(long*)( puVar40 + -0x13b0 ) << 2 ) >> 2;
               goto LAB_00108cf4;
            }

         }
 else {
            *(long*)( puVar40 + -0x1678 ) = lVar35;
            *(undefined8*)( puVar40 + -0x1680 ) = 0x10a703;
            uVar18 = find_firstassertedcu(puVar29, *(undefined8*)( puVar40 + -0x1610 ), 0);
            uVar48 = *(uint*)( puVar40 + -0x150c );
            lVar35 = *(long*)( puVar40 + -0x1678 );
            *(undefined4*)( puVar40 + -0x14f8 ) = uVar18;
            if (uVar48 < 0xfffffffe) goto LAB_00109ef7;
            if (-1 < (int)uVar16) {
               *(long*)( puVar40 + -0x1678 ) = lVar35;
               *(undefined8*)( puVar40 + -0x1680 ) = 0x10a755;
               iVar47 = is_startline(puVar29, 0, *(undefined8*)( puVar40 + -0x1648 ), 0, 0);
               lVar35 = *(long*)( puVar40 + -0x1678 );
               if (iVar47 != 0) {
                  *(uint*)( lVar35 + 0x60 ) = *(uint*)( lVar35 + 0x60 ) | 0x200;
               }

               uVar18 = 1;
               if (0xfffffffd < uVar17) goto LAB_0010a774;
               goto LAB_00109f91;
            }

            if (uVar17 < 0xfffffffe) {
               uVar18 = 1;
               goto LAB_0010a72e;
            }

            LAB_0010a774:*(long*)( puVar40 + -0x1678 ) = lVar35;
            *(undefined8*)( puVar40 + -0x1680 ) = 0x10a780;
            iVar47 = _pcre2_study_32(lVar35);
            lVar35 = *(long*)( puVar40 + -0x1678 );
            if (iVar47 != 0) goto LAB_0010a58a;
            uVar34 = *(uint*)( lVar35 + 0x60 ) >> 6 & 1;
         }

         if ((int)( uint ) * (ushort*)( lVar35 + 0x7e ) < (int)uVar34) {
            *(short*)( lVar35 + 0x7e ) = (short)uVar34;
         }

      }

   }
 else {
      LAB_00109805:lVar35 = 0;
      LAB_00108cf4:**(ulong**)( puVar40 + -0x1638 ) = uVar25;
      LAB_00108cfc:*param_4 = uVar16;
      *(undefined8*)( puVar40 + -0x1680 ) = 0x108d08;
      pcre2_code_free_32(lVar35);
      LAB_00108d08:lVar35 = 0;
   }

   if (*(long*)( puVar40 + -0x1380 ) != *(long*)( puVar40 + -0x1600 )) {
      *(long*)( puVar40 + -0x1678 ) = lVar35;
      uVar20 = *(undefined8*)( *(long*)( puVar40 + -0x1660 ) + 0x10 );
      pcVar6 = *(code**)( *(long*)( puVar40 + -0x1660 ) + 8 );
      *(undefined8*)( puVar40 + -0x1680 ) = 0x108d2d;
      ( *pcVar6 )(*(long*)( puVar40 + -0x1380 ), uVar20);
      lVar35 = *(long*)( puVar40 + -0x1678 );
   }

   if (0x14 < *(uint*)( puVar40 + -0x1398 )) {
      *(long*)( puVar40 + -0x1678 ) = lVar35;
      uVar20 = *(undefined8*)( *(long*)( puVar40 + -0x1660 ) + 0x10 );
      pcVar6 = *(code**)( *(long*)( puVar40 + -0x1660 ) + 8 );
      *(undefined8*)( puVar40 + -0x1680 ) = 0x108d53;
      ( *pcVar6 )(*(undefined8*)( puVar40 + -0x13a0 ), uVar20);
      lVar35 = *(long*)( puVar40 + -0x1678 );
   }

   if (*(long*)( puVar40 + -0x1370 ) != *(long*)( puVar40 + -0x1608 )) {
      *(long*)( puVar40 + -0x1678 ) = lVar35;
      uVar20 = *(undefined8*)( *(long*)( puVar40 + -0x1660 ) + 0x10 );
      pcVar6 = *(code**)( *(long*)( puVar40 + -0x1660 ) + 8 );
      *(undefined8*)( puVar40 + -0x1680 ) = 0x108d7d;
      ( *pcVar6 )(*(long*)( puVar40 + -0x1370 ), uVar20);
      lVar35 = *(long*)( puVar40 + -0x1678 );
   }

   LAB_00108a30:if (*(long*)( puVar40 + 0x5ff0 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined8*)( puVar40 + -0x1680 ) = 0x10b952;
      __stack_chk_fail();
   }

   return lVar35;
}


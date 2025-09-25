ulong mbedtls_x509_get_serial(long *param_1, byte *param_2, uint *param_3) {
   byte *pbVar1;
   long lVar2;
   ulong uVar3;
   pbVar1 = (byte*)*param_1;
   if (param_2 == pbVar1 || (long)param_2 - (long)pbVar1 < 0) {
      uVar3 = 0xffffdd20;
   }
 else if (( *pbVar1 & 0x7f ) == 2) {
      *param_1 = (long)( pbVar1 + 1 );
      *param_3 = ( uint ) * pbVar1;
      uVar3 = mbedtls_asn1_get_len(param_1, param_2, param_3 + 2);
      if ((int)uVar3 != 0) {
         return ( ulong )((int)uVar3 - 0x2280);
      }

      lVar2 = *param_1;
      *(long*)( param_3 + 4 ) = lVar2;
      *param_1 = lVar2 + *(long*)( param_3 + 2 );
   }
 else {
      uVar3 = 0xffffdd1e;
   }

   return uVar3;
}
int mbedtls_x509_get_alg_null(void) {
   int iVar1;
   iVar1 = mbedtls_asn1_get_alg_null();
   if (iVar1 != 0) {
      iVar1 = iVar1 + -0x2300;
   }

   return iVar1;
}
int mbedtls_x509_get_alg(void) {
   int iVar1;
   iVar1 = mbedtls_asn1_get_alg();
   if (iVar1 != 0) {
      iVar1 = iVar1 + -0x2300;
   }

   return iVar1;
}
int mbedtls_x509_get_rsassa_pss_params(int *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4) {
   byte *pbVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   byte *local_a8;
   long local_a0;
   undefined1 local_98[8];
   long local_90;
   long *local_88;
   int local_78[2];
   long local_70;
   byte *local_68;
   uint local_58[2];
   long local_50;
   byte *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 5;
   *param_3 = 5;
   *param_4 = 0x14;
   if (*param_1 != 0x30) {
      LAB_00100470:iVar3 = -0x2362;
      goto LAB_00100210;
   }

   local_b8 = *(long*)( param_1 + 4 );
   lVar5 = *(long*)( param_1 + 2 ) + local_b8;
   if (local_b8 != lVar5) {
      iVar2 = mbedtls_asn1_get_tag(&local_b8, lVar5, &local_b0, 0xa0);
      if (iVar2 == 0) {
         lVar4 = local_b0 + local_b8;
         iVar3 = mbedtls_asn1_get_alg_null(&local_b8, lVar4);
         if (( iVar3 != 0 ) && ( iVar3 = iVar3 != 0 )) goto LAB_00100210;
         iVar3 = mbedtls_oid_get_md_alg(local_98, param_2);
         if (iVar3 != 0) goto LAB_00100320;
         if (local_b8 == lVar4) {
            if (lVar5 != lVar4) goto LAB_00100169;
            goto LAB_001002b0;
         }

         LAB_00100207:iVar3 = -0x2366;
         goto LAB_00100210;
      }

      iVar3 = iVar2 + -0x2300;
      if (iVar2 != -0x62) goto LAB_00100210;
      if (lVar5 == local_b8) goto LAB_001002b0;
      LAB_00100169:iVar2 = mbedtls_asn1_get_tag(&local_b8, lVar5, &local_b0, 0xa1);
      if (iVar2 == 0) {
         lVar4 = local_b0 + local_b8;
         iVar3 = mbedtls_asn1_get_alg(&local_b8, lVar4, local_98, local_78);
         if (( iVar3 != 0 ) && ( iVar3 = iVar3 != 0 )) goto LAB_00100210;
         if (( local_90 != 9 ) || ( ( *local_88 != 0x1010df78648862a || ( (char)local_88[1] != '\b' ) ) )) {
            iVar3 = -0x20ae;
            goto LAB_00100210;
         }

         if (local_78[0] != 0x30) goto LAB_00100470;
         pbVar1 = local_68 + local_70;
         local_a8 = local_68;
         if (pbVar1 <= local_68) {
            iVar3 = -0x2360;
            local_a8 = local_68;
            goto LAB_00100210;
         }

         local_58[0] = ( uint ) * local_68;
         iVar3 = mbedtls_asn1_get_tag(&local_a8, pbVar1, &local_50, 6);
         if (iVar3 == 0) {
            local_48 = local_a8;
            local_a8 = local_a8 + local_50;
            iVar3 = mbedtls_oid_get_md_alg(local_58, param_3);
            if (iVar3 != 0) goto LAB_00100420;
            if (pbVar1 != local_a8) {
               iVar3 = mbedtls_asn1_get_tag(&local_a8, pbVar1, &local_a0, 5);
               if (iVar3 != 0) goto LAB_00100420;
               iVar3 = -0x2300;
               if (local_a0 != 0) goto LAB_00100210;
               if (pbVar1 != local_a8) goto LAB_00100207;
            }

         }
 else {
            LAB_00100420:iVar3 = iVar3 + -0x2300;
            if (iVar3 != 0) goto LAB_00100210;
         }

         if (local_b8 != lVar4) goto LAB_00100207;
      }
 else {
         iVar3 = iVar2 + -0x2300;
         lVar4 = local_b8;
         if (iVar2 != -0x62) goto LAB_00100210;
      }

      if (lVar5 != lVar4) {
         iVar2 = mbedtls_asn1_get_tag(&local_b8, lVar5, &local_b0, 0xa2);
         if (iVar2 == 0) {
            lVar4 = local_b0 + local_b8;
            iVar3 = mbedtls_asn1_get_int(&local_b8, lVar4, param_4);
            if (iVar3 != 0) goto LAB_00100320;
            if (local_b8 != lVar4) goto LAB_00100207;
         }
 else {
            iVar3 = iVar2 + -0x2300;
            lVar4 = local_b8;
            if (iVar2 != -0x62) goto LAB_00100210;
         }

         if (lVar5 != lVar4) {
            iVar3 = mbedtls_asn1_get_tag(&local_b8, lVar5, &local_b0, 0xa3);
            if (iVar3 == 0) {
               lVar4 = local_b0 + local_b8;
               iVar3 = mbedtls_asn1_get_int(&local_b8, lVar4, local_58);
               if (iVar3 != 0) goto LAB_00100320;
               iVar3 = -0x2366;
               if (( local_b8 != lVar4 ) || ( iVar3 = local_58[0] != 1 )) goto LAB_00100210;
            }
 else if (iVar3 != -0x62) {
               LAB_00100320:iVar3 = iVar3 + -0x2300;
               goto LAB_00100210;
            }

            if (lVar5 != local_b8) goto LAB_00100207;
         }

      }

   }

   LAB_001002b0:iVar3 = 0;
   LAB_00100210:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}
int mbedtls_x509_get_name(long *param_1, byte *param_2, uint *param_3) {
   byte *pbVar1;
   byte bVar2;
   long lVar3;
   int iVar4;
   byte *pbVar5;
   uint *puVar6;
   byte *pbVar7;
   uint *puVar8;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar6 = param_3;
   LAB_00100527:iVar4 = mbedtls_asn1_get_tag(param_1, param_2, &local_50, 0x31);
   if (iVar4 == 0) {
      pbVar7 = (byte*)( local_50 + *param_1 );
      puVar8 = puVar6;
      do {
         iVar4 = mbedtls_asn1_get_tag(param_1, pbVar7, &local_48, 0x30);
         if (iVar4 == 0) {
            pbVar1 = (byte*)*param_1 + local_48;
            if (local_48 < 1) {
               LAB_00100690:iVar4 = -0x23e0;
               goto LAB_00100695;
            }

            *puVar8 = ( uint ) * (byte*)*param_1;
            iVar4 = mbedtls_asn1_get_tag(param_1, pbVar1, puVar8 + 2, 6);
            if (iVar4 != 0) goto LAB_00100650;
            lVar3 = *param_1;
            *(long*)( puVar8 + 4 ) = lVar3;
            pbVar5 = (byte*)( lVar3 + *(long*)( puVar8 + 2 ) );
            *param_1 = (long)pbVar5;
            if (pbVar1 == pbVar5 || (long)pbVar1 - (long)pbVar5 < 0) goto LAB_00100690;
            bVar2 = *pbVar5;
            if (( ( bVar2 != 0x1e ) && ( bVar2 != 0xc ) ) && ( ( 0x1c < bVar2 || ( ( 0x10580008UL >> ( (ulong)bVar2 & 0x3f ) & 1 ) == 0 ) ) )) {
               iVar4 = -0x23e2;
               goto LAB_00100695;
            }

            *param_1 = (long)( pbVar5 + 1 );
            puVar8[6] = ( uint ) * pbVar5;
            iVar4 = mbedtls_asn1_get_len(param_1, pbVar1, puVar8 + 8);
            if (iVar4 != 0) goto LAB_00100650;
            lVar3 = *param_1;
            *(long*)( puVar8 + 10 ) = lVar3;
            pbVar5 = (byte*)( lVar3 + *(long*)( puVar8 + 8 ) );
            *param_1 = (long)pbVar5;
            if (pbVar1 != pbVar5) {
               iVar4 = -0x23e6;
               goto LAB_00100695;
            }

            puVar8[0xc] = 0;
            puVar8[0xd] = 0;
         }
 else {
            LAB_00100650:iVar4 = iVar4 + -0x2380;
            if (iVar4 != 0) goto LAB_00100695;
            pbVar5 = (byte*)*param_1;
         }

         if (pbVar7 == pbVar5) goto LAB_00100662;
         *(undefined1*)( puVar8 + 0xe ) = 1;
         puVar6 = (uint*)calloc(1, 0x40);
         *(uint**)( puVar8 + 0xc ) = puVar6;
         puVar8 = puVar6;
         if (puVar6 == (uint*)0x0) goto LAB_001006e6;
      }
 while ( true );
   }

   iVar4 = iVar4 + -0x2380;
   goto LAB_00100695;
   LAB_00100662:if (param_2 == pbVar7) {
      iVar4 = 0;
      goto LAB_001006ab;
   }

   puVar6 = (uint*)calloc(1, 0x40);
   *(uint**)( puVar8 + 0xc ) = puVar6;
   if (puVar6 == (uint*)0x0) {
      LAB_001006e6:iVar4 = -0x2880;
      LAB_00100695:mbedtls_asn1_free_named_data_list_shallow(*(undefined8*)( param_3 + 0xc ));
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      LAB_001006ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return iVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   goto LAB_00100527;
}
int mbedtls_x509_get_time(undefined8 *param_1, char *param_2, uint *param_3) {
   char *pcVar1;
   int iVar2;
   uint uVar3;
   byte *pbVar4;
   byte *pbVar5;
   ulong uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = (char*)*param_1;
   if (param_2 == pcVar1 || (long)param_2 - (long)pcVar1 < 0) {
      iVar2 = -0x2460;
      goto LAB_0010097e;
   }

   if (*pcVar1 == '\x17') {
      lVar13 = 2;
   }
 else {
      if (*pcVar1 != '\x18') {
         iVar2 = -0x2462;
         goto LAB_0010097e;
      }

      lVar13 = 4;
   }

   *param_1 = pcVar1 + 1;
   iVar2 = mbedtls_asn1_get_len(param_1, param_2, &local_28);
   if (iVar2 != 0) {
      iVar2 = iVar2 + -0x2400;
      goto LAB_0010097e;
   }

   if (lVar13 + 10 == local_28) {
      pbVar4 = (byte*)*param_1;
      LAB_00100799:*param_1 = pbVar4 + local_28;
      if (( *pbVar4 - 0x30 < 10 ) && ( pbVar4[1] - 0x30 < 10 )) {
         uVar7 = ( pbVar4[1] - 0x30 ) + ( *pbVar4 - 0x30 ) * 10;
         *param_3 = uVar7;
         if (lVar13 == 4) {
            iVar2 = uVar7 * 100;
            pbVar5 = pbVar4 + 2;
            if (( 9 < pbVar4[2] - 0x30 ) || ( 9 < pbVar4[3] - 0x30 )) goto LAB_00100a00;
            uVar7 = ( pbVar4[3] - 0x30 ) + ( pbVar4[2] - 0x30 ) * 10;
         }
 else {
            iVar2 = ( -(uint)(uVar7 < 0x32) & 100 ) + 0x76c;
            pbVar5 = pbVar4;
         }

         uVar8 = iVar2 + uVar7;
         *param_3 = uVar8;
         if (( pbVar5[2] - 0x30 < 10 ) && ( pbVar5[3] - 0x30 < 10 )) {
            uVar3 = ( pbVar5[3] - 0x30 ) + ( pbVar5[2] - 0x30 ) * 10;
         }
 else {
            uVar3 = 0xffffffff;
         }

         param_3[1] = uVar3;
         if (( pbVar5[4] - 0x30 < 10 ) && ( pbVar5[5] - 0x30 < 10 )) {
            uVar10 = ( pbVar5[5] - 0x30 ) + ( pbVar5[4] - 0x30 ) * 10;
         }
 else {
            uVar10 = 0xffffffff;
         }

         param_3[2] = uVar10;
         if (( pbVar5[6] - 0x30 < 10 ) && ( pbVar5[7] - 0x30 < 10 )) {
            uVar12 = ( pbVar5[7] - 0x30 ) + ( pbVar5[6] - 0x30 ) * 10;
         }
 else {
            uVar12 = 0xffffffff;
         }

         param_3[3] = uVar12;
         if (( pbVar5[8] - 0x30 < 10 ) && ( pbVar5[9] - 0x30 < 10 )) {
            uVar11 = ( pbVar5[9] - 0x30 ) + ( pbVar5[8] - 0x30 ) * 10;
         }
 else {
            uVar11 = 0xffffffff;
         }

         param_3[4] = uVar11;
         if (( pbVar5[10] - 0x30 < 10 ) && ( pbVar5[0xb] - 0x30 < 10 )) {
            uVar9 = ( pbVar5[0xb] - 0x30 ) + ( pbVar5[10] - 0x30 ) * 10;
         }
 else {
            uVar9 = 0xffffffff;
         }

         param_3[5] = uVar9;
         if (uVar3 < 0xd) {
            uVar6 = 1L << ( (byte)uVar3 & 0x3f );
            if (( uVar6 & 0x15aa ) == 0) {
               if (( uVar6 & 0xa50 ) == 0) {
                  if (uVar3 != 2) goto LAB_00100930;
                  uVar3 = 0x1c;
                  if (( uVar8 & 3 ) == 0) {
                     uVar3 = 0x1d;
                     if (( uVar8 * -0x3d70a3d7 >> 2 | uVar7 * 0x40000000 ) < 0x28f5c29) {
                        uVar3 = ( ( uVar8 * -0x3d70a3d7 >> 4 | uVar8 * -0x70000000 ) < 0xa3d70b ) + 0x1c;
                     }

                  }

               }
 else {
                  uVar3 = 0x1e;
               }

            }
 else {
               uVar3 = 0x1f;
            }

            if (( ( ( uVar10 - 1 < uVar3 ) && ( uVar12 < 0x18 ) ) && ( uVar11 < 0x3c ) ) && ( iVar2 = uVar9 < 0x3c )) goto LAB_0010097e;
         }

      }
 else {
         LAB_00100a00:*param_3 = 0xffffffff;
      }

   }
 else if (( local_28 == lVar13 + 0xb ) && ( pbVar4 = (byte*)*param_1 ),pbVar4[local_28 + -1] == 0x5a) goto LAB_00100799;
   LAB_00100930:iVar2 = -0x2400;
   LAB_0010097e:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
ulong mbedtls_x509_get_sig(long *param_1, byte *param_2, uint *param_3) {
   byte bVar1;
   byte *pbVar2;
   long lVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar2 = (byte*)*param_1;
   if (param_2 == pbVar2 || (long)param_2 - (long)pbVar2 < 0) {
      uVar4 = 0xffffdb20;
   }
 else {
      bVar1 = *pbVar2;
      uVar4 = mbedtls_asn1_get_bitstring_null(param_1, param_2, &local_28);
      if ((int)uVar4 == 0) {
         *param_3 = (uint)bVar1;
         lVar3 = *param_1;
         *(long*)( param_3 + 2 ) = local_28;
         *(long*)( param_3 + 4 ) = lVar3;
         *param_1 = lVar3 + local_28;
      }
 else {
         uVar4 = ( ulong )((int)uVar4 - 0x2480);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_x509_get_sig_alg(undefined8 param_1, int *param_2, undefined8 param_3, int *param_4, long *param_5) {
   int iVar1;
   void *__ptr;
   if (*param_5 == 0) {
      iVar1 = mbedtls_oid_get_sig_alg(param_1, param_3, param_4);
      if (iVar1 != 0) {
         return iVar1 + -0x2600;
      }

      if (*param_4 == 6) {
         __ptr = calloc(1, 8);
         if (__ptr == (void*)0x0) {
            iVar1 = -0x2880;
         }
 else {
            iVar1 = mbedtls_x509_get_rsassa_pss_params(param_2, param_3, __ptr, (long)__ptr + 4);
            if (iVar1 == 0) {
               *param_5 = (long)__ptr;
               return 0;
            }

            free(__ptr);
         }

      }
 else if (( *param_2 == 5 ) || ( *param_2 == 0 )) {
         iVar1 = 0;
         if (*(long*)( param_2 + 2 ) != 0) {
            iVar1 = -0x2300;
         }

      }
 else {
         iVar1 = -0x2300;
      }

   }
 else {
      iVar1 = -0x2800;
   }

   return iVar1;
}
int mbedtls_x509_get_ext(long *param_1, undefined8 param_2, uint *param_3, uint param_4) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = mbedtls_asn1_get_tag(param_1, param_2, param_3 + 2);
   if (iVar1 == 0) {
      lVar2 = *param_1;
      *param_3 = param_4 | 0xa0;
      *(long*)( param_3 + 4 ) = lVar2;
      lVar2 = lVar2 + *(long*)( param_3 + 2 );
      iVar1 = mbedtls_asn1_get_tag(param_1, lVar2, &local_28, 0x30);
      if (iVar1 == 0) {
         iVar1 = 0;
         if (lVar2 != local_28 + *param_1) {
            iVar1 = -0x2566;
         }

         goto LAB_00100c4a;
      }

   }

   iVar1 = iVar1 + -0x2500;
   LAB_00100c4a:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
int mbedtls_x509_dn_gets(char *param_1, ulong param_2, long param_3) {
   long lVar1;
   int iVar2;
   int iVar3;
   ulong uVar4;
   char *pcVar5;
   ulong uVar6;
   byte bVar7;
   long lVar8;
   ulong uVar9;
   char cVar10;
   long lVar11;
   byte bVar12;
   uint uVar13;
   byte bVar14;
   ulong uVar15;
   byte *pbVar16;
   undefined *puVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   ulong local_198;
   char *local_190;
   byte *local_160;
   undefined8 local_158;
   undefined1 local_14e[6];
   byte local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_158 = 0;
   pbVar16 = local_148;
   for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
      for (int i = 0; i < 8; i++) {
         pbVar16[i] = 0;
      }

      pbVar16 = pbVar16 + 8;
   }

   iVar2 = (int)param_2;
   if (param_3 != 0) {
      cVar10 = '\0';
      lVar8 = param_3;
      local_198 = param_2;
      local_190 = param_1;
      do {
         if (*(long*)( lVar8 + 0x10 ) != 0) {
            if (param_3 == lVar8) {
               LAB_00100d82:uVar13 = 1;
               if (*(uint*)( lVar8 + 0x18 ) < 0x17) {
                  uVar13 = ( uint )(-0x481001L >> ( ( byte ) * (uint*)( lVar8 + 0x18 ) & 0x3f )) & 1;
               }

               iVar2 = mbedtls_oid_get_attr_short_name(lVar8, &local_158);
               if (iVar2 == 0) {
                  iVar2 = __snprintf_chk(local_190, local_198, 2, 0xffffffffffffffff, &_LC3, local_158);
               }
 else {
                  iVar2 = mbedtls_oid_get_numeric_string(local_190, local_198, lVar8);
                  if (iVar2 < 1) {
                     if (iVar2 == -0xb) goto LAB_00100f6f;
                     iVar2 = snprintf(local_190, local_198, "??=");
                  }
 else {
                     uVar13 = 1;
                     local_190 = local_190 + iVar2;
                     local_198 = local_198 - (long)iVar2;
                     iVar2 = snprintf(local_190, local_198, "=");
                  }

               }

               if (( -1 < iVar2 ) && ( uVar4 = uVar4 < local_198 )) {
                  uVar6 = *(ulong*)( lVar8 + 0x20 );
                  if (uVar13 != 0) {
                     local_148[0] = 0x23;
                     local_160 = local_148;
                     iVar2 = mbedtls_asn1_write_len(&local_160, local_14e, uVar6);
                     if (-1 < iVar2) {
                        iVar3 = mbedtls_asn1_write_tag(&local_160, local_14e, *(undefined1*)( lVar8 + 0x18 ));
                        if (-1 < iVar3) {
                           lVar11 = 0;
                           lVar1 = (long)iVar3 + (long)iVar2;
                           if (lVar1 == 0) {
                              uVar6 = 1;
                           }
 else {
                              do {
                                 bVar14 = local_14e[lVar11 + ( 6 - lVar1 )];
                                 bVar12 = bVar14 >> 4;
                                 bVar14 = bVar14 & 0xf;
                                 bVar7 = bVar12 + 0x30;
                                 if (9 < bVar12) {
                                    bVar7 = bVar12 + 0x37;
                                 }

                                 local_148[lVar11 * 2 + 1] = bVar7;
                                 bVar7 = bVar14 + 0x37;
                                 if (bVar14 < 10) {
                                    bVar7 = bVar14 + 0x30;
                                 }

                                 local_148[lVar11 * 2 + 2] = bVar7;
                                 lVar11 = lVar11 + 1;
                              }
 while ( lVar1 != lVar11 );
                              uVar6 = lVar1 * 2 + 1;
                           }

                           uVar9 = 0;
                           uVar18 = uVar6;
                           uVar15 = uVar6;
                           if (*(long*)( lVar8 + 0x20 ) != 0) {
                              while (true) {
                                 bVar14 = *(byte*)( *(long*)( lVar8 + 0x28 ) + uVar9 );
                                 bVar12 = bVar14 >> 4;
                                 bVar14 = bVar14 & 0xf;
                                 bVar7 = bVar12 + 0x30;
                                 if (9 < bVar12) {
                                    bVar7 = bVar12 + 0x37;
                                 }

                                 local_148[uVar9 * 2 + uVar6] = bVar7;
                                 bVar7 = bVar14 + 0x37;
                                 if (bVar14 < 10) {
                                    bVar7 = bVar14 + 0x30;
                                 }

                                 local_148[uVar9 * 2 + uVar6 + 1] = bVar7;
                                 uVar9 = uVar9 + 1;
                                 uVar15 = uVar18 + 2;
                                 if (*(ulong*)( lVar8 + 0x20 ) <= uVar9) break;
                                 uVar15 = uVar18 + 3;
                                 uVar18 = uVar18 + 2;
                                 if (0xfe < uVar15) goto LAB_00100f6f;
                              }
;
                           }

                           goto LAB_00100ebb;
                        }

                     }

                     iVar2 = -0x6e;
                     goto LAB_00100f74;
                  }

                  uVar15 = 0;
                  uVar18 = 0;
                  if (uVar6 != 0) {
                     do {
                        while (true) {
                           bVar14 = *(byte*)( *(long*)( lVar8 + 0x28 ) + uVar18 );
                           if (bVar14 == 0) {
                              iVar2 = -0x2380;
                              goto LAB_00100f74;
                           }

                           pcVar5 = strchr(",=+<>;\"\\", (uint)bVar14);
                           if (( pcVar5 != (char*)0x0 ) || ( ( uVar18 == 0 && ( pcVar5 = strchr("# ", (uint)bVar14) ),pcVar5 != (char*)0x0 ) )) break;
                           uVar9 = uVar15;
                           if (( uVar6 - 1 != uVar18 ) || ( bVar14 != 0x20 )) goto LAB_00100e5b;
                           uVar9 = uVar15 + 1;
                           if (uVar15 == 0xfe) goto LAB_00100f6f;
                           local_148[uVar15] = 0x5c;
                           LAB_00100f48:local_148[uVar9] = bVar14;
                           uVar6 = *(ulong*)( lVar8 + 0x20 );
                           uVar18 = uVar18 + 1;
                           uVar15 = uVar9 + 1;
                           if (uVar6 <= uVar18) goto LAB_00100ebb;
                           if (uVar15 == 0xff) goto LAB_00100f6f;
                        }
;
                        if (uVar15 == 0xfe) goto LAB_00100f6f;
                        local_148[uVar15] = 0x5c;
                        uVar9 = uVar15 + 1;
                        LAB_00100e5b:if (( byte )(bVar14 - 0x20) < 0x5f) goto LAB_00100f48;
                        uVar15 = uVar9 + 3;
                        if (0xfe < uVar15) goto LAB_00100f6f;
                        bVar12 = bVar14 >> 4;
                        local_148[uVar9] = 0x5c;
                        bVar14 = bVar14 & 0xf;
                        bVar7 = bVar12 + 0x37;
                        if (bVar12 < 10) {
                           bVar7 = bVar12 + 0x30;
                        }

                        local_148[uVar9 + 1] = bVar7;
                        bVar7 = bVar14 + 0x37;
                        if (bVar14 < 10) {
                           bVar7 = bVar14 + 0x30;
                        }

                        uVar18 = uVar18 + 1;
                        local_148[uVar9 + 2] = bVar7;
                        uVar6 = *(ulong*)( lVar8 + 0x20 );
                     }
 while ( uVar18 < uVar6 );
                  }

                  LAB_00100ebb:local_148[uVar15] = 0;
                  local_198 = local_198 - uVar4;
                  iVar2 = snprintf(local_190 + uVar4, local_198, "%s", local_148);
                  if (( -1 < iVar2 ) && ( uVar6 = uVar6 < local_198 )) {
                     local_198 = local_198 - uVar6;
                     local_190 = local_190 + uVar4 + uVar6;
                     cVar10 = *(char*)( lVar8 + 0x38 );
                     goto LAB_00100f0c;
                  }

               }

            }
 else {
               puVar17 = &_LC2;
               if (cVar10 != '\0') {
                  puVar17 = &_LC1;
               }

               iVar2 = __snprintf_chk(local_190, local_198, 2, 0xffffffffffffffff, puVar17);
               if (( -1 < iVar2 ) && ( uVar4 = uVar4 < local_198 )) {
                  local_198 = local_198 - uVar4;
                  local_190 = local_190 + uVar4;
                  goto LAB_00100d82;
               }

            }

            LAB_00100f6f:iVar2 = -0x2980;
            goto LAB_00100f74;
         }

         LAB_00100f0c:lVar8 = *(long*)( lVar8 + 0x30 );
      }
 while ( lVar8 != 0 );
      iVar2 = (int)local_198;
   }

   iVar2 = (int)param_2 - iVar2;
   LAB_00100f74:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
int mbedtls_x509_serial_gets(char *param_1, ulong param_2, long param_3) {
   int iVar1;
   char *pcVar2;
   ulong uVar3;
   undefined *puVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   undefined8 uStack_40;
   uVar7 = *(ulong*)( param_3 + 8 );
   uVar6 = param_2;
   if (uVar7 < 0x21) {
      if (uVar7 == 0) goto LAB_001012a2;
      pcVar2 = *(char**)( param_3 + 0x10 );
      if (uVar7 < 2) {
         uVar7 = 1;
         uVar5 = 0;
         goto LAB_0010122d;
      }

   }
 else {
      pcVar2 = *(char**)( param_3 + 0x10 );
      uVar7 = 0x1c;
   }

   if (*pcVar2 != '\0') {
      uVar5 = 0;
      goto LAB_00101210;
   }

   uVar5 = 1;
   while (true) {
      if (uVar5 < uVar7 - 1) {
         LAB_00101210:puVar4 = &_LC9;
      }
 else {
         LAB_0010122d:puVar4 = &_LC10;
      }

      iVar1 = __snprintf_chk(param_1, uVar6, 2, 0xffffffffffffffff, "%02X%s", pcVar2[uVar5], puVar4);
      if (iVar1 < 0) {
         return -0x2980;
      }

      uVar3 = (ulong)iVar1;
      if (uVar6 <= uVar3) {
         return -0x2980;
      }

      uVar5 = uVar5 + 1;
      uVar6 = uVar6 - uVar3;
      param_1 = param_1 + uVar3;
      if (uVar7 <= uVar5) break;
      pcVar2 = *(char**)( param_3 + 0x10 );
   }
;
   if (*(ulong*)( param_3 + 8 ) != uVar7) {
      iVar1 = snprintf(param_1, uVar6, "....", uStack_40);
      if (( iVar1 < 0 ) || ( uVar6 <= (ulong)(long)iVar1 )) {
         return -0x2980;
      }

      uVar6 = uVar6 - (long)iVar1;
   }

   LAB_001012a2:return (int)param_2 - (int)uVar6;
}
int mbedtls_x509_sig_alg_gets(char *param_1, ulong param_2, undefined8 param_3, int param_4, undefined4 param_5, undefined4 *param_6) {
   int iVar1;
   char *pcVar2;
   undefined4 uVar3;
   ulong uVar4;
   char *pcVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   iVar1 = mbedtls_oid_get_sig_alg_desc(param_3, &local_48);
   if (iVar1 == 0) {
      iVar1 = snprintf(param_1, param_2, "%s", local_48);
   }
 else {
      iVar1 = snprintf(param_1, param_2, "???");
   }

   if (( iVar1 < 0 ) || ( uVar4 = param_2 <= uVar4 )) {
      LAB_00101610:iVar1 = -0x2980;
   }
 else {
      uVar6 = param_2 - uVar4;
      if (param_4 == 6) {
         switch (param_5) {
            case 3:
        pcVar5 = "MD5";
        break;
            case 4:
        pcVar5 = "RIPEMD160";
        break;
            case 5:
        uVar3 = param_6[1];
        pcVar2 = "SHA1";
        pcVar5 = pcVar2;
        switch(*param_6) {
        case 3:
          goto switchD_00101401_caseD_3;
        case 4:
          goto switchD_00101401_caseD_4;
        case 5:
          goto LAB_001014c0;
        default:
          goto switchD_00101401_caseD_6;
        case 8:
          goto switchD_00101401_caseD_8;
        case 9:
          goto switchD_00101401_caseD_9;
        case 10:
          goto switchD_00101401_caseD_a;
        case 0xb:
          goto switchD_00101401_caseD_b;
        }
            default:
        uVar3 = param_6[1];
        switch(*param_6) {
        case 3:
          pcVar2 = "MD5";
          pcVar5 = "???";
          break;
        case 4:
          pcVar2 = "RIPEMD160";
          pcVar5 = "???";
          break;
        case 5:
          pcVar2 = "SHA1";
          pcVar5 = "???";
          break;
        default:
          pcVar2 = "???";
          pcVar5 = pcVar2;
          break;
        case 8:
          pcVar2 = "SHA224";
          pcVar5 = "???";
          break;
        case 9:
          pcVar2 = "SHA256";
          pcVar5 = "???";
          break;
        case 10:
          pcVar2 = "SHA384";
          pcVar5 = "???";
          break;
        case 0xb:
          pcVar2 = "SHA512";
          pcVar5 = "???";
        }
        goto LAB_001014c0;
            case 8:
        pcVar5 = "SHA224";
        break;
            case 9:
        pcVar5 = "SHA256";
        break;
            case 10:
        pcVar5 = "SHA384";
        break;
            case 0xb:
        pcVar5 = "SHA512";
         }

         uVar3 = param_6[1];
         switch (*param_6) {
            case 3:
switchD_00101401_caseD_3:
        pcVar2 = "MD5";
        break;
            case 4:
switchD_00101401_caseD_4:
        pcVar2 = "RIPEMD160";
        break;
            case 5:
        pcVar2 = "SHA1";
        break;
            default:
switchD_00101401_caseD_6:
        pcVar2 = "???";
        break;
            case 8:
switchD_00101401_caseD_8:
        pcVar2 = "SHA224";
        break;
            case 9:
switchD_00101401_caseD_9:
        pcVar2 = "SHA256";
        break;
            case 10:
switchD_00101401_caseD_a:
        pcVar2 = "SHA384";
        break;
            case 0xb:
switchD_00101401_caseD_b:
        pcVar2 = "SHA512";
         }

         LAB_001014c0:iVar1 = __snprintf_chk(param_1 + uVar4, uVar6, 2, 0xffffffffffffffff, " (%s, MGF1-%s, 0x%02X)", pcVar5, pcVar2, uVar3);
         if (( iVar1 < 0 ) || ( uVar6 <= (ulong)(long)iVar1 )) goto LAB_00101610;
         uVar6 = uVar6 - (long)iVar1;
      }

      iVar1 = (int)param_2 - (int)uVar6;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint mbedtls_x509_key_size_helper(undefined8 param_1, ulong param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = __snprintf_chk(param_1, param_2, 2, 0xffffffffffffffff, "%s key size", param_3);
   if (-1 < iVar1) {
      return ~-(uint)((ulong)(long)iVar1 < param_2) & 0xffffd680;
   }

   return 0xffffd680;
}
int mbedtls_x509_time_cmp(int *param_1, int *param_2) {
   int iVar1;
   iVar1 = ( *param_1 << 9 | param_1[1] << 5 | param_1[2] ) - ( *param_2 << 9 | param_2[1] << 5 | param_2[2] );
   if (iVar1 == 0) {
      iVar1 = ( param_1[3] << 0xc | param_1[4] << 6 | param_1[5] ) - ( param_2[3] << 0xc | param_2[4] << 6 | param_2[5] );
   }

   return iVar1;
}
undefined8 mbedtls_x509_time_gmtime(undefined8 param_1, undefined8 *param_2) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_50;
   undefined1 local_48[8];
   undefined4 local_40;
   undefined4 local_3c;
   int local_38;
   int local_34;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = param_1;
   lVar1 = mbedtls_platform_gmtime_r(&local_50, local_48);
   if (lVar1 == 0) {
      uVar2 = 0xffffffff;
   }
 else {
      uVar2 = 0;
      *param_2 = CONCAT44(local_38 + 1, local_34 + 0x76c);
      param_2[1] = CONCAT44(local_40, local_3c);
      param_2[2] = CONCAT44(local_48._0_4_, local_48._4_4_);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint mbedtls_x509_time_is_past(undefined8 param_1) {
   uint uVar1;
   long lVar2;
   long in_FS_OFFSET;
   time_t local_70;
   undefined8 local_68[2];
   undefined8 local_58;
   undefined1 local_48[16];
   int local_38;
   int local_34;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = time((time_t*)0x0);
   lVar2 = mbedtls_platform_gmtime_r(&local_70, local_48);
   if (lVar2 == 0) {
      uVar1 = 1;
   }
 else {
      local_68[0] = CONCAT44(local_38 + 1, local_34 + 0x76c);
      local_58 = CONCAT44((int)local_48._0_8_, SUB84(local_48._0_8_, 4));
      uVar1 = mbedtls_x509_time_cmp(param_1, local_68);
      uVar1 = uVar1 >> 0x1f;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool mbedtls_x509_time_is_future(undefined8 param_1) {
   bool bVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   time_t local_70;
   undefined8 local_68[2];
   undefined8 local_58;
   undefined1 local_48[16];
   int local_38;
   int local_34;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = time((time_t*)0x0);
   lVar3 = mbedtls_platform_gmtime_r(&local_70, local_48);
   if (lVar3 == 0) {
      bVar1 = true;
   }
 else {
      local_68[0] = CONCAT44(local_38 + 1, local_34 + 0x76c);
      local_58 = CONCAT44((int)local_48._0_8_, SUB84(local_48._0_8_, 4));
      iVar2 = mbedtls_x509_time_cmp(param_1, local_68);
      bVar1 = 0 < iVar2;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong mbedtls_x509_get_ns_cert_type(undefined8 param_1, undefined8 param_2, undefined1 *param_3) {
   ulong uVar1;
   long in_FS_OFFSET;
   long local_28;
   undefined1 local_20;
   undefined1 *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   local_20 = 0;
   local_18 = (undefined1*)0x0;
   uVar1 = mbedtls_asn1_get_bitstring(param_1, param_2, &local_28);
   if ((int)uVar1 == 0) {
      if (local_28 == 0) {
         *param_3 = 0;
      }
 else if (local_28 == 1) {
         *param_3 = *local_18;
      }
 else {
         uVar1 = 0xffffda9c;
      }

   }
 else {
      uVar1 = ( ulong )((int)uVar1 - 0x2500);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong mbedtls_x509_get_key_usage(undefined8 param_1, undefined8 param_2, uint *param_3) {
   byte *pbVar1;
   char cVar2;
   ulong uVar3;
   ulong uVar4;
   uint uVar5;
   long in_FS_OFFSET;
   ulong local_28;
   undefined1 local_20;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   local_20 = 0;
   local_18 = 0;
   uVar3 = mbedtls_asn1_get_bitstring(param_1, param_2, &local_28);
   if ((int)uVar3 == 0) {
      *param_3 = 0;
      if (local_28 != 0) {
         uVar5 = 0;
         uVar4 = 0;
         do {
            pbVar1 = (byte*)( local_18 + uVar4 );
            cVar2 = (char)uVar4;
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 | ( uint ) * pbVar1 << ( cVar2 * '\b' & 0x1fU );
            *param_3 = uVar5;
            if (uVar4 == 4) break;
         }
 while ( uVar4 < local_28 );
      }

   }
 else {
      uVar3 = ( ulong )((int)uVar3 - 0x2500);
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
ulong mbedtls_x509_parse_subject_alt_name(uint *param_1, undefined1 (*param_2)[16]) {
   undefined8 uVar1;
   int iVar2;
   ulong uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_88;
   long *local_80;
   long local_78;
   undefined8 uStack_70;
   long *local_68;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   long local_58;
   long *plStack_50;
   undefined4 local_48;
   undefined4 uStack_44;
   long lStack_40;
   long *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*param_1 & 0xdf) {
      case 0x80:
    local_80 = *(long **)(param_1 + 4);
    lVar4 = (long)local_80 + *(long *)(param_1 + 2);
    iVar2 = mbedtls_asn1_get_tag(&local_80,lVar4,&local_88,6);
    if (iVar2 != 0) goto LAB_00101d30;
    if ((local_88 != 8) || (*local_80 != 0x40807050501062b)) goto switchD_00101a4f_caseD_83;
    local_68 = local_80;
    local_80 = local_80 + 1;
    local_78 = CONCAT44(local_78._4_4_,6);
    uStack_70 = 8;
    iVar2 = mbedtls_asn1_get_tag(&local_80,lVar4,&local_88,0xa0);
    if (iVar2 != 0) goto LAB_00101d30;
    if (lVar4 != local_88 + (long)local_80) {
LAB_00101bc4:
      uVar3 = 0xffffda9a;
      break;
    }
    iVar2 = mbedtls_asn1_get_tag(&local_80,lVar4,&local_88,0x30);
    if (iVar2 != 0) goto LAB_00101d30;
    if (lVar4 != local_88 + (long)local_80) goto LAB_00101bc4;
    iVar2 = mbedtls_asn1_get_tag(&local_80,lVar4,&local_88,6);
    if (iVar2 == 0) {
      uStack_60 = 6;
      plStack_50 = local_80;
      local_80 = (long *)((long)local_80 + local_88);
      local_58 = local_88;
      iVar2 = mbedtls_asn1_get_tag(&local_80,lVar4,&local_88,4);
      if (iVar2 != 0) goto LAB_00101d30;
      local_48 = 4;
      local_38 = local_80;
      lStack_40 = local_88;
      if (lVar4 != (long)local_80 + local_88) goto LAB_00101bc4;
    }
    else {
LAB_00101d30:
      uVar3 = (ulong)(iVar2 - 0x2500U);
      if (iVar2 - 0x2500U != 0) break;
    }
    uVar3 = 0;
    *param_2 = (undefined1  [16])0x0;
    *(long *)(*param_2 + 8) = local_78;
    *(undefined8 *)param_2[1] = uStack_70;
    *(long **)(param_2[4] + 8) = local_38;
    *(long **)(param_2[1] + 8) = local_68;
    *(ulong *)param_2[2] = CONCAT44(uStack_5c,uStack_60);
    *(long *)(param_2[2] + 8) = local_58;
    *(long **)param_2[3] = plStack_50;
    *(ulong *)(param_2[3] + 8) = CONCAT44(uStack_44,local_48);
    *(long *)param_2[4] = lStack_40;
    break;
      case 0x81:
    *(undefined4 *)*param_2 = 1;
    *(undefined1 (*) [16])(param_2[1] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(*param_2 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[3] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[2] + 4) = (undefined1  [16])0x0;
    param_2[4] = (undefined1  [16])0x0;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(*param_2 + 8) = *(undefined8 *)param_1;
    *(undefined8 *)param_2[1] = uVar1;
    *(undefined8 *)(param_2[1] + 8) = *(undefined8 *)(param_1 + 4);
    uVar3 = 0;
    break;
      case 0x82:
    *(undefined4 *)*param_2 = 2;
    *(undefined1 (*) [16])(param_2[1] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(*param_2 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[3] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[2] + 4) = (undefined1  [16])0x0;
    param_2[4] = (undefined1  [16])0x0;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(*param_2 + 8) = *(undefined8 *)param_1;
    *(undefined8 *)param_2[1] = uVar1;
    *(undefined8 *)(param_2[1] + 8) = *(undefined8 *)(param_1 + 4);
    uVar3 = 0;
    break;
      default:
switchD_00101a4f_caseD_83:
    uVar3 = 0xffffdf80;
    break;
      case 0x84:
    local_78 = *(long *)(param_1 + 4);
    *(undefined4 *)*param_2 = 4;
    *(undefined1 (*) [16])(param_2[3] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(*param_2 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[1] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[2] + 4) = (undefined1  [16])0x0;
    param_2[4] = (undefined1  [16])0x0;
    uVar3 = mbedtls_asn1_get_tag(&local_78,local_78 + *(long *)(param_1 + 2),&local_80,0x30);
    if (((int)uVar3 == 0) &&
       (uVar3 = mbedtls_x509_get_name(&local_78,(long)local_80 + local_78,*param_2 + 8),
       (int)uVar3 == 0)) {
      uVar3 = 0;
    }
    break;
      case 0x86:
    *(undefined4 *)*param_2 = 6;
    *(undefined1 (*) [16])(param_2[1] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(*param_2 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[3] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[2] + 4) = (undefined1  [16])0x0;
    param_2[4] = (undefined1  [16])0x0;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(*param_2 + 8) = *(undefined8 *)param_1;
    *(undefined8 *)param_2[1] = uVar1;
    *(undefined8 *)(param_2[1] + 8) = *(undefined8 *)(param_1 + 4);
    uVar3 = 0;
    break;
      case 0x87:
    *(undefined4 *)*param_2 = 7;
    *(undefined1 (*) [16])(param_2[3] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(*param_2 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[1] + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2[2] + 4) = (undefined1  [16])0x0;
    param_2[4] = (undefined1  [16])0x0;
    if ((*(long *)(param_1 + 2) == 4) || (*(long *)(param_1 + 2) == 0x10)) {
      uVar1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(*param_2 + 8) = *(undefined8 *)param_1;
      *(undefined8 *)param_2[1] = uVar1;
      *(undefined8 *)(param_2[1] + 8) = *(undefined8 *)(param_1 + 4);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffd800;
    }
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_x509_get_subject_alt_name_ext(long *param_1, byte *param_2, undefined8 *param_3) {
   byte bVar1;
   int iVar2;
   undefined8 *puVar3;
   byte *pbVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_c0;
   uint local_b8;
   undefined4 uStack_b4;
   long lStack_b0;
   long local_a8;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar4 = (byte*)*param_1;
   puVar3 = param_3;
   if (pbVar4 < param_2) {
      puVar5 = param_3;
      do {
         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         bVar1 = *pbVar4;
         *param_1 = (long)( pbVar4 + 1 );
         local_b8 = (uint)bVar1;
         iVar2 = mbedtls_asn1_get_len(param_1, param_2, &local_c0);
         if (iVar2 != 0) {
            iVar2 = iVar2 + -0x2500;
            goto LAB_00101ef0;
         }

         local_a8 = *param_1;
         lStack_b0 = local_c0;
         if (( local_b8 & 0xc0 ) != 0x80) {
            iVar2 = -0x2562;
            goto LAB_00101ef0;
         }

         iVar2 = mbedtls_x509_parse_subject_alt_name(&local_b8, local_98);
         if (( iVar2 != 0 ) && ( iVar2 != -0x2080 )) {
            mbedtls_asn1_sequence_free(param_3[3]);
            param_3[3] = 0;
            goto LAB_00101ef0;
         }

         if (local_98._0_4_ == 4) {
            mbedtls_asn1_free_named_data_list_shallow(local_68._8_8_);
         }

         puVar3 = puVar5;
         if (puVar5[2] != 0) {
            if (puVar5[3] != 0) {
               iVar2 = -0x2500;
               goto LAB_00101ef0;
            }

            puVar3 = (undefined8*)calloc(1, 0x20);
            puVar5[3] = puVar3;
            if (puVar3 == (undefined8*)0x0) {
               iVar2 = -0x256a;
               goto LAB_00101ef0;
            }

         }

         puVar3[2] = local_a8;
         *puVar3 = CONCAT44(uStack_b4, local_b8);
         puVar3[1] = lStack_b0;
         pbVar4 = (byte*)( lStack_b0 + *param_1 );
         *param_1 = (long)pbVar4;
         puVar5 = puVar3;
      }
 while ( pbVar4 < param_2 );
   }

   puVar3[3] = 0;
   iVar2 = -0x2566;
   if (param_2 == pbVar4) {
      iVar2 = 0;
   }

   LAB_00101ef0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
ulong mbedtls_x509_get_subject_alt_name(long *param_1, long param_2, undefined8 param_3) {
   int iVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = mbedtls_asn1_get_tag(param_1, param_2, &local_28, 0x30);
   if (iVar1 == 0) {
      if (param_2 == local_28 + *param_1) {
         uVar2 = mbedtls_x509_get_subject_alt_name_ext(param_1, param_2, param_3);
      }
 else {
         uVar2 = 0xffffda9a;
      }

   }
 else {
      uVar2 = ( ulong )(iVar1 - 0x2500);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void mbedtls_x509_free_subject_alt_name(int *param_1) {
   if (*param_1 != 4) {
      return;
   }

   mbedtls_asn1_free_named_data_list_shallow(*(undefined8*)( param_1 + 0xe ));
   return;
}
undefined8 mbedtls_x509_info_subject_alt_name(undefined8 *param_1, ulong *param_2, long param_3, undefined8 param_4) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   char *pcVar4;
   undefined1 *puVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   uVar6 = *param_2;
   puVar5 = (undefined1*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0) {
      do {
         while (true) {
            local_98 = (undefined1[16])0x0;
            local_88 = (undefined1[16])0x0;
            local_78 = (undefined1[16])0x0;
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            iVar1 = mbedtls_x509_parse_subject_alt_name(param_3, local_98);
            if (iVar1 == 0) break;
            pcVar4 = "\n%s    <unsupported>";
            if (iVar1 != -0x2080) {
               pcVar4 = "\n%s    <malformed>";
            }

            iVar1 = __snprintf_chk(puVar5, uVar6, 2, 0xffffffffffffffff, pcVar4, param_4);
            if (( iVar1 < 0 ) || ( uVar3 = uVar6 <= uVar3 )) {
               LAB_00102559:uVar2 = 0xffffd680;
               goto LAB_001021c7;
            }

            uVar6 = uVar6 - uVar3;
            puVar5 = puVar5 + uVar3;
            LAB_001020c2:param_3 = *(long*)( param_3 + 0x18 );
            if (param_3 == 0) goto LAB_001021ba;
         }
;
         if ((uint)local_98._0_4_ < 8) {
            /* WARNING: Could not recover jumptable at 0x0010210c. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( *(code*)( &DAT_00102ee8 + *(int*)( &DAT_00102ee8 + (ulong)(uint)local_98._0_4_ * 4 ) ) )();
            return uVar2;
         }

         iVar1 = __snprintf_chk(puVar5, uVar6, 2, 0xffffffffffffffff, "\n%s    <unsupported>", param_4);
         if (( iVar1 < 0 ) || ( uVar3 = uVar6 <= uVar3 )) goto LAB_00102559;
         uVar6 = uVar6 - uVar3;
         puVar5 = puVar5 + uVar3;
         if (local_98._0_4_ != 4) goto LAB_001020c2;
         mbedtls_asn1_free_named_data_list_shallow(local_68._8_8_);
         param_3 = *(long*)( param_3 + 0x18 );
      }
 while ( param_3 != 0 );
   }

   LAB_001021ba:*puVar5 = 0;
   uVar2 = 0;
   *param_2 = uVar6;
   *param_1 = puVar5;
   LAB_001021c7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
undefined8 mbedtls_x509_info_cert_type(long *param_1, ulong *param_2, byte param_3) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   ulong uVar4;
   undefined *puVar5;
   long lVar6;
   puVar5 = &_LC10;
   uVar4 = *param_2;
   lVar6 = *param_1;
   if ((char)param_3 < '\0') {
      iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sSSL Client", &_LC10);
      if (( -1 < iVar1 ) && ( uVar2 = uVar2 < uVar4 )) {
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
         goto LAB_00102659;
      }

      LAB_001028e8:uVar3 = 0xffffd680;
   }
 else {
      LAB_00102659:if (( param_3 & 0x40 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sSSL Server", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_001028e8;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 0x20 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sEmail", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_001028e8;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 0x10 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sObject Signing", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_001028e8;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 8 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sReserved", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_001028e8;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 4 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sSSL CA", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_001028e8;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 2 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sEmail CA", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_001028e8;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 1 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sObject Signing CA", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_001028e8;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
      }

      *param_2 = uVar4;
      uVar3 = 0;
      *param_1 = lVar6;
   }

   return uVar3;
}
undefined8 mbedtls_x509_info_key_usage(long *param_1, ulong *param_2, uint param_3) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   ulong uVar4;
   undefined *puVar5;
   long lVar6;
   puVar5 = &_LC10;
   uVar4 = *param_2;
   lVar6 = *param_1;
   if (( param_3 & 0x80 ) == 0) {
      joined_r0x001029d4:if (( param_3 & 0x40 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sNon Repudiation", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 0x20 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sKey Encipherment", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 0x10 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sData Encipherment", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 8 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sKey Agreement", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 4 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sKey Cert Sign", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 2 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sCRL Sign", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 1 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sEncipher Only", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
      }

      if (( param_3 & 0x8000 ) != 0) {
         iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sDecipher Only", puVar5);
         if (( iVar1 < 0 ) || ( uVar2 = uVar4 <= uVar2 )) goto LAB_00102c10;
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
      }

      *param_2 = uVar4;
      uVar3 = 0;
      *param_1 = lVar6;
   }
 else {
      iVar1 = __snprintf_chk(lVar6, uVar4, 2, 0xffffffffffffffff, "%sDigital Signature", &_LC10);
      if (( -1 < iVar1 ) && ( uVar2 = uVar2 < uVar4 )) {
         uVar4 = uVar4 - uVar2;
         lVar6 = lVar6 + uVar2;
         puVar5 = &_LC2;
         goto joined_r0x001029d4;
      }

      LAB_00102c10:uVar3 = 0xffffd680;
   }

   return uVar3;
}


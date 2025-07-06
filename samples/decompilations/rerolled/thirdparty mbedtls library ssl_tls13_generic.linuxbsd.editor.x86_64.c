/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ssl_tls13_create_verify_structure(void *param_1, size_t param_2, undefined8 *param_3, long *param_4, int param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined1 uVar8;
   uVar2 = _UNK_00102d28;
   uVar1 = __LC0;
   *param_3 = __LC0;
   param_3[1] = uVar2;
   for (int i = 0; i < 3; i++) {
      param_3[( 2*i + 2 )] = uVar1;
      param_3[( 2*i + 3 )] = uVar2;
   }

   uVar8 = DAT_001040ec;
   uVar7 = uRam00000000001040e4;
   uVar6 = _DAT_001040dc;
   uVar5 = uRam00000000001040d4;
   uVar4 = uRam00000000001040c3;
   uVar3 = _DAT_001040bb;
   uVar2 = uRam00000000001040b3;
   uVar1 = _DAT_001040ab;
   if (param_5 == 0) {
      *(undefined1*)( param_3 + 0xc ) = DAT_001040cb;
      param_3[8] = uVar1;
      param_3[9] = uVar2;
      param_3[10] = uVar3;
      param_3[0xb] = uVar4;
   }
 else {
      param_3[8] = _DAT_001040cc;
      param_3[9] = uVar5;
      *(undefined1*)( param_3 + 0xc ) = uVar8;
      param_3[10] = uVar6;
      param_3[0xb] = uVar7;
   }

   *(undefined1*)( (long)param_3 + 0x61 ) = 0;
   memcpy((void*)( (long)param_3 + 0x62 ), param_1, param_2);
   *param_4 = param_2 + 0x62;
   return;
}
void mbedtls_ssl_tls13_crypto_init(undefined8 param_1) {
   int iVar1;
   iVar1 = psa_crypto_init();
   if (iVar1 != 0) {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x2d, "psa_crypto_init", iVar1);
   }

   psa_status_to_mbedtls(iVar1, &psa_to_ssl_errors, 7, &psa_generic_status_to_mbedtls);
   return;
}
ulong mbedtls_ssl_tls13_fetch_handshake_msg(long param_1, uint param_2, undefined8 *param_3, long *param_4) {
   ulong uVar1;
   uVar1 = mbedtls_ssl_read_record(param_1, 0);
   if ((int)uVar1 == 0) {
      if (( *(int*)( param_1 + 0xf8 ) == 0x16 ) && ( **(byte**)( param_1 + 0xe8 ) == param_2 )) {
         *param_3 = *(byte**)( param_1 + 0xe8 ) + 4;
         *param_4 = *(long*)( param_1 + 0x130 ) + -4;
      }
 else {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x47, "Receive unexpected handshake message.");
         mbedtls_ssl_pend_fatal_alert(param_1, 10, 0xffff8900);
         uVar1 = 0xffff8900;
      }

      return uVar1;
   }

   mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x41, "mbedtls_ssl_read_record", uVar1 & 0xffffffff);
   return uVar1 & 0xffffffff;
}
undefined8 mbedtls_ssl_tls13_is_supported_versions_ext_present_in_exts(undefined8 param_1, ushort *param_2, ushort *param_3, ulong *param_4, ulong *param_5) {
   ushort *puVar1;
   ushort *puVar2;
   undefined8 uVar3;
   ulong uVar4;
   ushort uVar5;
   ushort *puVar6;
   *param_4 = 0;
   *param_5 = 0;
   if (param_2 == param_3) {
      return 0;
   }

   if (( param_3 < param_2 ) || ( (long)param_3 - (long)param_2 == 1 )) {
      uVar3 = 0x77;
   }
 else {
      puVar2 = param_2 + 1;
      if (puVar2 <= param_3) {
         uVar5 = *param_2 << 8 | *param_2 >> 8;
         if ((ulong)uVar5 <= ( ulong )((long)param_3 - (long)puVar2)) {
            puVar6 = (ushort*)( (ulong)uVar5 + (long)puVar2 );
            if (puVar6 <= puVar2) {
               return 0;
            }

            if (uVar5 < 4) {
               LAB_00100358:uVar3 = 0x83;
            }
 else {
               uVar5 = param_2[1];
               puVar2 = param_2 + 3;
               if (( puVar2 <= puVar6 ) && ( uVar4 = ( ulong )(ushort)(param_2[2] << 8 | param_2[2] >> 8) ),uVar4 <= ( ulong )((long)puVar6 - (long)puVar2)) {
                  do {
                     puVar1 = (ushort*)( (long)puVar2 + uVar4 );
                     if (uVar5 == 0x2b00) {
                        *param_4 = (ulong)puVar2;
                        *param_5 = (ulong)puVar1;
                        return 1;
                     }

                     if (puVar6 <= puVar1) {
                        return 0;
                     }

                     if ((long)puVar6 - (long)puVar1 < 4) goto LAB_00100358;
                     puVar2 = puVar1 + 2;
                     if (puVar6 < puVar2) break;
                     uVar5 = *puVar1;
                     uVar4 = ( ulong )(ushort)(puVar1[1] << 8 | puVar1[1] >> 8);
                  }
 while ( uVar4 <= ( ulong )((long)puVar6 - (long)puVar2) );
               }

               uVar3 = 0x87;
            }

            goto LAB_0010022a;
         }

      }

      uVar3 = 0x7c;
   }

   LAB_0010022a:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", uVar3, "missing input data in %s", "mbedtls_ssl_tls13_is_supported_versions_ext_present_in_exts");
   mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
   return 0xffff8d00;
}
int mbedtls_ssl_tls13_process_certificate_verify(long *param_1) {
   long lVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   ushort *puVar5;
   undefined8 uVar6;
   uint *puVar7;
   ushort uVar8;
   ushort *puVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   ushort uVar11;
   undefined1 *puVar12;
   ulong uVar13;
   uint local_19c;
   undefined8 local_198;
   undefined8 local_190;
   ushort *local_188;
   ulong local_180;
   undefined8 local_178;
   uint local_170;
   undefined4 local_16c;
   undefined1 local_168[64];
   undefined1 local_128[64];
   undefined1 local_e8[168];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x166, "=> parse certificate verify");
   iVar2 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1, 0xf, &local_188, &local_180);
   if (iVar2 == 0) {
      iVar2 = mbedtls_ssl_get_handshake_transcript(param_1, *(undefined1*)( *(long*)( param_1[0xe] + 0x10 ) + 0x11 ), local_168, 0x40, &local_190);
      if (iVar2 != 0) {
         mbedtls_ssl_pend_fatal_alert(param_1, 0x50, 0xffff9400);
         goto LAB_00100436;
      }

      mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x17c, "handshake hash", local_168);
      lVar1 = *param_1;
      ssl_tls13_create_verify_structure(local_168, local_190, local_e8, &local_198, *(char*)( lVar1 + 8 ) == '\0');
      puVar9 = (ushort*)( (long)local_188 + local_180 );
      if (( CARRY8((ulong)local_188, local_180) ) || ( (long)local_180 < 2 )) {
         uVar6 = 0xfa;
         LAB_001005ab:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", uVar6, "missing input data in %s", "ssl_tls13_parse_certificate_verify");
         mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
         iVar2 = -0x7300;
      }
 else {
         uVar11 = *local_188;
         puVar5 = *(ushort**)( lVar1 + 0xe8 );
         uVar8 = uVar11 << 8 | uVar11 >> 8;
         uVar4 = (uint)uVar8;
         if (puVar5 != (ushort*)0x0) {
            for (; *puVar5 != 0; puVar5 = puVar5 + 1) {
               if (uVar8 == *puVar5) {
                  iVar2 = mbedtls_ssl_pk_alg_from_sig(uVar4 & 0xff);
                  local_19c = mbedtls_ssl_md_alg_from_hash((char)uVar11);
                  if (( local_19c == 0 ) || ( iVar2 == 0 )) {
                     if (uVar11 == 0x508) {
                        uVar13 = 0x200000a;
                        iVar2 = 6;
                        local_19c = 10;
                     }
 else if (uVar11 == 0x608) {
                        uVar13 = 0x200000b;
                        iVar2 = 6;
                        local_19c = 0xb;
                     }
 else {
                        if (uVar11 != 0x408) goto LAB_00100578;
                        uVar13 = 0x2000009;
                        iVar2 = 6;
                        local_19c = 9;
                     }

                  }
 else {
                     uVar13 = (ulong)local_19c | 0x2000000;
                  }

                  mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x120, "Certificate Verify: Signature algorithm ( %04x )", uVar4 & 0xffff);
                  iVar3 = mbedtls_pk_can_do(*(long*)( param_1[0xd] + 0x70 ) + 0x168, iVar2);
                  if (iVar3 == 0) {
                     mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x127, "signature algorithm doesn\'t match cert key");
                     goto LAB_00100578;
                  }

                  if (( (long)local_180 < 4 ) || ( puVar9 < local_188 + 1 )) {
                     uVar6 = 299;
                     goto LAB_001005ab;
                  }

                  puVar5 = local_188 + 2;
                  if (( puVar9 < puVar5 ) || ( uVar10 = ( ulong )(ushort)(local_188[1] << 8 | local_188[1] >> 8) ),local_180 - 4 < uVar10) {
                     uVar6 = 0x12e;
                     goto LAB_001005ab;
                  }

                  puVar12 = local_128;
                  iVar3 = psa_hash_compute(uVar13 & 0xffffffff, local_e8, local_198, puVar12, 0x40, &local_178, puVar5, puVar12, uVar13, uVar10);
                  if (iVar3 != 0) {
                     mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x137, "hash computation PSA error", iVar3);
                     goto LAB_00100578;
                  }

                  mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x13b, "verify hash", puVar12, local_178);
                  puVar7 = (uint*)0x0;
                  if (iVar2 == 6) {
                     local_170 = local_19c;
                     uVar4 = ( local_19c & 0xff | 0x2000000 ) + 0xfdfffffd;
                     local_16c = 0;
                     if (uVar4 < 0x11) {
                        local_16c = *(undefined4*)( CSWTCH_118 + (ulong)uVar4 * 4 );
                     }

                     puVar7 = &local_170;
                  }

                  iVar2 = mbedtls_pk_verify_ext(iVar2, puVar7, *(long*)( param_1[0xd] + 0x70 ) + 0x168, local_19c, puVar12, local_178, puVar5, uVar10);
                  if (iVar2 != 0) {
                     mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x14b, "mbedtls_pk_verify_ext", iVar2);
                     goto LAB_00100578;
                  }

                  iVar2 = mbedtls_ssl_add_hs_msg_to_checksum(param_1, 0xf, local_188, local_180);
                  goto LAB_001003f9;
               }

            }

         }

         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x110, "Received signature algorithm(%04x) is not offered.", uVar4);
         LAB_00100578:iVar2 = -0x6e00;
         mbedtls_ssl_pend_fatal_alert(param_1, 0x33, 0xffff9200);
      }

   }

   LAB_001003f9:mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x192, "<= parse certificate verify");
   mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x193, "mbedtls_ssl_tls13_process_certificate_verify", iVar2);
   LAB_00100436:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
int mbedtls_ssl_tls13_write_certificate(long *param_1) {
   byte *pbVar1;
   size_t __n;
   byte *pbVar2;
   int iVar3;
   void *pvVar4;
   byte *pbVar5;
   ulong uVar6;
   ulong uVar7;
   byte bVar8;
   long lVar9;
   long *plVar10;
   long lVar11;
   byte bVar12;
   undefined8 *puVar13;
   byte *pbVar14;
   long in_FS_OFFSET;
   byte bVar15;
   byte *local_50;
   ulong local_48;
   long local_40;
   bVar15 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x33e, "=> write certificate");
   iVar3 = mbedtls_ssl_start_handshake_msg(param_1, 0xb, &local_50, &local_48);
   pbVar2 = local_50;
   if (iVar3 == 0) {
      lVar9 = param_1[0xe];
      pbVar1 = local_50 + local_48;
      if (( ( lVar9 == 0 ) || ( plVar10 = *(long**)( lVar9 + 0x408 ) ),plVar10 == (long*)0x0 )) {
         lVar11 = 0;
      }
 else {
         lVar11 = *plVar10;
      }

      bVar8 = *(byte*)( lVar9 + 0x670 );
      uVar6 = (ulong)bVar8;
      pbVar5 = *(byte**)( lVar9 + 0x678 );
      if (( uVar6 + 1 <= local_48 ) && ( local_50 <= pbVar1 )) {
         *local_50 = bVar8;
         pbVar14 = local_50 + 1;
         if (bVar8 != 0) {
            if (bVar8 < 8) {
               if (( bVar8 & 4 ) == 0) {
                  if (( bVar8 != 0 ) && ( local_50[1] = *pbVar5(bVar8 & 2) != 0 )) {
                     *(undefined2*)( local_50 + ( uVar6 - 1 ) ) = *(undefined2*)( pbVar5 + ( uVar6 - 2 ) );
                  }

               }
 else {
                  *(undefined4*)( local_50 + 1 ) = *(undefined4*)pbVar5;
                  *(undefined4*)( local_50 + ( uVar6 - 3 ) ) = *(undefined4*)( pbVar5 + ( uVar6 - 4 ) );
               }

            }
 else {
               *(undefined8*)( local_50 + 1 ) = *(undefined8*)pbVar5;
               *(undefined8*)( local_50 + ( uVar6 - 7 ) ) = *(undefined8*)( pbVar5 + ( uVar6 - 8 ) );
               lVar9 = (long)pbVar14 - (long)( ( ulong )(local_50 + 9) & 0xfffffffffffffff8 );
               pbVar5 = pbVar5 + -lVar9;
               puVar13 = (undefined8*)( ( ulong )(local_50 + 9) & 0xfffffffffffffff8 );
               for (uVar7 = ( ulong )((uint)bVar8 + (int)lVar9 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar13 = *(undefined8*)pbVar5;
                  pbVar5 = pbVar5 + ( (ulong)bVar15 * -2 + 1 ) * 8;
                  puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
               }

            }

            pbVar14 = pbVar14 + uVar6;
         }

         if (( pbVar14 <= pbVar1 ) && ( 2 < (long)pbVar1 - (long)pbVar14 )) {
            pbVar5 = pbVar14 + 3;
            mbedtls_debug_print_crt(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x319, "own certificate", lVar11);
            if (lVar11 == 0) {
               bVar8 = 0;
               bVar15 = 0;
               bVar12 = 0;
               LAB_00100b78:*pbVar14 = bVar12;
               pbVar14[1] = bVar15;
               pbVar14[2] = bVar8;
               mbedtls_ssl_print_extensions(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x332, 0xb, *(undefined4*)( param_1[0xe] + 0x668 ), 0);
               iVar3 = mbedtls_ssl_add_hs_msg_to_checksum(param_1, 0xb, local_50, (long)pbVar5 - (long)pbVar2);
               if (iVar3 == 0) {
                  iVar3 = mbedtls_ssl_finish_handshake_msg(param_1, local_48, (long)pbVar5 - (long)pbVar2);
               }

               goto LAB_00100982;
            }

            __n = *(size_t*)( lVar11 + 0x10 );
            while (( pbVar5 <= pbVar1 && ( __n + 5 <= ( ulong )((long)pbVar1 - (long)pbVar5) ) )) {
               *pbVar5 = ( byte )(__n >> 0x10);
               *(ushort*)( pbVar5 + 1 ) = (ushort)__n << 8 | (ushort)__n >> 8;
               pvVar4 = memcpy(pbVar5 + 3, *(void**)( lVar11 + 0x18 ), __n);
               lVar11 = *(long*)( lVar11 + 0x2e0 );
               *(undefined2*)( (long)pvVar4 + __n ) = 0;
               pbVar5 = (byte*)( (undefined2*)( (long)pvVar4 + __n ) + 1 );
               if (lVar11 == 0) {
                  lVar9 = ( (long)pbVar5 - (long)pbVar14 ) + -3;
                  bVar8 = (char)( (long)pbVar5 - (long)pbVar14 ) - 3;
                  bVar15 = ( byte )((ulong)lVar9 >> 8);
                  bVar12 = ( byte )((ulong)lVar9 >> 0x10);
                  goto LAB_00100b78;
               }

               __n = *(size_t*)( lVar11 + 0x10 );
            }
;
         }

      }

      iVar3 = -0x6a00;
   }

   LAB_00100982:mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x34f, "<= write certificate");
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool mbedtls_ssl_tls13_check_sig_alg_cert_key_match(ushort param_1, undefined8 param_2) {
   char cVar1;
   long lVar2;
   bool bVar3;
   cVar1 = mbedtls_ssl_sig_from_pk(param_2);
   lVar2 = mbedtls_pk_get_bitlen(param_2);
   if (cVar1 != '\x01') {
      bVar3 = false;
      if (cVar1 == '\x03') {
         if (lVar2 == 0x180) {
            bVar3 = param_1 == 0x503;
         }
 else if (lVar2 == 0x209) {
            bVar3 = param_1 == 0x603;
         }
 else if (lVar2 == 0x100) {
            bVar3 = param_1 == 0x403;
         }

      }

      return bVar3;
   }

   return param_1 - 0x804 < 3;
}
int ssl_tls13_write_certificate_verify_body(long *param_1, ushort *param_2, ushort *param_3, long *param_4) {
   ushort *puVar1;
   ushort uVar2;
   ushort uVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   uint uVar7;
   int iVar8;
   long lVar9;
   ushort *puVar10;
   undefined8 uVar11;
   uint uVar12;
   ushort *puVar13;
   long in_FS_OFFSET;
   undefined8 local_188;
   undefined8 local_180;
   long local_178;
   undefined8 local_170;
   undefined1 local_168[64];
   undefined1 local_128[64];
   undefined1 local_e8[168];
   long local_40;
   lVar4 = param_1[0xe];
   lVar5 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = 0;
   local_178 = 0;
   if (( ( ( lVar4 == 0 ) || ( lVar9 = *(long*)( lVar4 + 0x408 ) ),lVar9 == 0 ) ) && ( lVar9 = lVar9 == 0 )) {
      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x398, "should never happen");
      iVar6 = -0x6c00;
   }
 else {
      iVar6 = mbedtls_ssl_get_handshake_transcript(param_1, *(undefined1*)( *(long*)( lVar4 + 0x10 ) + 0x11 ), local_168, 0x40, &local_188);
      if (iVar6 == 0) {
         mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x3a3, "handshake hash", local_168, local_188);
         lVar9 = *param_1;
         ssl_tls13_create_verify_structure(local_168, local_188, local_e8, &local_180, *(undefined1*)( lVar9 + 8 ));
         iVar6 = -0x6a00;
         if (( param_2 <= param_3 ) && ( 3 < (long)param_3 - (long)param_2 )) {
            uVar2 = *(ushort*)( lVar4 + 0x40 );
            if (uVar2 != 0) {
               puVar13 = (ushort*)( lVar4 + 0x40 );
               do {
                  puVar10 = *(ushort**)( lVar9 + 0xe8 );
                  if (puVar10 != (ushort*)0x0) {
                     uVar3 = *puVar10;
                     while (uVar3 != 0) {
                        if (uVar3 == uVar2) {
                           if (uVar2 != 0x603) {
                              if (uVar2 < 0x604) {
                                 if (( uVar2 & 0xfeff ) != 0x403) break;
                              }
 else if (2 < ( ushort )(uVar2 - 0x804)) break;
                           }

                           iVar6 = mbedtls_ssl_tls13_check_sig_alg_cert_key_match(uVar2, lVar5);
                           if (iVar6 != 0) {
                              uVar2 = *puVar13;
                              iVar6 = mbedtls_ssl_pk_alg_from_sig((char)uVar2);
                              uVar7 = mbedtls_ssl_md_alg_from_hash((char)( uVar2 >> 8 ));
                              if (( iVar6 == 0 ) || ( uVar12 = uVar7 == 0 )) {
                                 if (uVar2 == 0x805) {
                                    uVar12 = 0x200000a;
                                    uVar7 = 10;
                                    iVar6 = 6;
                                 }
 else if (uVar2 == 0x806) {
                                    uVar12 = 0x200000b;
                                    uVar7 = 0xb;
                                    iVar6 = 6;
                                 }
 else {
                                    if (uVar2 != 0x804) {
                                       iVar6 = -0x6c00;
                                       goto LAB_00100d4c;
                                    }

                                    uVar12 = 0x2000009;
                                    uVar7 = 9;
                                    iVar6 = 6;
                                 }

                              }

                              iVar8 = psa_hash_compute(uVar12, local_e8, local_180, local_128, 0x40, &local_170);
                              if (iVar8 != 0) {
                                 iVar6 = psa_status_to_mbedtls(iVar8, &psa_to_ssl_errors, 7, &psa_generic_status_to_mbedtls);
                                 goto LAB_00100d4c;
                              }

                              mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x3da, "verify hash", local_128, local_170);
                              iVar6 = mbedtls_pk_sign_ext(iVar6, lVar5, uVar7, local_128, local_170, param_2 + 2, (long)param_3 - (long)( param_2 + 2 ), &local_178, *(undefined8*)( *param_1 + 0x38 ), *(undefined8*)( *param_1 + 0x40 ));
                              if (iVar6 == 0) {
                                 uVar11 = mbedtls_ssl_sig_alg_to_str(*puVar13);
                                 mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x3ec, "CertificateVerify signature with %s", uVar11);
                                 uVar2 = *puVar13;
                                 if (uVar2 == 0) goto LAB_0010112a;
                                 *param_2 = uVar2 << 8 | uVar2 >> 8;
                                 param_2[1] = (ushort)local_178 << 8 | (ushort)local_178 >> 8;
                                 *param_4 = local_178 + 4;
                                 iVar6 = 0;
                                 goto LAB_00100d4c;
                              }

                              uVar11 = mbedtls_ssl_sig_alg_to_str(*puVar13);
                              mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x3e0, "CertificateVerify signature failed with %s", uVar11);
                              mbedtls_debug_print_ret(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x3e2, "mbedtls_pk_sign_ext", iVar6);
                           }

                           break;
                        }

                        puVar1 = puVar10 + 1;
                        puVar10 = puVar10 + 1;
                        uVar3 = *puVar1;
                     }
;
                  }

                  uVar2 = puVar13[1];
                  puVar13 = puVar13 + 1;
                  if (uVar2 == 0) break;
                  lVar9 = *param_1;
               }
 while ( true );
            }

            LAB_0010112a:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x3f3, "no suitable signature algorithm");
            mbedtls_ssl_pend_fatal_alert(param_1, 0x28, 0xffff9200);
            iVar6 = -0x6e00;
         }

      }

   }

   LAB_00100d4c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ssl_tls13_write_certificate_verify(undefined8 param_1) {
   int iVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x407, "=> write certificate verify");
   iVar1 = mbedtls_ssl_start_handshake_msg(param_1, 0xf, &local_48, &local_40);
   if (iVar1 == 0) {
      iVar1 = ssl_tls13_write_certificate_verify_body(param_1, local_48, local_40 + local_48, &local_38);
      if (iVar1 == 0) {
         iVar1 = mbedtls_ssl_add_hs_msg_to_checksum(param_1, 0xf, local_48, local_38);
         if (iVar1 == 0) {
            iVar1 = mbedtls_ssl_finish_handshake_msg(param_1, local_40, local_38);
         }

      }

   }

   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x419, "<= write certificate verify");
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ssl_tls13_process_finished_message(long *param_1) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x46b, "=> parse finished message");
   iVar2 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1, 0x14, &local_40, &local_38);
   if (iVar2 == 0) {
      iVar2 = mbedtls_ssl_tls13_calculate_verify_data(param_1, param_1[0xe] + 0x559, 0x40, param_1[0xe] + 0x5a0, *(char*)( *param_1 + 8 ) == '\0');
      if (iVar2 == 0) {
         if (local_38 == *(long*)( param_1[0xe] + 0x5a0 )) {
            lVar1 = param_1[0xe] + 0x559;
            mbedtls_debug_print_buf(param_1, 4, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x452, "verify_data (self-computed):", lVar1, local_38);
            mbedtls_debug_print_buf(param_1, 4, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x455, "verify_data (received message):", local_40, local_38);
            iVar2 = mbedtls_ct_memcmp(local_40, lVar1, local_38);
            if (iVar2 == 0) {
               iVar2 = mbedtls_ssl_add_hs_msg_to_checksum(param_1, 0x14, local_40, local_38);
            }
 else {
               iVar2 = -0x6e00;
               mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x45c, "bad finished message");
               mbedtls_ssl_pend_fatal_alert(param_1, 0x33, 0xffff9200);
            }

         }
 else {
            iVar2 = -0x7300;
            mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 1099, "bad finished message");
            mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
         }

      }
 else {
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x434, "mbedtls_ssl_tls13_calculate_verify_data", iVar2);
      }

   }

   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x47b, "<= parse finished message");
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ssl_tls13_write_finished_message(long *param_1) {
   ulong __n;
   int iVar1;
   long in_FS_OFFSET;
   void *local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x4b9, "=> write finished message");
   iVar1 = mbedtls_ssl_tls13_calculate_verify_data(param_1, param_1[0xe] + 0x559, 0x40, param_1[0xe] + 0x5a0, *(undefined1*)( *param_1 + 8 ));
   if (iVar1 == 0) {
      iVar1 = mbedtls_ssl_start_handshake_msg(param_1, 0x14, &local_40, &local_38);
      if (iVar1 == 0) {
         __n = *(ulong*)( param_1[0xe] + 0x5a0 );
         if (( CARRY8((ulong)local_40, local_38) ) || ( local_38 < __n )) {
            iVar1 = -0x6a00;
         }
 else {
            memcpy(local_40, (void*)( param_1[0xe] + 0x559 ), __n);
            iVar1 = mbedtls_ssl_add_hs_msg_to_checksum(param_1, 0x14, local_40, __n);
            if (iVar1 == 0) {
               iVar1 = mbedtls_ssl_finish_handshake_msg(param_1, local_38, __n);
            }

         }

      }

   }
 else {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x496, "calculate_verify_data failed", iVar1);
   }

   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x4ca, "<= write finished message");
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void mbedtls_ssl_tls13_handshake_wrapup(long param_1) {
   undefined8 uVar1;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x4d1, "=> handshake wrapup");
   mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x4d3, "Switch to application keys for inbound traffic");
   mbedtls_ssl_set_inbound_transform(param_1, *(undefined8*)( param_1 + 0x98 ));
   mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x4d6, "Switch to application keys for outbound traffic");
   mbedtls_ssl_set_outbound_transform(param_1, *(undefined8*)( param_1 + 0x98 ));
   if (*(long*)( param_1 + 0x60 ) != 0) {
      mbedtls_ssl_session_free();
      free(*(void**)( param_1 + 0x60 ));
   }

   uVar1 = *(undefined8*)( param_1 + 0x68 );
   *(undefined8*)( param_1 + 0x68 ) = 0;
   *(undefined8*)( param_1 + 0x60 ) = uVar1;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x4e3, "<= handshake wrapup");
   return;
}
int mbedtls_ssl_tls13_write_change_cipher_spec(long param_1) {
   int iVar1;
   iVar1 = 0;
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x4ff, "=> write change cipher spec");
   if (*(char*)( *(long*)( param_1 + 0x70 ) + 0x3a ) == '\0') {
      **(undefined1**)( param_1 + 0x180 ) = 1;
      *(undefined8*)( param_1 + 400 ) = 1;
      *(undefined4*)( param_1 + 0x188 ) = 0x14;
      iVar1 = mbedtls_ssl_write_record(param_1, 0);
      if (iVar1 == 0) {
         *(undefined1*)( *(long*)( param_1 + 0x70 ) + 0x3a ) = 1;
      }

   }

   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x516, "<= write change cipher spec");
   return iVar1;
}
int mbedtls_ssl_reset_transcript_for_hrr(long param_1) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   long local_80;
   undefined2 local_78;
   undefined1 local_76;
   undefined1 local_75;
   undefined1 local_74[68];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( *(long*)( param_1 + 0x70 ) + 0x10 );
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x593, "Reset SSL session for HRR");
   iVar2 = mbedtls_ssl_get_handshake_transcript(param_1, *(undefined1*)( lVar1 + 0x11 ), local_74, 0x40, &local_80);
   if (iVar2 == 0) {
      local_76 = 0;
      local_78 = 0xfe;
      local_75 = (undefined1)local_80;
      local_80 = local_80 + 4;
      mbedtls_debug_print_buf(param_1, 4, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x5a5, "Truncated handshake transcript", &local_78, local_80);
      iVar2 = mbedtls_ssl_reset_checksum(param_1);
      if (iVar2 == 0) {
         iVar2 = ( **(code**)( *(long*)( param_1 + 0x70 ) + 0x18 ) )(param_1, &local_78, local_80, 0x1017f4);
         if (iVar2 != 0) {
            mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x5b0, "update_checksum", iVar2);
         }

      }
 else {
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x5ab, "mbedtls_ssl_reset_checksum", iVar2);
      }

   }
 else {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x59a, "mbedtls_ssl_get_handshake_transcript", iVar2);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ssl_tls13_read_public_xxdhe_share(long param_1, ushort *param_2, ulong param_3) {
   long lVar1;
   undefined8 uVar2;
   ushort uVar3;
   ulong __n;
   lVar1 = *(long*)( param_1 + 0x70 );
   if (( CARRY8((ulong)param_2, param_3) ) || ( param_3 < 2 )) {
      uVar2 = 0x5c2;
   }
 else {
      if (param_2 + 1 <= (ushort*)( (long)param_2 + param_3 )) {
         uVar3 = *param_2 << 8 | *param_2 >> 8;
         __n = (ulong)uVar3;
         if (__n <= param_3 - 2) {
            if (uVar3 < 0x211) {
               memcpy((void*)( lVar1 + 0x1cd ), param_2 + 1, __n);
               *(ulong*)( lVar1 + 0x3e0 ) = __n;
               return 0;
            }

            mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x5cb, "Invalid public key length: %u > %zu", uVar3, 0x210, (ushort*)( (long)param_2 + param_3 ));
            return 0xffff9200;
         }

      }

      uVar2 = 0x5c7;
   }

   mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", uVar2, "missing input data in %s", "mbedtls_ssl_tls13_read_public_xxdhe_share");
   mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
   return 0xffff8d00;
}
undefined4 mbedtls_ssl_tls13_generate_and_write_xxdh_key_exchange(long param_1, undefined2 param_2, long param_3, long param_4, undefined8 *param_5) {
   long lVar1;
   long lVar2;
   int iVar3;
   undefined4 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   short local_6a;
   undefined8 local_68;
   long local_60;
   short local_58;
   undefined2 local_56;
   undefined8 local_54;
   uint local_4c;
   undefined8 local_48;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x70 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6a = 0;
   local_60 = 0;
   mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x610, "Perform PSA-based ECDH/FFDH computation.");
   iVar3 = mbedtls_ssl_get_psa_curve_info_from_tls_id(param_2, &local_6a, &local_60);
   if (local_6a == 0) {
      uVar4 = 0xffff9200;
   }
 else if (( ulong )(param_4 - param_3) < local_60 + 7U >> 3) {
      uVar4 = 0xffff9600;
   }
 else {
      lVar2 = *(long*)( param_1 + 0x70 );
      *(short*)( lVar1 + 0x1b8 ) = local_6a;
      *(long*)( lVar2 + 0x1c0 ) = local_60;
      uVar5 = *(ulong*)( lVar1 + 0x1c0 );
      local_58 = local_6a;
      local_54 = _LC49;
      local_48 = 0;
      if (0xfff8 < uVar5) {
         uVar5 = 0xffff;
      }

      local_56 = (undefined2)uVar5;
      local_4c = -(uint)(iVar3 == 0) & 0x9020000;
      iVar3 = psa_generate_key(&local_58, lVar1 + 0x1c8);
      if (iVar3 == 0) {
         iVar3 = psa_export_public_key(*(undefined4*)( lVar1 + 0x1c8 ), param_3, param_4 - param_3, &local_68);
         if (iVar3 == 0) {
            *param_5 = local_68;
            uVar4 = 0;
         }
 else {
            uVar4 = psa_status_to_mbedtls(iVar3, &psa_to_ssl_errors, 7, &psa_generic_status_to_mbedtls);
            mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x642, "psa_export_public_key", uVar4);
         }

      }
 else {
         uVar4 = psa_status_to_mbedtls(iVar3, &psa_to_ssl_errors, 7, &psa_generic_status_to_mbedtls);
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x636, "psa_generate_key", uVar4);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ssl_tls13_check_received_extension(long param_1, int param_2, undefined4 param_3, uint param_4) {
   uint *puVar1;
   long lVar2;
   uint uVar3;
   undefined8 uVar4;
   uVar3 = mbedtls_ssl_get_extension_mask(param_3);
   mbedtls_ssl_print_extension(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x65c, param_2, param_3, "received", 0);
   if (( uVar3 & param_4 ) == 0) {
      mbedtls_ssl_print_extension(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x660, param_2, param_3, "is illegal", 0);
      mbedtls_ssl_pend_fatal_alert(param_1, 0x2f, 0xffff9a00);
      uVar4 = 0xffff9a00;
   }
 else {
      lVar2 = *(long*)( param_1 + 0x70 );
      uVar4 = 0;
      puVar1 = (uint*)( lVar2 + 0x66c );
      *puVar1 = *puVar1 | uVar3;
      if (( ( param_2 + 2U < 0xe ) && ( ( 0x2411UL >> ( ( ulong )(param_2 + 2U) & 0x3f ) & 1 ) != 0 ) ) && ( ( uVar3 & *(uint*)( lVar2 + 0x668 ) ) == 0 )) {
         mbedtls_ssl_print_extension(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x67b, param_2, param_3, "is unsupported", 0);
         mbedtls_ssl_pend_fatal_alert(param_1, 0x6e, 0xffff8b00);
         uVar4 = 0xffff8b00;
      }

   }

   return uVar4;
}
ulong mbedtls_ssl_tls13_process_certificate(long *param_1) {
   ushort *puVar1;
   char cVar2;
   uint uVar3;
   int iVar4;
   void *pvVar5;
   ulong uVar6;
   undefined8 uVar7;
   long lVar8;
   ushort *puVar9;
   ulong uVar10;
   long lVar11;
   char *pcVar12;
   ushort uVar13;
   ushort *puVar14;
   long in_FS_OFFSET;
   ushort *local_88;
   char *local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x2c3, "=> parse certificate");
   uVar3 = mbedtls_ssl_tls13_fetch_handshake_msg(param_1, 0xb, &local_50, &local_48);
   uVar10 = (ulong)uVar3;
   if (uVar3 != 0) goto LAB_00101da2;
   lVar8 = param_1[0xe];
   if (( CARRY8((ulong)local_50, local_48) ) || ( (long)local_48 < 4 )) {
      uVar7 = 0x1cd;
      goto LAB_00101f4b;
   }

   local_88 = (ushort*)( local_50 + 4 );
   uVar3 = (uint)(byte)local_50[1] << 0x10 | (uint)(byte)local_50[2] << 8 | (uint)(byte)local_50[3];
   uVar6 = (ulong)uVar3;
   if (( *local_50 == '\0' ) && ( uVar6 < 0x10000 )) {
      lVar11 = param_1[0xd];
      if (*(long*)( lVar11 + 0x70 ) != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( param_1[0xd] + 0x70 ));
         lVar11 = param_1[0xd];
      }

      if (uVar3 == 0) {
         *(undefined8*)( lVar11 + 0x70 ) = 0;
         LAB_00101e96:pcVar12 = "bad Certificate message";
         uVar7 = 0x25f;
         if ((ushort*)( local_50 + local_48 ) != local_88) goto LAB_001021c4;
         mbedtls_debug_print_crt(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x265, "peer certificate", *(undefined8*)( param_1[0xd] + 0x70 ));
         if ((int)uVar10 != 0) goto LAB_00101da2;
         cVar2 = *(char*)( param_1[0xe] + 2 );
         if (cVar2 == '\x03') {
            cVar2 = *(char*)( *param_1 + 10 );
         }

         lVar8 = *(long*)( param_1[0xd] + 0x70 );
         if (lVar8 == 0) {
            mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x290, "peer has no certificate");
            if (*(char*)( *param_1 + 8 ) != '\x01') {
               if (*(char*)( *param_1 + 8 ) == '\0') {
                  uVar10 = 0xffff8880;
                  mbedtls_ssl_pend_fatal_alert(param_1, 0x29, 0xffff8880);
                  goto LAB_00101da2;
               }

               lVar8 = *(long*)( param_1[0xd] + 0x70 );
               goto LAB_00101f02;
            }

            *(undefined4*)( param_1[0xd] + 0x78 ) = 0x40;
            if (cVar2 != '\x01') {
               uVar10 = 0xffff8b80;
               mbedtls_ssl_pend_fatal_alert(param_1, 0x29, 0xffff8b80);
               goto LAB_00101da2;
            }

         }
 else {
            LAB_00101f02:uVar3 = mbedtls_ssl_verify_certificate(param_1, cVar2, lVar8, 0, 0);
            uVar10 = (ulong)uVar3;
            if (uVar3 != 0) goto LAB_00101da2;
         }

         uVar3 = mbedtls_ssl_add_hs_msg_to_checksum(param_1, 0xb, local_50, local_48);
         uVar10 = (ulong)uVar3;
         goto LAB_00101da2;
      }

      pvVar5 = calloc(1, 0x2e8);
      *(void**)( lVar11 + 0x70 ) = pvVar5;
      if (pvVar5 == (void*)0x0) {
         uVar10 = 0xffff8100;
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x1ec, "alloc( %zu bytes ) failed", 0x2e8);
         mbedtls_ssl_pend_fatal_alert(param_1, 0x50, 0xffff8100);
         goto LAB_00101da2;
      }

      mbedtls_x509_crt_init(pvVar5);
      if (( local_50 + local_48 < local_88 ) || ( local_48 - 4 < uVar6 )) {
         uVar7 = 0x1f5;
      }
 else {
         puVar9 = (ushort*)( uVar6 + (long)local_88 );
         if (puVar9 <= local_88) {
            uVar10 = 0xffffff92;
            goto LAB_00101e96;
         }

         if (2 < uVar3) {
            do {
               puVar14 = (ushort*)( (long)local_88 + 3 );
               uVar10 = ( ulong )(( uint )(byte) * local_88 << 0x10 | ( uint ) * (byte*)( (long)local_88 + 1 ) << 8 | (uint)(byte)local_88[1]);
               if (0xff7f < uVar10 - 0x80) {
                  pcVar12 = "bad Certificate message";
                  uVar7 = 0x205;
                  goto LAB_001021c4;
               }

               if (( puVar9 < puVar14 ) || ( ( ulong )((long)puVar9 - (long)puVar14) < uVar10 )) {
                  uVar7 = 0x20b;
                  goto LAB_00101f4b;
               }

               uVar6 = mbedtls_x509_crt_parse_der(*(undefined8*)( param_1[0xd] + 0x70 ), puVar14);
               iVar4 = (int)uVar6;
               if (iVar4 == -0x2580) {
                  uVar10 = uVar6 & 0xffffffff;
                  mbedtls_ssl_pend_fatal_alert(param_1, 0x2b, 0xffffda80);
                  mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x220, " mbedtls_x509_crt_parse_der", 0xffffda80);
                  goto LAB_00101da2;
               }

               if (iVar4 < -0x257f) {
                  if (iVar4 == -0x2880) {
                     uVar10 = uVar6 & 0xffffffff;
                     mbedtls_ssl_pend_fatal_alert(param_1, 0x50, 0xffffd780);
                     mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x21a, " mbedtls_x509_crt_parse_der", 0xffffd780);
                     goto LAB_00101da2;
                  }

                  if (iVar4 != -0x262e) goto LAB_00102166;
               }
 else if (iVar4 != 0) {
                  LAB_00102166:uVar10 = uVar6 & 0xffffffff;
                  mbedtls_ssl_pend_fatal_alert(param_1, 0x2a, uVar6 & 0xffffffff);
                  mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x226, " mbedtls_x509_crt_parse_der", uVar6 & 0xffffffff);
                  goto LAB_00101da2;
               }

               puVar14 = (ushort*)( (long)puVar14 + uVar10 );
               if (( puVar9 < puVar14 ) || ( (long)puVar9 - (long)puVar14 < 2 )) {
                  uVar7 = 0x22d;
                  goto LAB_00101f4b;
               }

               local_88 = puVar14 + 1;
               if (( puVar9 < local_88 ) || ( uVar10 = ( ulong )(ushort)(*puVar14 << 8 | *puVar14 >> 8)(ulong)((long)puVar9 - (long)local_88) < uVar10 )) {
                  uVar7 = 0x230;
                  goto LAB_00101f4b;
               }

               puVar14 = (ushort*)( (long)local_88 + uVar10 );
               *(undefined4*)( lVar8 + 0x66c ) = 0;
               while (local_88 < puVar14) {
                  if ((long)puVar14 - (long)local_88 < 4) {
                     uVar7 = 0x23f;
                     goto LAB_00101f4b;
                  }

                  puVar1 = local_88 + 2;
                  if (( puVar14 < puVar1 ) || ( uVar10 = ( ulong )(ushort)(local_88[1] << 8 | local_88[1] >> 8)(ulong)((long)puVar14 - (long)puVar1) < uVar10 )) {
                     uVar7 = 0x244;
                     goto LAB_00101f4b;
                  }

                  uVar13 = *local_88 << 8 | *local_88 >> 8;
                  uVar3 = mbedtls_ssl_tls13_check_received_extension(param_1, 0xb, uVar13, 0x208);
                  if (uVar3 != 0) {
                     uVar10 = (ulong)uVar3;
                     goto LAB_00101da2;
                  }

                  mbedtls_ssl_print_extension(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x24f, 0xb, uVar13, "( ignored )", 0);
                  uVar6 = 0;
                  local_88 = (ushort*)( (long)puVar1 + uVar10 );
               }
;
               mbedtls_ssl_print_extensions(param_1, 3, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 600, 0xb, *(undefined4*)( lVar8 + 0x66c ), 0, uVar6);
               if (puVar9 <= local_88) {
                  uVar10 = uVar6 & 0xffffffff;
                  goto LAB_00101e96;
               }

            }
 while ( 2 < (long)puVar9 - (long)local_88 );
         }

         uVar7 = 0x1fb;
      }

      LAB_00101f4b:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", uVar7, "missing input data in %s", "mbedtls_ssl_tls13_parse_certificate");
      mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
   }
 else {
      pcVar12 = "bad certificate message";
      uVar7 = 0x1d7;
      LAB_001021c4:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls13_generic.c", uVar7, pcVar12);
      mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
   }

   uVar10 = 0xffff8d00;
   LAB_00101da2:mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls13_generic.c", 0x2db, "<= parse certificate");
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}


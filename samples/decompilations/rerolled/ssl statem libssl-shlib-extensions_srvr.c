void check_overlap(undefined8 param_1, long param_2, ulong param_3, long param_4, ulong param_5, undefined4 *param_6, uint *param_7, undefined2 *param_8) {
   undefined2 *puVar1;
   undefined2 uVar2;
   int iVar3;
   ulong uVar4;
   ushort uVar5;
   long in_FS_OFFSET;
   ulong local_68;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = 0;
   local_48 = 0;
   *param_7 = 0;
   *param_6 = 0;
   *param_8 = 0;
   if (param_5 != 0) {
      uVar5 = 0;
      local_68 = param_3;
      do {
         puVar1 = (undefined2*)( param_4 + uVar4 * 2 );
         iVar3 = check_in_list(param_1, *puVar1, param_2, param_3, 1, &local_48);
         if (iVar3 != 0) {
            iVar3 = tls_group_allowed(param_1, *puVar1, 0x20004);
            if (iVar3 != 0) {
               iVar3 = tls_valid_group(param_1, *puVar1, 0x304, 0x304, 0, 0);
               if (( iVar3 != 0 ) && ( local_48 < local_68 )) {
                  local_68 = local_48;
                  *param_7 = (uint)uVar5;
                  uVar2 = *(undefined2*)( param_2 + local_48 * 2 );
                  *param_6 = (int)local_48;
                  *param_8 = uVar2;
               }
            }
         }
         uVar5 = uVar5 + 1;
         uVar4 = (ulong)uVar5;
      } while ( uVar4 < param_5 );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_accept_ksgroup(long param_1, ushort param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   *(ushort*)( param_1 + 0x4de ) = param_2;
   *(ushort*)( param_1 + 0x4e8 ) = param_2;
   *(uint*)( *(long*)( param_1 + 0x900 ) + 0x308 ) = (uint)param_2;
   lVar2 = ssl_generate_param_group();
   *(long*)( param_1 + 0x4e0 ) = lVar2;
   if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x279, "tls_accept_ksgroup");
      ossl_statem_fatal(param_1, 0x50, 0x13a, 0);
   } else {
      iVar1 = tls13_set_encoded_pub_key(lVar2, *param_3, param_3[1]);
      if (0 < iVar1) {
         return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x281, "tls_accept_ksgroup");
      ossl_statem_fatal(param_1, 0x2f, 0x132, 0);
   }
   return 0;
}undefined8 tls_parse_ctos_renegotiate(long param_1, long *param_2) {
   int iVar1;
   ulong uVar2;
   ulong __n;
   undefined8 uVar3;
   byte *__s1;
   if (param_2[1] != 0) {
      uVar2 = param_2[1] - 1;
      __n = ( ulong ) * (byte*)*param_2;
      __s1 = (byte*)*param_2 + 1;
      param_2[1] = uVar2;
      *param_2 = (long)__s1;
      if (__n <= uVar2) {
         *param_2 = (long)( __s1 + __n );
         param_2[1] = uVar2 - __n;
         if (__n == *(ulong*)( param_1 + 0x460 )) {
            iVar1 = memcmp(__s1, (void*)( param_1 + 0x420 ), __n);
            if (iVar1 == 0) {
               *(undefined4*)( param_1 + 0x4b0 ) = 1;
               return 1;
            }
            ERR_new();
            uVar3 = 0x49;
         } else {
            ERR_new();
            uVar3 = 0x3b;
         }
         ERR_set_debug("ssl/statem/extensions_srvr.c", uVar3, "tls_parse_ctos_renegotiate");
         ossl_statem_fatal(param_1, 0x28, 0x151, 0);
         return 0;
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x35, "tls_parse_ctos_renegotiate");
   ossl_statem_fatal(param_1, 0x32, 0x150, 0);
   return 0;
}undefined8 tls_parse_ctos_server_name(long param_1, long *param_2) {
   void *__s;
   ulong uVar1;
   ushort *puVar2;
   char *__s_00;
   int iVar3;
   size_t sVar4;
   void *pvVar5;
   long lVar6;
   ushort uVar7;
   undefined8 uVar8;
   ulong __n;
   uint uVar9;
   uVar1 = param_2[1];
   puVar2 = (ushort*)*param_2;
   if (( 1 < uVar1 ) && ( uVar7 = *puVar2 ),uVar1 - 2 == ( ulong )(ushort)(uVar7 << 8 | uVar7 >> 8)) {
      param_2[1] = 0;
      *param_2 = (long)puVar2 + uVar1;
      if (uVar7 != 0) {
         if (( (char)puVar2[1] == '\0' ) && ( 1 < uVar1 - 3 )) {
            uVar7 = *(ushort*)( (long)puVar2 + 3 ) << 8 | *(ushort*)( (long)puVar2 + 3 ) >> 8;
            __n = (ulong)uVar7;
            if (uVar1 - 5 == __n) {
               __s = (void*)( (long)puVar2 + 5 );
               if (( *(int*)( param_1 + 0x508 ) != 0 ) && ( ( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0 || ( iVar3 = **(int**)( param_1 + 0x18 ) ),iVar3 < 0x304 ) ) || ( iVar3 == 0x10000 ) )) {
                  uVar9 = 0;
                  __s_00 = *(char**)( *(long*)( param_1 + 0x900 ) + 800 );
                  if (( __s_00 != (char*)0x0 ) && ( sVar4 = sVar4 == __n )) {
                     iVar3 = CRYPTO_memcmp(__s, __s_00, __n);
                     uVar9 = ( uint )(iVar3 == 0);
                  }
                  *(uint*)( param_1 + 0xb60 ) = uVar9;
                  return 1;
               }
               if (uVar7 < 0x100) {
                  pvVar5 = memchr(__s, 0, __n);
                  if (pvVar5 == (void*)0x0) {
                     CRYPTO_free(*(void**)( param_1 + 0xa20 ));
                     *(undefined8*)( param_1 + 0xa20 ) = 0;
                     CRYPTO_free((void*)0x0);
                     lVar6 = CRYPTO_strndup(__s, __n, "include/internal/packet.h", 0x1e6);
                     *(long*)( param_1 + 0xa20 ) = lVar6;
                     if (lVar6 == 0) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/extensions_srvr.c", 0x9e, "tls_parse_ctos_server_name");
                        ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                        return 0;
                     }
                     *(undefined4*)( param_1 + 0xb60 ) = 1;
                     return 1;
                  }
                  ERR_new();
                  uVar8 = 0x93;
               } else {
                  ERR_new();
                  uVar8 = 0x8e;
               }
               ERR_set_debug("ssl/statem/extensions_srvr.c", uVar8, "tls_parse_ctos_server_name");
               ossl_statem_fatal(param_1, 0x70, 0x6e, 0);
               return 0;
            }
         }
         ERR_new();
         uVar8 = 0x84;
         goto LAB_00100392;
      }
   }
   ERR_new();
   uVar8 = 0x72;
   LAB_00100392:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar8, "tls_parse_ctos_server_name");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}undefined8 tls_parse_ctos_maxfragmentlen(long param_1, undefined8 *param_2) {
   byte bVar1;
   if (param_2[1] == 1) {
      bVar1 = *(byte*)*param_2;
      param_2[1] = 0;
      *param_2 = (byte*)*param_2 + 1;
      if (bVar1 - 1 < 4) {
         if (*(char*)( *(long*)( param_1 + 0x900 ) + 0x358 ) == -1) {
            *(byte*)( *(long*)( param_1 + 0x900 ) + 0x358 ) = bVar1;
         }
         return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0xbe, "tls_parse_ctos_maxfragmentlen");
      ossl_statem_fatal(param_1, 0x2f, 0xe8, 0);
   } else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0xb8, "tls_parse_ctos_maxfragmentlen");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   }
   return 0;
}undefined8 tls_parse_ctos_srp(long param_1, undefined8 *param_2) {
   size_t __n;
   byte *__s;
   void *pvVar1;
   long lVar2;
   if (( param_2[1] != 0 ) && ( __n = param_2[1] - 1 ),__n == *(byte*)*param_2) {
      __s = (byte*)*param_2 + 1;
      param_2[1] = 0;
      *param_2 = __s + __n;
      pvVar1 = memchr(__s, 0, __n);
      if (pvVar1 == (void*)0x0) {
         CRYPTO_free(*(void**)( param_1 + 0xbf0 ));
         lVar2 = CRYPTO_strndup(__s, __n, "include/internal/packet.h", 0x1e6);
         *(long*)( param_1 + 0xbf0 ) = lVar2;
         if (lVar2 != 0) {
            return 1;
         }
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0xe8, "tls_parse_ctos_srp");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0xe3, "tls_parse_ctos_srp");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}undefined8 tls_parse_ctos_ec_pt_formats(long param_1, long *param_2) {
   ulong uVar1;
   byte *pbVar2;
   long lVar3;
   if (( param_2[1] != 0 ) && ( uVar1 = param_2[1] - 1 ),uVar1 == *(byte*)*param_2) {
      pbVar2 = (byte*)*param_2 + 1;
      param_2[1] = 0;
      *param_2 = (long)( pbVar2 + uVar1 );
      if (uVar1 != 0) {
         if (*(int*)( param_1 + 0x508 ) == 0) {
            CRYPTO_free(*(void**)( param_1 + 0xa80 ));
            *(undefined8*)( param_1 + 0xa80 ) = 0;
            *(undefined8*)( param_1 + 0xa78 ) = 0;
            lVar3 = CRYPTO_memdup(pbVar2, uVar1, "include/internal/packet.h", 0x1cf);
            *(long*)( param_1 + 0xa80 ) = lVar3;
            if (lVar3 == 0) {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_srvr.c", 0x100, "tls_parse_ctos_ec_pt_formats");
               ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
               return 0;
            }
            *(ulong*)( param_1 + 0xa78 ) = uVar1;
         }
         return 1;
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0xf8, "tls_parse_ctos_ec_pt_formats");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}undefined4 tls_parse_ctos_session_ticket(long param_1, undefined8 *param_2) {
   int iVar1;
   if (*(code**)( param_1 + 0xad0 ) != (code*)0x0) {
      iVar1 = ( **(code**)( param_1 + 0xad0 ) )(*(undefined8*)( param_1 + 0x40 ), *param_2, *(undefined4*)( param_2 + 1 ), *(undefined8*)( param_1 + 0xad8 ));
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x110, "tls_parse_ctos_session_ticket");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }
   }
   return 1;
}undefined8 tls_parse_ctos_sig_algs_cert(long param_1, long *param_2) {
   ushort uVar1;
   int iVar2;
   ulong uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   ushort *local_28;
   ulong local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_2[1] < 2) {
      LAB_0010099e:ERR_new();
      uVar4 = 0x120;
   } else {
      uVar1 = *(ushort*)*param_2;
      uVar3 = param_2[1] - 2;
      if (uVar3 != ( ushort )(uVar1 << 8 | uVar1 >> 8)) goto LAB_0010099e;
      local_28 = (ushort*)*param_2 + 1;
      param_2[1] = 0;
      *param_2 = (long)local_28 + uVar3;
      local_20 = uVar3;
      if (uVar1 == 0) goto LAB_0010099e;
      if (( *(int*)( param_1 + 0x78 ) != 0 ) && ( *(int*)( param_1 + 0x508 ) != 0 )) {
         LAB_00100a36:uVar4 = 1;
         goto LAB_001009d3;
      }
      iVar2 = tls1_save_sigalgs(param_1, &local_28, 1);
      if (iVar2 != 0) goto LAB_00100a36;
      ERR_new();
      uVar4 = 299;
   }
   ERR_set_debug("ssl/statem/extensions_srvr.c", uVar4, "tls_parse_ctos_sig_algs_cert");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   uVar4 = 0;
   LAB_001009d3:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_parse_ctos_sig_algs(long param_1, long *param_2) {
   ushort uVar1;
   int iVar2;
   ulong uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   ushort *local_28;
   ulong local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_2[1] < 2) {
      LAB_00100a9e:ERR_new();
      uVar4 = 0x139;
   } else {
      uVar1 = *(ushort*)*param_2;
      uVar3 = param_2[1] - 2;
      if (uVar3 != ( ushort )(uVar1 << 8 | uVar1 >> 8)) goto LAB_00100a9e;
      local_28 = (ushort*)*param_2 + 1;
      param_2[1] = 0;
      *param_2 = (long)local_28 + uVar3;
      local_20 = uVar3;
      if (uVar1 == 0) goto LAB_00100a9e;
      if (( *(int*)( param_1 + 0x78 ) != 0 ) && ( *(int*)( param_1 + 0x508 ) != 0 )) {
         LAB_00100b33:uVar4 = 1;
         goto LAB_00100ad3;
      }
      iVar2 = tls1_save_sigalgs(param_1, &local_28, 0);
      if (iVar2 != 0) goto LAB_00100b33;
      ERR_new();
      uVar4 = 0x144;
   }
   ERR_set_debug("ssl/statem/extensions_srvr.c", uVar4, "tls_parse_ctos_sig_algs");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   uVar4 = 0;
   LAB_00100ad3:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_parse_ctos_status_request(long param_1, long *param_2, undefined8 param_3, long param_4) {
   byte bVar1;
   byte *pbVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   OCSP_RESPID *a;
   ushort *puVar6;
   X509_EXTENSIONS *pXVar7;
   ushort uVar8;
   ulong len;
   ulong uVar9;
   ushort *puVar10;
   long in_FS_OFFSET;
   ushort *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(int*)( param_1 + 0x508 ) == 0 ) && ( param_4 == 0 )) {
      lVar5 = param_2[1];
      if (lVar5 == 0) {
         ERR_new();
         uVar4 = 0x15b;
      } else {
         pbVar2 = (byte*)*param_2;
         bVar1 = *pbVar2;
         *(uint*)( param_1 + 0xa28 ) = (uint)bVar1;
         *param_2 = (long)( pbVar2 + 1 );
         param_2[1] = lVar5 - 1U;
         if (bVar1 != 1) {
            *(undefined4*)( param_1 + 0xa28 ) = 0xffffffff;
            goto LAB_00100b93;
         }
         if (1 < lVar5 - 1U) {
            uVar8 = *(ushort*)( pbVar2 + 1 ) << 8 | *(ushort*)( pbVar2 + 1 ) >> 8;
            uVar9 = (ulong)uVar8;
            if (uVar9 <= lVar5 - 3U) {
               puVar10 = (ushort*)( pbVar2 + 3 );
               uVar4 = *(undefined8*)( param_1 + 0xa40 );
               param_2[1] = ( lVar5 - 3U ) - uVar9;
               *param_2 = (long)( (long)puVar10 + uVar9 );
               OPENSSL_sk_pop_free(uVar4, OCSP_RESPID_free);
               if (uVar8 == 0) {
                  *(undefined8*)( param_1 + 0xa40 ) = 0;
                  LAB_00100c9d:if (1 < (ulong)param_2[1]) {
                     uVar8 = *(ushort*)*param_2;
                     uVar9 = param_2[1] - 2;
                     if (uVar9 == ( ushort )(uVar8 << 8 | uVar8 >> 8)) {
                        puVar6 = (ushort*)*param_2 + 1;
                        puVar10 = (ushort*)( (long)puVar6 + uVar9 );
                        param_2[1] = 0;
                        *param_2 = (long)puVar10;
                        if (uVar8 != 0) {
                           local_48 = puVar6;
                           OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0xa48 ), &X509_EXTENSION_free);
                           pXVar7 = d2i_X509_EXTENSIONS((X509_EXTENSIONS**)0x0, (uchar**)&local_48, uVar9);
                           *(X509_EXTENSIONS**)( param_1 + 0xa48 ) = pXVar7;
                           if (( pXVar7 == (X509_EXTENSIONS*)0x0 ) || ( local_48 != puVar10 )) {
                              ERR_new();
                              uVar4 = 0x1ab;
                              goto LAB_00100c11;
                           }
                        }
                        goto LAB_00100b93;
                     }
                  }
                  ERR_new();
                  uVar4 = 0x19f;
               } else {
                  lVar5 = OPENSSL_sk_new_null();
                  *(long*)( param_1 + 0xa40 ) = lVar5;
                  if (lVar5 == 0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/extensions_srvr.c", 0x174, "tls_parse_ctos_status_request");
                     ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
                     uVar4 = 0;
                     goto LAB_00100b98;
                  }
                  if (uVar8 != 1) {
                     do {
                        uVar8 = *puVar10;
                        len = ( ulong )(ushort)(uVar8 << 8 | uVar8 >> 8);
                        if (uVar9 - 2 < len) break;
                        puVar6 = puVar10 + 1;
                        uVar9 = ( uVar9 - 2 ) - len;
                        puVar10 = (ushort*)( (long)puVar6 + len );
                        if (uVar8 == 0) break;
                        local_48 = puVar6;
                        a = d2i_OCSP_RESPID((OCSP_RESPID**)0x0, (uchar**)&local_48, len);
                        if (a == (OCSP_RESPID*)0x0) {
                           ERR_new();
                           uVar4 = 0x18a;
                           goto LAB_00100c11;
                        }
                        if (local_48 != puVar10) {
                           OCSP_RESPID_free(a);
                           ERR_new();
                           uVar4 = 400;
                           goto LAB_00100c11;
                        }
                        iVar3 = OPENSSL_sk_push(*(undefined8*)( param_1 + 0xa40 ), a);
                        if (iVar3 == 0) {
                           OCSP_RESPID_free(a);
                           ERR_new();
                           ERR_set_debug("ssl/statem/extensions_srvr.c", 0x197, "tls_parse_ctos_status_request");
                           ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                           uVar4 = 0;
                           goto LAB_00100b98;
                        }
                        if (uVar9 == 0) goto LAB_00100c9d;
                     } while ( uVar9 != 1 );
                  }
                  ERR_new();
                  uVar4 = 0x182;
               }
               goto LAB_00100c11;
            }
         }
         ERR_new();
         uVar4 = 0x168;
      }
      LAB_00100c11:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar4, "tls_parse_ctos_status_request");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
      uVar4 = 0;
   } else {
      LAB_00100b93:uVar4 = 1;
   }
   LAB_00100b98:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_parse_ctos_npn(long param_1) {
   if (( *(long*)( param_1 + 0x260 ) == 0 ) || ( *(long*)( param_1 + 0x2e8 ) == 0 )) {
      *(undefined4*)( param_1 + 0x4b4 ) = 1;
   }
   return 1;
}undefined8 tls_parse_ctos_alpn(long param_1, long *param_2) {
   ushort *puVar1;
   ulong uVar2;
   long lVar3;
   ushort *puVar4;
   ushort uVar5;
   ulong uVar6;
   undefined8 uVar7;
   ulong uVar8;
   if (( *(long*)( param_1 + 0x260 ) != 0 ) && ( *(long*)( param_1 + 0x2e8 ) != 0 )) {
      return 1;
   }
   if (1 < (ulong)param_2[1]) {
      uVar5 = *(ushort*)*param_2;
      uVar5 = uVar5 << 8 | uVar5 >> 8;
      uVar8 = (ulong)uVar5;
      if (param_2[1] - 2U == uVar8) {
         puVar1 = (ushort*)*param_2 + 1;
         param_2[1] = 0;
         *param_2 = (long)( (long)puVar1 + uVar8 );
         uVar2 = uVar8;
         puVar4 = puVar1;
         if (1 < uVar5) {
            while (true) {
               uVar6 = ( ulong )(byte) * puVar4;
               if (uVar2 - 1 < uVar6) break;
               uVar2 = ( uVar2 - 1 ) - uVar6;
               if (uVar6 == 0) break;
               puVar4 = (ushort*)( (long)puVar4 + uVar6 + 1 );
               if (uVar2 == 0) {
                  CRYPTO_free(*(void**)( param_1 + 0x4c8 ));
                  *(undefined8*)( param_1 + 0x4c8 ) = 0;
                  *(undefined8*)( param_1 + 0x4d0 ) = 0;
                  CRYPTO_free((void*)0x0);
                  *(undefined8*)( param_1 + 0x4c8 ) = 0;
                  *(undefined8*)( param_1 + 0x4d0 ) = 0;
                  lVar3 = CRYPTO_memdup(puVar1, uVar8, "include/internal/packet.h", 0x1cf);
                  *(long*)( param_1 + 0x4c8 ) = lVar3;
                  if (lVar3 == 0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/extensions_srvr.c", 0x1e4, "tls_parse_ctos_alpn");
                     ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                     return 0;
                  }
                  *(ulong*)( param_1 + 0x4d0 ) = uVar8;
                  return 1;
               }
            };
            ERR_new();
            uVar7 = 0x1da;
            goto LAB_00100f59;
         }
      }
   }
   ERR_new();
   uVar7 = 0x1d1;
   LAB_00100f59:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar7, "tls_parse_ctos_alpn");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}undefined8 tls_parse_ctos_use_srtp(SSL *param_1, long *param_2) {
   int iVar1;
   stack_st_SRTP_PROTECTION_PROFILE *psVar2;
   ulong uVar3;
   EVP_MD_CTX *pEVar4;
   ulong uVar5;
   byte *pbVar6;
   ushort uVar7;
   undefined8 uVar8;
   int iVar9;
   ushort *local_48;
   psVar2 = SSL_get_srtp_profiles(param_1);
   if (psVar2 == (stack_st_SRTP_PROTECTION_PROFILE*)0x0) {
      return 1;
   }
   if (1 < (ulong)param_2[1]) {
      uVar3 = param_2[1] - 2;
      uVar7 = *(ushort*)*param_2;
      local_48 = (ushort*)*param_2 + 1;
      param_2[1] = uVar3;
      *param_2 = (long)local_48;
      if (( ( uVar7 & 0x100 ) == 0 ) && ( uVar5 = uVar5 <= uVar3 )) {
         *param_2 = (long)local_48 + uVar5;
         param_2[1] = uVar3 - uVar5;
         psVar2 = SSL_get_srtp_profiles(param_1);
         param_1[4].read_hash = (EVP_MD_CTX*)0x0;
         iVar1 = OPENSSL_sk_num(psVar2);
         if (uVar7 != 0) {
            joined_r0x0010117d:uVar3 = uVar5 - 2;
            if (iVar1 < 1) {
               if (uVar3 != 0) {
                  if (( uVar3 & 2 ) == 0) goto LAB_001011f5;
                  while (uVar3 = uVar5 - 4,uVar3 != 0) {
                     LAB_001011f5:uVar5 = uVar3;
                  };
               }
            } else {
               uVar7 = *local_48 << 8 | *local_48 >> 8;
               while (true) {
                  iVar9 = 0;
                  do {
                     pEVar4 = (EVP_MD_CTX*)OPENSSL_sk_value(psVar2, iVar9);
                     if (pEVar4->engine == (ENGINE*)(ulong)uVar7) {
                        param_1[4].read_hash = pEVar4;
                        if (uVar3 == 0) goto LAB_001011fb;
                        local_48 = local_48 + 1;
                        iVar1 = iVar9;
                        uVar5 = uVar3;
                        goto joined_r0x0010117d;
                     }
                     iVar9 = iVar9 + 1;
                  } while ( iVar9 != iVar1 );
                  if (uVar3 == 0) break;
                  local_48 = local_48 + 1;
                  uVar3 = uVar3 - 2;
                  uVar7 = *local_48 << 8 | *local_48 >> 8;
               };
            }
         }
         LAB_001011fb:if (param_2[1] != 0) {
            uVar3 = param_2[1] - 1;
            uVar5 = ( ulong ) * (byte*)*param_2;
            pbVar6 = (byte*)*param_2 + 1;
            param_2[1] = uVar3;
            *param_2 = (long)pbVar6;
            if (uVar5 <= uVar3) {
               *param_2 = (long)( pbVar6 + uVar5 );
               param_2[1] = uVar3 - uVar5;
               if (uVar3 - uVar5 == 0) {
                  return 1;
               }
            }
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_srvr.c", 0x228, "tls_parse_ctos_use_srtp");
            ossl_statem_fatal(param_1, 0x32, 0x160, 0);
            return 0;
         }
         ERR_new();
         uVar8 = 0x221;
         goto LAB_00101291;
      }
   }
   ERR_new();
   uVar8 = 0x1fc;
   LAB_00101291:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar8, "tls_parse_ctos_use_srtp");
   ossl_statem_fatal(param_1, 0x32, 0x161, 0);
   return 0;
}undefined8 tls_parse_ctos_etm(long param_1) {
   if (( *(byte*)( param_1 + 0x9b2 ) & 8 ) == 0) {
      *(undefined4*)( param_1 + 0xb14 ) = 1;
   }
   return 1;
}undefined8 tls_parse_ctos_psk_kex_modes(long param_1, long *param_2) {
   long lVar1;
   ulong uVar2;
   byte *pbVar3;
   byte *pbVar4;
   uint uVar5;
   lVar1 = param_2[1];
   pbVar4 = (byte*)*param_2;
   if (lVar1 != 0) {
      uVar2 = lVar1 - 1;
      if (uVar2 == *pbVar4) {
         param_2[1] = 0;
         *param_2 = (long)( pbVar4 + lVar1 );
         if (uVar2 != 0) {
            uVar5 = *(uint*)( param_1 + 0xb10 );
            pbVar3 = pbVar4 + uVar2;
            do {
               if (pbVar4[1] == 1) {
                  uVar5 = uVar5 | 2;
                  *(uint*)( param_1 + 0xb10 ) = uVar5;
               } else if (( pbVar4[1] == 0 ) && ( ( *(byte*)( param_1 + 0x9b1 ) & 4 ) != 0 )) {
                  uVar5 = uVar5 | 1;
                  *(uint*)( param_1 + 0xb10 ) = uVar5;
               }
               pbVar4 = pbVar4 + 1;
            } while ( pbVar4 != pbVar3 );
            if (( ( uVar5 & 1 ) != 0 ) && ( ( *(byte*)( param_1 + 0x9b4 ) & 8 ) != 0 )) {
               *(undefined4*)( param_1 + 0xb10 ) = 1;
            }
            return 1;
         }
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x247, "tls_parse_ctos_psk_kex_modes");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}undefined4 tls_parse_ctos_key_share(long param_1, long *param_2) {
   long *plVar1;
   ushort uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   undefined4 uVar7;
   ulong uVar8;
   void *ptr;
   void *pvVar9;
   void *pvVar10;
   long lVar11;
   ushort *puVar12;
   long lVar13;
   undefined8 uVar14;
   long lVar15;
   ulong uVar16;
   ushort uVar17;
   long lVar18;
   long lVar19;
   long in_FS_OFFSET;
   void *local_b8;
   long local_a0;
   long local_98;
   short local_82;
   long local_80;
   long local_78;
   undefined8 local_70;
   ulong local_68;
   undefined8 local_60;
   ushort *local_58;
   ulong uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_82 = 0;
   *(undefined2*)( param_1 + 0x4e8 ) = 0;
   if (( *(int*)( param_1 + 0x508 ) == 0 ) || ( uVar7 = 1(*(byte*)( param_1 + 0xb10 ) & 2) != 0 )) {
      if (*(long*)( param_1 + 0x4e0 ) == 0) {
         if (1 < (ulong)param_2[1]) {
            uVar17 = *(ushort*)*param_2;
            uVar8 = param_2[1] - 2;
            uVar16 = ( ulong )(ushort)(uVar17 << 8 | uVar17 >> 8);
            if (uVar8 == uVar16) {
               puVar12 = (ushort*)*param_2 + 1;
               param_2[1] = 0;
               *param_2 = uVar8 + (long)puVar12;
               tls1_get_supported_groups(param_1, &local_80, &local_70);
               tls1_get_group_tuples(param_1, &local_78, &local_68);
               lVar18 = local_80;
               lVar3 = *(long*)( param_1 + 0xaa0 );
               lVar4 = *(long*)( param_1 + 0xa98 );
               if (lVar4 == 0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_srvr.c", 0x368, "tls_parse_ctos_key_share");
                  ossl_statem_fatal(param_1, 0x6d, 0xd1, 0);
                  uVar7 = 0;
               } else if (( *(short*)( param_1 + 0x4de ) == 0 ) || ( uVar17 != 0 )) {
                  local_60 = 0;
                  ptr = CRYPTO_malloc(0x40, "ssl/statem/extensions_srvr.c", 0x29b);
                  if (ptr == (void*)0x0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/extensions_srvr.c", 0x29d, "extract_keyshares");
                     ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                     local_b8 = (void*)0x0;
                  } else {
                     local_b8 = CRYPTO_malloc(0x200, "ssl/statem/extensions_srvr.c", 0x2a0);
                     if (local_b8 != (void*)0x0) {
                        local_98 = 0x20;
                        local_a0 = 0;
                        lVar5 = local_a0;
                        while (local_a0 = lVar5,uVar16 != 0) {
                           if (( uVar16 == 1 ) || ( uVar17 = uVar16 - 2 < 2 )) {
                              LAB_001017a0:ERR_new();
                              ERR_set_debug("ssl/statem/extensions_srvr.c", 0x2ab, "extract_keyshares");
                              ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
                              goto LAB_001017cf;
                           }
                           uVar2 = puVar12[1];
                           uVar8 = ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8);
                           if (uVar16 - 4 < uVar8) goto LAB_001017a0;
                           local_58 = puVar12 + 2;
                           uVar16 = ( uVar16 - 4 ) - uVar8;
                           puVar12 = (ushort*)( (long)local_58 + uVar8 );
                           uStack_50 = uVar8;
                           if (uVar2 == 0) goto LAB_001017a0;
                           uVar17 = uVar17 << 8 | uVar17 >> 8;
                           if (( *(ushort*)( param_1 + 0x4de ) != 0 ) && ( ( uVar16 != 0 || ( *(ushort*)( param_1 + 0x4de ) != uVar17 ) ) )) {
                              ERR_new();
                              uVar14 = 0x2b6;
                              LAB_00101a71:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar14, "extract_keyshares");
                              ossl_statem_fatal(param_1, 0x2f, 0x6c, 0);
                              goto LAB_001017cf;
                           }
                           iVar6 = check_in_list(param_1, uVar17, lVar3, lVar4, 0, &local_60);
                           if (iVar6 == 0) {
                              ERR_new();
                              uVar14 = 0x2c3;
                              goto LAB_00101a71;
                           }
                           if (*(short*)( param_1 + 0x4de ) != 0) {
                              iVar6 = tls_accept_ksgroup(param_1, *(short*)( param_1 + 0x4de ), &local_58);
                              if (iVar6 != 0) goto LAB_001018b6;
                              goto LAB_001017cf;
                           }
                           iVar6 = check_in_list(param_1, uVar17, lVar18, local_70, 1, 0);
                           lVar5 = local_a0;
                           if (( ( iVar6 != 0 ) && ( iVar6 = tls_group_allowed(param_1, uVar17, 0x20004) ),iVar6 != 0 )) &&( iVar6 = iVar6 != 0 ) * (ushort*)( (long)ptr + local_a0 * 2 ) = uVar17;
                           plVar1 = (long*)( (long)local_b8 + local_a0 * 0x10 );
                           *plVar1 = (long)local_58;
                           plVar1[1] = uStack_50;
                           lVar5 = local_a0 + 1;
                           if (local_a0 + 1 == local_98) {
                              lVar19 = local_a0 + 0x21;
                              iVar6 = (int)lVar19;
                              pvVar9 = CRYPTO_realloc(ptr, iVar6 * 2, "ssl/statem/extensions_srvr.c", 0x2f1);
                              if (( pvVar9 == (void*)0x0 ) || ( pvVar10 = CRYPTO_realloc(local_b8, iVar6 * 0x10, "ssl/statem/extensions_srvr.c", 0x2f8) ),ptr = pvVar9,pvVar10 == (void*)0x0) goto LAB_001017cf;
                              local_a0 = local_98;
                              local_b8 = pvVar10;
                              lVar5 = local_a0;
                              local_98 = lVar19;
                           }
                        };
                     }
                     if (local_68 != 0) {
                        uVar8 = 0;
                        lVar18 = local_80;
                        do {
                           lVar5 = *(long*)( local_78 + uVar8 * 8 );
                           if (( *(byte*)( param_1 + 0x9b2 ) & 0x40 ) == 0) {
                              check_overlap(param_1, ptr, local_a0, lVar18, lVar5, &local_60, &local_58, &local_82);
                              lVar19 = lVar18;
                              lVar11 = lVar4;
                              lVar13 = lVar3;
                              lVar15 = lVar5;
                              if (local_82 != 0) {
                                 iVar6 = (int)local_60;
                                 goto LAB_00101a9e;
                              }
                           } else {
                              check_overlap(param_1, lVar18, lVar5, ptr, local_a0, &local_60, &local_58, &local_82);
                              lVar19 = lVar3;
                              lVar11 = lVar5;
                              lVar13 = lVar18;
                              lVar15 = lVar4;
                              if (local_82 != 0) {
                                 iVar6 = (int)local_58;
                                 LAB_00101a9e:iVar6 = tls_accept_ksgroup(param_1, local_82, (void*)( (long)iVar6 * 0x10 + (long)local_b8 ));
                                 if (iVar6 == 0) {
                                    uVar7 = 0;
                                    goto LAB_001018bb;
                                 }
                                 break;
                              }
                           }
                           check_overlap(param_1, lVar13, lVar11, lVar19, lVar15, &local_60, &local_58, &local_82);
                           if (local_82 != 0) {
                              *(short*)( param_1 + 0x4e8 ) = local_82;
                              break;
                           }
                           lVar18 = lVar18 + lVar5 * 2;
                           uVar8 = uVar8 + 1;
                        } while ( uVar8 < local_68 );
                     }
                     LAB_001018b6:uVar7 = 1;
                     LAB_001018bb:CRYPTO_free(ptr);
                     CRYPTO_free(local_b8);
                     goto LAB_001014e1;
                  }
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_srvr.c", 0x2a2, "extract_keyshares");
                  ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
               }
               LAB_001017cf:CRYPTO_free(ptr);
               CRYPTO_free(local_b8);
               uVar7 = 0;
            } else {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_srvr.c", 0x373, "tls_parse_ctos_key_share");
               ossl_statem_fatal(param_1, 0x2f, 0x6c, 0);
               uVar7 = 0;
            }
            goto LAB_001014e1;
         }
      }
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x358, "tls_parse_ctos_key_share");
      ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
      uVar7 = 0;
   } else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x353, "tls_parse_ctos_key_share");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      uVar7 = 0;
   }
}LAB_001014e1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar7;}undefined8 tls_parse_ctos_cookie(long param_1, long *param_2) {
   ushort *puVar1;
   byte *pbVar2;
   undefined8 *puVar3;
   ushort *puVar4;
   ushort uVar5;
   int iVar6;
   long lVar7;
   EVP_PKEY *pkey;
   long lVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   undefined8 uVar12;
   ulong uVar13;
   ulong uVar14;
   long in_FS_OFFSET;
   long local_1190;
   undefined8 local_1188;
   undefined1 local_1180[8];
   undefined1 local_1178[64];
   undefined1 local_1138[32];
   undefined1 local_1118[4312];
   long local_40;
   puVar3 = *(undefined8**)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( puVar3[0x1d] == 0 ) || ( ( *(byte*)( param_1 + 0x161 ) & 8 ) == 0 )) goto LAB_00101e2c;
   uVar10 = param_2[1];
   puVar4 = (ushort*)*param_2;
   if (uVar10 < 2) {
      LAB_00101bf8:ERR_new();
      uVar12 = 0x404;
      LAB_00101c09:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar12, "tls_parse_ctos_cookie");
      ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   } else {
      uVar5 = *puVar4 << 8 | *puVar4 >> 8;
      uVar14 = (ulong)uVar5;
      if (uVar10 - 2 != uVar14) goto LAB_00101bf8;
      puVar1 = puVar4 + 1;
      param_2[1] = 0;
      *param_2 = (long)puVar1 + uVar14;
      if (uVar5 < 0x20) {
         ERR_new();
         uVar12 = 0x40d;
         goto LAB_00101c09;
      }
      lVar7 = EVP_MD_CTX_new();
      pkey = (EVP_PKEY*)EVP_PKEY_new_raw_private_key_ex(*puVar3, &_LC2, puVar3[0x8e], *(long*)( param_1 + 0xb88 ) + 0x300, 0x20);
      if (( lVar7 == 0 ) || ( pkey == (EVP_PKEY*)0x0 )) {
         EVP_MD_CTX_free(lVar7);
         EVP_PKEY_free(pkey);
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x41b, "tls_parse_ctos_cookie");
         ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
         goto LAB_00101c2b;
      }
      local_1190 = 0x20;
      iVar6 = EVP_DigestSignInit_ex(lVar7, 0, "SHA2-256", *puVar3, puVar3[0x8e], pkey);
      if (iVar6 < 1) {
         LAB_00101d3a:EVP_MD_CTX_free(lVar7);
         EVP_PKEY_free(pkey);
         ERR_new();
         uVar12 = 0x427;
         LAB_00101d5c:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar12, "tls_parse_ctos_cookie");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      } else {
         iVar6 = EVP_DigestSign(lVar7, local_1138, &local_1190, puVar1, uVar10 - 0x22);
         if (( iVar6 < 1 ) || ( local_1190 != 0x20 )) goto LAB_00101d3a;
         EVP_MD_CTX_free(lVar7);
         EVP_PKEY_free(pkey);
         iVar6 = CRYPTO_memcmp(local_1138, (void*)( ( uVar10 - 0x22 ) + (long)puVar1 ), 0x20);
         if (iVar6 == 0) {
            if (puVar4[1] != 0x100) {
               LAB_00101e2c:uVar12 = 1;
               goto LAB_00101c2d;
            }
            if (puVar4[2] != 0x403) {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_srvr.c", 0x446, "tls_parse_ctos_cookie");
               ossl_statem_fatal(param_1, 0x2f, 0x74, 0);
               goto LAB_00101c2b;
            }
            if (*(ushort*)( param_1 + 0x4de ) != ( ushort )(puVar4[3] << 8 | puVar4[3] >> 8)) {
               LAB_00101e7d:ERR_new();
               ERR_set_debug("ssl/statem/extensions_srvr.c", 0x45c, "tls_parse_ctos_cookie");
               ossl_statem_fatal(param_1, 0x2f, 0xba, 0);
               goto LAB_00101c2b;
            }
            lVar7 = *(long*)( param_1 + 0x300 );
            lVar8 = ssl_get_cipher_by_char(param_1, puVar4 + 4, 0);
            if (lVar7 != lVar8) goto LAB_00101e7d;
            uVar5 = puVar4[5];
            uVar10 = *(ulong*)( (long)puVar4 + 0xb );
            uVar13 = ( ulong )(ushort)(*(ushort*)( (long)puVar4 + 0x13 ) << 8 | *(ushort*)( (long)puVar4 + 0x13 ) >> 8);
            if (( uVar14 - 0x13 < uVar13 ) || ( lVar7 = lVar7 == 0 )) {
               LAB_00101f70:ERR_new();
               uVar12 = 0x465;
               goto LAB_00101c09;
            }
            uVar9 = lVar7 - 1;
            pbVar2 = (byte*)( (long)puVar4 + 0x15 + uVar13 );
            uVar11 = ( ulong ) * pbVar2;
            if (( uVar9 < uVar11 ) || ( uVar9 - uVar11 != 0x20 )) goto LAB_00101f70;
            uVar9 = uVar10 >> 0x38 | ( uVar10 & 0xff000000000000 ) >> 0x28 | ( uVar10 & 0xff0000000000 ) >> 0x18 | ( uVar10 & 0xff00000000 ) >> 8 | ( uVar10 & 0xff000000 ) << 8 | ( uVar10 & 0xff0000 ) << 0x18 | ( uVar10 & 0xff00 ) << 0x28 | uVar10 << 0x38;
            uVar10 = time((time_t*)0x0);
            if (( uVar10 < uVar9 ) || ( 600 < uVar10 - uVar9 )) goto LAB_00101e2c;
            iVar6 = ( *(code*)puVar3[0x1d] )(*(undefined8*)( param_1 + 0x40 ), pbVar2 + 1, uVar11);
            if (iVar6 == 0) {
               ERR_new();
               uVar12 = 0x474;
               goto LAB_00101ec6;
            }
            iVar6 = WPACKET_init_static_len(local_1178, local_1118, 0x10cc, 0);
            if (iVar6 == 0) {
               ERR_new();
               uVar12 = 0x47e;
            } else {
               iVar6 = WPACKET_put_bytes__(local_1178, 2, 1);
               if (iVar6 != 0) {
                  iVar6 = WPACKET_start_sub_packet_len__(local_1178, 3);
                  if (iVar6 != 0) {
                     iVar6 = WPACKET_put_bytes__(local_1178, 0x303, 2);
                     if (iVar6 != 0) {
                        iVar6 = WPACKET_memcpy(local_1178, &hrrrandom, 0x20);
                        if (iVar6 != 0) {
                           iVar6 = WPACKET_sub_memcpy__(local_1178, param_1 + 0x928, *(undefined8*)( param_1 + 0x948 ), 1);
                           if (iVar6 != 0) {
                              iVar6 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0xb0 ) )(*(undefined8*)( param_1 + 0x300 ), local_1178, local_1180);
                              if (iVar6 != 0) {
                                 iVar6 = WPACKET_put_bytes__(local_1178, 0, 1);
                                 if (iVar6 != 0) {
                                    iVar6 = WPACKET_start_sub_packet_len__(local_1178, 2);
                                    if (iVar6 != 0) {
                                       iVar6 = WPACKET_put_bytes__(local_1178, 0x2b, 2);
                                       if (iVar6 != 0) {
                                          iVar6 = WPACKET_start_sub_packet_len__(local_1178, 2);
                                          if (iVar6 != 0) {
                                             iVar6 = WPACKET_put_bytes__(local_1178, (long)*(int*)( param_1 + 0x48 ), 2);
                                             if (iVar6 != 0) {
                                                iVar6 = WPACKET_close(local_1178);
                                                if (iVar6 != 0) {
                                                   if ((char)uVar5 == '\0') {
                                                      LAB_00102187:iVar6 = WPACKET_put_bytes__(local_1178, 0x2c, 2);
                                                      if (iVar6 != 0) {
                                                         iVar6 = WPACKET_start_sub_packet_len__(local_1178, 2);
                                                         if (iVar6 != 0) {
                                                            iVar6 = WPACKET_sub_memcpy__(local_1178, puVar1, uVar14, 2);
                                                            if (iVar6 != 0) {
                                                               iVar6 = WPACKET_close(local_1178);
                                                               if (iVar6 != 0) {
                                                                  iVar6 = WPACKET_close(local_1178);
                                                                  if (iVar6 != 0) {
                                                                     iVar6 = WPACKET_close(local_1178);
                                                                     if (iVar6 != 0) {
                                                                        iVar6 = WPACKET_get_total_written(local_1178, &local_1188);
                                                                        if (iVar6 != 0) {
                                                                           iVar6 = WPACKET_finish(local_1178);
                                                                           if (iVar6 != 0) {
                                                                              iVar6 = create_synthetic_message_hash(param_1, (long)puVar4 + 0x15, uVar13, local_1118, local_1188);
                                                                              if (iVar6 != 0) {
                                                                                 *(undefined4*)( param_1 + 0x8d0 ) = 1;
                                                                                 *(undefined4*)( param_1 + 0xb30 ) = 1;
                                                                                 goto LAB_00101e2c;
                                                                              }
                                                                              goto LAB_00101c2b;
                                                                           }
                                                                        }
                                                                     }
                                                                  }
                                                               }
                                                            }
                                                         }
                                                      }
                                                      WPACKET_cleanup(local_1178);
                                                      ERR_new();
                                                      uVar12 = 0x4aa;
                                                   } else {
                                                      iVar6 = WPACKET_put_bytes__(local_1178, 0x33, 2);
                                                      if (iVar6 != 0) {
                                                         iVar6 = WPACKET_start_sub_packet_len__(local_1178, 2);
                                                         if (iVar6 != 0) {
                                                            iVar6 = WPACKET_put_bytes__(local_1178, *(undefined2*)( param_1 + 0x4de ), 2);
                                                            if (iVar6 != 0) {
                                                               iVar6 = WPACKET_close(local_1178);
                                                               if (iVar6 != 0) goto LAB_00102187;
                                                            }
                                                         }
                                                      }
                                                      WPACKET_cleanup(local_1178);
                                                      ERR_new();
                                                      uVar12 = 0x49d;
                                                   }
                                                   goto LAB_00101d5c;
                                                }
                                             }
                                          }
                                       }
                                       WPACKET_cleanup(local_1178);
                                       ERR_new();
                                       uVar12 = 0x494;
                                       goto LAB_00101d5c;
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
               WPACKET_cleanup(local_1178);
               ERR_new();
               uVar12 = 0x48c;
            }
            goto LAB_00101d5c;
         }
         ERR_new();
         uVar12 = 0x42f;
         LAB_00101ec6:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar12, "tls_parse_ctos_cookie");
         ossl_statem_fatal(param_1, 0x2f, 0x134, 0);
      }
   }
   LAB_00101c2b:uVar12 = 0;
   LAB_00101c2d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar12;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_parse_ctos_supported_groups(long param_1, long *param_2) {
   ushort uVar1;
   int iVar2;
   ulong uVar3;
   undefined8 uVar4;
   ushort uVar5;
   long in_FS_OFFSET;
   ushort *local_38;
   ulong local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (1 < (ulong)param_2[1]) {
      uVar5 = *(ushort*)*param_2;
      uVar3 = param_2[1] - 2;
      uVar1 = uVar5 >> 8;
      uVar5 = uVar5 << 8 | uVar1;
      if (uVar3 == uVar5) {
         local_38 = (ushort*)*param_2 + 1;
         param_2[1] = 0;
         *param_2 = (long)local_38 + uVar3;
         local_30 = uVar3;
         if (( uVar5 != 0 ) && ( ( uVar1 & 1 ) == 0 )) {
            if (( *(int*)( param_1 + 0x508 ) == 0 ) || ( ( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 && ( iVar2 = **(int**)( param_1 + 0x18 ) ),iVar2 != 0x10000 ) ) && ( 0x303 < iVar2 ) )) {
               CRYPTO_free(*(void**)( param_1 + 0xaa0 ));
               *(undefined8*)( param_1 + 0xaa0 ) = 0;
               *(undefined8*)( param_1 + 0xa98 ) = 0;
               iVar2 = tls1_save_u16(&local_38, param_1 + 0xaa0, param_1 + 0xa98);
               if (iVar2 == 0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_srvr.c", 0x4d4, "tls_parse_ctos_supported_groups");
                  ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                  uVar4 = 0;
                  goto LAB_001023c0;
               }
            }
            uVar4 = 1;
            goto LAB_001023c0;
         }
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x4c9, "tls_parse_ctos_supported_groups");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   uVar4 = 0;
   LAB_001023c0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_parse_ctos_ems(long param_1, long param_2) {
   if (*(long*)( param_2 + 8 ) == 0) {
      if (( *(byte*)( param_1 + 0x9b0 ) & 1 ) == 0) {
         *(ulong*)( param_1 + 0x160 ) = *(ulong*)( param_1 + 0x160 ) | 0x200;
      }
      return 1;
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x4e1, "tls_parse_ctos_ems");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}undefined8 tls_parse_ctos_early_data(long param_1, long param_2) {
   if (*(long*)( param_2 + 8 ) == 0) {
      if (*(int*)( param_1 + 0x8d0 ) == 0) {
         return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x4f7, "tls_parse_ctos_early_data");
      ossl_statem_fatal(param_1, 0x2f, 0x6e, 0);
   } else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x4f2, "tls_parse_ctos_early_data");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   }
   return 0;
}undefined8 tls_parse_ctos_psk(long param_1, long *param_2) {
   byte *pbVar1;
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   SSL_SESSION *pSVar7;
   long lVar8;
   undefined8 uVar9;
   void *ptr;
   ulong uVar10;
   ulong uVar11;
   long lVar12;
   ulong uVar13;
   ushort *puVar14;
   undefined8 uVar15;
   uint uVar16;
   ushort uVar17;
   uint *puVar18;
   long in_FS_OFFSET;
   uint local_298;
   undefined4 local_294;
   SSL_SESSION *local_258;
   undefined2 local_24a;
   undefined1 local_248[520];
   long local_40;
   uVar15 = *(undefined8*)( param_1 + 0x40 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(undefined8*)( param_1 + 8 );
   local_258 = (SSL_SESSION*)0x0;
   if (( *(byte*)( param_1 + 0xb10 ) & 3 ) == 0) goto LAB_001028e0;
   if (1 < (ulong)param_2[1]) {
      uVar17 = *(ushort*)*param_2;
      uVar13 = param_2[1] - 2;
      uVar6 = ( ulong )(ushort)(uVar17 << 8 | uVar17 >> 8);
      if (uVar6 <= uVar13) {
         puVar18 = (uint*)( (ushort*)*param_2 + 1 );
         param_2[1] = uVar13 - uVar6;
         *param_2 = (long)puVar18 + uVar6;
         *(undefined4*)( param_1 + 0xa60 ) = 0;
         if (uVar6 != 0) {
            local_294 = 0;
            lVar8 = 0;
            local_298 = 0;
            do {
               if (uVar6 == 1) {
                  LAB_00102910:ERR_new();
                  uVar15 = 0x53b;
                  goto LAB_00102861;
               }
               uVar17 = ( ushort ) * puVar18 << 8 | ( ushort ) * puVar18 >> 8;
               uVar13 = (ulong)uVar17;
               if (uVar6 - 2 < uVar13) goto LAB_00102910;
               puVar14 = (ushort*)( (long)puVar18 + 2 );
               uVar6 = ( uVar6 - 2 ) - uVar13;
               if (uVar6 < 4) goto LAB_00102910;
               uVar16 = *(uint*)( (long)puVar14 + uVar13 );
               puVar18 = (uint*)( (long)puVar14 + uVar13 ) + 1;
               if (( *(code**)( param_1 + 0x980 ) != (code*)0x0 ) && ( iVar4 = ( **(code**)( param_1 + 0x980 ) )(uVar15, puVar14, uVar13, &local_258) ),iVar4 == 0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_srvr.c", 0x543, "tls_parse_ctos_psk");
                  ossl_statem_fatal(param_1, 0x50, 0x6e, 0);
                  uVar15 = 0;
                  goto LAB_001028e5;
               }
               if (local_258 != (SSL_SESSION*)0x0) {
                  LAB_001026e6:pSVar7 = (SSL_SESSION*)ssl_session_dup(local_258, 0);
                  if (pSVar7 != (SSL_SESSION*)0x0) {
                     SSL_SESSION_free(local_258);
                     local_258 = pSVar7;
                     memcpy(pSVar7[1].master_key + 0x14, (void*)( param_1 + 0x8e0 ), *(size_t*)( param_1 + 0x8d8 ));
                     *(undefined8*)( pSVar7[1].master_key + 0xc ) = *(undefined8*)( param_1 + 0x8d8 );
                     if (local_298 == 0) {
                        *(undefined4*)( param_1 + 0xb1c ) = 1;
                     }
                     *(undefined4*)( param_1 + 0xa60 ) = 1;
                     local_294 = 1;
                     goto LAB_0010274f;
                  }
                  ERR_new();
                  uVar15 = 0x57e;
                  LAB_00102daf:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar15, "tls_parse_ctos_psk");
                  ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                  goto LAB_00102963;
               }
               if (( *(long*)( param_1 + 0x978 ) != 0 ) && ( uVar17 < 0x101 )) {
                  CRYPTO_free((void*)0x0);
                  ptr = (void*)CRYPTO_strndup(puVar14, uVar13, "include/internal/packet.h", 0x1e6);
                  if (ptr == (void*)0x0) {
                     ERR_new();
                     uVar15 = 0x550;
                  } else {
                     uVar5 = ( **(code**)( param_1 + 0x978 ) )(uVar15, ptr, local_248, 0x200);
                     CRYPTO_free(ptr);
                     if (uVar5 < 0x201) {
                        if (uVar5 == 0) {
                           LAB_00102a66:if (local_258 != (SSL_SESSION*)0x0) goto LAB_001026e6;
                           goto LAB_00102a74;
                        }
                        local_24a = 0x113;
                        lVar12 = SSL_CIPHER_find(param_1, &local_24a);
                        uVar10 = (ulong)uVar5;
                        if (lVar12 != 0) {
                           local_258 = SSL_SESSION_new();
                           if (( ( ( local_258 != (SSL_SESSION*)0x0 ) && ( iVar4 = SSL_SESSION_set1_master_key(local_258, local_248, uVar10) ),iVar4 != 0 ) ) && ( iVar4 = iVar4 != 0 )) {
                              OPENSSL_cleanse(local_248, uVar10);
                              goto LAB_00102a66;
                           }
                           OPENSSL_cleanse(local_248, uVar10);
                           ERR_new();
                           uVar15 = 0x571;
                           goto LAB_00102daf;
                        }
                        OPENSSL_cleanse(local_248, uVar10);
                        ERR_new();
                        uVar15 = 0x565;
                     } else {
                        ERR_new();
                        uVar15 = 0x557;
                     }
                  }
                  LAB_00102e6e:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar15, "tls_parse_ctos_psk");
                  ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                  uVar15 = 0;
                  goto LAB_001028e5;
               }
               LAB_00102a74:if (( ( *(ulong*)( param_1 + 0x9b0 ) & 0x4000 ) == 0 ) && ( ( *(int*)( param_1 + 0x1540 ) == 0 || ( ( *(ulong*)( param_1 + 0x9b0 ) & 0x1000000 ) != 0 ) ) )) {
                  uVar5 = tls_decrypt_ticket(param_1, puVar14, uVar13, 0, 0, &local_258);
                  if (uVar5 != 3) {
                     if (1 < uVar5) {
                        pSVar7 = local_258;
                        if (( uVar5 - 2 & 0xfffffffd ) != 0) goto LAB_00102ad6;
                        goto LAB_00102bf7;
                     }
                     ERR_new();
                     uVar15 = 0x5a7;
                     goto LAB_00102e6e;
                  }
                  LAB_00102ea0:ERR_new();
                  uVar15 = 0x5a1;
                  goto LAB_00102861;
               }
               *(undefined4*)( param_1 + 0xa60 ) = 1;
               if (uVar17 == 0) goto LAB_00102ea0;
               if (( uVar17 == 0x20 ) && ( pSVar7 = (SSL_SESSION*)lookup_sess_in_cache(param_1, puVar14, 0x20) ),pSVar7 != (SSL_SESSION*)0x0) {
                  LAB_00102ad6:local_258 = pSVar7;
                  if (( *(int*)( param_1 + 0x1540 ) == 0 ) || ( ( ( *(byte*)( param_1 + 0x9b3 ) & 1 ) != 0 || ( iVar4 = SSL_CTX_remove_session(*(SSL_CTX**)( param_1 + 0xb88 ), local_258) ),iVar4 != 0 ) )) {
                     pSVar7 = local_258;
                     uVar10 = ( ulong )(uVar16 >> 0x18 | ( uVar16 & 0xff0000 ) >> 8 | ( uVar16 & 0xff00 ) << 8 | uVar16 << 0x18) * 1000000;
                     uVar13 = uVar10 + ( ulong ) * (uint*)( local_258[1].krb5_client_princ + 0x58 ) * -1000000;
                     if (uVar10 < ( ulong ) * (uint*)( local_258[1].krb5_client_princ + 0x58 ) * 1000000) {
                        uVar13 = 0;
                     }
                     uVar11 = ossl_time_now();
                     uVar10 = 0;
                     if (*(ulong*)( pSVar7[1].sid_ctx + 0x1c ) <= uVar11) {
                        uVar10 = uVar11 - *(ulong*)( pSVar7[1].sid_ctx + 0x1c );
                     }
                     uVar11 = uVar10 + 1000000000;
                     pSVar7 = local_258;
                     if (uVar10 < 0xffffffffc4653600) {
                        if (( local_298 == 0 ) && ( ( ( uVar10 < *(ulong*)( local_258[1].sid_ctx + 0x14 ) || ( uVar10 <= *(ulong*)( local_258[1].sid_ctx + 0x14 ) ) ) && ( uVar13 <= uVar11 ) ) )) goto LAB_00102b83;
                     } else if (( local_298 == 0 ) && ( ( uVar10 < *(ulong*)( local_258[1].sid_ctx + 0x14 ) || ( uVar10 <= *(ulong*)( local_258[1].sid_ctx + 0x14 ) ) ) )) {
                        uVar11 = 0xffffffffffffffff;
                        LAB_00102b83:if (( uVar11 < uVar13 + 10000000000 || 0xfffffffdabf41bff < uVar13 ) || ( uVar11 <= uVar13 + 10000000000 )) {
                           *(undefined4*)( param_1 + 0xb1c ) = 1;
                        }
                     }
                     LAB_0010274f:lVar8 = ssl_md(uVar2, *(undefined4*)( *(long*)( pSVar7[1].krb5_client_princ + 0x10 ) + 0x40 ));
                     if (lVar8 == 0) {
                        ERR_new();
                        uVar15 = 0x5d4;
                        goto LAB_00102daf;
                     }
                     uVar9 = ssl_md(uVar2, *(undefined4*)( *(long*)( param_1 + 0x300 ) + 0x40 ));
                     EVP_MD_get0_name(uVar9);
                     iVar4 = EVP_MD_is_a(lVar8);
                     if (iVar4 != 0) break;
                     SSL_SESSION_free(local_258);
                     local_258 = (SSL_SESSION*)0x0;
                     *(undefined4*)( param_1 + 0xb1c ) = 0;
                     *(undefined4*)( param_1 + 0xa60 ) = 0;
                  } else {
                     SSL_SESSION_free(local_258);
                     local_258 = (SSL_SESSION*)0x0;
                  }
               }
               LAB_00102bf7:local_298 = local_298 + 1;
               uVar6 = uVar6 - 4;
            } while ( uVar6 != 0 );
            if (local_258 != (SSL_SESSION*)0x0) {
               lVar12 = *param_2;
               lVar3 = *(long*)( *(long*)( param_1 + 0xf8 ) + 8 );
               iVar4 = EVP_MD_get_size(lVar8);
               if (0 < iVar4) {
                  if ((ulong)param_2[1] < 2) {
                     LAB_00102930:ERR_new();
                     uVar15 = 0x5ed;
                  } else {
                     uVar6 = param_2[1] - 2;
                     uVar17 = *(ushort*)*param_2;
                     uVar13 = ( ulong )(ushort)(uVar17 << 8 | uVar17 >> 8);
                     if (uVar6 < uVar13) goto LAB_00102930;
                     puVar14 = (ushort*)*param_2 + 1;
                     param_2[1] = uVar6 - uVar13;
                     *param_2 = (long)( (long)puVar14 + uVar13 );
                     uVar16 = 0;
                     do {
                        if (uVar13 == 0) {
                           LAB_00102835:ERR_new();
                           uVar15 = 0x5f3;
                           goto LAB_00102941;
                        }
                        uVar6 = ( ulong )(byte) * puVar14;
                        if (uVar13 - 1 < uVar6) goto LAB_00102835;
                        pbVar1 = (byte*)( (long)puVar14 + 1 );
                        uVar13 = ( uVar13 - 1 ) - uVar6;
                        uVar16 = uVar16 + 1;
                        puVar14 = (ushort*)( pbVar1 + uVar6 );
                     } while ( uVar16 <= local_298 );
                     if ((long)iVar4 == uVar6) {
                        iVar4 = tls_psk_do_binder(param_1, lVar8, *(undefined8*)( *(long*)( param_1 + 0xf8 ) + 8 ), lVar12 - lVar3, pbVar1, 0, local_258, 0, local_294, *(long*)( param_1 + 0xf8 ));
                        if (iVar4 == 1) {
                           *(uint*)( param_1 + 0xb38 ) = local_298;
                           SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
                           *(SSL_SESSION**)( param_1 + 0x900 ) = local_258;
                           goto LAB_001028e0;
                        }
                        goto LAB_00102963;
                     }
                     ERR_new();
                     uVar15 = 0x5f9;
                  }
                  LAB_00102941:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar15, "tls_parse_ctos_psk");
                  ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
               }
               LAB_00102963:SSL_SESSION_free(local_258);
               uVar15 = 0;
               goto LAB_001028e5;
            }
         }
         LAB_001028e0:uVar15 = 1;
         goto LAB_001028e5;
      }
   }
   ERR_new();
   uVar15 = 0x52f;
   LAB_00102861:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar15, "tls_parse_ctos_psk");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   uVar15 = 0;
   LAB_001028e5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar15;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_parse_ctos_post_handshake_auth(long param_1, long param_2) {
   if (*(long*)( param_2 + 8 ) == 0) {
      *(undefined4*)( param_1 + 0xba8 ) = 2;
      return 1;
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x613, "tls_parse_ctos_post_handshake_auth");
   ossl_statem_fatal(param_1, 0x32, 0x116, 0);
   return 0;
}undefined8 tls_construct_stoc_renegotiate(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   if (*(int*)( param_1 + 0x4b0 ) != 0) {
      iVar1 = WPACKET_put_bytes__(param_2, 0xff01, 2);
      if (( ( ( iVar1 == 0 ) || ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 ) ) || ( iVar1 = iVar1 == 0 )) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x631, "tls_construct_stoc_renegotiate");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         uVar2 = 0;
      } else {
         uVar2 = 1;
      }
      return uVar2;
   }
   return 2;
}undefined8 tls_construct_stoc_server_name(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(int*)( param_1 + 0xb60 ) != 1) {
      return 2;
   }
   if (*(int*)( param_1 + 0x508 ) != 0) {
      if (( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) != 0) {
         return 2;
      }
      iVar1 = **(int**)( param_1 + 0x18 );
      if (( iVar1 == 0x10000 ) || ( iVar1 < 0x304 )) {
         return 2;
      }
   }
   iVar1 = WPACKET_put_bytes__(param_2, 0, 2);
   if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
      return 1;
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x648, "tls_construct_stoc_server_name");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}undefined8 tls_construct_stoc_maxfragmentlen(long param_1, undefined8 param_2) {
   int iVar1;
   if (3 < ( byte )(*(char*)( *(long*)( param_1 + 0x900 ) + 0x358 ) - 1U)) {
      return 2;
   }
   iVar1 = WPACKET_put_bytes__(param_2, 1, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = WPACKET_put_bytes__(param_2, *(undefined1*)( *(long*)( param_1 + 0x900 ) + 0x358 ), 1) ),iVar1 != 0) {
      return 1;
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x65f, "tls_construct_stoc_maxfragmentlen");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}undefined8 tls_construct_stoc_ec_pt_formats(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   uVar2 = 2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(uint*)( *(long*)( param_1 + 0x300 ) + 0x1c ) & 4 ) != 0 || ( *(uint*)( *(long*)( param_1 + 0x300 ) + 0x20 ) & 8 ) != 0 ) && ( *(long*)( param_1 + 0xa80 ) != 0 )) {
      tls1_get_formatlist(param_1, &local_30, &local_28);
      iVar1 = WPACKET_put_bytes__(param_2, 0xb, 2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_start_sub_packet_len__(param_2, 2);
         if (iVar1 != 0) {
            iVar1 = WPACKET_sub_memcpy__(param_2, local_30, local_28, 1);
            if (iVar1 != 0) {
               iVar1 = WPACKET_close(param_2);
               if (iVar1 != 0) {
                  uVar2 = 1;
                  goto LAB_00103345;
               }
            }
         }
      }
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x679, "tls_construct_stoc_ec_pt_formats");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      uVar2 = 0;
   }
   LAB_00103345:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_construct_stoc_supported_groups(SSL *param_1, undefined8 param_2) {
   short sVar1;
   bool bVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   long local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(short*)( (long)&param_1[1].tlsext_ecpointformatlist + 6 ) == 0) {
      LAB_00103548:uVar5 = 2;
   } else {
      tls1_get_supported_groups(param_1, &local_50, &local_48);
      if (local_48 == 0) {
         ERR_new();
         uVar5 = 0x68f;
      } else {
         iVar3 = SSL_version(param_1);
         if (local_48 != 0) {
            bVar2 = true;
            uVar6 = 0;
            LAB_00103407:do {
               sVar1 = *(short*)( local_50 + uVar6 * 2 );
               iVar4 = tls_valid_group(param_1, sVar1, iVar3, iVar3, 0, 0);
               if (iVar4 != 0) {
                  iVar4 = tls_group_allowed(param_1, sVar1, 0x20004);
                  if (iVar4 != 0) {
                     if (bVar2) {
                        if (*(short*)( (long)&param_1[1].tlsext_ecpointformatlist + 6 ) == sVar1) goto LAB_00103548;
                        iVar4 = WPACKET_put_bytes__(param_2, 10, 2);
                        if (iVar4 != 0) {
                           iVar4 = WPACKET_start_sub_packet_len__(param_2, 2);
                           if (iVar4 != 0) {
                              iVar4 = WPACKET_start_sub_packet_len__(param_2, 2);
                              if (iVar4 != 0) goto LAB_0010349d;
                           }
                        }
                        ERR_new();
                        uVar5 = 0x6a7;
                        goto LAB_00103501;
                     }
                     LAB_0010349d:iVar4 = WPACKET_put_bytes__(param_2, sVar1, 2);
                     if (iVar4 == 0) {
                        ERR_new();
                        uVar5 = 0x6ae;
                        goto LAB_00103501;
                     }
                     bVar2 = false;
                     uVar6 = uVar6 + 1;
                     if (local_48 <= uVar6) break;
                     goto LAB_00103407;
                  }
               }
               uVar6 = uVar6 + 1;
            } while ( uVar6 < local_48 );
         }
         iVar3 = WPACKET_close(param_2);
         if (iVar3 != 0) {
            iVar3 = WPACKET_close(param_2);
            if (iVar3 != 0) {
               uVar5 = 1;
               goto LAB_00103525;
            }
         }
         ERR_new();
         uVar5 = 0x6b5;
      }
      LAB_00103501:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar5, "tls_construct_stoc_supported_groups");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      uVar5 = 0;
   }
   LAB_00103525:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_construct_stoc_session_ticket(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(int*)( param_1 + 0xa60 ) != 0) {
      iVar1 = tls_use_ticket();
      if (iVar1 != 0) {
         iVar1 = WPACKET_put_bytes__(param_2, 0x23, 2);
         if (iVar1 != 0) {
            iVar1 = WPACKET_put_bytes__(param_2, 0, 2);
            if (iVar1 != 0) {
               return 1;
            }
         }
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x6c7, "tls_construct_stoc_session_ticket");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }
   }
   *(undefined4*)( param_1 + 0xa60 ) = 0;
   return 2;
}undefined8 tls_construct_stoc_status_request(long param_1, undefined8 param_2, int param_3, undefined8 param_4, long param_5) {
   int iVar1;
   undefined8 uVar2;
   if (param_3 == 0x4000) {
      return 2;
   }
   if (*(int*)( param_1 + 0xa3c ) != 0) {
      if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),iVar1 != 0x10000 && 0x303 < iVar1 )) {
         return 2;
      }
      iVar1 = WPACKET_put_bytes__(param_2, 5, 2);
      if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
         ERR_new();
         uVar2 = 0x6df;
      } else {
         if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),iVar1 != 0x10000 )) {
            return 0;
         }
         iVar1 = WPACKET_close(param_2);
         if (iVar1 != 0) {
            return 1;
         }
         ERR_new();
         uVar2 = 0x6ed;
      }
      ERR_set_debug("ssl/statem/extensions_srvr.c", uVar2, "tls_construct_stoc_status_request");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      return 0;
   }
   return 2;
}undefined8 tls_construct_stoc_next_proto_neg(long param_1, undefined8 param_2) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined4 local_2c;
   undefined8 local_28;
   long local_20;
   iVar2 = *(int*)( param_1 + 0x4b4 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( param_1 + 0x4b4 ) = 0;
   if (( iVar2 != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x2e0 ) ),pcVar1 != (code*)0x0) {
      iVar2 = ( *pcVar1 )(*(undefined8*)( param_1 + 0x40 ), &local_28, &local_2c, *(undefined8*)( *(long*)( param_1 + 8 ) + 0x2e8 ));
      if (iVar2 == 0) {
         iVar2 = WPACKET_put_bytes__(param_2, 0x3374, 2);
         if (iVar2 != 0) {
            iVar2 = WPACKET_sub_memcpy__(param_2, local_28, local_2c, 2);
            if (iVar2 != 0) {
               *(undefined4*)( param_1 + 0x4b4 ) = 1;
               uVar3 = 1;
               goto LAB_00103815;
            }
         }
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x709, "tls_construct_stoc_next_proto_neg");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         uVar3 = 0;
         goto LAB_00103815;
      }
   }
   uVar3 = 2;
   LAB_00103815:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_construct_stoc_alpn(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(long*)( param_1 + 0x4b8 ) == 0) {
      return 2;
   }
   iVar1 = WPACKET_put_bytes__(param_2, 0x10, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 )) &&( ( ( iVar1 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0x4b8 ), *(undefined8*)( param_1 + 0x4c0 ), 1) ),iVar1 != 0 && ( iVar1 = WPACKET_close(param_2) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 );
}ERR_new();ERR_set_debug("ssl/statem/extensions_srvr.c", 0x722, "tls_construct_stoc_alpn");ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);return 0;}undefined8 tls_construct_stoc_use_srtp(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(long*)( param_1 + 0xb98 ) == 0) {
      return 2;
   }
   iVar1 = WPACKET_put_bytes__(param_2, 0xe, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 )) &&( ( ( iVar1 = WPACKET_put_bytes__(param_2, *(undefined8*)( *(long*)( param_1 + 0xb98 ) + 8 ), 2) ),iVar1 != 0 && ( iVar1 = WPACKET_put_bytes__(param_2, 0, 1) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 );
}ERR_new();ERR_set_debug("ssl/statem/extensions_srvr.c", 0x737, "tls_construct_stoc_use_srtp");ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);return 0;}undefined8 tls_construct_stoc_etm(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(int*)( param_1 + 0xb14 ) == 0) {
      return 2;
   }
   if (*(int*)( *(long*)( param_1 + 0x300 ) + 0x28 ) != 0x40) {
      iVar1 = *(int*)( *(long*)( param_1 + 0x300 ) + 0x24 );
      if (( ( iVar1 != 0x400 && iVar1 != 4 ) && iVar1 != 0x40000 ) && ( ( iVar1 - 0x400000U & 0xffbfffff ) != 0 )) {
         iVar1 = WPACKET_put_bytes__(param_2, 0x16, 2);
         if (iVar1 != 0) {
            iVar1 = WPACKET_put_bytes__(param_2, 0, 2);
            if (iVar1 != 0) {
               return 1;
            }
         }
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x756, "tls_construct_stoc_etm");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }
   }
   *(undefined4*)( param_1 + 0xb14 ) = 0;
   return 2;
}undefined8 tls_construct_stoc_ems(long param_1, undefined8 param_2) {
   int iVar1;
   if (( *(byte*)( param_1 + 0x161 ) & 2 ) == 0) {
      return 2;
   }
   iVar1 = WPACKET_put_bytes__(param_2, 0x17, 2);
   if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2, 0, 2);
      if (iVar1 != 0) {
         return 1;
      }
   }
   ERR_new();
   ERR_set_debug("ssl/statem/extensions_srvr.c", 0x766, "tls_construct_stoc_ems");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}undefined8 tls_construct_stoc_supported_versions(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),iVar1 != 0x10000 )) {
      iVar1 = WPACKET_put_bytes__(param_2, 0x2b, 2);
      if (( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 )) {
         return 1;
      }
      ERR_new();
      uVar2 = 0x77a;
   } else {
      ERR_new();
      uVar2 = 0x772;
   }
   ERR_set_debug("ssl/statem/extensions_srvr.c", uVar2, "tls_construct_stoc_supported_versions");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}undefined8 tls_construct_stoc_key_share(long param_1, undefined8 param_2) {
   long lVar1;
   int iVar2;
   long lVar3;
   EVP_PKEY *pkey;
   undefined8 uVar4;
   long in_FS_OFFSET;
   void *local_40;
   void *local_38;
   long local_30;
   lVar1 = *(long*)( param_1 + 0x4e0 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x8d0 ) == 1) {
      if (lVar1 == 0) {
         iVar2 = WPACKET_put_bytes__(param_2, 0x33, 2);
         if (( ( ( iVar2 != 0 ) && ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 != 0 ) ) && ( iVar2 = WPACKET_put_bytes__(param_2, *(undefined2*)( param_1 + 0x4de ), 2) ),iVar2 != 0) {
            LAB_00103fcc:uVar4 = 1;
            goto LAB_00103e08;
         }
         ERR_new();
         uVar4 = 0x794;
         goto LAB_00103de4;
      }
   } else if (lVar1 == 0) {
      if (( *(int*)( param_1 + 0x508 ) == 0 ) || ( iVar2 = tls13_generate_handshake_secret(param_1, 0, 0) ),iVar2 == 0) {
         ERR_new();
         uVar4 = 0x79e;
         goto LAB_00103de4;
      }
   } else if (( *(int*)( param_1 + 0x508 ) == 0 ) || ( ( *(byte*)( param_1 + 0xb10 ) & 2 ) != 0 )) {
      iVar2 = WPACKET_put_bytes__(param_2, 0x33, 2);
      if (( iVar2 == 0 ) || ( ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 == 0 || ( iVar2 = WPACKET_put_bytes__(param_2, *(undefined2*)( param_1 + 0x4de ), 2) ),iVar2 == 0 )) {
         ERR_new();
         uVar4 = 0x7b1;
         LAB_00103de4:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar4, "tls_construct_stoc_key_share");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      } else {
         lVar3 = tls1_group_id_lookup(*(undefined8*)( param_1 + 8 ), *(undefined2*)( param_1 + 0x4de ));
         if (lVar3 == 0) {
            ERR_new();
            uVar4 = 0x7b7;
            goto LAB_00103de4;
         }
         if (*(char*)( lVar3 + 0x30 ) == '\0') {
            pkey = (EVP_PKEY*)ssl_generate_pkey(param_1, lVar1);
            if (pkey == (EVP_PKEY*)0x0) {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_srvr.c", 0x7bf, "tls_construct_stoc_key_share");
               ossl_statem_fatal(param_1, 0x50, 0x80014, 0);
            } else {
               lVar3 = EVP_PKEY_get1_encoded_public_key(pkey, &local_38);
               if (lVar3 == 0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_srvr.c", 0x7c6, "tls_construct_stoc_key_share");
                  ossl_statem_fatal(param_1, 0x50, 0x80010, 0);
                  EVP_PKEY_free(pkey);
               } else {
                  iVar2 = WPACKET_sub_memcpy__(param_2, local_38, lVar3, 2);
                  if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
                     CRYPTO_free(local_38);
                     *(EVP_PKEY**)( param_1 + 0x308 ) = pkey;
                     iVar2 = ssl_derive(param_1, pkey, lVar1, 1);
                     goto joined_r0x00104064;
                  }
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_srvr.c", 0x7cd, "tls_construct_stoc_key_share");
                  ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                  EVP_PKEY_free(pkey);
                  CRYPTO_free(local_38);
               }
            }
         } else {
            local_40 = (void*)0x0;
            local_38 = (void*)0x0;
            iVar2 = ssl_encapsulate(param_1, lVar1, &local_40, &local_38, 0);
            if (iVar2 != 0) {
               if (local_38 == (void*)0x0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_srvr.c", 0x7ed, "tls_construct_stoc_key_share");
                  ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                  CRYPTO_free(local_40);
               } else {
                  iVar2 = WPACKET_sub_memcpy__(param_2, local_40, local_38, 2);
                  if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/extensions_srvr.c", 0x7f4, "tls_construct_stoc_key_share");
                     ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                     CRYPTO_free(local_40);
                  } else {
                     CRYPTO_free(local_40);
                     iVar2 = ssl_gensecret(param_1, *(undefined8*)( param_1 + 0x3b0 ), *(undefined8*)( param_1 + 0x3b8 ));
                     joined_r0x00104064:if (iVar2 != 0) {
                        *(undefined1*)( param_1 + 0x4dd ) = 1;
                        goto LAB_00103fcc;
                     }
                  }
               }
            }
         }
      }
      uVar4 = 0;
      goto LAB_00103e08;
   }
   uVar4 = 2;
   LAB_00103e08:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_construct_stoc_cookie(long param_1, undefined8 param_2) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 uVar3;
   time_t tVar4;
   long lVar5;
   EVP_PKEY *pkey;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   undefined1 local_58[8];
   ulong local_50;
   undefined8 local_48;
   long local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = 2;
   if (( *(byte*)( param_1 + 0x161 ) & 8 ) == 0) goto LAB_001042bd;
   puVar1 = *(undefined8**)( param_1 + 8 );
   uVar3 = *(undefined8*)( param_1 + 0x40 );
   if (puVar1[0x1c] == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x81c, "tls_construct_stoc_cookie");
      ossl_statem_fatal(param_1, 0x50, 0x11f, 0);
      goto LAB_001042bb;
   }
   iVar2 = WPACKET_put_bytes__(param_2, 0x2c, 2);
   if (iVar2 == 0) {
      LAB_00104288:ERR_new();
      uVar3 = 0x82f;
      LAB_00104299:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar3, "tls_construct_stoc_cookie");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   } else {
      for (int i_522 = 0; i_522 < 2; i_522++) {
         iVar2 = WPACKET_start_sub_packet_len__(param_2, 2);
         if (iVar2 == 0) goto LAB_00104288;
      }
      iVar2 = WPACKET_get_total_written(param_2, &local_60);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = WPACKET_reserve_bytes(param_2, 0x1076, &local_78);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = WPACKET_put_bytes__(param_2, 1, 2);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = WPACKET_put_bytes__(param_2, 0x304, 2);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = WPACKET_put_bytes__(param_2, *(undefined2*)( param_1 + 0x4de ), 2);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = ( **(code**)( *(long*)( param_1 + 0x18 ) + 0xb0 ) )(*(undefined8*)( param_1 + 0x300 ), param_2, local_58);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = WPACKET_put_bytes__(param_2, *(long*)( param_1 + 0x4e0 ) == 0, 1);
      if (iVar2 == 0) goto LAB_00104288;
      tVar4 = time((time_t*)0x0);
      iVar2 = WPACKET_put_bytes__(param_2, tVar4, 8);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = WPACKET_start_sub_packet_len__(param_2, 2);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = WPACKET_reserve_bytes(param_2, 0x40, &local_98);
      if (iVar2 == 0) goto LAB_00104288;
      iVar2 = ssl3_digest_cached_records(param_1, 0);
      if (iVar2 != 0) {
         iVar2 = ssl_handshake_hash(param_1, local_98, 0x40, &local_48);
         if (iVar2 == 0) goto LAB_001042bb;
         iVar2 = WPACKET_allocate_bytes(param_2, local_48, &local_90);
         if (( iVar2 == 0 ) || ( local_98 != local_90 )) {
            LAB_00104783:ERR_new();
            uVar3 = 0x843;
         } else {
            iVar2 = WPACKET_close(param_2);
            if (iVar2 == 0) goto LAB_00104783;
            iVar2 = WPACKET_start_sub_packet_len__(param_2, 1);
            if (iVar2 == 0) goto LAB_00104783;
            iVar2 = WPACKET_reserve_bytes(param_2, 0x1000, &local_88);
            if (iVar2 == 0) goto LAB_00104783;
            iVar2 = ( *(code*)puVar1[0x1c] )(uVar3, local_88, &local_38);
            if (iVar2 == 0) {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_srvr.c", 0x84a, "tls_construct_stoc_cookie");
               ossl_statem_fatal(param_1, 0x50, 400, 0);
               goto LAB_001042bb;
            }
            iVar2 = WPACKET_allocate_bytes(param_2, local_38, &local_80);
            if (( iVar2 == 0 ) || ( local_88 != local_80 )) {
               LAB_00104735:ERR_new();
               uVar3 = 0x853;
            } else {
               iVar2 = WPACKET_close(param_2);
               if (iVar2 == 0) goto LAB_00104735;
               iVar2 = WPACKET_get_total_written(param_2, &local_50);
               if (iVar2 == 0) goto LAB_00104735;
               iVar2 = WPACKET_reserve_bytes(param_2, 0x20, &local_70);
               if (iVar2 == 0) goto LAB_00104735;
               local_40 = 0x20;
               local_50 = local_50 - local_60;
               if (local_50 < 0x1057) {
                  lVar5 = EVP_MD_CTX_new();
                  pkey = (EVP_PKEY*)EVP_PKEY_new_raw_private_key_ex(*puVar1, &_LC2, puVar1[0x8e], *(long*)( param_1 + 0xb88 ) + 0x300, 0x20);
                  if (( lVar5 == 0 ) || ( pkey == (EVP_PKEY*)0x0 )) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/extensions_srvr.c", 0x865, "tls_construct_stoc_cookie");
                     uVar3 = 0;
                     ossl_statem_fatal(param_1, 0x50, 0x80006, 0);
                  } else {
                     iVar2 = EVP_DigestSignInit_ex(lVar5, 0, "SHA2-256", *puVar1, puVar1[0x8e], pkey, 0, pkey);
                     if (iVar2 < 1) {
                        LAB_001046d2:ERR_new();
                        uVar3 = 0x86d;
                     } else {
                        iVar2 = EVP_DigestSign(lVar5, local_70, &local_40, local_78, local_50);
                        if (iVar2 < 1) goto LAB_001046d2;
                        if (local_50 + local_40 < 0x1077) {
                           iVar2 = WPACKET_allocate_bytes(param_2, local_40, &local_68);
                           if (( ( iVar2 != 0 ) && ( local_70 == local_68 ) ) && ( local_78 == local_70 - local_50 )) {
                              iVar2 = WPACKET_close(param_2);
                              if (iVar2 != 0) {
                                 iVar2 = WPACKET_close(param_2);
                                 if (iVar2 != 0) {
                                    uVar3 = 1;
                                    goto LAB_0010462a;
                                 }
                              }
                           }
                           ERR_new();
                           uVar3 = 0x87b;
                        } else {
                           ERR_new();
                           uVar3 = 0x872;
                        }
                     }
                     ERR_set_debug("ssl/statem/extensions_srvr.c", uVar3, "tls_construct_stoc_cookie");
                     uVar3 = 0;
                     ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
                  }
                  LAB_0010462a:EVP_MD_CTX_free(lVar5);
                  EVP_PKEY_free(pkey);
                  goto LAB_001042bd;
               }
               ERR_new();
               uVar3 = 0x85a;
            }
         }
         goto LAB_00104299;
      }
   }
   LAB_001042bb:uVar3 = 0;
   LAB_001042bd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 tls_construct_stoc_cryptopro_bug(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined4 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0x17020203;
   local_48 = __LC4;
   uStack_40 = _UNK_001056e8;
   local_38 = __LC5;
   uStack_30 = _UNK_001056f8;
   if (( *(uint*)( *(long*)( param_1 + 0x300 ) + 0x18 ) & 0xfffe ) == 0x80) {
      uVar3 = SSL_get_options();
      if (( uVar3 & 0x80000000 ) != 0) {
         iVar1 = WPACKET_memcpy(param_2, &local_48, 0x24);
         uVar2 = 1;
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_srvr.c", 0x89e, "tls_construct_stoc_cryptopro_bug");
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
            uVar2 = 0;
         }
         goto LAB_001047f6;
      }
   }
   uVar2 = 2;
   LAB_001047f6:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 tls_construct_stoc_early_data(long param_1, undefined8 param_2, int param_3) {
   int iVar1;
   undefined8 uVar2;
   if (param_3 == 0x2000) {
      if (*(int*)( param_1 + 0x1540 ) == 0) {
         return 2;
      }
      iVar1 = WPACKET_put_bytes__(param_2, 0x2a, 2);
      if (( ( ( iVar1 == 0 ) || ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 ) ) || ( iVar1 = WPACKET_put_bytes__(param_2, *(undefined4*)( param_1 + 0x1540 ), 4) ),iVar1 == 0) {
         ERR_new();
         uVar2 = 0x8b1;
         goto LAB_001048f4;
      }
   } else {
      if (*(int*)( param_1 + 0xb18 ) != 2) {
         return 2;
      }
      iVar1 = WPACKET_put_bytes__(param_2, 0x2a, 2);
      if (( ( iVar1 == 0 ) || ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 )) {
         ERR_new();
         uVar2 = 0x8be;
         LAB_001048f4:ERR_set_debug("ssl/statem/extensions_srvr.c", uVar2, "tls_construct_stoc_early_data");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }
   }
   return 1;
}undefined8 tls_construct_stoc_psk(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   if (*(int*)( param_1 + 0x508 ) != 0) {
      iVar1 = WPACKET_put_bytes__(param_2, 0x29, 2);
      if (( ( ( iVar1 == 0 ) || ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 ) ) || ( iVar1 = WPACKET_put_bytes__(param_2, (long)*(int*)( param_1 + 0xb38 ), 2) ),iVar1 == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x8d0, "tls_construct_stoc_psk");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         uVar2 = 0;
      } else {
         uVar2 = 1;
      }
      return uVar2;
   }
   return 2;
}undefined8 tls_construct_stoc_client_cert_type(long param_1, undefined8 param_2) {
   int iVar1;
   if (( *(char*)( param_1 + 0xb51 ) == '\x02' ) && ( ( iVar1 = send_certificate_request() ),iVar1 != 0 || ( *(int*)( param_1 + 0xba8 ) == 2 ) )) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x8df, "tls_construct_stoc_client_cert_type");
      ossl_statem_fatal(param_1, 0x2b, 0x6e, 0);
      return 0;
   }
   if (*(char*)( param_1 + 0xb50 ) == '\0') {
      *(undefined1*)( param_1 + 0xb51 ) = 0;
   } else {
      iVar1 = send_certificate_request(param_1);
      if (( ( ( iVar1 != 0 ) || ( *(int*)( param_1 + 0xba8 ) == 2 ) ) && ( *(char*)( param_1 + 0xb51 ) == '\x01' ) ) && ( *(long*)( param_1 + 0x1598 ) != 0 )) {
         iVar1 = WPACKET_put_bytes__(param_2, 0x13, 2);
         if (( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 )) {
            return 1;
         }
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_srvr.c", 0x8f9, "tls_construct_stoc_client_cert_type");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }
      *(undefined2*)( param_1 + 0xb50 ) = 0;
   }
   return 2;
}undefined8 tls_parse_ctos_client_cert_type(long param_1, long *param_2) {
   byte *pbVar1;
   byte bVar2;
   void *__s;
   long lVar3;
   size_t __n;
   undefined1 uVar4;
   ulong uVar5;
   void *pvVar6;
   byte *pbVar7;
   undefined8 uVar8;
   __s = *(void**)( param_1 + 0x1598 );
   if (__s == (void*)0x0) {
      *(undefined2*)( param_1 + 0xb50 ) = 0;
      return 1;
   }
   lVar3 = param_2[1];
   pbVar7 = (byte*)*param_2;
   if (( lVar3 == 0 ) || ( uVar5 = uVar5 != *pbVar7 )) {
      *(undefined1*)( param_1 + 0xb51 ) = 2;
      ERR_new();
      uVar8 = 0x920;
   } else {
      param_2[1] = 0;
      *param_2 = (long)( pbVar7 + lVar3 );
      if (uVar5 != 0) {
         __n = *(size_t*)( param_1 + 0x15a0 );
         pbVar1 = pbVar7 + uVar5;
         do {
            bVar2 = pbVar7[1];
            pvVar6 = memchr(__s, (uint)bVar2, __n);
            if (pvVar6 != (void*)0x0) {
               *(byte*)( param_1 + 0xb50 ) = bVar2;
               uVar4 = 1;
               goto LAB_00104d04;
            }
            pbVar7 = pbVar7 + 1;
         } while ( pbVar7 != pbVar1 );
         uVar4 = 2;
         LAB_00104d04:*(undefined1*)( param_1 + 0xb51 ) = uVar4;
         return 1;
      }
      *(undefined1*)( param_1 + 0xb51 ) = 2;
      ERR_new();
      uVar8 = 0x925;
   }
   ERR_set_debug("ssl/statem/extensions_srvr.c", uVar8, "tls_parse_ctos_client_cert_type");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}undefined8 tls_construct_stoc_server_cert_type(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(char*)( param_1 + 0xb52 ) == '\0') {
      *(undefined1*)( param_1 + 0xb53 ) = 0;
      return 2;
   }
   if (( *(char*)( param_1 + 0xb53 ) == '\x01' ) && ( *(long*)( param_1 + 0x15a8 ) != 0 )) {
      iVar1 = WPACKET_put_bytes__(param_2, 0x14, 2);
      if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = WPACKET_put_bytes__(param_2, *(undefined1*)( param_1 + 0xb52 ), 1) ),iVar1 != 0) {
         return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_srvr.c", 0x94a, "tls_construct_stoc_server_cert_type");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      return 0;
   }
   *(undefined2*)( param_1 + 0xb52 ) = 0;
   return 2;
}undefined8 tls_parse_ctos_server_cert_type(long param_1, long *param_2) {
   byte bVar1;
   void *pvVar2;
   byte *pbVar3;
   undefined8 uVar4;
   byte *__s;
   ulong __n;
   byte *pbVar5;
   pbVar3 = *(byte**)( param_1 + 0x15a8 );
   if (pbVar3 == (byte*)0x0) {
      *(undefined2*)( param_1 + 0xb52 ) = 0;
      LAB_00104f3d:uVar4 = 1;
   } else {
      if (( param_2[1] == 0 ) || ( __n = ( ulong ) * (byte*)*param_2 ),param_2[1] - 1U != __n) {
         ERR_new();
         uVar4 = 0x960;
      } else {
         __s = (byte*)*param_2 + 1;
         param_2[1] = 0;
         *param_2 = (long)( __s + __n );
         if (__n != 0) {
            if (*(long*)( param_1 + 0x15b0 ) != 0) {
               pbVar5 = pbVar3 + *(long*)( param_1 + 0x15b0 );
               do {
                  bVar1 = *pbVar3;
                  pvVar2 = memchr(__s, (uint)bVar1, __n);
                  if (pvVar2 != (void*)0x0) {
                     *(byte*)( param_1 + 0xb52 ) = bVar1;
                     *(undefined1*)( param_1 + 0xb53 ) = 1;
                     goto LAB_00104f3d;
                  }
                  pbVar3 = pbVar3 + 1;
               } while ( pbVar3 != pbVar5 );
            }
            *(undefined1*)( param_1 + 0xb53 ) = 2;
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_srvr.c", 0x974, "tls_parse_ctos_server_cert_type");
            ossl_statem_fatal(param_1, 0x2b, 0x6e, 0);
            return 0;
         }
         ERR_new();
         uVar4 = 0x965;
      }
      ERR_set_debug("ssl/statem/extensions_srvr.c", uVar4, "tls_parse_ctos_server_cert_type");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
      uVar4 = 0;
   }
   return uVar4;
}

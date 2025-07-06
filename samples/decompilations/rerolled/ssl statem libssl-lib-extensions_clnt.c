undefined8 use_ecc(long param_1, undefined4 param_2, undefined4 param_3) {
   undefined2 uVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   int iVar6;
   long in_FS_OFFSET;
   long local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   if (*(int*)( param_1 + 0x48 ) != 0x300) {
      uVar3 = SSL_get1_supported_ciphers();
      iVar2 = OPENSSL_sk_num(uVar3);
      if (0 < iVar2) {
         iVar6 = 0;
         do {
            lVar4 = OPENSSL_sk_value(uVar3, iVar6);
            if (( ( *(uint*)( lVar4 + 0x1c ) & 0x84 ) != 0 || ( *(uint*)( lVar4 + 0x20 ) & 8 ) != 0 ) || ( 0x303 < *(int*)( lVar4 + 0x2c ) )) {
               uVar5 = 0;
               OPENSSL_sk_free(uVar3);
               tls1_get_supported_groups(param_1, &local_50, &local_48);
               if (local_48 == 0) goto LAB_00100138;
               goto LAB_001000cb;
            }

            iVar6 = iVar6 + 1;
         }
 while ( iVar2 != iVar6 );
      }

      OPENSSL_sk_free(uVar3);
   }

   goto LAB_00100138;
   while (uVar5 = uVar5 + 1,uVar5 < local_48) {
      LAB_001000cb:uVar1 = *(undefined2*)( local_50 + uVar5 * 2 );
      iVar2 = tls_valid_group(param_1, uVar1, param_2, param_3, 1, 0);
      if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
         uVar3 = 1;
         goto LAB_0010010c;
      }

   }
;
   LAB_00100138:uVar3 = 0;
   LAB_0010010c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
undefined8 add_key_share(long param_1, undefined8 param_2, undefined4 param_3, ulong param_4) {
   ulong uVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   EVP_PKEY *pkey;
   long in_FS_OFFSET;
   void *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (void*)0x0;
   if (param_4 < *(ulong*)( param_1 + 0x338 )) {
      if (( *(int*)( param_1 + 0x8d0 ) != 1 ) || ( pkey = *(EVP_PKEY**)( param_1 + ( param_4 + 0x62 ) * 8 ) ),pkey == (EVP_PKEY*)0x0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x28d, "add_key_share");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         uVar4 = 0;
         goto LAB_0010024b;
      }

      LAB_001001ae:lVar3 = EVP_PKEY_get1_encoded_public_key(pkey, &local_48);
      if (lVar3 == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x2a0, "add_key_share");
         ossl_statem_fatal(param_1, 0x50, 0x80010, 0);
      }
 else {
         iVar2 = WPACKET_put_bytes__(param_2, param_3, 2);
         if (( iVar2 != 0 ) && ( iVar2 = WPACKET_sub_memcpy__(param_2, local_48, lVar3, 2) ),iVar2 != 0) {
            if (param_4 == 0) {
               *(EVP_PKEY**)( param_1 + 0x308 ) = pkey;
               *(short*)( param_1 + 0x4de ) = (short)param_3;
            }

            uVar1 = *(ulong*)( param_1 + 0x338 );
            *(EVP_PKEY**)( param_1 + ( param_4 + 0x62 ) * 8 ) = pkey;
            *(short*)( param_1 + 0x330 + param_4 * 2 ) = (short)param_3;
            if (uVar1 <= param_4) {
               *(ulong*)( param_1 + 0x338 ) = uVar1 + 1;
            }

            CRYPTO_free(local_48);
            uVar4 = 1;
            goto LAB_0010024b;
         }

         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x2a7, "add_key_share");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      }

      if (*(EVP_PKEY**)( param_1 + ( param_4 + 0x62 ) * 8 ) != pkey) {
         EVP_PKEY_free(pkey);
      }

      CRYPTO_free(local_48);
   }
 else {
      pkey = (EVP_PKEY*)ssl_generate_pkey_group(param_1, param_3);
      if (pkey != (EVP_PKEY*)0x0) goto LAB_001001ae;
   }

   uVar4 = 0;
   LAB_0010024b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
undefined8 tls_construct_ctos_renegotiate(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   if (*(int*)( param_1 + 0xba0 ) == 0) {
      if (( ( *(byte*)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x50 ) & 8 ) == 0 ) && ( ( 0x303 < *(int*)( param_1 + 0x9bc ) || ( ( iVar1 = ssl_security(param_1, 9, 0, 0x301, 0) ),iVar1 != 0 && ( *(int*)( param_1 + 0x9bc ) < 0x302 ) ) ) )) {
         return 2;
      }

      iVar1 = WPACKET_put_bytes__(param_2, 0xff01, 2);
      if (( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 )) {
         return 1;
      }

      ERR_new();
      uVar2 = 0x2b;
   }
 else {
      iVar1 = WPACKET_put_bytes__(param_2, 0xff01, 2);
      if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = WPACKET_sub_memcpy__(param_2, param_1 + 0x420, *(undefined8*)( param_1 + 0x460 ), 1) ),iVar1 != 0) {
         return 1;
      }

      ERR_new();
      uVar2 = 0x38;
   }

   ERR_set_debug("ssl/statem/extensions_clnt.c", uVar2, "tls_construct_ctos_renegotiate");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_server_name(long param_1, undefined8 param_2) {
   char *__s;
   int iVar1;
   size_t sVar2;
   if (*(long*)( param_1 + 0xa20 ) == 0) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 )) {
      __s = *(char**)( param_1 + 0xa20 );
      sVar2 = strlen(__s);
      iVar1 = WPACKET_sub_memcpy__(param_2, __s, sVar2, 2);
      if (( ( iVar1 != 0 ) && ( iVar1 = WPACKET_close(param_2) ),iVar1 != 0 )) {
         return 1;
      }

   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x51, "tls_construct_ctos_server_name");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_maxfragmentlen(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(char*)( param_1 + 0xb34 ) == '\0') {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 1, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = WPACKET_put_bytes__(param_2, *(undefined1*)( param_1 + 0xb34 ), 1) ),iVar1 != 0) {
      return 1;
   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x6a, "tls_construct_ctos_maxfragmentlen");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_srp(long param_1, undefined8 param_2) {
   char *__s;
   int iVar1;
   size_t sVar2;
   if (*(long*)( param_1 + 0xbf0 ) == 0) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0xc, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 )) {
      __s = *(char**)( param_1 + 0xbf0 );
      sVar2 = strlen(__s);
      iVar1 = WPACKET_memcpy(param_2, __s, sVar2);
      if (( ( iVar1 != 0 ) && ( iVar1 = WPACKET_close(param_2) ),iVar1 != 0 )) {
         return 1;
      }

   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x84, "tls_construct_ctos_srp");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_ec_pt_formats(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 local_38;
   undefined4 local_34;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ssl_get_min_max_version(param_1, &local_38, &local_34, 0);
   if (iVar1 == 0) {
      iVar1 = use_ecc(param_1, local_38, local_34);
      uVar2 = 2;
      if (iVar1 != 0) {
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
                     goto LAB_001008a5;
                  }

               }

            }

         }

         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0xd0, "tls_construct_ctos_ec_pt_formats");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         uVar2 = 0;
      }

   }
 else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0xc2, "tls_construct_ctos_ec_pt_formats");
      ossl_statem_fatal(param_1, 0x50, iVar1, 0);
      uVar2 = 0;
   }

   LAB_001008a5:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 tls_construct_ctos_supported_groups(long param_1, undefined8 param_2) {
   undefined2 uVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   undefined4 local_5c;
   int local_58;
   int local_54;
   long local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_48 = 0;
   iVar2 = ssl_get_min_max_version(param_1, &local_5c, &local_58, 0);
   if (iVar2 == 0) {
      iVar2 = use_ecc(param_1, local_5c, local_58);
      if (( iVar2 == 0 ) && ( ( uVar3 = 2(*(byte*)( *(long*)( *(long*)( param_1 + 0x18 ) + 0xd8 ) + 0x50 ) & 8) != 0 || ( local_58 < 0x304 ) ) )) goto LAB_00100a39;
      tls1_get_supported_groups(param_1, &local_50, &local_48);
      iVar2 = WPACKET_put_bytes__(param_2, 10, 2);
      if (( iVar2 == 0 ) || ( ( ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 == 0 || ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 == 0 ) ) || ( iVar2 = iVar2 == 0 )) {
         ERR_new();
         uVar3 = 0xf7;
      }
 else {
         if (local_48 == 0) {
            iVar2 = WPACKET_close(param_2);
            if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) {
               LAB_00100bf8:ERR_new();
               uVar3 = 0x10c;
            }
 else {
               LAB_00100b92:if (local_58 != 0x304) goto LAB_00100ba0;
               ERR_new();
               uVar3 = 0x114;
            }

            ERR_set_debug("ssl/statem/extensions_clnt.c", uVar3, "tls_construct_ctos_supported_groups");
            ossl_statem_fatal(param_1, 0x50, 0x127, "No groups enabled for max supported SSL/TLS version");
            goto LAB_00100a37;
         }

         local_78 = 0;
         uVar4 = 0;
         local_70 = 0;
         do {
            uVar1 = *(undefined2*)( local_50 + uVar4 * 2 );
            iVar2 = tls_valid_group(param_1, uVar1, local_5c, local_58, 0, &local_54);
            if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
               iVar2 = WPACKET_put_bytes__(param_2, uVar1, 2);
               if (iVar2 == 0) {
                  ERR_new();
                  uVar3 = 0x102;
                  goto LAB_00100a15;
               }

               if (( local_54 != 0 ) && ( local_58 == 0x304 )) {
                  local_70 = local_70 + 1;
               }

               local_78 = local_78 + 1;
            }

            uVar4 = uVar4 + 1;
         }
 while ( uVar4 < local_48 );
         iVar2 = WPACKET_close(param_2);
         if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
            if (local_70 == 0) goto LAB_00100b92;
            LAB_00100ba0:uVar3 = 1;
            goto LAB_00100a39;
         }

         if (local_78 == 0) goto LAB_00100bf8;
         ERR_new();
         uVar3 = 0x10f;
      }

      LAB_00100a15:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar3, "tls_construct_ctos_supported_groups");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0xe1, "tls_construct_ctos_supported_groups");
      ossl_statem_fatal(param_1, 0x50, iVar2, 0);
   }

   LAB_00100a37:uVar3 = 0;
   LAB_00100a39:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
undefined8 tls_construct_ctos_session_ticket(long param_1, undefined8 param_2) {
   int *piVar1;
   ushort *puVar2;
   int iVar3;
   void *pvVar4;
   undefined8 uVar5;
   ulong __n;
   iVar3 = tls_use_ticket();
   if (iVar3 == 0) {
      return 2;
   }

   piVar1 = *(int**)( param_1 + 0x900 );
   if (*(int*)( param_1 + 0x7c ) == 0) {
      if (piVar1 == (int*)0x0) goto LAB_00100d20;
      if (( *(long*)( piVar1 + 0xca ) == 0 ) || ( *piVar1 == 0x304 )) goto LAB_00100ca6;
      __n = *(ulong*)( piVar1 + 0xcc );
      if (__n == 0) goto LAB_00100d20;
   }
 else {
      if (piVar1 == (int*)0x0) {
         LAB_00100d20:if (( *(long*)( param_1 + 0xac8 ) != 0 ) && ( *(long*)( *(long*)( param_1 + 0xac8 ) + 8 ) == 0 )) {
            return 2;
         }

      }
 else {
         LAB_00100ca6:puVar2 = *(ushort**)( param_1 + 0xac8 );
         if (puVar2 != (ushort*)0x0) {
            if (*(long*)( puVar2 + 4 ) == 0) {
               return 2;
            }

            __n = ( ulong ) * puVar2;
            pvVar4 = CRYPTO_malloc(( uint ) * puVar2, "ssl/statem/extensions_clnt.c", 300);
            *(void**)( piVar1 + 0xca ) = pvVar4;
            pvVar4 = *(void**)( *(long*)( param_1 + 0x900 ) + 0x328 );
            if (pvVar4 == (void*)0x0) {
               ERR_new();
               uVar5 = 0x12e;
               goto LAB_00100de8;
            }

            memcpy(pvVar4, *(void**)( *(long*)( param_1 + 0xac8 ) + 8 ), __n);
            *(ulong*)( *(long*)( param_1 + 0x900 ) + 0x330 ) = __n;
            if (__n != 0) goto LAB_00100d3a;
            goto LAB_00100d20;
         }

      }

      __n = 0;
   }

   LAB_00100d3a:iVar3 = WPACKET_put_bytes__(param_2, 0x23, 2);
   if (( iVar3 != 0 ) && ( iVar3 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( *(long*)( param_1 + 0x900 ) + 0x328 ), __n, 2) ),iVar3 != 0) {
      return 1;
   }

   ERR_new();
   uVar5 = 0x13e;
   LAB_00100de8:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar5, "tls_construct_ctos_session_ticket");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_sig_algs(long param_1, undefined8 param_2) {
   int *piVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   iVar2 = *(int*)( param_1 + 0x9d4 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar1 = *(int**)( param_1 + 0x18 );
   if (( *(byte*)( *(long*)( piVar1 + 0x36 ) + 0x50 ) & 8 ) == 0) {
      uVar3 = 2;
      if (( iVar2 < 0x303 ) || ( ( *piVar1 != 0x10000 && ( *(int*)( param_1 + 0x48 ) < 0x303 ) ) )) goto LAB_00100f15;
   }
 else if (( ( iVar2 == 0x100 ) || ( 0xfefd < iVar2 ) ) || ( ( *piVar1 != 0x1ffff && ( ( *(int*)( param_1 + 0x48 ) == 0x100 || ( 0xfefd < *(int*)( param_1 + 0x48 ) ) ) ) ) )) {
      uVar3 = 2;
      goto LAB_00100f15;
   }

   uVar3 = tls12_get_psigalgs(param_1, 1, &local_28);
   iVar2 = WPACKET_put_bytes__(param_2, 0xd, 2);
   if (( ( iVar2 != 0 ) && ( ( ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 != 0 && ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 != 0 ) ) && ( iVar2 = tls12_copy_sigalgs(param_1, param_2, local_28, uVar3) ),iVar2 != 0 )) {
      iVar2 = WPACKET_close(param_2);
      uVar3 = 1;
      if (iVar2 != 0) goto LAB_00100f15;
   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x166, "tls_construct_ctos_sig_algs");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   uVar3 = 0;
   LAB_00100f15:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
undefined8 tls_construct_ctos_status_request(long param_1, undefined8 param_2, undefined8 param_3, long param_4) {
   int iVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   OCSP_RESPID *a;
   long in_FS_OFFSET;
   uchar *puStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = 2;
   if (( param_4 != 0 ) || ( *(int*)( param_1 + 0xa28 ) != 1 )) goto LAB_00101006;
   iVar1 = WPACKET_put_bytes__(param_2, 5, 2);
   if (( iVar1 == 0 ) || ( ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 || ( iVar1 = WPACKET_put_bytes__(param_2, 1, 1) ),iVar1 == 0 )) {
      LAB_00101070:ERR_new();
      uVar4 = 0x181;
   }
 else {
      iVar3 = 0;
      iVar1 = WPACKET_start_sub_packet_len__(param_2, 2);
      if (iVar1 == 0) goto LAB_00101070;
      for (; iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0xa40 )),iVar3 < iVar1; iVar3 = iVar3 + 1) {
         a = (OCSP_RESPID*)OPENSSL_sk_value(*(undefined8*)( param_1 + 0xa40 ));
         iVar1 = i2d_OCSP_RESPID(a, (uchar**)0x0);
         if (( ( iVar1 < 1 ) || ( iVar2 = WPACKET_sub_allocate_bytes__(param_2, (long)iVar1, &puStack_48, 2) ),iVar2 == 0 )) {
            ERR_new();
            uVar4 = 0x18d;
            goto LAB_00101081;
         }

      }

      iVar1 = WPACKET_close(param_2);
      if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
         ERR_new();
         uVar4 = 0x193;
      }
 else if (*(X509_EXTENSIONS**)( param_1 + 0xa48 ) == (X509_EXTENSIONS*)0x0) {
         LAB_001011ec:iVar1 = WPACKET_close(param_2);
         if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
            uVar4 = 1;
            goto LAB_00101006;
         }

         ERR_new();
         uVar4 = 0x1a6;
      }
 else {
         iVar1 = i2d_X509_EXTENSIONS(*(X509_EXTENSIONS**)( param_1 + 0xa48 ), (uchar**)0x0);
         if (iVar1 < 0) {
            ERR_new();
            uVar4 = 0x19b;
         }
 else {
            iVar3 = WPACKET_allocate_bytes(param_2, (long)iVar1, &puStack_48);
            if (( iVar3 != 0 ) && ( iVar3 = i2d_X509_EXTENSIONS(*(X509_EXTENSIONS**)( param_1 + 0xa48 ), &puStack_48) ),iVar3 == iVar1) goto LAB_001011ec;
            ERR_new();
            uVar4 = 0x1a1;
         }

      }

   }

   LAB_00101081:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar4, "tls_construct_ctos_status_request");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   uVar4 = 0;
   LAB_00101006:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
undefined8 tls_construct_ctos_npn(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x2f0 ) == 0) {
      return 2;
   }

   if (( *(long*)( param_1 + 0x260 ) != 0 ) && ( *(long*)( param_1 + 0x2e8 ) != 0 )) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0x3374, 2);
   if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
      return 1;
   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x1bd, "tls_construct_ctos_npn");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_alpn(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   *(undefined4*)( param_1 + 0x4d8 ) = 0;
   if (*(long*)( param_1 + 0xaf0 ) == 0) {
      return 2;
   }

   if (( *(long*)( param_1 + 0x260 ) == 0 ) || ( uVar2 = 2 * (long*)( param_1 + 0x2e8 ) == 0 )) {
      iVar1 = WPACKET_put_bytes__(param_2, 0x10, 2);
      if (( iVar1 != 0 ) && ( ( ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 && ( iVar1 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0xaf0 ), *(undefined8*)( param_1 + 0xaf8 ), 2) ),iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 )) {
         *(undefined4*)( param_1 + 0x4d8 ) = 1;
         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x1d4, "tls_construct_ctos_alpn");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      uVar2 = 0;
   }

   return uVar2;
}
undefined8 tls_construct_ctos_use_srtp(SSL *param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   stack_st_SRTP_PROTECTION_PROFILE *psVar3;
   long lVar4;
   undefined8 uVar5;
   int iVar6;
   psVar3 = SSL_get_srtp_profiles(param_1);
   if (psVar3 == (stack_st_SRTP_PROTECTION_PROFILE*)0x0) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0xe, 2);
   if (( ( iVar1 == 0 ) || ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 )) {
      ERR_new();
      uVar5 = 0x1ee;
   }
 else {
      iVar1 = OPENSSL_sk_num(psVar3);
      if (0 < iVar1) {
         iVar6 = 0;
         do {
            lVar4 = OPENSSL_sk_value(psVar3, iVar6);
            if (( lVar4 == 0 ) || ( iVar2 = WPACKET_put_bytes__(param_2, *(undefined8*)( lVar4 + 8 ), 2) ),iVar2 == 0) {
               ERR_new();
               uVar5 = 0x1f8;
               goto LAB_0010144b;
            }

            iVar6 = iVar6 + 1;
         }
 while ( iVar1 != iVar6 );
      }

      iVar1 = WPACKET_close(param_2);
      if (( ( iVar1 != 0 ) && ( iVar1 = WPACKET_put_bytes__(param_2, 0, 1) ),iVar1 != 0 )) {
         return 1;
      }

      ERR_new();
      uVar5 = 0x200;
   }

   LAB_0010144b:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar5, "tls_construct_ctos_use_srtp");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_etm(long param_1, undefined8 param_2) {
   int iVar1;
   if (( *(byte*)( param_1 + 0x9b2 ) & 8 ) != 0) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0x16, 2);
   if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2, 0, 2);
      if (iVar1 != 0) {
         return 1;
      }

   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x211, "tls_construct_ctos_etm");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_sct(long param_1, undefined8 param_2, undefined8 param_3, long param_4) {
   int iVar1;
   if (( *(long*)( param_1 + 0xb68 ) != 0 ) && ( param_4 == 0 )) {
      iVar1 = WPACKET_put_bytes__(param_2, 0x12, 2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_put_bytes__(param_2, 0, 2);
         if (iVar1 != 0) {
            return 1;
         }

      }

      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x226, "tls_construct_ctos_sct");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      return 0;
   }

   return 2;
}
undefined8 tls_construct_ctos_ems(long param_1, undefined8 param_2) {
   int iVar1;
   if (( *(byte*)( param_1 + 0x9b0 ) & 1 ) != 0) {
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
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x237, "tls_construct_ctos_ems");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_construct_ctos_supported_versions(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_38;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ssl_get_min_max_version(param_1, &local_38, &local_34, 0);
   if (iVar1 == 0) {
      uVar2 = 2;
      if (0x303 < local_34) {
         iVar1 = WPACKET_put_bytes__(param_2, 0x2b, 2);
         if (( ( iVar1 == 0 ) || ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 )) {
            ERR_new();
            uVar2 = 0x254;
         }
 else {
            lVar3 = (long)local_34;
            if (local_38 <= local_34) {
               do {
                  iVar1 = WPACKET_put_bytes__(param_2, lVar3, 2);
                  if (iVar1 == 0) {
                     ERR_new();
                     uVar2 = 0x25a;
                     goto LAB_001017d6;
                  }

                  lVar3 = lVar3 + -1;
               }
 while ( local_38 <= (int)lVar3 );
            }

            iVar1 = WPACKET_close(param_2);
            if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
               uVar2 = 1;
               goto LAB_001017fa;
            }

            ERR_new();
            uVar2 = 0x25f;
         }

         LAB_001017d6:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar2, "tls_construct_ctos_supported_versions");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         uVar2 = 0;
      }

   }
 else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x246, "tls_construct_ctos_supported_versions");
      ossl_statem_fatal(param_1, 0x50, iVar1, 0);
      uVar2 = 0;
   }

   LAB_001017fa:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
undefined8 tls_construct_ctos_psk_kex_modes(long param_1, undefined8 param_2) {
   ulong uVar1;
   int iVar2;
   uVar1 = *(ulong*)( param_1 + 0x9b0 );
   iVar2 = WPACKET_put_bytes__(param_2, 0x2d, 2);
   if (( ( ( ( iVar2 != 0 ) && ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 != 0 ) ) && ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 1) ),iVar2 != 0 )) &&( ( iVar2 = WPACKET_put_bytes__(param_2, 1, 1) ),iVar2 != 0 && ( ( ( uVar1 & 0x400 ) == 0 || ( iVar2 = WPACKET_put_bytes__(param_2, 0, 1) ),iVar2 != 0 ) ) ) && ( ( iVar2 = WPACKET_close(param_2) ),iVar2 != 0 && ( iVar2 = iVar2 != 0 ) ) * (uint*)( param_1 + 0xb10 ) = 3 - ( uint )(( uVar1 & 0x400 ) == 0);
   return 1;
}
ERR_new();ERR_set_debug("ssl/statem/extensions_clnt.c", 0x277, "tls_construct_ctos_psk_kex_modes");ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);return 0;}undefined8 tls_construct_ctos_key_share(long param_1, undefined8 param_2) {
   bool bVar1;
   int iVar2;
   short sVar3;
   ulong uVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   ulong local_40;
   short *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = (short*)0x0;
   iVar2 = WPACKET_put_bytes__(param_2, 0x33, 2);
   if (( ( iVar2 == 0 ) || ( iVar2 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar2 == 0 )) {
      ERR_new();
      uVar5 = 0x2d2;
      LAB_00101a90:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar5, "tls_construct_ctos_key_share");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   }
 else {
      tls1_get_requested_keyshare_groups(param_1, &local_38, &local_40);
      bVar1 = false;
      if (local_40 == 1) {
         if (*local_38 == 0) {
            tls1_get_supported_groups(param_1, &local_38, &local_40);
            bVar1 = true;
            goto LAB_00101b12;
         }

         sVar3 = *(short*)( param_1 + 0x4de );
         if (( sVar3 != 0 ) && ( *(long*)( param_1 + 0x308 ) == 0 )) goto LAB_00101cde;
         if (*(long*)( param_1 + 0xa90 ) != 0) goto LAB_00101b46;
         LAB_00101c2f:uVar4 = 0;
         while (true) {
            iVar2 = tls_group_allowed(param_1, local_38[uVar4], 0x20004);
            if (( iVar2 != 0 ) && ( iVar2 = tls_valid_group(param_1, local_38[uVar4], 0x304, 0x304, 0, 0) ),iVar2 != 0) break;
            uVar4 = uVar4 + 1;
            if (local_40 <= uVar4) goto LAB_00101bcb;
         }
;
         sVar3 = local_38[uVar4];
         if (sVar3 != 0) goto LAB_00101ce9;
         LAB_00101c90:ERR_new();
         uVar5 = 0x2fa;
      }
 else {
         LAB_00101b12:if (local_40 != 0) {
            sVar3 = *(short*)( param_1 + 0x4de );
            if (( sVar3 == 0 ) || ( *(long*)( param_1 + 0x308 ) != 0 )) {
               if (( *(long*)( param_1 + 0xa90 ) == 0 ) || ( bVar1 )) goto LAB_00101c2f;
               LAB_00101b46:lVar6 = 0;
               uVar4 = 0;
               do {
                  iVar2 = tls_group_allowed(param_1, local_38[uVar4], 0x20004);
                  if (( iVar2 != 0 ) && ( iVar2 = tls_valid_group(param_1, local_38[uVar4], 0x304, 0x304, 0, 0) ),iVar2 != 0) {
                     if (local_38[uVar4] == 0) goto LAB_00101c90;
                     iVar2 = add_key_share(param_1, param_2, local_38[uVar4], lVar6);
                     if (iVar2 == 0) goto LAB_00101ab2;
                     lVar6 = lVar6 + 1;
                  }

                  uVar4 = uVar4 + 1;
               }
 while ( uVar4 < local_40 );
               LAB_00101bcb:iVar2 = WPACKET_close(param_2);
               if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
                  uVar5 = 1;
                  goto LAB_00101ab4;
               }

               ERR_new();
               uVar5 = 0x309;
               goto LAB_00101a90;
            }

            LAB_00101cde:*(undefined8*)( param_1 + 0x338 ) = 0;
            LAB_00101ce9:iVar2 = add_key_share(param_1, param_2, sVar3, 0);
            if (iVar2 != 0) goto LAB_00101bcb;
            goto LAB_00101ab2;
         }

         ERR_new();
         uVar5 = 0x2de;
      }

      ERR_set_debug("ssl/statem/extensions_clnt.c", uVar5, "tls_construct_ctos_key_share");
      ossl_statem_fatal(param_1, 0x50, 0x65, 0);
   }

   LAB_00101ab2:uVar5 = 0;
   LAB_00101ab4:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
undefined8 tls_construct_ctos_cookie(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   uVar2 = 2;
   if (*(long*)( param_1 + 0xb28 ) != 0) {
      iVar1 = WPACKET_put_bytes__(param_2, 0x2c, 2);
      if (( ( ( iVar1 == 0 ) || ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 == 0 ) ) || ( iVar1 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0xb20 ), *(undefined8*)( param_1 + 0xb28 ), 2) ),iVar1 == 0) {
         ERR_new();
         uVar2 = 0;
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x322, "tls_construct_ctos_cookie");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      }
 else {
         uVar2 = 1;
      }

      CRYPTO_free(*(void**)( param_1 + 0xb20 ));
      *(undefined8*)( param_1 + 0xb20 ) = 0;
      *(undefined8*)( param_1 + 0xb28 ) = 0;
   }

   return uVar2;
}
undefined8 tls_construct_ctos_early_data(long param_1, undefined8 param_2) {
   byte *a;
   int iVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 uVar6;
   char *pcVar7;
   code *pcVar8;
   SSL_SESSION *pSVar9;
   byte *pbVar10;
   long in_FS_OFFSET;
   byte bVar11;
   char *local_368;
   size_t local_360;
   SSL_SESSION *local_358;
   undefined2 local_34a;
   char local_348[272];
   undefined1 local_238[520];
   long local_30;
   bVar11 = 0;
   uVar6 = *(undefined8*)( param_1 + 0x40 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_368 = (char*)0x0;
   local_360 = 0;
   local_358 = (SSL_SESSION*)0x0;
   if (*(int*)( param_1 + 0x8d0 ) == 1) {
      uVar4 = ssl_handshake_md();
      pcVar8 = *(code**)( param_1 + 0x988 );
      if (pcVar8 != (code*)0x0) goto LAB_00101ee9;
      if (local_358 == (SSL_SESSION*)0x0) goto LAB_00102098;
      goto LAB_00101f1e;
   }

   pcVar8 = *(code**)( param_1 + 0x988 );
   uVar4 = 0;
   if (pcVar8 != (code*)0x0) {
      LAB_00101ee9:iVar1 = ( *pcVar8 )(uVar6, uVar4, &local_368, &local_360, &local_358);
      if (iVar1 != 0) {
         if (local_358 == (SSL_SESSION*)0x0) goto LAB_00102098;
         if (local_358->ssl_version == 0x304) goto LAB_00101f1e;
      }

      SSL_SESSION_free(local_358);
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x345, "tls_construct_ctos_early_data");
      ossl_statem_fatal(param_1, 0x50, 0xdb, 0);
      uVar6 = 0;
      goto LAB_0010219f;
   }

   LAB_00102098:pcVar8 = *(code**)( param_1 + 0x970 );
   if (pcVar8 == (code*)0x0) goto LAB_00101f1e;
   pcVar7 = local_348;
   for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
      for (int i = 0; i < 8; i++) {
         pcVar7[i] = '\0';
      }

      pcVar7 = pcVar7 + (ulong)bVar11 * -0x10 + 8;
   }

   *pcVar7 = '\0';
   uVar2 = ( *pcVar8 )(uVar6, 0, local_348, 0x100, local_238, 0x200);
   uVar5 = (ulong)uVar2;
   if (0x200 < uVar2) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x354, "tls_construct_ctos_early_data");
      ossl_statem_fatal(param_1, 0x28, 0xc0103, 0);
      uVar6 = 0;
      goto LAB_0010219f;
   }

   if (uVar5 == 0) {
      LAB_00101f1e:SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x908 ));
      *(SSL_SESSION**)( param_1 + 0x908 ) = local_358;
      if (local_358 != (SSL_SESSION*)0x0) {
         CRYPTO_free(*(void**)( param_1 + 0x910 ));
         lVar3 = CRYPTO_memdup(local_368, local_360, "ssl/statem/extensions_clnt.c", 0x37e);
         *(long*)( param_1 + 0x910 ) = lVar3;
         if (lVar3 == 0) {
            *(undefined8*)( param_1 + 0x918 ) = 0;
            ERR_new();
            uVar6 = 0x381;
            goto LAB_00102283;
         }

         *(size_t*)( param_1 + 0x918 ) = local_360;
      }

      if (*(int*)( param_1 + 0xf0 ) == 2) {
         iVar1 = *(int*)( (*(SSL_SESSION **)(param_1 + 0x900))[1].krb5_client_princ + 0x5c );
         pSVar9 = *(SSL_SESSION**)( param_1 + 0x900 );
         if (( iVar1 != 0 ) || ( ( local_358 != (SSL_SESSION*)0x0 && ( iVar1 = *(int*)( local_358[1].krb5_client_princ + 0x5c ) ),pSVar9 = local_358,iVar1 != 0 ) )) {
            pcVar7 = *(char**)( pSVar9[1].krb5_client_princ + 0x38 );
            *(int*)( param_1 + 0x1540 ) = iVar1;
            if (( pcVar7 != (char*)0x0 ) && ( ( *(char**)( param_1 + 0xa20 ) == (char*)0x0 || ( iVar1 = strcmp(*(char**)( param_1 + 0xa20 ), pcVar7) ),iVar1 != 0 ) )) {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_clnt.c", 0x394, "tls_construct_ctos_early_data");
               ossl_statem_fatal(param_1, 0x50, 0xe7, 0);
               uVar6 = 0;
               goto LAB_0010219f;
            }

            pbVar10 = *(byte**)( param_1 + 0xaf0 );
            if (pbVar10 == (byte*)0x0) {
               if (*(long*)( pSVar9[1].krb5_client_princ + 0x60 ) != 0) {
                  ERR_new();
                  uVar6 = 0x39b;
                  LAB_001022be:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar6, "tls_construct_ctos_early_data");
                  ossl_statem_fatal(param_1, 0x50, 0xde, 0);
                  uVar6 = 0;
                  goto LAB_0010219f;
               }

            }
 else if (*(long*)( pSVar9[1].krb5_client_princ + 0x60 ) != 0) {
               lVar3 = *(long*)( param_1 + 0xaf8 );
               if (lVar3 < 0) {
                  ERR_new();
                  uVar6 = 0x3a8;
                  goto LAB_00102283;
               }

               do {
                  if (lVar3 == 0) {
                     LAB_001023c0:ERR_new();
                     uVar6 = 0x3b3;
                     goto LAB_001022be;
                  }

                  uVar5 = ( ulong ) * pbVar10;
                  if (lVar3 - 1U < uVar5) goto LAB_001023c0;
                  a = pbVar10 + 1;
                  lVar3 = ( lVar3 - 1U ) - uVar5;
                  pbVar10 = a + uVar5;
               }
 while ( ( *(ulong*)( pSVar9[1].krb5_client_princ + 0x68 ) != uVar5 ) || ( iVar1 = CRYPTO_memcmp(a, *(void**)( pSVar9[1].krb5_client_princ + 0x60 ), uVar5) ),iVar1 != 0 );
            }

            iVar1 = WPACKET_put_bytes__(param_2, 0x2a, 2);
            if (( iVar1 != 0 ) && ( ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 && ( iVar1 = WPACKET_close(param_2) ),iVar1 != 0 )) {
               *(undefined8*)( param_1 + 0xb18 ) = _LC2;
               uVar6 = 1;
               goto LAB_0010219f;
            }

            ERR_new();
            uVar6 = 0x3bc;
            goto LAB_00102283;
         }

      }

      *(undefined4*)( param_1 + 0x1540 ) = 0;
      uVar6 = 2;
   }
 else {
      local_34a = 0x113;
      local_360 = strlen(local_348);
      local_368 = local_348;
      lVar3 = SSL_CIPHER_find(param_1, &local_34a);
      if (lVar3 != 0) {
         local_358 = SSL_SESSION_new();
         if (( ( ( local_358 == (SSL_SESSION*)0x0 ) || ( iVar1 = SSL_SESSION_set1_master_key(local_358, local_238, uVar5) ),iVar1 == 0 ) ) || ( iVar1 = iVar1 == 0 )) {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x371, "tls_construct_ctos_early_data");
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
            OPENSSL_cleanse(local_238, uVar5);
            uVar6 = 0;
            goto LAB_0010219f;
         }

         OPENSSL_cleanse(local_238, uVar5);
         goto LAB_00101f1e;
      }

      ERR_new();
      uVar6 = 0x368;
      LAB_00102283:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar6, "tls_construct_ctos_early_data");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      uVar6 = 0;
   }

   LAB_0010219f:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
undefined8 tls_construct_ctos_padding(long param_1, undefined8 param_2) {
   int *piVar1;
   int iVar2;
   undefined8 uVar3;
   size_t sVar4;
   long lVar5;
   long in_FS_OFFSET;
   void *local_30;
   size_t local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = 2;
   if (( *(byte*)( param_1 + 0x9b0 ) & 0x10 ) == 0) goto LAB_0010248e;
   iVar2 = WPACKET_get_total_written(param_2, &local_28);
   if (iVar2 == 0) {
      ERR_new();
      uVar3 = 0x3ec;
      LAB_00102591:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar3, "tls_construct_ctos_padding");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   }
 else {
      piVar1 = *(int**)( param_1 + 0x900 );
      sVar4 = local_28;
      if (( ( ( *piVar1 != 0x304 ) || ( *(long*)( piVar1 + 0xcc ) == 0 ) ) || ( *(long*)( piVar1 + 0xbe ) == 0 ) ) || ( lVar5 = ssl_md(*(undefined8*)( param_1 + 8 ), *(undefined4*)( *(long*)( piVar1 + 0xbe ) + 0x40 )) ),sVar4 = local_28,lVar5 == 0) {
         LAB_00102479:if (sVar4 - 0x100 < 0x100) {
            local_28 = 1;
            if (4 < 0x200 - sVar4) {
               local_28 = 0x1fc - sVar4;
            }

            iVar2 = WPACKET_put_bytes__(param_2, 0x15, 2);
            if (( iVar2 == 0 ) || ( iVar2 = WPACKET_sub_allocate_bytes__(param_2, local_28, &local_30, 2) ),iVar2 == 0) {
               ERR_new();
               uVar3 = 0x419;
               goto LAB_00102591;
            }

            memset(local_30, 0, local_28);
         }

         uVar3 = 1;
         goto LAB_0010248e;
      }

      iVar2 = EVP_MD_get_size(lVar5);
      if (0 < iVar2) {
         sVar4 = *(long*)( *(long*)( param_1 + 0x900 ) + 0x330 ) + local_28 + 0xf + (long)iVar2;
         goto LAB_00102479;
      }

   }

   uVar3 = 0;
   LAB_0010248e:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
undefined1 tls_construct_ctos_psk(long param_1, undefined8 param_2, undefined8 param_3, ulong param_4) {
   ulong uVar1;
   bool bVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   int *piVar7;
   long lVar8;
   ulong uVar9;
   long lVar10;
   undefined8 extraout_RDX;
   undefined8 uVar11;
   long in_FS_OFFSET;
   undefined1 uVar12;
   undefined1 auVar13[16];
   int local_74;
   int local_6c;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   uVar11 = *(undefined8*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar7 = *(int**)( param_1 + 0x900 );
   local_50 = 0;
   local_48 = 0;
   *(undefined4*)( param_1 + 0xb38 ) = 0;
   if (*piVar7 != 0x304) {
      LAB_00102890:uVar12 = 2;
      goto LAB_00102895;
   }

   if (*(long*)( piVar7 + 0xcc ) == 0) {
      lVar6 = *(long*)( param_1 + 0x908 );
      if (lVar6 == 0) goto LAB_00102890;
      if (*(int*)( param_1 + 0x8d0 ) == 1) goto LAB_00102a40;
      bVar2 = false;
      lVar8 = 0;
      lVar10 = 0;
      local_6c = 0;
      local_74 = 0;
      LAB_00102683:lVar6 = ssl_md(uVar11, *(undefined4*)( *(long*)( lVar6 + 0x2f8 ) + 0x40 ));
      if (lVar6 == 0) {
         ERR_new();
         uVar11 = 0x49d;
      }
 else if (( *(int*)( param_1 + 0x8d0 ) == 1 ) && ( lVar6 != lVar10 )) {
         ERR_new();
         uVar11 = 0x4a6;
      }
 else {
         iVar3 = EVP_MD_get_size(lVar6);
         if (0 < iVar3) goto LAB_001027c3;
         ERR_new();
         uVar11 = 0x4ac;
      }

      ERR_set_debug("ssl/statem/extensions_clnt.c", uVar11, "tls_construct_ctos_psk");
      ossl_statem_fatal(param_1, 0x50, 0xdb, 0);
      uVar12 = 0;
      goto LAB_00102895;
   }

   if (*(int*)( param_1 + 0x8d0 ) == 1) {
      LAB_00102a40:lVar10 = ssl_handshake_md(param_1);
      piVar7 = *(int**)( param_1 + 0x900 );
      if (*(long*)( piVar7 + 0xcc ) != 0) goto LAB_00102708;
      local_6c = 0;
      lVar6 = *(long*)( param_1 + 0x908 );
      lVar8 = 0;
      local_74 = 0;
      goto LAB_0010287d;
   }

   lVar10 = 0;
   LAB_00102708:if (*(long*)( piVar7 + 0xbe ) == 0) {
      ERR_new();
      uVar11 = 0x449;
   }
 else {
      lVar8 = ssl_md(uVar11, *(undefined4*)( *(long*)( piVar7 + 0xbe ) + 0x40 ));
      if (( lVar8 == 0 ) || ( ( *(int*)( param_1 + 0x8d0 ) == 1 && ( lVar8 != lVar10 ) ) )) {
         LAB_00102866:local_6c = 0;
         lVar6 = *(long*)( param_1 + 0x908 );
         local_74 = 0;
         LAB_0010287d:if (lVar6 == 0) goto LAB_00102890;
         bVar2 = false;
         goto LAB_00102683;
      }

      lVar6 = *(long*)( param_1 + 0x900 );
      uVar9 = ossl_time_now();
      uVar1 = *(ulong*)( lVar6 + 0x2e0 );
      if (uVar9 < uVar1) {
         local_74 = 0;
         lVar6 = *(long*)( param_1 + 0x900 );
      }
 else {
         lVar6 = *(long*)( param_1 + 0x900 );
         local_74 = (int)( ( uVar9 - uVar1 ) / 1000000000 );
         if (local_74 != 0) {
            uVar5 = local_74 - 1;
            param_4 = (ulong)uVar5;
            if (*(ulong*)( lVar6 + 0x338 ) < param_4) goto LAB_00102866;
            local_74 = (int)( param_4 * 1000 );
            if (uVar5 == 0) {
               local_74 = 0;
            }
 else if ((int)( param_4 * 1000 >> 0x20 ) != 0) {
               local_6c = 0;
               lVar6 = *(long*)( param_1 + 0x908 );
               goto LAB_0010287d;
            }

         }

      }

      param_4 = ( ulong ) * (uint*)( lVar6 + 0x340 );
      local_74 = local_74 + *(uint*)( lVar6 + 0x340 );
      local_6c = EVP_MD_get_size(lVar8);
      if (local_6c < 1) {
         lVar6 = *(long*)( param_1 + 0x908 );
         goto LAB_0010287d;
      }

      lVar6 = *(long*)( param_1 + 0x908 );
      *(int*)( param_1 + 0xb38 ) = *(int*)( param_1 + 0xb38 ) + 1;
      bVar2 = true;
      if (lVar6 != 0) goto LAB_00102683;
      iVar3 = 0;
      lVar6 = 0;
      LAB_001027c3:iVar4 = WPACKET_put_bytes__(param_2, 0x29, 2);
      if (( ( iVar4 == 0 ) || ( iVar4 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar4 == 0 )) {
         ERR_new();
         uVar11 = 0x4b5;
      }
 else {
         if (bVar2) {
            param_4 = 2;
            iVar4 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( *(long*)( param_1 + 0x900 ) + 0x328 ), *(undefined8*)( *(long*)( param_1 + 0x900 ) + 0x330 ));
            if (( iVar4 == 0 ) || ( iVar4 = iVar4 == 0 )) {
               ERR_new();
               uVar11 = 0x4bd;
               goto LAB_001027ff;
            }

         }

         if (*(long*)( param_1 + 0x908 ) != 0) {
            param_4 = 2;
            iVar4 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0x910 ), *(undefined8*)( param_1 + 0x918 ));
            if (( iVar4 == 0 ) || ( iVar4 = iVar4 == 0 )) {
               ERR_new();
               uVar11 = 0x4c6;
               goto LAB_001027ff;
            }

            *(int*)( param_1 + 0xb38 ) = *(int*)( param_1 + 0xb38 ) + 1;
         }

         iVar4 = WPACKET_close(param_2);
         if (( ( iVar4 != 0 ) && ( iVar4 = WPACKET_get_total_written(param_2, &local_60) ),iVar4 != 0 )) {
            if (bVar2) {
               param_4 = 1;
               iVar4 = WPACKET_sub_allocate_bytes__(param_2, (long)local_6c, &local_50);
               if (iVar4 == 0) goto LAB_00102b38;
            }

            if (*(long*)( param_1 + 0x908 ) != 0) {
               param_4 = 1;
               iVar3 = WPACKET_sub_allocate_bytes__(param_2, (long)iVar3, &local_48);
               if (iVar3 == 0) goto LAB_00102b38;
            }

            iVar3 = WPACKET_close(param_2);
            if (( ( iVar3 != 0 ) && ( iVar3 = WPACKET_close(param_2) ),iVar3 != 0 )) {
               auVar13 = WPACKET_get_curr(param_2);
               uVar11 = auVar13._8_8_;
               local_58 = auVar13._0_8_ - local_58;
               if (( bVar2 ) && ( iVar3 = tls_psk_do_binder(param_1, lVar8, local_58, local_60, 0, local_50, *(undefined8*)( param_1 + 0x900 ), 1, 0, param_4) ),uVar11 = extraout_RDX,iVar3 != 1) {
                  uVar12 = 0;
               }
 else if (*(long*)( param_1 + 0x908 ) == 0) {
                  uVar12 = 1;
               }
 else {
                  iVar3 = tls_psk_do_binder(param_1, lVar6, local_58, local_60, 0, local_48, *(long*)( param_1 + 0x908 ), 1, 1, uVar11);
                  uVar12 = iVar3 == 1;
               }

               goto LAB_00102895;
            }

         }

         LAB_00102b38:ERR_new();
         uVar11 = 0x4db;
      }

   }

   LAB_001027ff:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar11, "tls_construct_ctos_psk");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   uVar12 = 0;
   LAB_00102895:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12;
}
undefined8 tls_construct_ctos_post_handshake_auth(long param_1, undefined8 param_2) {
   int iVar1;
   if (*(int*)( param_1 + 0xbac ) == 0) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0x31, 2);
   if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2, 2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_close(param_2);
         if (iVar1 != 0) {
            *(undefined4*)( param_1 + 0xba8 ) = 1;
            return 1;
         }

      }

   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x502, "tls_construct_ctos_post_handshake_auth");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_parse_stoc_renegotiate(long param_1, undefined8 *param_2) {
   byte *__s1;
   byte bVar1;
   ulong __n;
   ulong __n_00;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   undefined8 uVar5;
   byte *__s1_00;
   __n = *(ulong*)( param_1 + 0x460 );
   __n_00 = *(ulong*)( param_1 + 0x4a8 );
   uVar4 = __n + __n_00;
   if (( ( __n == 0 ) && ( uVar4 != 0 ) ) || ( ( __n_00 == 0 && ( uVar4 != 0 ) ) )) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x520, "tls_parse_stoc_renegotiate");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
      return 0;
   }

   if (param_2[1] == 0) {
      ERR_new();
      uVar5 = 0x526;
   }
 else {
      uVar3 = param_2[1] - 1;
      bVar1 = *(byte*)*param_2;
      __s1_00 = (byte*)*param_2 + 1;
      param_2[1] = uVar3;
      *param_2 = __s1_00;
      if (uVar3 == bVar1) {
         if (uVar4 == uVar3) {
            if (__n <= uVar4) {
               uVar4 = uVar4 - __n;
               __s1 = __s1_00 + __n;
               *param_2 = __s1;
               param_2[1] = uVar4;
               iVar2 = memcmp(__s1_00, (void*)( param_1 + 0x420 ), __n);
               if (iVar2 == 0) {
                  if (__n_00 <= uVar4) {
                     *param_2 = __s1 + __n_00;
                     param_2[1] = uVar4 - __n_00;
                     iVar2 = memcmp(__s1, (void*)( param_1 + 0x468 ), __n_00);
                     if (iVar2 == 0) {
                        *(undefined4*)( param_1 + 0x4b0 ) = 1;
                        return 1;
                     }

                  }

                  ERR_new();
                  uVar5 = 0x540;
                  goto LAB_00102e91;
               }

            }

            ERR_new();
            uVar5 = 0x539;
         }
 else {
            ERR_new();
            uVar5 = 0x532;
         }

         LAB_00102e91:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar5, "tls_parse_stoc_renegotiate");
         ossl_statem_fatal(param_1, 0x2f, 0x151, 0);
         return 0;
      }

      ERR_new();
      uVar5 = 0x52c;
   }

   ERR_set_debug("ssl/statem/extensions_clnt.c", uVar5, "tls_parse_stoc_renegotiate");
   ossl_statem_fatal(param_1, 0x32, 0x150, 0);
   return 0;
}
undefined8 tls_parse_stoc_maxfragmentlen(long param_1, undefined8 *param_2) {
   byte bVar1;
   undefined8 uVar2;
   if (param_2[1] == 1) {
      bVar1 = *(byte*)*param_2;
      param_2[1] = 0;
      *param_2 = (byte*)*param_2 + 1;
      if (bVar1 - 1 < 4) {
         if (*(byte*)( param_1 + 0xb34 ) == bVar1) {
            *(byte*)( *(long*)( param_1 + 0x900 ) + 0x358 ) = bVar1;
            return 1;
         }

         ERR_new();
         uVar2 = 0x562;
      }
 else {
         ERR_new();
         uVar2 = 0x556;
      }

      ERR_set_debug("ssl/statem/extensions_clnt.c", uVar2, "tls_parse_stoc_maxfragmentlen");
      ossl_statem_fatal(param_1, 0x2f, 0xe8, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x550, "tls_parse_stoc_maxfragmentlen");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   }

   return 0;
}
undefined8 tls_parse_stoc_server_name(long param_1, long param_2) {
   long lVar1;
   char *pcVar2;
   undefined8 uVar3;
   if (*(char**)( param_1 + 0xa20 ) == (char*)0x0) {
      ERR_new();
      uVar3 = 0x575;
   }
 else {
      if (*(long*)( param_2 + 8 ) != 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x57a, "tls_parse_stoc_server_name");
         ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
         return 0;
      }

      if (*(int*)( param_1 + 0x508 ) != 0) {
         return 1;
      }

      lVar1 = *(long*)( param_1 + 0x900 );
      if (*(long*)( lVar1 + 800 ) == 0) {
         pcVar2 = CRYPTO_strdup(*(char**)( param_1 + 0xa20 ), "ssl/statem/extensions_clnt.c", 0x583);
         *(char**)( lVar1 + 800 ) = pcVar2;
         if (*(long*)( *(long*)( param_1 + 0x900 ) + 800 ) != 0) {
            return 1;
         }

         ERR_new();
         uVar3 = 0x585;
      }
 else {
         ERR_new();
         uVar3 = 0x580;
      }

   }

   ERR_set_debug("ssl/statem/extensions_clnt.c", uVar3, "tls_parse_stoc_server_name");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_parse_stoc_ec_pt_formats(long param_1, long *param_2) {
   int iVar1;
   byte *pbVar2;
   long lVar3;
   ulong uVar4;
   byte *pbVar5;
   uint num;
   undefined8 *puVar6;
   byte bVar7;
   bVar7 = 0;
   lVar3 = param_2[1];
   pbVar5 = (byte*)*param_2;
   if (( lVar3 == 0 ) || ( uVar4 = uVar4 != *pbVar5 )) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x595, "tls_parse_stoc_ec_pt_formats");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
      return 0;
   }

   iVar1 = *(int*)( param_1 + 0x508 );
   param_2[1] = 0;
   *param_2 = (long)( pbVar5 + lVar3 );
   if (iVar1 == 0) {
      if (uVar4 == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x59b, "tls_parse_stoc_ec_pt_formats");
         ossl_statem_fatal(param_1, 0x32, 0x10f, 0);
         return 0;
      }

      *(undefined8*)( param_1 + 0xa78 ) = 0;
      CRYPTO_free(*(void**)( param_1 + 0xa80 ));
      num = (uint)uVar4;
      pbVar2 = (byte*)CRYPTO_malloc(num, "ssl/statem/extensions_clnt.c", 0x5a1);
      *(byte**)( param_1 + 0xa80 ) = pbVar2;
      if (pbVar2 == (byte*)0x0) {
         *(undefined8*)( param_1 + 0xa78 ) = 0;
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x5a4, "tls_parse_stoc_ec_pt_formats");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return 0;
      }

      *(ulong*)( param_1 + 0xa78 ) = uVar4;
      if (num < 8) {
         if (( uVar4 & 4 ) == 0) {
            if (( num != 0 ) && ( *pbVar2 = pbVar5[1](uVar4 & 2) != 0 )) {
               *(undefined2*)( pbVar2 + ( ( uVar4 & 0xffffffff ) - 2 ) ) = *(undefined2*)( pbVar5 + ( ( uVar4 & 0xffffffff ) - 1 ) );
            }

         }
 else {
            *(undefined4*)pbVar2 = *(undefined4*)( pbVar5 + 1 );
            *(undefined4*)( pbVar2 + ( ( uVar4 & 0xffffffff ) - 4 ) ) = *(undefined4*)( pbVar5 + ( ( uVar4 & 0xffffffff ) - 3 ) );
         }

      }
 else {
         *(undefined8*)pbVar2 = *(undefined8*)( pbVar5 + 1 );
         *(undefined8*)( pbVar2 + ( ( uVar4 & 0xffffffff ) - 8 ) ) = *(undefined8*)( pbVar5 + ( ( uVar4 & 0xffffffff ) - 7 ) );
         lVar3 = (long)pbVar2 - (long)( ( ulong )(pbVar2 + 8) & 0xfffffffffffffff8 );
         pbVar5 = pbVar5 + ( 1 - lVar3 );
         puVar6 = (undefined8*)( ( ulong )(pbVar2 + 8) & 0xfffffffffffffff8 );
         for (uVar4 = ( ulong )(num + (int)lVar3 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = *(undefined8*)pbVar5;
            pbVar5 = pbVar5 + ( (ulong)bVar7 * -2 + 1 ) * 8;
            puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
         }

      }

   }

   return 1;
}
undefined8 tls_parse_stoc_session_ticket(long param_1, undefined8 *param_2) {
   int iVar1;
   if (( *(code**)( param_1 + 0xad0 ) != (code*)0x0 ) && ( iVar1 = ( **(code**)( param_1 + 0xad0 ) )(*(undefined8*)( param_1 + 0x40 ), *param_2, *(undefined4*)( param_2 + 1 ), *(undefined8*)( param_1 + 0xad8 )) ),iVar1 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x5bf, "tls_parse_stoc_session_ticket");
      ossl_statem_fatal(param_1, 0x28, 0x6e, 0);
      return 0;
   }

   iVar1 = tls_use_ticket(param_1);
   if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x5c4, "tls_parse_stoc_session_ticket");
      ossl_statem_fatal(param_1, 0x6e, 0x6e, 0);
   }
 else {
      if (param_2[1] == 0) {
         *(undefined4*)( param_1 + 0xa60 ) = 1;
         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x5c8, "tls_parse_stoc_session_ticket");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   }

   return 0;
}
undefined8 tls_parse_stoc_status_request(long param_1, long param_2, int param_3, undefined8 param_4, long param_5) {
   int iVar1;
   undefined8 uVar2;
   if (param_3 == 0x4000) {
      return 1;
   }

   if (*(int*)( param_1 + 0xa28 ) != 1) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x5e0, "tls_parse_stoc_status_request");
      ossl_statem_fatal(param_1, 0x6e, 0x6e, 0);
      return 0;
   }

   if (( ( ( *(byte*)( *(long*)( *(int**)( param_1 + 0x18 ) + 0x36 ) + 0x50 ) & 8 ) == 0 ) && ( iVar1 = **(int**)( param_1 + 0x18 ) ),0x303 < iVar1 )) {
      if (param_5 == 0) {
         uVar2 = tls_process_cert_status_body(param_1);
         return uVar2;
      }

   }
 else {
      if (*(long*)( param_2 + 8 ) != 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x5e4, "tls_parse_stoc_status_request");
         ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
         return 0;
      }

      *(undefined4*)( param_1 + 0xa3c ) = 1;
   }

   return 1;
}
bool tls_parse_stoc_sct(long param_1, long *param_2, uint param_3, undefined8 param_4, undefined8 param_5) {
   ulong __n;
   ulong uVar1;
   void *__src;
   int iVar2;
   long lVar3;
   void *__dest;
   if (param_3 == 0x4000) {
      return true;
   }

   if (*(long*)( param_1 + 0xb68 ) == 0) {
      lVar3 = custom_ext_find(*(long*)( param_1 + 0x880 ) + 0x80, ( ( param_3 >> 8 ^ 1 ) & 1 ) * 2, 0x12, 0);
      if (lVar3 == 0) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x628, "tls_parse_stoc_sct");
         ossl_statem_fatal(param_1, 0x6e, 0x6e, 0);
         return false;
      }

      iVar2 = custom_ext_parse(param_1, param_3, 0x12, *param_2, param_2[1], param_4, param_5);
      return iVar2 != 0;
   }

   __n = param_2[1];
   CRYPTO_free(*(void**)( param_1 + 0xa30 ));
   *(short*)( param_1 + 0xa38 ) = (short)__n;
   *(undefined8*)( param_1 + 0xa30 ) = 0;
   if (__n != 0) {
      __dest = CRYPTO_malloc((int)__n, "ssl/statem/extensions_clnt.c", 0x612);
      *(void**)( param_1 + 0xa30 ) = __dest;
      if (__dest == (void*)0x0) {
         *(undefined2*)( param_1 + 0xa38 ) = 0;
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x615, "tls_parse_stoc_sct");
         ossl_statem_fatal(param_1, 0x50, 0x8000f, 0);
         return false;
      }

      uVar1 = param_2[1];
      __src = (void*)*param_2;
      if (uVar1 < __n) {
         ERR_new();
         ERR_set_debug("ssl/statem/extensions_clnt.c", 0x619, "tls_parse_stoc_sct");
         ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         return false;
      }

      memcpy(__dest, __src, __n);
      *param_2 = (long)__src + __n;
      param_2[1] = uVar1 - __n;
   }

   return true;
}
undefined8 tls_parse_stoc_npn(long param_1, undefined8 *param_2) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   byte *pbVar6;
   ulong uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   byte bVar10;
   byte local_29;
   undefined8 *local_28;
   long local_20;
   bVar10 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0x260 ) != 0 ) && ( *(long*)( param_1 + 0x2e8 ) != 0 )) {
      LAB_001038f9:uVar5 = 1;
      goto LAB_001037ed;
   }

   pcVar1 = *(code**)( *(long*)( param_1 + 8 ) + 0x2f0 );
   if (pcVar1 != (code*)0x0) {
      lVar3 = param_2[1];
      pbVar6 = (byte*)*param_2;
      LAB_00103796:if (lVar3 == 0) {
         iVar2 = ( *pcVar1 )(*(undefined8*)( param_1 + 0x40 ), &local_28, &local_29, (byte*)*param_2, param_2[1], *(undefined8*)( *(long*)( param_1 + 8 ) + 0x2f8 ));
         if (( iVar2 == 0 ) && ( local_29 != 0 )) {
            CRYPTO_free(*(void**)( param_1 + 0xb00 ));
            puVar4 = (undefined8*)CRYPTO_malloc((uint)local_29, "ssl/statem/extensions_clnt.c", 0x675);
            *(undefined8**)( param_1 + 0xb00 ) = puVar4;
            if (puVar4 != (undefined8*)0x0) {
               uVar8 = (ulong)local_29;
               if (local_29 < 8) {
                  if (( local_29 & 4 ) == 0) {
                     if (( local_29 != 0 ) && ( *(undefined1*)puVar4 = *(undefined1*)local_28(local_29 & 2) != 0 )) {
                        *(undefined2*)( (long)puVar4 + ( uVar8 - 2 ) ) = *(undefined2*)( (long)local_28 + ( uVar8 - 2 ) );
                     }

                  }
 else {
                     *(undefined4*)puVar4 = *(undefined4*)local_28;
                     *(undefined4*)( (long)puVar4 + ( uVar8 - 4 ) ) = *(undefined4*)( (long)local_28 + ( uVar8 - 4 ) );
                  }

               }
 else {
                  *puVar4 = *local_28;
                  *(undefined8*)( (long)puVar4 + ( uVar8 - 8 ) ) = *(undefined8*)( (long)local_28 + ( uVar8 - 8 ) );
                  lVar3 = (long)puVar4 - (long)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 );
                  puVar9 = (undefined8*)( (long)local_28 - lVar3 );
                  puVar4 = (undefined8*)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 );
                  for (uVar7 = ( ulong )((int)lVar3 + (uint)local_29 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                     *puVar4 = *puVar9;
                     puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
                     puVar4 = puVar4 + (ulong)bVar10 * -2 + 1;
                  }

               }

               *(ulong*)( param_1 + 0xb08 ) = uVar8;
               *(undefined4*)( param_1 + 0x4b4 ) = 1;
               goto LAB_001038f9;
            }

            *(undefined8*)( param_1 + 0xb08 ) = 0;
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x678, "tls_parse_stoc_npn");
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
         }
 else {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x66c, "tls_parse_stoc_npn");
            ossl_statem_fatal(param_1, 0x28, 0x6e, 0);
         }

         goto LAB_001037eb;
      }

      uVar8 = ( ulong ) * pbVar6;
      if (uVar8 <= lVar3 - 1U) goto code_r0x001037a7;
      goto LAB_001037b8;
   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x65d, "tls_parse_stoc_npn");
   ossl_statem_fatal(param_1, 0x6e, 0x6e, 0);
   LAB_001037eb:uVar5 = 0;
   LAB_001037ed:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
   code_r0x001037a7:pbVar6 = pbVar6 + uVar8 + 1;
   lVar3 = ( lVar3 - 1U ) - uVar8;
   if (uVar8 == 0) goto LAB_001037b8;
   goto LAB_00103796;
   LAB_001037b8:ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x647, "ssl_next_proto_validate");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   goto LAB_001037eb;
}
undefined8 tls_parse_stoc_alpn(long param_1, long *param_2) {
   byte *__s2;
   byte bVar1;
   ushort uVar2;
   ushort *puVar3;
   byte *pbVar4;
   undefined8 *puVar5;
   int iVar6;
   int iVar7;
   ulong uVar8;
   undefined8 *__s2_00;
   ulong uVar9;
   undefined8 uVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   ulong uVar13;
   long lVar14;
   byte bVar15;
   bVar15 = 0;
   if (*(int*)( param_1 + 0x4d8 ) == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x68d, "tls_parse_stoc_alpn");
      ossl_statem_fatal(param_1, 0x6e, 0x6e, 0);
      return 0;
   }

   uVar8 = param_2[1];
   if (1 < uVar8) {
      puVar3 = (ushort*)*param_2;
      uVar2 = *puVar3;
      *param_2 = (long)( puVar3 + 1 );
      uVar13 = uVar8 - 2;
      param_2[1] = uVar13;
      if (( ( ushort )(uVar2 << 8 | uVar2 >> 8) == uVar13 ) && ( uVar13 != 0 )) {
         bVar1 = (byte)puVar3[1];
         uVar13 = (ulong)bVar1;
         *param_2 = (long)puVar3 + 3;
         param_2[1] = uVar8 - 3;
         if (uVar8 - 3 == uVar13) {
            lVar14 = *(long*)( param_1 + 0xaf8 );
            pbVar4 = *(byte**)( param_1 + 0xaf0 );
            if (lVar14 < 0) {
               ERR_new();
               uVar10 = 0x69f;
               LAB_00103c23:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar10, "tls_parse_stoc_alpn");
               ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
               return 0;
            }

            do {
               if (lVar14 == 0) {
                  LAB_00103b79:ERR_new();
                  uVar10 = 0x6ae;
                  goto LAB_00103a32;
               }

               uVar8 = ( ulong ) * pbVar4;
               if (lVar14 - 1U < uVar8) goto LAB_00103b79;
               __s2 = pbVar4 + 1;
               lVar14 = ( lVar14 - 1U ) - uVar8;
               pbVar4 = __s2 + uVar8;
            }
 while ( ( uVar13 != uVar8 ) || ( iVar6 = memcmp((void*)( (long)puVar3 + 3 ), __s2, uVar13) ),iVar6 != 0 );
            CRYPTO_free(*(void**)( param_1 + 0x4b8 ));
            __s2_00 = (undefined8*)CRYPTO_malloc((uint)bVar1, "ssl/statem/extensions_clnt.c", 0x6b3);
            *(undefined8**)( param_1 + 0x4b8 ) = __s2_00;
            if (__s2_00 == (undefined8*)0x0) {
               *(undefined8*)( param_1 + 0x4c0 ) = 0;
               ERR_new();
               uVar10 = 0x6b6;
               goto LAB_00103c23;
            }

            uVar8 = param_2[1];
            puVar5 = (undefined8*)*param_2;
            if (uVar13 <= uVar8) {
               if (bVar1 < 8) {
                  if (( bVar1 & 4 ) == 0) {
                     if (( bVar1 != 0 ) && ( *(undefined1*)__s2_00 = *(undefined1*)puVar5(bVar1 & 2) != 0 )) {
                        *(undefined2*)( (long)__s2_00 + ( uVar13 - 2 ) ) = *(undefined2*)( (long)puVar5 + ( uVar13 - 2 ) );
                     }

                  }
 else {
                     *(undefined4*)__s2_00 = *(undefined4*)puVar5;
                     *(undefined4*)( (long)__s2_00 + ( uVar13 - 4 ) ) = *(undefined4*)( (long)puVar5 + ( uVar13 - 4 ) );
                  }

               }
 else {
                  *__s2_00 = *puVar5;
                  *(undefined8*)( (long)__s2_00 + ( uVar13 - 8 ) ) = *(undefined8*)( (long)puVar5 + ( uVar13 - 8 ) );
                  lVar14 = (long)__s2_00 - (long)( ( ulong )(__s2_00 + 1) & 0xfffffffffffffff8 );
                  puVar11 = (undefined8*)( (long)puVar5 - lVar14 );
                  puVar12 = (undefined8*)( ( ulong )(__s2_00 + 1) & 0xfffffffffffffff8 );
                  for (uVar9 = ( ulong )((int)lVar14 + (uint)bVar1 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                     *puVar12 = *puVar11;
                     puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
                     puVar12 = puVar12 + (ulong)bVar15 * -2 + 1;
                  }

               }

               *param_2 = (long)( (long)puVar5 + uVar13 );
               param_2[1] = uVar8 - uVar13;
               lVar14 = *(long*)( param_1 + 0x900 );
               *(ulong*)( param_1 + 0x4c0 ) = uVar13;
               if (*(void**)( lVar14 + 0x348 ) == (void*)0x0) {
                  *(undefined4*)( param_1 + 0xb1c ) = 0;
                  if (*(int*)( param_1 + 0x508 ) != 0) {
                     return 1;
                  }

                  uVar10 = CRYPTO_memdup(__s2_00, uVar13, "ssl/statem/extensions_clnt.c", 0x6d0);
                  *(undefined8*)( lVar14 + 0x348 ) = uVar10;
                  lVar14 = *(long*)( param_1 + 0x900 );
                  if (*(long*)( lVar14 + 0x348 ) != 0) {
                     *(undefined8*)( lVar14 + 0x350 ) = *(undefined8*)( param_1 + 0x4c0 );
                     return 1;
                  }

                  *(undefined8*)( lVar14 + 0x350 ) = 0;
                  ERR_new();
                  uVar10 = 0x6d3;
               }
 else {
                  iVar6 = *(int*)( param_1 + 0x508 );
                  if (( *(ulong*)( lVar14 + 0x350 ) != uVar13 ) || ( iVar7 = memcmp(*(void**)( lVar14 + 0x348 ), __s2_00, uVar13) ),iVar7 != 0) {
                     *(undefined4*)( param_1 + 0xb1c ) = 0;
                  }

                  if (iVar6 != 0) {
                     return 1;
                  }

                  ERR_new();
                  uVar10 = 0x6cc;
               }

               goto LAB_00103c23;
            }

            ERR_new();
            uVar10 = 0x6ba;
            goto LAB_00103a32;
         }

      }

   }

   ERR_new();
   uVar10 = 0x699;
   LAB_00103a32:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar10, "tls_parse_stoc_alpn");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}
undefined8 tls_parse_stoc_use_srtp(SSL *param_1, long *param_2) {
   short sVar1;
   ushort uVar2;
   ulong uVar3;
   short *psVar4;
   int iVar5;
   stack_st_SRTP_PROTECTION_PROFILE *psVar6;
   EVP_MD_CTX *pEVar7;
   int iVar8;
   undefined8 uVar9;
   uVar3 = param_2[1];
   if (1 < uVar3) {
      psVar4 = (short*)*param_2;
      sVar1 = *psVar4;
      *param_2 = (long)( psVar4 + 1 );
      param_2[1] = uVar3 - 2;
      if (( 1 < uVar3 - 2 ) && ( sVar1 == 0x200 )) {
         uVar2 = psVar4[1];
         *param_2 = (long)( psVar4 + 2 );
         param_2[1] = uVar3 - 4;
         if (uVar3 - 4 != 0) {
            sVar1 = psVar4[2];
            *param_2 = (long)psVar4 + 5;
            param_2[1] = uVar3 - 5;
            if (uVar3 - 5 == 0) {
               if ((char)sVar1 != '\0') {
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_clnt.c", 0x6f0, "tls_parse_stoc_use_srtp");
                  ossl_statem_fatal(param_1, 0x2f, 0x160, 0);
                  return 0;
               }

               psVar6 = SSL_get_srtp_profiles(param_1);
               if (psVar6 == (stack_st_SRTP_PROTECTION_PROFILE*)0x0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/extensions_clnt.c", 0x6f7, "tls_parse_stoc_use_srtp");
                  ossl_statem_fatal(param_1, 0x32, 0x167, 0);
                  return 0;
               }

               for (iVar8 = 0; iVar5 = OPENSSL_sk_num(psVar6),iVar8 < iVar5; iVar8 = iVar8 + 1) {
                  pEVar7 = (EVP_MD_CTX*)OPENSSL_sk_value(psVar6, iVar8);
                  if (pEVar7->engine == (ENGINE*)( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8)) {
                     param_1[4].read_hash = pEVar7;
                     return 1;
                  }

               }

               ERR_new();
               uVar9 = 0x708;
               goto LAB_00103e71;
            }

         }

      }

   }

   ERR_new();
   uVar9 = 0x6e9;
   LAB_00103e71:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar9, "tls_parse_stoc_use_srtp");
   ossl_statem_fatal(param_1, 0x32, 0x161, 0);
   return 0;
}
undefined8 tls_parse_stoc_etm(long param_1) {
   int iVar1;
   if (( ( ( ( *(byte*)( param_1 + 0x9b2 ) & 8 ) == 0 ) && ( *(int*)( *(long*)( param_1 + 0x300 ) + 0x28 ) != 0x40 ) ) && ( iVar1 = *(int*)( *(long*)( param_1 + 0x300 ) + 0x24 )(iVar1 != 0x400 && iVar1 != 4) && iVar1 != 0x40000 ) ) && ( ( iVar1 - 0x400000U & 0xffbfffff ) != 0 )) {
      *(undefined4*)( param_1 + 0xb14 ) = 1;
   }

   return 1;
}
undefined8 tls_parse_stoc_ems(long param_1) {
   uint *puVar1;
   if (( ( *(byte*)( param_1 + 0x9b0 ) & 1 ) == 0 ) && ( *(ulong*)( param_1 + 0x160 ) = *(ulong*)( param_1 + 0x160 ) | 0x200 * (int*)( param_1 + 0x508 ) == 0 )) {
      puVar1 = (uint*)( *(long*)( param_1 + 0x900 ) + 0x378 );
      *puVar1 = *puVar1 | 1;
   }

   return 1;
}
undefined8 tls_parse_stoc_supported_versions(long param_1, undefined8 *param_2, int param_3) {
   short sVar1;
   int iVar2;
   long lVar3;
   if (1 < (ulong)param_2[1]) {
      sVar1 = *(short*)*param_2;
      lVar3 = param_2[1] - 2;
      *param_2 = (short*)*param_2 + 1;
      param_2[1] = lVar3;
      if (lVar3 == 0) {
         if (sVar1 != 0x403) {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x73b, "tls_parse_stoc_supported_versions");
            ossl_statem_fatal(param_1, 0x2f, 0x74, 0);
            return 0;
         }

         if (param_3 != 0x800) {
            *(undefined4*)( param_1 + 0x48 ) = 0x304;
            iVar2 = ssl_set_record_protocol_version(param_1, 0x304);
            if (iVar2 == 0) {
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_clnt.c", 0x747, "tls_parse_stoc_supported_versions");
               ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
               return 0;
            }

         }

         return 1;
      }

   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x732, "tls_parse_stoc_supported_versions");
   ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   return 0;
}
undefined8 tls_parse_stoc_key_share(long param_1, long *param_2, ulong param_3) {
   ushort *puVar1;
   ushort uVar2;
   EVP_PKEY *pEVar3;
   int iVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   EVP_PKEY *to;
   undefined8 uVar8;
   ushort uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   long local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0x308 ) == 0 ) || ( *(long*)( param_1 + 0x4e0 ) != 0 )) {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x75c, "tls_parse_stoc_key_share");
      ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   }
 else if ((ulong)param_2[1] < 2) {
      ERR_new();
      uVar6 = 0x762;
      LAB_001043b9:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar6, "tls_parse_stoc_key_share");
      ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   }
 else {
      lVar7 = param_2[1] - 2;
      uVar2 = *(ushort*)*param_2;
      param_2[1] = lVar7;
      *param_2 = (long)( (ushort*)*param_2 + 1 );
      uVar9 = uVar2 << 8 | uVar2 >> 8;
      uVar10 = (uint)uVar9;
      if (( param_3 & 0x800 ) == 0) {
         lVar7 = *(long*)( param_1 + 0x338 );
         if (lVar7 != 0) {
            if (uVar10 == *(ushort*)( param_1 + 0x330 )) {
               lVar7 = 0;
            }
 else {
               if (lVar7 == 1) goto LAB_00104369;
               if (*(ushort*)( param_1 + 0x332 ) == uVar9) {
                  lVar7 = 1;
               }
 else {
                  if (lVar7 == 2) goto LAB_00104369;
                  if (*(ushort*)( param_1 + 0x334 ) == uVar9) {
                     lVar7 = 2;
                  }
 else if (( lVar7 == 3 ) || ( lVar7 = 3 * (ushort*)( param_1 + 0x336 ) != uVar9 )) goto LAB_00104369;
               }

            }

            pEVar3 = *(EVP_PKEY**)( param_1 + 0x310 + lVar7 * 8 );
            *(ushort*)( param_1 + 0x4de ) = uVar9;
            *(EVP_PKEY**)( param_1 + 0x308 ) = pEVar3;
            if (uVar2 != 0) {
               lVar7 = *(long*)( param_1 + 0x900 );
               if (*(int*)( param_1 + 0x508 ) == 0) {
                  *(uint*)( lVar7 + 0x308 ) = (uint)uVar9;
               }
 else if (*(uint*)( lVar7 + 0x308 ) != uVar10) {
                  lVar7 = ssl_session_dup(lVar7, 0);
                  if (lVar7 == 0) {
                     ERR_new();
                     ERR_set_debug("ssl/statem/extensions_clnt.c", 0x7bc, "tls_parse_stoc_key_share");
                     ossl_statem_fatal(param_1, 0x50, 0x80014, 0);
                     goto LAB_0010414a;
                  }

                  SSL_SESSION_free(*(SSL_SESSION**)( param_1 + 0x900 ));
                  *(long*)( param_1 + 0x900 ) = lVar7;
                  *(uint*)( lVar7 + 0x308 ) = (uint)uVar9;
               }

               lVar7 = tls1_group_id_lookup(*(undefined8*)( param_1 + 8 ), uVar9);
               if (lVar7 == 0) {
                  ERR_new();
                  uVar6 = 0x7c6;
                  goto LAB_0010437a;
               }

               if (1 < (ulong)param_2[1]) {
                  uVar2 = *(ushort*)*param_2;
                  uVar5 = param_2[1] - 2;
                  if (uVar5 == ( ushort )(uVar2 << 8 | uVar2 >> 8)) {
                     puVar1 = (ushort*)*param_2 + 1;
                     param_2[1] = 0;
                     *param_2 = (long)puVar1 + uVar5;
                     if (uVar2 != 0) {
                        if (*(char*)( lVar7 + 0x30 ) != '\0') {
                           iVar4 = ssl_decapsulate(param_1, pEVar3, puVar1, uVar5, 1);
                           if (iVar4 == 0) goto LAB_0010414a;
                           LAB_00104574:*(undefined1*)( param_1 + 0x4dd ) = 1;
                           uVar6 = 1;
                           goto LAB_0010414c;
                        }

                        to = EVP_PKEY_new();
                        if (( to == (EVP_PKEY*)0x0 ) || ( iVar4 = iVar4 < 1 )) {
                           ERR_new();
                           ERR_set_debug("ssl/statem/extensions_clnt.c", 0x7d4, "tls_parse_stoc_key_share");
                           uVar6 = 0x128;
                           uVar8 = 0x50;
                           LAB_00104611:ossl_statem_fatal(param_1, uVar8, uVar6, 0);
                        }
 else {
                           iVar4 = tls13_set_encoded_pub_key(to, puVar1, uVar5);
                           if (iVar4 < 1) {
                              ERR_new();
                              ERR_set_debug("ssl/statem/extensions_clnt.c", 0x7db, "tls_parse_stoc_key_share");
                              uVar6 = 0x132;
                              uVar8 = 0x2f;
                              goto LAB_00104611;
                           }

                           iVar4 = ssl_derive(param_1, pEVar3, to, 1);
                           if (iVar4 != 0) {
                              *(EVP_PKEY**)( param_1 + 0x4e0 ) = to;
                              goto LAB_00104574;
                           }

                        }

                        EVP_PKEY_free(to);
                        goto LAB_0010414a;
                     }

                  }

               }

               ERR_new();
               uVar6 = 0x7cc;
               goto LAB_001043b9;
            }

         }

         LAB_00104369:ERR_new();
         uVar6 = 0x7aa;
      }
 else {
         local_40 = 0;
         if (lVar7 != 0) {
            ERR_new();
            uVar6 = 0x76b;
            goto LAB_001043b9;
         }

         lVar7 = *(long*)( param_1 + 0x338 );
         if (( lVar7 == 0 ) || ( ( uVar10 != *(ushort*)( param_1 + 0x330 ) && ( ( lVar7 == 1 || ( ( uVar10 != *(ushort*)( param_1 + 0x332 ) && ( ( lVar7 == 2 || ( ( uVar10 != *(ushort*)( param_1 + 0x334 ) && ( ( lVar7 == 3 || ( *(ushort*)( param_1 + 0x336 ) != uVar9 ) ) ) ) ) ) ) ) ) ) ) ) )) {
            tls1_get_supported_groups(param_1, &local_40, &local_38);
            if (local_38 != 0) {
               uVar5 = 0;
               do {
                  if (*(ushort*)( local_40 + uVar5 * 2 ) == uVar9) {
                     if (( ( uVar5 < local_38 ) && ( iVar4 = tls_group_allowed(param_1, uVar9, 0x20004) ),iVar4 != 0 )) {
                        uVar5 = *(ulong*)( param_1 + 0x338 );
                        *(ushort*)( param_1 + 0x4de ) = uVar9;
                        uVar11 = 0;
                        if (uVar5 == 0) goto LAB_001042e6;
                        goto LAB_001042b4;
                     }

                     break;
                  }

                  uVar5 = uVar5 + 1;
               }
 while ( uVar5 != local_38 );
            }

            ERR_new();
            uVar6 = 0x784;
         }
 else {
            ERR_new();
            uVar6 = 0x775;
         }

      }

      LAB_0010437a:ERR_set_debug("ssl/statem/extensions_clnt.c", uVar6, "tls_parse_stoc_key_share");
      ossl_statem_fatal(param_1, 0x2f, 0x6c, 0);
   }

   LAB_0010414a:uVar6 = 0;
   LAB_0010414c:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
   while (true) {
      EVP_PKEY_free(pEVar3);
      uVar5 = *(ulong*)( param_1 + 0x338 );
      *(undefined8*)( param_1 + 0x310 + uVar11 * 8 ) = 0;
      uVar11 = uVar11 + 1;
      if (uVar5 <= uVar11) break;
      LAB_001042b4:pEVar3 = *(EVP_PKEY**)( param_1 + 0x310 + uVar11 * 8 );
      if (pEVar3 == (EVP_PKEY*)0x0) {
         uVar11 = uVar11 + 1;
         if (uVar5 <= uVar11) break;
         goto LAB_001042b4;
      }

   }
;
   LAB_001042e6:*(undefined8*)( param_1 + 0x338 ) = 0;
   uVar6 = 1;
   *(undefined8*)( param_1 + 0x308 ) = 0;
   goto LAB_0010414c;
}
undefined8 tls_parse_stoc_cookie(long param_1, long *param_2) {
   ulong uVar1;
   ushort *puVar2;
   ushort uVar3;
   long lVar4;
   if (1 < (ulong)param_2[1]) {
      uVar3 = *(ushort*)*param_2;
      uVar1 = param_2[1] - 2;
      if (uVar1 == ( ushort )(uVar3 << 8 | uVar3 >> 8)) {
         puVar2 = (ushort*)*param_2 + 1;
         param_2[1] = 0;
         *param_2 = (long)puVar2 + uVar1;
         CRYPTO_free(*(void**)( param_1 + 0xb20 ));
         *(undefined8*)( param_1 + 0xb20 ) = 0;
         *(undefined8*)( param_1 + 0xb28 ) = 0;
         if (uVar3 != 0) {
            lVar4 = CRYPTO_memdup(puVar2, uVar1, "include/internal/packet.h", 0x1cf);
            *(long*)( param_1 + 0xb20 ) = lVar4;
            if (lVar4 == 0) goto LAB_001046e3;
            *(ulong*)( param_1 + 0xb28 ) = uVar1;
         }

         return 1;
      }

   }

   LAB_001046e3:ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x7fe, "tls_parse_stoc_cookie");
   ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   return 0;
}
undefined8 tls_parse_stoc_early_data(long param_1, undefined8 *param_2, int param_3) {
   uint uVar1;
   ulong uVar2;
   long lVar3;
   uVar2 = param_2[1];
   if (param_3 == 0x2000) {
      if (3 < uVar2) {
         uVar1 = *(uint*)*param_2;
         *param_2 = (uint*)*param_2 + 1;
         param_2[1] = uVar2 - 4;
         if (uVar2 - 4 == 0) {
            lVar3 = *(long*)( param_1 + 0x900 );
            *(uint*)( lVar3 + 0x344 ) = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
            if (( *(byte*)( param_1 + 0x161 ) & 0x20 ) == 0) {
               return 1;
            }

            if (uVar1 != 0xffffffff) {
               *(undefined4*)( lVar3 + 0x344 ) = 1;
               ERR_new();
               ERR_set_debug("ssl/statem/extensions_clnt.c", 0x820, "tls_parse_stoc_early_data");
               ossl_statem_fatal(param_1, 0x2f, 0xae, 0);
               return 0;
            }

            return 1;
         }

      }

      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x80e, "tls_parse_stoc_early_data");
      ossl_statem_fatal(param_1, 0x32, 0xae, 0);
   }
 else if (uVar2 == 0) {
      if (( *(int*)( param_1 + 0xb1c ) != 0 ) && ( *(int*)( param_1 + 0x508 ) != 0 )) {
         *(undefined4*)( param_1 + 0xb18 ) = 2;
         return 1;
      }

      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x833, "tls_parse_stoc_early_data");
      ossl_statem_fatal(param_1, 0x2f, 0x6e, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("ssl/statem/extensions_clnt.c", 0x828, "tls_parse_stoc_early_data");
      ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   }

   return 0;
}
undefined8 tls_parse_stoc_psk(long param_1, undefined8 *param_2) {
   SSL_SESSION *ses;
   undefined8 uVar1;
   long lVar2;
   SSL_SESSION *ses_00;
   ushort uVar3;
   if (1 < (ulong)param_2[1]) {
      uVar3 = *(ushort*)*param_2;
      lVar2 = param_2[1] - 2;
      *param_2 = (ushort*)*param_2 + 1;
      param_2[1] = lVar2;
      if (lVar2 == 0) {
         uVar3 = uVar3 << 8 | uVar3 >> 8;
         if (*(uint*)( param_1 + 0xb38 ) <= (uint)uVar3) {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x849, "tls_parse_stoc_psk");
            ossl_statem_fatal(param_1, 0x2f, 0x72, 0);
            return 0;
         }

         ses = *(SSL_SESSION**)( param_1 + 0x908 );
         if (uVar3 == 0) {
            if (( *(uint*)( param_1 + 0xb38 ) == 2 ) || ( ses == (SSL_SESSION*)0x0 )) {
               *(undefined4*)( param_1 + 0x508 ) = 1;
               SSL_SESSION_free(ses);
               *(undefined8*)( param_1 + 0x908 ) = 0;
               return 1;
            }

         }
 else if (ses == (SSL_SESSION*)0x0) {
            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x85b, "tls_parse_stoc_psk");
            ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
            return 0;
         }

         if (( ( ( *(uint*)( param_1 + 0xf0 ) & 0xfffffffb ) != 3 ) || ( ses_00 = *(SSL_SESSION**)( param_1 + 0x900 ) * (int*)( ses_00[1].krb5_client_princ + 0x5c ) != 0 ) ) || ( *(int*)( ses[1].krb5_client_princ + 0x5c ) == 0 )) {
            uVar1 = *(undefined8*)( ses->master_key + 4 );
            ses_00 = *(SSL_SESSION**)( param_1 + 0x900 );
            *(undefined8*)( param_1 + 0x57c ) = *(undefined8*)&ses->master_key_length;
            *(undefined8*)( param_1 + 0x584 ) = uVar1;
            uVar1 = *(undefined8*)( ses->master_key + 0x14 );
            *(undefined8*)( param_1 + 0x58c ) = *(undefined8*)( ses->master_key + 0xc );
            *(undefined8*)( param_1 + 0x594 ) = uVar1;
            uVar1 = *(undefined8*)( ses->master_key + 0x24 );
            *(undefined8*)( param_1 + 0x59c ) = *(undefined8*)( ses->master_key + 0x1c );
            *(undefined8*)( param_1 + 0x5a4 ) = uVar1;
            uVar1 = *(undefined8*)ses->session_id;
            *(undefined8*)( param_1 + 0x5ac ) = *(undefined8*)( ses->master_key + 0x2c );
            *(undefined8*)( param_1 + 0x5b4 ) = uVar1;
         }

         SSL_SESSION_free(ses_00);
         uVar1 = *(undefined8*)( param_1 + 0x908 );
         *(undefined4*)( param_1 + 0x508 ) = 1;
         *(undefined8*)( param_1 + 0x908 ) = 0;
         *(undefined8*)( param_1 + 0x900 ) = uVar1;
         if (uVar3 != 0) {
            *(undefined4*)( param_1 + 0xb1c ) = 0;
         }

         return 1;
      }

   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x844, "tls_parse_stoc_psk");
   ossl_statem_fatal(param_1, 0x32, 0x9f, 0);
   return 0;
}
undefined8 tls_construct_ctos_client_cert_type(long param_1, undefined8 param_2) {
   int iVar1;
   *(undefined1*)( param_1 + 0xb51 ) = 0;
   if (*(long*)( param_1 + 0x1598 ) == 0) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0x13, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0x1598 ), *(undefined8*)( param_1 + 0x15a0 ), 1) ),iVar1 != 0) {
      *(undefined1*)( param_1 + 0xb51 ) = 1;
      return 1;
   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x882, "tls_construct_ctos_client_cert_type");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_parse_stoc_client_cert_type(long param_1, undefined8 *param_2) {
   byte bVar1;
   void *pvVar2;
   undefined8 uVar3;
   if (param_2[1] == 1) {
      bVar1 = *(byte*)*param_2;
      param_2[1] = 0;
      *param_2 = (byte*)*param_2 + 1;
      if (*(char*)( param_1 + 0xb51 ) == '\x01') {
         if (*(void**)( param_1 + 0x1598 ) != (void*)0x0) {
            pvVar2 = memchr(*(void**)( param_1 + 0x1598 ), (uint)bVar1, *(size_t*)( param_1 + 0x15a0 ));
            if (pvVar2 != (void*)0x0) {
               *(byte*)( param_1 + 0xb50 ) = bVar1;
               return 1;
            }

            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x8a3, "tls_parse_stoc_client_cert_type");
            ossl_statem_fatal(param_1, 0x32, 0x180, 0);
            return 0;
         }

         ERR_new();
         uVar3 = 0x89e;
      }
 else {
         ERR_new();
         uVar3 = 0x899;
      }

   }
 else {
      ERR_new();
      uVar3 = 0x890;
   }

   ERR_set_debug("ssl/statem/extensions_clnt.c", uVar3, "tls_parse_stoc_client_cert_type");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}
undefined8 tls_construct_ctos_server_cert_type(long param_1, undefined8 param_2) {
   int iVar1;
   *(undefined1*)( param_1 + 0xb53 ) = 0;
   if (*(long*)( param_1 + 0x15a8 ) == 0) {
      return 2;
   }

   iVar1 = WPACKET_put_bytes__(param_2, 0x14, 2);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_start_sub_packet_len__(param_2, 2) ),iVar1 != 0 ) ) && ( iVar1 = WPACKET_sub_memcpy__(param_2, *(undefined8*)( param_1 + 0x15a8 ), *(undefined8*)( param_1 + 0x15b0 ), 1) ),iVar1 != 0) {
      *(undefined1*)( param_1 + 0xb53 ) = 1;
      return 1;
   }

   ERR_new();
   ERR_set_debug("ssl/statem/extensions_clnt.c", 0x8b6, "tls_construct_ctos_server_cert_type");
   ossl_statem_fatal(param_1, 0x50, 0xc0103, 0);
   return 0;
}
undefined8 tls_parse_stoc_server_cert_type(long param_1, undefined8 *param_2) {
   byte bVar1;
   void *pvVar2;
   undefined8 uVar3;
   if (param_2[1] == 1) {
      bVar1 = *(byte*)*param_2;
      param_2[1] = 0;
      *param_2 = (byte*)*param_2 + 1;
      if (*(char*)( param_1 + 0xb53 ) == '\x01') {
         if (*(void**)( param_1 + 0x15a8 ) != (void*)0x0) {
            pvVar2 = memchr(*(void**)( param_1 + 0x15a8 ), (uint)bVar1, *(size_t*)( param_1 + 0x15b0 ));
            if (pvVar2 != (void*)0x0) {
               *(byte*)( param_1 + 0xb52 ) = bVar1;
               return 1;
            }

            ERR_new();
            ERR_set_debug("ssl/statem/extensions_clnt.c", 0x8d7, "tls_parse_stoc_server_cert_type");
            ossl_statem_fatal(param_1, 0x32, 0x180, 0);
            return 0;
         }

         ERR_new();
         uVar3 = 0x8d2;
      }
 else {
         ERR_new();
         uVar3 = 0x8cd;
      }

   }
 else {
      ERR_new();
      uVar3 = 0x8c4;
   }

   ERR_set_debug("ssl/statem/extensions_clnt.c", uVar3, "tls_parse_stoc_server_cert_type");
   ossl_statem_fatal(param_1, 0x32, 0x6e, 0);
   return 0;
}


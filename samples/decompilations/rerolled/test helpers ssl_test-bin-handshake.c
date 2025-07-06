undefined8 verify_accept_cb(void) {
   return 1;
}undefined8 broken_session_ticket_cb(void) {
   return 0;
}undefined8 server_npn_cb(undefined8 param_1, undefined8 *param_2, undefined4 *param_3, undefined8 *param_4) {
   *param_2 = *param_4;
   *param_3 = (int)param_4[1];
   return 0;
}undefined4 decrypt_session_ticket_cb(void) {
   undefined4 uVar1;
   int in_R8D;
   uVar1 = 0;
   if (in_R8D - 3U < 4) {
      uVar1 = *(undefined4*)( CSWTCH_74 + ( ulong )(in_R8D - 3U) * 4 );
   }
   return uVar1;
}bool client_ocsp_cb(SSL *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   bool bVar2;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = SSL_ctrl(param_1, 0x46, 0, &local_18);
   bVar2 = false;
   if ((int)lVar1 == 1) {
      bVar2 = *local_18 == dummy_ocsp_resp_good_val;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 do_not_call_session_ticket_cb(SSL *param_1) {
   void *pvVar1;
   pvVar1 = SSL_get_ex_data(param_1, ex_data_idx);
   *(undefined4*)( (long)pvVar1 + 0xc ) = 1;
   return 0;
}undefined8 generate_session_ticket_cb(SSL *param_1, long param_2) {
   char *__s;
   SSL_SESSION *pSVar1;
   size_t sVar2;
   undefined8 uVar3;
   pSVar1 = SSL_get_session(param_1);
   __s = *(char**)( param_2 + 0x30 );
   if (( pSVar1 != (SSL_SESSION*)0x0 ) && ( __s != (char*)0x0 )) {
      sVar2 = strlen(__s);
      uVar3 = SSL_SESSION_set1_ticket_appdata(pSVar1, __s, sVar2);
      return uVar3;
   }
   return 0;
}char server_alpn_cb(undefined8 param_1, undefined8 *param_2, uchar *param_3, uchar *param_4, uint param_5, long param_6) {
   int iVar1;
   long in_FS_OFFSET;
   uchar *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = SSL_select_next_proto(&local_18, param_3, *(uchar**)( param_6 + 0x10 ), *(uint*)( param_6 + 0x18 ), param_4, param_5);
   *param_2 = local_18;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ( iVar1 != 1 ) * '\x02';
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}char client_npn_cb(undefined8 param_1, uchar **param_2, uchar *param_3, uchar *param_4, uint param_5, undefined8 *param_6) {
   int iVar1;
   iVar1 = SSL_select_next_proto(param_2, param_3, param_4, param_5, (uchar*)*param_6, *(uint*)( param_6 + 1 ));
   iVar1 = test_true("test/helpers/handshake.c", 0x19b, "ret == OPENSSL_NPN_NEGOTIATED || ret == OPENSSL_NPN_NO_OVERLAP", iVar1 - 1U < 2);
   return ( iVar1 == 0 ) * '\x02';
}undefined8 server_ocsp_cb(SSL *param_1, undefined1 *param_2) {
   undefined1 *parg;
   long lVar1;
   parg = (undefined1*)CRYPTO_malloc(1, "test/helpers/handshake.c", 0x113);
   if (parg != (undefined1*)0x0) {
      *parg = *param_2;
      lVar1 = SSL_ctrl(param_1, 0x47, 1, parg);
      if (lVar1 != 0) {
         return 0;
      }
      CRYPTO_free(parg);
   }
   return 2;
}undefined8 client_hello_nov12_cb(SSL *param_1, undefined4 *param_2, SSL_CTX *param_3) {
   byte *__s1;
   int iVar1;
   long lVar2;
   void *pvVar3;
   undefined8 uVar4;
   ulong uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   long local_48;
   byte *local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = SSL_client_hello_get0_legacy_version();
   if (iVar1 - 0x300U < 4) {
      SSL_client_hello_get0_session_id(param_1, &local_48);
      if (( ( ( local_48 == 0 ) || ( lVar2 = SSL_client_hello_get0_random(param_1, &local_48) ),lVar2 == 0 ) ) || ( lVar2 = SSL_client_hello_get0_ciphers(param_1, &local_48) ),lVar2 == 0) {
         *param_2 = 0x50;
      } else {
         pvVar3 = SSL_get_ex_data(param_1, ex_data_idx);
         iVar1 = SSL_client_hello_get0_ext(param_1, 0, &local_40);
         __s1 = local_40;
         uVar6 = local_38;
         if (( iVar1 != 0 ) && ( 2 < local_38 )) {
            uVar5 = (long)(int)( ( uint ) * local_40 << 8 ) + (ulong)local_40[1];
            __s1 = local_40 + 2;
            if (( local_38 == uVar5 + 2 ) && ( ( __s1 = local_40 + 3 ),uVar6 = uVar5,local_40[2] == 0 && ( uVar6 = uVar5 - 1 ),2 < uVar6 )) {
               __s1 = local_40 + 5;
               local_38 = (ulong)local_40[4] + (long)(int)( (uint)local_40[3] << 8 );
               if (( local_38 + 2 <= uVar6 ) && ( uVar6 = local_38 == 7 )) {
                  local_40 = __s1;
                  iVar1 = strncmp((char*)__s1, "server2", 7);
                  if (iVar1 == 0) {
                     SSL_set_SSL_CTX(param_1, param_3);
                     SSL_clear_options(param_1, 0xffffffff);
                     uVar4 = SSL_CTX_get_options(param_3);
                     SSL_set_options(param_1, uVar4);
                     *(undefined4*)( (long)pvVar3 + 0x10 ) = 2;
                  } else {
                     iVar1 = strncmp((char*)__s1, "server1", 7);
                     __s1 = local_40;
                     uVar6 = local_38;
                     if (iVar1 != 0) goto LAB_00100430;
                     *(undefined4*)( (long)pvVar3 + 0x10 ) = 1;
                  }
                  SSL_ctrl(param_1, 0x7c, 0x302, (void*)0x0);
                  uVar4 = 1;
                  goto LAB_001002e2;
               }
            }
         }
         LAB_00100430:local_38 = uVar6;
         local_40 = __s1;
         SSL_ctrl(param_1, 0x7c, 0x302, (void*)0x0);
         *param_2 = 0x70;
      }
   } else {
      *param_2 = 0x46;
   }
   uVar4 = 0;
   LAB_001002e2:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}byte servername_ignore_cb(SSL *param_1, undefined8 param_2, SSL_CTX *param_3) {
   int iVar1;
   char *__s1;
   void *pvVar2;
   undefined8 uVar3;
   __s1 = SSL_get_servername(param_1, 0);
   pvVar2 = SSL_get_ex_data(param_1, ex_data_idx);
   if (__s1 == (char*)0x0) {
      *(undefined4*)( (long)pvVar2 + 0x10 ) = 1;
      return 3;
   }
   iVar1 = strcmp(__s1, "server2");
   if (iVar1 != 0) {
      iVar1 = strcmp(__s1, "server1");
      *(undefined4*)( (long)pvVar2 + 0x10 ) = 1;
      return ~-(iVar1 == 0) & 3;
   }
   SSL_set_SSL_CTX(param_1, param_3);
   SSL_clear_options(param_1, 0xffffffff);
   uVar3 = SSL_CTX_get_options(param_3);
   SSL_set_options(param_1, uVar3);
   *(undefined4*)( (long)pvVar2 + 0x10 ) = 2;
   return 0;
}undefined8 verify_reject_cb(X509_STORE_CTX *param_1) {
   X509_STORE_CTX_set_error(param_1, 0x32);
   return 0;
}bool verify_retry_cb(X509_STORE_CTX *param_1) {
   int idx;
   SSL *ssl;
   long lVar1;
   idx = SSL_get_ex_data_X509_STORE_CTX_idx();
   if (( -1 < idx ) && ( ssl = (SSL*)X509_STORE_CTX_get_ex_data(param_1, idx) ),ssl != (SSL*)0x0) {
      n_retries = n_retries + -1;
      if (n_retries < 0) {
         return true;
      }
      lVar1 = SSL_ctrl(ssl, 0x88, 0, (void*)0x0);
      return 0 < lVar1;
   }
   return false;
}undefined8 parse_protos(char *param_1, long *param_2, long *param_3) {
   int iVar1;
   size_t __n;
   undefined8 uVar2;
   void *pvVar3;
   ulong uVar4;
   size_t sVar5;
   ulong uVar6;
   __n = strlen(param_1);
   if (__n == 0) {
      *param_2 = 0;
      *param_3 = 0;
      LAB_00100680:uVar2 = 1;
   } else {
      iVar1 = test_ptr_null("test/helpers/handshake.c", 0x167, &_LC4, *param_2);
      if (iVar1 != 0) {
         pvVar3 = CRYPTO_malloc((int)( __n + 1 ), "test/helpers/handshake.c", 0x169);
         *param_2 = (long)pvVar3;
         iVar1 = test_ptr("test/helpers/handshake.c", 0x169, "*out = OPENSSL_malloc(len + 1)", pvVar3);
         if (iVar1 != 0) {
            *param_3 = __n + 1;
            uVar6 = 0;
            memcpy((void*)( *param_2 + 1 ), param_1, __n);
            uVar4 = 0;
            do {
               sVar5 = uVar4 + 1;
               if (*(char*)( *param_2 + sVar5 ) == ',') {
                  iVar1 = test_int_gt("test/helpers/handshake.c", 0x177, "i - 1", "prefix", uVar4 & 0xffffffff, uVar6 & 0xffffffff);
                  if (iVar1 == 0) goto LAB_001007a8;
                  *(char*)( *param_2 + uVar6 ) = (char)uVar4 - (char)uVar6;
                  uVar6 = sVar5;
               }
               uVar4 = sVar5;
            } while ( __n != sVar5 );
            iVar1 = test_int_gt("test/helpers/handshake.c", 0x17e, &_LC8, "prefix", __n & 0xffffffff, uVar6 & 0xffffffff);
            if (iVar1 == 0) {
               LAB_001007a8:CRYPTO_free((void*)*param_2);
               *param_2 = 0;
               return 0;
            }
            *(char*)( *param_2 + uVar6 ) = (char)__n - (char)uVar6;
            goto LAB_00100680;
         }
      }
      uVar2 = 0;
   }
   return uVar2;
}undefined8 create_peer(undefined8 *param_1, SSL_CTX *param_2) {
   int iVar1;
   SSL *ssl;
   void *ptr;
   void *ptr_00;
   ssl = SSL_new(param_2);
   iVar1 = test_ptr("test/helpers/handshake.c", 0x2f5, "ssl = SSL_new(ctx)", ssl);
   if (iVar1 == 0) {
      ptr = (void*)0x0;
      ptr_00 = (void*)0x0;
   } else {
      ptr_00 = (void*)0x0;
      ptr = (void*)CRYPTO_zalloc(0x10000, "test/helpers/handshake.c", 0x2f6);
      iVar1 = test_ptr("test/helpers/handshake.c", 0x2f6, "write_buf = OPENSSL_zalloc(peer_buffer_size)", ptr);
      if (iVar1 != 0) {
         ptr_00 = (void*)CRYPTO_zalloc(0x10000, "test/helpers/handshake.c", 0x2f7);
         iVar1 = test_ptr("test/helpers/handshake.c", 0x2f7, "read_buf = OPENSSL_zalloc(peer_buffer_size)", ptr_00);
         if (iVar1 != 0) {
            *param_1 = ssl;
            param_1[1] = ptr;
            param_1[3] = ptr_00;
            *(undefined4*)( param_1 + 4 ) = 0x10000;
            *(undefined4*)( param_1 + 2 ) = 0x10000;
            return 1;
         }
      }
   }
   SSL_free(ssl);
   CRYPTO_free(ptr);
   CRYPTO_free(ptr_00);
   return 0;
}void info_cb(SSL *param_1, uint param_2, int param_3) {
   int *piVar1;
   char *pcVar2;
   if (( param_2 & 0x4000 ) != 0) {
      piVar1 = (int*)SSL_get_ex_data(param_1, ex_data_idx);
      if (( param_2 & 8 ) == 0) {
         piVar1[2] = param_3;
         return;
      }
      *piVar1 = param_3;
      pcVar2 = SSL_alert_type_string(param_3);
      if (( ( *pcVar2 == 'F' ) && ( pcVar2[1] == '\0' ) ) || ( ( pcVar2 = SSL_alert_desc_string(param_3) * pcVar2 == 'C' && ( ( pcVar2[1] == 'N' && ( pcVar2[2] == '\0' ) ) ) ) )) {
         piVar1[1] = piVar1[1] + 1;
      }
   }
   return;
}void do_handshake_step(undefined8 *param_1) {
   int iVar1;
   iVar1 = test_int_eq("test/helpers/handshake.c", 0x313, "peer->status", "PEER_RETRY", *(undefined4*)( (long)param_1 + 0x2c ), 1);
   if (iVar1 == 0) {
      *(undefined4*)( (long)param_1 + 0x2c ) = 4;
   } else {
      iVar1 = SSL_do_handshake((SSL*)*param_1);
      if (iVar1 == 1) {
         *(undefined4*)( (long)param_1 + 0x2c ) = 0;
         return;
      }
      if (( iVar1 == 0 ) || ( ( iVar1 = SSL_get_error((SSL*)*param_1, iVar1) ),iVar1 != 2 && ( iVar1 != 0xc ) )) {
         *(undefined4*)( (long)param_1 + 0x2c ) = 2;
         return;
      }
   }
   return;
}void do_app_data_step(undefined8 *param_1) {
   int iVar1;
   int iVar2;
   iVar1 = test_int_eq("test/helpers/handshake.c", 0x334, "peer->status", "PEER_RETRY", *(undefined4*)( (long)param_1 + 0x2c ), 1);
   if (iVar1 != 0) {
      iVar1 = *(int*)( param_1 + 5 );
      while (iVar1 != 0) {
         iVar1 = SSL_read((SSL*)*param_1, (void*)param_1[3], *(int*)( param_1 + 4 ));
         if (iVar1 < 1) {
            if (iVar1 == 0) goto LAB_00100b58;
            iVar1 = SSL_get_error((SSL*)*param_1, iVar1);
            if (iVar1 != 2) goto LAB_00100b58;
            break;
         }
         iVar2 = test_int_le("test/helpers/handshake.c", 0x33d, &_LC15, "peer->bytes_to_read", iVar1, *(undefined4*)( param_1 + 5 ));
         if (iVar2 == 0) goto LAB_00100b41;
         iVar1 = *(int*)( param_1 + 5 ) - iVar1;
         *(int*)( param_1 + 5 ) = iVar1;
      };
      iVar1 = *(int*)( (long)param_1 + 0x24 );
      iVar2 = *(int*)( param_1 + 2 );
      if (iVar1 <= *(int*)( param_1 + 2 )) {
         iVar2 = iVar1;
      }
      if (iVar2 != 0) {
         iVar1 = SSL_write((SSL*)*param_1, (void*)param_1[1], iVar2);
         if (iVar1 < 1) {
            LAB_00100b58:*(undefined4*)( (long)param_1 + 0x2c ) = 2;
            return;
         }
         iVar2 = test_int_eq("test/helpers/handshake.c", 0x355, &_LC15, "write_bytes", iVar1, iVar2);
         if (iVar2 == 0) goto LAB_00100b41;
         iVar1 = *(int*)( (long)param_1 + 0x24 ) - iVar1;
         *(int*)( (long)param_1 + 0x24 ) = iVar1;
      }
      if (( iVar1 == 0 ) && ( *(int*)( param_1 + 5 ) == 0 )) {
         *(undefined4*)( (long)param_1 + 0x2c ) = 0;
      }
      return;
   }
   LAB_00100b41:*(undefined4*)( (long)param_1 + 0x2c ) = 4;
   return;
}void HANDSHAKE_RESULT_free_part_0(void *param_1) {
   CRYPTO_free(*(void**)( (long)param_1 + 0x38 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x40 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x48 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0x50 ));
   CRYPTO_free(*(void**)( (long)param_1 + 0xa0 ));
   OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x70 ), &X509_NAME_free);
   OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x88 ), &X509_NAME_free);
   CRYPTO_free(*(void**)( (long)param_1 + 0x98 ));
   CRYPTO_free(param_1);
   return;
}undefined8 servername_reject_cb(SSL *param_1, undefined8 param_2, SSL_CTX *param_3) {
   int iVar1;
   char *__s1;
   void *pvVar2;
   undefined8 uVar3;
   __s1 = SSL_get_servername(param_1, 0);
   pvVar2 = SSL_get_ex_data(param_1, ex_data_idx);
   if (__s1 == (char*)0x0) {
      *(undefined4*)( (long)pvVar2 + 0x10 ) = 1;
      return 3;
   }
   iVar1 = strcmp(__s1, "server2");
   if (iVar1 == 0) {
      SSL_set_SSL_CTX(param_1, param_3);
      SSL_clear_options(param_1, 0xffffffff);
      uVar3 = SSL_CTX_get_options(param_3);
      SSL_set_options(param_1, uVar3);
      *(undefined4*)( (long)pvVar2 + 0x10 ) = 2;
   } else {
      iVar1 = strcmp(__s1, "server1");
      if (iVar1 != 0) {
         return 2;
      }
      *(undefined4*)( (long)pvVar2 + 0x10 ) = 1;
   }
   return 0;
}undefined8 client_hello_reject_cb(SSL *param_1, undefined4 *param_2, SSL_CTX *param_3) {
   byte *__s1;
   int iVar1;
   void *pvVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   byte *local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pvVar2 = SSL_get_ex_data(param_1, ex_data_idx);
   iVar1 = SSL_client_hello_get0_ext(param_1, 0, &local_40, &local_38);
   __s1 = local_40;
   uVar5 = local_38;
   if (( iVar1 != 0 ) && ( 2 < local_38 )) {
      uVar4 = (ulong)local_40[1] + (long)(int)( ( uint ) * local_40 << 8 );
      __s1 = local_40 + 2;
      if (local_38 == uVar4 + 2) {
         __s1 = local_40 + 3;
         uVar5 = uVar4;
         if (local_40[2] == 0) {
            uVar5 = uVar4 - 1;
            if (2 < uVar5) {
               __s1 = local_40 + 5;
               local_38 = (ulong)local_40[4] + (long)(int)( (uint)local_40[3] << 8 );
               if (( local_38 + 2 <= uVar5 ) && ( uVar5 = local_38 == 7 )) {
                  local_40 = __s1;
                  iVar1 = strncmp((char*)__s1, "server2", 7);
                  if (iVar1 == 0) {
                     SSL_set_SSL_CTX(param_1, param_3);
                     SSL_clear_options(param_1, 0xffffffff);
                     uVar3 = SSL_CTX_get_options(param_3);
                     SSL_set_options(param_1, uVar3);
                     *(undefined4*)( (long)pvVar2 + 0x10 ) = 2;
                  } else {
                     iVar1 = strncmp((char*)__s1, "server1", 7);
                     __s1 = local_40;
                     uVar5 = local_38;
                     if (iVar1 != 0) goto LAB_00100e00;
                     *(undefined4*)( (long)pvVar2 + 0x10 ) = 1;
                  }
                  uVar3 = 1;
                  goto LAB_00100e09;
               }
            }
         }
      }
   }
   LAB_00100e00:local_38 = uVar5;
   local_40 = __s1;
   *param_2 = 0x70;
   uVar3 = 0;
   LAB_00100e09:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 client_hello_ignore_cb(SSL *param_1, undefined4 *param_2, SSL_CTX *param_3) {
   byte *__s1;
   int iVar1;
   void *pvVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   byte *local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pvVar2 = SSL_get_ex_data(param_1, ex_data_idx);
   iVar1 = SSL_client_hello_get0_ext(param_1, 0, &local_40, &local_38);
   __s1 = local_40;
   uVar5 = local_38;
   if (( iVar1 != 0 ) && ( 2 < local_38 )) {
      uVar4 = (ulong)local_40[1] + (long)(int)( ( uint ) * local_40 << 8 );
      __s1 = local_40 + 2;
      if (local_38 == uVar4 + 2) {
         __s1 = local_40 + 3;
         uVar5 = uVar4;
         if (local_40[2] == 0) {
            uVar5 = uVar4 - 1;
            if (2 < uVar5) {
               __s1 = local_40 + 5;
               local_38 = (ulong)local_40[4] + (long)(int)( (uint)local_40[3] << 8 );
               if (local_38 + 2 <= uVar5) {
                  local_40 = __s1;
                  if (local_38 == 7) {
                     iVar1 = strncmp((char*)__s1, "server2", 7);
                     if (iVar1 != 0) goto LAB_00100f9c;
                     SSL_set_SSL_CTX(param_1, param_3);
                     SSL_clear_options(param_1, 0xffffffff);
                     uVar3 = SSL_CTX_get_options(param_3);
                     SSL_set_options(param_1, uVar3);
                     *(undefined4*)( (long)pvVar2 + 0x10 ) = 2;
                  } else {
                     LAB_00100f9c:*(undefined4*)( (long)pvVar2 + 0x10 ) = 1;
                  }
                  uVar3 = 1;
                  goto LAB_00100fb9;
               }
            }
         }
      }
   }
   local_38 = uVar5;
   local_40 = __s1;
   *param_2 = 0x70;
   uVar3 = 0;
   LAB_00100fb9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void do_connect_step(long param_1, undefined8 *param_2, undefined4 param_3) {
   int *piVar1;
   int iVar2;
   uint uVar3;
   char *str;
   SSL *pSVar4;
   undefined4 uVar5;
   long in_FS_OFFSET;
   undefined1 local_31;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_3) {
      case 0:
      case 3:
    uVar5 = *(undefined4 *)((long)param_2 + 0x2c);
LAB_0010108a:
    iVar2 = test_int_eq("test/helpers/handshake.c",0x313,"peer->status","PEER_RETRY",uVar5,1);
    if (iVar2 == 0) {
LAB_001010b1:
      *(undefined4 *)((long)param_2 + 0x2c) = 4;
    }
    else {
      iVar2 = SSL_do_handshake((SSL *)*param_2);
      if (iVar2 == 1) goto LAB_00101200;
      if ((iVar2 == 0) ||
         ((iVar2 = SSL_get_error((SSL *)*param_2,iVar2), iVar2 != 2 && (iVar2 != 0xc))))
      goto LAB_001012b0;
    }
    break;
      case 1:
      case 4:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      do_app_data_step(param_2);
      return;
    }
    goto LAB_001014ad;
      case 2:
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      *(undefined4 *)((long)param_2 + 0x2c) = 1;
      uVar5 = 1;
      goto LAB_0010108a;
    }
    iVar2 = test_int_eq("test/helpers/handshake.c",0x37f,"peer->status","PEER_RETRY",
                        *(int *)((long)param_2 + 0x2c),1);
    if ((iVar2 == 0) ||
       (iVar2 = test_true("test/helpers/handshake.c",0x380,
                          "test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_RENEG_SERVER || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_RENEG_CLIENT || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_KEY_UPDATE_SERVER || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_KEY_UPDATE_CLIENT || test_ctx->handshake_mode == SSL_TEST_HANDSHAKE_POST_HANDSHAKE_AUTH"
                          ,*(int *)(param_1 + 4) - 2U < 5), iVar2 == 0)) goto LAB_001010b1;
    pSVar4 = (SSL *)*param_2;
    *(ulong *)((long)param_2 + 0x24) =
         CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 2) {
      iVar2 = SSL_is_server();
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 4);
        pSVar4 = (SSL *)*param_2;
        goto LAB_0010119e;
      }
LAB_0010136c:
      iVar2 = SSL_renegotiate_pending((SSL *)*param_2);
      pSVar4 = (SSL *)*param_2;
      if (iVar2 != 0) {
LAB_001011bc:
        iVar2 = SSL_read(pSVar4,&local_31,1);
        if ((-1 < iVar2) || (iVar2 = SSL_get_error((SSL *)*param_2,iVar2), iVar2 != 2))
        goto LAB_001012b0;
        iVar2 = SSL_in_init(*param_2);
        if (iVar2 != 0) goto LAB_00101200;
        break;
      }
      iVar2 = SSL_is_server();
      pSVar4 = (SSL *)*param_2;
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x5c) != 0) {
          SSL_set_options(pSVar4,1);
          str = *(char **)(param_1 + 0x40);
          if (str != (char *)0x0) goto LAB_001013a3;
LAB_001013b3:
          pSVar4 = (SSL *)*param_2;
          goto LAB_001013b6;
        }
        str = *(char **)(param_1 + 0x40);
        if (str != (char *)0x0) {
LAB_001013a3:
          iVar2 = SSL_set_cipher_list((SSL *)*param_2,str);
          if (iVar2 == 0) goto LAB_001012b0;
          goto LAB_001013b3;
        }
        iVar2 = SSL_renegotiate_abbreviated(pSVar4);
      }
      else {
LAB_001013b6:
        iVar2 = SSL_renegotiate(pSVar4);
      }
      if (iVar2 != 0) {
        do_handshake_step(param_2);
        if (*(int *)((long)param_2 + 0x2c) == 1) goto LAB_00101200;
        if (*(int *)((long)param_2 + 0x2c) == 0) {
          *(undefined4 *)((long)param_2 + 0x2c) = 1;
        }
        break;
      }
    }
    else {
LAB_0010119e:
      if (iVar2 == 3) {
        iVar2 = SSL_is_server();
        if (iVar2 == 0) goto LAB_0010136c;
        iVar2 = *(int *)(param_1 + 4);
        pSVar4 = (SSL *)*param_2;
      }
      if (iVar2 - 4U < 2) {
        uVar3 = SSL_is_server();
        if (uVar3 != (*(int *)(param_1 + 4) == 4)) goto LAB_00101200;
        iVar2 = SSL_key_update(*param_2,*(undefined4 *)(param_1 + 0x10));
        if (iVar2 == 0) goto LAB_001012b0;
        do_handshake_step(param_2);
        iVar2 = *(int *)((long)param_2 + 0x2c);
joined_r0x00101347:
        if (iVar2 == 0) break;
      }
      else {
        if (iVar2 != 6) goto LAB_001011bc;
        iVar2 = SSL_is_server();
        if (iVar2 == 0) {
LAB_00101448:
          iVar2 = test_int_eq("test/helpers/handshake.c",0x313,"peer->status","PEER_RETRY",
                              *(undefined4 *)((long)param_2 + 0x2c),1);
          if (iVar2 != 0) {
            iVar2 = SSL_do_handshake((SSL *)*param_2);
            if (iVar2 == 1) goto LAB_00101200;
            if ((iVar2 != 0) &&
               ((iVar2 = SSL_get_error((SSL *)*param_2,iVar2), iVar2 == 2 || (iVar2 == 0xc)))) {
              iVar2 = *(int *)((long)param_2 + 0x2c);
              goto joined_r0x00101347;
            }
          }
        }
        else {
          piVar1 = (int *)*param_2;
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            if (*(int *)(param_1 + 0x90) != 0) {
              piVar1[0x2ea] = 2;
            }
            iVar2 = SSL_verify_client_post_handshake();
            if (iVar2 != 0) goto LAB_00101448;
          }
        }
      }
    }
LAB_001012b0:
    *(undefined4 *)((long)param_2 + 0x2c) = 2;
    break;
      case 5:
    iVar2 = test_int_eq("test/helpers/handshake.c",0x42c,"peer->status","PEER_RETRY",
                        *(undefined4 *)((long)param_2 + 0x2c),1);
    if (iVar2 == 0) goto LAB_001010b1;
    iVar2 = SSL_shutdown((SSL *)*param_2);
    if (iVar2 != 1) {
      if ((-1 < iVar2) || (iVar2 = SSL_get_error((SSL *)*param_2,iVar2), iVar2 - 2U < 2)) break;
      goto LAB_001012b0;
    }
LAB_00101200:
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    break;
      case 6:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      test_error("test/helpers/handshake.c",0x48f,"Action after connection done");
      return;
    }
    goto LAB_001014ad;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_001014ad:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined4 *do_handshake_internal(SSL_CTX *param_1, SSL_CTX *param_2, SSL_CTX *param_3, long param_4, int *param_5, SSL_SESSION *param_6, SSL_SESSION *param_7, undefined8 *param_8, undefined8 *param_9) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   EVP_PKEY *pEVar10;
   int iVar11;
   undefined4 uVar12;
   undefined4 *puVar13;
   ulong uVar14;
   void *pvVar15;
   SSL_SESSION *pSVar16;
   uchar *puVar17;
   COMP_METHOD *pCVar18;
   undefined8 uVar19;
   SSL_CIPHER *c;
   char *__s;
   size_t sVar20;
   stack_st_X509_NAME *psVar21;
   BIO_METHOD *pBVar22;
   time_t tVar23;
   time_t tVar24;
   undefined1 *parg;
   bool bVar25;
   uint uVar26;
   long lVar27;
   code *pcVar28;
   int iVar29;
   int iVar30;
   SSL *ssl;
   int iVar31;
   SSL *s;
   long in_FS_OFFSET;
   BIO *local_268;
   BIO *local_250;
   uint local_228;
   uint local_224;
   long local_220;
   long local_218;
   uchar *local_210;
   EVP_PKEY *local_208;
   ulong local_200;
   undefined1 local_1f8[16];
   undefined4 local_1e8;
   undefined1 local_1d8[16];
   undefined4 local_1c8;
   undefined1 local_1b8[16];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined1 local_188[16];
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   undefined1 local_148[16];
   undefined1 local_138[16];
   void *local_128;
   undefined1 local_118[16];
   undefined1 local_108[16];
   undefined1 local_f8[16];
   char *local_e8;
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   char *local_a8;
   char local_98[88];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar13 = (undefined4*)CRYPTO_zalloc(0xa8, "test/helpers/handshake.c", 0x20);
   test_ptr("test/helpers/handshake.c", 0x20, "ret = OPENSSL_zalloc(sizeof(*ret))");
   local_228 = 0;
   local_220 = 0;
   local_218 = 0;
   local_210 = (uchar*)0x0;
   local_224 = 0;
   if (puVar13 == (undefined4*)0x0) goto LAB_001018c6;
   local_e8 = (char*)0x0;
   local_a8 = (char*)0x0;
   local_128 = (void*)0x0;
   local_1e8 = 0;
   local_1c8 = 0;
   local_118 = (undefined1[16])0x0;
   local_108 = (undefined1[16])0x0;
   local_f8 = (undefined1[16])0x0;
   local_d8 = (undefined1[16])0x0;
   local_c8 = (undefined1[16])0x0;
   local_b8 = (undefined1[16])0x0;
   local_158 = (undefined1[16])0x0;
   local_148 = (undefined1[16])0x0;
   local_138 = (undefined1[16])0x0;
   local_1b8 = (undefined1[16])0x0;
   local_1a8 = (undefined1[16])0x0;
   local_198 = (undefined1[16])0x0;
   local_188 = (undefined1[16])0x0;
   local_178 = (undefined1[16])0x0;
   local_168 = (undefined1[16])0x0;
   local_1f8 = (undefined1[16])0x0;
   local_1d8 = (undefined1[16])0x0;
   uVar14 = SSL_CTX_ctrl(param_1, 0x34, (long)*(int*)( param_4 + 0xc ), (void*)0x0);
   iVar11 = test_int_eq("test/helpers/handshake.c", 0x1f7, "SSL_CTX_set_max_send_fragment(server_ctx, test->max_fragment_size)", &_LC20, uVar14 & 0xffffffff, 1);
   if (iVar11 == 0) goto LAB_001018b0;
   lVar27 = (long)*(int*)( param_4 + 0xc );
   if (param_2 != (SSL_CTX*)0x0) {
      uVar14 = SSL_CTX_ctrl(param_2, 0x34, lVar27, (void*)0x0);
      iVar11 = test_int_eq("test/helpers/handshake.c", 0x1fb, "SSL_CTX_set_max_send_fragment(server2_ctx, test->max_fragment_size)", &_LC20, uVar14 & 0xffffffff, 1);
      if (iVar11 == 0) goto LAB_001018b0;
      lVar27 = (long)*(int*)( param_4 + 0xc );
   }
   uVar14 = SSL_CTX_ctrl(param_3, 0x34, lVar27, (void*)0x0);
   iVar11 = test_int_eq("test/helpers/handshake.c", 0x200, "SSL_CTX_set_max_send_fragment(client_ctx, test->max_fragment_size)", &_LC20, uVar14 & 0xffffffff, 1);
   if (iVar11 == 0) goto LAB_001018b0;
   iVar11 = *param_5;
   if (iVar11 == 2) {
      n_retries = 1;
      SSL_CTX_set_cert_verify_callback(param_3, verify_retry_cb, (void*)0x0);
   } else if (iVar11 == 3) {
      SSL_CTX_set_cert_verify_callback(param_3, verify_reject_cb, (void*)0x0);
   } else if (iVar11 == 1) {
      SSL_CTX_set_cert_verify_callback(param_3, verify_accept_cb, (void*)0x0);
   }
   if ((uint)param_5[2] < 5) {
      SSL_CTX_set_tlsext_max_fragment_length(param_3);
   }
   switch (param_5[0x12]) {
      case 1:
    pcVar28 = servername_ignore_cb;
    goto LAB_0010179f;
      case 2:
    pcVar28 = servername_reject_cb;
LAB_0010179f:
    SSL_CTX_callback_ctrl(param_1,0x35,pcVar28);
    SSL_CTX_ctrl(param_1,0x36,0,param_2);
    break;
      case 3:
    SSL_CTX_set_client_hello_cb(param_1,client_hello_ignore_cb,param_2);
    break;
      case 4:
    SSL_CTX_set_client_hello_cb(param_1,client_hello_reject_cb,param_2);
    break;
      case 5:
    SSL_CTX_set_client_hello_cb(param_1,client_hello_nov12_cb,param_2);
   }
   if (param_5[0x19] != 0) {
      SSL_CTX_ctrl(param_3, 0x41, 1, (void*)0x0);
      SSL_CTX_callback_ctrl(param_3, 0x3f, client_ocsp_cb);
      SSL_CTX_ctrl(param_3, 0x40, 0, (void*)0x0);
      SSL_CTX_callback_ctrl(param_1, 0x3f, server_ocsp_cb);
      parg = &dummy_ocsp_resp_bad_val;
      if (param_5[0x19] == 1) {
         parg = &dummy_ocsp_resp_good_val;
      }
      SSL_CTX_ctrl(param_1, 0x40, 0, parg);
   }
   if (param_2 != (SSL_CTX*)0x0) {
      SSL_CTX_set_tlsext_ticket_key_evp_cb(param_2, do_not_call_session_ticket_cb);
   }
   if (param_5[0x18] != 0) {
      SSL_CTX_set_tlsext_ticket_key_evp_cb(param_1, broken_session_ticket_cb);
   }
   if (*(long*)( param_5 + 0x14 ) == 0) {
      LAB_00101847:if (*(long*)( param_5 + 0x24 ) != 0) {
         iVar11 = parse_protos(*(long*)( param_5 + 0x24 ), local_d8, local_d8 + 8);
         iVar11 = test_true("test/helpers/handshake.c", 0x259, "parse_protos(extra->server2.npn_protocols, &server2_ctx_data->npn_protocols, &server2_ctx_data->npn_protocols_len)", iVar11 != 0);
         if (( iVar11 == 0 ) || ( iVar11 = test_ptr("test/helpers/handshake.c", 0x25c, "server2_ctx") ),iVar11 == 0) goto LAB_001018b0;
         SSL_CTX_set_next_protos_advertised_cb(param_2, server_npn_cb, local_d8);
      }
      if (*(long*)( param_5 + 4 ) != 0) {
         parse_protos(*(long*)( param_5 + 4 ), local_158, local_158 + 8);
         iVar11 = test_true("test/helpers/handshake.c", 0x262, "parse_protos(extra->client.npn_protocols, &client_ctx_data->npn_protocols, &client_ctx_data->npn_protocols_len)");
         if (iVar11 == 0) goto LAB_001018b0;
         SSL_CTX_set_next_proto_select_cb(param_3, client_npn_cb, local_158);
      }
      if (*(long*)( param_5 + 0x16 ) != 0) {
         parse_protos(*(long*)( param_5 + 0x16 ), local_108, local_108 + 8);
         iVar11 = test_true("test/helpers/handshake.c", 0x26b, "parse_protos(extra->server.alpn_protocols, &server_ctx_data->alpn_protocols, &server_ctx_data->alpn_protocols_len)");
         if (iVar11 == 0) goto LAB_001018b0;
         SSL_CTX_set_alpn_select_cb(param_1, server_alpn_cb, local_118);
      }
      if (*(long*)( param_5 + 0x26 ) == 0) {
         LAB_00101a5d:if (*(long*)( param_5 + 6 ) == 0) {
            LAB_00101b02:if (*(char**)( param_5 + 0x20 ) != (char*)0x0) {
               local_e8 = CRYPTO_strdup(*(char**)( param_5 + 0x20 ), "test/helpers/handshake.c", 0x28a);
               iVar11 = test_ptr("test/helpers/handshake.c", 0x28b, "server_ctx_data->session_ticket_app_data", local_e8);
               if (iVar11 == 0) goto LAB_001018b0;
               SSL_CTX_set_session_ticket_cb(param_1, generate_session_ticket_cb, decrypt_session_ticket_cb);
            }
            if (*(long*)( param_5 + 0x30 ) == 0) {
               LAB_00101bde:lVar27 = SSL_CTX_ctrl(param_1, 0x3b, 0, (void*)0x0);
               pvVar15 = (void*)CRYPTO_zalloc(lVar27, "test/helpers/handshake.c", 0x2a0);
               iVar11 = test_ptr("test/helpers/handshake.c", 0x2a0, "ticket_keys = OPENSSL_zalloc(ticket_key_len)", pvVar15);
               if (iVar11 != 0) {
                  uVar14 = SSL_CTX_ctrl(param_1, 0x3b, lVar27, pvVar15);
                  iVar11 = test_int_eq("test/helpers/handshake.c", 0x2a1, "SSL_CTX_set_tlsext_ticket_keys(server_ctx, ticket_keys, ticket_key_len)", &_LC20, uVar14 & 0xffffffff, 1);
                  if (iVar11 != 0) {
                     CRYPTO_free(pvVar15);
                     iVar11 = SSL_CTX_set_default_ctlog_list_file(param_3);
                     iVar11 = test_true("test/helpers/handshake.c", 0x2ab, "SSL_CTX_set_default_ctlog_list_file(client_ctx)", iVar11 != 0);
                     if (iVar11 == 0) goto LAB_001018b0;
                     if (param_5[8] == 1) {
                        iVar11 = SSL_CTX_enable_ct(param_3, 0);
                        iVar11 = test_true("test/helpers/handshake.c", 0x2af, "SSL_CTX_enable_ct(client_ctx, SSL_CT_VALIDATION_PERMISSIVE)", iVar11 != 0);
                        joined_r0x00102e7d:if (iVar11 == 0) goto LAB_001018b0;
                     } else if (param_5[8] == 2) {
                        iVar11 = SSL_CTX_enable_ct(param_3, 1);
                        iVar11 = test_true("test/helpers/handshake.c", 0x2b4, "SSL_CTX_enable_ct(client_ctx, SSL_CT_VALIDATION_STRICT)", iVar11 != 0);
                        goto joined_r0x00102e7d;
                     }
                     iVar11 = configure_handshake_ctx_for_srp(param_1, param_2, param_3, param_5, local_118, local_d8, local_158);
                     if (iVar11 == 0) goto LAB_001018b0;
                     iVar11 = create_peer(local_1b8, param_1);
                     if (iVar11 == 0) {
                        ssl = (SSL*)0x0;
                        test_note("creating server context");
                        local_268 = (BIO*)0x0;
                        local_250 = (BIO*)0x0;
                        s = (SSL*)local_1b8._0_8_;
                     } else {
                        iVar11 = create_peer(local_188, param_3);
                        s = (SSL*)local_1b8._0_8_;
                        if (iVar11 == 0) {
                           test_note("creating client context");
                           LAB_00102ae4:local_250 = (BIO*)local_188._8_8_;
                           local_268 = (BIO*)local_178._8_8_;
                           ssl = (SSL*)local_188._0_8_;
                        } else {
                           ssl = (SSL*)local_188._0_8_;
                           uVar19 = CONCAT44(*(undefined4*)( param_4 + 8 ), *(undefined4*)( param_4 + 8 ));
                           local_198._4_8_ = uVar19;
                           local_168._4_8_ = uVar19;
                           if (param_5[1] != 0) {
                              pvVar15 = (void*)ssl_servername_name();
                              SSL_ctrl(ssl, 0x37, 0, pvVar15);
                           }
                           if (param_5[0x10] != 0) {
                              SSL_set_post_handshake_auth(ssl, 1);
                           }
                           if (param_6 == (SSL_SESSION*)0x0) {
                              LAB_00101e40:iVar11 = *(int*)( param_4 + 0x210 );
                              *puVar13 = 3;
                              local_250 = (BIO*)0x0;
                              local_268 = (BIO*)0x0;
                              if (iVar11 == 0) {
                                 pBVar22 = BIO_s_mem();
                                 local_268 = BIO_new(pBVar22);
                                 pBVar22 = BIO_s_mem();
                                 local_250 = BIO_new(pBVar22);
                              }
                              iVar11 = test_ptr("test/helpers/handshake.c", 0x5e8, "client_to_server");
                              if (( iVar11 != 0 ) && ( iVar11 = test_ptr("test/helpers/handshake.c", 0x5e9, "server_to_client") ),iVar11 != 0) {
                                 BIO_ctrl(local_268, 0x66, 1, (void*)0x0);
                                 BIO_ctrl(local_250, 0x66, 1, (void*)0x0);
                                 SSL_set_connect_state(ssl);
                                 SSL_set_accept_state(s);
                                 if (*(int*)( param_4 + 0x210 ) == 0) {
                                    SSL_set_bio(ssl, local_250, local_268);
                                    uVar12 = BIO_up_ref(local_250);
                                    iVar11 = test_int_gt("test/helpers/handshake.c", 0x5f9, "BIO_up_ref(server_to_client)", &_LC31, uVar12);
                                    if (iVar11 != 0) {
                                       BIO_up_ref(local_268);
                                       iVar11 = test_int_gt("test/helpers/handshake.c", 0x5fa, "BIO_up_ref(client_to_server)");
                                       if (iVar11 != 0) {
                                          SSL_set_bio(s, local_268, local_250);
                                          goto LAB_00101f1d;
                                       }
                                    }
                                 } else {
                                    SSL_set_bio(ssl, local_268, local_268);
                                    SSL_set_bio(s, local_250, local_250);
                                    LAB_00101f1d:ex_data_idx = CRYPTO_get_ex_new_index(0, 0, "ex data", (undefined1*)0x0, (undefined1*)0x0, (undefined1*)0x0);
                                    iVar11 = test_int_ge("test/helpers/handshake.c", 0x600, "ex_data_idx", &_LC31, ex_data_idx, 0);
                                    if (iVar11 != 0) {
                                       iVar11 = SSL_set_ex_data(s, ex_data_idx, local_1f8);
                                       iVar11 = test_int_eq("test/helpers/handshake.c", 0x601, "SSL_set_ex_data(server.ssl, ex_data_idx, &server_ex_data)", &_LC20, iVar11, 1);
                                       if (iVar11 != 0) {
                                          iVar11 = SSL_set_ex_data(ssl, ex_data_idx, local_1d8);
                                          iVar11 = test_int_eq("test/helpers/handshake.c", 0x602, "SSL_set_ex_data(client.ssl, ex_data_idx, &client_ex_data)", &_LC20, iVar11, 1);
                                          if (iVar11 != 0) {
                                             iVar31 = 0;
                                             SSL_set_info_callback(s, info_cb);
                                             SSL_set_info_callback(ssl, info_cb);
                                             local_168._12_4_ = 1;
                                             local_198._12_4_ = 3;
                                             tVar23 = time((time_t*)0x0);
                                             iVar29 = 0;
                                             iVar11 = 0;
                                             LAB_00102caa:do_connect_step(param_4, local_188, iVar31);
                                             if (local_168._12_4_ == 1) {
                                                LAB_00102dc0:if (local_198._12_4_ == 3) {
                                                   local_198._12_4_ = 1;
                                                }
                                                LAB_00102dd0:bVar25 = true;
                                                iVar30 = iVar29;
                                                do {
                                                   if (*(int*)( param_4 + 0x210 ) == 0) {
                                                      iVar29 = iVar29 + 1;
                                                      if (1999 < iVar30) goto LAB_00102db4;
                                                      if (!bVar25) goto LAB_00102caa;
                                                      iVar30 = iVar29;
                                                      if (local_198._12_4_ == 0) {
                                                         bVar25 = 1 < iVar11;
                                                         iVar11 = iVar11 + 1;
                                                         if (bVar25) goto LAB_00102db4;
                                                         goto LAB_00102caa;
                                                      }
                                                   } else {
                                                      tVar24 = time((time_t*)0x0);
                                                      if (3 < tVar24 - tVar23) goto LAB_00102db4;
                                                      if (bVar25) {
                                                         if (local_198._12_4_ != 1) goto LAB_00102caa;
                                                      } else if (local_168._12_4_ == 1) goto LAB_00102caa;
                                                   }
                                                   do_connect_step(param_4, local_1b8, iVar31);
                                                   if (local_198._12_4_ != 1) {
                                                      if (local_198._12_4_ == 2) {
                                                         if (local_168._12_4_ != 1) {
                                                            if (local_168._12_4_ == 2) goto LAB_00102e4a;
                                                            if (local_168._12_4_ == 0) goto LAB_00102f23;
                                                            goto LAB_00102db4;
                                                         }
                                                      } else {
                                                         if (local_198._12_4_ != 0) goto LAB_00102db4;
                                                         uVar26 = local_168._12_4_;
                                                         if (( local_168._12_4_ & 0xfffffffd ) != 1) goto LAB_00102cf0;
                                                      }
                                                   }
                                                   bVar25 = false;
                                                } while ( true );
                                             }
                                             if (local_168._12_4_ == 2) {
                                                if (local_198._12_4_ == 2) {
                                                   LAB_00102f23:*puVar13 = 1;
                                                   goto LAB_00102d1c;
                                                }
                                                if ((uint)local_198._12_4_ < 3) {
                                                   if (local_198._12_4_ != 0) goto LAB_00102dd0;
                                                } else {
                                                   if (local_198._12_4_ != 3) goto LAB_00102db4;
                                                   local_198._12_4_ = 1;
                                                }
                                                LAB_00102e4a:*puVar13 = 2;
                                                goto LAB_00102d1c;
                                             }
                                             if (local_168._12_4_ == 0) {
                                                uVar26 = local_198._12_4_;
                                                if (( local_198._12_4_ & 0xfffffffd ) != 1) {
                                                   LAB_00102cf0:if (uVar26 != 0) goto LAB_00102db4;
                                                   switch (iVar31) {
                                                      case 0:
                                    iVar31 = (-(uint)(*(int *)(param_4 + 4) - 2U < 5) & 0xfffffffd)
                                             + 4;
                                    break;
                                                      case 1:
                                    iVar31 = 2;
                                    break;
                                                      case 2:
                                    iVar31 = ~-(uint)(*(int *)(param_4 + 4) - 4U < 3) + 4;
                                    break;
                                                      case 3:
                                    iVar31 = 4;
                                    break;
                                                      case 4:
                                    iVar31 = 5;
                                    break;
                                                      case 5:
                                    *puVar13 = 0;
                                    goto LAB_00102d1c;
                                                      case 6:
                                    test_error("test/helpers/handshake.c",0x472,
                                               "Trying to progress after connection done");
                                                      default:
                                    iVar31 = -1;
                                                   }
                                                   local_198._12_4_ = 1;
                                                   iVar29 = 0;
                                                   local_168._12_4_ = 1;
                                                   goto LAB_00102caa;
                                                }
                                                goto LAB_00102dc0;
                                             }
                                             if (local_198._12_4_ == 3) {
                                                local_198._12_4_ = 1;
                                             }
                                             LAB_00102db4:*puVar13 = 3;
                                             LAB_00102d1c:s = (SSL*)local_1b8._0_8_;
                                             goto LAB_00102ae4;
                                          }
                                       }
                                    }
                                 }
                              }
                           } else {
                              SSL_SESSION_get_id(param_7, &local_228);
                              if (local_228 == 0) {
                                 LAB_00101e08:SSL_set_session(ssl, param_6);
                                 iVar11 = test_true("test/helpers/handshake.c", 0x5d3, "SSL_set_session(client.ssl, session_in)");
                                 if (iVar11 != 0) {
                                    local_228 = 0;
                                    goto LAB_00101e40;
                                 }
                              } else {
                                 SSL_CTX_add_session(param_1, param_7);
                                 iVar11 = test_true("test/helpers/handshake.c", 0x5d1, "SSL_CTX_add_session(server_ctx, serv_sess_in)");
                                 if (iVar11 != 0) goto LAB_00101e08;
                              }
                           }
                           local_250 = (BIO*)local_188._8_8_;
                           local_268 = (BIO*)local_178._8_8_;
                        }
                     }
                     *(ulong*)( puVar13 + 5 ) = CONCAT44(local_1d8._8_4_, local_1f8._4_4_);
                     *(long*)( puVar13 + 1 ) = local_1d8._0_8_;
                     *(ulong*)( puVar13 + 3 ) = CONCAT44(local_1f8._0_4_, local_1f8._8_4_);
                     iVar11 = SSL_version(s);
                     puVar13[7] = iVar11;
                     iVar11 = SSL_version(ssl);
                     puVar13[8] = iVar11;
                     puVar13[9] = local_1e8;
                     pSVar16 = SSL_get_session(ssl);
                     if (pSVar16 == (SSL_SESSION*)0x0) {
                        if (( local_220 == 0 ) || ( local_218 == 0 )) {
                           puVar13[10] = 2;
                        } else {
                           puVar13[10] = 1;
                        }
                        pCVar18 = SSL_get_current_compression(ssl);
                        puVar13[0xb] = ( uint )(pCVar18 != (COMP_METHOD*)0x0);
                        LAB_001020d7:uVar12 = 2;
                     } else {
                        SSL_SESSION_get0_ticket(pSVar16, &local_220, &local_218);
                        puVar17 = SSL_SESSION_get_id(pSVar16, &local_228);
                        iVar11 = 2;
                        if (local_220 != 0) {
                           iVar11 = 2 - ( uint )(local_218 != 0);
                        }
                        puVar13[10] = iVar11;
                        pCVar18 = SSL_get_current_compression(ssl);
                        puVar13[0xb] = ( uint )(pCVar18 != (COMP_METHOD*)0x0);
                        if (( puVar17 == (uchar*)0x0 ) || ( local_228 == 0 )) goto LAB_001020d7;
                        uVar12 = 1;
                     }
                     puVar13[0x24] = uVar12;
                     iVar11 = *param_5;
                     puVar13[0xc] = local_1f8._12_4_;
                     if (( iVar11 == 2 ) && ( n_retries != -1 )) {
                        *puVar13 = 1;
                     }
                     SSL_get0_next_proto_negotiated(ssl, &local_210, &local_224);
                     puVar17 = local_210;
                     uVar26 = local_224;
                     if (local_224 == 0) {
                        LAB_00102910:uVar19 = 0;
                     } else {
                        uVar19 = OPENSSL_strnlen(local_210, local_224);
                        iVar11 = test_size_t_eq("test/helpers/handshake.c", 0x4e9, "OPENSSL_strnlen((const char*)(in), len)", &_LC8, uVar19, uVar26);
                        if (iVar11 == 0) goto LAB_00102910;
                        uVar19 = CRYPTO_strndup(puVar17, uVar26, "test/helpers/handshake.c", 0x4ea);
                        test_ptr("test/helpers/handshake.c", 0x4ea, "ret = OPENSSL_strndup((const char*)(in), len)", uVar19);
                     }
                     *(undefined8*)( puVar13 + 0xe ) = uVar19;
                     SSL_get0_next_proto_negotiated(s, &local_210, &local_224);
                     puVar17 = local_210;
                     uVar26 = local_224;
                     if (local_224 == 0) {
                        LAB_00102900:uVar19 = 0;
                     } else {
                        uVar19 = OPENSSL_strnlen(local_210, local_224);
                        iVar11 = test_size_t_eq("test/helpers/handshake.c", 0x4e9, "OPENSSL_strnlen((const char*)(in), len)", &_LC8, uVar19, uVar26);
                        if (iVar11 == 0) goto LAB_00102900;
                        uVar19 = CRYPTO_strndup(puVar17, uVar26, "test/helpers/handshake.c", 0x4ea);
                        test_ptr("test/helpers/handshake.c", 0x4ea, "ret = OPENSSL_strndup((const char*)(in), len)", uVar19);
                     }
                     *(undefined8*)( puVar13 + 0x10 ) = uVar19;
                     SSL_get0_alpn_selected(ssl, &local_210, &local_224);
                     puVar17 = local_210;
                     uVar26 = local_224;
                     if (local_224 == 0) {
                        LAB_001028f0:uVar19 = 0;
                     } else {
                        uVar19 = OPENSSL_strnlen(local_210, local_224);
                        iVar11 = test_size_t_eq("test/helpers/handshake.c", 0x4e9, "OPENSSL_strnlen((const char*)(in), len)", &_LC8, uVar19, uVar26);
                        if (iVar11 == 0) goto LAB_001028f0;
                        uVar19 = CRYPTO_strndup(puVar17, uVar26, "test/helpers/handshake.c", 0x4ea);
                        test_ptr("test/helpers/handshake.c", 0x4ea, "ret = OPENSSL_strndup((const char*)(in), len)", uVar19);
                     }
                     *(undefined8*)( puVar13 + 0x12 ) = uVar19;
                     SSL_get0_alpn_selected(s, &local_210, &local_224);
                     puVar17 = local_210;
                     uVar26 = local_224;
                     if (local_224 == 0) {
                        LAB_001028e0:uVar19 = 0;
                     } else {
                        uVar19 = OPENSSL_strnlen(local_210, local_224);
                        iVar11 = test_size_t_eq("test/helpers/handshake.c", 0x4e9, "OPENSSL_strnlen((const char*)(in), len)", &_LC8, uVar19, uVar26);
                        if (iVar11 == 0) goto LAB_001028e0;
                        uVar19 = CRYPTO_strndup(puVar17, uVar26, "test/helpers/handshake.c", 0x4ea);
                        test_ptr("test/helpers/handshake.c", 0x4ea, "ret = OPENSSL_strndup((const char*)(in), len)", uVar19);
                     }
                     *(undefined8*)( puVar13 + 0x14 ) = uVar19;
                     pSVar16 = SSL_get_session(s);
                     if (pSVar16 != (SSL_SESSION*)0x0) {
                        SSL_SESSION_get0_ticket_appdata(pSVar16, &local_220, &local_218);
                        uVar19 = CRYPTO_strndup(local_220, local_218, "test/helpers/handshake.c", 0x698);
                        *(undefined8*)( puVar13 + 0x28 ) = uVar19;
                     }
                     uVar12 = SSL_session_reused(ssl);
                     puVar13[0x16] = uVar12;
                     uVar12 = SSL_session_reused(s);
                     puVar13[0x17] = uVar12;
                     c = SSL_get_current_cipher(ssl);
                     __s = SSL_CIPHER_get_name(c);
                     sVar20 = strlen(__s);
                     if (sVar20 == 0) {
                        LAB_001028d0:uVar19 = 0;
                     } else {
                        uVar19 = OPENSSL_strnlen(__s, sVar20);
                        iVar11 = test_size_t_eq("test/helpers/handshake.c", 0x4e9, "OPENSSL_strnlen((const char*)(in), len)", &_LC8, uVar19, sVar20);
                        if (iVar11 == 0) goto LAB_001028d0;
                        uVar19 = CRYPTO_strndup(__s, sVar20, "test/helpers/handshake.c", 0x4ea);
                        test_ptr("test/helpers/handshake.c", 0x4ea, "ret = OPENSSL_strndup((const char*)(in), len)", uVar19);
                     }
                     *(undefined8*)( puVar13 + 0x26 ) = uVar19;
                     if (param_8 != (undefined8*)0x0) {
                        pSVar16 = SSL_get1_session(ssl);
                        *param_8 = pSVar16;
                     }
                     if (( param_9 != (undefined8*)0x0 ) && ( pSVar16 = SSL_get_session(s) ),pSVar16 != (SSL_SESSION*)0x0) {
                        uVar19 = SSL_SESSION_dup(pSVar16);
                        *param_9 = uVar19;
                     }
                     lVar27 = SSL_ctrl(ssl, 0x6d, 0, &local_208);
                     pEVar10 = local_208;
                     if (lVar27 != 0) {
                        iVar11 = EVP_PKEY_is_a(local_208, &_LC56);
                        if (iVar11 == 0) {
                           iVar11 = EVP_PKEY_get_id(pEVar10);
                        } else {
                           iVar11 = EVP_PKEY_get_group_name(pEVar10, local_98, 0x50, &local_200);
                           if (iVar11 != 0) {
                              iVar11 = OBJ_txt2nid(local_98);
                           }
                        }
                        puVar13[0x18] = iVar11;
                        EVP_PKEY_free(local_208);
                     }
                     SSL_ctrl(ssl, 0x6c, 0, puVar13 + 0x1a);
                     SSL_ctrl(s, 0x6c, 0, puVar13 + 0x1f);
                     SSL_get_peer_signature_type_nid(ssl, puVar13 + 0x1b);
                     SSL_get_peer_signature_type_nid(s, puVar13 + 0x20);
                     psVar21 = (stack_st_X509_NAME*)SSL_get0_peer_CA_list(ssl);
                     if (psVar21 != (stack_st_X509_NAME*)0x0) {
                        psVar21 = SSL_dup_CA_list(psVar21);
                     }
                     *(stack_st_X509_NAME**)( puVar13 + 0x22 ) = psVar21;
                     psVar21 = (stack_st_X509_NAME*)SSL_get0_peer_CA_list(s);
                     if (psVar21 != (stack_st_X509_NAME*)0x0) {
                        psVar21 = SSL_dup_CA_list(psVar21);
                     }
                     *(stack_st_X509_NAME**)( puVar13 + 0x1c ) = psVar21;
                     lVar27 = SSL_get0_peer_certificate(ssl);
                     iVar11 = 0;
                     if (lVar27 != 0) {
                        uVar19 = X509_get0_pubkey();
                        iVar11 = EVP_PKEY_is_a(uVar19, &_LC56);
                        if (iVar11 == 0) {
                           iVar11 = EVP_PKEY_get_id(uVar19);
                        } else {
                           iVar11 = EVP_PKEY_get_group_name(uVar19, local_98, 0x50, &local_200);
                           if (iVar11 != 0) {
                              iVar11 = OBJ_txt2nid(local_98);
                           }
                        }
                     }
                     puVar13[0x19] = iVar11;
                     lVar27 = SSL_get0_peer_certificate(s);
                     iVar11 = 0;
                     if (lVar27 != 0) {
                        uVar19 = X509_get0_pubkey();
                        iVar11 = EVP_PKEY_is_a(uVar19, &_LC56);
                        if (iVar11 == 0) {
                           iVar11 = EVP_PKEY_get_id(uVar19);
                        } else {
                           iVar11 = EVP_PKEY_get_group_name(uVar19, local_98, 0x50, &local_200);
                           if (iVar11 != 0) {
                              iVar11 = OBJ_txt2nid(local_98);
                           }
                        }
                     }
                     puVar13[0x1e] = iVar11;
                     CRYPTO_free((void*)local_118._0_8_);
                     auVar1._8_8_ = 0;
                     auVar1._0_8_ = local_118._8_8_;
                     local_118 = auVar1 << 0x40;
                     CRYPTO_free((void*)local_108._0_8_);
                     auVar2._8_8_ = 0;
                     auVar2._0_8_ = local_108._8_8_;
                     local_108 = auVar2 << 0x40;
                     CRYPTO_free((void*)local_f8._0_8_);
                     uVar19 = local_f8._8_8_;
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = local_f8._8_8_;
                     local_f8 = auVar3 << 0x40;
                     CRYPTO_free((void*)uVar19);
                     local_f8._8_8_ = 0;
                     CRYPTO_free(local_e8);
                     local_e8 = (char*)0x0;
                     CRYPTO_free((void*)local_d8._0_8_);
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = local_d8._8_8_;
                     local_d8 = auVar4 << 0x40;
                     CRYPTO_free((void*)local_c8._0_8_);
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = local_c8._8_8_;
                     local_c8 = auVar5 << 0x40;
                     CRYPTO_free((void*)local_b8._0_8_);
                     uVar19 = local_b8._8_8_;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = local_b8._8_8_;
                     local_b8 = auVar6 << 0x40;
                     CRYPTO_free((void*)uVar19);
                     local_b8._8_8_ = 0;
                     CRYPTO_free(local_a8);
                     local_a8 = (char*)0x0;
                     CRYPTO_free((void*)local_158._0_8_);
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = local_158._8_8_;
                     local_158 = auVar7 << 0x40;
                     CRYPTO_free((void*)local_148._0_8_);
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = local_148._8_8_;
                     local_148 = auVar8 << 0x40;
                     CRYPTO_free((void*)local_138._0_8_);
                     uVar19 = local_138._8_8_;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = local_138._8_8_;
                     local_138 = auVar9 << 0x40;
                     CRYPTO_free((void*)uVar19);
                     local_138._8_8_ = 0;
                     CRYPTO_free(local_128);
                     local_128 = (void*)0x0;
                     SSL_free(s);
                     CRYPTO_free((void*)local_1b8._8_8_);
                     CRYPTO_free((void*)local_1a8._8_8_);
                     SSL_free(ssl);
                     CRYPTO_free(local_250);
                     CRYPTO_free(local_268);
                     goto LAB_001018d0;
                  }
               }
               CRYPTO_free(pvVar15);
            } else {
               iVar11 = test_ptr("test/helpers/handshake.c", 0x291, "server2_ctx", param_2);
               if (iVar11 != 0) {
                  local_a8 = CRYPTO_strdup(*(char**)( param_5 + 0x30 ), "test/helpers/handshake.c", 0x294);
                  iVar11 = test_ptr("test/helpers/handshake.c", 0x295, "server2_ctx_data->session_ticket_app_data", local_a8);
                  if (iVar11 != 0) {
                     SSL_CTX_set_session_ticket_cb(param_2, 0, decrypt_session_ticket_cb);
                     goto LAB_00101bde;
                  }
               }
            }
         } else {
            local_208 = (EVP_PKEY*)0x0;
            local_200 = 0;
            iVar11 = parse_protos(*(long*)( param_5 + 6 ), &local_208, &local_200);
            iVar11 = test_true("test/helpers/handshake.c", 0x27f, "parse_protos(extra->client.alpn_protocols, &alpn_protos, &alpn_protos_len)", iVar11 != 0);
            pEVar10 = local_208;
            if (iVar11 != 0) {
               uVar12 = SSL_CTX_set_alpn_protos(param_3, local_208, local_200 & 0xffffffff);
               iVar11 = test_int_eq("test/helpers/handshake.c", 0x282, "SSL_CTX_set_alpn_protos(client_ctx, alpn_protos, alpn_protos_len)", &_LC31, uVar12, 0);
               if (iVar11 != 0) {
                  CRYPTO_free(pEVar10);
                  goto LAB_00101b02;
               }
            }
         }
      } else {
         iVar11 = test_ptr("test/helpers/handshake.c", 0x272, "server2_ctx", param_2);
         if (iVar11 != 0) {
            parse_protos(*(undefined8*)( param_5 + 0x26 ), local_c8, local_c8 + 8);
            iVar11 = test_true("test/helpers/handshake.c", 0x273, "parse_protos(extra->server2.alpn_protocols, &server2_ctx_data->alpn_protocols, &server2_ctx_data->alpn_protocols_len )");
            if (iVar11 != 0) {
               SSL_CTX_set_alpn_select_cb(param_2, server_alpn_cb, local_d8);
               goto LAB_00101a5d;
            }
         }
      }
   } else {
      parse_protos(*(long*)( param_5 + 0x14 ), local_118, local_118 + 8);
      iVar11 = test_true("test/helpers/handshake.c", 0x251, "parse_protos(extra->server.npn_protocols, &server_ctx_data->npn_protocols, &server_ctx_data->npn_protocols_len)");
      if (iVar11 != 0) {
         SSL_CTX_set_next_protos_advertised_cb(param_1, server_npn_cb, local_118);
         goto LAB_00101847;
      }
   }
   LAB_001018b0:test_note("configure_handshake_ctx");
   HANDSHAKE_RESULT_free_part_0(puVar13);
   LAB_001018c6:puVar13 = (undefined4*)0x0;
   LAB_001018d0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar13;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 HANDSHAKE_RESULT_new(void) {
   undefined8 uVar1;
   uVar1 = CRYPTO_zalloc(0xa8, "test/helpers/handshake.c", 0x20);
   test_ptr("test/helpers/handshake.c", 0x20, "ret = OPENSSL_zalloc(sizeof(*ret))", uVar1);
   return uVar1;
}void HANDSHAKE_RESULT_free(long param_1) {
   if (param_1 != 0) {
      HANDSHAKE_RESULT_free_part_0();
      return;
   }
   return;
}int *do_handshake(void) {
   long lVar1;
   int *piVar2;
   undefined8 in_RCX;
   undefined8 in_R8;
   long in_R9;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar2 = (int*)do_handshake_internal();
   if (( ( piVar2 != (int*)0x0 ) && ( *(int*)( in_R9 + 4 ) == 1 ) ) && ( *piVar2 != 3 )) {
      if (*piVar2 == 0) {
         HANDSHAKE_RESULT_free_part_0(piVar2);
         piVar2 = (int*)do_handshake_internal(in_RCX, 0, in_R8, in_R9, in_R9 + 0xe0, 0, 0, 0, 0);
      } else {
         *piVar2 = 4;
      }
   }
   for (int i_2460 = 0; i_2460 < 2; i_2460++) {
      SSL_SESSION_free((SSL_SESSION*)0);
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return piVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

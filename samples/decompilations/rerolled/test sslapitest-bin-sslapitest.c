void remove_session_cb(ssl_ctx_st *ctx, SSL_SESSION *sess) {
   remove_called = remove_called + 1;
   return;
}
SSL_SESSION *get_session_cb(ssl_st *ssl, uchar *data, int len, int *copy) {
   SSL_SESSION *pSVar1;
   get_called = get_called + 1;
   pSVar1 = get_sess_val;
   *copy = 1;
   return pSVar1;
}
bool allow_early_data_cb(undefined8 param_1, int *param_2) {
   allow_ed_cb_called = allow_ed_cb_called + 1;
   return *param_2 != 1;
}
int verify_cb(int param_1, X509_STORE_CTX *param_2) {
   return 1;
}
undefined8 secret_cb(undefined8 param_1, long param_2, int *param_3) {
   long lVar1;
   if (0 < *param_3) {
      lVar1 = 0;
      do {
         *(undefined1*)( param_2 + lVar1 ) = 0xff;
         lVar1 = lVar1 + 1;
      }
 while ( (int)lVar1 < *param_3 );
   }

   return 1;
}
long record_pad_cb(undefined8 param_1, undefined8 param_2, long param_3, int *param_4) {
   int iVar1;
   long lVar2;
   iVar1 = *param_4;
   *param_4 = iVar1 + 1;
   if (iVar1 == 2) {
      lVar2 = 0x4001 - param_3;
   }
 else {
      if (2 < iVar1) {
         return -(ulong)(iVar1 == 3);
      }

      lVar2 = 0x200;
      if (iVar1 != 0) {
         lVar2 = 0x4000 - param_3;
         if (iVar1 != 1) {
            lVar2 = 0;
         }

         return lVar2;
      }

   }

   return lVar2;
}
undefined8 npn_advert_cb(undefined8 param_1, undefined8 *param_2, undefined4 *param_3, int *param_4) {
   undefined8 uVar1;
   if (*param_4 == 1) {
      *param_2 = 0;
      uVar1 = 0;
      *param_3 = 0;
   }
 else {
      uVar1 = 3;
      if (*param_4 != 2) {
         uVar1 = 0;
         *param_2 = &fooprot;
         *param_3 = 4;
      }

   }

   return uVar1;
}
undefined8 npn_select_cb(undefined8 param_1, undefined8 *param_2, undefined1 *param_3, undefined8 param_4, undefined8 param_5, uint *param_6) {
   uint uVar1;
   uVar1 = *param_6;
   if (uVar1 == 3) {
      *param_2 = 0x13b38e;
      *param_3 = 3;
   }
 else if ((int)uVar1 < 4) {
      if (1 < uVar1) {
         return 2;
      }

      *param_2 = 0x13b392;
      *param_3 = 3;
   }
 else {
      if (uVar1 != 4) {
         return 2;
      }

      *param_3 = 0;
   }

   return 0;
}
undefined8 alpn_select_cb2(undefined8 param_1, undefined8 *param_2, undefined1 *param_3, undefined8 param_4, undefined8 param_5, int *param_6) {
   int iVar1;
   iVar1 = *param_6;
   if (iVar1 == 2) {
      *param_2 = 0x13b38e;
      *param_3 = 3;
   }
 else if (iVar1 == 3) {
      *param_3 = 0;
   }
 else {
      if (iVar1 != 0) {
         return 2;
      }

      *param_2 = 0x13b392;
      *param_3 = 3;
   }

   return 0;
}
void new_free_cb(void) {
   void *in_RCX;
   CRYPTO_free(in_RCX);
   return;
}
void old_free_cb(undefined8 param_1, undefined8 param_2, void *param_3) {
   CRYPTO_free(param_3);
   return;
}
undefined8 serverinfo_custom_parse_cb(void) {
   undefined4 uVar1;
   undefined8 in_RCX;
   undefined8 in_R8;
   undefined4 *in_stack_00000018;
   uVar1 = test_mem_eq("test/sslapitest.c", 0x1942, &_LC2, &_LC1, in_RCX, in_R8, 0x13b39d, 3);
   *in_stack_00000018 = uVar1;
   return 1;
}
undefined8 new_cachesession_cb(undefined8 param_1, SSL_SESSION *param_2) {
   if ((int)do_cache != 0) {
      ( &sesscache )[new_called] = param_2;
      new_called = new_called + 1;
      return 1;
   }

   SSL_SESSION_free(param_2);
   new_called = new_called + 1;
   return 1;
}
int new_session_cb(ssl_st *ssl, SSL_SESSION *sess) {
   new_called = new_called + 1;
   SSL_SESSION_free(sess);
   return 1;
}
int new_parse_cb(undefined8 param_1, undefined8 param_2, undefined8 param_3, char *param_4, long param_5) {
   int iVar1;
   int iVar2;
   int *in_stack_00000018;
   iVar1 = SSL_is_server();
   if (iVar1 == 0) {
      clntparsenewcb = clntparsenewcb + 1;
   }
 else {
      srvparsenewcb = srvparsenewcb + 1;
   }

   iVar1 = *in_stack_00000018;
   iVar2 = SSL_is_server(param_1);
   if (( param_5 == 1 ) && ( iVar1 == iVar2 )) {
      return ( uint )(*param_4 == '\x01') * 2 + -1;
   }

   return -1;
}
int old_parse_cb(undefined8 param_1, undefined8 param_2, char *param_3, long param_4, undefined8 param_5, int *param_6) {
   int iVar1;
   int iVar2;
   iVar1 = SSL_is_server();
   if (iVar1 == 0) {
      clntparseoldcb = clntparseoldcb + 1;
   }
 else {
      srvparseoldcb = srvparseoldcb + 1;
   }

   iVar1 = *param_6;
   iVar2 = SSL_is_server(param_1);
   if (( param_4 == 1 ) && ( iVar1 == iVar2 )) {
      return ( uint )(*param_3 == '\x01') * 2 + -1;
   }

   return -1;
}
undefined8 get_password_cb(undefined8 *param_1, undefined4 param_2) {
   int iVar1;
   iVar1 = test_int_eq("test/sslapitest.c", 0x2a6, &_LC4, "PEM_BUFSIZE", param_2, 0x400);
   if (iVar1 != 0) {
      *param_1 = 0x7373617074736574;
      return 8;
   }

   return 0xffffffff;
}
undefined8 yield_secret_cb(SSL *param_1, int param_2, int param_3, void *param_4, size_t param_5, long param_6) {
   int iVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint uVar4;
   puVar2 = (undefined4*)SSL_get_ex_data(param_1, 0);
   iVar1 = SSL_is_server(param_1);
   puVar3 = &clientquicdata;
   if (iVar1 != 0) {
      puVar3 = &serverquicdata;
   }

   iVar1 = test_true("test/sslapitest.c", 0x3146, "comparedata == data", puVar2 == puVar3);
   if (( iVar1 != 0 ) && ( uVar4 = uVar4 < 3 )) {
      if (param_3 == 0) {
         iVar1 = test_size_t_le("test/sslapitest.c", 0x31a0, "secret_len", "sizeof(data->rsecret)", param_5, 0x90);
         if (iVar1 != 0) {
            *(int*)( param_6 + 8 ) = param_2;
            memcpy((void*)( param_6 + 0x2030 + (ulong)uVar4 * 0x30 ), param_4, param_5);
            *(size_t*)( param_6 + 0x20c0 + (ulong)uVar4 * 8 ) = param_5;
            return 1;
         }

      }
 else if (( param_3 == 1 ) && ( iVar1 = test_size_t_le("test/sslapitest.c", 0x31a8, "secret_len", "sizeof(data->wsecret)", param_5, 0x90) ),iVar1 != 0) {
         *(int*)( param_6 + 0xc ) = param_2;
         memcpy((void*)( param_6 + 0x20d8 + (ulong)uVar4 * 0x30 ), param_4, param_5);
         *(size_t*)( param_6 + 0x2168 + (ulong)uVar4 * 8 ) = param_5;
         return 1;
      }

   }

   *(undefined4*)( param_6 + 0x2194 ) = 1;
   return 0;
}
bool test_alpn(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   bool bVar7;
   int local_5c[4];
   undefined4 local_4c;
   SSL_CTX *local_48;
   SSL_CTX *local_40;
   SSL *local_38;
   SSL *local_30;
   undefined8 local_28;
   long local_20;
   uVar2 = cert;
   uVar1 = privkey;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL_CTX*)0x0;
   local_38 = (SSL*)0x0;
   local_30 = (SSL*)0x0;
   local_5c[0] = param_1;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0, 0, &local_48, &local_40, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x30ef, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      SSL_CTX_set_alpn_select_cb(local_48, alpn_select_cb2, local_5c);
      iVar3 = create_ssl_objects(local_48, local_40, &local_38, &local_30, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x30f6, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 != 0) {
         puVar6 = &fooprot;
         if (local_5c[0] == 1) {
            puVar6 = (undefined4*)0x0;
         }

         iVar3 = SSL_set_alpn_protos(local_30, puVar6, ( ulong )(local_5c[0] != 1) << 2);
         iVar3 = test_false("test/sslapitest.c", 0x3100, "SSL_set_alpn_protos(clientssl, prots, protslen)", iVar3 != 0);
         if (iVar3 != 0) {
            if (local_5c[0] - 2U < 2) {
               iVar3 = create_ssl_connection(local_38, local_30, 0);
               iVar3 = test_false("test/sslapitest.c", 0x3105, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
               bVar7 = iVar3 != 0;
               goto LAB_00100694;
            }

            iVar3 = create_ssl_connection(local_38, local_30, 0);
            iVar3 = test_true("test/sslapitest.c", 0x310c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
            if (iVar3 != 0) {
               SSL_get0_alpn_selected(local_30, &local_28, &local_4c);
               if (local_5c[0] == 0) {
                  iVar3 = test_mem_eq("test/sslapitest.c", 0x3113, &_LC14, "fooprot + 1", local_28, local_4c, 0x13b392, 3);
               }
 else {
                  if (local_5c[0] != 1) {
                     test_error("test/sslapitest.c", 0x311b, "Should not get here");
                     goto LAB_00100692;
                  }

                  iVar3 = test_uint_eq("test/sslapitest.c", 0x3117, "protlen", &_LC15, local_4c, 0);
               }

               if (iVar3 != 0) {
                  bVar7 = true;
                  goto LAB_00100694;
               }

            }

         }

      }

   }

   LAB_00100692:bVar7 = false;
   LAB_00100694:SSL_free(local_38);
   SSL_free(local_30);
   SSL_CTX_free(local_48);
   SSL_CTX_free(local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_npn(uint param_1) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char *pcVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 uVar7;
   uint local_5c[4];
   uint local_4c;
   SSL_CTX *local_48;
   SSL_CTX *local_40;
   SSL *local_38;
   SSL *local_30;
   uchar *local_28;
   long local_20;
   uVar7 = cert;
   uVar5 = privkey;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL_CTX*)0x0;
   local_38 = (SSL*)0x0;
   local_30 = (SSL*)0x0;
   local_5c[0] = param_1;
   uVar2 = TLS_client_method();
   uVar3 = TLS_server_method();
   iVar1 = create_ssl_ctx_pair(libctx, uVar3, uVar2, 0, 0x303, &local_48, &local_40, uVar7, uVar5);
   iVar1 = test_true("test/sslapitest.c", 0x308b, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, TLS1_2_VERSION, &sctx, &cctx, cert, privkey)", iVar1 != 0);
   if (iVar1 != 0) {
      SSL_CTX_set_next_protos_advertised_cb(local_48, npn_advert_cb, local_5c);
      SSL_CTX_set_next_proto_select_cb(local_40, npn_select_cb, local_5c);
      iVar1 = create_ssl_objects(local_48, local_40, &local_38, &local_30, 0, 0);
      iVar1 = test_true("test/sslapitest.c", 0x3093, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
      if (iVar1 != 0) {
         if (local_5c[0] == 4) {
            iVar1 = create_ssl_connection(local_38, local_30, 0);
            iVar1 = test_false("test/sslapitest.c", 0x3099, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
            bVar6 = iVar1 != 0;
            goto LAB_00100977;
         }

         iVar1 = create_ssl_connection(local_38, local_30, 0);
         iVar1 = test_true("test/sslapitest.c", 0x30a0, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
         if (iVar1 != 0) {
            SSL_get0_next_proto_negotiated(local_38, &local_28, &local_4c);
            if (local_5c[0] == 2) {
               iVar1 = test_uint_eq("test/sslapitest.c", 0x30ac, "protlen", &_LC15, local_4c, 0);
            }
 else {
               if ((int)local_5c[0] < 3) {
                  if (1 < local_5c[0]) goto LAB_00100b40;
                  pcVar4 = "fooprot + 1";
                  uVar5 = 0x30a8;
                  uVar7 = 0x13b392;
               }
 else {
                  if (local_5c[0] != 3) {
                     LAB_00100b40:test_error("test/sslapitest.c", 0x30b4, "Should not get here");
                     goto LAB_00100975;
                  }

                  pcVar4 = "barprot + 1";
                  uVar5 = 0x30b0;
                  uVar7 = 0x13b38e;
               }

               iVar1 = test_mem_eq("test/sslapitest.c", uVar5, &_LC14, pcVar4, local_28, local_4c, uVar7, 3);
            }

            if (iVar1 != 0) {
               bVar6 = true;
               goto LAB_00100977;
            }

         }

      }

   }

   LAB_00100975:bVar6 = false;
   LAB_00100977:SSL_free(local_38);
   SSL_free(local_30);
   SSL_CTX_free(local_48);
   SSL_CTX_free(local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_select_next_proto(int param_1) {
   undefined4 uVar1;
   int iVar2;
   uint inlen;
   uchar *in;
   long lVar3;
   uchar *client;
   uint client_len;
   long in_FS_OFFSET;
   bool bVar4;
   uchar local_39;
   uchar *local_38;
   long local_30;
   lVar3 = (long)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   client_len = *(uint*)( next_proto_tests + lVar3 * 0x90 + 0x2c );
   client = next_proto_tests + lVar3 * 0x90 + 0x30;
   if (client_len == 0xffffffff) {
      client_len = 0;
      client = (uchar*)0x0;
   }

   inlen = *(uint*)( next_proto_tests + lVar3 * 0x90 );
   in = next_proto_tests + lVar3 * 0x90 + 4;
   if (inlen == 0xffffffff) {
      inlen = 0;
      in = (uchar*)0x0;
   }

   lVar3 = lVar3 * 0x90;
   uVar1 = *(undefined4*)( next_proto_tests + lVar3 + 0x58 );
   iVar2 = SSL_select_next_proto(&local_38, &local_39, in, inlen, client, client_len);
   iVar2 = test_int_eq("test/sslapitest.c", 0x3036, "SSL_select_next_proto(&out, &outlen, server, serverlen, client, clientlen)", "np->expected_ret", iVar2, uVar1);
   if (iVar2 != 0) {
      if (*(long*)( next_proto_tests + lVar3 + 0x60 ) != 0) {
         iVar2 = test_mem_eq("test/sslapitest.c", 0x303f, &_LC22, "np->selected", local_38, local_39, lVar3 + 0x1258a8, *(long*)( next_proto_tests + lVar3 + 0x60 ));
         bVar4 = iVar2 != 0;
         goto LAB_00100c75;
      }

      iVar2 = test_ptr_null("test/sslapitest.c", 0x303c, &_LC22, local_38);
      if (iVar2 != 0) {
         iVar2 = test_uchar_eq("test/sslapitest.c", 0x303c, "outlen", &_LC15, local_39, 0);
         bVar4 = iVar2 != 0;
         goto LAB_00100c75;
      }

   }

   bVar4 = false;
   LAB_00100c75:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_multi_resume(uint param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   SSL_SESSION *session;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   uint local_8c;
   SSL_CTX *local_88;
   SSL_CTX *local_80;
   SSL *local_78;
   SSL *local_70;
   int local_68[2];
   SSL_CTX *local_60;
   SSL_CTX *pSStack_58;
   SSL_SESSION *local_50;
   undefined4 local_48;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (SSL_CTX*)0x0;
   local_80 = (SSL_CTX*)0x0;
   local_78 = (SSL*)0x0;
   local_70 = (SSL*)0x0;
   if (param_1 == 4) {
      uVar5 = TLS_client_method();
      uVar6 = TLS_server_method();
      create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, 0x303, &local_88, &local_80, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x2f63, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, max_version, &sctx, &cctx, cert, privkey)");
      if (iVar3 != 0) {
         local_8c = 4;
         goto LAB_00100f27;
      }

   }
 else {
      uVar5 = TLS_client_method();
      uVar6 = TLS_server_method();
      create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, 0x304, &local_88, &local_80, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x2f63, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, max_version, &sctx, &cctx, cert, privkey)");
      if (iVar3 != 0) {
         local_8c = param_1 & 0xfffffffd;
         if (( param_1 & 0xfffffffd ) == 0) {
            SSL_CTX_set_max_early_data(local_88, 0x400);
            iVar3 = test_true("test/sslapitest.c", 0x2f6e, "SSL_CTX_set_max_early_data(sctx, 1024)");
            if (iVar3 == 0) goto LAB_00100e50;
            if (2 < param_1 - 1) goto LAB_00100f27;
            SSL_CTX_set_options(local_88, 0x4000);
            SSL_CTX_ctrl(local_88, 0x2a, 5, (void*)0x0);
            LAB_00100f42:iVar3 = 0;
            session = (SSL_SESSION*)0x0;
            do {
               iVar4 = create_ssl_objects(local_88, local_80, &local_78, &local_70, 0, 0);
               iVar4 = test_true("test/sslapitest.c", 0x2f7f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_001011c0;
               iVar4 = SSL_set_session(local_70, session);
               iVar4 = test_true("test/sslapitest.c", 0x2f81, "SSL_set_session(clientssl, sess)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_001011c0;
               if (( local_8c == 0 ) && ( iVar3 * -0x55555555 + 0xaaaaaaaaU < 0x55555555 )) {
                  SSL_set_max_early_data(local_78, 0);
               }

               iVar4 = create_ssl_connection(local_78, local_70, 0);
               iVar4 = test_true("test/sslapitest.c", 0x2f97, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_001011c0;
               if (session == (SSL_SESSION*)0x0) {
                  SSL_session_reused(local_70);
                  iVar4 = test_false("test/sslapitest.c", 0x2f9b, "SSL_session_reused(clientssl)");
                  if (iVar4 == 0) {
                     session = (SSL_SESSION*)0x0;
                     goto LAB_001011c0;
                  }

                  LAB_0010112d:SSL_SESSION_free(session);
                  if (iVar3 * -0x55555555 + 0xaaaaaaaaU < 0x55555555) {
                     session = (SSL_SESSION*)0x0;
                  }
 else {
                     LAB_00100fbc:session = SSL_get1_session(local_70);
                     iVar4 = test_ptr("test/sslapitest.c", 0x2fa7, "(sess = SSL_get1_session(clientssl))");
                     if (iVar4 == 0) goto LAB_001011c0;
                  }

               }
 else {
                  if (param_1 != 0) {
                     SSL_session_reused(local_70);
                     iVar4 = test_true("test/sslapitest.c", 0x2f9e, "SSL_session_reused(clientssl)");
                     if (iVar4 != 0) goto LAB_0010112d;
                     goto LAB_001011c0;
                  }

                  if (0x55555554 < iVar3 * -0x55555555 + 0xaaaaaaaaU) {
                     iVar4 = SSL_session_reused(local_70);
                     iVar4 = test_true("test/sslapitest.c", 0x2f9e, "SSL_session_reused(clientssl)", iVar4 != 0);
                     if (iVar4 != 0) {
                        SSL_SESSION_free(session);
                        goto LAB_00100fbc;
                     }

                     goto LAB_001011c0;
                  }

                  SSL_session_reused(local_70);
                  iVar4 = test_false("test/sslapitest.c", 0x2f9b, "SSL_session_reused(clientssl)");
                  if (iVar4 == 0) goto LAB_001011c0;
                  SSL_SESSION_free(session);
                  session = (SSL_SESSION*)0x0;
               }

               iVar3 = iVar3 + 1;
               SSL_shutdown(local_70);
               SSL_shutdown(local_78);
               SSL_free(local_78);
               SSL_free(local_70);
               local_70 = (SSL*)0x0;
               local_78 = (SSL*)0x0;
            }
 while ( iVar3 != 0x1e );
         }
 else {
            if (2 < param_1 - 1) {
               LAB_00100f27:SSL_CTX_ctrl(local_88, 0x2a, 5, (void*)0x0);
               goto LAB_00100f42;
            }

            SSL_CTX_set_options(local_88, 0x4000);
            SSL_CTX_ctrl(local_88, 0x2a, 5, (void*)0x0);
            if (param_1 != 3) goto LAB_00100f42;
            iVar3 = 0;
            session = (SSL_SESSION*)0x0;
            SSL_CTX_callback_ctrl(local_88, 0x35, resume_servername_cb);
            SSL_CTX_ctrl(local_88, 0x36, 0, local_68);
            local_48 = 0;
            local_60 = local_80;
            pSStack_58 = local_88;
            do {
               iVar4 = create_ssl_objects(local_88, local_80, &local_78, &local_70, 0, 0);
               iVar4 = test_true("test/sslapitest.c", 0x2f7f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_001011c0;
               iVar4 = SSL_set_session(local_70, session);
               iVar4 = test_true("test/sslapitest.c", 0x2f81, "SSL_set_session(clientssl, sess)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_001011c0;
               local_68[0] = iVar3;
               local_50 = session;
               iVar4 = create_ssl_connection(local_78, local_70, 0);
               iVar4 = test_true("test/sslapitest.c", 0x2f97, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_001011c0;
               if (session == (SSL_SESSION*)0x0) {
                  SSL_session_reused(local_70);
                  iVar4 = test_false("test/sslapitest.c", 0x2f9b, "SSL_session_reused(clientssl)");
                  if (iVar4 == 0) {
                     session = (SSL_SESSION*)0x0;
                     goto LAB_001011c0;
                  }

               }
 else {
                  SSL_session_reused(local_70);
                  iVar4 = test_true("test/sslapitest.c", 0x2f9e, "SSL_session_reused(clientssl)");
                  if (iVar4 == 0) goto LAB_001011c0;
               }

               SSL_SESSION_free(session);
               if (iVar3 * -0x55555555 + 0xaaaaaaaaU < 0x55555555) {
                  session = (SSL_SESSION*)0x0;
               }
 else {
                  session = SSL_get1_session(local_70);
                  iVar4 = test_ptr("test/sslapitest.c", 0x2fa7, "(sess = SSL_get1_session(clientssl))");
                  if (iVar4 == 0) goto LAB_001011c0;
               }

               iVar3 = iVar3 + 1;
               SSL_shutdown(local_70);
               SSL_shutdown(local_78);
               SSL_free(local_78);
               SSL_free(local_70);
               local_70 = (SSL*)0x0;
               local_78 = (SSL*)0x0;
            }
 while ( iVar3 != 0x1e );
         }

         local_70 = (SSL*)0x0;
         local_78 = (SSL*)0x0;
         lVar7 = SSL_CTX_ctrl(local_88, 0x14, 0, (void*)0x0);
         iVar3 = test_long_le("test/sslapitest.c", 0x2fb3, "SSL_CTX_sess_number(sctx)", &_LC30, lVar7, 5);
         bVar8 = iVar3 != 0;
         goto LAB_00100e54;
      }

   }

   LAB_00100e50:bVar8 = false;
   session = (SSL_SESSION*)0x0;
   LAB_00100e54:SSL_free(local_78);
   SSL_free(local_70);
   SSL_CTX_free(local_88);
   SSL_CTX_free(local_80);
   SSL_SESSION_free(session);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar8;
   LAB_001011c0:bVar8 = false;
   goto LAB_00100e54;
}
undefined4 resume_servername_cb(undefined8 param_1, undefined8 param_2, int *param_3) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   SSL *local_30;
   SSL *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = (SSL*)0x0;
   local_28 = (SSL*)0x0;
   if (param_3[8] != 0) {
      uVar2 = 2;
      goto LAB_001014fe;
   }

   uVar2 = 0;
   if (*param_3 % 3 != 1) goto LAB_001014fe;
   param_3[8] = 1;
   iVar1 = create_ssl_objects(*(undefined8*)( param_3 + 4 ), *(undefined8*)( param_3 + 2 ), &local_30, &local_28, 0, 0);
   iVar1 = test_true("test/sslapitest.c", 0x2f2f, "create_ssl_objects(cbdata->sctx, cbdata->cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
   if (iVar1 == 0) {
      LAB_00101597:uVar2 = 2;
   }
 else {
      iVar1 = SSL_set_session(local_28, *(SSL_SESSION**)( param_3 + 6 ));
      iVar1 = test_true("test/sslapitest.c", 0x2f31, "SSL_set_session(clientssl, cbdata->sess)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_00101597;
      ERR_set_mark();
      iVar1 = create_ssl_connection(local_30, local_28, 0);
      iVar1 = test_false("test/sslapitest.c", 0x2f39, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
      if (iVar1 == 0) {
         ERR_clear_last_mark();
         goto LAB_00101597;
      }

      ERR_pop_to_mark();
   }

   SSL_free(local_30);
   SSL_free(local_28);
   param_3[8] = 0;
   LAB_001014fe:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool set_ssl_groups(SSL *param_1, SSL *param_2, int param_3, int param_4, int param_5) {
   int iVar1;
   long lVar2;
   char *pcVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == 0) {
      local_24 = ( &ffdhe_kexch_groups )[param_5];
   }
 else {
      local_24 = ( &ecdhe_kexch_groups )[param_5];
   }

   if (param_3 == 0) {
      lVar2 = SSL_ctrl(param_2, 0x5b, 1, &local_24);
      iVar1 = test_true("test/sslapitest.c", 0x147d, "SSL_set1_groups(clientssl, kexch_groups, 1)", lVar2 != 0);
      if (iVar1 != 0) {
         if (param_4 == 0) {
            lVar2 = SSL_ctrl(param_1, 0x5b, 5, &ffdhe_kexch_groups);
            uVar4 = 0x1484;
            pcVar3 = "SSL_set1_groups(serverssl, ffdhe_kexch_groups, numff)";
         }
 else {
            lVar2 = SSL_ctrl(param_1, 0x5b, 5, &ecdhe_kexch_groups);
            uVar4 = 0x1480;
            pcVar3 = "SSL_set1_groups(serverssl, ecdhe_kexch_groups, numec)";
         }

         iVar1 = test_true("test/sslapitest.c", uVar4, pcVar3, lVar2 != 0);
         bVar5 = iVar1 != 0;
         goto LAB_001016f2;
      }

   }
 else {
      lVar2 = SSL_ctrl(param_1, 0x5b, 1, &local_24);
      iVar1 = test_true("test/sslapitest.c", 0x1471, "SSL_set1_groups(serverssl, kexch_groups, 1)", lVar2 != 0);
      if (iVar1 != 0) {
         if (param_4 == 0) {
            lVar2 = SSL_ctrl(param_2, 0x5b, 5, &ffdhe_kexch_groups);
            uVar4 = 0x1478;
            pcVar3 = "SSL_set1_groups(clientssl, ffdhe_kexch_groups, numff)";
         }
 else {
            lVar2 = SSL_ctrl(param_2, 0x5b, 5, &ecdhe_kexch_groups);
            uVar4 = 0x1474;
            pcVar3 = "SSL_set1_groups(clientssl, ecdhe_kexch_groups, numec)";
         }

         iVar1 = test_true("test/sslapitest.c", uVar4, pcVar3, lVar2 != 0);
         bVar5 = iVar1 != 0;
         goto LAB_001016f2;
      }

   }

   bVar5 = false;
   LAB_001016f2:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ocsp_client_cb(SSL *param_1, int *param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 - 1U < 2) {
      lVar2 = SSL_ctrl(param_1, 0x46, 0, &local_18);
      iVar1 = test_mem_eq("test/sslapitest.c", 0x764, "orespder", "respderin", "Dummy OCSP Response", lVar2, local_18);
      if (iVar1 != 0) {
         ocsp_client_called = 1;
         uVar3 = 1;
         goto LAB_00101832;
      }

   }

   uVar3 = 0;
   LAB_00101832:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_async_shutdown(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   BIO_METHOD *type;
   BIO *a;
   undefined8 uVar5;
   undefined8 uVar6;
   BIO *a_00;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   type = (BIO_METHOD*)bio_s_always_retry();
   a = BIO_new(type);
   iVar3 = test_ptr("test/sslapitest.c", 0x228e, "bretry", a);
   uVar2 = cert;
   uVar1 = privkey;
   if (iVar3 != 0) {
      uVar5 = TLS_client_method();
      uVar6 = TLS_server_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0, 0, &local_58, &local_60, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x2291, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
         a_00 = (BIO*)0x0;
         uVar4 = test_true("test/sslapitest.c", 0x2297, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (uVar4 == 0) goto LAB_0010192e;
         iVar3 = create_ssl_connection(local_48, local_50, 0);
         iVar3 = test_true("test/sslapitest.c", 0x229b, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = SSL_shutdown(local_50);
            iVar3 = test_int_eq("test/sslapitest.c", 0x229f, "SSL_shutdown(clientssl)", &_LC15, iVar3, 0);
            if (iVar3 != 0) {
               a_00 = SSL_get_wbio(local_48);
               iVar3 = BIO_up_ref(a_00);
               iVar3 = test_true("test/sslapitest.c", 0x22a3, "BIO_up_ref(tmp)", iVar3 != 0);
               if (iVar3 != 0) {
                  SSL_set0_wbio(local_48, a);
                  iVar3 = SSL_shutdown(local_48);
                  iVar3 = test_int_eq("test/sslapitest.c", 0x22ab, "SSL_shutdown(serverssl)", &_LC45, iVar3, 0xffffffff);
                  if (iVar3 != 0) {
                     iVar3 = SSL_get_error(local_48, -1);
                     iVar3 = test_int_eq("test/sslapitest.c", 0x22ac, "SSL_get_error(serverssl, -1)", "SSL_ERROR_WANT_WRITE", iVar3, 3);
                     if (iVar3 != 0) {
                        iVar3 = SSL_shutdown(local_48);
                        iVar3 = test_int_eq("test/sslapitest.c", 0x22b0, "SSL_shutdown(serverssl)", &_LC45, iVar3, 0xffffffff);
                        if (iVar3 != 0) {
                           a = (BIO*)0x0;
                           iVar3 = SSL_get_error(local_48, -1);
                           uVar4 = test_int_eq("test/sslapitest.c", 0x22b1, "SSL_get_error(serverssl, -1)", "SSL_ERROR_WANT_WRITE", iVar3, 3);
                           if (uVar4 == 0) goto LAB_0010192e;
                           SSL_set0_wbio(local_48, a_00);
                           iVar3 = SSL_shutdown(local_48);
                           iVar3 = test_int_eq("test/sslapitest.c", 0x22b8, "SSL_shutdown(serverssl)", &_LC15, iVar3, 0);
                           if (iVar3 != 0) {
                              iVar3 = SSL_shutdown(local_48);
                              iVar3 = test_int_eq("test/sslapitest.c", 0x22bc, "SSL_shutdown(serverssl)", &_LC49, iVar3, 1);
                              if (iVar3 != 0) {
                                 iVar3 = SSL_shutdown(local_50);
                                 iVar3 = test_int_eq("test/sslapitest.c", 0x22c0, "SSL_shutdown(clientssl)", &_LC49, iVar3, 1);
                                 uVar4 = ( uint )(iVar3 != 0);
                                 a_00 = (BIO*)0x0;
                                 a = (BIO*)0x0;
                                 goto LAB_0010192e;
                              }

                           }

                           a_00 = (BIO*)0x0;
                        }

                     }

                  }

                  a = (BIO*)0x0;
                  uVar4 = 0;
                  goto LAB_0010192e;
               }

            }

         }

      }

   }

   a_00 = (BIO*)0x0;
   uVar4 = 0;
   LAB_0010192e:SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   BIO_free(a);
   BIO_free(a_00);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_handshake_retry(ulong param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   BIO_METHOD *type;
   BIO *a;
   undefined8 uVar4;
   undefined8 uVar5;
   BIO *a_00;
   long in_FS_OFFSET;
   bool bVar6;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   type = (BIO_METHOD*)bio_s_always_retry();
   a = BIO_new(type);
   iVar3 = test_ptr("test/sslapitest.c", 0x2e6e, "bretry", a);
   uVar2 = cert;
   uVar1 = privkey;
   if (iVar3 != 0) {
      uVar4 = TLS_client_method();
      uVar5 = TLS_server_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0, -(uint)((param_1 & 8) != 0) & 0x303, &local_58, &local_60, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x2e79, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, maxversion, &sctx, &cctx, cert, privkey)", iVar3 != 0);
      if (( iVar3 != 0 ) && ( ( ( param_1 & 1 ) == 0 || ( iVar3 = ssl_ctx_add_large_cert_chain(libctx, local_58, cert) ),iVar3 != 0 ) )) {
         if (( param_1 & 2 ) != 0) {
            SSL_CTX_set_verify(local_58, 1, (callback*)0x0);
         }

         if (( param_1 & 4 ) != 0) {
            set_always_retry_err_val(0);
         }

         iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0x2e8f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 != 0) {
            a_00 = SSL_get_wbio(local_48);
            iVar3 = test_ptr("test/sslapitest.c", 0x2e94, &_LC51, a_00);
            if (iVar3 != 0) {
               iVar3 = BIO_up_ref(a_00);
               iVar3 = test_true("test/sslapitest.c", 0x2e94, "BIO_up_ref(tmp)", iVar3 != 0);
               if (iVar3 != 0) {
                  SSL_set0_wbio(local_48, a);
                  iVar3 = SSL_connect(local_50);
                  iVar3 = test_int_eq("test/sslapitest.c", 0x2e9b, "SSL_connect(clientssl)", &_LC45, iVar3, 0xffffffff);
                  if (iVar3 != 0) {
                     iVar3 = SSL_accept(local_48);
                     iVar3 = test_int_eq("test/sslapitest.c", 0x2e9e, "SSL_accept(serverssl)", &_LC45, iVar3, 0xffffffff);
                     if (iVar3 != 0) {
                        iVar3 = SSL_get_error(local_48, -1);
                        iVar3 = test_int_eq("test/sslapitest.c", 0x2e9f, "SSL_get_error(serverssl, -1)", "SSL_ERROR_WANT_WRITE", iVar3, 3);
                        if (iVar3 != 0) {
                           SSL_set0_wbio(local_48, a_00);
                           iVar3 = create_ssl_connection(local_48, local_50, 0);
                           iVar3 = test_true("test/sslapitest.c", 0x2ea6, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                           bVar6 = iVar3 != 0;
                           a = (BIO*)0x0;
                           a_00 = (BIO*)0x0;
                           goto LAB_00101dee;
                        }

                     }

                  }

                  a = (BIO*)0x0;
                  bVar6 = false;
                  goto LAB_00101dee;
               }

            }

         }

      }

   }

   a_00 = (BIO*)0x0;
   bVar6 = false;
   LAB_00101dee:SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   BIO_free(a);
   BIO_free(a_00);
   set_always_retry_err_val(0xffffffff);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
bool test_rstate_string(void) {
   undefined1 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char *pcVar5;
   BIO *pBVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_68;
   SSL_CTX *local_60;
   SSL *local_58;
   SSL *local_50;
   undefined8 local_48;
   undefined1 local_40[9];
   undefined1 local_37[2];
   undefined4 local_35;
   undefined1 local_31;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL*)0x0;
   local_50 = (SSL*)0x0;
   uVar3 = TLS_server_method();
   uVar4 = TLS_client_method();
   local_31 = 1;
   local_35 = 0x317;
   iVar2 = create_ssl_ctx_pair(libctx, uVar3, uVar4, 0, 0, &local_60, &local_68, cert, privkey);
   iVar2 = test_true("test/sslapitest.c", 0x2e23, "create_ssl_ctx_pair(libctx, servmeth, clientmeth, 0, 0, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 != 0) {
      iVar2 = create_ssl_objects(local_60, local_68, &local_50, &local_58, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 0x2e27, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 != 0) {
         pcVar5 = SSL_rstate_string(local_50);
         iVar2 = test_str_eq("test/sslapitest.c", 0x2e2b, "SSL_rstate_string(serverssl)", &_LC56, pcVar5, &_LC55);
         if (iVar2 != 0) {
            pcVar5 = SSL_rstate_string_long(local_50);
            iVar2 = test_str_eq("test/sslapitest.c", 0x2e2c, "SSL_rstate_string_long(serverssl)", "\"read header\"", pcVar5, "read header");
            if (iVar2 != 0) {
               iVar2 = create_ssl_connection(local_50, local_58, 0);
               iVar2 = test_true("test/sslapitest.c", 0x2e2f, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
               if (iVar2 != 0) {
                  pcVar5 = SSL_rstate_string(local_50);
                  iVar2 = test_str_eq("test/sslapitest.c", 0x2e32, "SSL_rstate_string(serverssl)", &_LC56, pcVar5, &_LC55);
                  if (iVar2 != 0) {
                     pcVar5 = SSL_rstate_string_long(local_50);
                     iVar2 = test_str_eq("test/sslapitest.c", 0x2e33, "SSL_rstate_string_long(serverssl)", "\"read header\"", pcVar5, "read header");
                     if (iVar2 != 0) {
                        iVar2 = SSL_version(local_50);
                        uVar1 = (undefined1)iVar2;
                        if (iVar2 == 0x304) {
                           uVar1 = 3;
                        }

                        local_35._0_3_ = CONCAT12(uVar1, (undefined2)local_35);
                        pBVar6 = SSL_get_rbio(local_50);
                        iVar2 = BIO_write_ex(pBVar6, &local_35, 5, &local_48);
                        iVar2 = test_true("test/sslapitest.c", 0x2e40, "BIO_write_ex(SSL_get_rbio(serverssl), dummyheader, sizeof(dummyheader), &written)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = test_size_t_eq("test/sslapitest.c", 0x2e42, "written", "SSL3_RT_HEADER_LENGTH", local_48, 5);
                           if (iVar2 != 0) {
                              iVar2 = SSL_read_ex(local_50, local_37, 2, local_40);
                              iVar2 = test_false("test/sslapitest.c", 0x2e45, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                              if (iVar2 != 0) {
                                 pcVar5 = SSL_rstate_string(local_50);
                                 iVar2 = test_str_eq("test/sslapitest.c", 0x2e48, "SSL_rstate_string(serverssl)", &_LC66, pcVar5, &_LC65);
                                 if (iVar2 != 0) {
                                    pcVar5 = SSL_rstate_string_long(local_50);
                                    iVar2 = test_str_eq("test/sslapitest.c", 0x2e49, "SSL_rstate_string_long(serverssl)", "\"read body\"", pcVar5, "read body");
                                    bVar7 = iVar2 != 0;
                                    goto LAB_001020db;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar7 = false;
   LAB_001020db:SSL_free(local_50);
   SSL_free(local_58);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_68);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 new_add_cb(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4, undefined8 *param_5) {
   int iVar1;
   int iVar2;
   undefined1 *puVar3;
   int *in_stack_00000018;
   iVar1 = SSL_is_server();
   if (iVar1 == 0) {
      clntaddnewcb = clntaddnewcb + 1;
   }
 else {
      srvaddnewcb = srvaddnewcb + 1;
   }

   iVar1 = *in_stack_00000018;
   iVar2 = SSL_is_server(param_1);
   if (iVar1 == iVar2) {
      puVar3 = (undefined1*)CRYPTO_malloc(1, "test/sslapitest.c", 0x17fd);
      if (puVar3 != (undefined1*)0x0) {
         *param_4 = puVar3;
         *puVar3 = 1;
         *param_5 = 1;
         return 1;
      }

   }

   return 0xffffffff;
}
undefined8 old_add_cb(undefined8 param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4, undefined8 param_5, int *param_6) {
   int iVar1;
   int iVar2;
   undefined1 *puVar3;
   iVar1 = SSL_is_server();
   if (iVar1 == 0) {
      iVar1 = *param_6;
      clntaddoldcb = clntaddoldcb + 1;
      iVar2 = SSL_is_server(param_1);
      if (iVar1 != iVar2) {
         return 0xffffffff;
      }

   }
 else {
      iVar1 = *param_6;
      srvaddoldcb = srvaddoldcb + 1;
      iVar2 = SSL_is_server(param_1);
      if (iVar1 != iVar2) {
         return 0xffffffff;
      }

   }

   puVar3 = (undefined1*)CRYPTO_malloc(1, "test/sslapitest.c", 0x17cf);
   if (puVar3 == (undefined1*)0x0) {
      return 0xffffffff;
   }

   *param_3 = puVar3;
   *puVar3 = 1;
   *param_4 = 1;
   return 1;
}
uint test_pipelining(int param_1) {
   SSL *pSVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   uint uVar5;
   int iVar6;
   undefined4 uVar7;
   ENGINE *e;
   undefined8 uVar8;
   undefined8 uVar9;
   void *ptr;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   long larg;
   long in_FS_OFFSET;
   char *local_e0;
   SSL *local_d8;
   ulong local_d0;
   SSL *local_c8;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   SSL_CTX *local_78;
   SSL_CTX *local_70;
   SSL *local_68;
   SSL *local_60;
   undefined8 local_58;
   long local_50;
   long local_48;
   long local_40;
   uVar3 = cert;
   uVar2 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   if (param_1 == 6) {
      uVar8 = TLS_client_method();
      uVar9 = TLS_server_method();
      iVar4 = create_ssl_ctx_pair(libctx, uVar9, uVar8, 0, 0x303, &local_70, &local_78, uVar3, uVar2);
      iVar4 = test_true("test/sslapitest.c", 0x2cd9, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, TLS1_2_VERSION, &sctx, &cctx, cert, privkey)", iVar4 != 0);
      if (( iVar4 != 0 ) && ( e = (ENGINE*)load_dasync() ),e != (ENGINE*)0x0) {
         param_1 = 0;
         LAB_001025d9:iVar4 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
         uVar5 = test_true("test/sslapitest.c", 0x2ce7, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
         if (uVar5 == 0) {
            LAB_00102624:ptr = (void*)0x0;
            uVar13 = 10;
            local_e0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123";
         }
 else {
            iVar4 = SSL_set_cipher_list(local_68, "AES128-SHA");
            uVar5 = test_true("test/sslapitest.c", 0x2ceb, "SSL_set_cipher_list(clientssl, \"AES128-SHA\")", iVar4 != 0);
            pSVar1 = local_68;
            if (uVar5 == 0) goto LAB_00102624;
            local_d8 = local_68;
            local_c8 = local_60;
            if (param_1 == 1) {
               LAB_00102c08:pSVar1 = local_d8;
               local_d8 = local_c8;
               local_d0 = 0x32;
               local_c8 = pSVar1;
               LAB_00102748:uVar13 = 10;
               ptr = CRYPTO_malloc((int)local_d0, "test/sslapitest.c", 0x2d0c);
               uVar5 = test_ptr("test/sslapitest.c", 0x2d0d, &_LC80);
               local_e0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123";
               if (uVar5 != 0) {
                  local_b8 = 6;
                  larg = 10;
                  lVar11 = 5;
                  local_b0 = 4;
                  local_a8 = 5;
                  LAB_001027c0:SSL_ctrl(local_d8, 0x7e, lVar11, (void*)0x0);
                  iVar4 = test_true("test/sslapitest.c", 0x2d1e, "SSL_set_max_pipelines(peera, numpipes)");
                  if (iVar4 != 0) {
                     lVar11 = SSL_ctrl(local_d8, 0x7d, larg, (void*)0x0);
                     iVar4 = test_true("test/sslapitest.c", 0x2d1f, "SSL_set_split_send_fragment(peera, fragsize)", lVar11 != 0);
                     if (iVar4 != 0) {
                        iVar4 = create_ssl_connection(local_60, local_68, 0);
                        iVar4 = test_true("test/sslapitest.c", 0x2d22, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
                        if (iVar4 != 0) {
                           iVar4 = SSL_write_ex(local_d8, local_e0, local_d0, &local_58);
                           iVar4 = test_true("test/sslapitest.c", 0x2d26, "SSL_write_ex(peera, msg, msglen, &written)", iVar4 != 0);
                           if (( iVar4 != 0 ) && ( iVar4 = test_size_t_eq("test/sslapitest.c", 0x2d27, "written", "msglen", local_58, local_d0) ),iVar4 != 0) {
                              uVar10 = 0;
                              iVar4 = 0;
                              do {
                                 iVar6 = SSL_read_ex(local_c8, (long)ptr + uVar10, local_d0 - uVar10, &local_50);
                                 iVar6 = test_true("test/sslapitest.c", 0x2d36, "SSL_read_ex(peerb, buf + offset, msglen - offset, &readbytes)", iVar6 != 0);
                                 if (iVar6 == 0) goto LAB_001027f5;
                                 iVar4 = iVar4 + 1;
                                 uVar10 = local_50 + uVar10;
                              }
 while ( uVar10 < local_d0 );
                              if (( param_1 != 4 ) && ( local_b8 = param_1 == 3 )) {
                                 local_b8 = local_b0;
                              }

                              iVar6 = test_mem_eq("test/sslapitest.c", 0x2d3d, &_LC72, &_LC80, local_e0, local_d0, ptr, uVar10);
                              if (( iVar6 != 0 ) && ( iVar4 = test_int_eq("test/sslapitest.c", 0x2d3e, "numreads", "expectedreads", iVar4, local_b8) ),iVar4 != 0) {
                                 uVar12 = 0;
                                 uVar10 = local_d0;
                                 do {
                                    uVar14 = uVar13;
                                    if (uVar10 <= uVar13) {
                                       uVar14 = uVar10;
                                    }

                                    iVar4 = SSL_write_ex(local_c8, local_e0 + uVar12, uVar14, &local_58);
                                    iVar4 = test_true("test/sslapitest.c", 0x2d4a, "SSL_write_ex(peerb, msg + offset, sendlen, &written)", iVar4 != 0);
                                    if (( iVar4 == 0 ) || ( iVar4 = test_size_t_eq("test/sslapitest.c", 0x2d4b, "written", "sendlen", local_58, uVar14) ),iVar4 == 0) goto LAB_001027f5;
                                    uVar12 = uVar12 + uVar13;
                                    uVar10 = uVar10 - uVar13;
                                 }
 while ( uVar12 < local_d0 );
                                 iVar4 = SSL_read_ex(local_d8, ptr, local_d0, &local_50);
                                 iVar4 = test_true("test/sslapitest.c", 0x2d56, "SSL_read_ex(peera, buf, msglen, &readbytes)", iVar4 != 0);
                                 if (( iVar4 != 0 ) && ( iVar4 = test_size_t_le("test/sslapitest.c", 0x2d57, "readbytes", "msglen", local_50, local_d0) ),iVar4 != 0) {
                                    if (param_1 != 4) {
                                       LAB_00102ded:iVar4 = test_mem_eq("test/sslapitest.c", 0x2d65, &_LC72, &_LC80, local_e0, local_d0, ptr, local_50);
                                       uVar5 = ( uint )(iVar4 != 0);
                                       goto LAB_00102639;
                                    }

                                    iVar4 = SSL_read_ex(local_d8, (long)ptr + local_50, local_d0 - local_50, &local_48);
                                    iVar4 = test_true("test/sslapitest.c", 0x2d5d, "SSL_read_ex(peera, buf + readbytes, msglen - readbytes, &readbytes2)", iVar4 != 0);
                                    if (iVar4 != 0) {
                                       local_50 = local_48 + local_50;
                                       iVar4 = test_size_t_le("test/sslapitest.c", 0x2d61, "readbytes", "msglen", local_50, local_d0);
                                       if (iVar4 != 0) goto LAB_00102ded;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

                  LAB_001027f5:uVar5 = 0;
               }

            }
 else {
               if (param_1 != 5) {
                  local_d0 = 0x37;
                  if (param_1 != 4) {
                     if (param_1 == 2) {
                        local_d0 = 0x30;
                     }
 else {
                        local_d0 = 0x26;
                        if (param_1 != 3) {
                           local_c8 = local_68;
                           local_d8 = local_60;
                           goto LAB_00102c08;
                        }

                     }

                  }

                  goto LAB_00102748;
               }

               local_e0 = (char*)CRYPTO_malloc(0x8000, "test/sslapitest.c", 0x2cfd);
               uVar5 = test_ptr("test/sslapitest.c", 0x2cfe, &_LC72, local_e0);
               if (uVar5 != 0) {
                  uVar7 = RAND_bytes_ex(libctx, local_e0, 0x8000, 0);
                  uVar5 = test_int_gt("test/sslapitest.c", 0x2d00, "RAND_bytes_ex(libctx, msg, msglen, 0)", &_LC15, uVar7, 0);
                  if (uVar5 == 0) goto LAB_00102bd0;
                  ptr = CRYPTO_malloc(0x8000, "test/sslapitest.c", 0x2d0c);
                  iVar4 = test_ptr("test/sslapitest.c", 0x2d0d, &_LC80);
                  if (iVar4 == 0) {
                     uVar13 = 0x4000;
                     uVar5 = 0;
                     goto LAB_00102639;
                  }

                  uVar13 = 0x4000;
                  SSL_ctrl(pSVar1, 0x7d, 0x4001, (void*)0x0);
                  uVar5 = test_false("test/sslapitest.c", 0x2d15, "SSL_set_split_send_fragment(peera, fragsize + 1)");
                  if (uVar5 == 0) goto LAB_00102639;
                  local_b8 = 3;
                  larg = 0x4000;
                  lVar11 = 2;
                  local_b0 = 1;
                  local_a8 = 2;
                  local_d0 = 0x8000;
                  goto LAB_001027c0;
               }

               LAB_00102bd0:ptr = (void*)0x0;
               uVar13 = 0x4000;
            }

         }

         LAB_00102639:SSL_free(local_60);
         SSL_free(local_68);
         SSL_CTX_free(local_70);
         SSL_CTX_free(local_78);
         ENGINE_unregister_ciphers(e);
         ENGINE_finish(e);
         ENGINE_free(e);
         CRYPTO_free(ptr);
         if (uVar13 == 0x4000) {
            CRYPTO_free(local_e0);
         }

         goto LAB_0010269c;
      }

      SSL_free(local_60);
      SSL_free(local_68);
      SSL_CTX_free(local_70);
      SSL_CTX_free(local_78);
      CRYPTO_free((void*)0x0);
   }
 else {
      e = (ENGINE*)load_dasync();
      uVar3 = cert;
      uVar2 = privkey;
      if (e != (ENGINE*)0x0) {
         uVar8 = TLS_client_method();
         uVar9 = TLS_server_method();
         iVar4 = create_ssl_ctx_pair(libctx, uVar9, uVar8, 0, 0x303, &local_70, &local_78, uVar3, uVar2);
         uVar5 = test_true("test/sslapitest.c", 0x2cd9, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, TLS1_2_VERSION, &sctx, &cctx, cert, privkey)", iVar4 != 0);
         if (uVar5 != 0) goto LAB_001025d9;
         goto LAB_00102624;
      }

   }

   uVar5 = 0;
   LAB_0010269c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
bool test_serverinfo_custom(uint param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
   undefined8 uVar7;
   undefined1 *puVar8;
   uint uVar9;
   byte bVar10;
   long in_FS_OFFSET;
   undefined1 uVar11;
   bool bVar12;
   int local_64;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_64 = 0;
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar11 = param_1 < 2;
   if (param_1 == 2) {
      puVar8 = serverinfo_custom_v2;
      uVar9 = 0x1d0;
      uVar7 = 0x303;
      LAB_00102f3a:uVar4 = TLS_method();
      uVar5 = TLS_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, uVar7, uVar7, &local_60, &local_58, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x1972, "create_ssl_ctx_pair(libctx, TLS_method(), TLS_method(), protocol_version, protocol_version, &sctx, &cctx, cert, privkey)", iVar3 != 0);
      if (iVar3 != 0) {
         uVar11 = 2;
         bVar10 = 0xb;
         LAB_00102fbe:iVar3 = SSL_CTX_use_serverinfo_ex(local_60, uVar11, puVar8, bVar10);
         iVar3 = test_true("test/sslapitest.c", 0x197b, "SSL_CTX_use_serverinfo_ex(sctx, serverinfo_version, si, si_len)", iVar3 != 0);
         goto joined_r0x00102fe9;
      }

   }
 else {
      if ((int)param_1 < 3) {
         bVar10 = -uVar11 & 7;
         puVar8 = (undefined1*)&serverinfo_custom_v1;
         if (param_1 >= 2) {
            puVar8 = (undefined1*)(undefined7*)0x0;
         }

         uVar9 = -(uint)(param_1 < 2) & 0x1d0;
         uVar6 = -(uint)(param_1 < 2) & 0x303;
      }
 else {
         puVar8 = serverinfo_custom_tls13;
         uVar9 = 0x1180;
         uVar7 = 0x304;
         if (param_1 == 3) goto LAB_00102f3a;
         uVar11 = false;
         bVar10 = 0;
         puVar8 = (undefined1*)0x0;
         uVar9 = 0;
         uVar6 = 0;
      }

      uVar7 = TLS_method();
      uVar4 = TLS_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar4, uVar7, uVar6, uVar6, &local_60, &local_58, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x1972, "create_ssl_ctx_pair(libctx, TLS_method(), TLS_method(), protocol_version, protocol_version, &sctx, &cctx, cert, privkey)", iVar3 != 0);
      if (iVar3 != 0) {
         if (0 < (int)param_1) goto LAB_00102fbe;
         iVar3 = SSL_CTX_use_serverinfo(local_60, puVar8, bVar10);
         iVar3 = test_true("test/sslapitest.c", 0x197f, "SSL_CTX_use_serverinfo(sctx, si, si_len)", iVar3 != 0);
         joined_r0x00102fe9:if (iVar3 != 0) {
            iVar3 = SSL_CTX_add_custom_ext(local_58, 0x12, uVar9, 0, 0, 0, serverinfo_custom_parse_cb, &local_64);
            iVar3 = test_true("test/sslapitest.c", 0x1983, "SSL_CTX_add_custom_ext(cctx, TLSEXT_TYPE_signed_certificate_timestamp, extension_context, NULL, NULL, NULL, serverinfo_custom_parse_cb, &cb_result)", iVar3 != 0);
            if (iVar3 != 0) {
               iVar3 = create_ssl_objects(local_60, local_58, &local_48, &local_50, 0, 0);
               iVar3 = test_true("test/sslapitest.c", 0x1988, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
               if (iVar3 != 0) {
                  iVar3 = create_ssl_connection(local_48, local_50, 0);
                  iVar3 = test_true("test/sslapitest.c", 0x198a, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                  if (iVar3 != 0) {
                     iVar3 = SSL_do_handshake(local_50);
                     iVar3 = test_int_eq("test/sslapitest.c", 0x198c, "SSL_do_handshake(clientssl)", &_LC49, iVar3, 1);
                     if (iVar3 != 0) {
                        iVar3 = test_true("test/sslapitest.c", 0x198f, "cb_result", local_64 != 0);
                        bVar12 = iVar3 != 0;
                        goto LAB_00103082;
                     }

                  }

               }

            }

         }

      }

   }

   bVar12 = false;
   LAB_00103082:SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar12;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_tls13_record_padding(uint param_1) {
   undefined8 uVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   undefined4 local_cc;
   SSL_CTX *local_c8;
   SSL_CTX *local_c0;
   SSL *local_b8;
   SSL *local_b0;
   undefined8 local_a8;
   long local_a0;
   undefined1 local_98[88];
   long local_40;
   uVar1 = cert;
   uVar6 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_cc = 0;
   local_c8 = (SSL_CTX*)0x0;
   local_c0 = (SSL_CTX*)0x0;
   local_b8 = (SSL*)0x0;
   local_b0 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x304, 0, &local_c0, &local_c8, uVar1, uVar6);
   iVar2 = test_true("test/sslapitest.c", 0x2c59, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 == 0) goto LAB_001036c0;
   if (param_1 == 0) {
      SSL_CTX_set_record_padding_callback(local_c8, record_pad_cb);
      SSL_CTX_set_record_padding_callback_arg(local_c8, &local_cc);
      uVar6 = SSL_CTX_get_record_padding_callback_arg(local_c8);
      iVar2 = test_ptr_eq("test/sslapitest.c", 0x2c61, "SSL_CTX_get_record_padding_callback_arg(cctx)", "&called", uVar6, &local_cc);
      joined_r0x00103779:if (iVar2 != 0) {
         iVar2 = create_ssl_objects(local_c0, local_c8, &local_b0, &local_b8, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x2c70, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
         joined_r0x001036b9:if (iVar2 != 0) {
            LAB_0010348d:iVar2 = create_ssl_connection(local_b0, local_b8, 0);
            iVar2 = test_true("test/sslapitest.c", 0x2c8c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
            if (iVar2 != 0) {
               local_cc = 0;
               iVar2 = 4;
               do {
                  iVar3 = SSL_write_ex(local_b8, "Hello World", 0xb, &local_a8);
                  iVar3 = test_true("test/sslapitest.c", 0x2c98, "SSL_write_ex(clientssl, msg, strlen(msg), &written)", iVar3 != 0);
                  if (( iVar3 == 0 ) || ( iVar3 = test_size_t_eq("test/sslapitest.c", 0x2c99, "written", "strlen(msg)", local_a8, 0xb) ),iVar3 == 0) goto LAB_001036c0;
                  iVar3 = SSL_read_ex(local_b0, local_98, 0x4f, &local_a0);
                  iVar3 = test_true("test/sslapitest.c", 0x2c9c, "SSL_read_ex(serverssl, buf, sizeof(buf) - 1, &readbytes)", iVar3 != 0);
                  if (( iVar3 == 0 ) || ( iVar3 = test_size_t_eq("test/sslapitest.c", 0x2c9e, "written", "readbytes", local_a8, local_a0) ),iVar3 == 0) goto LAB_001036c0;
                  local_98[local_a0] = 0;
                  iVar3 = test_str_eq("test/sslapitest.c", 0x2ca2, &_LC80, &_LC72, local_98, "Hello World");
                  if (iVar3 == 0) goto LAB_001036c0;
                  iVar2 = iVar2 + -1;
               }
 while ( iVar2 != 0 );
               bVar7 = true;
               if (param_1 < 2) {
                  iVar2 = test_int_eq("test/sslapitest.c", 0x2ca6, "called", &_LC110, local_cc, 4);
                  bVar7 = iVar2 != 0;
               }

               goto LAB_001036c3;
            }

         }

      }

   }
 else {
      if (param_1 == 2) {
         iVar2 = SSL_CTX_set_block_padding(local_c8, 0x4001);
         iVar2 = test_false("test/sslapitest.c", 0x2c65, "SSL_CTX_set_block_padding(cctx, SSL3_RT_MAX_PLAIN_LENGTH + 1)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_001036c0;
         iVar2 = SSL_CTX_set_block_padding(local_c8, 0x200);
         iVar2 = test_true("test/sslapitest.c", 0x2c68, "SSL_CTX_set_block_padding(cctx, 512)", iVar2 != 0);
         goto joined_r0x00103779;
      }

      if (param_1 == 4) {
         iVar2 = SSL_CTX_set_block_padding_ex(local_c8, 0, 0x200);
         iVar2 = test_true("test/sslapitest.c", 0x2c6c, "SSL_CTX_set_block_padding_ex(cctx, 0, 512)", iVar2 != 0);
         goto joined_r0x00103779;
      }

      iVar2 = create_ssl_objects(local_c0, local_c8, &local_b0, &local_b8, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 0x2c70, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 == 0) goto LAB_001036c0;
      if (param_1 == 1) {
         SSL_set_record_padding_callback(local_b8, record_pad_cb);
         SSL_set_record_padding_callback_arg(local_b8, &local_cc);
         uVar6 = SSL_get_record_padding_callback_arg(local_b8);
         iVar2 = test_ptr_eq("test/sslapitest.c", 0x2c77, "SSL_get_record_padding_callback_arg(clientssl)", "&called", uVar6, &local_cc);
         joined_r0x0010380b:if (iVar2 == 0) goto LAB_001036c0;
         goto LAB_0010348d;
      }

      if (param_1 == 3) {
         iVar2 = SSL_set_block_padding(local_b8, 0x4001);
         iVar2 = test_false("test/sslapitest.c", 0x2c7b, "SSL_set_block_padding(clientssl, SSL3_RT_MAX_PLAIN_LENGTH + 1)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_001036c0;
         iVar2 = SSL_set_block_padding(local_b8, 0x200);
         iVar2 = test_true("test/sslapitest.c", 0x2c7e, "SSL_set_block_padding(clientssl, 512)", iVar2 != 0);
         goto joined_r0x001036b9;
      }

      if (param_1 != 5) goto LAB_0010348d;
      iVar2 = SSL_set_block_padding_ex(local_b8, 0, 0x4001);
      iVar2 = test_false("test/sslapitest.c", 0x2c82, "SSL_set_block_padding_ex(clientssl, 0, SSL3_RT_MAX_PLAIN_LENGTH + 1)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = SSL_set_block_padding_ex(local_b8, 0, 0x200);
         iVar2 = test_true("test/sslapitest.c", 0x2c86, "SSL_set_block_padding_ex(clientssl, 0, 512)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = SSL_set_block_padding_ex(local_b0, 0, 0x200);
            iVar2 = test_true("test/sslapitest.c", 0x2c88, "SSL_set_block_padding_ex(serverssl, 0, 512)", iVar2 != 0);
            goto joined_r0x0010380b;
         }

      }

   }

   LAB_001036c0:bVar7 = false;
   LAB_001036c3:SSL_free(local_b0);
   SSL_free(local_b8);
   SSL_CTX_free(local_c0);
   SSL_CTX_free(local_c8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_read_ahead_key_change(void) {
   undefined8 uVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   SSL_CTX *local_c8;
   SSL_CTX *local_c0;
   SSL *local_b8;
   SSL *local_b0;
   undefined8 local_a8;
   long local_a0;
   undefined1 local_98[88];
   long local_40;
   uVar1 = cert;
   uVar6 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (SSL_CTX*)0x0;
   local_c0 = (SSL_CTX*)0x0;
   local_b8 = (SSL*)0x0;
   local_b0 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x304, 0, &local_c0, &local_c8, uVar1, uVar6);
   iVar2 = test_true("test/sslapitest.c", 0x2bf4, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)");
   if (iVar2 != 0) {
      SSL_CTX_ctrl(local_c0, 0x29, 1, (void*)0x0);
      iVar2 = create_ssl_objects(local_c0, local_c8, &local_b0, &local_b8, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 0x2bfb, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = create_ssl_connection(local_b0, local_b8, 0);
         iVar2 = test_true("test/sslapitest.c", 0x2bff, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = SSL_write_ex(local_b8, "Hello World", 0xb, &local_a8);
            iVar2 = test_true("test/sslapitest.c", 0x2c03, "SSL_write_ex(clientssl, msg, strlen(msg), &written)", iVar2 != 0);
            if (iVar2 != 0) {
               iVar2 = test_size_t_eq("test/sslapitest.c", 0x2c04, "written", "strlen(msg)", local_a8, 0xb);
               if (iVar2 != 0) {
                  iVar2 = SSL_key_update(local_b8, 0);
                  iVar2 = test_true("test/sslapitest.c", 0x2c07, "SSL_key_update(clientssl, SSL_KEY_UPDATE_NOT_REQUESTED)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = SSL_write_ex(local_b8, "Hello World", 0xb, &local_a8);
                     iVar2 = test_true("test/sslapitest.c", 0x2c0a, "SSL_write_ex(clientssl, msg, strlen(msg), &written)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = test_size_t_eq("test/sslapitest.c", 0x2c0b, "written", "strlen(msg)", local_a8, 0xb);
                        if (iVar2 != 0) {
                           iVar2 = 2;
                           while (true) {
                              iVar3 = SSL_read_ex(local_b0, local_98, 0x4f, &local_a0);
                              iVar3 = test_true("test/sslapitest.c", 0x2c16, "SSL_read_ex(serverssl, buf, sizeof(buf) - 1, &readbytes)", iVar3 != 0);
                              if (iVar3 == 0) break;
                              local_98[local_a0] = 0;
                              iVar3 = test_str_eq("test/sslapitest.c", 0x2c1b, &_LC80, &_LC72, local_98, "Hello World");
                              if (iVar3 == 0) break;
                              if (iVar2 == 1) {
                                 uVar6 = 1;
                                 goto LAB_0010394e;
                              }

                              iVar2 = 1;
                           }
;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   uVar6 = 0;
   LAB_0010394e:SSL_free(local_b0);
   SSL_free(local_b8);
   SSL_CTX_free(local_c0);
   SSL_CTX_free(local_c8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_sni_tls13(void) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   SSL_CTX *ctx;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_50;
   SSL_CTX *local_48;
   SSL *local_40;
   SSL *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL_CTX*)0x0;
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL*)0x0;
   local_38 = (SSL*)0x0;
   snicb = 0;
   uVar3 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar3);
   iVar2 = test_ptr("test/sslapitest.c", 0x2a4a, &_LC113, ctx);
   uVar1 = cert;
   uVar3 = privkey;
   if (iVar2 != 0) {
      uVar4 = TLS_client_method();
      uVar5 = TLS_server_method();
      iVar2 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x304, 0, &local_48, &local_50, uVar1, uVar3);
      iVar2 = test_true("test/sslapitest.c", 0x2a4d, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx2, &cctx, cert, privkey)", iVar2 != 0);
      if (iVar2 != 0) {
         lVar6 = SSL_CTX_callback_ctrl(ctx, 0x35, sni_cb);
         iVar2 = test_true("test/sslapitest.c", 0x2a53, "SSL_CTX_set_tlsext_servername_callback(sctx, sni_cb)", lVar6 != 0);
         if (iVar2 != 0) {
            lVar6 = SSL_CTX_ctrl(ctx, 0x36, 0, local_48);
            iVar2 = test_true("test/sslapitest.c", 0x2a54, "SSL_CTX_set_tlsext_servername_arg(sctx, sctx2)", lVar6 != 0);
            if (iVar2 != 0) {
               iVar2 = create_ssl_objects(ctx, local_50, &local_38, &local_40, 0, 0);
               iVar2 = test_true("test/sslapitest.c", 0x2a5b, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
               if (iVar2 != 0) {
                  iVar2 = create_ssl_connection(local_38, local_40, 0);
                  iVar2 = test_true("test/sslapitest.c", 0x2a5d, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = test_int_eq("test/sslapitest.c", 0x2a62, "snicb", &_LC49, snicb, 1);
                     bVar7 = iVar2 != 0;
                     goto LAB_00103c6b;
                  }

               }

            }

         }

      }

   }

   bVar7 = false;
   LAB_00103c6b:SSL_free(local_38);
   SSL_free(local_40);
   SSL_CTX_free(local_48);
   SSL_CTX_free(ctx);
   SSL_CTX_free(local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_configuration_of_groups(void) {
   ssl_session_st *psVar1;
   int iVar2;
   undefined8 uVar3;
   SSL_CTX *ctx;
   ulong uVar4;
   bool bVar5;
   uVar3 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar3);
   iVar2 = test_ptr("test/sslapitest.c", 0x26a5, "ctx = SSL_CTX_new_ex(libctx, NULL, TLS_server_method())", ctx);
   if (iVar2 != 0) {
      psVar1 = ctx[1].session_cache_head;
      iVar2 = test_size_t_gt("test/sslapitest.c", 0x26a9, "groups_len", &_LC15, psVar1, 0);
      if (iVar2 != 0) {
         uVar4 = SSL_CTX_ctrl(ctx, 0x5c, 0, "DEFAULT");
         iVar2 = test_int_gt("test/sslapitest.c", 0x26aa, "SSL_CTX_set1_groups_list(ctx, \"DEFAULT\")", &_LC15, uVar4 & 0xffffffff, 0);
         if (iVar2 != 0) {
            iVar2 = test_size_t_eq("test/sslapitest.c", 0x26ab, "ctx->ext.supportedgroups_len", "groups_len", ctx[1].session_cache_head, psVar1);
            if (iVar2 != 0) {
               uVar4 = SSL_CTX_ctrl(ctx, 0x5c, 0, "DEFAULT:-?P-256");
               iVar2 = test_int_gt("test/sslapitest.c", 0x26ae, "SSL_CTX_set1_groups_list(ctx, \"DEFAULT:-?P-256\")", &_LC15, uVar4 & 0xffffffff, 0);
               if (iVar2 != 0) {
                  iVar2 = test_size_t_eq("test/sslapitest.c", 0x26b0, "ctx->ext.supportedgroups_len", "groups_len - 1", ctx[1].session_cache_head, (undefined1*)( (long)&psVar1[-1].tlsext_tick_lifetime_hint + 7 ));
                  if (iVar2 != 0) {
                     uVar4 = SSL_CTX_ctrl(ctx, 0x5c, 0, "?P-256:?P-521:-?P-256");
                     iVar2 = test_int_gt("test/sslapitest.c", 0x26b8, "SSL_CTX_set1_groups_list(ctx, \"?P-256:?P-521:-?P-256\")", &_LC15, uVar4 & 0xffffffff, 0);
                     if (iVar2 != 0) {
                        iVar2 = test_size_t_eq("test/sslapitest.c", 0x26b9, "ctx->ext.supportedgroups_len", &_LC49, ctx[1].session_cache_head, 1);
                        if (iVar2 != 0) {
                           iVar2 = test_int_eq("test/sslapitest.c", 0x26ba, "ctx->ext.supportedgroups[0]", "OSSL_TLS_GROUP_ID_secp521r1", (short)(ctx[1].session_cache_tail)->ssl_version, 0x19);
                           bVar5 = iVar2 != 0;
                           goto LAB_00103e99;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar5 = false;
   LAB_00103e99:SSL_CTX_free(ctx);
   return bVar5;
}
uint test_session_cache_overflow(uint param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   SSL_SESSION *s;
   long lVar7;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar5 = TLS_client_method();
   uVar6 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, 0x304 - ( param_1 & 1 ), &local_60, &local_58, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x256c, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, (idx % 2 == 0) ? TLS1_3_VERSION : TLS1_2_VERSION, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      SSL_CTX_set_options(local_60, 0x4000);
      iVar3 = test_true("test/sslapitest.c", 0x2571, "SSL_CTX_set_options(sctx, SSL_OP_NO_TICKET)");
      if (iVar3 != 0) {
         SSL_CTX_sess_set_get_cb(local_60, get_session_cb);
         get_sess_val = (SSL_SESSION*)0x0;
         SSL_CTX_ctrl(local_60, 0x2a, 1, (void*)0x0);
         iVar3 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0x2579, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = create_ssl_connection(local_50, local_48, 0);
            iVar3 = test_true("test/sslapitest.c", 0x257d, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
            if (iVar3 != 0) {
               if (1 < (int)param_1) {
                  s = SSL_get_session(local_50);
                  uVar4 = test_ptr("test/sslapitest.c", 0x2582, &_LC132, s);
                  if (uVar4 == 0) goto LAB_0010411a;
                  lVar7 = SSL_SESSION_set_timeout(s, 0x7fffffffffffffff);
                  iVar3 = test_true("test/sslapitest.c", 0x2589, "SSL_SESSION_set_timeout(sess, LONG_MAX)", lVar7 != 0);
                  if (iVar3 == 0) goto LAB_00104115;
               }

               SSL_shutdown(local_50);
               SSL_shutdown(local_48);
               SSL_free(local_50);
               SSL_free(local_48);
               local_48 = (SSL*)0x0;
               local_50 = (SSL*)0x0;
               iVar3 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
               iVar3 = test_true("test/sslapitest.c", 0x259b, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
               if (iVar3 != 0) {
                  iVar3 = create_ssl_connection(local_50, local_48, 0);
                  iVar3 = test_true("test/sslapitest.c", 0x259f, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                  if (iVar3 != 0) {
                     get_sess_val = SSL_get_session(local_50);
                     iVar3 = test_ptr("test/sslapitest.c", 0x25a7, "get_sess_val", get_sess_val);
                     if (iVar3 != 0) {
                        s = SSL_get1_session(local_48);
                        uVar4 = test_ptr("test/sslapitest.c", 0x25aa, &_LC132, s);
                        if (uVar4 != 0) {
                           SSL_shutdown(local_50);
                           SSL_shutdown(local_48);
                           SSL_free(local_50);
                           SSL_free(local_48);
                           local_48 = (SSL*)0x0;
                           local_50 = (SSL*)0x0;
                           iVar3 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
                           iVar3 = test_true("test/sslapitest.c", 0x25b3, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                           if (iVar3 != 0) {
                              iVar3 = SSL_set_session(local_48, s);
                              iVar3 = test_true("test/sslapitest.c", 0x25b7, "SSL_set_session(clientssl, sess)", iVar3 != 0);
                              if (iVar3 != 0) {
                                 iVar3 = create_ssl_connection(local_50, local_48, 0);
                                 iVar3 = test_true("test/sslapitest.c", 0x25ba, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                                 uVar4 = ( uint )(iVar3 != 0);
                                 goto LAB_0010411a;
                              }

                           }

                           uVar4 = 0;
                        }

                        goto LAB_0010411a;
                     }

                  }

               }

            }

         }

      }

   }

   LAB_00104115:s = (SSL_SESSION*)0x0;
   uVar4 = 0;
   LAB_0010411a:SSL_free(local_50);
   SSL_free(local_48);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   SSL_SESSION_free(s);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
uint test_negotiated_group(int param_1) {
   bool bVar1;
   bool bVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   uint uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   SSL_SESSION *session;
   int iVar11;
   undefined8 uVar12;
   int iVar13;
   long in_FS_OFFSET;
   int local_84;
   int local_80;
   int local_7c;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar4 = cert;
   uVar3 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   iVar11 = param_1 % 0x14;
   iVar13 = iVar11 % 10;
   if (iVar13 < 5) {
      local_84 = ( &ecdhe_kexch_groups )[iVar13];
      if (( is_fips == 0 ) || ( 1 < local_84 - 0x40aU )) {
         uVar12 = 0x304;
         local_80 = local_84;
         local_7c = iVar13;
         if (9 < iVar11) {
            LAB_001046fe:uVar12 = 0x303;
         }

         goto LAB_00104584;
      }

   }
 else {
      local_7c = iVar13 + -5;
      local_80 = ( &ffdhe_kexch_groups )[local_7c];
      if (iVar11 < 10) {
         local_84 = local_80;
         if (is_fips == 0) {
            uVar12 = 0x304;
         }
 else {
            if (local_80 - 0x40aU < 2) goto LAB_00104720;
            uVar12 = 0x304;
         }

         LAB_00104584:uVar7 = TLS_client_method();
         uVar8 = TLS_server_method();
         iVar5 = create_ssl_ctx_pair(libctx, uVar8, uVar7, 0x301, uVar12, &local_60, &local_58, uVar4, uVar3);
         iVar5 = test_true("test/sslapitest.c", 0x14c9, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, max_version, &sctx, &cctx, cert, privkey)", iVar5 != 0);
         if (iVar5 == 0) {
            LAB_00104670:uVar6 = 0;
            session = (SSL_SESSION*)0x0;
         }
 else {
            SSL_CTX_set_cipher_list(local_60, "ECDHE-RSA-AES128-GCM-SHA256:DHE-RSA-AES128-GCM-SHA256");
            iVar5 = test_true("test/sslapitest.c", 0x14d3, "SSL_CTX_set_cipher_list(sctx, TLS1_TXT_ECDHE_RSA_WITH_AES_128_GCM_SHA256 \":\" TLS1_TXT_DHE_RSA_WITH_AES_128_GCM_SHA256)");
            if (iVar5 == 0) goto LAB_00104670;
            lVar9 = SSL_CTX_ctrl(local_60, 0x76, 1, (void*)0x0);
            iVar5 = test_true("test/sslapitest.c", 0x14d6, "SSL_CTX_set_dh_auto(sctx, 1)", lVar9 != 0);
            if (iVar5 == 0) goto LAB_00104670;
            iVar5 = SSL_CTX_set_cipher_list(local_58, "ECDHE-RSA-AES128-GCM-SHA256:DHE-RSA-AES128-GCM-SHA256");
            iVar5 = test_true("test/sslapitest.c", 0x14d8, "SSL_CTX_set_cipher_list(cctx, TLS1_TXT_ECDHE_RSA_WITH_AES_128_GCM_SHA256 \":\" TLS1_TXT_DHE_RSA_WITH_AES_128_GCM_SHA256)", iVar5 != 0);
            if (iVar5 == 0) goto LAB_00104670;
            iVar5 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
            iVar5 = test_true("test/sslapitest.c", 0x14dd, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar5 != 0);
            if (iVar5 == 0) goto LAB_00104670;
            bVar1 = param_1 < 0x14;
            bVar2 = iVar13 < 5;
            iVar5 = set_ssl_groups(local_50, local_48, bVar1, bVar2, local_7c);
            iVar5 = test_true("test/sslapitest.c", 0x14e1, "set_ssl_groups(serverssl, clientssl, clientmulti, isecdhe, idx)", iVar5 != 0);
            if (iVar5 == 0) goto LAB_00104670;
            create_ssl_connection(local_50, local_48, 0);
            iVar5 = test_true("test/sslapitest.c", 0x14e5, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
            if (iVar5 == 0) goto LAB_00104670;
            uVar10 = SSL_ctrl(local_48, 0x86, 0, (void*)0x0);
            iVar5 = test_uint_eq("test/sslapitest.c", 0x14e9, "SSL_get_negotiated_group(clientssl)", "expectednid", uVar10 & 0xffffffff, local_84);
            if (iVar5 == 0) goto LAB_00104670;
            uVar10 = SSL_ctrl(local_50, 0x86, 0, (void*)0x0);
            iVar5 = test_uint_eq("test/sslapitest.c", 0x14ea, "SSL_get_negotiated_group(serverssl)", "expectednid", uVar10 & 0xffffffff, local_84);
            if (iVar5 == 0) goto LAB_00104670;
            session = SSL_get1_session(local_48);
            iVar5 = test_ptr("test/sslapitest.c", 0x14ed, "(origsess = SSL_get1_session(clientssl))", session);
            if (iVar5 == 0) {
               LAB_00104912:uVar6 = 0;
            }
 else {
               SSL_shutdown(local_48);
               SSL_shutdown(local_50);
               SSL_free(local_50);
               SSL_free(local_48);
               local_48 = (SSL*)0x0;
               local_50 = (SSL*)0x0;
               iVar5 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
               iVar5 = test_true("test/sslapitest.c", 0x14f7, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar5 != 0);
               if (iVar5 == 0) goto LAB_00104912;
               iVar5 = SSL_set_session(local_48, session);
               iVar5 = test_true("test/sslapitest.c", 0x14f9, "SSL_set_session(clientssl, origsess)", iVar5 != 0);
               if (iVar5 == 0) goto LAB_00104912;
               iVar5 = set_ssl_groups(local_50, local_48, bVar1, bVar2, local_7c);
               iVar5 = test_true("test/sslapitest.c", 0x14fa, "set_ssl_groups(serverssl, clientssl, clientmulti, isecdhe, idx)", iVar5 != 0);
               if (iVar5 == 0) goto LAB_00104912;
               iVar5 = create_ssl_connection(local_50, local_48, 0);
               iVar5 = test_true("test/sslapitest.c", 0x14fe, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar5 != 0);
               if (iVar5 == 0) goto LAB_00104912;
               SSL_session_reused(local_48);
               iVar5 = test_true("test/sslapitest.c", 0x14ff, "SSL_session_reused(clientssl)");
               if (iVar5 == 0) goto LAB_00104912;
               uVar10 = SSL_ctrl(local_48, 0x86, 0, (void*)0x0);
               iVar5 = test_uint_eq("test/sslapitest.c", 0x1503, "SSL_get_negotiated_group(clientssl)", "expectednid", uVar10 & 0xffffffff, local_84);
               if (iVar5 == 0) goto LAB_00104912;
               uVar10 = SSL_ctrl(local_50, 0x86, 0, (void*)0x0);
               iVar5 = test_uint_eq("test/sslapitest.c", 0x1504, "SSL_get_negotiated_group(serverssl)", "expectednid", uVar10 & 0xffffffff, local_84);
               if (iVar5 == 0) goto LAB_00104912;
               iVar5 = 1;
               SSL_shutdown(local_48);
               SSL_shutdown(local_50);
               SSL_free(local_50);
               SSL_free(local_48);
               local_48 = (SSL*)0x0;
               local_50 = (SSL*)0x0;
               if (local_7c != 0) {
                  iVar5 = local_7c + -1;
               }

               if (iVar11 < 10) {
                  if (iVar13 < 5) {
                     iVar11 = ( &ecdhe_kexch_groups )[iVar5];
                  }
 else {
                     iVar11 = ( &ffdhe_kexch_groups )[iVar5];
                  }

                  iVar13 = test_int_ne("test/sslapitest.c", 0x151c, "expectednid", "kexch_alg", iVar11, local_80);
                  local_80 = iVar11;
                  if (iVar13 == 0) goto LAB_00104912;
               }
 else if (4 < iVar13) {
                  local_80 = 0;
               }

               iVar11 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
               iVar11 = test_true("test/sslapitest.c", 0x1525, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar11 != 0);
               if (iVar11 == 0) goto LAB_00104912;
               iVar11 = SSL_set_session(local_48, session);
               iVar11 = test_true("test/sslapitest.c", 0x1527, "SSL_set_session(clientssl, origsess)", iVar11 != 0);
               if (iVar11 == 0) goto LAB_00104912;
               iVar11 = set_ssl_groups(local_50, local_48, bVar1, bVar2, iVar5);
               iVar11 = test_true("test/sslapitest.c", 0x1528, "set_ssl_groups(serverssl, clientssl, clientmulti, isecdhe, idx)", iVar11 != 0);
               if (iVar11 == 0) goto LAB_00104912;
               iVar11 = create_ssl_connection(local_50, local_48, 0);
               iVar11 = test_true("test/sslapitest.c", 0x152c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar11 != 0);
               if (iVar11 == 0) goto LAB_00104912;
               SSL_session_reused(local_48);
               iVar11 = test_true("test/sslapitest.c", 0x152d, "SSL_session_reused(clientssl)");
               if (iVar11 == 0) goto LAB_00104912;
               uVar10 = SSL_ctrl(local_48, 0x86, 0, (void*)0x0);
               iVar11 = test_uint_eq("test/sslapitest.c", 0x1531, "SSL_get_negotiated_group(clientssl)", "expectednid", uVar10 & 0xffffffff, local_80);
               if (iVar11 == 0) goto LAB_00104912;
               uVar10 = SSL_ctrl(local_50, 0x86, 0, (void*)0x0);
               iVar11 = test_uint_eq("test/sslapitest.c", 0x1532, "SSL_get_negotiated_group(serverssl)", "expectednid", uVar10 & 0xffffffff, local_80);
               uVar6 = ( uint )(iVar11 != 0);
            }

         }

         SSL_free(local_50);
         SSL_free(local_48);
         SSL_CTX_free(local_60);
         SSL_CTX_free(local_58);
         SSL_SESSION_free(session);
         goto LAB_001046a5;
      }

      if (( is_fips == 0 ) || ( 1 < local_80 - 0x40aU )) {
         local_84 = 0;
         goto LAB_001046fe;
      }

   }

   LAB_00104720:uVar6 = test_skip("test/sslapitest.c", 0x14c4, "X25519 and X448 might not be available in fips provider.");
   LAB_001046a5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint test_session_timeout(void) {
   long lVar1;
   undefined1 uVar2;
   undefined4 uVar3;
   undefined1 uVar4;
   undefined1 uVar5;
   undefined1 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   int iVar9;
   uint uVar10;
   time_t tVar11;
   undefined8 uVar12;
   SSL_CTX *s;
   SSL_SESSION *c;
   SSL_SESSION *c_00;
   SSL_SESSION *c_01;
   ulong uVar13;
   tVar11 = time((time_t*)0x0);
   uVar12 = TLS_method();
   s = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar12);
   iVar9 = test_ptr("test/sslapitest.c", 0x24e7, "ctx = SSL_CTX_new_ex(libctx, NULL, TLS_method())", s);
   if (iVar9 == 0) {
      c_01 = (SSL_SESSION*)0x0;
      c_00 = (SSL_SESSION*)0x0;
      c = (SSL_SESSION*)0x0;
      uVar10 = 0;
   }
 else {
      c = SSL_SESSION_new();
      iVar9 = test_ptr("test/sslapitest.c", 0x24e8, "early = SSL_SESSION_new()", c);
      if (iVar9 == 0) {
         c_01 = (SSL_SESSION*)0x0;
         c_00 = (SSL_SESSION*)0x0;
         uVar10 = 0;
      }
 else {
         c_00 = SSL_SESSION_new();
         c_01 = (SSL_SESSION*)0x0;
         uVar10 = test_ptr("test/sslapitest.c", 0x24e9, "middle = SSL_SESSION_new()", c_00);
         if (uVar10 != 0) {
            c_01 = SSL_SESSION_new();
            iVar9 = test_ptr("test/sslapitest.c", 0x24ea, "late = SSL_SESSION_new()", c_01);
            uVar8 = _UNK_0013db48;
            uVar12 = __LC151;
            if (iVar9 != 0) {
               c->tlsext_tick_lifetime_hint = 0x20;
               uVar7 = __LC151;
               __LC151 = (undefined4)uVar12;
               _UNK_0013db44 = SUB84(uVar12, 4);
               uVar3 = _UNK_0013db44;
               c[1].ssl_version = __LC151;
               __LC151 = uVar7;
               c[1].key_arg_length = uVar3;
               *(undefined8*)c[1].key_arg = uVar8;
               uVar7 = __LC151;
               __LC151 = (undefined4)uVar12;
               UNK_0013db44 = SUB81(uVar12, 4);
               uVar2 = UNK_0013db44;
               UNK_0013db45 = SUB81(uVar12, 5);
               uVar4 = UNK_0013db45;
               UNK_0013db46 = SUB81(uVar12, 6);
               uVar5 = UNK_0013db46;
               UNK_0013db47 = SUB81(uVar12, 7);
               uVar6 = UNK_0013db47;
               c[1].master_key_length = __LC151;
               __LC151 = uVar7;
               c[1].master_key[0] = uVar2;
               c[1].master_key[1] = uVar4;
               c[1].master_key[2] = uVar5;
               c[1].master_key[3] = uVar6;
               *(undefined8*)( c[1].master_key + 4 ) = uVar8;
               uVar7 = _UNK_0013db58;
               uVar12 = __LC152;
               c_00->tlsext_tick_lifetime_hint = 0x20;
               uVar8 = __LC152;
               __LC152 = (undefined4)uVar12;
               _UNK_0013db54 = SUB84(uVar12, 4);
               uVar3 = _UNK_0013db54;
               c_00[1].ssl_version = __LC152;
               __LC152 = uVar8;
               c_00[1].key_arg_length = uVar3;
               *(undefined8*)c_00[1].key_arg = uVar7;
               uVar8 = __LC152;
               __LC152 = (undefined4)uVar12;
               UNK_0013db54 = SUB81(uVar12, 4);
               uVar2 = UNK_0013db54;
               UNK_0013db55 = SUB81(uVar12, 5);
               uVar4 = UNK_0013db55;
               UNK_0013db56 = SUB81(uVar12, 6);
               uVar5 = UNK_0013db56;
               UNK_0013db57 = SUB81(uVar12, 7);
               uVar6 = UNK_0013db57;
               c_00[1].master_key_length = __LC152;
               __LC152 = uVar8;
               c_00[1].master_key[0] = uVar2;
               c_00[1].master_key[1] = uVar4;
               c_00[1].master_key[2] = uVar5;
               c_00[1].master_key[3] = uVar6;
               *(undefined8*)( c_00[1].master_key + 4 ) = uVar7;
               uVar7 = _UNK_0013db68;
               uVar12 = __LC153;
               c_01->tlsext_tick_lifetime_hint = 0x20;
               uVar8 = __LC153;
               __LC153 = (undefined4)uVar12;
               _UNK_0013db64 = SUB84(uVar12, 4);
               uVar3 = _UNK_0013db64;
               c_01[1].ssl_version = __LC153;
               __LC153 = uVar8;
               c_01[1].key_arg_length = uVar3;
               *(undefined8*)c_01[1].key_arg = uVar7;
               uVar8 = __LC153;
               __LC153 = (undefined4)uVar12;
               UNK_0013db64 = SUB81(uVar12, 4);
               uVar2 = UNK_0013db64;
               UNK_0013db65 = SUB81(uVar12, 5);
               uVar4 = UNK_0013db65;
               UNK_0013db66 = SUB81(uVar12, 6);
               uVar5 = UNK_0013db66;
               UNK_0013db67 = SUB81(uVar12, 7);
               uVar6 = UNK_0013db67;
               c_01[1].master_key_length = __LC153;
               __LC153 = uVar8;
               c_01[1].master_key[0] = uVar2;
               c_01[1].master_key[1] = uVar4;
               c_01[1].master_key[2] = uVar5;
               c_01[1].master_key[3] = uVar6;
               *(undefined8*)( c_01[1].master_key + 4 ) = uVar7;
               iVar9 = SSL_CTX_add_session(s, c);
               iVar9 = test_int_eq("test/sslapitest.c", 0x24f5, "SSL_CTX_add_session(ctx, early)", &_LC49, iVar9, 1);
               if (iVar9 != 0) {
                  iVar9 = SSL_CTX_add_session(s, c_00);
                  iVar9 = test_int_eq("test/sslapitest.c", 0x24f6, "SSL_CTX_add_session(ctx, middle)", &_LC49, iVar9, 1);
                  if (iVar9 != 0) {
                     iVar9 = SSL_CTX_add_session(s, c_01);
                     iVar9 = test_int_eq("test/sslapitest.c", 0x24f7, "SSL_CTX_add_session(ctx, late)", &_LC49, iVar9, 1);
                     if (iVar9 != 0) {
                        iVar9 = test_ptr("test/sslapitest.c", 0x24fb, "early->prev", *(undefined8*)( c[1].krb5_client_princ + 0xa0 ));
                        if (iVar9 != 0) {
                           uVar10 = test_ptr("test/sslapitest.c", 0x24fc, "middle->prev", *(undefined8*)( c_00[1].krb5_client_princ + 0xa0 ));
                           if (uVar10 == 0) goto LAB_00104dbf;
                           iVar9 = test_ptr("test/sslapitest.c", 0x24fd, "late->prev", *(undefined8*)( c_01[1].krb5_client_princ + 0xa0 ));
                           if (iVar9 != 0) {
                              lVar1 = tVar11 + -10;
                              uVar12 = SSL_SESSION_set_time_ex(c, lVar1);
                              iVar9 = test_time_t_ne("test/sslapitest.c", 0x2500, "SSL_SESSION_set_time_ex(early, now - 10)", &_LC15, uVar12, 0);
                              if (iVar9 != 0) {
                                 uVar12 = SSL_SESSION_set_time_ex(c_00, tVar11);
                                 iVar9 = test_time_t_ne("test/sslapitest.c", 0x2501, "SSL_SESSION_set_time_ex(middle, now)", &_LC15, uVar12, 0);
                                 if (iVar9 != 0) {
                                    uVar12 = SSL_SESSION_set_time_ex(c_01, tVar11 + 10);
                                    iVar9 = test_time_t_ne("test/sslapitest.c", 0x2502, "SSL_SESSION_set_time_ex(late, now + 10)", &_LC15, uVar12, 0);
                                    if (iVar9 != 0) {
                                       uVar13 = SSL_SESSION_set_timeout(c, 10);
                                       iVar9 = test_int_ne("test/sslapitest.c", 0x2505, "SSL_SESSION_set_timeout(early, TIMEOUT)", &_LC15, uVar13 & 0xffffffff, 0);
                                       if (iVar9 != 0) {
                                          uVar13 = SSL_SESSION_set_timeout(c_00, 10);
                                          iVar9 = test_int_ne("test/sslapitest.c", 0x2506, "SSL_SESSION_set_timeout(middle, TIMEOUT)", &_LC15, uVar13 & 0xffffffff, 0);
                                          if (iVar9 != 0) {
                                             uVar13 = SSL_SESSION_set_timeout(c_01, 10);
                                             iVar9 = test_int_ne("test/sslapitest.c", 0x2507, "SSL_SESSION_set_timeout(late, TIMEOUT)", &_LC15, uVar13 & 0xffffffff, 0);
                                             if (iVar9 != 0) {
                                                iVar9 = test_ptr("test/sslapitest.c", 0x250b, "early->prev", *(undefined8*)( c[1].krb5_client_princ + 0xa0 ));
                                                if (iVar9 != 0) {
                                                   iVar9 = test_ptr("test/sslapitest.c", 0x250c, "middle->prev", *(undefined8*)( c_00[1].krb5_client_princ + 0xa0 ));
                                                   if (iVar9 != 0) {
                                                      iVar9 = test_ptr("test/sslapitest.c", 0x250d, "late->prev", *(undefined8*)( c_01[1].krb5_client_princ + 0xa0 ));
                                                      if (iVar9 != 0) {
                                                         iVar9 = test_ptr_eq("test/sslapitest.c", 0x2511, "late->next", "middle", *(undefined8*)( c_01[1].krb5_client_princ + 0xa8 ), c_00);
                                                         if (iVar9 != 0) {
                                                            iVar9 = test_ptr_eq("test/sslapitest.c", 0x2512, "middle->next", "early", *(undefined8*)( c_00[1].krb5_client_princ + 0xa8 ), c);
                                                            if (iVar9 != 0) {
                                                               iVar9 = test_ptr_eq("test/sslapitest.c", 0x2513, "early->prev", "middle", *(undefined8*)( c[1].krb5_client_princ + 0xa0 ), c_00);
                                                               if (iVar9 != 0) {
                                                                  iVar9 = test_ptr_eq("test/sslapitest.c", 0x2514, "middle->prev", &_LC170, *(undefined8*)( c_00[1].krb5_client_princ + 0xa0 ), c_01);
                                                                  if (iVar9 != 0) {
                                                                     SSL_CTX_flush_sessions_ex(s, tVar11 + 9);
                                                                     iVar9 = test_ptr_null("test/sslapitest.c", 0x2519, "early->prev", *(undefined8*)( c[1].krb5_client_princ + 0xa0 ));
                                                                     if (iVar9 != 0) {
                                                                        iVar9 = test_ptr("test/sslapitest.c", 0x251a, "middle->prev", *(undefined8*)( c_00[1].krb5_client_princ + 0xa0 ));
                                                                        if (iVar9 != 0) {
                                                                           iVar9 = test_ptr("test/sslapitest.c", 0x251b, "late->prev", *(undefined8*)( c_01[1].krb5_client_princ + 0xa0 ));
                                                                           if (iVar9 != 0) {
                                                                              SSL_CTX_flush_sessions_ex(s, tVar11 + 0xb);
                                                                              iVar9 = test_ptr_null("test/sslapitest.c", 0x2520, "early->prev", *(undefined8*)( c[1].krb5_client_princ + 0xa0 ));
                                                                              if (iVar9 != 0) {
                                                                                 iVar9 = test_ptr_null("test/sslapitest.c", 0x2521, "middle->prev", *(undefined8*)( c_00[1].
                                                  krb5_client_princ + 0xa0 ));
                                                                                 if (iVar9 != 0) {
                                                                                    iVar9 = test_ptr("test/sslapitest.c", 0x2522, "late->prev", *(undefined8*)( c_01[1].krb5_client_princ + 0xa0 ));
                                                                                    if (iVar9 != 0) {
                                                                                       SSL_CTX_flush_sessions_ex(s, tVar11 + 0x15);
                                                                                       iVar9 = test_ptr_null("test/sslapitest.c", 0x2527, "early->prev", *(undefined8*)( c[1].krb5_client_princ + 0xa0 ));
                                                                                       if (iVar9 != 0) {
                                                                                          iVar9 = test_ptr_null("test/sslapitest.c", 0x2528, "middle->prev", *(undefined8*)( c_00[1].
                                                  krb5_client_princ + 0xa0 ));
                                                                                          if (iVar9 != 0) {
                                                                                             iVar9 = test_ptr_null("test/sslapitest.c", 0x2529, "late->prev", *(undefined8*)( c_01[1].
                                                  krb5_client_princ + 0xa0 ));
                                                                                             if (iVar9 != 0) {
                                                                                                iVar9 = SSL_CTX_add_session(s, c);
                                                                                                iVar9 = test_int_eq("test/sslapitest.c", 0x252d, "SSL_CTX_add_session(ctx, early)", &_LC49, iVar9, 1);
                                                                                                if (iVar9 != 0) {
                                                                                                   iVar9 = SSL_CTX_add_session(s, c_00);
                                                                                                   iVar9 = test_int_eq("test/sslapitest.c", 0x252e, "SSL_CTX_add_session(ctx, middle)", &_LC49, iVar9, 1);
                                                                                                   if (iVar9 != 0) {
                                                                                                      iVar9 = SSL_CTX_add_session(s, c_01);
                                                                                                      iVar9 = test_int_eq("test/sslapitest.c", 0x252f, "SSL_CTX_add_session(ctx, late)", &_LC49, iVar9, 1);
                                                                                                      if (iVar9 != 0) {
                                                                                                         iVar9 = test_ptr("test/sslapitest.c", 0x2533, "early->prev", *(undefined8*)( c[1].krb5_client_princ + 0xa0 ));
                                                                                                         if (iVar9 != 0) {
                                                                                                            iVar9 = test_ptr("test/sslapitest.c", 0x2534, "middle->prev", *(undefined8*)( c_00[1].krb5_client_princ + 0xa0 ));
                                                                                                            if (iVar9 != 0) {
                                                                                                               iVar9 = test_ptr("test/sslapitest.c", 0x2535, "late->prev", *(undefined8*)( c_01[1].krb5_client_princ + 0xa0 ));
                                                                                                               if (iVar9 != 0) {
                                                                                                                  SSL_CTX_flush_sessions_ex(s, 0);
                                                                                                                  iVar9 = test_ptr_null("test/sslapitest.c", 0x253a, "early->prev", *(undefined8*)( c[1].
                                                  krb5_client_princ + 0xa0 ));
                                                                                                                  if (iVar9 != 0) {
                                                                                                                     iVar9 = test_ptr_null("test/sslapitest.c", 0x253b, "middle->prev", *(undefined8*)( c_00[1].
                                                  krb5_client_princ + 0xa0 ));
                                                                                                                     if (iVar9 != 0) {
                                                                                                                        iVar9 = test_ptr_null("test/sslapitest.c", 0x253c, "late->prev");
                                                                                                                        if (iVar9 != 0) {
                                                                                                                           uVar13 = SSL_CTX_ctrl(s, 0x2d, 0, (void*)0x0);
                                                                                                                           SSL_CTX_ctrl(s, 0x2c, uVar13 | 0x400, (void*)0x0);
                                                                                                                           uVar12 = SSL_SESSION_set_time_ex(c, lVar1);
                                                                                                                           iVar9 = test_time_t_ne("test/sslapitest.c", 0x2544, "SSL_SESSION_set_time_ex(early, now)", &_LC15, uVar12, 0);
                                                                                                                           if (iVar9 != 0) {
                                                                                                                              iVar9 = SSL_CTX_add_session(s, c);
                                                                                                                              iVar9 = test_int_eq("test/sslapitest.c", 0x2545, "SSL_CTX_add_session(ctx, early)", &_LC49, iVar9, 1);
                                                                                                                              if (iVar9 != 0) {
                                                                                                                                 uVar12 = SSL_SESSION_get_time_ex(c);
                                                                                                                                 iVar9 = test_time_t_ne("test/sslapitest.c", 0x2546, "SSL_SESSION_get_time_ex(early)", &_LC172, uVar12, lVar1);
                                                                                                                                 uVar10 = ( uint )(iVar9 != 0);
                                                                                                                                 goto LAB_00104dbf;
                                                                                                                              }

                                                                                                                           }

                                                                                                                        }

                                                                                                                     }

                                                                                                                  }

                                                                                                               }

                                                                                                            }

                                                                                                         }

                                                                                                      }

                                                                                                   }

                                                                                                }

                                                                                             }

                                                                                          }

                                                                                       }

                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

            uVar10 = 0;
         }

      }

   }

   LAB_00104dbf:SSL_CTX_free(s);
   SSL_SESSION_free(c);
   SSL_SESSION_free(c_00);
   SSL_SESSION_free(c_01);
   return uVar10;
}
uint test_set_verify_cert_store_ssl(void) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   SSL_CTX *ctx;
   SSL *ssl;
   long lVar4;
   X509_STORE *v;
   X509_STORE *v_00;
   long in_FS_OFFSET;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_48 = 0;
   uVar3 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar3);
   iVar1 = test_ptr("test/sslapitest.c", 0x2b52, &_LC174, ctx);
   if (iVar1 == 0) {
      uVar2 = 0;
      v_00 = (X509_STORE*)0x0;
      v = (X509_STORE*)0x0;
      ssl = (SSL*)0x0;
      goto LAB_0010569a;
   }

   ssl = SSL_new(ctx);
   iVar1 = test_ptr("test/sslapitest.c", 0x2b57, &_LC175, ssl);
   if (iVar1 == 0) {
      LAB_00105706:v_00 = (X509_STORE*)0x0;
      v = (X509_STORE*)0x0;
      uVar2 = 0;
   }
 else {
      lVar4 = SSL_ctrl(ssl, 0x89, 0, &local_50);
      uVar2 = test_true("test/sslapitest.c", 0x2b5b, "SSL_get0_verify_cert_store(ssl, &store)", lVar4 != 0);
      if (uVar2 != 0) {
         lVar4 = SSL_ctrl(ssl, 0x8a, 0, &local_48);
         uVar2 = test_true("test/sslapitest.c", 0x2b5f, "SSL_get0_chain_cert_store(ssl, &cstore)", lVar4 != 0);
         if (uVar2 != 0) {
            iVar1 = test_ptr_null("test/sslapitest.c", 0x2b63, "store", local_50);
            if (iVar1 != 0) {
               iVar1 = test_ptr_null("test/sslapitest.c", 0x2b63, "cstore", local_48);
               if (iVar1 != 0) {
                  v = X509_STORE_new();
                  v_00 = (X509_STORE*)0x0;
                  uVar2 = test_ptr("test/sslapitest.c", 0x2b68, "new_store", v);
                  if (uVar2 != 0) {
                     v_00 = X509_STORE_new();
                     iVar1 = test_ptr("test/sslapitest.c", 0x2b6c, "new_cstore", v_00);
                     if (iVar1 != 0) {
                        lVar4 = SSL_ctrl(ssl, 0x6a, 1, v);
                        iVar1 = test_true("test/sslapitest.c", 0x2b70, "SSL_set1_verify_cert_store(ssl, new_store)", lVar4 != 0);
                        if (iVar1 != 0) {
                           lVar4 = SSL_ctrl(ssl, 0x6b, 1, v_00);
                           iVar1 = test_true("test/sslapitest.c", 0x2b73, "SSL_set1_chain_cert_store(ssl, new_cstore)", lVar4 != 0);
                           if (iVar1 != 0) {
                              lVar4 = SSL_ctrl(ssl, 0x89, 0, &local_50);
                              iVar1 = test_true("test/sslapitest.c", 0x2b77, "SSL_get0_verify_cert_store(ssl, &store)", lVar4 != 0);
                              if (iVar1 != 0) {
                                 lVar4 = SSL_ctrl(ssl, 0x8a, 0, &local_48);
                                 iVar1 = test_true("test/sslapitest.c", 0x2b7a, "SSL_get0_chain_cert_store(ssl, &cstore)", lVar4 != 0);
                                 if (iVar1 != 0) {
                                    iVar1 = test_ptr_eq("test/sslapitest.c", 0x2b7d, "store", "new_store", local_50, v);
                                    if (iVar1 != 0) {
                                       iVar1 = test_ptr_eq("test/sslapitest.c", 0x2b7d, "cstore", "new_cstore", local_48, v_00);
                                       if (iVar1 != 0) {
                                          SSL_ctrl(ssl, 0x6a, 1, (void*)0x0);
                                          iVar1 = test_true("test/sslapitest.c", 0x2b81, "SSL_set1_verify_cert_store(ssl, NULL)");
                                          if (iVar1 != 0) {
                                             lVar4 = SSL_ctrl(ssl, 0x6b, 1, (void*)0x0);
                                             iVar1 = test_true("test/sslapitest.c", 0x2b84, "SSL_set1_chain_cert_store(ssl, NULL)", lVar4 != 0);
                                             if (iVar1 != 0) {
                                                lVar4 = SSL_ctrl(ssl, 0x89, 0, &local_50);
                                                iVar1 = test_true("test/sslapitest.c", 0x2b88, "SSL_get0_verify_cert_store(ssl, &store)", lVar4 != 0);
                                                if (iVar1 != 0) {
                                                   lVar4 = SSL_ctrl(ssl, 0x8a, 0, &local_48);
                                                   iVar1 = test_true("test/sslapitest.c", 0x2b8b, "SSL_get0_chain_cert_store(ssl, &cstore)", lVar4 != 0);
                                                   if (iVar1 != 0) {
                                                      iVar1 = test_ptr_null("test/sslapitest.c", 0x2b8e, "store", local_50);
                                                      if (iVar1 != 0) {
                                                         iVar1 = test_ptr_null("test/sslapitest.c", 0x2b8e, "cstore", local_48);
                                                         uVar2 = ( uint )(iVar1 != 0);
                                                         goto LAB_0010569a;
                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                     uVar2 = 0;
                  }

                  goto LAB_0010569a;
               }

            }

            goto LAB_00105706;
         }

      }

      v_00 = (X509_STORE*)0x0;
      v = (X509_STORE*)0x0;
   }

   LAB_0010569a:X509_STORE_free(v);
   X509_STORE_free(v_00);
   SSL_free(ssl);
   SSL_CTX_free(ctx);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_set_verify_cert_store_ssl_ctx(void) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   SSL_CTX *ctx;
   long lVar4;
   X509_STORE *v;
   X509_STORE *v_00;
   long in_FS_OFFSET;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_48 = 0;
   uVar3 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar3);
   iVar1 = test_ptr("test/sslapitest.c", 0x2b02, &_LC174, ctx);
   if (iVar1 != 0) {
      lVar4 = SSL_CTX_ctrl(ctx, 0x89, 0, &local_50);
      iVar1 = test_true("test/sslapitest.c", 0x2b06, "SSL_CTX_get0_verify_cert_store(ctx, &store)", lVar4 != 0);
      if (iVar1 != 0) {
         lVar4 = SSL_CTX_ctrl(ctx, 0x8a, 0, &local_48);
         iVar1 = test_true("test/sslapitest.c", 0x2b0a, "SSL_CTX_get0_chain_cert_store(ctx, &cstore)", lVar4 != 0);
         if (iVar1 != 0) {
            iVar1 = test_ptr_null("test/sslapitest.c", 0x2b0e, "store", local_50);
            if (iVar1 != 0) {
               iVar1 = test_ptr_null("test/sslapitest.c", 0x2b0e, "cstore", local_48);
               if (iVar1 != 0) {
                  v = X509_STORE_new();
                  v_00 = (X509_STORE*)0x0;
                  uVar2 = test_ptr("test/sslapitest.c", 0x2b13, "new_store", v);
                  if (uVar2 != 0) {
                     v_00 = X509_STORE_new();
                     iVar1 = test_ptr("test/sslapitest.c", 0x2b17, "new_cstore", v_00);
                     if (iVar1 != 0) {
                        lVar4 = SSL_CTX_ctrl(ctx, 0x6a, 1, v);
                        iVar1 = test_true("test/sslapitest.c", 0x2b1b, "SSL_CTX_set1_verify_cert_store(ctx, new_store)", lVar4 != 0);
                        if (iVar1 != 0) {
                           lVar4 = SSL_CTX_ctrl(ctx, 0x6b, 1, v_00);
                           uVar2 = test_true("test/sslapitest.c", 0x2b1e, "SSL_CTX_set1_chain_cert_store(ctx, new_cstore)", lVar4 != 0);
                           if (uVar2 == 0) goto LAB_00105b68;
                           lVar4 = SSL_CTX_ctrl(ctx, 0x89, 0, &local_50);
                           iVar1 = test_true("test/sslapitest.c", 0x2b22, "SSL_CTX_get0_verify_cert_store(ctx, &store)", lVar4 != 0);
                           if (iVar1 != 0) {
                              lVar4 = SSL_CTX_ctrl(ctx, 0x8a, 0, &local_48);
                              iVar1 = test_true("test/sslapitest.c", 0x2b25, "SSL_CTX_get0_chain_cert_store(ctx, &cstore)", lVar4 != 0);
                              if (iVar1 != 0) {
                                 iVar1 = test_ptr_eq("test/sslapitest.c", 0x2b28, "store", "new_store", local_50, v);
                                 if (iVar1 != 0) {
                                    iVar1 = test_ptr_eq("test/sslapitest.c", 0x2b28, "cstore", "new_cstore", local_48, v_00);
                                    if (iVar1 != 0) {
                                       SSL_CTX_ctrl(ctx, 0x6a, 1, (void*)0x0);
                                       iVar1 = test_true("test/sslapitest.c", 0x2b2c, "SSL_CTX_set1_verify_cert_store(ctx, NULL)");
                                       if (iVar1 != 0) {
                                          lVar4 = SSL_CTX_ctrl(ctx, 0x6b, 1, (void*)0x0);
                                          iVar1 = test_true("test/sslapitest.c", 0x2b2f, "SSL_CTX_set1_chain_cert_store(ctx, NULL)", lVar4 != 0);
                                          if (iVar1 != 0) {
                                             lVar4 = SSL_CTX_ctrl(ctx, 0x89, 0, &local_50);
                                             iVar1 = test_true("test/sslapitest.c", 0x2b33, "SSL_CTX_get0_verify_cert_store(ctx, &store)", lVar4 != 0);
                                             if (iVar1 != 0) {
                                                lVar4 = SSL_CTX_ctrl(ctx, 0x8a, 0, &local_48);
                                                iVar1 = test_true("test/sslapitest.c", 0x2b36, "SSL_CTX_get0_chain_cert_store(ctx, &cstore)", lVar4 != 0);
                                                if (iVar1 != 0) {
                                                   iVar1 = test_ptr_null("test/sslapitest.c", 0x2b39, "store", local_50);
                                                   if (iVar1 != 0) {
                                                      iVar1 = test_ptr_null("test/sslapitest.c", 0x2b39, "cstore", local_48);
                                                      uVar2 = ( uint )(iVar1 != 0);
                                                      goto LAB_00105b68;
                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                     uVar2 = 0;
                  }

                  goto LAB_00105b68;
               }

            }

         }

      }

   }

   v_00 = (X509_STORE*)0x0;
   v = (X509_STORE*)0x0;
   uVar2 = 0;
   LAB_00105b68:X509_STORE_free(v);
   X509_STORE_free(v_00);
   SSL_CTX_free(ctx);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_set_alpn(void) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   SSL_CTX *ctx;
   SSL *ssl;
   long in_FS_OFFSET;
   undefined4 local_62;
   undefined4 local_5e;
   undefined4 local_5a;
   undefined1 local_56;
   undefined4 local_55;
   undefined1 local_51;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_62 = 0x64616200;
   local_50 = 0x6461620164616203;
   local_5a = 0x6f6f6704;
   local_56 = 100;
   local_5e = 0x64616201;
   local_55 = 0x64616203;
   local_51 = 0;
   local_48 = 0x6461620664616203;
   uVar3 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar3);
   iVar1 = test_ptr("test/sslapitest.c", 0x2ac0, &_LC174, ctx);
   if (iVar1 != 0) {
      iVar1 = SSL_CTX_set_alpn_protos(ctx, 0, 2);
      iVar1 = test_false("test/sslapitest.c", 0x2ac4, "SSL_CTX_set_alpn_protos(ctx, NULL, 2)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_5a, 0);
         iVar1 = test_false("test/sslapitest.c", 0x2ac6, "SSL_CTX_set_alpn_protos(ctx, good, 0)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_5a, 5);
            iVar1 = test_false("test/sslapitest.c", 0x2ac8, "SSL_CTX_set_alpn_protos(ctx, good, sizeof(good))", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_5a, 1);
               iVar1 = test_true("test/sslapitest.c", 0x2aca, "SSL_CTX_set_alpn_protos(ctx, good, 1)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_62, 4);
                  iVar1 = test_true("test/sslapitest.c", 0x2acc, "SSL_CTX_set_alpn_protos(ctx, bad0, sizeof(bad0))", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_5e, 4);
                     iVar1 = test_true("test/sslapitest.c", 0x2ace, "SSL_CTX_set_alpn_protos(ctx, bad1, sizeof(bad1))", iVar1 != 0);
                     if (iVar1 != 0) {
                        iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_55, 5);
                        iVar1 = test_true("test/sslapitest.c", 0x2ad0, "SSL_CTX_set_alpn_protos(ctx, bad2, sizeof(bad2))", iVar1 != 0);
                        if (iVar1 != 0) {
                           iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_50, 8);
                           iVar1 = test_true("test/sslapitest.c", 0x2ad2, "SSL_CTX_set_alpn_protos(ctx, bad3, sizeof(bad3))", iVar1 != 0);
                           if (iVar1 != 0) {
                              iVar1 = SSL_CTX_set_alpn_protos(ctx, &local_48, 8);
                              iVar1 = test_true("test/sslapitest.c", 0x2ad4, "SSL_CTX_set_alpn_protos(ctx, bad4, sizeof(bad4))", iVar1 != 0);
                              if (iVar1 != 0) {
                                 ssl = SSL_new(ctx);
                                 iVar1 = test_ptr("test/sslapitest.c", 0x2ad8, &_LC175, ssl);
                                 if (iVar1 != 0) {
                                    iVar1 = SSL_set_alpn_protos(ssl, 0, 2);
                                    iVar1 = test_false("test/sslapitest.c", 0x2adb, "SSL_set_alpn_protos(ssl, NULL, 2)", iVar1 != 0);
                                    if (iVar1 != 0) {
                                       iVar1 = SSL_set_alpn_protos(ssl, &local_5a, 0);
                                       uVar2 = test_false("test/sslapitest.c", 0x2add, "SSL_set_alpn_protos(ssl, good, 0)", iVar1 != 0);
                                       if (uVar2 == 0) goto LAB_0010601b;
                                       iVar1 = SSL_set_alpn_protos(ssl, &local_5a, 5);
                                       iVar1 = test_false("test/sslapitest.c", 0x2adf, "SSL_set_alpn_protos(ssl, good, sizeof(good))", iVar1 != 0);
                                       if (iVar1 != 0) {
                                          iVar1 = SSL_set_alpn_protos(ssl, &local_5a, 1);
                                          iVar1 = test_true("test/sslapitest.c", 0x2ae1, "SSL_set_alpn_protos(ssl, good, 1)", iVar1 != 0);
                                          if (iVar1 != 0) {
                                             iVar1 = SSL_set_alpn_protos(ssl, &local_62, 4);
                                             iVar1 = test_true("test/sslapitest.c", 0x2ae3, "SSL_set_alpn_protos(ssl, bad0, sizeof(bad0))", iVar1 != 0);
                                             if (iVar1 != 0) {
                                                iVar1 = SSL_set_alpn_protos(ssl, &local_5e, 4);
                                                iVar1 = test_true("test/sslapitest.c", 0x2ae5, "SSL_set_alpn_protos(ssl, bad1, sizeof(bad1))", iVar1 != 0);
                                                if (iVar1 != 0) {
                                                   iVar1 = SSL_set_alpn_protos(ssl, &local_55, 5);
                                                   iVar1 = test_true("test/sslapitest.c", 0x2ae7, "SSL_set_alpn_protos(ssl, bad2, sizeof(bad2))", iVar1 != 0);
                                                   if (iVar1 != 0) {
                                                      iVar1 = SSL_set_alpn_protos(ssl, &local_50, 8);
                                                      iVar1 = test_true("test/sslapitest.c", 0x2ae9, "SSL_set_alpn_protos(ssl, bad3, sizeof(bad3))", iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                         iVar1 = SSL_set_alpn_protos(ssl, &local_48, 8);
                                                         iVar1 = test_true("test/sslapitest.c", 0x2aeb, "SSL_set_alpn_protos(ssl, bad4, sizeof(bad4))", iVar1 != 0);
                                                         uVar2 = ( uint )(iVar1 != 0);
                                                         goto LAB_0010601b;
                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                                 uVar2 = 0;
                                 goto LAB_0010601b;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   uVar2 = 0;
   ssl = (SSL*)0x0;
   LAB_0010601b:SSL_free(ssl);
   SSL_CTX_free(ctx);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_inherit_verify_param(void) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   SSL_CTX *ctx;
   SSL *ssl;
   bool bVar4;
   uVar3 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar3);
   iVar1 = test_ptr("test/sslapitest.c", 0x2ba7, &_LC174, ctx);
   if (iVar1 != 0) {
      uVar3 = SSL_CTX_get0_param(ctx);
      iVar1 = test_ptr("test/sslapitest.c", 0x2bab, &_LC210, uVar3);
      if (iVar1 != 0) {
         uVar2 = X509_VERIFY_PARAM_get_hostflags(uVar3);
         iVar1 = test_int_eq("test/sslapitest.c", 0x2bad, "X509_VERIFY_PARAM_get_hostflags(cp)", &_LC15, uVar2, 0);
         if (iVar1 != 0) {
            X509_VERIFY_PARAM_set_hostflags(uVar3, 0x20);
            ssl = SSL_new(ctx);
            iVar1 = test_ptr("test/sslapitest.c", 0x2bb3, &_LC175, ssl);
            if (iVar1 != 0) {
               uVar3 = SSL_get0_param(ssl);
               iVar1 = test_ptr("test/sslapitest.c", 0x2bb7, &_LC212, uVar3);
               if (iVar1 != 0) {
                  uVar2 = X509_VERIFY_PARAM_get_hostflags(uVar3);
                  iVar1 = test_int_eq("test/sslapitest.c", 0x2bb9, "X509_VERIFY_PARAM_get_hostflags(sp)", "hostflags", uVar2, 0x20);
                  bVar4 = iVar1 != 0;
                  goto LAB_001064de;
               }

            }

            bVar4 = false;
            goto LAB_001064de;
         }

      }

   }

   ssl = (SSL*)0x0;
   bVar4 = false;
   LAB_001064de:SSL_free(ssl);
   SSL_CTX_free(ctx);
   return bVar4;
}
bool test_ticket_lifetime(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   SSL_SESSION *pSVar6;
   undefined8 uVar7;
   int iVar8;
   long in_FS_OFFSET;
   bool bVar9;
   SSL_CTX *local_50;
   SSL_CTX *local_48;
   SSL *local_40;
   SSL *local_38;
   long local_30;
   uVar1 = cert;
   uVar7 = privkey;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL_CTX*)0x0;
   local_48 = (SSL_CTX*)0x0;
   iVar8 = 0x304 - ( uint )(param_1 == 0);
   local_40 = (SSL*)0x0;
   local_38 = (SSL*)0x0;
   uVar2 = TLS_client_method();
   uVar3 = TLS_server_method();
   iVar8 = create_ssl_ctx_pair(libctx, uVar3, uVar2, iVar8, iVar8, &local_48, &local_50, uVar1, uVar7);
   iVar8 = test_true("test/sslapitest.c", 0x2a87, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), version, version, &sctx, &cctx, cert, privkey)", iVar8 != 0);
   if (iVar8 != 0) {
      iVar8 = create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
      iVar8 = test_true("test/sslapitest.c", 0x2a8c, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar8 != 0);
      if (iVar8 != 0) {
         lVar4 = SSL_get_default_timeout(local_38);
         lVar5 = SSL_CTX_set_timeout(local_48, 0x127500);
         iVar8 = test_long_eq("test/sslapitest.c", 0x2a94, "SSL_CTX_set_timeout(sctx, TWO_WEEK_SEC)", "SSL_get_default_timeout(serverssl)", lVar5, lVar4);
         if (iVar8 != 0) {
            iVar8 = create_ssl_connection(local_38, local_40, 0);
            iVar8 = test_true("test/sslapitest.c", 0x2a98, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar8 != 0);
            if (iVar8 != 0) {
               if (param_1 == 0) {
                  pSVar6 = SSL_get_session(local_40);
                  uVar7 = SSL_SESSION_get_ticket_lifetime_hint(pSVar6);
                  iVar8 = test_ulong_eq("test/sslapitest.c", 0x2a9d, "SSL_SESSION_get_ticket_lifetime_hint(SSL_get_session(clientssl))", "TWO_WEEK_SEC", uVar7, 0x127500);
                  bVar9 = iVar8 != 0;
               }
 else {
                  pSVar6 = SSL_get_session(local_40);
                  uVar7 = SSL_SESSION_get_ticket_lifetime_hint(pSVar6);
                  iVar8 = test_ulong_le("test/sslapitest.c", 0x2aa1, "SSL_SESSION_get_ticket_lifetime_hint(SSL_get_session(clientssl))", "ONE_WEEK_SEC", uVar7, 0x93a80);
                  bVar9 = iVar8 != 0;
               }

               goto LAB_001066b2;
            }

         }

      }

   }

   bVar9 = false;
   LAB_001066b2:SSL_free(local_38);
   SSL_free(local_40);
   SSL_CTX_free(local_48);
   SSL_CTX_free(local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 sni_cb(SSL *param_1, undefined4 *param_2, SSL_CTX *param_3) {
   SSL_CTX *pSVar1;
   pSVar1 = SSL_set_SSL_CTX(param_1, param_3);
   if (pSVar1 != (SSL_CTX*)0x0) {
      snicb = snicb + 1;
      return 0;
   }

   *param_2 = 0x50;
   return 2;
}
bool test_unknown_sigalgs_groups(void) {
   int iVar1;
   undefined8 uVar2;
   SSL_CTX *ctx;
   ulong uVar3;
   bool bVar4;
   uVar2 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar2);
   iVar1 = test_ptr("test/sslapitest.c", 0x2669, "ctx = SSL_CTX_new_ex(libctx, NULL, TLS_server_method())", ctx);
   if (iVar1 != 0) {
      uVar3 = SSL_CTX_ctrl(ctx, 0x62, 0, "RSA+SHA256:?nonexistent:?RSA+SHA512");
      iVar1 = test_int_gt("test/sslapitest.c", 0x266c, "SSL_CTX_set1_sigalgs_list(ctx, \"RSA+SHA256:?nonexistent:?RSA+SHA512\")", &_LC15, uVar3 & 0xffffffff, 0);
      if (iVar1 != 0) {
         iVar1 = test_size_t_eq("test/sslapitest.c", 0x2670, "ctx->cert->conf_sigalgslen", &_LC223, *(undefined8*)( *(long*)ctx->sid_ctx + 0x48 ), 2);
         if (iVar1 != 0) {
            iVar1 = test_int_eq("test/sslapitest.c", 0x2671, "ctx->cert->conf_sigalgs[0]", "TLSEXT_SIGALG_rsa_pkcs1_sha256", **(undefined2**)( *(long*)ctx->sid_ctx + 0x40 ), 0x401);
            if (iVar1 != 0) {
               iVar1 = test_int_eq("test/sslapitest.c", 0x2672, "ctx->cert->conf_sigalgs[1]", "TLSEXT_SIGALG_rsa_pkcs1_sha512", *(undefined2*)( *(long*)( *(long*)ctx->sid_ctx + 0x40 ) + 2 ), 0x601);
               if (iVar1 != 0) {
                  uVar3 = SSL_CTX_ctrl(ctx, 0x66, 0, "RSA+SHA256:?nonexistent:?RSA+SHA512");
                  iVar1 = test_int_gt("test/sslapitest.c", 0x2675, "SSL_CTX_set1_client_sigalgs_list(ctx, \"RSA+SHA256:?nonexistent:?RSA+SHA512\")", &_LC15, uVar3 & 0xffffffff, 0);
                  if (iVar1 != 0) {
                     iVar1 = test_size_t_eq("test/sslapitest.c", 0x2679, "ctx->cert->client_sigalgslen", &_LC223, *(undefined8*)( *(long*)ctx->sid_ctx + 0x58 ), 2);
                     if (iVar1 != 0) {
                        iVar1 = test_int_eq("test/sslapitest.c", 0x267a, "ctx->cert->client_sigalgs[0]", "TLSEXT_SIGALG_rsa_pkcs1_sha256", **(undefined2**)( *(long*)ctx->sid_ctx + 0x50 ), 0x401);
                        if (iVar1 != 0) {
                           iVar1 = test_int_eq("test/sslapitest.c", 0x267b, "ctx->cert->client_sigalgs[1]", "TLSEXT_SIGALG_rsa_pkcs1_sha512", *(undefined2*)( *(long*)( *(long*)ctx->sid_ctx + 0x50 ) + 2 ), 0x601);
                           if (iVar1 != 0) {
                              uVar3 = SSL_CTX_ctrl(ctx, 0x5c, 0, "nonexistent");
                              iVar1 = test_int_le("test/sslapitest.c", 0x267e, "SSL_CTX_set1_groups_list(ctx, \"nonexistent\")", &_LC15, uVar3 & 0xffffffff, 0);
                              if (iVar1 != 0) {
                                 uVar3 = SSL_CTX_ctrl(ctx, 0x5c, 0, "?nonexistent1:?nonexistent2:?nonexistent3");
                                 iVar1 = test_int_gt("test/sslapitest.c", 0x2683, "SSL_CTX_set1_groups_list(ctx, \"?nonexistent1:?nonexistent2:?nonexistent3\")", &_LC15, uVar3 & 0xffffffff, 0);
                                 if (iVar1 != 0) {
                                    uVar3 = SSL_CTX_ctrl(ctx, 0x5c, 0, "P-256:nonexistent");
                                    iVar1 = test_int_le("test/sslapitest.c", 0x2689, "SSL_CTX_set1_groups_list(ctx, \"P-256:nonexistent\")", &_LC15, uVar3 & 0xffffffff, 0);
                                    if (iVar1 != 0) {
                                       uVar3 = SSL_CTX_ctrl(ctx, 0x5c, 0, "P-384:?nonexistent:?P-521");
                                       iVar1 = test_int_gt("test/sslapitest.c", 0x268e, "SSL_CTX_set1_groups_list(ctx, \"P-384:?nonexistent:?P-521\")", &_LC15, uVar3 & 0xffffffff, 0);
                                       if (iVar1 != 0) {
                                          iVar1 = test_size_t_eq("test/sslapitest.c", 0x2692, "ctx->ext.supportedgroups_len", &_LC223, ctx[1].session_cache_head, 2);
                                          if (iVar1 != 0) {
                                             iVar1 = test_int_eq("test/sslapitest.c", 0x2693, "ctx->ext.supportedgroups[0]", "OSSL_TLS_GROUP_ID_secp384r1", (short)(ctx[1].session_cache_tail)->ssl_version, 0x18);
                                             if (iVar1 != 0) {
                                                iVar1 = test_int_eq("test/sslapitest.c", 0x2694, "ctx->ext.supportedgroups[1]", "OSSL_TLS_GROUP_ID_secp521r1", *(undefined2*)( (long)&(ctx[1].session_cache_tail)->
                                                             ssl_version + 2 ), 0x19);
                                                bVar4 = iVar1 != 0;
                                                goto LAB_001068cf;
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar4 = false;
   LAB_001068cf:SSL_CTX_free(ctx);
   return bVar4;
}
bool test_dh_auto(undefined4 param_1) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *str;
   undefined8 uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_58;
   SSL_CTX *local_50;
   SSL *local_48;
   SSL *local_40;
   EVP_PKEY *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = TLS_client_method();
   local_58 = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar2);
   uVar2 = TLS_server_method();
   local_50 = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar2);
   local_48 = (SSL*)0x0;
   local_40 = (SSL*)0x0;
   local_38 = (EVP_PKEY*)0x0;
   iVar1 = test_ptr("test/sslapitest.c", 0x29cf, &_LC113, local_50);
   if (( iVar1 != 0 ) && ( iVar1 = test_ptr("test/sslapitest.c", 0x29cf, &_LC246, local_58) ),uVar5 = cert1024,uVar2 = privkey1024,iVar1 != 0) {
      switch (param_1) {
         case 0:
      bVar7 = true;
      if (is_fips != 0) goto LAB_00106cd6;
      str = "DHE-RSA-AES128-SHA";
      uVar6 = 0x400;
      SSL_CTX_set_security_level(local_50,1);
      SSL_CTX_set_security_level(local_58,1);
      break;
         case 1:
      str = "DHE-RSA-AES128-SHA";
      uVar6 = 0x800;
      uVar5 = cert;
      uVar2 = privkey;
      break;
         case 2:
      str = "DHE-RSA-AES128-SHA";
      uVar6 = 0xc00;
      uVar5 = cert3072;
      uVar2 = privkey3072;
      break;
         case 3:
      str = "DHE-RSA-AES128-SHA";
      uVar6 = 0x1000;
      uVar5 = cert4096;
      uVar2 = privkey4096;
      break;
         case 4:
      str = "DHE-RSA-AES128-SHA";
      uVar6 = 0x2000;
      uVar5 = cert8192;
      uVar2 = privkey8192;
      break;
         case 5:
      bVar7 = true;
      if (is_fips != 0) goto LAB_00106cd6;
      str = "ADH-AES128-SHA256:@SECLEVEL=0";
      uVar6 = 0x400;
      uVar5 = 0;
      uVar2 = 0;
      break;
         case 6:
      str = "ADH-AES256-SHA256:@SECLEVEL=0";
      uVar6 = 0xc00;
      uVar5 = 0;
      uVar2 = 0;
      break;
         default:
      test_error("test/sslapitest.c",0x2a03,"Invalid text index");
      goto LAB_00106cd4;
      }

      iVar1 = create_ssl_ctx_pair(libctx, 0, 0, 0, 0, &local_50, &local_58, uVar5, uVar2);
      iVar1 = test_true("test/sslapitest.c", 0x2a07, "create_ssl_ctx_pair(libctx, NULL, NULL, 0, 0, &sctx, &cctx, thiscert, thiskey)", iVar1 != 0);
      if (iVar1 != 0) {
         create_ssl_objects(local_50, local_58, &local_40, &local_48, 0, 0);
         iVar1 = test_true("test/sslapitest.c", 0x2a0e, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)");
         if (iVar1 != 0) {
            SSL_ctrl(local_40, 0x76, 1, (void*)0x0);
            iVar1 = test_true("test/sslapitest.c", 0x2a12, "SSL_set_dh_auto(serverssl, 1)");
            if (iVar1 != 0) {
               SSL_ctrl(local_40, 0x7b, 0x303, (void*)0x0);
               iVar1 = test_true("test/sslapitest.c", 0x2a13, "SSL_set_min_proto_version(serverssl, TLS1_2_VERSION)");
               if (iVar1 != 0) {
                  lVar3 = SSL_ctrl(local_40, 0x7c, 0x303, (void*)0x0);
                  iVar1 = test_true("test/sslapitest.c", 0x2a14, "SSL_set_max_proto_version(serverssl, TLS1_2_VERSION)", lVar3 != 0);
                  if (iVar1 != 0) {
                     iVar1 = SSL_set_cipher_list(local_40, str);
                     iVar1 = test_true("test/sslapitest.c", 0x2a15, "SSL_set_cipher_list(serverssl, ciphersuite)", iVar1 != 0);
                     if (iVar1 != 0) {
                        iVar1 = SSL_set_cipher_list(local_48, str);
                        iVar1 = test_true("test/sslapitest.c", 0x2a16, "SSL_set_cipher_list(clientssl, ciphersuite)", iVar1 != 0);
                        if (iVar1 != 0) {
                           iVar1 = SSL_connect(local_48);
                           iVar1 = test_int_le("test/sslapitest.c", 0x2a1e, "SSL_connect(clientssl)", &_LC15, iVar1, 0);
                           if (iVar1 != 0) {
                              iVar1 = SSL_accept(local_40);
                              iVar1 = test_int_le("test/sslapitest.c", 0x2a1f, "SSL_accept(serverssl)", &_LC15, iVar1, 0);
                              if (iVar1 != 0) {
                                 uVar4 = SSL_ctrl(local_40, 0x85, 0, &local_38);
                                 iVar1 = test_int_gt("test/sslapitest.c", 0x2a22, "SSL_get_tmp_key(serverssl, &tmpkey)", &_LC15, uVar4 & 0xffffffff, 0);
                                 if (iVar1 != 0) {
                                    iVar1 = EVP_PKEY_get_bits(local_38);
                                    iVar1 = test_size_t_eq("test/sslapitest.c", 0x2a24, "EVP_PKEY_get_bits(tmpkey)", "expdhsize", (long)iVar1, uVar6);
                                    if (iVar1 != 0) {
                                       iVar1 = create_ssl_connection(local_40, local_48, 0);
                                       iVar1 = test_true("test/sslapitest.c", 0x2a27, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
                                       bVar7 = iVar1 != 0;
                                       goto LAB_00106cd6;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_00106cd4:bVar7 = false;
   LAB_00106cd6:SSL_free(local_40);
   SSL_free(local_48);
   SSL_CTX_free(local_50);
   SSL_CTX_free(local_58);
   EVP_PKEY_free(local_38);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar7;
}
long get_tmp_dh_params(void) {
   int iVar1;
   undefined4 uVar2;
   BIGNUM *a;
   EVP_PKEY_CTX *ctx;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (tmp_dh_params == 0) {
      ctx = (EVP_PKEY_CTX*)0x0;
      local_48 = 0;
      a = (BIGNUM*)BN_get_rfc3526_prime_2048(0);
      iVar1 = test_ptr("test/sslapitest.c", 0x2907, &_LC257, a);
      uVar4 = 0;
      if (iVar1 == 0) {
         LAB_0010722c:uVar3 = 0;
      }
 else {
         ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(libctx, &_LC258, 0);
         iVar1 = test_ptr("test/sslapitest.c", 0x290b, &_LC259, ctx);
         if (iVar1 == 0) goto LAB_0010722c;
         uVar2 = EVP_PKEY_fromdata_init(ctx);
         iVar1 = test_int_eq("test/sslapitest.c", 0x290c, "EVP_PKEY_fromdata_init(pctx)", &_LC49, uVar2, 1);
         if (iVar1 == 0) goto LAB_0010722c;
         uVar3 = OSSL_PARAM_BLD_new();
         iVar1 = test_ptr("test/sslapitest.c", 0x2910, &_LC261, uVar3);
         if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(uVar3, &_LC257, a);
            iVar1 = test_true("test/sslapitest.c", 0x2911, "OSSL_PARAM_BLD_push_BN(tmpl, OSSL_PKEY_PARAM_FFC_P, p)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = OSSL_PARAM_BLD_push_uint(uVar3, &_LC263, 2);
               iVar1 = test_true("test/sslapitest.c", 0x2914, "OSSL_PARAM_BLD_push_uint(tmpl, OSSL_PKEY_PARAM_FFC_G, 2)", iVar1 != 0);
               if (iVar1 != 0) {
                  uVar4 = OSSL_PARAM_BLD_to_param(uVar3);
                  iVar1 = test_ptr("test/sslapitest.c", 0x291a, "params", uVar4);
                  if (iVar1 != 0) {
                     uVar2 = EVP_PKEY_fromdata(ctx, &local_48, 0x84, uVar4);
                     iVar1 = test_int_eq("test/sslapitest.c", 0x291b, "EVP_PKEY_fromdata(pctx, &dhpkey, EVP_PKEY_KEY_PARAMETERS, params)", &_LC49, uVar2, 1);
                     if (iVar1 != 0) {
                        tmp_dh_params = local_48;
                     }

                  }

               }

            }

         }

      }

      BN_free(a);
      EVP_PKEY_CTX_free(ctx);
      OSSL_PARAM_BLD_free(uVar3);
      OSSL_PARAM_free(uVar4);
      lVar5 = tmp_dh_params;
      if (tmp_dh_params == 0) goto LAB_00107192;
   }

   iVar1 = EVP_PKEY_up_ref(tmp_dh_params);
   lVar5 = 0;
   if (iVar1 != 0) {
      lVar5 = tmp_dh_params;
   }

   LAB_00107192:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar5;
}
uint test_set_tmp_dh(uint param_1) {
   bool bVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   uint uVar5;
   undefined4 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   EVP_PKEY *pkey;
   dh_st *dh;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   dh = (dh_st*)0x0;
   pkey = (EVP_PKEY*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   if (param_1 - 5 < 4) {
      pkey = (EVP_PKEY*)get_tmp_dh_params();
      uVar5 = test_ptr("test/sslapitest.c", 0x296a, "dhpkey", pkey);
      if (uVar5 == 0) goto LAB_001075b0;
      if (param_1 - 7 < 2) {
         dh = EVP_PKEY_get1_DH(pkey);
         iVar4 = test_ptr("test/sslapitest.c", 0x2970, &_LC268, dh);
         if (iVar4 == 0) {
            uVar5 = 0;
            goto LAB_001075b0;
         }

      }

   }

   uVar3 = cert;
   uVar2 = privkey;
   uVar7 = TLS_client_method();
   uVar8 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar8, uVar7, 0, 0, &local_58, &local_60, uVar3, uVar2);
   iVar4 = test_true("test/sslapitest.c", 0x2975, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, 0, &sctx, &cctx, cert, privkey)");
   if (iVar4 != 0) {
      bVar1 = param_1 - 3 < 2;
      if (( param_1 & 1 ) != 0) {
         lVar9 = SSL_CTX_ctrl(local_58, 0x76, (ulong)bVar1, (void*)0x0);
         iVar4 = test_true("test/sslapitest.c", 0x297d, "SSL_CTX_set_dh_auto(sctx, dhauto)", lVar9 != 0);
         if (iVar4 == 0) {
            uVar5 = 0;
            goto LAB_001075b0;
         }

      }

      if (param_1 == 5) {
         iVar4 = SSL_CTX_set0_tmp_dh_pkey(local_58, pkey);
         iVar4 = test_true("test/sslapitest.c", 0x2982, "SSL_CTX_set0_tmp_dh_pkey(sctx, dhpkey)", iVar4 != 0);
         if (iVar4 != 0) {
            pkey = (EVP_PKEY*)0x0;
            goto LAB_0010775e;
         }

      }
 else {
         if (param_1 == 7) {
            lVar9 = SSL_CTX_ctrl(local_58, 3, 0, dh);
            iVar4 = test_true("test/sslapitest.c", 0x2988, "SSL_CTX_set_tmp_dh(sctx, dh)", lVar9 != 0);
            if (iVar4 == 0) {
               uVar5 = 0;
               goto LAB_001075b0;
            }

            LAB_0010775e:create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
            iVar4 = test_true("test/sslapitest.c", 0x298f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)");
            if (iVar4 == 0) {
               uVar5 = 0;
               goto LAB_001075b0;
            }

         }
 else {
            if (param_1 == 9) {
               SSL_CTX_set_tmp_dh_callback(local_58, tmp_dh_callback);
               goto LAB_0010775e;
            }

            create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
            iVar4 = test_true("test/sslapitest.c", 0x298f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)");
            if (iVar4 == 0) goto LAB_001075a8;
            if (( param_1 & 1 ) == 0) {
               if (param_1 != 0) {
                  SSL_ctrl(local_48, 0x76, (ulong)bVar1, (void*)0x0);
                  iVar4 = test_true("test/sslapitest.c", 0x2994, "SSL_set_dh_auto(serverssl, dhauto)");
                  if (iVar4 == 0) goto LAB_001075a8;
                  goto LAB_001076f9;
               }

            }
 else {
               LAB_001076f9:if (param_1 == 6) {
                  SSL_set0_tmp_dh_pkey(local_48, pkey);
                  iVar4 = test_true("test/sslapitest.c", 0x2998, "SSL_set0_tmp_dh_pkey(serverssl, dhpkey)");
                  if (iVar4 == 0) goto LAB_001075a8;
                  pkey = (EVP_PKEY*)0x0;
               }
 else if (param_1 == 8) {
                  SSL_ctrl(local_48, 3, 0, dh);
                  iVar4 = test_true("test/sslapitest.c", 0x299e, "SSL_set_tmp_dh(serverssl, dh)");
                  if (iVar4 == 0) {
                     uVar5 = 0;
                     goto LAB_001075b0;
                  }

               }
 else if (param_1 == 10) {
                  SSL_set_tmp_dh_callback(local_48, tmp_dh_callback);
               }

            }

         }

         SSL_ctrl(local_48, 0x7b, 0x303, (void*)0x0);
         iVar4 = test_true("test/sslapitest.c", 0x29a5, "SSL_set_min_proto_version(serverssl, TLS1_2_VERSION)");
         if (iVar4 != 0) {
            lVar9 = SSL_ctrl(local_48, 0x7c, 0x303, (void*)0x0);
            iVar4 = test_true("test/sslapitest.c", 0x29a6, "SSL_set_max_proto_version(serverssl, TLS1_2_VERSION)", lVar9 != 0);
            if (iVar4 != 0) {
               iVar4 = SSL_set_cipher_list(local_48, "DHE-RSA-AES128-SHA");
               iVar4 = test_true("test/sslapitest.c", 0x29a7, "SSL_set_cipher_list(serverssl, \"DHE-RSA-AES128-SHA\")", iVar4 != 0);
               if (iVar4 != 0) {
                  uVar6 = create_ssl_connection(local_48, local_50, 0);
                  iVar4 = test_int_eq("test/sslapitest.c", 0x29ae, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", "expected", uVar6, 2 < (int)param_1);
                  uVar5 = ( uint )(iVar4 != 0);
                  goto LAB_001075b0;
               }

            }

         }

      }

   }

   LAB_001075a8:uVar5 = 0;
   LAB_001075b0:DH_free(dh);
   SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   EVP_PKEY_free(pkey);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
dh_st *tmp_dh_callback(void) {
   int iVar1;
   EVP_PKEY *pkey;
   dh_st *dh;
   dh = (dh_st*)0x0;
   pkey = (EVP_PKEY*)get_tmp_dh_params();
   iVar1 = test_ptr("test/sslapitest.c", 0x2935, "dhpkey", pkey);
   if (iVar1 != 0) {
      dh = EVP_PKEY_get1_DH(pkey);
      DH_free(dh);
      EVP_PKEY_free(pkey);
   }

   return dh;
}
uint test_session_secret_cb(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   SSL_SESSION *session;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar5 = TLS_client_method();
   uVar6 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0, 0, &local_58, &local_60, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x28ba, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x28c2, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)");
      if (iVar3 != 0) {
         SSL_ctrl(local_50, 0x7b, 0x303, (void*)0x0);
         iVar3 = test_true("test/sslapitest.c", 0x28c7, "SSL_set_min_proto_version(clientssl, TLS1_2_VERSION)");
         if (iVar3 != 0) {
            lVar7 = SSL_ctrl(local_48, 0x7c, 0x303, (void*)0x0);
            iVar3 = test_true("test/sslapitest.c", 0x28c8, "SSL_set_max_proto_version(serverssl, TLS1_2_VERSION)", lVar7 != 0);
            if (iVar3 != 0) {
               iVar3 = create_ssl_connection(local_48, local_50, 0);
               iVar3 = test_true("test/sslapitest.c", 0x28cb, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
               if (iVar3 != 0) {
                  session = SSL_get1_session(local_50);
                  iVar3 = test_ptr("test/sslapitest.c", 0x28ce, "secret_sess = SSL_get1_session(clientssl)", session);
                  if (iVar3 != 0) {
                     shutdown_ssl_connection(local_48, local_50);
                     local_50 = (SSL*)0x0;
                     local_48 = (SSL*)0x0;
                     iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                     iVar3 = test_true("test/sslapitest.c", 0x28d5, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                     if (iVar3 != 0) {
                        SSL_SESSION_set1_id(session, 0, 0);
                        uVar4 = test_true("test/sslapitest.c", 0x28dd, "SSL_SESSION_set1_id(secret_sess, NULL, 0)");
                        if (uVar4 == 0) goto LAB_001079d9;
                        SSL_ctrl(local_50, 0x7b, 0x303, (void*)0x0);
                        iVar3 = test_true("test/sslapitest.c", 0x28e0, "SSL_set_min_proto_version(clientssl, TLS1_2_VERSION)");
                        if (iVar3 != 0) {
                           lVar7 = SSL_ctrl(local_48, 0x7c, 0x303, (void*)0x0);
                           iVar3 = test_true("test/sslapitest.c", 0x28e1, "SSL_set_max_proto_version(serverssl, TLS1_2_VERSION)", lVar7 != 0);
                           if (iVar3 != 0) {
                              iVar3 = SSL_set_session_secret_cb(local_48, secret_cb, (void*)0x0);
                              iVar3 = test_true("test/sslapitest.c", 0x28e2, "SSL_set_session_secret_cb(serverssl, secret_cb, NULL)", iVar3 != 0);
                              if (iVar3 != 0) {
                                 iVar3 = SSL_set_session_secret_cb(local_50, secret_cb, (void*)0x0);
                                 iVar3 = test_true("test/sslapitest.c", 0x28e4, "SSL_set_session_secret_cb(clientssl, secret_cb, NULL)", iVar3 != 0);
                                 if (iVar3 != 0) {
                                    iVar3 = SSL_set_session(local_50, session);
                                    iVar3 = test_true("test/sslapitest.c", 0x28e6, "SSL_set_session(clientssl, secret_sess)", iVar3 != 0);
                                    if (iVar3 != 0) {
                                       iVar3 = create_ssl_connection(local_48, local_50, 0);
                                       iVar3 = test_true("test/sslapitest.c", 0x28e9, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                                       uVar4 = ( uint )(iVar3 != 0);
                                       goto LAB_001079d9;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

                  uVar4 = 0;
                  goto LAB_001079d9;
               }

            }

         }

      }

   }

   uVar4 = 0;
   session = (SSL_SESSION*)0x0;
   LAB_001079d9:SSL_SESSION_free(session);
   SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_ssl_dup(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   SSL *ssl;
   BIO *pBVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   SSL_CTX *local_50;
   SSL_CTX *local_48;
   SSL *local_40;
   SSL *local_38;
   long local_30;
   uVar2 = cert;
   uVar1 = privkey;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL_CTX*)0x0;
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL*)0x0;
   local_38 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0, 0, &local_48, &local_50, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x2864, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x286b, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)");
      if (iVar3 != 0) {
         SSL_ctrl(local_40, 0x7b, 0x303, (void*)0x0);
         iVar3 = test_true("test/sslapitest.c", 0x286f, "SSL_set_min_proto_version(clientssl, TLS1_2_VERSION)");
         if (iVar3 != 0) {
            lVar6 = SSL_ctrl(local_40, 0x7c, 0x303, (void*)0x0);
            iVar3 = test_true("test/sslapitest.c", 0x2870, "SSL_set_max_proto_version(clientssl, TLS1_2_VERSION)", lVar6 != 0);
            if (iVar3 != 0) {
               ssl = SSL_dup(local_40);
               pBVar7 = SSL_get_rbio(local_40);
               iVar3 = test_ptr("test/sslapitest.c", 0x2875, &_LC284, pBVar7);
               if (iVar3 != 0) {
                  iVar3 = BIO_up_ref(pBVar7);
                  iVar3 = test_true("test/sslapitest.c", 0x2876, "BIO_up_ref(rbio)", iVar3 != 0);
                  if (iVar3 != 0) {
                     SSL_set0_rbio(ssl, pBVar7);
                     pBVar7 = SSL_get_wbio(local_40);
                     iVar3 = test_ptr("test/sslapitest.c", 0x287c, &_LC286, pBVar7);
                     if (iVar3 != 0) {
                        iVar3 = BIO_up_ref(pBVar7);
                        iVar3 = test_true("test/sslapitest.c", 0x287c, "BIO_up_ref(wbio)", iVar3 != 0);
                        if (iVar3 != 0) {
                           SSL_set0_wbio(ssl, pBVar7);
                           iVar3 = test_ptr("test/sslapitest.c", 0x2881, "client2ssl", ssl);
                           if (iVar3 != 0) {
                              iVar3 = test_ptr_ne("test/sslapitest.c", 0x2883, "clientssl", "client2ssl", local_40, ssl);
                              if (iVar3 != 0) {
                                 uVar8 = SSL_ctrl(ssl, 0x82, 0, (void*)0x0);
                                 iVar3 = test_int_eq("test/sslapitest.c", 0x2886, "SSL_get_min_proto_version(client2ssl)", "TLS1_2_VERSION", uVar8 & 0xffffffff, 0x303);
                                 if (iVar3 != 0) {
                                    uVar8 = SSL_ctrl(ssl, 0x83, 0, (void*)0x0);
                                    iVar3 = test_int_eq("test/sslapitest.c", 0x2887, "SSL_get_max_proto_version(client2ssl)", "TLS1_2_VERSION", uVar8 & 0xffffffff, 0x303);
                                    if (iVar3 != 0) {
                                       iVar3 = create_ssl_connection(local_38, ssl, 0);
                                       iVar3 = test_true("test/sslapitest.c", 0x288a, "create_ssl_connection(serverssl, client2ssl, SSL_ERROR_NONE)", iVar3 != 0);
                                       if (iVar3 != 0) {
                                          SSL_free(local_40);
                                          local_40 = SSL_dup(ssl);
                                          iVar3 = test_ptr("test/sslapitest.c", 0x288f, "clientssl", local_40);
                                          if (iVar3 != 0) {
                                             iVar3 = test_ptr_eq("test/sslapitest.c", 0x2891, "clientssl", "client2ssl", local_40, ssl);
                                             bVar9 = iVar3 != 0;
                                             goto LAB_00107e16;
                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

               bVar9 = false;
               goto LAB_00107e16;
            }

         }

      }

   }

   bVar9 = false;
   ssl = (SSL*)0x0;
   LAB_00107e16:SSL_free(local_38);
   SSL_free(local_40);
   SSL_free(ssl);
   SSL_CTX_free(local_48);
   SSL_CTX_free(local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_pluggable_group(int param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char *parg;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 uVar9;
   long in_FS_OFFSET;
   bool bVar10;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar3 = OSSL_PROVIDER_load(libctx, "tls-provider");
   uVar4 = OSSL_PROVIDER_load(libctx, "legacy");
   parg = "xorkemgroup";
   if (param_1 != 0) {
      parg = "xorgroup";
   }

   iVar2 = test_ptr("test/sslapitest.c", 0x278a, "tlsprov", uVar3);
   uVar1 = cert;
   uVar9 = privkey;
   if (iVar2 != 0) {
      uVar5 = TLS_client_method();
      uVar6 = TLS_server_method();
      iVar2 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x304, 0x304, &local_58, &local_60, uVar1, uVar9);
      iVar2 = test_true("test/sslapitest.c", 0x278d, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, TLS1_3_VERSION, &sctx, &cctx, cert, privkey)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x2792, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
         if (iVar2 != 0) {
            lVar7 = SSL_ctrl(local_48, 0x5c, 0, "xorgroup:xorkemgroup:dummy1:dummy2:dummy3:dummy4:dummy5:dummy6:dummy7:dummy8:dummy9:dummy10:dummy11:dummy12:dummy13:dummy14:dummy15:dummy16:dummy17:dummy18:dummy19:dummy20:dummy21:dummy22:dummy23:dummy24:dummy25:dummy26:dummy27:dummy28:dummy29:dummy30:dummy31:dummy32:dummy33:dummy34:dummy35:dummy36:dummy37:dummy38:dummy39:dummy40:dummy41:dummy42:dummy43");
            iVar2 = test_true("test/sslapitest.c", 0x2797, "SSL_set1_groups_list(serverssl, \"xorgroup:xorkemgroup:dummy1:dummy2:dummy3:dummy4:dummy5:dummy6:dummy7:dummy8:dummy9:dummy10:dummy11:dummy12:dummy13:dummy14:dummy15:dummy16:dummy17:dummy18:dummy19:dummy20:dummy21:dummy22:dummy23:dummy24:dummy25:dummy26:dummy27:dummy28:dummy29:dummy30:dummy31:dummy32:dummy33:dummy34:dummy35:dummy36:dummy37:dummy38:dummy39:dummy40:dummy41:dummy42:dummy43\")", lVar7 != 0);
            if (iVar2 != 0) {
               lVar7 = SSL_ctrl(local_50, 0x5c, 0, parg);
               iVar2 = test_true("test/sslapitest.c", 0x2799, "SSL_set1_groups_list(clientssl, group_name)", lVar7 != 0);
               if (iVar2 != 0) {
                  create_ssl_connection(local_48, local_50, 0);
                  iVar2 = test_true("test/sslapitest.c", 0x279c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
                  if (iVar2 != 0) {
                     uVar8 = SSL_ctrl(local_48, 0x5d, 0, (void*)0x0);
                     uVar9 = SSL_group_to_name(local_48, uVar8 & 0xffffffff);
                     iVar2 = test_str_eq("test/sslapitest.c", 0x279f, "group_name", "SSL_group_to_name(serverssl, SSL_get_shared_group(serverssl, 0))", parg, uVar9);
                     if (iVar2 != 0) {
                        uVar9 = SSL_get0_group_name(local_48);
                        iVar2 = test_str_eq("test/sslapitest.c", 0x27a3, "group_name", "SSL_get0_group_name(serverssl)", parg, uVar9);
                        if (iVar2 != 0) {
                           uVar9 = SSL_get0_group_name(local_50);
                           iVar2 = test_str_eq("test/sslapitest.c", 0x27a4, "group_name", "SSL_get0_group_name(clientssl)", parg, uVar9);
                           bVar10 = iVar2 != 0;
                           goto LAB_00108202;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar10 = false;
   LAB_00108202:SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   OSSL_PROVIDER_unload(uVar3);
   OSSL_PROVIDER_unload(uVar4);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int test_sigalgs_available(int param_1) {
   char *pcVar1;
   int iVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   int iVar11;
   char *pcVar12;
   int iVar13;
   long in_FS_OFFSET;
   undefined4 local_70;
   undefined4 local_6c;
   SSL_CTX *local_68;
   SSL_CTX *local_60;
   SSL *local_58;
   SSL *local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL*)0x0;
   local_50 = (SSL*)0x0;
   uVar4 = OSSL_LIB_CTX_new();
   uVar5 = libctx;
   iVar2 = test_ptr("test/sslapitest.c", 0x26de, "tmpctx", uVar4);
   if (iVar2 == 0) {
      LAB_00108546:uVar9 = 0;
      iVar2 = 0;
   }
 else {
      uVar10 = uVar5;
      if (( param_1 == 0 ) || ( param_1 == 3 )) {
         uVar9 = 0;
         uVar7 = uVar5;
         LAB_001085b6:uVar5 = TLS_client_method();
         local_68 = (SSL_CTX*)SSL_CTX_new_ex(uVar10, 0, uVar5);
         uVar5 = TLS_server_method();
         local_60 = (SSL_CTX*)SSL_CTX_new_ex(uVar7, 0, uVar5);
         iVar2 = test_ptr("test/sslapitest.c", 0x2709, &_LC246, local_68);
         if (( iVar2 != 0 ) && ( iVar2 = test_ptr("test/sslapitest.c", 0x2709, &_LC113, local_60) ),iVar2 != 0) {
            lVar6 = SSL_CTX_ctrl(local_68, 0x5c, 0, "?X25519:?secp256r1:?ffdhe2048:?ffdhe3072");
            iVar2 = test_true("test/sslapitest.c", 0x270d, "SSL_CTX_set1_groups_list(cctx, \"?X25519:?secp256r1:?ffdhe2048:?ffdhe3072\")", lVar6 != 0);
            if (iVar2 != 0) {
               lVar6 = SSL_CTX_ctrl(local_60, 0x5c, 0, "?X25519:?secp256r1:?ffdhe2048:?ffdhe3072");
               iVar2 = test_true("test/sslapitest.c", 9999, "SSL_CTX_set1_groups_list(sctx, \"?X25519:?secp256r1:?ffdhe2048:?ffdhe3072\")", lVar6 != 0);
               uVar10 = cert;
               uVar5 = privkey;
               pcVar1 = cert2;
               pcVar12 = privkey2;
               if (iVar2 != 0) {
                  if (param_1 == 5) {
                     uVar5 = TLS_client_method();
                     uVar10 = TLS_server_method();
                     iVar2 = create_ssl_ctx_pair(libctx, uVar10, uVar5, 0x301, 0, &local_60, &local_68, pcVar1, pcVar12);
                     iVar2 = test_true("test/sslapitest.c", 0x271d, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert2, privkey2)", iVar2 != 0);
                     if (iVar2 != 0) {
                        LAB_00108bb8:iVar2 = SSL_CTX_set_cipher_list(local_68, "ECDHE-ECDSA-AES128-GCM-SHA256");
                        iVar2 = test_true("test/sslapitest.c", 0x272b, "SSL_CTX_set_cipher_list(cctx, \"ECDHE-ECDSA-AES128-GCM-SHA256\")", iVar2 != 0);
                        if (iVar2 != 0) {
                           LAB_00108bec:lVar6 = SSL_CTX_ctrl(local_68, 0x62, 0, "rsa_pss_rsae_sha256:ECDSA+SHA256");
                           if (( lVar6 != 0 ) && ( lVar6 = SSL_CTX_ctrl(local_60, 0x62, 0, "rsa_pss_rsae_sha256:ECDSA+SHA256") ),lVar6 != 0) {
                              if (param_1 == 5) {
                                 LAB_00108858:iVar2 = create_ssl_objects(local_60, local_68, &local_50, &local_58, 0, 0);
                                 iVar2 = test_true("test/sslapitest.c", 0x2749, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                                 if (iVar2 != 0) {
                                    iVar2 = create_ssl_connection(local_50, local_58, 0);
                                    uVar5 = test_true("test/sslapitest.c", 0x274d, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                                    if ((int)uVar5 != 0) {
                                       uVar3 = SSL_get_shared_sigalgs(local_50, 0, &local_70, &local_6c, 0, 0, 0, uVar5);
                                       if (param_1 == 3) {
                                          pcVar12 = "rsa_pss_rsae_sha256";
                                          iVar13 = 0x390;
                                          iVar11 = 0x2a0;
                                          iVar2 = 2;
                                       }
 else if (param_1 < 4) {
                                          pcVar12 = "rsa_pss_rsae_sha384";
                                          iVar13 = 0x390;
                                          if (param_1 != 0) {
                                             pcVar12 = "rsa_pss_rsae_sha256";
                                          }

                                          iVar11 = 0x2a1 - ( uint )(param_1 != 0);
                                          iVar2 = 2 - ( uint )(param_1 != 0);
                                       }
 else {
                                          pcVar12 = "rsa_pss_rsae_sha256";
                                          iVar11 = 0x2a0;
                                          iVar2 = 1;
                                          if (param_1 - 4U < 2) {
                                             pcVar12 = "ecdsa_secp256r1_sha256";
                                          }

                                          iVar13 = ( -(uint)(param_1 - 4U < 2) & 0xfffffe08 ) + 0x390;
                                       }

                                       iVar2 = test_int_eq("test/sslapitest.c", 0x2765, "numshared", "numshared_expected", uVar3, iVar2);
                                       if (( ( iVar2 != 0 ) && ( iVar2 = test_int_eq("test/sslapitest.c", 0x2766, &_LC337, "hash_expected", local_6c, iVar11) ),iVar2 != 0 )) {
                                          lVar6 = SSL_ctrl(local_58, 0x8d, 0, &local_48);
                                          iVar2 = test_true("test/sslapitest.c", 0x2768, "SSL_get0_peer_signature_name(clientssl, &sigalg_name)", lVar6 != 0);
                                          if (( ( iVar2 != 0 ) && ( iVar2 = test_ptr("test/sslapitest.c", 0x2769, "sigalg_name", local_48) ),iVar2 != 0 )) {
                                             iVar2 = filter_provider_check_clean_finish();
                                             goto LAB_0010854c;
                                          }

                                       }

                                    }

                                 }

                              }
 else {
                                 LAB_001087a3:iVar2 = SSL_CTX_use_certificate_file(local_60, cert2, 1);
                                 iVar2 = test_int_eq("test/sslapitest.c", 0x2741, "SSL_CTX_use_certificate_file(sctx, cert2, SSL_FILETYPE_PEM)", &_LC49, iVar2, 1);
                                 if (iVar2 != 0) {
                                    iVar2 = SSL_CTX_use_PrivateKey_file(local_60, privkey2, 1);
                                    iVar2 = test_int_eq("test/sslapitest.c", 0x2743, "SSL_CTX_use_PrivateKey_file(sctx, privkey2, SSL_FILETYPE_PEM)", &_LC49, iVar2, 1);
                                    if (iVar2 != 0) {
                                       iVar2 = SSL_CTX_check_private_key(local_60);
                                       iVar2 = test_int_eq("test/sslapitest.c", 0x2746, "SSL_CTX_check_private_key(sctx)", &_LC49, iVar2, 1);
                                       if (iVar2 != 0) goto LAB_00108858;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }
 else {
                     uVar7 = TLS_client_method();
                     uVar8 = TLS_server_method();
                     iVar2 = create_ssl_ctx_pair(libctx, uVar8, uVar7, 0x301, 0, &local_60, &local_68, uVar10, uVar5);
                     iVar2 = test_true("test/sslapitest.c", 0x2715, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar2 != 0);
                     if (iVar2 != 0) {
                        if (3 < param_1) goto LAB_00108bb8;
                        iVar2 = SSL_CTX_set_cipher_list(local_68, "ECDHE-RSA-AES128-GCM-SHA256");
                        iVar2 = test_true("test/sslapitest.c", 0x2727, "SSL_CTX_set_cipher_list(cctx, \"ECDHE-RSA-AES128-GCM-SHA256\")", iVar2 != 0);
                        if (iVar2 != 0) {
                           if (param_1 == 3) goto LAB_00108bec;
                           lVar6 = SSL_CTX_ctrl(local_68, 0x62, 0, "rsa_pss_rsae_sha384:rsa_pss_rsae_sha256");
                           if (( lVar6 != 0 ) && ( lVar6 = SSL_CTX_ctrl(local_60, 0x62, 0, "rsa_pss_rsae_sha384:rsa_pss_rsae_sha256") ),lVar6 != 0) goto LAB_001087a3;
                        }

                     }

                  }

               }

            }

         }

      }
 else {
         iVar2 = OSSL_PROVIDER_add_builtin(uVar4, "filter", &filter_provider_init);
         iVar2 = test_true("test/sslapitest.c", 0x26e2, "OSSL_PROVIDER_add_builtin(tmpctx, \"filter\", filter_provider_init)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_00108546;
         uVar9 = OSSL_PROVIDER_load(uVar4, "filter");
         iVar2 = test_ptr("test/sslapitest.c", 0x26e7, "filterprov", uVar9);
         if (iVar2 != 0) {
            if (param_1 < 3) {
               iVar2 = filter_provider_set_filter(1, "SHA2-256:SHA1");
               iVar2 = test_true("test/sslapitest.c", 0x26f1, "filter_provider_set_filter(OSSL_OP_DIGEST, \"SHA2-256:SHA1\")", iVar2 != 0);
               if (iVar2 == 0) goto LAB_0010854c;
               LAB_00108ab1:if (( param_1 == 1 ) || ( uVar7 = param_1 == 4 )) {
                  uVar10 = uVar4;
                  uVar7 = uVar5;
               }

               goto LAB_001085b6;
            }

            iVar2 = filter_provider_set_filter(0xc, "ECDSA");
            iVar2 = test_true("test/sslapitest.c", 0x26f5, "filter_provider_set_filter(OSSL_OP_SIGNATURE, \"ECDSA\")", iVar2 != 0);
            if (iVar2 != 0) {
               iVar2 = filter_provider_set_filter(10, "EC:X25519:X448");
               iVar2 = test_true("test/sslapitest.c", 0x26fa, "filter_provider_set_filter(OSSL_OP_KEYMGMT, \"EC:X25519:X448\")", iVar2 != 0);
               if (iVar2 != 0) goto LAB_00108ab1;
            }

         }

      }

      iVar2 = 0;
   }

   LAB_0010854c:SSL_free(local_50);
   SSL_free(local_58);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_68);
   OSSL_PROVIDER_unload(uVar9);
   OSSL_LIB_CTX_free(uVar4);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
uint hostname_cb(SSL *param_1) {
   uint uVar1;
   int iVar2;
   char *__s1;
   __s1 = SSL_get_servername(param_1, 0);
   if (__s1 != (char*)0x0) {
      uVar1 = strcmp(__s1, "goodhost");
      if (uVar1 != 0) {
         iVar2 = strcmp(__s1, "altgoodhost");
         uVar1 = -(uint)(iVar2 != 0) & 3;
      }

      return uVar1;
   }

   return 3;
}
bool test_servername(uint param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   char *pcVar6;
   SSL_SESSION *session;
   char *pcVar7;
   char *pcVar8;
   undefined8 uVar9;
   char *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar1 = cert;
   uVar9 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, ( 4 < (int)param_1 ) + 0x303, &local_58, &local_60, uVar1, uVar9);
   iVar2 = test_true("test/sslapitest.c", 0x25e7, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, (tst <= 4) ? TLS1_2_VERSION : TLS1_3_VERSION, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 != 0) {
      iVar2 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 0x25ed, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 != 0) {
         if (( param_1 == 1 ) || ( param_1 == 6 )) {
            LAB_00108e71:pcVar10 = "goodhost";
            lVar5 = SSL_ctrl(local_50, 0x37, 0, "goodhost");
            iVar2 = test_true("test/sslapitest.c", 0x25f8, "SSL_set_tlsext_host_name(clientssl, \"goodhost\")", lVar5 != 0);
            if (iVar2 != 0) {
               LAB_00108eb0:iVar2 = create_ssl_connection(local_48, local_50, 0);
               iVar2 = test_true("test/sslapitest.c", 0x25fd, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
               if (iVar2 != 0) {
                  pcVar6 = SSL_get_servername(local_50, 0);
                  iVar2 = test_str_eq("test/sslapitest.c", 0x2600, "SSL_get_servername(clientssl, TLSEXT_NAMETYPE_host_name)", "cexpectedhost", pcVar6, pcVar10);
                  if (iVar2 != 0) {
                     pcVar6 = SSL_get_servername(local_48, 0);
                     iVar2 = test_str_eq("test/sslapitest.c", 0x2602, "SSL_get_servername(serverssl, TLSEXT_NAMETYPE_host_name)", "sexpectedhost", pcVar6, pcVar10);
                     if (iVar2 != 0) {
                        iVar2 = SSL_shutdown(local_50);
                        iVar2 = test_int_eq("test/sslapitest.c", 0x2609, "SSL_shutdown(clientssl)", &_LC15, iVar2, 0);
                        if (iVar2 != 0) {
                           session = SSL_get1_session(local_50);
                           iVar2 = test_ptr_ne("test/sslapitest.c", 0x260a, "sess = SSL_get1_session(clientssl)", &_LC352, session, 0);
                           if (iVar2 != 0) {
                              iVar2 = SSL_SESSION_is_resumable(session);
                              iVar2 = test_true("test/sslapitest.c", 0x260b, "SSL_SESSION_is_resumable(sess)", iVar2 != 0);
                              if (iVar2 != 0) {
                                 iVar2 = SSL_shutdown(local_48);
                                 iVar2 = test_int_eq("test/sslapitest.c", 0x260c, "SSL_shutdown(serverssl)", &_LC15, iVar2, 0);
                                 if (iVar2 != 0) {
                                    SSL_free(local_50);
                                    SSL_free(local_48);
                                    local_48 = (SSL*)0x0;
                                    local_50 = (SSL*)0x0;
                                    iVar2 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                                    iVar2 = test_true("test/sslapitest.c", 0x2613, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                                    if (iVar2 != 0) {
                                       iVar2 = SSL_set_session(local_50, session);
                                       iVar2 = test_true("test/sslapitest.c", 0x2617, "SSL_set_session(clientssl, sess)", iVar2 != 0);
                                       if (iVar2 != 0) {
                                          if (( param_1 == 2 ) || ( param_1 == 7 )) {
                                             lVar5 = SSL_ctrl(local_50, 0x37, 0, "altgoodhost");
                                             iVar2 = test_true("test/sslapitest.c", 0x261d, "SSL_set_tlsext_host_name(clientssl, \"altgoodhost\")", lVar5 != 0);
                                             if (iVar2 != 0) {
                                                pcVar10 = "goodhost";
                                                if (param_1 == 7) {
                                                   pcVar10 = "altgoodhost";
                                                }

                                                pcVar7 = SSL_get_servername(local_50, 0);
                                                pcVar6 = "altgoodhost";
                                                uVar9 = 0x2626;
                                                pcVar8 = "\"altgoodhost\"";
                                                goto LAB_0010932b;
                                             }

                                          }
 else if (( param_1 == 4 ) || ( param_1 == 9 )) {
                                             pcVar10 = "goodhost";
                                             if (param_1 == 9) {
                                                pcVar10 = (char*)0x0;
                                             }

                                             pcVar7 = SSL_get_servername(local_50, 0);
                                             pcVar8 = "cexpectedhost";
                                             uVar9 = 0x2632;
                                             pcVar6 = pcVar10;
                                             LAB_0010932b:iVar2 = test_str_eq("test/sslapitest.c", uVar9, "SSL_get_servername(clientssl, TLSEXT_NAMETYPE_host_name)", pcVar8, pcVar7, pcVar6);
                                             pcVar6 = pcVar10;
                                             if (iVar2 != 0) {
                                                LAB_001091d4:iVar2 = create_ssl_connection(local_48, local_50, 0);
                                                iVar2 = test_true("test/sslapitest.c", 0x264b, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                                                if (iVar2 != 0) {
                                                   iVar2 = SSL_session_reused(local_50);
                                                   iVar2 = test_true("test/sslapitest.c", 0x264e, "SSL_session_reused(clientssl)", iVar2 != 0);
                                                   if (iVar2 != 0) {
                                                      iVar2 = SSL_session_reused(local_48);
                                                      iVar2 = test_true("test/sslapitest.c", 0x264f, "SSL_session_reused(serverssl)", iVar2 != 0);
                                                      if (iVar2 != 0) {
                                                         pcVar7 = SSL_get_servername(local_50, 0);
                                                         iVar2 = test_str_eq("test/sslapitest.c", 0x2650, "SSL_get_servername(clientssl, TLSEXT_NAMETYPE_host_name)", "cexpectedhost", pcVar7, pcVar6);
                                                         if (iVar2 != 0) {
                                                            pcVar6 = SSL_get_servername(local_48, 0);
                                                            iVar2 = test_str_eq("test/sslapitest.c", 0x2653, "SSL_get_servername(serverssl, TLSEXT_NAMETYPE_host_name)", "sexpectedhost", pcVar6, pcVar10);
                                                            bVar11 = iVar2 != 0;
                                                            goto LAB_00108dc0;
                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }
 else {
                                             lVar5 = SSL_ctrl(local_50, 0x37, 0, "goodhost");
                                             iVar2 = test_true("test/sslapitest.c", 0x2637, "SSL_set_tlsext_host_name(clientssl, \"goodhost\")", lVar5 != 0);
                                             if (iVar2 != 0) {
                                                pcVar10 = (char*)0x0;
                                                if (( param_1 & 0xfffffffd ) != 1) {
                                                   pcVar10 = "goodhost";
                                                }

                                                pcVar6 = SSL_get_servername(local_50, 0);
                                                iVar2 = test_str_eq("test/sslapitest.c", 0x2645, "SSL_get_servername(clientssl, TLSEXT_NAMETYPE_host_name)", "\"goodhost\"", pcVar6, "goodhost");
                                                if (iVar2 != 0) {
                                                   pcVar6 = "goodhost";
                                                   goto LAB_001091d4;
                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                           bVar11 = false;
                           goto LAB_00108dc0;
                        }

                     }

                  }

               }

            }

         }
 else {
            lVar5 = SSL_CTX_callback_ctrl(local_58, 0x35, hostname_cb);
            iVar2 = test_true("test/sslapitest.c", 0x25f2, "SSL_CTX_set_tlsext_servername_callback(sctx, hostname_cb)", lVar5 != 0);
            if (iVar2 != 0) {
               if (( param_1 != 3 ) && ( param_1 != 8 )) goto LAB_00108e71;
               pcVar10 = (char*)0x0;
               goto LAB_00108eb0;
            }

         }

      }

   }

   session = (SSL_SESSION*)0x0;
   bVar11 = false;
   LAB_00108dc0:SSL_SESSION_free(session);
   SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar11;
}
bool test_multiblock_write(int param_1) {
   char *str;
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   undefined1 *puVar5;
   long in_FS_OFFSET;
   bool bVar6;
   SSL_CTX *local_2478;
   SSL_CTX *local_2470;
   SSL *local_2468;
   SSL *local_2460;
   long local_2458;
   long local_2450;
   uchar local_2448[4608];
   undefined1 local_1248[4616];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   str = *(char**)( multiblock_cipherlist_data + (long)param_1 * 8 );
   uVar2 = TLS_server_method();
   uVar3 = TLS_client_method();
   local_2478 = (SSL_CTX*)0x0;
   local_2470 = (SSL_CTX*)0x0;
   local_2468 = (SSL*)0x0;
   local_2460 = (SSL*)0x0;
   lVar4 = EVP_CIPHER_fetch(libctx, *(undefined8*)( fetchable_ciphers_13 + (long)param_1 * 8 ), &_LC359);
   if (lVar4 == 0) {
      bVar6 = true;
      test_skip("test/sslapitest.c", 0x24a2, "Multiblock cipher is not available for %s", str);
      goto LAB_0010950f;
   }

   EVP_CIPHER_free(lVar4);
   RAND_bytes(local_2448, 0x1200);
   create_ssl_ctx_pair(libctx, uVar2, uVar3, 0x301, 0x303, &local_2470, &local_2478, cert, privkey);
   iVar1 = test_true("test/sslapitest.c", 0x24aa, "create_ssl_ctx_pair(libctx, smeth, cmeth, min_version, max_version, &sctx, &cctx, cert, privkey)");
   if (iVar1 == 0) {
      LAB_001094e5:bVar6 = false;
   }
 else {
      lVar4 = SSL_CTX_ctrl(local_2470, 0x34, 0x200, (void*)0x0);
      iVar1 = test_true("test/sslapitest.c", 0x24af, "SSL_CTX_set_max_send_fragment(sctx, MULTIBLOCK_FRAGSIZE)", lVar4 != 0);
      if (iVar1 == 0) goto LAB_001094e5;
      iVar1 = create_ssl_objects(local_2470, local_2478, &local_2460, &local_2468, 0, 0);
      iVar1 = test_true("test/sslapitest.c", 0x24b2, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_001094e5;
      SSL_set_options(local_2460, 0x80000);
      iVar1 = SSL_CTX_set_cipher_list(local_2478, str);
      iVar1 = test_true("test/sslapitest.c", 0x24b8, "SSL_CTX_set_cipher_list(cctx, cipherlist)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_001094e5;
      iVar1 = create_ssl_connection(local_2460, local_2468, 0);
      iVar1 = test_true("test/sslapitest.c", 0x24bb, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_001094e5;
      iVar1 = SSL_write_ex(local_2460, local_2448, 0x1200, &local_2450);
      iVar1 = test_true("test/sslapitest.c", 0x24be, "SSL_write_ex(serverssl, msg, sizeof(msg), &written)", iVar1 != 0);
      if (( iVar1 == 0 ) || ( iVar1 = test_size_t_eq("test/sslapitest.c", 0x24bf, "written", "sizeof(msg)", local_2450, 0x1200) ),iVar1 == 0) goto LAB_001094e5;
      puVar5 = local_1248;
      for (lVar4 = local_2450; lVar4 != 0; lVar4 = lVar4 - local_2458) {
         iVar1 = SSL_read_ex(local_2468, puVar5, 0x200, &local_2458);
         iVar1 = test_true("test/sslapitest.c", 0x24c4, "SSL_read_ex(clientssl, p, MULTIBLOCK_FRAGSIZE, &readbytes)", iVar1 != 0);
         if (iVar1 == 0) goto LAB_001094e5;
         puVar5 = puVar5 + local_2458;
      }

      iVar1 = test_mem_eq("test/sslapitest.c", 0x24c9, &_LC72, &_LC80, local_2448, 0x1200, local_1248, 0x1200);
      bVar6 = iVar1 != 0;
   }

   SSL_free(local_2460);
   SSL_free(local_2468);
   SSL_CTX_free(local_2470);
   SSL_CTX_free(local_2478);
   LAB_0010950f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_ca_names_int(int param_1, uint param_2) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   X509_NAME *pXVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   X509_NAME *pXVar9;
   stack_st_X509_NAME *name_list;
   stack_st_X509_NAME *name_list_00;
   char **ppcVar10;
   long lVar11;
   long in_FS_OFFSET;
   SSL_CTX *local_a8;
   SSL_CTX *local_a0;
   SSL *local_98;
   SSL *local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   char *local_68[5];
   long local_40;
   lVar11 = 0;
   ppcVar10 = (char**)local_88;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_a8 = (SSL_CTX*)0x0;
   local_68[0] = "Jack";
   local_68[1] = "Jill";
   local_a0 = (SSL_CTX*)0x0;
   local_98 = (SSL*)0x0;
   local_90 = (SSL*)0x0;
   local_68[2] = "John";
   local_68[3] = "Joanne";
   do {
      pXVar4 = X509_NAME_new();
      ppcVar10[lVar11] = (char*)pXVar4;
      iVar1 = test_ptr("test/sslapitest.c", 0x2403, "name[i]", pXVar4);
      if (iVar1 == 0) goto LAB_0010992d;
      iVar1 = X509_NAME_add_entry_by_txt(pXVar4, "CN", 0x1001, (uchar*)local_68[lVar11], -1, -1, 0);
      iVar1 = test_true("test/sslapitest.c", 0x2404, "X509_NAME_add_entry_by_txt(name[i], \"CN\", MBSTRING_ASC, (unsigned char *) strnames[i], -1, -1, 0)", iVar1 != 0);
      uVar7 = cert;
      uVar8 = privkey;
      if (iVar1 == 0) goto LAB_0010992d;
      lVar11 = lVar11 + 1;
   }
 while ( lVar11 != 4 );
   uVar5 = TLS_client_method();
   uVar6 = TLS_server_method();
   iVar1 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, param_1, &local_a0, &local_a8, uVar7, uVar8);
   iVar1 = test_true("test/sslapitest.c", 0x240c, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, prot, &sctx, &cctx, cert, privkey)", iVar1 != 0);
   uVar8 = local_88._0_8_;
   if (iVar1 == 0) {
      LAB_0010992d:name_list_00 = (stack_st_X509_NAME*)0x0;
      name_list = (stack_st_X509_NAME*)0x0;
   }
 else {
      SSL_CTX_set_verify(local_a0, 1, (callback*)0x0);
      if (param_2 < 2) {
         name_list = (stack_st_X509_NAME*)OPENSSL_sk_new_null();
         iVar1 = test_ptr("test/sslapitest.c", 0x2416, "sk1 = sk_X509_NAME_new_null()", name_list);
         if (iVar1 != 0) {
            pXVar4 = X509_NAME_dup((X509_NAME*)uVar8);
            iVar1 = OPENSSL_sk_push(name_list, pXVar4);
            iVar1 = test_true("test/sslapitest.c", 0x2417, "sk_X509_NAME_push(sk1, X509_NAME_dup(name[0]))", iVar1 != 0);
            if (iVar1 != 0) {
               uVar7 = local_88._8_8_;
               pXVar4 = X509_NAME_dup((X509_NAME*)local_88._8_8_);
               iVar1 = OPENSSL_sk_push(name_list, pXVar4);
               name_list_00 = (stack_st_X509_NAME*)0x0;
               uVar3 = test_true("test/sslapitest.c", 0x2418, "sk_X509_NAME_push(sk1, X509_NAME_dup(name[1]))", iVar1 != 0);
               if (uVar3 == 0) goto LAB_00109935;
               name_list_00 = (stack_st_X509_NAME*)OPENSSL_sk_new_null();
               uVar3 = test_ptr("test/sslapitest.c", 0x2419, "sk2 = sk_X509_NAME_new_null()", name_list_00);
               if (uVar3 == 0) goto LAB_00109935;
               pXVar4 = X509_NAME_dup((X509_NAME*)uVar8);
               iVar1 = OPENSSL_sk_push(name_list_00, pXVar4);
               uVar3 = test_true("test/sslapitest.c", 0x241a, "sk_X509_NAME_push(sk2, X509_NAME_dup(name[0]))", iVar1 != 0);
               if (uVar3 == 0) goto LAB_00109935;
               pXVar4 = X509_NAME_dup((X509_NAME*)uVar7);
               iVar1 = OPENSSL_sk_push(name_list_00, pXVar4);
               uVar3 = test_true("test/sslapitest.c", 0x241b, "sk_X509_NAME_push(sk2, X509_NAME_dup(name[1]))", iVar1 != 0);
               if (uVar3 == 0) goto LAB_00109935;
               SSL_CTX_set0_CA_list(local_a0, name_list);
               SSL_CTX_set0_CA_list(local_a8, name_list_00);
               goto LAB_001099dc;
            }

         }

         name_list_00 = (stack_st_X509_NAME*)0x0;
         uVar3 = 0;
         goto LAB_00109935;
      }

      LAB_001099dc:if (1 < param_2 - 1) {
         LAB_001099ec:iVar1 = create_ssl_objects(local_a0, local_a8, &local_90, &local_98, 0, 0);
         iVar1 = test_true("test/sslapitest.c", 0x2430, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = create_ssl_connection(local_90, local_98, 0);
            iVar1 = test_true("test/sslapitest.c", 0x2432, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
            if (iVar1 != 0) {
               uVar7 = SSL_get0_peer_CA_list(local_90);
               if (( param_1 == 0x304 ) && ( param_2 < 2 )) {
                  iVar1 = test_ptr("test/sslapitest.c", 0x243d);
                  if (iVar1 != 0) {
                     uVar2 = OPENSSL_sk_num(uVar7);
                     iVar1 = test_int_eq("test/sslapitest.c", 0x243e, "sk_X509_NAME_num(sktmp)", &_LC223, uVar2, 2);
                     if (iVar1 != 0) {
                        pXVar4 = (X509_NAME*)OPENSSL_sk_value(uVar7, 0);
                        iVar1 = X509_NAME_cmp(pXVar4, (X509_NAME*)uVar8);
                        iVar1 = test_int_eq("test/sslapitest.c", 0x243f, "X509_NAME_cmp(sk_X509_NAME_value(sktmp, 0), name[0])", &_LC15, iVar1, 0);
                        if (iVar1 != 0) {
                           uVar8 = local_88._8_8_;
                           pXVar4 = (X509_NAME*)OPENSSL_sk_value(uVar7, 1);
                           iVar1 = X509_NAME_cmp(pXVar4, (X509_NAME*)uVar8);
                           iVar1 = test_int_eq("test/sslapitest.c", 0x2441, "X509_NAME_cmp(sk_X509_NAME_value(sktmp, 1), name[1])", &_LC15, iVar1, 0);
                           goto joined_r0x00109f67;
                        }

                     }

                  }

               }
 else {
                  iVar1 = test_ptr_null("test/sslapitest.c", 0x2444, "sktmp", uVar7);
                  joined_r0x00109f67:if (iVar1 != 0) {
                     uVar8 = SSL_get0_peer_CA_list(local_98);
                     iVar1 = test_ptr("test/sslapitest.c", 0x244e, "sktmp", uVar8);
                     if (iVar1 != 0) {
                        uVar2 = OPENSSL_sk_num(uVar8);
                        iVar1 = test_int_eq("test/sslapitest.c", 0x244f, "sk_X509_NAME_num(sktmp)", &_LC223, uVar2, 2);
                        if (iVar1 != 0) {
                           pXVar4 = *(X509_NAME**)( local_88 + ( ulong )(param_2 != 0) * 0x10 );
                           pXVar9 = (X509_NAME*)OPENSSL_sk_value(uVar8, 0);
                           iVar1 = X509_NAME_cmp(pXVar9, pXVar4);
                           iVar1 = test_int_eq("test/sslapitest.c", 0x2450, "X509_NAME_cmp(sk_X509_NAME_value(sktmp, 0), name[tst == 0 ? 0 : 2])", &_LC15, iVar1, 0);
                           if (iVar1 != 0) {
                              pXVar4 = *(X509_NAME**)( local_88 + (long)(int)( ( -(uint)(param_2 == 0) & 0xfffffffe ) + 3 ) * 8 );
                              pXVar9 = (X509_NAME*)OPENSSL_sk_value(uVar8, 1);
                              iVar1 = X509_NAME_cmp(pXVar9, pXVar4);
                              iVar1 = test_int_eq("test/sslapitest.c", 0x2452, "X509_NAME_cmp(sk_X509_NAME_value(sktmp, 1), name[tst == 0 ? 1 : 3])", &_LC15, iVar1, 0);
                              uVar3 = ( uint )(iVar1 != 0);
                              name_list = (stack_st_X509_NAME*)0x0;
                              name_list_00 = (stack_st_X509_NAME*)0x0;
                              goto LAB_00109935;
                           }

                        }

                     }

                  }

               }

            }

         }

         goto LAB_0010992d;
      }

      name_list = (stack_st_X509_NAME*)OPENSSL_sk_new_null();
      uVar3 = test_ptr("test/sslapitest.c", 0x2423, "sk1 = sk_X509_NAME_new_null()", name_list);
      name_list_00 = (stack_st_X509_NAME*)0x0;
      if (uVar3 == 0) goto LAB_00109935;
      uVar7 = local_78._0_8_;
      pXVar4 = X509_NAME_dup((X509_NAME*)local_78._0_8_);
      iVar1 = OPENSSL_sk_push(name_list, pXVar4);
      uVar3 = test_true("test/sslapitest.c", 0x2424, "sk_X509_NAME_push(sk1, X509_NAME_dup(name[2]))", iVar1 != 0);
      if (uVar3 == 0) goto LAB_00109935;
      uVar5 = local_78._8_8_;
      pXVar4 = X509_NAME_dup((X509_NAME*)local_78._8_8_);
      iVar1 = OPENSSL_sk_push(name_list, pXVar4);
      uVar3 = test_true("test/sslapitest.c", 0x2425, "sk_X509_NAME_push(sk1, X509_NAME_dup(name[3]))", iVar1 != 0);
      name_list_00 = (stack_st_X509_NAME*)0x0;
      if (uVar3 == 0) goto LAB_00109935;
      name_list_00 = (stack_st_X509_NAME*)OPENSSL_sk_new_null();
      iVar1 = test_ptr("test/sslapitest.c", 0x2426, "sk2 = sk_X509_NAME_new_null()", name_list_00);
      if (iVar1 != 0) {
         pXVar4 = X509_NAME_dup((X509_NAME*)uVar7);
         iVar1 = OPENSSL_sk_push(name_list_00, pXVar4);
         uVar3 = test_true("test/sslapitest.c", 0x2427, "sk_X509_NAME_push(sk2, X509_NAME_dup(name[2]))", iVar1 != 0);
         if (uVar3 == 0) goto LAB_00109935;
         pXVar4 = X509_NAME_dup((X509_NAME*)uVar5);
         iVar1 = OPENSSL_sk_push(name_list_00, pXVar4);
         iVar1 = test_true("test/sslapitest.c", 0x2428, "sk_X509_NAME_push(sk2, X509_NAME_dup(name[3]))", iVar1 != 0);
         if (iVar1 != 0) {
            SSL_CTX_set_client_CA_list(local_a0, name_list);
            SSL_CTX_set_client_CA_list(local_a8, name_list_00);
            goto LAB_001099ec;
         }

      }

   }

   uVar3 = 0;
   LAB_00109935:SSL_free(local_90);
   SSL_free(local_98);
   SSL_CTX_free(local_a0);
   SSL_CTX_free(local_a8);
   do {
      pXVar4 = (X509_NAME*)*ppcVar10;
      ppcVar10 = ppcVar10 + 1;
      X509_NAME_free(pXVar4);
   }
 while ( local_68 != ppcVar10 );
   OPENSSL_sk_pop_free(name_list, X509_NAME_free);
   OPENSSL_sk_pop_free(name_list_00, X509_NAME_free);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_ca_names(undefined4 param_1) {
   uint uVar1;
   uint uVar2;
   uVar1 = test_ca_names_int(0x303, param_1);
   uVar2 = test_ca_names_int(0x304, param_1);
   return uVar2 & uVar1 & 1;
}
bool test_client_cert_cb(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   SSL_CTX *local_50;
   SSL_CTX *local_48;
   SSL *local_40;
   SSL *local_38;
   long local_30;
   uVar2 = cert;
   uVar1 = privkey;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL_CTX*)0x0;
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL*)0x0;
   local_38 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0x304 - ( uint )(param_1 == 0), &local_48, &local_50, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x23cc, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, tst == 0 ? TLS1_2_VERSION : TLS1_3_VERSION, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      SSL_CTX_set_client_cert_cb(local_50, client_cert_cb);
      SSL_CTX_set_verify(local_48, 3, verify_cb);
      iVar3 = create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x23dd, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_connection(local_38, local_40, 0);
         iVar3 = test_true("test/sslapitest.c", 0x23df, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         bVar6 = iVar3 != 0;
         goto LAB_0010a081;
      }

   }

   bVar6 = false;
   LAB_0010a081:SSL_free(local_38);
   SSL_free(local_40);
   SSL_CTX_free(local_48);
   SSL_CTX_free(local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int client_cert_cb(SSL *ssl, X509 **x509, EVP_PKEY **pkey) {
   int iVar1;
   undefined8 uVar2;
   BIO *bp;
   X509 *pXVar3;
   BIO *a;
   EVP_PKEY *pEVar4;
   long in_FS_OFFSET;
   X509 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = SSL_get0_peer_certificate();
   iVar1 = test_ptr("test/sslapitest.c", 0x23a1, "SSL_get0_peer_certificate(ssl)", uVar2);
   if (iVar1 != 0) {
      bp = BIO_new_file(cert, "r");
      iVar1 = test_ptr("test/sslapitest.c", 0x23a5, &_LC2, bp);
      if (iVar1 != 0) {
         local_48 = (X509*)X509_new_ex(libctx, 0);
         iVar1 = test_ptr("test/sslapitest.c", 0x23a8, "xcert = X509_new_ex(libctx, NULL)");
         if (iVar1 == 0) {
            LAB_0010a259:a = (BIO*)0x0;
         }
 else {
            pXVar3 = PEM_read_bio_X509(bp, &local_48, (undefined1*)0x0, (void*)0x0);
            iVar1 = test_ptr("test/sslapitest.c", 0x23a9, "PEM_read_bio_X509(in, &xcert, NULL, NULL)", pXVar3);
            if (iVar1 == 0) goto LAB_0010a259;
            a = BIO_new_file(privkey, "r");
            iVar1 = test_ptr("test/sslapitest.c", 0x23aa, "priv_in = BIO_new_file(privkey, \"r\")", a);
            if (iVar1 != 0) {
               pEVar4 = (EVP_PKEY*)PEM_read_bio_PrivateKey_ex(a, 0, 0, 0, libctx, 0);
               iVar1 = test_ptr("test/sslapitest.c", 0x23ab, "privpkey = PEM_read_bio_PrivateKey_ex(priv_in, NULL, NULL, NULL, libctx, NULL)", pEVar4);
               if (iVar1 != 0) {
                  *x509 = local_48;
                  *pkey = pEVar4;
                  BIO_free(bp);
                  BIO_free(a);
                  iVar1 = 1;
                  goto LAB_0010a1d1;
               }

            }

         }

         X509_free(local_48);
         BIO_free(bp);
         BIO_free(a);
      }

   }

   iVar1 = 0;
   LAB_0010a1d1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_cert_cb_int(undefined4 param_1, int param_2) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   SSL_CTX *pSVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_50;
   SSL_CTX *local_48;
   SSL *local_40;
   SSL *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL_CTX*)0x0;
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL*)0x0;
   local_38 = (SSL*)0x0;
   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   iVar1 = create_ssl_ctx_pair(libctx, uVar4, uVar3, param_1, param_1, &local_48, &local_50, 0, 0);
   iVar1 = test_true("test/sslapitest.c", 0x234b, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), prot, prot, &sctx, &cctx, NULL, NULL)", iVar1 != 0);
   if (iVar1 == 0) {
      LAB_0010a600:uVar2 = 0;
      pSVar6 = (SSL_CTX*)0x0;
      goto LAB_0010a4a0;
   }

   if (param_2 == 0) {
      cert_cb_cnt = -1;
      LAB_0010a3f9:pSVar6 = (SSL_CTX*)0x0;
      LAB_0010a3fc:SSL_CTX_set_cert_cb(local_48, cert_cb, pSVar6);
      iVar1 = create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
      uVar2 = test_true("test/sslapitest.c", 0x2361, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
      if (uVar2 == 0) goto LAB_0010a4a0;
      iVar1 = create_ssl_connection(local_38, local_40, 0);
      if (param_2 == 0) goto LAB_0010a469;
      LAB_0010a678:bVar7 = iVar1 != 0;
   }
 else {
      if (param_2 < 3) {
         cert_cb_cnt = 0;
         if (param_2 != 2) goto LAB_0010a3f9;
         uVar3 = TLS_server_method();
         pSVar6 = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar3);
         iVar1 = test_ptr("test/sslapitest.c", 0x235b, "snictx", pSVar6);
         if (iVar1 == 0) {
            uVar2 = 0;
            goto LAB_0010a4a0;
         }

         goto LAB_0010a3fc;
      }

      cert_cb_cnt = 3;
      SSL_CTX_set_cert_cb(local_48, cert_cb, 0);
      iVar1 = create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
      iVar1 = test_true("test/sslapitest.c", 0x2361, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_0010a600;
      if (param_2 != 4) {
         if (param_2 == 5) {
            lVar5 = SSL_ctrl(local_40, 0x62, 0, "rsa_pss_rsae_sha256:rsa_pkcs1_sha256");
            iVar1 = test_true("test/sslapitest.c", 0x2372, "SSL_set1_sigalgs_list(clientssl, \"rsa_pss_rsae_sha256:rsa_pkcs1_sha256\")", lVar5 != 0);
            goto joined_r0x0010a5fa;
         }

         pSVar6 = (SSL_CTX*)0x0;
         iVar1 = create_ssl_connection(local_38, local_40, 0);
         goto LAB_0010a678;
      }

      lVar5 = SSL_ctrl(local_40, 0x62, 0, "ecdsa_secp256r1_sha256");
      iVar1 = test_true("test/sslapitest.c", 0x236a, "SSL_set1_sigalgs_list(clientssl, \"ecdsa_secp256r1_sha256\")", lVar5 != 0);
      joined_r0x0010a5fa:if (iVar1 == 0) goto LAB_0010a600;
      pSVar6 = (SSL_CTX*)0x0;
      iVar1 = create_ssl_connection(local_38, local_40, 0);
      LAB_0010a469:bVar7 = iVar1 == 0;
   }

   uVar2 = test_true("test/sslapitest.c", 0x2378, "tst == 0 || tst == 4 || tst == 5 ? !ret : ret", bVar7);
   if (( uVar2 != 0 ) && ( uVar2= 1,0 < param_2 )) {
      iVar1 = test_int_eq("test/sslapitest.c", 0x237a, "(cert_cb_cnt - 2) * (cert_cb_cnt - 3)", &_LC15, ( cert_cb_cnt + -2 ) * ( cert_cb_cnt + -3 ), 0);
      uVar2 = ( uint )(iVar1 != 0);
   }

   LAB_0010a4a0:SSL_free(local_38);
   SSL_free(local_40);
   SSL_CTX_free(local_48);
   SSL_CTX_free(local_50);
   SSL_CTX_free(pSVar6);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_cert_cb(undefined4 param_1) {
   uint uVar1;
   uint uVar2;
   uVar1 = test_cert_cb_int(0x303, param_1);
   uVar2 = test_cert_cb_int(0x304, param_1);
   return uVar2 & uVar1 & 1;
}
undefined4 load_chain(undefined8 param_1, long param_2, long *param_3, long param_4) {
   int iVar1;
   void *parg;
   BIO_METHOD *type;
   BIO *bp;
   long lVar2;
   X509 *pXVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   X509 *local_48;
   long local_40;
   uVar4 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   parg = (void*)test_mk_file_path(certsdir, param_1);
   local_48 = (X509*)0x0;
   if (parg == (void*)0x0) goto LAB_0010a7eb;
   type = BIO_s_file();
   bp = BIO_new(type);
   if (( bp == (BIO*)0x0 ) || ( lVar2 = BIO_ctrl(bp, 0x6c, 3, parg) ),(int)lVar2 < 1) {
      LAB_0010a860:uVar4 = 0;
   }
 else {
      if (param_2 != 0) {
         lVar2 = PEM_read_bio_PrivateKey_ex(bp, param_2, 0, 0, libctx, 0);
         if (lVar2 != 0) goto LAB_0010a7ba;
         goto LAB_0010a860;
      }

      local_48 = (X509*)X509_new_ex(libctx, 0);
      if (local_48 != (X509*)0x0) {
         pXVar3 = PEM_read_bio_X509(bp, &local_48, (undefined1*)0x0, (void*)0x0);
         if (pXVar3 == (X509*)0x0) goto LAB_0010a860;
         if (param_4 == 0) {
            *param_3 = (long)local_48;
         }
 else {
            iVar1 = OPENSSL_sk_push();
            if (iVar1 == 0) goto LAB_0010a860;
         }

         LAB_0010a7ba:local_48 = (X509*)0x0;
         uVar4 = 1;
      }

   }

   X509_free(local_48);
   BIO_free(bp);
   CRYPTO_free(parg);
   LAB_0010a7eb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
uint cert_cb(SSL *param_1, SSL_CTX *param_2) {
   uint uVar1;
   int iVar2;
   SSL_CTX *pSVar3;
   undefined8 uVar4;
   X509 *a;
   long in_FS_OFFSET;
   EVP_PKEY *local_40;
   X509 *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (EVP_PKEY*)0x0;
   local_38 = (X509*)0x0;
   if (cert_cb_cnt == 0) {
      cert_cb_cnt = 1;
      uVar1 = 0xffffffff;
      goto LAB_0010a8f5;
   }

   if (cert_cb_cnt != 1) {
      if (cert_cb_cnt == 3) {
         uVar4 = OPENSSL_sk_new_null();
         uVar1 = test_ptr("test/sslapitest.c", 0x2314, "chain", uVar4);
         if (uVar1 != 0) {
            iVar2 = load_chain("ca-cert.pem", 0, 0, uVar4);
            uVar1 = test_true("test/sslapitest.c", 0x2315, "load_chain(\"ca-cert.pem\", NULL, NULL, chain)", iVar2 != 0);
            if (uVar1 != 0) {
               iVar2 = load_chain("root-cert.pem", 0, 0, uVar4);
               uVar1 = test_true("test/sslapitest.c", 0x2316, "load_chain(\"root-cert.pem\", NULL, NULL, chain)", iVar2 != 0);
               if (uVar1 != 0) {
                  iVar2 = load_chain("p256-ee-rsa-ca-cert.pem", 0, &local_38, 0);
                  iVar2 = test_true("test/sslapitest.c", 0x2317, "load_chain(\"p256-ee-rsa-ca-cert.pem\", NULL, &x509, NULL)", iVar2 != 0);
                  if (iVar2 == 0) {
                     uVar1 = 0;
                     a = local_38;
                  }
 else {
                     iVar2 = load_chain("p256-ee-rsa-ca-key.pem", &local_40, 0, 0);
                     uVar1 = test_true("test/sslapitest.c", 0x2319, "load_chain(\"p256-ee-rsa-ca-key.pem\", &pkey, NULL, NULL)", iVar2 != 0);
                     a = local_38;
                     if (uVar1 != 0) {
                        uVar1 = SSL_check_chain(param_1, local_38, local_40, uVar4);
                        if (( ~uVar1 & 0x21 ) == 0) {
                           iVar2 = SSL_use_cert_and_key(param_1, a, local_40, 0, 1);
                           uVar1 = ( uint )(iVar2 != 0);
                        }
 else {
                           uVar1 = 1;
                        }

                     }

                  }

                  goto LAB_0010a8d9;
               }

            }

         }

         a = (X509*)0x0;
      }
 else {
         uVar1 = 0;
         uVar4 = 0;
         a = (X509*)0x0;
      }

      LAB_0010a8d9:EVP_PKEY_free(local_40);
      X509_free(a);
      X509_free((X509*)0x0);
      OSSL_STACK_OF_X509_free(uVar4);
      goto LAB_0010a8f5;
   }

   if (param_2 == (SSL_CTX*)0x0) {
      LAB_0010a950:iVar2 = SSL_use_certificate_file(param_1, cert, 1);
      iVar2 = test_true("test/sslapitest.c", 0x2309, "SSL_use_certificate_file(s, cert, SSL_FILETYPE_PEM)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = SSL_use_PrivateKey_file(param_1, privkey, 1);
         iVar2 = test_true("test/sslapitest.c", 0x230a, "SSL_use_PrivateKey_file(s, privkey, SSL_FILETYPE_PEM)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = SSL_check_private_key(param_1);
            iVar2 = test_true("test/sslapitest.c", 0x230c, "SSL_check_private_key(s)", iVar2 != 0);
            if (iVar2 != 0) {
               cert_cb_cnt = cert_cb_cnt + 1;
               uVar1 = 1;
               goto LAB_0010a8f5;
            }

         }

      }

   }
 else {
      pSVar3 = SSL_set_SSL_CTX(param_1, param_2);
      iVar2 = test_ptr("test/sslapitest.c", 0x2306, "SSL_set_SSL_CTX(s, ctx)", pSVar3);
      if (iVar2 != 0) goto LAB_0010a950;
   }

   uVar1 = 0;
   LAB_0010a8f5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
bool test_incorrect_shutdown(int param_1) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   BIO *bp;
   char *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_a8;
   SSL_CTX *local_a0;
   SSL *local_98;
   SSL *local_90;
   undefined1 local_88[88];
   long local_30;
   uVar6 = cert;
   uVar5 = privkey;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (SSL_CTX*)0x0;
   local_a0 = (SSL_CTX*)0x0;
   local_98 = (SSL*)0x0;
   local_90 = (SSL*)0x0;
   uVar2 = TLS_client_method();
   uVar3 = TLS_server_method();
   iVar1 = create_ssl_ctx_pair(libctx, uVar3, uVar2, 0, 0, &local_a0, &local_a8, uVar6, uVar5);
   iVar1 = test_true("test/sslapitest.c", 0x21bb, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, 0, &sctx, &cctx, cert, privkey)", iVar1 != 0);
   if (iVar1 != 0) {
      if (param_1 == 1) {
         SSL_CTX_set_options(local_a0, 0x80);
      }

      iVar1 = create_ssl_objects(local_a0, local_a8, &local_90, &local_98, 0, 0);
      iVar1 = test_true("test/sslapitest.c", 0x21c3, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
      if (iVar1 != 0) {
         create_ssl_connection(local_90, local_98, 0);
         iVar1 = test_true("test/sslapitest.c", 0x21c7, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
         if (iVar1 != 0) {
            bp = SSL_get_rbio(local_90);
            BIO_ctrl(bp, 0x82, 0, (void*)0x0);
            iVar1 = SSL_read(local_90, local_88, 0x50);
            iVar1 = test_false("test/sslapitest.c", 0x21ce, "SSL_read(serverssl, buf, sizeof(buf))", iVar1 != 0);
            if (iVar1 != 0) {
               if (param_1 == 0) {
                  iVar1 = SSL_get_error(local_90, 0);
                  uVar6 = 1;
                  uVar5 = 0x21d1;
                  pcVar4 = "SSL_ERROR_SSL";
               }
 else {
                  bVar7 = true;
                  if (param_1 != 1) goto LAB_0010acb3;
                  iVar1 = SSL_get_error(local_90, 0);
                  uVar6 = 6;
                  uVar5 = 0x21d3;
                  pcVar4 = "SSL_ERROR_ZERO_RETURN";
               }

               iVar1 = test_int_eq("test/sslapitest.c", uVar5, "SSL_get_error(serverssl, 0)", pcVar4, iVar1, uVar6);
               bVar7 = iVar1 != 0;
               goto LAB_0010acb3;
            }

         }

      }

   }

   bVar7 = false;
   LAB_0010acb3:SSL_free(local_90);
   SSL_free(local_98);
   SSL_CTX_free(local_a0);
   SSL_CTX_free(local_a8);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int test_key_update(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   int iVar7;
   long in_FS_OFFSET;
   SSL_CTX *local_78;
   SSL_CTX *local_70;
   SSL *local_68;
   SSL *local_60;
   undefined1 local_58[24];
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   uVar5 = TLS_client_method();
   uVar6 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x304, 0, &local_70, &local_78, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x1ab9, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      iVar3 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x1abe, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_connection(local_60, local_68, 0);
         iVar3 = test_true("test/sslapitest.c", 0x1ac0, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = 0;
            while (true) {
               iVar7 = 0x28;
               do {
                  iVar4 = SSL_key_update(local_68, iVar3);
                  iVar4 = test_true("test/sslapitest.c", 0x1ac7, "SSL_key_update(clientssl, (j == 0) ? SSL_KEY_UPDATE_NOT_REQUESTED : SSL_KEY_UPDATE_REQUESTED)", iVar4 != 0);
                  if (iVar4 == 0) goto LAB_0010aee7;
                  iVar4 = SSL_do_handshake(local_68);
                  iVar4 = test_true("test/sslapitest.c", 0x1acb, "SSL_do_handshake(clientssl)", iVar4 != 0);
                  if (iVar4 == 0) goto LAB_0010aee7;
                  iVar7 = iVar7 + -1;
               }
 while ( iVar7 != 0 );
               iVar7 = SSL_write(local_68, "A test message", 0xe);
               iVar7 = test_int_eq("test/sslapitest.c", 0x1ad0, "SSL_write(clientssl, mess, strlen(mess))", "strlen(mess)", iVar7, 0xe);
               if (iVar7 == 0) goto LAB_0010aee7;
               iVar7 = SSL_read(local_60, local_58, 0x14);
               iVar7 = test_int_eq("test/sslapitest.c", 0x1ad1, "SSL_read(serverssl, buf, sizeof(buf))", "strlen(mess)", iVar7, 0xe);
               if (iVar7 == 0) goto LAB_0010aee7;
               iVar7 = SSL_write(local_60, "A test message", 0xe);
               iVar7 = test_int_eq("test/sslapitest.c", 0x1ad5, "SSL_write(serverssl, mess, strlen(mess))", "strlen(mess)", iVar7, 0xe);
               if (iVar7 == 0) goto LAB_0010aee7;
               iVar7 = SSL_read(local_68, local_58, 0x14);
               iVar7 = test_int_eq("test/sslapitest.c", 0x1ad6, "SSL_read(clientssl, buf, sizeof(buf))", "strlen(mess)", iVar7, 0xe);
               if (iVar7 == 0) goto LAB_0010aee7;
               if (iVar3 != 0) break;
               iVar3 = 1;
            }
;
            goto LAB_0010aee9;
         }

      }

   }

   LAB_0010aee7:iVar3 = 0;
   LAB_0010aee9:SSL_free(local_60);
   SSL_free(local_68);
   SSL_CTX_free(local_70);
   SSL_CTX_free(local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}
int test_pha_key_update(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   SSL_CTX *local_40;
   SSL_CTX *local_38;
   SSL *local_30;
   SSL *local_28;
   long local_20;
   uVar2 = cert;
   uVar1 = privkey;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (SSL_CTX*)0x0;
   local_38 = (SSL_CTX*)0x0;
   local_30 = (SSL*)0x0;
   local_28 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0, &local_38, &local_40, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x1d3b, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
   if (iVar3 == 0) goto LAB_0010b203;
   SSL_CTX_ctrl(local_38, 0x7b, 0x304, (void*)0x0);
   iVar3 = test_true("test/sslapitest.c", 0x1d40, "SSL_CTX_set_min_proto_version(sctx, TLS1_3_VERSION)");
   if (iVar3 == 0) {
      LAB_0010b294:iVar3 = 0;
   }
 else {
      SSL_CTX_ctrl(local_38, 0x7c, 0x304, (void*)0x0);
      iVar3 = test_true("test/sslapitest.c", 0x1d41, "SSL_CTX_set_max_proto_version(sctx, TLS1_3_VERSION)");
      if (iVar3 == 0) goto LAB_0010b294;
      SSL_CTX_ctrl(local_40, 0x7b, 0x304, (void*)0x0);
      iVar3 = test_true("test/sslapitest.c", 0x1d42, "SSL_CTX_set_min_proto_version(cctx, TLS1_3_VERSION)");
      if (iVar3 == 0) goto LAB_0010b294;
      lVar6 = SSL_CTX_ctrl(local_40, 0x7c, 0x304, (void*)0x0);
      iVar3 = test_true("test/sslapitest.c", 0x1d43, "SSL_CTX_set_max_proto_version(cctx, TLS1_3_VERSION)", lVar6 != 0);
      if (iVar3 == 0) goto LAB_0010b294;
      SSL_CTX_set_post_handshake_auth(local_40, 1);
      iVar3 = create_ssl_objects(local_38, local_40, &local_28, &local_30, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x1d48, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0010b294;
      iVar3 = create_ssl_connection(local_28, local_30, 0);
      iVar3 = test_true("test/sslapitest.c", 0x1d4c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0010b294;
      SSL_set_verify(local_28, 1, (callback*)0x0);
      iVar3 = SSL_verify_client_post_handshake(local_28);
      iVar3 = test_true("test/sslapitest.c", 0x1d51, "SSL_verify_client_post_handshake(serverssl)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0010b294;
      iVar3 = SSL_key_update(local_30, 0);
      iVar3 = test_true("test/sslapitest.c", 0x1d54, "SSL_key_update(clientssl, SSL_KEY_UPDATE_NOT_REQUESTED)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0010b294;
      iVar3 = SSL_do_handshake(local_28);
      iVar3 = test_int_eq("test/sslapitest.c", 0x1d58, "SSL_do_handshake(serverssl)", &_LC49, iVar3, 1);
      if (iVar3 == 0) goto LAB_0010b294;
      iVar3 = create_ssl_connection(local_28, local_30, 0);
      iVar3 = test_true("test/sslapitest.c", 0x1d5c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0010b294;
      iVar3 = 1;
      SSL_shutdown(local_30);
      SSL_shutdown(local_28);
   }

   SSL_free(local_28);
   SSL_free(local_30);
   SSL_CTX_free(local_38);
   SSL_CTX_free(local_40);
   LAB_0010b203:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool post_handshake_verify(SSL *param_1, SSL *param_2) {
   int iVar1;
   SSL_set_verify(param_1, 1, (callback*)0x0);
   iVar1 = SSL_verify_client_post_handshake(param_1);
   iVar1 = test_true("test/sslapitest.c", 0x998, "SSL_verify_client_post_handshake(sssl)", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = SSL_do_handshake(param_1);
      iVar1 = test_int_eq("test/sslapitest.c", 0x99c, "SSL_do_handshake(sssl)", &_LC49, iVar1, 1);
      if (iVar1 != 0) {
         iVar1 = SSL_read(param_2, (void*)0x0, 0);
         iVar1 = test_int_le("test/sslapitest.c", 0x99d, "SSL_read(cssl, NULL, 0)", &_LC15, iVar1, 0);
         if (iVar1 != 0) {
            iVar1 = SSL_read(param_1, (void*)0x0, 0);
            iVar1 = test_int_le("test/sslapitest.c", 0x99e, "SSL_read(sssl, NULL, 0)", &_LC15, iVar1, 0);
            if (iVar1 != 0) {
               iVar1 = create_ssl_connection(param_1, param_2, 0);
               iVar1 = test_true("test/sslapitest.c", 0x99f, "create_ssl_connection(sssl, cssl, SSL_ERROR_NONE)", iVar1 != 0);
               return iVar1 != 0;
            }

         }

      }

   }

   return false;
}
bool test_shutdown(int param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   SSL_SESSION *pSVar5;
   undefined8 uVar6;
   char *pcVar7;
   char *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   SSL_CTX *local_d8;
   SSL_CTX *local_d0;
   SSL *local_c8;
   SSL *local_c0;
   undefined1 local_b8[8];
   size_t local_b0;
   undefined7 local_a7;
   undefined1 uStack_a0;
   undefined7 uStack_9f;
   undefined1 local_98[88];
   long local_40;
   uVar1 = cert;
   uVar6 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d8 = (SSL_CTX*)0x0;
   local_a7 = 0x20747365742041;
   local_d0 = (SSL_CTX*)0x0;
   local_c8 = (SSL*)0x0;
   local_c0 = (SSL*)0x0;
   uStack_a0 = 0x6d;
   uStack_9f = 0x656761737365;
   if (param_1 < 2) {
      uVar3 = TLS_client_method();
      uVar4 = TLS_server_method();
      iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0x303, &local_d0, &local_d8, uVar1, uVar6);
      iVar2 = test_true("test/sslapitest.c", 0x2201, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, (tst <= 1) ? TLS1_2_VERSION : TLS1_3_VERSION, &sctx, &cctx, cert, privkey)", iVar2 != 0);
      if (iVar2 != 0) {
         LAB_0010b872:iVar2 = create_ssl_objects(local_d0, local_d8, &local_c0, &local_c8, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x220c, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
         if (iVar2 != 0) {
            LAB_0010b8be:iVar2 = create_ssl_connection(local_c0, local_c8, 0);
            iVar2 = test_true("test/sslapitest.c", 0x2216, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
            if (iVar2 != 0) {
               pSVar5 = SSL_get_session(local_c8);
               iVar2 = test_ptr_ne("test/sslapitest.c", 0x2218, "sess = SSL_get_session(clientssl)", &_LC352, pSVar5, 0);
               if (iVar2 != 0) {
                  iVar2 = SSL_SESSION_is_resumable(pSVar5);
                  iVar2 = test_true("test/sslapitest.c", 0x2219, "SSL_SESSION_is_resumable(sess)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = SSL_shutdown(local_c8);
                     iVar2 = test_int_eq("test/sslapitest.c", 0x221d, "SSL_shutdown(clientssl)", &_LC15, iVar2, 0);
                     if (iVar2 != 0) {
                        if (param_1 < 4) {
                           LAB_0010bc1c:iVar2 = SSL_write_ex(local_c8, &local_a7, 0xf, local_b8);
                           iVar2 = test_false("test/sslapitest.c", 0x224d, "SSL_write_ex(clientssl, msg, sizeof(msg), &written)", iVar2 != 0);
                           if (iVar2 != 0) {
                              iVar2 = SSL_shutdown(local_c0);
                              pcVar8 = "SSL_shutdown(serverssl)";
                              iVar2 = test_int_eq("test/sslapitest.c", 0x2256, "SSL_shutdown(serverssl)", &_LC15, iVar2, 0);
                              if (iVar2 != 0) {
                                 iVar2 = SSL_write_ex(local_c0, &local_a7, 0xf, local_b8);
                                 iVar2 = test_false("test/sslapitest.c", 0x225b, "SSL_write_ex(serverssl, msg, sizeof(msg), &written)", iVar2 != 0);
                                 if (iVar2 != 0) {
                                    pcVar7 = "1";
                                    iVar2 = SSL_shutdown(local_c8);
                                    iVar2 = test_int_eq("test/sslapitest.c", 0x225c, "SSL_shutdown(clientssl)", &_LC49, iVar2, 1);
                                    if (iVar2 != 0) {
                                       pSVar5 = SSL_get_session(local_c8);
                                       iVar2 = test_ptr_ne("test/sslapitest.c", 0x225d, "sess = SSL_get_session(clientssl)", &_LC352, pSVar5, 0);
                                       if (iVar2 != 0) {
                                          iVar2 = SSL_SESSION_is_resumable(pSVar5);
                                          iVar2 = test_true("test/sslapitest.c", 0x225e, "SSL_SESSION_is_resumable(sess)", iVar2 != 0);
                                          if (iVar2 != 0) {
                                             iVar2 = SSL_shutdown(local_c0);
                                             uVar6 = 0x225f;
                                             LAB_0010bb8b:iVar2 = test_int_eq("test/sslapitest.c", uVar6, pcVar8, pcVar7, iVar2, 1);
                                             bVar9 = iVar2 != 0;
                                             goto LAB_0010b7b2;
                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }
 else {
                           iVar2 = SSL_read_ex(local_c0, local_98, 0x50);
                           iVar2 = test_false("test/sslapitest.c", 0x2225, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                           if (iVar2 != 0) {
                              iVar2 = SSL_get_error(local_c0, 0);
                              iVar2 = test_int_eq("test/sslapitest.c", 0x2226, "SSL_get_error(serverssl, 0)", "SSL_ERROR_ZERO_RETURN", iVar2, 6);
                              if (iVar2 != 0) {
                                 iVar2 = SSL_get_shutdown(local_c0);
                                 iVar2 = test_int_eq("test/sslapitest.c", 0x2228, "SSL_get_shutdown(serverssl)", "SSL_RECEIVED_SHUTDOWN", iVar2, 2);
                                 if (iVar2 != 0) {
                                    iVar2 = SSL_write(local_c0, &local_a7, 0xf);
                                    iVar2 = test_true("test/sslapitest.c", 0x222e, "SSL_write(serverssl, msg, sizeof(msg))", iVar2 != 0);
                                    if (iVar2 != 0) {
                                       if (param_1 == 4) {
                                          iVar2 = SSL_key_update(local_c0, 1);
                                          iVar2 = test_true("test/sslapitest.c", 0x2231, "SSL_key_update(serverssl, SSL_KEY_UPDATE_REQUESTED)", iVar2 != 0);
                                          joined_r0x0010be3a:if (iVar2 != 0) {
                                             iVar2 = SSL_write(local_c0, &local_a7, 0xf);
                                             iVar2 = test_true("test/sslapitest.c", 0x223a, "SSL_write(serverssl, msg, sizeof(msg))", iVar2 != 0);
                                             if (iVar2 != 0) {
                                                iVar2 = SSL_shutdown(local_c0);
                                                iVar2 = test_int_eq("test/sslapitest.c", 0x223c, "SSL_shutdown(serverssl)", &_LC49, iVar2, 1);
                                                if (iVar2 != 0) {
                                                   iVar2 = SSL_read_ex(local_c8, local_98, 0x50, &local_b0);
                                                   iVar2 = test_true("test/sslapitest.c", 0x2240, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                                                   if (( iVar2 != 0 ) && ( iVar2 = test_size_t_eq("test/sslapitest.c", 0x2242, "readbytes", "sizeof(msg)", local_b0, 0xf) ),iVar2 != 0) {
                                                      iVar2 = memcmp(&local_a7, local_98, local_b0);
                                                      iVar2 = test_int_eq("test/sslapitest.c", 0x2243, "memcmp(msg, buf, readbytes)", &_LC15, iVar2, 0);
                                                      if (iVar2 != 0) {
                                                         iVar2 = SSL_read_ex(local_c8, local_98, 0x50, &local_b0);
                                                         iVar2 = test_true("test/sslapitest.c", 0x2244, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                                                         if (( iVar2 != 0 ) && ( iVar2 = test_size_t_eq("test/sslapitest.c", 0x2246, "readbytes", "sizeof(msg)", local_b0, 0xf) ),iVar2 != 0) {
                                                            iVar2 = memcmp(&local_a7, local_98, local_b0);
                                                            iVar2 = test_int_eq("test/sslapitest.c", 0x2247, "memcmp(msg, buf, readbytes)", &_LC15, iVar2, 0);
                                                            goto joined_r0x0010bff5;
                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }
 else {
                                          if (param_1 == 5) {
                                             SSL_set_verify(local_c0, 1, (callback*)0x0);
                                             iVar2 = SSL_verify_client_post_handshake(local_c0);
                                             iVar2 = test_true("test/sslapitest.c", 0x2236, "SSL_verify_client_post_handshake(serverssl)", iVar2 != 0);
                                             goto joined_r0x0010be3a;
                                          }

                                          iVar2 = SSL_shutdown(local_c0);
                                          iVar2 = test_int_eq("test/sslapitest.c", 0x223c, "SSL_shutdown(serverssl)", &_LC49, iVar2, 1);
                                          joined_r0x0010bff5:if (iVar2 != 0) {
                                             iVar2 = SSL_write_ex(local_c8, &local_a7, 0xf, local_b8);
                                             iVar2 = test_false("test/sslapitest.c", 0x224d, "SSL_write_ex(clientssl, msg, sizeof(msg), &written)", iVar2 != 0);
                                             if (iVar2 != 0) {
                                                if (param_1 - 4U < 2) {
                                                   iVar2 = SSL_shutdown(local_c8);
                                                   iVar2 = test_int_eq("test/sslapitest.c", 0x2267, "SSL_shutdown(clientssl)", &_LC49, iVar2, 1);
                                                   if (iVar2 != 0) {
                                                      pSVar5 = SSL_get_session(local_c8);
                                                      iVar2 = test_ptr_ne("test/sslapitest.c", 0x2268, "sess = SSL_get_session(clientssl)", &_LC352, pSVar5, 0);
                                                      if (iVar2 != 0) {
                                                         iVar2 = SSL_SESSION_is_resumable(pSVar5);
                                                         iVar2 = test_true("test/sslapitest.c", 0x2269, "SSL_SESSION_is_resumable(sess)", iVar2 != 0);
                                                         bVar9 = iVar2 != 0;
                                                         goto LAB_0010b7b2;
                                                      }

                                                   }

                                                }
 else {
                                                   iVar2 = SSL_shutdown(local_c8);
                                                   iVar2 = test_int_eq("test/sslapitest.c", 0x2273, "SSL_shutdown(clientssl)", &_LC45, iVar2, 0xffffffff);
                                                   if (iVar2 != 0) {
                                                      iVar2 = SSL_get_error(local_c8, -1);
                                                      uVar6 = 0x2274;
                                                      pcVar7 = "SSL_ERROR_SSL";
                                                      pcVar8 = "SSL_get_error(clientssl, -1)";
                                                      goto LAB_0010bb8b;
                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }
 else {
      uVar3 = TLS_client_method();
      uVar4 = TLS_server_method();
      iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0x304, &local_d0, &local_d8, uVar1, uVar6);
      iVar2 = test_true("test/sslapitest.c", 0x2201, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, (tst <= 1) ? TLS1_2_VERSION : TLS1_3_VERSION, &sctx, &cctx, cert, privkey)", iVar2 != 0);
      if (iVar2 != 0) {
         if (param_1 == 5) {
            SSL_CTX_set_post_handshake_auth(local_d8, 1);
            goto LAB_0010b872;
         }

         iVar2 = create_ssl_objects(local_d0, local_d8, &local_c0, &local_c8, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x220c, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
         if (iVar2 != 0) {
            if (param_1 != 3) goto LAB_0010b8be;
            iVar2 = create_bare_ssl_connection(local_c0, local_c8, 0, 1, 0);
            iVar2 = test_true("test/sslapitest.c", 0x2211, "create_bare_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE, 1, 0)", iVar2 != 0);
            if (iVar2 != 0) {
               pSVar5 = SSL_get_session(local_c8);
               iVar2 = test_ptr_ne("test/sslapitest.c", 0x2213, "sess = SSL_get_session(clientssl)", &_LC352, pSVar5, 0);
               if (iVar2 != 0) {
                  iVar2 = SSL_SESSION_is_resumable(pSVar5);
                  iVar2 = test_false("test/sslapitest.c", 0x2214, "SSL_SESSION_is_resumable(sess)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = SSL_shutdown(local_c8);
                     iVar2 = test_int_eq("test/sslapitest.c", 0x221d, "SSL_shutdown(clientssl)", &_LC15, iVar2, 0);
                     if (iVar2 != 0) goto LAB_0010bc1c;
                  }

               }

            }

         }

      }

   }

   bVar9 = false;
   LAB_0010b7b2:SSL_free(local_c0);
   SSL_free(local_c8);
   SSL_CTX_free(local_d0);
   SSL_CTX_free(local_d8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint verify_stateless_cookie_callback(undefined8 param_1, long *param_2, int param_3) {
   uint uVar1;
   if (param_3 != 0xc) {
      return 0;
   }

   if (( *param_2 == cookie_magic_value._0_8_ ) && ( (int)param_2[1] == cookie_magic_value._8_4_ )) {
      uVar1 = 0;
   }
 else {
      uVar1 = 1;
   }

   return uVar1 ^ 1;
}
int alpn_select_cb(undefined8 param_1, undefined8 *param_2, undefined1 *param_3, byte *param_4, uint param_5) {
   char *__s2;
   int iVar1;
   size_t __n;
   byte *pbVar2;
   ulong uVar3;
   byte *pbVar4;
   __s2 = servalpn;
   pbVar4 = param_4 + param_5;
   if (param_4 < pbVar4) {
      uVar3 = ( ulong ) * param_4;
      param_4 = param_4 + 1;
      pbVar2 = param_4 + uVar3;
      if (pbVar2 <= pbVar4) {
         __n = strlen(servalpn);
         do {
            if (__n == uVar3) {
               iVar1 = memcmp(param_4, __s2, __n);
               if (iVar1 == 0) {
                  *param_2 = param_4;
                  *param_3 = (char)uVar3;
                  return iVar1;
               }

            }

            if (pbVar4 <= pbVar2) {
               return 3;
            }

            uVar3 = ( ulong ) * pbVar2;
            param_4 = pbVar2 + 1;
            pbVar2 = param_4 + uVar3;
         }
 while ( pbVar2 <= pbVar4 );
      }

   }

   return 3;
}
bool test_ticket_callbacks(uint param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   SSL_SESSION *session;
   uint uVar6;
   int iVar7;
   long in_FS_OFFSET;
   bool bVar8;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   tick_key_cb_called = 0;
   dec_tick_called = 0;
   gen_tick_called = 0;
   switch (param_1) {
      case 10:
      case 0xb:
      case 0x10:
    tick_key_renew = 1;
    goto LAB_0010c1f2;
      case 0xc:
      case 0xd:
      case 0x12:
    tick_key_renew = -1;
LAB_0010c1f2:
    tick_dec_ret = 0;
LAB_0010c1f4:
    uVar6 = param_1 & 1 ^ 1;
    iVar7 = 0x304 - (uint)((param_1 & 1) == 0);
    break;
      default:
    tick_key_renew = 0;
    if ((int)param_1 < 6) {
      tick_dec_ret = 3;
      if ((((int)param_1 < 4) && (tick_dec_ret = 2, (int)param_1 < 2)) &&
         (tick_dec_ret = 1, (int)param_1 < 0)) goto LAB_0010c1f2;
    }
    else {
      tick_dec_ret = 4;
      if (1 < param_1 - 6) goto LAB_0010c1f2;
    }
    goto LAB_0010c1f4;
      case 0x11:
    tick_key_renew = 1;
    tick_dec_ret = 0;
    uVar6 = 0;
    iVar7 = 0x304;
    break;
      case 0x13:
    tick_key_renew = -1;
    tick_dec_ret = 0;
    uVar6 = 0;
    iVar7 = 0x304;
   }

   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, iVar7, &local_58, &local_60, uVar2, uVar1);
   iVar7 = test_true("test/sslapitest.c", 0x214c, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, ((tst % 2) == 0) ? TLS1_2_VERSION : TLS1_3_VERSION, &sctx, &cctx, cert, privkey)");
   if (iVar7 != 0) {
      lVar5 = SSL_CTX_ctrl(local_58, 0x2c, 0, (void*)0x0);
      iVar7 = test_true("test/sslapitest.c", 0x2158, "SSL_CTX_set_session_cache_mode(sctx, SSL_SESS_CACHE_OFF)", lVar5 != 0);
      if (iVar7 != 0) {
         iVar7 = SSL_CTX_set_session_ticket_cb(local_58, gen_tick_cb, dec_tick_cb, 0);
         iVar7 = test_true("test/sslapitest.c", 0x215b, "SSL_CTX_set_session_ticket_cb(sctx, gen_tick_cb, dec_tick_cb, NULL)", iVar7 != 0);
         if (iVar7 != 0) {
            if ((int)param_1 < 0xe) {
               if (7 < (int)param_1) {
                  lVar5 = SSL_CTX_callback_ctrl(local_58, 0x48, tick_key_cb);
                  iVar7 = test_true("test/sslapitest.c", 0x2164, "SSL_CTX_set_tlsext_ticket_key_cb(sctx, tick_key_cb)", lVar5 != 0);
                  goto joined_r0x0010c4b9;
               }

            }
 else {
               iVar7 = SSL_CTX_set_tlsext_ticket_key_evp_cb(local_58, tick_key_evp_cb);
               iVar7 = test_true("test/sslapitest.c", 0x2160, "SSL_CTX_set_tlsext_ticket_key_evp_cb(sctx, tick_key_evp_cb)", iVar7 != 0);
               joined_r0x0010c4b9:if (iVar7 == 0) goto LAB_0010c380;
            }

            iVar7 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
            iVar7 = test_true("test/sslapitest.c", 0x2169, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar7 != 0);
            if (iVar7 != 0) {
               iVar7 = create_ssl_connection(local_48, local_50, 0);
               iVar7 = test_true("test/sslapitest.c", 0x216b, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar7 != 0);
               if (( ( iVar7 != 0 ) && ( iVar7 = test_int_eq("test/sslapitest.c", 0x2176, "gen_tick_called", &_LC49, gen_tick_called, 1) ),iVar7 != 0 )) {
                  dec_tick_called = 0;
                  gen_tick_called = 0;
                  session = SSL_get1_session(local_50);
                  SSL_shutdown(local_50);
                  SSL_shutdown(local_48);
                  SSL_free(local_48);
                  SSL_free(local_50);
                  local_50 = (SSL*)0x0;
                  local_48 = (SSL*)0x0;
                  iVar7 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                  iVar7 = test_true("test/sslapitest.c", 0x2184, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar7 != 0);
                  if (iVar7 != 0) {
                     iVar7 = SSL_set_session(local_50, session);
                     iVar7 = test_true("test/sslapitest.c", 0x2186, "SSL_set_session(clientssl, clntsess)", iVar7 != 0);
                     if (iVar7 != 0) {
                        iVar7 = create_ssl_connection(local_48, local_50, 0);
                        iVar7 = test_true("test/sslapitest.c", 0x2187, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar7 != 0);
                        if (iVar7 != 0) {
                           if (( tick_dec_ret - 1U < 2 ) || ( tick_key_renew == -1 )) {
                              iVar7 = SSL_session_reused(local_50);
                              iVar7 = test_false("test/sslapitest.c", 0x218e, "SSL_session_reused(clientssl)", iVar7 != 0);
                              if (iVar7 == 0) {
                                 bVar8 = false;
                                 goto LAB_0010c385;
                              }

                           }
 else {
                              iVar7 = SSL_session_reused(local_50);
                              iVar7 = test_true("test/sslapitest.c", 0x2191, "SSL_session_reused(clientssl)", iVar7 != 0);
                              if (iVar7 == 0) goto LAB_0010c5be;
                           }

                           iVar7 = test_int_eq("test/sslapitest.c", 0x2195, "gen_tick_called", "(tick_key_renew || tick_dec_ret == SSL_TICKET_RETURN_IGNORE_RENEW || tick_dec_ret == SSL_TICKET_RETURN_USE_RENEW) ? 1 : 0", gen_tick_called, tick_key_renew != 0 || ( tick_dec_ret - 2U & 0xfffffffd ) == 0);
                           if (iVar7 != 0) {
                              iVar7 = test_int_eq("test/sslapitest.c", 0x219b, "dec_tick_called", "(tst == 13 || tst == 19) ? 0 : 1", dec_tick_called, param_1 != 0x13 && param_1 != 0xd);
                              bVar8 = iVar7 != 0;
                              goto LAB_0010c385;
                           }

                        }

                     }

                  }

                  LAB_0010c5be:bVar8 = false;
                  goto LAB_0010c385;
               }

            }

         }

      }

   }

   LAB_0010c380:bVar8 = false;
   session = (SSL_SESSION*)0x0;
   LAB_0010c385:SSL_SESSION_free(session);
   SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar8;
}
int tick_key_cb(undefined8 param_1, undefined1 (*param_2)[16], undefined1 (*param_3)[16], EVP_CIPHER_CTX *param_4, HMAC_CTX *param_5, int param_6) {
   int iVar1;
   EVP_CIPHER *cipher;
   EVP_MD *md;
   long in_FS_OFFSET;
   uchar local_68[8];
   char acStack_60[8];
   char local_58[8];
   char acStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (uchar[8])_LC465._0_8_;
   acStack_60 = (char[8])_LC465._8_8_;
   tick_key_cb_called = 1;
   local_58 = (char[8])_LC465._0_8_;
   acStack_50._0_8_ = _LC465._8_8_;
   if (tick_key_renew != -1) {
      cipher = (EVP_CIPHER*)EVP_CIPHER_fetch(libctx, "AES-128-CBC", 0);
      iVar1 = test_ptr("test/sslapitest.c", 0x20bd, "aes128cbc", cipher);
      if (iVar1 != 0) {
         md = (EVP_MD*)EVP_MD_fetch(libctx, "SHA-256", 0);
         iVar1 = test_ptr("test/sslapitest.c", 0x20c0, "sha256", md);
         if (iVar1 != 0) {
            *param_3 = (undefined1[16])0x0;
            *param_2 = (undefined1[16])0x0;
            if (( cipher == (EVP_CIPHER*)0x0 ) || ( md == (EVP_MD*)0x0 )) {
               LAB_0010c899:iVar1 = -1;
            }
 else {
               iVar1 = EVP_CipherInit_ex(param_4, cipher, (ENGINE*)0x0, local_68, (uchar*)param_3, param_6);
               if (iVar1 == 0) goto LAB_0010c899;
               iVar1 = HMAC_Init_ex(param_5, local_58, 0x10, md, (ENGINE*)0x0);
               if (iVar1 == 0) goto LAB_0010c899;
               iVar1 = 2 - ( uint )(tick_key_renew == 0);
            }

            EVP_CIPHER_free(cipher);
            EVP_MD_free(md);
            goto LAB_0010c803;
         }

         EVP_CIPHER_free(cipher);
      }

   }

   iVar1 = 0;
   LAB_0010c803:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int tick_key_evp_cb(undefined8 param_1, undefined1 (*param_2)[16], undefined1 (*param_3)[16], EVP_CIPHER_CTX *param_4, undefined8 param_5, int param_6) {
   int iVar1;
   EVP_CIPHER *cipher;
   long in_FS_OFFSET;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 uStack_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   uchar local_68[8];
   char acStack_60[8];
   char local_58[8];
   char acStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   tick_key_cb_called = 1;
   local_68 = (uchar[8])_LC465._0_8_;
   acStack_60 = (char[8])_LC465._8_8_;
   local_58 = (char[8])_LC465._0_8_;
   acStack_50._0_8_ = _LC465._8_8_;
   if (tick_key_renew != -1) {
      cipher = (EVP_CIPHER*)EVP_CIPHER_fetch(libctx, "AES-128-CBC", 0);
      iVar1 = test_ptr("test/sslapitest.c", 0x20e7, "aes128cbc", cipher);
      if (iVar1 != 0) {
         *param_3 = (undefined1[16])0x0;
         *param_2 = (undefined1[16])0x0;
         OSSL_PARAM_construct_utf8_string(&local_e8, "digest", "SHA256", 0);
         local_98 = local_c8;
         local_b8 = local_e8;
         uStack_b0 = uStack_e0;
         local_a8 = local_d8;
         uStack_a0 = uStack_d0;
         OSSL_PARAM_construct_end(&local_e8);
         local_90 = local_e8;
         uStack_88 = uStack_e0;
         local_70 = local_c8;
         local_80 = local_d8;
         uStack_78 = uStack_d0;
         if (cipher == (EVP_CIPHER*)0x0) {
            LAB_0010ca90:iVar1 = -1;
         }
 else {
            iVar1 = EVP_CipherInit_ex(param_4, cipher, (ENGINE*)0x0, local_68, (uchar*)param_3, param_6);
            if (iVar1 == 0) goto LAB_0010ca90;
            iVar1 = EVP_MAC_init(param_5, local_58, 0x10, &local_b8);
            if (iVar1 == 0) goto LAB_0010ca90;
            iVar1 = 2 - ( uint )(tick_key_renew == 0);
         }

         EVP_CIPHER_free(cipher);
         goto LAB_0010c9ab;
      }

   }

   iVar1 = 0;
   LAB_0010c9ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int dec_tick_cb(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, int param_5) {
   int iVar1;
   long in_FS_OFFSET;
   void *local_30;
   size_t local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   dec_tick_called = 1;
   iVar1 = 2;
   if (param_5 != 3) {
      iVar1 = test_true("test/sslapitest.c", 0x208e, "status == SSL_TICKET_SUCCESS || status == SSL_TICKET_SUCCESS_RENEW", param_5 - 5U < 2);
      if (iVar1 != 0) {
         iVar1 = SSL_SESSION_get0_ticket_appdata(param_2, &local_30, &local_28);
         iVar1 = test_true("test/sslapitest.c", 0x2092, "SSL_SESSION_get0_ticket_appdata(ss, &tickdata, &tickdlen)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = test_size_t_eq("test/sslapitest.c", 0x2094, "tickdlen", "strlen(appdata)", local_28, 0xb);
            if (iVar1 != 0) {
               iVar1 = memcmp(local_30, "Hello World", local_28);
               iVar1 = test_int_eq("test/sslapitest.c", 0x2095, "memcmp(tickdata, appdata, tickdlen)", &_LC15, iVar1, 0);
               if (iVar1 != 0) {
                  iVar1 = tick_dec_ret;
                  if (tick_key_cb_called != 0) {
                     iVar1 = 3;
                     if (( param_5 != 5 ) && ( iVar1 = param_5 != 6 )) {
                        iVar1 = ( uint )(param_5 == 4) * 2;
                     }

                  }

                  goto LAB_0010cb24;
               }

            }

         }

      }

      iVar1 = 0;
   }

   LAB_0010cb24:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void gen_tick_cb(SSL *param_1) {
   SSL_SESSION *pSVar1;
   gen_tick_called = 1;
   pSVar1 = SSL_get_session(param_1);
   SSL_SESSION_set1_ticket_appdata(pSVar1, "Hello World", 0xb);
   return;
}
bool test_set_ciphersuite(uint param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_50;
   SSL_CTX *local_48;
   SSL *local_40;
   SSL *local_38;
   long local_30;
   uVar2 = cert;
   uVar1 = privkey;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL_CTX*)0x0;
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL*)0x0;
   local_38 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0, &local_48, &local_50, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x1284, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      iVar3 = SSL_CTX_set_ciphersuites(local_48, "TLS_AES_128_GCM_SHA256:TLS_AES_128_CCM_SHA256");
      iVar3 = test_true("test/sslapitest.c", 0x1287, "SSL_CTX_set_ciphersuites(sctx, \"TLS_AES_128_GCM_SHA256:TLS_AES_128_CCM_SHA256\")", iVar3 != 0);
      if (iVar3 != 0) {
         if (param_1 - 4 < 4) {
            iVar3 = SSL_CTX_set_cipher_list(local_50, "AES256-GCM-SHA384");
            iVar3 = test_true("test/sslapitest.c", 0x128d, "SSL_CTX_set_cipher_list(cctx, \"AES256-GCM-SHA384\")", iVar3 != 0);
            if (iVar3 == 0) goto LAB_0010cd16;
         }

         if (( param_1 & 0xfffffffb ) != 0) {
            if (( param_1 & 0xfffffffb ) == 1) {
               iVar3 = SSL_CTX_set_ciphersuites(local_50, "TLS_AES_128_CCM_SHA256");
               iVar3 = test_true("test/sslapitest.c", 0x1298, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_CCM_SHA256\")", iVar3 != 0);
               goto joined_r0x0010ce81;
            }

            iVar3 = create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
            iVar3 = test_true("test/sslapitest.c", 0x129d, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
            if (iVar3 == 0) goto LAB_0010cd16;
            if (param_1 - 8 < 2) {
               iVar3 = SSL_set_cipher_list(local_40, "AES256-GCM-SHA384");
               iVar3 = test_true("test/sslapitest.c", 0x12a3, "SSL_set_cipher_list(clientssl, \"AES256-GCM-SHA384\")", iVar3 != 0);
               goto joined_r0x0010cfd1;
            }

            if (param_1 < 10) goto LAB_0010cece;
            LAB_0010ce1b:iVar3 = create_ssl_connection(local_38, local_40, 0);
            iVar3 = test_true("test/sslapitest.c", 0x12b3, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
            bVar7 = iVar3 != 0;
            goto LAB_0010cd18;
         }

         iVar3 = SSL_CTX_set_ciphersuites(local_50, "TLS_AES_128_GCM_SHA256");
         iVar3 = test_true("test/sslapitest.c", 0x1293, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_GCM_SHA256\")", iVar3 != 0);
         joined_r0x0010ce81:if (iVar3 != 0) {
            iVar3 = create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
            iVar3 = test_true("test/sslapitest.c", 0x129d, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
            joined_r0x0010cfd1:if (iVar3 != 0) {
               LAB_0010cece:uVar6 = 1L << ( (byte)param_1 & 0x3f );
               if (( uVar6 & 0x288 ) == 0) {
                  if (( uVar6 & 0x144 ) == 0) goto LAB_0010ce1b;
                  iVar3 = SSL_set_ciphersuites(local_40, "TLS_AES_128_GCM_SHA256");
                  iVar3 = test_true("test/sslapitest.c", 0x12a9, "SSL_set_ciphersuites(clientssl, \"TLS_AES_128_GCM_SHA256\")", iVar3 != 0);
               }
 else {
                  iVar3 = SSL_set_ciphersuites(local_40, "TLS_AES_128_CCM_SHA256");
                  iVar3 = test_true("test/sslapitest.c", 0x12ae, "SSL_set_ciphersuites(clientssl, \"TLS_AES_128_CCM_SHA256\")", iVar3 != 0);
               }

               if (iVar3 != 0) goto LAB_0010ce1b;
            }

         }

      }

   }

   LAB_0010cd16:bVar7 = false;
   LAB_0010cd18:SSL_free(local_38);
   SSL_free(local_40);
   SSL_CTX_free(local_48);
   SSL_CTX_free(local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 int_test_ssl_get_shared_ciphers(int param_1, int param_2) {
   undefined4 uVar1;
   long lVar2;
   undefined8 uVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   char *pcVar9;
   long lVar10;
   long in_FS_OFFSET;
   SSL_CTX *local_468;
   SSL_CTX *local_460;
   SSL *local_458;
   SSL *local_450;
   char local_448[1032];
   long local_40;
   lVar10 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_468 = (SSL_CTX*)0x0;
   local_460 = (SSL_CTX*)0x0;
   local_458 = (SSL*)0x0;
   local_450 = (SSL*)0x0;
   uVar5 = OSSL_LIB_CTX_new();
   iVar4 = test_ptr("test/sslapitest.c", 0x2028, "tmplibctx", uVar5);
   if (iVar4 != 0) {
      if (param_2 == 0) {
         uVar6 = TLS_server_method();
         local_460 = (SSL_CTX*)SSL_CTX_new_ex(uVar5, 0, uVar6);
         iVar4 = test_ptr("test/sslapitest.c", 0x2038, &_LC113, local_460);
         uVar6 = privkey;
         uVar3 = cert;
      }
 else {
         uVar6 = TLS_client_method();
         local_468 = (SSL_CTX*)SSL_CTX_new_ex(uVar5, 0, uVar6);
         iVar4 = test_ptr("test/sslapitest.c", 0x2034, &_LC246, local_468);
         uVar6 = privkey;
         uVar3 = cert;
      }

      privkey = uVar6;
      cert = uVar3;
      if (iVar4 != 0) {
         lVar2 = lVar10 * 0x38;
         uVar1 = *(undefined4*)( shared_ciphers_data + lVar2 );
         uVar7 = TLS_client_method();
         uVar8 = TLS_server_method();
         iVar4 = create_ssl_ctx_pair(libctx, uVar8, uVar7, 0x301, uVar1, &local_460, &local_468, uVar3, uVar6);
         iVar4 = test_true("test/sslapitest.c", 0x203c, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, shared_ciphers_data[tst].maxprot, &sctx, &cctx, cert, privkey)", iVar4 != 0);
         if (iVar4 != 0) {
            iVar4 = SSL_CTX_set_cipher_list(local_468, *(char**)( shared_ciphers_data + lVar2 + 8 ));
            iVar4 = test_true("test/sslapitest.c", 0x2043, "SSL_CTX_set_cipher_list(cctx, shared_ciphers_data[tst].clntciphers)", iVar4 != 0);
            if (iVar4 != 0) {
               if (*(long*)( shared_ciphers_data + lVar2 + 0x10 ) != 0) {
                  iVar4 = SSL_CTX_set_ciphersuites(local_468);
                  iVar4 = test_true("test/sslapitest.c", 0x2046, "SSL_CTX_set_ciphersuites(cctx, shared_ciphers_data[tst].clnttls13ciphers)", iVar4 != 0);
                  if (iVar4 == 0) goto LAB_0010d178;
               }

               iVar4 = SSL_CTX_set_cipher_list(local_460, *(char**)( shared_ciphers_data + lVar10 * 0x38 + 0x18 ));
               iVar4 = test_true("test/sslapitest.c", 0x2048, "SSL_CTX_set_cipher_list(sctx, shared_ciphers_data[tst].srvrciphers)", iVar4 != 0);
               if (iVar4 != 0) {
                  if (*(long*)( shared_ciphers_data + lVar10 * 0x38 + 0x20 ) != 0) {
                     iVar4 = SSL_CTX_set_ciphersuites(local_460);
                     iVar4 = test_true("test/sslapitest.c", 0x204b, "SSL_CTX_set_ciphersuites(sctx, shared_ciphers_data[tst].srvrtls13ciphers)", iVar4 != 0);
                     if (iVar4 == 0) goto LAB_0010d178;
                  }

                  iVar4 = create_ssl_objects(local_460, local_468, &local_450, &local_458, 0, 0);
                  iVar4 = test_true("test/sslapitest.c", 0x2050, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
                  if (iVar4 != 0) {
                     iVar4 = create_ssl_connection(local_450, local_458, 0);
                     iVar4 = test_true("test/sslapitest.c", 0x2052, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
                     if (iVar4 != 0) {
                        pcVar9 = SSL_get_shared_ciphers(local_450, local_448, 0x400);
                        iVar4 = test_ptr("test/sslapitest.c", 0x2056, "SSL_get_shared_ciphers(serverssl, buf, sizeof(buf))", pcVar9);
                        if (iVar4 != 0) {
                           pcVar9 = *(char**)( shared_ciphers_data + lVar10 * 0x38 + 0x30 );
                           if (is_fips == 0) {
                              pcVar9 = *(char**)( shared_ciphers_data + lVar10 * 0x38 + 0x28 );
                           }

                           iVar4 = strcmp(local_448, pcVar9);
                           iVar4 = test_int_eq("test/sslapitest.c", 0x2057, "strcmp(buf, is_fips ? shared_ciphers_data[tst].fipsshared : shared_ciphers_data[tst].shared)", &_LC15, iVar4, 0);
                           if (iVar4 != 0) {
                              uVar6 = 1;
                              goto LAB_0010d17a;
                           }

                        }

                        test_info("test/sslapitest.c", 0x205c, "Shared ciphers are: %s\n", local_448);
                     }

                  }

               }

            }

         }

      }

   }

   LAB_0010d178:uVar6 = 0;
   LAB_0010d17a:SSL_free(local_450);
   SSL_free(local_458);
   SSL_CTX_free(local_460);
   SSL_CTX_free(local_468);
   OSSL_LIB_CTX_free(uVar5);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong test_ssl_get_shared_ciphers(ulong param_1) {
   int iVar1;
   ulong uVar2;
   uVar2 = int_test_ssl_get_shared_ciphers(param_1, 0);
   if ((int)uVar2 == 0) {
      return uVar2;
   }

   iVar1 = int_test_ssl_get_shared_ciphers(param_1 & 0xffffffff, 1);
   return ( ulong )(iVar1 != 0);
}
bool test_set_sigalgs(uint param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   undefined4 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   bool bVar11;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   lVar9 = (long)(int)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   iVar4 = test_size_t_le("test/sslapitest.c", 0xc75, "(size_t)idx", "OSSL_NELEM(testsigalgs) * 2", lVar9, 0x1e);
   uVar3 = cert;
   uVar2 = privkey;
   if (iVar4 == 0) {
      LAB_0010d64d:bVar11 = false;
   }
 else {
      if (param_1 < 0xf) {
         uVar6 = TLS_client_method();
         uVar7 = TLS_server_method();
         create_ssl_ctx_pair(libctx, uVar7, uVar6, 0x301, 0, &local_58, &local_60, uVar3, uVar2);
         iVar4 = test_true("test/sslapitest.c", 0xc7c, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
         if (iVar4 == 0) goto LAB_0010d64d;
         lVar9 = lVar9 * 0x20;
         puVar10 = (undefined8*)( testsigalgs + lVar9 );
         SSL_CTX_ctrl(local_60, 0x7c, 0x303, (void*)0x0);
         if ((void*)*puVar10 == (void*)0x0) {
            lVar8 = SSL_CTX_ctrl(local_60, 0x62, 0, *(void**)( testsigalgs + lVar9 + 0x10 ));
            iVar4 = (int)lVar8;
         }
 else {
            lVar8 = SSL_CTX_ctrl(local_60, 0x61, *(long*)( testsigalgs + lVar9 + 8 ), (void*)*puVar10);
            iVar4 = (int)lVar8;
         }

         if (iVar4 == 0) {
            if (*(int*)( testsigalgs + lVar9 + 0x18 ) == 0) {
               LAB_0010d79c:bVar11 = true;
            }
 else {
               bVar11 = false;
               test_info("test/sslapitest.c", 0xc8d, "Failure setting sigalgs in SSL_CTX (%d)\n", param_1);
            }

         }
 else if (*(int*)( testsigalgs + lVar9 + 0x18 ) == 0) {
            bVar11 = false;
            test_info("test/sslapitest.c", 0xc93, "Not-failed setting sigalgs in SSL_CTX (%d)\n", param_1);
         }
 else {
            iVar4 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
            iVar4 = test_true("test/sslapitest.c", 0xc98, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_0010d5e0;
            LAB_0010d715:uVar1 = *(undefined4*)( (long)puVar10 + 0x1c );
            uVar5 = create_ssl_connection(local_48, local_50, 0);
            iVar4 = test_int_eq("test/sslapitest.c", 0xcae, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", "curr->connsuccess", uVar5, uVar1);
            bVar11 = iVar4 != 0;
         }

      }
 else {
         uVar6 = TLS_client_method();
         uVar7 = TLS_server_method();
         create_ssl_ctx_pair(libctx, uVar7, uVar6, 0x301, 0, &local_58, &local_60, uVar3, uVar2);
         iVar4 = test_true("test/sslapitest.c", 0xc7c, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
         if (iVar4 == 0) goto LAB_0010d64d;
         SSL_CTX_ctrl(local_60, 0x7c, 0x303, (void*)0x0);
         iVar4 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
         iVar4 = test_true("test/sslapitest.c", 0xc98, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
         if (iVar4 != 0) {
            lVar9 = ( lVar9 + -0xf ) * 0x20;
            puVar10 = (undefined8*)( testsigalgs + lVar9 );
            if ((void*)*puVar10 == (void*)0x0) {
               lVar8 = SSL_ctrl(local_50, 0x62, 0, *(void**)( testsigalgs + lVar9 + 0x10 ));
               iVar4 = (int)lVar8;
            }
 else {
               lVar8 = SSL_ctrl(local_50, 0x61, *(long*)( testsigalgs + lVar9 + 8 ), (void*)*puVar10);
               iVar4 = (int)lVar8;
            }

            if (iVar4 == 0) {
               if (*(int*)( testsigalgs + lVar9 + 0x18 ) == 0) goto LAB_0010d79c;
               bVar11 = false;
               test_info("test/sslapitest.c", 0xca5, "Failure setting sigalgs in SSL (%d)\n", param_1);
               goto LAB_0010d751;
            }

            if (*(int*)( testsigalgs + lVar9 + 0x18 ) != 0) goto LAB_0010d715;
         }

         LAB_0010d5e0:bVar11 = false;
      }

      LAB_0010d751:SSL_free(local_48);
      SSL_free(local_50);
      SSL_CTX_free(local_58);
      SSL_CTX_free(local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_ssl_pending(int param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_78;
   SSL_CTX *local_70;
   SSL *local_68;
   SSL *local_60;
   undefined8 local_58;
   int local_50;
   undefined4 uStack_4c;
   undefined1 local_44[5];
   undefined7 local_3f;
   undefined1 uStack_38;
   undefined7 uStack_37;
   long local_30;
   uVar1 = cert;
   uVar6 = privkey;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (SSL_CTX*)0x0;
   local_3f = 0x20747365742041;
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   uStack_38 = 0x6d;
   uStack_37 = 0x656761737365;
   if (param_1 == 0) {
      uVar3 = TLS_client_method();
      uVar4 = TLS_server_method();
      iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0, &local_70, &local_78, uVar1, uVar6);
      uVar6 = 0x1f8d;
      pcVar5 = "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)";
   }
 else {
      uVar3 = DTLS_client_method();
      uVar4 = DTLS_server_method();
      iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0xfeff, 0, &local_70, &local_78, uVar1, uVar6);
      uVar6 = 0x1f94;
      pcVar5 = "create_ssl_ctx_pair(libctx, DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0, &sctx, &cctx, cert, privkey)";
   }

   iVar2 = test_true("test/sslapitest.c", uVar6, pcVar5, iVar2 != 0);
   if (iVar2 != 0) {
      iVar2 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 0x1fae, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = create_ssl_connection(local_60, local_68, 0);
         iVar2 = test_true("test/sslapitest.c", 0x1fb0, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = SSL_pending(local_68);
            iVar2 = test_int_eq("test/sslapitest.c", 0x1fb4, "SSL_pending(clientssl)", &_LC15, iVar2, 0);
            if (iVar2 != 0) {
               iVar2 = SSL_has_pending(local_68);
               iVar2 = test_false("test/sslapitest.c", 0x1fb5, "SSL_has_pending(clientssl)", iVar2 != 0);
               if (iVar2 != 0) {
                  iVar2 = SSL_pending(local_60);
                  iVar2 = test_int_eq("test/sslapitest.c", 0x1fb6, "SSL_pending(serverssl)", &_LC15, iVar2, 0);
                  if (iVar2 != 0) {
                     iVar2 = SSL_has_pending(local_60);
                     iVar2 = test_false("test/sslapitest.c", 0x1fb7, "SSL_has_pending(serverssl)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = SSL_write_ex(local_60, &local_3f, 0xf, &local_58);
                        iVar2 = test_true("test/sslapitest.c", 0x1fb8, "SSL_write_ex(serverssl, msg, sizeof(msg), &written)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = test_size_t_eq("test/sslapitest.c", 0x1fb9, "written", "sizeof(msg)", local_58, 0xf);
                           if (iVar2 != 0) {
                              iVar2 = SSL_read_ex(local_68, local_44, 5, &local_50);
                              iVar2 = test_true("test/sslapitest.c", 0x1fba, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                              if (iVar2 != 0) {
                                 iVar2 = test_size_t_eq("test/sslapitest.c", 0x1fbb, "readbytes", "sizeof(buf)", CONCAT44(uStack_4c, local_50), 5);
                                 if (iVar2 != 0) {
                                    iVar2 = SSL_pending(local_68);
                                    iVar2 = test_int_eq("test/sslapitest.c", 0x1fbc, "SSL_pending(clientssl)", "(int)(written - readbytes)", iVar2, (int)local_58 - local_50);
                                    if (iVar2 != 0) {
                                       iVar2 = SSL_has_pending(local_68);
                                       iVar2 = test_true("test/sslapitest.c", 0x1fbd, "SSL_has_pending(clientssl)", iVar2 != 0);
                                       bVar7 = iVar2 != 0;
                                       goto LAB_0010d94b;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar7 = false;
   LAB_0010d94b:SSL_free(local_60);
   SSL_free(local_68);
   SSL_CTX_free(local_70);
   SSL_CTX_free(local_78);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void sslapi_info_callback(SSL *param_1, uint param_2, int param_3) {
   char *__s2;
   int iVar1;
   uint uVar2;
   char *__s1;
   long lVar3;
   lVar3 = (long)info_cb_offset;
   iVar1 = test_false("test/sslapitest.c", 0x1ecd, "ret == 0", param_3 == 0);
   if (iVar1 != 0) {
      uVar2 = SSL_is_server(param_1);
      if (uVar2 != 0) {
         uVar2 = param_2 >> 0xc & 1;
      }

      iVar1 = test_false("test/sslapitest.c", 0x1ed6, "(SSL_is_server(s) && (where & SSL_ST_CONNECT) != 0)", uVar2);
      if (iVar1 != 0) {
         iVar1 = SSL_is_server(param_1);
         uVar2 = param_2 >> 0xd & 1;
         if (iVar1 != 0) {
            uVar2 = 0;
         }

         iVar1 = test_false("test/sslapitest.c", 0x1ed7, "!SSL_is_server(s) && (where & SSL_ST_ACCEPT) != 0", uVar2);
         if (iVar1 != 0) {
            lVar3 = lVar3 * 0x3c0;
            info_cb_this_state = info_cb_this_state + 1;
            iVar1 = test_int_ne("test/sslapitest.c", 0x1ed8, "state[++info_cb_this_state].where", &_LC15, *(undefined4*)( info_cb_states + (long)info_cb_this_state * 0x10 + lVar3 ), 0);
            if (( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x1ede, "(where & state[info_cb_this_state].where) != 0", ( param_2 & *(uint*)( info_cb_states + (long)info_cb_this_state * 0x10 + lVar3 ) ) != 0) ),iVar1 != 0) {
               if (( param_2 & 1 ) != 0) {
                  __s2 = *(char**)( lVar3 + 0x13b988 + (long)info_cb_this_state * 0x10 );
                  __s1 = SSL_state_string(param_1);
                  iVar1 = strcmp(__s1, __s2);
                  iVar1 = test_int_eq("test/sslapitest.c", 0x1ee3, "strcmp(SSL_state_string(s), state[info_cb_this_state].statestr)", &_LC15, iVar1, 0);
                  if (iVar1 == 0) {
                     info_cb_failed = 1;
                     return;
                  }

               }

               if (( param_2 & 0x20 ) == 0) {
                  return;
               }

               iVar1 = SSL_in_init(param_1);
               if (iVar1 == 0) {
                  return;
               }

            }

         }

      }

   }

   info_cb_failed = 1;
   return;
}
bool setupearly_data_test(undefined8 *param_1, long *param_2, undefined8 *param_3, undefined8 *param_4, undefined8 *param_5, int param_6, undefined8 param_7) {
   SSL_CTX *ctx;
   SSL *s;
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   SSL_SESSION *pSVar5;
   long lVar6;
   ulong uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   uVar2 = cert;
   uVar1 = privkey;
   iVar4 = artificial_ticket_time;
   lVar6 = *param_2;
   if (lVar6 == 0) {
      uVar8 = TLS_client_method();
      uVar9 = TLS_server_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar9, uVar8, 0x301, 0, param_2, param_1, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0xd6a, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, sctx, cctx, cert, privkey)", iVar3 != 0);
      if (iVar3 == 0) {
         return false;
      }

      lVar6 = *param_2;
   }

   if (0 < iVar4) {
      SSL_CTX_set_session_ticket_cb(lVar6, ed_gen_cb, 0, 0);
      lVar6 = *param_2;
   }

   SSL_CTX_set_max_early_data(lVar6, 0x4000);
   iVar3 = test_true("test/sslapitest.c", 0xd73, "SSL_CTX_set_max_early_data(*sctx, SSL3_RT_MAX_PLAIN_LENGTH)");
   if (iVar3 != 0) {
      ctx = (SSL_CTX*)*param_1;
      if (param_6 == 1) {
         SSL_CTX_ctrl(ctx, 0x29, 1, (void*)0x0);
         SSL_CTX_ctrl((SSL_CTX*)*param_2, 0x29, 1, (void*)0x0);
         iVar3 = create_ssl_objects(*param_2, *param_1, param_4, param_3, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0xd83, "create_ssl_objects(*sctx, *cctx, serverssl, clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 == 0) {
            return false;
         }

         lVar6 = SSL_ctrl((SSL*)*param_3, 0x37, 0, "localhost");
         iVar3 = test_true("test/sslapitest.c", 0xd8e, "SSL_set_tlsext_host_name(*clientssl, \"localhost\")", lVar6 != 0);
      }
 else {
         if (param_6 == 2) {
            SSL_CTX_set_psk_use_session_callback(ctx, use_session_cb);
            SSL_CTX_set_psk_find_session_callback(*param_2, find_session_cb);
            use_session_cb_cnt = 0;
            find_session_cb_cnt = 0;
            srvid = "Identity";
            iVar4 = create_ssl_objects(*param_2, *param_1, param_4, param_3, 0, 0);
            iVar4 = test_true("test/sslapitest.c", 0xd83, "create_ssl_objects(*sctx, *cctx, serverssl, clientssl, NULL, NULL)", iVar4 != 0);
            if (iVar4 == 0) {
               return false;
            }

            clientpsk = (SSL_SESSION*)create_a_psk(*param_3, param_7);
            iVar4 = test_ptr("test/sslapitest.c", 0xd93, "clientpsk", clientpsk);
            if (iVar4 != 0) {
               iVar4 = SSL_SESSION_set_max_early_data(clientpsk, 0x100);
               iVar4 = test_true("test/sslapitest.c", 0xd98, "SSL_SESSION_set_max_early_data(clientpsk, 0x100)", iVar4 != 0);
               if (iVar4 != 0) {
                  iVar4 = SSL_SESSION_up_ref(clientpsk);
                  iVar4 = test_true("test/sslapitest.c", 0xd9a, "SSL_SESSION_up_ref(clientpsk)", iVar4 != 0);
                  if (iVar4 != 0) {
                     serverpsk = clientpsk;
                     if (param_5 == (undefined8*)0x0) {
                        return true;
                     }

                     iVar4 = SSL_SESSION_up_ref();
                     iVar4 = test_true("test/sslapitest.c", 0xda2, "SSL_SESSION_up_ref(clientpsk)", iVar4 != 0);
                     if (iVar4 != 0) {
                        *param_5 = clientpsk;
                        return true;
                     }

                     SSL_SESSION_free(clientpsk);
                     SSL_SESSION_free(serverpsk);
                     serverpsk = (SSL_SESSION*)0x0;
                     clientpsk = (SSL_SESSION*)0x0;
                     return false;
                  }

               }

            }

            SSL_SESSION_free(clientpsk);
            clientpsk = (SSL_SESSION*)0x0;
            return false;
         }

         iVar3 = create_ssl_objects(*param_2, ctx, param_4, param_3, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0xd83, "create_ssl_objects(*sctx, *cctx, serverssl, clientssl, NULL, NULL)", iVar3 != 0);
      }

      if (iVar3 != 0) {
         if (param_5 == (undefined8*)0x0) {
            return true;
         }

         iVar3 = create_ssl_connection(*param_4, *param_3, 0);
         iVar3 = test_true("test/sslapitest.c", 0xdb0, "create_ssl_connection(*serverssl, *clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            pSVar5 = SSL_get1_session((SSL*)*param_3);
            s = (SSL*)*param_3;
            *param_5 = pSVar5;
            SSL_shutdown(s);
            SSL_shutdown((SSL*)*param_4);
            SSL_free((SSL*)*param_4);
            SSL_free((SSL*)*param_3);
            *param_3 = 0;
            *param_4 = 0;
            if (0 < iVar4) {
               uVar1 = *param_5;
               lVar6 = SSL_SESSION_get_time_ex(uVar1);
               uVar7 = lVar6 * 1000000000;
               if (uVar7 < 10000000000) {
                  uVar7 = 10000000000;
               }

               lVar6 = SSL_SESSION_set_time_ex(uVar1, ( uVar7 - 10000000000 ) / 1000000000);
               iVar4 = test_true("test/sslapitest.c", 0xdc0, "sub_session_time(*sess)", lVar6 != 0);
               if (iVar4 == 0) {
                  return false;
               }

            }

            iVar4 = create_ssl_objects(*param_2, *param_1, param_4, param_3, 0, 0);
            iVar4 = test_true("test/sslapitest.c", 0xdc3, "create_ssl_objects(*sctx, *cctx, serverssl, clientssl, NULL, NULL)", iVar4 != 0);
            if (iVar4 != 0) {
               iVar4 = SSL_set_session((SSL*)*param_3, (SSL_SESSION*)*param_5);
               iVar4 = test_true("test/sslapitest.c", 0xdc5, "SSL_set_session(*clientssl, *sess)", iVar4 != 0);
               return iVar4 != 0;
            }

         }

      }

   }

   return false;
}
bool test_early_data_not_expected(undefined4 param_1) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   SSL_CTX *local_80;
   SSL_CTX *local_78;
   SSL *local_70;
   SSL *local_68;
   SSL_SESSION *local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = (SSL_CTX*)0x0;
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL_SESSION*)0x0;
   iVar1 = setupearly_data_test(&local_80, &local_78, &local_70, &local_68, &local_60, param_1, 0x30);
   iVar1 = test_true("test/sslapitest.c", 0x11f6, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, idx, SHA384_DIGEST_LENGTH)", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = SSL_write_early_data(local_70, "Hello", 5, &local_50);
      iVar1 = test_true("test/sslapitest.c", 0x11fc, "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = SSL_accept(local_68);
         iVar1 = test_int_le("test/sslapitest.c", 0x1204, "SSL_accept(serverssl)", &_LC15, iVar1, 0);
         if (iVar1 != 0) {
            iVar1 = SSL_connect(local_70);
            iVar1 = test_int_gt("test/sslapitest.c", 0x1205, "SSL_connect(clientssl)", &_LC15, iVar1, 0);
            if (iVar1 != 0) {
               uVar2 = SSL_get_early_data_status(local_68);
               iVar1 = test_int_eq("test/sslapitest.c", 0x1206, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_REJECTED", uVar2, 1);
               if (iVar1 != 0) {
                  iVar1 = SSL_accept(local_68);
                  iVar1 = test_int_gt("test/sslapitest.c", 0x1208, "SSL_accept(serverssl)", &_LC15, iVar1, 0);
                  if (iVar1 != 0) {
                     uVar2 = SSL_get_early_data_status(local_70);
                     iVar1 = test_int_eq("test/sslapitest.c", 0x1209, "SSL_get_early_data_status(clientssl)", "SSL_EARLY_DATA_REJECTED", uVar2, 1);
                     if (iVar1 != 0) {
                        iVar1 = SSL_write_ex(local_70, "World.", 6, &local_50);
                        iVar1 = test_true("test/sslapitest.c", 0x120e, "SSL_write_ex(clientssl, MSG2, strlen(MSG2), &written)", iVar1 != 0);
                        if (iVar1 != 0) {
                           iVar1 = test_size_t_eq("test/sslapitest.c", 0x120f, "written", "strlen(MSG2)", local_50, 6);
                           if (iVar1 != 0) {
                              iVar1 = SSL_read_ex(local_68, local_48, 0x14, &local_58);
                              iVar1 = test_true("test/sslapitest.c", 0x1212, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                              if (iVar1 != 0) {
                                 iVar1 = test_mem_eq("test/sslapitest.c", 0x1213, &_LC80, &_LC534, local_48, local_58, "World.", 6);
                                 bVar3 = iVar1 != 0;
                                 goto LAB_0010e3e2;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar3 = false;
   LAB_0010e3e2:SSL_SESSION_free(local_60);
   SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_free(local_68);
   SSL_free(local_70);
   SSL_CTX_free(local_78);
   SSL_CTX_free(local_80);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 find_session_cb(undefined8 param_1, char *param_2, size_t param_3, long *param_4) {
   char *__s1;
   long lVar1;
   int iVar2;
   size_t __n;
   lVar1 = serverpsk;
   __s1 = srvid;
   find_session_cb_cnt = find_session_cb_cnt + 1;
   if (2 < find_session_cb_cnt) {
      return 0;
   }

   if (serverpsk != 0) {
      __n = strlen(srvid);
      if (( __n == param_3 ) && ( iVar2 = iVar2 == 0 )) {
         iVar2 = SSL_SESSION_up_ref(lVar1);
         if (iVar2 != 0) {
            *param_4 = serverpsk;
            return 1;
         }

         return 0;
      }

      *param_4 = 0;
      return 1;
   }

   return 0;
}
undefined8 ssl_srp_cb(undefined8 param_1, undefined4 *param_2) {
   int iVar1;
   long lVar2;
   lVar2 = SSL_get_srp_username();
   if (lVar2 != 0) {
      lVar2 = SRP_VBASE_get1_by_user(vbase, lVar2);
      if (lVar2 != 0) {
         iVar1 = SSL_set_srp_server_param(param_1, *(undefined8*)( lVar2 + 0x20 ), *(undefined8*)( lVar2 + 0x18 ), *(undefined8*)( lVar2 + 8 ), *(undefined8*)( lVar2 + 0x10 ), *(undefined8*)( lVar2 + 0x28 ));
         if (0 < iVar1) {
            SRP_user_pwd_free(lVar2);
            return 0;
         }

         *param_2 = 0x50;
         SRP_user_pwd_free(lVar2);
         return 2;
      }

   }

   *param_2 = 0x50;
   SRP_user_pwd_free(0);
   return 2;
}
void test_large_app_data(uint param_1) {
   bool bVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   void *ptr;
   void *__s;
   long lVar5;
   long in_FS_OFFSET;
   undefined4 local_80;
   SSL_CTX *local_70;
   SSL_CTX *local_68;
   SSL *local_60;
   SSL *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL*)0x0;
   local_58 = (SSL*)0x0;
   uVar3 = TLS_server_method();
   uVar4 = TLS_client_method();
   switch (param_1) {
      case 0:
      case 1:
      case 2:
      case 3:
    bVar1 = false;
    local_80 = 0x304;
    break;
      case 4:
      case 5:
      case 6:
      case 7:
    bVar1 = false;
    local_80 = 0x303;
    break;
      case 8:
      case 9:
      case 10:
      case 0xb:
    if (is_fips != 0) {
LAB_0010ec06:
      test_skip("test/sslapitest.c",0x65f,"TLS versions < 1.2 not supported by FIPS provider");
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    bVar1 = true;
    local_80 = 0x302;
    break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
    if (is_fips != 0) goto LAB_0010ec06;
    bVar1 = true;
    local_80 = 0x301;
    break;
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
    test_skip("test/sslapitest.c",0x640,"SSL 3 not supported");
    FUN_0010ec20();
    return;
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
    uVar3 = DTLS_server_method();
    uVar4 = DTLS_client_method();
    bVar1 = false;
    local_80 = 0xfefd;
    break;
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
    if (is_fips != 0) {
      test_skip("test/sslapitest.c",0x650,"DTLS 1 not supported by FIPS provider");
      FUN_0010ec20();
      return;
    }
    uVar3 = DTLS_server_method();
    uVar4 = DTLS_client_method();
    bVar1 = true;
    local_80 = 0xfeff;
    break;
      default:
    FUN_0010ec20();
    return;
   }

   __s = (void*)0x0;
   ptr = (void*)CRYPTO_zalloc(0x4000, "test/sslapitest.c", 0x662);
   iVar2 = test_ptr("test/sslapitest.c", 0x663, &_LC72, ptr);
   if (iVar2 != 0) {
      __s = CRYPTO_malloc(0x4001, "test/sslapitest.c", 0x666);
      iVar2 = test_ptr("test/sslapitest.c", 0x667, &_LC80, __s);
      if (iVar2 != 0) {
         memset(__s, 0xff, 0x4001);
         iVar2 = create_ssl_ctx_pair(libctx, uVar3, uVar4, local_80, local_80, &local_68, &local_70, cert, privkey);
         iVar2 = test_true("test/sslapitest.c", 0x66c, "create_ssl_ctx_pair(libctx, smeth, cmeth, prot, prot, &sctx, &cctx, cert, privkey)", iVar2 != 0);
         if (iVar2 != 0) {
            if (bVar1) {
               iVar2 = SSL_CTX_set_cipher_list(local_70, "DEFAULT:@SECLEVEL=0");
               iVar2 = test_true("test/sslapitest.c", 0x672, "SSL_CTX_set_cipher_list(cctx, \"DEFAULT:@SECLEVEL=0\")", iVar2 != 0);
               if (iVar2 == 0) goto LAB_0010e8e0;
               iVar2 = SSL_CTX_set_cipher_list(local_68, "DEFAULT:@SECLEVEL=0");
               iVar2 = test_true("test/sslapitest.c", 0x673, "SSL_CTX_set_cipher_list(sctx, \"DEFAULT:@SECLEVEL=0\")", iVar2 != 0);
               if (iVar2 == 0) goto LAB_0010e8e0;
            }

            iVar2 = create_ssl_objects(local_68, local_70, &local_58, &local_60, 0, 0);
            iVar2 = test_true("test/sslapitest.c", 0x678, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
            if (iVar2 != 0) {
               if (( param_1 & 1 ) != 0) {
                  lVar5 = SSL_set_options(local_58, 0x800);
                  iVar2 = test_true("test/sslapitest.c", 0x67e, "SSL_set_options(serverssl, SSL_OP_DONT_INSERT_EMPTY_FRAGMENTS)", lVar5 != 0);
                  if (iVar2 == 0) goto LAB_0010e8e0;
                  lVar5 = SSL_set_options(local_60, 0x800);
                  iVar2 = test_true("test/sslapitest.c", 0x680, "SSL_set_options(clientssl, SSL_OP_DONT_INSERT_EMPTY_FRAGMENTS)", lVar5 != 0);
                  if (iVar2 == 0) goto LAB_0010e8e0;
               }

               if (( param_1 & 2 ) != 0) {
                  lVar5 = SSL_set_options(local_58, 0x80000);
                  iVar2 = test_true("test/sslapitest.c", 0x68a, "SSL_set_options(serverssl, SSL_OP_NO_ENCRYPT_THEN_MAC)", lVar5 != 0);
                  if (iVar2 == 0) goto LAB_0010e8e0;
                  lVar5 = SSL_set_options(local_60, 0x80000);
                  iVar2 = test_true("test/sslapitest.c", 0x68b, "SSL_set_options(clientssl, SSL_OP_NO_ENCRYPT_THEN_MAC)", lVar5 != 0);
                  if (iVar2 == 0) goto LAB_0010e8e0;
               }

               iVar2 = create_ssl_connection(local_58, local_60, 0);
               iVar2 = test_true("test/sslapitest.c", 0x690, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
               if (iVar2 != 0) {
                  iVar2 = SSL_write_ex(local_60, ptr, 0x4000, &local_50);
                  iVar2 = test_true("test/sslapitest.c", 0x693, "SSL_write_ex(clientssl, msg, SSL3_RT_MAX_PLAIN_LENGTH, &written)", iVar2 != 0);
                  if (( iVar2 != 0 ) && ( iVar2 = test_size_t_eq("test/sslapitest.c", 0x695, "written", "SSL3_RT_MAX_PLAIN_LENGTH", local_50, 0x4000) ),iVar2 != 0) {
                     iVar2 = SSL_read_ex(local_58, __s, 0x4001, &local_48);
                     iVar2 = test_true("test/sslapitest.c", 0x699, "SSL_read_ex(serverssl, buf, SSL3_RT_MAX_PLAIN_LENGTH + 1, &readbytes)", iVar2 != 0);
                     if (iVar2 != 0) {
                        test_mem_eq("test/sslapitest.c", 0x69d, &_LC72, &_LC80, ptr, local_50, __s, local_48);
                     }

                  }

               }

            }

         }

      }

   }

   LAB_0010e8e0:CRYPTO_free(ptr);
   CRYPTO_free(__s);
   SSL_free(local_58);
   SSL_free(local_60);
   SSL_CTX_free(local_68);
   SSL_CTX_free(local_70);
   FUN_0010ec20();
   return;
}
void FUN_0010ec20(void) {
   long in_FS_OFFSET;
   long in_stack_00000048;
   if (in_stack_00000048 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int test_ssl_set_bio(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   int iVar5;
   uint uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   BIO_METHOD *pBVar9;
   BIO *wbio;
   BIO *a;
   uint uVar10;
   int iVar11;
   BIO *pBVar12;
   BIO *a_00;
   long in_FS_OFFSET;
   bool bVar13;
   bool bVar14;
   BIO *local_88;
   uint local_7c;
   BIO *local_78;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   if (param_1 < 0x51) {
      uVar7 = TLS_client_method();
      uVar8 = TLS_server_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar8, uVar7, 0x301, 0, &local_60, &local_58, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0xb92, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0xba2, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 != 0) {
            local_7c = 2;
            iVar11 = param_1 % 3;
            iVar5 = ( param_1 / 3 ) / 3;
            iVar3 = ( param_1 / 3 ) % 3;
            uVar10 = iVar5 % 3;
            uVar4 = ( iVar5 / 3 ) % 3;
            bVar13 = iVar11 == 1;
            bVar14 = iVar3 == 1;
            if (( !bVar13 ) && ( !bVar14 )) goto LAB_0010f1bc;
            LAB_0010ef3e:a = (BIO*)0x0;
            pBVar9 = BIO_s_mem();
            wbio = BIO_new(pBVar9);
            iVar5 = test_ptr("test/sslapitest.c", 0xbaa, "bio1 = BIO_new(BIO_s_mem())", wbio);
            if (iVar5 == 0) goto LAB_0010f0ed;
            LAB_0010ef87:local_88 = wbio;
            local_78 = wbio;
            if (( ( ( iVar11 == 2 ) || ( iVar3 == 2 ) ) || ( uVar10 == 2 ) ) || ( uVar4 == 2 )) {
               pBVar9 = BIO_s_mem();
               a = BIO_new(pBVar9);
               iVar5 = test_ptr("test/sslapitest.c", 0xbb2, "bio2 = BIO_new(BIO_s_mem())", a);
               if (iVar5 == 0) goto LAB_0010f0ed;
               if (iVar11 != 3) {
                  if (( bVar13 ) || ( local_88 = iVar11 == 2 )) goto LAB_0010f250;
                  goto LAB_0010efc5;
               }

               LAB_0010efe8:local_78 = (BIO*)0x0;
               local_88 = (BIO*)0x0;
            }
 else {
               if (iVar11 == 3) {
                  a = (BIO*)0x0;
                  goto LAB_0010efe8;
               }

               a = (BIO*)0x0;
               if (!bVar13) {
                  LAB_0010efc5:if (bVar14) {
                     SSL_set_bio(local_48, (BIO*)0x0, wbio);
                     LAB_0010f46f:if (local_78 != (BIO*)0x0) {
                        local_88 = (BIO*)0x0;
                        goto LAB_0010f3b4;
                     }

                  }
 else {
                     if (iVar3 == 2) {
                        local_88 = (BIO*)0x0;
                        local_78 = a;
                        goto LAB_0010f370;
                     }

                     SSL_set_bio(local_48, (BIO*)0x0, (BIO*)0x0);
                  }

                  goto LAB_0010efe8;
               }

               a = (BIO*)0x0;
               LAB_0010f250:if (( bVar14 ) || ( local_78 = iVar3 == 2 )) {
                  LAB_0010f370:SSL_set_bio(local_48, local_88, local_78);
                  if (local_88 == (BIO*)0x0) goto LAB_0010f46f;
                  iVar5 = BIO_up_ref(local_88);
                  if (iVar5 == 0) goto LAB_0010f0ed;
                  if (( local_78 == (BIO*)0x0 ) || ( local_78 == local_88 )) goto LAB_0010eff9;
                  LAB_0010f3b4:iVar3 = BIO_up_ref(local_78);
                  if (iVar3 == 0) {
                     BIO_free(local_88);
                     iVar5 = 0;
                     goto LAB_0010f0ed;
                  }

               }
 else {
                  SSL_set_bio(local_48, local_88, (BIO*)0x0);
                  if (local_88 == (BIO*)0x0) goto LAB_0010efe8;
                  iVar5 = BIO_up_ref(local_88);
                  if (iVar5 == 0) goto LAB_0010f0ed;
                  local_78 = (BIO*)0x0;
               }

            }

            LAB_0010eff9:if (local_7c == 2) {
               LAB_0010f03b:a_00 = wbio;
               pBVar12 = wbio;
               if (( uVar10 == 1 ) || ( a_00 = uVar10 == 2 )) {
                  if (( uVar4 == 1 ) || ( pBVar12 = uVar4 == 2 )) {
                     if (a_00 == (BIO*)0x0) goto LAB_0010f2f3;
                     bVar13 = a_00 != pBVar12;
                     if (local_88 == a_00) {
                        if (( pBVar12 != (BIO*)0x0 ) && ( bVar13 && local_78 != pBVar12 )) {
                           iVar3 = BIO_up_ref(pBVar12);
                           iVar3 = test_true("test/sslapitest.c", 0xbde, "BIO_up_ref(nwbio)", iVar3 != 0);
                           if (iVar3 == 0) {
                              iVar5 = 0;
                              goto LAB_0010f0ed;
                           }

                        }

                     }
 else if (( bVar13 ) || ( local_78 != pBVar12 )) goto LAB_0010f410;
                  }
 else {
                     pBVar12 = (BIO*)0x0;
                     if (( a_00 != (BIO*)0x0 ) && ( bVar13 = local_88 != a_00 )) {
                        LAB_0010f410:iVar3 = BIO_up_ref(a_00);
                        iVar3 = test_true("test/sslapitest.c", 0xbd9, "BIO_up_ref(nrbio)", iVar3 != 0);
                        if (iVar3 == 0) goto LAB_0010f350;
                        if (( pBVar12 != (BIO*)0x0 ) && ( bVar13 )) goto LAB_0010f2ff;
                     }

                  }

               }
 else if (( uVar4 == 1 ) || ( pBVar12 = uVar4 == 2 )) {
                  LAB_0010f2f3:a_00 = (BIO*)0x0;
                  if (pBVar12 != (BIO*)0x0) {
                     LAB_0010f2ff:if (( local_88 == local_78 ) || ( local_78 != pBVar12 )) {
                        iVar3 = BIO_up_ref(pBVar12);
                        iVar3 = test_true("test/sslapitest.c", 0xbde, "BIO_up_ref(nwbio)", iVar3 != 0);
                        if (iVar3 == 0) {
                           if (a_00 != local_88) {
                              BIO_free(a_00);
                           }

                           goto LAB_0010f350;
                        }

                     }

                  }

               }
 else {
                  a_00 = (BIO*)0x0;
                  pBVar12 = (BIO*)0x0;
               }

               iVar5 = 1;
               SSL_set_bio(local_48, a_00, pBVar12);
            }
 else {
               uVar6 = create_ssl_connection(local_50, local_48, 0);
               iVar3 = test_true("test/sslapitest.c", 0xbc9, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE) == (conntype == CONNTYPE_CONNECTION_SUCCESS)", ( local_7c ^ 1 ) == uVar6);
               if (iVar3 != 0) goto LAB_0010f03b;
               LAB_0010f350:iVar5 = 0;
            }

            goto LAB_0010f0ed;
         }

      }

   }
 else {
      uVar7 = TLS_client_method();
      uVar8 = TLS_server_method();
      create_ssl_ctx_pair(libctx, uVar8, uVar7, 0x301, 0, &local_60, &local_58, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0xb92, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
      if (iVar3 != 0) {
         uVar4 = param_1 - 0x51;
         local_7c = uVar4 & 4;
         if (local_7c != 0) {
            SSL_CTX_ctrl(local_60, 0x7b, 0x304, (void*)0x0);
            SSL_CTX_ctrl(local_58, 0x7c, 0x303, (void*)0x0);
            local_7c = 1;
         }

         iVar3 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0xba2, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = 3;
            iVar11 = 3;
            uVar10 = uVar4 & 1;
            uVar4 = (int)uVar4 >> 1 & 1;
            LAB_0010f1bc:bVar14 = false;
            bVar13 = uVar10 == 1 || uVar4 == 1;
            if (uVar10 == 1 || uVar4 == 1) {
               bVar13 = false;
               goto LAB_0010ef3e;
            }

            wbio = (BIO*)0x0;
            goto LAB_0010ef87;
         }

      }

   }

   iVar5 = 0;
   a = (BIO*)0x0;
   wbio = (BIO*)0x0;
   LAB_0010f0ed:BIO_free(wbio);
   BIO_free(a);
   SSL_free(local_50);
   SSL_free(local_48);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
undefined8 test_ssl_clear(uint param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   uint uVar6;
   undefined8 uVar7;
   SSL *pSVar8;
   SSL *pSVar9;
   long in_FS_OFFSET;
   uint local_7c;
   SSL_CTX *local_78;
   SSL_CTX *local_70;
   SSL *local_68;
   SSL *local_60;
   long local_58;
   long local_50;
   undefined1 local_45[5];
   long local_40;
   uVar1 = cert;
   uVar7 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0, &local_70, &local_78, uVar1, uVar7);
   iVar2 = test_true("test/sslapitest.c", 0x1c6a, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
   if (iVar2 != 0) {
      if (( param_1 & 1 ) != 0) {
         lVar5 = SSL_CTX_ctrl(local_78, 0x7c, 0x303, (void*)0x0);
         iVar2 = test_true("test/sslapitest.c", 0x1c6e, "SSL_CTX_set_max_proto_version(cctx, TLS1_2_VERSION)", lVar5 != 0);
         if (iVar2 == 0) goto LAB_0010f6d3;
      }

      iVar2 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 0x1c70, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = create_ssl_connection(local_60, local_68, 0);
         iVar2 = test_true("test/sslapitest.c", 0x1c72, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
         if (iVar2 != 0) {
            local_7c = (int)param_1 >> 1 & 1;
            pSVar8 = local_68;
            pSVar9 = local_60;
            if (local_7c == 0) {
               pSVar8 = local_60;
               pSVar9 = local_68;
            }

            iVar2 = SSL_write_ex(pSVar8, "Hello World", 0xb, &local_58);
            iVar2 = test_true("test/sslapitest.c", 0x1c7f, "SSL_write_ex(writer, msg, strlen(msg), &written)", iVar2 != 0);
            if (( iVar2 != 0 ) && ( local_58 == 0xb )) {
               iVar2 = SSL_read_ex(pSVar9, local_45, 5, &local_50);
               iVar2 = test_true("test/sslapitest.c", 0x1c87, "SSL_read_ex(reader, buf, sizeof(buf), &readbytes)", iVar2 != 0);
               if (( iVar2 != 0 ) && ( local_50 == 5 )) {
                  uVar6 = (int)param_1 >> 2 & 1;
                  SSL_shutdown(local_68);
                  SSL_shutdown(local_60);
                  if (local_7c == 0) {
                     if (uVar6 == 0) {
                        SSL_set_connect_state(local_68);
                     }
 else {
                        iVar2 = SSL_clear(local_68);
                        iVar2 = test_true("test/sslapitest.c", 0x1ca6, "SSL_clear(clientssl)", iVar2 != 0);
                        if (iVar2 == 0) goto LAB_0010f6d3;
                     }

                     SSL_free(local_60);
                     local_60 = (SSL*)0x0;
                  }
 else {
                     if (uVar6 == 0) {
                        SSL_set_accept_state(local_60);
                     }
 else {
                        iVar2 = SSL_clear(local_60);
                        iVar2 = test_true("test/sslapitest.c", 0x1c91, "SSL_clear(serverssl)", iVar2 != 0);
                        if (iVar2 == 0) goto LAB_0010f6d3;
                     }

                     iVar2 = SSL_set_session(local_60, (SSL_SESSION*)0x0);
                     iVar2 = test_true("test/sslapitest.c", 0x1ca0, "SSL_set_session(serverssl, NULL)", iVar2 != 0);
                     if (iVar2 == 0) goto LAB_0010f6d3;
                     SSL_free(local_68);
                     local_68 = (SSL*)0x0;
                  }

                  iVar2 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
                  iVar2 = test_true("test/sslapitest.c", 0x1caf, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = create_ssl_connection(local_60, local_68, 0);
                     iVar2 = test_true("test/sslapitest.c", 0x1cb1, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                     if (iVar2 != 0) {
                        if (local_7c == 0) {
                           iVar2 = SSL_session_reused(local_68);
                           local_7c = ( uint )(iVar2 != 0);
                        }

                        iVar2 = test_true("test/sslapitest.c", 0x1cb3, "servertest || SSL_session_reused(clientssl)", local_7c);
                        if (iVar2 != 0) {
                           uVar7 = 1;
                           SSL_shutdown(local_68);
                           SSL_shutdown(local_60);
                           goto LAB_0010f6d5;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_0010f6d3:uVar7 = 0;
   LAB_0010f6d5:SSL_free(local_60);
   SSL_free(local_68);
   SSL_CTX_free(local_70);
   SSL_CTX_free(local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
bool test_early_data_tls1_2(undefined4 param_1) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   SSL_CTX *local_88;
   SSL_CTX *local_80;
   SSL *local_78;
   SSL *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (SSL_CTX*)0x0;
   local_80 = (SSL_CTX*)0x0;
   local_78 = (SSL*)0x0;
   local_70 = (SSL*)0x0;
   setupearly_data_test(&local_88, &local_80, &local_78, &local_70, 0, param_1, 0x30);
   iVar1 = test_true("test/sslapitest.c", 0x1232, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, NULL, idx, SHA384_DIGEST_LENGTH)");
   if (iVar1 != 0) {
      SSL_ctrl(local_78, 0x7c, 0x303, (void*)0x0);
      SSL_set_connect_state(local_78);
      iVar1 = SSL_write_ex(local_78, "Hello", 5, &local_60);
      iVar1 = test_false("test/sslapitest.c", 0x123a, "SSL_write_ex(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
      if (iVar1 != 0) {
         uVar2 = SSL_read_early_data(local_70, local_58, 0x14, &local_68);
         iVar1 = test_int_eq("test/sslapitest.c", 0x1242, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_ERROR", uVar2, 0);
         if (iVar1 != 0) {
            iVar1 = SSL_write_ex(local_78, "Hello", 5, &local_60);
            iVar1 = test_false("test/sslapitest.c", 0x124b, "SSL_write_ex(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
            if (iVar1 != 0) {
               uVar2 = SSL_read_early_data(local_70, local_58, 0x14, &local_68);
               iVar1 = test_int_eq("test/sslapitest.c", 0x124c, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_FINISH", uVar2, 2);
               if (iVar1 != 0) {
                  iVar1 = test_size_t_eq("test/sslapitest.c", 0x124f, "readbytes", &_LC15, local_68, 0);
                  if (iVar1 != 0) {
                     uVar2 = SSL_get_early_data_status(local_70);
                     iVar1 = test_int_eq("test/sslapitest.c", 0x1250, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_NOT_SENT", uVar2, 0);
                     if (iVar1 != 0) {
                        iVar1 = SSL_write_ex(local_78, "Hello", 5, &local_60);
                        iVar1 = test_true("test/sslapitest.c", 0x1255, "SSL_write_ex(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
                        if (iVar1 != 0) {
                           iVar1 = test_size_t_eq("test/sslapitest.c", 0x1256, "written", "strlen(MSG1)", local_60, 5);
                           if (iVar1 != 0) {
                              uVar2 = SSL_get_early_data_status(local_78);
                              iVar1 = test_int_eq("test/sslapitest.c", 0x1257, "SSL_get_early_data_status(clientssl)", "SSL_EARLY_DATA_NOT_SENT", uVar2, 0);
                              if (iVar1 != 0) {
                                 iVar1 = SSL_read_ex(local_70, local_58, 0x14, &local_68);
                                 iVar1 = test_true("test/sslapitest.c", 0x1259, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                 if (iVar1 != 0) {
                                    iVar1 = test_mem_eq("test/sslapitest.c", 0x125a, &_LC80, &_LC569, local_58, local_68, "Hello", 5);
                                    if (iVar1 != 0) {
                                       iVar1 = SSL_write_ex(local_70, "World.", 6, &local_60);
                                       iVar1 = test_true("test/sslapitest.c", 0x125b, "SSL_write_ex(serverssl, MSG2, strlen(MSG2), &written)", iVar1 != 0);
                                       if (iVar1 != 0) {
                                          iVar1 = test_size_t_eq("test/sslapitest.c", 0x125c, "written", "strlen(MSG2)", local_60, 6);
                                          if (iVar1 != 0) {
                                             iVar1 = SSL_read_ex(local_78, local_58, 0x14, &local_68);
                                             if (iVar1 != 0) {
                                                iVar1 = test_mem_eq("test/sslapitest.c", 0x125e, &_LC80, &_LC534, local_58, local_68, "World.", 6);
                                                bVar3 = iVar1 != 0;
                                                goto LAB_0010fa74;
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar3 = false;
   LAB_0010fa74:SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_free(local_70);
   SSL_free(local_78);
   SSL_CTX_free(local_80);
   SSL_CTX_free(local_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_early_data_not_sent(undefined4 param_1) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   SSL_CTX *local_90;
   SSL_CTX *local_88;
   SSL *local_80;
   SSL *local_78;
   SSL_SESSION *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (SSL_CTX*)0x0;
   local_88 = (SSL_CTX*)0x0;
   local_80 = (SSL*)0x0;
   local_78 = (SSL*)0x0;
   local_70 = (SSL_SESSION*)0x0;
   iVar1 = setupearly_data_test(&local_90, &local_88, &local_80, &local_78, &local_70, param_1, 0x30);
   iVar1 = test_true("test/sslapitest.c", 0x105d, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, idx, SHA384_DIGEST_LENGTH)", iVar1 != 0);
   if (iVar1 != 0) {
      SSL_set_connect_state(local_80);
      iVar1 = SSL_write_ex(local_80, "Hello", 5, &local_60);
      iVar1 = test_false("test/sslapitest.c", 0x1064, "SSL_write_ex(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
      if (iVar1 != 0) {
         uVar2 = SSL_read_early_data(local_78, local_58, 0x14, &local_68);
         iVar1 = test_int_eq("test/sslapitest.c", 0x1068, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_FINISH", uVar2, 2);
         if (iVar1 != 0) {
            iVar1 = test_size_t_eq("test/sslapitest.c", 0x106b, "readbytes", &_LC15, local_68, 0);
            if (iVar1 != 0) {
               uVar2 = SSL_get_early_data_status(local_78);
               iVar1 = test_int_eq("test/sslapitest.c", 0x106c, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_NOT_SENT", uVar2, 0);
               if (iVar1 != 0) {
                  uVar2 = SSL_get_early_data_status(local_80);
                  iVar1 = test_int_eq("test/sslapitest.c", 0x106e, "SSL_get_early_data_status(clientssl)", "SSL_EARLY_DATA_NOT_SENT", uVar2, 0);
                  if (iVar1 != 0) {
                     iVar1 = SSL_write_ex(local_80, "Hello", 5, &local_60);
                     iVar1 = test_true("test/sslapitest.c", 0x1073, "SSL_write_ex(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
                     if (iVar1 != 0) {
                        iVar1 = test_size_t_eq("test/sslapitest.c", 0x1074, "written", "strlen(MSG1)", local_60, 5);
                        if (iVar1 != 0) {
                           iVar1 = SSL_read_ex(local_78, local_58, 0x14, &local_68);
                           iVar1 = test_true("test/sslapitest.c", 0x1075, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                           if (iVar1 != 0) {
                              iVar1 = test_mem_eq("test/sslapitest.c", 0x1076, &_LC80, &_LC569, local_58, local_68, "Hello", 5);
                              if (iVar1 != 0) {
                                 iVar1 = SSL_write_ex(local_78, "World.", 6, &local_60);
                                 if (iVar1 != 0) {
                                    iVar1 = test_size_t_eq("test/sslapitest.c", 0x1078, "written", "strlen(MSG2)", local_60, 6);
                                    if (iVar1 != 0) {
                                       iVar1 = SSL_read_ex(local_80, local_58, 0x14, &local_68);
                                       iVar1 = test_true("test/sslapitest.c", 0x107b, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                       if (iVar1 != 0) {
                                          iVar1 = test_mem_eq("test/sslapitest.c", 0x107c, &_LC80, &_LC534, local_58, local_68, "World.", 6);
                                          bVar3 = iVar1 != 0;
                                          goto LAB_0010fee6;
                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar3 = false;
   LAB_0010fee6:SSL_SESSION_free(local_70);
   SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_free(local_78);
   SSL_free(local_80);
   SSL_CTX_free(local_88);
   SSL_CTX_free(local_90);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_key_update_local_in_read(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 *puVar7;
   SSL *s;
   SSL *s_00;
   long in_FS_OFFSET;
   bool bVar8;
   SSL_CTX *local_4a8;
   SSL_CTX *local_4a0;
   SSL *local_498;
   SSL *local_490;
   BIO *local_488;
   BIO *local_480;
   undefined1 local_478[32];
   undefined1 local_458[528];
   undefined8 local_248;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4a8 = (SSL_CTX*)0x0;
   local_4a0 = (SSL_CTX*)0x0;
   local_498 = (SSL*)0x0;
   local_490 = (SSL*)0x0;
   local_488 = (BIO*)0x0;
   local_480 = (BIO*)0x0;
   puVar7 = &local_248;
   for (lVar6 = 0x40; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }

   *(undefined2*)puVar7 = 0;
   *(undefined1*)( (long)puVar7 + 2 ) = 0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x304, 0, &local_4a0, &local_4a8, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x1c03, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      iVar3 = create_ssl_objects(local_4a0, local_4a8, &local_490, &local_498, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x1c08, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_connection(local_490, local_498, 0);
         iVar3 = test_true("test/sslapitest.c", 0x1c0a, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            s = local_490;
            s_00 = local_498;
            if (param_1 != 0) {
               s = local_498;
               s_00 = local_490;
            }

            iVar3 = BIO_new_bio_pair(&local_488, 0x200, &local_480, 0x200);
            iVar3 = test_int_eq("test/sslapitest.c", 0x1c11, "BIO_new_bio_pair(&lbio, 512, &pbio, 512)", &_LC49, iVar3, 1);
            if (iVar3 != 0) {
               SSL_set_bio(s_00, local_488, local_488);
               SSL_set_bio(s, local_480, local_480);
               iVar3 = SSL_write(s, &local_248, 0x203);
               iVar3 = test_int_eq("test/sslapitest.c", 0x1c18, "SSL_write(peer, pwbuf, sizeof(pwbuf))", &_LC45, iVar3, 0xffffffff);
               if (iVar3 != 0) {
                  iVar3 = SSL_get_error(s, -1);
                  iVar3 = test_int_eq("test/sslapitest.c", 0x1c19, "SSL_get_error(peer, -1)", "SSL_ERROR_WANT_WRITE", iVar3, 3);
                  if (iVar3 != 0) {
                     iVar3 = SSL_read(s_00, local_458, 0x203);
                     iVar3 = test_int_eq("test/sslapitest.c", 0x1c1d, "SSL_read(local, lrbuf, sizeof(lrbuf))", &_LC45, iVar3, 0xffffffff);
                     if (iVar3 != 0) {
                        iVar3 = SSL_get_error(s_00, -1);
                        iVar3 = test_int_eq("test/sslapitest.c", 0x1c1e, "SSL_get_error(local, -1)", "SSL_ERROR_WANT_READ", iVar3, 2);
                        if (iVar3 != 0) {
                           iVar3 = SSL_key_update(s_00, 1);
                           iVar3 = test_true("test/sslapitest.c", 0x1c22, "SSL_key_update(local, SSL_KEY_UPDATE_REQUESTED)", iVar3 != 0);
                           if (iVar3 != 0) {
                              iVar3 = SSL_do_handshake(s_00);
                              iVar3 = test_int_eq("test/sslapitest.c", 0x1c23, "SSL_do_handshake(local)", &_LC49, iVar3, 1);
                              if (iVar3 != 0) {
                                 iVar3 = SSL_write(s, &local_248, 0x203);
                                 iVar3 = test_int_eq("test/sslapitest.c", 0x1c2a, "SSL_write(peer, pwbuf, sizeof(pwbuf))", "sizeof(pwbuf)", iVar3, 0x203);
                                 if (iVar3 != 0) {
                                    iVar3 = SSL_read(s_00, local_458, 0x203);
                                    iVar3 = test_int_eq("test/sslapitest.c", 0x1c2b, "SSL_read(local, lrbuf, sizeof(lrbuf))", "sizeof(lrbuf)", iVar3, 0x203);
                                    if (iVar3 != 0) {
                                       iVar3 = SSL_write(s_00, "A test message", 0xe);
                                       iVar3 = test_int_eq("test/sslapitest.c", 0x1c32, "SSL_write(local, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                       if (iVar3 != 0) {
                                          iVar3 = SSL_read(s, local_478, 0x14);
                                          iVar3 = test_int_eq("test/sslapitest.c", 0x1c33, "SSL_read(peer, prbuf, sizeof(prbuf))", "strlen(mess)", iVar3, 0xe);
                                          if (iVar3 != 0) {
                                             iVar3 = SSL_write(s, "A test message", 0xe);
                                             iVar3 = test_int_eq("test/sslapitest.c", 0x1c37, "SSL_write(peer, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                             if (iVar3 != 0) {
                                                iVar3 = SSL_read(s_00, local_458, 0x203);
                                                iVar3 = test_int_eq("test/sslapitest.c", 0x1c38, "SSL_read(local, lrbuf, sizeof(lrbuf))", "strlen(mess)", iVar3, 0xe);
                                                bVar8 = iVar3 != 0;
                                                goto LAB_00110321;
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar8 = false;
   LAB_00110321:SSL_free(local_490);
   SSL_free(local_498);
   SSL_CTX_free(local_4a0);
   SSL_CTX_free(local_4a8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_key_update_peer_in_read(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 *puVar7;
   SSL *s;
   SSL *s_00;
   long in_FS_OFFSET;
   bool bVar8;
   SSL_CTX *local_488;
   SSL_CTX *local_480;
   SSL *local_478;
   SSL *local_470;
   BIO *local_468;
   BIO *local_460;
   undefined1 local_458[528];
   undefined8 local_248;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_488 = (SSL_CTX*)0x0;
   local_480 = (SSL_CTX*)0x0;
   local_478 = (SSL*)0x0;
   local_470 = (SSL*)0x0;
   local_468 = (BIO*)0x0;
   local_460 = (BIO*)0x0;
   puVar7 = &local_248;
   for (lVar6 = 0x40; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }

   *(undefined2*)puVar7 = 0;
   *(undefined1*)( (long)puVar7 + 2 ) = 0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x304, 0, &local_480, &local_488, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x1b55, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      iVar3 = create_ssl_objects(local_480, local_488, &local_470, &local_478, 0, 0);
      iVar3 = test_true("test/sslapitest.c", 0x1b5a, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_connection(local_470, local_478, 0);
         iVar3 = test_true("test/sslapitest.c", 0x1b5c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            s = local_478;
            s_00 = local_470;
            if (param_1 != 0) {
               s = local_470;
               s_00 = local_478;
            }

            iVar3 = BIO_new_bio_pair(&local_468, 0x200, &local_460, 0x200);
            iVar3 = test_int_eq("test/sslapitest.c", 0x1b63, "BIO_new_bio_pair(&lbio, 512, &pbio, 512)", &_LC49, iVar3, 1);
            if (iVar3 != 0) {
               SSL_set_bio(s, local_468, local_468);
               SSL_set_bio(s_00, local_460, local_460);
               iVar3 = SSL_key_update(s, 1);
               iVar3 = test_true("test/sslapitest.c", 0x1b6f, "SSL_key_update(local, SSL_KEY_UPDATE_REQUESTED)", iVar3 != 0);
               if (iVar3 != 0) {
                  iVar3 = SSL_write(s, &local_248, 0x203);
                  iVar3 = test_int_eq("test/sslapitest.c", 0x1b70, "SSL_write(local, lwbuf, sizeof(lwbuf))", &_LC45, iVar3, 0xffffffff);
                  if (iVar3 != 0) {
                     iVar3 = SSL_get_error(s, -1);
                     iVar3 = test_int_eq("test/sslapitest.c", 0x1b71, "SSL_get_error(local, -1)", "SSL_ERROR_WANT_WRITE", iVar3, 3);
                     if (iVar3 != 0) {
                        iVar3 = SSL_read(s_00, local_458, 0x203);
                        iVar3 = test_int_eq("test/sslapitest.c", 0x1b78, "SSL_read(peer, prbuf, sizeof(prbuf))", &_LC45, iVar3, 0xffffffff);
                        if (iVar3 != 0) {
                           iVar3 = SSL_get_error(s_00, -1);
                           iVar3 = test_int_eq("test/sslapitest.c", 0x1b79, "SSL_get_error(peer, -1)", "SSL_ERROR_WANT_READ", iVar3, 2);
                           if (iVar3 != 0) {
                              iVar3 = SSL_write(s_00, "A test message", 0xe);
                              iVar3 = test_int_eq("test/sslapitest.c", 0x1b7d, "SSL_write(peer, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                              if (iVar3 != 0) {
                                 iVar3 = SSL_write(s, &local_248, 0x203);
                                 iVar3 = test_int_eq("test/sslapitest.c", 0x1b84, "SSL_write(local, lwbuf, sizeof(lwbuf))", "sizeof(lwbuf)", iVar3, 0x203);
                                 if (iVar3 != 0) {
                                    iVar3 = SSL_read(s_00, local_458, 0x203);
                                    iVar3 = test_int_eq("test/sslapitest.c", 0x1b85, "SSL_read(peer, prbuf, sizeof(prbuf))", "sizeof(prbuf)", iVar3, 0x203);
                                    if (iVar3 != 0) {
                                       iVar3 = SSL_write(s, "A test message", 0xe);
                                       iVar3 = test_int_eq("test/sslapitest.c", 0x1b89, "SSL_write(local, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                       if (iVar3 != 0) {
                                          iVar3 = SSL_read(s_00, local_458, 0x203);
                                          iVar3 = test_int_eq("test/sslapitest.c", 0x1b8a, "SSL_read(peer, prbuf, sizeof(prbuf))", "strlen(mess)", iVar3, 0xe);
                                          bVar8 = iVar3 != 0;
                                          goto LAB_00110831;
                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar8 = false;
   LAB_00110831:SSL_free(local_470);
   SSL_free(local_478);
   SSL_CTX_free(local_480);
   SSL_CTX_free(local_488);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_key_update_local_in_write(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   BIO_METHOD *type;
   BIO *a;
   undefined8 uVar5;
   undefined8 uVar6;
   BIO *a_00;
   ulong uVar7;
   SSL *s;
   SSL *ssl;
   long in_FS_OFFSET;
   SSL_CTX *local_78;
   SSL_CTX *local_70;
   SSL *local_68;
   SSL *local_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   type = (BIO_METHOD*)bio_s_always_retry();
   a = BIO_new(type);
   iVar3 = test_ptr("test/sslapitest.c", 0x1ba9, "bretry", a);
   uVar2 = cert;
   uVar1 = privkey;
   if (iVar3 != 0) {
      uVar5 = TLS_client_method();
      uVar6 = TLS_server_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x304, 0, &local_70, &local_78, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x1baa, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0x1baf, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = create_ssl_connection(local_60, local_68, 0);
            iVar3 = test_true("test/sslapitest.c", 0x1bb1, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
            if (iVar3 != 0) {
               s = local_68;
               ssl = local_60;
               if (param_1 != 0) {
                  s = local_60;
                  ssl = local_68;
               }

               a_00 = SSL_get_wbio(s);
               iVar3 = test_ptr("test/sslapitest.c", 0x1bba, &_LC51, a_00);
               if (iVar3 != 0) {
                  iVar3 = BIO_up_ref(a_00);
                  iVar3 = test_true("test/sslapitest.c", 0x1bba, "BIO_up_ref(tmp)", iVar3 != 0);
                  if (iVar3 == 0) {
                     a_00 = (BIO*)0x0;
                     uVar4 = 0;
                  }
 else {
                     SSL_set0_wbio(s, a);
                     iVar3 = SSL_write(s, "A test message", 0xe);
                     uVar4 = test_int_eq("test/sslapitest.c", 0x1bc2, "SSL_write(local, mess, strlen(mess))", &_LC45, iVar3, 0xffffffff);
                     a = (BIO*)0x0;
                     if (uVar4 != 0) {
                        iVar3 = SSL_get_error(s, -1);
                        uVar4 = test_int_eq("test/sslapitest.c", 0x1bc3, "SSL_get_error(local, -1)", "SSL_ERROR_WANT_WRITE", iVar3, 3);
                        if (uVar4 != 0) {
                           SSL_set0_wbio(s, a_00);
                           iVar3 = SSL_key_update(s, 1);
                           iVar3 = test_false("test/sslapitest.c", 0x1bcb, "SSL_key_update(local, SSL_KEY_UPDATE_REQUESTED)", iVar3 != 0);
                           if (iVar3 != 0) {
                              uVar7 = ERR_peek_error();
                              uVar4 = (uint)uVar7 & 0x7fffff;
                              if (( uVar7 & 0x80000000 ) != 0) {
                                 uVar4 = (uint)uVar7 & 0x7fffffff;
                              }

                              iVar3 = test_int_eq("test/sslapitest.c", 0x1bcc, "ERR_GET_REASON(ERR_peek_error())", "SSL_R_BAD_WRITE_RETRY", uVar4, 0x7f);
                              if (iVar3 != 0) {
                                 ERR_clear_error();
                                 iVar3 = SSL_write(s, "A test message", 0xe);
                                 iVar3 = test_int_eq("test/sslapitest.c", 0x1bd1, "SSL_write(local, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                 if (iVar3 != 0) {
                                    iVar3 = SSL_key_update(s, 1);
                                    iVar3 = test_true("test/sslapitest.c", 0x1bd5, "SSL_key_update(local, SSL_KEY_UPDATE_REQUESTED)", iVar3 != 0);
                                    if (iVar3 != 0) {
                                       iVar3 = SSL_do_handshake(s);
                                       iVar3 = test_int_eq("test/sslapitest.c", 0x1bd6, "SSL_do_handshake(local)", &_LC49, iVar3, 1);
                                       if (iVar3 != 0) {
                                          iVar3 = SSL_write(s, "A test message", 0xe);
                                          iVar3 = test_int_eq("test/sslapitest.c", 0x1bdd, "SSL_write(local, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                          if (iVar3 != 0) {
                                             iVar3 = SSL_read(ssl, local_58, 0x14);
                                             iVar3 = test_int_eq("test/sslapitest.c", 0x1bde, "SSL_read(peer, buf, sizeof(buf))", "strlen(mess)", iVar3, 0xe);
                                             if (iVar3 != 0) {
                                                iVar3 = SSL_write(ssl, "A test message", 0xe);
                                                iVar3 = test_int_eq("test/sslapitest.c", 0x1be2, "SSL_write(peer, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                                if (iVar3 != 0) {
                                                   iVar3 = SSL_read(s, local_58, 0x14);
                                                   iVar3 = test_int_eq("test/sslapitest.c", 0x1be3, "SSL_read(local, buf, sizeof(buf))", "strlen(mess)", iVar3, 0xe);
                                                   uVar4 = ( uint )(iVar3 != 0);
                                                   a_00 = (BIO*)0x0;
                                                   a = (BIO*)0x0;
                                                   goto LAB_00110c60;
                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                           a_00 = (BIO*)0x0;
                           a = (BIO*)0x0;
                           uVar4 = 0;
                        }

                     }

                  }

                  goto LAB_00110c60;
               }

            }

         }

      }

   }

   a_00 = (BIO*)0x0;
   uVar4 = 0;
   LAB_00110c60:SSL_free(local_60);
   SSL_free(local_68);
   SSL_CTX_free(local_70);
   SSL_CTX_free(local_78);
   BIO_free(a);
   BIO_free(a_00);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_key_update_peer_in_write(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   BIO_METHOD *type;
   BIO *a;
   undefined8 uVar5;
   undefined8 uVar6;
   BIO *a_00;
   SSL *s;
   SSL *s_00;
   long in_FS_OFFSET;
   SSL_CTX *local_78;
   SSL_CTX *local_70;
   SSL *local_68;
   SSL *local_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   type = (BIO_METHOD*)bio_s_always_retry();
   a = BIO_new(type);
   iVar3 = test_ptr("test/sslapitest.c", 0x1af7, "bretry", a);
   uVar2 = cert;
   uVar1 = privkey;
   if (iVar3 != 0) {
      uVar5 = TLS_client_method();
      uVar6 = TLS_server_method();
      iVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x304, 0, &local_70, &local_78, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x1af8, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0x1afd, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = create_ssl_connection(local_60, local_68, 0);
            iVar3 = test_true("test/sslapitest.c", 0x1aff, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
            if (iVar3 != 0) {
               s = local_68;
               s_00 = local_60;
               if (param_1 != 0) {
                  s = local_60;
                  s_00 = local_68;
               }

               iVar3 = SSL_key_update(s, 1);
               iVar3 = test_true("test/sslapitest.c", 0x1b06, "SSL_key_update(peerupdate, SSL_KEY_UPDATE_REQUESTED)", iVar3 != 0);
               if (iVar3 != 0) {
                  iVar3 = SSL_do_handshake(s);
                  iVar3 = test_int_eq("test/sslapitest.c", 0x1b07, "SSL_do_handshake(peerupdate)", &_LC49, iVar3, 1);
                  if (iVar3 != 0) {
                     a_00 = SSL_get_wbio(s_00);
                     iVar3 = test_ptr("test/sslapitest.c", 0x1b0c, &_LC51, a_00);
                     if (iVar3 != 0) {
                        iVar3 = BIO_up_ref(a_00);
                        iVar3 = test_true("test/sslapitest.c", 0x1b0c, "BIO_up_ref(tmp)", iVar3 != 0);
                        if (iVar3 != 0) {
                           SSL_set0_wbio(s_00, a);
                           iVar3 = SSL_write(s_00, "A test message", 0xe);
                           iVar3 = test_int_eq("test/sslapitest.c", 0x1b14, "SSL_write(peerwrite, mess, strlen(mess))", &_LC45, iVar3, 0xffffffff);
                           if (iVar3 != 0) {
                              a = (BIO*)0x0;
                              iVar3 = SSL_get_error(s_00, 0);
                              uVar4 = test_int_eq("test/sslapitest.c", 0x1b15, "SSL_get_error(peerwrite, 0)", "SSL_ERROR_WANT_WRITE", iVar3, 3);
                              if (uVar4 == 0) goto LAB_00111170;
                              iVar3 = SSL_want(s_00);
                              iVar3 = test_true("test/sslapitest.c", 0x1b16, "SSL_want_write(peerwrite)", iVar3 == 2);
                              if (iVar3 != 0) {
                                 iVar3 = SSL_net_write_desired(s_00);
                                 iVar3 = test_true("test/sslapitest.c", 0x1b17, "SSL_net_write_desired(peerwrite)", iVar3 != 0);
                                 if (iVar3 != 0) {
                                    SSL_set0_wbio(s_00, a_00);
                                    iVar3 = SSL_read(s_00, local_58, 0x14);
                                    iVar3 = test_int_eq("test/sslapitest.c", 0x1b1f, "SSL_read(peerwrite, buf, sizeof(buf))", &_LC45, iVar3, 0xffffffff);
                                    if (iVar3 != 0) {
                                       iVar3 = SSL_get_error(s_00, 0);
                                       iVar3 = test_int_eq("test/sslapitest.c", 0x1b20, "SSL_get_error(peerwrite, 0)", "SSL_ERROR_WANT_READ", iVar3, 2);
                                       if (iVar3 != 0) {
                                          iVar3 = SSL_want(s_00);
                                          iVar3 = test_true("test/sslapitest.c", 0x1b21, "SSL_want_read(peerwrite)", iVar3 == 3);
                                          if (iVar3 != 0) {
                                             iVar3 = SSL_net_read_desired(s_00);
                                             iVar3 = test_true("test/sslapitest.c", 0x1b22, "SSL_net_read_desired(peerwrite)", iVar3 != 0);
                                             if (iVar3 != 0) {
                                                iVar3 = SSL_write(s_00, "A test message", 0xe);
                                                iVar3 = test_int_eq("test/sslapitest.c", 0x1b29, "SSL_write(peerwrite, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                                if (iVar3 != 0) {
                                                   iVar3 = SSL_read(s, local_58, 0x14);
                                                   iVar3 = test_int_eq("test/sslapitest.c", 0x1b2a, "SSL_read(peerupdate, buf, sizeof(buf))", "strlen(mess)", iVar3, 0xe);
                                                   if (iVar3 != 0) {
                                                      iVar3 = SSL_write(s_00, "A test message", 0xe);
                                                      iVar3 = test_int_eq("test/sslapitest.c", 0x1b2e, "SSL_write(peerwrite, mess, strlen(mess))", "strlen(mess)", iVar3, 0xe);
                                                      if (iVar3 != 0) {
                                                         iVar3 = SSL_read(s, local_58, 0x14);
                                                         iVar3 = test_int_eq("test/sslapitest.c", 0x1b2f, "SSL_read(peerupdate, buf, sizeof(buf))", "strlen(mess)", iVar3, 0xe);
                                                         if (iVar3 != 0) {
                                                            iVar3 = SSL_net_read_desired(s_00);
                                                            iVar3 = test_false("test/sslapitest.c", 0x1b32, "SSL_net_read_desired(peerwrite)", iVar3 != 0);
                                                            if (iVar3 != 0) {
                                                               iVar3 = SSL_net_write_desired(s_00);
                                                               iVar3 = test_false("test/sslapitest.c", 0x1b33, "SSL_net_write_desired(peerwrite)", iVar3 != 0);
                                                               if (iVar3 != 0) {
                                                                  iVar3 = SSL_want(s_00);
                                                                  iVar3 = test_int_eq("test/sslapitest.c", 0x1b34, "SSL_want(peerwrite)", "SSL_NOTHING", iVar3, 1);
                                                                  uVar4 = ( uint )(iVar3 != 0);
                                                                  a_00 = (BIO*)0x0;
                                                                  a = (BIO*)0x0;
                                                                  goto LAB_00111170;
                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                    a_00 = (BIO*)0x0;
                                 }

                              }

                           }

                           a = (BIO*)0x0;
                           uVar4 = 0;
                           goto LAB_00111170;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   a_00 = (BIO*)0x0;
   uVar4 = 0;
   LAB_00111170:SSL_free(local_60);
   SSL_free(local_68);
   SSL_CTX_free(local_70);
   SSL_CTX_free(local_78);
   BIO_free(a);
   BIO_free(a_00);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_export_key_mat_early(undefined4 param_1) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   SSL_CTX *local_1c8;
   SSL_CTX *local_1c0;
   SSL *local_1b8;
   SSL *local_1b0;
   SSL_SESSION *local_1a8;
   undefined1 local_1a0[8];
   undefined1 local_198[15];
   undefined1 local_189;
   undefined1 local_188[80];
   undefined1 local_138[80];
   undefined1 local_e8[80];
   undefined1 local_98[88];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c8 = (SSL_CTX*)0x0;
   local_1c0 = (SSL_CTX*)0x0;
   local_1b8 = (SSL*)0x0;
   local_1b0 = (SSL*)0x0;
   local_1a8 = (SSL_SESSION*)0x0;
   iVar1 = setupearly_data_test(&local_1c8, &local_1c0, &local_1b8, &local_1b0, &local_1a8, param_1, 0x30);
   iVar1 = test_true("test/sslapitest.c", 0x1a74, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, idx, SHA384_DIGEST_LENGTH)", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = SSL_write_early_data(local_1b8, 0, 0, local_198);
      iVar1 = test_true("test/sslapitest.c", 0x1a79, "SSL_write_early_data(clientssl, NULL, 0, &written)", iVar1 != 0);
      if (iVar1 != 0) {
         uVar2 = SSL_read_early_data(local_1b0, &local_189, 1, local_1a0);
         iVar1 = test_int_eq("test/sslapitest.c", 0x1a7a, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_ERROR", uVar2, 0);
         if (iVar1 != 0) {
            uVar2 = SSL_get_early_data_status(local_1b0);
            iVar1 = test_int_eq("test/sslapitest.c", 0x1a7d, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_ACCEPTED", uVar2, 2);
            if (iVar1 != 0) {
               uVar2 = SSL_export_keying_material_early(local_1b8, local_188, 0x50, "test label", 10, "context", 7);
               iVar1 = test_int_eq("test/sslapitest.c", 0x1a81, "SSL_export_keying_material_early( clientssl, ckeymat1, sizeof(ckeymat1), label, sizeof(label) - 1, context, sizeof(context) - 1)", &_LC49, uVar2, 1);
               if (iVar1 != 0) {
                  uVar2 = SSL_export_keying_material_early(local_1b8, local_138, 0x50, "test label", 10, 0, 0);
                  iVar1 = test_int_eq("test/sslapitest.c", 0x1a84, "SSL_export_keying_material_early( clientssl, ckeymat2, sizeof(ckeymat2), label, sizeof(label) - 1, emptycontext, 0)", &_LC49, uVar2, 1);
                  if (iVar1 != 0) {
                     uVar2 = SSL_export_keying_material_early(local_1b0, local_e8, 0x50, "test label", 10, "context", 7);
                     iVar1 = test_int_eq("test/sslapitest.c", 0x1a87, "SSL_export_keying_material_early( serverssl, skeymat1, sizeof(skeymat1), label, sizeof(label) - 1, context, sizeof(context) - 1)", &_LC49, uVar2, 1);
                     if (iVar1 != 0) {
                        uVar2 = SSL_export_keying_material_early(local_1b0, local_98, 0x50, "test label", 10, 0, 0);
                        iVar1 = test_int_eq("test/sslapitest.c", 0x1a8a, "SSL_export_keying_material_early( serverssl, skeymat2, sizeof(skeymat2), label, sizeof(label) - 1, emptycontext, 0)", &_LC49, uVar2, 1);
                        if (iVar1 != 0) {
                           iVar1 = test_mem_eq("test/sslapitest.c", 0x1a91, "ckeymat1", "skeymat1", local_188, 0x50, local_e8, 0x50);
                           if (iVar1 != 0) {
                              iVar1 = test_mem_eq("test/sslapitest.c", 0x1a97, "ckeymat2", "skeymat2", local_138, 0x50, local_98, 0x50);
                              if (iVar1 != 0) {
                                 iVar1 = test_mem_ne("test/sslapitest.c", 0x1a9a, "ckeymat1", "ckeymat2", local_188, 0x50, local_138, 0x50);
                                 bVar3 = iVar1 != 0;
                                 goto LAB_00111789;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar3 = false;
   LAB_00111789:SSL_SESSION_free(local_1a8);
   SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_free(local_1b0);
   SSL_free(local_1b8);
   SSL_CTX_free(local_1c0);
   SSL_CTX_free(local_1c8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_stateless(void) {
   undefined8 uVar1;
   int iVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar1 = cert;
   uVar6 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0, &local_60, &local_58, uVar1, uVar6);
   iVar2 = test_true("test/sslapitest.c", 0x1767, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 != 0) {
      SSL_CTX_clear_options(local_58, 0x100000);
      iVar2 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 5999, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = create_ssl_connection(local_50, local_48, 2);
         iVar2 = test_false("test/sslapitest.c", 0x1772, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_WANT_READ)", iVar2 != 0);
         if (iVar2 != 0) {
            uVar3 = SSL_stateless(local_50);
            iVar2 = test_int_eq("test/sslapitest.c", 0x1778, "SSL_stateless(serverssl)", &_LC45, uVar3, 0xffffffff);
            if (iVar2 != 0) {
               SSL_free(local_48);
               local_48 = (SSL*)0x0;
               SSL_CTX_set_stateless_cookie_generate_cb(local_60, generate_stateless_cookie_callback);
               SSL_CTX_set_stateless_cookie_verify_cb(local_60, verify_stateless_cookie_callback);
               iVar2 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
               iVar2 = test_true("test/sslapitest.c", 0x1787, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
               if (iVar2 != 0) {
                  iVar2 = create_ssl_connection(local_50, local_48, 2);
                  iVar2 = test_false("test/sslapitest.c", 0x178a, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_WANT_READ)", iVar2 != 0);
                  if (iVar2 != 0) {
                     uVar3 = SSL_stateless(local_50);
                     iVar2 = test_int_eq("test/sslapitest.c", 0x178d, "SSL_stateless(serverssl)", &_LC15, uVar3, 0);
                     if (iVar2 != 0) {
                        SSL_free(local_48);
                        local_48 = (SSL*)0x0;
                        iVar2 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
                        iVar2 = test_true("test/sslapitest.c", 0x1798, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = create_ssl_connection(local_50, local_48, 2);
                           iVar2 = test_false("test/sslapitest.c", 0x179b, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_WANT_READ)", iVar2 != 0);
                           if (iVar2 != 0) {
                              uVar3 = SSL_stateless(local_50);
                              iVar2 = test_int_eq("test/sslapitest.c", 0x179e, "SSL_stateless(serverssl)", &_LC15, uVar3, 0);
                              if (iVar2 != 0) {
                                 iVar2 = create_ssl_connection(local_50, local_48, 2);
                                 iVar2 = test_false("test/sslapitest.c", 0x17a0, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_WANT_READ)", iVar2 != 0);
                                 if (iVar2 != 0) {
                                    uVar3 = SSL_stateless(local_50);
                                    iVar2 = test_int_eq("test/sslapitest.c", 0x17a3, "SSL_stateless(serverssl)", &_LC49, uVar3, 1);
                                    if (iVar2 != 0) {
                                       iVar2 = create_ssl_connection(local_50, local_48, 0);
                                       iVar2 = test_true("test/sslapitest.c", 0x17a5, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                                       if (iVar2 != 0) {
                                          uVar6 = 1;
                                          shutdown_ssl_connection(local_50, local_48);
                                          local_48 = (SSL*)0x0;
                                          local_50 = (SSL*)0x0;
                                          goto LAB_00111b99;
                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   uVar6 = 0;
   LAB_00111b99:SSL_free(local_50);
   SSL_free(local_48);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_custom_exts(int param_1) {
   uint uVar1;
   char *pcVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   SSL_SESSION *session;
   long lVar6;
   uint uVar7;
   long in_FS_OFFSET;
   undefined4 *puVar8;
   char *pcVar9;
   undefined4 *puVar10;
   undefined4 *puVar11;
   SSL_CTX *local_68;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   pcVar2 = cert;
   pcVar9 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   srvparseoldcb = 0;
   srvaddoldcb = 0;
   clntparseoldcb = 0;
   clntaddoldcb = 0;
   srvparsenewcb = 0;
   srvaddnewcb = 0;
   clntparsenewcb = 0;
   clntaddnewcb = 0;
   snicb = 0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0, &local_60, &local_68, pcVar2, pcVar9);
   iVar3 = test_true("test/sslapitest.c", 0x184d, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   pcVar2 = cert;
   pcVar9 = privkey;
   if (iVar3 != 0) {
      if (param_1 == 2) {
         uVar4 = TLS_server_method();
         iVar3 = create_ssl_ctx_pair(libctx, uVar4, 0, 0x301, 0, &local_58, 0, pcVar2, pcVar9);
         iVar3 = test_true("test/sslapitest.c", 0x1853, "create_ssl_ctx_pair(libctx, TLS_server_method(), NULL, TLS1_VERSION, 0, &sctx2, NULL, cert, privkey)", iVar3 != 0);
         if (iVar3 != 0) {
            SSL_CTX_set_options(local_68, 0x20000000);
            SSL_CTX_set_options(local_60, 0x20000000);
            if (local_58 != (SSL_CTX*)0x0) {
               SSL_CTX_set_options(local_58, 0x20000000);
            }

            LAB_00112047:uVar4 = 0x580;
            LAB_0011204d:iVar3 = SSL_CTX_add_custom_ext(local_68, 0xff00, uVar4, new_add_cb, new_free_cb, &client_5, new_parse_cb, &client_5);
            iVar3 = test_true("test/sslapitest.c", 0x1881, "SSL_CTX_add_custom_ext(cctx, TEST_EXT_TYPE1, context, new_add_cb, new_free_cb, &client, new_parse_cb, &client)", iVar3 != 0);
            if (iVar3 != 0) {
               pcVar9 = "SSL_CTX_add_client_custom_ext(cctx, TEST_EXT_TYPE1, old_add_cb, old_free_cb, &client, old_parse_cb, &client)";
               goto LAB_001120b8;
            }

         }

      }
 else if (param_1 < 3) {
         SSL_CTX_set_options(local_68, 0x20000000);
         SSL_CTX_set_options(local_60, 0x20000000);
         if (local_58 != (SSL_CTX*)0x0) {
            SSL_CTX_set_options(local_58, 0x20000000);
         }

         if (param_1 != 0) goto LAB_00112047;
         iVar3 = SSL_CTX_add_client_custom_ext(local_68, 0xff00, old_add_cb, old_free_cb, &client_5, old_parse_cb, &client_5);
         pcVar9 = "SSL_CTX_add_client_custom_ext(cctx, TEST_EXT_TYPE1, old_add_cb, old_free_cb, &client, old_parse_cb, &client)";
         iVar3 = test_true("test/sslapitest.c", 0x187b, "SSL_CTX_add_client_custom_ext(cctx, TEST_EXT_TYPE1, old_add_cb, old_free_cb, &client, old_parse_cb, &client)", iVar3 != 0);
         uVar4 = 0x580;
         if (iVar3 == 0) goto LAB_00112108;
         LAB_001120b8:iVar3 = SSL_CTX_add_client_custom_ext(local_68, 0xff00, old_add_cb, old_free_cb, &client_5, old_parse_cb, &client_5);
         iVar3 = test_false("test/sslapitest.c", 0x1888, pcVar9, iVar3 != 0);
         if (iVar3 != 0) {
            puVar8 = &client_5;
            iVar3 = SSL_CTX_add_custom_ext(local_68, 0xff00, uVar4, new_add_cb, new_free_cb, &client_5, new_parse_cb, &client_5);
            iVar3 = test_false("test/sslapitest.c", 0x188c, "SSL_CTX_add_custom_ext(cctx, TEST_EXT_TYPE1, context, new_add_cb, new_free_cb, &client, new_parse_cb, &client)", iVar3 != 0);
            if (iVar3 != 0) {
               if (param_1 == 0) {
                  puVar10 = &server_4;
                  iVar3 = SSL_CTX_add_server_custom_ext(local_60, 0xff00, old_add_cb, old_free_cb, &server_4, old_parse_cb, &server_4, puVar8, pcVar9, &server_4);
                  pcVar9 = "SSL_CTX_add_server_custom_ext(sctx, TEST_EXT_TYPE1, old_add_cb, old_free_cb, &server, old_parse_cb, &server)";
                  iVar3 = test_true("test/sslapitest.c", 0x1894, "SSL_CTX_add_server_custom_ext(sctx, TEST_EXT_TYPE1, old_add_cb, old_free_cb, &server, old_parse_cb, &server)", iVar3 != 0);
                  if (iVar3 != 0) goto LAB_00112232;
               }
 else {
                  puVar8 = &server_4;
                  puVar10 = &server_4;
                  iVar3 = SSL_CTX_add_custom_ext(local_60, 0xff00, uVar4, new_add_cb, new_free_cb, &server_4, new_parse_cb, &server_4);
                  iVar3 = test_true("test/sslapitest.c", 0x189a, "SSL_CTX_add_custom_ext(sctx, TEST_EXT_TYPE1, context, new_add_cb, new_free_cb, &server, new_parse_cb, &server)", iVar3 != 0);
                  if (iVar3 != 0) {
                     if (local_58 == (SSL_CTX*)0x0) {
                        pcVar9 = "SSL_CTX_add_server_custom_ext(sctx, TEST_EXT_TYPE1, old_add_cb, old_free_cb, &server, old_parse_cb, &server)";
                     }
 else {
                        puVar11 = puVar10;
                        iVar3 = SSL_CTX_add_custom_ext(local_58, 0xff00, uVar4, new_add_cb, new_free_cb, puVar10, new_parse_cb, puVar10, puVar10, puVar10);
                        puVar8 = puVar10;
                        puVar10 = puVar11;
                        iVar3 = test_true("test/sslapitest.c", 0x189f, "SSL_CTX_add_custom_ext(sctx2, TEST_EXT_TYPE1, context, new_add_cb, new_free_cb, &server, new_parse_cb, &server)", iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00112108;
                        pcVar9 = "SSL_CTX_add_server_custom_ext(sctx, TEST_EXT_TYPE1, old_add_cb, old_free_cb, &server, old_parse_cb, &server)";
                     }

                     LAB_00112232:iVar3 = SSL_CTX_add_server_custom_ext(local_60, 0xff00, old_add_cb, old_free_cb, &server_4, old_parse_cb, puVar10, puVar8, pcVar9, puVar10);
                     iVar3 = test_false("test/sslapitest.c", 0x18a7, pcVar9, iVar3 != 0);
                     if (iVar3 != 0) {
                        iVar3 = SSL_CTX_add_custom_ext(local_60, 0xff00, uVar4, new_add_cb, new_free_cb, &server_4, new_parse_cb, puVar10);
                        iVar3 = test_false("test/sslapitest.c", 0x18ab, "SSL_CTX_add_custom_ext(sctx, TEST_EXT_TYPE1, context, new_add_cb, new_free_cb, &server, new_parse_cb, &server)", iVar3 != 0);
                        if (iVar3 != 0) {
                           if (param_1 == 2) {
                              lVar6 = SSL_CTX_callback_ctrl(local_60, 0x35, sni_cb);
                              iVar3 = test_true("test/sslapitest.c", 0x18b3, "SSL_CTX_set_tlsext_servername_callback(sctx, sni_cb)", lVar6 != 0);
                              if (iVar3 != 0) {
                                 lVar6 = SSL_CTX_ctrl(local_60, 0x36, 0, local_58);
                                 iVar3 = test_true("test/sslapitest.c", 0x18b4, "SSL_CTX_set_tlsext_servername_arg(sctx, sctx2)", lVar6 != 0);
                                 if (iVar3 != 0) goto LAB_001122e8;
                              }

                           }
 else {
                              LAB_001122e8:iVar3 = create_ssl_objects(local_60, local_68, &local_48, &local_50, 0, 0);
                              iVar3 = test_true("test/sslapitest.c", 0x18b8, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                              if (iVar3 != 0) {
                                 create_ssl_connection(local_48, local_50, 0);
                                 iVar3 = test_true("test/sslapitest.c", 0x18ba, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
                                 uVar7 = srvparsenewcb;
                                 if (iVar3 != 0) {
                                    if (param_1 == 0) {
                                       if (( ( clntaddoldcb == 1 ) && ( clntparseoldcb == 1 ) ) && ( uVar1 = srvaddoldcb == 1 )) {
                                          joined_r0x00112a0b:if (uVar1 == 1) {
                                             session = SSL_get1_session(local_50);
                                             SSL_shutdown(local_50);
                                             SSL_shutdown(local_48);
                                             SSL_free(local_48);
                                             SSL_free(local_50);
                                             LAB_001123e4:local_48 = (SSL*)0x0;
                                             local_50 = (SSL*)0x0;
                                             iVar3 = create_ssl_objects(local_60, local_68, &local_48, &local_50, 0, 0);
                                             iVar3 = test_true("test/sslapitest.c", 0x18e8, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                                             if (iVar3 != 0) {
                                                iVar3 = SSL_set_session(local_50, session);
                                                iVar3 = test_true("test/sslapitest.c", 0x18ea, "SSL_set_session(clientssl, sess)", iVar3 != 0);
                                                if (iVar3 != 0) {
                                                   iVar3 = create_ssl_connection(local_48, local_50, 0);
                                                   iVar3 = test_true("test/sslapitest.c", 0x18eb, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                                                   if (iVar3 != 0) {
                                                      if (param_1 == 0) {
                                                         if (( ( clntaddoldcb == 2 ) && ( clntparseoldcb == 1 ) ) && ( srvaddoldcb == 1 )) {
                                                            uVar7 = ( uint )(srvparseoldcb == 1);
                                                            goto LAB_0011210e;
                                                         }

                                                      }
 else if (param_1 - 1U < 3) {
                                                         if (( ( clntaddnewcb == 2 ) && ( clntparsenewcb == 2 ) ) && ( srvaddnewcb == 2 )) {
                                                            LAB_00112a47:uVar7 = ( uint )(srvparsenewcb == 2);
                                                            goto LAB_0011210e;
                                                         }

                                                      }
 else if (( ( clntaddnewcb == 2 ) && ( clntparsenewcb == 8 ) ) && ( srvaddnewcb == 8 )) goto LAB_00112a47;
                                                   }

                                                }

                                             }

                                             uVar7 = 0;
                                             goto LAB_0011210e;
                                          }

                                       }

                                    }
 else if (param_1 - 1U < 3) {
                                       if (( ( clntaddnewcb == 1 ) && ( clntparsenewcb == 1 ) ) && ( ( srvaddnewcb == 1 && ( srvparsenewcb == 1 ) ) )) {
                                          uVar1 = snicb;
                                          if (param_1 == 2) goto joined_r0x00112a0b;
                                          if (snicb == 0) {
                                             session = SSL_get1_session(local_50);
                                             SSL_shutdown(local_50);
                                             SSL_shutdown(local_48);
                                             SSL_free(local_48);
                                             SSL_free(local_50);
                                             local_50 = (SSL*)0x0;
                                             local_48 = (SSL*)0x0;
                                             if (( param_1 - 3U & 0xfffffffd ) == 0) goto LAB_0011210e;
                                             goto LAB_001123e4;
                                          }

                                       }

                                    }
 else if (param_1 == 5) {
                                       if (( ( ( clntaddnewcb == 1 ) && ( clntparsenewcb == 1 ) ) && ( srvaddnewcb == 1 ) ) && ( srvparsenewcb == 1 )) {
                                          session = SSL_get1_session(local_50);
                                          SSL_shutdown(local_50);
                                          SSL_shutdown(local_48);
                                          SSL_free(local_48);
                                          SSL_free(local_50);
                                          local_50 = (SSL*)0x0;
                                          local_48 = (SSL*)0x0;
                                          goto LAB_0011210e;
                                       }

                                    }
 else if (( ( clntaddnewcb == 1 ) && ( clntparsenewcb == 5 ) ) && ( uVar1 = srvaddnewcb == 5 )) goto joined_r0x00112a0b;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }
 else {
         if (param_1 != 5) {
            if (param_1 != 4) goto LAB_00112047;
            uVar4 = 0x3780;
            goto LAB_0011204d;
         }

         SSL_CTX_set_verify(local_60, 3, verify_cb);
         iVar3 = SSL_CTX_use_certificate_file(local_68, cert, 1);
         iVar3 = test_int_eq("test/sslapitest.c", 0x1866, "SSL_CTX_use_certificate_file(cctx, cert, SSL_FILETYPE_PEM)", &_LC49, iVar3, 1);
         if (iVar3 != 0) {
            iVar3 = SSL_CTX_use_PrivateKey_file(local_68, privkey, 1);
            iVar3 = test_int_eq("test/sslapitest.c", 0x1868, "SSL_CTX_use_PrivateKey_file(cctx, privkey, SSL_FILETYPE_PEM)", &_LC49, iVar3, 1);
            if (iVar3 != 0) {
               iVar3 = SSL_CTX_check_private_key(local_68);
               iVar3 = test_int_eq("test/sslapitest.c", 0x186a, "SSL_CTX_check_private_key(cctx)", &_LC49, iVar3, 1);
               if (iVar3 != 0) {
                  uVar4 = 0x5000;
                  goto LAB_0011204d;
               }

            }

         }

      }

   }

   LAB_00112108:session = (SSL_SESSION*)0x0;
   uVar7 = 0;
   LAB_0011210e:SSL_SESSION_free(session);
   SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong test_key_exchange(int param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 uVar7;
   ulong uVar8;
   ulong uVar9;
   char *pcVar10;
   char *pcVar11;
   undefined4 uVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   char *local_80;
   undefined4 *local_78;
   long local_70;
   undefined4 local_64;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_64 = 0;
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   switch (param_1) {
      case 0:
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_70 = 5;
    local_80 = "secp256r1";
    local_78 = &ecdhe_kexch_groups;
    break;
      case 1:
    local_64 = 0x19f;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "secp256r1";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 2:
    local_64 = 0x2cb;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "secp384r1";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 3:
    local_64 = 0x2cc;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "secp521r1";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 4:
    uVar3 = 0x40a;
    local_80 = "x25519";
    if (is_fips != 0) {
      test_skip("test/sslapitest.c",0x1393,"X25519 might not be supported by fips provider.");
      uVar9 = FUN_00112f68();
      return uVar9;
    }
    goto LAB_0011307f;
      case 5:
    uVar3 = 0x40b;
    local_80 = "x448";
    if (is_fips != 0) {
      test_skip("test/sslapitest.c",0x1399,"X448 might not be supported by fips provider.");
      uVar9 = FUN_00112f68();
      return uVar9;
    }
LAB_0011307f:
    local_78 = &local_64;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_70 = 1;
    local_64 = uVar3;
    goto LAB_00112b4a;
      case 6:
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_70 = 5;
    local_80 = "ffdhe2048";
    local_78 = &ffdhe_kexch_groups;
    break;
      case 7:
    local_64 = 0x466;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "ffdhe2048";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 8:
    local_64 = 0x467;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "ffdhe3072";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 9:
    local_64 = 0x468;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "ffdhe4096";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 10:
    local_64 = 0x469;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "ffdhe6144";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 0xb:
    local_64 = 0x46a;
    pcVar10 = (char *)0x0;
    uVar12 = 0x304;
    local_80 = "ffdhe8192";
    local_78 = &local_64;
    local_70 = 1;
    break;
      case 0xc:
    pcVar10 = "MLKEM512:MLKEM768:MLKEM1024";
    local_70 = 1;
    uVar12 = 0x304;
    local_80 = "MLKEM512";
    local_78 = (undefined4 *)0x0;
    break;
      case 0xd:
    pcVar10 = "MLKEM512";
    uVar12 = 0x304;
    local_70 = 1;
    local_80 = "MLKEM512";
    local_78 = (undefined4 *)0x0;
    break;
      case 0xe:
    pcVar10 = "MLKEM768";
    uVar12 = 0x304;
    local_70 = 1;
    local_80 = "MLKEM768";
    local_78 = (undefined4 *)0x0;
    break;
      case 0xf:
    pcVar10 = "MLKEM1024";
    uVar12 = 0x304;
    local_70 = 1;
    local_80 = "MLKEM1024";
    local_78 = (undefined4 *)0x0;
    break;
      case 0x10:
    pcVar10 = "X25519MLKEM768";
    uVar12 = 0x304;
    local_70 = 1;
    local_80 = "X25519MLKEM768";
    local_78 = (undefined4 *)0x0;
    break;
      case 0x11:
    pcVar10 = "SecP256r1MLKEM768";
    uVar12 = 0x304;
    local_70 = 1;
    local_80 = "SecP256r1MLKEM768";
    local_78 = (undefined4 *)0x0;
    break;
      case 0x12:
    pcVar10 = "SecP384r1MLKEM1024";
    uVar12 = 0x304;
    local_70 = 1;
    local_80 = "SecP384r1MLKEM1024";
    local_78 = (undefined4 *)0x0;
    break;
      case 0x13:
    pcVar10 = "MLKEM512:MLKEM768:MLKEM1024:secp256r1";
    local_70 = 1;
    uVar12 = 0x303;
    local_80 = "MLKEM512";
    local_78 = (undefined4 *)0x0;
    break;
      case 0x14:
    pcVar10 = (char *)0x0;
    uVar12 = 0x303;
    local_70 = 5;
    local_80 = "ffdhe2048";
    local_78 = &ffdhe_kexch_groups;
    break;
      case 0x15:
    pcVar10 = (char *)0x0;
    uVar12 = 0x303;
    local_70 = 5;
    local_80 = "secp256r1";
    local_78 = &ecdhe_kexch_groups;
    break;
      default:
    uVar9 = FUN_00112f68();
    return uVar9;
   }

   if (( ( is_fips != 0 ) && ( iVar2 = fips_provider_version_lt(libctx, 3, 5, 0) ),iVar2 != 0 )) {
      test_skip("test/sslapitest.c", 0x13ff, "ML-KEM not supported in this version of fips provider");
      uVar9 = FUN_00112f68();
      return uVar9;
   }

   LAB_00112b4a:uVar1 = cert;
   uVar7 = privkey;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, uVar12, &local_60, &local_58, uVar1, uVar7);
   iVar2 = test_true("test/sslapitest.c", 0x1401, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, max_version, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 != 0) {
      iVar2 = SSL_CTX_set_ciphersuites(local_60, "TLS_AES_128_GCM_SHA256");
      iVar2 = test_true("test/sslapitest.c", 0x1407, "SSL_CTX_set_ciphersuites(sctx, TLS1_3_RFC_AES_128_GCM_SHA256)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = SSL_CTX_set_ciphersuites(local_58, "TLS_AES_128_GCM_SHA256");
         iVar2 = test_true("test/sslapitest.c", 0x140b, "SSL_CTX_set_ciphersuites(cctx, TLS1_3_RFC_AES_128_GCM_SHA256)", iVar2 != 0);
         if (iVar2 != 0) {
            SSL_CTX_set_cipher_list(local_60, "ECDHE-RSA-AES128-GCM-SHA256:DHE-RSA-AES128-GCM-SHA256");
            iVar2 = test_true("test/sslapitest.c", 0x140f, "SSL_CTX_set_cipher_list(sctx, TLS1_TXT_ECDHE_RSA_WITH_AES_128_GCM_SHA256 \":\" TLS1_TXT_DHE_RSA_WITH_AES_128_GCM_SHA256)");
            if (iVar2 != 0) {
               lVar6 = SSL_CTX_ctrl(local_60, 0x76, 1, (void*)0x0);
               iVar2 = test_true("test/sslapitest.c", 0x1412, "SSL_CTX_set_dh_auto(sctx, 1)", lVar6 != 0);
               if (iVar2 != 0) {
                  iVar2 = SSL_CTX_set_cipher_list(local_58, "ECDHE-RSA-AES128-GCM-SHA256:DHE-RSA-AES128-GCM-SHA256");
                  iVar2 = test_true("test/sslapitest.c", 0x141a, "SSL_CTX_set_cipher_list(cctx, TLS1_TXT_ECDHE_RSA_WITH_AES_128_GCM_SHA256 \":\" TLS1_TXT_DHE_RSA_WITH_AES_128_GCM_SHA256)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
                     iVar2 = test_true("test/sslapitest.c", 0x1420, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                     if (iVar2 != 0) {
                        if (local_78 == (undefined4*)0x0) {
                           lVar6 = SSL_ctrl(local_50, 0x5c, 0, pcVar10);
                           iVar2 = test_true("test/sslapitest.c", 0x1429, "SSL_set1_groups_list(serverssl, kexch_names)", lVar6 != 0);
                           if (iVar2 != 0) {
                              lVar6 = SSL_ctrl(local_48, 0x5c, 0, pcVar10);
                              iVar2 = test_true("test/sslapitest.c", 0x142a, "SSL_set1_groups_list(clientssl, kexch_names)", lVar6 != 0);
                              goto joined_r0x0011343f;
                           }

                        }
 else {
                           lVar6 = SSL_ctrl(local_50, 0x5b, local_70, local_78);
                           iVar2 = test_true("test/sslapitest.c", 0x1425, "SSL_set1_groups(serverssl, kexch_groups, kexch_groups_size)", lVar6 != 0);
                           if (iVar2 != 0) {
                              lVar6 = SSL_ctrl(local_48, 0x5b, local_70, local_78);
                              iVar2 = test_true("test/sslapitest.c", 0x1426, "SSL_set1_groups(clientssl, kexch_groups, kexch_groups_size)", lVar6 != 0);
                              joined_r0x0011343f:if (iVar2 != 0) {
                                 create_ssl_connection(local_50, local_48, 0);
                                 iVar2 = test_true("test/sslapitest.c", 0x142e, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
                                 if (iVar2 != 0) {
                                    uVar9 = SSL_ctrl(local_50, 0x5d, 0, (void*)0x0);
                                    if (param_1 == 0x13) {
                                       uVar13 = 0x19f;
                                       uVar8 = uVar9 & 0xffffffff;
                                       pcVar10 = "NID_X9_62_prime256v1";
                                       uVar7 = 0x143c;
                                       pcVar11 = "shared_group0";
                                    }
 else {
                                       if (param_1 != 0x14) {
                                          if (( local_78 == (undefined4*)0x0 ) || ( iVar2 = test_int_eq("test/sslapitest.c", 0x1447, "shared_group0", "kexch_groups[0]", uVar9 & 0xffffffff, *local_78) ),iVar2 != 0) {
                                             uVar7 = SSL_group_to_name(local_50, uVar9 & 0xffffffff);
                                             iVar2 = test_str_eq("test/sslapitest.c", 0x1449, "SSL_group_to_name(serverssl, shared_group0)", "kexch_name0", uVar7, local_80);
                                             if (iVar2 != 0) {
                                                uVar7 = SSL_get0_group_name(local_50);
                                                iVar2 = test_str_eq("test/sslapitest.c", 0x144c, "SSL_get0_group_name(serverssl)", "kexch_name0", uVar7, local_80);
                                                if (iVar2 != 0) {
                                                   uVar7 = SSL_get0_group_name(local_48);
                                                   iVar2 = test_str_eq("test/sslapitest.c", 0x144d, "SSL_get0_group_name(clientssl)", "kexch_name0", uVar7, local_80);
                                                   if (iVar2 != 0) {
                                                      uVar8 = SSL_ctrl(local_50, 0x86, 0, (void*)0x0);
                                                      iVar2 = test_int_eq("test/sslapitest.c", 0x144f, "SSL_get_negotiated_group(serverssl)", "shared_group0", uVar8 & 0xffffffff, uVar9 & 0xffffffff);
                                                      if (iVar2 != 0) {
                                                         uVar8 = SSL_ctrl(local_48, 0x86, 0, (void*)0x0);
                                                         uVar13 = uVar9 & 0xffffffff;
                                                         pcVar10 = "shared_group0";
                                                         uVar7 = 0x1451;
                                                         uVar8 = uVar8 & 0xffffffff;
                                                         pcVar11 = "SSL_get_negotiated_group(clientssl)";
                                                         goto LAB_00112f2b;
                                                      }

                                                   }

                                                }

                                             }

                                          }

                                          goto LAB_00113448;
                                       }

                                       uVar13 = 0;
                                       uVar8 = uVar9 & 0xffffffff;
                                       pcVar10 = "0";
                                       uVar7 = 0x1442;
                                       pcVar11 = "shared_group0";
                                    }

                                    LAB_00112f2b:iVar2 = test_int_eq("test/sslapitest.c", uVar7, pcVar11, pcVar10, uVar8, uVar13);
                                    uVar9 = ( ulong )(iVar2 != 0);
                                    goto LAB_00112f40;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_00113448:uVar9 = 0;
   LAB_00112f40:SSL_free(local_50);
   SSL_free(local_48);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 FUN_00112f68(void) {
   undefined4 unaff_EBX;
   long in_FS_OFFSET;
   long in_stack_00000048;
   if (in_stack_00000048 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return unaff_EBX;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong switchD_00112ae9::caseD_0(void) {
   undefined8 uVar1;
   undefined4 *parg;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
   undefined8 uVar8;
   ulong uVar9;
   char *pcVar10;
   char *pcVar11;
   int unaff_EBX;
   ulong uVar12;
   long in_FS_OFFSET;
   char *pcStack0000000000000008;
   undefined4 *puStack0000000000000010;
   long lStack0000000000000018;
   SSL_CTX *in_stack_00000028;
   SSL_CTX *in_stack_00000030;
   SSL *in_stack_00000038;
   SSL *in_stack_00000040;
   long in_stack_00000048;
   lStack0000000000000018 = 5;
   pcStack0000000000000008 = "secp256r1";
   puStack0000000000000010 = &ecdhe_kexch_groups;
   if (( ( is_fips != 0 ) && ( iVar2 = fips_provider_version_lt(libctx, 3, 5, 0) ),iVar2 != 0 )) {
      test_skip("test/sslapitest.c", 0x13ff, "ML-KEM not supported in this version of fips provider");
      uVar7 = FUN_00112f68();
      return uVar7;
   }

   uVar1 = cert;
   uVar8 = privkey;
   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0x304, &stack0x00000028, &stack0x00000030, uVar1, uVar8);
   iVar2 = test_true("test/sslapitest.c", 0x1401, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, max_version, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 != 0) {
      iVar2 = SSL_CTX_set_ciphersuites(in_stack_00000028, "TLS_AES_128_GCM_SHA256");
      iVar2 = test_true("test/sslapitest.c", 0x1407, "SSL_CTX_set_ciphersuites(sctx, TLS1_3_RFC_AES_128_GCM_SHA256)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = SSL_CTX_set_ciphersuites(in_stack_00000030, "TLS_AES_128_GCM_SHA256");
         iVar2 = test_true("test/sslapitest.c", 0x140b, "SSL_CTX_set_ciphersuites(cctx, TLS1_3_RFC_AES_128_GCM_SHA256)", iVar2 != 0);
         if (iVar2 != 0) {
            SSL_CTX_set_cipher_list(in_stack_00000028, "ECDHE-RSA-AES128-GCM-SHA256:DHE-RSA-AES128-GCM-SHA256");
            iVar2 = test_true("test/sslapitest.c", 0x140f, "SSL_CTX_set_cipher_list(sctx, TLS1_TXT_ECDHE_RSA_WITH_AES_128_GCM_SHA256 \":\" TLS1_TXT_DHE_RSA_WITH_AES_128_GCM_SHA256)");
            if (iVar2 != 0) {
               lVar5 = SSL_CTX_ctrl(in_stack_00000028, 0x76, 1, (void*)0x0);
               iVar2 = test_true("test/sslapitest.c", 0x1412, "SSL_CTX_set_dh_auto(sctx, 1)", lVar5 != 0);
               if (iVar2 != 0) {
                  iVar2 = SSL_CTX_set_cipher_list(in_stack_00000030, "ECDHE-RSA-AES128-GCM-SHA256:DHE-RSA-AES128-GCM-SHA256");
                  iVar2 = test_true("test/sslapitest.c", 0x141a, "SSL_CTX_set_cipher_list(cctx, TLS1_TXT_ECDHE_RSA_WITH_AES_128_GCM_SHA256 \":\" TLS1_TXT_DHE_RSA_WITH_AES_128_GCM_SHA256)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = create_ssl_objects(in_stack_00000028, in_stack_00000030, &stack0x00000038, &stack0x00000040, 0, 0);
                     iVar2 = test_true("test/sslapitest.c", 0x1420, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                     lVar5 = lStack0000000000000018;
                     parg = puStack0000000000000010;
                     if (iVar2 != 0) {
                        if (puStack0000000000000010 == (undefined4*)0x0) {
                           lVar5 = SSL_ctrl(in_stack_00000038, 0x5c, 0, (void*)0x0);
                           iVar2 = test_true("test/sslapitest.c", 0x1429, "SSL_set1_groups_list(serverssl, kexch_names)", lVar5 != 0);
                           if (iVar2 != 0) {
                              lVar5 = SSL_ctrl(in_stack_00000040, 0x5c, 0, (void*)0x0);
                              iVar2 = test_true("test/sslapitest.c", 0x142a, "SSL_set1_groups_list(clientssl, kexch_names)", lVar5 != 0);
                              goto joined_r0x0011343f;
                           }

                        }
 else {
                           lVar6 = SSL_ctrl(in_stack_00000038, 0x5b, lStack0000000000000018, puStack0000000000000010);
                           iVar2 = test_true("test/sslapitest.c", 0x1425, "SSL_set1_groups(serverssl, kexch_groups, kexch_groups_size)", lVar6 != 0);
                           if (iVar2 != 0) {
                              lVar5 = SSL_ctrl(in_stack_00000040, 0x5b, lVar5, parg);
                              iVar2 = test_true("test/sslapitest.c", 0x1426, "SSL_set1_groups(clientssl, kexch_groups, kexch_groups_size)", lVar5 != 0);
                              joined_r0x0011343f:if (iVar2 != 0) {
                                 create_ssl_connection(in_stack_00000038, in_stack_00000040, 0);
                                 iVar2 = test_true("test/sslapitest.c", 0x142e, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
                                 if (iVar2 != 0) {
                                    uVar7 = SSL_ctrl(in_stack_00000038, 0x5d, 0, (void*)0x0);
                                    if (unaff_EBX == 0x13) {
                                       uVar12 = 0x19f;
                                       uVar9 = uVar7 & 0xffffffff;
                                       pcVar10 = "NID_X9_62_prime256v1";
                                       uVar8 = 0x143c;
                                       pcVar11 = "shared_group0";
                                    }
 else {
                                       if (unaff_EBX != 0x14) {
                                          if (( puStack0000000000000010 == (undefined4*)0x0 ) || ( iVar2 = test_int_eq("test/sslapitest.c", 0x1447, "shared_group0", "kexch_groups[0]", uVar7 & 0xffffffff, *puStack0000000000000010) ),iVar2 != 0) {
                                             uVar8 = SSL_group_to_name(in_stack_00000038, uVar7 & 0xffffffff);
                                             iVar2 = test_str_eq("test/sslapitest.c", 0x1449, "SSL_group_to_name(serverssl, shared_group0)", "kexch_name0", uVar8, pcStack0000000000000008);
                                             if (iVar2 != 0) {
                                                uVar8 = SSL_get0_group_name(in_stack_00000038);
                                                pcVar10 = pcStack0000000000000008;
                                                iVar2 = test_str_eq("test/sslapitest.c", 0x144c, "SSL_get0_group_name(serverssl)", "kexch_name0", uVar8, pcStack0000000000000008);
                                                if (iVar2 != 0) {
                                                   uVar8 = SSL_get0_group_name(in_stack_00000040);
                                                   iVar2 = test_str_eq("test/sslapitest.c", 0x144d, "SSL_get0_group_name(clientssl)", "kexch_name0", uVar8, pcVar10);
                                                   if (iVar2 != 0) {
                                                      uVar9 = SSL_ctrl(in_stack_00000038, 0x86, 0, (void*)0x0);
                                                      iVar2 = test_int_eq("test/sslapitest.c", 0x144f, "SSL_get_negotiated_group(serverssl)", "shared_group0", uVar9 & 0xffffffff, uVar7 & 0xffffffff);
                                                      if (iVar2 != 0) {
                                                         uVar9 = SSL_ctrl(in_stack_00000040, 0x86, 0, (void*)0x0);
                                                         uVar12 = uVar7 & 0xffffffff;
                                                         pcVar10 = "shared_group0";
                                                         uVar8 = 0x1451;
                                                         uVar9 = uVar9 & 0xffffffff;
                                                         pcVar11 = "SSL_get_negotiated_group(clientssl)";
                                                         goto LAB_00112f2b;
                                                      }

                                                   }

                                                }

                                             }

                                          }

                                          goto LAB_00113448;
                                       }

                                       uVar12 = 0;
                                       uVar9 = uVar7 & 0xffffffff;
                                       pcVar10 = "0";
                                       uVar8 = 0x1442;
                                       pcVar11 = "shared_group0";
                                    }

                                    LAB_00112f2b:iVar2 = test_int_eq("test/sslapitest.c", uVar8, pcVar11, pcVar10, uVar9, uVar12);
                                    uVar7 = ( ulong )(iVar2 != 0);
                                    goto LAB_00112f40;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_00113448:uVar7 = 0;
   LAB_00112f40:SSL_free(in_stack_00000038);
   SSL_free(in_stack_00000040);
   SSL_CTX_free(in_stack_00000028);
   SSL_CTX_free(in_stack_00000030);
   if (in_stack_00000048 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
undefined8 test_tls13_no_dhe_kex(ulong param_1) {
   SSL_SESSION *session;
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar1 = cert;
   uVar8 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   new_called = 0;
   do_cache._0_4_ = 1;
   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x304, 0, &local_60, &local_58, uVar1, uVar8);
   iVar2 = test_true("test/sslapitest.c", 0x16e9, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)");
   if (iVar2 != 0) {
      SSL_CTX_ctrl(local_58, 0x2c, 0x201, (void*)0x0);
      lVar7 = ( ulong )(( uint )(( param_1 & 0xffffffff ) >> 2) & 1) << 10;
      SSL_CTX_set_options(local_60, ( ulong )(( uint )(param_1 >> 1) & 1) << 0x23 | ( ulong )((uint)param_1 & 1) << 10);
      SSL_CTX_set_options(local_58, lVar7);
      SSL_CTX_sess_set_new_cb(local_58, new_cachesession_cb);
      iVar2 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
      iVar2 = test_true("test/sslapitest.c", 0x16f6, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
      if (iVar2 != 0) {
         iVar2 = create_ssl_connection(local_50, local_48, 0);
         iVar2 = test_true("test/sslapitest.c", 0x16fa, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = test_int_eq("test/sslapitest.c", 0x16fd, &_LC223, "new_called", 2, new_called);
            if (iVar2 != 0) {
               session = (SSL_SESSION*)( &sesscache )[new_called + -1];
               SSL_shutdown(local_48);
               SSL_shutdown(local_50);
               SSL_free(local_50);
               SSL_free(local_48);
               SSL_CTX_free(local_58);
               uVar1 = cert;
               uVar8 = privkey;
               local_50 = (SSL*)0x0;
               local_48 = (SSL*)0x0;
               local_58 = (SSL_CTX*)0x0;
               uVar3 = TLS_client_method();
               uVar4 = TLS_server_method();
               iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x304, 0, 0, &local_58, uVar1, uVar8);
               iVar2 = test_true("test/sslapitest.c", 0x1710, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, NULL, &cctx, cert, privkey)", iVar2 != 0);
               if (iVar2 != 0) {
                  SSL_CTX_set_options(local_58, lVar7);
                  iVar2 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
                  iVar2 = test_true("test/sslapitest.c", 0x1717, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = SSL_set_session(local_48, session);
                     iVar2 = test_true("test/sslapitest.c", 0x1719, "SSL_set_session(clientssl, saved_session)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = create_ssl_connection(local_50, local_48, 0);
                        iVar2 = test_true("test/sslapitest.c", 0x171c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = SSL_session_reused(local_48);
                           iVar2 = test_true("test/sslapitest.c", 0x1723, "SSL_session_reused(clientssl)", iVar2 != 0);
                           if (iVar2 != 0) {
                              uVar8 = 1;
                              SSL_shutdown(local_48);
                              SSL_shutdown(local_50);
                              goto LAB_001135b6;
                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   uVar8 = 0;
   LAB_001135b6:SSL_free(local_50);
   SSL_free(local_48);
   puVar5 = &sesscache;
   do {
      puVar6 = puVar5 + 1;
      SSL_SESSION_free((SSL_SESSION*)*puVar5);
      *puVar5 = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != &get_sess_val );
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 test_tls13_psk(uint param_1) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   uint uVar7;
   long in_FS_OFFSET;
   SSL_CTX *local_98;
   SSL_CTX *local_90;
   SSL *local_88;
   SSL *local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   uVar4 = cert;
   uVar5 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (SSL_CTX*)0x0;
   local_78 = ram0x0013db80;
   uStack_70 = _UNK_0013db88;
   local_90 = (SSL_CTX*)0x0;
   local_68 = __LC686;
   uStack_60 = _UNK_0013db98;
   local_88 = (SSL*)0x0;
   local_80 = (SSL*)0x0;
   local_58 = __LC687;
   uStack_50 = _UNK_0013dba8;
   if (param_1 == 3) {
      uVar5 = TLS_client_method();
      uVar4 = TLS_server_method();
      iVar1 = create_ssl_ctx_pair(libctx, uVar4, uVar5, 0x301, 0, &local_98, &local_90, 0, 0);
      iVar1 = test_true("test/sslapitest.c", 0x15ef, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, idx == 3 ? NULL : cert, idx == 3 ? NULL : privkey)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = SSL_CTX_set_ciphersuites(local_90, "TLS_AES_256_GCM_SHA384:TLS_AES_128_GCM_SHA256");
         iVar1 = test_true("test/sslapitest.c", 0x1605, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_256_GCM_SHA384:\" \"TLS_AES_128_GCM_SHA256\")", iVar1 != 0);
         if (iVar1 != 0) {
            uVar7 = 3;
            SSL_CTX_set_psk_client_callback(local_90, psk_client_cb);
            SSL_CTX_set_psk_server_callback(local_98, psk_server_cb);
            srvid = "Identity";
            find_session_cb_cnt = 0;
            psk_server_cb_cnt = 0;
            LAB_00113c93:use_session_cb_cnt = 0;
            psk_client_cb_cnt = 0;
            iVar1 = create_ssl_objects(local_98, local_90, &local_88, &local_80, 0, 0);
            iVar1 = test_true("test/sslapitest.c", 0x1644, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
            if (iVar1 != 0) {
               uVar5 = SSL_CIPHER_find(local_80, &_LC669);
               clientpsk = SSL_SESSION_new();
               iVar1 = test_ptr("test/sslapitest.c", 0x164b, "clientpsk", clientpsk);
               if (( iVar1 != 0 ) && ( iVar1 = test_ptr("test/sslapitest.c", 0x164c, "cipher", uVar5) ),iVar1 != 0) {
                  iVar1 = SSL_SESSION_set1_master_key(clientpsk, &local_78, 0x30);
                  iVar1 = test_true("test/sslapitest.c", 0x164d, "SSL_SESSION_set1_master_key(clientpsk, key, sizeof(key))", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = SSL_SESSION_set_cipher(clientpsk, uVar5);
                     iVar1 = test_true("test/sslapitest.c", 0x164f, "SSL_SESSION_set_cipher(clientpsk, cipher)", iVar1 != 0);
                     if (iVar1 != 0) {
                        iVar1 = SSL_SESSION_set_protocol_version(clientpsk, 0x304);
                        iVar1 = test_true("test/sslapitest.c", 0x1650, "SSL_SESSION_set_protocol_version(clientpsk, TLS1_3_VERSION)", iVar1 != 0);
                        if (iVar1 != 0) {
                           iVar1 = SSL_SESSION_up_ref(clientpsk);
                           iVar1 = test_true("test/sslapitest.c", 0x1652, "SSL_SESSION_up_ref(clientpsk)", iVar1 != 0);
                           if (iVar1 != 0) {
                              serverpsk = clientpsk;
                              iVar1 = create_ssl_connection(local_88, local_80, 0);
                              iVar1 = test_true("test/sslapitest.c", 0x1657, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
                              if (iVar1 != 0) {
                                 iVar1 = SSL_session_reused(local_80);
                                 iVar1 = test_true("test/sslapitest.c", 0x1658, "SSL_session_reused(clientssl)", iVar1 != 0);
                                 if (iVar1 != 0) {
                                    iVar1 = SSL_session_reused(local_88);
                                    iVar1 = test_true("test/sslapitest.c", 0x1659, "SSL_session_reused(serverssl)", iVar1 != 0);
                                    if (iVar1 != 0) {
                                       if (uVar7 < 2) {
                                          iVar1 = test_true("test/sslapitest.c", 0x165d, "use_session_cb_cnt == 1", use_session_cb_cnt == 1);
                                          if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x165e, "find_session_cb_cnt == 1", find_session_cb_cnt == 1) ),iVar1 != 0 )) {
                                             iVar1 = test_true("test/sslapitest.c", 0x1660, "psk_server_cb_cnt == 0", psk_server_cb_cnt == 0);
                                             goto joined_r0x001145f8;
                                          }

                                       }
 else {
                                          iVar1 = test_true("test/sslapitest.c", 0x1663, "use_session_cb_cnt == 0", use_session_cb_cnt == 0);
                                          if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x1664, "find_session_cb_cnt == 0", find_session_cb_cnt == 0) ),iVar1 != 0 )) {
                                             iVar1 = test_true("test/sslapitest.c", 0x1666, "psk_server_cb_cnt == 1", psk_server_cb_cnt == 1);
                                             joined_r0x001145f8:if (iVar1 != 0) {
                                                shutdown_ssl_connection();
                                                local_80 = (SSL*)0x0;
                                                local_88 = (SSL*)0x0;
                                                find_session_cb_cnt = 0;
                                                use_session_cb_cnt = 0;
                                                psk_server_cb_cnt = 0;
                                                psk_client_cb_cnt = 0;
                                                iVar1 = create_ssl_objects(local_98, local_90, &local_88, &local_80, 0, 0);
                                                iVar1 = test_true("test/sslapitest.c", 0x166f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
                                                if (iVar1 != 0) {
                                                   lVar6 = SSL_ctrl(local_88, 0x5c, 0, "P-384");
                                                   iVar1 = test_true("test/sslapitest.c", 0x1678, "SSL_set1_groups_list(serverssl, \"P-384\")", lVar6 != 0);
                                                   if (iVar1 != 0) {
                                                      iVar1 = create_ssl_connection(local_88, local_80, 0);
                                                      iVar1 = test_true("test/sslapitest.c", 0x1680, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                         iVar1 = SSL_session_reused(local_80);
                                                         iVar1 = test_true("test/sslapitest.c", 0x1681, "SSL_session_reused(clientssl)", iVar1 != 0);
                                                         if (iVar1 != 0) {
                                                            iVar1 = SSL_session_reused(local_88);
                                                            iVar1 = test_true("test/sslapitest.c", 0x1682, "SSL_session_reused(serverssl)", iVar1 != 0);
                                                            if (iVar1 != 0) {
                                                               if (uVar7 < 2) {
                                                                  iVar1 = test_true("test/sslapitest.c", 0x1686, "use_session_cb_cnt == 2", use_session_cb_cnt == 2);
                                                                  if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x1687, "find_session_cb_cnt == 2", find_session_cb_cnt == 2) ),iVar1 != 0 )) {
                                                                     iVar1 = test_true("test/sslapitest.c", 0x1689, "psk_server_cb_cnt == 0");
                                                                     goto joined_r0x00114739;
                                                                  }

                                                               }
 else {
                                                                  iVar1 = test_true("test/sslapitest.c", 0x168c, "use_session_cb_cnt == 0", use_session_cb_cnt == 0);
                                                                  if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x168d, "find_session_cb_cnt == 0", find_session_cb_cnt == 0) ),iVar1 != 0 )) {
                                                                     iVar1 = test_true("test/sslapitest.c", 0x168f, "psk_server_cb_cnt == 2");
                                                                     joined_r0x00114739:if (iVar1 != 0) {
                                                                        shutdown_ssl_connection(local_88, local_80);
                                                                        local_80 = (SSL*)0x0;
                                                                        local_88 = (SSL*)0x0;
                                                                        find_session_cb_cnt = 0;
                                                                        use_session_cb_cnt = 0;
                                                                        psk_server_cb_cnt = 0;
                                                                        psk_client_cb_cnt = 0;
                                                                        if (param_1 == 3) {
                                                                           LAB_00114304:local_80 = (SSL*)0x0;
                                                                           local_88 = (SSL*)0x0;
                                                                           uVar5 = 1;
                                                                           goto LAB_00113b0a;
                                                                        }

                                                                        srvid = "Dummy Identity";
                                                                        iVar1 = create_ssl_objects(local_98, local_90, &local_88, &local_80, 0, 0);
                                                                        iVar1 = test_true("test/sslapitest.c", 0x169e, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
                                                                        if (iVar1 != 0) {
                                                                           iVar1 = create_ssl_connection(local_88, local_80, 0);
                                                                           iVar1 = test_true("test/sslapitest.c", 0x16a0, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
                                                                           if (iVar1 != 0) {
                                                                              iVar1 = SSL_session_reused(local_80);
                                                                              iVar1 = test_false("test/sslapitest.c", 0x16a2, "SSL_session_reused(clientssl)", iVar1 != 0);
                                                                              if (iVar1 != 0) {
                                                                                 iVar1 = SSL_session_reused(local_88);
                                                                                 iVar1 = test_false("test/sslapitest.c", 0x16a3, "SSL_session_reused(serverssl)", iVar1 != 0);
                                                                                 if (iVar1 != 0) {
                                                                                    if (uVar7 < 2) {
                                                                                       iVar1 = test_true("test/sslapitest.c", 0x16a7, "use_session_cb_cnt == 1", use_session_cb_cnt == 1);
                                                                                       if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x16a8, "find_session_cb_cnt == 1", find_session_cb_cnt == 1) ),iVar1 != 0 )) {
                                                                                          iVar1 = test_true("test/sslapitest.c", 0x16ae, "psk_server_cb_cnt == idx", psk_server_cb_cnt == param_1);
                                                                                          goto joined_r0x00114698;
                                                                                       }

                                                                                    }
 else {
                                                                                       iVar1 = test_true("test/sslapitest.c", 0x16b1, "use_session_cb_cnt == 0", use_session_cb_cnt == 0);
                                                                                       if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x16b2, "find_session_cb_cnt == 0", find_session_cb_cnt == 0) ),iVar1 != 0 )) {
                                                                                          iVar1 = test_true("test/sslapitest.c", 0x16b4, "psk_server_cb_cnt == 1", psk_server_cb_cnt == 1);
                                                                                          joined_r0x00114698:if (iVar1 != 0) {
                                                                                             shutdown_ssl_connection(local_88, local_80);
                                                                                             goto LAB_00114304;
                                                                                          }

                                                                                       }

                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }
 else {
      uVar2 = TLS_client_method();
      uVar3 = TLS_server_method();
      iVar1 = create_ssl_ctx_pair(libctx, uVar3, uVar2, 0x301, 0, &local_98, &local_90, uVar4, uVar5);
      iVar1 = test_true("test/sslapitest.c", 0x15ef, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, idx == 3 ? NULL : cert, idx == 3 ? NULL : privkey)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = SSL_CTX_set_ciphersuites(local_90, "TLS_AES_128_GCM_SHA256");
         iVar1 = test_true("test/sslapitest.c", 0x15fc, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_GCM_SHA256\")", iVar1 != 0);
         if (iVar1 != 0) {
            if (param_1 < 2) {
               SSL_CTX_set_psk_use_session_callback(local_90, use_session_cb);
               SSL_CTX_set_psk_find_session_callback(local_98, find_session_cb);
            }

            if (0 < (int)param_1) {
               SSL_CTX_set_psk_client_callback(local_90, psk_client_cb);
               SSL_CTX_set_psk_server_callback(local_98, psk_server_cb);
            }

            use_session_cb_cnt = 0;
            find_session_cb_cnt = 0;
            srvid = "Identity";
            psk_client_cb_cnt = 0;
            psk_server_cb_cnt = 0;
            iVar1 = create_ssl_objects(local_98, local_90, &local_88, &local_80, 0, 0);
            iVar1 = test_true("test/sslapitest.c", 0x1625, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = create_ssl_connection(local_88, local_80, 0);
               iVar1 = test_true("test/sslapitest.c", 0x1627, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = SSL_session_reused(local_80);
                  iVar1 = test_false("test/sslapitest.c", 0x1629, "SSL_session_reused(clientssl)", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = SSL_session_reused(local_88);
                     iVar1 = test_false("test/sslapitest.c", 0x162a, "SSL_session_reused(serverssl)", iVar1 != 0);
                     if (iVar1 != 0) {
                        if (param_1 < 2) {
                           iVar1 = test_true("test/sslapitest.c", 0x162e, "use_session_cb_cnt == 1", use_session_cb_cnt == 1);
                           if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x162f, "find_session_cb_cnt == 0", find_session_cb_cnt == 0) ),iVar1 != 0 )) {
                              iVar1 = test_true("test/sslapitest.c", 0x1635, "psk_server_cb_cnt == 0", psk_server_cb_cnt == 0);
                              goto joined_r0x00114552;
                           }

                        }
 else {
                           iVar1 = test_true("test/sslapitest.c", 0x1638, "use_session_cb_cnt == 0", use_session_cb_cnt == 0);
                           if (( ( iVar1 != 0 ) && ( iVar1 = test_true("test/sslapitest.c", 0x1639, "find_session_cb_cnt == 0", find_session_cb_cnt == 0) ),iVar1 != 0 )) {
                              iVar1 = test_true("test/sslapitest.c", 0x163b, "psk_server_cb_cnt == 0", psk_server_cb_cnt == 0);
                              joined_r0x00114552:if (iVar1 != 0) {
                                 shutdown_ssl_connection(local_88, local_80);
                                 local_80 = (SSL*)0x0;
                                 local_88 = (SSL*)0x0;
                                 uVar7 = param_1;
                                 goto LAB_00113c93;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   uVar5 = 0;
   LAB_00113b0a:SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_free(local_88);
   SSL_free(local_80);
   SSL_CTX_free(local_98);
   SSL_CTX_free(local_90);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 psk_server_cb(undefined8 param_1, char *param_2, undefined8 param_3, uint param_4) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   undefined8 uVar4;
   lVar1 = serverpsk;
   psk_server_cb_cnt = psk_server_cb_cnt + 1;
   if (2 < find_session_cb_cnt) {
      return 0;
   }

   if (serverpsk != 0) {
      iVar2 = strcmp(srvid, param_2);
      if (iVar2 == 0) {
         uVar3 = SSL_SESSION_get_master_key(lVar1, 0, 0);
         if (uVar3 <= param_4) {
            uVar4 = SSL_SESSION_get_master_key(serverpsk, param_3);
            return uVar4;
         }

      }

   }

   return 0;
}
undefined4 psk_client_cb(undefined8 param_1, undefined8 param_2, char *param_3, uint param_4, undefined8 param_5, uint param_6) {
   undefined4 uVar1;
   ulong uVar2;
   psk_client_cb_cnt = psk_client_cb_cnt + 1;
   if (( ( 8 < param_4 ) && ( psk_client_cb_cnt < 3 ) ) && ( clientpsk != 0 )) {
      uVar2 = SSL_SESSION_get_master_key(clientpsk, 0, 0);
      if (uVar2 <= param_6) {
         uVar1 = SSL_SESSION_get_master_key(clientpsk, param_5);
         strncpy(param_3, "Identity", (ulong)param_4);
         return uVar1;
      }

   }

   return 0;
}
undefined8 test_tls13_ciphersuite(int param_1) {
   undefined *puVar1;
   bool bVar2;
   undefined8 uVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   SSL_CIPHER *pSVar7;
   char *pcVar8;
   char *pcVar9;
   size_t sVar10;
   undefined8 uVar11;
   undefined **ppuVar12;
   char *str;
   long in_FS_OFFSET;
   bool bVar13;
   undefined **local_70;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   if (param_1 == 2) {
      bVar2 = true;
      bVar13 = false;
      str = "AES128-SHA256";
   }
 else if (param_1 < 3) {
      if (param_1 == 0) {
         bVar2 = true;
         str = (char*)0x0;
         bVar13 = false;
      }
 else {
         bVar13 = param_1 == 1;
         bVar2 = false;
         str = (char*)0x0;
      }

   }
 else if (param_1 == 3) {
      bVar2 = false;
      bVar13 = true;
      str = "AES128-SHA256";
   }
 else {
      bVar2 = false;
      bVar13 = false;
      str = (char*)0x0;
   }

   local_70 = &t13_ciphers_3;
   ppuVar12 = &t13_ciphers_3;
   do {
      uVar3 = cert;
      uVar11 = privkey;
      local_58 = (SSL_CTX*)0x0;
      if (( is_fips == 0 ) || ( *(int*)( ppuVar12 + 1 ) != 0 )) {
         puVar1 = *ppuVar12;
         uVar5 = TLS_client_method();
         uVar6 = TLS_server_method();
         iVar4 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, 0x303, &local_60, &local_58, uVar3, uVar11);
         iVar4 = test_true("test/sslapitest.c", 0x1585, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, max_ver, &sctx, &cctx, cert, privkey)", iVar4 != 0);
         if (iVar4 == 0) goto LAB_00115050;
         if (*(int*)( (long)ppuVar12 + 0xc ) != 0) {
            SSL_CTX_set_security_level(local_60, 0);
            SSL_CTX_set_security_level(local_58, 0);
         }

         if (bVar2) {
            iVar4 = SSL_CTX_set_ciphersuites(local_60, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x1591, "SSL_CTX_set_ciphersuites(sctx, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            iVar4 = SSL_CTX_set_ciphersuites(local_58, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x1592, "SSL_CTX_set_ciphersuites(cctx, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            if (str != (char*)0x0) {
               iVar4 = SSL_CTX_set_cipher_list(local_60, str);
               iVar4 = test_true("test/sslapitest.c", 0x1595, "SSL_CTX_set_cipher_list(sctx, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
               iVar4 = SSL_CTX_set_cipher_list(local_58, str);
               iVar4 = test_true("test/sslapitest.c", 0x1596, "SSL_CTX_set_cipher_list(cctx, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
            }

         }

         iVar4 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
         iVar4 = test_true("test/sslapitest.c", 0x159c, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
         if (iVar4 == 0) goto LAB_00115050;
         if (bVar13) {
            iVar4 = SSL_set_ciphersuites(local_50, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x15a1, "SSL_set_ciphersuites(serverssl, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            iVar4 = SSL_set_ciphersuites(local_48, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x15a2, "SSL_set_ciphersuites(clientssl, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            if (str != (char*)0x0) {
               iVar4 = SSL_set_cipher_list(local_50, str);
               iVar4 = test_true("test/sslapitest.c", 0x15a5, "SSL_set_cipher_list(serverssl, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
               iVar4 = SSL_set_cipher_list(local_48, str);
               iVar4 = test_true("test/sslapitest.c", 0x15a6, "SSL_set_cipher_list(clientssl, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
            }

         }

         iVar4 = create_ssl_connection(local_50, local_48, 0);
         iVar4 = test_true("test/sslapitest.c", 0x15ac, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
         if (iVar4 == 0) goto LAB_00115050;
         pSVar7 = SSL_get_current_cipher(local_50);
         pcVar8 = SSL_CIPHER_get_name(pSVar7);
         pSVar7 = SSL_get_current_cipher(local_48);
         pcVar9 = SSL_CIPHER_get_name(pSVar7);
         iVar4 = test_str_eq("test/sslapitest.c", 0x15b4, "negotiated_scipher", "negotiated_ccipher", pcVar8, pcVar9);
         if (( iVar4 == 0 ) || ( ( str != (char*)0x0 && ( iVar4 = test_str_eq("test/sslapitest.c", 0x15c3, "t12_cipher", "negotiated_scipher", str, pcVar8) ),iVar4 == 0 ) )) goto LAB_00115050;
         SSL_free(local_50);
         local_50 = (SSL*)0x0;
         SSL_free(local_48);
         local_48 = (SSL*)0x0;
         SSL_CTX_free(local_60);
         local_60 = (SSL_CTX*)0x0;
         SSL_CTX_free(local_58);
      }

      ppuVar12 = ppuVar12 + 2;
   }
 while ( ppuVar12 != (undefined**)fetchable_ciphers_13 );
   do {
      uVar3 = cert;
      uVar11 = privkey;
      local_58 = (SSL_CTX*)0x0;
      if (( is_fips == 0 ) || ( *(int*)( local_70 + 1 ) != 0 )) {
         puVar1 = *local_70;
         uVar5 = TLS_client_method();
         uVar6 = TLS_server_method();
         iVar4 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, 0x304, &local_60, &local_58, uVar3, uVar11);
         iVar4 = test_true("test/sslapitest.c", 0x1585, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, max_ver, &sctx, &cctx, cert, privkey)", iVar4 != 0);
         if (iVar4 == 0) goto LAB_00115050;
         if (*(int*)( (long)local_70 + 0xc ) != 0) {
            SSL_CTX_set_security_level(local_60, 0);
            SSL_CTX_set_security_level(local_58, 0);
         }

         if (bVar2) {
            iVar4 = SSL_CTX_set_ciphersuites(local_60, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x1591, "SSL_CTX_set_ciphersuites(sctx, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            iVar4 = SSL_CTX_set_ciphersuites(local_58, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x1592, "SSL_CTX_set_ciphersuites(cctx, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            if (str != (char*)0x0) {
               iVar4 = SSL_CTX_set_cipher_list(local_60, str);
               iVar4 = test_true("test/sslapitest.c", 0x1595, "SSL_CTX_set_cipher_list(sctx, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
               iVar4 = SSL_CTX_set_cipher_list(local_58, str);
               iVar4 = test_true("test/sslapitest.c", 0x1596, "SSL_CTX_set_cipher_list(cctx, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
            }

         }

         iVar4 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
         iVar4 = test_true("test/sslapitest.c", 0x159c, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
         if (iVar4 == 0) goto LAB_00115050;
         if (bVar13) {
            iVar4 = SSL_set_ciphersuites(local_50, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x15a1, "SSL_set_ciphersuites(serverssl, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            iVar4 = SSL_set_ciphersuites(local_48, puVar1);
            iVar4 = test_true("test/sslapitest.c", 0x15a2, "SSL_set_ciphersuites(clientssl, t13_cipher)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_00115050;
            if (str != (char*)0x0) {
               iVar4 = SSL_set_cipher_list(local_50, str);
               iVar4 = test_true("test/sslapitest.c", 0x15a5, "SSL_set_cipher_list(serverssl, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
               iVar4 = SSL_set_cipher_list(local_48, str);
               iVar4 = test_true("test/sslapitest.c", 0x15a6, "SSL_set_cipher_list(clientssl, t12_cipher)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_00115050;
            }

         }

         iVar4 = create_ssl_connection(local_50, local_48, 0);
         iVar4 = test_true("test/sslapitest.c", 0x15ac, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
         if (iVar4 == 0) goto LAB_00115050;
         pSVar7 = SSL_get_current_cipher(local_50);
         pcVar8 = SSL_CIPHER_get_name(pSVar7);
         pSVar7 = SSL_get_current_cipher(local_48);
         pcVar9 = SSL_CIPHER_get_name(pSVar7);
         iVar4 = test_str_eq("test/sslapitest.c", 0x15b4, "negotiated_scipher", "negotiated_ccipher", pcVar8, pcVar9);
         if (iVar4 == 0) goto LAB_00115050;
         sVar10 = strlen(pcVar8);
         iVar4 = test_strn_eq("test/sslapitest.c", 0x15bc, "t13_cipher", "negotiated_scipher", puVar1, sVar10, pcVar8, sVar10);
         if (iVar4 == 0) goto LAB_00115050;
         SSL_free(local_50);
         local_50 = (SSL*)0x0;
         SSL_free(local_48);
         local_48 = (SSL*)0x0;
         SSL_CTX_free(local_60);
         local_60 = (SSL_CTX*)0x0;
         SSL_CTX_free(local_58);
      }

      local_58 = (SSL_CTX*)0x0;
      local_70 = local_70 + 2;
   }
 while ( local_70 != (undefined**)fetchable_ciphers_13 );
   uVar11 = 1;
   LAB_00115052:SSL_free(local_50);
   SSL_free(local_48);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
   LAB_00115050:uVar11 = 0;
   goto LAB_00115052;
}
bool test_ciphersuite_change(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   SSL_SESSION *session;
   long lVar6;
   ulong uVar7;
   uint uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0, &local_58, &local_60, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x12ca, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      iVar3 = SSL_CTX_set_ciphersuites(local_58, "TLS_AES_128_GCM_SHA256:TLS_AES_256_GCM_SHA384:TLS_AES_128_CCM_SHA256");
      iVar3 = test_true("test/sslapitest.c", 0x12cd, "SSL_CTX_set_ciphersuites(sctx, \"TLS_AES_128_GCM_SHA256:\" \"TLS_AES_256_GCM_SHA384:\" \"TLS_AES_128_CCM_SHA256\")", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = SSL_CTX_set_ciphersuites(local_60, "TLS_AES_128_GCM_SHA256");
         iVar3 = test_true("test/sslapitest.c", 0x12d1, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_GCM_SHA256\")", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
            iVar3 = test_true("test/sslapitest.c", 0x12d5, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
            if (iVar3 != 0) {
               iVar3 = create_ssl_connection(local_48, local_50, 0);
               iVar3 = test_true("test/sslapitest.c", 0x12d7, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
               if (iVar3 != 0) {
                  session = SSL_get1_session(local_50);
                  lVar6 = SSL_SESSION_get0_cipher(session);
                  SSL_shutdown(local_50);
                  SSL_shutdown(local_48);
                  SSL_free(local_48);
                  SSL_free(local_50);
                  local_50 = (SSL*)0x0;
                  local_48 = (SSL*)0x0;
                  iVar3 = SSL_CTX_set_ciphersuites(local_60, "TLS_AES_128_CCM_SHA256");
                  iVar3 = test_true("test/sslapitest.c", 0x12e5, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_CCM_SHA256\")", iVar3 != 0);
                  if (iVar3 != 0) {
                     iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                     iVar3 = test_true("test/sslapitest.c", 0x12e7, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                     if (iVar3 != 0) {
                        iVar3 = SSL_set_session(local_50, session);
                        iVar3 = test_true("test/sslapitest.c", 0x12e9, "SSL_set_session(clientssl, clntsess)", iVar3 != 0);
                        if (iVar3 != 0) {
                           iVar3 = create_ssl_connection(local_48, local_50, 0);
                           iVar3 = test_true("test/sslapitest.c", 0x12ea, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                           if (iVar3 != 0) {
                              SSL_session_reused(local_50);
                              iVar3 = test_true("test/sslapitest.c", 0x12ec, "SSL_session_reused(clientssl)");
                              if (iVar3 != 0) {
                                 SSL_SESSION_free(session);
                                 session = SSL_get1_session(local_50);
                                 SSL_shutdown(local_50);
                                 SSL_shutdown(local_48);
                                 SSL_free(local_48);
                                 SSL_free(local_50);
                                 local_50 = (SSL*)0x0;
                                 local_48 = (SSL*)0x0;
                                 iVar3 = SSL_CTX_set_ciphersuites(local_60, "TLS_AES_256_GCM_SHA384");
                                 iVar3 = test_true("test/sslapitest.c", 0x12fb, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_256_GCM_SHA384\")", iVar3 != 0);
                                 if (iVar3 != 0) {
                                    iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                                    iVar3 = test_true("test/sslapitest.c", 0x12fc, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                                    if (iVar3 != 0) {
                                       iVar3 = SSL_set_session(local_50, session);
                                       iVar3 = test_true("test/sslapitest.c", 0x12fe, "SSL_set_session(clientssl, clntsess)", iVar3 != 0);
                                       if (iVar3 != 0) {
                                          iVar3 = create_ssl_connection(local_48, local_50, 1);
                                          iVar3 = test_true("test/sslapitest.c", 0x12ff, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_SSL)", iVar3 != 0);
                                          if (iVar3 != 0) {
                                             iVar3 = SSL_session_reused(local_50);
                                             iVar3 = test_false("test/sslapitest.c", 0x1301, "SSL_session_reused(clientssl)", iVar3 != 0);
                                             if (iVar3 != 0) {
                                                SSL_SESSION_free(session);
                                                SSL_shutdown(local_50);
                                                SSL_shutdown(local_48);
                                                SSL_free(local_48);
                                                SSL_free(local_50);
                                                local_50 = (SSL*)0x0;
                                                local_48 = (SSL*)0x0;
                                                iVar3 = SSL_CTX_set_ciphersuites(local_60, "TLS_AES_256_GCM_SHA384");
                                                iVar3 = test_true("test/sslapitest.c", 0x130d, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_256_GCM_SHA384\")", iVar3 != 0);
                                                if (iVar3 != 0) {
                                                   iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                                                   iVar3 = test_true("test/sslapitest.c", 0x130e, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                                                   if (iVar3 != 0) {
                                                      iVar3 = create_ssl_connection(local_48, local_50, 0);
                                                      iVar3 = test_true("test/sslapitest.c", 0x1310, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                                                      if (iVar3 != 0) {
                                                         session = SSL_get1_session(local_50);
                                                         SSL_shutdown(local_50);
                                                         SSL_shutdown(local_48);
                                                         SSL_free(local_48);
                                                         SSL_free(local_50);
                                                         local_50 = (SSL*)0x0;
                                                         local_48 = (SSL*)0x0;
                                                         iVar3 = SSL_CTX_set_ciphersuites(local_60, "TLS_AES_128_GCM_SHA256:TLS_AES_256_GCM_SHA384");
                                                         iVar3 = test_true("test/sslapitest.c", 0x131b, "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_GCM_SHA256:TLS_AES_256_GCM_SHA384\")", iVar3 != 0);
                                                         if (iVar3 != 0) {
                                                            iVar3 = SSL_CTX_set_ciphersuites(local_58, "TLS_AES_256_GCM_SHA384");
                                                            iVar3 = test_true("test/sslapitest.c", 0x131d, "SSL_CTX_set_ciphersuites(sctx, \"TLS_AES_256_GCM_SHA384\")", iVar3 != 0);
                                                            if (iVar3 != 0) {
                                                               iVar3 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                                                               iVar3 = test_true("test/sslapitest.c", 0x131f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                                                               if (iVar3 != 0) {
                                                                  iVar3 = SSL_set_session(local_50, session);
                                                                  iVar3 = test_true("test/sslapitest.c", 0x1321, "SSL_set_session(clientssl, clntsess)", iVar3 != 0);
                                                                  if (iVar3 != 0) {
                                                                     iVar3 = create_ssl_connection(local_48, local_50, 2);
                                                                     iVar3 = test_false("test/sslapitest.c", 0x1327, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_WANT_READ)", iVar3 != 0);
                                                                     if (iVar3 != 0) {
                                                                        *(long*)( session[1].krb5_client_princ + 0x10 ) = lVar6;
                                                                        *(ulong*)( session[1].krb5_client_princ + 0x18 ) = ( ulong ) * (uint*)( lVar6 + 0x18 );
                                                                        iVar3 = create_ssl_connection(local_48, local_50, 1);
                                                                        iVar3 = test_false("test/sslapitest.c", 0x1334, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_SSL)", iVar3 != 0);
                                                                        if (iVar3 != 0) {
                                                                           uVar7 = ERR_get_error();
                                                                           uVar8 = (uint)uVar7 & 0x7fffff;
                                                                           if (( uVar7 & 0x80000000 ) != 0) {
                                                                              uVar8 = (uint)uVar7 & 0x7fffffff;
                                                                           }

                                                                           iVar3 = test_int_eq("test/sslapitest.c", 0x1336, "ERR_GET_REASON(ERR_get_error())", "SSL_R_CIPHERSUITE_DIGEST_HAS_CHANGED", uVar8, 0xda);
                                                                           bVar9 = iVar3 != 0;
                                                                           goto LAB_001151fc;
                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                         goto LAB_001153c6;
                                                      }

                                                   }

                                                }

                                                goto LAB_001151f7;
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

                  LAB_001153c6:bVar9 = false;
                  goto LAB_001151fc;
               }

            }

         }

      }

   }

   LAB_001151f7:bVar9 = false;
   session = (SSL_SESSION*)0x0;
   LAB_001151fc:SSL_SESSION_free(session);
   SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint early_data_skip_helper(int param_1, ulong param_2, int param_3) {
   undefined8 uVar1;
   int iVar2;
   uint uVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   time_t tVar8;
   long lVar9;
   ulong uVar10;
   BIO *pBVar11;
   SSL_SESSION *ses;
   uint uVar12;
   long in_FS_OFFSET;
   SSL_CTX *local_98;
   SSL_CTX *local_90;
   SSL *local_88;
   SSL *local_80;
   SSL_SESSION *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined4 local_5e;
   undefined2 local_5a;
   undefined1 local_58[24];
   long local_40;
   uVar1 = cert;
   uVar7 = privkey;
   uVar12 = (uint)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (SSL_CTX*)0x0;
   local_90 = (SSL_CTX*)0x0;
   local_88 = (SSL*)0x0;
   local_80 = (SSL*)0x0;
   local_78 = (SSL_SESSION*)0x0;
   if (( is_fips != 0 ) && ( uVar3 = 3 < (int)uVar12 )) goto LAB_00115b63;
   lVar9 = *(long*)( ciphersuites + (long)(int)uVar12 * 8 );
   if (lVar9 == 0) {
      uVar3 = test_skip("test/sslapitest.c", 0xf7e, "Cipher not supported");
      goto LAB_00115b63;
   }

   uVar5 = TLS_client_method();
   uVar6 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, 0, &local_90, &local_98, uVar1, uVar7);
   iVar2 = test_true("test/sslapitest.c", 0xf80, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 == 0) {
      LAB_00115b00:ses = (SSL_SESSION*)0x0;
      uVar3 = 0;
   }
 else {
      if (( 0x61UL >> ( param_2 & 0x3f ) & 1 ) != 0) {
         SSL_CTX_set_security_level(local_90, 0);
         SSL_CTX_set_security_level(local_98, 0);
      }

      iVar2 = SSL_CTX_set_ciphersuites(local_90, lVar9);
      iVar2 = test_true("test/sslapitest.c", 0xf8b, "SSL_CTX_set_ciphersuites(sctx, ciphersuites[cipher])", iVar2 != 0);
      if (iVar2 == 0) goto LAB_00115b00;
      iVar2 = SSL_CTX_set_ciphersuites(local_98, lVar9);
      iVar2 = test_true("test/sslapitest.c", 0xf8c, "SSL_CTX_set_ciphersuites(cctx, ciphersuites[cipher])", iVar2 != 0);
      if (iVar2 == 0) goto LAB_00115b00;
      uVar7 = 0x20;
      if (( uVar12 & 0xfffffffb ) == 2) {
         uVar7 = 0x30;
      }

      iVar2 = setupearly_data_test(&local_98, &local_90, &local_88, &local_80, &local_78, param_3, uVar7);
      uVar3 = test_true("test/sslapitest.c", 0xf8f, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, idx, (cipher == 2 || cipher == 6) ? SHA384_DIGEST_LENGTH : SHA256_DIGEST_LENGTH)", iVar2 != 0);
      ses = local_78;
      if (uVar3 != 0) {
         if (param_1 - 1U < 2) {
            lVar9 = SSL_ctrl(local_80, 0x5c, 0, "P-384");
            iVar2 = test_true("test/sslapitest.c", 0xf9c, "SSL_set1_groups_list(serverssl, \"P-384\")", lVar9 != 0);
            if (iVar2 != 0) goto LAB_00115aba;
         }
 else {
            if (param_3 == 2) {
               srvid = "Dummy Identity";
            }
 else {
               tVar8 = time((time_t*)0x0);
               lVar9 = SSL_SESSION_set_time_ex(ses, tVar8 + -0x14);
               iVar2 = test_true("test/sslapitest.c", 0xfab, "SSL_SESSION_set_time_ex(sess, time(NULL) - 20)", lVar9 != 0);
               if (iVar2 == 0) goto LAB_00115afb;
            }

            if (param_1 == 3) {
               iVar2 = SSL_set_recv_max_early_data(local_80, 0);
               iVar2 = test_true("test/sslapitest.c", 0xfb0, "SSL_set_recv_max_early_data(serverssl, 0)", iVar2 != 0);
               if (iVar2 == 0) goto LAB_00115afb;
            }

            LAB_00115aba:iVar2 = SSL_write_early_data(local_88, "Hello", 5, &local_68);
            iVar2 = test_true("test/sslapitest.c", 0xfb4, "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)", iVar2 != 0);
            if (iVar2 != 0) {
               uVar3 = test_size_t_eq("test/sslapitest.c", 0xfb6, "written", "strlen(MSG1)", local_68, 5);
               if (uVar3 == 0) goto LAB_00115b05;
               uVar4 = SSL_read_early_data(local_80, local_58, 0x14, &local_70);
               iVar2 = test_int_eq("test/sslapitest.c", 0xfba, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_FINISH", uVar4, 2);
               if (( iVar2 != 0 ) && ( iVar2 = test_size_t_eq("test/sslapitest.c", 0xfbd, "readbytes", &_LC15, local_70, 0) ),iVar2 != 0) {
                  uVar4 = SSL_get_early_data_status(local_80);
                  iVar2 = test_int_eq("test/sslapitest.c", 0xfbe, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_REJECTED", uVar4, 1);
                  if (iVar2 != 0) {
                     if (param_1 == 2) {
                        pBVar11 = SSL_get_wbio(local_88);
                        local_5e = 0x30317;
                        local_5a = 1;
                        iVar2 = SSL_write_ex(local_88, "World.", 6, &local_68);
                        iVar2 = test_false("test/sslapitest.c", 0xfe0, "SSL_write_ex(clientssl, MSG2, strlen(MSG2), &written)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = BIO_write_ex(pBVar11, &local_5e, 6, &local_68);
                           iVar2 = test_true("test/sslapitest.c", 0xfe8, "BIO_write_ex(wbio, bad_early_data, sizeof(bad_early_data), &written)", iVar2 != 0);
                           if (iVar2 != 0) goto LAB_00115fb9;
                        }

                     }
 else if (param_1 == 3) {
                        LAB_00115fb9:iVar2 = SSL_read_ex(local_80, local_58, 0x14, &local_70);
                        iVar2 = test_false("test/sslapitest.c", 0xff4, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = SSL_get_error(local_80, 0);
                           iVar2 = test_int_eq("test/sslapitest.c", 0xff5, "SSL_get_error(serverssl, 0)", "SSL_ERROR_SSL", iVar2, 1);
                           uVar3 = ( uint )(iVar2 != 0);
                           goto LAB_00115b05;
                        }

                     }
 else if (param_1 == 1) {
                        iVar2 = SSL_write_ex(local_88, "World.", 6, &local_68);
                        iVar2 = test_false("test/sslapitest.c", 0xfcd, "SSL_write_ex(clientssl, MSG2, strlen(MSG2), &written)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = SSL_read_ex(local_80, local_58, 0x14, &local_70);
                           iVar2 = test_false("test/sslapitest.c", 0xfce, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                           if (iVar2 != 0) goto LAB_00115d72;
                        }

                     }
 else {
                        LAB_00115d72:ERR_clear_error();
                        iVar2 = SSL_write_ex(local_88, "World.", 6, &local_68);
                        iVar2 = test_true("test/sslapitest.c", 0x1006, "SSL_write_ex(clientssl, MSG2, strlen(MSG2), &written)", iVar2 != 0);
                        if (( iVar2 != 0 ) && ( iVar2 = test_size_t_eq("test/sslapitest.c", 0x1007, "written", "strlen(MSG2)", local_68, 6) ),iVar2 != 0) {
                           uVar4 = SSL_get_early_data_status(local_88);
                           iVar2 = test_int_eq("test/sslapitest.c", 0x1008, "SSL_get_early_data_status(clientssl)", "SSL_EARLY_DATA_REJECTED", uVar4, 1);
                           if (iVar2 != 0) {
                              iVar2 = SSL_read_ex(local_80, local_58, 0x14, &local_70);
                              iVar2 = test_true("test/sslapitest.c", 0x100a, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar2 != 0);
                              if (( iVar2 != 0 ) && ( iVar2 = test_mem_eq("test/sslapitest.c", 0x100b, &_LC80, &_LC534, local_58, local_70, "World.", 6) ),iVar2 != 0) {
                                 uVar10 = ERR_peek_error();
                                 iVar2 = test_long_eq("test/sslapitest.c", 0x1012, "ERR_peek_error()", &_LC15, uVar10, 0);
                                 uVar3 = ( uint )(iVar2 != 0);
                                 goto LAB_00115b05;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         LAB_00115afb:uVar3 = 0;
      }

   }

   LAB_00115b05:SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_SESSION_free(ses);
   SSL_free(local_80);
   SSL_free(local_88);
   SSL_CTX_free(local_90);
   SSL_CTX_free(local_98);
   LAB_00115b63:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
void test_early_data_skip_abort(int param_1) {
   undefined1 auVar1[16];
   long lVar2;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = (long)param_1;
   lVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1, 8);
   early_data_skip_helper(3, param_1 + (int)( lVar2 + ( ( ulong )(param_1 - lVar2) >> 1 ) >> 2 ) * -7);
   return;
}
void test_early_data_skip_hrr_fail(int param_1) {
   undefined1 auVar1[16];
   long lVar2;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = (long)param_1;
   lVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1, 8);
   early_data_skip_helper(2, param_1 + (int)( lVar2 + ( ( ulong )(param_1 - lVar2) >> 1 ) >> 2 ) * -7);
   return;
}
void test_early_data_skip_hrr(int param_1) {
   undefined1 auVar1[16];
   long lVar2;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = (long)param_1;
   lVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1, 8);
   early_data_skip_helper(1, param_1 + (int)( lVar2 + ( ( ulong )(param_1 - lVar2) >> 1 ) >> 2 ) * -7);
   return;
}
void test_early_data_skip(int param_1) {
   undefined1 auVar1[16];
   long lVar2;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = (long)param_1;
   lVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1, 8);
   early_data_skip_helper(0, param_1 + (int)( lVar2 + ( ( ulong )(param_1 - lVar2) >> 1 ) >> 2 ) * -7);
   return;
}
byte test_early_data_replay(undefined4 param_1) {
   bool bVar1;
   bool bVar2;
   byte bVar3;
   undefined8 uVar4;
   byte bVar5;
   int iVar6;
   undefined4 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   ulong uVar11;
   ulong uVar12;
   SSL_SESSION *session;
   int iVar13;
   long in_FS_OFFSET;
   int local_94;
   SSL_CTX *local_90;
   SSL_CTX *local_88;
   SSL *local_80;
   SSL *local_78;
   SSL_SESSION *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[24];
   long local_40;
   iVar13 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar5 = 1;
   LAB_001161a2:bVar2 = false;
   bVar3 = bVar5;
   do {
      uVar4 = cert;
      uVar10 = privkey;
      local_90 = (SSL_CTX*)0x0;
      local_88 = (SSL_CTX*)0x0;
      local_80 = (SSL*)0x0;
      local_78 = (SSL*)0x0;
      local_70 = (SSL_SESSION*)0x0;
      allow_ed_cb_called = 0;
      local_94 = iVar13;
      uVar8 = TLS_client_method();
      uVar9 = TLS_server_method();
      iVar6 = create_ssl_ctx_pair(libctx, uVar9, uVar8, 0x301, 0, &local_88, &local_90, uVar4, uVar10);
      iVar6 = test_true("test/sslapitest.c", 0xedf, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar6 != 0);
      if (iVar6 == 0) {
         bVar5 = 0;
      }
 else {
         if (local_94 < 1) {
            LAB_00116284:iVar6 = setupearly_data_test(&local_90, &local_88, &local_80, &local_78, &local_70, param_1, 0x30);
            iVar6 = test_true("test/sslapitest.c", 0xef9, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, idx, SHA384_DIGEST_LENGTH)", iVar6 != 0);
            if (iVar6 == 0) {
               bVar5 = 0;
               session = local_70;
            }
 else {
               iVar6 = create_ssl_connection(local_78, local_80, 0);
               iVar6 = test_true("test/sslapitest.c", 0xf02, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar6 != 0);
               session = local_70;
               if (iVar6 != 0) {
                  iVar6 = SSL_session_reused(local_80);
                  iVar6 = test_true("test/sslapitest.c", 0xf03, "SSL_session_reused(clientssl)", iVar6 != 0);
                  if (iVar6 != 0) {
                     SSL_shutdown(local_80);
                     SSL_shutdown(local_78);
                     SSL_free(local_78);
                     SSL_free(local_80);
                     local_80 = (SSL*)0x0;
                     local_78 = (SSL*)0x0;
                     iVar6 = create_ssl_objects(local_88, local_90, &local_78, &local_80, 0, 0);
                     iVar6 = test_true("test/sslapitest.c", 0xf0c, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar6 != 0);
                     if (iVar6 != 0) {
                        iVar6 = SSL_set_session(local_80, session);
                        iVar6 = test_true("test/sslapitest.c", 0xf0e, "SSL_set_session(clientssl, sess)", iVar6 != 0);
                        if (iVar6 != 0) {
                           uVar11 = ossl_time_now();
                           iVar6 = SSL_write_early_data(local_80, "Hello", 5, &local_60);
                           iVar6 = test_true("test/sslapitest.c", 0xf13, "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)", iVar6 != 0);
                           if (( iVar6 != 0 ) && ( iVar6 = test_size_t_eq("test/sslapitest.c", 0xf15, "written", "strlen(MSG1)", local_60, 5) ),iVar6 != 0) {
                              if (local_94 < 2) {
                                 uVar7 = SSL_read_early_data(local_78, local_58, 0x14);
                                 iVar6 = test_int_eq("test/sslapitest.c", 0xf19, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_FINISH", uVar7, 2);
                                 if (iVar6 != 0) {
                                    uVar7 = SSL_get_early_data_status(local_78);
                                    iVar6 = test_int_eq("test/sslapitest.c", 0xf20, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_REJECTED", uVar7, 1);
                                    joined_r0x0011685d:if (iVar6 != 0) {
                                       iVar6 = create_ssl_connection(local_78, local_80, 0);
                                       iVar6 = test_true("test/sslapitest.c", 0xf3a, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar6 != 0);
                                       if (iVar6 != 0) {
                                          bVar1 = 0 < local_94;
                                          uVar7 = SSL_session_reused(local_80);
                                          iVar6 = test_int_eq("test/sslapitest.c", 0xf3b, "SSL_session_reused(clientssl)", "(usecb > 0) ? 1 : 0", uVar7, bVar1);
                                          if (iVar6 != 0) {
                                             iVar6 = test_int_eq("test/sslapitest.c", 0xf3c, "allow_ed_cb_called", "usecb > 0 ? 1 : 0", allow_ed_cb_called, 0 < local_94);
                                             bVar5 = bVar3 & iVar6 != 0;
                                             goto LAB_001162e6;
                                          }

                                       }

                                    }

                                 }

                              }
 else {
                                 uVar7 = SSL_read_early_data(local_78, local_58, 0x14);
                                 iVar6 = test_int_eq("test/sslapitest.c", 0xf25, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_SUCCESS", uVar7, 1);
                                 if (iVar6 == 0) {
                                    uVar12 = ossl_time_now();
                                    bVar5 = 0;
                                    if (( uVar11 <= uVar12 ) && ( 6999999999 < uVar12 - uVar11 )) {
                                       bVar5 = test_skip("test/sslapitest.c", 0xdd9, "Test took too long, ignoring result");
                                       bVar5 = bVar3 & bVar5;
                                    }

                                    goto LAB_001162e6;
                                 }

                                 iVar6 = test_mem_eq("test/sslapitest.c", 0xf2b, &_LC569, &_LC80, "Hello", 5, local_58, local_68);
                                 if (iVar6 != 0) {
                                    iVar6 = SSL_connect(local_80);
                                    iVar6 = test_int_gt("test/sslapitest.c", 0xf30, "SSL_connect(clientssl)", &_LC15, iVar6, 0);
                                    if (iVar6 != 0) {
                                       uVar7 = SSL_read_early_data(local_78, local_58, 0x14, &local_68);
                                       iVar6 = test_int_eq("test/sslapitest.c", 0xf31, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_FINISH", uVar7, 2);
                                       if (iVar6 != 0) {
                                          uVar7 = SSL_get_early_data_status(local_78);
                                          iVar6 = test_int_eq("test/sslapitest.c", 0xf34, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_ACCEPTED", uVar7, 2);
                                          goto joined_r0x0011685d;
                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

               bVar5 = 0;
            }

         }
 else {
            if (!bVar2) {
               SSL_CTX_set_options(local_88, 0x1000000);
               LAB_0011626e:SSL_CTX_set_allow_early_data_cb(local_88, allow_early_data_cb, &local_94);
               goto LAB_00116284;
            }

            uVar10 = SSL_CONF_CTX_new();
            iVar6 = test_ptr("test/sslapitest.c", 0xeea, "confctx", uVar10);
            if (iVar6 != 0) {
               SSL_CONF_CTX_set_flags(uVar10, 10);
               SSL_CONF_CTX_set_ssl_ctx(uVar10, local_88);
               uVar7 = SSL_CONF_cmd(uVar10, "Options", "-AntiReplay");
               iVar6 = test_int_eq("test/sslapitest.c", 0xeef, "SSL_CONF_cmd(confctx, \"Options\", \"-AntiReplay\")", &_LC223, uVar7, 2);
               if (iVar6 != 0) {
                  SSL_CONF_CTX_free(uVar10);
                  goto LAB_0011626e;
               }

               SSL_CONF_CTX_free(uVar10);
            }

            bVar5 = 0;
            session = (SSL_SESSION*)0x0;
         }

         LAB_001162e6:SSL_SESSION_free(session);
         SSL_SESSION_free(clientpsk);
         SSL_SESSION_free(serverpsk);
         serverpsk = (SSL_SESSION*)0x0;
         clientpsk = (SSL_SESSION*)0x0;
         SSL_free(local_78);
         SSL_free(local_80);
         SSL_CTX_free(local_88);
         SSL_CTX_free(local_90);
      }

      if (bVar2) break;
      bVar2 = true;
      bVar3 = bVar5;
   }
 while ( true );
   iVar13 = iVar13 + 1;
   if (iVar13 == 3) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return bVar5;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   goto LAB_001161a2;
}
undefined8 test_ccs_change_cipher(void) {
   undefined8 uVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   SSL_SESSION *pSVar7;
   SSL_SESSION *session;
   SSL_SESSION *pSVar8;
   SSL_CIPHER *pSVar9;
   ulong uVar10;
   undefined8 uVar11;
   long in_FS_OFFSET;
   undefined1 local_69;
   SSL_CTX *local_68;
   SSL_CTX *local_60;
   SSL *local_58;
   SSL *local_50;
   undefined8 local_48;
   long local_40;
   uVar1 = cert;
   uVar11 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL*)0x0;
   local_50 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0x303, &local_60, &local_68, uVar1, uVar11);
   iVar2 = test_true("test/sslapitest.c", 0x364, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, TLS1_2_VERSION, &sctx, &cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 != 0) {
      lVar6 = SSL_CTX_set_options(local_60, 0x4000);
      iVar2 = test_true("test/sslapitest.c", 0x368, "SSL_CTX_set_options(sctx, SSL_OP_NO_TICKET)", lVar6 != 0);
      if (iVar2 != 0) {
         iVar2 = create_ssl_objects(local_60, local_68, &local_50, &local_58, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x369, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = SSL_set_cipher_list(local_58, "AES128-GCM-SHA256");
            iVar2 = test_true("test/sslapitest.c", 0x36b, "SSL_set_cipher_list(clientssl, \"AES128-GCM-SHA256\")", iVar2 != 0);
            if (iVar2 != 0) {
               iVar2 = create_ssl_connection(local_50, local_58, 0);
               iVar2 = test_true("test/sslapitest.c", 0x36c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
               if (iVar2 != 0) {
                  pSVar7 = SSL_get_session(local_50);
                  iVar2 = test_ptr("test/sslapitest.c", 0x36e, "sesspre = SSL_get0_session(serverssl)", pSVar7);
                  if (iVar2 != 0) {
                     session = SSL_get1_session(local_58);
                     iVar2 = test_ptr("test/sslapitest.c", 0x36f, "sess = SSL_get1_session(clientssl)", session);
                     if (iVar2 != 0) {
                        shutdown_ssl_connection(local_50, local_58);
                        local_58 = (SSL*)0x0;
                        local_50 = (SSL*)0x0;
                        iVar2 = create_ssl_objects(local_60, local_68, &local_50, &local_58, 0, 0);
                        iVar2 = test_true("test/sslapitest.c", 0x377, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = SSL_set_session(local_58, session);
                           iVar2 = test_true("test/sslapitest.c", 0x379, "SSL_set_session(clientssl, sess)", iVar2 != 0);
                           if (iVar2 != 0) {
                              iVar2 = SSL_set_cipher_list(local_58, "AES256-GCM-SHA384:AES128-GCM-SHA256");
                              iVar2 = test_true("test/sslapitest.c", 0x37a, "SSL_set_cipher_list(clientssl, \"AES256-GCM-SHA384:AES128-GCM-SHA256\")", iVar2 != 0);
                              if (iVar2 != 0) {
                                 iVar2 = create_ssl_connection(local_50, local_58, 0);
                                 iVar2 = test_true("test/sslapitest.c", 0x37b, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                                 if (iVar2 != 0) {
                                    iVar2 = SSL_session_reused(local_58);
                                    iVar2 = test_true("test/sslapitest.c", 0x37d, "SSL_session_reused(clientssl)", iVar2 != 0);
                                    if (iVar2 != 0) {
                                       iVar2 = SSL_session_reused(local_50);
                                       iVar2 = test_true("test/sslapitest.c", 0x37e, "SSL_session_reused(serverssl)", iVar2 != 0);
                                       if (iVar2 != 0) {
                                          pSVar8 = SSL_get_session(local_50);
                                          iVar2 = test_ptr("test/sslapitest.c", 0x37f, "sesspost = SSL_get0_session(serverssl)", pSVar8);
                                          if (( iVar2 != 0 ) && ( iVar2 = test_ptr_eq("test/sslapitest.c", 0x380, "sesspre", "sesspost", pSVar7, pSVar8) ),iVar2 != 0) {
                                             pSVar9 = SSL_get_current_cipher(local_58);
                                             uVar10 = SSL_CIPHER_get_id(pSVar9);
                                             iVar2 = test_int_eq("test/sslapitest.c", 0x381, "TLS1_CK_RSA_WITH_AES_128_GCM_SHA256", "SSL_CIPHER_get_id(SSL_get_current_cipher(clientssl))", 0x300009c, uVar10 & 0xffffffff);
                                             if (iVar2 != 0) {
                                                shutdown_ssl_connection(local_50, local_58);
                                                local_58 = (SSL*)0x0;
                                                local_50 = (SSL*)0x0;
                                                iVar2 = create_ssl_objects(local_60, local_68, &local_50, &local_58, 0, 0);
                                                iVar2 = test_true("test/sslapitest.c", 0x38b, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
                                                if (iVar2 != 0) {
                                                   iVar2 = SSL_set_cipher_list(local_58, "AES128-GCM-SHA256");
                                                   iVar2 = test_true("test/sslapitest.c", 0x38d, "SSL_set_cipher_list(clientssl, \"AES128-GCM-SHA256\")", iVar2 != 0);
                                                   if (iVar2 != 0) {
                                                      iVar2 = create_ssl_connection(local_50, local_58, 0);
                                                      iVar2 = test_true("test/sslapitest.c", 0x38e, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                                                      if (iVar2 != 0) {
                                                         pSVar7 = SSL_get_session(local_50);
                                                         iVar2 = test_ptr("test/sslapitest.c", 0x390, "sesspre = SSL_get0_session(serverssl)", pSVar7);
                                                         if (iVar2 != 0) {
                                                            iVar2 = SSL_set_cipher_list(local_58, "AES256-GCM-SHA384");
                                                            iVar2 = test_true("test/sslapitest.c", 0x391, "SSL_set_cipher_list(clientssl, \"AES256-GCM-SHA384\")", iVar2 != 0);
                                                            if (iVar2 != 0) {
                                                               iVar2 = SSL_renegotiate(local_58);
                                                               iVar2 = test_true("test/sslapitest.c", 0x392, "SSL_renegotiate(clientssl)", iVar2 != 0);
                                                               if (iVar2 != 0) {
                                                                  iVar2 = SSL_renegotiate_pending(local_58);
                                                                  iVar2 = test_true("test/sslapitest.c", 0x393, "SSL_renegotiate_pending(clientssl)", iVar2 != 0);
                                                                  if (iVar2 != 0) {
                                                                     iVar2 = 3;
                                                                     do {
                                                                        iVar3 = SSL_read_ex(local_58, &local_69, 1, &local_48);
                                                                        if (iVar3 < 1) {
                                                                           iVar3 = SSL_get_error(local_58, 0);
                                                                           iVar3 = test_int_eq("test/sslapitest.c", 0x39a, "SSL_get_error(clientssl, 0)", "SSL_ERROR_WANT_READ", iVar3, 2);
                                                                           if (iVar3 == 0) {
                                                                              uVar11 = 0;
                                                                              goto LAB_0011697e;
                                                                           }

                                                                        }
 else {
                                                                           iVar3 = test_ulong_eq("test/sslapitest.c", 0x398, "readbytes", &_LC15, local_48, 0);
                                                                           if (iVar3 == 0) goto LAB_00117098;
                                                                        }

                                                                        iVar3 = SSL_read_ex(local_50, &local_69, 1, &local_48);
                                                                        if (iVar3 < 1) {
                                                                           iVar3 = SSL_get_error(local_50, 0);
                                                                           iVar3 = test_int_eq("test/sslapitest.c", 0x3a1, "SSL_get_error(serverssl, 0)", "SSL_ERROR_WANT_READ", iVar3);
                                                                        }
 else {
                                                                           iVar3 = test_ulong_eq("test/sslapitest.c", 0x39f, "readbytes", &_LC15, local_48, 0);
                                                                        }

                                                                        if (iVar3 == 0) goto LAB_00117098;
                                                                        iVar2 = iVar2 + -1;
                                                                     }
 while ( iVar2 != 0 );
                                                                     iVar2 = SSL_renegotiate_pending(local_58);
                                                                     iVar2 = test_false("test/sslapitest.c", 0x3a7, "SSL_renegotiate_pending(clientssl)", iVar2 != 0);
                                                                     if (iVar2 != 0) {
                                                                        iVar2 = SSL_session_reused(local_58);
                                                                        iVar2 = test_false("test/sslapitest.c", 0x3a8, "SSL_session_reused(clientssl)", iVar2 != 0);
                                                                        if (iVar2 != 0) {
                                                                           iVar2 = SSL_session_reused(local_50);
                                                                           iVar2 = test_false("test/sslapitest.c", 0x3a9, "SSL_session_reused(serverssl)", iVar2 != 0);
                                                                           if (iVar2 != 0) {
                                                                              pSVar8 = SSL_get_session(local_50);
                                                                              iVar2 = test_ptr("test/sslapitest.c", 0x3aa, "sesspost = SSL_get0_session(serverssl)", pSVar8);
                                                                              if (( iVar2 != 0 ) && ( iVar2 = test_ptr_ne("test/sslapitest.c", 0x3ab, "sesspre", "sesspost", pSVar7, pSVar8) ),iVar2 != 0) {
                                                                                 pSVar9 = SSL_get_current_cipher(local_58);
                                                                                 uVar10 = SSL_CIPHER_get_id(pSVar9);
                                                                                 iVar2 = test_int_eq("test/sslapitest.c", 0x3ac, "TLS1_CK_RSA_WITH_AES_256_GCM_SHA384", "SSL_CIPHER_get_id(SSL_get_current_cipher(clientssl))", 0x300009d, uVar10 & 0xffffffff);
                                                                                 if (iVar2 != 0) {
                                                                                    uVar11 = 1;
                                                                                    shutdown_ssl_connection(local_50, local_58);
                                                                                    local_58 = (SSL*)0x0;
                                                                                    local_50 = (SSL*)0x0;
                                                                                    goto LAB_0011697e;
                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                     LAB_00117098:uVar11 = 0;
                     goto LAB_0011697e;
                  }

               }

            }

         }

      }

   }

   uVar11 = 0;
   session = (SSL_SESSION*)0x0;
   LAB_0011697e:SSL_free(local_50);
   SSL_free(local_58);
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_68);
   SSL_SESSION_free(session);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
bool test_client_hello_cb(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined4 local_44;
   SSL_CTX *local_40;
   SSL_CTX *local_38;
   SSL *local_30;
   SSL *local_28;
   long local_20;
   uVar2 = cert;
   uVar1 = privkey;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   local_40 = (SSL_CTX*)0x0;
   local_38 = (SSL_CTX*)0x0;
   local_30 = (SSL*)0x0;
   local_28 = (SSL*)0x0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0, &local_38, &local_40, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x2f8, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
   if (iVar3 != 0) {
      SSL_CTX_set_client_hello_cb(local_38, full_client_hello_callback, &local_44);
      SSL_CTX_ctrl(local_40, 0x7c, 0x303, (void*)0x0);
      SSL_CTX_set_security_level(local_40, 2);
      iVar3 = SSL_CTX_set_cipher_list(local_40, "AES256-GCM-SHA384:ECDHE-ECDSA-AES256-GCM-SHA384");
      iVar3 = test_true("test/sslapitest.c", 0x302, "SSL_CTX_set_cipher_list(cctx, \"AES256-GCM-SHA384:ECDHE-ECDSA-AES256-GCM-SHA384\")", iVar3 != 0);
      if (iVar3 != 0) {
         iVar3 = create_ssl_objects(local_38, local_40, &local_28, &local_30, 0, 0);
         iVar3 = test_true("test/sslapitest.c", 0x304, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
         if (iVar3 != 0) {
            iVar3 = create_ssl_connection(local_28, local_30, 0xb);
            iVar3 = test_false("test/sslapitest.c", 0x306, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_WANT_CLIENT_HELLO_CB)", iVar3 != 0);
            if (iVar3 != 0) {
               iVar3 = SSL_get_error(local_28, -1);
               iVar3 = test_int_eq("test/sslapitest.c", 0x30c, "SSL_get_error(serverssl, -1)", "SSL_ERROR_WANT_CLIENT_HELLO_CB", iVar3, 0xb);
               if (iVar3 != 0) {
                  iVar3 = create_ssl_connection(local_28, local_30, 0);
                  iVar3 = test_true("test/sslapitest.c", 0x30e, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                  bVar6 = iVar3 != 0;
                  goto LAB_0011719b;
               }

            }

         }

      }

   }

   bVar6 = false;
   LAB_0011719b:SSL_free(local_28);
   SSL_free(local_30);
   SSL_CTX_free(local_38);
   SSL_CTX_free(local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_no_ems(void) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   SSL_CTX *local_40;
   SSL_CTX *local_38;
   SSL *local_30;
   SSL *local_28;
   long local_20;
   uVar1 = cert;
   uVar6 = privkey;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (SSL_CTX*)0x0;
   local_38 = (SSL_CTX*)0x0;
   local_30 = (SSL*)0x0;
   local_28 = (SSL*)0x0;
   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0x303, &local_38, &local_40, uVar1, uVar6);
   if (iVar2 == 0) {
      puts("Unable to create SSL_CTX pair");
   }
 else {
      SSL_CTX_set_options(local_38, 1);
      iVar2 = create_ssl_objects(local_38, local_40, &local_28, &local_30, 0, 0);
      if (iVar2 == 0) {
         puts("Unable to create SSL objects");
      }
 else {
         iVar2 = create_ssl_connection(local_28, local_30, 0);
         if (fips_ems_check == 0) {
            if (iVar2 == 0) {
               puts("Creating SSL connection failed");
            }
 else {
               lVar5 = SSL_ctrl(local_28, 0x7a, 0, (void*)0x0);
               if (lVar5 == 0) {
                  lVar5 = SSL_ctrl(local_30, 0x7a, 0, (void*)0x0);
                  if (lVar5 == 0) goto LAB_0011743c;
                  puts("Client reports Extended Master Secret support");
               }
 else {
                  puts("Server reports Extended Master Secret support");
               }

            }

         }
 else {
            if (iVar2 != 1) {
               LAB_0011743c:uVar6 = 1;
               goto LAB_00117456;
            }

            puts("When FIPS uses the EMS check a connection that doesn\'t use EMS should fail");
         }

      }

   }

   uVar6 = 0;
   LAB_00117456:SSL_free(local_28);
   SSL_free(local_30);
   SSL_CTX_free(local_38);
   SSL_CTX_free(local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 full_client_hello_callback(undefined8 param_1, undefined8 param_2, int *param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 *puVar3;
   undefined1 *local_60;
   long *local_58;
   long local_50;
   long local_48;
   undefined4 uStack_40;
   undefined4 uStack_3c;
   undefined4 uStack_38;
   undefined4 uStack_34;
   undefined4 local_30;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0x2cc09d00;
   local_30 = 0xd;
   uStack_38 = (undefined4)_LC755;
   uStack_34 = ( undefined4 )((ulong)_LC755 >> 0x20);
   iVar1 = *param_3;
   local_48 = __LC754;
   uStack_40 = (undefined4)_UNK_0013dbb8;
   uStack_3c = ( undefined4 )((ulong)_UNK_0013dbb8 >> 0x20);
   *param_3 = iVar1 + 1;
   uVar2 = 0xffffffff;
   if (iVar1 != 0) {
      local_50 = SSL_client_hello_get0_ciphers(param_1, &local_60);
      puVar3 = &local_24;
      iVar1 = test_mem_eq("test/sslapitest.c", 0x2e1, &_LC257, "expected_ciphers", local_60, local_50, puVar3);
      if (iVar1 != 0) {
         uVar2 = SSL_client_hello_get0_compression_methods(param_1, &local_60, puVar3, 4);
         iVar1 = test_size_t_eq("test/sslapitest.c", 0x2e2, "SSL_client_hello_get0_compression_methods(s, &p)", &_LC49, uVar2, 1);
         if (iVar1 != 0) {
            iVar1 = test_int_eq("test/sslapitest.c", 0x2e4, &_LC758, &_LC15, *local_60, 0);
            if (iVar1 != 0) {
               iVar1 = SSL_client_hello_get1_extensions_present(param_1, &local_58, &local_50);
               if (iVar1 != 0) {
                  if (( ( local_50 == 7 ) && ( *local_58 == local_48 && local_58[1] == CONCAT44(uStack_3c, uStack_40) ) ) && ( *(long*)( (long)local_58 + 0xc ) == CONCAT44(uStack_38, uStack_3c) && *(long*)( (long)local_58 + 0x14 ) == CONCAT44(local_30, uStack_34) )) {
                     CRYPTO_free(local_58);
                     uVar2 = 1;
                  }
 else {
                     puts("ClientHello callback expected extensions mismatch");
                     CRYPTO_free(local_58);
                     uVar2 = 0;
                  }

                  goto LAB_001175a5;
               }

            }

         }

      }

      uVar2 = 0;
   }

   LAB_001175a5:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_ssl_ctx_build_cert_chain(void) {
   int iVar1;
   char *file;
   char *file_00;
   undefined8 uVar2;
   SSL_CTX *ctx;
   long lVar3;
   bool bVar4;
   file = (char*)test_mk_file_path(certsdir, "leaf-encrypted.key");
   file_00 = (char*)test_mk_file_path(certsdir, "leaf-chain.pem");
   uVar2 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar2);
   iVar1 = test_ptr("test/sslapitest.c", 0x2b4, "ctx = SSL_CTX_new_ex(libctx, NULL, TLS_server_method())", ctx);
   if (iVar1 != 0) {
      SSL_CTX_set_default_passwd_cb(ctx, get_password_cb);
      iVar1 = SSL_CTX_use_certificate_chain_file(ctx, file_00);
      iVar1 = test_int_eq("test/sslapitest.c", 0x2b8, "SSL_CTX_use_certificate_chain_file(ctx, leaf_chain)", &_LC49, iVar1, 1);
      if (iVar1 != 0) {
         iVar1 = SSL_CTX_use_PrivateKey_file(ctx, file, 1);
         iVar1 = test_int_eq("test/sslapitest.c", 0x2b9, "SSL_CTX_use_PrivateKey_file(ctx, skey, SSL_FILETYPE_PEM)", &_LC49, iVar1, 1);
         if (iVar1 != 0) {
            iVar1 = SSL_CTX_check_private_key(ctx);
            iVar1 = test_int_eq("test/sslapitest.c", 699, "SSL_CTX_check_private_key(ctx)", &_LC49, iVar1, 1);
            if (iVar1 != 0) {
               lVar3 = SSL_CTX_ctrl(ctx, 0x69, 6, (void*)0x0);
               iVar1 = test_true("test/sslapitest.c", 0x2bd, "SSL_CTX_build_cert_chain(ctx, SSL_BUILD_CHAIN_FLAG_NO_ROOT | SSL_BUILD_CHAIN_FLAG_CHECK)", lVar3 != 0);
               bVar4 = iVar1 != 0;
               goto LAB_00117786;
            }

         }

      }

   }

   bVar4 = false;
   LAB_00117786:SSL_CTX_free(ctx);
   CRYPTO_free(file_00);
   CRYPTO_free(file);
   return bVar4;
}
uint test_ssl_build_cert_chain(void) {
   uint uVar1;
   int iVar2;
   undefined4 uVar3;
   char *file;
   void *ptr;
   undefined8 uVar4;
   SSL_CTX *ctx;
   SSL *ssl;
   long lVar5;
   ssl = (SSL*)0x0;
   file = (char*)test_mk_file_path(certsdir, "leaf.key");
   ptr = (void*)test_mk_file_path(certsdir, "leaf-chain.pem");
   uVar4 = TLS_server_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar4);
   uVar1 = test_ptr("test/sslapitest.c", 0x28d, "ssl_ctx = SSL_CTX_new_ex(libctx, NULL, TLS_server_method())", ctx);
   if (uVar1 != 0) {
      ssl = SSL_new(ctx);
      iVar2 = test_ptr("test/sslapitest.c", 0x28f, "ssl = SSL_new(ssl_ctx)", ssl);
      if (iVar2 != 0) {
         uVar3 = SSL_use_certificate_chain_file(ssl, ptr);
         iVar2 = test_int_eq("test/sslapitest.c", 0x292, "SSL_use_certificate_chain_file(ssl, leaf_chain)", &_LC49, uVar3, 1);
         if (iVar2 != 0) {
            iVar2 = SSL_use_PrivateKey_file(ssl, file, 1);
            iVar2 = test_int_eq("test/sslapitest.c", 0x293, "SSL_use_PrivateKey_file(ssl, skey, SSL_FILETYPE_PEM)", &_LC49, iVar2, 1);
            if (iVar2 != 0) {
               iVar2 = SSL_check_private_key(ssl);
               iVar2 = test_int_eq("test/sslapitest.c", 0x294, "SSL_check_private_key(ssl)", &_LC49, iVar2, 1);
               if (iVar2 != 0) {
                  lVar5 = SSL_ctrl(ssl, 0x69, 6, (void*)0x0);
                  iVar2 = test_true("test/sslapitest.c", 0x296, "SSL_build_cert_chain(ssl, SSL_BUILD_CHAIN_FLAG_NO_ROOT | SSL_BUILD_CHAIN_FLAG_CHECK)", lVar5 != 0);
                  uVar1 = ( uint )(iVar2 != 0);
                  goto LAB_0011792e;
               }

            }

         }

      }

      uVar1 = 0;
   }

   LAB_0011792e:SSL_free(ssl);
   SSL_CTX_free(ctx);
   CRYPTO_free(ptr);
   CRYPTO_free(file);
   return uVar1;
}
uint test_client_cert_verify_cb(void) {
   int iVar1;
   uint uVar2;
   char *file;
   char *file_00;
   void *ptr;
   void *ptr_00;
   char *CAfile;
   undefined8 uVar3;
   undefined8 uVar4;
   X509 *a;
   X509 *a_00;
   stack_st_X509 *psVar5;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   file = (char*)test_mk_file_path(certsdir, "leaf.key");
   file_00 = (char*)test_mk_file_path(certsdir, "leaf.pem");
   ptr = (void*)test_mk_file_path(certsdir, "subinterCA.pem");
   ptr_00 = (void*)test_mk_file_path(certsdir, "interCA.pem");
   CAfile = (char*)test_mk_file_path(certsdir, "rootCA.pem");
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   iVar1 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0, &local_58, &local_60, 0, 0);
   iVar1 = test_true("test/sslapitest.c", 0x244, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, NULL, NULL)", iVar1 != 0);
   if (iVar1 != 0) {
      iVar1 = SSL_CTX_use_certificate_chain_file(local_58, file_00);
      iVar1 = test_int_eq("test/sslapitest.c", 0x248, "SSL_CTX_use_certificate_chain_file(sctx, leaf)", &_LC49, iVar1, 1);
      if (iVar1 != 0) {
         iVar1 = SSL_CTX_use_PrivateKey_file(local_58, file, 1);
         iVar1 = test_int_eq("test/sslapitest.c", 0x249, "SSL_CTX_use_PrivateKey_file(sctx, skey, SSL_FILETYPE_PEM)", &_LC49, iVar1, 1);
         if (iVar1 != 0) {
            iVar1 = SSL_CTX_check_private_key(local_58);
            iVar1 = test_int_eq("test/sslapitest.c", 0x24b, "SSL_CTX_check_private_key(sctx)", &_LC49, iVar1, 1);
            if (iVar1 != 0) {
               iVar1 = SSL_CTX_load_verify_locations(local_60, CAfile, (char*)0x0);
               iVar1 = test_true("test/sslapitest.c", 0x24d, "SSL_CTX_load_verify_locations(cctx, root, NULL)", iVar1 != 0);
               if (iVar1 != 0) {
                  SSL_CTX_set_verify(local_60, 1, (callback*)0x0);
                  SSL_CTX_set_cert_verify_callback(local_60, verify_retry_cb, (void*)0x0);
                  iVar1 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
                  iVar1 = test_true("test/sslapitest.c", 0x251, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = create_ssl_connection(local_48, local_50, 0xc);
                     iVar1 = test_false("test/sslapitest.c", 0x256, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_WANT_RETRY_VERIFY)", iVar1 != 0);
                     if (iVar1 != 0) {
                        a_00 = (X509*)0x0;
                        a = (X509*)load_cert_pem(ptr_00, libctx);
                        uVar2 = test_ptr("test/sslapitest.c", 0x25b, "(crt1 = load_cert_pem(int1, libctx))", a);
                        if (uVar2 != 0) {
                           a_00 = (X509*)load_cert_pem(ptr, libctx);
                           iVar1 = test_ptr("test/sslapitest.c", 0x25c, "(crt2 = load_cert_pem(int2, libctx))", a_00);
                           if (iVar1 != 0) {
                              psVar5 = SSL_get_peer_cert_chain(local_50);
                              iVar1 = test_ptr("test/sslapitest.c", 0x25d, "(server_chain = SSL_get_peer_cert_chain(clientssl))", psVar5);
                              if (iVar1 != 0) {
                                 iVar1 = OPENSSL_sk_push(psVar5, a);
                                 iVar1 = test_true("test/sslapitest.c", 0x260, "sk_X509_push(server_chain, crt1)", iVar1 != 0);
                                 if (iVar1 != 0) {
                                    iVar1 = OPENSSL_sk_push(psVar5, a_00);
                                    uVar2 = test_true("test/sslapitest.c", 0x263, "sk_X509_push(server_chain, crt2)", iVar1 != 0);
                                    a = (X509*)0x0;
                                    if (uVar2 != 0) {
                                       iVar1 = create_ssl_connection(local_48, local_50, 0);
                                       iVar1 = test_true("test/sslapitest.c", 0x268, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
                                       a = (X509*)0x0;
                                       uVar2 = ( uint )(iVar1 != 0);
                                       a_00 = (X509*)0x0;
                                    }

                                    goto LAB_00117ba9;
                                 }

                              }

                           }

                           uVar2 = 0;
                        }

                        goto LAB_00117ba9;
                     }

                  }

               }

            }

         }

      }

   }

   uVar2 = 0;
   a_00 = (X509*)0x0;
   a = (X509*)0x0;
   LAB_00117ba9:X509_free(a);
   X509_free(a_00);
   if (local_50 != (SSL*)0x0) {
      SSL_shutdown(local_50);
      SSL_free(local_50);
   }

   if (local_48 != (SSL*)0x0) {
      SSL_shutdown(local_48);
      SSL_free(local_48);
   }

   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   CRYPTO_free(file);
   CRYPTO_free(file_00);
   CRYPTO_free(ptr);
   CRYPTO_free(ptr_00);
   CRYPTO_free(CAfile);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint verify_retry_cb(X509_STORE_CTX *param_1) {
   uint uVar1;
   int iVar2;
   SSL *ssl;
   long lVar3;
   uVar1 = X509_verify_cert(param_1);
   iVar2 = SSL_get_ex_data_X509_STORE_CTX_idx();
   if (( -1 < iVar2 ) && ( ssl = (SSL*)X509_STORE_CTX_get_ex_data(param_1, iVar2) ),ssl != (SSL*)0x0) {
      if (uVar1 != 0) {
         return uVar1;
      }

      iVar2 = X509_STORE_CTX_get_error(param_1);
      if (iVar2 == 0x14) {
         lVar3 = SSL_ctrl(ssl, 0x88, 0, (void*)0x0);
         return ( uint )(0 < lVar3);
      }

   }

   return 0;
}
int execute_test_ssl_bio(int param_1, int param_2) {
   int iVar1;
   undefined8 uVar2;
   SSL_CTX *ctx;
   SSL *ssl;
   BIO_METHOD *pBVar3;
   BIO *bp;
   BIO *append;
   BIO *pBVar4;
   uVar2 = TLS_method();
   ctx = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar2);
   iVar1 = test_ptr("test/sslapitest.c", 0xc02, "ctx = SSL_CTX_new_ex(libctx, NULL, TLS_method())", ctx);
   if (iVar1 == 0) {
      iVar1 = 0;
      ssl = (SSL*)0x0;
      append = (BIO*)0x0;
      bp = (BIO*)0x0;
   }
 else {
      ssl = SSL_new(ctx);
      iVar1 = test_ptr("test/sslapitest.c", 0xc03, "ssl = SSL_new(ctx)", ssl);
      if (iVar1 == 0) {
         append = (BIO*)0x0;
         bp = (BIO*)0x0;
         iVar1 = 0;
      }
 else {
         pBVar3 = BIO_f_ssl();
         bp = BIO_new(pBVar3);
         iVar1 = test_ptr("test/sslapitest.c", 0xc04, "sslbio = BIO_new(BIO_f_ssl())", bp);
         append = (BIO*)0x0;
         if (iVar1 != 0) {
            pBVar3 = BIO_s_mem();
            append = BIO_new(pBVar3);
            iVar1 = test_ptr("test/sslapitest.c", 0xc05, "membio1 = BIO_new(BIO_s_mem())", append);
            if (iVar1 != 0) {
               BIO_ctrl(bp, 0x6d, 1, ssl);
               BIO_push(bp, append);
               if (param_2 != 0) {
                  pBVar3 = BIO_s_mem();
                  pBVar4 = BIO_new(pBVar3);
                  iVar1 = test_ptr("test/sslapitest.c", 0xc11, "membio2 = BIO_new(BIO_s_mem())", pBVar4);
                  if (iVar1 == 0) {
                     ssl = (SSL*)0x0;
                     iVar1 = 0;
                     goto LAB_0011802b;
                  }

                  if (param_2 == 1) {
                     SSL_set0_rbio(ssl, pBVar4);
                  }
 else {
                     SSL_set0_wbio(ssl, pBVar4);
                  }

               }

               if (param_1 == 0) {
                  BIO_pop(append);
               }
 else {
                  BIO_pop(bp);
               }

               iVar1 = 1;
               ssl = (SSL*)0x0;
            }

         }

      }

   }

   LAB_0011802b:BIO_free(append);
   BIO_free(bp);
   SSL_free(ssl);
   SSL_CTX_free(ctx);
   return iVar1;
}
void test_ssl_bio_change_wbio(void) {
   execute_test_ssl_bio(0, 2);
   return;
}
void test_ssl_bio_change_rbio(void) {
   execute_test_ssl_bio(0, 1);
   return;
}
void test_ssl_bio_pop_ssl_bio(void) {
   execute_test_ssl_bio(1, 0);
   return;
}
void test_ssl_bio_pop_next_bio(void) {
   execute_test_ssl_bio(0, 0);
   return;
}
undefined8 setup_ticket_test(int param_1, int param_2, undefined8 *param_3, undefined8 *param_4) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   uchar local_44[4];
   long local_40;
   uVar1 = cert;
   uVar5 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      local_44[i] = '\x01';
   }

   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   iVar2 = create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0, param_3, param_4, uVar1, uVar5);
   iVar2 = test_true("test/sslapitest.c", 0x9ab, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, sctx, cctx, cert, privkey)", iVar2 != 0);
   if (iVar2 != 0) {
      iVar2 = SSL_CTX_set_num_tickets(*param_3, (long)param_2);
      iVar2 = test_true("test/sslapitest.c", 0x9ae, "SSL_CTX_set_num_tickets(*sctx, idx)", iVar2 != 0);
      if (iVar2 != 0) {
         SSL_CTX_set_session_id_context((SSL_CTX*)*param_3, local_44, 4);
         iVar2 = test_true("test/sslapitest.c", 0x9af, "SSL_CTX_set_session_id_context(*sctx, (void *)&sess_id_ctx, sizeof(sess_id_ctx))");
         if (iVar2 != 0) {
            if (param_1 != 0) {
               SSL_CTX_set_options(*param_3, 0x4000);
            }

            SSL_CTX_ctrl((SSL_CTX*)*param_4, 0x2c, 0x201, (void*)0x0);
            SSL_CTX_sess_set_new_cb((SSL_CTX*)*param_4, new_cachesession_cb);
            uVar5 = 1;
            goto LAB_001182d0;
         }

      }

   }

   uVar5 = 0;
   LAB_001182d0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int test_extra_tickets(int param_1) {
   bool bVar1;
   int iVar2;
   BIO_METHOD *type;
   BIO *a;
   BIO *a_00;
   long in_FS_OFFSET;
   undefined1 local_71;
   SSL_CTX *local_70;
   SSL_CTX *local_68;
   SSL *local_60;
   SSL *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   undefined1 local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL*)0x0;
   local_58 = (SSL*)0x0;
   type = (BIO_METHOD*)bio_s_always_retry();
   a = BIO_new(type);
   new_called = 0;
   do_cache._0_4_ = 1;
   bVar1 = 2 < param_1;
   if (bVar1) {
      param_1 = param_1 + -3;
   }

   iVar2 = test_ptr("test/sslapitest.c", 0xab5, "bretry", a);
   if (iVar2 != 0) {
      iVar2 = setup_ticket_test(bVar1, param_1, &local_70, &local_68);
      if (iVar2 != 0) {
         SSL_CTX_sess_set_new_cb(local_70, new_session_cb);
         SSL_CTX_sess_set_new_cb(local_68, new_session_cb);
         iVar2 = create_ssl_objects(local_70, local_68, &local_60, &local_58, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0xabb, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
         if (iVar2 != 0) {
            iVar2 = create_ssl_connection(local_60, local_58, 0);
            iVar2 = test_true("test/sslapitest.c", 0xac3, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
            if (iVar2 != 0) {
               param_1 = param_1 * 2;
               iVar2 = test_int_eq("test/sslapitest.c", 0xac6, "idx * 2", "new_called", param_1, new_called);
               if (iVar2 != 0) {
                  iVar2 = SSL_new_session_ticket(local_60);
                  iVar2 = test_true("test/sslapitest.c", 0xac7, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                  if (iVar2 != 0) {
                     iVar2 = SSL_new_session_ticket(local_60);
                     iVar2 = test_true("test/sslapitest.c", 0xac8, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = test_int_eq("test/sslapitest.c", 0xac9, "idx * 2", "new_called", param_1, new_called);
                        if (iVar2 != 0) {
                           local_71 = 0x31;
                           iVar2 = SSL_write_ex(local_60, &local_71, 1, &local_50);
                           iVar2 = test_true("test/sslapitest.c", 0xace, "SSL_write_ex(serverssl, &c, 1, &nbytes)", iVar2 != 0);
                           if (iVar2 != 0) {
                              iVar2 = test_size_t_eq("test/sslapitest.c", 0xacf, &_LC49, "nbytes", 1, CONCAT44(uStack_4c, local_50));
                              if (iVar2 != 0) {
                                 iVar2 = test_int_eq("test/sslapitest.c", 0xad0, "idx * 2 + 2", "new_called", param_1 + 2, new_called);
                                 if (iVar2 != 0) {
                                    iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                    iVar2 = test_true("test/sslapitest.c", 0xad1, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                    if (iVar2 != 0) {
                                       iVar2 = test_int_eq("test/sslapitest.c", 0xad2, "idx * 2 + 4", "new_called", param_1 + 4, new_called);
                                       if (iVar2 != 0) {
                                          iVar2 = test_int_eq("test/sslapitest.c", 0xad3, "sizeof(buf)", "nbytes", 1, local_50);
                                          if (iVar2 != 0) {
                                             iVar2 = test_int_eq("test/sslapitest.c", 0xad4, &_LC801, "buf[0]", local_71, local_41);
                                             if (iVar2 != 0) {
                                                iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                iVar2 = test_false("test/sslapitest.c", 0xad5, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                if (iVar2 != 0) {
                                                   local_71 = 0x32;
                                                   new_called = 0;
                                                   iVar2 = SSL_new_session_ticket(local_60);
                                                   iVar2 = test_true("test/sslapitest.c", 0xadb, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                                                   if (iVar2 != 0) {
                                                      iVar2 = SSL_write_ex(local_60, &local_71, 1, &local_50);
                                                      iVar2 = test_true("test/sslapitest.c", 0xadc, "SSL_write_ex(serverssl, &c, sizeof(c), &nbytes)", iVar2 != 0);
                                                      if (iVar2 != 0) {
                                                         iVar2 = test_size_t_eq("test/sslapitest.c", 0xadd, "sizeof(c)", "nbytes", 1, CONCAT44(uStack_4c, local_50));
                                                         if (iVar2 != 0) {
                                                            iVar2 = test_int_eq("test/sslapitest.c", 0xade, &_LC49, "new_called", 1, new_called);
                                                            if (iVar2 != 0) {
                                                               iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                               iVar2 = test_true("test/sslapitest.c", 0xadf, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                               if (iVar2 != 0) {
                                                                  iVar2 = test_int_eq("test/sslapitest.c", 0xae0, &_LC223, "new_called", 2, new_called);
                                                                  if (iVar2 != 0) {
                                                                     iVar2 = test_size_t_eq("test/sslapitest.c", 0xae1, "sizeof(buf)", "nbytes", 1, CONCAT44(uStack_4c, local_50));
                                                                     if (iVar2 != 0) {
                                                                        iVar2 = test_int_eq("test/sslapitest.c", 0xae2, &_LC801, "buf[0]", local_71, local_41);
                                                                        if (iVar2 != 0) {
                                                                           local_71 = 0x33;
                                                                           new_called = 0;
                                                                           iVar2 = SSL_new_session_ticket(local_60);
                                                                           iVar2 = test_true("test/sslapitest.c", 0xae8, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                                                                           if (iVar2 != 0) {
                                                                              iVar2 = SSL_new_session_ticket(local_60);
                                                                              iVar2 = test_true("test/sslapitest.c", 0xae9, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                                                                              if (iVar2 != 0) {
                                                                                 iVar2 = SSL_write_ex(local_60, &local_71, 0, &local_50);
                                                                                 iVar2 = test_true("test/sslapitest.c", 0xaea, "SSL_write_ex(serverssl, &c, 0, &nbytes)", iVar2 != 0);
                                                                                 if (iVar2 != 0) {
                                                                                    iVar2 = test_size_t_eq("test/sslapitest.c", 0xaeb, &_LC15, "nbytes", 0, CONCAT44(uStack_4c, local_50));
                                                                                    if (iVar2 != 0) {
                                                                                       iVar2 = test_int_eq("test/sslapitest.c", 0xaec, &_LC223, "new_called", 2, new_called);
                                                                                       if (iVar2 != 0) {
                                                                                          iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                                                          iVar2 = test_false("test/sslapitest.c", 0xaed, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                                                          if (iVar2 != 0) {
                                                                                             iVar2 = test_int_eq("test/sslapitest.c", 0xaee, &_LC110, "new_called", 4, new_called);
                                                                                             if (iVar2 != 0) {
                                                                                                local_71 = 0x34;
                                                                                                new_called = 0;
                                                                                                iVar2 = SSL_new_session_ticket(local_60);
                                                                                                iVar2 = test_true("test/sslapitest.c", 0xaf4, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                                                                                                if (iVar2 != 0) {
                                                                                                   iVar2 = SSL_new_session_ticket(local_60);
                                                                                                   iVar2 = test_true("test/sslapitest.c", 0xaf5, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                                                                                                   if (iVar2 != 0) {
                                                                                                      iVar2 = SSL_do_handshake(local_60);
                                                                                                      iVar2 = test_true("test/sslapitest.c", 0xaf6, "SSL_do_handshake(serverssl)", iVar2 != 0);
                                                                                                      if (iVar2 != 0) {
                                                                                                         iVar2 = test_int_eq("test/sslapitest.c", 0xaf7, &_LC223, "new_called", 2, new_called);
                                                                                                         if (iVar2 != 0) {
                                                                                                            iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                                                                            iVar2 = test_false("test/sslapitest.c", 0xaf8, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                                                                            if (iVar2 != 0) {
                                                                                                               iVar2 = test_int_eq("test/sslapitest.c", 0xaf9, &_LC110, "new_called", 4, new_called);
                                                                                                               if (iVar2 != 0) {
                                                                                                                  local_71 = 0x35;
                                                                                                                  new_called = 0;
                                                                                                                  a_00 = SSL_get_wbio(local_60);
                                                                                                                  iVar2 = test_ptr("test/sslapitest.c", 0xb03, &_LC51, a_00);
                                                                                                                  if (iVar2 != 0) {
                                                                                                                     iVar2 = BIO_up_ref(a_00);
                                                                                                                     iVar2 = test_true("test/sslapitest.c", 0xb03, "BIO_up_ref(tmp)", iVar2 != 0);
                                                                                                                     if (iVar2 != 0) {
                                                                                                                        SSL_set0_wbio(local_60, a);
                                                                                                                        iVar2 = SSL_write_ex(local_60, &local_71, 1, &local_50);
                                                                                                                        iVar2 = test_false("test/sslapitest.c", 0xb09, "SSL_write_ex(serverssl, &c, 1, &nbytes)", iVar2 != 0);
                                                                                                                        if (iVar2 != 0) {
                                                                                                                           a = (BIO*)0x0;
                                                                                                                           iVar2 = SSL_get_error(local_60, 0);
                                                                                                                           iVar2 = test_int_eq("test/sslapitest.c", 0xb0a, "SSL_get_error(serverssl, 0)", "SSL_ERROR_WANT_WRITE", iVar2, 3);
                                                                                                                           if (iVar2 == 0) goto LAB_00118458;
                                                                                                                           iVar2 = test_size_t_eq("test/sslapitest.c", 0xb0b, "nbytes", &_LC15, CONCAT44(uStack_4c, local_50), 0);
                                                                                                                           if (iVar2 != 0) {
                                                                                                                              SSL_set0_wbio(local_60, a_00);
                                                                                                                              iVar2 = SSL_new_session_ticket(local_60);
                                                                                                                              iVar2 = test_true("test/sslapitest.c", 0xb14, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                                                                                                                              if (iVar2 != 0) {
                                                                                                                                 iVar2 = SSL_new_session_ticket(local_60);
                                                                                                                                 iVar2 = test_true("test/sslapitest.c", 0xb15, "SSL_new_session_ticket(serverssl)", iVar2 != 0);
                                                                                                                                 if (iVar2 != 0) {
                                                                                                                                    iVar2 = test_int_eq("test/sslapitest.c", 0xb16, &_LC15, "new_called", 0, new_called);
                                                                                                                                    if (iVar2 != 0) {
                                                                                                                                       iVar2 = SSL_do_handshake(local_60);
                                                                                                                                       iVar2 = test_true("test/sslapitest.c", 0xb17, "SSL_do_handshake(serverssl)", iVar2 != 0);
                                                                                                                                       if (iVar2 != 0) {
                                                                                                                                          iVar2 = test_int_eq("test/sslapitest.c", 0xb18, &_LC15, "new_called", 0, new_called);
                                                                                                                                          if (iVar2 != 0) {
                                                                                                                                             iVar2 = SSL_write_ex(local_60, &local_71, 1, &local_50);
                                                                                                                                             iVar2 = test_true("test/sslapitest.c", 0xb1b, "SSL_write_ex(serverssl, &c, 1, &nbytes)", iVar2 != 0);
                                                                                                                                             if (iVar2 != 0) {
                                                                                                                                                iVar2 = test_size_t_eq("test/sslapitest.c", 0xb1c, &_LC49, "nbytes", 1, CONCAT44(uStack_4c, local_50));
                                                                                                                                                if (iVar2 != 0) {
                                                                                                                                                   iVar2 = test_int_eq("test/sslapitest.c", 0xb1d, &_LC15, "new_called", 0, new_called);
                                                                                                                                                   if (iVar2 != 0) {
                                                                                                                                                      iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                                                                                                                      iVar2 = test_true("test/sslapitest.c", 0xb1e, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                                                                                                                      if (iVar2 != 0) {
                                                                                                                                                         iVar2 = test_int_eq("test/sslapitest.c", 0xb1f, &_LC15, "new_called", 0, new_called);
                                                                                                                                                         if (iVar2 != 0) {
                                                                                                                                                            iVar2 = test_int_eq("test/sslapitest.c", 0xb20, "sizeof(buf)", "nbytes", 1, local_50);
                                                                                                                                                            if (iVar2 != 0) {
                                                                                                                                                               iVar2 = test_int_eq("test/sslapitest.c", 0xb21, &_LC801, "buf[0]", local_71, local_41);
                                                                                                                                                               if (iVar2 != 0) {
                                                                                                                                                                  iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                                                                                                                                  iVar2 = test_false("test/sslapitest.c", 0xb22, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                                                                                                                                  if (iVar2 != 0) {
                                                                                                                                                                     iVar2 = SSL_do_handshake(local_60);
                                                                                                                                                                     iVar2 = test_true("test/sslapitest.c", 0xb25, "SSL_do_handshake(serverssl)", iVar2 != 0);
                                                                                                                                                                     if (iVar2 != 0) {
                                                                                                                                                                        iVar2 = test_int_eq("test/sslapitest.c", 0xb26, &_LC15, "new_called", 0, new_called);
                                                                                                                                                                        if (iVar2 != 0) {
                                                                                                                                                                           local_71 = 0x36;
                                                                                                                                                                           iVar2 = SSL_write_ex(local_60, &local_71, 1, &local_50);
                                                                                                                                                                           iVar2 = test_true("test/sslapitest.c", 0xb2a, "SSL_write_ex(serverssl, &c, 1, &nbytes)", iVar2 != 0);
                                                                                                                                                                           if (iVar2 != 0) {
                                                                                                                                                                              iVar2 = test_size_t_eq("test/sslapitest.c", 0xb2b, &_LC49, "nbytes", 1, CONCAT44(uStack_4c, local_50));
                                                                                                                                                                              if (iVar2 != 0) {
                                                                                                                                                                                 iVar2 = test_int_eq("test/sslapitest.c", 0xb2c, &_LC223, "new_called", 2, new_called);
                                                                                                                                                                                 if (iVar2 != 0) {
                                                                                                                                                                                    iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                                                                                                                                                    iVar2 = test_true("test/sslapitest.c", 0xb2d, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                                                                                                                                                    if (iVar2 != 0) {
                                                                                                                                                                                       iVar2 = test_int_eq("test/sslapitest.c", 0xb2e, &_LC110, "new_called", 4, new_called);
                                                                                                                                                                                       if (iVar2 != 0) {
                                                                                                                                                                                          iVar2 = test_int_eq("test/sslapitest.c", 0xb2f, "sizeof(buf)", "nbytes", 1, local_50);
                                                                                                                                                                                          if (iVar2 != 0) {
                                                                                                                                                                                             iVar2 = test_int_eq("test/sslapitest.c", 0xb30, &_LC801, "buf[0]", local_71, local_41);
                                                                                                                                                                                             if (iVar2 != 0) {
                                                                                                                                                                                                iVar2 = SSL_read_ex(local_58, &local_41, 1, &local_50);
                                                                                                                                                                                                iVar2 = test_false("test/sslapitest.c", 0xb31, "SSL_read_ex(clientssl, buf, sizeof(buf), &nbytes)", iVar2 != 0);
                                                                                                                                                                                                if (iVar2 != 0) {
                                                                                                                                                                                                   iVar2 = 1;
                                                                                                                                                                                                   a_00 = (BIO*)0x0;
                                                                                                                                                                                                   a = (BIO*)0x0;
                                                                                                                                                                                                   SSL_shutdown(local_58);
                                                                                                                                                                                                   SSL_shutdown(local_60);
                                                                                                                                                                                                   goto LAB_00118458;
                                                                                                                                                                                                }

                                                                                                                                                                                             }

                                                                                                                                                                                          }

                                                                                                                                                                                       }

                                                                                                                                                                                    }

                                                                                                                                                                                 }

                                                                                                                                                                              }

                                                                                                                                                                           }

                                                                                                                                                                        }

                                                                                                                                                                     }

                                                                                                                                                                  }

                                                                                                                                                               }

                                                                                                                                                            }

                                                                                                                                                         }

                                                                                                                                                      }

                                                                                                                                                   }

                                                                                                                                                }

                                                                                                                                             }

                                                                                                                                          }

                                                                                                                                       }

                                                                                                                                    }

                                                                                                                                 }

                                                                                                                              }

                                                                                                                              iVar2 = 0;
                                                                                                                              a_00 = (BIO*)0x0;
                                                                                                                              a = (BIO*)0x0;
                                                                                                                              goto LAB_00118458;
                                                                                                                           }

                                                                                                                        }

                                                                                                                        iVar2 = 0;
                                                                                                                        a = (BIO*)0x0;
                                                                                                                        goto LAB_00118458;
                                                                                                                     }

                                                                                                                  }

                                                                                                               }

                                                                                                            }

                                                                                                         }

                                                                                                      }

                                                                                                   }

                                                                                                }

                                                                                             }

                                                                                          }

                                                                                       }

                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   iVar2 = 0;
   a_00 = (BIO*)0x0;
   LAB_00118458:BIO_free(a);
   BIO_free(a_00);
   SSL_free(local_60);
   SSL_free(local_58);
   SSL_CTX_free(local_70);
   SSL_CTX_free(local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_psk_tickets(void) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   bool bVar4;
   uchar local_44[4];
   SSL_CTX *local_40;
   SSL_CTX *local_38;
   SSL *local_30;
   SSL *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      local_44[i] = '\x01';
   }

   local_40 = (SSL_CTX*)0x0;
   local_38 = (SSL_CTX*)0x0;
   local_30 = (SSL*)0x0;
   local_28 = (SSL*)0x0;
   uVar2 = TLS_client_method();
   uVar3 = TLS_server_method();
   iVar1 = create_ssl_ctx_pair(libctx, uVar3, uVar2, 0x301, 0, &local_40, &local_38, 0, 0);
   iVar1 = test_true("test/sslapitest.c", 0xa73, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, NULL, NULL)", iVar1 != 0);
   if (iVar1 != 0) {
      SSL_CTX_set_session_id_context(local_40, local_44, 4);
      iVar1 = test_true("test/sslapitest.c", 0xa76, "SSL_CTX_set_session_id_context(sctx, (void *)&sess_id_ctx, sizeof(sess_id_ctx))");
      if (iVar1 != 0) {
         SSL_CTX_ctrl(local_38, 0x2c, 0x201, (void*)0x0);
         SSL_CTX_set_psk_use_session_callback(local_38, use_session_cb);
         SSL_CTX_set_psk_find_session_callback(local_40, find_session_cb);
         SSL_CTX_sess_set_new_cb(local_38, new_session_cb);
         use_session_cb_cnt = 0;
         find_session_cb_cnt = 0;
         srvid = "Identity";
         new_called = 0;
         iVar1 = create_ssl_objects(local_40, local_38, &local_30, &local_28, 0, 0);
         iVar1 = test_true("test/sslapitest.c", 0xa85, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
         if (iVar1 != 0) {
            serverpsk = (SSL_SESSION*)create_a_psk(local_28, 0x30);
            clientpsk = serverpsk;
            iVar1 = test_ptr("test/sslapitest.c", 0xa89, "clientpsk", serverpsk);
            if (iVar1 != 0) {
               iVar1 = SSL_SESSION_up_ref(clientpsk);
               iVar1 = test_true("test/sslapitest.c", 0xa89, "SSL_SESSION_up_ref(clientpsk)", iVar1 != 0);
               if (iVar1 != 0) {
                  iVar1 = create_ssl_connection(local_30, local_28, 0);
                  iVar1 = test_true("test/sslapitest.c", 0xa8c, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = test_int_eq("test/sslapitest.c", 0xa8e, &_LC49, "find_session_cb_cnt", 1, find_session_cb_cnt);
                     if (iVar1 != 0) {
                        iVar1 = test_int_eq("test/sslapitest.c", 0xa8f, &_LC49, "use_session_cb_cnt", 1, use_session_cb_cnt);
                        if (iVar1 != 0) {
                           iVar1 = test_int_eq("test/sslapitest.c", 0xa91, &_LC49, "new_called", 1, new_called);
                           bVar4 = iVar1 != 0;
                           goto LAB_0011921c;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar4 = false;
   LAB_0011921c:SSL_free(local_30);
   SSL_free(local_28);
   SSL_CTX_free(local_40);
   SSL_CTX_free(local_38);
   SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 check_resumption(int param_1, undefined8 param_2, undefined8 param_3, int param_4) {
   int iVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   if (0 < param_1) {
      if (param_4 == 0) {
         puVar4 = &sesscache;
         do {
            new_called = 0;
            iVar1 = create_ssl_objects(param_2, param_3, &local_50, &local_48, 0, 0);
            iVar1 = test_true("test/sslapitest.c", 0x9c6, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
            if (iVar1 == 0) goto LAB_00119710;
            iVar1 = SSL_set_session(local_48, (SSL_SESSION*)*puVar4);
            iVar1 = test_true("test/sslapitest.c", 0x9c8, "SSL_set_session(clientssl, sesscache[i])", iVar1 != 0);
            if (iVar1 == 0) goto LAB_00119710;
            SSL_set_post_handshake_auth(local_48, 1);
            iVar1 = create_ssl_connection(local_50, local_48, 0);
            iVar1 = test_true("test/sslapitest.c", 0x9cd, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
            if (iVar1 == 0) goto LAB_00119710;
            iVar1 = SSL_session_reused(local_48);
            iVar1 = test_false("test/sslapitest.c", 0x9da, "SSL_session_reused(clientssl)", iVar1 != 0);
            if (( iVar1 == 0 ) || ( iVar1 = test_int_eq("test/sslapitest.c", 0x9db, "new_called", &_LC809) ),iVar1 == 0) goto LAB_00119710;
            puVar3 = puVar4 + 1;
            new_called = 0;
            SSL_shutdown(local_48);
            SSL_shutdown(local_50);
            SSL_free(local_50);
            SSL_free(local_48);
            local_48 = (SSL*)0x0;
            local_50 = (SSL*)0x0;
            SSL_SESSION_free((SSL_SESSION*)*puVar4);
            *puVar4 = 0;
            puVar4 = puVar3;
         }
 while ( &DAT_0012de08 + ( param_1 * 2 - 1 ) != puVar3 );
      }
 else {
         puVar4 = &sesscache;
         do {
            new_called = 0;
            iVar1 = create_ssl_objects(param_2, param_3, &local_50, &local_48, 0, 0);
            iVar1 = test_true("test/sslapitest.c", 0x9c6, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
            if (iVar1 == 0) goto LAB_00119710;
            iVar1 = SSL_set_session(local_48, (SSL_SESSION*)*puVar4);
            iVar1 = test_true("test/sslapitest.c", 0x9c8, "SSL_set_session(clientssl, sesscache[i])", iVar1 != 0);
            if (iVar1 == 0) goto LAB_00119710;
            SSL_set_post_handshake_auth(local_48, 1);
            iVar1 = create_ssl_connection(local_50, local_48, 0);
            iVar1 = test_true("test/sslapitest.c", 0x9cd, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
            if (iVar1 == 0) goto LAB_00119710;
            iVar1 = SSL_session_reused(local_48);
            iVar1 = test_true("test/sslapitest.c", 0x9d6, "SSL_session_reused(clientssl)", iVar1 != 0);
            if (( iVar1 == 0 ) || ( iVar1 = test_int_eq("test/sslapitest.c", 0x9d7, "new_called", &_LC49, new_called, 1) ),iVar1 == 0) goto LAB_00119710;
            new_called = 0;
            iVar1 = post_handshake_verify(local_50, local_48);
            if (( iVar1 == 0 ) || ( iVar1 = test_int_eq("test/sslapitest.c", 0x9e3, "new_called", &_LC49) ),iVar1 == 0) goto LAB_00119710;
            puVar3 = puVar4 + 1;
            SSL_shutdown(local_48);
            SSL_shutdown(local_50);
            SSL_free(local_50);
            SSL_free(local_48);
            local_48 = (SSL*)0x0;
            local_50 = (SSL*)0x0;
            SSL_SESSION_free((SSL_SESSION*)*puVar4);
            *puVar4 = 0;
            puVar4 = puVar3;
         }
 while ( &DAT_0012de08 + ( param_1 * 2 - 1 ) != puVar3 );
      }

   }

   uVar2 = 1;
   LAB_00119726:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
   LAB_00119710:SSL_free(local_48);
   SSL_free(local_50);
   uVar2 = 0;
   goto LAB_00119726;
}
bool test_tickets(ulong param_1, ulong param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   bool bVar4;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   new_called = 0;
   do_cache._0_4_ = 1;
   iVar1 = setup_ticket_test(param_1, param_2, &local_60, &local_58);
   if (iVar1 != 0) {
      iVar1 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
      iVar1 = test_true("test/sslapitest.c", 0xa06, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = create_ssl_connection(local_50, local_48, 0);
         iVar1 = test_true("test/sslapitest.c", 0xa0a, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = test_int_eq("test/sslapitest.c", 0xa0d, &_LC809, "new_called", param_2 & 0xffffffff, new_called);
            if (iVar1 != 0) {
               SSL_shutdown(local_48);
               SSL_shutdown(local_50);
               SSL_free(local_50);
               SSL_free(local_48);
               SSL_CTX_free(local_60);
               SSL_CTX_free(local_58);
               local_50 = (SSL*)0x0;
               local_48 = (SSL*)0x0;
               local_58 = (SSL_CTX*)0x0;
               local_60 = (SSL_CTX*)0x0;
               do_cache._0_4_ = 0;
               iVar1 = setup_ticket_test(param_1 & 0xffffffff, param_2 & 0xffffffff, &local_60, &local_58);
               if (iVar1 != 0) {
                  iVar1 = check_resumption(param_2 & 0xffffffff, local_60, local_58, 0);
                  if (iVar1 != 0) {
                     new_called = 0;
                     do_cache._0_4_ = 1;
                     SSL_CTX_free(local_60);
                     SSL_CTX_free(local_58);
                     local_58 = (SSL_CTX*)0x0;
                     local_60 = (SSL_CTX*)0x0;
                     iVar1 = setup_ticket_test(param_1 & 0xffffffff, param_2 & 0xffffffff, &local_60, &local_58);
                     if (iVar1 != 0) {
                        iVar1 = create_ssl_objects(local_60, local_58, &local_50, &local_48, 0, 0);
                        iVar1 = test_true("test/sslapitest.c", 0xa32, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
                        if (iVar1 != 0) {
                           SSL_set_post_handshake_auth(local_48, 1);
                           iVar1 = create_ssl_connection(local_50, local_48, 0);
                           iVar1 = test_true("test/sslapitest.c", 0xa38, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
                           if (iVar1 != 0) {
                              iVar1 = test_int_eq("test/sslapitest.c", 0xa3b, &_LC809, "new_called", param_2 & 0xffffffff, new_called);
                              if (iVar1 != 0) {
                                 iVar1 = post_handshake_verify(local_50, local_48);
                                 if (iVar1 != 0) {
                                    iVar1 = test_int_eq("test/sslapitest.c", 0xa40, "idx * 2", "new_called", (int)param_2 * 2, new_called);
                                    if (iVar1 != 0) {
                                       SSL_shutdown(local_48);
                                       SSL_shutdown(local_50);
                                       SSL_free(local_50);
                                       SSL_free(local_48);
                                       do_cache._0_4_ = 0;
                                       local_48 = (SSL*)0x0;
                                       local_50 = (SSL*)0x0;
                                       iVar1 = check_resumption(param_2 & 0xffffffff, local_60, local_58, 1);
                                       bVar4 = iVar1 != 0;
                                       goto LAB_00119996;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar4 = false;
   LAB_00119996:SSL_free(local_50);
   SSL_free(local_48);
   puVar2 = &sesscache;
   do {
      puVar3 = puVar2 + 1;
      SSL_SESSION_free((SSL_SESSION*)*puVar2);
      *puVar2 = 0;
      puVar2 = puVar3;
   }
 while ( puVar3 != &get_sess_val );
   SSL_CTX_free(local_60);
   SSL_CTX_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_stateless_tickets(undefined4 param_1) {
   test_tickets(0, param_1);
   return;
}
void test_stateful_tickets(undefined4 param_1) {
   test_tickets(1, param_1);
   return;
}
ulong execute_test_session(int param_1, uint param_2, uint param_3, long param_4) {
   int iVar1;
   int iVar2;
   uint uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   ulong uVar6;
   SSL_SESSION *c;
   SSL_SESSION *c_00;
   SSL_SESSION *pSVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long lVar10;
   long in_FS_OFFSET;
   undefined *local_c0;
   SSL_CTX *local_80;
   SSL_CTX *local_78;
   SSL *local_70;
   SSL *local_68;
   SSL *local_60;
   SSL *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   uVar9 = cert;
   uVar8 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = (SSL_CTX*)0x0;
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   local_58 = (SSL*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   remove_called = 0;
   new_called = 0;
   uVar4 = TLS_client_method();
   uVar5 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x301, 0, &local_80, &local_78, uVar9, uVar8);
   uVar6 = test_true("test/sslapitest.c", 0x821, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
   if ((int)uVar6 == 0) goto LAB_00119e30;
   lVar10 = (long)param_1;
   SSL_CTX_ctrl(local_78, 0x7b, lVar10, (void*)0x0);
   SSL_CTX_ctrl(local_78, 0x7c, lVar10, (void*)0x0);
   if (param_3 != 0) {
      SSL_CTX_sess_set_new_cb(local_78, new_session_cb);
      SSL_CTX_sess_set_remove_cb(local_78, remove_session_cb);
   }

   if (param_2 == 0) {
      SSL_CTX_ctrl(local_78, 0x2c, 0x201, (void*)0x0);
   }
 else {
      SSL_CTX_ctrl(local_78, 0x2c, 1, (void*)0x0);
   }

   if (param_4 != 0) {
      SSL_CTX_set_options(local_80, 0x200);
   }

   iVar1 = create_ssl_objects(local_80, local_78, &local_70, &local_68, 0, 0);
   iVar1 = test_true("test/sslapitest.c", 0x83f, "create_ssl_objects(sctx, cctx, &serverssl1, &clientssl1, NULL, NULL)", iVar1 != 0);
   if (iVar1 == 0) {
      LAB_00119f3b:uVar3 = 0;
      c = (SSL_SESSION*)0x0;
      pSVar7 = (SSL_SESSION*)0x0;
   }
 else {
      iVar1 = create_ssl_connection(local_70, local_68, 0);
      iVar1 = test_true("test/sslapitest.c", 0x841, "create_ssl_connection(serverssl1, clientssl1, SSL_ERROR_NONE)", iVar1 != 0);
      if (iVar1 == 0) goto LAB_00119f3b;
      c = SSL_get1_session(local_68);
      iVar1 = test_ptr("test/sslapitest.c", 0x843, "sess1 = SSL_get1_session(clientssl1)", c);
      if (iVar1 == 0) {
         LAB_0011a310:uVar3 = 0;
         pSVar7 = (SSL_SESSION*)0x0;
      }
 else {
         if (param_2 != 0) {
            iVar1 = SSL_CTX_add_session(local_78, c);
            iVar1 = test_false("test/sslapitest.c", 0x847, "SSL_CTX_add_session(cctx, sess1)", iVar1 != 0);
            if (iVar1 == 0) goto LAB_0011a310;
         }

         iVar1 = param_1 + -0x302;
         if (( param_3 != 0 ) && ( ( iVar2 = test_int_eq("test/sslapitest.c", 0x84a, "new_called", "numnewsesstick", new_called, iVar1) ),iVar2 == 0 || ( iVar2 = test_int_eq("test/sslapitest.c", 0x84c, "remove_called", &_LC15, remove_called, 0) ),iVar2 == 0 )) goto LAB_0011a310;
         remove_called = 0;
         new_called = 0;
         iVar2 = create_ssl_objects(local_80, local_78, &local_60, &local_58, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x850, "create_ssl_objects(sctx, cctx, &serverssl2, &clientssl2, NULL, NULL)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_0011a310;
         iVar2 = SSL_set_session(local_58, c);
         iVar2 = test_true("test/sslapitest.c", 0x852, "SSL_set_session(clientssl2, sess1)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_0011a310;
         iVar2 = create_ssl_connection(local_60, local_58, 0);
         iVar2 = test_true("test/sslapitest.c", 0x853, "create_ssl_connection(serverssl2, clientssl2, SSL_ERROR_NONE)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_0011a310;
         iVar2 = SSL_session_reused(local_58);
         iVar2 = test_true("test/sslapitest.c", 0x855, "SSL_session_reused(clientssl2)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_0011a310;
         if (param_1 == 0x304) {
            if (( param_3 == 0 ) || ( ( iVar2 = test_int_eq("test/sslapitest.c", 0x85f, "new_called", &_LC49, new_called, 1) ),iVar2 != 0 && ( iVar2 = test_int_eq("test/sslapitest.c", 0x860, "remove_called", &_LC49, remove_called, 1) ),iVar2 != 0 )) goto LAB_0011a13b;
            goto LAB_0011a310;
         }

         if (( param_3 != 0 ) && ( ( iVar2 = test_int_eq("test/sslapitest.c", 0x868, "new_called", &_LC15, new_called, 0) ),iVar2 == 0 || ( iVar2 = test_int_eq("test/sslapitest.c", 0x869, "remove_called", &_LC15, remove_called, 0) ),iVar2 == 0 )) goto LAB_0011a310;
         LAB_0011a13b:SSL_SESSION_free(c);
         c = SSL_get1_session(local_58);
         iVar2 = test_ptr("test/sslapitest.c", 0x86e, "sess1 = SSL_get1_session(clientssl2)", c);
         if (iVar2 == 0) goto LAB_0011a310;
         shutdown_ssl_connection(local_60, local_58);
         local_58 = (SSL*)0x0;
         local_60 = (SSL*)0x0;
         remove_called = 0;
         new_called = 0;
         iVar2 = create_ssl_objects(local_80, local_78, &local_60, &local_58, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x874, "create_ssl_objects(sctx, cctx, &serverssl2, &clientssl2, NULL, NULL)", iVar2 != 0);
         if (iVar2 == 0) goto LAB_0011a310;
         iVar2 = create_ssl_connection(local_60, local_58, 0);
         uVar3 = test_true("test/sslapitest.c", 0x876, "create_ssl_connection(serverssl2, clientssl2, SSL_ERROR_NONE)", iVar2 != 0);
         pSVar7 = (SSL_SESSION*)0x0;
         if (uVar3 != 0) {
            c_00 = SSL_get1_session(local_58);
            iVar2 = test_ptr("test/sslapitest.c", 0x87a, "sess2 = SSL_get1_session(clientssl2)");
            if (iVar2 != 0) {
               if (param_3 == 0) {
                  remove_called = 0;
                  new_called = 0;
                  iVar2 = SSL_set_session(local_58, c);
                  iVar2 = test_true("test/sslapitest.c", 0x887, "SSL_set_session(clientssl2, sess1)", iVar2 != 0);
                  if (iVar2 != 0) {
                     LAB_0011a549:SSL_get_session(local_58);
                     iVar2 = test_ptr_eq("test/sslapitest.c", 0x88c, "SSL_get_session(clientssl2)", "sess1");
                     if (iVar2 != 0) {
                        if (param_2 == 0) {
                           LAB_0011a595:remove_called = 0;
                           new_called = 0;
                           SSL_CTX_remove_session(local_78, c_00);
                           iVar2 = test_false("test/sslapitest.c", 0x898, "SSL_CTX_remove_session(cctx, sess2)");
                           if (( iVar2 != 0 ) && ( ( param_3 == 0 || ( ( iVar2 = test_int_eq("test/sslapitest.c", 0x89c, "new_called", &_LC15, new_called, 0) ),iVar2 != 0 && ( iVar2 = test_int_eq("test/sslapitest.c", 0x89c, "remove_called") ),iVar2 != 0 ) ) )) {
                              remove_called = 0;
                              new_called = 0;
                              SSL_CTX_ctrl(local_80, 0x7c, 0x302, (void*)0x0);
                              iVar2 = create_ssl_objects(local_80, local_78, &local_50, &local_48);
                              iVar2 = test_true("test/sslapitest.c", 0x8a3, "create_ssl_objects(sctx, cctx, &serverssl3, &clientssl3, NULL, NULL)", iVar2 != 0);
                              if (iVar2 != 0) {
                                 iVar2 = SSL_set_session(local_48, c);
                                 iVar2 = test_true("test/sslapitest.c", 0x8a5, "SSL_set_session(clientssl3, sess1)", iVar2 != 0);
                                 if (iVar2 != 0) {
                                    create_ssl_connection(local_50, local_48, 0);
                                    iVar2 = test_false("test/sslapitest.c", 0x8a7, "create_ssl_connection(serverssl3, clientssl3, SSL_ERROR_NONE)");
                                    if (iVar2 != 0) {
                                       if (param_3 == 0) {
                                          if (param_2 != 0) goto LAB_0011a71b;
                                          SSL_CTX_ctrl(local_78, 0x2c, 0, (void*)0x0);
                                          LAB_0011af3a:SSL_CTX_ctrl(local_80, 0x2c, 0x202, (void*)0x0);
                                          LAB_0011a761:SSL_free(local_70);
                                          SSL_free(local_68);
                                          local_68 = (SSL*)0x0;
                                          local_70 = (SSL*)0x0;
                                          SSL_free(local_60);
                                          SSL_free(local_58);
                                          local_58 = (SSL*)0x0;
                                          local_60 = (SSL*)0x0;
                                          SSL_SESSION_free(c);
                                          SSL_SESSION_free(c_00);
                                          SSL_CTX_ctrl(local_80, 0x7c, lVar10, (void*)0x0);
                                          if (param_1 == 0x303) {
                                             SSL_CTX_set_options(local_80, 0x4000);
                                          }

                                          get_called = 0;
                                          remove_called = 0;
                                          new_called = 0;
                                          iVar2 = create_ssl_objects(local_80, local_78, &local_70, &local_68, 0, 0);
                                          iVar2 = test_true("test/sslapitest.c", 0x8d5, "create_ssl_objects(sctx, cctx, &serverssl1, &clientssl1, NULL, NULL)", iVar2 != 0);
                                          if (iVar2 != 0) {
                                             iVar2 = create_ssl_connection(local_70, local_68, 0);
                                             iVar2 = test_true("test/sslapitest.c", 0x8d7, "create_ssl_connection(serverssl1, clientssl1, SSL_ERROR_NONE)", iVar2 != 0);
                                             if (iVar2 != 0) {
                                                pSVar7 = (SSL_SESSION*)0x0;
                                                c = SSL_get1_session(local_68);
                                                uVar3 = test_ptr("test/sslapitest.c", 0x8d9, "sess1 = SSL_get1_session(clientssl1)", c);
                                                if (uVar3 == 0) goto LAB_00119f43;
                                                c_00 = SSL_get1_session(local_70);
                                                iVar2 = test_ptr("test/sslapitest.c", 0x8da, "sess2 = SSL_get1_session(serverssl1)", c_00);
                                                if (iVar2 == 0) goto LAB_0011a27c;
                                                pSVar7 = c_00;
                                                if (param_2 == 0) {
                                                   LAB_0011ad46:if (param_3 == 0) {
                                                      LAB_0011a90e:get_called = 0;
                                                      remove_called = 0;
                                                      new_called = 0;
                                                      get_sess_val = pSVar7;
                                                      iVar1 = create_ssl_objects(local_80, local_78, &local_60, &local_58, 0, 0);
                                                      iVar1 = test_true("test/sslapitest.c", 0x907, "create_ssl_objects(sctx, cctx, &serverssl2, &clientssl2, NULL, NULL)", iVar1 != 0);
                                                      c_00 = pSVar7;
                                                      if (iVar1 != 0) {
                                                         iVar1 = SSL_set_session(local_58, c);
                                                         iVar1 = test_true("test/sslapitest.c", 0x909, "SSL_set_session(clientssl2, sess1)", iVar1 != 0);
                                                         if (iVar1 != 0) {
                                                            iVar1 = create_ssl_connection(local_60, local_58, 0);
                                                            iVar1 = test_true("test/sslapitest.c", 0x90a, "create_ssl_connection(serverssl2, clientssl2, SSL_ERROR_NONE)", iVar1 != 0);
                                                            if (iVar1 != 0) {
                                                               iVar1 = SSL_session_reused(local_58);
                                                               iVar1 = test_true("test/sslapitest.c", 0x90c, "SSL_session_reused(clientssl2)", iVar1 != 0);
                                                               if (iVar1 != 0) {
                                                                  if (param_3 == 0) {
                                                                     LAB_0011aaaf:uVar8 = SSL_SESSION_set_time_ex(c, 1000);
                                                                     iVar1 = test_time_t_gt("test/sslapitest.c", 0x925, "SSL_SESSION_set_time_ex(sess1, 1000)", &_LC15, uVar8, 0);
                                                                     if (iVar1 != 0) {
                                                                        lVar10 = SSL_SESSION_set_timeout(c, 1000);
                                                                        iVar1 = test_long_gt("test/sslapitest.c", 0x926, "SSL_SESSION_set_timeout(sess1, 1000)", &_LC15, lVar10, 0);
                                                                        if (iVar1 != 0) {
                                                                           uVar8 = SSL_SESSION_set_time_ex(pSVar7, 2000);
                                                                           iVar1 = test_time_t_gt("test/sslapitest.c", 0x927, "SSL_SESSION_set_time_ex(sess2, 2000)", &_LC15, uVar8, 0);
                                                                           if (iVar1 != 0) {
                                                                              lVar10 = SSL_SESSION_set_timeout(pSVar7, 2000);
                                                                              iVar1 = test_long_gt("test/sslapitest.c", 0x928, "SSL_SESSION_set_timeout(sess2, 2000)", &_LC15, lVar10, 0);
                                                                              if (iVar1 != 0) {
                                                                                 lVar10 = SSL_CTX_ctrl(local_80, 0x2a, 1, (void*)0x0);
                                                                                 iVar1 = test_long_ne("test/sslapitest.c", 0x92b, "SSL_CTX_sess_set_cache_size(sctx, 1)", &_LC15, lVar10, 0);
                                                                                 if (iVar1 != 0) {
                                                                                    SSL_CTX_add_session(local_80, c);
                                                                                    SSL_CTX_add_session(local_80, pSVar7);
                                                                                    iVar1 = SSL_CTX_add_session(local_80, c);
                                                                                    iVar1 = test_true("test/sslapitest.c", 0x933, "SSL_CTX_add_session(sctx, sess1)", iVar1 != 0);
                                                                                    if (( iVar1 != 0 ) && ( iVar1 = test_ptr("test/sslapitest.c", 0x934, "sess1->owner", *(undefined8*)( c[1].krb5_client_princ + 0x98 )) ),iVar1 != 0) {
                                                                                       iVar1 = test_ptr_null("test/sslapitest.c", 0x935, "sess2->owner", *(undefined8*)( pSVar7[1].
                                                                            krb5_client_princ + 0x98 ));
                                                                                       uVar3 = ( uint )(iVar1 != 0);
                                                                                       goto LAB_00119f43;
                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }
 else {
                                                                     uVar3 = test_int_eq("test/sslapitest.c", 0x910, "remove_called", &_LC15, remove_called, 0);
                                                                     if (uVar3 == 0) goto LAB_00119f43;
                                                                     if (param_1 == 0x304) {
                                                                        local_c0 = &_LC15;
                                                                        iVar1 = test_int_eq("test/sslapitest.c", 0x914, "new_called", &_LC49, new_called, 1);
                                                                        if (iVar1 != 0) {
                                                                           uVar9 = 0;
                                                                           uVar8 = 0x915;
                                                                           goto LAB_0011aa9a;
                                                                        }

                                                                     }
 else {
                                                                        iVar1 = test_int_eq("test/sslapitest.c", 0x918, "new_called", &_LC15, new_called, 0);
                                                                        if (iVar1 != 0) {
                                                                           uVar9 = 1;
                                                                           local_c0 = &_LC49;
                                                                           uVar8 = 0x919;
                                                                           LAB_0011aa9a:iVar1 = test_int_eq("test/sslapitest.c", uVar8, "get_called", local_c0, get_called, uVar9);
                                                                           if (iVar1 != 0) goto LAB_0011aaaf;
                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }
 else {
                                                      iVar1 = test_int_eq("test/sslapitest.c", 0x8f1, "new_called", "numnewsesstick", new_called, iVar1);
                                                      if (( ( iVar1 != 0 ) && ( iVar1 = test_int_eq("test/sslapitest.c", 0x8f2, "remove_called", &_LC15, remove_called, 0) ),iVar1 != 0 )) {
                                                         if (( param_1 == 0x304 ) || ( ( param_2 & 1 ) == 0 )) goto LAB_0011a90e;
                                                         pSVar7 = (SSL_SESSION*)SSL_SESSION_dup(c_00);
                                                         iVar1 = test_ptr("test/sslapitest.c", 0x8fb, "tmp = SSL_SESSION_dup(sess2)", pSVar7);
                                                         if (( iVar1 != 0 ) && ( ( iVar1 = test_true("test/sslapitest.c", 0x8fc, "sess2->owner != NULL", *(long*)( c_00[1].krb5_client_princ + 0x98 ) != 0) ),iVar1 != 0 && ( iVar1 = test_true("test/sslapitest.c", 0x8fd, "tmp->owner == NULL", *(long*)( pSVar7[1].krb5_client_princ + 0x98 ) == 0) ),iVar1 != 0 )) {
                                                            iVar1 = SSL_CTX_remove_session(local_80, c_00);
                                                            iVar1 = test_true("test/sslapitest.c", 0x8fe, "SSL_CTX_remove_session(sctx, sess2)", iVar1 != 0);
                                                            if (iVar1 != 0) {
                                                               SSL_SESSION_free(c_00);
                                                               goto LAB_0011a90e;
                                                            }

                                                         }

                                                      }

                                                   }

                                                }
 else if (( param_1 == 0x304 ) && ( ( param_3 & 1 ) == 0 )) {
                                                   iVar1 = SSL_CTX_remove_session(local_80, c_00);
                                                   iVar1 = test_false("test/sslapitest.c", 0x8e5, "SSL_CTX_remove_session(sctx, sess2)", iVar1 != 0);
                                                   if (iVar1 != 0) goto LAB_0011a90e;
                                                }
 else {
                                                   iVar2 = SSL_CTX_add_session(local_80, c_00);
                                                   iVar2 = test_false("test/sslapitest.c", 0x8e9, "SSL_CTX_add_session(sctx, sess2)", iVar2 != 0);
                                                   if (iVar2 != 0) goto LAB_0011ad46;
                                                }

                                                goto LAB_0011a27c;
                                             }

                                          }

                                          goto LAB_00119f3b;
                                       }

                                       iVar2 = test_int_eq("test/sslapitest.c", 0x8ad, "new_called", &_LC15, new_called, 0);
                                       if (( iVar2 != 0 ) && ( iVar2 = test_int_eq("test/sslapitest.c", 0x8ad, "remove_called") ),iVar2 != 0) {
                                          if (param_2 == 0) {
                                             SSL_CTX_sess_set_new_cb(local_78, (new_session_cb*)0x0);
                                             SSL_CTX_sess_set_remove_cb(local_78, (remove_session_cb*)0x0);
                                             SSL_CTX_sess_set_new_cb(local_80, new_session_cb);
                                             SSL_CTX_sess_set_remove_cb(local_80, remove_session_cb);
                                             SSL_CTX_sess_set_get_cb(local_80, get_session_cb);
                                             get_sess_val = (SSL_SESSION*)0x0;
                                             SSL_CTX_ctrl(local_78, 0x2c, 0, (void*)0x0);
                                             goto LAB_0011af3a;
                                          }

                                          LAB_0011a71b:SSL_CTX_add_session(local_78, c_00);
                                          iVar2 = test_true("test/sslapitest.c", 0x8b1, "SSL_CTX_add_session(cctx, sess2)");
                                          if (iVar2 != 0) {
                                             if (param_3 == 0) {
                                                SSL_CTX_ctrl(local_78, 0x2c, 0, (void*)0x0);
                                             }
 else {
                                                SSL_CTX_sess_set_new_cb(local_78, (new_session_cb*)0x0);
                                                SSL_CTX_sess_set_remove_cb(local_78, (remove_session_cb*)0x0);
                                                SSL_CTX_sess_set_new_cb(local_80, new_session_cb);
                                                SSL_CTX_sess_set_remove_cb(local_80, remove_session_cb);
                                                SSL_CTX_sess_set_get_cb(local_80, get_session_cb);
                                                get_sess_val = (SSL_SESSION*)0x0;
                                                SSL_CTX_ctrl(local_78, 0x2c, 0, (void*)0x0);
                                             }

                                             goto LAB_0011a761;
                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }
 else {
                           iVar2 = SSL_CTX_add_session(local_78, c_00);
                           iVar2 = test_true("test/sslapitest.c", 0x891, "SSL_CTX_add_session(cctx, sess2)", iVar2 != 0);
                           if (iVar2 != 0) {
                              iVar2 = SSL_CTX_remove_session(local_78, c_00);
                              iVar2 = test_true("test/sslapitest.c", 0x892, "SSL_CTX_remove_session(cctx, sess2)", iVar2 != 0);
                              if (iVar2 != 0) goto LAB_0011a595;
                           }

                        }

                     }

                  }

               }
 else {
                  iVar2 = test_int_eq("test/sslapitest.c", 0x87e, "new_called", "numnewsesstick", new_called, iVar1);
                  if (( iVar2 != 0 ) && ( iVar2 = test_int_eq("test/sslapitest.c", 0x87f, "remove_called", &_LC15, remove_called, 0) ),iVar2 != 0) {
                     remove_called = 0;
                     new_called = 0;
                     iVar2 = SSL_set_session(local_58, c);
                     iVar2 = test_true("test/sslapitest.c", 0x887, "SSL_set_session(clientssl2, sess1)", iVar2 != 0);
                     if (( iVar2 != 0 ) && ( iVar2 = test_int_eq("test/sslapitest.c", 0x88a, "new_called", &_LC15, new_called, 0) ),iVar2 != 0) {
                        iVar2 = test_int_eq("test/sslapitest.c", 0x88a, "remove_called", &_LC49, remove_called, 1);
                        if (iVar2 == 0) {
                           uVar3 = 0;
                           pSVar7 = c_00;
                           goto LAB_00119f43;
                        }

                        goto LAB_0011a549;
                     }

                  }

               }

            }

            LAB_0011a27c:uVar3 = 0;
            pSVar7 = c_00;
         }

      }

   }

   LAB_00119f43:SSL_free(local_70);
   SSL_free(local_68);
   SSL_free(local_60);
   SSL_free(local_58);
   SSL_free(local_50);
   SSL_free(local_48);
   SSL_SESSION_free(c);
   SSL_SESSION_free(pSVar7);
   SSL_CTX_free(local_80);
   SSL_CTX_free(local_78);
   uVar6 = (ulong)uVar3;
   LAB_00119e30:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_tlsext_status_type(void) {
   undefined8 uVar1;
   char *pcVar2;
   uint uVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   BIO *bp;
   OCSP_RESPID *a;
   void *parg;
   X509 *pXVar9;
   long in_FS_OFFSET;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   pcVar2 = cert;
   uVar1 = privkey;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   uVar5 = TLS_client_method();
   uVar6 = TLS_server_method();
   uVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x301, 0, &local_58, &local_60, pcVar2, uVar1);
   if (uVar3 == 0) goto LAB_0011b0c8;
   lVar7 = SSL_CTX_ctrl(local_60, 0x7f, 0, (void*)0x0);
   if (lVar7 == -1) {
      local_50 = SSL_new(local_60);
      iVar4 = test_ptr("test/sslapitest.c", 0x77f, "clientssl");
      if (iVar4 == 0) goto LAB_0011b109;
      uVar8 = SSL_ctrl(local_50, 0x7f, 0, (void*)0x0);
      iVar4 = test_int_eq("test/sslapitest.c", 0x781, "SSL_get_tlsext_status_type(clientssl)", &_LC45, uVar8 & 0xffffffff, 0xffffffff);
      if (iVar4 == 0) goto LAB_0011b109;
      SSL_ctrl(local_50, 0x41, 1, (void*)0x0);
      iVar4 = test_true("test/sslapitest.c", 0x782, "SSL_set_tlsext_status_type(clientssl, TLSEXT_STATUSTYPE_ocsp)");
      if (iVar4 == 0) goto LAB_0011b109;
      uVar8 = SSL_ctrl(local_50, 0x7f, 0, (void*)0x0);
      iVar4 = test_int_eq("test/sslapitest.c", 0x784, "SSL_get_tlsext_status_type(clientssl)", "TLSEXT_STATUSTYPE_ocsp", uVar8 & 0xffffffff, 1);
      if (iVar4 == 0) goto LAB_0011b109;
      SSL_free(local_50);
      local_50 = (SSL*)0x0;
      lVar7 = SSL_CTX_ctrl(local_60, 0x41, 1, (void*)0x0);
      if (lVar7 == 0) goto LAB_0011b109;
      lVar7 = SSL_CTX_ctrl(local_60, 0x7f, 0, (void*)0x0);
      if (lVar7 != 1) goto LAB_0011b109;
      local_50 = SSL_new(local_60);
      iVar4 = test_ptr("test/sslapitest.c", 0x790, "clientssl");
      if (iVar4 == 0) goto LAB_0011b109;
      lVar7 = SSL_ctrl(local_50, 0x7f, 0, (void*)0x0);
      if (lVar7 != 1) goto LAB_0011b109;
      SSL_free(local_50);
      local_50 = (SSL*)0x0;
      SSL_CTX_callback_ctrl(local_60, 0x3f, ocsp_client_cb);
      SSL_CTX_ctrl(local_60, 0x40, 0, &cdummyarg);
      SSL_CTX_callback_ctrl(local_58, 0x3f, ocsp_server_cb);
      SSL_CTX_ctrl(local_58, 0x40, 0, &cdummyarg);
      iVar4 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
      iVar4 = test_true("test/sslapitest.c", 0x79f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      iVar4 = create_ssl_connection(local_48, local_50, 0);
      iVar4 = test_true("test/sslapitest.c", 0x7a1, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      iVar4 = test_true("test/sslapitest.c", 0x7a3, "ocsp_client_called", ocsp_client_called != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      iVar4 = test_true("test/sslapitest.c", 0x7a4, "ocsp_server_called");
      if (iVar4 == 0) goto LAB_0011b109;
      SSL_free(local_48);
      SSL_free(local_50);
      ocsp_client_called = 0;
      ocsp_server_called = 0;
      cdummyarg = 0;
      local_48 = (SSL*)0x0;
      local_50 = (SSL*)0x0;
      iVar4 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
      iVar4 = test_true("test/sslapitest.c", 0x7af, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      iVar4 = create_ssl_connection(local_48, local_50, 0);
      iVar4 = test_false("test/sslapitest.c", 0x7b2, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      iVar4 = test_false("test/sslapitest.c", 0x7b4, "ocsp_client_called", ocsp_client_called != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      iVar4 = test_false("test/sslapitest.c", 0x7b5, "ocsp_server_called", ocsp_server_called != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      SSL_free(local_48);
      SSL_free(local_50);
      ocsp_client_called = 0;
      ocsp_server_called = 0;
      local_48 = (SSL*)0x0;
      local_50 = (SSL*)0x0;
      cdummyarg = 2;
      iVar4 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
      iVar4 = test_true("test/sslapitest.c", 0x7c3, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_0011b109;
      bp = BIO_new_file(cert, "r");
      iVar4 = test_ptr("test/sslapitest.c", 0x7cb, "certbio = BIO_new_file(cert, \"r\")", bp);
      if (iVar4 == 0) {
         a = (OCSP_RESPID*)0x0;
         parg = (void*)0x0;
         uVar3 = 0;
      }
 else {
         a = OCSP_RESPID_new();
         parg = (void*)0x0;
         uVar3 = test_ptr("test/sslapitest.c", 0x7cc, "id = OCSP_RESPID_new()", a);
         if (uVar3 != 0) {
            parg = (void*)OPENSSL_sk_new_null();
            iVar4 = test_ptr("test/sslapitest.c", 0x7cd, "ids = sk_OCSP_RESPID_new_null()", parg);
            if (iVar4 != 0) {
               ocspcert = (X509*)X509_new_ex(libctx, 0);
               iVar4 = test_ptr("test/sslapitest.c", 0x7ce, "ocspcert = X509_new_ex(libctx, NULL)");
               if (iVar4 != 0) {
                  pXVar9 = PEM_read_bio_X509(bp, &ocspcert, (undefined1*)0x0, (void*)0x0);
                  iVar4 = test_ptr("test/sslapitest.c", 1999, "PEM_read_bio_X509(certbio, &ocspcert, NULL, NULL)", pXVar9);
                  if (iVar4 != 0) {
                     iVar4 = OCSP_RESPID_set_by_key_ex(a, ocspcert, libctx, 0);
                     uVar3 = test_true("test/sslapitest.c", 2000, "OCSP_RESPID_set_by_key_ex(id, ocspcert, libctx, NULL)", iVar4 != 0);
                     if (uVar3 == 0) goto LAB_0011b113;
                     iVar4 = OPENSSL_sk_push(parg, a);
                     iVar4 = test_true("test/sslapitest.c", 0x7d1, "sk_OCSP_RESPID_push(ids, id)", iVar4 != 0);
                     if (iVar4 != 0) {
                        SSL_ctrl(local_50, 0x45, 0, parg);
                        BIO_free(bp);
                        iVar4 = create_ssl_connection(local_48, local_50, 0);
                        iVar4 = test_true("test/sslapitest.c", 0x7db, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
                        if (iVar4 != 0) {
                           iVar4 = test_true("test/sslapitest.c", 0x7dd, "ocsp_client_called", ocsp_client_called != 0);
                           if (iVar4 != 0) {
                              iVar4 = test_true("test/sslapitest.c", 0x7de, "ocsp_server_called", ocsp_server_called != 0);
                              uVar3 = ( uint )(iVar4 != 0);
                              bp = (BIO*)0x0;
                              a = (OCSP_RESPID*)0x0;
                              parg = (void*)0x0;
                              goto LAB_0011b113;
                           }

                        }

                        goto LAB_0011b109;
                     }

                  }

               }

            }

            uVar3 = 0;
         }

      }

   }
 else {
      LAB_0011b109:bp = (BIO*)0x0;
      a = (OCSP_RESPID*)0x0;
      parg = (void*)0x0;
      uVar3 = 0;
   }

   LAB_0011b113:SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   OPENSSL_sk_pop_free(parg, OCSP_RESPID_free);
   OCSP_RESPID_free(a);
   BIO_free(bp);
   X509_free(ocspcert);
   ocspcert = (X509*)0x0;
   LAB_0011b0c8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ocsp_server_cb(SSL *param_1, int *param_2) {
   int iVar1;
   void *parg;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   if (*param_2 == 2) {
      SSL_ctrl(param_1, 0x44, 0, &local_28);
      if (( ( ( local_28 != 0 ) && ( iVar1 = OPENSSL_sk_num() ),iVar1 == 1 ) ) && ( lVar2 = lVar2 != 0 )) goto LAB_0011b7fb;
   }
 else if (*param_2 == 1) {
      LAB_0011b7fb:parg = (void*)CRYPTO_memdup("Dummy OCSP Response", 0x14, "test/sslapitest.c", 0x74e);
      iVar1 = test_ptr("test/sslapitest.c", 0x74e, "copy = OPENSSL_memdup(orespder, sizeof(orespder))", parg);
      if (iVar1 != 0) {
         lVar2 = SSL_ctrl(param_1, 0x47, 0x14, parg);
         iVar1 = test_true("test/sslapitest.c", 0x751, "SSL_set_tlsext_status_ocsp_resp(s, copy, sizeof(orespder))", lVar2 != 0);
         if (iVar1 != 0) {
            ocsp_server_called = 1;
            uVar3 = 0;
            goto LAB_0011b882;
         }

         CRYPTO_free(parg);
      }

   }

   uVar3 = 2;
   LAB_0011b882:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
void assert_no_end_of_early_data(undefined8 param_1, undefined8 param_2, int param_3, char *param_4) {
   if (( param_3 == 0x16 ) && ( *param_4 == '\x05' )) {
      end_of_early_data = 1;
      return;
   }

   return;
}
bool test_quic_tls_early_data(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   SSL_SESSION *session;
   long lVar7;
   undefined1 *puVar8;
   undefined1 *puVar9;
   undefined1 *puVar10;
   long in_FS_OFFSET;
   bool bVar11;
   undefined1 local_4030[16384];
   puVar9 = &stack0xffffffffffffffd0;
   do {
      puVar8 = puVar9;
      *(undefined8*)( puVar8 + -0x1000 ) = *(undefined8*)( puVar8 + -0x1000 );
      puVar9 = puVar8 + -0x1000;
   }
 while ( puVar8 + -0x1000 != local_4030 );
   *(undefined8*)( puVar8 + 0x2ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   puVar9 = puVar8 + -0x1358;
   *(undefined2*)( puVar8 + 0x2fea ) = 0x1ff;
   *(code**)( puVar8 + -0x13c0 ) = crypto_send_cb;
   puVar10 = puVar8 + 0xe48;
   *(code**)( puVar8 + -0x13b0 ) = crypto_recv_rcd_cb;
   *(code**)( puVar8 + -0x13a0 ) = crypto_release_rcd_cb;
   *(code**)( puVar8 + -0x1390 ) = yield_secret_cb;
   *(code**)( puVar8 + -0x1380 ) = got_transport_params_cb;
   *(undefined2*)( puVar8 + 0x2fed ) = 0x1fe;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( puVar8 + ( 8*i + -5096 ) ) = 0;
   }

   for (int i = 0; i < 6; i++) {
      *(undefined4*)( puVar8 + ( 16*i + -5064 ) ) = ( i + 2001 );
   }

   *(code**)( puVar8 + -0x1370 ) = alert_cb;
   *(undefined4*)( puVar8 + -0x1368 ) = 0;
   *(undefined8*)( puVar8 + -0x1360 ) = 0;
   puVar8[0x2fec] = 0;
   puVar8[0x2fef] = 0;
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11ba8d;
   memset(puVar9, 0, 0x21a0);
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11ba9c;
   memset(puVar10, 0, 0x21a0);
   uVar2 = cert;
   uVar1 = privkey;
   *(undefined1**)( puVar8 + -0x1358 ) = puVar10;
   *(undefined1**)( puVar8 + 0xe48 ) = puVar9;
   end_of_early_data = 0;
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bac9;
   uVar5 = TLS_client_method();
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bad1;
   uVar6 = TLS_server_method();
   *(undefined8*)( puVar8 + -0x1418 ) = uVar1;
   *(undefined8*)( puVar8 + -0x1420 ) = uVar2;
   *(undefined1**)( puVar8 + -0x1428 ) = puVar8 + -0x13e0;
   *(undefined8*)( puVar8 + -0x1430 ) = 0x11bb05;
   iVar3 = create_ssl_ctx_pair(libctx, uVar6, uVar5, 0x304, 0, puVar8 + -0x13e8);
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bb24;
   iVar3 = test_true("test/sslapitest.c", 0x3285, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      *(undefined8*)( puVar8 + -0x1410 ) = 0x11bbdb;
      SSL_CTX_set_max_early_data(*(undefined8*)( puVar8 + -0x13e8 ), 0xffffffff);
      *(undefined8*)( puVar8 + -0x1410 ) = 0x11bbea;
      SSL_CTX_set_max_early_data(*(undefined8*)( puVar8 + -0x13e0 ), 0xffffffff);
      *(undefined1**)( puVar8 + -0x1400 ) = puVar8 + -0x13d0;
      *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc0f;
      iVar3 = create_ssl_objects(*(undefined8*)( puVar8 + -0x13e8 ), *(undefined8*)( puVar8 + -0x13e0 ), puVar8 + -0x13d8, puVar8 + -0x13d0, 0, 0);
      *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc26;
      iVar3 = test_true("test/sslapitest.c", 0x328d, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 != 0) {
         *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc3f;
         iVar3 = create_ssl_connection(*(undefined8*)( puVar8 + -0x13d8 ), *(undefined8*)( puVar8 + -0x13d0 ), 0);
         *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc5a;
         iVar3 = test_true("test/sslapitest.c", 0x3291, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc6c;
            session = SSL_get1_session(*(SSL**)( puVar8 + -0x13d0 ));
            *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc79;
            SSL_shutdown(*(SSL**)( puVar8 + -0x13d0 ));
            *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc83;
            SSL_shutdown(*(SSL**)( puVar8 + -0x13d8 ));
            *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc8d;
            SSL_free(*(SSL**)( puVar8 + -0x13d8 ));
            *(undefined8*)( puVar8 + -0x1410 ) = 0x11bc97;
            SSL_free(*(SSL**)( puVar8 + -0x13d0 ));
            *(undefined8*)( puVar8 + -0x13d0 ) = 0;
            *(undefined8*)( puVar8 + -0x13d8 ) = 0;
            *(undefined8*)( puVar8 + -0x1410 ) = 0x11bcc6;
            iVar3 = create_ssl_objects(*(undefined8*)( puVar8 + -0x13e8 ), *(undefined8*)( puVar8 + -0x13e0 ), puVar8 + -0x13d8, *(undefined8*)( puVar8 + -0x1400 ), 0, 0);
            *(undefined8*)( puVar8 + -0x1410 ) = 0x11bcdd;
            iVar3 = test_true("test/sslapitest.c", 0x329b, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
            if (iVar3 != 0) {
               *(undefined8*)( puVar8 + -0x1410 ) = 0x11bcfd;
               iVar3 = SSL_set_session(*(SSL**)( puVar8 + -0x13d0 ), session);
               *(undefined8*)( puVar8 + -0x1410 ) = 0x11bd18;
               iVar3 = test_true("test/sslapitest.c", 0x329d, "SSL_set_session(clientssl, sess)", iVar3 != 0);
               if (iVar3 != 0) {
                  *(undefined8*)( puVar8 + -0x1410 ) = 0x11bd2a;
                  SSL_set_bio(*(SSL**)( puVar8 + -0x13d8 ), (BIO*)0x0, (BIO*)0x0);
                  *(undefined8*)( puVar8 + -0x1410 ) = 0x11bd38;
                  SSL_set_bio(*(SSL**)( puVar8 + -0x13d0 ), (BIO*)0x0, (BIO*)0x0);
                  *(undefined8*)( puVar8 + -0x1410 ) = 0x11bd4b;
                  iVar3 = SSL_set_ex_data(*(SSL**)( puVar8 + -0x13d0 ), 0, &clientquicdata);
                  *(undefined8*)( puVar8 + -0x1410 ) = 0x11bd66;
                  iVar3 = test_true("test/sslapitest.c", 0x32a4, "SSL_set_app_data(clientssl, &clientquicdata)", iVar3 != 0);
                  if (iVar3 != 0) {
                     *(undefined8*)( puVar8 + -0x1410 ) = 0x11bd81;
                     iVar3 = SSL_set_ex_data(*(SSL**)( puVar8 + -0x13d8 ), 0, &serverquicdata);
                     *(undefined8*)( puVar8 + -0x1410 ) = 0x11bd9c;
                     iVar3 = test_true("test/sslapitest.c", 0x32a5, "SSL_set_app_data(serverssl, &serverquicdata)", iVar3 != 0);
                     if (iVar3 != 0) {
                        *(undefined8*)( puVar8 + -0x1410 ) = 0x11bdb9;
                        iVar3 = SSL_set_quic_tls_cbs(*(undefined8*)( puVar8 + -0x13d0 ), puVar8 + -0x13c8, puVar10);
                        *(undefined8*)( puVar8 + -0x1410 ) = 0x11bdd4;
                        iVar3 = test_true("test/sslapitest.c", 0x32a8, "SSL_set_quic_tls_cbs(clientssl, qtdis, &cdata)", iVar3 != 0);
                        if (iVar3 != 0) {
                           *(undefined8*)( puVar8 + -0x1410 ) = 0x11bdec;
                           iVar3 = SSL_set_quic_tls_cbs(*(undefined8*)( puVar8 + -0x13d8 ), puVar8 + -0x13c8, puVar9);
                           *(undefined8*)( puVar8 + -0x1410 ) = 0x11be07;
                           iVar3 = test_true("test/sslapitest.c", 0x32a9, "SSL_set_quic_tls_cbs(serverssl, qtdis, &sdata)", iVar3 != 0);
                           if (iVar3 != 0) {
                              *(undefined8*)( puVar8 + -0x1410 ) = 0x11be29;
                              iVar3 = SSL_set_quic_tls_transport_params(*(undefined8*)( puVar8 + -0x13d0 ), puVar8 + 0x2fea, 3);
                              *(undefined8*)( puVar8 + -0x1410 ) = 0x11be44;
                              iVar3 = test_true("test/sslapitest.c", 0x32aa, "SSL_set_quic_tls_transport_params(clientssl, cparams, sizeof(cparams))", iVar3 != 0);
                              if (iVar3 != 0) {
                                 *(undefined8*)( puVar8 + -0x1410 ) = 0x11be66;
                                 iVar3 = SSL_set_quic_tls_transport_params(*(undefined8*)( puVar8 + -0x13d8 ), puVar8 + 0x2fed, 3);
                                 *(undefined8*)( puVar8 + -0x1410 ) = 0x11be81;
                                 iVar3 = test_true("test/sslapitest.c", 0x32ac, "SSL_set_quic_tls_transport_params(serverssl, sparams, sizeof(sparams))", iVar3 != 0);
                                 if (iVar3 != 0) {
                                    *(undefined8*)( puVar8 + -0x1410 ) = 0x11be9f;
                                    SSL_set_quic_tls_early_data_enabled(*(undefined8*)( puVar8 + -0x13d8 ), 1);
                                    *(undefined8*)( puVar8 + -0x1410 ) = 0x11beae;
                                    SSL_set_quic_tls_early_data_enabled(*(undefined8*)( puVar8 + -0x13d0 ), 1);
                                    *(undefined8*)( puVar8 + -0x1410 ) = 0x11bebb;
                                    SSL_set_msg_callback(*(SSL**)( puVar8 + -0x13d8 ), assert_no_end_of_early_data);
                                    *(undefined8*)( puVar8 + -0x1410 ) = 0x11becf;
                                    SSL_set_msg_callback(*(SSL**)( puVar8 + -0x13d0 ), assert_no_end_of_early_data);
                                    *(undefined8*)( puVar8 + -0x1410 ) = 0x11bed9;
                                    iVar3 = SSL_connect(*(SSL**)( puVar8 + -0x13d0 ));
                                    *(undefined8*)( puVar8 + -0x1410 ) = 0x11bef7;
                                    iVar3 = test_int_eq("test/sslapitest.c", 0x32b6, "SSL_connect(clientssl)", &_LC45, iVar3, 0xffffffff);
                                    if (iVar3 != 0) {
                                       *(undefined8*)( puVar8 + -0x1410 ) = 0x11bf09;
                                       iVar3 = SSL_accept(*(SSL**)( puVar8 + -0x13d8 ));
                                       *(undefined8*)( puVar8 + -0x1410 ) = 0x11bf27;
                                       iVar3 = test_int_eq("test/sslapitest.c", 0x32b7, "SSL_accept(serverssl)", &_LC45, iVar3, 0xffffffff);
                                       if (iVar3 != 0) {
                                          *(undefined8*)( puVar8 + -0x1410 ) = 0x11bf39;
                                          uVar4 = SSL_get_early_data_status(*(undefined8*)( puVar8 + -0x13d8 ));
                                          *(undefined8*)( puVar8 + -0x1410 ) = 0x11bf5d;
                                          iVar3 = test_int_eq("test/sslapitest.c", 0x32b8, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_ACCEPTED", uVar4, 2);
                                          if (iVar3 != 0) {
                                             *(undefined8*)( puVar8 + -0x1410 ) = 0x11bf78;
                                             iVar3 = SSL_get_error(*(SSL**)( puVar8 + -0x13d0 ), 0);
                                             *(undefined8*)( puVar8 + -0x1410 ) = 0x11bf98;
                                             iVar3 = test_int_eq("test/sslapitest.c", 0x32b9, "SSL_get_error(clientssl, 0)", "SSL_ERROR_WANT_READ", iVar3, 2);
                                             if (iVar3 != 0) {
                                                *(undefined8*)( puVar8 + -0x1410 ) = 0x11bfac;
                                                iVar3 = SSL_get_error(*(SSL**)( puVar8 + -0x13d8 ), 0);
                                                *(undefined8*)( puVar8 + -0x1410 ) = 0x11bfcc;
                                                iVar3 = test_int_eq("test/sslapitest.c", 0x32ba, "SSL_get_error(serverssl, 0)", "SSL_ERROR_WANT_READ", iVar3, 2);
                                                if (iVar3 != 0) {
                                                   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bff5;
                                                   iVar3 = test_true("test/sslapitest.c", 0x32be, "sdata.renc_level == OSSL_RECORD_PROTECTION_LEVEL_HANDSHAKE", *(int*)( puVar8 + -0x1350 ) == 2);
                                                   if (iVar3 != 0) {
                                                      *(undefined8*)( puVar8 + -0x1410 ) = 0x11c01e;
                                                      iVar3 = test_true("test/sslapitest.c", 0x32bf, "sdata.wenc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar8 + -0x134c ) == 3);
                                                      if (iVar3 != 0) {
                                                         *(undefined8*)( puVar8 + -0x1410 ) = 0x11c047;
                                                         iVar3 = test_true("test/sslapitest.c", 0x32c0, "cdata.renc_level == OSSL_RECORD_PROTECTION_LEVEL_NONE", *(int*)( puVar8 + 0xe50 ) == 0);
                                                         if (iVar3 != 0) {
                                                            *(undefined8*)( puVar8 + -0x1410 ) = 0x11c070;
                                                            iVar3 = test_true("test/sslapitest.c", 0x32c1, "cdata.wenc_level == OSSL_RECORD_PROTECTION_LEVEL_EARLY", *(int*)( puVar8 + 0xe54 ) == 1);
                                                            if (iVar3 != 0) {
                                                               *(undefined8*)( puVar8 + -0x1410 ) = 0x11c089;
                                                               iVar3 = create_ssl_connection(*(undefined8*)( puVar8 + -0x13d8 ), *(undefined8*)( puVar8 + -0x13d0 ), 0);
                                                               *(undefined8*)( puVar8 + -0x1410 ) = 0x11c0a4;
                                                               iVar3 = test_true("test/sslapitest.c", 0x32c4, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                                                               if (iVar3 != 0) {
                                                                  *(undefined8*)( puVar8 + -0x1410 ) = 0x11c0cd;
                                                                  iVar3 = test_false("test/sslapitest.c", 13000, "sdata.alert", *(int*)( puVar8 + 0xe38 ) != 0);
                                                                  if (iVar3 != 0) {
                                                                     *(undefined8*)( puVar8 + -0x1410 ) = 0x11c0f6;
                                                                     iVar3 = test_false("test/sslapitest.c", 0x32c9, "cdata.alert", *(int*)( puVar8 + 0x2fd8 ) != 0);
                                                                     if (iVar3 != 0) {
                                                                        *(undefined8*)( puVar8 + -0x1410 ) = 0x11c11f;
                                                                        iVar3 = test_false("test/sslapitest.c", 0x32ca, "sdata.err", *(int*)( puVar8 + 0xe3c ) != 0);
                                                                        if (iVar3 != 0) {
                                                                           *(undefined8*)( puVar8 + -0x1410 ) = 0x11c148;
                                                                           iVar3 = test_false("test/sslapitest.c", 0x32cb, "cdata.err", *(int*)( puVar8 + 0x2fdc ) != 0);
                                                                           if (iVar3 != 0) {
                                                                              lVar7 = 0;
                                                                              *(undefined1**)( puVar8 + -0x1400 ) = puVar8 + 0x2fea;
                                                                              *(undefined1**)( puVar8 + -0x13f8 ) = puVar8 + 0x2fed;
                                                                              puVar9 = puVar8 + 0xd80;
                                                                              puVar10 = puVar8 + 0x2e78;
                                                                              do {
                                                                                 *(undefined8*)( puVar8 + -0x1410 ) = *(undefined8*)( puVar8 + lVar7 + 0x2f08 );
                                                                                 uVar1 = *(undefined8*)( puVar8 + lVar7 + 0xe10 );
                                                                                 *(undefined1**)( puVar8 + -0x1418 ) = puVar10;
                                                                                 *(undefined1**)( puVar8 + -0x13f0 ) = puVar9;
                                                                                 *(undefined8*)( puVar8 + -0x1420 ) = 0x11c1ac;
                                                                                 iVar3 = test_mem_eq("test/sslapitest.c", 0x32d2, "sdata.wsecret[i]", "cdata.rsecret[i]", puVar9, uVar1);
                                                                                 if (iVar3 == 0) goto LAB_0011bce1;
                                                                                 lVar7 = lVar7 + 8;
                                                                                 puVar10 = puVar10 + 0x30;
                                                                                 puVar9 = (undefined1*)( *(long*)( puVar8 + -0x13f0 ) + 0x30 );
                                                                              }
 while ( lVar7 != 0x18 );
                                                                              uVar1 = *(undefined8*)( puVar8 + -0x13f8 );
                                                                              *(undefined8*)( puVar8 + -0x1410 ) = 3;
                                                                              *(undefined8*)( puVar8 + -0x1418 ) = *(undefined8*)( puVar8 + -0x1400 );
                                                                              *(undefined8*)( puVar8 + -0x1420 ) = 0x11c208;
                                                                              iVar3 = test_mem_eq("test/sslapitest.c", 0x32d8, "sdata.params", "cparams", puVar8 + 0xe28, *(undefined8*)( puVar8 + 0xe30 ));
                                                                              if (iVar3 != 0) {
                                                                                 *(undefined8*)( puVar8 + -0x1410 ) = 3;
                                                                                 *(undefined8*)( puVar8 + -0x1418 ) = uVar1;
                                                                                 *(undefined8*)( puVar8 + -0x1420 ) = 0x11c240;
                                                                                 iVar3 = test_mem_eq("test/sslapitest.c", 0x32d9, "cdata.params", "sparams", puVar8 + 0x2fc8, *(undefined8*)( puVar8 + 0x2fd0 ));
                                                                                 if (iVar3 != 0) {
                                                                                    *(undefined8*)( puVar8 + -0x1410 ) = 0x11c26b;
                                                                                    iVar3 = test_true("test/sslapitest.c", 0x32de, "sdata.renc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar8 + -0x1350 ) == 3);
                                                                                    if (iVar3 != 0) {
                                                                                       *(undefined8*)( puVar8 + -0x1410 ) = 0x11c294;
                                                                                       iVar3 = test_true("test/sslapitest.c", 0x32df, "sdata.wenc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar8 + -0x134c ) == 3);
                                                                                       if (iVar3 != 0) {
                                                                                          *(undefined8*)( puVar8 + -0x1410 ) = 0x11c2bd;
                                                                                          iVar3 = test_true("test/sslapitest.c", 0x32e0, "cdata.renc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar8 + 0xe50 ) == 3);
                                                                                          if (iVar3 != 0) {
                                                                                             *(undefined8*)( puVar8 + -0x1410 ) = 0x11c2e6;
                                                                                             iVar3 = test_true("test/sslapitest.c", 0x32e1, "cdata.wenc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar8 + 0xe54 ) == 3);
                                                                                             if (iVar3 != 0) {
                                                                                                *(undefined8*)( puVar8 + -0x1410 ) = 0x11c315;
                                                                                                iVar3 = test_int_eq("test/sslapitest.c", 0x32e5, "end_of_early_data", &_LC15, end_of_early_data, 0);
                                                                                                bVar11 = iVar3 != 0;
                                                                                                goto LAB_0011bb31;
                                                                                             }

                                                                                          }

                                                                                       }

                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

            LAB_0011bce1:bVar11 = false;
            goto LAB_0011bb31;
         }

      }

   }

   session = (SSL_SESSION*)0x0;
   bVar11 = false;
   LAB_0011bb31:*(undefined8*)( puVar8 + -0x1410 ) = 0x11bb39;
   SSL_SESSION_free(session);
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bb45;
   SSL_SESSION_free(clientpsk);
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bb51;
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bb71;
   SSL_free(*(SSL**)( puVar8 + -0x13d8 ));
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bb7b;
   SSL_free(*(SSL**)( puVar8 + -0x13d0 ));
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bb85;
   SSL_CTX_free(*(SSL_CTX**)( puVar8 + -0x13e8 ));
   *(undefined8*)( puVar8 + -0x1410 ) = 0x11bb8f;
   SSL_CTX_free(*(SSL_CTX**)( puVar8 + -0x13e0 ));
   if (*(long*)( puVar8 + 0x2ff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar11;
   }

   /* WARNING: Subroutine does not return */
   *(undefined**)( puVar8 + -0x1410 ) = &UNK_0011c324;
   __stack_chk_fail();
}
bool test_quic_tls(int param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined1 *puVar6;
   char *pcVar7;
   undefined1 *puVar8;
   long lVar9;
   undefined1 *puVar10;
   long in_FS_OFFSET;
   bool bVar11;
   undefined1 local_4030[16384];
   puVar8 = &stack0xffffffffffffffd0;
   do {
      puVar6 = puVar8;
      *(undefined8*)( puVar6 + -0x1000 ) = *(undefined8*)( puVar6 + -0x1000 );
      puVar8 = puVar6 + -0x1000;
   }
 while ( puVar6 + -0x1000 != local_4030 );
   *(undefined8*)( puVar6 + 0x2ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   *(undefined2*)( puVar6 + 0x2fea ) = 0x1ff;
   *(code**)( puVar6 + -0x13c0 ) = crypto_send_cb;
   puVar8 = puVar6 + -0x1358;
   *(code**)( puVar6 + -0x13b0 ) = crypto_recv_rcd_cb;
   puVar10 = puVar6 + 0xe48;
   *(code**)( puVar6 + -0x13a0 ) = crypto_release_rcd_cb;
   *(code**)( puVar6 + -0x1390 ) = yield_secret_cb;
   *(code**)( puVar6 + -0x1380 ) = got_transport_params_cb;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( puVar6 + ( 8*i + -5096 ) ) = 0;
   }

   for (int i = 0; i < 6; i++) {
      *(undefined4*)( puVar6 + ( 16*i + -5064 ) ) = ( i + 2001 );
   }

   *(code**)( puVar6 + -0x1370 ) = alert_cb;
   *(undefined4*)( puVar6 + -0x1368 ) = 0;
   *(undefined8*)( puVar6 + -0x1360 ) = 0;
   puVar6[0x2fec] = 0;
   *(undefined2*)( puVar6 + 0x2fed ) = 0x1fe;
   puVar6[0x2fef] = 0;
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c480;
   memset(puVar8, 0, 0x21a0);
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c48f;
   memset(puVar10, 0, 0x21a0);
   uVar2 = cert;
   uVar1 = privkey;
   *(undefined1**)( puVar6 + -0x1358 ) = puVar10;
   *(undefined1**)( puVar6 + 0xe48 ) = puVar8;
   if (param_1 == 1) {
      *(undefined4*)( puVar6 + 0xe40 ) = 1;
   }

   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c4c3;
   uVar4 = TLS_client_method();
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c4cb;
   uVar5 = TLS_server_method();
   *(undefined8*)( puVar6 + -0x1418 ) = uVar1;
   *(undefined8*)( puVar6 + -0x1420 ) = uVar2;
   pcVar7 = "sdata.err";
   *(undefined1**)( puVar6 + -0x1428 ) = puVar6 + -0x13e0;
   *(undefined8*)( puVar6 + -0x1430 ) = 0x11c505;
   iVar3 = create_ssl_ctx_pair(libctx, uVar5, uVar4, 0x304, 0, puVar6 + -0x13e8);
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c524;
   iVar3 = test_true("test/sslapitest.c", 0x3204, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 == 0) {
      LAB_0011c52c:bVar11 = false;
   }
 else {
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c5cf;
      iVar3 = create_ssl_objects(*(undefined8*)( puVar6 + -0x13e8 ), *(undefined8*)( puVar6 + -0x13e0 ), puVar6 + -0x13d8, puVar6 + -0x13d0, 0, 0);
      pcVar7 = "sdata.err";
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c5f1;
      iVar3 = test_true("test/sslapitest.c", 0x3209, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c607;
      SSL_set_bio(*(SSL**)( puVar6 + -0x13d8 ), (BIO*)0x0, (BIO*)0x0);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c615;
      SSL_set_bio(*(SSL**)( puVar6 + -0x13d0 ), (BIO*)0x0, (BIO*)0x0);
      if (param_1 == 2) {
         *(undefined8*)( puVar6 + -0x1410 ) = 0x11ca54;
         iVar3 = SSL_set_ciphersuites(*(undefined8*)( puVar6 + -0x13d8 ), "TLS_AES_128_CCM_SHA256");
         *(undefined8*)( puVar6 + -0x1410 ) = 0x11ca6f;
         iVar3 = test_true("test/sslapitest.c", 0x3212, "SSL_set_ciphersuites(serverssl, \"TLS_AES_128_CCM_SHA256\")", iVar3 != 0);
         if (iVar3 != 0) {
            *(undefined8*)( puVar6 + -0x1410 ) = 0x11ca84;
            iVar3 = SSL_set_ciphersuites(*(undefined8*)( puVar6 + -0x13d0 ), "TLS_AES_128_CCM_SHA256");
            *(undefined8*)( puVar6 + -0x1410 ) = 0x11ca9f;
            iVar3 = test_true("test/sslapitest.c", 0x3213, "SSL_set_ciphersuites(clientssl, \"TLS_AES_128_CCM_SHA256\")", iVar3 != 0);
            if (iVar3 != 0) goto LAB_0011c61f;
         }

         goto LAB_0011c52c;
      }

      LAB_0011c61f:pcVar7 = "sdata.err";
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c639;
      iVar3 = SSL_set_ex_data(*(SSL**)( puVar6 + -0x13d0 ), 0, &clientquicdata);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c654;
      iVar3 = test_true("test/sslapitest.c", 0x3217, "SSL_set_app_data(clientssl, &clientquicdata)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c66f;
      iVar3 = SSL_set_ex_data(*(SSL**)( puVar6 + -0x13d8 ), 0, &serverquicdata);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c68a;
      iVar3 = test_true("test/sslapitest.c", 0x3218, "SSL_set_app_data(serverssl, &serverquicdata)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c6a7;
      iVar3 = SSL_set_quic_tls_cbs(*(undefined8*)( puVar6 + -0x13d0 ), puVar6 + -0x13c8, puVar10);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c6c2;
      iVar3 = test_true("test/sslapitest.c", 0x321b, "SSL_set_quic_tls_cbs(clientssl, qtdis, &cdata)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c6da;
      iVar3 = SSL_set_quic_tls_cbs(*(undefined8*)( puVar6 + -0x13d8 ), puVar6 + -0x13c8, puVar8);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c6f5;
      iVar3 = test_true("test/sslapitest.c", 0x321c, "SSL_set_quic_tls_cbs(serverssl, qtdis, &sdata)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c717;
      iVar3 = SSL_set_quic_tls_transport_params(*(undefined8*)( puVar6 + -0x13d0 ), puVar6 + 0x2fea, 3);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c732;
      iVar3 = test_true("test/sslapitest.c", 0x321d, "SSL_set_quic_tls_transport_params(clientssl, cparams, sizeof(cparams))", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c754;
      iVar3 = SSL_set_quic_tls_transport_params(*(undefined8*)( puVar6 + -0x13d8 ), puVar6 + 0x2fed, 3);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11c76f;
      iVar3 = test_true("test/sslapitest.c", 0x321f, "SSL_set_quic_tls_transport_params(serverssl, sparams, sizeof(sparams))", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      if (param_1 != 1) {
         *(undefined8*)( puVar6 + -0x1410 ) = 0x11c792;
         iVar3 = create_ssl_connection(*(undefined8*)( puVar6 + -0x13d8 ), *(undefined8*)( puVar6 + -0x13d0 ), 0);
         *(undefined8*)( puVar6 + -0x1410 ) = 0x11c7ad;
         iVar3 = test_true("test/sslapitest.c", 0x3224, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            *(undefined8*)( puVar6 + -0x1410 ) = 0x11c7d9;
            iVar3 = test_false("test/sslapitest.c", 0x3230, "sdata.alert", *(int*)( puVar6 + 0xe38 ) != 0);
            if (iVar3 != 0) {
               *(undefined8*)( puVar6 + -0x1410 ) = 0x11c802;
               iVar3 = test_false("test/sslapitest.c", 0x3231, "cdata.alert", *(int*)( puVar6 + 0x2fd8 ) != 0);
               if (iVar3 != 0) {
                  pcVar7 = "sdata.err";
                  *(undefined8*)( puVar6 + -0x1410 ) = 0x11c82e;
                  iVar3 = test_false("test/sslapitest.c", 0x3232, "sdata.err", *(int*)( puVar6 + 0xe3c ) != 0);
                  if (iVar3 != 0) {
                     *(undefined8*)( puVar6 + -0x1410 ) = 0x11c857;
                     iVar3 = test_false("test/sslapitest.c", 0x3233, "cdata.err", *(int*)( puVar6 + 0x2fdc ) != 0);
                     if (iVar3 != 0) {
                        lVar9 = 0;
                        *(undefined1**)( puVar6 + -0x13f8 ) = puVar6 + 0x2fed;
                        *(char**)( puVar6 + -0x1400 ) = "sdata.err";
                        puVar8 = puVar6 + 0xd80;
                        puVar10 = puVar6 + 0x2e78;
                        do {
                           *(undefined8*)( puVar6 + -0x1410 ) = *(undefined8*)( puVar6 + lVar9 + 0x2f08 );
                           uVar1 = *(undefined8*)( puVar6 + lVar9 + 0xe10 );
                           *(undefined1**)( puVar6 + -0x1418 ) = puVar10;
                           *(undefined1**)( puVar6 + -0x13f0 ) = puVar8;
                           *(undefined8*)( puVar6 + -0x1420 ) = 0x11c8c0;
                           iVar3 = test_mem_eq("test/sslapitest.c", 0x323a, "sdata.wsecret[i]", "cdata.rsecret[i]", puVar8, uVar1);
                           if (iVar3 == 0) {
                              pcVar7 = *(char**)( puVar6 + -0x1400 );
                              goto LAB_0011c52c;
                           }

                           lVar9 = lVar9 + 8;
                           puVar10 = puVar10 + 0x30;
                           puVar8 = (undefined1*)( *(long*)( puVar6 + -0x13f0 ) + 0x30 );
                        }
 while ( lVar9 != 0x18 );
                        pcVar7 = *(char**)( puVar6 + -0x1400 );
                        uVar1 = *(undefined8*)( puVar6 + -0x13f8 );
                        *(undefined8*)( puVar6 + -0x1410 ) = 3;
                        *(undefined1**)( puVar6 + -0x1418 ) = puVar6 + 0x2fea;
                        *(undefined8*)( puVar6 + -0x1420 ) = 0x11c91f;
                        iVar3 = test_mem_eq("test/sslapitest.c", 0x3240, "sdata.params", "cparams", puVar6 + 0xe28, *(undefined8*)( puVar6 + 0xe30 ));
                        if (iVar3 != 0) {
                           *(undefined8*)( puVar6 + -0x1410 ) = 3;
                           *(undefined8*)( puVar6 + -0x1418 ) = uVar1;
                           *(undefined8*)( puVar6 + -0x1420 ) = 0x11c959;
                           iVar3 = test_mem_eq("test/sslapitest.c", 0x3241, "cdata.params", "sparams", puVar6 + 0x2fc8, *(undefined8*)( puVar6 + 0x2fd0 ));
                           if (iVar3 != 0) {
                              *(undefined8*)( puVar6 + -0x1410 ) = 0x11c984;
                              iVar3 = test_true("test/sslapitest.c", 0x3246, "sdata.renc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar6 + -0x1350 ) == 3);
                              if (iVar3 != 0) {
                                 *(undefined8*)( puVar6 + -0x1410 ) = 0x11c9ad;
                                 iVar3 = test_true("test/sslapitest.c", 0x3247, "sdata.wenc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar6 + -0x134c ) == 3);
                                 if (iVar3 != 0) {
                                    *(undefined8*)( puVar6 + -0x1410 ) = 0x11c9d6;
                                    iVar3 = test_true("test/sslapitest.c", 0x3248, "cdata.renc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar6 + 0xe50 ) == 3);
                                    if (iVar3 != 0) {
                                       *(undefined8*)( puVar6 + -0x1410 ) = 0x11ca02;
                                       iVar3 = test_true("test/sslapitest.c", 0x3249, "cdata.wenc_level == OSSL_RECORD_PROTECTION_LEVEL_APPLICATION", *(int*)( puVar6 + 0xe54 ) == 3);
                                       bVar11 = iVar3 != 0;
                                       goto LAB_0011c52f;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         goto LAB_0011c52c;
      }

      *(undefined8*)( puVar6 + -0x1410 ) = 0x11cab1;
      iVar3 = create_ssl_connection(*(undefined8*)( puVar6 + -0x13d8 ), *(undefined8*)( puVar6 + -0x13d0 ), 0);
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11cacc;
      iVar3 = test_false("test/sslapitest.c", 0x3228, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_0011c52c;
      *(undefined4*)( puVar6 + 0xe3c ) = 0;
      bVar11 = true;
   }

   LAB_0011c52f:*(undefined8*)( puVar6 + -0x1410 ) = 0x11c539;
   SSL_free(*(SSL**)( puVar6 + -0x13d8 ));
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c543;
   SSL_free(*(SSL**)( puVar6 + -0x13d0 ));
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c54d;
   SSL_CTX_free(*(SSL_CTX**)( puVar6 + -0x13e8 ));
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c557;
   SSL_CTX_free(*(SSL_CTX**)( puVar6 + -0x13e0 ));
   *(undefined8*)( puVar6 + -0x1410 ) = 0x11c575;
   iVar3 = test_false("test/sslapitest.c", 0x3254, pcVar7, *(int*)( puVar6 + 0xe3c ) != 0);
   if (iVar3 != 0) {
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11ca32;
      iVar3 = test_false("test/sslapitest.c", 0x3254, "cdata.err", *(int*)( puVar6 + 0x2fdc ) != 0);
      if (iVar3 != 0) goto LAB_0011c580;
   }

   bVar11 = false;
   LAB_0011c580:if (*(long*)( puVar6 + 0x2ff0 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined8*)( puVar6 + -0x1410 ) = 0x11caef;
      __stack_chk_fail();
   }

   return bVar11;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint test_data_retry(void) {
   char *pcVar1;
   short sVar2;
   short sVar3;
   short sVar4;
   short sVar5;
   short sVar6;
   short sVar7;
   short sVar8;
   short sVar9;
   short sVar10;
   short sVar11;
   short sVar12;
   short sVar13;
   short sVar14;
   short sVar15;
   short sVar16;
   short sVar17;
   ulong uVar18;
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[12];
   undefined1 auVar24[12];
   undefined1 auVar25[12];
   undefined8 uVar26;
   undefined8 uVar27;
   int iVar28;
   uint uVar29;
   BIO_METHOD *type;
   BIO *b;
   char *pcVar30;
   char *pcVar31;
   undefined8 uVar32;
   undefined8 uVar33;
   BIO *append;
   long lVar34;
   long in_FS_OFFSET;
   byte bVar35;
   undefined1 auVar36[16];
   undefined1 auVar38[16];
   undefined1 auVar42[16];
   undefined1 auVar45[16];
   undefined2 uVar58;
   undefined2 uVar59;
   long lVar46;
   undefined2 uVar60;
   undefined1 auVar47[16];
   undefined1 auVar50[16];
   undefined1 auVar54[16];
   undefined1 auVar57[16];
   undefined1 auVar61[16];
   long lVar63;
   SSL_CTX *local_9d8;
   SSL_CTX *local_9d0;
   SSL *local_9c8;
   SSL *local_9c0;
   undefined1 local_9b8[8];
   long local_9b0;
   char local_9a8[2408];
   long local_40;
   undefined1 auVar39[16];
   undefined1 auVar37[16];
   undefined1 auVar40[16];
   undefined1 auVar43[16];
   undefined1 auVar41[16];
   undefined1 auVar44[16];
   undefined1 auVar48[16];
   undefined1 auVar51[16];
   undefined1 auVar49[16];
   undefined1 auVar52[16];
   undefined1 auVar55[16];
   undefined1 auVar53[16];
   undefined1 auVar56[16];
   long lVar62;
   bVar35 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_9d8 = (SSL_CTX*)0x0;
   local_9d0 = (SSL_CTX*)0x0;
   local_9c8 = (SSL*)0x0;
   local_9c0 = (SSL*)0x0;
   type = (BIO_METHOD*)bio_s_maybe_retry();
   b = BIO_new(type);
   iVar28 = test_ptr("test/sslapitest.c", 0x2ec3, "bretry", b);
   uVar27 = cert;
   uVar26 = privkey;
   if (iVar28 != 0) {
      pcVar1 = local_9a8 + 0x4b0;
      pcVar30 = local_9a8;
      auVar47 = __LC883;
      do {
         pcVar31 = pcVar30 + 0x10;
         lVar34 = auVar47._0_8_;
         lVar62 = auVar47._8_8_;
         auVar61._0_8_ = lVar34 + __LC884;
         auVar61._8_8_ = lVar62 + _UNK_0013dbd8;
         lVar46 = lVar34 + __LC885;
         uVar18 = CONCAT44((int)lVar46, auVar47._8_4_);
         auVar37._0_10_ = (unkuint10)uVar18 << 0x20;
         auVar24._8_2_ = auVar47._10_2_;
         auVar24._0_8_ = uVar18;
         auVar24._10_2_ = (short)( ( ulong )(lVar62 + _UNK_0013dbf8) >> 0x10 );
         auVar37._12_4_ = auVar24._8_4_;
         uVar59 = ( undefined2 )(lVar62 + _UNK_0013dbf8);
         auVar37._10_2_ = uVar59;
         auVar23._4_2_ = auVar47._8_2_;
         auVar23._0_4_ = auVar47._8_4_;
         auVar23._6_6_ = auVar37._10_6_;
         uVar58 = ( undefined2 )(( ulong )(lVar34 + __LC886) >> 0x10);
         auVar19._2_8_ = auVar23._4_8_;
         auVar19._0_2_ = uVar58;
         auVar19._10_6_ = 0;
         auVar45._0_2_ = auVar47._0_2_;
         auVar36._12_4_ = 0;
         auVar36._0_12_ = SUB1612(auVar19 << 0x30, 4);
         auVar36 = auVar36 << 0x20;
         uVar60 = ( undefined2 )(lVar34 + __LC887);
         auVar41._0_12_ = auVar36._0_12_;
         auVar41._12_2_ = uVar58;
         auVar41._14_2_ = (short)( ( ulong )(lVar34 + __LC887) >> 0x10 );
         auVar40._12_4_ = auVar41._12_4_;
         auVar40._0_10_ = auVar36._0_10_;
         auVar40._10_2_ = (short)( (ulong)lVar46 >> 0x10 );
         auVar39._10_6_ = auVar40._10_6_;
         auVar39._0_8_ = auVar36._0_8_;
         auVar39._8_2_ = auVar47._2_2_;
         auVar20._2_8_ = auVar39._8_8_;
         auVar20._0_2_ = uVar60;
         auVar20._10_6_ = 0;
         auVar38._12_4_ = 0;
         auVar38._0_12_ = SUB1612(auVar20 << 0x30, 4);
         auVar38 = auVar38 << 0x20;
         auVar44._0_12_ = auVar38._0_12_;
         auVar44._12_2_ = uVar60;
         auVar44._14_2_ = (short)( lVar62 + _UNK_0013dc08 );
         auVar43._12_4_ = auVar44._12_4_;
         auVar43._0_10_ = auVar38._0_10_;
         auVar43._10_2_ = uVar59;
         auVar42._10_6_ = auVar43._10_6_;
         auVar42._0_8_ = auVar38._0_8_;
         auVar42._8_2_ = (short)( lVar34 + __LC886 );
         auVar45._8_8_ = auVar42._8_8_;
         auVar45._6_2_ = (short)( lVar62 + _UNK_0013dbe8 );
         auVar45._4_2_ = (short)lVar46;
         auVar45._2_2_ = auVar47._8_2_;
         lVar63 = lVar34 + __LC889;
         lVar46 = lVar62 + _UNK_0013dc18;
         auVar45 = auVar45 & __LC892;
         auVar48._0_8_ = lVar46 << 0x20;
         uVar18 = CONCAT44((int)lVar63, (int)lVar46);
         auVar49._0_10_ = (unkuint10)uVar18 << 0x20;
         auVar25._8_2_ = (short)( (ulong)lVar46 >> 0x10 );
         auVar25._0_8_ = uVar18;
         auVar25._10_2_ = (short)( ( ulong )(lVar62 + _UNK_0013dc38) >> 0x10 );
         auVar49._12_4_ = auVar25._8_4_;
         uVar59 = ( undefined2 )(lVar62 + _UNK_0013dc38);
         auVar49._10_2_ = uVar59;
         auVar48._10_6_ = auVar49._10_6_;
         auVar48._8_2_ = (short)lVar46;
         uVar58 = ( undefined2 )(( ulong )(lVar34 + __LC890) >> 0x10);
         auVar21._2_8_ = auVar48._8_8_;
         auVar21._0_2_ = uVar58;
         auVar21._10_6_ = 0;
         auVar57._0_2_ = ( undefined2 )(lVar34 + __LC888);
         auVar47._12_4_ = 0;
         auVar47._0_12_ = SUB1612(auVar21 << 0x30, 4);
         auVar47 = auVar47 << 0x20;
         uVar60 = ( undefined2 )(lVar34 + __LC891);
         auVar53._0_12_ = auVar47._0_12_;
         auVar53._12_2_ = uVar58;
         auVar53._14_2_ = (short)( ( ulong )(lVar34 + __LC891) >> 0x10 );
         auVar52._12_4_ = auVar53._12_4_;
         auVar52._0_10_ = auVar47._0_10_;
         auVar52._10_2_ = (short)( (ulong)lVar63 >> 0x10 );
         auVar51._10_6_ = auVar52._10_6_;
         auVar51._0_8_ = auVar47._0_8_;
         auVar51._8_2_ = (short)( ( ulong )(lVar34 + __LC888) >> 0x10 );
         auVar22._2_8_ = auVar51._8_8_;
         auVar22._0_2_ = uVar60;
         auVar22._10_6_ = 0;
         auVar50._12_4_ = 0;
         auVar50._0_12_ = SUB1612(auVar22 << 0x30, 4);
         auVar50 = auVar50 << 0x20;
         auVar56._0_12_ = auVar50._0_12_;
         auVar56._12_2_ = uVar60;
         auVar56._14_2_ = (short)( lVar62 + _UNK_0013dc48 );
         auVar55._12_4_ = auVar56._12_4_;
         auVar55._0_10_ = auVar50._0_10_;
         auVar55._10_2_ = uVar59;
         auVar54._10_6_ = auVar55._10_6_;
         auVar54._0_8_ = auVar50._0_8_;
         auVar54._8_2_ = (short)( lVar34 + __LC890 );
         auVar57._8_8_ = auVar54._8_8_;
         auVar57._6_2_ = (short)( lVar62 + _UNK_0013dc28 );
         auVar57._4_2_ = (short)lVar63;
         auVar57._2_2_ = (short)lVar46;
         auVar57 = auVar57 & __LC892;
         sVar2 = auVar45._0_2_;
         sVar3 = auVar45._2_2_;
         sVar4 = auVar45._4_2_;
         sVar5 = auVar45._6_2_;
         sVar6 = auVar45._8_2_;
         sVar7 = auVar45._10_2_;
         sVar8 = auVar45._12_2_;
         sVar9 = auVar45._14_2_;
         sVar10 = auVar57._0_2_;
         sVar11 = auVar57._2_2_;
         sVar12 = auVar57._4_2_;
         sVar13 = auVar57._6_2_;
         sVar14 = auVar57._8_2_;
         sVar15 = auVar57._10_2_;
         sVar16 = auVar57._12_2_;
         sVar17 = auVar57._14_2_;
         *pcVar30 = ( 0 < sVar2 ) * ( sVar2 < 0x100 ) * auVar45[0] - ( 0xff < sVar2 );
         pcVar30[1] = ( 0 < sVar3 ) * ( sVar3 < 0x100 ) * auVar45[2] - ( 0xff < sVar3 );
         pcVar30[2] = ( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar45[4] - ( 0xff < sVar4 );
         pcVar30[3] = ( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar45[6] - ( 0xff < sVar5 );
         pcVar30[4] = ( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar45[8] - ( 0xff < sVar6 );
         pcVar30[5] = ( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar45[10] - ( 0xff < sVar7 );
         pcVar30[6] = ( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar45[0xc] - ( 0xff < sVar8 );
         pcVar30[7] = ( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar45[0xe] - ( 0xff < sVar9 );
         pcVar30[8] = ( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar57[0] - ( 0xff < sVar10 );
         pcVar30[9] = ( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar57[2] - ( 0xff < sVar11 );
         pcVar30[10] = ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar57[4] - ( 0xff < sVar12 );
         pcVar30[0xb] = ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar57[6] - ( 0xff < sVar13 );
         pcVar30[0xc] = ( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar57[8] - ( 0xff < sVar14 );
         pcVar30[0xd] = ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar57[10] - ( 0xff < sVar15 );
         pcVar30[0xe] = ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar57[0xc] - ( 0xff < sVar16 );
         pcVar30[0xf] = ( 0 < sVar17 ) * ( sVar17 < 0x100 ) * auVar57[0xe] - ( 0xff < sVar17 );
         pcVar30 = pcVar31;
         auVar47 = auVar61;
      }
 while ( pcVar1 != pcVar31 );
      pcVar30 = pcVar1;
      for (lVar46 = 0x96; lVar46 != 0; lVar46 = lVar46 + -1) {
         for (int i = 0; i < 8; i++) {
            pcVar30[i] = '\0';
         }

         pcVar30 = pcVar30 + (ulong)bVar35 * -0x10 + 8;
      }

      uVar32 = TLS_client_method();
      uVar33 = TLS_server_method();
      iVar28 = create_ssl_ctx_pair(libctx, uVar33, uVar32, 0, 0, &local_9d0, &local_9d8, uVar27, uVar26);
      append = (BIO*)0x0;
      uVar29 = test_true("test/sslapitest.c", 0x2eca, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), 0, 0, &sctx, &cctx, cert, privkey)", iVar28 != 0);
      if (uVar29 == 0) goto LAB_0011cd2d;
      iVar28 = create_ssl_objects(local_9d0, local_9d8, &local_9c0, &local_9c8, 0, 0);
      iVar28 = test_true("test/sslapitest.c", 0x2ecf, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar28 != 0);
      if (iVar28 != 0) {
         create_ssl_connection(local_9c0, local_9c8, 0);
         iVar28 = test_true("test/sslapitest.c", 0x2ed3, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
         if (iVar28 != 0) {
            lVar46 = SSL_ctrl(local_9c8, 0x34, 0x200, (void*)0x0);
            iVar28 = test_true("test/sslapitest.c", 0x2ed7, "SSL_set_max_send_fragment(clientssl, 512)", lVar46 != 0);
            if (iVar28 != 0) {
               append = SSL_get_wbio(local_9c8);
               uVar29 = test_ptr("test/sslapitest.c", 0x2edb, &_LC51, append);
               if (uVar29 == 0) goto LAB_0011cd2d;
               iVar28 = BIO_up_ref(append);
               uVar29 = test_true("test/sslapitest.c", 0x2edd, "BIO_up_ref(tmp)", iVar28 != 0);
               if (uVar29 == 0) goto LAB_0011cd2d;
               BIO_push(b, append);
               SSL_set0_wbio(local_9c8, b);
               iVar28 = BIO_up_ref(b);
               if (iVar28 == 0) {
                  b = (BIO*)0x0;
                  append = (BIO*)0x0;
                  uVar29 = 0;
                  goto LAB_0011cd2d;
               }

               lVar46 = 3;
               do {
                  iVar28 = SSL_write_ex(local_9c8, local_9a8, 0x4b0, local_9b8);
                  iVar28 = test_false("test/sslapitest.c", 0x2ee9, "SSL_write_ex(clientssl, inbuf, sizeof(inbuf), &written)", iVar28 != 0);
                  if (iVar28 == 0) break;
                  iVar28 = SSL_get_error(local_9c8, 0);
                  iVar28 = test_int_eq("test/sslapitest.c", 0x2eeb, "SSL_get_error(clientssl, 0)", "SSL_ERROR_WANT_WRITE", iVar28, 3);
                  if (iVar28 == 0) {
                     append = (BIO*)0x0;
                     uVar29 = 0;
                     goto LAB_0011cd2d;
                  }

                  lVar34 = BIO_ctrl(b, 0x8000, 1, (void*)0x0);
                  iVar28 = test_true("test/sslapitest.c", 0x2eef, "BIO_ctrl(bretry, MAYBE_RETRY_CTRL_SET_RETRY_AFTER_CNT, 1, NULL)", lVar34 != 0);
                  if (iVar28 == 0) break;
                  lVar46 = lVar46 + -1;
                  if (lVar46 == 0) {
                     iVar28 = SSL_write_ex(local_9c8, local_9a8, 0x4b0, local_9b8);
                     iVar28 = test_true("test/sslapitest.c", 0x2f01, "SSL_write_ex(clientssl, inbuf, sizeof(inbuf), &written)", iVar28 != 0);
                     if (iVar28 != 0) {
                        lVar46 = 0;
                        while (iVar28 = SSL_read_ex(local_9c0, pcVar1 + lVar46, 0x4b0 - lVar46, &local_9b0),iVar28 != 0) {
                           lVar46 = lVar46 + local_9b0;
                        }
;
                        iVar28 = test_mem_eq("test/sslapitest.c", 0x2f07, "inbuf", "outbuf", local_9a8, 0x4b0, pcVar1, lVar46);
                        uVar29 = ( uint )(iVar28 != 0);
                        append = (BIO*)0x0;
                        goto LAB_0011cd2d;
                     }

                     break;
                  }

                  iVar28 = SSL_write_ex(local_9c8, local_9a8, 0x4b0, local_9b8);
                  iVar28 = test_false("test/sslapitest.c", 0x2efa, "SSL_write_ex(clientssl, inbuf, sizeof(inbuf), &written)", iVar28 != 0);
                  if (iVar28 == 0) break;
                  iVar28 = SSL_get_error(local_9c8, 0);
                  iVar28 = test_int_eq("test/sslapitest.c", 0x2efc, "SSL_get_error(clientssl, 0)", "SSL_ERROR_WANT_WRITE", iVar28, 3);
               }
 while ( iVar28 != 0 );
            }

         }

      }

   }

   append = (BIO*)0x0;
   uVar29 = 0;
   LAB_0011cd2d:SSL_free(local_9c0);
   SSL_free(local_9c8);
   SSL_CTX_free(local_9d0);
   SSL_CTX_free(local_9d8);
   BIO_free_all(b);
   BIO_free(append);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar29;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool test_export_key_mat(uint param_1) {
   uchar *out;
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   size_t llen;
   long lVar5;
   uchar *puVar6;
   char *pcVar7;
   char *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   byte bVar10;
   uchar *local_928;
   uchar *local_920;
   SSL_CTX *local_908;
   SSL_CTX *local_900;
   SSL *local_8f8;
   SSL *local_8f0;
   undefined8 local_8e8;
   undefined8 uStack_8e0;
   undefined8 local_8d8;
   uchar local_8d0[88];
   uchar local_878[80];
   uchar local_828[80];
   uchar local_7d8[80];
   uchar local_788[80];
   uchar local_738[80];
   uchar local_6e8[80];
   uchar local_698[80];
   char local_648[8];
   undefined8 uStack_640;
   undefined1 local_638[16];
   undefined1 local_628[16];
   undefined1 local_618[16];
   undefined1 local_608[16];
   undefined1 local_5f8[16];
   undefined1 local_5e8[16];
   undefined1 local_5d8[16];
   undefined1 local_5c8[16];
   undefined1 local_5b8[16];
   undefined1 local_5a8[16];
   undefined1 local_598[16];
   undefined1 local_588[16];
   undefined1 local_578[16];
   unkbyte10 local_568;
   undefined6 uStack_55e;
   unkbyte10 Stack_558;
   uchar local_548[1288];
   long local_40;
   bVar10 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_908 = (SSL_CTX*)0x0;
   local_648 = (char[8])_LC915._0_8_;
   uStack_640 = ram0x0013dc78;
   local_638 = (undefined1[16])0x0;
   local_628 = (undefined1[16])0x0;
   local_618 = (undefined1[16])0x0;
   local_608 = (undefined1[16])0x0;
   local_5f8 = (undefined1[16])0x0;
   local_5e8 = (undefined1[16])0x0;
   local_5d8 = (undefined1[16])0x0;
   local_5c8 = (undefined1[16])0x0;
   local_5b8 = (undefined1[16])0x0;
   local_5a8 = (undefined1[16])0x0;
   local_900 = (SSL_CTX*)0x0;
   local_8f8 = (SSL*)0x0;
   local_8f0 = (SSL*)0x0;
   local_598 = (undefined1[16])0x0;
   local_568 = SUB1610((undefined1[16])0x0, 0);
   local_588 = (undefined1[16])0x0;
   local_578 = (undefined1[16])0x0;
   uStack_55e = 0;
   Stack_558 = SUB1610((undefined1[16])0x0, 6);
   builtin_memcpy(local_8d0, "context", 8);
   iVar1 = fips_provider_version_ge(libctx, 3, 3, 0);
   pcVar7 = cert;
   pcVar8 = privkey;
   local_8e8 = __LC898;
   uStack_8e0 = _UNK_0013dc68;
   local_8d8 = _LC899;
   if (( is_fips != 0 ) && ( param_1 < 2 )) {
      bVar9 = true;
      goto LAB_0011d2f1;
   }

   uVar3 = TLS_client_method();
   uVar4 = TLS_server_method();
   create_ssl_ctx_pair(libctx, uVar4, uVar3, 0x301, 0, &local_900, &local_908, pcVar7, pcVar8);
   iVar2 = test_true("test/sslapitest.c", 0x19cd, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)");
   if (iVar2 == 0) goto LAB_0011d2c0;
   if (param_1 < 6) {
      iVar2 = *(int*)( (long)&local_8e8 + (long)(int)param_1 * 4 );
      SSL_CTX_ctrl(local_908, 0x7c, (long)iVar2, (void*)0x0);
      SSL_CTX_ctrl(local_908, 0x7b, (long)iVar2, (void*)0x0);
      if (iVar2 < 0x303) {
         iVar2 = SSL_CTX_set_cipher_list(local_908, "DEFAULT:@SECLEVEL=0");
         if (iVar2 != 0) {
            iVar2 = SSL_CTX_set_cipher_list(local_900, "DEFAULT:@SECLEVEL=0");
            if (iVar2 != 0) goto LAB_0011d331;
         }

      }
 else {
         LAB_0011d331:iVar2 = create_ssl_objects(local_900, local_908, &local_8f0, &local_8f8, 0, 0);
         iVar2 = test_true("test/sslapitest.c", 0x19da, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
         if (iVar2 != 0) {
            out = local_8d0 + 8;
            uVar3 = 1;
            iVar2 = SSL_export_keying_material(local_8f8, out, 0x50, local_648, 0xb, local_8d0, 7, 1);
            iVar2 = test_int_le("test/sslapitest.c", 0x19e1, "SSL_export_keying_material(clientssl, ckeymat1, sizeof(ckeymat1), label, SMALL_LABEL_LEN + 1, context, sizeof(context) - 1, 1)", &_LC15, iVar2, 0);
            if (iVar2 != 0) {
               iVar2 = create_ssl_connection(local_8f0, local_8f8, 0, uVar3);
               iVar2 = test_true("test/sslapitest.c", 0x19e7, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
               if (iVar2 != 0) {
                  if (param_1 == 5) {
                     iVar1 = SSL_export_keying_material(local_8f8, out, 0x50, local_648, 0xfa, local_8d0, 7, 1);
                     iVar1 = test_int_le("test/sslapitest.c", 0x19f0, "SSL_export_keying_material(clientssl, ckeymat1, sizeof(ckeymat1), label, LONG_LABEL_LEN + 1, context, sizeof(context) - 1, 1)", &_LC15, iVar1, 0);
                     bVar9 = iVar1 != 0;
                     goto LAB_0011d2c2;
                  }

                  llen = 0xf9;
                  if (param_1 != 4) {
                     llen = 10;
                  }

                  lVar5 = 0xa0;
                  puVar6 = local_548;
                  while (lVar5 != 0) {
                     lVar5 = lVar5 + -1;
                     builtin_memcpy(puVar6, "\x01\x01\x01\x01\x01\x01\x01\x01", 8);
                     puVar6 = puVar6 + (ulong)bVar10 * -0x10 + 8;
                  }
;
                  iVar2 = SSL_export_keying_material(local_8f8, out, 0x50, local_648, llen, local_8d0, 7, 1);
                  iVar2 = test_int_eq("test/sslapitest.c", 0x1a00, "SSL_export_keying_material(clientssl, ckeymat1, sizeof(ckeymat1), label, labellen, context, sizeof(context) - 1, 1)", &_LC49, iVar2, 1);
                  if (iVar2 != 0) {
                     local_928 = local_878;
                     iVar2 = SSL_export_keying_material(local_8f8, local_928, 0x50, local_648, llen, (uchar*)0x0, 0, 1);
                     iVar2 = test_int_eq("test/sslapitest.c", 0x1a04, "SSL_export_keying_material(clientssl, ckeymat2, sizeof(ckeymat2), label, labellen, emptycontext, 0, 1)", &_LC49, iVar2);
                     if (iVar2 != 0) {
                        local_920 = local_828;
                        iVar2 = SSL_export_keying_material(local_8f8, local_920, 0x50, local_648, llen, (uchar*)0x0, 0, 0);
                        iVar2 = test_int_eq("test/sslapitest.c", 0x1a09, "SSL_export_keying_material(clientssl, ckeymat3, sizeof(ckeymat3), label, labellen, NULL, 0, 0)", &_LC49, iVar2, 1);
                        if (iVar2 != 0) {
                           if (iVar1 != 0) {
                              iVar2 = SSL_export_keying_material(local_8f8, local_7d8, 0x50, local_648, llen, local_548, 0x500, 1);
                              iVar2 = test_int_eq("test/sslapitest.c", 0x1a0e, "SSL_export_keying_material(clientssl, ckeymat4, sizeof(ckeymat4), label, labellen, longcontext, sizeof(longcontext), 1)", &_LC49, iVar2, 1);
                              if (iVar2 == 0) goto LAB_0011d2c0;
                           }

                           iVar2 = SSL_export_keying_material(local_8f0, local_788, 0x50, local_648, llen, local_8d0, 7, 1);
                           iVar2 = test_int_eq("test/sslapitest.c", 0x1a15, "SSL_export_keying_material(serverssl, skeymat1, sizeof(skeymat1), label, labellen, context, sizeof(context) -1, 1)", &_LC49, iVar2);
                           if (iVar2 != 0) {
                              iVar2 = SSL_export_keying_material(local_8f0, local_738, 0x50, local_648, llen, (uchar*)0x0, 0, 1);
                              iVar2 = test_int_eq("test/sslapitest.c", 0x1a1b, "SSL_export_keying_material(serverssl, skeymat2, sizeof(skeymat2), label, labellen, emptycontext, 0, 1)", &_LC49, iVar2);
                              if (iVar2 != 0) {
                                 iVar2 = SSL_export_keying_material(local_8f0, local_6e8, 0x50, local_648, llen, (uchar*)0x0, 0, 0);
                                 iVar2 = test_int_eq("test/sslapitest.c", 0x1a20, "SSL_export_keying_material(serverssl, skeymat3, sizeof(skeymat3), label, labellen, NULL, 0, 0)", &_LC49, iVar2, 1);
                                 if (iVar2 != 0) {
                                    if (iVar1 != 0) {
                                       iVar2 = SSL_export_keying_material(local_8f0, local_698, 0x50, local_648, llen, local_548, 0x500, 1);
                                       iVar2 = test_int_eq("test/sslapitest.c", 0x1a25, "SSL_export_keying_material(serverssl, skeymat4, sizeof(skeymat4), label, labellen, longcontext, sizeof(longcontext), 1)", &_LC49, iVar2, 1);
                                       if (iVar2 == 0) goto LAB_0011d2c0;
                                    }

                                    iVar2 = test_mem_eq("test/sslapitest.c", 0x1a2f, "ckeymat1", "skeymat1", out, 0x50, local_788, 0x50);
                                    if (iVar2 != 0) {
                                       pcVar7 = "ckeymat2";
                                       iVar2 = test_mem_eq("test/sslapitest.c", 0x1a35, "ckeymat2", "skeymat2", local_928, 0x50, local_738, 0x50);
                                       if (iVar2 != 0) {
                                          pcVar8 = "ckeymat3";
                                          iVar2 = test_mem_eq("test/sslapitest.c", 0x1a3b, "ckeymat3", "skeymat3", local_920, 0x50, local_6e8, 0x50);
                                          if (iVar2 != 0) {
                                             if (iVar1 != 0) {
                                                iVar1 = test_mem_eq("test/sslapitest.c", 0x1a42, "ckeymat4", "skeymat4", local_7d8, 0x50, local_698, 0x50);
                                                if (iVar1 == 0) goto LAB_0011d2c0;
                                             }

                                             iVar1 = test_mem_ne("test/sslapitest.c", 0x1a45, "ckeymat1", "ckeymat2", out, 0x50, local_928, 0x50);
                                             if (iVar1 != 0) {
                                                if ((int)param_1 < 3) goto LAB_0011d8e8;
                                                iVar1 = test_mem_eq("test/sslapitest.c", 0x1a4f, "ckeymat2", "ckeymat3", local_928, 0x50, local_920, 0x50);
                                                bVar9 = iVar1 != 0;
                                                goto LAB_0011d2c2;
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

      LAB_0011d2c0:bVar9 = false;
   }
 else {
      OPENSSL_die("assertion failed: tst >= 0 && (size_t)tst < OSSL_NELEM(protocols)", "test/sslapitest.c", 0x19d2);
      LAB_0011d8e8:iVar1 = test_mem_ne("test/sslapitest.c", 0x1a4d, pcVar7, pcVar8, local_928, 0x50, local_920, 0x50);
      bVar9 = iVar1 != 0;
   }

   LAB_0011d2c2:SSL_free(local_8f0);
   SSL_free(local_8f8);
   SSL_CTX_free((SSL_CTX*)0x0);
   SSL_CTX_free(local_900);
   SSL_CTX_free(local_908);
   LAB_0011d2f1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool execute_cleanse_plaintext(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4) {
   short sVar1;
   short sVar2;
   short sVar3;
   short sVar4;
   short sVar5;
   short sVar6;
   short sVar7;
   short sVar8;
   short sVar9;
   short sVar10;
   short sVar11;
   short sVar12;
   short sVar13;
   short sVar14;
   short sVar15;
   short sVar16;
   ulong uVar17;
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[12];
   undefined1 auVar23[12];
   undefined1 auVar24[12];
   long lVar25;
   long lVar26;
   long lVar27;
   long lVar28;
   long lVar29;
   long lVar30;
   long lVar31;
   long lVar32;
   long lVar33;
   long lVar34;
   long lVar35;
   long lVar36;
   long lVar37;
   long lVar38;
   long lVar39;
   undefined1 auVar40[16];
   int iVar41;
   long lVar42;
   char *pcVar43;
   char *pcVar44;
   SSL *pSVar45;
   long in_FS_OFFSET;
   bool bVar46;
   undefined1 auVar47[16];
   undefined1 auVar49[16];
   undefined1 auVar53[16];
   undefined1 auVar56[16];
   undefined2 uVar69;
   undefined2 uVar70;
   long lVar57;
   undefined2 uVar71;
   undefined1 auVar58[16];
   undefined1 auVar61[16];
   undefined1 auVar65[16];
   undefined1 auVar68[16];
   undefined1 auVar73[16];
   long lVar75;
   tls_session_secret_cb_fn ptVar76;
   uchar *puVar77;
   SSL_CTX *local_60;
   SSL_CTX *local_58;
   SSL *local_50;
   SSL *local_48;
   long local_40;
   undefined1 auVar50[16];
   undefined1 auVar48[16];
   undefined1 auVar51[16];
   undefined1 auVar54[16];
   undefined1 auVar52[16];
   undefined1 auVar55[16];
   undefined1 auVar59[16];
   undefined1 auVar62[16];
   undefined1 auVar60[16];
   undefined1 auVar63[16];
   undefined1 auVar66[16];
   undefined1 auVar64[16];
   undefined1 auVar67[16];
   long lVar72;
   long lVar74;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (SSL_CTX*)0x0;
   local_58 = (SSL_CTX*)0x0;
   local_50 = (SSL*)0x0;
   local_48 = (SSL*)0x0;
   iVar41 = create_ssl_ctx_pair(libctx, param_1, param_2, param_3, param_4, &local_58, &local_60, cert, privkey);
   iVar41 = test_true("test/sslapitest.c", 0x6bc, "create_ssl_ctx_pair(libctx, smeth, cmeth, min_version, max_version, &sctx, &cctx, cert, privkey)", iVar41 != 0);
   if (iVar41 != 0) {
      iVar41 = create_ssl_objects(local_58, local_60, &local_48, &local_50, 0, 0);
      iVar41 = test_true("test/sslapitest.c", 0x6d5, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar41 != 0);
      if (iVar41 != 0) {
         lVar42 = SSL_set_options(local_48, 2);
         iVar41 = test_true("test/sslapitest.c", 0x6d9, "SSL_set_options(serverssl, SSL_OP_CLEANSE_PLAINTEXT)", lVar42 != 0);
         if (iVar41 != 0) {
            iVar41 = create_ssl_connection(local_48, local_50, 0);
            iVar41 = test_true("test/sslapitest.c", 0x6dc, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar41 != 0);
            auVar40 = __LC892;
            lVar39 = _UNK_0013dc48;
            lVar38 = __LC891;
            lVar37 = _UNK_0013dc38;
            lVar36 = __LC890;
            lVar35 = _UNK_0013dc28;
            lVar34 = __LC889;
            lVar33 = _UNK_0013dc18;
            lVar32 = __LC888;
            lVar31 = _UNK_0013dc08;
            lVar30 = __LC887;
            lVar29 = _UNK_0013dbf8;
            lVar28 = __LC886;
            lVar27 = _UNK_0013dbe8;
            lVar26 = __LC885;
            lVar25 = _UNK_0013dbd8;
            lVar42 = __LC884;
            if (iVar41 != 0) {
               pcVar43 = cbuf_1;
               auVar58 = __LC883;
               do {
                  pcVar44 = pcVar43 + 0x10;
                  lVar72 = auVar58._0_8_;
                  lVar74 = auVar58._8_8_;
                  auVar73._0_8_ = lVar72 + lVar42;
                  auVar73._8_8_ = lVar74 + lVar25;
                  lVar57 = lVar72 + lVar26;
                  uVar17 = CONCAT44((int)lVar57, auVar58._8_4_);
                  auVar48._0_10_ = (unkuint10)uVar17 << 0x20;
                  auVar23._8_2_ = auVar58._10_2_;
                  auVar23._0_8_ = uVar17;
                  auVar23._10_2_ = (short)( ( ulong )(lVar74 + lVar29) >> 0x10 );
                  auVar48._12_4_ = auVar23._8_4_;
                  uVar70 = ( undefined2 )(lVar74 + lVar29);
                  auVar48._10_2_ = uVar70;
                  auVar22._4_2_ = auVar58._8_2_;
                  auVar22._0_4_ = auVar58._8_4_;
                  auVar22._6_6_ = auVar48._10_6_;
                  uVar69 = ( undefined2 )(( ulong )(lVar72 + lVar28) >> 0x10);
                  auVar18._2_8_ = auVar22._4_8_;
                  auVar18._0_2_ = uVar69;
                  auVar18._10_6_ = 0;
                  auVar56._0_2_ = auVar58._0_2_;
                  auVar47._12_4_ = 0;
                  auVar47._0_12_ = SUB1612(auVar18 << 0x30, 4);
                  auVar47 = auVar47 << 0x20;
                  uVar71 = ( undefined2 )(lVar72 + lVar30);
                  auVar52._0_12_ = auVar47._0_12_;
                  auVar52._12_2_ = uVar69;
                  auVar52._14_2_ = (short)( ( ulong )(lVar72 + lVar30) >> 0x10 );
                  auVar51._12_4_ = auVar52._12_4_;
                  auVar51._0_10_ = auVar47._0_10_;
                  auVar51._10_2_ = (short)( (ulong)lVar57 >> 0x10 );
                  auVar50._10_6_ = auVar51._10_6_;
                  auVar50._0_8_ = auVar47._0_8_;
                  auVar50._8_2_ = auVar58._2_2_;
                  auVar19._2_8_ = auVar50._8_8_;
                  auVar19._0_2_ = uVar71;
                  auVar19._10_6_ = 0;
                  auVar49._12_4_ = 0;
                  auVar49._0_12_ = SUB1612(auVar19 << 0x30, 4);
                  auVar49 = auVar49 << 0x20;
                  auVar55._0_12_ = auVar49._0_12_;
                  auVar55._12_2_ = uVar71;
                  auVar55._14_2_ = (short)( lVar74 + lVar31 );
                  auVar54._12_4_ = auVar55._12_4_;
                  auVar54._0_10_ = auVar49._0_10_;
                  auVar54._10_2_ = uVar70;
                  auVar53._10_6_ = auVar54._10_6_;
                  auVar53._0_8_ = auVar49._0_8_;
                  auVar53._8_2_ = (short)( lVar72 + lVar28 );
                  auVar56._8_8_ = auVar53._8_8_;
                  auVar56._6_2_ = (short)( lVar74 + lVar27 );
                  auVar56._4_2_ = (short)lVar57;
                  auVar56._2_2_ = auVar58._8_2_;
                  lVar75 = lVar72 + lVar34;
                  lVar57 = lVar74 + lVar33;
                  auVar56 = auVar56 & auVar40;
                  auVar59._0_8_ = lVar57 << 0x20;
                  uVar17 = CONCAT44((int)lVar75, (int)lVar57);
                  auVar60._0_10_ = (unkuint10)uVar17 << 0x20;
                  auVar24._8_2_ = (short)( (ulong)lVar57 >> 0x10 );
                  auVar24._0_8_ = uVar17;
                  auVar24._10_2_ = (short)( ( ulong )(lVar74 + lVar37) >> 0x10 );
                  auVar60._12_4_ = auVar24._8_4_;
                  uVar70 = ( undefined2 )(lVar74 + lVar37);
                  auVar60._10_2_ = uVar70;
                  auVar59._10_6_ = auVar60._10_6_;
                  auVar59._8_2_ = (short)lVar57;
                  uVar69 = ( undefined2 )(( ulong )(lVar72 + lVar36) >> 0x10);
                  auVar20._2_8_ = auVar59._8_8_;
                  auVar20._0_2_ = uVar69;
                  auVar20._10_6_ = 0;
                  auVar68._0_2_ = ( undefined2 )(lVar72 + lVar32);
                  auVar58._12_4_ = 0;
                  auVar58._0_12_ = SUB1612(auVar20 << 0x30, 4);
                  auVar58 = auVar58 << 0x20;
                  uVar71 = ( undefined2 )(lVar72 + lVar38);
                  auVar64._0_12_ = auVar58._0_12_;
                  auVar64._12_2_ = uVar69;
                  auVar64._14_2_ = (short)( ( ulong )(lVar72 + lVar38) >> 0x10 );
                  auVar63._12_4_ = auVar64._12_4_;
                  auVar63._0_10_ = auVar58._0_10_;
                  auVar63._10_2_ = (short)( (ulong)lVar75 >> 0x10 );
                  auVar62._10_6_ = auVar63._10_6_;
                  auVar62._0_8_ = auVar58._0_8_;
                  auVar62._8_2_ = (short)( ( ulong )(lVar72 + lVar32) >> 0x10 );
                  auVar21._2_8_ = auVar62._8_8_;
                  auVar21._0_2_ = uVar71;
                  auVar21._10_6_ = 0;
                  auVar61._12_4_ = 0;
                  auVar61._0_12_ = SUB1612(auVar21 << 0x30, 4);
                  auVar61 = auVar61 << 0x20;
                  auVar67._0_12_ = auVar61._0_12_;
                  auVar67._12_2_ = uVar71;
                  auVar67._14_2_ = (short)( lVar74 + lVar39 );
                  auVar66._12_4_ = auVar67._12_4_;
                  auVar66._0_10_ = auVar61._0_10_;
                  auVar66._10_2_ = uVar70;
                  auVar65._10_6_ = auVar66._10_6_;
                  auVar65._0_8_ = auVar61._0_8_;
                  auVar65._8_2_ = (short)( lVar72 + lVar36 );
                  auVar68._8_8_ = auVar65._8_8_;
                  auVar68._6_2_ = (short)( lVar74 + lVar35 );
                  auVar68._4_2_ = (short)lVar75;
                  auVar68._2_2_ = (short)lVar57;
                  auVar68 = auVar68 & auVar40;
                  sVar1 = auVar56._0_2_;
                  sVar2 = auVar56._2_2_;
                  sVar3 = auVar56._4_2_;
                  sVar4 = auVar56._6_2_;
                  sVar5 = auVar56._8_2_;
                  sVar6 = auVar56._10_2_;
                  sVar7 = auVar56._12_2_;
                  sVar8 = auVar56._14_2_;
                  sVar9 = auVar68._0_2_;
                  sVar10 = auVar68._2_2_;
                  sVar11 = auVar68._4_2_;
                  sVar12 = auVar68._6_2_;
                  sVar13 = auVar68._8_2_;
                  sVar14 = auVar68._10_2_;
                  sVar15 = auVar68._12_2_;
                  sVar16 = auVar68._14_2_;
                  *pcVar43 = ( 0 < sVar1 ) * ( sVar1 < 0x100 ) * auVar56[0] - ( 0xff < sVar1 );
                  pcVar43[1] = ( 0 < sVar2 ) * ( sVar2 < 0x100 ) * auVar56[2] - ( 0xff < sVar2 );
                  pcVar43[2] = ( 0 < sVar3 ) * ( sVar3 < 0x100 ) * auVar56[4] - ( 0xff < sVar3 );
                  pcVar43[3] = ( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar56[6] - ( 0xff < sVar4 );
                  pcVar43[4] = ( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar56[8] - ( 0xff < sVar5 );
                  pcVar43[5] = ( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar56[10] - ( 0xff < sVar6 );
                  pcVar43[6] = ( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar56[0xc] - ( 0xff < sVar7 );
                  pcVar43[7] = ( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar56[0xe] - ( 0xff < sVar8 );
                  pcVar43[8] = ( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar68[0] - ( 0xff < sVar9 );
                  pcVar43[9] = ( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar68[2] - ( 0xff < sVar10 );
                  pcVar43[10] = ( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar68[4] - ( 0xff < sVar11 );
                  pcVar43[0xb] = ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar68[6] - ( 0xff < sVar12 );
                  pcVar43[0xc] = ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar68[8] - ( 0xff < sVar13 );
                  pcVar43[0xd] = ( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar68[10] - ( 0xff < sVar14 );
                  pcVar43[0xe] = ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar68[0xc] - ( 0xff < sVar15 );
                  pcVar43[0xf] = ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar68[0xe] - ( 0xff < sVar16 );
                  pcVar43 = pcVar44;
                  auVar58 = auVar73;
               }
 while ( pcVar44 != (char*)&client_5 );
               iVar41 = SSL_write(local_50, cbuf_1, 16000);
               iVar41 = test_int_eq("test/sslapitest.c", 0x6e4, "SSL_write(clientssl, cbuf, sizeof(cbuf))", "sizeof(cbuf)", iVar41, 16000);
               if (iVar41 != 0) {
                  iVar41 = SSL_peek(local_48, sbuf_0, 16000);
                  iVar41 = test_int_eq("test/sslapitest.c", 0x6e7, "SSL_peek(serverssl, &sbuf, sizeof(sbuf))", "sizeof(sbuf)", iVar41, 16000);
                  if (iVar41 != 0) {
                     iVar41 = test_mem_eq("test/sslapitest.c", 0x6ea, &_LC923, &_LC922, cbuf_1, 16000, sbuf_0, 16000);
                     if (iVar41 != 0) {
                        pSVar45 = local_48;
                        if (( local_48 != (SSL*)0x0 ) && ( local_48->version != 0 )) {
                           pSVar45 = (SSL*)0x0;
                        }

                        iVar41 = test_ptr("test/sslapitest.c", 0x6f2, "serversc = SSL_CONNECTION_FROM_SSL_ONLY(serverssl)");
                        if (iVar41 != 0) {
                           puVar77 = pSVar45[4].next_proto_negotiated;
                           ptVar76 = pSVar45[4].tls_session_secret_cb;
                           iVar41 = test_int_eq("test/sslapitest.c", 0x6f7, "rr->length", "sizeof(cbuf)", *(undefined4*)&pSVar45[4].initial_ctx, 16000, ptVar76, puVar77);
                           if (iVar41 != 0) {
                              iVar41 = test_mem_eq("test/sslapitest.c", 0x6fe, &_LC923, &_LC926, cbuf_1, 16000, ptVar76 + (long)puVar77, 16000);
                              if (iVar41 != 0) {
                                 memset(sbuf_0, 0, 16000);
                                 iVar41 = SSL_read(local_48, sbuf_0, 16000);
                                 iVar41 = test_int_eq("test/sslapitest.c", 0x702, "SSL_read(serverssl, &sbuf, sizeof(sbuf))", "sizeof(sbuf)", iVar41, 16000);
                                 if (iVar41 != 0) {
                                    iVar41 = test_mem_eq("test/sslapitest.c", 0x705, &_LC923, &_LC922, cbuf_1, 16000, sbuf_0, 16000);
                                    if (iVar41 != 0) {
                                       memset(cbuf_1, 0, 16000);
                                       iVar41 = test_mem_eq("test/sslapitest.c", 0x70a, &_LC923, &_LC926, cbuf_1, 16000, ptVar76 + (long)puVar77, 16000);
                                       bVar46 = iVar41 != 0;
                                       goto LAB_0011d9bc;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   bVar46 = false;
   LAB_0011d9bc:SSL_free(local_48);
   SSL_free(local_50);
   SSL_CTX_free(local_58);
   SSL_CTX_free(local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar46;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_cleanse_plaintext(void) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar2 = TLS_client_method();
   uVar3 = TLS_server_method();
   iVar1 = execute_cleanse_plaintext(uVar3, uVar2, 0x303, 0x303);
   iVar1 = test_true("test/sslapitest.c", 0x71e, "execute_cleanse_plaintext(TLS_server_method(), TLS_client_method(), TLS1_2_VERSION, TLS1_2_VERSION)", iVar1 != 0);
   if (iVar1 != 0) {
      uVar2 = TLS_client_method();
      uVar3 = TLS_server_method();
      iVar1 = execute_cleanse_plaintext(uVar3, uVar2, 0x304, 0x304);
      iVar1 = test_true("test/sslapitest.c", 0x727, "execute_cleanse_plaintext(TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, TLS1_3_VERSION)", iVar1 != 0);
      if (iVar1 != 0) {
         uVar2 = DTLS_client_method();
         uVar3 = DTLS_server_method();
         iVar1 = execute_cleanse_plaintext(uVar3, uVar2, 0xfeff, 0);
         iVar1 = test_true("test/sslapitest.c", 0x730, "execute_cleanse_plaintext(DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0)", iVar1 != 0);
         return iVar1 != 0;
      }

   }

   return false;
}
uint test_load_dhfile(void) {
   uint uVar1;
   undefined4 uVar2;
   int iVar3;
   undefined8 uVar4;
   SSL_CTX *pSVar5;
   undefined8 uVar6;
   uVar1 = 1;
   if (dhfile != 0) {
      uVar4 = TLS_client_method();
      uVar6 = 0;
      pSVar5 = (SSL_CTX*)SSL_CTX_new_ex(libctx, 0, uVar4);
      uVar1 = test_ptr("test/sslapitest.c", 0x2bd0, "ctx = SSL_CTX_new_ex(libctx, NULL, TLS_client_method())", pSVar5);
      if (uVar1 != 0) {
         uVar6 = SSL_CONF_CTX_new();
         uVar1 = test_ptr("test/sslapitest.c", 0x2bd1, "cctx = SSL_CONF_CTX_new()", uVar6);
         if (uVar1 != 0) {
            SSL_CONF_CTX_set_ssl_ctx(uVar6, pSVar5);
            SSL_CONF_CTX_set_flags(uVar6, 0x2a);
            uVar2 = SSL_CONF_cmd(uVar6, "DHParameters", dhfile);
            iVar3 = test_int_eq("test/sslapitest.c", 0x2bda, "SSL_CONF_cmd(cctx, \"DHParameters\", dhfile)", &_LC223, uVar2, 2);
            uVar1 = ( uint )(iVar3 != 0);
         }

      }

      SSL_CONF_CTX_free(uVar6);
      SSL_CTX_free(pSVar5);
   }

   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void server_keylog_callback(undefined8 param_1, char *param_2) {
   size_t sVar1;
   long lVar2;
   ulong uVar3;
   sVar1 = strlen(param_2);
   uVar3 = (int)sVar1 + _server_log_buffer_index;
   if (uVar3 < 0x801) {
      lVar2 = __strcat_chk(&server_log_buffer, param_2, 0x801);
      *(undefined1*)( lVar2 + uVar3 ) = 10;
      _server_log_buffer_index = uVar3 + 1;
      return;
   }

   test_info("test/sslapitest.c", 0xad, "Server log too full");
   error_writing_log = 1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void client_keylog_callback(undefined8 param_1, char *param_2) {
   size_t sVar1;
   long lVar2;
   ulong uVar3;
   sVar1 = strlen(param_2);
   uVar3 = (int)sVar1 + _client_log_buffer_index;
   if (uVar3 < 0x801) {
      lVar2 = __strcat_chk(&client_log_buffer, param_2, 0x801);
      *(undefined1*)( lVar2 + uVar3 ) = 10;
      _client_log_buffer_index = uVar3 + 1;
      return;
   }

   test_info("test/sslapitest.c", 0x9d, "Client log too full");
   error_writing_log = 1;
   return;
}
undefined8 use_session_cb(undefined8 param_1, long param_2, undefined8 *param_3, undefined8 *param_4, long *param_5) {
   int iVar1;
   use_session_cb_cnt = use_session_cb_cnt + 1;
   if (use_session_cb_cnt == 1) {
      if (param_2 != 0) {
         return 0;
      }

   }
 else {
      if (use_session_cb_cnt != 2) {
         return 0;
      }

      if (param_2 == 0) {
         return 0;
      }

   }

   if (( clientpsk != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }

   *param_5 = clientpsk;
   *param_3 = "Identity";
   *param_4 = 8;
   return 1;
}
undefined8 test_session_wo_ca_names(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = execute_test_session(0x304, 1, 0, 0x200);
   if (iVar1 == 0) {
      return 0;
   }

   uVar2 = execute_test_session(0x303, 1, 0, 0x200);
   return uVar2;
}
undefined8 test_session_with_both_cache(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = execute_test_session(0x304, 1, 1, 0);
   if (iVar1 == 0) {
      return 0;
   }

   uVar2 = execute_test_session(0x303, 1, 1, 0);
   return uVar2;
}
undefined8 test_session_with_only_ext_cache(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = execute_test_session(0x304, 0, 1, 0);
   if (iVar1 == 0) {
      return 0;
   }

   uVar2 = execute_test_session(0x303, 0, 1, 0);
   return uVar2;
}
undefined8 test_session_with_only_int_cache(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = execute_test_session(0x304, 1, 0, 0);
   if (iVar1 == 0) {
      return 0;
   }

   uVar2 = execute_test_session(0x303, 1, 0, 0);
   return uVar2;
}
bool test_pluggable_signature(int param_1) {
   int iVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   EVP_PKEY_CTX *ctx;
   X509 *x;
   undefined8 uVar7;
   undefined8 uVar8;
   ASN1_INTEGER *a;
   ASN1_TIME *pAVar9;
   X509_NAME *name;
   EVP_MD *md;
   long lVar10;
   char *pcVar11;
   int iVar12;
   long in_FS_OFFSET;
   bool bVar13;
   BIO *local_98;
   BIO *local_90;
   char *local_88;
   SSL_CTX *local_70;
   SSL_CTX *local_68;
   SSL *local_60;
   SSL *local_58;
   undefined8 local_50;
   EVP_PKEY *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL*)0x0;
   local_58 = (SSL*)0x0;
   uVar5 = OSSL_PROVIDER_load(libctx, "tls-provider");
   uVar6 = OSSL_PROVIDER_load(libctx, "default");
   local_50 = 0;
   iVar1 = param_1 >> 0x1f;
   iVar12 = param_1 % 3;
   if (iVar12 == 2) {
      iVar12 = 1;
      LAB_0011e526:iVar2 = test_ptr("test/sslapitest.c", 0x2805, "tlsprov", uVar5);
      if (iVar2 != 0) {
         pcVar11 = "xorhmacsig";
         local_88 = "xorhmacsig";
         LAB_0011e40d:ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(libctx, pcVar11, 0);
         local_48 = (EVP_PKEY*)0x0;
         x = X509_new();
         iVar2 = test_ptr("test/sslapitest.c", 0x27c3, "evpctx");
         if (iVar2 == 0) {
            LAB_0011e452:local_98 = (BIO*)0x0;
            uVar4 = 0;
            local_90 = (BIO*)0x0;
         }
 else {
            EVP_PKEY_keygen_init(ctx);
            iVar2 = test_int_gt("test/sslapitest.c", 0x27c4, "EVP_PKEY_keygen_init(evpctx)");
            if (iVar2 == 0) goto LAB_0011e452;
            EVP_PKEY_generate(ctx, &local_48);
            iVar2 = test_true("test/sslapitest.c", 0x27c5, "EVP_PKEY_generate(evpctx, &pkey)");
            if (( ( iVar2 == 0 ) || ( iVar2 = test_ptr("test/sslapitest.c", 0x27c6, &_LC943) ),iVar2 == 0 )) goto LAB_0011e452;
            a = X509_get_serialNumber(x);
            ASN1_INTEGER_set(a, 1);
            iVar2 = test_true("test/sslapitest.c", 0x27c8, "ASN1_INTEGER_set(X509_get_serialNumber(x509), 1)");
            if (iVar2 == 0) goto LAB_0011e452;
            pAVar9 = (ASN1_TIME*)X509_getm_notBefore(x);
            X509_gmtime_adj(pAVar9, 0);
            iVar2 = test_true("test/sslapitest.c", 0x27c9, "X509_gmtime_adj(X509_getm_notBefore(x509), 0)");
            if (iVar2 == 0) goto LAB_0011e452;
            pAVar9 = (ASN1_TIME*)X509_getm_notAfter(x);
            X509_gmtime_adj(pAVar9, 0x1e13380);
            iVar2 = test_true("test/sslapitest.c", 0x27ca, "X509_gmtime_adj(X509_getm_notAfter(x509), 31536000L)");
            if (iVar2 == 0) goto LAB_0011e452;
            X509_set_pubkey(x, local_48);
            iVar2 = test_true("test/sslapitest.c", 0x27cb, "X509_set_pubkey(x509, pkey)");
            if (iVar2 == 0) goto LAB_0011e452;
            name = X509_get_subject_name(x);
            iVar2 = test_ptr("test/sslapitest.c", 0x27cc, "name = X509_get_subject_name(x509)");
            if (iVar2 == 0) goto LAB_0011e452;
            X509_NAME_add_entry_by_txt(name, "C", 0x1001, "CH", -1, -1, 0);
            iVar2 = test_true("test/sslapitest.c", 0x27cd, "X509_NAME_add_entry_by_txt(name, \"C\", MBSTRING_ASC, (unsigned char *)\"CH\", -1, -1, 0)");
            if (iVar2 == 0) goto LAB_0011e452;
            iVar2 = X509_NAME_add_entry_by_txt(name, "O", 0x1001, (uchar*)"test.org", -1, -1, 0);
            iVar2 = test_true("test/sslapitest.c", 0x27cf, "X509_NAME_add_entry_by_txt(name, \"O\", MBSTRING_ASC, (unsigned char *)\"test.org\", -1, -1, 0)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_0011e452;
            X509_NAME_add_entry_by_txt(name, "CN", 0x1001, (uchar*)"localhost", -1, -1, 0);
            iVar2 = test_true("test/sslapitest.c", 0x27d1, "X509_NAME_add_entry_by_txt(name, \"CN\", MBSTRING_ASC, (unsigned char *)\"localhost\", -1, -1, 0)");
            if (iVar2 == 0) goto LAB_0011e452;
            X509_set_issuer_name(x, name);
            iVar2 = test_true("test/sslapitest.c", 0x27d3, "X509_set_issuer_name(x509, name)");
            if (iVar2 == 0) goto LAB_0011e452;
            md = EVP_sha1();
            X509_sign(x, local_48, md);
            iVar2 = test_true("test/sslapitest.c", 0x27d4, "X509_sign(x509, pkey, EVP_sha1())");
            if (iVar2 == 0) goto LAB_0011e452;
            local_90 = BIO_new_file("tls-prov-key.pem", "wb");
            uVar4 = test_ptr("test/sslapitest.c", 0x27d5, "keybio = BIO_new_file(privkeyfilename, \"wb\")", local_90);
            local_98 = (BIO*)0x0;
            if (uVar4 != 0) {
               iVar2 = PEM_write_bio_PrivateKey(local_90, local_48, (EVP_CIPHER*)0x0, (uchar*)0x0, 0, (undefined1*)0x0, (void*)0x0);
               uVar4 = test_true("test/sslapitest.c", 0x27d6, "PEM_write_bio_PrivateKey(keybio, pkey, NULL, NULL, 0, NULL, NULL)", iVar2 != 0);
               if (uVar4 != 0) {
                  local_98 = BIO_new_file("tls-prov-cert.pem", "wb");
                  uVar4 = test_ptr("test/sslapitest.c", 0x27d7, "certbio = BIO_new_file(certfilename, \"wb\")", local_98);
                  if (uVar4 != 0) {
                     iVar2 = PEM_write_bio_X509(local_98, x);
                     iVar2 = test_true("test/sslapitest.c", 0x27d8, "PEM_write_bio_X509(certbio, x509)", iVar2 != 0);
                     uVar4 = ( uint )(iVar2 != 0);
                  }

               }

            }

         }

         EVP_PKEY_free(local_48);
         X509_free(x);
         EVP_PKEY_CTX_free(ctx);
         BIO_free(local_90);
         BIO_free(local_98);
         iVar2 = test_true("test/sslapitest.c", 0x2806, "create_cert_key(sigidx, certfilename, privkeyfilename)", uVar4);
         if (iVar2 != 0) {
            uVar7 = TLS_client_method();
            uVar8 = TLS_server_method();
            iVar2 = create_ssl_ctx_pair(libctx, uVar8, uVar7, 0x304, 0x304, &local_68, &local_70, 0, 0);
            iVar2 = test_true("test/sslapitest.c", 0x2809, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_3_VERSION, TLS1_3_VERSION, &sctx, &cctx, NULL, NULL)", iVar2 != 0);
            if (iVar2 != 0) {
               if (iVar12 == 0) {
                  iVar12 = SSL_CTX_use_certificate_file(local_68, "tls-prov-cert.pem", 1);
                  iVar12 = test_int_eq("test/sslapitest.c", 0x2823, "SSL_CTX_use_certificate_file(sctx, certfilename, SSL_FILETYPE_PEM)", &_LC49, iVar12, 1);
                  if (iVar12 != 0) {
                     iVar12 = SSL_CTX_use_PrivateKey_file(local_68, "tls-prov-key.pem", 1);
                     iVar12 = test_int_eq("test/sslapitest.c", 0x2825, "SSL_CTX_use_PrivateKey_file(sctx, privkeyfilename, SSL_FILETYPE_PEM)", &_LC49, iVar12, 1);
                     if (iVar12 != 0) {
                        LAB_0011eb53:iVar12 = SSL_CTX_check_private_key(local_68);
                        iVar12 = test_int_eq("test/sslapitest.c", 0x282a, "SSL_CTX_check_private_key(sctx)", &_LC49, iVar12, 1);
                        if (iVar12 != 0) {
                           iVar12 = create_ssl_objects(local_68, local_70, &local_58, &local_60, 0, 0);
                           iVar12 = test_true("test/sslapitest.c", 0x282d, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar12 != 0);
                           if (iVar12 != 0) {
                              iVar12 = param_1 / 3 + iVar1;
                              if (iVar12 == iVar1) {
                                 LAB_0011ec50:lVar10 = SSL_ctrl(local_58, 0x5c, 0, "xorgroup");
                                 iVar2 = test_true("test/sslapitest.c", 0x2839, "SSL_set1_groups_list(serverssl, \"xorgroup\")", lVar10 != 0);
                                 if (iVar2 != 0) {
                                    lVar10 = SSL_ctrl(local_60, 0x5c, 0, "xorgroup");
                                    iVar2 = test_true("test/sslapitest.c", 0x283a, "SSL_set1_groups_list(clientssl, \"xorgroup\")", lVar10 != 0);
                                    if (iVar2 != 0) {
                                       iVar2 = create_ssl_connection(local_58, local_60, 0);
                                       iVar2 = test_true("test/sslapitest.c", 0x2842, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
                                       if (iVar2 != 0) {
                                          if (iVar12 != iVar1) {
                                             lVar10 = SSL_get_verify_result(local_60);
                                             iVar1 = test_long_eq("test/sslapitest.c", 0x2846, "SSL_get_verify_result(clientssl)", "X509_V_ERR_RPK_UNTRUSTED", lVar10, 0x5f);
                                             if (iVar1 == 0) goto LAB_0011e4bb;
                                          }

                                          lVar10 = SSL_ctrl(local_60, 0x8d, 0, &local_50);
                                          iVar1 = test_true("test/sslapitest.c", 0x2849, "SSL_get0_peer_signature_name(clientssl, &sigalg_name)", lVar10 != 0);
                                          if (( iVar1 != 0 ) && ( iVar1 = test_str_eq("test/sslapitest.c", 0x284a, "sigalg_name", "expected_sigalg_name", local_50, local_88) ),iVar1 != 0) {
                                             iVar1 = test_ptr("test/sslapitest.c", 0x284b, "sigalg_name", local_50);
                                             bVar13 = iVar1 != 0;
                                             goto LAB_0011e4bd;
                                          }

                                       }

                                    }

                                 }

                              }
 else {
                                 iVar2 = SSL_set1_server_cert_type(local_58, &cert_type_rpk_14, 2);
                                 iVar2 = test_true("test/sslapitest.c", 0x2833, "SSL_set1_server_cert_type(serverssl, cert_type_rpk, sizeof(cert_type_rpk))", iVar2 != 0);
                                 if (iVar2 != 0) {
                                    iVar2 = SSL_set1_server_cert_type(local_60, &cert_type_rpk_14, 2);
                                    iVar2 = test_true("test/sslapitest.c", 0x2834, "SSL_set1_server_cert_type(clientssl, cert_type_rpk, sizeof(cert_type_rpk))", iVar2 != 0);
                                    if (iVar2 != 0) goto LAB_0011ec50;
                                 }

                              }

                           }

                        }

                     }

                  }

               }
 else {
                  uVar7 = SSL_CONF_CTX_new();
                  iVar12 = test_ptr("test/sslapitest.c", 0x2813, "confctx", uVar7);
                  if (iVar12 != 0) {
                     SSL_CONF_CTX_set_flags(uVar7, 0x7a);
                     SSL_CONF_CTX_set_ssl_ctx(uVar7, local_68);
                     uVar3 = SSL_CONF_cmd(uVar7, "Certificate", "tls-prov-cert.pem");
                     iVar12 = test_int_gt("test/sslapitest.c", 0x281b, "SSL_CONF_cmd(confctx, \"Certificate\", certfilename)", &_LC15, uVar3, 0);
                     if (iVar12 != 0) {
                        uVar3 = SSL_CONF_cmd(uVar7, "PrivateKey", "tls-prov-key.pem");
                        iVar12 = test_int_gt("test/sslapitest.c", 0x281c, "SSL_CONF_cmd(confctx, \"PrivateKey\", privkeyfilename)", &_LC15, uVar3, 0);
                        if (iVar12 != 0) {
                           iVar12 = SSL_CONF_CTX_finish(uVar7);
                           iVar12 = test_true("test/sslapitest.c", 0x281d, "SSL_CONF_CTX_finish(confctx)", iVar12 != 0);
                           if (iVar12 != 0) {
                              SSL_CONF_CTX_free(uVar7);
                              goto LAB_0011eb53;
                           }

                        }

                     }

                     SSL_CONF_CTX_free(uVar7);
                  }

               }

            }

         }

      }

   }
 else {
      if (iVar12 == 0) goto LAB_0011e526;
      iVar12 = test_ptr("test/sslapitest.c", 0x2805, "tlsprov", uVar5);
      if (iVar12 != 0) {
         iVar12 = 0;
         local_88 = "xorhmacsha2sig";
         pcVar11 = "xorhmacsha2sig";
         goto LAB_0011e40d;
      }

   }

   LAB_0011e4bb:bVar13 = false;
   LAB_0011e4bd:SSL_free(local_58);
   SSL_free(local_60);
   SSL_CTX_free(local_68);
   SSL_CTX_free(local_70);
   OSSL_PROVIDER_unload(uVar5);
   OSSL_PROVIDER_unload(uVar6);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar13;
}
bool test_srp(uint param_1) {
   OPENSSL_STRING ptr;
   undefined8 uVar1;
   BIGNUM *pBVar2;
   BIGNUM *pBVar3;
   int iVar4;
   undefined4 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long lVar8;
   OPENSSL_STRING *value;
   BIO *in;
   undefined8 *puVar9;
   char *pcVar10;
   uint uVar11;
   char *pcVar12;
   undefined8 uVar13;
   OPENSSL_STRING *ppcVar14;
   long in_FS_OFFSET;
   bool bVar15;
   BIO *local_88;
   TXT_DB *local_80;
   SSL_CTX *local_70;
   SSL_CTX *local_68;
   SSL *local_60;
   SSL *local_58;
   BIGNUM *local_50;
   BIGNUM *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL_CTX*)0x0;
   local_60 = (SSL*)0x0;
   local_58 = (SSL*)0x0;
   vbase = (undefined8*)SRP_VBASE_new(0);
   iVar4 = test_ptr("test/sslapitest.c", 0x1e08, "vbase", vbase);
   pcVar12 = tmpfilename;
   if (iVar4 != 0) {
      if (param_1 < 2) {
         local_50 = (BIGNUM*)0x0;
         local_48 = (BIGNUM*)0x0;
         lVar8 = SRP_get_default_gN(0);
         iVar4 = test_ptr("test/sslapitest.c", 0x1dd3, &_LC983, lVar8);
         if (iVar4 == 0) {
            LAB_0011f1fe:uVar13 = 0;
            puVar9 = (undefined8*)0x0;
         }
 else {
            iVar4 = SRP_create_verifier_BN_ex(&_LC985, "password", &local_48, &local_50, *(undefined8*)( lVar8 + 0x10 ), *(undefined8*)( lVar8 + 8 ), libctx, 0);
            iVar4 = test_true("test/sslapitest.c", 0x1dd6, "SRP_create_verifier_BN_ex(userid, password, &salt, &verifier, lgN->N, lgN->g, libctx, NULL)", iVar4 != 0);
            if (iVar4 == 0) goto LAB_0011f1fe;
            puVar9 = (undefined8*)CRYPTO_zalloc(0x30, "test/sslapitest.c", 0x1dda);
            iVar4 = test_ptr("test/sslapitest.c", 0x1ddb, "user_pwd", puVar9);
            if (iVar4 == 0) {
               LAB_0011f37c:uVar13 = 0;
            }
 else {
               uVar13 = *(undefined8*)( lVar8 + 0x10 );
               puVar9[3] = *(undefined8*)( lVar8 + 8 );
               puVar9[4] = uVar13;
               pcVar12 = CRYPTO_strdup("test", "test/sslapitest.c", 0x1de0);
               *puVar9 = pcVar12;
               iVar4 = test_ptr("test/sslapitest.c", 0x1de1, "user_pwd->id", pcVar12);
               pBVar3 = local_48;
               pBVar2 = local_50;
               if (iVar4 == 0) goto LAB_0011f37c;
               local_48 = (BIGNUM*)0x0;
               uVar13 = *vbase;
               local_50 = (BIGNUM*)0x0;
               puVar9[1] = pBVar3;
               puVar9[2] = pBVar2;
               iVar4 = OPENSSL_sk_insert(uVar13, puVar9, 0);
               if (iVar4 == 0) goto LAB_0011f37c;
               uVar13 = 1;
               puVar9 = (undefined8*)0x0;
            }

         }

         SRP_user_pwd_free(puVar9);
         BN_free(local_48);
         BN_free(local_50);
         iVar4 = test_true("test/sslapitest.c", 0x1e0c, "create_new_vbase(userid, password)", uVar13);
         uVar13 = privkey;
         uVar1 = cert;
      }
 else {
         pcVar10 = srpvfile;
         if (param_1 - 4 < 2) {
            value = (OPENSSL_STRING*)CRYPTO_zalloc(0x38, "test/sslapitest.c", 0x1d94);
            in = BIO_new_mem_buf(&_LC359, 0);
            iVar4 = test_ptr("test/sslapitest.c", 0x1d9a, "dummy", in);
            if (( iVar4 == 0 ) || ( iVar4 = test_ptr("test/sslapitest.c", 0x1d9a, &_LC991, value) ),iVar4 == 0) {
               LAB_0011f2af:local_88 = (BIO*)0x0;
               local_80 = (TXT_DB*)0x0;
               LAB_0011f2c0:bVar15 = false;
               if (value != (OPENSSL_STRING*)0x0) {
                  LAB_0011f2c8:ppcVar14 = value;
                  do {
                     ptr = *ppcVar14;
                     ppcVar14 = ppcVar14 + 1;
                     CRYPTO_free(ptr);
                  }
 while ( value + 6 != ppcVar14 );
                  bVar15 = false;
               }

            }
 else {
               pcVar10 = (char*)SRP_create_verifier_ex(&_LC985, "password", value + 2, value + 1, 0, 0, libctx, 0);
               iVar4 = test_ptr("test/sslapitest.c", 0x1d9f, &_LC992, pcVar10);
               if (iVar4 == 0) goto LAB_0011f2af;
               local_80 = TXT_DB_read(in, 6);
               iVar4 = test_ptr("test/sslapitest.c", 0x1da7, &_LC993, local_80);
               local_88 = (BIO*)0x0;
               if (iVar4 == 0) goto LAB_0011f2c0;
               local_88 = BIO_new_file(pcVar12, "w");
               iVar4 = test_ptr("test/sslapitest.c", 0x1dab, &_LC22, local_88);
               if (iVar4 == 0) goto LAB_0011f2c0;
               pcVar12 = CRYPTO_strdup("test", "test/sslapitest.c", 0x1dae);
               value[3] = pcVar12;
               pcVar12 = CRYPTO_strdup("V", "test/sslapitest.c", 0x1daf);
               *value = pcVar12;
               pcVar12 = CRYPTO_strdup(pcVar10, "test/sslapitest.c", 0x1db0);
               value[4] = pcVar12;
               iVar4 = test_ptr("test/sslapitest.c", 0x1db2, "row[DB_srpid]", value[3]);
               if (( ( iVar4 == 0 ) || ( iVar4 = test_ptr("test/sslapitest.c", 0x1db3, "row[DB_srptype]", *value) ),iVar4 == 0 )) goto LAB_0011f2c8;
               iVar4 = TXT_DB_insert(local_80, value);
               iVar4 = test_true("test/sslapitest.c", 0x1db5, "TXT_DB_insert(db, row)", iVar4 != 0);
               if (iVar4 == 0) goto LAB_0011f2c8;
               lVar8 = TXT_DB_write(local_88, local_80);
               bVar15 = 0 < lVar8;
               value = (OPENSSL_STRING*)0x0;
            }

            CRYPTO_free(value);
            BIO_free(in);
            BIO_free(local_88);
            TXT_DB_free(local_80);
            iVar4 = test_true("test/sslapitest.c", 0x1e10, "create_new_vfile(userid, password, tmpfilename)", bVar15);
            pcVar10 = tmpfilename;
            if (iVar4 == 0) goto LAB_0011ef14;
         }

         uVar5 = SRP_VBASE_init(vbase, pcVar10);
         iVar4 = test_int_eq("test/sslapitest.c", 0x1e16, "SRP_VBASE_init(vbase, tstsrpfile)", "SRP_NO_ERROR", uVar5, 0);
         uVar13 = privkey;
         uVar1 = cert;
      }

      privkey = uVar13;
      cert = uVar1;
      if (iVar4 != 0) {
         uVar6 = TLS_client_method();
         uVar7 = TLS_server_method();
         iVar4 = create_ssl_ctx_pair(libctx, uVar7, uVar6, 0x301, 0, &local_68, &local_70, uVar1, uVar13);
         iVar4 = test_true("test/sslapitest.c", 0x1e1a, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar4 != 0);
         if (iVar4 != 0) {
            uVar5 = SSL_CTX_set_srp_username_callback(local_68, ssl_srp_cb);
            iVar4 = test_int_gt("test/sslapitest.c", 0x1e1f, "SSL_CTX_set_srp_username_callback(sctx, ssl_srp_cb)", &_LC15, uVar5, 0);
            if (iVar4 != 0) {
               SSL_CTX_set_cipher_list(local_70, "SRP-AES-128-CBC-SHA");
               iVar4 = test_true("test/sslapitest.c", 0x1e20, "SSL_CTX_set_cipher_list(cctx, \"SRP-AES-128-CBC-SHA\")");
               if (iVar4 != 0) {
                  SSL_CTX_ctrl(local_68, 0x7c, 0x303, (void*)0x0);
                  iVar4 = test_true("test/sslapitest.c", 0x1e21, "SSL_CTX_set_max_proto_version(sctx, TLS1_2_VERSION)");
                  if (iVar4 != 0) {
                     lVar8 = SSL_CTX_ctrl(local_70, 0x7c, 0x303, (void*)0x0);
                     iVar4 = test_true("test/sslapitest.c", 0x1e22, "SSL_CTX_set_max_proto_version(cctx, TLS1_2_VERSION)", lVar8 != 0);
                     if (iVar4 != 0) {
                        uVar5 = SSL_CTX_set_srp_username(local_70, &_LC985);
                        iVar4 = test_int_gt("test/sslapitest.c", 0x1e23, "SSL_CTX_set_srp_username(cctx, userid)", &_LC15, uVar5, 0);
                        if (iVar4 != 0) {
                           if ((int)param_1 % 2 == 1) {
                              uVar5 = SSL_CTX_set_srp_password(local_70, "badpass");
                              iVar4 = test_int_gt("test/sslapitest.c", 0x1e27, "SSL_CTX_set_srp_password(cctx, \"badpass\")", &_LC15, uVar5, 0);
                           }
 else {
                              uVar5 = SSL_CTX_set_srp_password(local_70, "password");
                              iVar4 = test_int_gt("test/sslapitest.c", 0x1e2a, "SSL_CTX_set_srp_password(cctx, password)", &_LC15, uVar5, 0);
                           }

                           if (iVar4 != 0) {
                              iVar4 = create_ssl_objects(local_68, local_70, &local_58, &local_60, 0, 0);
                              iVar4 = test_true("test/sslapitest.c", 0x1e2e, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
                              if (iVar4 != 0) {
                                 iVar4 = create_ssl_connection(local_58, local_60, 0);
                                 if (iVar4 == 0) {
                                    pcVar12 = "tst % 2 == 1";
                                    uVar13 = 0x1e37;
                                    uVar11 = ( uint )((int)param_1 % 2 == 1);
                                 }
 else {
                                    pcVar12 = "tst % 2 == 0";
                                    uVar13 = 0x1e34;
                                    uVar11 = ~param_1 & 1;
                                 }

                                 iVar4 = test_true("test/sslapitest.c", uVar13, pcVar12, uVar11);
                                 bVar15 = iVar4 != 0;
                                 goto LAB_0011ef16;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_0011ef14:bVar15 = false;
   LAB_0011ef16:SRP_VBASE_free(vbase);
   vbase = (undefined8*)0x0;
   SSL_free(local_58);
   SSL_free(local_60);
   SSL_CTX_free(local_68);
   SSL_CTX_free(local_70);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar15;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint test_max_fragment_len_ext(int param_1) {
   char cVar1;
   byte bVar2;
   ushort uVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   undefined8 uVar7;
   SSL *s;
   BIO_METHOD *pBVar8;
   BIO *rbio;
   BIO *wbio;
   ulong uVar9;
   ulong uVar10;
   byte *pbVar11;
   char cVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   SSL_CTX *local_88;
   long local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (SSL_CTX*)0x0;
   uVar7 = TLS_client_method();
   iVar5 = create_ssl_ctx_pair(libctx, 0, uVar7, 0x301, 0, 0, &local_88, 0, 0);
   uVar6 = test_true("test/sslapitest.c", 0x1d09, "create_ssl_ctx_pair(libctx, NULL, TLS_client_method(), TLS1_VERSION, 0, NULL, &ctx, NULL, NULL)", iVar5 != 0);
   if (uVar6 == 0) goto LAB_0011f6aa;
   cVar1 = *(char*)( (long)&max_fragment_len_test + (long)param_1 );
   iVar5 = SSL_CTX_set_tlsext_max_fragment_length(local_88, cVar1);
   s = (SSL*)0x0;
   uVar6 = test_true("test/sslapitest.c", 0x1d0e, "SSL_CTX_set_tlsext_max_fragment_length( ctx, max_fragment_len_test[idx_tst])", iVar5 != 0);
   if (uVar6 != 0) {
      s = SSL_new(local_88);
      iVar5 = test_ptr("test/sslapitest.c", 0x1d13, &_LC1015, s);
      if (iVar5 != 0) {
         pBVar8 = BIO_s_mem();
         rbio = BIO_new(pBVar8);
         pBVar8 = BIO_s_mem();
         wbio = BIO_new(pBVar8);
         iVar5 = test_ptr("test/sslapitest.c", 0x1d18, &_LC284, rbio);
         if (( iVar5 == 0 ) || ( iVar5 = test_ptr("test/sslapitest.c", 0x1d18, &_LC286, wbio) ),iVar5 == 0) {
            BIO_free(rbio);
            BIO_free(wbio);
         }
 else {
            SSL_set_bio(s, rbio, wbio);
            iVar5 = SSL_connect(s);
            iVar5 = test_int_le("test/sslapitest.c", 0x1d20, "SSL_connect(con)", &_LC15, iVar5, 0);
            if (iVar5 != 0) {
               uVar9 = BIO_ctrl(wbio, 3, 0, &local_80);
               iVar5 = test_uint_gt("test/sslapitest.c", 0x1ccc, "len = BIO_get_mem_data(bio, (char **) &data)", &_LC15, uVar9 & 0xffffffff, 0);
               if (iVar5 == 0) {
                  LAB_0011fc00:cVar12 = '\0';
                  uVar7 = 0;
               }
 else {
                  local_78 = (undefined1[16])0x0;
                  local_68 = (undefined1[16])0x0;
                  local_58 = (undefined1[16])0x0;
                  iVar5 = test_long_gt("test/sslapitest.c", 0x1cd3, &_LC1018, &_LC15, uVar9, 0);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  if ((long)uVar9 < 0) {
                     test_true("test/sslapitest.c", 0x1cd4, "PACKET_buf_init(&pkt, data, len)", 0);
                     goto LAB_0011fc00;
                  }

                  local_78._8_8_ = uVar9;
                  iVar5 = test_true("test/sslapitest.c", 0x1cd4, "PACKET_buf_init(&pkt, data, len)", 1);
                  if (( iVar5 == 0 ) || ( uVar9 < 5 )) goto LAB_0011fc00;
                  pbVar11 = (byte*)( local_80 + 5 );
                  uVar13 = uVar9 - 5;
                  local_78._8_8_ = uVar13;
                  local_78._0_8_ = pbVar11;
                  if (uVar13 < 4) {
                     iVar5 = test_true("test/sslapitest.c", 0x1cd8, "PACKET_forward(&pkt, SSL3_HM_HEADER_LENGTH)", 0);
                     if (iVar5 != 0) {
                        uVar7 = 0;
                        goto LAB_0011f936;
                     }

                     goto LAB_0011fc00;
                  }

                  pbVar11 = (byte*)( local_80 + 9 );
                  uVar13 = uVar9 - 9;
                  local_78._8_8_ = uVar13;
                  local_78._0_8_ = pbVar11;
                  iVar5 = test_true("test/sslapitest.c", 0x1cd8, "PACKET_forward(&pkt, SSL3_HM_HEADER_LENGTH)", 1);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  if (uVar13 < 0x22) {
                     uVar7 = 0;
                  }
 else {
                     pbVar11 = (byte*)( local_80 + 0x2b );
                     uVar13 = uVar9 - 0x2b;
                     uVar7 = 1;
                     local_78._8_8_ = uVar13;
                     local_78._0_8_ = pbVar11;
                  }

                  LAB_0011f936:iVar5 = test_true("test/sslapitest.c", 0x1cda, "PACKET_forward(&pkt, CLIENT_VERSION_LEN + SSL3_RANDOM_SIZE)", uVar7);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  uVar7 = 0;
                  if (uVar13 != 0) {
                     uVar9 = ( ulong ) * pbVar11;
                     if (uVar9 <= uVar13 - 1) {
                        uVar7 = 1;
                        local_78._8_8_ = ( uVar13 - 1 ) - uVar9;
                        local_78._0_8_ = pbVar11 + 1 + uVar9;
                        local_68[8] = *pbVar11;
                        local_68._0_8_ = pbVar11 + 1;
                        local_68._9_7_ = 0;
                     }

                  }

                  iVar5 = test_true("test/sslapitest.c", 0x1cdd, "PACKET_get_length_prefixed_1(&pkt, &pkt2)", uVar7);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  if ((ulong)local_78._8_8_ < 2) {
                     LAB_0011fc8d:uVar7 = 0;
                  }
 else {
                     uVar3 = *(ushort*)local_78._0_8_ << 8 | *(ushort*)local_78._0_8_ >> 8;
                     uVar9 = (ulong)uVar3;
                     if (local_78._8_8_ - 2 < uVar9) goto LAB_0011fc8d;
                     local_68._0_8_ = local_78._0_8_ + 2;
                     local_78._8_8_ = ( local_78._8_8_ - 2 ) - uVar9;
                     local_78._0_8_ = local_68._0_8_ + uVar9;
                     local_68._8_2_ = uVar3;
                     local_68._10_6_ = 0;
                     uVar7 = 1;
                  }

                  iVar5 = test_true("test/sslapitest.c", 0x1cdf, "PACKET_get_length_prefixed_2(&pkt, &pkt2)", uVar7);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  if (local_78._8_8_ == 0) {
                     LAB_0011fc94:uVar7 = 0;
                  }
 else {
                     bVar2 = *(byte*)local_78._0_8_;
                     uVar9 = (ulong)bVar2;
                     if (local_78._8_8_ - 1 < uVar9) goto LAB_0011fc94;
                     local_68._0_8_ = local_78._0_8_ + 1;
                     uVar7 = 1;
                     local_78._8_8_ = ( local_78._8_8_ - 1 ) - uVar9;
                     local_78._0_8_ = (byte*)( local_68._0_8_ + uVar9 );
                     local_68[8] = bVar2;
                     local_68._9_7_ = 0;
                  }

                  iVar5 = test_true("test/sslapitest.c", 0x1ce1, "PACKET_get_length_prefixed_1(&pkt, &pkt2)", uVar7);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  if ((ulong)local_78._8_8_ < 2) {
                     uVar7 = 0;
                  }
 else {
                     uVar9 = local_78._8_8_ - 2;
                     uVar7 = 0;
                     if (uVar9 == ( ushort )(*(ushort*)local_78._0_8_ << 8 | *(ushort*)local_78._0_8_ >> 8)) {
                        uVar7 = 1;
                        local_68._8_8_ = uVar9;
                        local_68._0_8_ = (ushort*)( local_78._0_8_ + 2 );
                        local_78._8_8_ = 0;
                        local_78._0_8_ = local_78._0_8_ + 2 + uVar9;
                     }

                  }

                  iVar5 = test_true("test/sslapitest.c", 0x1ce3, "PACKET_as_length_prefixed_2(&pkt, &pkt2)", uVar7);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  uVar3 = 0;
                  uVar9 = local_68._8_8_;
                  do {
                     if (uVar9 == 0) goto LAB_0011fc00;
                     if (uVar9 == 1) {
                        iVar5 = test_true("test/sslapitest.c", 0x1ce8, "PACKET_get_net_2(&pkt2, &type)", 0);
                        if (iVar5 == 0) goto LAB_0011fc00;
                        uVar7 = 0;
                        uVar13 = uVar9;
                     }
 else {
                        uVar13 = uVar9 - 2;
                        uVar3 = *(ushort*)local_68._0_8_;
                        local_68._8_8_ = uVar13;
                        local_68._0_8_ = (ushort*)( local_68._0_8_ + 2 );
                        uVar3 = uVar3 << 8 | uVar3 >> 8;
                        iVar5 = test_true("test/sslapitest.c", 0x1ce8, "PACKET_get_net_2(&pkt2, &type)", 1);
                        if (iVar5 == 0) goto LAB_0011fc00;
                        if (1 < uVar13) {
                           uVar4 = *(ushort*)local_68._0_8_ << 8 | *(ushort*)local_68._0_8_ >> 8;
                           uVar10 = (ulong)uVar4;
                           if (uVar10 <= uVar9 - 4) {
                              uVar13 = ( uVar9 - 4 ) - uVar10;
                              local_58._8_2_ = uVar4;
                              local_58._0_8_ = (ushort*)( local_68._0_8_ + 2 );
                              local_58._10_6_ = 0;
                              local_68._8_8_ = uVar13;
                              local_68._0_8_ = local_68._0_8_ + 2 + uVar10;
                              uVar7 = 1;
                              goto LAB_0011fb96;
                           }

                        }

                        uVar7 = 0;
                     }

                     LAB_0011fb96:iVar5 = test_true("test/sslapitest.c", 0x1ce9, "PACKET_get_length_prefixed_2(&pkt2, &pkt3)", uVar7);
                     if (iVar5 == 0) goto LAB_0011fc00;
                     uVar9 = uVar13;
                  }
 while ( uVar3 != 1 );
                  uVar7 = local_58._8_8_;
                  iVar5 = test_uint_ne("test/sslapitest.c", 0x1ced, "PACKET_remaining(&pkt3)", &_LC15, local_58._8_8_ & 0xffffffff, 0);
                  if (iVar5 == 0) goto LAB_0011fc00;
                  if (uVar7 == 0) {
                     cVar12 = '\0';
                  }
 else {
                     cVar12 = *(char*)local_58._0_8_;
                  }

                  iVar5 = test_true("test/sslapitest.c", 0x1cee, "PACKET_get_1(&pkt3, &MFL_code)", uVar7 != 0);
                  uVar7 = 1;
                  if (iVar5 == 0) goto LAB_0011fc00;
               }

               iVar5 = test_true("test/sslapitest.c", 0x1d25, "get_MFL_from_client_hello(wbio, &MFL_mode)", uVar7);
               if (iVar5 != 0) {
                  iVar5 = test_true("test/sslapitest.c", 0x1d28, "max_fragment_len_test[idx_tst] == MFL_mode", cVar1 == cVar12);
                  uVar6 = ( uint )(iVar5 != 0);
                  goto LAB_0011f738;
               }

            }

         }

      }

      uVar6 = 0;
   }

   LAB_0011f738:SSL_free(s);
   SSL_CTX_free(local_88);
   LAB_0011f6aa:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
bool execute_test_large_message_constprop_0(undefined8 param_1, undefined8 param_2, undefined4 param_3, int param_4) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   SSL_CTX *local_40;
   SSL_CTX *local_38;
   SSL *local_30;
   SSL *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (SSL_CTX*)0x0;
   local_38 = (SSL_CTX*)0x0;
   local_30 = (SSL*)0x0;
   local_28 = (SSL*)0x0;
   create_ssl_ctx_pair(libctx, param_1, param_2, param_3, 0, &local_38, &local_40, cert, privkey);
   iVar1 = test_true("test/sslapitest.c", 0x3c9, "create_ssl_ctx_pair(libctx, smeth, cmeth, min_version, max_version, &sctx, &cctx, cert, privkey)");
   if (iVar1 != 0) {
      if (param_4 != 0) {
         SSL_CTX_ctrl(local_40, 0x29, 1, (void*)0x0);
      }

      iVar1 = ssl_ctx_add_large_cert_chain(libctx, local_38, cert);
      if (iVar1 != 0) {
         iVar1 = create_ssl_objects(local_38, local_40, &local_28, &local_30, 0, 0);
         iVar1 = test_true("test/sslapitest.c", 0x3e6, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = create_ssl_connection(local_28, local_30, 0);
            iVar1 = test_true("test/sslapitest.c", 1000, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar1 != 0);
            if (iVar1 != 0) {
               iVar1 = SSL_clear(local_28);
               iVar1 = test_true("test/sslapitest.c", 0x3f0, "SSL_clear(serverssl)", iVar1 != 0);
               bVar2 = iVar1 != 0;
               goto LAB_0011fdda;
            }

         }

      }

   }

   bVar2 = false;
   LAB_0011fdda:SSL_free(local_28);
   SSL_free(local_30);
   SSL_CTX_free(local_38);
   SSL_CTX_free(local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_large_message_tls(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   uVar1 = TLS_client_method();
   uVar2 = TLS_server_method();
   execute_test_large_message_constprop_0(uVar2, uVar1, 0x301, 0);
   return;
}
void test_large_message_tls_read_ahead(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   uVar1 = TLS_client_method();
   uVar2 = TLS_server_method();
   execute_test_large_message_constprop_0(uVar2, uVar1, 0x301, 1);
   return;
}
void test_large_message_dtls(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   uVar1 = DTLS_client_method();
   uVar2 = DTLS_server_method();
   execute_test_large_message_constprop_0(uVar2, uVar1, 0xfeff, 0);
   return;
}
undefined8 compare_hex_encoded_buffer_constprop_0(long param_1, long param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   char local_43;
   char local_42;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = test_size_t_eq("test/sslapitest.c", 0xbf, "raw_length * 2", "hex_length", param_3 * 2, 0x40);
   if (iVar1 == 0) {
      LAB_0012006f:uVar2 = 1;
   }
 else {
      lVar3 = 0;
      if (param_3 != 0) {
         do {
            BIO_snprintf(&local_43, 3, "%02x", ( ulong ) * (byte*)( param_2 + lVar3 ));
            iVar1 = test_int_eq("test/sslapitest.c", 0xc4, "hexed[0]", "hex_encoded[j]", (int)local_43, (int)*(char*)( param_1 + lVar3 * 2 ));
            if (( iVar1 == 0 ) || ( iVar1 = test_int_eq("test/sslapitest.c", 0xc5, "hexed[1]", "hex_encoded[j + 1]", (int)local_42, (int)*(char*)( param_1 + 1 + lVar3 * 2 )) ),iVar1 == 0) goto LAB_0012006f;
            lVar3 = lVar3 + 1;
         }
 while ( ( param_3 != lVar3 ) && ( lVar3 != 0x20 ) );
      }

      uVar2 = 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
undefined8 generate_stateless_cookie_callback(undefined8 param_1, char *param_2, undefined8 *param_3) {
   *(undefined8*)param_2 = cookie_magic_value._0_8_;
   *(undefined4*)( param_2 + 8 ) = cookie_magic_value._8_4_;
   *param_3 = 0xc;
   return 1;
}
bool test_keylog_output(char *param_1, undefined8 param_2, undefined8 param_3, undefined4 *param_4) {
   int iVar1;
   char *pcVar2;
   undefined8 uVar3;
   size_t sVar4;
   ulong uVar5;
   undefined4 uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   int local_e8;
   int local_e4;
   int local_d0;
   int local_cc;
   int local_c4;
   int local_b8;
   int local_b4;
   int local_b0;
   int local_ac;
   char local_9b;
   char local_9a;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   pcVar2 = strtok(param_1, " \n");
   if (pcVar2 == (char*)0x0) {
      local_ac = 0;
      local_e8 = 0;
      local_b0 = 0;
      local_b4 = 0;
      local_b8 = 0;
      local_c4 = 0;
      local_cc = 0;
      local_e4 = 0;
      local_d0 = 0;
   }
 else {
      local_ac = 0;
      local_b0 = 0;
      local_b4 = 0;
      local_b8 = 0;
      local_c4 = 0;
      local_cc = 0;
      local_e4 = 0;
      local_d0 = 0;
      local_e8 = 0;
      uVar7 = 0x30;
      do {
         iVar1 = strcmp(pcVar2, "RSA");
         if (iVar1 == 0) {
            pcVar2 = strtok((char*)0x0, " \n");
            iVar1 = test_ptr("test/sslapitest.c", 0xe7, "token = strtok(NULL, \" \\n\")", pcVar2);
            if (iVar1 == 0) goto LAB_00120398;
            sVar4 = strlen(pcVar2);
            iVar1 = test_size_t_eq("test/sslapitest.c", 0xe9, "strlen(token)", &_LC1041, sVar4, 0x10);
            if (iVar1 == 0) goto LAB_00120398;
            pcVar2 = strtok((char*)0x0, " \n");
            iVar1 = test_ptr("test/sslapitest.c", 0xeb, "token = strtok(NULL, \" \\n\")", pcVar2);
            if (iVar1 == 0) goto LAB_00120398;
            local_e8 = local_e8 + 1;
         }
 else {
            iVar1 = strcmp(pcVar2, "CLIENT_RANDOM");
            if (iVar1 == 0) {
               uVar3 = SSL_get_client_random(param_2, local_98, 0x20);
               iVar1 = test_size_t_eq("test/sslapitest.c", 0xfb, "client_random_size", "SSL3_RANDOM_SIZE", uVar3, 0x20);
               if (iVar1 == 0) goto LAB_00120398;
               pcVar2 = strtok((char*)0x0, " \n");
               iVar1 = test_ptr("test/sslapitest.c", 0xfe, "token = strtok(NULL, \" \\n\")", pcVar2);
               if (iVar1 == 0) goto LAB_00120398;
               sVar4 = strlen(pcVar2);
               iVar1 = test_size_t_eq("test/sslapitest.c", 0x100, "strlen(token)", &_LC1046, sVar4, 0x40);
               if (iVar1 == 0) goto LAB_00120398;
               iVar1 = compare_hex_encoded_buffer_constprop_0(pcVar2, local_98, uVar3);
               iVar1 = test_false("test/sslapitest.c", 0x102, "compare_hex_encoded_buffer(token, 64, actual_client_random, client_random_size)", iVar1 != 0);
               if (iVar1 == 0) goto LAB_00120398;
               pcVar2 = strtok((char*)0x0, " \n");
               iVar1 = test_ptr("test/sslapitest.c", 0x107, "token = strtok(NULL, \" \\n\")", pcVar2);
               if (iVar1 == 0) goto LAB_00120398;
               uVar7 = SSL_SESSION_get_master_key(param_3, local_78, uVar7);
               iVar1 = test_size_t_ne("test/sslapitest.c", 0x10c, "master_key_size", &_LC15, uVar7, 0);
               if (iVar1 == 0) goto LAB_00120398;
               sVar4 = strlen(pcVar2);
               iVar1 = test_size_t_eq("test/sslapitest.c", 0xbf, "raw_length * 2", "hex_length", uVar7 * 2, sVar4);
               if (iVar1 == 0) {
                  LAB_00120730:uVar6 = 1;
               }
 else {
                  uVar6 = 0;
                  if (( uVar7 != 0 ) && ( 1 < sVar4 )) {
                     uVar5 = 0;
                     do {
                        BIO_snprintf(&local_9b, 3, "%02x", (ulong)(byte)local_78[uVar5]);
                        iVar1 = test_int_eq("test/sslapitest.c", 0xc4, "hexed[0]", "hex_encoded[j]", (int)local_9b, (int)pcVar2[uVar5 * 2]);
                        if (( iVar1 == 0 ) || ( iVar1 = test_int_eq("test/sslapitest.c", 0xc5, "hexed[1]", "hex_encoded[j + 1]", (int)local_9a, (int)pcVar2[uVar5 * 2 + 1]) ),iVar1 == 0) goto LAB_00120730;
                     }
 while ( ( uVar7 != uVar5 + 1 ) && ( bVar8 = uVar5 != sVar4 - 2 >> 1 ),uVar5 = uVar5 + 1,bVar8 );
                  }

               }

               iVar1 = test_false("test/sslapitest.c", 0x10e, "compare_hex_encoded_buffer(token, strlen(token), actual_master_key, master_key_size)", uVar6);
               if (iVar1 == 0) goto LAB_00120398;
               local_d0 = local_d0 + 1;
            }
 else {
               iVar1 = strcmp(pcVar2, "CLIENT_EARLY_TRAFFIC_SECRET");
               if (iVar1 == 0) {
                  local_e4 = local_e4 + 1;
               }
 else {
                  iVar1 = strcmp(pcVar2, "CLIENT_HANDSHAKE_TRAFFIC_SECRET");
                  if (iVar1 == 0) {
                     local_cc = local_cc + 1;
                  }
 else {
                     iVar1 = strcmp(pcVar2, "SERVER_HANDSHAKE_TRAFFIC_SECRET");
                     if (iVar1 == 0) {
                        local_c4 = local_c4 + 1;
                     }
 else {
                        iVar1 = strcmp(pcVar2, "CLIENT_TRAFFIC_SECRET_0");
                        if (iVar1 == 0) {
                           local_b8 = local_b8 + 1;
                        }
 else {
                           iVar1 = strcmp(pcVar2, "SERVER_TRAFFIC_SECRET_0");
                           if (( ( iVar1 != 0 ) && ( iVar1 = strcmp(pcVar2, "EARLY_EXPORTER_SECRET") ),iVar1 != 0 )) {
                              test_info("test/sslapitest.c", 0x141, "Unexpected token %s\n", pcVar2);
                              goto LAB_00120398;
                           }

                           iVar1 = strcmp(pcVar2, "SERVER_TRAFFIC_SECRET_0");
                           if (iVar1 == 0) {
                              local_b4 = local_b4 + 1;
                           }
 else {
                              iVar1 = strcmp(pcVar2, "EARLY_EXPORTER_SECRET");
                              if (iVar1 == 0) {
                                 local_b0 = local_b0 + 1;
                              }
 else {
                                 iVar1 = strcmp(pcVar2, "EXPORTER_SECRET");
                                 local_ac = local_ac + ( uint )(iVar1 == 0);
                              }

                           }

                        }

                     }

                  }

               }

               uVar3 = SSL_get_client_random(param_2, local_98, 0x20);
               iVar1 = test_size_t_eq("test/sslapitest.c", 0x132, "client_random_size", "SSL3_RANDOM_SIZE", uVar3, 0x20);
               if (iVar1 == 0) goto LAB_00120398;
               pcVar2 = strtok((char*)0x0, " \n");
               iVar1 = test_ptr("test/sslapitest.c", 0x135, "token = strtok(NULL, \" \\n\")", pcVar2);
               if (iVar1 == 0) goto LAB_00120398;
               sVar4 = strlen(pcVar2);
               iVar1 = test_size_t_eq("test/sslapitest.c", 0x137, "strlen(token)", &_LC1046, sVar4, 0x40);
               if (iVar1 == 0) goto LAB_00120398;
               iVar1 = compare_hex_encoded_buffer_constprop_0(pcVar2, local_98, uVar3);
               iVar1 = test_false("test/sslapitest.c", 0x139, "compare_hex_encoded_buffer(token, 64, actual_client_random, client_random_size)", iVar1 != 0);
               if (iVar1 == 0) goto LAB_00120398;
               pcVar2 = strtok((char*)0x0, " \n");
               iVar1 = test_ptr("test/sslapitest.c", 0x13e, "token = strtok(NULL, \" \\n\")", pcVar2);
               if (iVar1 == 0) goto LAB_00120398;
            }

         }

         pcVar2 = strtok((char*)0x0, " \n");
      }
 while ( pcVar2 != (char*)0x0 );
   }

   iVar1 = test_size_t_eq("test/sslapitest.c", 0x147, "rsa_key_exchange_count", "expected->rsa_key_exchange_count", local_e8, *param_4);
   if (( ( ( ( iVar1 == 0 ) || ( iVar1 = test_size_t_eq("test/sslapitest.c", 0x149, "master_secret_count", "expected->master_secret_count", local_d0, param_4[1]) ),iVar1 == 0 ) ) || ( ( iVar1 = test_size_t_eq("test/sslapitest.c", 0x14b, "client_early_secret_count", "expected->client_early_secret_count", local_e4, param_4[2]) ),iVar1 == 0 || ( ( iVar1 = test_size_t_eq("test/sslapitest.c", 0x14d, "client_handshake_secret_count", "expected->client_handshake_secret_count", local_cc, param_4[3]) ),iVar1 == 0 || ( iVar1 = test_size_t_eq("test/sslapitest.c", 0x14f, "server_handshake_secret_count", "expected->server_handshake_secret_count", local_c4, param_4[4]) ),iVar1 == 0 ) ) )) {
      LAB_00120398:bVar8 = false;
   }
 else {
      iVar1 = test_size_t_eq("test/sslapitest.c", 0x157, "exporter_secret_count", "expected->exporter_secret_count", local_ac, param_4[8]);
      bVar8 = iVar1 != 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint test_keylog_no_master_key(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   undefined4 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   code *pcVar8;
   SSL_SESSION *pSVar9;
   SSL_SESSION *pSVar10;
   long lVar11;
   undefined8 *puVar12;
   long in_FS_OFFSET;
   byte bVar13;
   SSL_CTX *local_98;
   SSL_CTX *local_90;
   SSL *local_88;
   SSL *local_80;
   undefined1 local_78[8];
   undefined1 local_70[8];
   undefined8 local_68;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined8 uStack_54;
   undefined4 uStack_4c;
   undefined4 local_48;
   undefined1 local_41;
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   bVar13 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   uStack_60 = 0;
   uStack_5c = 0;
   local_58 = 0;
   uStack_54 = 0;
   uStack_4c = 0;
   local_98 = (SSL_CTX*)0x0;
   local_90 = (SSL_CTX*)0x0;
   local_88 = (SSL*)0x0;
   local_80 = (SSL*)0x0;
   puVar12 = (undefined8*)&client_log_buffer;
   for (lVar11 = 0x100; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
   }

   local_48 = 0;
   _client_log_buffer_index = 0;
   _server_log_buffer_index = 0;
   error_writing_log = 0;
   *(undefined1*)puVar12 = 0;
   puVar12 = (undefined8*)&server_log_buffer;
   for (lVar11 = 0x100; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
   }

   *(undefined1*)puVar12 = 0;
   uVar6 = TLS_client_method();
   uVar7 = TLS_server_method();
   iVar3 = create_ssl_ctx_pair(libctx, uVar7, uVar6, 0x301, 0, &local_90, &local_98, uVar2, uVar1);
   iVar3 = test_true("test/sslapitest.c", 0x1c1, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      iVar3 = SSL_CTX_set_max_early_data(local_90, 0x4000);
      iVar3 = test_true("test/sslapitest.c", 0x1c4, "SSL_CTX_set_max_early_data(sctx, SSL3_RT_MAX_PLAIN_LENGTH)", iVar3 != 0);
      if (iVar3 != 0) {
         lVar11 = SSL_CTX_get_keylog_callback(local_98);
         iVar3 = test_true("test/sslapitest.c", 0x1c8, "SSL_CTX_get_keylog_callback(cctx) == NULL", lVar11 == 0);
         if (iVar3 == 0) {
            LAB_00120b50:uVar4 = 0;
            pSVar9 = (SSL_SESSION*)0x0;
         }
 else {
            lVar11 = SSL_CTX_get_keylog_callback(local_90);
            iVar3 = test_true("test/sslapitest.c", 0x1c9, "SSL_CTX_get_keylog_callback(sctx) == NULL", lVar11 == 0);
            if (iVar3 == 0) goto LAB_00120b50;
            SSL_CTX_set_keylog_callback(local_98, client_keylog_callback);
            pcVar8 = (code*)SSL_CTX_get_keylog_callback(local_98);
            iVar3 = test_true("test/sslapitest.c", 0x1cd, "SSL_CTX_get_keylog_callback(cctx) == client_keylog_callback", pcVar8 == client_keylog_callback);
            if (iVar3 == 0) goto LAB_00120b50;
            SSL_CTX_set_keylog_callback(local_90, server_keylog_callback);
            pcVar8 = (code*)SSL_CTX_get_keylog_callback(local_90);
            iVar3 = test_true("test/sslapitest.c", 0x1d2, "SSL_CTX_get_keylog_callback(sctx) == server_keylog_callback", pcVar8 == server_keylog_callback);
            if (iVar3 == 0) goto LAB_00120b50;
            iVar3 = create_ssl_objects(local_90, local_98, &local_80, &local_88, 0, 0);
            iVar3 = test_true("test/sslapitest.c", 0x1d7, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
            if (iVar3 == 0) goto LAB_00120b50;
            iVar3 = create_ssl_connection(local_80, local_88, 0);
            iVar3 = test_true("test/sslapitest.c", 0x1d9, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
            if (iVar3 == 0) goto LAB_00120b50;
            iVar3 = test_false("test/sslapitest.c", 0x1db, "error_writing_log", error_writing_log != 0);
            if (iVar3 == 0) goto LAB_00120b50;
            local_48 = 1;
            uStack_5c = (undefined4)_LC1092;
            local_58 = ( undefined4 )((ulong)_LC1092 >> 0x20);
            uStack_54 = _UNK_0013dc88;
            pSVar9 = SSL_get_session(local_88);
            iVar3 = test_keylog_output(&client_log_buffer, local_88, pSVar9, &local_68);
            iVar3 = test_true("test/sslapitest.c", 0x1e8, "test_keylog_output(client_log_buffer, clientssl, SSL_get_session(clientssl), &expected)", iVar3 != 0);
            if (iVar3 == 0) goto LAB_00120b50;
            pSVar9 = SSL_get_session(local_80);
            iVar3 = test_keylog_output(&server_log_buffer, local_80, pSVar9, &local_68);
            iVar3 = test_true("test/sslapitest.c", 0x1ea, "test_keylog_output(server_log_buffer, serverssl, SSL_get_session(serverssl), &expected)", iVar3 != 0);
            if (iVar3 == 0) goto LAB_00120b50;
            pSVar9 = SSL_get1_session(local_88);
            SSL_shutdown(local_88);
            SSL_shutdown(local_80);
            SSL_free(local_80);
            SSL_free(local_88);
            local_88 = (SSL*)0x0;
            local_80 = (SSL*)0x0;
            puVar12 = (undefined8*)&client_log_buffer;
            for (lVar11 = 0x100; lVar11 != 0; lVar11 = lVar11 + -1) {
               *puVar12 = 0;
               puVar12 = puVar12 + (ulong)bVar13 * -2 + 1;
            }

            _client_log_buffer_index = 0;
            _server_log_buffer_index = 0;
            *(undefined1*)puVar12 = 0;
            puVar12 = (undefined8*)&server_log_buffer;
            for (lVar11 = 0x100; lVar11 != 0; lVar11 = lVar11 + -1) {
               *puVar12 = 0;
               puVar12 = puVar12 + (ulong)bVar13 * -2 + 1;
            }

            *(undefined1*)puVar12 = 0;
            iVar3 = create_ssl_objects(local_90, local_98, &local_80, &local_88, 0, 0);
            iVar3 = test_true("test/sslapitest.c", 0x1fd, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
            if (iVar3 == 0) {
               LAB_00120e2c:uVar4 = 0;
            }
 else {
               iVar3 = SSL_set_session(local_88, pSVar9);
               iVar3 = test_true("test/sslapitest.c", 0x1ff, "SSL_set_session(clientssl, sess)", iVar3 != 0);
               if (iVar3 == 0) goto LAB_00120e2c;
               iVar3 = SSL_write_early_data(local_88, 0, 0, local_70);
               uVar4 = test_true("test/sslapitest.c", 0x201, "SSL_write_early_data(clientssl, NULL, 0, &written)", iVar3 != 0);
               if (uVar4 != 0) {
                  uVar5 = SSL_read_early_data(local_80, &local_41, 1, local_78);
                  iVar3 = test_int_eq("test/sslapitest.c", 0x202, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_ERROR", uVar5, 0);
                  if (iVar3 != 0) {
                     uVar5 = SSL_get_early_data_status(local_80);
                     iVar3 = test_int_eq("test/sslapitest.c", 0x205, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_ACCEPTED", uVar5, 2);
                     if (iVar3 != 0) {
                        iVar3 = create_ssl_connection(local_80, local_88, 0);
                        iVar3 = test_true("test/sslapitest.c", 0x207, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                        if (iVar3 != 0) {
                           iVar3 = SSL_session_reused(local_88);
                           iVar3 = test_true("test/sslapitest.c", 0x209, "SSL_session_reused(clientssl)", iVar3 != 0);
                           if (iVar3 != 0) {
                              uStack_60 = 1;
                              uStack_4c = 1;
                              pSVar10 = SSL_get_session(local_88);
                              iVar3 = test_keylog_output(&client_log_buffer, local_88, pSVar10, &local_68);
                              iVar3 = test_true("test/sslapitest.c", 0x20f, "test_keylog_output(client_log_buffer, clientssl, SSL_get_session(clientssl), &expected)", iVar3 != 0);
                              if (iVar3 != 0) {
                                 pSVar10 = SSL_get_session(local_80);
                                 iVar3 = test_keylog_output(&server_log_buffer, local_80, pSVar10, &local_68);
                                 iVar3 = test_true("test/sslapitest.c", 0x211, "test_keylog_output(server_log_buffer, serverssl, SSL_get_session(serverssl), &expected)", iVar3 != 0);
                                 uVar4 = ( uint )(iVar3 != 0);
                                 goto LAB_00120b55;
                              }

                           }

                        }

                     }

                  }

                  goto LAB_00120e2c;
               }

            }

         }

         LAB_00120b55:SSL_SESSION_free(pSVar9);
         SSL_free(local_80);
         SSL_free(local_88);
         SSL_CTX_free(local_90);
         SSL_CTX_free(local_98);
         goto LAB_00120acf;
      }

   }

   uVar4 = 0;
   LAB_00120acf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint test_keylog(void) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   uint uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   code *pcVar8;
   SSL_SESSION *pSVar9;
   long lVar10;
   undefined8 *puVar11;
   long in_FS_OFFSET;
   SSL_CTX *local_78;
   SSL_CTX *local_70;
   SSL *local_68;
   SSL *local_60;
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined4 local_38;
   long local_30;
   uVar3 = cert;
   uVar2 = privkey;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_78 = (SSL_CTX*)0x0;
   local_70 = (SSL_CTX*)0x0;
   local_68 = (SSL*)0x0;
   local_60 = (SSL*)0x0;
   puVar11 = (undefined8*)&client_log_buffer;
   for (lVar10 = 0x100; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
   }

   local_38 = 0;
   _client_log_buffer_index = 0;
   _server_log_buffer_index = 0;
   error_writing_log = 0;
   *(undefined1*)puVar11 = 0;
   puVar11 = (undefined8*)&server_log_buffer;
   for (lVar10 = 0x100; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
   }

   *(undefined1*)puVar11 = 0;
   uVar6 = TLS_client_method();
   uVar7 = TLS_server_method();
   iVar4 = create_ssl_ctx_pair(libctx, uVar7, uVar6, 0x301, 0, &local_70, &local_78, uVar3, uVar2);
   uVar5 = test_true("test/sslapitest.c", 0x16d, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar4 != 0);
   if (uVar5 == 0) goto LAB_00121157;
   SSL_CTX_set_options(local_78, 0x20000000);
   SSL_CTX_set_options(local_70, 0x20000000);
   iVar4 = SSL_CTX_set_cipher_list(local_78, "RSA");
   iVar4 = test_true("test/sslapitest.c", 0x178, "SSL_CTX_set_cipher_list(cctx, \"RSA\")", iVar4 != 0);
   if (iVar4 == 0) {
      LAB_001211f5:uVar5 = 0;
   }
 else {
      lVar10 = SSL_CTX_get_keylog_callback(local_78);
      iVar4 = test_true("test/sslapitest.c", 0x17b, "SSL_CTX_get_keylog_callback(cctx) == NULL", lVar10 == 0);
      if (iVar4 == 0) goto LAB_001211f5;
      lVar10 = SSL_CTX_get_keylog_callback(local_70);
      iVar4 = test_true("test/sslapitest.c", 0x17c, "SSL_CTX_get_keylog_callback(sctx) == NULL", lVar10 == 0);
      if (iVar4 == 0) goto LAB_001211f5;
      SSL_CTX_set_keylog_callback(local_78, client_keylog_callback);
      pcVar8 = (code*)SSL_CTX_get_keylog_callback(local_78);
      iVar4 = test_true("test/sslapitest.c", 0x17f, "SSL_CTX_get_keylog_callback(cctx) == client_keylog_callback", pcVar8 == client_keylog_callback);
      if (iVar4 == 0) goto LAB_001211f5;
      SSL_CTX_set_keylog_callback(local_70, server_keylog_callback);
      pcVar8 = (code*)SSL_CTX_get_keylog_callback(local_70);
      iVar4 = test_true("test/sslapitest.c", 0x183, "SSL_CTX_get_keylog_callback(sctx) == server_keylog_callback", pcVar8 == server_keylog_callback);
      if (iVar4 == 0) goto LAB_001211f5;
      iVar4 = create_ssl_objects(local_70, local_78, &local_60, &local_68, 0, 0);
      iVar4 = test_true("test/sslapitest.c", 0x188, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_001211f5;
      iVar4 = create_ssl_connection(local_60, local_68, 0);
      iVar4 = test_true("test/sslapitest.c", 0x18a, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_001211f5;
      iVar4 = test_false("test/sslapitest.c", 0x18c, "error_writing_log", error_writing_log != 0);
      if (iVar4 == 0) goto LAB_001211f5;
      iVar4 = test_int_gt("test/sslapitest.c", 0x18d, "client_log_buffer_index", &_LC15, _client_log_buffer_index & 0xffffffff, 0);
      if (iVar4 == 0) goto LAB_001211f5;
      iVar4 = test_int_gt("test/sslapitest.c", 0x18e, "server_log_buffer_index", &_LC15, _server_log_buffer_index & 0xffffffff, 0);
      if (iVar4 == 0) goto LAB_001211f5;
      local_58._0_8_ = _LC1092;
      pSVar9 = SSL_get_session(local_68);
      iVar4 = test_keylog_output(&client_log_buffer, local_68, pSVar9, local_58);
      iVar4 = test_true("test/sslapitest.c", 0x199, "test_keylog_output(client_log_buffer, clientssl, SSL_get_session(clientssl), &expected)", iVar4 != 0);
      if (iVar4 == 0) goto LAB_001211f5;
      auVar1._12_4_ = 0;
      auVar1._0_12_ = local_58._4_12_;
      local_58 = auVar1 << 0x20;
      pSVar9 = SSL_get_session(local_60);
      iVar4 = test_keylog_output(&server_log_buffer, local_60, pSVar9, local_58);
      iVar4 = test_true("test/sslapitest.c", 0x19e, "test_keylog_output(server_log_buffer, serverssl, SSL_get_session(serverssl), &expected)", iVar4 != 0);
      uVar5 = ( uint )(iVar4 != 0);
   }

   SSL_free(local_60);
   SSL_free(local_68);
   SSL_CTX_free(local_70);
   SSL_CTX_free(local_78);
   LAB_00121157:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool ed_gen_cb(SSL *param_1) {
   SSL_SESSION *pSVar1;
   long lVar2;
   ulong uVar3;
   pSVar1 = SSL_get_session(param_1);
   if (pSVar1 == (SSL_SESSION*)0x0) {
      return false;
   }

   if (artificial_ticket_time == 0) {
      return true;
   }

   artificial_ticket_time = artificial_ticket_time + -1;
   lVar2 = SSL_SESSION_get_time_ex(pSVar1);
   uVar3 = lVar2 * 1000000000;
   if (uVar3 < 10000000000) {
      uVar3 = 10000000000;
   }

   lVar2 = SSL_SESSION_set_time_ex(pSVar1, ( uVar3 - 10000000000 ) / 1000000000);
   return lVar2 != 0;
}
undefined8 alert_cb(SSL *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   undefined8 uVar4;
   puVar2 = (undefined4*)SSL_get_ex_data(param_1, 0);
   iVar1 = SSL_is_server(param_1);
   puVar3 = &clientquicdata;
   if (iVar1 != 0) {
      puVar3 = &serverquicdata;
   }

   uVar4 = test_true("test/sslapitest.c", 0x3146, "comparedata == data", puVar2 == puVar3);
   if ((int)uVar4 != 0) {
      *(undefined4*)( param_3 + 0x2190 ) = 1;
      return 1;
   }

   *(undefined4*)( param_3 + 0x2194 ) = 1;
   return uVar4;
}
undefined8 crypto_recv_rcd_cb(SSL *param_1, long *param_2, undefined8 *param_3, long param_4) {
   uint uVar1;
   int iVar2;
   undefined4 *puVar3;
   undefined4 *puVar4;
   undefined8 uVar5;
   puVar3 = (undefined4*)SSL_get_ex_data(param_1, 0);
   iVar2 = SSL_is_server(param_1);
   puVar4 = &clientquicdata;
   if (iVar2 != 0) {
      puVar4 = &serverquicdata;
   }

   uVar5 = test_true("test/sslapitest.c", 0x3146, "comparedata == data", puVar3 == puVar4);
   if ((int)uVar5 != 0) {
      uVar1 = *(uint*)( param_4 + 8 );
      *param_3 = *(undefined8*)( param_4 + 0x2010 + (ulong)uVar1 * 8 );
      *param_2 = param_4 + 0x10 + (ulong)uVar1 * 0x800;
      return 1;
   }

   *(undefined4*)( param_4 + 0x2194 ) = 1;
   return uVar5;
}
undefined8 got_transport_params_cb(SSL *param_1, void *param_2, size_t param_3, long param_4) {
   int iVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   puVar2 = (undefined4*)SSL_get_ex_data(param_1, 0);
   iVar1 = SSL_is_server(param_1);
   puVar3 = &clientquicdata;
   if (iVar1 != 0) {
      puVar3 = &serverquicdata;
   }

   iVar1 = test_true("test/sslapitest.c", 0x3146, "comparedata == data", puVar2 == puVar3);
   if (iVar1 != 0) {
      iVar1 = test_size_t_le("test/sslapitest.c", 0x31c4, "params_len", "sizeof(data->params)", param_3, 3);
      if (iVar1 != 0) {
         memcpy((void*)( param_4 + 0x2180 ), param_2, param_3);
         *(size_t*)( param_4 + 0x2188 ) = param_3;
         return 1;
      }

   }

   *(undefined4*)( param_4 + 0x2194 ) = 1;
   return 0;
}
undefined8 crypto_send_cb(SSL *param_1, void *param_2, ulong param_3, size_t *param_4, long *param_5) {
   long *plVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   undefined8 uVar7;
   ulong __n;
   lVar2 = *param_5;
   lVar3 = *(long*)( lVar2 + 0x2010 + ( ulong ) * (uint*)( (long)param_5 + 0xc ) * 8 );
   puVar5 = (undefined4*)SSL_get_ex_data(param_1, 0);
   iVar4 = SSL_is_server(param_1);
   puVar6 = &clientquicdata;
   if (iVar4 != 0) {
      puVar6 = &serverquicdata;
   }

   uVar7 = test_true("test/sslapitest.c", 0x3146, "comparedata == data", puVar5 == puVar6);
   if ((int)uVar7 != 0) {
      __n = 0x800 - lVar3;
      if (param_3 < __n) {
         __n = param_3;
      }

      if (__n == 0) {
         *param_4 = 0;
      }
 else {
         memcpy((void*)( ( ulong ) * (uint*)( (long)param_5 + 0xc ) * 0x800 + 0x10 + *(long*)( lVar2 + 0x2010 + ( ulong ) * (uint*)( (long)param_5 + 0xc ) * 8 ) + lVar2 ), param_2, __n);
         plVar1 = (long*)( lVar2 + 0x2010 + ( ulong ) * (uint*)( (long)param_5 + 0xc ) * 8 );
         *plVar1 = *plVar1 + __n;
         *param_4 = __n;
      }

      return 1;
   }

   *(undefined4*)( (long)param_5 + 0x2194 ) = 1;
   return uVar7;
}
undefined8 crypto_release_rcd_cb(SSL *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   puVar2 = (undefined4*)SSL_get_ex_data(param_1, 0);
   iVar1 = SSL_is_server(param_1);
   puVar3 = &clientquicdata;
   if (iVar1 != 0) {
      puVar3 = &serverquicdata;
   }

   iVar1 = test_true("test/sslapitest.c", 0x3146, "comparedata == data", puVar2 == puVar3);
   if (iVar1 != 0) {
      if (*(int*)( param_3 + 0x2198 ) != 0) {
         *(undefined8*)( param_3 + 0x2194 ) = 1;
         return 0;
      }

      iVar1 = test_size_t_eq("test/sslapitest.c", 0x3187, "bytes_read", "data->rcd_data_len[data->renc_level]", param_2, *(undefined8*)( param_3 + 0x2010 + ( ulong ) * (uint*)( param_3 + 8 ) * 8 ));
      if (( iVar1 != 0 ) && ( iVar1 = test_size_t_gt("test/sslapitest.c", 0x3188, "bytes_read", &_LC15, param_2, 0) ),iVar1 != 0) {
         *(undefined8*)( param_3 + 0x2010 + ( ulong ) * (uint*)( param_3 + 8 ) * 8 ) = 0;
         return 1;
      }

   }

   *(undefined4*)( param_3 + 0x2194 ) = 1;
   return 0;
}
uint test_info_callback(uint param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined4 uVar4;
   uint uVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   SSL_SESSION *session;
   ulong uVar10;
   SSL *ssl;
   SSL_CTX *ctx;
   undefined8 uVar11;
   long in_FS_OFFSET;
   SSL_CTX *local_d0;
   SSL_CTX *local_c8;
   SSL *local_c0;
   SSL *local_b8;
   SSL_SESSION *local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined1 local_98[88];
   long local_40;
   uVar2 = cert;
   uVar1 = privkey;
   uVar11 = 0x303;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d0 = (SSL_CTX*)0x0;
   local_c8 = (SSL_CTX*)0x0;
   local_c0 = (SSL*)0x0;
   local_b8 = (SSL*)0x0;
   info_cb_failed = 0;
   info_cb_this_state = 0xffffffff;
   info_cb_offset = param_1;
   if ((int)param_1 < 2) {
      LAB_00121b1e:uVar7 = TLS_client_method();
      uVar8 = TLS_server_method();
      create_ssl_ctx_pair(libctx, uVar8, uVar7, uVar11, uVar11, &local_c8, &local_d0, uVar2, uVar1);
      iVar3 = test_true("test/sslapitest.c", 0x1f4a, "create_ssl_ctx_pair(libctx, TLS_server_method(), TLS_client_method(), tlsvers, tlsvers, &sctx, &cctx, cert, privkey)");
      if (iVar3 != 0) {
         lVar9 = SSL_CTX_ctrl(local_c8, 0x76, 1, (void*)0x0);
         iVar3 = test_true("test/sslapitest.c", 0x1f50, "SSL_CTX_set_dh_auto(sctx, 1)", lVar9 != 0);
         if (iVar3 != 0) {
            ctx = local_d0;
            if (( param_1 & 1 ) == 0) {
               ctx = local_c8;
            }

            SSL_CTX_set_info_callback(ctx, sslapi_info_callback);
            if (( (int)param_1 < 6 ) || ( iVar3 = iVar3 != 0 )) {
               iVar3 = create_ssl_objects(local_c8, local_d0, &local_b8, &local_c0, 0, 0);
               iVar3 = test_true("test/sslapitest.c", 0x1f5e, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
               if (iVar3 != 0) {
                  iVar3 = create_ssl_connection(local_b8, local_c0, 0);
                  iVar3 = test_true("test/sslapitest.c", 0x1f60, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                  if (( iVar3 != 0 ) && ( iVar3 = test_false("test/sslapitest.c", 0x1f62, "info_cb_failed", info_cb_failed != 0) ),iVar3 != 0) {
                     session = SSL_get1_session(local_c0);
                     SSL_shutdown(local_c0);
                     SSL_shutdown(local_b8);
                     SSL_free(local_b8);
                     SSL_free(local_c0);
                     local_c0 = (SSL*)0x0;
                     local_b8 = (SSL*)0x0;
                     iVar3 = create_ssl_objects(local_c8, local_d0, &local_b8, &local_c0, 0, 0);
                     iVar3 = test_true("test/sslapitest.c", 0x1f6f, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
                     if (iVar3 != 0) {
                        iVar3 = SSL_set_session(local_c0, session);
                        iVar3 = test_true("test/sslapitest.c", 0x1f71, "SSL_set_session(clientssl, clntsess)", iVar3 != 0);
                        if (iVar3 != 0) {
                           iVar3 = create_ssl_connection(local_b8, local_c0, 0);
                           iVar3 = test_true("test/sslapitest.c", 0x1f72, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
                           if (iVar3 != 0) {
                              iVar3 = SSL_session_reused(local_c0);
                              iVar3 = test_true("test/sslapitest.c", 0x1f74, "SSL_session_reused(clientssl)", iVar3 != 0);
                              if (iVar3 != 0) {
                                 iVar3 = test_false("test/sslapitest.c", 0x1f75, "info_cb_failed", info_cb_failed != 0);
                                 uVar5 = ( uint )(iVar3 != 0);
                                 goto LAB_00121ab5;
                              }

                           }

                        }

                     }

                     uVar5 = 0;
                     goto LAB_00121ab5;
                  }

               }

            }

         }

      }

      LAB_00121ab0:uVar5 = 0;
   }
 else {
      if (1 < param_1 - 4) {
         uVar11 = 0x304;
         goto LAB_00121b1e;
      }

      local_b0 = (SSL_SESSION*)0x0;
      iVar3 = setupearly_data_test(&local_d0, &local_c8, &local_c0, &local_b8, &local_b0, 0, 0x30);
      iVar3 = test_true("test/sslapitest.c", 0x1f24, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, 0, SHA384_DIGEST_LENGTH)", iVar3 != 0);
      if (iVar3 == 0) goto LAB_00121ab0;
      SSL_SESSION_free(local_b0);
      ssl = local_b8;
      if (param_1 != 4) {
         ssl = local_c0;
      }

      SSL_set_info_callback(ssl, sslapi_info_callback);
      uVar6 = ossl_time_now();
      iVar3 = SSL_write_early_data(local_c0, "Hello", 5, &local_a8);
      iVar3 = test_true("test/sslapitest.c", 0x1f31, "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)", iVar3 != 0);
      if (( iVar3 == 0 ) || ( iVar3 = test_size_t_eq("test/sslapitest.c", 0x1f33, "written", "strlen(MSG1)", local_a8, 5) ),iVar3 == 0) goto LAB_00121ab0;
      uVar4 = SSL_read_early_data(local_b8, local_98, 0x50, &local_a0);
      iVar3 = test_int_eq("test/sslapitest.c", 0x1f36, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_SUCCESS", uVar4, 1);
      if (iVar3 != 0) {
         iVar3 = test_mem_eq("test/sslapitest.c", 0x1f3d, &_LC569, &_LC80, "Hello", local_a0, local_98);
         if (iVar3 != 0) {
            uVar4 = SSL_get_early_data_status(local_b8);
            iVar3 = test_int_eq("test/sslapitest.c", 0x1f3e, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_ACCEPTED", uVar4, 2);
            if (iVar3 != 0) {
               iVar3 = create_ssl_connection(local_b8, local_c0, 0);
               iVar3 = test_true("test/sslapitest.c", 8000, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
               if (iVar3 != 0) {
                  iVar3 = test_false("test/sslapitest.c", 0x1f42, "info_cb_failed", info_cb_failed != 0);
                  uVar5 = ( uint )(iVar3 != 0);
                  goto LAB_00121ab3;
               }

            }

         }

         goto LAB_00121ab0;
      }

      uVar10 = ossl_time_now();
      uVar5 = 0;
      if (( uVar6 <= uVar10 ) && ( 6999999999 < uVar10 - uVar6 )) {
         uVar5 = test_skip("test/sslapitest.c", 0xdd9, "Test took too long, ignoring result");
      }

   }

   LAB_00121ab3:session = (SSL_SESSION*)0x0;
   LAB_00121ab5:SSL_free(local_b8);
   SSL_free(local_c0);
   SSL_SESSION_free(session);
   SSL_CTX_free(local_c8);
   SSL_CTX_free(local_d0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
uint test_early_data_read_write(int param_1) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   ulong uVar4;
   BIO *pBVar5;
   long lVar6;
   SSL_SESSION *pSVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   char *pcVar9;
   undefined8 uVar10;
   SSL_CTX *local_4b0;
   SSL_CTX *local_4a8;
   SSL *local_4a0;
   SSL *local_498;
   SSL_SESSION *local_490;
   undefined8 local_488;
   undefined8 local_480;
   long local_478;
   undefined8 local_470;
   undefined1 local_468[32];
   undefined1 local_448[3];
   ushort local_445;
   undefined1 auStack_443[1027];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4b0 = (SSL_CTX*)0x0;
   local_4a8 = (SSL_CTX*)0x0;
   local_4a0 = (SSL*)0x0;
   local_498 = (SSL*)0x0;
   local_490 = (SSL_SESSION*)0x0;
   if (param_1 != 2) {
      artificial_ticket_time = 2;
   }

   iVar1 = setupearly_data_test(&local_4b0, &local_4a8, &local_4a0, &local_498, &local_490, param_1, 0x30);
   iVar1 = test_true("test/sslapitest.c", 0xdec, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, idx, SHA384_DIGEST_LENGTH)", iVar1 != 0);
   artificial_ticket_time = 0;
   if (iVar1 != 0) {
      uVar4 = ossl_time_now();
      iVar1 = SSL_write_early_data(local_4a0, "Hello", 5, &local_480);
      iVar1 = test_true("test/sslapitest.c", 0xdf6, "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
      pSVar7 = local_490;
      if (iVar1 != 0) {
         iVar1 = test_size_t_eq("test/sslapitest.c", 0xdf8, "written", "strlen(MSG1)", local_480, 5);
         if (iVar1 != 0) {
            uVar2 = SSL_read_early_data(local_498, local_468, 0x14);
            iVar1 = test_int_eq("test/sslapitest.c", 0xdfb, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_SUCCESS", uVar2, 1);
            if (iVar1 == 0) {
               uVar8 = ossl_time_now();
               uVar3 = 0;
               if (( uVar4 <= uVar8 ) && ( 6999999999 < uVar8 - uVar4 )) {
                  uVar3 = test_skip("test/sslapitest.c", 0xdd9, "Test took too long, ignoring result");
               }

               goto LAB_0012204a;
            }

            iVar1 = test_mem_eq("test/sslapitest.c", 0xe02, &_LC569, &_LC80, "Hello", local_488, local_468, 5);
            if (iVar1 != 0) {
               uVar2 = SSL_get_early_data_status(local_498);
               iVar1 = test_int_eq("test/sslapitest.c", 0xe03, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_ACCEPTED", uVar2, 2);
               if (iVar1 != 0) {
                  iVar1 = SSL_write_early_data(local_498, "World.", 6, &local_480);
                  iVar1 = test_true("test/sslapitest.c", 0xe0b, "SSL_write_early_data(serverssl, MSG2, strlen(MSG2), &written)", iVar1 != 0);
                  if (iVar1 != 0) {
                     iVar1 = test_size_t_eq("test/sslapitest.c", 0xe0d, "written", "strlen(MSG2)", local_480, 6);
                     if (iVar1 != 0) {
                        iVar1 = SSL_read_ex(local_4a0, local_468, 0x14, &local_488);
                        iVar1 = test_true("test/sslapitest.c", 0xe0e, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                        if (iVar1 != 0) {
                           uVar10 = 6;
                           pcVar9 = "World.";
                           iVar1 = test_mem_eq("test/sslapitest.c", 0xe0f, &_LC80, &_LC534, local_468, local_488);
                           if (iVar1 != 0) {
                              iVar1 = SSL_write_early_data(local_4a0, &_LC1102, 4, &local_480, pcVar9, uVar10);
                              iVar1 = test_true("test/sslapitest.c", 0xe13, "SSL_write_early_data(clientssl, MSG3, strlen(MSG3), &written)", iVar1 != 0);
                              if (iVar1 != 0) {
                                 iVar1 = test_size_t_eq("test/sslapitest.c", 0xe15, "written", "strlen(MSG3)", local_480, 4);
                                 if (iVar1 != 0) {
                                    uVar2 = SSL_read_early_data(local_498, local_468, 0x14, &local_488);
                                    iVar1 = test_int_eq("test/sslapitest.c", 0xe19, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_SUCCESS", uVar2, 1);
                                    if (iVar1 != 0) {
                                       iVar1 = test_mem_eq("test/sslapitest.c", 0xe1c, &_LC80, &_LC1105, local_468, local_488, &_LC1102, 4);
                                       if (iVar1 != 0) {
                                          iVar1 = SSL_write_early_data(local_498, &_LC1106, 2, &local_480);
                                          iVar1 = test_true("test/sslapitest.c", 0xe20, "SSL_write_early_data(serverssl, MSG4, strlen(MSG4), &written)", iVar1 != 0);
                                          if (iVar1 != 0) {
                                             iVar1 = test_size_t_eq("test/sslapitest.c", 0xe22, "written", "strlen(MSG4)", local_480, 2);
                                             if (iVar1 != 0) {
                                                iVar1 = SSL_read_ex(local_4a0, local_468, 0x14, &local_488);
                                                iVar1 = test_true("test/sslapitest.c", 0xe23, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                                if (iVar1 != 0) {
                                                   iVar1 = test_mem_eq("test/sslapitest.c", 0xe24, &_LC80, &_LC1109, local_468, local_488, &_LC1106, 2);
                                                   if (iVar1 != 0) {
                                                      iVar1 = SSL_write_ex(local_4a0, &_LC1110, 1, &local_480);
                                                      iVar1 = test_true("test/sslapitest.c", 0xe2b, "SSL_write_ex(clientssl, MSG5, strlen(MSG5), &written)", iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                         iVar1 = test_size_t_eq("test/sslapitest.c", 0xe2c, "written", "strlen(MSG5)", local_480, 1);
                                                         if (iVar1 != 0) {
                                                            uVar2 = SSL_get_early_data_status(local_4a0);
                                                            iVar1 = test_int_eq("test/sslapitest.c", 0xe2d, "SSL_get_early_data_status(clientssl)", "SSL_EARLY_DATA_ACCEPTED", uVar2, 2);
                                                            if (iVar1 != 0) {
                                                               pBVar5 = SSL_get_rbio(local_498);
                                                               iVar1 = BIO_read_ex(pBVar5, local_448, 0x400, &local_478);
                                                               iVar1 = test_true("test/sslapitest.c", 0xe38, "BIO_read_ex(rbio, data, sizeof(data), &rawread)", iVar1 != 0);
                                                               if (iVar1 != 0) {
                                                                  iVar1 = test_size_t_lt("test/sslapitest.c", 0xe39, "rawread", "sizeof(data)", local_478, 0x400);
                                                                  if (iVar1 != 0) {
                                                                     iVar1 = test_size_t_gt("test/sslapitest.c", 0xe3a, "rawread", "SSL3_RT_HEADER_LENGTH", local_478, 5);
                                                                     if (iVar1 != 0) {
                                                                        lVar6 = ( ulong )(ushort)(local_445 << 8 | local_445 >> 8) + 5;
                                                                        iVar1 = BIO_write_ex(pBVar5, local_448, lVar6, &local_470);
                                                                        iVar1 = test_true("test/sslapitest.c", 0xe3f, "BIO_write_ex(rbio, data, eoedlen, &rawwritten)", iVar1 != 0);
                                                                        if (iVar1 != 0) {
                                                                           iVar1 = test_size_t_eq("test/sslapitest.c", 0xe40, "rawwritten", "eoedlen", local_470, lVar6);
                                                                           if (iVar1 != 0) {
                                                                              uVar2 = SSL_read_early_data(local_498, local_468, 0x14, &local_488);
                                                                              iVar1 = test_int_eq("test/sslapitest.c", 0xe44, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_FINISH", uVar2, 2);
                                                                              if (iVar1 != 0) {
                                                                                 iVar1 = test_size_t_eq("test/sslapitest.c", 0xe47, "readbytes", &_LC15, local_488, 0);
                                                                                 if (iVar1 != 0) {
                                                                                    iVar1 = SSL_write_early_data(local_498, &_LC985, 4, &local_480);
                                                                                    iVar1 = test_true("test/sslapitest.c", 0xe4e, "SSL_write_early_data(serverssl, MSG6, strlen(MSG6), &written)", iVar1 != 0);
                                                                                    if (iVar1 != 0) {
                                                                                       iVar1 = test_size_t_eq("test/sslapitest.c", 0xe50, "written", "strlen(MSG6)", local_480, 4);
                                                                                       if (iVar1 != 0) {
                                                                                          iVar1 = BIO_write_ex(pBVar5, local_448 + lVar6, local_478 - lVar6, &local_470);
                                                                                          iVar1 = test_true("test/sslapitest.c", 0xe54, "BIO_write_ex(rbio, data + eoedlen, rawread - eoedlen, &rawwritten)", iVar1 != 0);
                                                                                          if (iVar1 != 0) {
                                                                                             iVar1 = test_size_t_eq("test/sslapitest.c", 0xe56, "rawwritten", "rawread - eoedlen", local_470, local_478 - lVar6);
                                                                                             if (iVar1 != 0) {
                                                                                                iVar1 = SSL_read_ex(local_498, local_468, 0x14, &local_488);
                                                                                                iVar1 = test_true("test/sslapitest.c", 0xe5a, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                                                                                if (iVar1 != 0) {
                                                                                                   iVar1 = test_size_t_eq("test/sslapitest.c", 0xe5b, "readbytes", "strlen(MSG5)", local_488, 1);
                                                                                                   if (iVar1 != 0) {
                                                                                                      iVar1 = SSL_write_early_data(local_4a0, &_LC985, 4, &local_480);
                                                                                                      iVar1 = test_false("test/sslapitest.c", 0xe5f, "SSL_write_early_data(clientssl, MSG6, strlen(MSG6), &written)", iVar1 != 0);
                                                                                                      if (iVar1 != 0) {
                                                                                                         ERR_clear_error();
                                                                                                         uVar2 = SSL_read_early_data(local_498, local_468, 0x14, &local_488);
                                                                                                         iVar1 = test_int_eq("test/sslapitest.c", 0xe63, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_ERROR", uVar2, 0);
                                                                                                         if (iVar1 != 0) {
                                                                                                            ERR_clear_error();
                                                                                                            iVar1 = SSL_read_ex(local_4a0, local_468, 0x14, &local_488);
                                                                                                            iVar1 = test_true("test/sslapitest.c", 0xe6a, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                                                                                            if (iVar1 != 0) {
                                                                                                               iVar1 = test_mem_eq("test/sslapitest.c", 0xe6b, &_LC80, &_LC1124, local_468, local_488, &_LC985, 4);
                                                                                                               if (iVar1 != 0) {
                                                                                                                  iVar1 = SSL_read_ex(local_4a0, local_468, 0x14, &local_488);
                                                                                                                  iVar1 = test_false("test/sslapitest.c", 0xe73, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                                                                                                  if (iVar1 != 0) {
                                                                                                                     iVar1 = SSL_read_ex(local_4a0, local_468, 0x14, &local_488);
                                                                                                                     iVar1 = test_false("test/sslapitest.c", 0xe74, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                                                                                                     if (iVar1 != 0) {
                                                                                                                        iVar1 = SSL_write_ex(local_498, "message.", 8, &local_480);
                                                                                                                        iVar1 = test_true("test/sslapitest.c", 0xe79, "SSL_write_ex(serverssl, MSG7, strlen(MSG7), &written)", iVar1 != 0);
                                                                                                                        if (iVar1 != 0) {
                                                                                                                           iVar1 = test_size_t_eq("test/sslapitest.c", 0xe7a, "written", "strlen(MSG7)", local_480, 8);
                                                                                                                           if (iVar1 != 0) {
                                                                                                                              iVar1 = SSL_read_ex(local_4a0, local_468, 0x14, &local_488);
                                                                                                                              iVar1 = test_true("test/sslapitest.c", 0xe7b, "SSL_read_ex(clientssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                                                                                                              if (iVar1 != 0) {
                                                                                                                                 iVar1 = test_mem_eq("test/sslapitest.c", 0xe7c, &_LC80, &_LC1128, local_468, local_488, "message.", 8);
                                                                                                                                 if (iVar1 != 0) {
                                                                                                                                    SSL_SESSION_free(pSVar7);
                                                                                                                                    pSVar7 = SSL_get1_session(local_4a0);
                                                                                                                                    use_session_cb_cnt = 0;
                                                                                                                                    find_session_cb_cnt = 0;
                                                                                                                                    local_490 = pSVar7;
                                                                                                                                    SSL_shutdown(local_4a0);
                                                                                                                                    SSL_shutdown(local_498);
                                                                                                                                    SSL_free(local_498);
                                                                                                                                    SSL_free(local_4a0);
                                                                                                                                    local_4a0 = (SSL*)0x0;
                                                                                                                                    local_498 = (SSL*)0x0;
                                                                                                                                    iVar1 = create_ssl_objects(local_4a8, local_4b0, &local_498, &local_4a0, 0, 0);
                                                                                                                                    iVar1 = test_true("test/sslapitest.c", 0xe89, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar1 != 0);
                                                                                                                                    if (iVar1 != 0) {
                                                                                                                                       iVar1 = SSL_set_session(local_4a0, pSVar7);
                                                                                                                                       iVar1 = test_true("test/sslapitest.c", 0xe8b, "SSL_set_session(clientssl, sess)", iVar1 != 0);
                                                                                                                                       if (iVar1 != 0) {
                                                                                                                                          iVar1 = SSL_write_early_data(local_4a0, "Hello", 5, &local_480);
                                                                                                                                          iVar1 = test_true("test/sslapitest.c", 0xe8f, "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
                                                                                                                                          if (iVar1 != 0) {
                                                                                                                                             iVar1 = test_size_t_eq("test/sslapitest.c", 0xe91, "written", "strlen(MSG1)", local_480, 5);
                                                                                                                                             if (iVar1 != 0) {
                                                                                                                                                uVar2 = SSL_read_early_data(local_498, local_468, 0x14, &local_488);
                                                                                                                                                iVar1 = test_int_eq("test/sslapitest.c", 0xe92, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_SUCCESS", uVar2, 1);
                                                                                                                                                if (iVar1 != 0) {
                                                                                                                                                   iVar1 = test_mem_eq("test/sslapitest.c", 0xe95, &_LC80, &_LC569, local_468, local_488, "Hello", 5);
                                                                                                                                                   if (iVar1 != 0) {
                                                                                                                                                      iVar1 = SSL_connect(local_4a0);
                                                                                                                                                      iVar1 = test_int_gt("test/sslapitest.c", 0xe98, "SSL_connect(clientssl)", &_LC15, iVar1, 0);
                                                                                                                                                      if (iVar1 != 0) {
                                                                                                                                                         iVar1 = SSL_accept(local_498);
                                                                                                                                                         iVar1 = test_int_gt("test/sslapitest.c", 0xe99, "SSL_accept(serverssl)", &_LC15, iVar1, 0);
                                                                                                                                                         if (iVar1 != 0) {
                                                                                                                                                            iVar1 = SSL_write_early_data(local_4a0, &_LC985, 4, &local_480);
                                                                                                                                                            iVar1 = test_false("test/sslapitest.c", 0xe9d, "SSL_write_early_data(clientssl, MSG6, strlen(MSG6), &written)", iVar1 != 0);
                                                                                                                                                            if (iVar1 != 0) {
                                                                                                                                                               ERR_clear_error();
                                                                                                                                                               uVar2 = SSL_read_early_data(local_498, local_468, 0x14, &local_488);
                                                                                                                                                               iVar1 = test_int_eq("test/sslapitest.c", 0xea1, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_ERROR", uVar2, 0);
                                                                                                                                                               if (iVar1 != 0) {
                                                                                                                                                                  ERR_clear_error();
                                                                                                                                                                  iVar1 = SSL_write_ex(local_4a0, &_LC1110, 1, &local_480);
                                                                                                                                                                  iVar1 = test_true("test/sslapitest.c", 0xea8, "SSL_write_ex(clientssl, MSG5, strlen(MSG5), &written)", iVar1 != 0);
                                                                                                                                                                  if (iVar1 != 0) {
                                                                                                                                                                     iVar1 = test_size_t_eq("test/sslapitest.c", 0xea9, "written", "strlen(MSG5)", local_480, 1);
                                                                                                                                                                     if (iVar1 != 0) {
                                                                                                                                                                        iVar1 = SSL_read_ex(local_498, local_468, 0x14, &local_488);
                                                                                                                                                                        iVar1 = test_true("test/sslapitest.c", 0xeaa, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                                                                                                                                                        if (iVar1 != 0) {
                                                                                                                                                                           iVar1 = test_size_t_eq("test/sslapitest.c", 0xeab, "readbytes", "strlen(MSG5)", local_488, 1);
                                                                                                                                                                           uVar3 = ( uint )(iVar1 != 0);
                                                                                                                                                                           goto LAB_0012204a;
                                                                                                                                                                        }

                                                                                                                                                                     }

                                                                                                                                                                  }

                                                                                                                                                               }

                                                                                                                                                            }

                                                                                                                                                         }

                                                                                                                                                      }

                                                                                                                                                   }

                                                                                                                                                }

                                                                                                                                             }

                                                                                                                                          }

                                                                                                                                       }

                                                                                                                                    }

                                                                                                                                 }

                                                                                                                              }

                                                                                                                           }

                                                                                                                        }

                                                                                                                     }

                                                                                                                  }

                                                                                                               }

                                                                                                            }

                                                                                                         }

                                                                                                      }

                                                                                                   }

                                                                                                }

                                                                                             }

                                                                                          }

                                                                                       }

                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   uVar3 = 0;
   LAB_0012204a:SSL_SESSION_free(local_490);
   SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_free(local_498);
   SSL_free(local_4a0);
   SSL_CTX_free(local_4a8);
   SSL_CTX_free(local_4b0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_version(int param_1) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char *pcVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   bool bVar7;
   SSL_CTX *local_50;
   SSL_CTX *local_48;
   SSL *local_40;
   SSL *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (SSL_CTX*)0x0;
   local_48 = (SSL_CTX*)0x0;
   local_40 = (SSL*)0x0;
   local_38 = (SSL*)0x0;
   uVar3 = TLS_server_method();
   uVar4 = TLS_client_method();
   if (param_1 - 1U < 5) {
      uVar1 = *(uint*)( CSWTCH_2914 + ( ulong )(param_1 - 1U) * 4 );
      if (( is_fips == 0 ) || ( ( 1 < uVar1 - 0x300 && ( uVar1 != 0xfeff ) ) )) {
         if (( uVar1 & 0xfffffffd ) == 0xfefd) {
            uVar3 = DTLS_server_method();
            uVar4 = DTLS_client_method();
         }

         iVar2 = create_ssl_ctx_pair(libctx, uVar3, uVar4, uVar1, uVar1, &local_48, &local_50, cert, privkey);
         iVar2 = test_true("test/sslapitest.c", 0x2dde, "create_ssl_ctx_pair(libctx, servmeth, clientmeth, version, version, &sctx, &cctx, cert, privkey)", iVar2 != 0);
         if (iVar2 == 0) {
            LAB_00122f8e:bVar7 = false;
         }
 else {
            iVar2 = SSL_CTX_set_cipher_list(local_48, "DEFAULT:@SECLEVEL=0");
            iVar2 = test_true("test/sslapitest.c", 0x2de2, "SSL_CTX_set_cipher_list(sctx, \"DEFAULT:@SECLEVEL=0\")", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_CTX_set_cipher_list(local_50, "DEFAULT:@SECLEVEL=0");
            iVar2 = test_true("test/sslapitest.c", 0x2de3, "SSL_CTX_set_cipher_list(cctx, \"DEFAULT:@SECLEVEL=0\")", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = create_ssl_objects(local_48, local_50, &local_38, &local_40, 0, 0);
            iVar2 = test_true("test/sslapitest.c", 0x2de7, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = create_ssl_connection(local_38, local_40, 0);
            iVar2 = test_true("test/sslapitest.c", 0x2deb, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_version(local_38);
            iVar2 = test_int_eq("test/sslapitest.c", 0x2dee, "SSL_version(serverssl)", "version", iVar2, uVar1);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_version(local_40);
            iVar2 = test_int_eq("test/sslapitest.c", 0x2def, "SSL_version(clientssl)", "version", iVar2, uVar1);
            if (iVar2 == 0) goto LAB_00122f8e;
            if ((int)uVar1 < 0x305) {
               if ((int)uVar1 < 0x300) {
                  pcVar6 = (char*)0x0;
                  LAB_0012365b:pcVar5 = SSL_get_version(local_38);
                  iVar2 = test_str_eq("test/sslapitest.c", 0x2d95, "verstr", "SSL_get_version(s)", pcVar6, pcVar5);
                  iVar2 = test_true("test/sslapitest.c", 0x2df0, "check_version_string(serverssl, version)", iVar2 != 0);
                  if (iVar2 != 0) {
                     if ((int)uVar1 < 0x305) {
                        if (0x2ff < (int)uVar1) {
                           pcVar6 = "SSLv3";
                           switch (uVar1) {
                              case 0x301:
                    pcVar6 = "TLSv1";
                    break;
                              case 0x302:
                    goto switchD_001236eb_caseD_302;
                              case 0x303:
                    goto switchD_001236eb_caseD_303;
                              case 0x304:
                    goto switchD_001236eb_caseD_304;
                           }

                           goto switchD_001236eb_default;
                        }

                     }
 else {
                        if (uVar1 == 0xfefd) goto LAB_00123746;
                        if (uVar1 == 0xfeff) {
                           pcVar6 = "DTLSv1";
                           goto LAB_00123514;
                        }

                     }

                     pcVar6 = SSL_get_version(local_40);
                     iVar2 = test_str_eq("test/sslapitest.c", 0x2d95, "verstr", "SSL_get_version(s)", 0, pcVar6);
                     iVar2 = test_true("test/sslapitest.c", 0x2df1, "check_version_string(clientssl, version)", iVar2 != 0);
                     if (iVar2 != 0) {
                        if (( uVar1 & 0xfffffffd ) == 0xfefd) goto LAB_00123555;
                        goto LAB_0012325c;
                     }

                  }

               }
 else {
                  switch (uVar1) {
                     case 0x301:
              pcVar6 = SSL_get_version(local_38);
              iVar2 = test_str_eq("test/sslapitest.c",0x2d95,"verstr","SSL_get_version(s)","TLSv1",
                                  pcVar6);
              iVar2 = test_true("test/sslapitest.c",0x2df0,
                                "check_version_string(serverssl, version)",iVar2 != 0);
              if (iVar2 == 0) goto LAB_00122f8e;
              pcVar6 = "TLSv1";
              break;
                     case 0x302:
              pcVar6 = SSL_get_version(local_38);
              iVar2 = test_str_eq("test/sslapitest.c",0x2d95,"verstr","SSL_get_version(s)","TLSv1.1"
                                  ,pcVar6);
              iVar2 = test_true("test/sslapitest.c",0x2df0,
                                "check_version_string(serverssl, version)",iVar2 != 0);
              if (iVar2 == 0) goto LAB_00122f8e;
switchD_001236eb_caseD_302:
              pcVar6 = "TLSv1.1";
              break;
                     case 0x303:
              pcVar6 = SSL_get_version(local_38);
              iVar2 = test_str_eq("test/sslapitest.c",0x2d95,"verstr","SSL_get_version(s)","TLSv1.2"
                                  ,pcVar6);
              iVar2 = test_true("test/sslapitest.c",0x2df0,
                                "check_version_string(serverssl, version)",iVar2 != 0);
              if (iVar2 == 0) goto LAB_00122f8e;
switchD_001236eb_caseD_303:
              pcVar6 = "TLSv1.2";
              break;
                     case 0x304:
              pcVar6 = SSL_get_version(local_38);
              iVar2 = test_str_eq("test/sslapitest.c",0x2d95,"verstr","SSL_get_version(s)","TLSv1.3"
                                  ,pcVar6);
              iVar2 = test_true("test/sslapitest.c",0x2df0,
                                "check_version_string(serverssl, version)",iVar2 != 0);
              if (iVar2 == 0) goto LAB_00122f8e;
switchD_001236eb_caseD_304:
              pcVar6 = "TLSv1.3";
              break;
                     default:
              pcVar6 = "SSLv3";
              goto LAB_0012365b;
                  }

                  switchD_001236eb_default:pcVar5 = SSL_get_version(local_40);
                  iVar2 = test_str_eq("test/sslapitest.c", 0x2d95, "verstr", "SSL_get_version(s)", pcVar6, pcVar5);
                  iVar2 = test_true("test/sslapitest.c", 0x2df1, "check_version_string(clientssl, version)", iVar2 != 0);
                  if (iVar2 != 0) {
                     LAB_0012325c:iVar2 = SSL_is_tls(local_38);
                     iVar2 = test_true("test/sslapitest.c", 0x2dfd, "SSL_is_tls(serverssl)", iVar2 != 0);
                     if (iVar2 != 0) {
                        iVar2 = SSL_is_tls(local_40);
                        iVar2 = test_true("test/sslapitest.c", 0x2dfe, "SSL_is_tls(clientssl)", iVar2 != 0);
                        if (iVar2 != 0) {
                           iVar2 = SSL_is_dtls(local_38);
                           iVar2 = test_false("test/sslapitest.c", 0x2dff, "SSL_is_dtls(serverssl)", iVar2 != 0);
                           if (iVar2 != 0) {
                              iVar2 = SSL_is_dtls(local_40);
                              iVar2 = test_false("test/sslapitest.c", 0x2e00, "SSL_is_dtls(clientssl)", iVar2 != 0);
                              if (iVar2 != 0) {
                                 iVar2 = SSL_is_quic(local_38);
                                 iVar2 = test_false("test/sslapitest.c", 0x2e01, "SSL_is_quic(serverssl)", iVar2 != 0);
                                 if (iVar2 != 0) {
                                    iVar2 = SSL_is_quic(local_40);
                                    uVar3 = 0x2e02;
                                    goto LAB_0012335a;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

               goto LAB_00122f8e;
            }

            if (uVar1 == 0xfefd) {
               pcVar6 = SSL_get_version(local_38);
               iVar2 = test_str_eq("test/sslapitest.c", 0x2d95, "verstr", "SSL_get_version(s)", "DTLSv1.2", pcVar6);
               iVar2 = test_true("test/sslapitest.c", 0x2df0, "check_version_string(serverssl, version)", iVar2 != 0);
               if (iVar2 == 0) goto LAB_00122f8e;
               LAB_00123746:pcVar6 = "DTLSv1.2";
            }
 else {
               pcVar6 = (char*)0x0;
               if (uVar1 != 0xfeff) goto LAB_0012365b;
               pcVar6 = SSL_get_version(local_38);
               iVar2 = test_str_eq("test/sslapitest.c", 0x2d95, "verstr", "SSL_get_version(s)", "DTLSv1", pcVar6);
               iVar2 = test_true("test/sslapitest.c", 0x2df0, "check_version_string(serverssl, version)", iVar2 != 0);
               if (iVar2 == 0) goto LAB_00122f8e;
               pcVar6 = "DTLSv1";
            }

            LAB_00123514:pcVar5 = SSL_get_version(local_40);
            iVar2 = test_str_eq("test/sslapitest.c", 0x2d95, "verstr", "SSL_get_version(s)", pcVar6, pcVar5);
            iVar2 = test_true("test/sslapitest.c", 0x2df1, "check_version_string(clientssl, version)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            LAB_00123555:iVar2 = SSL_is_dtls(local_38);
            iVar2 = test_true("test/sslapitest.c", 0x2df5, "SSL_is_dtls(serverssl)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_is_dtls(local_40);
            iVar2 = test_true("test/sslapitest.c", 0x2df6, "SSL_is_dtls(clientssl)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_is_tls(local_38);
            iVar2 = test_false("test/sslapitest.c", 0x2df7, "SSL_is_tls(serverssl)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_is_tls(local_40);
            iVar2 = test_false("test/sslapitest.c", 0x2df8, "SSL_is_tls(clientssl)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_is_quic(local_38);
            iVar2 = test_false("test/sslapitest.c", 0x2df9, "SSL_is_quic(serverssl)", iVar2 != 0);
            if (iVar2 == 0) goto LAB_00122f8e;
            iVar2 = SSL_is_quic(local_40);
            uVar3 = 0x2dfa;
            LAB_0012335a:iVar2 = test_false("test/sslapitest.c", uVar3, "SSL_is_quic(clientssl)", iVar2 != 0);
            bVar7 = iVar2 != 0;
         }

         SSL_free(local_38);
         SSL_free(local_40);
         SSL_CTX_free(local_48);
         SSL_CTX_free(local_50);
         goto LAB_00122fb8;
      }

      test_skip("test/sslapitest.c", 0x2dd3, "Protocol version not supported with FIPS");
   }
 else {
      test_skip("test/sslapitest.c", 0x2dcb, "Unsupported protocol version");
   }

   bVar7 = true;
   LAB_00122fb8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar7;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint test_early_data_psk(undefined4 param_1) {
   SSL_SESSION *ses;
   int iVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   undefined4 local_c4;
   SSL_CTX *local_b0;
   SSL_CTX *local_a8;
   SSL *local_a0;
   SSL *local_98;
   SSL_SESSION *local_90;
   undefined8 local_88;
   undefined1 local_80[8];
   undefined8 local_78;
   undefined8 uStack_70;
   undefined1 local_68;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0x6e;
   local_b0 = (SSL_CTX*)0x0;
   local_a8 = (SSL_CTX*)0x0;
   local_a0 = (SSL*)0x0;
   local_98 = (SSL*)0x0;
   local_90 = (SSL_SESSION*)0x0;
   local_78 = __LC1174;
   uStack_70 = _UNK_0013dc98;
   iVar1 = setupearly_data_test(&local_b0, &local_a8, &local_a0, &local_98, &local_90, 2, 0x30);
   iVar1 = test_true("test/sslapitest.c", 0x10bc, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, 2, SHA384_DIGEST_LENGTH)", iVar1 != 0);
   ses = local_90;
   if (iVar1 == 0) {
      uVar4 = 0;
      goto LAB_001238d8;
   }

   servalpn = "goodalpn";
   switch (param_1) {
      case 0:
    iVar1 = SSL_SESSION_set1_hostname(local_90,"goodhost");
    iVar1 = test_true("test/sslapitest.c",0x10cd,"SSL_SESSION_set1_hostname(sess, \"goodhost\")",
                      iVar1 != 0);
    if (iVar1 != 0) {
      lVar5 = SSL_ctrl(local_a0,0x37,0,"badhost");
      uVar4 = test_true("test/sslapitest.c",0x10ce,
                        "SSL_set_tlsext_host_name(clientssl, \"badhost\")",lVar5 != 0);
      if (uVar4 == 0) goto LAB_001238d8;
      uVar8 = 0xe7;
      SSL_set_connect_state(local_a0);
LAB_00123d40:
      iVar1 = SSL_write_early_data(local_a0,"Hello",5,local_80);
      iVar1 = test_false("test/sslapitest.c",0x1134,
                         "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)",iVar1 != 0)
      ;
      if (iVar1 != 0) {
        iVar1 = SSL_get_error(local_a0,0);
        iVar1 = test_int_eq("test/sslapitest.c",0x1136,"SSL_get_error(clientssl, 0)","SSL_ERROR_SSL"
                            ,iVar1,1);
        if (iVar1 != 0) {
          uVar6 = ERR_get_error();
          uVar4 = (uint)uVar6 & 0x7fffff;
          if ((uVar6 & 0x80000000) != 0) {
            uVar4 = (uint)uVar6 & 0x7fffffff;
          }
          iVar1 = test_int_eq("test/sslapitest.c",0x1137,"ERR_GET_REASON(ERR_get_error())",&_LC1170,
                              uVar4,uVar8);
          uVar4 = (uint)(iVar1 != 0);
          goto LAB_001238d8;
        }
      }
    }
    break;
      case 1:
    iVar1 = SSL_SESSION_set1_alpn_selected(local_90,&local_78,9);
    iVar1 = test_true("test/sslapitest.c",0x10d6,
                      "SSL_SESSION_set1_alpn_selected(sess, GOODALPN, GOODALPNLEN)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_set_alpn_protos(local_a0,(long)&uStack_70 + 1,8);
      iVar1 = test_false("test/sslapitest.c",0x10d8,
                         "SSL_set_alpn_protos(clientssl, BADALPN, BADALPNLEN)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar8 = 0xde;
        SSL_set_connect_state(local_a0);
        goto LAB_00123d40;
      }
    }
    break;
      case 2:
    iVar1 = SSL_SESSION_set_protocol_version(local_90,0x303);
    iVar1 = test_true("test/sslapitest.c",0x10e4,
                      "SSL_SESSION_set_protocol_version(sess, TLS1_2_VERSION)",iVar1 != 0);
    if (iVar1 != 0) {
      uVar8 = 0xdb;
      SSL_set_connect_state(local_a0);
      goto LAB_00123d40;
    }
    break;
      case 3:
    SSL_SESSION_free(serverpsk);
    serverpsk = (SSL_SESSION *)SSL_SESSION_dup(clientpsk);
    iVar1 = test_ptr("test/sslapitest.c",0x10f1,"serverpsk",serverpsk);
    if (iVar1 != 0) {
      iVar1 = SSL_SESSION_set1_hostname(serverpsk,"badhost");
      iVar1 = test_true("test/sslapitest.c",0x10f2,
                        "SSL_SESSION_set1_hostname(serverpsk, \"badhost\")",iVar1 != 0);
      if (iVar1 != 0) goto switchD_001238c7_caseD_4;
    }
    break;
      case 4:
switchD_001238c7_caseD_4:
    iVar1 = SSL_SESSION_set1_hostname(ses,"goodhost");
    iVar1 = test_true("test/sslapitest.c",0x10f7,"SSL_SESSION_set1_hostname(sess, \"goodhost\")",
                      iVar1 != 0);
    if (iVar1 == 0) break;
    lVar5 = SSL_ctrl(local_a0,0x37,0,"goodhost");
    iVar1 = test_true("test/sslapitest.c",0x10f8,"SSL_set_tlsext_host_name(clientssl, \"goodhost\")"
                      ,lVar5 != 0);
    if (iVar1 == 0) break;
    lVar5 = SSL_CTX_callback_ctrl(local_a8,0x35,hostname_cb);
    iVar1 = test_true("test/sslapitest.c",0x10f9,
                      "SSL_CTX_set_tlsext_servername_callback(sctx, hostname_cb)",lVar5 != 0);
    if (iVar1 == 0) break;
    uVar8 = 2;
    iVar1 = 1;
    SSL_set_connect_state(local_a0);
    local_c4 = 1;
    goto LAB_00123ed8;
      case 5:
    uVar8 = 1;
    iVar1 = 2;
    servalpn = "badalpn";
    goto LAB_00123a2c;
      case 6:
    uVar8 = 2;
    iVar1 = 1;
LAB_00123a2c:
    iVar2 = SSL_SESSION_set1_alpn_selected(local_90,(long)&local_78 + 1,8);
    iVar2 = test_true("test/sslapitest.c",0x110f,
                      "SSL_SESSION_set1_alpn_selected(sess, GOODALPN + 1, GOODALPNLEN - 1)",
                      iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = SSL_set_alpn_protos(local_a0,&local_78,9);
      iVar2 = test_false("test/sslapitest.c",0x1111,
                         "SSL_set_alpn_protos(clientssl, GOODALPN, GOODALPNLEN)",iVar2 != 0);
      if (iVar2 != 0) {
        SSL_CTX_set_alpn_select_cb(local_a8,alpn_select_cb,0);
        SSL_set_connect_state(local_a0);
        local_c4 = 1;
LAB_00123ed8:
        uVar6 = ossl_time_now();
        iVar2 = SSL_write_early_data(local_a0,"Hello",5,local_80);
        iVar2 = test_true("test/sslapitest.c",0x113c,
                          "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)",iVar2 != 0
                         );
        if (iVar2 != 0) {
          uVar3 = SSL_read_early_data(local_98,local_58,0x14,&local_88);
          iVar2 = test_int_eq("test/sslapitest.c",0x1140,
                              "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)",
                              "readearlyres",uVar3,iVar1);
          if (iVar2 == 0) {
            uVar7 = ossl_time_now();
            uVar4 = 0;
            if ((uVar6 <= uVar7) && (6999999999 < uVar7 - uVar6)) {
              uVar4 = test_skip("test/sslapitest.c",0xdd9,"Test took too long, ignoring result");
            }
            goto LAB_001238d8;
          }
          if ((iVar1 != 1) ||
             (iVar1 = test_mem_eq("test/sslapitest.c",0x1147,&_LC80,&_LC569,local_58,local_88,
                                  "Hello",5), iVar1 != 0)) {
            uVar3 = SSL_get_early_data_status(local_98);
            iVar1 = test_int_eq("test/sslapitest.c",0x1148,"SSL_get_early_data_status(serverssl)",
                                "edstatus",uVar3,uVar8);
            if (iVar1 != 0) {
              uVar4 = 1;
              iVar1 = SSL_connect(local_a0);
              iVar1 = test_int_eq("test/sslapitest.c",0x1149,"SSL_connect(clientssl)","connectres",
                                  iVar1,local_c4);
              if (iVar1 != 0) goto LAB_001238d8;
            }
          }
        }
      }
    }
    break;
      case 7:
    SSL_SESSION_free(serverpsk);
    serverpsk = (SSL_SESSION *)SSL_SESSION_dup(clientpsk);
    iVar1 = test_ptr("test/sslapitest.c",0x111c,"serverpsk",serverpsk);
    if (iVar1 != 0) {
      iVar1 = SSL_SESSION_set1_alpn_selected(clientpsk,(long)&uStack_70 + 2,7);
      iVar1 = test_true("test/sslapitest.c",0x111d,
                        "SSL_SESSION_set1_alpn_selected(clientpsk, BADALPN + 1, BADALPNLEN - 1)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_SESSION_set1_alpn_selected(serverpsk,(long)&local_78 + 1,8);
        iVar1 = test_true("test/sslapitest.c",0x1120,
                          "SSL_SESSION_set1_alpn_selected(serverpsk, GOODALPN + 1, GOODALPNLEN - 1)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = SSL_set_alpn_protos(local_a0,&local_78,0x11);
          iVar1 = test_false("test/sslapitest.c",0x1123,
                             "SSL_set_alpn_protos(clientssl, alpnlist, sizeof(alpnlist))",iVar1 != 0
                            );
          if (iVar1 != 0) {
            uVar8 = 2;
            iVar1 = 1;
            SSL_CTX_set_alpn_select_cb(local_a8,alpn_select_cb,0);
            SSL_set_connect_state(local_a0);
            local_c4 = 0xffffffff;
            goto LAB_00123ed8;
          }
        }
      }
    }
    break;
      default:
    test_error("test/sslapitest.c",0x112e,"Bad test index");
   }

   uVar4 = 0;
   LAB_001238d8:SSL_SESSION_free(ses);
   SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   SSL_free(local_98);
   SSL_free(local_a0);
   SSL_CTX_free(local_a8);
   SSL_CTX_free(local_b0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
uint test_early_data_psk_with_all_ciphers(int param_1) {
   int iVar1;
   uint uVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   ulong uVar6;
   SSL_SESSION *ses;
   long in_FS_OFFSET;
   char *pcVar7;
   SSL_CTX *local_110;
   SSL_CTX *local_108;
   SSL *local_100;
   SSL *local_f8;
   SSL_SESSION *local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   char *local_d8[4];
   char *local_b8;
   char *pcStack_b0;
   char *local_a8;
   undefined *local_98[4];
   undefined *local_78;
   undefined *puStack_70;
   undefined *local_68;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_110 = (SSL_CTX*)0x0;
   local_108 = (SSL_CTX*)0x0;
   local_100 = (SSL*)0x0;
   local_d8[0] = "TLS_AES_128_GCM_SHA256";
   local_d8[1] = "TLS_AES_256_GCM_SHA384";
   local_a8 = "TLS_SHA384_SHA384";
   local_d8[2] = "TLS_CHACHA20_POLY1305_SHA256";
   local_d8[3] = "TLS_AES_128_CCM_SHA256";
   local_f8 = (SSL*)0x0;
   local_b8 = "TLS_AES_128_CCM_8_SHA256";
   pcStack_b0 = "TLS_SHA256_SHA256";
   pcVar7 = local_d8[param_1];
   local_f0 = (SSL_SESSION*)0x0;
   local_98[0] = &_LC669;
   local_98[1] = &_LC1179;
   local_68 = &_LC1184;
   local_98[2] = &_LC1180;
   local_98[3] = &_LC1181;
   local_78 = &_LC1182;
   puStack_70 = &_LC1183;
   if (pcVar7 == (char*)0x0) {
      uVar2 = 1;
      goto LAB_00124300;
   }

   if (( ( param_1 - 5U < 2 ) || ( param_1 == 2 ) ) && ( uVar2 = is_fips == 1 )) goto LAB_00124300;
   iVar1 = setupearly_data_test(&local_110, &local_108, &local_100, &local_f8, &local_f0, 2);
   uVar2 = test_true("test/sslapitest.c", 0x119e, "setupearly_data_test(&cctx, &sctx, &clientssl, &serverssl, &sess, 2, SHA384_DIGEST_LENGTH)", iVar1 != 0);
   ses = local_f0;
   if (uVar2 != 0) {
      if (param_1 - 4U < 3) {
         SSL_set_security_level(local_100, 0);
         SSL_set_security_level(local_f8, 0);
      }

      iVar1 = SSL_set_ciphersuites(local_100, pcVar7);
      iVar1 = test_true("test/sslapitest.c", 0x11ac, "SSL_set_ciphersuites(clientssl, cipher_str[idx])", iVar1 != 0);
      ses = local_f0;
      if (iVar1 != 0) {
         iVar1 = SSL_set_ciphersuites(local_f8, pcVar7);
         uVar2 = test_true("test/sslapitest.c", 0x11ad, "SSL_set_ciphersuites(serverssl, cipher_str[idx])", iVar1 != 0);
         if (uVar2 == 0) goto LAB_00124284;
         uVar4 = SSL_CIPHER_find(local_100, local_98[param_1]);
         iVar1 = test_ptr("test/sslapitest.c", 0x11b8, "cipher", uVar4);
         if (iVar1 != 0) {
            iVar1 = SSL_SESSION_set_cipher(ses, uVar4);
            iVar1 = test_true("test/sslapitest.c", 0x11b8, "SSL_SESSION_set_cipher(sess, cipher)", iVar1 != 0);
            if (iVar1 != 0) {
               SSL_set_connect_state(local_100);
               uVar5 = ossl_time_now();
               iVar1 = SSL_write_early_data(local_100, "Hello", 5, &local_e0);
               iVar1 = test_true("test/sslapitest.c", 0x11bd, "SSL_write_early_data(clientssl, MSG1, strlen(MSG1), &written)", iVar1 != 0);
               if (iVar1 != 0) {
                  uVar3 = SSL_read_early_data(local_f8, local_58, 0x14);
                  iVar1 = test_int_eq("test/sslapitest.c", 0x11c1, "SSL_read_early_data(serverssl, buf, sizeof(buf), &readbytes)", "SSL_READ_EARLY_DATA_SUCCESS", uVar3, 1);
                  if (iVar1 == 0) {
                     uVar6 = ossl_time_now();
                     uVar2 = 0;
                     if (( uVar5 <= uVar6 ) && ( 6999999999 < uVar6 - uVar5 )) {
                        uVar2 = test_skip("test/sslapitest.c", 0xdd9, "Test took too long, ignoring result");
                     }

                     goto LAB_00124284;
                  }

                  pcVar7 = "Hello";
                  iVar1 = test_mem_eq("test/sslapitest.c", 0x11c8, &_LC80, &_LC569, local_58, local_e8, "Hello", 5);
                  if (iVar1 != 0) {
                     uVar3 = SSL_get_early_data_status(local_f8, pcVar7);
                     iVar1 = test_int_eq("test/sslapitest.c", 0x11c9, "SSL_get_early_data_status(serverssl)", "SSL_EARLY_DATA_ACCEPTED", uVar3, 2);
                     if (iVar1 != 0) {
                        iVar1 = SSL_connect(local_100);
                        iVar1 = test_int_eq("test/sslapitest.c", 0x11cb, "SSL_connect(clientssl)", &_LC49, iVar1, 1);
                        if (iVar1 != 0) {
                           iVar1 = SSL_accept(local_f8);
                           iVar1 = test_int_eq("test/sslapitest.c", 0x11cc, "SSL_accept(serverssl)", &_LC49, iVar1, 1);
                           if (iVar1 != 0) {
                              iVar1 = SSL_write_ex(local_100, "World.", 6, &local_e0);
                              iVar1 = test_true("test/sslapitest.c", 0x11d0, "SSL_write_ex(clientssl, MSG2, strlen(MSG2), &written)", iVar1 != 0);
                              if (iVar1 != 0) {
                                 iVar1 = test_size_t_eq("test/sslapitest.c", 0x11d1, "written", "strlen(MSG2)", local_e0, 6);
                                 if (iVar1 != 0) {
                                    iVar1 = SSL_read_ex(local_f8, local_58, 0x14, &local_e8);
                                    iVar1 = test_true("test/sslapitest.c", 0x11d4, "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)", iVar1 != 0);
                                    if (iVar1 != 0) {
                                       iVar1 = test_mem_eq("test/sslapitest.c", 0x11d5, &_LC80, &_LC534, local_58, local_e8, "World.", 6);
                                       uVar2 = ( uint )(iVar1 != 0);
                                       goto LAB_00124284;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

      uVar2 = 0;
   }

   LAB_00124284:SSL_SESSION_free(ses);
   SSL_SESSION_free(clientpsk);
   SSL_SESSION_free(serverpsk);
   serverpsk = (SSL_SESSION*)0x0;
   clientpsk = (SSL_SESSION*)0x0;
   if (local_100 != (SSL*)0x0) {
      SSL_shutdown(local_100);
   }

   if (local_f8 != (SSL*)0x0) {
      SSL_shutdown(local_f8);
   }

   SSL_free(local_f8);
   SSL_free(local_100);
   SSL_CTX_free(local_108);
   SSL_CTX_free(local_110);
   LAB_00124300:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined1 *test_get_options(void) {
   return options_15;
}
undefined8 setup_tests(void) {
   int iVar1;
   char *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   undefined4 *puVar6;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   byte bVar8;
   undefined4 auStack_b8[12];
   undefined4 local_88[10];
   undefined4 local_60[12];
   long local_30;
   bVar8 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   libctx = OSSL_LIB_CTX_new();
   iVar1 = test_ptr("test/sslapitest.c", 0x32ff, "libctx", libctx);
   if (iVar1 != 0) {
      defctxnull = OSSL_PROVIDER_load(0, &_LC1189);
      iVar1 = OSSL_PROVIDER_available(0, "default");
      iVar1 = test_false("test/sslapitest.c", 0x3308, "OSSL_PROVIDER_available(NULL, \"default\")", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = OSSL_PROVIDER_available(0, &_LC1191);
         iVar1 = test_false("test/sslapitest.c", 0x3309, "OSSL_PROVIDER_available(NULL, \"fips\")", iVar1 != 0);
         if (iVar1 != 0) {
            iVar1 = test_skip_common_options();
            if (iVar1 == 0) {
               test_error("test/sslapitest.c", 0x330d, "Error parsing test options\n");
            }
 else {
               certsdir = test_get_argument(0);
               iVar1 = test_ptr("test/sslapitest.c", 0x3311, "certsdir = test_get_argument(0)", certsdir);
               if (iVar1 != 0) {
                  srpvfile = test_get_argument(1);
                  iVar1 = test_ptr("test/sslapitest.c", 0x3312, "srpvfile = test_get_argument(1)", srpvfile);
                  if (iVar1 != 0) {
                     tmpfilename = test_get_argument(2);
                     iVar1 = test_ptr("test/sslapitest.c", 0x3313, "tmpfilename = test_get_argument(2)", tmpfilename);
                     if (iVar1 != 0) {
                        pcVar2 = (char*)test_get_argument(3);
                        iVar1 = test_ptr("test/sslapitest.c", 0x3314, "modulename = test_get_argument(3)", pcVar2);
                        if (iVar1 != 0) {
                           uVar3 = test_get_argument(4);
                           iVar1 = test_ptr("test/sslapitest.c", 0x3315, "configfile = test_get_argument(4)", uVar3);
                           if (iVar1 != 0) {
                              dhfile = test_get_argument(5);
                              iVar1 = test_ptr("test/sslapitest.c", 0x3316, "dhfile = test_get_argument(5)", dhfile);
                              if (iVar1 != 0) {
                                 iVar1 = OSSL_LIB_CTX_load_config(libctx, uVar3);
                                 iVar1 = test_true("test/sslapitest.c", 0x3319, "OSSL_LIB_CTX_load_config(libctx, configfile)", iVar1 != 0);
                                 if (iVar1 != 0) {
                                    iVar1 = OSSL_PROVIDER_available(libctx, pcVar2);
                                    iVar1 = test_true("test/sslapitest.c", 0x331d, "OSSL_PROVIDER_available(libctx, modulename)", iVar1 != 0);
                                    if (iVar1 != 0) {
                                       iVar1 = strcmp(pcVar2, "default");
                                       if (iVar1 != 0) {
                                          iVar1 = OSSL_PROVIDER_available(libctx, "default");
                                          iVar1 = test_false("test/sslapitest.c", 0x3322, "OSSL_PROVIDER_available(libctx, \"default\")", iVar1 != 0);
                                          if (iVar1 == 0) goto LAB_00124704;
                                       }

                                       uVar3 = libctx;
                                       iVar1 = strcmp(pcVar2, "fips");
                                       if (iVar1 == 0) {
                                          is_fips = 1;
                                          lVar4 = OSSL_PROVIDER_load(uVar3, &_LC1191);
                                          uVar3 = libctx;
                                          if (lVar4 != 0) {
                                             OSSL_PARAM_construct_int(auStack_b8, "tls1-prf-ems-check", &fips_ems_check);
                                             puVar6 = auStack_b8;
                                             puVar7 = local_88;
                                             for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                                *puVar7 = *puVar6;
                                                puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
                                                puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
                                             }

                                             OSSL_PARAM_construct_end(auStack_b8);
                                             puVar6 = auStack_b8;
                                             puVar7 = local_60;
                                             for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                                *puVar7 = *puVar6;
                                                puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
                                                puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
                                             }

                                             OSSL_PROVIDER_get_params(lVar4, local_88);
                                             OSSL_PROVIDER_unload(lVar4);
                                             uVar3 = libctx;
                                          }

                                       }

                                       iVar1 = OSSL_PROVIDER_add_builtin(uVar3, "tls-provider", &tls_provider_init);
                                       iVar1 = test_true("test/sslapitest.c", 0x333b, "OSSL_PROVIDER_add_builtin(libctx, \"tls-provider\", tls_provider_init)", iVar1 != 0);
                                       if (iVar1 != 0) {
                                          pcVar2 = getenv("OPENSSL_TEST_GETCOUNTS");
                                          if (pcVar2 == (char*)0x0) {
                                             cert = (void*)test_mk_file_path(certsdir, "servercert.pem");
                                             if (( ( ( ( cert != (void*)0x0 ) && ( privkey = (void*)test_mk_file_path(certsdir, "serverkey.pem") ),privkey != (void*)0x0 ) ) && ( cert2 = (void*)test_mk_file_path(certsdir, "server-ecdsa-cert.pem") ),cert2 != (void*)0x0 )) &&( ( ( ( privkey2 = (void*)test_mk_file_path(certsdir, "server-ecdsa-key.pem") ),privkey2 != (void*)0x0 && ( cert1024 = test_mk_file_path(certsdir, "ee-cert-1024.pem") ),cert1024 != 0 ) ) && ( ( privkey1024 = test_mk_file_path(certsdir, "ee-key-1024.pem") ),privkey1024 != 0 && ( ( cert3072 = test_mk_file_path(certsdir, "ee-cert-3072.pem") ),cert3072 != 0 && ( privkey3072 = test_mk_file_path(certsdir, "ee-key-3072.pem") ),privkey3072 != 0 ) ) ) && ( cert4096 = cert4096 != 0 ) && ( ( ( privkey4096 = test_mk_file_path(certsdir, "ee-key-4096.pem") ),privkey4096 != 0 && ( cert8192 = test_mk_file_path(certsdir, "ee-cert-8192.pem") ),cert8192 != 0 ) ) && ( privkey8192 = privkey8192 != 0 )(fips_ems_check == 0);
                                             {
                                                add_test("test_large_message_tls", test_large_message_tls);
                                                add_test("test_large_message_tls_read_ahead", test_large_message_tls_read_ahead);
                                                add_test("test_large_message_dtls", test_large_message_dtls);
                                                add_all_tests("test_large_app_data", test_large_app_data, 0x1c, 1);
                                                add_test("test_cleanse_plaintext", test_cleanse_plaintext);
                                                add_test("test_tlsext_status_type", test_tlsext_status_type);
                                                add_test("test_session_with_only_int_cache", test_session_with_only_int_cache);
                                                add_test("test_session_with_only_ext_cache", test_session_with_only_ext_cache);
                                                add_test("test_session_with_both_cache", test_session_with_both_cache);
                                                add_test("test_session_wo_ca_names", test_session_wo_ca_names);
                                                add_all_tests("test_stateful_tickets", test_stateful_tickets, 3, 1);
                                                add_all_tests("test_stateless_tickets", test_stateless_tickets, 3, 1);
                                                add_test("test_psk_tickets", test_psk_tickets);
                                                add_all_tests("test_extra_tickets", test_extra_tickets, 6, 1);
                                                add_all_tests("test_ssl_set_bio", test_ssl_set_bio, 0x59, 1);
                                                add_test("test_ssl_bio_pop_next_bio", test_ssl_bio_pop_next_bio);
                                                add_test("test_ssl_bio_pop_ssl_bio", test_ssl_bio_pop_ssl_bio);
                                                add_test("test_ssl_bio_change_rbio", test_ssl_bio_change_rbio);
                                                add_test("test_ssl_bio_change_wbio", test_ssl_bio_change_wbio);
                                                add_all_tests("test_set_sigalgs", test_set_sigalgs, 0x1e, 1);
                                                add_test("test_keylog", test_keylog);
                                                add_test("test_keylog_no_master_key", test_keylog_no_master_key);
                                                add_test("test_client_cert_verify_cb", test_client_cert_verify_cb);
                                                add_test("test_ssl_build_cert_chain", test_ssl_build_cert_chain);
                                                add_test("test_ssl_ctx_build_cert_chain", test_ssl_ctx_build_cert_chain);
                                                add_test("test_client_hello_cb", test_client_hello_cb);
                                                add_test("test_no_ems", test_no_ems);
                                                add_test("test_ccs_change_cipher", test_ccs_change_cipher);
                                                add_all_tests("test_early_data_read_write", test_early_data_read_write, 6, 1);
                                                add_all_tests("test_early_data_replay", test_early_data_replay, 2, 1);
                                                add_all_tests("test_early_data_skip", test_early_data_skip, 0x15, 1);
                                                add_all_tests("test_early_data_skip_hrr", test_early_data_skip_hrr, 0x15, 1);
                                                add_all_tests("test_early_data_skip_hrr_fail", test_early_data_skip_hrr_fail, 0x15, 1);
                                                add_all_tests("test_early_data_skip_abort", test_early_data_skip_abort, 0x15, 1);
                                                add_all_tests("test_early_data_not_sent", test_early_data_not_sent, 3, 1);
                                                add_all_tests("test_early_data_psk", test_early_data_psk, 8, 1);
                                                add_all_tests("test_early_data_psk_with_all_ciphers", test_early_data_psk_with_all_ciphers, 7, 1);
                                                add_all_tests("test_early_data_not_expected", test_early_data_not_expected, 3, 1);
                                                add_all_tests("test_early_data_tls1_2", test_early_data_tls1_2, 3, 1);
                                                add_all_tests("test_set_ciphersuite", test_set_ciphersuite, 10, 1);
                                                add_test("test_ciphersuite_change", test_ciphersuite_change);
                                                add_all_tests("test_tls13_ciphersuite", test_tls13_ciphersuite, 4, 1);
                                                add_all_tests("test_tls13_psk", test_tls13_psk, 4, 1);
                                                add_all_tests("test_tls13_no_dhe_kex", test_tls13_no_dhe_kex, 8, 1);
                                                add_all_tests("test_key_exchange", test_key_exchange, 0x15, 1);
                                                add_all_tests("test_negotiated_group", test_negotiated_group, 0x28, 1);
                                                add_all_tests("test_custom_exts", test_custom_exts, 6, 1);
                                                add_test("test_stateless", test_stateless);
                                                add_test("test_pha_key_update", test_pha_key_update);
                                                add_all_tests("test_export_key_mat", test_export_key_mat, 6, 1);
                                                add_all_tests("test_export_key_mat_early", test_export_key_mat_early, 3, 1);
                                                add_test("test_key_update", test_key_update);
                                                add_all_tests("test_key_update_peer_in_write", test_key_update_peer_in_write, 2, 1);
                                                add_all_tests("test_key_update_peer_in_read", test_key_update_peer_in_read, 2, 1);
                                                add_all_tests("test_key_update_local_in_write", test_key_update_local_in_write, 2, 1);
                                                add_all_tests("test_key_update_local_in_read", test_key_update_local_in_read, 2, 1);
                                                add_all_tests("test_ssl_clear", test_ssl_clear, 8, 1);
                                                add_all_tests("test_max_fragment_len_ext", test_max_fragment_len_ext, 4, 1);
                                                add_all_tests("test_srp", test_srp, 6, 1);
                                                add_all_tests("test_info_callback", test_info_callback, 6, 1);
                                                add_all_tests("test_ssl_pending", test_ssl_pending, 2, 1);
                                                add_all_tests("test_ssl_get_shared_ciphers", test_ssl_get_shared_ciphers, 6, 1);
                                                add_all_tests("test_ticket_callbacks", test_ticket_callbacks, 0x14, 1);
                                                add_all_tests("test_shutdown", test_shutdown, 7, 1);
                                                add_test("test_async_shutdown", test_async_shutdown);
                                                add_all_tests("test_incorrect_shutdown", test_incorrect_shutdown, 2, 1);
                                                add_all_tests("test_cert_cb", test_cert_cb, 6, 1);
                                                add_all_tests("test_client_cert_cb", test_client_cert_cb, 2, 1);
                                                add_all_tests("test_ca_names", test_ca_names, 3, 1);
                                                add_all_tests("test_multiblock_write", test_multiblock_write, 4, 1);
                                                add_all_tests("test_servername", test_servername, 10, 1);
                                                add_test("test_unknown_sigalgs_groups", test_unknown_sigalgs_groups);
                                                add_test("test_configuration_of_groups", test_configuration_of_groups);
                                                add_all_tests("test_sigalgs_available", test_sigalgs_available, 6, 1);
                                                add_all_tests("test_pluggable_group", test_pluggable_group, 2, 1);
                                                add_all_tests("test_pluggable_signature", test_pluggable_signature, 6, 1);
                                                add_test("test_ssl_dup", test_ssl_dup);
                                                add_test("test_session_secret_cb", test_session_secret_cb);
                                                add_all_tests("test_set_tmp_dh", test_set_tmp_dh, 0xb, 1);
                                                add_all_tests("test_dh_auto", test_dh_auto, 7, 1);
                                                add_test("test_sni_tls13", test_sni_tls13);
                                                add_all_tests("test_ticket_lifetime", test_ticket_lifetime, 2, 1);
                                                add_test("test_inherit_verify_param", test_inherit_verify_param);
                                                add_test("test_set_alpn", test_set_alpn);
                                                add_test("test_set_verify_cert_store_ssl_ctx", test_set_verify_cert_store_ssl_ctx);
                                                add_test("test_set_verify_cert_store_ssl", test_set_verify_cert_store_ssl);
                                                add_all_tests("test_session_timeout", test_session_timeout, 1, 1);
                                                add_all_tests("test_session_cache_overflow", test_session_cache_overflow, 4, 1);
                                                add_test("test_load_dhfile", test_load_dhfile);
                                                add_test("test_read_ahead_key_change", test_read_ahead_key_change);
                                                add_all_tests("test_tls13_record_padding", test_tls13_record_padding, 6, 1);
                                                add_all_tests("test_serverinfo_custom", test_serverinfo_custom, 4, 1);
                                                add_all_tests("test_pipelining", test_pipelining, 7, 1);
                                                add_all_tests("test_version", test_version, 6, 1);
                                                add_test("test_rstate_string", test_rstate_string);
                                                add_all_tests("test_handshake_retry", test_handshake_retry, 0x10, 1);
                                                add_test("test_data_retry", test_data_retry);
                                                add_all_tests("test_multi_resume", test_multi_resume, 5, 1);
                                                add_all_tests("test_select_next_proto", test_select_next_proto, 0xe, 1);
                                                add_all_tests("test_npn", test_npn, 5, 1);
                                                add_all_tests("test_alpn", test_alpn, 4, 1);
                                                add_all_tests("test_quic_tls", test_quic_tls, 3, 1);
                                                add_test("test_quic_tls_early_data", test_quic_tls_early_data);
                                             }

                                             else{add_test("test_no_ems", test_no_ems);
                                          }

                                          uVar3 = 1;
                                          goto LAB_00124706;
                                       }

                                       CRYPTO_free(cert);
                                       CRYPTO_free(privkey);
                                       CRYPTO_free(cert2);
                                       CRYPTO_free(privkey2);
                                    }
 else {
                                       test_error("test/sslapitest.c", 0x3342, "not supported in this build");
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

}
}LAB_00124704:uVar3 = 0;LAB_00124706:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar3;}void cleanup_tests(void) {
   EVP_PKEY_free(tmp_dh_params);
   CRYPTO_free(cert);
   CRYPTO_free(privkey);
   CRYPTO_free(cert2);
   CRYPTO_free(privkey2);
   CRYPTO_free(cert1024);
   CRYPTO_free(privkey1024);
   CRYPTO_free(cert3072);
   CRYPTO_free(privkey3072);
   CRYPTO_free(cert4096);
   CRYPTO_free(privkey4096);
   CRYPTO_free(cert8192);
   CRYPTO_free(privkey8192);
   bio_s_mempacket_test_free();
   bio_s_always_retry_free();
   bio_s_maybe_retry_free();
   OSSL_PROVIDER_unload(defctxnull);
   OSSL_LIB_CTX_free(libctx);
   return;
}
void test_large_app_data_cold(void) {
   FUN_0010ec20();
   return;
}
void test_key_exchange_cold(void) {
   FUN_00112f68();
   return;
}
bool test_version_cold(SSL *param_1) {
   int iVar1;
   int unaff_EBX;
   int unaff_R12D;
   long in_FS_OFFSET;
   bool bVar2;
   SSL_CTX *in_stack_00000008;
   SSL_CTX *in_stack_00000010;
   SSL *in_stack_00000018;
   SSL *in_stack_00000020;
   long in_stack_00000028;
   SSL_get_version(param_1);
   test_str_eq();
   iVar1 = test_true();
   if (iVar1 != 0) {
      if (unaff_EBX < 0x305) {
         if (unaff_EBX < 0x300) {
            LAB_00123757:SSL_get_version(in_stack_00000018);
            test_str_eq();
            iVar1 = test_true();
            if (iVar1 == 0) goto LAB_00122f8e;
            if (unaff_R12D == 0xfefd) goto LAB_00123555;
         }
 else {
            switch (unaff_EBX) {
               case 0x301:
          break;
               case 0x302:
          break;
               case 0x303:
          break;
               case 0x304:
            }

            SSL_get_version(in_stack_00000018);
            test_str_eq();
            iVar1 = test_true();
            if (iVar1 == 0) goto LAB_00122f8e;
         }

         SSL_is_tls(in_stack_00000020);
         iVar1 = test_true();
         if (iVar1 != 0) {
            SSL_is_tls(in_stack_00000018);
            iVar1 = test_true();
            if (iVar1 != 0) {
               SSL_is_dtls(in_stack_00000020);
               iVar1 = test_false();
               if (iVar1 != 0) {
                  SSL_is_dtls(in_stack_00000018);
                  iVar1 = test_false();
                  if (iVar1 != 0) {
                     SSL_is_quic(in_stack_00000020);
                     iVar1 = test_false();
                     if (iVar1 != 0) {
                        SSL_is_quic(in_stack_00000018);
                        LAB_0012335a:iVar1 = test_false();
                        bVar2 = iVar1 != 0;
                        goto LAB_00122f90;
                     }

                  }

               }

            }

         }

      }
 else {
         if (( unaff_EBX != 0xfefd ) && ( unaff_EBX != 0xfeff )) goto LAB_00123757;
         SSL_get_version(in_stack_00000018);
         test_str_eq();
         iVar1 = test_true();
         if (iVar1 == 0) goto LAB_00122f8e;
         LAB_00123555:SSL_is_dtls(in_stack_00000020);
         iVar1 = test_true();
         if (iVar1 != 0) {
            SSL_is_dtls(in_stack_00000018);
            iVar1 = test_true();
            if (iVar1 != 0) {
               SSL_is_tls(in_stack_00000020);
               iVar1 = test_false();
               if (iVar1 != 0) {
                  SSL_is_tls(in_stack_00000018);
                  iVar1 = test_false();
                  if (iVar1 != 0) {
                     SSL_is_quic(in_stack_00000020);
                     iVar1 = test_false();
                     if (iVar1 != 0) {
                        SSL_is_quic(in_stack_00000018);
                        goto LAB_0012335a;
                     }

                  }

               }

            }

         }

      }

   }

   LAB_00122f8e:bVar2 = false;
   LAB_00122f90:SSL_free(in_stack_00000020);
   SSL_free(in_stack_00000018);
   SSL_CTX_free(in_stack_00000010);
   SSL_CTX_free(in_stack_00000008);
   if (in_stack_00000028 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar2;
}


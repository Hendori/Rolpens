ulong test_quic_client_ex(int param_1) {
   bool bVar1;
   bool bVar2;
   bool bVar3;
   uint uVar4;
   int fd;
   int iVar5;
   int iVar6;
   BIO *bp;
   SSL_METHOD *meth;
   SSL_CTX *ctx;
   SSL *ssl;
   ulong uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   void *local_90;
   ulong local_78;
   undefined4 local_5c;
   long local_58;
   undefined8 local_49;
   undefined1 local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c = 0;
   local_58 = 0;
   local_49 = 0x2e302f7074746808;
   local_41 = 0x39;
   if (param_1 != -1) {
      bp = BIO_new_dgram(param_1, 0);
      uVar4 = test_ptr("test/quic_client_test.c", 0x43, "c_net_bio = c_net_bio_own = BIO_new_dgram(c_fd, 0)", bp);
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0) {
         SSL_free((SSL*)0x0);
         SSL_CTX_free((SSL_CTX*)0x0);
         BIO_ADDR_free(0);
         BIO_free(bp);
         goto LAB_00100115;
      }

      local_90 = (void*)0x0;
      fd = param_1;
      goto LAB_00100089;
   }

   fd = BIO_socket(2, 2, 0x11, 0);
   uVar4 = test_int_ne("test/quic_client_test.c", 0x32, &_LC1, "INVALID_SOCKET", fd);
   if (uVar4 == 0) {
      LAB_0010018f:uVar7 = (ulong)uVar4;
      local_90 = (void*)0x0;
      ssl = (SSL*)0x0;
      ctx = (SSL_CTX*)0x0;
      bp = (BIO*)0x0;
   }
 else {
      iVar5 = BIO_socket_nbio(fd, 1);
      uVar4 = test_true("test/quic_client_test.c", 0x35, "BIO_socket_nbio(c_fd, 1)", iVar5 != 0);
      if (uVar4 == 0) goto LAB_0010018f;
      local_90 = (void*)BIO_ADDR_new();
      uVar4 = test_ptr("test/quic_client_test.c", 0x38, "s_addr_ = BIO_ADDR_new()", local_90);
      if (uVar4 == 0) {
         LAB_0010046e:uVar7 = (ulong)uVar4;
         ssl = (SSL*)0x0;
         ctx = (SSL_CTX*)0x0;
         bp = (BIO*)0x0;
      }
 else {
         local_5c = 0x100007f;
         iVar5 = BIO_ADDR_rawmake(local_90, 2, &local_5c, 4, 0x5111);
         uVar4 = test_true("test/quic_client_test.c", 0x3c, "BIO_ADDR_rawmake(s_addr_, AF_INET, &ina, sizeof(ina), htons(port))", iVar5 != 0);
         if (uVar4 == 0) goto LAB_0010046e;
         bp = BIO_new_dgram(fd, 0);
         uVar4 = test_ptr("test/quic_client_test.c", 0x43, "c_net_bio = c_net_bio_own = BIO_new_dgram(c_fd, 0)", bp);
         uVar7 = (ulong)uVar4;
         if (uVar4 == 0) {
            LAB_0010051a:ssl = (SSL*)0x0;
            ctx = (SSL_CTX*)0x0;
         }
 else {
            if (local_90 != (void*)0x0) {
               uVar8 = BIO_ctrl(bp, 0x2c, 0, local_90);
               uVar7 = uVar8 & 0xffffffff;
               if ((int)uVar8 == 0) goto LAB_0010051a;
            }

            LAB_00100089:meth = (SSL_METHOD*)OSSL_QUIC_client_method();
            ctx = SSL_CTX_new(meth);
            uVar4 = test_ptr("test/quic_client_test.c", 0x4a, "c_ctx = SSL_CTX_new(OSSL_QUIC_client_method())", ctx);
            ssl = (SSL*)0x0;
            uVar7 = (ulong)uVar4;
            if (uVar4 != 0) {
               ssl = SSL_new(ctx);
               uVar4 = test_ptr("test/quic_client_test.c", 0x4d, "c_ssl = SSL_new(c_ctx)", ssl);
               uVar7 = (ulong)uVar4;
               if (uVar4 != 0) {
                  iVar5 = SSL_set_alpn_protos(ssl, &local_49, 9);
                  uVar4 = test_false("test/quic_client_test.c", 0x51, "SSL_set_alpn_protos(c_ssl, alpn, sizeof(alpn))", iVar5 != 0);
                  uVar7 = (ulong)uVar4;
                  if (uVar4 != 0) {
                     SSL_set0_rbio(ssl, bp);
                     iVar5 = BIO_up_ref(bp);
                     iVar5 = test_true("test/quic_client_test.c", 0x58, "BIO_up_ref(c_net_bio)", iVar5 != 0);
                     if (iVar5 != 0) {
                        SSL_set0_wbio(ssl, bp);
                        iVar5 = SSL_set_blocking_mode(ssl, 0);
                        bp = (BIO*)0x0;
                        uVar4 = test_true("test/quic_client_test.c", 0x60, "SSL_set_blocking_mode(c_ssl, 0)", iVar5 != 0);
                        uVar7 = (ulong)uVar4;
                        if (uVar4 == 0) goto LAB_001000be;
                        uVar7 = ossl_time_now();
                        bVar2 = false;
                        bVar3 = false;
                        local_78 = 0;
                        bVar1 = false;
                        uVar8 = ossl_time_now();
                        if (uVar7 <= uVar8) goto LAB_001003c5;
                        do {
                           do {
                              if (bVar1) {
                                 LAB_001002f0:if (!bVar3) {
                                    iVar5 = SSL_write(ssl, "GET LICENSE.txt\r\n", 0x11);
                                    iVar5 = test_int_eq("test/quic_client_test.c", 0x78, "SSL_write(c_ssl, msg1, sizeof(msg1) - 1)", "(int)sizeof(msg1) - 1", iVar5, 0x11);
                                    if (iVar5 == 0) goto LAB_001003ff;
                                    iVar5 = SSL_stream_conclude(ssl, 0);
                                    iVar5 = test_true("test/quic_client_test.c", 0x7c, "SSL_stream_conclude(c_ssl, 0)", iVar5 != 0);
                                    if (iVar5 == 0) goto LAB_001003ff;
                                 }

                                 bVar1 = true;
                                 bVar3 = true;
                              }
 else {
                                 iVar5 = SSL_connect(ssl);
                                 if (iVar5 == 1) {
                                    iVar5 = test_true("test/quic_client_test.c", 0x6e, "ret == 1 || is_want(c_ssl, ret)", 1);
                                    if (iVar5 != 0) {
                                       test_info("test/quic_client_test.c", 0x73, "Connected!");
                                       goto LAB_001002f0;
                                    }

                                    goto LAB_001003ff;
                                 }

                                 iVar5 = SSL_get_error(ssl, iVar5);
                                 iVar5 = test_true("test/quic_client_test.c", 0x6e, "ret == 1 || is_want(c_ssl, ret)", iVar5 - 2U < 2);
                                 if (iVar5 == 0) goto LAB_001003ff;
                              }

                              if (( (bool)( bVar3 & ( bVar2 ^ 1U ) ) ) && ( local_78 < 15999 )) {
                                 iVar5 = SSL_read_ex(ssl, msg2 + local_78, 15999 - local_78, &local_58);
                                 if (iVar5 == 1) {
                                    local_78 = local_78 + local_58;
                                    iVar5 = test_size_t_lt("test/quic_client_test.c", 0x8f, "c_total_read", "sizeof(msg2) - 1", local_78, 15999);
                                    joined_r0x00100655:if (iVar5 != 0) goto LAB_0010038e;
                                    goto LAB_001003ff;
                                 }

                                 iVar6 = SSL_get_error(ssl, iVar5);
                                 if (iVar6 != 6) {
                                    iVar5 = SSL_get_error(ssl, iVar5);
                                    iVar5 = test_true("test/quic_client_test.c", 0x89, "is_want(c_ssl, ret)", iVar5 - 2U < 2);
                                    goto joined_r0x00100655;
                                 }

                                 test_info("test/quic_client_test.c", 0x88, "Message:\n%s\n", msg2);
                                 LAB_00100392:iVar5 = SSL_shutdown(ssl);
                                 if (iVar5 == 1) {
                                    uVar7 = 1;
                                    bp = (BIO*)0x0;
                                    goto LAB_001000be;
                                 }

                                 bVar2 = true;
                              }
 else {
                                 LAB_0010038e:if (bVar2) goto LAB_00100392;
                              }

                              OSSL_sleep(0);
                              SSL_handle_events();
                              uVar8 = ossl_time_now();
                           }
 while ( uVar8 < uVar7 );
                           LAB_001003c5:;
                        }
 while ( uVar8 - uVar7 < 10000000000 );
                        test_error("test/quic_client_test.c", 0x68, "timeout while attempting QUIC client test");
                     }

                     LAB_001003ff:bp = (BIO*)0x0;
                     uVar7 = 0;
                  }

               }

            }

         }

      }

   }

   LAB_001000be:SSL_free(ssl);
   SSL_CTX_free(ctx);
   BIO_ADDR_free(local_90);
   BIO_free(bp);
   if (( param_1 == -1 ) && ( fd != -1 )) {
      BIO_closesocket(fd);
   }

   LAB_00100115:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 test_quic_client_connect_first(void) {
   int __fd;
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   sockaddr local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 8; i++) {
      local_38.sa_data[( i + 6 )] = '\0';
   }

   local_38.sa_family = 2;
   builtin_strncpy(local_38.sa_data, "\x11Q\x7f", 4);
   local_38.sa_data[4] = '\0';
   local_38.sa_data[5] = '\x01';
   __fd = socket(2, 2, 0x11);
   iVar1 = test_int_ne("test/quic_client_test.c", 0xc0, &_LC1, "INVALID_SOCKET", __fd, 0xffffffff);
   if (iVar1 != 0) {
      iVar1 = connect(__fd, &local_38, 0x10);
      iVar1 = test_int_eq("test/quic_client_test.c", 0xc3, "connect(c_fd, (const struct sockaddr *)&sin, sizeof(sin))", &_LC22, iVar1, 0);
      if (iVar1 != 0) {
         iVar1 = BIO_socket_nbio(__fd, 1);
         iVar1 = test_true("test/quic_client_test.c", 0xc6, "BIO_socket_nbio(c_fd, 1)", iVar1 != 0);
         if (iVar1 != 0) {
            uVar2 = test_quic_client_ex(__fd);
            close(__fd);
            goto LAB_0010071b;
         }

      }

   }

   if (__fd != -1) {
      close(__fd);
   }

   uVar2 = 0;
   LAB_0010071b:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_quic_client(void) {
   test_quic_client_ex(0xffffffff);
   return;
}
undefined1 *test_get_options(void) {
   return options_0;
}
undefined8 setup_tests(void) {
   int iVar1;
   iVar1 = test_skip_common_options();
   if (iVar1 != 0) {
      add_test("test_quic_client", test_quic_client);
      add_test("test_quic_client_connect_first", test_quic_client_connect_first);
      return 1;
   }

   test_error("test/quic_client_test.c", 0xda, "Error parsing test options\n");
   return 0;
}


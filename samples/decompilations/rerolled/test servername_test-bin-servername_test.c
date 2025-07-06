void test_servername(int param_1) {
   for (int i_757 = 0; i_757 < 2; i_757++) {
      /* WARNING: Could not recover jumptable at 0x0010000e. Too many branches */
   }
   ( **(code**)( sni_test_fns + (long)param_1 * 8 ) )();
   return;
}bool server_setup_sni(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   bool bVar7;
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
   iVar3 = create_ssl_ctx_pair(0, uVar5, uVar4, 0x301, 0, &local_38, &local_40, uVar2, uVar1);
   iVar3 = test_true("test/servername_test.c", 0xd0, "create_ssl_ctx_pair(NULL, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)", iVar3 != 0);
   if (iVar3 != 0) {
      iVar3 = create_ssl_objects(local_38, local_40, &local_28, &local_30, 0, 0);
      iVar3 = test_true("test/servername_test.c", 0xd4, "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)", iVar3 != 0);
      if (iVar3 != 0) {
         SSL_ctrl(local_28, 0x37, 0, "dummy-host");
         iVar3 = create_ssl_connection(local_28, local_30, 0);
         iVar3 = test_true("test/servername_test.c", 0xdb, "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)", iVar3 != 0);
         if (iVar3 != 0) {
            pcVar6 = SSL_get_servername(local_28, 0);
            iVar3 = test_ptr_null("test/servername_test.c", 0xde, "SSL_get_servername(serverssl, TLSEXT_NAMETYPE_host_name)", pcVar6);
            bVar7 = iVar3 != 0;
            goto LAB_001000ce;
         }
      }
   }
   bVar7 = false;
   LAB_001000ce:SSL_free(local_28);
   SSL_free(local_30);
   SSL_CTX_free(local_38);
   SSL_CTX_free(local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar7;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool get_sni_from_client_hello_constprop_0(BIO *param_1, long *param_2) {
   undefined8 uVar1;
   ushort uVar2;
   ushort uVar3;
   int iVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   void *pvVar8;
   long lVar9;
   undefined8 uVar10;
   undefined1 uVar11;
   ushort *puVar12;
   long in_FS_OFFSET;
   bool bVar13;
   long local_a0;
   ushort *local_98;
   ulong uStack_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (ushort*)0x0;
   uStack_90 = 0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   uVar5 = BIO_ctrl(param_1, 3, 0, &local_a0);
   iVar4 = test_long_ge("test/servername_test.c", 0x37, "len = BIO_get_mem_data(bio, (char **)&data)", &_LC6, uVar5, 0);
   if (iVar4 == 0) goto LAB_001005c0;
   if ((long)uVar5 < 0) {
      test_true("test/servername_test.c", 0x38, "PACKET_buf_init(&pkt, data, len)", 0);
      goto LAB_001005c0;
   }
   uStack_90 = uVar5;
   iVar4 = test_true("test/servername_test.c", 0x38, "PACKET_buf_init(&pkt, data, len)", 1);
   if (( iVar4 == 0 ) || ( uVar5 < 5 )) goto LAB_001005c0;
   puVar12 = (ushort*)( local_a0 + 5 );
   uVar6 = uVar5 - 5;
   if (uVar6 < 4) {
      local_98 = puVar12;
      uStack_90 = uVar6;
      iVar4 = test_true("test/servername_test.c", 0x3c, "PACKET_forward(&pkt, SSL3_HM_HEADER_LENGTH)", 0);
      if (iVar4 == 0) goto LAB_001005c0;
      LAB_0010060a:uVar10 = 0;
   } else {
      puVar12 = (ushort*)( local_a0 + 9 );
      uVar6 = uVar5 - 9;
      local_98 = puVar12;
      uStack_90 = uVar6;
      iVar4 = test_true("test/servername_test.c", 0x3c, "PACKET_forward(&pkt, SSL3_HM_HEADER_LENGTH)", 1);
      if (iVar4 == 0) goto LAB_001005c0;
      if (uVar6 < 0x22) goto LAB_0010060a;
      puVar12 = (ushort*)( local_a0 + 0x2b );
      uVar6 = uVar5 - 0x2b;
      uVar10 = 1;
      local_98 = puVar12;
      uStack_90 = uVar6;
   }
   iVar4 = test_true("test/servername_test.c", 0x3e, "PACKET_forward(&pkt, CLIENT_VERSION_LEN + SSL3_RANDOM_SIZE)", uVar10);
   if (iVar4 == 0) goto LAB_001005c0;
   if (uVar6 == 0) {
      LAB_00100618:uVar5 = 0;
      uVar10 = 0;
   } else {
      uVar2 = *puVar12;
      uVar5 = (ulong)(byte)uVar2;
      if (uVar6 - 1 < uVar5) goto LAB_00100618;
      local_88._0_8_ = (long)puVar12 + 1;
      uVar6 = ( uVar6 - 1 ) - uVar5;
      uVar10 = 1;
      puVar12 = (ushort*)( local_88._0_8_ + uVar5 );
      local_88[8] = (byte)uVar2;
      local_88._9_7_ = 0;
      local_98 = puVar12;
      uStack_90 = uVar6;
   }
   iVar4 = test_true("test/servername_test.c", 0x41, "PACKET_get_length_prefixed_1(&pkt, &pkt2)", uVar10);
   if (iVar4 != 0) {
      uVar10 = 0;
      if (1 < uVar6) {
         uVar2 = *puVar12 << 8 | *puVar12 >> 8;
         uVar7 = (ulong)uVar2;
         if (uVar7 <= uVar6 - 2) {
            local_88._0_8_ = puVar12 + 1;
            uVar6 = ( uVar6 - 2 ) - uVar7;
            puVar12 = (ushort*)( local_88._0_8_ + uVar7 );
            local_88._8_2_ = uVar2;
            local_88._10_6_ = 0;
            uVar10 = 1;
            uVar5 = uVar7;
            local_98 = puVar12;
            uStack_90 = uVar6;
         }
      }
      iVar4 = test_true("test/servername_test.c", 0x43, "PACKET_get_length_prefixed_2(&pkt, &pkt2)", uVar10);
      if (iVar4 != 0) {
         uVar10 = 0;
         if (uVar6 != 0) {
            uVar2 = *puVar12;
            uVar7 = (ulong)(byte)uVar2;
            if (uVar7 <= uVar6 - 1) {
               local_88._0_8_ = (long)puVar12 + 1;
               uVar6 = ( uVar6 - 1 ) - uVar7;
               puVar12 = (ushort*)( local_88._0_8_ + uVar7 );
               local_88[8] = (byte)uVar2;
               local_88._9_7_ = 0;
               uVar10 = 1;
               uVar5 = uVar7;
               local_98 = puVar12;
               uStack_90 = uVar6;
            }
         }
         iVar4 = test_true("test/servername_test.c", 0x45, "PACKET_get_length_prefixed_1(&pkt, &pkt2)", uVar10);
         if (iVar4 != 0) {
            uVar10 = 0;
            if (( 1 < uVar6 ) && ( uVar6 = uVar6 - 2 ),uVar6 == ( ushort )(*puVar12 << 8 | *puVar12 >> 8)) {
               uVar10 = 1;
               local_98 = (ushort*)( (long)( puVar12 + 1 ) + uVar6 );
               local_88._8_8_ = uVar6;
               local_88._0_8_ = puVar12 + 1;
               uStack_90 = 0;
               uVar5 = uVar6;
            }
            uVar2 = 0;
            iVar4 = test_true("test/servername_test.c", 0x47, "PACKET_as_length_prefixed_2(&pkt, &pkt2)", uVar10);
            if (iVar4 != 0) {
               while (uVar5 != 0) {
                  if (uVar5 == 1) {
                     iVar4 = test_true("test/servername_test.c", 0x4c, "PACKET_get_net_2(&pkt2, &type)", 0);
                     if (iVar4 == 0) break;
                     LAB_00100598:uVar10 = 0;
                  } else {
                     uVar2 = *(ushort*)local_88._0_8_;
                     local_88._8_8_ = uVar5 - 2;
                     local_88._0_8_ = (ushort*)( local_88._0_8_ + 2 );
                     uVar2 = uVar2 << 8 | uVar2 >> 8;
                     iVar4 = test_true("test/servername_test.c", 0x4c, "PACKET_get_net_2(&pkt2, &type)", 1);
                     if (iVar4 == 0) break;
                     if (uVar5 - 2 < 2) goto LAB_00100598;
                     uVar10 = 0;
                     uVar3 = *(ushort*)local_88._0_8_ << 8 | *(ushort*)local_88._0_8_ >> 8;
                     uVar6 = (ulong)uVar3;
                     if (uVar6 <= uVar5 - 4) {
                        local_78._8_2_ = uVar3;
                        local_78._0_8_ = (ushort*)( local_88._0_8_ + 2 );
                        local_78._10_6_ = 0;
                        local_88._8_8_ = ( uVar5 - 4 ) - uVar6;
                        local_88._0_8_ = local_88._0_8_ + 2 + uVar6;
                        uVar10 = 1;
                     }
                  }
                  iVar4 = test_true("test/servername_test.c", 0x4d, "PACKET_get_length_prefixed_2(&pkt2, &pkt3)", uVar10);
                  if (iVar4 == 0) break;
                  if (uVar2 == 0) {
                     if ((ulong)local_78._8_8_ < 2) {
                        LAB_00100850:uVar2 = 0;
                        puVar12 = (ushort*)0x0;
                        uVar5 = 0;
                        uVar10 = 0;
                     } else {
                        uVar2 = *(ushort*)local_78._0_8_ << 8 | *(ushort*)local_78._0_8_ >> 8;
                        uVar5 = (ulong)uVar2;
                        if (local_78._8_8_ - 2 < uVar5) goto LAB_00100850;
                        puVar12 = (ushort*)( local_78._0_8_ + 2 );
                        uVar10 = 1;
                        local_78._8_8_ = ( local_78._8_8_ - 2 ) - uVar5;
                        local_78._0_8_ = (undefined1*)( (long)puVar12 + uVar5 );
                        local_68._8_2_ = uVar2;
                        local_68._0_8_ = puVar12;
                        local_68._10_6_ = 0;
                     }
                     iVar4 = test_true("test/servername_test.c", 0x50, "PACKET_get_length_prefixed_2(&pkt3, &pkt4)", uVar10);
                     if (( iVar4 != 0 ) && ( iVar4 = test_uint_ne("test/servername_test.c", 0x51, "PACKET_remaining(&pkt4)", &_LC6, uVar2, 0) ),iVar4 != 0) {
                        uVar11 = 0;
                        if (uVar5 != 0) {
                           uVar11 = ( undefined1 ) * puVar12;
                           local_68._8_8_ = uVar5 - 1;
                           local_68._0_8_ = (undefined1*)( (long)puVar12 + 1 );
                        }
                        iVar4 = test_true("test/servername_test.c", 0x52, "PACKET_get_1(&pkt4, &servname_type)", uVar5 != 0);
                        if (( iVar4 != 0 ) && ( iVar4 = test_uint_eq("test/servername_test.c", 0x53, "servname_type", "TLSEXT_NAMETYPE_host_name", uVar11, 0) ),iVar4 != 0) {
                           if ((ulong)local_68._8_8_ < 2) {
                              LAB_00100865:uVar10 = 0;
                           } else {
                              uVar2 = *(ushort*)local_68._0_8_ << 8 | *(ushort*)local_68._0_8_ >> 8;
                              uVar5 = (ulong)uVar2;
                              if (local_68._8_8_ - 2 < uVar5) goto LAB_00100865;
                              local_58._0_8_ = local_68._0_8_ + 2;
                              local_68._8_8_ = ( local_68._8_8_ - 2 ) - uVar5;
                              local_68._0_8_ = local_58._0_8_ + uVar5;
                              local_58._8_2_ = uVar2;
                              local_58._10_6_ = 0;
                              uVar10 = 1;
                           }
                           iVar4 = test_true("test/servername_test.c", 0x54, "PACKET_get_length_prefixed_2(&pkt4, &pkt5)", uVar10);
                           if (iVar4 != 0) {
                              uVar10 = local_58._8_8_;
                              iVar4 = test_uint_le("test/servername_test.c", 0x55, "PACKET_remaining(&pkt5)", "TLSEXT_MAXLEN_host_name", local_58._8_8_ & 0xffffffff, 0xff);
                              if (iVar4 != 0) {
                                 uVar1 = local_58._0_8_;
                                 pvVar8 = memchr((void*)local_58._0_8_, 0, uVar10);
                                 iVar4 = test_false("test/servername_test.c", 0x56, "PACKET_contains_zero_byte(&pkt5)", pvVar8 != (void*)0x0);
                                 if (iVar4 != 0) {
                                    CRYPTO_free((void*)*param_2);
                                    lVar9 = CRYPTO_strndup(uVar1, uVar10, "include/internal/packet.h", 0x1e6);
                                    *param_2 = lVar9;
                                    iVar4 = test_true("test/servername_test.c", 0x57, "PACKET_strndup(&pkt5, sni)", lVar9 != 0);
                                    bVar13 = iVar4 != 0;
                                    goto LAB_001005c2;
                                 }
                              }
                           }
                        }
                     }
                     break;
                  }
                  uVar5 = local_88._8_8_;
               };
            }
         }
      }
   }
   LAB_001005c0:bVar13 = false;
   LAB_001005c2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return bVar13;
}uint client_setup_sni_before_state(void) {
   int iVar1;
   uint uVar2;
   SSL_METHOD *meth;
   SSL_CTX *ctx;
   SSL *ssl;
   BIO_METHOD *pBVar3;
   BIO *a;
   BIO *a_00;
   void *ptr;
   long in_FS_OFFSET;
   void *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (void*)0x0;
   meth = (SSL_METHOD*)TLS_method();
   ctx = SSL_CTX_new(meth);
   iVar1 = test_ptr("test/servername_test.c", 0x6c, &_LC27, ctx);
   if (iVar1 == 0) {
      uVar2 = 0;
      ptr = (void*)0x0;
      ssl = (SSL*)0x0;
      goto LAB_00100a20;
   }
   ssl = SSL_new(ctx);
   iVar1 = test_ptr("test/servername_test.c", 0x74, &_LC28, ssl);
   if (iVar1 == 0) {
      LAB_001008f6:ptr = (void*)0x0;
      uVar2 = 0;
   } else {
      SSL_ctrl(ssl, 0x37, 0, "dummy-host");
      pBVar3 = BIO_s_mem();
      a = BIO_new(pBVar3);
      pBVar3 = BIO_s_mem();
      a_00 = BIO_new(pBVar3);
      iVar1 = test_ptr("test/servername_test.c", 0x7c, &_LC29, a);
      if (iVar1 != 0) {
         iVar1 = test_ptr("test/servername_test.c", 0x7c, &_LC30, a_00);
         if (iVar1 != 0) {
            SSL_set_bio(ssl, a, a_00);
            iVar1 = SSL_connect(ssl);
            iVar1 = test_int_le("test/servername_test.c", 0x84, "SSL_connect(con)", &_LC6, iVar1, 0);
            if (iVar1 != 0) {
               iVar1 = get_sni_from_client_hello_constprop_0(a_00, &local_48);
               uVar2 = test_true("test/servername_test.c", 0x87, "get_sni_from_client_hello(wbio, &hostname)", iVar1 != 0);
               ptr = local_48;
               if (uVar2 != 0) {
                  iVar1 = test_str_eq("test/servername_test.c", 0x8a, "hostname", &_LC33, local_48, "dummy-host");
                  uVar2 = ( uint )(iVar1 != 0);
               }
               goto LAB_00100a20;
            }
            goto LAB_001008f6;
         }
      }
      uVar2 = 0;
      BIO_free(a);
      ptr = (void*)0x0;
      BIO_free(a_00);
   }
   LAB_00100a20:CRYPTO_free(ptr);
   SSL_free(ssl);
   SSL_CTX_free(ctx);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}uint client_setup_sni_after_state(void) {
   int iVar1;
   uint uVar2;
   SSL_METHOD *meth;
   SSL_CTX *ctx;
   SSL *s;
   BIO_METHOD *pBVar3;
   BIO *a;
   BIO *a_00;
   void *ptr;
   long in_FS_OFFSET;
   void *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (void*)0x0;
   meth = (SSL_METHOD*)TLS_method();
   ctx = SSL_CTX_new(meth);
   iVar1 = test_ptr("test/servername_test.c", 0xa0, &_LC27, ctx);
   if (iVar1 == 0) {
      uVar2 = 0;
      ptr = (void*)0x0;
      s = (SSL*)0x0;
      goto LAB_00100c48;
   }
   s = SSL_new(ctx);
   iVar1 = test_ptr("test/servername_test.c", 0xa8, &_LC28, s);
   if (iVar1 == 0) {
      LAB_00100b16:ptr = (void*)0x0;
      uVar2 = 0;
   } else {
      pBVar3 = BIO_s_mem();
      a = BIO_new(pBVar3);
      pBVar3 = BIO_s_mem();
      a_00 = BIO_new(pBVar3);
      iVar1 = test_ptr("test/servername_test.c", 0xad, &_LC29, a);
      if (iVar1 != 0) {
         iVar1 = test_ptr("test/servername_test.c", 0xad, &_LC30, a_00);
         if (iVar1 != 0) {
            SSL_set_bio(s, a, a_00);
            SSL_set_connect_state(s);
            SSL_ctrl(s, 0x37, 0, "dummy-host");
            iVar1 = SSL_connect(s);
            iVar1 = test_int_le("test/servername_test.c", 0xb9, "SSL_connect(con)", &_LC6, iVar1, 0);
            if (iVar1 != 0) {
               iVar1 = get_sni_from_client_hello_constprop_0(a_00, &local_48);
               uVar2 = test_true("test/servername_test.c", 0xbc, "get_sni_from_client_hello(wbio, &hostname)", iVar1 != 0);
               ptr = local_48;
               if (uVar2 != 0) {
                  iVar1 = test_str_eq("test/servername_test.c", 0xbf, "hostname", &_LC33, local_48, "dummy-host");
                  uVar2 = ( uint )(iVar1 != 0);
               }
               goto LAB_00100c48;
            }
            goto LAB_00100b16;
         }
      }
      uVar2 = 0;
      BIO_free(a);
      ptr = (void*)0x0;
      BIO_free(a_00);
   }
   LAB_00100c48:CRYPTO_free(ptr);
   SSL_free(s);
   SSL_CTX_free(ctx);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 setup_tests(void) {
   int iVar1;
   iVar1 = test_skip_common_options();
   if (iVar1 == 0) {
      test_error("test/servername_test.c", 0x102, "Error parsing test options\n");
   } else {
      cert = test_get_argument(0);
      iVar1 = test_ptr("test/servername_test.c", 0x106, "cert = test_get_argument(0)", cert);
      if (iVar1 != 0) {
         privkey = test_get_argument(1);
         iVar1 = test_ptr("test/servername_test.c", 0x107, "privkey = test_get_argument(1)", privkey);
         if (iVar1 != 0) {
            add_all_tests("test_servername", 0x100000, 3, 1);
            return 1;
         }
      }
   }
   return 0;
}

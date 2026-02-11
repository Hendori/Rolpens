
undefined4 test_client_hello(int param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  long lVar6;
  SSL *s;
  BIO_METHOD *pBVar7;
  BIO *a;
  BIO *a_00;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_80;
  ushort *local_78;
  ulong uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (ushort *)0x0;
  uStack_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  meth = (SSL_METHOD *)TLS_method();
  ctx = SSL_CTX_new(meth);
  iVar4 = test_ptr("test/clienthellotest.c",0x4e,&_LC0);
  if (iVar4 != 0) {
    SSL_CTX_ctrl(ctx,0x7c,0,(void *)0x0);
    iVar4 = test_true("test/clienthellotest.c",0x50,"SSL_CTX_set_max_proto_version(ctx, 0)");
    if (iVar4 != 0) {
      if (param_1 == 0) {
        lVar6 = SSL_CTX_ctrl(ctx,0x7c,0x303,(void *)0x0);
        iVar4 = test_true("test/clienthellotest.c",0x5b,
                          "SSL_CTX_set_max_proto_version(ctx, TLS1_2_VERSION)",lVar6 != 0);
        goto joined_r0x00100261;
      }
      if (param_1 - 1U < 2) {
        SSL_CTX_set_options(ctx,0x10);
        SSL_CTX_clear_options(ctx,0x100000);
        lVar6 = SSL_CTX_ctrl(ctx,0x5c,0,"?X25519:?secp256r1:?ffdhe2048:?ffdhe3072");
        iVar4 = test_true("test/clienthellotest.c",0x66,
                          "SSL_CTX_set1_groups_list(ctx, \"?X25519:?secp256r1:?ffdhe2048:?ffdhe3072\")"
                          ,lVar6 != 0);
        if (iVar4 != 0) {
          if (param_1 == 1) {
            iVar4 = SSL_CTX_set_alpn_protos
                              (ctx,
                               "O1234567890123456789012345678901234567890123456789012345678901234567890123456789O1234567890123456789012345678901234567890123456789012345678901234567890123456789"
                               ,0xa0);
            iVar4 = test_false("test/clienthellotest.c",0x6f,
                               "SSL_CTX_set_alpn_protos(ctx, (unsigned char *)alpn_prots, sizeof(alpn_prots) - 1)"
                               ,iVar4 != 0);
          }
          else {
            iVar4 = SSL_CTX_set_cipher_list(ctx,"AES128-SHA");
            iVar4 = test_true("test/clienthellotest.c",0x77,
                              "SSL_CTX_set_cipher_list(ctx, \"AES128-SHA\")",iVar4 != 0);
            if (iVar4 == 0) goto LAB_00100069;
            iVar4 = SSL_CTX_set_ciphersuites(ctx,"TLS_AES_128_GCM_SHA256");
            iVar4 = test_true("test/clienthellotest.c",0x79,
                              "SSL_CTX_set_ciphersuites(ctx, \"TLS_AES_128_GCM_SHA256\")",iVar4 != 0
                             );
          }
joined_r0x00100261:
          if (iVar4 != 0) {
            s = SSL_new(ctx);
            iVar4 = test_ptr("test/clienthellotest.c",0x84,&_LC6,s);
            if (iVar4 != 0) {
              pBVar7 = BIO_s_mem();
              a = BIO_new(pBVar7);
              pBVar7 = BIO_s_mem();
              a_00 = BIO_new(pBVar7);
              iVar4 = test_ptr("test/clienthellotest.c",0x89,&_LC12,a);
              if ((iVar4 == 0) ||
                 (iVar4 = test_ptr("test/clienthellotest.c",0x89,&_LC13,a_00), iVar4 == 0)) {
                BIO_free(a);
                BIO_free(a_00);
              }
              else {
                SSL_set_bio(s,a,a_00);
                SSL_set_connect_state(s);
                if (param_1 == 0) {
                  iVar4 = SSL_set_session_ticket_ext(s,"Hello World!",0xc);
                  iVar4 = test_true("test/clienthellotest.c",0x93,
                                    "SSL_set_session_ticket_ext(con, dummytick, strlen(dummytick))",
                                    iVar4 != 0);
                  if (iVar4 == 0) goto LAB_0010021e;
                }
                iVar4 = SSL_connect(s);
                iVar4 = test_int_le("test/clienthellotest.c",0x98,"SSL_connect(con)",&_LC14,iVar4,0)
                ;
                if (iVar4 != 0) {
                  uVar8 = BIO_ctrl(a_00,3,0,&local_80);
                  iVar4 = test_long_ge("test/clienthellotest.c",0x9d,
                                       "len = BIO_get_mem_data(wbio, (char **)&data)",&_LC14,uVar8,0
                                      );
                  if (iVar4 != 0) {
                    if ((long)uVar8 < 0) {
                      test_true("test/clienthellotest.c",0x9e,"PACKET_buf_init(&pkt, data, len)",0);
                    }
                    else {
                      uStack_70 = uVar8;
                      iVar4 = test_true("test/clienthellotest.c",0x9e,
                                        "PACKET_buf_init(&pkt, data, len)",1);
                      if ((iVar4 != 0) && (4 < uVar8)) {
                        local_78 = (ushort *)(local_80 + 5);
                        uVar1 = uVar8 - 5;
                        if (uVar1 < 4) {
                          uStack_70 = uVar1;
                          iVar4 = test_true("test/clienthellotest.c",0xa6,
                                            "PACKET_forward(&pkt, SSL3_HM_HEADER_LENGTH)",0);
                          if (iVar4 != 0) {
LAB_0010076e:
                            uVar10 = 0;
                            goto LAB_0010044c;
                          }
                        }
                        else {
                          local_78 = (ushort *)(local_80 + 9);
                          uStack_70 = uVar8 - 9;
                          iVar4 = test_true("test/clienthellotest.c",0xa6,
                                            "PACKET_forward(&pkt, SSL3_HM_HEADER_LENGTH)",1);
                          if (iVar4 != 0) {
                            if (uVar8 - 9 < 0x22) goto LAB_0010076e;
                            local_78 = (ushort *)(local_80 + 0x2b);
                            uStack_70 = uVar8 - 0x2b;
                            uVar10 = 1;
LAB_0010044c:
                            iVar4 = test_true("test/clienthellotest.c",0xa8,
                                              "PACKET_forward(&pkt, CLIENT_VERSION_LEN + SSL3_RANDOM_SIZE)"
                                              ,uVar10);
                            if (iVar4 != 0) {
                              if (uStack_70 == 0) {
LAB_0010077f:
                                uVar10 = 0;
                              }
                              else {
                                uVar2 = *local_78;
                                uVar8 = (ulong)(byte)uVar2;
                                if (uStack_70 - 1 < uVar8) goto LAB_0010077f;
                                local_68._0_8_ = (long)local_78 + 1;
                                uStack_70 = (uStack_70 - 1) - uVar8;
                                local_78 = (ushort *)(local_68._0_8_ + uVar8);
                                uVar10 = 1;
                                local_68[8] = (byte)uVar2;
                                local_68._9_7_ = 0;
                              }
                              iVar4 = test_true("test/clienthellotest.c",0xab,
                                                "PACKET_get_length_prefixed_1(&pkt, &pkt2)",uVar10);
                              if (iVar4 != 0) {
                                if (uStack_70 < 2) {
LAB_0010078b:
                                  uVar10 = 0;
                                }
                                else {
                                  uVar2 = *local_78 << 8 | *local_78 >> 8;
                                  uVar8 = (ulong)uVar2;
                                  if (uStack_70 - 2 < uVar8) goto LAB_0010078b;
                                  local_68._0_8_ = local_78 + 1;
                                  uStack_70 = (uStack_70 - 2) - uVar8;
                                  local_78 = (ushort *)(local_68._0_8_ + uVar8);
                                  local_68._8_2_ = uVar2;
                                  local_68._10_6_ = 0;
                                  uVar10 = 1;
                                }
                                iVar4 = test_true("test/clienthellotest.c",0xad,
                                                  "PACKET_get_length_prefixed_2(&pkt, &pkt2)",uVar10
                                                 );
                                if (iVar4 != 0) {
                                  if (uStack_70 == 0) {
LAB_00100792:
                                    uVar10 = 0;
                                  }
                                  else {
                                    uVar2 = *local_78;
                                    uVar8 = (ulong)(byte)uVar2;
                                    if (uStack_70 - 1 < uVar8) goto LAB_00100792;
                                    local_68._0_8_ = (long)local_78 + 1;
                                    uStack_70 = (uStack_70 - 1) - uVar8;
                                    local_78 = (ushort *)(local_68._0_8_ + uVar8);
                                    uVar10 = 1;
                                    local_68[8] = (byte)uVar2;
                                    local_68._9_7_ = 0;
                                  }
                                  iVar4 = test_true("test/clienthellotest.c",0xaf,
                                                    "PACKET_get_length_prefixed_1(&pkt, &pkt2)",
                                                    uVar10);
                                  if (iVar4 != 0) {
                                    if (uStack_70 < 2) {
                                      uVar10 = 0;
                                    }
                                    else {
                                      uVar8 = uStack_70 - 2;
                                      uVar10 = 0;
                                      if (uVar8 == (ushort)(*local_78 << 8 | *local_78 >> 8)) {
                                        local_68._0_8_ = local_78 + 1;
                                        uVar10 = 1;
                                        local_78 = (ushort *)(local_68._0_8_ + uVar8);
                                        local_68._8_8_ = uVar8;
                                        uStack_70 = 0;
                                      }
                                    }
                                    iVar4 = test_true("test/clienthellotest.c",0xb1,
                                                      "PACKET_as_length_prefixed_2(&pkt, &pkt2)",
                                                      uVar10);
                                    if (iVar4 != 0) {
                                      uVar5 = 0;
                                      uVar2 = 0;
                                      do {
                                        uVar8 = local_68._8_8_;
                                        do {
                                          if (uVar8 == 0) {
                                            if (param_1 == 2) {
                                              uVar5 = 1;
                                            }
                                            goto LAB_0010006f;
                                          }
                                          if (uVar8 == 1) {
                                            iVar4 = test_true("test/clienthellotest.c",0xb7,
                                                              "PACKET_get_net_2(&pkt2, &type)",0);
                                            if (iVar4 == 0) goto LAB_0010006f;
                                            uVar10 = 0;
                                            uVar11 = uVar8;
                                          }
                                          else {
                                            uVar11 = uVar8 - 2;
                                            uVar2 = *(ushort *)local_68._0_8_;
                                            local_68._8_8_ = uVar11;
                                            local_68._0_8_ = (ushort *)(local_68._0_8_ + 2);
                                            uVar2 = uVar2 << 8 | uVar2 >> 8;
                                            iVar4 = test_true("test/clienthellotest.c",0xb7,
                                                              "PACKET_get_net_2(&pkt2, &type)",1);
                                            if (iVar4 == 0) goto LAB_0010006f;
                                            if (1 < uVar11) {
                                              uVar3 = *(ushort *)local_68._0_8_ << 8 |
                                                      *(ushort *)local_68._0_8_ >> 8;
                                              uVar9 = (ulong)uVar3;
                                              if (uVar9 <= uVar8 - 4) {
                                                uVar11 = (uVar8 - 4) - uVar9;
                                                local_58._8_2_ = uVar3;
                                                local_58._0_8_ = (ushort *)(local_68._0_8_ + 2);
                                                local_58._10_6_ = 0;
                                                local_68._8_8_ = uVar11;
                                                local_68._0_8_ = local_68._0_8_ + 2 + uVar9;
                                                uVar10 = 1;
                                                goto LAB_001006b2;
                                              }
                                            }
                                            uVar10 = 0;
                                          }
LAB_001006b2:
                                          iVar4 = test_true("test/clienthellotest.c",0xb8,
                                                                                                                        
                                                  "PACKET_get_length_prefixed_2(&pkt2, &pkt3)",
                                                  uVar10);
                                          if (iVar4 == 0) goto LAB_0010006f;
                                          if ((param_1 == 0) && (uVar2 == 0x23)) {
                                            bVar12 = false;
                                            if (local_58._8_8_ == 0xc) {
                                              iVar4 = CRYPTO_memcmp((void *)local_58._0_8_,
                                                                    "Hello World!",0xc);
                                              bVar12 = iVar4 == 0;
                                            }
                                            iVar4 = test_true("test/clienthellotest.c",0xbd,
                                                                                                                            
                                                  "PACKET_equal(&pkt3, dummytick, strlen(dummytick))"
                                                  ,bVar12);
                                            if (iVar4 != 0) {
                                              uVar5 = 1;
                                            }
                                            goto LAB_0010006f;
                                          }
                                          uVar8 = uVar11;
                                        } while (uVar2 != 0x15);
                                        iVar4 = test_false("test/clienthellotest.c",0xc6,
                                                           "currtest == TEST_PADDING_NOT_NEEDED",
                                                           param_1 == 2);
                                        if (iVar4 == 0) goto LAB_0010006f;
                                        iVar4 = test_true("test/clienthellotest.c",200,
                                                          "currtest == TEST_ADD_PADDING",
                                                          param_1 == 1);
                                        if (iVar4 != 0) {
                                          uVar5 = test_true("test/clienthellotest.c",0xc9,
                                                            "msglen == F5_WORKAROUND_MAX_MSG_LEN",
                                                            uVar1 == 0x200);
                                        }
                                      } while( true );
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
LAB_0010021e:
            uVar5 = 0;
            goto LAB_0010006f;
          }
        }
      }
    }
  }
LAB_00100069:
  uVar5 = 0;
  s = (SSL *)0x0;
LAB_0010006f:
  SSL_free(s);
  SSL_CTX_free(ctx);
  SSL_SESSION_free((SSL_SESSION *)0x0);
  BIO_free((BIO *)0x0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    add_all_tests("test_client_hello",0x100000,3,1);
    return 1;
  }
  test_error("test/clienthellotest.c",0xdc,"Error parsing test options\n");
  return 0;
}



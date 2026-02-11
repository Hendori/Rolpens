
undefined8 PACKET_get_length_prefixed_2(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (1 < (ulong)param_1[1]) {
    uVar1 = param_1[1] - 2;
    uVar2 = *(ushort *)*param_1;
    uVar3 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
    if (uVar3 <= uVar1) {
      puVar4 = (ushort *)*param_1 + 1;
      param_1[1] = uVar1 - uVar3;
      *param_1 = (long)puVar4 + uVar3;
      uVar5 = 1;
      *param_2 = puVar4;
      param_2[1] = uVar3;
    }
  }
  return uVar5;
}



undefined4 test_client_hello(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  long lVar4;
  SSL *s;
  BIO_METHOD *pBVar5;
  BIO *a;
  BIO *a_00;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  ushort *local_80;
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
  iVar2 = test_ptr("test/clienthellotest.c",0x4e,&_LC0);
  if (iVar2 != 0) {
    SSL_CTX_ctrl(ctx,0x7c,0,(void *)0x0);
    iVar2 = test_true("test/clienthellotest.c",0x50,"SSL_CTX_set_max_proto_version(ctx, 0)");
    if (iVar2 != 0) {
      if (param_1 == 0) {
        lVar4 = SSL_CTX_ctrl(ctx,0x7c,0x303,(void *)0x0);
        iVar2 = test_true("test/clienthellotest.c",0x5b,
                          "SSL_CTX_set_max_proto_version(ctx, TLS1_2_VERSION)",lVar4 != 0);
        goto joined_r0x001002b1;
      }
      if (param_1 - 1U < 2) {
        SSL_CTX_set_options(ctx,0x10);
        SSL_CTX_clear_options(ctx,0x100000);
        lVar4 = SSL_CTX_ctrl(ctx,0x5c,0,"?X25519:?secp256r1:?ffdhe2048:?ffdhe3072");
        iVar2 = test_true("test/clienthellotest.c",0x66,
                          "SSL_CTX_set1_groups_list(ctx, \"?X25519:?secp256r1:?ffdhe2048:?ffdhe3072\")"
                          ,lVar4 != 0);
        if (iVar2 != 0) {
          if (param_1 == 1) {
            iVar2 = SSL_CTX_set_alpn_protos
                              (ctx,
                               "O1234567890123456789012345678901234567890123456789012345678901234567890123456789O1234567890123456789012345678901234567890123456789012345678901234567890123456789"
                               ,0xa0);
            iVar2 = test_false("test/clienthellotest.c",0x6f,
                               "SSL_CTX_set_alpn_protos(ctx, (unsigned char *)alpn_prots, sizeof(alpn_prots) - 1)"
                               ,iVar2 != 0);
          }
          else {
            iVar2 = SSL_CTX_set_cipher_list(ctx,"AES128-SHA");
            iVar2 = test_true("test/clienthellotest.c",0x77,
                              "SSL_CTX_set_cipher_list(ctx, \"AES128-SHA\")",iVar2 != 0);
            if (iVar2 == 0) goto LAB_001000b9;
            iVar2 = SSL_CTX_set_ciphersuites(ctx,"TLS_AES_128_GCM_SHA256");
            iVar2 = test_true("test/clienthellotest.c",0x79,
                              "SSL_CTX_set_ciphersuites(ctx, \"TLS_AES_128_GCM_SHA256\")",iVar2 != 0
                             );
          }
joined_r0x001002b1:
          if (iVar2 != 0) {
            s = SSL_new(ctx);
            iVar2 = test_ptr("test/clienthellotest.c",0x84,&_LC6,s);
            if (iVar2 != 0) {
              pBVar5 = BIO_s_mem();
              a = BIO_new(pBVar5);
              pBVar5 = BIO_s_mem();
              a_00 = BIO_new(pBVar5);
              iVar2 = test_ptr("test/clienthellotest.c",0x89,&_LC12,a);
              if ((iVar2 == 0) ||
                 (iVar2 = test_ptr("test/clienthellotest.c",0x89,&_LC13,a_00), iVar2 == 0)) {
                BIO_free(a);
                BIO_free(a_00);
              }
              else {
                SSL_set_bio(s,a,a_00);
                SSL_set_connect_state(s);
                if (param_1 == 0) {
                  iVar2 = SSL_set_session_ticket_ext(s,"Hello World!",0xc);
                  iVar2 = test_true("test/clienthellotest.c",0x93,
                                    "SSL_set_session_ticket_ext(con, dummytick, strlen(dummytick))",
                                    iVar2 != 0);
                  if (iVar2 == 0) goto LAB_0010026e;
                }
                iVar2 = SSL_connect(s);
                iVar2 = test_int_le("test/clienthellotest.c",0x98,"SSL_connect(con)",&_LC14,iVar2,0)
                ;
                if (iVar2 != 0) {
                  uVar6 = BIO_ctrl(a_00,3,0,&local_80);
                  iVar2 = test_long_ge("test/clienthellotest.c",0x9d,
                                       "len = BIO_get_mem_data(wbio, (char **)&data)",&_LC14,uVar6,0
                                      );
                  if (iVar2 != 0) {
                    if (-1 < (long)uVar6) {
                      local_78 = local_80;
                      uStack_70 = uVar6;
                    }
                    iVar2 = test_true("test/clienthellotest.c",0x9e,
                                      "PACKET_buf_init(&pkt, data, len)",-1 < (long)uVar6);
                    if ((iVar2 != 0) && (4 < uStack_70)) {
                      uVar6 = uStack_70 - 5;
                      puVar9 = (ushort *)((long)local_78 + 5);
                      uVar7 = uVar6;
                      if (3 < uVar6) {
                        puVar9 = (ushort *)((long)local_78 + 9);
                        uVar7 = uStack_70 - 9;
                      }
                      uStack_70 = uVar7;
                      local_78 = puVar9;
                      iVar2 = test_true("test/clienthellotest.c",0xa6,
                                        "PACKET_forward(&pkt, SSL3_HM_HEADER_LENGTH)",3 < uVar6);
                      if (iVar2 != 0) {
                        bVar10 = 0x21 < uStack_70;
                        if (bVar10) {
                          uStack_70 = uStack_70 - 0x22;
                          local_78 = local_78 + 0x11;
                        }
                        iVar2 = test_true("test/clienthellotest.c",0xa8,
                                          "PACKET_forward(&pkt, CLIENT_VERSION_LEN + SSL3_RANDOM_SIZE)"
                                          ,bVar10);
                        if (iVar2 != 0) {
                          if (uStack_70 == 0) {
LAB_001006fa:
                            uVar8 = 0;
                          }
                          else {
                            uVar1 = *local_78;
                            uVar7 = (ulong)(byte)uVar1;
                            if (uStack_70 - 1 < uVar7) goto LAB_001006fa;
                            local_68._0_8_ = (long)local_78 + 1;
                            uStack_70 = (uStack_70 - 1) - uVar7;
                            local_78 = (ushort *)(local_68._0_8_ + uVar7);
                            uVar8 = 1;
                            local_68[8] = (byte)uVar1;
                            local_68._9_7_ = 0;
                          }
                          iVar2 = test_true("test/clienthellotest.c",0xab,
                                            "PACKET_get_length_prefixed_1(&pkt, &pkt2)",uVar8);
                          if (iVar2 != 0) {
                            iVar2 = PACKET_get_length_prefixed_2(&local_78,local_68);
                            iVar2 = test_true("test/clienthellotest.c",0xad,
                                              "PACKET_get_length_prefixed_2(&pkt, &pkt2)",iVar2 != 0
                                             );
                            if (iVar2 != 0) {
                              if (uStack_70 == 0) {
LAB_00100701:
                                uVar8 = 0;
                              }
                              else {
                                uVar1 = *local_78;
                                uVar7 = (ulong)(byte)uVar1;
                                if (uStack_70 - 1 < uVar7) goto LAB_00100701;
                                local_68._0_8_ = (long)local_78 + 1;
                                uStack_70 = (uStack_70 - 1) - uVar7;
                                local_78 = (ushort *)(local_68._0_8_ + uVar7);
                                uVar8 = 1;
                                local_68[8] = (byte)uVar1;
                                local_68._9_7_ = 0;
                              }
                              iVar2 = test_true("test/clienthellotest.c",0xaf,
                                                "PACKET_get_length_prefixed_1(&pkt, &pkt2)",uVar8);
                              if (iVar2 != 0) {
                                if (uStack_70 < 2) {
LAB_00100736:
                                  uVar8 = 0;
                                }
                                else {
                                  uVar1 = *local_78 << 8 | *local_78 >> 8;
                                  if ((uStack_70 - 2 < (ulong)uVar1) ||
                                     ((ulong)uVar1 != uStack_70 - 2)) goto LAB_00100736;
                                  puVar9 = (ushort *)(uStack_70 + (long)local_78);
                                  local_68._8_2_ = uVar1;
                                  local_68._0_8_ = local_78 + 1;
                                  local_68._10_6_ = 0;
                                  uStack_70 = 0;
                                  uVar8 = 1;
                                  local_78 = puVar9;
                                }
                                iVar2 = test_true("test/clienthellotest.c",0xb1,
                                                  "PACKET_as_length_prefixed_2(&pkt, &pkt2)",uVar8);
                                if (iVar2 != 0) {
                                  uVar1 = 0;
                                  uVar3 = 0;
                                  while (local_68._8_8_ != 0) {
                                    bVar10 = local_68._8_8_ != 1;
                                    if (bVar10) {
                                      uVar1 = *(ushort *)local_68._0_8_;
                                      local_68._8_8_ = local_68._8_8_ + -2;
                                      local_68._0_8_ = (ushort *)(local_68._0_8_ + 2);
                                      uVar1 = uVar1 << 8 | uVar1 >> 8;
                                    }
                                    iVar2 = test_true("test/clienthellotest.c",0xb7,
                                                      "PACKET_get_net_2(&pkt2, &type)",bVar10);
                                    if (iVar2 == 0) goto LAB_001000bf;
                                    iVar2 = PACKET_get_length_prefixed_2(local_68,local_58);
                                    iVar2 = test_true("test/clienthellotest.c",0xb8,
                                                      "PACKET_get_length_prefixed_2(&pkt2, &pkt3)",
                                                      iVar2 != 0);
                                    if (iVar2 == 0) goto LAB_001000bf;
                                    if ((param_1 == 0) && (uVar1 == 0x23)) {
                                      bVar10 = false;
                                      if (local_58._8_8_ == 0xc) {
                                        iVar2 = CRYPTO_memcmp((void *)local_58._0_8_,"Hello World!",
                                                              0xc);
                                        bVar10 = iVar2 == 0;
                                      }
                                      iVar2 = test_true("test/clienthellotest.c",0xbd,
                                                                                                                
                                                  "PACKET_equal(&pkt3, dummytick, strlen(dummytick))"
                                                  ,bVar10);
                                      if (iVar2 != 0) {
                                        uVar3 = 1;
                                      }
                                      goto LAB_001000bf;
                                    }
                                    if (uVar1 == 0x15) {
                                      iVar2 = test_false("test/clienthellotest.c",0xc6,
                                                         "currtest == TEST_PADDING_NOT_NEEDED",
                                                         param_1 == 2);
                                      if (iVar2 == 0) goto LAB_001000bf;
                                      iVar2 = test_true("test/clienthellotest.c",200,
                                                        "currtest == TEST_ADD_PADDING",param_1 == 1)
                                      ;
                                      if (iVar2 != 0) {
                                        uVar3 = test_true("test/clienthellotest.c",0xc9,
                                                          "msglen == F5_WORKAROUND_MAX_MSG_LEN",
                                                          uVar6 == 0x200);
                                      }
                                    }
                                  }
                                  if (param_1 == 2) {
                                    uVar3 = 1;
                                  }
                                  goto LAB_001000bf;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_0010026e:
            uVar3 = 0;
            goto LAB_001000bf;
          }
        }
      }
    }
  }
LAB_001000b9:
  uVar3 = 0;
  s = (SSL *)0x0;
LAB_001000bf:
  SSL_free(s);
  SSL_CTX_free(ctx);
  SSL_SESSION_free((SSL_SESSION *)0x0);
  BIO_free((BIO *)0x0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    add_all_tests("test_client_hello",test_client_hello,3,1);
    return 1;
  }
  test_error("test/clienthellotest.c",0xdc,"Error parsing test options\n");
  return 0;
}



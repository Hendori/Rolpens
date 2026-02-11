
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 check_ca_names(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  X509_NAME *pXVar3;
  X509_NAME *a;
  int iVar4;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_3 == 0) || (iVar1 = OPENSSL_sk_num(param_3), iVar1 == 0)) {
    uVar2 = OPENSSL_sk_num(param_2);
    iVar1 = test_int_eq("test/ssl_test.c",0x102,"sk_X509_NAME_num(expected_names)",&_LC0,uVar2,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = OPENSSL_sk_num(param_3);
    iVar4 = OPENSSL_sk_num(param_2);
    if (iVar1 == iVar4) {
      iVar1 = 0;
      while( true ) {
        iVar4 = OPENSSL_sk_num(param_3);
        if (iVar4 <= iVar1) {
          return 1;
        }
        pXVar3 = (X509_NAME *)OPENSSL_sk_value(param_2,iVar1);
        a = (X509_NAME *)OPENSSL_sk_value(param_3,iVar1);
        iVar4 = X509_NAME_cmp(a,pXVar3);
        iVar4 = test_int_eq("test/ssl_test.c",0x109,
                            "X509_NAME_cmp(sk_X509_NAME_value(names, i), sk_X509_NAME_value(expected_names, i))"
                            ,&_LC0,iVar4,0);
        if (iVar4 == 0) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar4 = 0;
  test_info("test/ssl_test.c",0x111,"%s: list mismatch",param_1);
  test_note("Expected Names:");
  iVar1 = OPENSSL_sk_num(param_2);
  if (iVar1 == 0) {
    test_note("    <empty>");
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(param_2), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      pXVar3 = (X509_NAME *)OPENSSL_sk_value(param_2,iVar4);
      X509_NAME_print_ex(_bio_err,pXVar3,4,0x82031f);
      BIO_puts(_bio_err,"\n");
    }
  }
  test_note("Received Names:");
  if (param_3 != 0) {
    iVar4 = 0;
    iVar1 = OPENSSL_sk_num(param_3);
    if (iVar1 != 0) {
      for (; iVar1 = OPENSSL_sk_num(param_3), iVar4 < iVar1; iVar4 = iVar4 + 1) {
        pXVar3 = (X509_NAME *)OPENSSL_sk_value(param_3,iVar4);
        X509_NAME_print_ex(_bio_err,pXVar3,4,0x82031f);
        BIO_puts(_bio_err,"\n");
      }
      return 0;
    }
  }
  test_note("    <empty>");
  return 0;
}



uint test_handshake(ulong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  undefined8 uVar23;
  SSL_CTX *ctx;
  long lVar24;
  SSL_CTX *ctx_00;
  size_t sVar25;
  size_t sVar26;
  undefined8 uVar27;
  char *pcVar28;
  uint uVar29;
  char *pcVar30;
  long in_FS_OFFSET;
  SSL_CTX *local_f0;
  SSL_CTX *local_e8;
  SSL_CTX *local_e0;
  int *local_d8;
  uint local_c8;
  char local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_snprintf(local_a8,100,"test-%d",param_1 & 0xffffffff);
  piVar22 = (int *)SSL_TEST_CTX_create(conf,local_a8,libctx);
  uVar3 = test_ptr("test/ssl_test.c",0x196,"test_ctx");
  if (uVar3 != 0) {
    if ((*(long *)(piVar22 + 0x90) == 0) ||
       (iVar4 = fips_provider_version_match(libctx), iVar4 != 0)) {
      iVar4 = *piVar22;
      if (iVar4 != 1) {
        local_e0 = (SSL_CTX *)0x0;
        ctx_00 = (SSL_CTX *)0x0;
        ctx = (SSL_CTX *)0x0;
        local_e8 = (SSL_CTX *)0x0;
        local_f0 = (SSL_CTX *)0x0;
        goto LAB_0010032d;
      }
      uVar23 = DTLS_server_method();
      ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
      SSL_CTX_set_options(ctx,0x100);
      uVar3 = test_true("test/ssl_test.c",0x1a3,
                        "SSL_CTX_set_options(server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)");
      if (uVar3 != 0) {
        SSL_CTX_ctrl(ctx,0x7c,0,(void *)0x0);
        uVar3 = test_true("test/ssl_test.c",0x1a5,"SSL_CTX_set_max_proto_version(server_ctx, 0)");
        if (uVar3 != 0) {
          if (piVar22[0x18] != 0) {
            uVar23 = DTLS_server_method();
            local_f0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
            uVar3 = test_ptr("test/ssl_test.c",0x1a9,
                             "server2_ctx = SSL_CTX_new_ex(libctx, NULL, DTLS_server_method())",
                             local_f0);
            if (uVar3 != 0) {
              SSL_CTX_set_options(local_f0,0x100);
              uVar3 = test_true("test/ssl_test.c",0x1ab,
                                "SSL_CTX_set_options(server2_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                               );
              if (uVar3 != 0) goto LAB_00101084;
            }
            local_d8 = (int *)0x0;
            ctx_00 = (SSL_CTX *)0x0;
            local_e0 = (SSL_CTX *)0x0;
            local_e8 = (SSL_CTX *)0x0;
            goto LAB_00100390;
          }
          local_f0 = (SSL_CTX *)0x0;
LAB_00101084:
          uVar23 = DTLS_client_method();
          ctx_00 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
          SSL_CTX_ctrl(ctx_00,0x7c,0,(void *)0x0);
          iVar4 = test_true("test/ssl_test.c",0x1b0,"SSL_CTX_set_max_proto_version(client_ctx, 0)");
          if (iVar4 == 0) {
            local_d8 = (int *)0x0;
            local_e0 = (SSL_CTX *)0x0;
            local_e8 = (SSL_CTX *)0x0;
            uVar3 = 0;
            goto LAB_00100390;
          }
          if (piVar22[1] == 1) {
            uVar23 = DTLS_server_method();
            local_e8 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
            lVar24 = SSL_CTX_ctrl(local_e8,0x7c,0,(void *)0x0);
            uVar3 = test_true("test/ssl_test.c",0x1b5,
                              "SSL_CTX_set_max_proto_version(resume_server_ctx, 0)",lVar24 != 0);
            if (uVar3 != 0) {
              SSL_CTX_set_options(local_e8,0x100);
              uVar3 = test_true("test/ssl_test.c",0x1b6,
                                "SSL_CTX_set_options(resume_server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                               );
              if (uVar3 != 0) {
                uVar23 = DTLS_client_method();
                local_e0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
                lVar24 = SSL_CTX_ctrl(local_e0,0x7c,0,(void *)0x0);
                iVar4 = test_true("test/ssl_test.c",0x1bb,
                                  "SSL_CTX_set_max_proto_version(resume_client_ctx, 0)",lVar24 != 0)
                ;
                if ((iVar4 != 0) &&
                   (iVar4 = test_ptr("test/ssl_test.c",0x1bd,"resume_server_ctx",local_e8),
                   iVar4 != 0)) {
                  iVar4 = test_ptr("test/ssl_test.c",0x1be,"resume_client_ctx");
                  if (iVar4 == 0) {
                    local_d8 = (int *)0x0;
                    uVar3 = 0;
                    goto LAB_00100390;
                  }
                  iVar4 = *piVar22;
                  goto LAB_0010032d;
                }
                goto LAB_00100633;
              }
            }
            local_d8 = (int *)0x0;
            local_e0 = (SSL_CTX *)0x0;
            goto LAB_00100390;
          }
          local_e0 = (SSL_CTX *)0x0;
          iVar4 = *piVar22;
          local_e8 = (SSL_CTX *)0x0;
LAB_0010032d:
          if (iVar4 == 0) {
            uVar23 = TLS_server_method();
            ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
            lVar24 = SSL_CTX_ctrl(ctx,0x7c,0,(void *)0x0);
            uVar3 = test_true("test/ssl_test.c",0x1ce,
                              "SSL_CTX_set_max_proto_version(server_ctx, maxversion)",lVar24 != 0);
            local_d8 = (int *)0x0;
            if (uVar3 == 0) goto LAB_00100390;
            lVar24 = SSL_CTX_set_options(ctx,0x100);
            uVar3 = test_true("test/ssl_test.c",0x1cf,
                              "SSL_CTX_set_options(server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)",
                              lVar24 != 0);
            if (uVar3 == 0) goto LAB_00100390;
            if (piVar22[0x18] == 0) {
LAB_00100497:
              uVar23 = TLS_client_method();
              ctx_00 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
              SSL_CTX_ctrl(ctx_00,0x7c,0,(void *)0x0);
              uVar3 = test_true("test/ssl_test.c",0x1df,
                                "SSL_CTX_set_max_proto_version(client_ctx, maxversion)");
              local_d8 = (int *)0x0;
              if (uVar3 == 0) goto LAB_00100390;
              if (piVar22[1] == 1) {
                uVar23 = TLS_server_method();
                local_e8 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
                lVar24 = SSL_CTX_ctrl(local_e8,0x7c,0,(void *)0x0);
                uVar3 = test_true("test/ssl_test.c",0x1e5,
                                  "SSL_CTX_set_max_proto_version(resume_server_ctx, maxversion)",
                                  lVar24 != 0);
                if (uVar3 == 0) goto LAB_00100390;
                SSL_CTX_set_options(local_e8,0x100);
                uVar3 = test_true("test/ssl_test.c",0x1e7,
                                  "SSL_CTX_set_options(resume_server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                                 );
                if (uVar3 == 0) goto LAB_00100390;
                uVar23 = TLS_client_method();
                local_e0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
                lVar24 = SSL_CTX_ctrl(local_e0,0x7c,0,(void *)0x0);
                iVar4 = test_true("test/ssl_test.c",0x1ec,
                                  "SSL_CTX_set_max_proto_version(resume_client_ctx, maxversion)",
                                  lVar24 != 0);
                if ((iVar4 == 0) ||
                   (iVar4 = test_ptr("test/ssl_test.c",0x1ef,"resume_server_ctx",local_e8),
                   iVar4 == 0)) goto LAB_00100633;
                uVar3 = test_ptr("test/ssl_test.c",0x1f0,"resume_client_ctx",local_e0);
                if (uVar3 == 0) goto LAB_00100390;
              }
              goto LAB_00100618;
            }
            uVar23 = TLS_server_method();
            local_f0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar23);
            iVar4 = test_ptr("test/ssl_test.c",0x1d5,
                             "server2_ctx = SSL_CTX_new_ex(libctx, NULL, TLS_server_method())",
                             local_f0);
            if (iVar4 != 0) {
              SSL_CTX_set_options(local_f0,0x100);
              iVar4 = test_true("test/ssl_test.c",0x1d7,
                                "SSL_CTX_set_options(server2_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                               );
              if (iVar4 != 0) {
                SSL_CTX_ctrl(local_f0,0x7c,0,(void *)0x0);
                iVar4 = test_true("test/ssl_test.c",0x1da,
                                  "SSL_CTX_set_max_proto_version(server2_ctx, maxversion)");
                if (iVar4 == 0) {
                  uVar3 = 0;
                  goto LAB_00100390;
                }
                goto LAB_00100497;
              }
            }
          }
          else {
LAB_00100618:
            iVar4 = test_ptr("test/ssl_test.c",0x1fa,"server_ctx",ctx);
            if ((iVar4 != 0) &&
               (iVar4 = test_ptr("test/ssl_test.c",0x1fb,"client_ctx",ctx_00), iVar4 != 0)) {
              iVar4 = CONF_modules_load(conf,local_a8,0);
              iVar4 = test_int_gt("test/ssl_test.c",0x1fc,"CONF_modules_load(conf, test_app, 0)",
                                  &_LC0,iVar4,0);
              if ((((((iVar4 != 0) &&
                     (((iVar4 = SSL_CTX_config(ctx,"server"), iVar4 != 0 &&
                       (lVar24 = SSL_CTX_ctrl(ctx,0x76,1,(void *)0x0), lVar24 != 0)) &&
                      (iVar4 = SSL_CTX_config(ctx_00,"client"), iVar4 != 0)))) &&
                    ((local_f0 == (SSL_CTX *)0x0 ||
                     ((iVar4 = SSL_CTX_config(local_f0,"server2"), iVar4 != 0 &&
                      (lVar24 = SSL_CTX_ctrl(local_f0,0x76,1,(void *)0x0), lVar24 != 0)))))) &&
                   ((local_e8 == (SSL_CTX *)0x0 ||
                    ((iVar4 = SSL_CTX_config(local_e8,"resume-server"), iVar4 != 0 &&
                     (lVar24 = SSL_CTX_ctrl(local_e8,0x76,1,(void *)0x0), lVar24 != 0)))))) &&
                  ((local_e0 == (SSL_CTX *)0x0 ||
                   (iVar4 = SSL_CTX_config(local_e0,"resume-client"), iVar4 != 0)))) &&
                 (local_d8 = (int *)do_handshake(ctx,local_f0,ctx_00,local_e8,local_e0,piVar22),
                 local_d8 != (int *)0x0)) {
                iVar4 = test_int_eq("test/ssl_test.c",0x24,"result->result",
                                    "test_ctx->expected_result",*local_d8,piVar22[0x6a]);
                if (iVar4 == 0) {
                  uVar23 = ssl_test_result_name(*local_d8);
                  uVar27 = ssl_test_result_name(piVar22[0x6a]);
                  test_info("test/ssl_test.c",0x25,"ExpectedResult mismatch: expected %s, got %s.",
                            uVar27,uVar23);
                }
                iVar5 = test_int_eq("test/ssl_test.c",0x2f,"result->client_alert_sent",
                                    "result->client_alert_received",local_d8[1],local_d8[3]);
                if (iVar5 == 0) {
                  pcVar30 = "no alert";
                  if (local_d8[3] != 0) {
                    pcVar30 = SSL_alert_desc_string_long(local_d8[3]);
                  }
                  pcVar28 = "no alert";
                  if (local_d8[1] != 0) {
                    pcVar28 = SSL_alert_desc_string_long(local_d8[1]);
                  }
                  test_info("test/ssl_test.c",0x31,"Client sent alert %s but server received %s.",
                            pcVar28,pcVar30);
                }
                iVar5 = test_int_eq("test/ssl_test.c",0x42,"result->server_alert_sent",
                                    "result->server_alert_received",local_d8[4],local_d8[6]);
                if (iVar5 == 0) {
                  pcVar30 = "no alert";
                  if (local_d8[6] != 0) {
                    pcVar30 = SSL_alert_desc_string_long(local_d8[6]);
                  }
                  pcVar28 = "no alert";
                  if (local_d8[4] != 0) {
                    pcVar28 = SSL_alert_desc_string_long(local_d8[4]);
                  }
                  test_info("test/ssl_test.c",0x44,"Server sent alert %s but client received %s.",
                            pcVar28,pcVar30);
                }
                uVar3 = piVar22[0x6b];
                if ((uVar3 == 0) || (uVar1 = local_d8[1], uVar3 == (uVar1 & 0xff))) {
                  uVar3 = piVar22[0x6c];
                  if ((uVar3 != 0) && (uVar1 = local_d8[4], uVar3 != (uVar1 & 0xff))) {
                    pcVar30 = "no alert";
                    if (uVar1 == 0) {
LAB_0010139f:
                      pcVar28 = SSL_alert_desc_string_long(uVar3);
                    }
                    else {
                      pcVar30 = SSL_alert_desc_string_long(uVar1);
                      uVar3 = piVar22[0x6c];
                      pcVar28 = "no alert";
                      if (uVar3 != 0) goto LAB_0010139f;
                    }
                    test_error("test/ssl_test.c",0x5a,"ServerAlert mismatch: expected %s, got %s.",
                               pcVar28,pcVar30);
                    goto LAB_00100918;
                  }
                  iVar5 = test_int_le("test/ssl_test.c",0x60,"result->client_num_fatal_alerts_sent",
                                      &_LC49,local_d8[2],1);
                  if (iVar5 == 0) goto LAB_00100918;
                  iVar5 = test_int_le("test/ssl_test.c",0x62,"result->server_num_fatal_alerts_sent",
                                      &_LC49,local_d8[5],1);
                  uVar3 = (uint)(iVar5 != 0);
                }
                else {
                  pcVar30 = "no alert";
                  if (uVar1 == 0) {
LAB_001008f7:
                    pcVar28 = SSL_alert_desc_string_long(uVar3);
                  }
                  else {
                    pcVar30 = SSL_alert_desc_string_long(uVar1);
                    uVar3 = piVar22[0x6b];
                    pcVar28 = "no alert";
                    if (uVar3 != 0) goto LAB_001008f7;
                  }
                  test_error("test/ssl_test.c",0x52,"ClientAlert mismatch: expected %s, got %s.",
                             pcVar28,pcVar30);
LAB_00100918:
                  uVar3 = 0;
                }
                uVar3 = iVar4 != 0 & uVar3;
                if (*local_d8 != 0) goto LAB_00100390;
                iVar4 = test_int_eq("test/ssl_test.c",0x69,"result->client_protocol",
                                    "result->server_protocol",local_d8[8],local_d8[7]);
                if (iVar4 == 0) {
                  uVar23 = ssl_protocol_name(local_d8[7]);
                  uVar27 = ssl_protocol_name(local_d8[8]);
                  test_info("test/ssl_test.c",0x6a,"Client has protocol %s but server has %s.",
                            uVar27,uVar23);
LAB_00101670:
                  local_c8 = 0;
                }
                else {
                  if ((piVar22[0x6d] != 0) &&
                     (iVar4 = test_int_eq("test/ssl_test.c",0x71,"result->client_protocol",
                                          "test_ctx->expected_protocol",local_d8[8]), iVar4 == 0)) {
                    uVar23 = ssl_protocol_name(local_d8[8]);
                    uVar27 = ssl_protocol_name(piVar22[0x6d]);
                    test_info("test/ssl_test.c",0x73,"Protocol mismatch: expected %s, got %s.\n",
                              uVar27,uVar23);
                    goto LAB_00101670;
                  }
                  local_c8 = 1;
                }
                iVar4 = test_int_eq("test/ssl_test.c",0x7e,"result->servername",
                                    "test_ctx->expected_servername",local_d8[9],piVar22[0x6e]);
                if (iVar4 == 0) {
                  uVar23 = ssl_servername_name(local_d8[9]);
                  uVar27 = ssl_servername_name(piVar22[0x6e]);
                  test_info("test/ssl_test.c",0x7f,
                            "Client ServerName mismatch, expected %s, got %s.",uVar27,uVar23);
                }
                if ((piVar22[0x6f] == 0) ||
                   (iVar5 = test_int_eq("test/ssl_test.c",0x8b,"result->session_ticket",
                                        "test_ctx->session_ticket_expected",local_d8[10]),
                   iVar5 != 0)) {
                  uVar1 = 1;
                }
                else {
                  uVar23 = ssl_session_ticket_name(local_d8[10]);
                  uVar27 = ssl_session_ticket_name(piVar22[0x6f]);
                  test_info("test/ssl_test.c",0x8d,
                            "Client SessionTicketExpected mismatch, expected %s, got %s.",uVar27,
                            uVar23);
                  uVar1 = 0;
                }
                iVar5 = test_int_eq("test/ssl_test.c",0xa4,"result->compression",
                                    "test_ctx->compression_expected",local_d8[0xb],piVar22[0x70]);
                if ((piVar22[0x88] == 0) ||
                   (iVar6 = test_int_eq("test/ssl_test.c",0x99,"result->session_id",
                                        "test_ctx->session_id_expected",local_d8[0x24]), iVar6 != 0)
                   ) {
                  uVar29 = 1;
                }
                else {
                  uVar23 = ssl_session_id_name(local_d8[0x24]);
                  uVar27 = ssl_session_id_name(piVar22[0x88]);
                  test_info("test/ssl_test.c",0x9a,
                            "Client SessionIdExpected mismatch, expected %s, got %s\n.",uVar27,
                            uVar23);
                  uVar29 = 0;
                }
                iVar6 = local_d8[0xc];
                iVar7 = test_str_eq("test/ssl_test.c",0xac,"result->client_npn_negotiated",
                                    "result->server_npn_negotiated",*(undefined8 *)(local_d8 + 0xe),
                                    *(undefined8 *)(local_d8 + 0x10));
                uVar8 = test_str_eq("test/ssl_test.c",0xaf,"test_ctx->expected_npn_protocol",
                                    "result->client_npn_negotiated",*(undefined8 *)(piVar22 + 0x72),
                                    *(undefined8 *)(local_d8 + 0xe));
                if (uVar8 != 0) {
                  uVar8 = (uint)(iVar7 != 0);
                }
                if (*(long *)(piVar22 + 0x8a) == 0) {
                  uVar9 = 1;
                }
                else {
                  uVar9 = test_ptr("test/ssl_test.c",0x15d,"result->cipher",
                                   *(undefined8 *)(local_d8 + 0x26));
                  if (uVar9 != 0) {
                    iVar7 = test_str_eq("test/ssl_test.c",0x15f,"test_ctx->expected_cipher",
                                        "result->cipher",*(undefined8 *)(piVar22 + 0x8a),
                                        *(undefined8 *)(local_d8 + 0x26));
                    uVar9 = (uint)(iVar7 != 0);
                  }
                }
                iVar7 = test_str_eq("test/ssl_test.c",0xb9,"result->client_alpn_negotiated",
                                    "result->server_alpn_negotiated",
                                    *(undefined8 *)(local_d8 + 0x12),
                                    *(undefined8 *)(local_d8 + 0x14));
                uVar10 = test_str_eq("test/ssl_test.c",0xbc,"test_ctx->expected_alpn_protocol",
                                     "result->client_alpn_negotiated",
                                     *(undefined8 *)(piVar22 + 0x74),
                                     *(undefined8 *)(local_d8 + 0x12));
                if (uVar10 != 0) {
                  uVar10 = (uint)(iVar7 != 0);
                }
                pcVar30 = *(char **)(piVar22 + 0x8c);
                pcVar28 = *(char **)(local_d8 + 0x28);
                if (pcVar28 == (char *)0x0) {
                  sVar25 = 0;
                  uVar11 = 1;
                  if (pcVar30 != (char *)0x0) goto LAB_00100c00;
                }
                else {
                  sVar25 = strlen(pcVar28);
                  if (pcVar30 == (char *)0x0) {
                    sVar26 = 0;
                  }
                  else {
LAB_00100c00:
                    sVar26 = strlen(pcVar30);
                  }
                  uVar11 = 1;
                  if (sVar26 != 0 || sVar25 != 0) {
                    iVar7 = test_str_eq("test/ssl_test.c",0xd0,
                                        "result->result_session_ticket_app_data",
                                        "test_ctx->expected_session_ticket_app_data",pcVar28,pcVar30
                                       );
                    uVar11 = (uint)(iVar7 != 0);
                  }
                }
                uVar12 = test_int_eq("test/ssl_test.c",0xd9,"result->client_resumed",
                                     "result->server_resumed",local_d8[0x16],local_d8[0x17]);
                if (uVar12 != 0) {
                  iVar7 = test_int_eq("test/ssl_test.c",0xdb,"result->client_resumed",
                                      "test_ctx->resumption_expected",local_d8[0x16],piVar22[0x76]);
                  uVar12 = (uint)(iVar7 != 0);
                }
                iVar7 = piVar22[0x77];
                iVar2 = local_d8[0x18];
                if ((iVar7 == 0) || (iVar2 == iVar7)) {
                  uVar13 = 1;
                }
                else {
                  pcVar30 = "absent";
                  if (iVar2 != 0) {
                    pcVar30 = OBJ_nid2ln(iVar2);
                  }
                  pcVar28 = OBJ_nid2ln(iVar7);
                  test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n","Tmp key",pcVar28
                             ,pcVar30);
                  uVar13 = 0;
                }
                iVar7 = piVar22[0x78];
                iVar2 = local_d8[0x19];
                if ((iVar7 == 0) || (iVar2 == iVar7)) {
                  uVar14 = 1;
                }
                else {
                  pcVar30 = "absent";
                  if (iVar2 != 0) {
                    pcVar30 = OBJ_nid2ln(iVar2);
                  }
                  pcVar28 = OBJ_nid2ln(iVar7);
                  test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n",
                             "Server certificate",pcVar28,pcVar30);
                  uVar14 = 0;
                }
                iVar7 = piVar22[0x79];
                iVar2 = local_d8[0x1a];
                if ((iVar7 == 0) || (iVar2 == iVar7)) {
                  uVar15 = 1;
                }
                else {
                  pcVar30 = "absent";
                  if (iVar2 != 0) {
                    pcVar30 = OBJ_nid2ln(iVar2);
                  }
                  pcVar28 = OBJ_nid2ln(iVar7);
                  test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n",
                             "Server signing hash",pcVar28,pcVar30);
                  uVar15 = 0;
                }
                iVar7 = piVar22[0x7a];
                iVar2 = local_d8[0x1b];
                if ((iVar7 == 0) || (iVar2 == iVar7)) {
                  uVar16 = 1;
                }
                else {
                  pcVar30 = "absent";
                  if (iVar2 != 0) {
                    pcVar30 = OBJ_nid2ln(iVar2);
                  }
                  pcVar28 = OBJ_nid2ln(iVar7);
                  test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n","Server signing",
                             pcVar28,pcVar30);
                  uVar16 = 0;
                }
                uVar17 = check_ca_names("Server CA names",*(undefined8 *)(piVar22 + 0x7c),
                                        *(undefined8 *)(local_d8 + 0x1c));
                iVar7 = piVar22[0x7e];
                iVar2 = local_d8[0x1e];
                if ((iVar7 == 0) || (iVar2 == iVar7)) {
                  uVar18 = 1;
                }
                else {
                  pcVar30 = "absent";
                  if (iVar2 != 0) {
                    pcVar30 = OBJ_nid2ln(iVar2);
                  }
                  pcVar28 = OBJ_nid2ln(iVar7);
                  test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n",
                             "Client certificate",pcVar28,pcVar30);
                  uVar18 = 0;
                }
                iVar7 = piVar22[0x7f];
                iVar2 = local_d8[0x1f];
                if ((iVar7 == 0) || (iVar2 == iVar7)) {
                  uVar19 = 1;
                }
                else {
                  pcVar30 = "absent";
                  if (iVar2 != 0) {
                    pcVar30 = OBJ_nid2ln(iVar2);
                  }
                  pcVar28 = OBJ_nid2ln(iVar7);
                  test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n",
                             "Client signing hash",pcVar28,pcVar30);
                  uVar19 = 0;
                }
                iVar7 = piVar22[0x80];
                iVar2 = local_d8[0x20];
                if ((iVar7 == 0) || (iVar2 == iVar7)) {
                  uVar20 = 1;
                }
                else {
                  pcVar30 = "absent";
                  if (iVar2 != 0) {
                    pcVar30 = OBJ_nid2ln(iVar2);
                  }
                  pcVar28 = OBJ_nid2ln(iVar7);
                  test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n","Client signing",
                             pcVar28,pcVar30);
                  uVar20 = 0;
                }
                uVar21 = check_ca_names("Client CA names",*(undefined8 *)(piVar22 + 0x82),
                                        *(undefined8 *)(local_d8 + 0x22));
                uVar3 = iVar6 == 0 & uVar3 & local_c8 & (uint)(iVar4 != 0) & uVar1 &
                        (uint)(iVar5 != 0) & uVar29 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 &
                        uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & uVar19 & uVar20 &
                        uVar21;
                goto LAB_00100390;
              }
            }
          }
LAB_00100633:
          local_d8 = (int *)0x0;
          uVar3 = 0;
          goto LAB_00100390;
        }
      }
      local_d8 = (int *)0x0;
      ctx_00 = (SSL_CTX *)0x0;
      local_e0 = (SSL_CTX *)0x0;
      local_e8 = (SSL_CTX *)0x0;
      local_f0 = (SSL_CTX *)0x0;
      goto LAB_00100390;
    }
    uVar3 = test_skip("test/ssl_test.c",0x19c,"FIPS provider unable to run this test");
  }
  local_d8 = (int *)0x0;
  ctx_00 = (SSL_CTX *)0x0;
  ctx = (SSL_CTX *)0x0;
  local_e0 = (SSL_CTX *)0x0;
  local_e8 = (SSL_CTX *)0x0;
  local_f0 = (SSL_CTX *)0x0;
LAB_00100390:
  CONF_modules_unload(0);
  SSL_CTX_free(ctx);
  SSL_CTX_free(local_f0);
  SSL_CTX_free(ctx_00);
  SSL_CTX_free(local_e8);
  SSL_CTX_free(local_e0);
  SSL_TEST_CTX_free(piVar22);
  HANDSHAKE_RESULT_free(local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  char *file;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/ssl_test.c",0x22b,"Error parsing test options\n");
  }
  else {
    conf = NCONF_new((CONF_METHOD *)0x0);
    iVar1 = test_ptr("test/ssl_test.c",0x22f,"conf = NCONF_new(NULL)",conf);
    if (iVar1 != 0) {
      file = (char *)test_get_argument(0);
      iVar1 = NCONF_load(conf,file,(long *)0x0);
      iVar1 = test_int_gt("test/ssl_test.c",0x231,"NCONF_load(conf, test_get_argument(0), NULL)",
                          &_LC0,iVar1,0);
      if (iVar1 != 0) {
        iVar1 = NCONF_get_number_e(conf,(char *)0x0,"num_tests",(long *)local_28);
        iVar1 = test_int_ne("test/ssl_test.c",0x232,
                            "NCONF_get_number_e(conf, NULL, \"num_tests\", &num_tests)",&_LC0,iVar1,
                            0);
        if (iVar1 != 0) {
          iVar1 = test_arg_libctx(&libctx,&defctxnull,&thisprov,1,
                                  "conf_file module_name [module_conf_file]\n");
          if (iVar1 != 0) {
            add_all_tests("test_handshake",test_handshake,local_28[0],1);
            uVar2 = 1;
            goto LAB_0010186f;
          }
          goto LAB_0010186d;
        }
      }
    }
    test_error("test/ssl_test.c",0x234,"usage: ssl_test %s",
               "conf_file module_name [module_conf_file]\n");
  }
LAB_0010186d:
  uVar2 = 0;
LAB_0010186f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup_tests(void)

{
  NCONF_free(conf);
  OSSL_PROVIDER_unload(defctxnull);
  OSSL_PROVIDER_unload(thisprov);
  OSSL_LIB_CTX_free(libctx);
  return;
}



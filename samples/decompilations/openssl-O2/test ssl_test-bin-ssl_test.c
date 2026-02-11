
undefined8 check_nid(undefined8 param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 != param_3) {
    pcVar2 = "absent";
    if (param_3 != 0) {
      pcVar2 = OBJ_nid2ln(param_3);
    }
    pcVar1 = OBJ_nid2ln(param_2);
    test_error("test/ssl_test.c",0xe4,"%s type mismatch, %s vs %s\n",param_1,pcVar1,pcVar2);
    return 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_ca_names(long param_1)

{
  int iVar1;
  X509_NAME *nm;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    iVar1 = OPENSSL_sk_num();
    if (iVar1 != 0) {
      for (; iVar1 = OPENSSL_sk_num(param_1), iVar2 < iVar1; iVar2 = iVar2 + 1) {
        nm = (X509_NAME *)OPENSSL_sk_value(param_1,iVar2);
        X509_NAME_print_ex(_bio_err,nm,4,0x82031f);
        BIO_puts(_bio_err,"\n");
      }
      return;
    }
  }
  test_note("    <empty>");
  return;
}



undefined8 check_ca_names(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  X509_NAME *b;
  X509_NAME *a;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_3 == 0) || (iVar1 = OPENSSL_sk_num(param_3), iVar1 == 0)) {
    uVar2 = OPENSSL_sk_num(param_2);
    iVar1 = test_int_eq("test/ssl_test.c",0x102,"sk_X509_NAME_num(expected_names)",&_LC5,uVar2,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = OPENSSL_sk_num(param_3);
    iVar3 = OPENSSL_sk_num(param_2);
    if (iVar1 == iVar3) {
      iVar1 = 0;
      while( true ) {
        iVar3 = OPENSSL_sk_num(param_3);
        if (iVar3 <= iVar1) {
          return 1;
        }
        b = (X509_NAME *)OPENSSL_sk_value(param_2,iVar1);
        a = (X509_NAME *)OPENSSL_sk_value(param_3,iVar1);
        iVar3 = X509_NAME_cmp(a,b);
        iVar3 = test_int_eq("test/ssl_test.c",0x109,
                            "X509_NAME_cmp(sk_X509_NAME_value(names, i), sk_X509_NAME_value(expected_names, i))"
                            ,&_LC5,iVar3,0);
        if (iVar3 == 0) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  test_info("test/ssl_test.c",0x111,"%s: list mismatch",param_1);
  test_note("Expected Names:");
  print_ca_names(param_2);
  test_note("Received Names:");
  print_ca_names(param_3);
  return 0;
}



uint test_handshake(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
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
  int *piVar21;
  undefined8 uVar22;
  SSL_CTX *ctx;
  long lVar23;
  SSL_CTX *ctx_00;
  size_t sVar24;
  size_t sVar25;
  undefined8 uVar26;
  char *pcVar27;
  uint uVar28;
  char *pcVar29;
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
  piVar21 = (int *)SSL_TEST_CTX_create(conf,local_a8,libctx);
  uVar2 = test_ptr("test/ssl_test.c",0x196,"test_ctx");
  if (uVar2 != 0) {
    if ((*(long *)(piVar21 + 0x90) == 0) ||
       (iVar3 = fips_provider_version_match(libctx), iVar3 != 0)) {
      iVar3 = *piVar21;
      if (iVar3 != 1) {
        local_e0 = (SSL_CTX *)0x0;
        ctx_00 = (SSL_CTX *)0x0;
        ctx = (SSL_CTX *)0x0;
        local_e8 = (SSL_CTX *)0x0;
        local_f0 = (SSL_CTX *)0x0;
        goto LAB_0010035d;
      }
      uVar22 = DTLS_server_method();
      ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
      SSL_CTX_set_options(ctx,0x100);
      uVar2 = test_true("test/ssl_test.c",0x1a3,
                        "SSL_CTX_set_options(server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)");
      if (uVar2 != 0) {
        SSL_CTX_ctrl(ctx,0x7c,0,(void *)0x0);
        uVar2 = test_true("test/ssl_test.c",0x1a5,"SSL_CTX_set_max_proto_version(server_ctx, 0)");
        if (uVar2 != 0) {
          if (piVar21[0x18] != 0) {
            uVar22 = DTLS_server_method();
            local_f0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
            uVar2 = test_ptr("test/ssl_test.c",0x1a9,
                             "server2_ctx = SSL_CTX_new_ex(libctx, NULL, DTLS_server_method())",
                             local_f0);
            if (uVar2 != 0) {
              SSL_CTX_set_options(local_f0,0x100);
              uVar2 = test_true("test/ssl_test.c",0x1ab,
                                "SSL_CTX_set_options(server2_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                               );
              if (uVar2 != 0) goto LAB_00100ee4;
            }
            local_d8 = (int *)0x0;
            ctx_00 = (SSL_CTX *)0x0;
            local_e0 = (SSL_CTX *)0x0;
            local_e8 = (SSL_CTX *)0x0;
            goto LAB_001003c0;
          }
          local_f0 = (SSL_CTX *)0x0;
LAB_00100ee4:
          uVar22 = DTLS_client_method();
          ctx_00 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
          SSL_CTX_ctrl(ctx_00,0x7c,0,(void *)0x0);
          iVar3 = test_true("test/ssl_test.c",0x1b0,"SSL_CTX_set_max_proto_version(client_ctx, 0)");
          if (iVar3 == 0) {
            local_d8 = (int *)0x0;
            local_e0 = (SSL_CTX *)0x0;
            local_e8 = (SSL_CTX *)0x0;
            uVar2 = 0;
            goto LAB_001003c0;
          }
          if (piVar21[1] == 1) {
            uVar22 = DTLS_server_method();
            local_e8 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
            lVar23 = SSL_CTX_ctrl(local_e8,0x7c,0,(void *)0x0);
            uVar2 = test_true("test/ssl_test.c",0x1b5,
                              "SSL_CTX_set_max_proto_version(resume_server_ctx, 0)",lVar23 != 0);
            if (uVar2 != 0) {
              SSL_CTX_set_options(local_e8,0x100);
              uVar2 = test_true("test/ssl_test.c",0x1b6,
                                "SSL_CTX_set_options(resume_server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                               );
              if (uVar2 != 0) {
                uVar22 = DTLS_client_method();
                local_e0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
                lVar23 = SSL_CTX_ctrl(local_e0,0x7c,0,(void *)0x0);
                iVar3 = test_true("test/ssl_test.c",0x1bb,
                                  "SSL_CTX_set_max_proto_version(resume_client_ctx, 0)",lVar23 != 0)
                ;
                if ((iVar3 != 0) &&
                   (iVar3 = test_ptr("test/ssl_test.c",0x1bd,"resume_server_ctx",local_e8),
                   iVar3 != 0)) {
                  iVar3 = test_ptr("test/ssl_test.c",0x1be,"resume_client_ctx");
                  if (iVar3 == 0) {
                    local_d8 = (int *)0x0;
                    uVar2 = 0;
                    goto LAB_001003c0;
                  }
                  iVar3 = *piVar21;
                  goto LAB_0010035d;
                }
                goto LAB_00100663;
              }
            }
            local_d8 = (int *)0x0;
            local_e0 = (SSL_CTX *)0x0;
            goto LAB_001003c0;
          }
          local_e0 = (SSL_CTX *)0x0;
          iVar3 = *piVar21;
          local_e8 = (SSL_CTX *)0x0;
LAB_0010035d:
          if (iVar3 == 0) {
            uVar22 = TLS_server_method();
            ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
            lVar23 = SSL_CTX_ctrl(ctx,0x7c,0,(void *)0x0);
            uVar2 = test_true("test/ssl_test.c",0x1ce,
                              "SSL_CTX_set_max_proto_version(server_ctx, maxversion)",lVar23 != 0);
            local_d8 = (int *)0x0;
            if (uVar2 == 0) goto LAB_001003c0;
            lVar23 = SSL_CTX_set_options(ctx,0x100);
            uVar2 = test_true("test/ssl_test.c",0x1cf,
                              "SSL_CTX_set_options(server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)",
                              lVar23 != 0);
            if (uVar2 == 0) goto LAB_001003c0;
            if (piVar21[0x18] == 0) {
LAB_001004c7:
              uVar22 = TLS_client_method();
              ctx_00 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
              SSL_CTX_ctrl(ctx_00,0x7c,0,(void *)0x0);
              uVar2 = test_true("test/ssl_test.c",0x1df,
                                "SSL_CTX_set_max_proto_version(client_ctx, maxversion)");
              local_d8 = (int *)0x0;
              if (uVar2 == 0) goto LAB_001003c0;
              if (piVar21[1] == 1) {
                uVar22 = TLS_server_method();
                local_e8 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
                lVar23 = SSL_CTX_ctrl(local_e8,0x7c,0,(void *)0x0);
                uVar2 = test_true("test/ssl_test.c",0x1e5,
                                  "SSL_CTX_set_max_proto_version(resume_server_ctx, maxversion)",
                                  lVar23 != 0);
                if (uVar2 == 0) goto LAB_001003c0;
                SSL_CTX_set_options(local_e8,0x100);
                uVar2 = test_true("test/ssl_test.c",0x1e7,
                                  "SSL_CTX_set_options(resume_server_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                                 );
                if (uVar2 == 0) goto LAB_001003c0;
                uVar22 = TLS_client_method();
                local_e0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
                lVar23 = SSL_CTX_ctrl(local_e0,0x7c,0,(void *)0x0);
                iVar3 = test_true("test/ssl_test.c",0x1ec,
                                  "SSL_CTX_set_max_proto_version(resume_client_ctx, maxversion)",
                                  lVar23 != 0);
                if ((iVar3 == 0) ||
                   (iVar3 = test_ptr("test/ssl_test.c",0x1ef,"resume_server_ctx",local_e8),
                   iVar3 == 0)) goto LAB_00100663;
                uVar2 = test_ptr("test/ssl_test.c",0x1f0,"resume_client_ctx",local_e0);
                if (uVar2 == 0) goto LAB_001003c0;
              }
              goto LAB_00100648;
            }
            uVar22 = TLS_server_method();
            local_f0 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar22);
            iVar3 = test_ptr("test/ssl_test.c",0x1d5,
                             "server2_ctx = SSL_CTX_new_ex(libctx, NULL, TLS_server_method())",
                             local_f0);
            if (iVar3 != 0) {
              SSL_CTX_set_options(local_f0,0x100);
              iVar3 = test_true("test/ssl_test.c",0x1d7,
                                "SSL_CTX_set_options(server2_ctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)"
                               );
              if (iVar3 != 0) {
                SSL_CTX_ctrl(local_f0,0x7c,0,(void *)0x0);
                iVar3 = test_true("test/ssl_test.c",0x1da,
                                  "SSL_CTX_set_max_proto_version(server2_ctx, maxversion)");
                if (iVar3 == 0) {
                  uVar2 = 0;
                  goto LAB_001003c0;
                }
                goto LAB_001004c7;
              }
            }
          }
          else {
LAB_00100648:
            iVar3 = test_ptr("test/ssl_test.c",0x1fa,"server_ctx",ctx);
            if ((iVar3 != 0) &&
               (iVar3 = test_ptr("test/ssl_test.c",0x1fb,"client_ctx",ctx_00), iVar3 != 0)) {
              iVar3 = CONF_modules_load(conf,local_a8,0);
              iVar3 = test_int_gt("test/ssl_test.c",0x1fc,"CONF_modules_load(conf, test_app, 0)",
                                  &_LC5,iVar3,0);
              if ((((((iVar3 != 0) &&
                     (((iVar3 = SSL_CTX_config(ctx,"server"), iVar3 != 0 &&
                       (lVar23 = SSL_CTX_ctrl(ctx,0x76,1,(void *)0x0), lVar23 != 0)) &&
                      (iVar3 = SSL_CTX_config(ctx_00,"client"), iVar3 != 0)))) &&
                    ((local_f0 == (SSL_CTX *)0x0 ||
                     ((iVar3 = SSL_CTX_config(local_f0,"server2"), iVar3 != 0 &&
                      (lVar23 = SSL_CTX_ctrl(local_f0,0x76,1,(void *)0x0), lVar23 != 0)))))) &&
                   ((local_e8 == (SSL_CTX *)0x0 ||
                    ((iVar3 = SSL_CTX_config(local_e8,"resume-server"), iVar3 != 0 &&
                     (lVar23 = SSL_CTX_ctrl(local_e8,0x76,1,(void *)0x0), lVar23 != 0)))))) &&
                  ((local_e0 == (SSL_CTX *)0x0 ||
                   (iVar3 = SSL_CTX_config(local_e0,"resume-client"), iVar3 != 0)))) &&
                 (local_d8 = (int *)do_handshake(ctx,local_f0,ctx_00,local_e8,local_e0,piVar21),
                 local_d8 != (int *)0x0)) {
                iVar3 = test_int_eq("test/ssl_test.c",0x24,"result->result",
                                    "test_ctx->expected_result",*local_d8,piVar21[0x6a]);
                if (iVar3 == 0) {
                  uVar22 = ssl_test_result_name(*local_d8);
                  uVar26 = ssl_test_result_name(piVar21[0x6a]);
                  test_info("test/ssl_test.c",0x25,"ExpectedResult mismatch: expected %s, got %s.",
                            uVar26,uVar22);
                }
                iVar4 = test_int_eq("test/ssl_test.c",0x2f,"result->client_alert_sent",
                                    "result->client_alert_received",local_d8[1],local_d8[3]);
                if (iVar4 == 0) {
                  pcVar29 = "no alert";
                  if (local_d8[3] != 0) {
                    pcVar29 = SSL_alert_desc_string_long(local_d8[3]);
                  }
                  pcVar27 = "no alert";
                  if (local_d8[1] != 0) {
                    pcVar27 = SSL_alert_desc_string_long(local_d8[1]);
                  }
                  test_info("test/ssl_test.c",0x31,"Client sent alert %s but server received %s.",
                            pcVar27,pcVar29);
                }
                iVar4 = test_int_eq("test/ssl_test.c",0x42,"result->server_alert_sent",
                                    "result->server_alert_received",local_d8[4],local_d8[6]);
                if (iVar4 == 0) {
                  pcVar29 = "no alert";
                  if (local_d8[6] != 0) {
                    pcVar29 = SSL_alert_desc_string_long(local_d8[6]);
                  }
                  pcVar27 = "no alert";
                  if (local_d8[4] != 0) {
                    pcVar27 = SSL_alert_desc_string_long(local_d8[4]);
                  }
                  test_info("test/ssl_test.c",0x44,"Server sent alert %s but client received %s.",
                            pcVar27,pcVar29);
                }
                uVar2 = piVar21[0x6b];
                if ((uVar2 == 0) || (uVar1 = local_d8[1], uVar2 == (uVar1 & 0xff))) {
                  uVar2 = piVar21[0x6c];
                  if ((uVar2 != 0) && (uVar1 = local_d8[4], uVar2 != (uVar1 & 0xff))) {
                    pcVar29 = "no alert";
                    if (uVar1 == 0) {
LAB_001011ff:
                      pcVar27 = SSL_alert_desc_string_long(uVar2);
                    }
                    else {
                      pcVar29 = SSL_alert_desc_string_long(uVar1);
                      uVar2 = piVar21[0x6c];
                      pcVar27 = "no alert";
                      if (uVar2 != 0) goto LAB_001011ff;
                    }
                    test_error("test/ssl_test.c",0x5a,"ServerAlert mismatch: expected %s, got %s.",
                               pcVar27,pcVar29);
                    goto LAB_00100948;
                  }
                  iVar4 = test_int_le("test/ssl_test.c",0x60,"result->client_num_fatal_alerts_sent",
                                      &_LC50,local_d8[2],1);
                  if (iVar4 == 0) goto LAB_00100948;
                  iVar4 = test_int_le("test/ssl_test.c",0x62,"result->server_num_fatal_alerts_sent",
                                      &_LC50,local_d8[5],1);
                  uVar2 = (uint)(iVar4 != 0);
                }
                else {
                  pcVar29 = "no alert";
                  if (uVar1 == 0) {
LAB_00100927:
                    pcVar27 = SSL_alert_desc_string_long(uVar2);
                  }
                  else {
                    pcVar29 = SSL_alert_desc_string_long(uVar1);
                    uVar2 = piVar21[0x6b];
                    pcVar27 = "no alert";
                    if (uVar2 != 0) goto LAB_00100927;
                  }
                  test_error("test/ssl_test.c",0x52,"ClientAlert mismatch: expected %s, got %s.",
                             pcVar27,pcVar29);
LAB_00100948:
                  uVar2 = 0;
                }
                uVar2 = iVar3 != 0 & uVar2;
                if (*local_d8 != 0) goto LAB_001003c0;
                iVar3 = test_int_eq("test/ssl_test.c",0x69,"result->client_protocol",
                                    "result->server_protocol",local_d8[8],local_d8[7]);
                if (iVar3 == 0) {
                  uVar22 = ssl_protocol_name(local_d8[7]);
                  uVar26 = ssl_protocol_name(local_d8[8]);
                  test_info("test/ssl_test.c",0x6a,"Client has protocol %s but server has %s.",
                            uVar26,uVar22);
LAB_001013f7:
                  local_c8 = 0;
                }
                else {
                  if ((piVar21[0x6d] != 0) &&
                     (iVar3 = test_int_eq("test/ssl_test.c",0x71,"result->client_protocol",
                                          "test_ctx->expected_protocol",local_d8[8]), iVar3 == 0)) {
                    uVar22 = ssl_protocol_name(local_d8[8]);
                    uVar26 = ssl_protocol_name(piVar21[0x6d]);
                    test_info("test/ssl_test.c",0x73,"Protocol mismatch: expected %s, got %s.\n",
                              uVar26,uVar22);
                    goto LAB_001013f7;
                  }
                  local_c8 = 1;
                }
                iVar3 = test_int_eq("test/ssl_test.c",0x7e,"result->servername",
                                    "test_ctx->expected_servername",local_d8[9],piVar21[0x6e]);
                if (iVar3 == 0) {
                  uVar22 = ssl_servername_name(local_d8[9]);
                  uVar26 = ssl_servername_name(piVar21[0x6e]);
                  test_info("test/ssl_test.c",0x7f,
                            "Client ServerName mismatch, expected %s, got %s.",uVar26,uVar22);
                }
                if ((piVar21[0x6f] == 0) ||
                   (iVar4 = test_int_eq("test/ssl_test.c",0x8b,"result->session_ticket",
                                        "test_ctx->session_ticket_expected",local_d8[10]),
                   iVar4 != 0)) {
                  uVar1 = 1;
                }
                else {
                  uVar22 = ssl_session_ticket_name(local_d8[10]);
                  uVar26 = ssl_session_ticket_name(piVar21[0x6f]);
                  test_info("test/ssl_test.c",0x8d,
                            "Client SessionTicketExpected mismatch, expected %s, got %s.",uVar26,
                            uVar22);
                  uVar1 = 0;
                }
                iVar4 = test_int_eq("test/ssl_test.c",0xa4,"result->compression",
                                    "test_ctx->compression_expected",local_d8[0xb],piVar21[0x70]);
                if ((piVar21[0x88] == 0) ||
                   (iVar5 = test_int_eq("test/ssl_test.c",0x99,"result->session_id",
                                        "test_ctx->session_id_expected",local_d8[0x24]), iVar5 != 0)
                   ) {
                  uVar28 = 1;
                }
                else {
                  uVar22 = ssl_session_id_name(local_d8[0x24]);
                  uVar26 = ssl_session_id_name(piVar21[0x88]);
                  test_info("test/ssl_test.c",0x9a,
                            "Client SessionIdExpected mismatch, expected %s, got %s\n.",uVar26,
                            uVar22);
                  uVar28 = 0;
                }
                iVar5 = local_d8[0xc];
                iVar6 = test_str_eq("test/ssl_test.c",0xac,"result->client_npn_negotiated",
                                    "result->server_npn_negotiated",*(undefined8 *)(local_d8 + 0xe),
                                    *(undefined8 *)(local_d8 + 0x10));
                uVar7 = test_str_eq("test/ssl_test.c",0xaf,"test_ctx->expected_npn_protocol",
                                    "result->client_npn_negotiated",*(undefined8 *)(piVar21 + 0x72),
                                    *(undefined8 *)(local_d8 + 0xe));
                if (uVar7 != 0) {
                  uVar7 = (uint)(iVar6 != 0);
                }
                if (*(long *)(piVar21 + 0x8a) == 0) {
                  uVar8 = 1;
                }
                else {
                  uVar8 = test_ptr("test/ssl_test.c",0x15d,"result->cipher",
                                   *(undefined8 *)(local_d8 + 0x26));
                  if (uVar8 != 0) {
                    iVar6 = test_str_eq("test/ssl_test.c",0x15f,"test_ctx->expected_cipher",
                                        "result->cipher",*(undefined8 *)(piVar21 + 0x8a),
                                        *(undefined8 *)(local_d8 + 0x26));
                    uVar8 = (uint)(iVar6 != 0);
                  }
                }
                iVar6 = test_str_eq("test/ssl_test.c",0xb9,"result->client_alpn_negotiated",
                                    "result->server_alpn_negotiated",
                                    *(undefined8 *)(local_d8 + 0x12),
                                    *(undefined8 *)(local_d8 + 0x14));
                uVar9 = test_str_eq("test/ssl_test.c",0xbc,"test_ctx->expected_alpn_protocol",
                                    "result->client_alpn_negotiated",*(undefined8 *)(piVar21 + 0x74)
                                    ,*(undefined8 *)(local_d8 + 0x12));
                if (uVar9 != 0) {
                  uVar9 = (uint)(iVar6 != 0);
                }
                pcVar29 = *(char **)(piVar21 + 0x8c);
                pcVar27 = *(char **)(local_d8 + 0x28);
                if (pcVar27 == (char *)0x0) {
                  sVar24 = 0;
                  uVar10 = 1;
                  if (pcVar29 != (char *)0x0) goto LAB_00100c30;
                }
                else {
                  sVar24 = strlen(pcVar27);
                  if (pcVar29 == (char *)0x0) {
                    sVar25 = 0;
                  }
                  else {
LAB_00100c30:
                    sVar25 = strlen(pcVar29);
                  }
                  uVar10 = 1;
                  if (sVar25 != 0 || sVar24 != 0) {
                    iVar6 = test_str_eq("test/ssl_test.c",0xd0,
                                        "result->result_session_ticket_app_data",
                                        "test_ctx->expected_session_ticket_app_data",pcVar27,pcVar29
                                       );
                    uVar10 = (uint)(iVar6 != 0);
                  }
                }
                uVar11 = test_int_eq("test/ssl_test.c",0xd9,"result->client_resumed",
                                     "result->server_resumed",local_d8[0x16],local_d8[0x17]);
                if (uVar11 != 0) {
                  iVar6 = test_int_eq("test/ssl_test.c",0xdb,"result->client_resumed",
                                      "test_ctx->resumption_expected",local_d8[0x16],piVar21[0x76]);
                  uVar11 = (uint)(iVar6 != 0);
                }
                uVar12 = check_nid("Tmp key",piVar21[0x77],local_d8[0x18]);
                uVar13 = check_nid("Server certificate",piVar21[0x78],local_d8[0x19]);
                uVar14 = check_nid("Server signing hash",piVar21[0x79],local_d8[0x1a]);
                uVar15 = check_nid("Server signing",piVar21[0x7a],local_d8[0x1b]);
                uVar16 = check_ca_names("Server CA names",*(undefined8 *)(piVar21 + 0x7c),
                                        *(undefined8 *)(local_d8 + 0x1c));
                uVar17 = check_nid("Client certificate",piVar21[0x7e],local_d8[0x1e]);
                uVar18 = check_nid("Client signing hash",piVar21[0x7f],local_d8[0x1f]);
                uVar19 = check_nid("Client signing",piVar21[0x80],local_d8[0x20]);
                uVar20 = check_ca_names("Client CA names",*(undefined8 *)(piVar21 + 0x82),
                                        *(undefined8 *)(local_d8 + 0x22));
                uVar2 = iVar5 == 0 & uVar2 & local_c8 & (uint)(iVar3 != 0) & uVar1 &
                        (uint)(iVar4 != 0) & uVar28 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 &
                        uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & uVar19 &
                        uVar20;
                goto LAB_001003c0;
              }
            }
          }
LAB_00100663:
          local_d8 = (int *)0x0;
          uVar2 = 0;
          goto LAB_001003c0;
        }
      }
      local_d8 = (int *)0x0;
      ctx_00 = (SSL_CTX *)0x0;
      local_e0 = (SSL_CTX *)0x0;
      local_e8 = (SSL_CTX *)0x0;
      local_f0 = (SSL_CTX *)0x0;
      goto LAB_001003c0;
    }
    uVar2 = test_skip("test/ssl_test.c",0x19c,"FIPS provider unable to run this test");
  }
  local_d8 = (int *)0x0;
  ctx_00 = (SSL_CTX *)0x0;
  ctx = (SSL_CTX *)0x0;
  local_e0 = (SSL_CTX *)0x0;
  local_e8 = (SSL_CTX *)0x0;
  local_f0 = (SSL_CTX *)0x0;
LAB_001003c0:
  CONF_modules_unload(0);
  SSL_CTX_free(ctx);
  SSL_CTX_free(local_f0);
  SSL_CTX_free(ctx_00);
  SSL_CTX_free(local_e8);
  SSL_CTX_free(local_e0);
  SSL_TEST_CTX_free(piVar21);
  HANDSHAKE_RESULT_free(local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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
                          &_LC5,iVar1,0);
      if (iVar1 != 0) {
        iVar1 = NCONF_get_number_e(conf,(char *)0x0,"num_tests",(long *)local_28);
        iVar1 = test_int_ne("test/ssl_test.c",0x232,
                            "NCONF_get_number_e(conf, NULL, \"num_tests\", &num_tests)",&_LC5,iVar1,
                            0);
        if (iVar1 != 0) {
          iVar1 = test_arg_libctx(&libctx,&defctxnull,&thisprov,1,
                                  "conf_file module_name [module_conf_file]\n");
          if (iVar1 != 0) {
            add_all_tests("test_handshake",test_handshake,local_28[0],1);
            uVar2 = 1;
            goto LAB_001015ef;
          }
          goto LAB_001015ed;
        }
      }
    }
    test_error("test/ssl_test.c",0x234,"usage: ssl_test %s",
               "conf_file module_name [module_conf_file]\n");
  }
LAB_001015ed:
  uVar2 = 0;
LAB_001015ef:
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



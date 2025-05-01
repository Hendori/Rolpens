
undefined4 test_bad_configuration(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = SSL_TEST_CTX_create(conf,*(undefined8 *)(bad_configurations + (long)param_1 * 8),0);
  iVar1 = test_ptr_null("test/ssl_test_ctx_test.c",0xe7,
                        "ctx = SSL_TEST_CTX_create(conf, bad_configurations[idx], NULL)",uVar2);
  if (iVar1 != 0) {
    return 1;
  }
  SSL_TEST_CTX_free(uVar2);
  return 0;
}



bool serverconf_eq(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = test_int_eq("test/ssl_test_ctx_test.c",0x35,"serv->servername_callback",
                      "serv2->servername_callback",*param_1,*param_2);
  if ((((iVar1 != 0) &&
       (iVar1 = test_str_eq("test/ssl_test_ctx_test.c",0x36,"serv->npn_protocols",
                            "serv2->npn_protocols",*(undefined8 *)(param_1 + 2),
                            *(undefined8 *)(param_2 + 2)), iVar1 != 0)) &&
      (iVar1 = test_str_eq("test/ssl_test_ctx_test.c",0x37,"serv->alpn_protocols",
                           "serv2->alpn_protocols",*(undefined8 *)(param_1 + 4),
                           *(undefined8 *)(param_2 + 4)), iVar1 != 0)) &&
     ((iVar1 = test_int_eq("test/ssl_test_ctx_test.c",0x38,"serv->broken_session_ticket",
                           "serv2->broken_session_ticket",param_1[6],param_2[6]), iVar1 != 0 &&
      (iVar1 = test_str_eq("test/ssl_test_ctx_test.c",0x3a,"serv->session_ticket_app_data",
                           "serv2->session_ticket_app_data",*(undefined8 *)(param_1 + 0xe),
                           *(undefined8 *)(param_2 + 0xe)), iVar1 != 0)))) {
    iVar1 = test_int_eq("test/ssl_test_ctx_test.c",0x3c,"serv->cert_status","serv2->cert_status",
                        param_1[7],param_2[7]);
    return iVar1 != 0;
  }
  return false;
}



bool extraconf_eq(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = test_int_eq("test/ssl_test_ctx_test.c",0x27,"conf1->verify_callback",
                      "conf2->verify_callback",*param_1,*param_2);
  if (iVar1 != 0) {
    iVar1 = test_int_eq("test/ssl_test_ctx_test.c",0x28,"conf1->servername","conf2->servername",
                        param_1[1],param_2[1]);
    if (iVar1 != 0) {
      iVar1 = test_str_eq("test/ssl_test_ctx_test.c",0x29,"conf1->npn_protocols",
                          "conf2->npn_protocols",*(undefined8 *)(param_1 + 4),
                          *(undefined8 *)(param_2 + 4));
      if (iVar1 != 0) {
        iVar1 = test_str_eq("test/ssl_test_ctx_test.c",0x2a,"conf1->alpn_protocols",
                            "conf2->alpn_protocols",*(undefined8 *)(param_1 + 6),
                            *(undefined8 *)(param_2 + 6));
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/ssl_test_ctx_test.c",0x2b,"conf1->ct_validation",
                              "conf2->ct_validation",param_1[8],param_2[8]);
          if (iVar1 != 0) {
            iVar1 = test_int_eq("test/ssl_test_ctx_test.c",0x2c,"conf1->max_fragment_len_mode",
                                "conf2->max_fragment_len_mode",param_1[2],param_2[2]);
            bVar2 = iVar1 != 0;
            goto LAB_001001bc;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_001001bc:
  iVar1 = test_true("test/ssl_test_ctx_test.c",0x44,"clientconf_eq(&extra->client, &extra2->client)"
                    ,bVar2);
  if (iVar1 != 0) {
    iVar1 = serverconf_eq(param_1 + 0x12,param_2 + 0x12);
    iVar1 = test_true("test/ssl_test_ctx_test.c",0x45,
                      "serverconf_eq(&extra->server, &extra2->server)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = serverconf_eq(param_1 + 0x22,param_2 + 0x22);
      iVar1 = test_true("test/ssl_test_ctx_test.c",0x46,
                        "serverconf_eq(&extra->server2, &extra2->server2)",iVar1 != 0);
      return iVar1 != 0;
    }
  }
  return false;
}



bool execute_test(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar3 = (undefined4 *)
           SSL_TEST_CTX_create(conf,*(undefined8 *)(param_1 + 8),
                               *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x238));
  iVar2 = test_ptr("test/ssl_test_ctx_test.c",0x81,
                   "ctx = SSL_TEST_CTX_create(conf, fixture->test_section, fixture->expected_ctx->libctx)"
                   ,puVar3);
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x4d,"ctx->method","ctx2->method",*puVar3,*puVar1
                       );
    if (iVar2 != 0) {
      iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x4e,"ctx->handshake_mode",
                          "ctx2->handshake_mode",puVar3[1],puVar1[1]);
      if (iVar2 != 0) {
        iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x4f,"ctx->app_data_size",
                            "ctx2->app_data_size",puVar3[2],puVar1[2]);
        if (iVar2 != 0) {
          iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x50,"ctx->max_fragment_size",
                              "ctx2->max_fragment_size",puVar3[3],puVar1[3]);
          if (iVar2 != 0) {
            iVar2 = extraconf_eq(puVar3 + 6,puVar1 + 6);
            if (iVar2 != 0) {
              iVar2 = extraconf_eq(puVar3 + 0x38,puVar1 + 0x38);
              if (iVar2 != 0) {
                iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x53,"ctx->expected_result",
                                    "ctx2->expected_result",puVar3[0x6a],puVar1[0x6a]);
                if (iVar2 != 0) {
                  iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x54,"ctx->expected_client_alert",
                                      "ctx2->expected_client_alert",puVar3[0x6b],puVar1[0x6b]);
                  if (iVar2 != 0) {
                    iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x56,"ctx->expected_server_alert"
                                        ,"ctx2->expected_server_alert",puVar3[0x6c],puVar1[0x6c]);
                    if (iVar2 != 0) {
                      iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x58,"ctx->expected_protocol",
                                          "ctx2->expected_protocol",puVar3[0x6d],puVar1[0x6d]);
                      if (iVar2 != 0) {
                        iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x59,
                                            "ctx->expected_servername","ctx2->expected_servername",
                                            puVar3[0x6e],puVar1[0x6e]);
                        if (iVar2 != 0) {
                          iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x5a,
                                              "ctx->session_ticket_expected",
                                              "ctx2->session_ticket_expected",puVar3[0x6f],
                                              puVar1[0x6f]);
                          if (iVar2 != 0) {
                            iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x5c,
                                                "ctx->compression_expected",
                                                "ctx2->compression_expected",puVar3[0x70],
                                                puVar1[0x70]);
                            if (iVar2 != 0) {
                              iVar2 = test_str_eq("test/ssl_test_ctx_test.c",0x5e,
                                                  "ctx->expected_npn_protocol",
                                                  "ctx2->expected_npn_protocol",
                                                  *(undefined8 *)(puVar3 + 0x72),
                                                  *(undefined8 *)(puVar1 + 0x72));
                              if (iVar2 != 0) {
                                iVar2 = test_str_eq("test/ssl_test_ctx_test.c",0x60,
                                                    "ctx->expected_alpn_protocol",
                                                    "ctx2->expected_alpn_protocol",
                                                    *(undefined8 *)(puVar3 + 0x74),
                                                    *(undefined8 *)(puVar1 + 0x74));
                                if (iVar2 != 0) {
                                  iVar2 = test_str_eq("test/ssl_test_ctx_test.c",0x62,
                                                      "ctx->expected_cipher","ctx2->expected_cipher"
                                                      ,*(undefined8 *)(puVar3 + 0x8a),
                                                      *(undefined8 *)(puVar1 + 0x8a));
                                  if (iVar2 != 0) {
                                    iVar2 = test_str_eq("test/ssl_test_ctx_test.c",100,
                                                        "ctx->expected_session_ticket_app_data",
                                                        "ctx2->expected_session_ticket_app_data",
                                                        *(undefined8 *)(puVar3 + 0x8c),
                                                        *(undefined8 *)(puVar1 + 0x8c));
                                    if (iVar2 != 0) {
                                      iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x66,
                                                          "ctx->resumption_expected",
                                                          "ctx2->resumption_expected",puVar3[0x76],
                                                          puVar1[0x76]);
                                      if (iVar2 != 0) {
                                        iVar2 = test_int_eq("test/ssl_test_ctx_test.c",0x68,
                                                            "ctx->session_id_expected",
                                                            "ctx2->session_id_expected",puVar3[0x88]
                                                            ,puVar1[0x88]);
                                        bVar4 = iVar2 != 0;
                                        goto LAB_00100379;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
LAB_00100379:
  SSL_TEST_CTX_free(puVar3);
  return bVar4;
}



undefined4 test_good_configuration(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *ptr;
  undefined8 uVar5;
  char *pcVar6;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x18,"test/ssl_test_ctx_test.c",0x72);
  iVar3 = test_ptr("test/ssl_test_ctx_test.c",0x72,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr)
  ;
  if (iVar3 != 0) {
    *ptr = "test_good_configuration";
    uVar5 = SSL_TEST_CTX_new(0);
    ptr[2] = uVar5;
    iVar3 = test_ptr("test/ssl_test_ctx_test.c",0x75,
                     "fixture->expected_ctx = SSL_TEST_CTX_new(NULL)",uVar5);
    if (iVar3 == 0) {
      CRYPTO_free(ptr);
    }
    else {
      puVar1 = (undefined8 *)ptr[2];
      ptr[1] = "ssltest_good";
      uVar5 = _LC67;
      *(undefined4 *)(puVar1 + 0x38) = 0;
      *puVar1 = uVar5;
      uVar5 = _LC68;
      *(undefined4 *)(puVar1 + 0x44) = 0;
      puVar1[1] = uVar5;
      puVar1[0x35] = 0x3000000001;
      puVar1[0x36] = 0x30200000000;
      uVar5 = _LC69;
      *(undefined4 *)(puVar1 + 0x3b) = 1;
      puVar1[0x37] = uVar5;
      puVar1[3] = _LC70;
      pcVar6 = CRYPTO_strdup("foo,bar","test/ssl_test_ctx_test.c",0xb7);
      puVar1[5] = pcVar6;
      iVar3 = test_ptr("test/ssl_test_ctx_test.c",0xb8,
                       "fixture->expected_ctx->extra.client.npn_protocols",
                       *(undefined8 *)(ptr[2] + 0x28));
      if (iVar3 != 0) {
        lVar2 = ptr[2];
        *(undefined4 *)(lVar2 + 0x20) = 0;
        *(undefined4 *)(lVar2 + 0x60) = 1;
        *(undefined4 *)(lVar2 + 0x78) = 1;
        pcVar6 = CRYPTO_strdup("baz","test/ssl_test_ctx_test.c",0xc1);
        *(char **)(lVar2 + 0x178) = pcVar6;
        iVar3 = test_ptr("test/ssl_test_ctx_test.c",0xc2,
                         "fixture->expected_ctx->resume_extra.server2.alpn_protocols",
                         *(undefined8 *)(ptr[2] + 0x178));
        if (iVar3 != 0) {
          *(undefined4 *)(ptr[2] + 0x100) = 2;
          uVar4 = execute_test(ptr);
          SSL_TEST_CTX_free(ptr[2]);
          CRYPTO_free(ptr);
          return uVar4;
        }
      }
      SSL_TEST_CTX_free(ptr[2]);
      CRYPTO_free(ptr);
    }
  }
  return 0;
}



undefined4 test_empty_configuration(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x18,"test/ssl_test_ctx_test.c",0x72);
  iVar1 = test_ptr("test/ssl_test_ctx_test.c",0x72,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr)
  ;
  if (iVar1 != 0) {
    *ptr = "test_empty_configuration";
    uVar3 = SSL_TEST_CTX_new(0);
    ptr[2] = uVar3;
    iVar1 = test_ptr("test/ssl_test_ctx_test.c",0x75,
                     "fixture->expected_ctx = SSL_TEST_CTX_new(NULL)",uVar3);
    if (iVar1 != 0) {
      ptr[1] = "ssltest_default";
      *(undefined4 *)(ptr[2] + 0x1a8) = 0;
      uVar2 = execute_test(ptr);
      SSL_TEST_CTX_free(ptr[2]);
      CRYPTO_free(ptr);
      return uVar2;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined1 * test_get_options(void)

{
  return options_2;
}



undefined8 setup_tests(void)

{
  int iVar1;
  char *file;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/ssl_test_ctx_test.c",0xf5,"Error parsing test options\n");
  }
  else {
    conf = NCONF_new((CONF_METHOD *)0x0);
    iVar1 = test_ptr("test/ssl_test_ctx_test.c",0xf9,"conf = NCONF_new(NULL)",conf);
    if (iVar1 != 0) {
      file = (char *)test_get_argument(0);
      iVar1 = NCONF_load(conf,file,(long *)0x0);
      iVar1 = test_int_gt("test/ssl_test_ctx_test.c",0xfc,
                          "NCONF_load(conf, test_get_argument(0), NULL)",&_LC78,iVar1,0);
      if (iVar1 != 0) {
        add_test("test_empty_configuration",test_empty_configuration);
        add_test("test_good_configuration",test_good_configuration);
        add_all_tests("test_bad_configuration",0x100000,0x10,1);
        return 1;
      }
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  NCONF_free(conf);
  return;
}




uint test_server_method_with_ssl_new(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  SSL_CTX *ctx;
  SSL *ssl;
  ulong uVar4;
  bool bVar5;
  
  ssl = (SSL *)0x0;
  uVar3 = OSSL_QUIC_server_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  uVar1 = test_ptr("test/quicapitest.c",0xa6a,&_LC0,ctx);
  if (uVar1 != 0) {
    ssl = SSL_new(ctx);
    uVar1 = test_ptr_null("test/quicapitest.c",0xa71,&_LC2,ssl);
    if (uVar1 != 0) {
      uVar4 = ERR_peek_error();
      bVar5 = false;
      if (((uVar4 & 0x80000000) == 0) && ((char)(uVar4 >> 0x17) == '\x14')) {
        bVar5 = ((uint)uVar4 & 0x7fffff) == 0xc0101;
      }
      iVar2 = test_true("test/quicapitest.c",0xa76,
                        "ERR_GET_LIB(err) == ERR_LIB_SSL && ERR_GET_REASON(err) == ERR_R_SHOULD_NOT_HAVE_BEEN_CALLED"
                        ,bVar5);
      uVar1 = (uint)(iVar2 != 0);
    }
  }
  SSL_free(ssl);
  SSL_CTX_free(ctx);
  return uVar1;
}



int find_new_token_data(BIO *param_1)

{
  int iVar1;
  char *pcVar2;
  char *__s2;
  long in_FS_OFFSET;
  char cVar3;
  char local_448 [1032];
  long local_40;
  
  __s2 = (char *)0x0;
  cVar3 = '\0';
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00100130:
  do {
    iVar1 = BIO_gets(param_1,local_448,0x400);
    if (iVar1 < 1) {
LAB_0010029e:
      iVar1 = 0;
      goto LAB_0010024a;
    }
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
        pcVar2 = strstr(local_448,"Token: ");
        if (pcVar2 != (char *)0x0) {
          iVar1 = strcmp(pcVar2,__s2);
          if (iVar1 == 0) {
            iVar1 = 1;
            test_info("test/quicapitest.c",0x26e,"Matched next connection token %s\n",pcVar2);
LAB_0010024a:
            CRYPTO_free(__s2);
LAB_0010025a:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return iVar1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
      else if (cVar3 == '\0') {
        pcVar2 = strstr(local_448,"Received Frame: New token");
        cVar3 = pcVar2 != (char *)0x0;
      }
      goto LAB_00100130;
    }
    test_info("test/quicapitest.c",0x25d,"Found New Token Marker\n");
    pcVar2 = strstr(local_448,"Token: ");
    if (pcVar2 == (char *)0x0) {
      test_info("test/quicapitest.c",0x260,"Next line did not contain a new token\n");
      goto LAB_0010029e;
    }
    __s2 = CRYPTO_strdup(pcVar2,"test/quicapitest.c",0x263);
    iVar1 = test_ptr("test/quicapitest.c",0x263,"tokenval = OPENSSL_strdup(tmpstring)",__s2);
    if (iVar1 == 0) goto LAB_0010025a;
    cVar3 = '\x02';
    test_info("test/quicapitest.c",0x266,"Recorded Token %s\n",__s2);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_new_token(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  SSL_CTX *pSVar4;
  BIO_METHOD *type;
  BIO *a;
  long in_FS_OFFSET;
  SSL *local_70;
  SSL *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 uStack_39;
  long local_30;
  
  a = (BIO *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (SSL *)0x0;
  local_48 = __LC18;
  uStack_40 = (undefined7)_UNK_0010b7e8;
  local_68 = (SSL *)0x0;
  local_60 = 0;
  local_58 = 0;
  uStack_39 = 0x786f46;
  uVar3 = OSSL_QUIC_client_method();
  pSVar4 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  uVar1 = test_ptr("test/quicapitest.c",0x285,
                   "cctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",pSVar4);
  if (uVar1 != 0) {
    type = BIO_s_mem();
    a = BIO_new(type);
    iVar2 = test_ptr("test/quicapitest.c",0x286,"bio = BIO_new(BIO_s_mem())",a);
    if (iVar2 != 0) {
      iVar2 = qtest_create_quic_objects(libctx,pSVar4,0,cert,privkey,2,&local_60,&local_70,0,0);
      iVar2 = test_true("test/quicapitest.c",0x287,
                        "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &clientquic, NULL, NULL)"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        SSL_set_msg_callback(local_70,(cb *)&SSL_trace);
        SSL_ctrl(local_70,0x10,0,a);
        iVar2 = qtest_create_quic_connection(local_60,local_70);
        iVar2 = test_true("test/quicapitest.c",0x292,
                          "qtest_create_quic_connection(qtserv, clientquic)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = SSL_write_ex(local_70,&local_48,0x13,&local_50);
          if ((iVar2 != 0) && (local_50 == 0x13)) {
            ossl_quic_tserver_tick(local_60);
            iVar2 = qtest_create_quic_objects
                              (libctx,pSVar4,0,cert,privkey,2,&local_58,&local_68,0,0);
            iVar2 = test_true("test/quicapitest.c",0x29f,
                              "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv2, &clientquic2, NULL, NULL)"
                              ,iVar2 != 0);
            if (iVar2 != 0) {
              SSL_set_msg_callback(local_68,(cb *)&SSL_trace);
              SSL_ctrl(local_68,0x10,0,a);
              iVar2 = qtest_create_quic_connection(local_58,local_68);
              iVar2 = test_true("test/quicapitest.c",0x2aa,
                                "qtest_create_quic_connection(qtserv2, clientquic2)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = find_new_token_data(a);
                iVar2 = test_true("test/quicapitest.c",0x2ae,"find_new_token_data(bio)",iVar2 != 0);
                uVar1 = (uint)(iVar2 != 0);
                goto LAB_00100347;
              }
            }
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_00100347:
  ossl_quic_tserver_free(local_60);
  ossl_quic_tserver_free(local_58);
  SSL_free(local_70);
  SSL_free(local_68);
  SSL_CTX_free(pSVar4);
  BIO_free(a);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



SSL_CTX * create_server_ctx(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *ctx;
  
  uVar2 = OSSL_QUIC_server_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  iVar1 = test_ptr("test/quicapitest.c",0x9cd,
                   "ssl_ctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_server_method())",ctx);
  if (iVar1 != 0) {
    iVar1 = SSL_CTX_use_certificate_file(ctx,cert,1);
    iVar1 = test_true("test/quicapitest.c",0x9ce,
                      "SSL_CTX_use_certificate_file(ssl_ctx, cert, SSL_FILETYPE_PEM)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_CTX_use_PrivateKey_file(ctx,privkey,1);
      iVar1 = test_true("test/quicapitest.c",0x9cf,
                        "SSL_CTX_use_PrivateKey_file(ssl_ctx, privkey, SSL_FILETYPE_PEM)",iVar1 != 0
                       );
      if (iVar1 != 0) {
        SSL_CTX_set_alpn_select_cb(ctx,select_alpn,0);
        SSL_CTX_set_verify(ctx,0,(callback *)0x0);
        return ctx;
      }
    }
  }
  SSL_CTX_free(ctx);
  return (SSL_CTX *)0x0;
}



char select_alpn(undefined8 param_1,uchar **param_2,uchar *param_3,uchar *param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = SSL_select_next_proto(param_2,param_3,alpn_3,9,param_4,param_5);
  return (iVar1 != 1) * '\x02';
}



ulong bio_addr_bind(BIO *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = BIO_ctrl(param_1,0x57,3,(void *)0x0);
  uVar3 = test_true("test/quicapitest.c",0x9ee,"BIO_dgram_set_caps(bio, bio_caps)",(int)lVar2 != 0);
  if ((int)uVar3 != 0) {
    uVar3 = BIO_ctrl(param_1,0x5e,0,param_2);
    iVar1 = test_int_eq("test/quicapitest.c",0x9f1,"BIO_dgram_set0_local_addr(bio, addr)",&_LC23,
                        uVar3 & 0xffffffff,1);
    uVar3 = (ulong)(iVar1 != 0);
  }
  return uVar3;
}



SSL * ql_create(undefined8 param_1,BIO *param_2)

{
  int iVar1;
  SSL *s;
  SSL *pSVar2;
  
  s = (SSL *)SSL_new_listener(param_1,0);
  iVar1 = test_ptr("test/quicapitest.c",0x9fb,"qserver = SSL_new_listener(ssl_ctx, 0)",s);
  if (iVar1 == 0) {
    pSVar2 = (SSL *)0x0;
    BIO_free(param_2);
  }
  else {
    SSL_set_bio(s,param_2,param_2);
    iVar1 = SSL_listen(s);
    iVar1 = test_true("test/quicapitest.c",0xa02,"SSL_listen(qserver)",iVar1 != 0);
    pSVar2 = s;
    if (iVar1 == 0) {
      pSVar2 = (SSL *)0x0;
      SSL_free(s);
    }
  }
  return pSVar2;
}



undefined8 create_addr(undefined8 param_1,ushort param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = BIO_ADDR_new();
  iVar1 = test_ptr("test/quicapitest.c",0x9de,"addr = BIO_ADDR_new()",uVar2);
  if (iVar1 != 0) {
    iVar1 = BIO_ADDR_rawmake(uVar2,2,param_1,4,param_2 << 8 | param_2 >> 8);
    iVar1 = test_true("test/quicapitest.c",0x9e1,
                      "BIO_ADDR_rawmake(addr, AF_INET, ina, sizeof(struct in_addr), htons(port))",
                      iVar1 != 0);
    if (iVar1 != 0) {
      return uVar2;
    }
    BIO_ADDR_free(uVar2);
  }
  return 0;
}



int test_ssl_new_from_listener(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  SSL_CTX *pSVar4;
  SSL_CTX *pSVar5;
  undefined8 uVar6;
  SSL *ssl;
  SSL *s;
  long in_FS_OFFSET;
  SSL *local_70;
  undefined4 local_54;
  BIO *local_50;
  BIO *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 0x100001f;
  local_50 = (BIO *)0x0;
  local_48 = (BIO *)0x0;
  pSVar4 = (SSL_CTX *)create_server_ctx();
  iVar1 = test_ptr("test/quicapitest.c",0xa22,"lctx = create_server_ctx()",pSVar4);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar6 = 0;
    s = (SSL *)0x0;
    ssl = (SSL *)0x0;
    local_70 = (SSL *)0x0;
    pSVar5 = (SSL_CTX *)0x0;
    goto LAB_00100921;
  }
  pSVar5 = (SSL_CTX *)create_server_ctx();
  iVar1 = test_ptr("test/quicapitest.c",0xa23,"sctx = create_server_ctx()",pSVar5);
  if (iVar1 != 0) {
    iVar1 = BIO_new_bio_dgram_pair(&local_50,0,&local_48,0);
    iVar1 = test_true("test/quicapitest.c",0xa24,"BIO_new_bio_dgram_pair(&lbio, 0, &sbio, 0)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar6 = create_addr(&local_54,0x1f68);
      iVar1 = test_ptr("test/quicapitest.c",0xa27,"addr = create_addr(&ina, 8040)",uVar6);
      if (iVar1 != 0) {
        iVar1 = bio_addr_bind(local_50,uVar6);
        iVar1 = test_true("test/quicapitest.c",0xa2a,"bio_addr_bind(lbio, addr)",iVar1 != 0);
        if (iVar1 != 0) {
          uVar6 = create_addr(&local_54,0xff0);
          iVar1 = test_ptr("test/quicapitest.c",0xa2e,"addr = create_addr(&ina, 4080)",uVar6);
          if (iVar1 != 0) {
            iVar1 = bio_addr_bind(local_48,uVar6);
            iVar1 = test_true("test/quicapitest.c",0xa31,"bio_addr_bind(sbio, addr)",iVar1 != 0);
            if (iVar1 != 0) {
              ssl = (SSL *)ql_create(pSVar4,local_50);
              local_50 = (BIO *)0x0;
              iVar1 = test_ptr("test/quicapitest.c",0xa37,"qlistener",ssl);
              if (iVar1 == 0) {
                local_70 = (SSL *)0x0;
                uVar6 = 0;
                s = (SSL *)0x0;
                iVar1 = 0;
              }
              else {
                local_70 = (SSL *)ql_create(pSVar5,local_48);
                local_48 = (BIO *)0x0;
                iVar1 = test_ptr("test/quicapitest.c",0xa3c,"qserver",local_70);
                if (iVar1 == 0) {
                  uVar6 = 0;
                  s = (SSL *)0x0;
                  iVar1 = 0;
                }
                else {
                  uVar6 = 0;
                  s = (SSL *)SSL_new_from_listener(ssl,0);
                  iVar1 = test_ptr("test/quicapitest.c",0xa3f,
                                   "qconn = SSL_new_from_listener(qlistener, 0)",s);
                  if (iVar1 != 0) {
                    uVar6 = create_addr(&local_54,0xff0);
                    iVar1 = test_ptr("test/quicapitest.c",0xa42,"addr = create_addr(&ina, 4080)",
                                     uVar6);
                    if (iVar1 != 0) {
                      iVar1 = SSL_set1_initial_peer_addr(s,uVar6);
                      uVar2 = test_true("test/quicapitest.c",0xa0e,
                                        "SSL_set1_initial_peer_addr(qconn, dst_addr)",iVar1 != 0);
                      if (uVar2 != 0) {
                        iVar1 = SSL_set_alpn_protos(s,&alpn_2,9,uVar2);
                        iVar1 = test_false("test/quicapitest.c",0xa11,
                                           "SSL_set_alpn_protos(qconn, alpn, sizeof(alpn))",
                                           iVar1 != 0);
                        uVar2 = (uint)(iVar1 != 0);
                      }
                      iVar1 = test_true("test/quicapitest.c",0xa46,&_LC41,uVar2);
                      if (iVar1 == 0) {
                        iVar1 = 0;
                        goto LAB_00100921;
                      }
                      while( true ) {
                        iVar3 = SSL_do_handshake(s);
                        if (iVar3 != -1) break;
                        SSL_handle_events(local_70);
                        SSL_handle_events(ssl);
                      }
                      iVar1 = 1;
                      iVar3 = test_int_gt("test/quicapitest.c",0xa4e,&_LC41,&_LC42,iVar3,0);
                      if (iVar3 != 0) goto LAB_00100921;
                      test_info("test/quicapitest.c",0xa4f,"SSL_do_handshake() failed\n");
                    }
                    iVar1 = 0;
                  }
                }
              }
              goto LAB_00100921;
            }
          }
        }
      }
      local_70 = (SSL *)0x0;
      s = (SSL *)0x0;
      ssl = (SSL *)0x0;
      goto LAB_00100921;
    }
  }
  local_70 = (SSL *)0x0;
  uVar6 = 0;
  s = (SSL *)0x0;
  ssl = (SSL *)0x0;
LAB_00100921:
  SSL_free(s);
  SSL_free(ssl);
  SSL_free(local_70);
  BIO_free(local_50);
  BIO_free(local_48);
  SSL_CTX_free(pSVar5);
  SSL_CTX_free(pSVar4);
  BIO_ADDR_free(uVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_early_ticks(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *pSVar3;
  long in_FS_OFFSET;
  bool bVar4;
  int local_4c;
  SSL *local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  pSVar3 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_4c = 0;
  local_48 = (SSL *)0x0;
  local_40 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x997,&_LC44,pSVar3);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(libctx,pSVar3,0,cert,privkey,2,&local_40,&local_48,0,0);
    iVar1 = test_true("test/quicapitest.c",0x998,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_in_before(local_48);
      iVar1 = test_true("test/quicapitest.c",0x99e,"SSL_in_before(clientquic)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_handle_events(local_48);
        iVar1 = test_true("test/quicapitest.c",0x9a1,"SSL_handle_events(clientquic)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = SSL_get_event_timeout(local_48,local_38,&local_4c);
          iVar1 = test_true("test/quicapitest.c",0x9a4,
                            "SSL_get_event_timeout(clientquic, &tv, &inf)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_true("test/quicapitest.c",0x9a5,&_LC48,local_4c != 0);
            if (iVar1 != 0) {
              iVar1 = SSL_has_pending(local_48);
              iVar1 = test_false("test/quicapitest.c",0x9a8,"SSL_has_pending(clientquic)",iVar1 != 0
                                );
              if (iVar1 != 0) {
                iVar1 = SSL_pending(local_48);
                iVar1 = test_int_eq("test/quicapitest.c",0x9a9,"SSL_pending(clientquic)",&_LC42,
                                    iVar1,0);
                if (iVar1 != 0) {
                  iVar1 = SSL_in_before(local_48);
                  iVar1 = test_true("test/quicapitest.c",0x9ac,"SSL_in_before(clientquic)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = qtest_create_quic_connection(local_40,local_48);
                    iVar1 = test_true("test/quicapitest.c",0x9af,
                                      "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0)
                    ;
                    if (iVar1 != 0) {
                      iVar1 = SSL_in_before(local_48);
                      iVar1 = test_false("test/quicapitest.c",0x9b2,"SSL_in_before(clientquic)",
                                         iVar1 != 0);
                      bVar4 = iVar1 != 0;
                      goto LAB_00100d93;
                    }
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
LAB_00100d93:
  SSL_free(local_48);
  SSL_CTX_free(pSVar3);
  ossl_quic_tserver_free(local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_domain_flags(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  SSL_CTX *ctx;
  SSL *ssl;
  SSL *ssl_00;
  SSL *ssl_01;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar3 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  iVar1 = test_ptr("test/quicapitest.c",0x968,
                   "ctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",ctx);
  if (iVar1 != 0) {
    iVar1 = SSL_CTX_get_domain_flags(ctx,&local_48);
    iVar1 = test_true("test/quicapitest.c",0x969,"SSL_CTX_get_domain_flags(ctx, &domain_flags)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_uint64_t_ne("test/quicapitest.c",0x96a,"domain_flags",&_LC42,local_48,0);
      if (iVar1 != 0) {
        iVar1 = test_uint64_t_ne("test/quicapitest.c",0x96b,
                                 "domain_flags & (SSL_DOMAIN_FLAG_SINGLE_THREAD | SSL_DOMAIN_FLAG_MULTI_THREAD)"
                                 ,&_LC42,(uint)local_48 & 3,0);
        if (iVar1 != 0) {
          iVar1 = test_uint64_t_ne("test/quicapitest.c",0x96d,
                                   "domain_flags & SSL_DOMAIN_FLAG_LEGACY_BLOCKING",&_LC42,
                                   (uint)local_48 & 0x10,0);
          if (iVar1 != 0) {
            iVar1 = SSL_CTX_set_domain_flags(ctx,1);
            iVar1 = test_true("test/quicapitest.c",0x96e,
                              "SSL_CTX_set_domain_flags(ctx, SSL_DOMAIN_FLAG_SINGLE_THREAD)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = SSL_CTX_get_domain_flags(ctx,&local_48);
              iVar1 = test_true("test/quicapitest.c",0x96f,
                                "SSL_CTX_get_domain_flags(ctx, &domain_flags)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = test_uint64_t_eq("test/quicapitest.c",0x970,"domain_flags",
                                         "SSL_DOMAIN_FLAG_SINGLE_THREAD",local_48,1);
                if (iVar1 != 0) {
                  ssl = (SSL *)SSL_new_domain(ctx,0);
                  iVar1 = test_ptr("test/quicapitest.c",0x971,"domain = SSL_new_domain(ctx, 0)",ssl)
                  ;
                  if (iVar1 == 0) {
                    ssl_00 = (SSL *)0x0;
                    ssl_01 = (SSL *)0x0;
                    uVar2 = 0;
                  }
                  else {
                    iVar1 = SSL_get_domain_flags(ssl,&local_48);
                    iVar1 = test_true("test/quicapitest.c",0x972,
                                      "SSL_get_domain_flags(domain, &domain_flags)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = test_uint64_t_eq("test/quicapitest.c",0x973,"domain_flags",
                                               "SSL_DOMAIN_FLAG_SINGLE_THREAD",local_48,1);
                      if (iVar1 != 0) {
                        ssl_00 = SSL_new(ctx);
                        iVar1 = test_true("test/quicapitest.c",0x974,"other_conn = SSL_new(ctx)",
                                          ssl_00 != (SSL *)0x0);
                        if (iVar1 != 0) {
                          iVar1 = SSL_get_domain_flags(ssl_00,&local_48);
                          ssl_01 = (SSL *)0x0;
                          uVar2 = test_true("test/quicapitest.c",0x975,
                                            "SSL_get_domain_flags(other_conn, &domain_flags)",
                                            iVar1 != 0);
                          if (uVar2 == 0) goto LAB_00101052;
                          iVar1 = test_uint64_t_eq("test/quicapitest.c",0x976,"domain_flags",
                                                   "SSL_DOMAIN_FLAG_SINGLE_THREAD",local_48,1);
                          if (iVar1 != 0) {
                            iVar1 = SSL_is_domain(ssl);
                            iVar1 = test_true("test/quicapitest.c",0x977,"SSL_is_domain(domain)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = SSL_is_domain(ssl_00);
                              iVar1 = test_false("test/quicapitest.c",0x978,
                                                 "SSL_is_domain(other_conn)",iVar1 != 0);
                              if (iVar1 != 0) {
                                uVar3 = SSL_get0_domain(ssl);
                                iVar1 = test_ptr_eq("test/quicapitest.c",0x979,
                                                    "SSL_get0_domain(domain)","domain",uVar3,ssl);
                                if (iVar1 != 0) {
                                  uVar3 = SSL_get0_domain(ssl_00);
                                  iVar1 = test_ptr_null("test/quicapitest.c",0x97a,
                                                        "SSL_get0_domain(other_conn)",uVar3);
                                  if (iVar1 != 0) {
                                    ssl_01 = (SSL *)SSL_new_listener_from(ssl,0);
                                    iVar1 = test_ptr("test/quicapitest.c",0x97b,
                                                     "listener = SSL_new_listener_from(domain, 0)",
                                                     ssl_01);
                                    if (iVar1 != 0) {
                                      iVar1 = SSL_is_listener(ssl_01);
                                      iVar1 = test_true("test/quicapitest.c",0x97c,
                                                        "SSL_is_listener(listener)",iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = SSL_is_domain(ssl_01);
                                        iVar1 = test_false("test/quicapitest.c",0x97d,
                                                           "SSL_is_domain(listener)",iVar1 != 0);
                                        if (iVar1 != 0) {
                                          uVar3 = SSL_get0_domain(ssl_01);
                                          iVar1 = test_ptr_eq("test/quicapitest.c",0x97e,
                                                              "SSL_get0_domain(listener)","domain",
                                                              uVar3,ssl);
                                          if (iVar1 != 0) {
                                            uVar3 = SSL_get0_listener(ssl_01);
                                            iVar1 = test_ptr_eq("test/quicapitest.c",0x97f,
                                                                "SSL_get0_listener(listener)",
                                                                "listener",uVar3,ssl_01);
                                            uVar2 = (uint)(iVar1 != 0);
                                            goto LAB_00101052;
                                          }
                                        }
                                      }
                                    }
                                    uVar2 = 0;
                                    goto LAB_00101052;
                                  }
                                }
                              }
                            }
                          }
                        }
                        ssl_01 = (SSL *)0x0;
                        uVar2 = 0;
                        goto LAB_00101052;
                      }
                    }
                    ssl_00 = (SSL *)0x0;
                    ssl_01 = (SSL *)0x0;
                    uVar2 = 0;
                  }
                  goto LAB_00101052;
                }
              }
            }
          }
        }
      }
    }
  }
  ssl_00 = (SSL *)0x0;
  ssl_01 = (SSL *)0x0;
  ssl = (SSL *)0x0;
  uVar2 = 0;
LAB_00101052:
  SSL_free(ssl);
  SSL_free(ssl_01);
  SSL_free(ssl_00);
  SSL_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_session_cb(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  SSL *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_30 = (SSL *)0x0;
  local_28 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x936,&_LC44);
  if (iVar1 != 0) {
    new_called = 0;
    cbssl = 0;
    SSL_CTX_sess_set_new_cb(ctx,new_session_cb);
    SSL_CTX_ctrl(ctx,0x2c,1,(void *)0x0);
    iVar1 = qtest_create_quic_objects(libctx,ctx,0,cert,privkey,2,&local_28,&local_30,0,0);
    iVar1 = test_true("test/quicapitest.c",0x93e,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_connection(local_28,local_30);
      iVar1 = test_true("test/quicapitest.c",0x945,
                        "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_handle_events(local_30);
        iVar1 = test_true("test/quicapitest.c",0x949,"SSL_handle_events(clientquic)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = SSL_shutdown(local_30);
          iVar1 = test_int_eq("test/quicapitest.c",0x94c,"SSL_shutdown(clientquic)",&_LC42,iVar1,0);
          if (iVar1 != 0) {
            iVar1 = test_int_eq("test/quicapitest.c",0x953,"new_called",&_LC74,new_called,2);
            if (iVar1 != 0) {
              iVar1 = test_ptr_eq("test/quicapitest.c",0x954,"clientquic","cbssl",local_30,cbssl);
              bVar3 = iVar1 != 0;
              goto LAB_00101579;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00101579:
  cbssl = 0;
  ossl_quic_tserver_free(local_28);
  SSL_free(local_30);
  SSL_CTX_free(ctx);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int new_session_cb(ssl_st *ssl,SSL_SESSION *sess)

{
  new_called = new_called + 1;
  cbssl = ssl;
  SSL_SESSION_free(sess);
  return 1;
}



undefined8 test_tparam(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *pSVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  SSL *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (SSL *)0x0;
  local_60 = 0;
  local_50 = (undefined8 *)(tparam_tests + (long)param_1 * 0x28);
  local_58 = 0;
  uVar2 = OSSL_QUIC_client_method();
  pSVar3 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  iVar1 = test_ptr("test/quicapitest.c",0x8e6,
                   "c_ctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",pSVar3);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects
                      (libctx,pSVar3,0,cert,privkey,0,&local_60,&local_68,&local_58,0);
    iVar1 = test_true("test/quicapitest.c",0x8e9,
                      "qtest_create_quic_objects(libctx, c_ctx, NULL, cert, privkey, 0, &s, &c_ssl, &qtf, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_fault_set_hand_enc_ext_listener(local_58,tparam_on_enc_ext,&local_50);
      iVar1 = test_true("test/quicapitest.c",0x8ee,
                        "qtest_fault_set_hand_enc_ext_listener(qtf, tparam_on_enc_ext, &ctx)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = qtest_create_quic_connection_ex(local_60,local_68,local_50[2] != 0);
        iVar1 = test_true("test/quicapitest.c",0x8f2,
                          "qtest_create_quic_connection_ex(s, c_ssl, ctx.t->expect_fail != NULL)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          if (local_50[2] == 0) {
LAB_00101a40:
            uVar2 = 1;
            goto LAB_00101846;
          }
          local_28 = 0;
          local_48 = (undefined1  [16])0x0;
          local_38 = (undefined1  [16])0x0;
          iVar1 = SSL_get_conn_close_info(local_68,local_48,0x28);
          iVar1 = test_true("test/quicapitest.c",0x8f9,
                            "SSL_get_conn_close_info(c_ssl, &info, sizeof(info))",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_true("test/quicapitest.c",0x8fc,
                              "(info.flags & SSL_CONN_CLOSE_FLAG_TRANSPORT) != 0",
                              (uint)local_28 >> 1 & 1);
            if (iVar1 != 0) {
              iVar1 = test_uint64_t_eq("test/quicapitest.c",0x8fd,"info.error_code",
                                       "OSSL_QUIC_ERR_TRANSPORT_PARAMETER_ERROR",local_48._0_8_,8);
              if (iVar1 != 0) {
                pcVar4 = strstr((char *)local_38._0_8_,(char *)local_50[2]);
                iVar1 = test_ptr("test/quicapitest.c",0x8fe,
                                 "strstr(info.reason, ctx.t->expect_fail)",pcVar4);
                if (iVar1 != 0) goto LAB_00101a40;
              }
            }
            test_error("test/quicapitest.c",0x8ff,
                       "expected connection closure information mismatch during TPARAM test: flags=%llu ec=%llu reason=\'%s\'"
                       ,local_28 & 0xffffffff,local_48._0_8_,local_38._0_8_);
          }
        }
      }
    }
  }
  if (local_50[2] == 0) {
    test_info("test/quicapitest.c",0x910,"failed during test for id=%llu, op=%d, bl=%zu",*local_50,
              *(undefined4 *)(local_50 + 1),local_50[4]);
  }
  else {
    test_info("test/quicapitest.c",0x90c,
              "failed during test for id=%llu, op=%d, bl=%zu, expected failure=\'%s\'",*local_50,
              *(undefined4 *)(local_50 + 1),local_50[4],local_50[2]);
  }
  uVar2 = 0;
LAB_00101846:
  ossl_quic_tserver_free(local_60);
  SSL_free(local_68);
  SSL_CTX_free(pSVar3);
  qtest_fault_free(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_get_shutdown(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *pSVar3;
  long in_FS_OFFSET;
  bool bVar4;
  SSL *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  pSVar3 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_40 = (SSL *)0x0;
  local_38 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x5fc,&_LC44,pSVar3);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(libctx,pSVar3,0,cert,privkey,2,&local_38,&local_40,0,0);
    iVar1 = test_true("test/quicapitest.c",0x5fd,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_connection(local_38,local_40);
      iVar1 = test_true("test/quicapitest.c",0x602,
                        "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_get_shutdown(local_40);
        iVar1 = test_int_eq("test/quicapitest.c",0x605,"SSL_get_shutdown(clientquic)",&_LC42,iVar1,0
                           );
        if (iVar1 != 0) {
          iVar1 = SSL_shutdown(local_40);
          iVar1 = test_int_eq("test/quicapitest.c",0x608,"SSL_shutdown(clientquic)",&_LC42,iVar1,0);
          if (iVar1 != 0) {
            iVar1 = SSL_get_shutdown(local_40);
            iVar1 = test_int_eq("test/quicapitest.c",0x60b,"SSL_get_shutdown(clientquic)",
                                "SSL_SENT_SHUTDOWN",iVar1,1);
            if (iVar1 != 0) {
              do {
                ossl_quic_tserver_tick(local_38);
                qtest_add_time(100);
                iVar1 = SSL_shutdown(local_40);
              } while (iVar1 == 0);
              iVar1 = SSL_get_shutdown(local_40);
              iVar1 = test_int_eq("test/quicapitest.c",0x613,"SSL_get_shutdown(clientquic)",
                                  "SSL_SENT_SHUTDOWN | SSL_RECEIVED_SHUTDOWN",iVar1,3);
              bVar4 = iVar1 != 0;
              goto LAB_00101b0d;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00101b0d:
  ossl_quic_tserver_free(local_38);
  SSL_free(local_40);
  SSL_CTX_free(pSVar3);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



uint test_bw_limit(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  SSL_CTX *pSVar5;
  void *ptr;
  void *ptr_00;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  SSL *local_68;
  undefined8 local_60;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = OSSL_QUIC_client_method();
  pSVar5 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar4);
  local_68 = (SSL *)0x0;
  local_60 = 0;
  local_48 = 0;
  iVar2 = test_ptr("test/quicapitest.c",0x6d8,&_LC44,pSVar5);
  if (iVar2 != 0) {
    iVar2 = qtest_create_quic_objects
                      (libctx,pSVar5,0,cert,privkey,6,&local_60,&local_68,&local_48,0);
    iVar2 = test_true("test/quicapitest.c",0x6d9,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, flags, &qtserv, &clientquic, &fault, NULL)"
                      ,iVar2 != 0);
    if (iVar2 != 0) {
      ptr_00 = (void *)0x0;
      ptr = (void *)CRYPTO_zalloc(0x4000,"test/quicapitest.c",0x6df);
      uVar3 = test_ptr("test/quicapitest.c",0x6df,"msg = OPENSSL_zalloc(TEST_SINGLE_WRITE_SIZE)",ptr
                      );
      if (uVar3 != 0) {
        ptr_00 = (void *)CRYPTO_zalloc(0x4000,"test/quicapitest.c",0x6e0);
        iVar2 = test_ptr("test/quicapitest.c",0x6e0,
                         "recvbuf = OPENSSL_zalloc(TEST_SINGLE_WRITE_SIZE)",ptr_00);
        if (iVar2 != 0) {
          iVar2 = qtest_fault_set_bw_limit(local_48,1000,1000,0);
          iVar2 = test_true("test/quicapitest.c",0x6e4,
                            "qtest_fault_set_bw_limit(fault, 1000, 1000, 0)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = qtest_create_quic_connection(local_60,local_68);
            iVar2 = test_true("test/quicapitest.c",0x6e7,
                              "qtest_create_quic_connection(qtserv, clientquic)",iVar2 != 0);
            if (iVar2 != 0) {
              qtest_start_stopwatch();
              uVar7 = 0x200000;
              uVar8 = 0x200000;
LAB_00101f1b:
              qtest_add_time(1);
              if (uVar8 == 0) goto LAB_00102006;
              do {
                uVar6 = 0x4000;
                if (uVar8 < 0x4001) {
                  uVar6 = uVar8;
                }
                iVar2 = SSL_write_ex(local_68,ptr,uVar6,&local_58);
                if (iVar2 == 0) {
                  test_info("test/quicapitest.c",0x6f4,"Retrying to send: %llu",uVar8);
                  iVar2 = SSL_get_error(local_68,0);
                  iVar2 = test_int_eq("test/quicapitest.c",0x6f5,"SSL_get_error(clientquic, 0)",
                                      "SSL_ERROR_WANT_WRITE",iVar2,3);
                  if (iVar2 == 0) break;
                }
                else {
                  uVar8 = uVar8 - local_58;
                  test_info("test/quicapitest.c",0x6f9,"Remaining to send: %llu",uVar8);
                }
                while( true ) {
                  uVar6 = 0x4000;
                  if (uVar7 < 0x4001) {
                    uVar6 = uVar7;
                  }
                  iVar2 = ossl_quic_tserver_read(local_60,0,ptr_00,uVar6,&local_50);
                  if ((iVar2 != 0) && (1 < local_50)) {
                    uVar7 = uVar7 - local_50;
                    test_info("test/quicapitest.c",0x705,"Remaining to recv: %llu",uVar7);
                    ossl_quic_tserver_tick(local_60);
                    if (uVar7 != 0) goto LAB_00101f1b;
                    uVar7 = qtest_get_stopwatch_time();
                    auVar1._8_8_ = 0;
                    auVar1._0_8_ = uVar7;
                    uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x200000)) / auVar1,0);
                    test_info("test/quicapitest.c",0x70d,
                              "BW limit: %d Bytes/ms Real bandwidth reached: %llu Bytes/ms",1000,
                              uVar4);
                    iVar2 = test_uint64_t_lt("test/quicapitest.c",0x710,"real_bw","TEST_BW_LIMIT",
                                             uVar4,1000);
                    uVar3 = (uint)(iVar2 != 0);
                    goto LAB_00101d60;
                  }
                  test_info("test/quicapitest.c",0x707,"No progress on recv: %llu",uVar7);
                  ossl_quic_tserver_tick(local_60);
                  qtest_add_time(1);
                  if (uVar8 != 0) break;
LAB_00102006:
                  SSL_handle_events(local_68);
                }
              } while( true );
            }
          }
        }
        uVar3 = 0;
      }
      goto LAB_00101d60;
    }
  }
  ptr_00 = (void *)0x0;
  ptr = (void *)0x0;
  uVar3 = 0;
LAB_00101d60:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  ossl_quic_tserver_free(local_60);
  SSL_free(local_68);
  SSL_CTX_free(pSVar5);
  qtest_fault_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_multiple_dgrams(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *pSVar3;
  void *ptr;
  long in_FS_OFFSET;
  bool bVar4;
  SSL *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  pSVar3 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_48 = (SSL *)0x0;
  local_40 = 0;
  ptr = (void *)CRYPTO_zalloc(0x578,"test/quicapitest.c",0x4b5);
  iVar1 = test_ptr("test/quicapitest.c",0x4b7,&_LC44,pSVar3);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/quicapitest.c",0x4b8,&_LC106,ptr);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_objects(libctx,pSVar3,0,cert,privkey,0,&local_40,&local_48,0,0);
      iVar1 = test_true("test/quicapitest.c",0x4b9,
                        "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, 0, &qtserv, &clientquic, NULL, NULL)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = qtest_create_quic_connection(local_40,local_48);
        iVar1 = test_true("test/quicapitest.c",0x4bc,
                          "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
        if (iVar1 != 0) {
          dgram_ctr = 0;
          SSL_set_msg_callback(local_48,dgram_cb);
          iVar1 = SSL_write_ex(local_48,ptr,0x578,&local_38);
          iVar1 = test_true("test/quicapitest.c",0x4c1,
                            "SSL_write_ex(clientquic, buf, buflen, &written)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_size_t_eq("test/quicapitest.c",0x4c2,"written","buflen",local_38,0x578);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/quicapitest.c",0x4c4,"dgram_ctr",&_LC74,dgram_ctr,2);
              bVar4 = iVar1 != 0;
              goto LAB_00102162;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00102162:
  CRYPTO_free(ptr);
  SSL_free(local_48);
  ossl_quic_tserver_free(local_40);
  SSL_CTX_free(pSVar3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_alpn(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SSL_CTX *pSVar4;
  long in_FS_OFFSET;
  bool bVar5;
  SSL *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_QUIC_client_method();
  pSVar4 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  local_30 = (SSL *)0x0;
  local_28 = 0;
  iVar1 = SSL_CTX_set_ciphersuites(pSVar4,"TLS_AES_128_GCM_SHA256");
  iVar1 = test_true("test/quicapitest.c",0x5c7,
                    "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_GCM_SHA256\")",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/quicapitest.c",0x5ca,&_LC44,pSVar4);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_objects(libctx,pSVar4,0,cert,privkey,2,&local_28,&local_30,0,0);
      iVar1 = test_true("test/quicapitest.c",0x5cb,
                        "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &clientquic, NULL, NULL)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        if (param_1 == 0) {
          iVar1 = SSL_set_alpn_protos(local_30,0,0);
          iVar1 = test_false("test/quicapitest.c",0x5d7,"SSL_set_alpn_protos(clientquic, NULL, 0)",
                             iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = SSL_connect(local_30);
            iVar2 = test_int_le("test/quicapitest.c",0x5dc,&_LC118,&_LC42,iVar1,0);
            if (iVar2 != 0) {
              iVar1 = SSL_get_error(local_30,iVar1);
              iVar1 = test_int_eq("test/quicapitest.c",0x5e0,"SSL_get_error(clientquic, ret)",
                                  "SSL_ERROR_SSL",iVar1,1);
              bVar5 = iVar1 != 0;
              goto LAB_001023a0;
            }
          }
        }
        else {
          iVar1 = SSL_connect(local_30);
          iVar2 = test_int_le("test/quicapitest.c",0x5dc,&_LC118,&_LC42,iVar1,0);
          if (iVar2 != 0) {
            iVar1 = SSL_get_error(local_30,iVar1);
            iVar1 = test_int_eq("test/quicapitest.c",0x5e4,"SSL_get_error(clientquic, ret)",
                                "SSL_ERROR_WANT_READ",iVar1,2);
            if (iVar1 != 0) {
              iVar1 = qtest_create_quic_connection(local_28,local_30);
              iVar1 = test_true("test/quicapitest.c",0x5e5,
                                "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
              bVar5 = iVar1 != 0;
              goto LAB_001023a0;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_001023a0:
  ossl_quic_tserver_free(local_28);
  SSL_free(local_30);
  SSL_CTX_free(pSVar4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_client_auth(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *ctx;
  SSL_CTX *ctx_00;
  long in_FS_OFFSET;
  bool bVar3;
  char *pcVar4;
  SSL *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  uVar2 = TLS_method();
  ctx_00 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_70 = (SSL *)0x0;
  local_68 = 0;
  local_60 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x56f,&_LC44,ctx);
  if ((iVar1 != 0) && (iVar1 = test_ptr("test/quicapitest.c",0x56f,&_LC119,ctx_00), iVar1 != 0)) {
    SSL_CTX_set_verify(ctx_00,7,(callback *)0x0);
    iVar1 = SSL_CTX_load_verify_file(ctx_00,cauthca);
    iVar1 = test_true("test/quicapitest.c",0x575,"SSL_CTX_load_verify_file(sctx, cauthca)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      if (param_1 < 1) {
        iVar1 = qtest_create_quic_objects(libctx,ctx,ctx_00,cert,privkey,0,&local_68,&local_70,0,0);
        iVar1 = test_true("test/quicapitest.c",0x57e,
                          "qtest_create_quic_objects(libctx, cctx, sctx, cert, privkey, 0, &qtserv, &clientquic, NULL, NULL)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          if (param_1 == 0) {
            iVar1 = qtest_create_quic_connection(local_68,local_70);
            iVar1 = test_false("test/quicapitest.c",0x58a,
                               "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
            bVar3 = iVar1 != 0;
            goto LAB_00102647;
          }
          goto LAB_00102842;
        }
      }
      else {
        iVar1 = SSL_CTX_use_certificate_chain_file(ctx,ccert);
        iVar1 = test_true("test/quicapitest.c",0x579,
                          "SSL_CTX_use_certificate_chain_file(cctx, ccert)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = SSL_CTX_use_PrivateKey_file(ctx,cprivkey,1);
          iVar1 = test_true("test/quicapitest.c",0x57a,
                            "SSL_CTX_use_PrivateKey_file(cctx, cprivkey, SSL_FILETYPE_PEM)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = qtest_create_quic_objects
                              (libctx,ctx,ctx_00,cert,privkey,0,&local_68,&local_70,0,0);
            iVar1 = test_true("test/quicapitest.c",0x57e,
                              "qtest_create_quic_objects(libctx, cctx, sctx, cert, privkey, 0, &qtserv, &clientquic, NULL, NULL)"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              if (param_1 == 1) {
LAB_00102842:
                iVar1 = qtest_create_quic_connection(local_68,local_70);
                iVar1 = test_true("test/quicapitest.c",0x592,
                                  "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = SSL_write_ex(local_70,"A test message",0xe,&local_60);
                  iVar1 = test_true("test/quicapitest.c",0x596,
                                    "SSL_write_ex(clientquic, msg, msglen, &numbytes)",iVar1 != 0);
                  if ((iVar1 != 0) &&
                     (iVar1 = test_size_t_eq("test/quicapitest.c",0x597,"numbytes","msglen",local_60
                                             ,0xe), iVar1 != 0)) {
                    ossl_quic_tserver_tick(local_68);
                    iVar1 = ossl_quic_tserver_write(local_68,0,"A test message",0xe,&local_60);
                    iVar1 = test_true("test/quicapitest.c",0x59b,
                                      "ossl_quic_tserver_write(qtserv, 0, (unsigned char *)msg, msglen, &numbytes)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      ossl_quic_tserver_tick(local_68);
                      SSL_handle_events(local_70);
                      iVar1 = SSL_read_ex(local_70,local_58,0x14,&local_60);
                      iVar1 = test_true("test/quicapitest.c",0x5a3,
                                        "SSL_read_ex(clientquic, buf, sizeof(buf), &numbytes)",
                                        iVar1 != 0);
                      if ((iVar1 != 0) &&
                         (iVar1 = test_size_t_eq("test/quicapitest.c",0x5a4,"numbytes","msglen",
                                                 local_60,0xe), iVar1 != 0)) {
                        uVar2 = 0xe;
                        pcVar4 = "A test message";
                        iVar1 = test_mem_eq("test/quicapitest.c",0x5a5,&_LC106,&_LC132,local_58,
                                            local_60);
                        if (iVar1 != 0) {
                          iVar1 = qtest_shutdown(local_68,local_70,pcVar4,uVar2);
                          iVar1 = test_true("test/quicapitest.c",0x5a8,
                                            "qtest_shutdown(qtserv, clientquic)",iVar1 != 0);
                          bVar3 = iVar1 != 0;
                          goto LAB_00102647;
                        }
                      }
                    }
                  }
                }
              }
              else {
                iVar1 = ssl_ctx_add_large_cert_chain(libctx,ctx,ccert);
                iVar1 = test_true("test/quicapitest.c",0x584,
                                  "ssl_ctx_add_large_cert_chain(libctx, cctx, ccert)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = ssl_ctx_add_large_cert_chain(libctx,ctx_00,cert);
                  iVar1 = test_true("test/quicapitest.c",0x585,
                                    "ssl_ctx_add_large_cert_chain(libctx, sctx, cert)",iVar1 != 0);
                  if (iVar1 != 0) goto LAB_00102842;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00102647:
  SSL_free(local_70);
  ossl_quic_tserver_free(local_68);
  SSL_CTX_free(ctx_00);
  SSL_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



bool test_quic_psk(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *pSVar3;
  long in_FS_OFFSET;
  bool bVar4;
  SSL *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  pSVar3 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_30 = (SSL *)0x0;
  local_28 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x53e,&_LC44,pSVar3);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(libctx,pSVar3,0,0,0,0,&local_28,&local_30,0,0);
    iVar1 = test_true("test/quicapitest.c",0x540,
                      "qtest_create_quic_objects(libctx, cctx, NULL, NULL, NULL, 0, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      SSL_set_psk_use_session_callback(local_30,use_session_cb);
      ossl_quic_tserver_set_psk_find_session_cb(local_28,find_session_cb);
      use_session_cb_cnt = 0;
      find_session_cb_cnt = 0;
      clientpsk = (SSL_SESSION *)create_a_psk(local_30,0x30);
      serverpsk = clientpsk;
      iVar1 = test_ptr("test/quicapitest.c",0x54c,"clientpsk",clientpsk);
      if (iVar1 != 0) {
        iVar1 = SSL_SESSION_up_ref(clientpsk);
        iVar1 = test_true("test/quicapitest.c",0x54c,"SSL_SESSION_up_ref(clientpsk)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = qtest_create_quic_connection(local_28,local_30);
          iVar1 = test_true("test/quicapitest.c",0x54f,
                            "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_int_eq("test/quicapitest.c",0x550,&_LC23,"find_session_cb_cnt",1,
                                find_session_cb_cnt);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/quicapitest.c",0x551,&_LC23,"use_session_cb_cnt",1,
                                  use_session_cb_cnt);
              if (iVar1 != 0) {
                iVar1 = SSL_session_reused(local_30);
                iVar1 = test_true("test/quicapitest.c",0x553,"SSL_session_reused(clientquic)",
                                  iVar1 != 0);
                bVar4 = iVar1 != 0;
                goto LAB_00102b1b;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00102b1b:
  SSL_free(local_30);
  ossl_quic_tserver_free(local_28);
  SSL_CTX_free(pSVar3);
  SSL_SESSION_free(clientpsk);
  SSL_SESSION_free(serverpsk);
  serverpsk = (SSL_SESSION *)0x0;
  clientpsk = (SSL_SESSION *)0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 find_session_cb(undefined8 param_1,char *param_2,long param_3,undefined8 *param_4)

{
  SSL_SESSION *ses;
  int iVar1;
  
  find_session_cb_cnt = find_session_cb_cnt + 1;
  if (serverpsk == (SSL_SESSION *)0x0) {
    return 0;
  }
  iVar1 = SSL_SESSION_up_ref();
  ses = serverpsk;
  if (iVar1 != 0) {
    if (param_3 == 8) {
      iVar1 = strncmp("Identity",param_2,8);
      if (iVar1 == 0) {
        *param_4 = ses;
        return 1;
      }
    }
    SSL_SESSION_free(ses);
  }
  return 0;
}



uint test_non_io_retry(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  SSL_CTX *ctx;
  long in_FS_OFFSET;
  undefined4 local_34;
  SSL *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  local_30 = (SSL *)0x0;
  local_28 = 0;
  if (0 < param_1) {
    iVar1 = qtest_supports_blocking();
    if (iVar1 == 0) {
      uVar2 = test_skip("test/quicapitest.c",0x4f1,"Blocking tests not supported in this build");
      goto LAB_00102e82;
    }
  }
  uVar3 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  iVar1 = test_ptr("test/quicapitest.c",0x4f4,&_LC44,ctx);
  if (iVar1 == 0) {
LAB_00102e64:
    uVar2 = 0;
  }
  else {
    SSL_CTX_set_cert_verify_callback(ctx,non_io_retry_cert_verify_cb,&local_34);
    iVar1 = qtest_create_quic_objects(libctx,ctx,0,cert,privkey,0 < param_1,&local_28,&local_30,0,0)
    ;
    iVar1 = test_true("test/quicapitest.c",0x4fa,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, flags, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00102e64;
    iVar1 = qtest_create_quic_connection_ex(local_28,local_30,0xc);
    iVar1 = test_true("test/quicapitest.c",0x4fd,
                      "qtest_create_quic_connection_ex(qtserv, clientquic, SSL_ERROR_WANT_RETRY_VERIFY)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00102e64;
    iVar1 = SSL_want(local_30);
    iVar1 = test_int_eq("test/quicapitest.c",0x4ff,"SSL_want(clientquic)","SSL_RETRY_VERIFY",iVar1,8
                       );
    if (iVar1 == 0) goto LAB_00102e64;
    local_34 = 1;
    iVar1 = qtest_create_quic_connection(local_28,local_30);
    iVar1 = test_true("test/quicapitest.c",0x503,"qtest_create_quic_connection(qtserv, clientquic)",
                      iVar1 != 0);
    uVar2 = (uint)(iVar1 != 0);
  }
  SSL_free(local_30);
  ossl_quic_tserver_free(local_28);
  SSL_CTX_free(ctx);
LAB_00102e82:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool non_io_retry_cert_verify_cb(X509_STORE_CTX *param_1,int *param_2)

{
  int idx;
  SSL *ssl;
  long lVar1;
  
  idx = SSL_get_ex_data_X509_STORE_CTX_idx();
  if ((-1 < idx) && (ssl = (SSL *)X509_STORE_CTX_get_ex_data(param_1,idx), ssl != (SSL *)0x0)) {
    if (*param_2 != 0) {
      return true;
    }
    lVar1 = SSL_ctrl(ssl,0x88,0,(void *)0x0);
    return 0 < lVar1;
  }
  return false;
}



undefined8 test_back_pressure(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  SSL_CTX *pSVar4;
  void *ptr;
  int iVar5;
  long in_FS_OFFSET;
  SSL *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_QUIC_client_method();
  pSVar4 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  local_a8 = (SSL *)0x0;
  local_a0 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x46a,&_LC44,pSVar4);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(libctx,pSVar4,0,cert,privkey,0,&local_a0,&local_a8,0,0);
    iVar1 = test_true("test/quicapitest.c",0x46b,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, 0, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_connection(local_a0,local_a8);
      iVar1 = test_true("test/quicapitest.c",0x46e,
                        "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
      if (iVar1 != 0) {
        ptr = CRYPTO_malloc(0x400,"test/quicapitest.c",0x471);
        iVar1 = test_ptr("test/quicapitest.c",0x472,&_LC132,ptr);
        if (iVar1 != 0) {
          iVar5 = 10000;
          uVar2 = RAND_bytes_ex(libctx,ptr,0x400,0);
          iVar1 = test_int_eq("test/quicapitest.c",0x474,"RAND_bytes_ex(libctx, msg, msglen, 0)",
                              &_LC23,uVar2,1);
          if (iVar1 != 0) {
            do {
              iVar1 = SSL_write_ex(local_a8,ptr,0x400,local_90);
              if (iVar1 == 0) {
                uVar3 = 1;
                iVar1 = SSL_get_error(local_a8,0);
                if (iVar1 == 3) goto LAB_001030d4;
                test_error("test/quicapitest.c",0x481,"Unexpected client failure");
                goto LAB_001031e2;
              }
              ossl_quic_tserver_tick(local_a0);
              iVar1 = ossl_quic_tserver_read(local_a0,0,local_88,0x40,local_98);
              iVar1 = test_true("test/quicapitest.c",0x487,
                                "ossl_quic_tserver_read(qtserv, 0, buf, sizeof(buf), &readbytes)",
                                iVar1 != 0);
              if (iVar1 == 0) goto LAB_001031e2;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            test_error("test/quicapitest.c",0x48d,"No back pressure seen");
          }
        }
LAB_001031e2:
        uVar3 = 0;
        goto LAB_001030d4;
      }
    }
  }
  ptr = (void *)0x0;
  uVar3 = 0;
LAB_001030d4:
  SSL_free(local_a8);
  ossl_quic_tserver_free(local_a0);
  SSL_CTX_free(pSVar4);
  CRYPTO_free(ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Removing unreachable block (ram,0x0010364e) */

undefined4 test_bio_ssl(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  SSL_CTX *ctx;
  BIO *bp;
  ulong uVar7;
  long lVar8;
  SSL *ssl;
  BIO_METHOD *type;
  BIO *bp_00;
  bool bVar9;
  undefined4 uVar10;
  long in_FS_OFFSET;
  BIO *local_d8;
  int local_cc;
  SSL *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar6);
  local_b8 = (SSL *)0x0;
  local_b0 = 0;
  iVar2 = test_ptr("test/quicapitest.c",0x3e1,&_LC44,ctx);
  if (iVar2 == 0) {
    uVar10 = 0;
    bp_00 = (BIO *)0x0;
    bp = (BIO *)0x0;
    ssl = (SSL *)0x0;
  }
  else {
    bp = BIO_new_ssl(ctx,1);
    iVar2 = test_ptr("test/quicapitest.c",0x3e5,&_LC150,bp);
    if (iVar2 != 0) {
      uVar7 = BIO_ctrl(bp,0x6e,0,&local_b8);
      iVar2 = test_int_eq("test/quicapitest.c",0x3ec,"BIO_get_ssl(cbio, &clientquic)",&_LC23,
                          uVar7 & 0xffffffff,1);
      if (iVar2 == 0) {
        bp_00 = (BIO *)0x0;
        ssl = (SSL *)0x0;
        uVar10 = 0;
        goto LAB_0010337c;
      }
      iVar2 = qtest_create_quic_objects(libctx,0,0,cert,privkey,2,&local_b0,&local_b8,0,0);
      iVar2 = test_true("test/quicapitest.c",0x3ef,
                        "qtest_create_quic_objects(libctx, NULL, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &clientquic, NULL, NULL)"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = 0;
        bVar1 = false;
        local_cc = 1000;
        iVar5 = 0;
        iVar3 = 0;
LAB_001035e1:
        do {
          iVar4 = 2;
          while (!bVar1 && iVar2 == 0) {
            if (iVar4 != 2) {
LAB_001035fb:
              bVar9 = true;
              iVar2 = 0;
              goto LAB_0010351d;
            }
            iVar2 = BIO_write_ex(bp,"Hello world",0xb,local_a8);
            if (iVar2 != 0) break;
            iVar4 = BIO_test_flags(bp,8);
            if (iVar4 == 0) goto LAB_001035fb;
            iVar4 = BIO_test_flags(bp,7);
          }
          bVar9 = iVar2 < 1;
LAB_0010351d:
          if (((bool)(bVar9 & (bVar1 ^ 1U))) && (iVar4 != 1)) {
            bVar1 = true;
            test_info("test/quicapitest.c",0x403,"BIO_write_ex() failed %d, %d",iVar2,iVar4);
            test_openssl_errors();
          }
          if (iVar3 == 0) {
            if (iVar5 < 1) {
              ossl_quic_tserver_tick(local_b0);
              qtest_add_time(100);
              iVar3 = ossl_quic_tserver_is_term_any(local_b0);
              if (iVar3 != 0) goto LAB_00103597;
              iVar5 = ossl_quic_tserver_is_handshake_confirmed(local_b0);
            }
          }
          else {
LAB_00103597:
            if (bVar1) break;
          }
          local_cc = local_cc + -1;
          if (local_cc == 0) {
            test_info("test/quicapitest.c",0x414,"No progress made");
            break;
          }
          if (bVar1 || iVar2 != 0) {
            if ((0 < iVar5) || (iVar3 != 0)) goto LAB_00103670;
            iVar3 = 0;
            goto LAB_001035e1;
          }
          iVar2 = 0;
          bVar1 = false;
        } while( true );
      }
    }
    bp_00 = (BIO *)0x0;
    uVar10 = 0;
    ssl = (SSL *)0x0;
  }
  goto LAB_0010337c;
LAB_00103670:
  uVar6 = 0;
  bp_00 = (BIO *)0x0;
  local_cc = 2;
  local_d8 = bp;
  while( true ) {
    iVar2 = ossl_quic_tserver_read(local_b0,uVar6,local_98,0x50,&local_a0);
    iVar2 = test_true("test/quicapitest.c",0x41e,
                      "ossl_quic_tserver_read(qtserv, sid, buf, sizeof(buf), &readbytes)",iVar2 != 0
                     );
    if ((iVar2 == 0) ||
       (iVar2 = test_mem_eq("test/quicapitest.c",0x420,&_LC132,&_LC106,"Hello world",0xb,local_98,
                            local_a0), iVar2 == 0)) break;
    iVar2 = ossl_quic_tserver_write(local_b0,uVar6,"Hello world",0xb,local_a8);
    iVar2 = test_true("test/quicapitest.c",0x423,
                      "ossl_quic_tserver_write(qtserv, sid, (unsigned char *)msg, msglen, &written)"
                      ,iVar2 != 0);
    if (iVar2 == 0) break;
    ossl_quic_tserver_tick(local_b0);
    iVar2 = BIO_read_ex(local_d8,local_98,0x50,&local_a0);
    iVar2 = test_true("test/quicapitest.c",0x428,
                      "BIO_read_ex(thisbio, buf, sizeof(buf), &readbytes)",iVar2 != 0);
    if ((iVar2 == 0) ||
       (iVar2 = test_mem_eq("test/quicapitest.c",0x429,&_LC132,&_LC106,"Hello world",0xb,local_98,
                            local_a0), iVar2 == 0)) break;
    if (local_cc == 1) {
      uVar10 = 1;
      ssl = (SSL *)0x0;
      goto LAB_0010337c;
    }
    lVar8 = SSL_ctrl(local_b8,0x21,0,(void *)0x0);
    iVar2 = test_true("test/quicapitest.c",0x42f,"SSL_set_mode(clientquic, 0)",lVar8 != 0);
    if (iVar2 == 0) break;
    ssl = (SSL *)SSL_new_stream(local_b8,0);
    iVar2 = test_ptr("test/quicapitest.c",0x43a,"stream");
    if (iVar2 == 0) {
LAB_001039b6:
      uVar10 = 0;
      goto LAB_0010337c;
    }
    lVar8 = SSL_ctrl(ssl,0x21,0,(void *)0x0);
    iVar2 = test_true("test/quicapitest.c",0x43d,"SSL_set_mode(stream, 0)",lVar8 != 0);
    if (iVar2 == 0) goto LAB_001039b6;
    type = BIO_f_ssl();
    bp_00 = BIO_new(type);
    iVar2 = test_ptr("test/quicapitest.c",0x441,"strbio",bp_00);
    if (iVar2 == 0) goto LAB_001039b6;
    uVar7 = BIO_ctrl(bp_00,0x6d,1,ssl);
    iVar2 = test_int_eq("test/quicapitest.c",0x444,"BIO_set_ssl(thisbio, stream, BIO_CLOSE)",&_LC23,
                        uVar7 & 0xffffffff,1);
    if (iVar2 == 0) goto LAB_001039b6;
    iVar2 = BIO_write_ex(bp_00,"Hello world",0xb,local_a8);
    iVar2 = test_true("test/quicapitest.c",0x448,"BIO_write_ex(thisbio, msg, msglen, &written)",
                      iVar2 != 0);
    if (iVar2 == 0) {
      ssl = (SSL *)0x0;
      uVar10 = 0;
      goto LAB_0010337c;
    }
    uVar6 = 4;
    ossl_quic_tserver_tick(local_b0);
    local_cc = 1;
    local_d8 = bp_00;
  }
  uVar10 = 0;
  ssl = (SSL *)0x0;
LAB_0010337c:
  BIO_free_all(bp);
  BIO_free_all(bp_00);
  SSL_free(ssl);
  ossl_quic_tserver_free(local_b0);
  SSL_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_quic_set_fd(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SSL_CTX *ctx;
  SSL *s;
  BIO *b;
  BIO *pBVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0xffffffff;
  uVar3 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  iVar1 = test_ptr("test/quicapitest.c",0x39c,
                   "ctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",ctx);
  if (iVar1 == 0) {
    SSL_free((SSL *)0x0);
    SSL_CTX_free(ctx);
  }
  else {
    s = SSL_new(ctx);
    iVar1 = test_ptr("test/quicapitest.c",0x39f,"ssl = SSL_new(ctx)",s);
    if (iVar1 != 0) {
      iVar1 = BIO_socket(2,2,0x11,0);
      iVar2 = test_int_ge("test/quicapitest.c",0x3a2,
                          "fd = BIO_socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP, 0)",&_LC42,iVar1,0);
      if (iVar2 == 0) {
LAB_00103b30:
        bVar6 = false;
      }
      else {
        if (param_1 != 0) {
          if (param_1 == 1) {
            iVar2 = SSL_set_rfd(s,iVar1);
            iVar2 = test_true("test/quicapitest.c",0x3ad,"SSL_set_rfd(ssl, fd)",iVar2 != 0);
            if (iVar2 != 0) {
              b = SSL_get_rbio(s);
              iVar2 = test_ptr("test/quicapitest.c",0x3af,"bio = SSL_get_rbio(ssl)",b);
              if (iVar2 != 0) {
                pBVar4 = SSL_get_wbio(s);
                iVar2 = test_ptr_null("test/quicapitest.c",0x3b1,"SSL_get_wbio(ssl)",pBVar4);
                goto joined_r0x00103bd5;
              }
            }
          }
          else {
            iVar2 = SSL_set_wfd(s,iVar1);
            iVar2 = test_true("test/quicapitest.c",0x3b4,"SSL_set_wfd(ssl, fd)",iVar2 != 0);
            if (iVar2 != 0) {
              b = SSL_get_wbio(s);
              iVar2 = test_ptr("test/quicapitest.c",0x3b6,"bio = SSL_get_wbio(ssl)",b);
              if (iVar2 != 0) {
                pBVar4 = SSL_get_rbio(s);
                iVar2 = test_ptr_null("test/quicapitest.c",0x3b8,"SSL_get_rbio(ssl)",pBVar4);
                if (iVar2 != 0) goto LAB_00103c31;
              }
            }
          }
          goto LAB_00103b30;
        }
        iVar2 = SSL_set_fd(s,iVar1);
        iVar2 = test_true("test/quicapitest.c",0x3a6,"SSL_set_fd(ssl, fd)",iVar2 != 0);
        if (iVar2 == 0) goto LAB_00103b30;
        b = SSL_get_rbio(s);
        iVar2 = test_ptr("test/quicapitest.c",0x3a8,"bio = SSL_get_rbio(ssl)",b);
        if (iVar2 == 0) goto LAB_00103b30;
        pBVar4 = SSL_get_wbio(s);
        iVar2 = test_ptr_eq("test/quicapitest.c",0x3aa,&_LC170,"SSL_get_wbio(ssl)",b,pBVar4);
joined_r0x00103bd5:
        if (iVar2 == 0) goto LAB_00103b30;
LAB_00103c31:
        iVar2 = BIO_method_type(b);
        iVar2 = test_int_eq("test/quicapitest.c",0x3bc,"BIO_method_type(bio)","BIO_TYPE_DGRAM",iVar2
                            ,0x515);
        if (iVar2 == 0) goto LAB_00103b30;
        lVar5 = BIO_ctrl(b,0x69,0,&local_34);
        iVar2 = test_true("test/quicapitest.c",0x3bf,"BIO_get_fd(bio, &resfd)",lVar5 != 0);
        if (iVar2 == 0) goto LAB_00103b30;
        iVar2 = test_int_eq("test/quicapitest.c",0x3c0,"resfd",&_LC178,local_34,iVar1);
        bVar6 = iVar2 != 0;
      }
      SSL_free(s);
      SSL_CTX_free(ctx);
      if (-1 < iVar1) {
        BIO_closesocket(iVar1);
      }
      goto LAB_00103a46;
    }
    SSL_free(s);
    SSL_CTX_free(ctx);
  }
  bVar6 = false;
LAB_00103a46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_quic_forbidden_options(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *ctx;
  SSL *s;
  long lVar3;
  SSL *pSVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  iVar1 = test_ptr("test/quicapitest.c",0x333,
                   "ctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",ctx);
  if (iVar1 != 0) {
    SSL_CTX_set_options(ctx,0xffffffffffffffff);
    uVar2 = SSL_CTX_get_options(ctx);
    iVar1 = test_uint64_t_eq("test/quicapitest.c",0x339,"SSL_CTX_get_options(ctx)","UINT64_MAX",
                             uVar2,0xffffffffffffffff);
    if (iVar1 != 0) {
      SSL_CTX_ctrl(ctx,0x29,1,(void *)0x0);
      SSL_CTX_set_max_early_data(ctx,1);
      SSL_CTX_set_recv_max_early_data(ctx,1);
      SSL_CTX_set_quiet_shutdown(ctx,1);
      s = SSL_new(ctx);
      iVar1 = test_ptr("test/quicapitest.c",0x342,"ssl = SSL_new(ctx)",s);
      if (iVar1 != 0) {
        uVar2 = SSL_get_options(s);
        iVar1 = test_uint64_t_eq("test/quicapitest.c",0x346,"SSL_get_options(ssl)",
                                 "OSSL_QUIC_PERMITTED_OPTIONS",uVar2,0x3df6ffb87);
        if (iVar1 != 0) {
          SSL_set_options(s,0xffffffffffffffff);
          uVar2 = SSL_get_options(s);
          iVar1 = test_uint64_t_eq("test/quicapitest.c",0x34c,"SSL_get_options(ssl)",
                                   "OSSL_QUIC_PERMITTED_OPTIONS",uVar2,0x3df6ffb87);
          if (iVar1 != 0) {
            SSL_clear_options(s,0xffffffffffffffff);
            uVar2 = SSL_get_options(s);
            iVar1 = test_uint64_t_eq("test/quicapitest.c",0x352,"SSL_get_options(ssl)",&_LC42,uVar2,
                                     0);
            if (iVar1 != 0) {
              iVar1 = SSL_get_read_ahead(s);
              iVar1 = test_false("test/quicapitest.c",0x356,"SSL_get_read_ahead(ssl)",iVar1 != 0);
              if (iVar1 != 0) {
                SSL_set_read_ahead(s,1);
                iVar1 = SSL_get_read_ahead(s);
                iVar1 = test_false("test/quicapitest.c",0x35a,"SSL_get_read_ahead(ssl)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = SSL_set_block_padding(s,0);
                  iVar1 = test_true("test/quicapitest.c",0x35e,"SSL_set_block_padding(ssl, 0)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = SSL_set_block_padding(s,1);
                    iVar1 = test_true("test/quicapitest.c",0x35f,"SSL_set_block_padding(ssl, 1)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = SSL_set_block_padding(s,2);
                      iVar1 = test_false("test/quicapitest.c",0x360,"SSL_set_block_padding(ssl, 2)",
                                         iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = SSL_set_tlsext_max_fragment_length(s,0);
                        iVar1 = test_true("test/quicapitest.c",0x364,
                                          "SSL_set_tlsext_max_fragment_length(ssl, TLSEXT_max_fragment_length_DISABLED)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = SSL_set_tlsext_max_fragment_length(s,1);
                          iVar1 = test_false("test/quicapitest.c",0x365,
                                             "SSL_set_tlsext_max_fragment_length(ssl, TLSEXT_max_fragment_length_512)"
                                             ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = SSL_set_recv_max_early_data(s,1);
                            iVar1 = test_false("test/quicapitest.c",0x369,
                                               "SSL_set_recv_max_early_data(ssl, 1)",iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = SSL_set_max_early_data(s,1);
                              iVar1 = test_false("test/quicapitest.c",0x36a,
                                                 "SSL_set_max_early_data(ssl, 1)",iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = SSL_read_early_data(s,local_48,0x10,local_50);
                                iVar1 = test_false("test/quicapitest.c",0x36e,
                                                                                                      
                                                  "SSL_read_early_data(ssl, buf, sizeof(buf), &len)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = SSL_write_early_data(s,local_48,0x10,local_50);
                                  iVar1 = test_false("test/quicapitest.c",0x36f,
                                                                                                          
                                                  "SSL_write_early_data(ssl, buf, sizeof(buf), &len)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = SSL_alloc_buffers(s);
                                    iVar1 = test_true("test/quicapitest.c",0x373,
                                                      "SSL_alloc_buffers(ssl)",iVar1 != 0);
                                    if (iVar1 != 0) {
                                      SSL_free_buffers(s);
                                      iVar1 = test_false("test/quicapitest.c",0x374,
                                                         "SSL_free_buffers(ssl)");
                                      if (iVar1 != 0) {
                                        SSL_ctrl(s,0x34,2,(void *)0x0);
                                        iVar1 = test_false("test/quicapitest.c",0x378,
                                                           "SSL_set_max_send_fragment(ssl, 2)");
                                        if (iVar1 != 0) {
                                          SSL_ctrl(s,0x7d,2,(void *)0x0);
                                          iVar1 = test_false("test/quicapitest.c",0x379,
                                                             "SSL_set_split_send_fragment(ssl, 2)");
                                          if (iVar1 != 0) {
                                            lVar3 = SSL_ctrl(s,0x7e,2,(void *)0x0);
                                            iVar1 = test_false("test/quicapitest.c",0x37a,
                                                               "SSL_set_max_pipelines(ssl, 2)",
                                                               lVar3 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = SSL_stateless(s);
                                              iVar1 = test_false("test/quicapitest.c",0x37e,
                                                                 "SSL_stateless(ssl)",iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = SSL_get_quiet_shutdown(s);
                                                iVar1 = test_false("test/quicapitest.c",0x382,
                                                                   "SSL_get_quiet_shutdown(ssl)",
                                                                   iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  pSVar4 = SSL_dup(s);
                                                  iVar1 = test_ptr_null("test/quicapitest.c",0x386,
                                                                        "SSL_dup(ssl)",pSVar4);
                                                  if (iVar1 != 0) {
                                                    iVar1 = SSL_clear(s);
                                                    iVar1 = test_false("test/quicapitest.c",0x38a,
                                                                       "SSL_clear(ssl)",iVar1 != 0);
                                                    bVar5 = iVar1 != 0;
                                                    goto LAB_00103dc0;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar5 = false;
      goto LAB_00103dc0;
    }
  }
  s = (SSL *)0x0;
  bVar5 = false;
LAB_00103dc0:
  SSL_free(s);
  SSL_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_quic_forbidden_apis(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  SSL_CTX *ctx;
  SSL *ctx_00;
  SSL_CIPHER *c;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar3 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  iVar1 = test_ptr("test/quicapitest.c",0x30c,
                   "ctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",ctx);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    ctx_00 = (SSL *)0x0;
  }
  else {
    ctx_00 = SSL_new(ctx);
    iVar1 = test_ptr("test/quicapitest.c",0x30f,"ssl = SSL_new(ctx)",ctx_00);
    if (iVar1 != 0) {
      iVar1 = SSL_set_tlsext_use_srtp(ctx_00,"SRTP_AEAD_AES_128_GCM");
      iVar1 = test_true("test/quicapitest.c",0x314,
                        "SSL_set_tlsext_use_srtp(ssl, \"SRTP_AEAD_AES_128_GCM\")",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_set_ciphersuites
                          (ctx_00,
                           "TLS_AES_128_GCM_SHA256:TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_CCM_SHA256:TLS_AES_256_CCM_SHA384:TLS_AES_128_CCM_8_SHA256:TLS_SHA256_SHA256:TLS_SHA384_SHA384"
                          );
        iVar1 = test_true("test/quicapitest.c",0x319,
                          "SSL_set_ciphersuites(ssl, QUIC_CIPHERSUITES \":\" NON_QUIC_CIPHERSUITES)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          uVar3 = SSL_get1_supported_ciphers(ctx_00);
          uVar2 = test_ptr("test/quicapitest.c",799,"ciphers = SSL_get1_supported_ciphers(ssl)",
                           uVar3);
          if (uVar2 != 0) {
            uVar7 = 0;
            while( true ) {
              iVar1 = OPENSSL_sk_num(uVar3);
              if ((ulong)(long)iVar1 <= uVar7) break;
              c = (SSL_CIPHER *)OPENSSL_sk_value(uVar3,uVar7 & 0xffffffff);
              uVar4 = SSL_CIPHER_get_id(c);
              if (2 < (int)uVar4 + 0xfcffecffU) {
                pcVar5 = SSL_CIPHER_get_name(c);
                test_error("test/quicapitest.c",0x2cb,"forbidden cipher: %s",pcVar5);
                uVar6 = 0;
                goto LAB_001044a7;
              }
              uVar7 = uVar7 + 1;
            }
            uVar6 = 1;
LAB_001044a7:
            iVar1 = test_true("test/quicapitest.c",800,"ensure_valid_ciphers(ciphers)",uVar6);
            uVar2 = (uint)(iVar1 != 0);
          }
          goto LAB_00104385;
        }
      }
    }
    uVar3 = 0;
    uVar2 = 0;
  }
LAB_00104385:
  OPENSSL_sk_free(uVar3);
  SSL_free(ctx_00);
  SSL_CTX_free(ctx);
  return uVar2;
}



bool test_quic_forbidden_apis_ctx(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *ctx;
  bool bVar3;
  
  uVar2 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  iVar1 = test_ptr("test/quicapitest.c",0x2db,
                   "ctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",ctx);
  if (iVar1 != 0) {
    iVar1 = SSL_CTX_set_tlsext_use_srtp(ctx,"SRTP_AEAD_AES_128_GCM");
    iVar1 = test_true("test/quicapitest.c",0x2e0,
                      "SSL_CTX_set_tlsext_use_srtp(ctx, \"SRTP_AEAD_AES_128_GCM\")",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_CTX_set_ciphersuites
                        (ctx,
                         "TLS_AES_128_GCM_SHA256:TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_CCM_SHA256:TLS_AES_256_CCM_SHA384:TLS_AES_128_CCM_8_SHA256:TLS_SHA256_SHA256:TLS_SHA384_SHA384"
                        );
      iVar1 = test_true("test/quicapitest.c",0x2f4,
                        "SSL_CTX_set_ciphersuites(ctx, QUIC_CIPHERSUITES \":\" NON_QUIC_CIPHERSUITES)"
                        ,iVar1 != 0);
      bVar3 = iVar1 != 0;
      goto LAB_00104547;
    }
  }
  bVar3 = false;
LAB_00104547:
  SSL_CTX_free(ctx);
  return bVar3;
}



bool test_version(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *pSVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  bool bVar5;
  SSL *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  pSVar3 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_30 = (SSL *)0x0;
  local_28 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x194,&_LC44,pSVar3);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(libctx,pSVar3,0,cert,privkey,0,&local_28,&local_30,0,0);
    iVar1 = test_true("test/quicapitest.c",0x195,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, 0, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_connection(local_28,local_30);
      iVar1 = test_true("test/quicapitest.c",0x198,
                        "qtest_create_quic_connection(qtserv, clientquic)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_version(local_30);
        iVar1 = test_int_eq("test/quicapitest.c",0x19b,"SSL_version(clientquic)",
                            "OSSL_QUIC1_VERSION",iVar1,1);
        if (iVar1 != 0) {
          pcVar4 = SSL_get_version(local_30);
          iVar1 = test_str_eq("test/quicapitest.c",0x19c,"SSL_get_version(clientquic)","\"QUICv1\"",
                              pcVar4,"QUICv1");
          if (iVar1 != 0) {
            iVar1 = SSL_is_quic(local_30);
            iVar1 = test_true("test/quicapitest.c",0x19f,"SSL_is_quic(clientquic)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = SSL_is_tls(local_30);
              iVar1 = test_false("test/quicapitest.c",0x1a0,"SSL_is_tls(clientquic)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = SSL_is_dtls(local_30);
                iVar1 = test_false("test/quicapitest.c",0x1a1,"SSL_is_dtls(clientquic)",iVar1 != 0);
                bVar5 = iVar1 != 0;
                goto LAB_00104639;
              }
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_00104639:
  ossl_quic_tserver_free(local_28);
  SSL_free(local_30);
  SSL_CTX_free(pSVar3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_cipher_find(void)

{
  int iVar1;
  undefined8 uVar2;
  SSL_CTX *ctx;
  SSL *ssl;
  undefined **ppuVar3;
  long in_FS_OFFSET;
  undefined *local_b8;
  undefined4 local_b0 [2];
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_48;
  long local_40;
  
  ssl = (SSL *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar2);
  local_b0[0] = 1;
  local_b8 = &_LC220;
  local_a8 = &_LC221;
  local_98 = &_LC222;
  local_88 = &_LC223;
  local_78 = &_LC224;
  local_68 = &_LC225;
  local_a0 = 1;
  local_90 = 1;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = &_LC226;
  local_50 = 0;
  iVar1 = test_ptr("test/quicapitest.c",0x16d,&_LC44,ctx);
  if (iVar1 != 0) {
    ppuVar3 = &local_b8;
    ssl = SSL_new(ctx);
    iVar1 = test_ptr("test/quicapitest.c",0x171,"clientquic",ssl);
    if (iVar1 == 0) {
LAB_001049e0:
      iVar1 = 0;
    }
    else {
      do {
        if (*(int *)(ppuVar3 + 1) == 0) {
          uVar2 = SSL_CIPHER_find(ssl,*ppuVar3);
          iVar1 = test_ptr_null("test/quicapitest.c",0x17a,
                                "SSL_CIPHER_find(clientquic, testciphers[i].cipherbytes)",uVar2);
          if (iVar1 == 0) goto LAB_001049e0;
        }
        else {
          uVar2 = SSL_CIPHER_find(ssl,*ppuVar3);
          iVar1 = test_ptr("test/quicapitest.c",0x176,
                           "SSL_CIPHER_find(clientquic, testciphers[i].cipherbytes)",uVar2);
          if (iVar1 == 0) goto LAB_00104901;
        }
        ppuVar3 = ppuVar3 + 2;
      } while (ppuVar3 != &local_48);
      iVar1 = 1;
    }
  }
LAB_00104901:
  SSL_free(ssl);
  SSL_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



uint test_ciphersuites(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  SSL_CTX *ctx;
  SSL *s;
  stack_st_SSL_CIPHER *psVar7;
  SSL_CIPHER *c;
  ulong uVar8;
  int *piVar9;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = OSSL_QUIC_client_method();
  ctx = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar6);
  local_48 = 0x3001301;
  local_50 = _LC228;
  uVar1 = test_ptr("test/quicapitest.c",0x12f,&_LC0,ctx);
  if (uVar1 != 0) {
    iVar2 = SSL_CTX_set_cipher_list(ctx,"DEFAULT");
    s = (SSL *)0x0;
    uVar1 = test_true("test/quicapitest.c",0x136,"SSL_CTX_set_cipher_list(ctx, \"DEFAULT\")",
                      iVar2 != 0);
    if (uVar1 != 0) {
      s = SSL_new(ctx);
      iVar2 = test_ptr("test/quicapitest.c",0x13a,&_LC2,s);
      if (iVar2 == 0) {
LAB_00104afd:
        uVar1 = 0;
      }
      else {
        iVar2 = SSL_set_cipher_list(s,"DEFAULT");
        uVar1 = test_true("test/quicapitest.c",0x13d,"SSL_set_cipher_list(ssl, \"DEFAULT\")",
                          iVar2 != 0);
        if (uVar1 != 0) {
          piVar9 = (int *)&local_50;
          psVar7 = SSL_get_ciphers(s);
          iVar2 = 0;
          do {
            iVar4 = *piVar9;
            if ((iVar4 != 0x3001303) || (is_fips == 0)) {
              iVar2 = iVar2 + 1;
              c = (SSL_CIPHER *)OPENSSL_sk_value(psVar7);
              iVar3 = test_ptr("test/quicapitest.c",0x146,"cipher",c);
              if (iVar3 == 0) goto LAB_00104afd;
              uVar8 = SSL_CIPHER_get_id(c);
              iVar4 = test_uint_eq("test/quicapitest.c",0x148,"SSL_CIPHER_get_id(cipher)",
                                   "cipherids[i]",uVar8 & 0xffffffff,iVar4);
              if (iVar4 == 0) goto LAB_00104afd;
            }
            piVar9 = piVar9 + 1;
          } while (piVar9 != &local_44);
          uVar5 = OPENSSL_sk_num(psVar7);
          iVar2 = test_int_eq("test/quicapitest.c",0x14d,"sk_SSL_CIPHER_num(ciphers)",&_LC235,uVar5,
                              iVar2);
          uVar1 = (uint)(iVar2 != 0);
        }
      }
    }
    SSL_free(s);
    SSL_CTX_free(ctx);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



uint test_fin_only_blocking(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  SSL_CTX *pSVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 *puVar9;
  SSL *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_QUIC_client_method();
  pSVar4 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  local_88 = (SSL *)0x0;
  local_80 = 0;
  iVar1 = qtest_supports_blocking();
  if (iVar1 == 0) {
    uVar2 = test_skip("test/quicapitest.c",0xe2,"Blocking tests not supported in this build");
    goto LAB_00104cff;
  }
  iVar1 = test_ptr("test/quicapitest.c",0xe4,&_LC44,pSVar4);
  if (iVar1 == 0) {
LAB_00104cdb:
    uVar2 = 0;
  }
  else {
    iVar1 = qtest_create_quic_objects(libctx,pSVar4,0,cert,privkey,1,&local_80,&local_88,0,0);
    iVar1 = test_true("test/quicapitest.c",0xe5,
                      "qtest_create_quic_objects(libctx, cctx, sctx, cert, privkey, QTEST_FLAG_BLOCK, &qtserv, &clientquic, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00104cdb;
    lVar5 = SSL_ctrl(local_88,0x37,0,"localhost");
    iVar1 = test_true("test/quicapitest.c",0xea,
                      "SSL_set_tlsext_host_name(clientquic, \"localhost\")",lVar5 != 0);
    if (iVar1 == 0) goto LAB_00104cdb;
    iVar1 = qtest_create_quic_connection(local_80,local_88);
    iVar1 = test_true("test/quicapitest.c",0xed,"qtest_create_quic_connection(qtserv, clientquic)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00104cdb;
    iVar1 = ossl_quic_tserver_stream_new(local_80,0,&local_78);
    iVar1 = test_true("test/quicapitest.c",0xf0,"ossl_quic_tserver_stream_new(qtserv, 0, &sid)",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00104cdb;
    iVar1 = ossl_quic_tserver_write(local_80,local_78,"Hello World",0xb,&local_70);
    iVar1 = test_true("test/quicapitest.c",0xf1,
                      "ossl_quic_tserver_write(qtserv, sid, (unsigned char *)msg, strlen(msg), &numbytes)"
                      ,iVar1 != 0);
    if (iVar1 == 0) goto LAB_00104cdb;
    iVar1 = test_size_t_eq("test/quicapitest.c",0xf4,"strlen(msg)","numbytes",0xb,local_70);
    if (iVar1 == 0) goto LAB_00104cdb;
    ossl_quic_tserver_tick(local_80);
    iVar1 = SSL_read_ex(local_88,local_68,0x20,&local_70);
    iVar1 = test_true("test/quicapitest.c",0xf9,
                      "SSL_read_ex(clientquic, buf, sizeof(buf), &numbytes)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00104cdb;
    puVar9 = local_68;
    iVar1 = test_mem_eq("test/quicapitest.c",0xfa,&_LC132,&_LC106,"Hello World",0xb);
    if (iVar1 == 0) goto LAB_00104cdb;
    iVar1 = ossl_quic_tserver_conclude(local_80,local_78,puVar9,local_70);
    iVar1 = test_true("test/quicapitest.c",0xff,"ossl_quic_tserver_conclude(qtserv, sid)",iVar1 != 0
                     );
    if (iVar1 == 0) goto LAB_00104cdb;
    uVar6 = ossl_time_now();
    iVar1 = SSL_read_ex(local_88,local_68,0x20,&local_70);
    iVar1 = test_false("test/quicapitest.c",0x103,
                       "SSL_read_ex(clientquic, buf, sizeof(buf), &numbytes)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00104cdb;
    uVar7 = ossl_time_now();
    uVar8 = 0;
    if (uVar6 <= uVar7) {
      uVar8 = uVar7 - uVar6;
    }
    iVar1 = SSL_get_error(local_88,0);
    iVar1 = test_int_eq("test/quicapitest.c",0x107,"SSL_get_error(clientquic, 0)",
                        "SSL_ERROR_ZERO_RETURN",iVar1,6);
    if (iVar1 == 0) goto LAB_00104cdb;
    iVar1 = test_uint64_t_le("test/quicapitest.c",0x10c,"ossl_time2ms(timediff)",&_LC246,
                             uVar8 / 1000000,0x28);
    if (iVar1 == 0) goto LAB_00104cdb;
    iVar1 = qtest_shutdown(local_80,local_88);
    iVar1 = test_true("test/quicapitest.c",0x10f,"qtest_shutdown(qtserv, clientquic)",iVar1 != 0);
    uVar2 = (uint)(iVar1 != 0);
  }
  ossl_quic_tserver_free(local_80);
  SSL_free(local_88);
  SSL_CTX_free(pSVar4);
  SSL_CTX_free((SSL_CTX *)0x0);
LAB_00104cff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_quic_write_read(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  SSL_CTX *pSVar5;
  long lVar6;
  BIO *bp;
  SSL_SESSION *session;
  SSL_CTX *pSVar7;
  long in_FS_OFFSET;
  SSL_CTX *local_f0;
  int local_d8;
  int local_d4;
  undefined4 local_c4;
  SSL *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8;
  undefined1 local_a7 [31];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = OSSL_QUIC_client_method();
  pSVar5 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar4);
  local_c4 = 0;
  local_c0 = (SSL *)0x0;
  local_b8 = 0;
  local_b0 = 0;
  if ((param_1 < 1) || (iVar3 = qtest_supports_blocking(), iVar3 != 0)) {
    local_d8 = 2;
    session = (SSL_SESSION *)0x0;
    local_d4 = 0;
    local_f0 = (SSL_CTX *)0x0;
    while (iVar3 = test_ptr("test/quicapitest.c",0x45,&_LC44,pSVar5), iVar3 != 0) {
      iVar3 = qtest_create_quic_objects
                        (libctx,pSVar5,local_f0,cert,privkey,0 < param_1,&local_b8,&local_c0,0,0);
      iVar3 = test_true("test/quicapitest.c",0x46,
                        "qtest_create_quic_objects(libctx, cctx, sctx, cert, privkey, idx >= 1 ? QTEST_FLAG_BLOCK : 0, &qtserv, &clientquic, NULL, NULL)"
                        ,iVar3 != 0);
      if (iVar3 == 0) break;
      lVar6 = SSL_ctrl(local_c0,0x37,0,"localhost");
      iVar3 = test_true("test/quicapitest.c",0x4d,
                        "SSL_set_tlsext_host_name(clientquic, \"localhost\")",lVar6 != 0);
      if (iVar3 == 0) break;
      if (session != (SSL_SESSION *)0x0) {
        iVar3 = SSL_set_session(local_c0,session);
        iVar3 = test_true("test/quicapitest.c",0x50,"SSL_set_session(clientquic, sess)",iVar3 != 0);
        if (iVar3 == 0) break;
      }
      iVar3 = qtest_create_quic_connection(local_b8,local_c0);
      iVar3 = test_true("test/quicapitest.c",0x53,"qtest_create_quic_connection(qtserv, clientquic)"
                        ,iVar3 != 0);
      if (iVar3 == 0) break;
      if (0 < param_1) {
        bp = (BIO *)ossl_quic_tserver_get0_rbio(local_b8);
        lVar6 = BIO_ctrl(bp,0x69,0,&local_c4);
        iVar3 = test_true("test/quicapitest.c",0x57,
                          "BIO_get_fd(ossl_quic_tserver_get0_rbio(qtserv), &ssock)",lVar6 != 0);
        if (iVar3 == 0) break;
        local_d4 = SSL_get_rfd(local_c0);
        iVar3 = test_int_gt("test/quicapitest.c",0x5a,"csock = SSL_get_rfd(clientquic)",&_LC42,
                            local_d4,0);
        if (iVar3 == 0) break;
      }
      bVar2 = false;
LAB_00105254:
      iVar3 = SSL_write_ex(local_c0,"A test message",0xe,&local_b0);
      iVar3 = test_true("test/quicapitest.c",0x62,"SSL_write_ex(clientquic, msg, msglen, &numbytes)"
                        ,iVar3 != 0);
      if ((iVar3 == 0) ||
         (iVar3 = test_size_t_eq("test/quicapitest.c",99,"numbytes","msglen",local_b0,0xe),
         iVar3 == 0)) {
LAB_0010550e:
        iVar3 = 0;
        goto LAB_0010572d;
      }
      if (param_1 < 1) {
LAB_001052d5:
        bVar1 = false;
      }
      else {
        do {
          iVar3 = wait_until_sock_readable(local_c4);
          iVar3 = test_true("test/quicapitest.c",0x67,"wait_until_sock_readable(ssock)",iVar3 != 0);
          if (iVar3 == 0) goto LAB_0010550e;
          ossl_quic_tserver_tick(local_b8);
          iVar3 = ossl_quic_tserver_read(local_b8,0,&local_a8,0x14,&local_b0);
          iVar3 = test_true("test/quicapitest.c",0x6c,
                            "ossl_quic_tserver_read(qtserv, sid, buf, sizeof(buf), &numbytes)",
                            iVar3 != 0);
          if (iVar3 == 0) goto LAB_0010550e;
        } while (local_b0 == 0);
        iVar3 = test_mem_eq("test/quicapitest.c",0x72,&_LC106,&_LC132,&local_a8);
        if (iVar3 == 0) goto LAB_0010550e;
        bVar1 = (bool)(1 < param_1 & bVar2);
        if (!bVar1) goto LAB_001052d5;
        BIO_closesocket(local_d4);
      }
      ossl_quic_tserver_tick(local_b8);
      iVar3 = ossl_quic_tserver_write(local_b8,0,"A test message",0xe,&local_b0);
      iVar3 = test_true("test/quicapitest.c",0x7b,
                        "ossl_quic_tserver_write(qtserv, sid, (unsigned char *)msg, msglen, &numbytes)"
                        ,iVar3 != 0);
      if (iVar3 == 0) goto LAB_0010550e;
      ossl_quic_tserver_tick(local_b8);
      SSL_handle_events(local_c0);
      if (!bVar1) {
        iVar3 = SSL_read_ex(local_c0,&local_a8,1,&local_b0);
        iVar3 = test_true("test/quicapitest.c",0x93,"SSL_read_ex(clientquic, buf, 1, &numbytes)",
                          iVar3 != 0);
        if ((iVar3 == 0) ||
           (iVar3 = test_size_t_eq("test/quicapitest.c",0x94,"numbytes",&_LC23,local_b0,1),
           iVar3 == 0)) goto LAB_0010550e;
        iVar3 = SSL_has_pending(local_c0);
        iVar3 = test_true("test/quicapitest.c",0x95,"SSL_has_pending(clientquic)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_0010550e;
        iVar3 = SSL_pending(local_c0);
        iVar3 = test_int_eq("test/quicapitest.c",0x96,"SSL_pending(clientquic)","msglen - 1",iVar3,
                            0xd);
        if (iVar3 == 0) goto LAB_0010550e;
        iVar3 = SSL_read_ex(local_c0,local_a7,0x13,&local_b0);
        iVar3 = test_true("test/quicapitest.c",0x97,
                          "SSL_read_ex(clientquic, buf + 1, sizeof(buf) - 1, &numbytes)",iVar3 != 0)
        ;
        if ((iVar3 == 0) ||
           (iVar3 = test_mem_eq("test/quicapitest.c",0x99,&_LC106,&_LC132,&local_a8,local_b0 + 1,
                                "A test message",0xe), iVar3 == 0)) goto LAB_0010550e;
        if (bVar2) goto LAB_00105615;
        bVar2 = true;
        goto LAB_00105254;
      }
      iVar3 = SSL_read_ex(local_c0,&local_a8,1,&local_b0);
      iVar3 = test_false("test/quicapitest.c",0x83,"SSL_read_ex(clientquic, buf, 1, &numbytes)",
                         iVar3 != 0);
      if (iVar3 == 0) break;
      iVar3 = SSL_get_error(local_c0,0);
      iVar3 = test_int_eq("test/quicapitest.c",0x84,"SSL_get_error(clientquic, 0)",
                          "SSL_ERROR_SYSCALL",iVar3,5);
      if (iVar3 == 0) break;
      iVar3 = SSL_write_ex(local_c0,"A test message",0xe,&local_b0);
      iVar3 = test_false("test/quicapitest.c",0x86,
                         "SSL_write_ex(clientquic, msg, msglen, &numbytes)",iVar3 != 0);
      if (iVar3 == 0) break;
      iVar3 = SSL_get_error(local_c0,0);
      iVar3 = test_int_eq("test/quicapitest.c",0x88,"SSL_get_error(clientquic, 0)",
                          "SSL_ERROR_SYSCALL",iVar3,5);
      if (iVar3 == 0) break;
LAB_00105615:
      uVar4 = 3;
      iVar3 = SSL_export_keying_material(local_c0,local_88,0x40,"test",4,"ctx",3,1);
      iVar3 = test_true("test/quicapitest.c",0x9e,
                        "SSL_export_keying_material(clientquic, scratch, sizeof(scratch), \"test\", 4, (unsigned char *)\"ctx\", 3, 1)"
                        ,iVar3 != 0);
      if (iVar3 == 0) break;
      if (session == (SSL_SESSION *)0x0) {
        iVar3 = SSL_session_reused(local_c0,uVar4);
        iVar3 = test_false("test/quicapitest.c",0xa5,"SSL_session_reused(clientquic)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_0010572d;
        session = SSL_get1_session(local_c0);
        iVar3 = test_ptr("test/quicapitest.c",0xa9,&_LC261,session);
      }
      else {
        iVar3 = SSL_session_reused(local_c0,uVar4);
        iVar3 = test_true("test/quicapitest.c",0xad,"SSL_session_reused(clientquic)",iVar3 != 0);
      }
      if (iVar3 == 0) goto LAB_0010572d;
      iVar3 = qtest_shutdown(local_b8,local_c0);
      iVar3 = test_true("test/quicapitest.c",0xb1,"qtest_shutdown(qtserv, clientquic)",iVar3 != 0);
      if (iVar3 == 0) goto LAB_0010572d;
      pSVar7 = local_f0;
      if (local_f0 == (SSL_CTX *)0x0) {
        pSVar7 = (SSL_CTX *)ossl_quic_tserver_get0_ssl_ctx(local_b8);
        iVar3 = SSL_CTX_up_ref(pSVar7);
        iVar3 = test_true("test/quicapitest.c",0xb6,"SSL_CTX_up_ref(sctx)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_0010572d;
      }
      local_f0 = pSVar7;
      ossl_quic_tserver_free(local_b8);
      local_b8 = 0;
      SSL_free(local_c0);
      local_c0 = (SSL *)0x0;
      if ((1 < param_1) || (local_d8 == 1)) {
        iVar3 = 1;
        goto LAB_0010572d;
      }
      local_d8 = 1;
    }
    iVar3 = 0;
LAB_0010572d:
    SSL_SESSION_free(session);
    ossl_quic_tserver_free(local_b8);
    SSL_free(local_c0);
    SSL_CTX_free(pSVar5);
    SSL_CTX_free(local_f0);
  }
  else {
    iVar3 = test_skip("test/quicapitest.c",0x42,"Blocking tests not supported in this build");
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void dgram_cb(int param_1,undefined8 param_2,int param_3)

{
  if ((param_3 == 0x200) && (param_1 != 0)) {
    dgram_ctr = dgram_ctr + 1;
    return;
  }
  return;
}



undefined8
use_session_cb(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
              long *param_5)

{
  int iVar1;
  
  use_session_cb_cnt = use_session_cb_cnt + 1;
  if (clientpsk == 0) {
    return 0;
  }
  iVar1 = SSL_SESSION_up_ref();
  if (iVar1 != 0) {
    *param_5 = clientpsk;
    *param_3 = "Identity";
    *param_4 = 8;
    return 1;
  }
  return 0;
}



int test_noisy_dgram(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SSL_CTX *pSVar6;
  SSL *pSVar7;
  SSL *pSVar8;
  long in_FS_OFFSET;
  long local_110;
  long *local_f8;
  long local_f0;
  SSL *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  long local_98 [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = OSSL_QUIC_client_method();
  pSVar6 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar5);
  local_d8 = (SSL *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = (undefined1  [16])0x0;
  iVar3 = test_ptr("test/quicapitest.c",0x670,&_LC44,pSVar6);
  if (iVar3 != 0) {
    iVar3 = qtest_create_quic_objects
                      (libctx,pSVar6,0,cert,privkey,(param_1 == 1) * '\b' + '\x06',&local_d0,
                       &local_d8,&local_b0,0);
    iVar3 = test_true("test/quicapitest.c",0x671,
                      "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, flags, &qtserv, &clientquic, &fault, NULL)"
                      ,iVar3 != 0);
    if (iVar3 != 0) {
      iVar3 = qtest_create_quic_connection(local_d0,local_d8);
      iVar3 = test_true("test/quicapitest.c",0x677,
                        "qtest_create_quic_connection(qtserv, clientquic)",iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = SSL_set_incoming_stream_policy(local_d8,1,0);
        iVar3 = test_true("test/quicapitest.c",0x67a,
                          "SSL_set_incoming_stream_policy(clientquic, SSL_INCOMING_STREAM_POLICY_ACCEPT, 0)"
                          ,iVar3 != 0);
        if (iVar3 != 0) {
          iVar3 = SSL_set_default_stream_mode(local_d8,0);
          iVar3 = test_true("test/quicapitest.c",0x67d,
                            "SSL_set_default_stream_mode(clientquic, SSL_DEFAULT_STREAM_MODE_NONE)",
                            iVar3 != 0);
          if (iVar3 != 0) {
            local_f8 = (long *)local_a8;
            do {
              iVar3 = ossl_quic_tserver_stream_new(local_d0,0,&local_c8);
              iVar3 = test_true("test/quicapitest.c",0x682,
                                "ossl_quic_tserver_stream_new(qtserv, 0, &sid)",iVar3 != 0);
              if (iVar3 == 0) {
LAB_00106025:
                pSVar8 = (SSL *)local_a8._8_8_;
                pSVar7 = (SSL *)local_a8._0_8_;
                goto LAB_00105a84;
              }
              ossl_quic_tserver_tick(local_d0);
              qtest_add_time(1);
              local_110 = 0x14;
              do {
                iVar3 = ossl_quic_tserver_write(local_d0,local_c8,"Hello world!",0xc,&local_c0);
                iVar3 = test_true("test/quicapitest.c",0x68d,
                                  "ossl_quic_tserver_write(qtserv, sid, (unsigned char *)msg, msglen, &written)"
                                  ,iVar3 != 0);
                if ((iVar3 == 0) ||
                   (iVar3 = test_size_t_eq("test/quicapitest.c",0x690,"msglen","written",0xc,
                                           local_c0), iVar3 == 0)) goto LAB_00106025;
                iVar3 = 2000;
                ossl_quic_tserver_tick(local_d0);
                qtest_add_time(1);
                uVar5 = local_d0;
                pSVar8 = local_d8;
                do {
                  pSVar7 = (SSL *)*local_f8;
                  if (pSVar7 == (SSL *)0x0) {
                    SSL_handle_events(pSVar8);
                    pSVar7 = (SSL *)SSL_accept_stream(pSVar8,0);
                    *local_f8 = (long)pSVar7;
                    if (pSVar7 != (SSL *)0x0) goto LAB_00105d20;
                  }
                  else {
LAB_00105d20:
                    iVar4 = SSL_read_ex(pSVar7,local_98,0x50,&local_b8);
                    if (iVar4 != 0) {
                      uVar5 = 1;
                      goto LAB_00105dd5;
                    }
                    iVar4 = SSL_get_error(pSVar7,0);
                    iVar4 = test_int_eq("test/quicapitest.c",0x636,"SSL_get_error(*stream, 0)",
                                        "SSL_ERROR_WANT_READ",iVar4,2);
                    if (iVar4 == 0) goto LAB_0010601e;
                  }
                  ossl_quic_tserver_tick(uVar5);
                  qtest_add_time(1);
                  qtest_wait_for_timeout(pSVar8);
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                test_error("test/quicapitest.c",0x63e,"No progress made");
LAB_0010601e:
                uVar5 = 0;
LAB_00105dd5:
                iVar3 = test_true("test/quicapitest.c",0x69a,
                                  "unreliable_client_read(clientquic, &stream[j], buf, sizeof(buf), &readbytes, qtserv)"
                                  ,uVar5);
                if ((iVar3 == 0) ||
                   (iVar3 = test_mem_eq("test/quicapitest.c",0x69d,&_LC132,&_LC106,"Hello world!",
                                        0xc,local_98,local_b8), iVar3 == 0)) goto LAB_00106025;
                local_110 = local_110 + -1;
              } while (local_110 != 0);
              local_f0 = 0x14;
              lVar1 = *local_f8;
              do {
                iVar3 = SSL_write_ex(lVar1,"Hello world!",0xc,&local_c0);
                iVar3 = test_true("test/quicapitest.c",0x6a3,
                                  "SSL_write_ex(stream[j], (unsigned char *)msg, msglen, &written)",
                                  iVar3 != 0);
                if ((iVar3 == 0) ||
                   (iVar3 = test_size_t_eq("test/quicapitest.c",0x6a5,"msglen","written",0xc,
                                           local_c0), iVar3 == 0)) goto LAB_00106025;
                iVar3 = 2000;
                ossl_quic_tserver_tick(local_d0);
                qtest_add_time(1);
                uVar2 = local_c8;
                uVar5 = local_d0;
                pSVar8 = local_d8;
                do {
                  iVar4 = ossl_quic_tserver_read(uVar5,uVar2,local_98,0x50,&local_b8);
                  if ((iVar4 != 0) && (1 < local_b8)) {
                    uVar5 = 1;
                    goto LAB_00105f67;
                  }
                  ossl_quic_tserver_tick(uVar5);
                  SSL_handle_events(pSVar8);
                  qtest_add_time(1);
                  qtest_wait_for_timeout(pSVar8,uVar5);
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                test_error("test/quicapitest.c",0x654,"No progress made");
                uVar5 = 0;
LAB_00105f67:
                iVar3 = test_true("test/quicapitest.c",0x6b0,
                                  "unreliable_server_read(qtserv, sid, buf, sizeof(buf), &readbytes, clientquic)"
                                  ,uVar5);
                if ((iVar3 == 0) ||
                   (iVar3 = test_mem_eq("test/quicapitest.c",0x6b2,&_LC132,&_LC106,"Hello world!",
                                        0xc,local_98,local_b8), iVar3 == 0)) goto LAB_00106025;
                local_f0 = local_f0 + -1;
              } while (local_f0 != 0);
              local_f8 = local_f8 + 1;
            } while (local_f8 != local_98);
            iVar3 = 1;
            pSVar8 = (SSL *)local_a8._8_8_;
            pSVar7 = (SSL *)local_a8._0_8_;
            goto LAB_00105a84;
          }
        }
      }
    }
  }
  iVar3 = 0;
  pSVar8 = (SSL *)0x0;
  pSVar7 = (SSL *)0x0;
LAB_00105a84:
  ossl_quic_tserver_free(local_d0);
  SSL_free(pSVar7);
  SSL_free(pSVar8);
  SSL_free(local_d8);
  SSL_CTX_free(pSVar6);
  qtest_fault_free(local_b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



undefined8 tparam_on_enc_ext(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ushort uVar1;
  size_t sVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  BUF_MEM *a;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  BUF_MEM *local_d0;
  undefined8 local_a0;
  size_t local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  a = BUF_MEM_new();
  iVar5 = test_ptr("test/quicapitest.c",0x87b,"old_bufm = BUF_MEM_new()",a);
  if (iVar5 != 0) {
    iVar5 = qtest_fault_delete_extension(param_1,0x39,*param_2,param_2 + 1,a);
    iVar5 = test_true("test/quicapitest.c",0x882,
                      "qtest_fault_delete_extension(qtf, TLSEXT_TYPE_quic_transport_parameters, ee->extensions, &ee->extensionslen, old_bufm)"
                      ,iVar5 != 0);
    if (iVar5 != 0) {
      sVar2 = a->length;
      if (-1 < (long)sVar2) {
        local_88._8_8_ = sVar2;
        local_88._0_8_ = a->data;
      }
      iVar5 = test_true("test/quicapitest.c",0x887,
                        "PACKET_buf_init(&pkt, (unsigned char *)old_bufm->data, old_bufm->length)",
                        -1 < (long)sVar2);
      if (iVar5 != 0) {
        local_d0 = BUF_MEM_new();
        iVar5 = test_ptr("test/quicapitest.c",0x888,"new_bufm = BUF_MEM_new()",local_d0);
        if (iVar5 != 0) {
          iVar5 = WPACKET_init(local_78,local_d0);
          iVar5 = test_true("test/quicapitest.c",0x889,"WPACKET_init(&wpkt, new_bufm)",iVar5 != 0);
          if (iVar5 != 0) {
            iVar5 = WPACKET_put_bytes__(local_78,0x39,2);
            iVar5 = test_true("test/quicapitest.c",0x896,
                              "WPACKET_put_bytes_u16(&wpkt, TLSEXT_TYPE_quic_transport_parameters)",
                              iVar5 != 0);
            if (iVar5 != 0) {
              iVar5 = WPACKET_start_sub_packet_len__(local_78,2);
              iVar5 = test_true("test/quicapitest.c",0x898,"WPACKET_start_sub_packet_u16(&wpkt)",
                                iVar5 != 0);
              while (iVar5 != 0) {
                if (local_88._8_8_ == 0) {
                  puVar4 = (undefined8 *)*param_4;
                  iVar5 = *(int *)(puVar4 + 1);
                  if ((iVar5 - 2U < 2) || (iVar5 == 5)) {
                    uVar8 = ossl_quic_wire_encode_transport_param_bytes
                                      (local_78,*puVar4,puVar4[3],puVar4[4]);
                    iVar5 = test_ptr("test/quicapitest.c",0x8aa,
                                     "ossl_quic_wire_encode_transport_param_bytes(&wpkt, ctx->t->id, ctx->t->buf, ctx->t->buf_len)"
                                     ,uVar8);
                    if (iVar5 == 0) break;
                    puVar4 = (undefined8 *)*param_4;
                    if (*(int *)(puVar4 + 1) == 3) {
                      uVar8 = ossl_quic_wire_encode_transport_param_bytes
                                        (local_78,*puVar4,puVar4[3],puVar4[4]);
                      iVar5 = test_ptr("test/quicapitest.c",0x8b0,
                                       "ossl_quic_wire_encode_transport_param_bytes(&wpkt, ctx->t->id, ctx->t->buf, ctx->t->buf_len)"
                                       ,uVar8);
                      goto joined_r0x0010664a;
                    }
                  }
                  else if (iVar5 == 4) {
                    iVar5 = WPACKET_memcpy(local_78,puVar4[3],puVar4[4]);
                    iVar5 = test_true("test/quicapitest.c",0x8b5,
                                      "WPACKET_memcpy(&wpkt, ctx->t->buf, ctx->t->buf_len)",
                                      iVar5 != 0);
joined_r0x0010664a:
                    if (iVar5 == 0) break;
                  }
                  iVar5 = WPACKET_close(local_78);
                  iVar5 = test_true("test/quicapitest.c",0x8b9,"WPACKET_close(&wpkt)",iVar5 != 0);
                  if (iVar5 != 0) {
                    iVar5 = WPACKET_get_total_written(local_78,&local_98);
                    iVar5 = test_true("test/quicapitest.c",0x8bc,
                                      "WPACKET_get_total_written(&wpkt, &written)",iVar5 != 0);
                    if (iVar5 != 0) {
                      WPACKET_finish(local_78);
                      lVar7 = param_2[1];
                      iVar5 = qtest_fault_resize_message(param_1,local_98 + lVar7);
                      if (iVar5 == 0) goto LAB_001061f0;
                      memcpy((void *)(*param_2 + lVar7),local_d0->data,local_98);
                      uVar1 = *(ushort *)*param_2;
                      lVar7 = (ushort)(uVar1 << 8 | uVar1 >> 8) + local_98;
                      *(char *)*param_2 = (char)((ulong)lVar7 >> 8);
                      uVar8 = 1;
                      *(char *)(*param_2 + 1) = (char)lVar7;
                      goto LAB_001060df;
                    }
                  }
                  break;
                }
                pbVar6 = (byte *)ossl_quic_wire_decode_transport_param_bytes
                                           (local_88,&local_90,&local_a0);
                iVar5 = test_ptr("test/quicapitest.c",0x89f,&_LC277,pbVar6);
                lVar7 = local_90;
                uVar8 = local_a0;
                if (iVar5 == 0) {
                  test_mem_eq("test/quicapitest.c",0x8a0,"PACKET_data(&pkt)",&_LC278,local_88._0_8_,
                              local_88._8_8_,0);
                  break;
                }
                plVar3 = (long *)*param_4;
                switch((int)plVar3[1]) {
                case 0:
                  uVar9 = ossl_quic_wire_encode_transport_param_bytes
                                    (local_78,local_90,pbVar6,local_a0);
                  iVar5 = test_ptr("test/quicapitest.c",0x836,
                                   "ossl_quic_wire_encode_transport_param_bytes(wpkt, id, data, data_len)"
                                   ,uVar9);
                  if (iVar5 == 0) goto switchD_001062f2_default;
                  if (lVar7 != *plVar3) goto LAB_001063d0;
                  uVar8 = ossl_quic_wire_encode_transport_param_bytes(local_78,lVar7,pbVar6,uVar8);
                  uVar9 = 0x83e;
                  break;
                case 1:
                case 5:
                  if (local_90 != *plVar3) {
                    uVar8 = ossl_quic_wire_encode_transport_param_bytes
                                      (local_78,local_90,pbVar6,local_a0);
                    uVar9 = 0x848;
                    break;
                  }
LAB_001063d0:
                  bVar10 = true;
                  goto LAB_00106327;
                case 2:
                case 3:
                case 4:
                  uVar8 = ossl_quic_wire_encode_transport_param_bytes
                                    (local_78,local_90,pbVar6,local_a0);
                  uVar9 = 0x852;
                  break;
                case 6:
                  if (local_90 == *plVar3) {
                    iVar5 = test_size_t_gt("test/quicapitest.c",0x85a,"data_len",&_LC42,local_a0,0);
                    if (iVar5 == 0) goto switchD_001062f2_default;
                    *pbVar6 = *pbVar6 ^ 1;
                  }
                  uVar8 = ossl_quic_wire_encode_transport_param_bytes(local_78,lVar7,pbVar6,uVar8);
                  iVar5 = test_ptr("test/quicapitest.c",0x860,
                                   "ossl_quic_wire_encode_transport_param_bytes(wpkt, id, data, data_len)"
                                   ,uVar8);
                  if (iVar5 != 0) {
                    if (lVar7 == *plVar3) {
                      *pbVar6 = *pbVar6 ^ 1;
                    }
                    goto LAB_001063d0;
                  }
                default:
switchD_001062f2_default:
                  bVar10 = false;
                  goto LAB_00106327;
                }
                iVar5 = test_ptr("test/quicapitest.c",uVar9,
                                 "ossl_quic_wire_encode_transport_param_bytes(wpkt, id, data, data_len)"
                                 ,uVar8);
                bVar10 = iVar5 != 0;
LAB_00106327:
                iVar5 = test_true("test/quicapitest.c",0x8a4,
                                  "tparam_handle(ctx, id, tp_p, tp_len, &wpkt)",bVar10);
              }
            }
            uVar8 = 0;
            WPACKET_cleanup(local_78);
            goto LAB_001060df;
          }
        }
LAB_001061f0:
        uVar8 = 0;
        goto LAB_001060df;
      }
    }
  }
  local_d0 = (BUF_MEM *)0x0;
  uVar8 = 0;
LAB_001060df:
  BUF_MEM_free(a);
  BUF_MEM_free(local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint compare_with_file(BIO *param_1)

{
  char *buf;
  char *buf_00;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  char *filename;
  BIO *pBVar4;
  BIO *bp;
  ulong uVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar11 = puVar1;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar1 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != local_4030);
  *(undefined8 *)(puVar11 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar11 + -0x1030) = 0x1066f7;
  filename = (char *)test_mk_file_path(datadir,"ssltraceref.txt");
  *(undefined8 *)(puVar11 + -0x1030) = 0x106711;
  iVar2 = test_ptr("test/quicapitest.c",0x1c7,"reffile",filename);
  if (iVar2 == 0) {
    *(undefined8 *)(puVar11 + -0x1028) = 0;
    uVar3 = 0;
    bp = (BIO *)0x0;
  }
  else {
    bp = (BIO *)0x0;
    *(undefined8 *)(puVar11 + -0x1030) = 0x106782;
    pBVar4 = BIO_new_file(filename,"rb");
    *(BIO **)(puVar11 + -0x1028) = pBVar4;
    *(undefined8 *)(puVar11 + -0x1030) = 0x10679d;
    uVar3 = test_ptr("test/quicapitest.c",0x1cb,&_LC290,pBVar4);
    if (uVar3 != 0) {
      *(undefined8 *)(puVar11 + -0x1030) = 0x1067ba;
      bp = BIO_new_file("ssltraceref-new.txt","wb");
      buf_00 = puVar11 + 0xfe8;
      *(undefined8 *)(puVar11 + -0x1030) = 0x1067dc;
      iVar2 = test_ptr("test/quicapitest.c",0x1cf,"newfile");
      if (iVar2 == 0) {
LAB_001067e0:
        uVar3 = 0;
      }
      else {
        do {
          *(undefined8 *)(puVar11 + -0x1030) = 0x106813;
          iVar2 = BIO_gets(param_1,buf_00,0x2000);
          if (iVar2 < 1) {
            *(undefined8 *)(puVar11 + -0x1030) = 0x106828;
            uVar5 = BIO_ctrl(param_1,0x80,0,(void *)0x0);
            buf = puVar11 + -0x1018;
            *(undefined8 *)(puVar11 + -0x1030) = 0x10684e;
            iVar2 = test_int_ge("test/quicapitest.c",0x1d8,"BIO_seek(membio, 0)",&_LC42,
                                uVar5 & 0xffffffff,0);
            if (iVar2 != 0) goto LAB_00106858;
            goto LAB_001067e0;
          }
          *(undefined8 *)(puVar11 + -0x1030) = 0x1067fb;
          iVar2 = BIO_puts(bp,buf_00);
        } while (0 < iVar2);
        uVar3 = 0;
        *(undefined8 *)(puVar11 + -0x1030) = 0x1069e8;
        test_error("test/quicapitest.c",0x1d4,"Failed writing new file data");
      }
    }
  }
  goto LAB_00106722;
LAB_00106858:
  do {
    *(undefined8 *)(puVar11 + -0x1030) = 0x106869;
    iVar2 = BIO_gets(*(BIO **)(puVar11 + -0x1028),buf,0x2000);
    if (iVar2 < 1) {
      *(undefined8 *)(puVar11 + -0x1030) = 0x1069ff;
      BIO_ctrl(*(BIO **)(puVar11 + -0x1028),2,0,(void *)0x0);
      *(undefined8 *)(puVar11 + -0x1030) = 0x106a1a;
      iVar2 = test_true("test/quicapitest.c",0x1f8,"BIO_eof(file)");
      if (iVar2 == 0) goto LAB_001067e0;
      *(undefined8 *)(puVar11 + -0x1030) = 0x106a33;
      lVar10 = BIO_ctrl(param_1,2,0,(void *)0x0);
      *(undefined8 *)(puVar11 + -0x1030) = 0x106a50;
      iVar2 = test_true("test/quicapitest.c",0x1f9,"BIO_eof(membio)",(int)lVar10 != 0);
      uVar3 = (uint)(iVar2 != 0);
      goto LAB_00106722;
    }
    *(undefined8 *)(puVar11 + -0x1030) = 0x106881;
    iVar2 = BIO_gets(param_1,buf_00,0x2000);
    if (iVar2 < 1) {
      uVar3 = 0;
      *(undefined8 *)(puVar11 + -0x1030) = 0x106a72;
      test_error("test/quicapitest.c",0x1df,"Failed reading mem data");
      goto LAB_00106722;
    }
    *(undefined8 *)(puVar11 + -0x1030) = 0x106891;
    sVar6 = strlen(buf);
    do {
      sVar7 = sVar6;
      pcVar8 = buf;
      if (sVar7 == 0) goto LAB_001068bb;
      sVar6 = sVar7 - 1;
    } while ((puVar11[sVar7 - 0x1019] == '\n') || (puVar11[sVar7 - 0x1019] == '\r'));
    pcVar8 = buf + sVar7;
LAB_001068bb:
    *pcVar8 = '\0';
    *(undefined8 *)(puVar11 + -0x1030) = 0x1068c6;
    sVar6 = strlen(buf_00);
    do {
      sVar7 = sVar6;
      pcVar8 = buf_00;
      if (sVar7 == 0) goto LAB_001068f2;
      sVar6 = sVar7 - 1;
    } while ((puVar11[sVar7 + 0xfe7] == '\n') || (puVar11[sVar7 + 0xfe7] == '\r'));
    pcVar8 = buf_00 + sVar7;
LAB_001068f2:
    *pcVar8 = '\0';
    *(undefined8 *)(puVar11 + -0x1030) = 0x1068fd;
    sVar6 = strlen(buf);
    if (sVar6 == 0) {
      *(undefined8 *)(puVar11 + -0x1030) = 0x10690a;
      sVar6 = strlen(buf_00);
      if (sVar6 != 0) {
LAB_00106a77:
        *(undefined8 *)(puVar11 + -0x1030) = 0x106a8d;
        test_error("test/quicapitest.c",0x1eb,"Actual and ref line data length mismatch");
        *(undefined8 *)(puVar11 + -0x1030) = 0x106aa9;
        test_info("test/quicapitest.c",0x1ec,&_LC300,buf);
        uVar3 = 0;
        *(undefined8 *)(puVar11 + -0x1030) = 0x106ac0;
        test_info("test/quicapitest.c",0x1ed,&_LC300,buf_00);
        goto LAB_00106722;
      }
    }
    else {
      *(size_t *)(puVar11 + -0x1020) = sVar6;
      *(undefined8 *)(puVar11 + -0x1030) = 0x106955;
      uVar9 = strlen(buf_00);
      uVar5 = *(ulong *)(puVar11 + -0x1020);
      if ((puVar11[uVar5 - 0x1019] == '?') && (uVar5 < uVar9)) {
        puVar11[uVar5 + 0xfe8] = 0;
        *(undefined8 *)(puVar11 + -0x1030) = 0x1069c5;
        uVar9 = strlen(buf_00);
        uVar5 = *(ulong *)(puVar11 + -0x1020);
      }
      if (uVar5 != uVar9) goto LAB_00106a77;
      uVar9 = 0;
      do {
        if (buf[uVar9] == '?') {
          buf_00[uVar9] = '?';
        }
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    *(undefined8 *)(puVar11 + -0x1030) = 0x106934;
    iVar2 = test_str_eq("test/quicapitest.c",0x1f5,&_LC298,&_LC297,buf,buf_00);
  } while (iVar2 != 0);
  uVar3 = 0;
LAB_00106722:
  *(undefined8 *)(puVar11 + -0x1030) = 0x106732;
  CRYPTO_free(filename);
  *(undefined8 *)(puVar11 + -0x1030) = 0x10673b;
  BIO_free(*(BIO **)(puVar11 + -0x1028));
  *(undefined8 *)(puVar11 + -0x1030) = 0x106743;
  BIO_free(bp);
  if (*(long *)(puVar11 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar11 + -0x1030) = &UNK_00106aca;
    __stack_chk_fail();
  }
  return uVar3;
}



uint test_ssl_trace(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  SSL_CTX *pSVar4;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar5;
  long in_FS_OFFSET;
  SSL *local_40;
  undefined8 local_38;
  long local_30;
  
  bp = (BIO *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (SSL *)0x0;
  local_38 = 0;
  uVar3 = OSSL_QUIC_client_method();
  pSVar4 = (SSL_CTX *)SSL_CTX_new_ex(libctx,0,uVar3);
  uVar1 = test_ptr("test/quicapitest.c",0x210,
                   "cctx = SSL_CTX_new_ex(libctx, NULL, OSSL_QUIC_client_method())",pSVar4);
  if (uVar1 != 0) {
    type = BIO_s_mem();
    bp = BIO_new(type);
    iVar2 = test_ptr("test/quicapitest.c",0x211,"bio = BIO_new(BIO_s_mem())",bp);
    if (iVar2 != 0) {
      iVar2 = SSL_CTX_set_ciphersuites(pSVar4,"TLS_AES_128_GCM_SHA256");
      iVar2 = test_true("test/quicapitest.c",0x212,
                        "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_128_GCM_SHA256\")",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = qtest_create_quic_objects(libctx,pSVar4,0,cert,privkey,2,&local_38,&local_40,0,0);
        iVar2 = test_true("test/quicapitest.c",0x213,
                          "qtest_create_quic_objects(libctx, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &clientquic, NULL, NULL)"
                          ,iVar2 != 0);
        if (iVar2 != 0) {
          SSL_set_msg_callback(local_40,(cb *)&SSL_trace);
          SSL_ctrl(local_40,0x10,0,bp);
          qtest_create_quic_connection(local_38,local_40);
          iVar2 = test_true("test/quicapitest.c",0x21d,
                            "qtest_create_quic_connection(qtserv, clientquic)");
          if (iVar2 != 0) {
            if (is_fips == 0) {
              iVar2 = compare_with_file(bp);
              iVar2 = test_true("test/quicapitest.c",0x226,"compare_with_file(bio)",iVar2 != 0);
              uVar1 = (uint)(iVar2 != 0);
            }
            else {
              uVar5 = BIO_ctrl(bp,10,0,(void *)0x0);
              iVar2 = test_int_gt("test/quicapitest.c",0x223,"BIO_pending(bio)",&_LC42,
                                  uVar5 & 0xffffffff,0);
              uVar1 = (uint)(iVar2 != 0);
            }
            goto LAB_00106b40;
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_00106b40:
  ossl_quic_tserver_free(local_38);
  SSL_free(local_40);
  SSL_CTX_free(pSVar4);
  BIO_free(bp);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_4;
}



void cleanup_tests(void)

{
  bio_f_noisy_dgram_filter_free();
  bio_f_pkt_split_dgram_filter_free();
  CRYPTO_free(cert);
  CRYPTO_free(privkey);
  CRYPTO_free(ccert);
  CRYPTO_free(cauthca);
  CRYPTO_free(cprivkey);
  OSSL_PROVIDER_unload(defctxnull);
  OSSL_LIB_CTX_free(libctx);
  return;
}



undefined8 setup_tests(void)

{
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  
  libctx = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/quicapitest.c",0xa8b,"libctx",libctx);
  if (iVar1 == 0) {
    return 0;
  }
  defctxnull = OSSL_PROVIDER_load(0,&_LC306);
  iVar1 = OSSL_PROVIDER_available(0,"default");
  iVar1 = test_false("test/quicapitest.c",0xa94,"OSSL_PROVIDER_available(NULL, \"default\")",
                     iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = OSSL_PROVIDER_available(0,&_LC309);
    iVar1 = test_false("test/quicapitest.c",0xa95,"OSSL_PROVIDER_available(NULL, \"fips\")",
                       iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_skip_common_options();
      if (iVar1 == 0) {
        test_error("test/quicapitest.c",0xa99,"Error parsing test options\n");
      }
      else {
        __s1 = (char *)test_get_argument(0);
        iVar1 = test_ptr("test/quicapitest.c",0xa9d,"modulename = test_get_argument(0)",__s1);
        if (iVar1 != 0) {
          uVar2 = test_get_argument(1);
          iVar1 = test_ptr("test/quicapitest.c",0xa9e,"configfile = test_get_argument(1)",uVar2);
          if (iVar1 != 0) {
            certsdir = test_get_argument(2);
            iVar1 = test_ptr("test/quicapitest.c",0xa9f,"certsdir = test_get_argument(2)",certsdir);
            if (iVar1 != 0) {
              datadir = test_get_argument(3);
              iVar1 = test_ptr("test/quicapitest.c",0xaa0,"datadir = test_get_argument(3)",datadir);
              if (iVar1 != 0) {
                iVar1 = OSSL_LIB_CTX_load_config(libctx,uVar2);
                iVar1 = test_true("test/quicapitest.c",0xaa3,
                                  "OSSL_LIB_CTX_load_config(libctx, configfile)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = OSSL_PROVIDER_available(libctx,__s1);
                  iVar1 = test_true("test/quicapitest.c",0xaa7,
                                    "OSSL_PROVIDER_available(libctx, modulename)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = strcmp(__s1,"default");
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PROVIDER_available(libctx,"default");
                      iVar1 = test_false("test/quicapitest.c",0xaac,
                                         "OSSL_PROVIDER_available(libctx, \"default\")",iVar1 != 0);
                      if (iVar1 == 0) goto LAB_00106e9d;
                    }
                    iVar1 = strcmp(__s1,"fips");
                    if (iVar1 == 0) {
                      is_fips = 1;
                    }
                    cert = test_mk_file_path(certsdir,"servercert.pem");
                    if ((((cert != 0) &&
                         (ccert = test_mk_file_path(certsdir,"ee-client-chain.pem"), ccert != 0)) &&
                        (cauthca = test_mk_file_path(certsdir,"root-cert.pem"), cauthca != 0)) &&
                       ((privkey = test_mk_file_path(certsdir,"serverkey.pem"), privkey != 0 &&
                        (cprivkey = test_mk_file_path(certsdir,"ee-key.pem"), privkey != 0)))) {
                      add_all_tests("test_quic_write_read",test_quic_write_read,3,1);
                      add_test("test_fin_only_blocking",test_fin_only_blocking);
                      add_test("test_ciphersuites",test_ciphersuites);
                      add_test("test_cipher_find",test_cipher_find);
                      add_test("test_version",test_version);
                      add_test("test_ssl_trace",test_ssl_trace);
                      add_test("test_quic_forbidden_apis_ctx",test_quic_forbidden_apis_ctx);
                      add_test("test_quic_forbidden_apis",test_quic_forbidden_apis);
                      add_test("test_quic_forbidden_options",test_quic_forbidden_options);
                      add_all_tests("test_quic_set_fd",test_quic_set_fd,3,1);
                      add_test("test_bio_ssl",test_bio_ssl);
                      add_test("test_back_pressure",test_back_pressure);
                      add_test("test_multiple_dgrams",test_multiple_dgrams);
                      add_all_tests("test_non_io_retry",test_non_io_retry,2,1);
                      add_test("test_quic_psk",test_quic_psk);
                      add_all_tests("test_client_auth",test_client_auth,3,1);
                      add_all_tests("test_alpn",test_alpn,2,1);
                      add_all_tests("test_noisy_dgram",test_noisy_dgram,2,1);
                      add_test("test_bw_limit",test_bw_limit);
                      add_test("test_get_shutdown",test_get_shutdown);
                      add_all_tests("test_tparam",test_tparam,0x4b,1);
                      add_test("test_session_cb",test_session_cb);
                      add_test("test_domain_flags",test_domain_flags);
                      add_test("test_early_ticks",test_early_ticks);
                      add_test("test_ssl_new_from_listener",test_ssl_new_from_listener);
                      add_test("test_new_token",test_new_token);
                      add_test("test_server_method_with_ssl_new",0x100000);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00106e9d:
  cleanup_tests();
  return 0;
}



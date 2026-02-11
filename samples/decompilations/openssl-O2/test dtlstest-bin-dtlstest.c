
int timer_cb(undefined8 param_1,int param_2)

{
  int iVar1;
  
  timer_cb_count = timer_cb_count + 1;
  iVar1 = param_2 * 2;
  if (param_2 == 0) {
    iVar1 = 50000;
  }
  return iVar1;
}



uint test_listen(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  SSL_CTX *local_40;
  SSL_CTX *local_38;
  SSL *local_30;
  SSL *local_28;
  long local_20;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (SSL_CTX *)0x0;
  local_38 = (SSL_CTX *)0x0;
  local_30 = (SSL *)0x0;
  local_28 = (SSL *)0x0;
  uVar5 = DTLS_client_method();
  uVar6 = DTLS_server_method();
  iVar3 = create_ssl_ctx_pair(0,uVar6,uVar5,0xfeff,0,&local_40,&local_38,uVar2,uVar1);
  uVar4 = test_true("test/dtlstest.c",0x255,
                    "create_ssl_ctx_pair(NULL, DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                    ,iVar3 != 0);
  if (uVar4 != 0) {
    SSL_CTX_set_cookie_generate_cb(local_40,generate_cookie_cb);
    SSL_CTX_set_cookie_verify_cb(local_40,verify_cookie_cb);
    iVar3 = create_ssl_objects(local_40,local_38,&local_30,&local_28,0,0);
    uVar4 = test_true("test/dtlstest.c",0x266,
                      "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",
                      iVar3 != 0);
    if (uVar4 != 0) {
      DTLS_set_timer_cb(local_28,0x100000);
      DTLS_set_timer_cb(local_30,0x100000);
      iVar3 = create_bare_ssl_connection(local_30,local_28,0,1,1);
      iVar3 = test_true("test/dtlstest.c",0x271,
                        "create_bare_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE, 1, 1)",
                        iVar3 != 0);
      uVar4 = (uint)(iVar3 != 0);
    }
    SSL_free(local_30);
    SSL_free(local_28);
    SSL_CTX_free(local_40);
    SSL_CTX_free(local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void verify_cookie_cb(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  test_mem_eq("test/dtlstest.c",0x3a,"cookie","dummy_cookie",param_2,param_3,"0123456",8);
  return;
}



undefined8 generate_cookie_cb(undefined8 param_1,char (*param_2) [8],undefined4 *param_3)

{
  *param_2 = dummy_cookie;
  *param_3 = 8;
  return 1;
}



uint test_swap_records(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  BIO *pBVar7;
  long in_FS_OFFSET;
  SSL_CTX *local_70;
  SSL_CTX *local_68;
  SSL *local_60;
  SSL *local_58;
  undefined4 local_4e;
  undefined1 local_4a [10];
  long local_40;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4e = 0x3020100;
  local_70 = (SSL_CTX *)0x0;
  local_68 = (SSL_CTX *)0x0;
  local_60 = (SSL *)0x0;
  local_58 = (SSL *)0x0;
  uVar5 = DTLS_client_method();
  uVar6 = DTLS_server_method();
  iVar3 = create_ssl_ctx_pair(0,uVar6,uVar5,0xfeff,0,&local_70,&local_68,uVar2,uVar1);
  uVar4 = test_true("test/dtlstest.c",0x1e7,
                    "create_ssl_ctx_pair(NULL, DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                    ,iVar3 != 0);
  if (uVar4 == 0) goto LAB_0010030f;
  iVar3 = SSL_CTX_set_cipher_list(local_68,"AES128-SHA");
  iVar3 = test_true("test/dtlstest.c",0x1ee,"SSL_CTX_set_cipher_list(cctx, \"AES128-SHA\")",
                    iVar3 != 0);
  if (iVar3 == 0) {
LAB_001003a6:
    uVar4 = 0;
  }
  else {
    iVar3 = create_ssl_objects(local_70,local_68,&local_60,&local_58,0,0);
    iVar3 = test_true("test/dtlstest.c",0x1f8,
                      "create_ssl_objects(sctx, cctx, &sssl, &cssl, NULL, NULL)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_001003a6;
    iVar3 = SSL_connect(local_58);
    iVar3 = test_int_le("test/dtlstest.c",0x1fd,"SSL_connect(cssl)",&_LC9,iVar3,0);
    if (iVar3 == 0) goto LAB_001003a6;
    iVar3 = SSL_accept(local_60);
    iVar3 = test_int_le("test/dtlstest.c",0x201,"SSL_accept(sssl)",&_LC9,iVar3,0);
    if (iVar3 == 0) goto LAB_001003a6;
    iVar3 = SSL_connect(local_58);
    iVar3 = test_int_le("test/dtlstest.c",0x205,"SSL_connect(cssl)",&_LC9,iVar3,0);
    if (iVar3 == 0) goto LAB_001003a6;
    if (param_1 == 0) {
      pBVar7 = SSL_get_wbio(local_58);
      iVar3 = test_ptr("test/dtlstest.c",0x20b,&_LC12,pBVar7);
      if (iVar3 != 0) {
        iVar3 = mempacket_swap_epoch(pBVar7);
        iVar3 = test_true("test/dtlstest.c",0x20c,"mempacket_swap_epoch(bio)",iVar3 != 0);
        if (iVar3 != 0) goto LAB_001004c5;
      }
      goto LAB_001003a6;
    }
LAB_001004c5:
    iVar3 = SSL_accept(local_60);
    iVar3 = test_int_gt("test/dtlstest.c",0x211,"SSL_accept(sssl)",&_LC9,iVar3,0);
    if (iVar3 == 0) goto LAB_001003a6;
    iVar3 = SSL_write(local_60,&local_4e,4);
    iVar3 = test_int_eq("test/dtlstest.c",0x215,"SSL_write(sssl, msg, sizeof(msg))",
                        "(int)sizeof(msg)",iVar3,4);
    if (iVar3 == 0) goto LAB_001003a6;
    pBVar7 = SSL_get_wbio(local_60);
    iVar3 = test_ptr("test/dtlstest.c",0x219,&_LC12,pBVar7);
    if (iVar3 == 0) goto LAB_001003a6;
    if (param_1 != 1) {
      if (param_1 == 2) {
        iVar3 = mempacket_move_packet(pBVar7,0,2);
        iVar3 = test_true("test/dtlstest.c",0x221,"mempacket_move_packet(bio, 0, 2)",iVar3 != 0);
joined_r0x0010073c:
        if (iVar3 != 0) {
          iVar3 = SSL_connect(local_58);
          iVar3 = test_int_gt("test/dtlstest.c",0x22e,"SSL_connect(cssl)",&_LC9,iVar3,0);
          if (iVar3 != 0) goto LAB_001005ae;
        }
      }
      else {
        if (param_1 == 3) {
          pBVar7 = SSL_get_wbio(local_60);
          iVar3 = mempacket_move_packet(pBVar7,1,2);
          iVar3 = test_true("test/dtlstest.c",0x226,"mempacket_move_packet(bio, 1, 2)",iVar3 != 0);
          goto joined_r0x0010073c;
        }
        iVar3 = SSL_connect(local_58);
        iVar3 = test_int_gt("test/dtlstest.c",0x22e,"SSL_connect(cssl)",&_LC9,iVar3,0);
        if (iVar3 == 0) goto LAB_001003a6;
        if (param_1 < 2) goto LAB_001006af;
LAB_001005ae:
        iVar3 = SSL_pending(local_58);
        iVar3 = test_int_eq("test/dtlstest.c",0x239,"SSL_pending(cssl)","(int)sizeof(msg)",iVar3,4);
        if (iVar3 != 0) {
          iVar3 = SSL_has_pending(local_58);
          iVar3 = test_true("test/dtlstest.c",0x23a,"SSL_has_pending(cssl)",iVar3 != 0);
          if (iVar3 != 0) goto LAB_0010060d;
        }
      }
      goto LAB_001003a6;
    }
    iVar3 = mempacket_move_packet(pBVar7,0,1);
    iVar3 = test_true("test/dtlstest.c",0x21d,"mempacket_move_packet(bio, 0, 1)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_001003a6;
    iVar3 = SSL_connect(local_58);
    iVar3 = test_int_gt("test/dtlstest.c",0x22e,"SSL_connect(cssl)",&_LC9,iVar3,0);
    if (iVar3 == 0) goto LAB_001003a6;
LAB_001006af:
    iVar3 = SSL_pending(local_58);
    iVar3 = test_int_eq("test/dtlstest.c",0x233,"SSL_pending(cssl)",&_LC9,iVar3,0);
    if (iVar3 == 0) goto LAB_001003a6;
    iVar3 = SSL_has_pending(local_58);
    iVar3 = test_false("test/dtlstest.c",0x234,"SSL_has_pending(cssl)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_001003a6;
LAB_0010060d:
    iVar3 = SSL_read(local_58,local_4a,10);
    iVar3 = test_int_eq("test/dtlstest.c",0x241,"SSL_read(cssl, buf, sizeof(buf))",
                        "(int)sizeof(msg)",iVar3,4);
    uVar4 = (uint)(iVar3 != 0);
  }
  SSL_free(local_58);
  SSL_free(local_60);
  SSL_CTX_free(local_68);
  SSL_CTX_free(local_70);
LAB_0010030f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_just_finished(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  SSL *ssl;
  BIO_METHOD *pBVar7;
  BIO *b;
  BIO *a;
  ulong uVar8;
  long in_FS_OFFSET;
  SSL_CTX *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined1 auStack_48 [13];
  long local_30;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (SSL_CTX *)0x0;
  local_68 = __LC33;
  uStack_60 = _UNK_00102008;
  local_58 = __LC34;
  uStack_50 = (undefined5)_UNK_00102018;
  uStack_4b = 0;
  auStack_48 = SUB1613((undefined1  [16])0x0,3);
  uVar6 = DTLS_server_method();
  iVar3 = create_ssl_ctx_pair(0,uVar6,0,0,0,&local_70,0,uVar2,uVar1);
  uVar4 = test_true("test/dtlstest.c",0x1a7,
                    "create_ssl_ctx_pair(NULL, DTLS_server_method(), NULL, 0, 0, &sctx, NULL, cert, privkey)"
                    ,iVar3 != 0);
  if (uVar4 == 0) goto LAB_00100869;
  ssl = SSL_new(local_70);
  pBVar7 = BIO_s_mem();
  b = BIO_new(pBVar7);
  pBVar7 = BIO_s_mem();
  a = BIO_new(pBVar7);
  iVar3 = test_ptr("test/dtlstest.c",0x1b6,"serverssl",ssl);
  if (iVar3 == 0) {
LAB_001008d8:
    uVar4 = 0;
  }
  else {
    iVar3 = test_ptr("test/dtlstest.c",0x1b6,&_LC24,b);
    if (iVar3 == 0) goto LAB_001008d8;
    uVar4 = test_ptr("test/dtlstest.c",0x1b6,&_LC25,a);
    if (uVar4 != 0) {
      SSL_set0_rbio(ssl,b);
      SSL_set0_wbio(ssl,a);
      DTLS_set_timer_cb(ssl,0x100000);
      iVar3 = BIO_write(b,&local_68,0x2d);
      iVar3 = test_int_eq("test/dtlstest.c",0x1bf,"BIO_write(sbio, buf, sizeof(buf))","sizeof(buf)",
                          iVar3,0x2d);
      if (iVar3 != 0) {
        iVar3 = SSL_accept(ssl);
        iVar5 = test_int_le("test/dtlstest.c",0x1c3,"ret = SSL_accept(serverssl)",&_LC9,iVar3,0);
        if (iVar5 != 0) {
          iVar3 = SSL_get_error(ssl,iVar3);
          iVar3 = test_int_eq("test/dtlstest.c",0x1c7,"SSL_get_error(serverssl, ret)",
                              "SSL_ERROR_SSL",iVar3,1);
          if (iVar3 != 0) {
            uVar8 = ERR_get_error();
            uVar4 = (uint)uVar8 & 0x7fffff;
            if ((uVar8 & 0x80000000) != 0) {
              uVar4 = (uint)uVar8 & 0x7fffffff;
            }
            iVar3 = test_int_eq("test/dtlstest.c",0x1ca,"ERR_GET_REASON(ERR_get_error())",
                                "SSL_R_UNEXPECTED_MESSAGE",uVar4,0xf4);
            uVar4 = (uint)(iVar3 != 0);
            a = (BIO *)0x0;
            b = (BIO *)0x0;
            goto LAB_001008da;
          }
        }
      }
      a = (BIO *)0x0;
      b = (BIO *)0x0;
      goto LAB_001008d8;
    }
  }
LAB_001008da:
  BIO_free(b);
  BIO_free(a);
  SSL_free(ssl);
  SSL_CTX_free(local_70);
LAB_00100869:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_dtls_duplicate_records(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  BIO *pBVar7;
  long in_FS_OFFSET;
  SSL_CTX *local_40;
  SSL_CTX *local_38;
  SSL *local_30;
  SSL *local_28;
  long local_20;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (SSL_CTX *)0x0;
  local_38 = (SSL_CTX *)0x0;
  local_30 = (SSL *)0x0;
  local_28 = (SSL *)0x0;
  uVar5 = DTLS_client_method();
  uVar6 = DTLS_server_method();
  iVar3 = create_ssl_ctx_pair(0,uVar6,uVar5,0xfeff,0,&local_40,&local_38,uVar2,uVar1);
  uVar4 = test_true("test/dtlstest.c",0x163,
                    "create_ssl_ctx_pair(NULL, DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                    ,iVar3 != 0);
  if (uVar4 != 0) {
    create_ssl_objects(local_40,local_38,&local_30,&local_28,0,0);
    uVar4 = test_true("test/dtlstest.c",0x171,
                      "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)");
    if (uVar4 != 0) {
      DTLS_set_timer_cb(local_28,0x100000);
      DTLS_set_timer_cb(local_30,0x100000);
      pBVar7 = SSL_get_wbio(local_28);
      BIO_ctrl(pBVar7,0x20000,1,(void *)0x0);
      pBVar7 = SSL_get_wbio(local_30);
      BIO_ctrl(pBVar7,0x20000,1,(void *)0x0);
      iVar3 = create_ssl_connection(local_30,local_28,0);
      iVar3 = test_true("test/dtlstest.c",0x17b,
                        "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",iVar3 != 0);
      uVar4 = (uint)(iVar3 != 0);
    }
    SSL_free(local_30);
    SSL_free(local_28);
    SSL_CTX_free(local_40);
    SSL_CTX_free(local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_cookie(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  SSL_CTX *local_40;
  SSL_CTX *local_38;
  SSL *local_30;
  SSL *local_28;
  long local_20;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (SSL_CTX *)0x0;
  local_38 = (SSL_CTX *)0x0;
  local_30 = (SSL *)0x0;
  local_28 = (SSL *)0x0;
  uVar5 = DTLS_client_method();
  uVar6 = DTLS_server_method();
  iVar3 = create_ssl_ctx_pair(0,uVar6,uVar5,0xfeff,0,&local_40,&local_38,uVar2,uVar1);
  uVar4 = test_true("test/dtlstest.c",0x13b,
                    "create_ssl_ctx_pair(NULL, DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                    ,iVar3 != 0);
  if (uVar4 != 0) {
    SSL_CTX_set_options(local_40,0x2000);
    SSL_CTX_set_cookie_generate_cb(local_40,generate_cookie_cb);
    SSL_CTX_set_cookie_verify_cb(local_40,verify_cookie_cb);
    iVar3 = create_ssl_objects(local_40,local_38,&local_30,&local_28,0,0);
    uVar4 = test_true("test/dtlstest.c",0x14d,
                      "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",
                      iVar3 != 0);
    if (uVar4 != 0) {
      iVar3 = create_ssl_connection(local_30,local_28,0);
      iVar3 = test_true("test/dtlstest.c",0x14f,
                        "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",iVar3 != 0);
      uVar4 = (uint)(iVar3 != 0);
    }
    SSL_free(local_30);
    SSL_free(local_28);
    SSL_CTX_free(local_40);
    SSL_CTX_free(local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_dtls_drop_records(int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  BIO_METHOD *type;
  BIO *pBVar10;
  SSL_SESSION *session;
  ulong uVar11;
  int iVar12;
  long in_FS_OFFSET;
  SSL_CTX *local_60;
  SSL_CTX *local_58;
  SSL *local_50;
  SSL *local_48;
  long local_40;
  
  uVar3 = cert;
  uVar2 = privkey;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (SSL_CTX *)0x0;
  local_58 = (SSL_CTX *)0x0;
  local_50 = (SSL *)0x0;
  local_48 = (SSL *)0x0;
  uVar7 = DTLS_client_method();
  uVar8 = DTLS_server_method();
  create_ssl_ctx_pair(0,uVar8,uVar7,0xfeff,0,&local_60,&local_58,uVar3,uVar2);
  uVar4 = test_true("test/dtlstest.c",0xca,
                    "create_ssl_ctx_pair(NULL, DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                   );
  if (uVar4 == 0) goto LAB_00100eb7;
  lVar9 = SSL_CTX_ctrl(local_60,0x76,1,(void *)0x0);
  iVar5 = test_true("test/dtlstest.c",0xd8,"SSL_CTX_set_dh_auto(sctx, 1)",lVar9 != 0);
  if (iVar5 == 0) {
LAB_00100fd0:
    session = (SSL_SESSION *)0x0;
    uVar4 = 0;
  }
  else {
    SSL_CTX_set_options(local_60,0x2000);
    SSL_CTX_set_cookie_generate_cb(local_60,generate_cookie_cb);
    SSL_CTX_set_cookie_verify_cb(local_60,verify_cookie_cb);
    if (0x10 < param_1) {
      iVar5 = create_ssl_objects(local_60,local_58,&local_50,&local_48,0,0);
      iVar5 = test_true("test/dtlstest.c",0xe1,
                        "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, NULL)",
                        iVar5 != 0);
      if (iVar5 != 0) {
        iVar5 = create_ssl_connection(local_50,local_48,0);
        iVar5 = test_true("test/dtlstest.c",0xe3,
                          "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",iVar5 != 0);
        if (iVar5 != 0) {
          session = SSL_get1_session(local_48);
          uVar4 = test_ptr("test/dtlstest.c",0xe5,"sess = SSL_get1_session(clientssl)",session);
          if (uVar4 != 0) {
            param_1 = param_1 + -0x11;
            iVar12 = 2;
            iVar5 = 2;
            SSL_shutdown(local_48);
            SSL_shutdown(local_50);
            SSL_free(local_50);
            SSL_free(local_48);
            local_48 = (SSL *)0x0;
            local_50 = (SSL *)0x0;
            goto LAB_0010101f;
          }
          goto LAB_00100fd5;
        }
      }
      goto LAB_00100fd0;
    }
    iVar12 = 10;
    iVar5 = 1;
    session = (SSL_SESSION *)0x0;
LAB_0010101f:
    type = (BIO_METHOD *)bio_f_tls_dump_filter();
    pBVar10 = BIO_new(type);
    iVar6 = test_ptr("test/dtlstest.c",0xfb,"c_to_s_fbio",pBVar10);
    if (iVar6 != 0) {
      create_ssl_objects(local_60,local_58,&local_50,&local_48,0,pBVar10);
      iVar6 = test_true("test/dtlstest.c",0xff,
                        "create_ssl_objects(sctx, cctx, &serverssl, &clientssl, NULL, c_to_s_fbio)")
      ;
      if (iVar6 != 0) {
        if (session != (SSL_SESSION *)0x0) {
          SSL_set_session(local_48,session);
          iVar6 = test_true("test/dtlstest.c",0x104,"SSL_set_session(clientssl, sess)");
          if (iVar6 == 0) goto LAB_0010104a;
        }
        DTLS_set_timer_cb(local_48,0x100000);
        DTLS_set_timer_cb(local_50,0x100000);
        if (param_1 < iVar5 + 4) {
          iVar5 = iVar5 + 3;
          pBVar10 = SSL_get_wbio(local_48);
          bVar1 = iVar5 <= param_1;
          if (bVar1) {
            param_1 = param_1 - iVar5;
          }
          uVar11 = (ulong)bVar1;
          pBVar10 = BIO_next(pBVar10);
        }
        else {
          pBVar10 = SSL_get_wbio(local_50);
          param_1 = param_1 - (iVar5 + 4);
          uVar11 = 0;
          if (iVar12 < param_1) {
            uVar11 = 1;
            param_1 = param_1 - (iVar12 + 1);
          }
        }
        BIO_ctrl(pBVar10,0x8000,uVar11,(void *)0x0);
        BIO_ctrl(pBVar10,0x10000,(long)param_1,(void *)0x0);
        create_ssl_connection(local_50,local_48,0);
        iVar5 = test_true("test/dtlstest.c",0x11e,
                          "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)");
        if (iVar5 != 0) {
          if (session != (SSL_SESSION *)0x0) {
            SSL_session_reused(local_48);
            iVar5 = test_true("test/dtlstest.c",0x121,"SSL_session_reused(clientssl)");
            if (iVar5 == 0) goto LAB_0010104a;
          }
          uVar11 = BIO_ctrl(pBVar10,0x18000,0,(void *)0x0);
          iVar5 = test_int_eq("test/dtlstest.c",0x125,
                              "(int)BIO_ctrl(mempackbio, MEMPACKET_CTRL_GET_DROP_REC, 0, NULL)",
                              &_LC42,uVar11 & 0xffffffff,0xffffffff);
          uVar4 = (uint)(iVar5 != 0);
          goto LAB_00100fd5;
        }
      }
    }
LAB_0010104a:
    uVar4 = 0;
  }
LAB_00100fd5:
  SSL_SESSION_free(session);
  SSL_free(local_50);
  SSL_free(local_48);
  SSL_CTX_free(local_60);
  SSL_CTX_free(local_58);
LAB_00100eb7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int test_dtls_unprocessed(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BIO_METHOD *type;
  BIO *pBVar6;
  long in_FS_OFFSET;
  SSL_CTX *local_50;
  SSL_CTX *local_48;
  SSL *local_40;
  SSL *local_38;
  long local_30;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (SSL_CTX *)0x0;
  local_48 = (SSL_CTX *)0x0;
  local_40 = (SSL *)0x0;
  local_38 = (SSL *)0x0;
  timer_cb_count = 0;
  uVar4 = DTLS_client_method();
  uVar5 = DTLS_server_method();
  iVar3 = create_ssl_ctx_pair(0,uVar5,uVar4,0xfeff,0,&local_50,&local_48,uVar2,uVar1);
  iVar3 = test_true("test/dtlstest.c",0x50,
                    "create_ssl_ctx_pair(NULL, DTLS_server_method(), DTLS_client_method(), DTLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                    ,iVar3 != 0);
  if (iVar3 == 0) goto LAB_0010135d;
  iVar3 = SSL_CTX_set_cipher_list(local_48,"AES128-SHA");
  iVar3 = test_true("test/dtlstest.c",0x57,"SSL_CTX_set_cipher_list(cctx, \"AES128-SHA\")",
                    iVar3 != 0);
  if (iVar3 == 0) {
LAB_001013b0:
    iVar3 = 0;
  }
  else {
    type = (BIO_METHOD *)bio_f_tls_dump_filter();
    pBVar6 = BIO_new(type);
    iVar3 = test_ptr("test/dtlstest.c",0x62,"c_to_s_fbio",pBVar6);
    if (iVar3 == 0) goto LAB_001013b0;
    iVar3 = create_ssl_objects(local_50,local_48,&local_40,&local_38,0,pBVar6);
    iVar3 = test_true("test/dtlstest.c",0x66,
                      "create_ssl_objects(sctx, cctx, &serverssl1, &clientssl1, NULL, c_to_s_fbio)",
                      iVar3 != 0);
    if (iVar3 == 0) goto LAB_001013b0;
    DTLS_set_timer_cb(local_38,0x100000);
    if (param_1 == 1) {
      certstatus[10] = 0xff;
    }
    pBVar6 = SSL_get_wbio(local_38);
    pBVar6 = BIO_next(pBVar6);
    mempacket_test_inject(pBVar6,certstatus,0x23,1,2);
    iVar3 = create_bare_ssl_connection(local_40,local_38,0,0,0);
    iVar3 = test_true("test/dtlstest.c",0x7f,
                      "create_bare_ssl_connection(serverssl1, clientssl1, SSL_ERROR_NONE, 0, 0)",
                      iVar3 != 0);
    if (iVar3 == 0) goto LAB_001013b0;
    iVar3 = 1;
    if (timer_cb_count == 0) {
      puts("timer_callback was not called.");
      goto LAB_001013b0;
    }
  }
  SSL_free(local_40);
  SSL_free(local_38);
  SSL_CTX_free(local_50);
  SSL_CTX_free(local_48);
LAB_0010135d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/dtlstest.c",0x284,"Error parsing test options\n");
  }
  else {
    cert = test_get_argument(0);
    iVar1 = test_ptr("test/dtlstest.c",0x288,"cert = test_get_argument(0)",cert);
    if (iVar1 != 0) {
      privkey = test_get_argument(1);
      iVar1 = test_ptr("test/dtlstest.c",0x289,"privkey = test_get_argument(1)",privkey);
      if (iVar1 != 0) {
        add_all_tests("test_dtls_unprocessed",test_dtls_unprocessed,2,1);
        add_all_tests("test_dtls_drop_records",test_dtls_drop_records,0x1b,1);
        add_test("test_cookie",test_cookie);
        add_test("test_dtls_duplicate_records",test_dtls_duplicate_records);
        add_test("test_just_finished",test_just_finished);
        add_all_tests("test_swap_records",test_swap_records,4,1);
        add_test("test_listen",test_listen);
        return 1;
      }
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  bio_f_tls_dump_filter_free();
  bio_s_mempacket_test_free();
  return;
}



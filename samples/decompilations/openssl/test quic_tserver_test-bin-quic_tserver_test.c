
uint test_tserver(uint param_1)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  int fd;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long in_FS_OFFSET;
  bool bVar20;
  byte bVar21;
  void *local_170;
  BIO *local_168;
  BIO *local_160;
  undefined8 local_158;
  uint local_13c;
  long local_128;
  ulong local_118;
  uint local_110;
  undefined4 local_f4;
  BIO *local_f0;
  BIO *local_e8;
  void *local_e0;
  long local_d8;
  long local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined4 local_b8 [8];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_49;
  undefined1 local_41;
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = param_1 + 3;
  if (-1 < (int)param_1) {
    uVar17 = param_1;
  }
  uVar15 = (int)uVar17 >> 2 & 1;
  uVar17 = ~param_1 & uVar15;
  if (uVar17 != 0) goto LAB_0010003e;
  local_f0 = (BIO *)0x0;
  local_e8 = (BIO *)0x0;
  local_58 = 0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_49 = 0x7365746c73736f08;
  local_41 = 0x74;
  local_f4 = 0x100007f;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  fd = BIO_socket(2,2,0x11,0);
  iVar7 = test_int_ge("test/quic_tserver_test.c",0x59,&_LC1,&_LC0,fd);
  if (iVar7 == 0) {
LAB_00100174:
    local_170 = (void *)0x0;
    ssl = (SSL *)0x0;
    ctx = (SSL_CTX *)0x0;
    iVar7 = -1;
    local_158 = 0;
    local_160 = (BIO *)0x0;
    local_168 = (BIO *)0x0;
  }
  else {
    iVar7 = BIO_socket_nbio(fd,1);
    iVar7 = test_true("test/quic_tserver_test.c",0x5c,"BIO_socket_nbio(s_fd, 1)",iVar7 != 0);
    if (iVar7 == 0) goto LAB_00100174;
    local_170 = (void *)BIO_ADDR_new();
    iVar7 = test_ptr("test/quic_tserver_test.c",0x5f,"s_addr_ = BIO_ADDR_new()",local_170);
    if (iVar7 == 0) {
LAB_00100286:
      local_158 = 0;
      ssl = (SSL *)0x0;
      ctx = (SSL_CTX *)0x0;
      iVar7 = -1;
      local_160 = (BIO *)0x0;
      local_168 = (BIO *)0x0;
    }
    else {
      iVar7 = BIO_ADDR_rawmake(local_170,2,&local_f4,4,0);
      iVar7 = test_true("test/quic_tserver_test.c",0x62,
                        "BIO_ADDR_rawmake(s_addr_, AF_INET, &ina, sizeof(ina), 0)",iVar7 != 0);
      if (iVar7 == 0) goto LAB_00100286;
      iVar7 = BIO_bind(fd,local_170,0);
      iVar7 = test_true("test/quic_tserver_test.c",0x65,"BIO_bind(s_fd, s_addr_, 0)",iVar7 != 0);
      if (iVar7 == 0) goto LAB_00100286;
      local_e0 = local_170;
      iVar7 = BIO_sock_info(fd,0,&local_e0);
      iVar7 = test_true("test/quic_tserver_test.c",0x69,
                        "BIO_sock_info(s_fd, BIO_SOCK_INFO_ADDRESS, &s_info)",iVar7 != 0);
      if (iVar7 == 0) goto LAB_00100286;
      uVar6 = BIO_ADDR_rawport(local_170);
      iVar7 = test_int_gt("test/quic_tserver_test.c",0x6c,"BIO_ADDR_rawport(s_addr_)",&_LC0,uVar6);
      if (iVar7 == 0) goto LAB_00100286;
      local_168 = BIO_new_dgram(fd,0);
      iVar7 = test_ptr("test/quic_tserver_test.c",0x6f,
                       "s_net_bio = s_net_bio_own = BIO_new_dgram(s_fd, 0)",local_168);
      if (iVar7 == 0) {
LAB_00100762:
        local_158 = 0;
        ssl = (SSL *)0x0;
        ctx = (SSL_CTX *)0x0;
        iVar7 = -1;
        local_160 = (BIO *)0x0;
      }
      else {
        iVar7 = BIO_up_ref(local_168);
        if (iVar7 == 0) {
          uVar17 = 0;
          goto LAB_00100762;
        }
        fake_time = 1000000000;
        local_68._8_8_ = 0;
        local_88._8_8_ = 0;
        local_88._0_8_ = local_168;
        local_88 = local_88 << 0x40;
        if (uVar15 != 0) {
          local_78._8_8_ = fake_now;
        }
        local_78._0_8_ = local_168;
        local_158 = ossl_quic_tserver_new(local_98,certfile,keyfile);
        iVar7 = test_ptr("test/quic_tserver_test.c",0x7e,
                         "tserver = ossl_quic_tserver_new(&tserver_args, certfile, keyfile)",
                         local_158);
        if (iVar7 == 0) {
          uVar17 = 0;
          ctx = (SSL_CTX *)0x0;
          iVar7 = -1;
          BIO_free(local_168);
          ssl = (SSL *)0x0;
          local_160 = (BIO *)0x0;
          goto LAB_001001a4;
        }
        uVar1 = (long)(int)param_1 / 2;
        if ((uVar1 & 1) != 0) {
          iVar7 = BIO_new_bio_dgram_pair(&local_f0,5000,&local_e8,5000);
          iVar7 = test_true("test/quic_tserver_test.c",0x8d,
                            "BIO_new_bio_dgram_pair(&c_pair_own, 5000, &s_pair_own, 5000)",
                            iVar7 != 0);
          if (iVar7 == 0) {
            uVar17 = 0;
            ssl = (SSL *)0x0;
            ctx = (SSL_CTX *)0x0;
            local_160 = (BIO *)0x0;
            iVar7 = -1;
            local_168 = (BIO *)0x0;
            goto LAB_001001a4;
          }
        }
        iVar7 = BIO_socket(2,2,0x11,0);
        iVar8 = test_int_ge("test/quic_tserver_test.c",0x94,&_LC11,&_LC0);
        if (iVar8 == 0) {
LAB_00100785:
          uVar17 = 0;
          ssl = (SSL *)0x0;
          ctx = (SSL_CTX *)0x0;
LAB_0010074f:
          local_160 = (BIO *)0x0;
          local_168 = (BIO *)0x0;
        }
        else {
          iVar8 = BIO_socket_nbio(iVar7,1);
          iVar8 = test_true("test/quic_tserver_test.c",0x97,"BIO_socket_nbio(c_fd, 1)",iVar8 != 0);
          if (iVar8 == 0) goto LAB_00100785;
          local_160 = BIO_new_dgram(iVar7,0);
          iVar8 = test_ptr("test/quic_tserver_test.c",0x9a,
                           "c_net_bio = c_net_bio_own = BIO_new_dgram(c_fd, 0)");
          if ((iVar8 != 0) && (lVar11 = BIO_ctrl(local_160,0x2c,0,local_170), (int)lVar11 != 0)) {
            if ((param_1 & 1) == 0) {
              meth = (SSL_METHOD *)OSSL_QUIC_client_method();
            }
            else {
              meth = (SSL_METHOD *)OSSL_QUIC_client_thread_method();
            }
            ctx = SSL_CTX_new(meth);
            iVar8 = test_ptr("test/quic_tserver_test.c",0xa0,
                             "c_ctx = SSL_CTX_new(use_thread_assist ? OSSL_QUIC_client_thread_method() : OSSL_QUIC_client_method())"
                             ,ctx);
            if (iVar8 == 0) {
              uVar17 = 0;
              ssl = (SSL *)0x0;
              local_168 = (BIO *)0x0;
              goto LAB_001001a4;
            }
            ssl = SSL_new(ctx);
            iVar8 = test_ptr("test/quic_tserver_test.c",0xa5,"c_ssl = SSL_new(c_ctx)",ssl);
            if (iVar8 == 0) {
LAB_001007ea:
              local_168 = (BIO *)0x0;
              goto LAB_001001a4;
            }
            if (uVar15 != 0) {
              iVar8 = ossl_quic_set_override_now_cb(ssl,fake_now,0);
              iVar8 = test_true("test/quic_tserver_test.c",0xa9,
                                "ossl_quic_set_override_now_cb(c_ssl, fake_now, NULL)",iVar8 != 0);
              if (iVar8 == 0) {
                uVar17 = 0;
                goto LAB_001007ea;
              }
            }
            iVar8 = SSL_set_alpn_protos(ssl,&local_49,9);
            iVar8 = test_false("test/quic_tserver_test.c",0xad,
                               "SSL_set_alpn_protos(c_ssl, alpn, sizeof(alpn))",iVar8 != 0);
            if (iVar8 == 0) goto LAB_001007ea;
            if ((uVar1 & 1) == 0) {
              SSL_set0_rbio(ssl,local_160);
              iVar8 = BIO_up_ref(local_160);
              iVar8 = test_true("test/quic_tserver_test.c",0xb8,"BIO_up_ref(c_net_bio)",iVar8 != 0);
              if (iVar8 != 0) goto LAB_0010064c;
            }
            else {
              SSL_set0_rbio(ssl,local_f0);
              local_f0 = (BIO *)0x0;
LAB_0010064c:
              SSL_set0_wbio(ssl,local_160);
              SSL_set_blocking_mode(ssl,0);
              iVar8 = test_true("test/quic_tserver_test.c",0xc1,"SSL_set_blocking_mode(c_ssl, 0)");
              if (iVar8 != 0) {
                uVar12 = ossl_time_now();
                local_13c = 0;
                uVar18 = 0;
                uVar16 = 0;
                local_110 = 0;
                bVar4 = false;
                bVar5 = false;
                bVar3 = 0;
                bVar2 = 0;
                local_128 = 10000;
                local_118 = 0;
                lVar11 = 0;
                while( true ) {
                  uVar13 = ossl_time_now();
                  if (uVar12 <= uVar13) break;
                  uVar13 = 0;
LAB_0010085d:
                  if ((ulong)(local_128 * 1000000) <= uVar13) goto LAB_00100721;
                  if (local_13c == 0) {
                    iVar8 = SSL_connect(ssl);
                    if (iVar8 == 1) {
                      iVar8 = test_true("test/quic_tserver_test.c",0xd3,
                                        "ret == 1 || is_want(c_ssl, ret)",1);
                      bVar2 = 1;
                      if (iVar8 == 0) goto LAB_0010074f;
                    }
                    else {
                      iVar8 = SSL_get_error(ssl,iVar8);
                      iVar8 = test_true("test/quic_tserver_test.c",0xd3,
                                        "ret == 1 || is_want(c_ssl, ret)",iVar8 - 2U < 2);
                      if (iVar8 == 0) goto LAB_0010074f;
                      iVar8 = CRYPTO_THREAD_write_lock(fake_time_lock);
                      iVar8 = test_true("test/quic_tserver_test.c",0xe0,
                                        "CRYPTO_THREAD_write_lock(fake_time_lock)",iVar8 != 0);
                      if (iVar8 == 0) goto LAB_0010074f;
                      bVar20 = 0xfffffffffa0a1eff < fake_time;
                      fake_time = fake_time + 100000000;
                      if (bVar20) {
                        fake_time = 0xffffffffffffffff;
                      }
                      CRYPTO_THREAD_unlock(fake_time_lock);
                    }
                  }
                  if ((bool)((bVar3 ^ 1) & bVar2)) {
                    SSL_write(ssl,"The quick brown fox jumped over the lazy dogs.",0x2e);
                    iVar8 = test_int_eq("test/quic_tserver_test.c",0xe8,
                                        "SSL_write(c_ssl, msg1, sizeof(msg1) - 1)",
                                        "(int)sizeof(msg1) - 1");
                    if (iVar8 == 0) goto LAB_0010074f;
                    iVar8 = SSL_stream_conclude(ssl,0);
                    iVar8 = test_true("test/quic_tserver_test.c",0xec,
                                      "SSL_stream_conclude(c_ssl, 0)",iVar8 != 0);
                    if (iVar8 == 0) goto LAB_0010074f;
LAB_00100e45:
                    if (bVar4) {
LAB_00100e4c:
                      bVar3 = 1;
                      bVar4 = true;
                      goto LAB_00100891;
                    }
                    iVar8 = ossl_quic_tserver_read
                                      (local_158,0,msg2 + lVar11,0x400 - lVar11,&local_d8);
                    if (iVar8 == 0) {
                      iVar8 = ossl_quic_tserver_has_read_ended(local_158,0);
                      iVar8 = test_true("test/quic_tserver_test.c",0xf6,
                                        "ossl_quic_tserver_has_read_ended(tserver, 0)",iVar8 != 0);
                      if ((iVar8 != 0) &&
                         (iVar8 = test_mem_eq("test/quic_tserver_test.c",0xf9,&_LC29,&_LC28,
                                              "The quick brown fox jumped over the lazy dogs.",0x2e,
                                              msg2,lVar11), iVar8 != 0)) goto LAB_00100e4c;
                      goto LAB_0010074f;
                    }
                    lVar11 = lVar11 + local_d8;
                    iVar8 = test_size_t_le("test/quic_tserver_test.c",0x100,"s_total_read",
                                           "sizeof(msg1) - 1");
                    if (iVar8 == 0) goto LAB_0010074f;
                    bVar3 = 1;
                  }
                  else {
                    if ((bool)(bVar3 & bVar2)) goto LAB_00100e45;
LAB_00100891:
                    if ((uVar16 < 0x2e) && (bVar4)) {
                      iVar8 = ossl_quic_tserver_write(local_158,0,msg2 + uVar16,0x2e - uVar16);
                      iVar8 = test_true("test/quic_tserver_test.c",0x106,
                                        "ossl_quic_tserver_write(tserver, 0, (unsigned char *)msg2 + s_total_written, sizeof(msg1) - 1 - s_total_written, &l)"
                                        ,iVar8 != 0);
                      if (iVar8 == 0) goto LAB_0010074f;
                      uVar16 = uVar16 + local_d8;
                      bVar4 = true;
                      if (uVar16 == 0x2e) {
                        ossl_quic_tserver_conclude(local_158,0);
                        bVar5 = true;
                      }
                    }
                  }
                  if ((uVar18 < 0x2e) && (bVar5)) {
                    uVar9 = SSL_read_ex(ssl,msg3 + uVar18,0x2e - uVar18,&local_d8);
                    if (uVar9 != 1) {
                      iVar8 = SSL_get_error(ssl,uVar9);
                      uVar9 = (uint)(iVar8 - 2U < 2);
                    }
                    iVar8 = test_true("test/quic_tserver_test.c",0x116,
                                      "ret == 1 || is_want(c_ssl, ret)",uVar9);
                    if (iVar8 == 0) goto LAB_0010074f;
                    uVar18 = uVar18 + local_d8;
                    if (uVar18 == 0x2e) {
                      iVar8 = test_mem_eq("test/quic_tserver_test.c",0x11c,&_LC29,&_LC33);
                      if (iVar8 == 0) goto LAB_0010074f;
                      local_110 = 1;
                    }
                  }
                  uVar9 = local_110 & (local_13c ^ 1);
                  if (uVar9 == 0) {
                    if (local_13c == 0) goto LAB_00100ab4;
LAB_0010099d:
                    if (599 < local_118) {
                      iVar8 = ossl_quic_tserver_is_connected(local_158);
                      iVar8 = test_true("test/quic_tserver_test.c",0x162,
                                        "ossl_quic_tserver_is_connected(tserver)",iVar8 != 0);
                      local_160 = (BIO *)0x0;
                      local_168 = (BIO *)0x0;
                      uVar17 = (uint)(iVar8 != 0);
                      goto LAB_001001a4;
                    }
                    iVar8 = CRYPTO_THREAD_write_lock(fake_time_lock);
                    iVar8 = test_true("test/quic_tserver_test.c",0x147,
                                      "CRYPTO_THREAD_write_lock(fake_time_lock)",iVar8 != 0);
                    if (iVar8 == 0) goto LAB_0010074f;
                    bVar20 = 0xfffffffffa0a1eff < fake_time;
                    fake_time = fake_time + 100000000;
                    if (bVar20) {
                      fake_time = 0xffffffffffffffff;
                    }
                    CRYPTO_THREAD_unlock(fake_time_lock);
                    local_118 = local_118 + 1;
                    ossl_quic_conn_force_assist_thread_wake(ssl);
                    iVar8 = SSL_get_event_timeout(ssl,&local_c8,&local_d0);
                    iVar8 = test_true("test/quic_tserver_test.c",0x153,
                                      "SSL_get_event_timeout(c_ssl, &tv, &isinf)",iVar8 != 0);
                    if (iVar8 == 0) goto LAB_0010074f;
                    if (((int)local_d0 == 0) &&
                       (((long)local_c8 < 0 || ((long)local_c8 * 1000000000 + local_c0 * 1000 == 0))
                       )) {
                      OSSL_sleep(100);
                    }
                    local_13c = 1;
                  }
                  else {
                    iVar8 = SSL_read_ex(ssl,&local_c8,1,&local_d8);
                    iVar10 = test_false("test/quic_tserver_test.c",0x128,&_LC34,iVar8 != 0);
                    if (iVar10 == 0) goto LAB_0010074f;
                    iVar10 = SSL_get_error(ssl,iVar8);
                    if (iVar10 != 2) {
                      SSL_get_error(ssl,iVar8);
                      iVar8 = test_int_eq("test/quic_tserver_test.c",0x130,
                                          "SSL_get_error(c_ssl, ret)","SSL_ERROR_ZERO_RETURN");
                      if (iVar8 != 0) {
                        if ((uVar15 & param_1 & 1) == 0) {
                          local_160 = (BIO *)0x0;
                          local_168 = (BIO *)0x0;
                          uVar17 = uVar9;
                          goto LAB_001001a4;
                        }
                        iVar8 = ossl_quic_tserver_is_connected(local_158);
                        iVar8 = test_true("test/quic_tserver_test.c",0x136,
                                          "ossl_quic_tserver_is_connected(tserver)",iVar8 != 0);
                        if (iVar8 != 0) {
                          local_128 = 120000;
                          goto LAB_0010099d;
                        }
                      }
                      goto LAB_0010074f;
                    }
LAB_00100ab4:
                    SSL_handle_events(ssl);
                    local_13c = 0;
                  }
                  ossl_quic_tserver_tick(local_158);
                  if ((uVar1 & 1) != 0) {
                    puVar19 = local_b8;
                    for (lVar14 = 6; lVar14 != 0; lVar14 = lVar14 + -1) {
                      *puVar19 = 0;
                      puVar19 = puVar19 + (ulong)bVar21 * -2 + 1;
                    }
                    local_d0 = 0;
                    while( true ) {
                      local_c0 = 0x800;
                      local_c8 = scratch_buf;
                      iVar8 = BIO_recvmmsg(local_160,&local_c8,0x28,1);
                      if (((iVar8 == 0) || (local_d0 == 0)) || (local_c0 == 0)) break;
                      iVar8 = SSL_inject_net_dgram(ssl,local_c8,local_c0,0);
                      iVar8 = test_true("test/quic_tserver_test.c",0x185,
                                        "SSL_inject_net_dgram(c_ssl, rmsg.data, rmsg.data_len, NULL, NULL)"
                                        ,iVar8 != 0);
                      if (iVar8 == 0) goto LAB_0010074f;
                    }
                  }
                }
                uVar13 = uVar13 - uVar12;
                if (uVar13 <= (ulong)(local_128 * 1000000)) goto LAB_0010085d;
LAB_00100721:
                test_error("test/quic_tserver_test.c",0xcd,
                           "timeout while attempting QUIC server test");
              }
            }
            goto LAB_0010074f;
          }
          uVar17 = 0;
          ssl = (SSL *)0x0;
          ctx = (SSL_CTX *)0x0;
          local_168 = (BIO *)0x0;
        }
      }
    }
  }
LAB_001001a4:
  SSL_free(ssl);
  SSL_CTX_free(ctx);
  ossl_quic_tserver_free(local_158);
  BIO_ADDR_free(local_170);
  BIO_free(local_168);
  BIO_free(local_160);
  BIO_free(local_f0);
  BIO_free(local_e8);
  if (-1 < fd) {
    BIO_closesocket(fd);
  }
  if (-1 < iVar7) {
    BIO_closesocket(iVar7);
  }
LAB_0010003e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



undefined8 fake_now(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = CRYPTO_THREAD_read_lock(fake_time_lock);
  uVar1 = fake_time;
  uVar3 = 0;
  if (iVar2 != 0) {
    CRYPTO_THREAD_unlock(fake_time_lock);
    uVar3 = uVar1;
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
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/quic_tserver_test.c",0x1b4,"Error parsing test options\n");
  }
  else {
    certfile = test_get_argument(0);
    iVar1 = test_ptr("test/quic_tserver_test.c",0x1b8,"certfile = test_get_argument(0)",certfile);
    if (iVar1 != 0) {
      keyfile = test_get_argument(1);
      iVar1 = test_ptr("test/quic_tserver_test.c",0x1b9,"keyfile = test_get_argument(1)",keyfile);
      if ((iVar1 != 0) && (fake_time_lock = CRYPTO_THREAD_lock_new(), fake_time_lock != 0)) {
        add_all_tests("test_tserver",0x100000,8,1);
        return 1;
      }
    }
  }
  return 0;
}



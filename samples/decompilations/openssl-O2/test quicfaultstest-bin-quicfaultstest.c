
bool test_corrupted_data(int param_1)

{
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *pSVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_b8;
  undefined8 local_b0;
  SSL *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  meth = (SSL_METHOD *)OSSL_QUIC_client_method();
  pSVar2 = SSL_CTX_new(meth);
  local_b0 = 0;
  local_a8 = (SSL *)0x0;
  local_90 = 0xffffffffffffffff;
  iVar1 = test_ptr("test/quicfaultstest.c",0x111,&_LC0,pSVar2);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(0,pSVar2,0,cert,privkey,2,&local_b0,&local_a8,&local_b8,0);
    iVar1 = test_true("test/quicfaultstest.c",0x114,
                      "qtest_create_quic_objects(NULL, cctx, NULL, cert, privkey, QTEST_FLAG_FAKE_TIME, &qtserv, &cssl, &fault, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      if (param_1 == 0) {
        iVar1 = qtest_fault_set_packet_cipher_listener(local_b8,on_packet_cipher_cb,0);
        iVar1 = test_true("test/quicfaultstest.c",0x11b,
                          "qtest_fault_set_packet_cipher_listener(fault, on_packet_cipher_cb, NULL)"
                          ,iVar1 != 0);
      }
      else {
        iVar1 = qtest_fault_set_datagram_listener(local_b8,on_datagram_cb);
        iVar1 = test_true("test/quicfaultstest.c",0x121,
                          "qtest_fault_set_datagram_listener(fault, on_datagram_cb, NULL)",
                          iVar1 != 0);
      }
      if (iVar1 != 0) {
        iVar1 = qtest_create_quic_connection(local_b0,local_a8);
        iVar1 = test_true("test/quicfaultstest.c",0x126,"qtest_create_quic_connection(qtserv, cssl)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          docorrupt = 1;
          iVar1 = ossl_quic_tserver_stream_new(local_b0,0,&local_90);
          iVar1 = test_true("test/quicfaultstest.c",300,
                            "ossl_quic_tserver_stream_new(qtserv, 0, &sid)",iVar1 != 0);
          if ((iVar1 != 0) &&
             (iVar1 = test_uint64_t_eq("test/quicfaultstest.c",0x12d,&_LC8,&_LC7,local_90,1),
             iVar1 != 0)) {
            iVar1 = ossl_quic_tserver_write(local_b0,local_90,"Hello World!",5,&local_98);
            iVar1 = test_true("test/quicfaultstest.c",0x134,
                              "ossl_quic_tserver_write(qtserv, sid, (unsigned char *)msg, 5, &byteswritten)"
                              ,iVar1 != 0);
            if ((iVar1 != 0) &&
               (iVar1 = test_size_t_eq("test/quicfaultstest.c",0x138,"byteswritten",&_LC11,local_98,
                                       5), iVar1 != 0)) {
              qtest_add_time(100);
              iVar1 = ossl_quic_tserver_write(local_b0,local_90," World!",7,&local_98);
              iVar1 = test_true("test/quicfaultstest.c",0x144,
                                "ossl_quic_tserver_write(qtserv, sid, (unsigned char *)msg + 5, msglen - 5, &byteswritten)"
                                ,iVar1 != 0);
              if ((iVar1 != 0) &&
                 (iVar1 = test_size_t_eq("test/quicfaultstest.c",0x148,"byteswritten","msglen - 5",
                                         local_98,7), iVar1 != 0)) {
                iVar1 = SSL_handle_events(local_a8);
                iVar1 = test_true("test/quicfaultstest.c",0x150,"SSL_handle_events(cssl)",iVar1 != 0
                                 );
                if (iVar1 != 0) {
                  ossl_quic_tserver_tick(local_b0);
                  iVar1 = SSL_handle_events(local_a8);
                  iVar1 = test_true("test/quicfaultstest.c",0x15a,"SSL_handle_events(cssl)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = SSL_read_ex(local_a8,local_88,0x50,&local_a0);
                    iVar1 = test_true("test/quicfaultstest.c",0x15e,
                                      "SSL_read_ex(cssl, buf, sizeof(buf), &bytesread)",iVar1 != 0);
                    if ((iVar1 != 0) &&
                       (iVar1 = test_mem_eq("test/quicfaultstest.c",0x161,&_LC18,&_LC17,
                                            "Hello World!",0xc,local_88,local_a0), iVar1 != 0)) {
                      iVar1 = test_false("test/quicfaultstest.c",0x168,"docorrupt",docorrupt != 0);
                      bVar3 = iVar1 != 0;
                      goto LAB_0010007d;
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
  bVar3 = false;
LAB_0010007d:
  qtest_fault_free(local_b8);
  SSL_free(local_a8);
  ossl_quic_tserver_free(local_b0);
  SSL_CTX_free(pSVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 on_datagram_cb(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if ((docorrupt != 0) && (*(long *)(param_2 + 8) != 0)) {
    iVar1 = qtest_fault_resize_datagram(param_1,*(long *)(param_2 + 8) + -1);
    if (iVar1 != 0) {
      docorrupt = 0;
    }
    return 1;
  }
  return 1;
}



bool test_drop_extensions(int param_1)

{
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *pSVar2;
  long in_FS_OFFSET;
  bool bVar3;
  int local_3c;
  undefined8 local_38;
  SSL *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  meth = (SSL_METHOD *)OSSL_QUIC_client_method();
  pSVar2 = SSL_CTX_new(meth);
  local_38 = 0;
  local_30 = (SSL *)0x0;
  local_28 = 0;
  iVar1 = test_ptr("test/quicfaultstest.c",0xba,&_LC0,pSVar2);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(0,pSVar2,0,cert,privkey,0,&local_38,&local_30,&local_28,0);
    iVar1 = test_true("test/quicfaultstest.c",0xbd,
                      "qtest_create_quic_objects(NULL, cctx, NULL, cert, privkey, 0, &qtserv, &cssl, &fault, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      local_3c = (-(uint)(param_1 == 0) & 0x29) + 0x10;
      iVar1 = qtest_fault_set_hand_enc_ext_listener(local_28,drop_extensions_cb,&local_3c);
      iVar1 = test_true("test/quicfaultstest.c",0xc9,
                        "qtest_fault_set_hand_enc_ext_listener(fault, drop_extensions_cb, &ext)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = qtest_create_quic_connection(local_38,local_30);
        iVar1 = test_false("test/quicfaultstest.c",0xd2,"qtest_create_quic_connection(qtserv, cssl)"
                           ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = qtest_check_server_transport_err
                            (local_38,(long)(int)((-(uint)(param_1 == 0) & 0xfffffff5) + 0x178));
          iVar1 = test_true("test/quicfaultstest.c",0xd5,
                            "qtest_check_server_transport_err(qtserv, err)",iVar1 != 0);
          bVar3 = iVar1 != 0;
          goto LAB_001004fd;
        }
      }
    }
  }
  bVar3 = false;
LAB_001004fd:
  qtest_fault_free(local_28);
  SSL_free(local_30);
  ossl_quic_tserver_free(local_38);
  SSL_CTX_free(pSVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool drop_extensions_cb(undefined8 param_1,undefined8 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = qtest_fault_delete_extension(param_1,*param_4,*param_2,param_2 + 1,0);
  return iVar1 != 0;
}



bool test_unknown_frame(void)

{
  int iVar1;
  int iVar2;
  SSL_METHOD *meth;
  SSL_CTX *pSVar3;
  ulong uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_a0;
  SSL *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  meth = (SSL_METHOD *)OSSL_QUIC_client_method();
  pSVar3 = SSL_CTX_new(meth);
  local_a0 = 0;
  local_98 = (SSL *)0x0;
  local_88 = 0;
  local_80 = 0xffffffffffffffff;
  iVar1 = test_ptr("test/quicfaultstest.c",0x68,&_LC0,pSVar3);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(0,pSVar3,0,cert,privkey,0,&local_a0,&local_98,&local_88,0);
    iVar1 = test_true("test/quicfaultstest.c",0x6b,
                      "qtest_create_quic_objects(NULL, cctx, NULL, cert, privkey, 0, &qtserv, &cssl, &fault, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_connection(local_a0,local_98);
      iVar1 = test_true("test/quicfaultstest.c",0x6f,"qtest_create_quic_connection(qtserv, cssl)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = qtest_fault_set_packet_plain_listener(local_88,add_unknown_frame_cb,0);
        iVar1 = test_true("test/quicfaultstest.c",0x76,
                          "qtest_fault_set_packet_plain_listener(fault, add_unknown_frame_cb, NULL)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_quic_tserver_stream_new(local_a0,0,&local_80);
          iVar1 = test_true("test/quicfaultstest.c",0x7b,
                            "ossl_quic_tserver_stream_new(qtserv, 0, &sid)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_uint64_t_eq("test/quicfaultstest.c",0x7c,&_LC8,&_LC7,local_80,1);
            if (iVar1 != 0) {
              iVar1 = ossl_quic_tserver_write(local_a0,local_80,"Hello World!",0xc,&local_90);
              iVar1 = test_true("test/quicfaultstest.c",0x7f,
                                "ossl_quic_tserver_write(qtserv, sid, (unsigned char *)msg, msglen, &byteswritten)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = test_size_t_eq("test/quicfaultstest.c",0x83,"msglen","byteswritten",0xc,
                                       local_90);
                if (iVar1 != 0) {
                  ossl_quic_tserver_tick(local_a0);
                  iVar1 = SSL_handle_events(local_98);
                  iVar1 = test_true("test/quicfaultstest.c",0x87,"SSL_handle_events(cssl)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = SSL_read(local_98,local_78,0x50);
                    iVar2 = test_int_le("test/quicfaultstest.c",0x8a,
                                        "ret = SSL_read(cssl, buf, sizeof(buf))",&_LC26,iVar1,0);
                    if (iVar2 != 0) {
                      iVar1 = SSL_get_error(local_98,iVar1);
                      iVar1 = test_int_eq("test/quicfaultstest.c",0x8d,"SSL_get_error(cssl, ret)",
                                          "SSL_ERROR_SSL",iVar1,1);
                      if (iVar1 != 0) {
                        uVar4 = ERR_peek_error();
                        uVar5 = (uint)uVar4 & 0x7fffff;
                        if ((uVar4 & 0x80000000) != 0) {
                          uVar5 = (uint)uVar4 & 0x7fffffff;
                        }
                        iVar1 = test_int_eq("test/quicfaultstest.c",0x90,
                                            "ERR_GET_REASON(ERR_peek_error())",
                                            "SSL_R_QUIC_PROTOCOL_ERROR",uVar5,0x17e);
                        if (iVar1 != 0) {
                          iVar1 = qtest_check_server_frame_encoding_err(local_a0);
                          iVar1 = test_true("test/quicfaultstest.c",0x94,
                                            "qtest_check_server_frame_encoding_err(qtserv)",
                                            iVar1 != 0);
                          bVar6 = iVar1 != 0;
                          goto LAB_0010071a;
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
  bVar6 = false;
LAB_0010071a:
  qtest_fault_free(local_88);
  SSL_free(local_98);
  ossl_quic_tserver_free(local_a0);
  SSL_CTX_free(pSVar3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 add_unknown_frame_cb(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0xffffffffffffffff;
  lVar1 = done_0 + 1;
  uVar2 = 1;
  bVar3 = done_0 == 0;
  done_0 = lVar1;
  if (bVar3) {
    uVar2 = qtest_fault_prepend_frame(param_1,&local_18,8);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_basic(void)

{
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *pSVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_a0;
  SSL *local_98;
  undefined8 local_90;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  meth = (SSL_METHOD *)OSSL_QUIC_client_method();
  pSVar2 = SSL_CTX_new(meth);
  local_a0 = 0;
  local_98 = (SSL *)0x0;
  iVar1 = test_ptr("test/quicfaultstest.c",0x22,&_LC0,pSVar2);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(0,pSVar2,0,cert,privkey,0,&local_a0,&local_98,0,0);
    iVar1 = test_true("test/quicfaultstest.c",0x25,
                      "qtest_create_quic_objects(NULL, cctx, NULL, cert, privkey, 0, &qtserv, &cssl, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_connection(local_a0,local_98);
      iVar1 = test_true("test/quicfaultstest.c",0x29,"qtest_create_quic_connection(qtserv, cssl)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_write(local_98,"Hello World!",0xc);
        iVar1 = test_int_eq("test/quicfaultstest.c",0x2c,"SSL_write(cssl, msg, msglen)","msglen",
                            iVar1,0xc);
        if (iVar1 != 0) {
          ossl_quic_tserver_tick(local_a0);
          iVar1 = ossl_quic_tserver_read(local_a0,0,local_88,0x50,&local_90);
          iVar1 = test_true("test/quicfaultstest.c",0x30,
                            "ossl_quic_tserver_read(qtserv, 0, buf, sizeof(buf), &bytesread)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/quicfaultstest.c",0x38,&_LC18,&_LC17,"Hello World!",0xc,
                                local_88,local_90);
            bVar3 = iVar1 != 0;
            goto LAB_00100b07;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100b07:
  SSL_free(local_98);
  ossl_quic_tserver_free(local_a0);
  SSL_CTX_free(pSVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 on_packet_cipher_cb(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  
  if (docorrupt == 0) {
    return 1;
  }
  if (param_4 == 0) {
    return 1;
  }
  uVar2 = test_random();
  docorrupt = 0;
  pbVar1 = (byte *)(param_3 + (ulong)uVar2 % param_4);
  *pbVar1 = ~*pbVar1;
  return 1;
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/quicfaultstest.c",0x17b,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument(0);
    iVar1 = test_ptr("test/quicfaultstest.c",0x17f,"certsdir = test_get_argument(0)",uVar2);
    if (iVar1 != 0) {
      cert = (void *)test_mk_file_path(uVar2,"servercert.pem");
      if (cert != (void *)0x0) {
        privkey = (void *)test_mk_file_path(uVar2,"serverkey.pem");
        if (privkey != (void *)0x0) {
          add_test("test_basic",test_basic);
          add_test("test_unknown_frame",test_unknown_frame);
          add_all_tests("test_drop_extensions",test_drop_extensions,2,1);
          add_all_tests("test_corrupted_data",0x100000,2,1);
          return 1;
        }
        privkey = (void *)0x0;
      }
      CRYPTO_free(cert);
      CRYPTO_free(privkey);
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  CRYPTO_free(cert);
  CRYPTO_free(privkey);
  return;
}



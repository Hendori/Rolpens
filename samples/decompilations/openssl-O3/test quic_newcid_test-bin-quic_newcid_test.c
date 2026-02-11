
bool test_ncid_frame(int param_1)

{
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *pSVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_c0;
  SSL *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  meth = (SSL_METHOD *)OSSL_QUIC_client_method();
  pSVar2 = SSL_CTX_new(meth);
  local_c0 = 0;
  local_b8 = (SSL *)0x0;
  local_a0 = 0;
  ncid_injected = 0;
  iVar1 = test_ptr("test/quic_newcid_test.c",0x43,&_LC0,pSVar2);
  if (iVar1 != 0) {
    iVar1 = qtest_create_quic_objects(0,pSVar2,0,cert,privkey,0,&local_c0,&local_b8,&local_a0,0);
    iVar1 = test_true("test/quic_newcid_test.c",0x46,
                      "qtest_create_quic_objects(NULL, cctx, NULL, cert, privkey, 0, &qtserv, &cssl, &fault, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_create_quic_connection(local_c0,local_b8);
      iVar1 = test_true("test/quic_newcid_test.c",0x4a,"qtest_create_quic_connection(qtserv, cssl)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_write(local_b8,"Hello World!",0xc);
        iVar1 = test_int_eq("test/quic_newcid_test.c",0x4d,"SSL_write(cssl, msg, msglen)","msglen",
                            iVar1,0xc);
        if (iVar1 != 0) {
          ossl_quic_tserver_tick(local_c0);
          iVar1 = ossl_quic_tserver_read(local_c0,0,local_98,0x50);
          iVar1 = test_true("test/quic_newcid_test.c",0x51,
                            "ossl_quic_tserver_read(qtserv, 0, buf, sizeof(buf), &bytesread)",
                            iVar1 != 0);
          if ((iVar1 != 0) &&
             (iVar1 = test_mem_eq("test/quic_newcid_test.c",0x5a,&_LC9,&_LC8,"Hello World!",0xc),
             iVar1 != 0)) {
            iVar1 = qtest_fault_set_packet_plain_listener(local_a0,add_ncid_frame_cb,0);
            iVar1 = test_true("test/quic_newcid_test.c",0x61,
                              "qtest_fault_set_packet_plain_listener(fault, add_ncid_frame_cb, NULL)"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              if (param_1 == 0) {
                iVar1 = ossl_quic_tserver_set_new_local_cid(local_c0,conn_id_1);
                iVar1 = test_true("test/quic_newcid_test.c",0x65,
                                  "ossl_quic_tserver_set_new_local_cid(qtserv, &conn_id)",iVar1 != 0
                                 );
                if (iVar1 == 0) goto LAB_00100082;
              }
              iVar1 = ossl_quic_tserver_write(local_c0,0,"Hello World!",0xc,&local_b0);
              iVar1 = test_true("test/quic_newcid_test.c",0x67,
                                "ossl_quic_tserver_write(qtserv, 0, (unsigned char *)msg, msglen, &byteswritten)"
                                ,iVar1 != 0);
              if (((iVar1 != 0) &&
                  (iVar1 = test_true("test/quic_newcid_test.c",0x6c,"ncid_injected",
                                     ncid_injected != 0), iVar1 != 0)) &&
                 (iVar1 = test_size_t_eq("test/quic_newcid_test.c",0x6f,"msglen","byteswritten",0xc,
                                         local_b0), iVar1 != 0)) {
                ossl_quic_tserver_tick(local_c0);
                iVar1 = SSL_handle_events(local_b8);
                iVar1 = test_true("test/quic_newcid_test.c",0x73,"SSL_handle_events(cssl)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = SSL_read(local_b8,local_98,0x50);
                  iVar1 = test_int_eq("test/quic_newcid_test.c",0x76,
                                      "SSL_read(cssl, buf, sizeof(buf))","msglen",iVar1,0xc);
                  if ((iVar1 != 0) &&
                     (iVar1 = test_mem_eq("test/quic_newcid_test.c",0x79,&_LC9,&_LC8,"Hello World!",
                                          0xc,local_98,local_a8), iVar1 != 0)) {
                    iVar1 = SSL_write(local_b8,"Hello World!",0xc);
                    iVar1 = test_int_eq("test/quic_newcid_test.c",0x7c,
                                        "SSL_write(cssl, msg, msglen)","msglen",iVar1,0xc);
                    if (iVar1 != 0) {
                      ossl_quic_tserver_tick(local_c0);
                      iVar1 = ossl_quic_tserver_read(local_c0,0,local_98,0x50,&local_a8);
                      iVar1 = test_true("test/quic_newcid_test.c",0x80,
                                        "ossl_quic_tserver_read(qtserv, 0, buf, sizeof(buf), &bytesread)"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        if (param_1 == 0) {
                          iVar1 = test_mem_eq("test/quic_newcid_test.c",0x88,&_LC9,&_LC8,
                                              "Hello World!",0xc,local_98,local_a8);
                          bVar3 = iVar1 != 0;
                        }
                        else {
                          iVar1 = test_size_t_eq("test/quic_newcid_test.c",0x85,"bytesread",&_LC17,
                                                 local_a8,0);
                          bVar3 = iVar1 != 0;
                        }
                        goto LAB_00100084;
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
LAB_00100082:
  bVar3 = false;
LAB_00100084:
  qtest_fault_free(local_a0);
  SSL_free(local_b8);
  ossl_quic_tserver_free(local_c0);
  SSL_CTX_free(pSVar2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



undefined8 add_ncid_frame_cb(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ncid_injected;
  ncid_injected = ncid_injected + 1;
  if (lVar1 != 0) {
    return 1;
  }
  uVar2 = qtest_fault_prepend_frame(param_1,new_conn_id_frame_0,0x1c);
  return uVar2;
}



undefined1 * test_get_options(void)

{
  return options_2;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/quic_newcid_test.c",0x9c,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument(0);
    iVar1 = test_ptr("test/quic_newcid_test.c",0xa0,"certsdir = test_get_argument(0)",uVar2);
    if (iVar1 != 0) {
      cert = (void *)test_mk_file_path(uVar2,"servercert.pem");
      if (cert != (void *)0x0) {
        privkey = (void *)test_mk_file_path(uVar2,"serverkey.pem");
        if (privkey != (void *)0x0) {
          add_all_tests("test_ncid_frame",0x100000,2,1);
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



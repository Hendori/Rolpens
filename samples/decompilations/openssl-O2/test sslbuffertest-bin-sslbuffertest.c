
bool test_free_buffers(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ENGINE *e;
  long lVar4;
  BIO *pBVar5;
  long in_FS_OFFSET;
  bool bVar6;
  int local_ec;
  SSL *local_e8;
  SSL *local_e0;
  undefined1 local_d8 [8];
  long local_d0;
  undefined8 local_c2;
  undefined2 local_ba;
  undefined1 local_b8 [57];
  char local_7f;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ba = 0x61;
  local_e8 = (SSL *)0x0;
  local_e0 = (SSL *)0x0;
  local_c2 = 0x7461642074736554;
  if (param_1 < 4) {
    iVar3 = create_ssl_objects(serverctx,clientctx,&local_e8,&local_e0,0,0);
    iVar3 = test_true("test/sslbuffertest.c",0xde,
                      "create_ssl_objects(serverctx, clientctx, &serverssl, &clientssl, NULL, NULL)"
                      ,iVar3 != 0);
    if (iVar3 != 0) {
      iVar3 = create_ssl_connection(local_e8,local_e0,0);
      iVar3 = test_true("test/sslbuffertest.c",0xea,
                        "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",iVar3 != 0);
      if (iVar3 != 0) {
        e = (ENGINE *)0x0;
        local_ec = param_1;
LAB_001001a8:
        bVar6 = false;
        do {
          iVar3 = SSL_write_ex(local_e0,&local_c2,9,local_d8);
          iVar3 = test_true("test/sslbuffertest.c",0xf3,
                            "SSL_write_ex(clientssl, testdata, strlen(testdata), &written)",
                            iVar3 != 0);
          if (iVar3 == 0) goto LAB_00100220;
          bVar2 = !bVar6;
          bVar6 = true;
        } while (bVar2 && 3 < param_1);
        if (local_ec == 0) {
          cVar1 = (3 < param_1) * '\t' + '\x01';
          iVar3 = SSL_read_ex(local_e8,local_b8,cVar1,&local_d0);
          iVar3 = test_true("test/sslbuffertest.c",0x103,
                            "SSL_read_ex(serverssl, buf, readlen, &readbytes)",iVar3 != 0);
          if ((iVar3 == 0) ||
             (iVar3 = test_size_t_eq("test/sslbuffertest.c",0x104,"readlen","readbytes",cVar1,
                                     local_d0), iVar3 == 0)) goto LAB_00100220;
LAB_001003c9:
          iVar3 = SSL_free_buffers(local_e8);
          iVar3 = test_false("test/sslbuffertest.c",0x14f,"SSL_free_buffers(serverssl)",iVar3 != 0);
          bVar6 = iVar3 != 0;
        }
        else {
          pBVar5 = SSL_get_rbio(local_e8);
          iVar3 = BIO_read_ex(pBVar5,local_b8,0x78,&local_d0);
          iVar3 = test_true("test/sslbuffertest.c",0x10c,
                            "BIO_read_ex(tmp, buf, sizeof(buf), &readbytes)",iVar3 != 0);
          if (((iVar3 == 0) ||
              (iVar3 = test_size_t_lt("test/sslbuffertest.c",0x10d,"readbytes","sizeof(buf)",
                                      local_d0,0x78), iVar3 == 0)) ||
             (iVar3 = test_size_t_gt("test/sslbuffertest.c",0x10e,"readbytes",
                                     "SSL3_RT_HEADER_LENGTH",local_d0,5), iVar3 == 0))
          goto LAB_00100220;
          if (local_ec == 2) {
            if (param_1 < 4) {
              lVar4 = 5;
              goto LAB_001005e6;
            }
            lVar4 = 0x3e;
LAB_001004ee:
            iVar3 = test_int_eq("test/sslbuffertest.c",299,"buf[first_rec_len]",
                                "SSL3_RT_APPLICATION_DATA",(int)local_7f,0x17);
            if (iVar3 != 0) {
              iVar3 = BIO_write_ex(pBVar5,local_b8,lVar4,local_d8);
              iVar3 = test_true("test/sslbuffertest.c",0x133,
                                "BIO_write_ex(tmp, buf, partial_len, &written)",iVar3 != 0);
              if (iVar3 == 0) goto LAB_00100220;
              if (param_1 < 4) goto LAB_0010061f;
              iVar3 = SSL_read_ex(local_e8,local_b8,0x78,&local_d0);
              iVar3 = test_true("test/sslbuffertest.c",0x13c,
                                "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)",iVar3 != 0);
              if (iVar3 == 0) goto LAB_00100220;
              iVar3 = test_size_t_eq("test/sslbuffertest.c",0x13e,"readbytes","strlen(testdata)",
                                     local_d0,9);
              goto joined_r0x001005c6;
            }
          }
          else {
            if (local_ec == 3) {
              lVar4 = local_d0 + -1;
              if (3 < param_1) goto LAB_001004ee;
            }
            else {
              if (local_ec != 1) {
                test_error("test/sslbuffertest.c",0x11c,"Invalid test index");
                goto LAB_00100220;
              }
              lVar4 = 0x3d;
              if (3 < param_1) goto LAB_001004ee;
              lVar4 = 4;
            }
LAB_001005e6:
            iVar3 = BIO_write_ex(pBVar5,local_b8,lVar4,local_d8);
            iVar3 = test_true("test/sslbuffertest.c",0x133,
                              "BIO_write_ex(tmp, buf, partial_len, &written)",iVar3 != 0);
            if (iVar3 != 0) {
LAB_0010061f:
              iVar3 = SSL_read_ex(local_e8,local_b8,0x78,&local_d0);
              iVar3 = test_false("test/sslbuffertest.c",0x145,
                                 "SSL_read_ex(serverssl, buf, sizeof(buf), &readbytes)",iVar3 != 0);
joined_r0x001005c6:
              if (iVar3 != 0) goto LAB_001003c9;
            }
          }
LAB_00100220:
          bVar6 = false;
        }
        SSL_free(local_e0);
        SSL_free(local_e8);
        if (e == (ENGINE *)0x0) goto LAB_0010025e;
        goto LAB_00100102;
      }
    }
LAB_00100248:
    bVar6 = false;
    SSL_free(local_e0);
    SSL_free(local_e8);
  }
  else {
    e = (ENGINE *)load_dasync();
    if (e == (ENGINE *)0x0) goto LAB_00100248;
    iVar3 = create_ssl_objects(serverctx,clientctx,&local_e8,&local_e0,0,0);
    iVar3 = test_true("test/sslbuffertest.c",0xde,
                      "create_ssl_objects(serverctx, clientctx, &serverssl, &clientssl, NULL, NULL)"
                      ,iVar3 != 0);
    if (iVar3 != 0) {
      SSL_set_cipher_list(local_e8,"AES128-SHA");
      iVar3 = test_true("test/sslbuffertest.c",0xe3,"SSL_set_cipher_list(serverssl, \"AES128-SHA\")"
                       );
      if (iVar3 != 0) {
        SSL_ctrl(local_e8,0x7c,0x303,(void *)0x0);
        iVar3 = test_true("test/sslbuffertest.c",0xe4,
                          "SSL_set_max_proto_version(serverssl, TLS1_2_VERSION)");
        if (iVar3 != 0) {
          lVar4 = SSL_ctrl(local_e8,0x7e,2,(void *)0x0);
          iVar3 = test_true("test/sslbuffertest.c",0xe6,"SSL_set_max_pipelines(serverssl, 2)",
                            lVar4 != 0);
          if (iVar3 != 0) {
            iVar3 = create_ssl_connection(local_e8,local_e0,0);
            iVar3 = test_true("test/sslbuffertest.c",0xea,
                              "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",
                              iVar3 != 0);
            if (iVar3 != 0) {
              local_ec = param_1 + -4;
              goto LAB_001001a8;
            }
          }
        }
      }
    }
    bVar6 = false;
    SSL_free(local_e0);
    SSL_free(local_e8);
LAB_00100102:
    ENGINE_unregister_ciphers(e);
    ENGINE_finish(e);
    ENGINE_free(e);
  }
LAB_0010025e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_func(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_70;
  SSL *local_68;
  SSL *local_60;
  undefined8 local_54;
  undefined2 local_4c;
  undefined1 local_4a [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0x61;
  local_68 = (SSL *)0x0;
  local_60 = (SSL *)0x0;
  local_54 = 0x7461642074736554;
  iVar2 = create_ssl_objects(serverctx,clientctx,&local_68,&local_60,0,0);
  iVar2 = test_true("test/sslbuffertest.c",0x57,
                    "create_ssl_objects(serverctx, clientctx, &serverssl, &clientssl, NULL, NULL)",
                    iVar2 != 0);
  if (iVar2 == 0) {
    test_error("test/sslbuffertest.c",0x59,"Test %d failed: Create SSL objects failed\n",param_1);
  }
  else {
    iVar2 = create_ssl_connection(local_68,local_60,0);
    iVar2 = test_true("test/sslbuffertest.c",0x5d,
                      "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",iVar2 != 0);
    local_70 = 2;
    if (iVar2 != 0) {
      while( true ) {
        iVar2 = 0;
        lVar7 = 0;
        do {
          if (0 < param_1) {
            iVar3 = SSL_free_buffers();
            iVar3 = test_true("test/sslbuffertest.c",0x71,"SSL_free_buffers(clientssl)",iVar3 != 0);
            if (iVar3 == 0) goto LAB_00100a20;
            if ((local_60 == (SSL *)0x0) || (local_60->version != 0)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            bVar8 = false;
            if (*(long *)(local_60[4].max_cert_list + 0x6a0) == 0) {
              bVar8 = *(long *)(*(long *)&local_60[4].first_packet + 0x60) == 0;
            }
            iVar3 = test_true("test/sslbuffertest.c",0x72,"checkbuffers(clientssl, 0)",bVar8);
            if (iVar3 == 0) goto LAB_00100a20;
            if (param_1 != 1) {
              iVar3 = SSL_alloc_buffers();
              iVar3 = test_true("test/sslbuffertest.c",0x74,"SSL_alloc_buffers(clientssl)",
                                iVar3 != 0);
              if (iVar3 == 0) goto LAB_00100a20;
              if ((local_60 == (SSL *)0x0) || (local_60->version != 0)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              bVar8 = false;
              if (*(long *)(local_60[4].max_cert_list + 0x6a0) != 0) {
                bVar8 = *(long *)(*(long *)&local_60[4].first_packet + 0x60) != 0;
              }
              iVar3 = test_true("test/sslbuffertest.c",0x75,"checkbuffers(clientssl, 1)",bVar8);
              if (iVar3 == 0) goto LAB_00100a20;
              if (param_1 != 2) {
                iVar3 = SSL_alloc_buffers();
                iVar3 = test_true("test/sslbuffertest.c",0x78,"SSL_alloc_buffers(clientssl)",
                                  iVar3 != 0);
                if (iVar3 == 0) goto LAB_00100a20;
                if ((local_60 == (SSL *)0x0) || (local_60->version != 0)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                bVar8 = false;
                if (*(long *)(local_60[4].max_cert_list + 0x6a0) != 0) {
                  bVar8 = *(long *)(*(long *)&local_60[4].first_packet + 0x60) != 0;
                }
                iVar3 = test_true("test/sslbuffertest.c",0x79,"checkbuffers(clientssl, 1)",bVar8);
                if (iVar3 == 0) goto LAB_00100a20;
                if (param_1 != 3) {
                  iVar3 = SSL_free_buffers();
                  iVar3 = test_true("test/sslbuffertest.c",0x7b,"SSL_free_buffers(clientssl)",
                                    iVar3 != 0);
                  if (iVar3 == 0) goto LAB_00100a20;
                  if ((local_60 == (SSL *)0x0) || (local_60->version != 0)) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  bVar8 = false;
                  if (*(long *)(local_60[4].max_cert_list + 0x6a0) == 0) {
                    bVar8 = *(long *)(*(long *)&local_60[4].first_packet + 0x60) == 0;
                  }
                  iVar3 = test_true("test/sslbuffertest.c",0x7c,"checkbuffers(clientssl, 0)",bVar8);
                  if (iVar3 == 0) goto LAB_00100a20;
                }
              }
            }
          }
          iVar3 = SSL_write(local_60,(void *)((long)iVar2 + (long)&local_54),10 - iVar2);
          if (iVar3 < 1) {
            uVar4 = SSL_get_error(local_60,iVar3);
            if ((uVar4 & 0xfffffffb) == 1) {
              test_error("test/sslbuffertest.c",0x88,"Test %d failed: Failed to write app data\n",
                         param_1);
              goto LAB_00100a20;
            }
          }
          else {
            iVar2 = iVar2 + iVar3;
          }
          uVar6 = lVar7 + 1;
          lVar7 = 1;
        } while (uVar6 < 2 && iVar2 != 10);
        iVar2 = test_size_t_eq("test/sslbuffertest.c",0x8d,&_LC29,"sizeof(testdata)",(long)iVar2,10)
        ;
        if (iVar2 == 0) goto LAB_00100a20;
        iVar2 = 0;
        uVar6 = 0;
        do {
          if (4 < param_1) {
            iVar3 = SSL_free_buffers();
            iVar3 = test_true("test/sslbuffertest.c",0x96,"SSL_free_buffers(serverssl)",iVar3 != 0);
            if (iVar3 == 0) goto LAB_00100a20;
            if ((local_68 == (SSL *)0x0) || (local_68->version != 0)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            bVar8 = false;
            if (*(long *)(local_68[4].max_cert_list + 0x6a0) == 0) {
              bVar8 = *(long *)(*(long *)&local_68[4].first_packet + 0x60) == 0;
            }
            iVar3 = test_true("test/sslbuffertest.c",0x97,"checkbuffers(serverssl, 0)",bVar8);
            if (iVar3 == 0) goto LAB_00100a20;
            if (param_1 != 5) {
              iVar3 = SSL_free_buffers();
              iVar3 = test_true("test/sslbuffertest.c",0x9a,"SSL_free_buffers(serverssl)",iVar3 != 0
                               );
              if (iVar3 == 0) goto LAB_00100a20;
              if ((local_68 == (SSL *)0x0) || (local_68->version != 0)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              bVar8 = false;
              if (*(long *)(local_68[4].max_cert_list + 0x6a0) == 0) {
                bVar8 = *(long *)(*(long *)&local_68[4].first_packet + 0x60) == 0;
              }
              iVar3 = test_true("test/sslbuffertest.c",0x9b,"checkbuffers(serverssl, 0)",bVar8);
              if (iVar3 == 0) goto LAB_00100a20;
              if (param_1 != 6) {
                iVar3 = SSL_alloc_buffers();
                iVar3 = test_true("test/sslbuffertest.c",0x9d,"SSL_alloc_buffers(serverssl)",
                                  iVar3 != 0);
                if (iVar3 == 0) goto LAB_00100a20;
                if ((local_68 == (SSL *)0x0) || (local_68->version != 0)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                bVar8 = false;
                if (*(long *)(local_68[4].max_cert_list + 0x6a0) != 0) {
                  bVar8 = *(long *)(*(long *)&local_68[4].first_packet + 0x60) != 0;
                }
                iVar3 = test_true("test/sslbuffertest.c",0x9e,"checkbuffers(serverssl, 1)",bVar8);
                if (iVar3 == 0) goto LAB_00100a20;
                if (param_1 != 7) {
                  iVar3 = SSL_free_buffers();
                  iVar3 = test_true("test/sslbuffertest.c",0xa0,"SSL_free_buffers(serverssl)",
                                    iVar3 != 0);
                  if (iVar3 == 0) goto LAB_00100a20;
                  if ((local_68 == (SSL *)0x0) || (local_68->version != 0)) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  bVar8 = false;
                  if (*(long *)(local_68[4].max_cert_list + 0x6a0) == 0) {
                    bVar8 = *(long *)(*(long *)&local_68[4].first_packet + 0x60) == 0;
                  }
                  iVar3 = test_true("test/sslbuffertest.c",0xa1,"checkbuffers(serverssl, 0)",bVar8);
                  if (iVar3 == 0) goto LAB_00100a20;
                }
              }
            }
          }
          iVar3 = SSL_read(local_68,local_4a + iVar2,10 - iVar2);
          if (iVar3 < 1) {
            uVar4 = SSL_get_error(local_68,iVar3);
            if ((uVar4 & 0xfffffffb) == 1) {
              test_error("test/sslbuffertest.c",0xac,"Test %d failed: Failed to read app data\n",
                         param_1);
              goto LAB_00100a20;
            }
          }
          else {
            iVar2 = iVar2 + iVar3;
          }
          uVar6 = uVar6 + 1;
        } while ((iVar2 != 10) && (uVar6 < 100));
        iVar2 = test_mem_eq("test/sslbuffertest.c",0xb1,&_LC35,"testdata",local_4a,(long)iVar2,
                            &local_54,10);
        if (iVar2 == 0) goto LAB_00100a20;
        if (local_70 == 1) break;
        local_70 = 1;
      }
      uVar5 = 1;
      goto LAB_00100a2e;
    }
    test_error("test/sslbuffertest.c",0x5e,"Test %d failed: Create SSL connection failed\n",param_1)
    ;
  }
LAB_00100a20:
  uVar5 = 0;
  ERR_print_errors_fp(_stderr);
LAB_00100a2e:
  SSL_free(local_60);
  SSL_free(local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
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
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/sslbuffertest.c",0x167,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument(0);
    iVar1 = test_ptr("test/sslbuffertest.c",0x16b,"cert = test_get_argument(0)",uVar2);
    if (iVar1 != 0) {
      uVar3 = test_get_argument(1);
      iVar1 = test_ptr("test/sslbuffertest.c",0x16c,"pkey = test_get_argument(1)",uVar3);
      if (iVar1 != 0) {
        uVar4 = TLS_client_method();
        uVar5 = TLS_server_method();
        iVar1 = create_ssl_ctx_pair(0,uVar5,uVar4,0x301,0,&serverctx,&clientctx,uVar2,uVar3);
        if (iVar1 != 0) {
          add_all_tests("test_func",test_func,9,1);
          add_all_tests("test_free_buffers",0x100000,8,1);
          return 1;
        }
        test_error("test/sslbuffertest.c",0x172,"Failed to create SSL_CTX pair\n");
      }
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  SSL_CTX_free(clientctx);
  SSL_CTX_free(serverctx);
  return;
}



void test_func_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



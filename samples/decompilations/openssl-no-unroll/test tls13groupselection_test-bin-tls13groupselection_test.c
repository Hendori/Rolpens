
bool test_invalidsyntax(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  SSL_CTX *local_60;
  SSL_CTX *local_58;
  SSL *local_50;
  SSL *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (SSL_CTX *)0x0;
  local_58 = (SSL_CTX *)0x0;
  local_50 = (SSL *)0x0;
  local_48 = (SSL *)0x0;
  iVar3 = test_ptr("test/tls13groupselection_test.c",0x17a,"current_test_vector->client_groups",
                   *param_1);
  if (iVar3 != 0) {
    sVar4 = strlen((char *)*param_1);
    iVar3 = test_size_t_ne("test/tls13groupselection_test.c",0x17b,
                           "strlen(current_test_vector->client_groups)",&_LC2,sVar4,0);
    uVar2 = cert;
    uVar1 = privkey;
    if (iVar3 != 0) {
      uVar5 = TLS_client_method();
      uVar6 = TLS_server_method();
      iVar3 = create_ssl_ctx_pair(0,uVar6,uVar5,0x301,0,&local_58,&local_60,uVar2,uVar1);
      iVar3 = test_true("test/tls13groupselection_test.c",0x17f,
                        "create_ssl_ctx_pair(((void *)0), TLS_server_method(), TLS_client_method(), 0x0301, 0, &server_ctx, &client_ctx, cert, privkey)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        if (param_2 == 0) {
          lVar7 = SSL_CTX_ctrl(local_60,0x5c,0,(void *)*param_1);
          iVar3 = test_false("test/tls13groupselection_test.c",0x187,
                             "SSL_CTX_ctrl(client_ctx,92,0,(char *)(current_test_vector->client_groups))"
                             ,lVar7 != 0);
          if (iVar3 != 0) {
            iVar3 = create_ssl_objects(local_58,local_60,&local_48,&local_50,0,0);
            iVar3 = test_true("test/tls13groupselection_test.c",0x18a,
                              "create_ssl_objects(server_ctx, client_ctx, &serverssl, &clientssl, ((void *)0), ((void *)0))"
                              ,iVar3 != 0);
            if (iVar3 != 0) {
              bVar8 = true;
              goto LAB_0010006c;
            }
          }
        }
        else {
          iVar3 = create_ssl_objects(local_58,local_60,&local_48,&local_50,0,0);
          iVar3 = test_true("test/tls13groupselection_test.c",0x18a,
                            "create_ssl_objects(server_ctx, client_ctx, &serverssl, &clientssl, ((void *)0), ((void *)0))"
                            ,iVar3 != 0);
          if (iVar3 != 0) {
            lVar7 = SSL_ctrl(local_50,0x5c,0,(void *)*param_1);
            iVar3 = test_false("test/tls13groupselection_test.c",400,
                               "SSL_ctrl(clientssl,92,0,(char *)(current_test_vector->client_groups))"
                               ,lVar7 != 0);
            bVar8 = iVar3 != 0;
            goto LAB_0010006c;
          }
        }
      }
    }
  }
  bVar8 = false;
LAB_0010006c:
  SSL_free(local_48);
  SSL_free(local_50);
  SSL_CTX_free(local_58);
  SSL_CTX_free(local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_groupnegotiation(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined4 local_64;
  SSL_CTX *local_60;
  SSL_CTX *local_58;
  SSL *local_50;
  SSL *local_48;
  long local_40;
  
  uVar1 = cert;
  uVar8 = privkey;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (SSL_CTX *)0x0;
  local_58 = (SSL_CTX *)0x0;
  local_50 = (SSL *)0x0;
  local_48 = (SSL *)0x0;
  uVar3 = TLS_client_method();
  uVar4 = TLS_server_method();
  iVar2 = create_ssl_ctx_pair(0,uVar4,uVar3,0x301,0,&local_58,&local_60,uVar1,uVar8);
  iVar2 = test_true("test/tls13groupselection_test.c",0x1a9,
                    "create_ssl_ctx_pair(((void *)0), TLS_server_method(), TLS_client_method(), 0x0301, 0, &server_ctx, &client_ctx, cert, privkey)"
                    ,iVar2 != 0);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      if ((void *)*param_1 != (void *)0x0) {
        lVar5 = SSL_CTX_ctrl(local_60,0x5c,0,(void *)*param_1);
        iVar2 = test_true("test/tls13groupselection_test.c",0x1b2,
                          "SSL_CTX_ctrl(client_ctx,92,0,(char *)(current_test_vector->client_groups))"
                          ,lVar5 != 0);
        if (iVar2 == 0) goto LAB_001003f8;
      }
      if ((void *)param_1[1] != (void *)0x0) {
        SSL_CTX_ctrl(local_58,0x5c,0,(void *)param_1[1]);
        iVar2 = test_true("test/tls13groupselection_test.c",0x1b6,
                          "SSL_CTX_ctrl(server_ctx,92,0,(char *)(current_test_vector->server_groups))"
                         );
        if (iVar2 == 0) goto LAB_001003f8;
      }
      SSL_CTX_ctrl(local_60,0x7b,0x304,(void *)0x0);
      iVar2 = test_true("test/tls13groupselection_test.c",0x1b9,
                        "SSL_CTX_ctrl(client_ctx, 123, 0x0304, ((void *)0))");
      if (iVar2 != 0) {
        lVar5 = SSL_CTX_ctrl(local_58,0x7b,0x304,(void *)0x0);
        iVar2 = test_true("test/tls13groupselection_test.c",0x1ba,
                          "SSL_CTX_ctrl(server_ctx, 123, 0x0304, ((void *)0))",lVar5 != 0);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 2) == 1) {
            SSL_CTX_set_options(local_58,0x400000);
          }
          iVar2 = create_ssl_objects(local_58,local_60,&local_48,&local_50,0,0);
          iVar2 = test_true("test/tls13groupselection_test.c",0x1bf,
                            "create_ssl_objects(server_ctx, client_ctx, &serverssl, &clientssl, NULL, NULL)"
                            ,iVar2 != 0);
          if (iVar2 != 0) {
LAB_00100626:
            local_64 = 1;
            SSL_ctrl(local_50,0x10,0,&local_64);
            SSL_set_msg_callback(local_50,server_response_check_cb);
            if (param_3 != 1) {
              iVar2 = create_ssl_connection(local_48,local_50,0);
              iVar2 = test_false("test/tls13groupselection_test.c",0x1eb,
                                 "create_ssl_connection(serverssl, clientssl, 0)",iVar2 != 0);
              bVar9 = iVar2 != 0;
              goto LAB_001003fa;
            }
            create_ssl_connection(local_48,local_50,0);
            iVar2 = test_true("test/tls13groupselection_test.c",0x1da,
                              "create_ssl_connection(serverssl, clientssl, 0)");
            if (iVar2 != 0) {
              uVar6 = SSL_ctrl(local_50,0x86,0,(void *)0x0);
              uVar7 = SSL_ctrl(local_48,0x86,0,(void *)0x0);
              uVar8 = SSL_group_to_name(local_50,uVar6 & 0xffffffff);
              iVar2 = test_int_eq("test/tls13groupselection_test.c",0x1e4,"negotiated_group_client",
                                  "negotiated_group_server",uVar6 & 0xffffffff,uVar7 & 0xffffffff);
              if ((iVar2 != 0) &&
                 (iVar2 = test_int_eq("test/tls13groupselection_test.c",0x1e6,
                                      "(int)current_test_vector->expected_server_response",
                                      "(int)server_response",*(undefined4 *)(param_1 + 4),local_64),
                 iVar2 != 0)) {
                iVar2 = test_str_eq("test/tls13groupselection_test.c",0x1e8,"group_name_client",
                                    "current_test_vector->expected_group",uVar8,param_1[3]);
                bVar9 = iVar2 != 0;
                goto LAB_001003fa;
              }
            }
          }
        }
      }
    }
    else {
      iVar2 = create_ssl_objects(local_58,local_60,&local_48,&local_50,0,0);
      iVar2 = test_true("test/tls13groupselection_test.c",0x1bf,
                        "create_ssl_objects(server_ctx, client_ctx, &serverssl, &clientssl, NULL, NULL)"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        if ((void *)*param_1 != (void *)0x0) {
          lVar5 = SSL_ctrl(local_50,0x5c,0,(void *)*param_1);
          iVar2 = test_true("test/tls13groupselection_test.c",0x1c7,
                            "SSL_ctrl(clientssl,92,0,(char *)(current_test_vector->client_groups))",
                            lVar5 != 0);
          if (iVar2 == 0) goto LAB_001003f8;
        }
        if ((void *)param_1[1] != (void *)0x0) {
          SSL_ctrl(local_48,0x5c,0,(void *)param_1[1]);
          iVar2 = test_true("test/tls13groupselection_test.c",0x1ca,
                            "SSL_ctrl(serverssl,92,0,(char *)(current_test_vector->server_groups))")
          ;
          if (iVar2 == 0) goto LAB_001003f8;
        }
        SSL_ctrl(local_50,0x7b,0x304,(void *)0x0);
        iVar2 = test_true("test/tls13groupselection_test.c",0x1cc,
                          "SSL_ctrl(clientssl, 123, 0x0304, ((void *)0))");
        if (iVar2 != 0) {
          lVar5 = SSL_ctrl(local_48,0x7b,0x304,(void *)0x0);
          iVar2 = test_true("test/tls13groupselection_test.c",0x1cd,
                            "SSL_ctrl(serverssl, 123, 0x0304, ((void *)0))",lVar5 != 0);
          if (iVar2 != 0) {
            if (*(int *)(param_1 + 2) == 1) {
              SSL_set_options(local_48,0x400000);
            }
            goto LAB_00100626;
          }
        }
      }
    }
  }
LAB_001003f8:
  bVar9 = false;
LAB_001003fa:
  SSL_free(local_48);
  SSL_free(local_50);
  SSL_CTX_free(local_58);
  SSL_CTX_free(local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



int tls13groupselection_test(int param_1)

{
  undefined1 *puVar1;
  char *__s1;
  int iVar2;
  int iVar3;
  
  test_info("test/tls13groupselection_test.c",0x202,"==> Running TLSv1.3 test %d",param_1);
  puVar1 = tls13groupselection_tests + (long)param_1 * 0x28;
  __s1 = *(char **)(tls13groupselection_tests + (long)param_1 * 0x28 + 0x18);
  iVar2 = strcmp(__s1,"SYNTAX_FAILURE");
  if (iVar2 == 0) {
    iVar2 = test_invalidsyntax(puVar1,1);
    if (iVar2 == 0) {
      test_error("test/tls13groupselection_test.c",0x213,
                 "====> [ERROR] TLSv1.3 test %d with WORK_ON_SSL_OBJECT failed",param_1);
    }
    iVar3 = test_invalidsyntax(puVar1,0);
  }
  else {
    iVar3 = strcmp(__s1,"NEGOTIATION_FAILURE");
    iVar2 = test_groupnegotiation(puVar1,1,iVar3 != 0);
    if (iVar2 == 0) {
      test_error("test/tls13groupselection_test.c",0x213,
                 "====> [ERROR] TLSv1.3 test %d with WORK_ON_SSL_OBJECT failed",param_1);
    }
    iVar3 = test_groupnegotiation(puVar1,0,iVar3 != 0);
  }
  if (iVar3 != 0) {
    return iVar3 * iVar2;
  }
  test_error("test/tls13groupselection_test.c",0x21e,
             "====> [ERROR] TLSv1.3 test %d with WORK_ON_CONTEXT failed",param_1);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void server_response_check_cb
               (int param_1,int param_2,int param_3,char *param_4,undefined8 param_5,
               undefined8 param_6,int *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_3 == 0x16 && param_2 == 0x304) && (param_1 == 0)) && (*param_4 == '\x02')) {
    if ((*(long *)(param_4 + 6) == __LC27 && *(long *)(param_4 + 0xe) == _UNK_00101ce8) &&
       (*(long *)(param_4 + 0x16) == __LC28 && *(long *)(param_4 + 0x1e) == _UNK_00101cf8)) {
      *param_7 = 0;
    }
    else {
      *param_7 = *param_7 << 1;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  cert = test_get_argument(0);
  iVar1 = test_ptr("test/tls13groupselection_test.c",0x226,"cert = test_get_argument(0)",cert);
  if (iVar1 != 0) {
    privkey = test_get_argument(1);
    iVar1 = test_ptr("test/tls13groupselection_test.c",0x227,"privkey = test_get_argument(1)",
                     privkey);
    if (iVar1 != 0) {
      add_all_tests("tls13groupselection_test",tls13groupselection_test,0x2b,1);
      return 1;
    }
  }
  return 0;
}



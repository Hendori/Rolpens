
bool test_server_mtu_larger_than_max_fragment_length(void)

{
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  SSL *local_30;
  SSL *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (SSL *)0x0;
  local_28 = (SSL *)0x0;
  meth = (SSL_METHOD *)DTLS_method();
  ctx = SSL_CTX_new(meth);
  iVar1 = test_ptr("test/dtls_mtu_test.c",0xc9,"ctx = SSL_CTX_new(DTLS_method())");
  if (iVar1 != 0) {
    SSL_CTX_set_psk_server_callback(ctx,srvr_psk_callback);
    SSL_CTX_set_psk_client_callback(ctx,clnt_psk_callback);
    lVar2 = SSL_CTX_ctrl(ctx,0x76,1,(void *)0x0);
    iVar1 = test_true("test/dtls_mtu_test.c",0xd0,"SSL_CTX_set_dh_auto(ctx, 1)",lVar2 != 0);
    if (iVar1 != 0) {
      create_ssl_objects(ctx,ctx,&local_30,&local_28,0,0);
      iVar1 = test_true("test/dtls_mtu_test.c",0xd4,
                        "create_ssl_objects(ctx, ctx, &srvr_ssl, &clnt_ssl, NULL, NULL)");
      if (iVar1 != 0) {
        SSL_set_options(local_30,0x1000);
        lVar2 = SSL_ctrl(local_30,0x78,0x5dc,(void *)0x0);
        iVar1 = test_true("test/dtls_mtu_test.c",0xd9,"DTLS_set_link_mtu(srvr_ssl, 1500)",lVar2 != 0
                         );
        if (iVar1 != 0) {
          SSL_set_tlsext_max_fragment_length(local_28,1);
          iVar1 = create_ssl_connection(local_30,local_28,0);
          iVar1 = test_true("test/dtls_mtu_test.c",0xdf,
                            "create_ssl_connection(srvr_ssl, clnt_ssl, SSL_ERROR_NONE)",iVar1 != 0);
          bVar3 = iVar1 != 0;
          goto LAB_00100060;
        }
      }
    }
  }
  bVar3 = false;
LAB_00100060:
  SSL_free(local_28);
  SSL_free(local_30);
  SSL_CTX_free(ctx);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void srvr_psk_callback(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = 0x14;
  if (param_4 < 0x15) {
    uVar2 = param_4;
  }
  if (uVar2 < 8) {
    if ((uVar2 & 4) != 0) {
      *(undefined4 *)param_3 = 0x5a5a5a5a;
      *(undefined4 *)((long)param_3 + ((ulong)uVar2 - 4)) = 0x5a5a5a5a;
      return;
    }
    if ((uVar2 != 0) && (*(undefined1 *)param_3 = 0x5a, (uVar2 & 2) != 0)) {
      *(undefined2 *)((long)param_3 + ((ulong)uVar2 - 2)) = 0x5a5a;
      return;
    }
  }
  else {
    *param_3 = 0x5a5a5a5a5a5a5a5a;
    *(undefined8 *)((long)param_3 + ((ulong)uVar2 - 8)) = 0x5a5a5a5a5a5a5a5a;
    uVar2 = ((int)param_3 - (int)((ulong)(param_3 + 1) & 0xfffffffffffffff8)) + uVar2 & 0xfffffff8;
    if (7 < uVar2) {
      uVar1 = 0;
      do {
        uVar3 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(param_3 + 1) & 0xfffffffffffffff8) + uVar3) = 0x5a5a5a5a5a5a5a5a;
      } while (uVar1 < uVar2);
      return;
    }
  }
  return;
}



void clnt_psk_callback(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4,
                      undefined8 *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  BIO_snprintf(param_3,param_4 & 0xffffffff,"psk");
  uVar2 = 0x14;
  if (param_6 < 0x15) {
    uVar2 = param_6;
  }
  if (uVar2 < 8) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 != 0) && (*(undefined1 *)param_5 = 0x5a, (uVar2 & 2) != 0)) {
        *(undefined2 *)((long)param_5 + ((ulong)uVar2 - 2)) = 0x5a5a;
      }
    }
    else {
      *(undefined4 *)param_5 = 0x5a5a5a5a;
      *(undefined4 *)((long)param_5 + ((ulong)uVar2 - 4)) = 0x5a5a5a5a;
    }
  }
  else {
    *param_5 = 0x5a5a5a5a5a5a5a5a;
    *(undefined8 *)((long)param_5 + ((ulong)uVar2 - 8)) = 0x5a5a5a5a5a5a5a5a;
    uVar2 = ((int)param_5 - (int)((ulong)(param_5 + 1) & 0xfffffffffffffff8)) + uVar2 & 0xfffffff8;
    if (7 < uVar2) {
      uVar1 = 0;
      do {
        uVar3 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(param_5 + 1) & 0xfffffffffffffff8) + uVar3) = 0x5a5a5a5a5a5a5a5a;
      } while (uVar1 < uVar2);
      return;
    }
  }
  return;
}



int mtu_test(undefined8 param_1,char *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  SSL *pSVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  ulong auStack_1328 [489];
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  undefined *puStack_3d0;
  uint local_3bc;
  BIO *local_3b8;
  undefined8 *local_3b0;
  char *local_3a8;
  ulong local_3a0;
  SSL *local_398;
  SSL *local_390;
  ulong local_388 [30];
  undefined8 local_298 [75];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_398 = (SSL *)0x0;
  puVar6 = local_298;
  for (lVar4 = 0x4b; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0x5a5a5a5a5a5a5a5a;
    puVar6 = puVar6 + 1;
  }
  local_390 = (SSL *)0x0;
  puStack_3d0 = (undefined *)0x10039e;
  iVar2 = create_ssl_objects(param_1,param_1,&local_398,&local_390,0,0);
  puStack_3d0 = (undefined *)0x1003b9;
  iVar2 = test_true("test/dtls_mtu_test.c",0x3f,
                    "create_ssl_objects(ctx, ctx, &srvr_ssl, &clnt_ssl, NULL, NULL)",iVar2 != 0);
  if (iVar2 != 0) {
    if (param_3 != 0) {
      puStack_3d0 = (undefined *)0x10056f;
      SSL_set_options(local_398,0x80000);
    }
    puStack_3d0 = (undefined *)0x1003d3;
    iVar2 = SSL_set_cipher_list(local_398,param_2);
    puStack_3d0 = (undefined *)0x1003ee;
    iVar2 = test_true("test/dtls_mtu_test.c",0x46,"SSL_set_cipher_list(srvr_ssl, cs)",iVar2 != 0);
    if (iVar2 != 0) {
      puStack_3d0 = (undefined *)0x100445;
      iVar2 = SSL_set_cipher_list(local_390,param_2);
      puStack_3d0 = (undefined *)0x100460;
      iVar2 = test_true("test/dtls_mtu_test.c",0x47,"SSL_set_cipher_list(clnt_ssl, cs)",iVar2 != 0);
      if (iVar2 != 0) {
        puStack_3d0 = (undefined *)0x10046e;
        local_3b8 = SSL_get_rbio(local_398);
        puStack_3d0 = (undefined *)0x10048a;
        iVar2 = test_ptr("test/dtls_mtu_test.c",0x48,"sc_bio = SSL_get_rbio(srvr_ssl)",local_3b8);
        if (iVar2 != 0) {
          puStack_3d0 = (undefined *)0x1004a3;
          create_ssl_connection(local_390,local_398,0);
          puStack_3d0 = (undefined *)0x1004be;
          iVar2 = test_true("test/dtls_mtu_test.c",0x49,
                            "create_ssl_connection(clnt_ssl, srvr_ssl, SSL_ERROR_NONE)");
          if (iVar2 != 0) {
            uVar7 = 500;
            do {
              puStack_3d0 = (undefined *)0x100505;
              SSL_ctrl(local_390,0x11,uVar7,(void *)0x0);
              puStack_3d0 = (undefined *)0x10050f;
              uVar3 = DTLS_get_data_mtu(local_390);
              auStack_1328[uVar7] = uVar3;
              puStack_3d0 = (undefined *)0x100534;
              iVar2 = test_size_t_ne("test/dtls_mtu_test.c",0x59,"mtus[i]",&_LC11,uVar3,0);
              if (iVar2 == 0) {
                puStack_3d0 = (undefined *)0x100552;
                test_info("test/dtls_mtu_test.c",0x5a,"Cipher %s MTU %d",param_2,uVar7 & 0xffffffff)
                ;
                goto LAB_001003f2;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 != 0x212);
            puStack_3d0 = (undefined *)0x10058e;
            SSL_ctrl(local_390,0x11,1000,(void *)0x0);
            if (local_388[0] <= local_388[0x1d]) {
              local_3a0 = local_388[0x1d];
              uVar7 = local_388[0];
              local_3b0 = local_298;
              local_3a8 = param_2;
              do {
                puVar6 = local_3b0;
                puStack_3d0 = (undefined *)0x1005c8;
                iVar2 = SSL_write(local_390,local_3b0,(int)uVar7);
                puStack_3d0 = (undefined *)0x1005e9;
                iVar2 = test_int_eq("test/dtls_mtu_test.c",0x69,"SSL_write(clnt_ssl, buf, s)",
                                    "(int)s",iVar2,uVar7 & 0xffffffff);
                if (iVar2 == 0) goto LAB_001003f2;
                uVar8 = 500;
                puStack_3d0 = (undefined *)0x100609;
                iVar2 = BIO_read(local_3b8,puVar6,600);
                uVar3 = (ulong)iVar2;
                do {
                  uVar1 = auStack_1328[uVar8];
                  local_3bc = (uint)uVar8;
                  if (uVar1 < uVar7) {
                    puStack_3d0 = (undefined *)0x100683;
                    iVar2 = test_false("test/dtls_mtu_test.c",0x72,
                                       "s <= mtus[i] && reclen > (size_t)(500 + i)",0);
                    if (iVar2 == 0) {
LAB_00100691:
                      puStack_3d0 = (undefined *)(ulong)local_3bc;
                      uStack_3e0 = 0x1006bf;
                      uStack_3d8 = uVar3;
                      test_error("test/dtls_mtu_test.c",0x77,
                                 "%s: s=%lu, mtus[i]=%lu, reclen=%lu, i=%d",local_3a8,uVar7,uVar1);
                      goto LAB_001003f2;
                    }
                    bVar9 = uVar3 <= uVar8;
                  }
                  else {
                    puStack_3d0 = (undefined *)0x10062c;
                    iVar2 = test_false("test/dtls_mtu_test.c",0x72,
                                       "s <= mtus[i] && reclen > (size_t)(500 + i)",uVar8 < uVar3);
                    if (iVar2 == 0) goto LAB_00100691;
                    bVar9 = false;
                  }
                  puStack_3d0 = (undefined *)0x100646;
                  iVar2 = test_false("test/dtls_mtu_test.c",0x7c,
                                     "s > mtus[i] && reclen <= (size_t)(500 + i)",bVar9);
                  if (iVar2 == 0) {
                    puStack_3d0 = (undefined *)(ulong)local_3bc;
                    uStack_3e0 = 0x1006f4;
                    uStack_3d8 = uVar3;
                    test_error("test/dtls_mtu_test.c",0x82,
                               "%s: s=%lu, mtus[i]=%lu, reclen=%lu, i=%d",local_3a8,uVar7,uVar1);
                    goto LAB_001003f2;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 != 0x212);
                uVar7 = uVar7 + 1;
              } while (uVar7 <= local_3a0);
            }
            pSVar5 = local_390;
            if ((local_390 != (SSL *)0x0) && (local_390->version != 0)) {
              pSVar5 = (SSL *)0x0;
            }
            puStack_3d0 = (undefined *)0x100733;
            iVar2 = test_ptr("test/dtls_mtu_test.c",0x89,
                             "clnt_sc = SSL_CONNECTION_FROM_SSL_ONLY(clnt_ssl)",pSVar5);
            if (iVar2 != 0) {
              iVar2 = 2 - (uint)(((ulong)pSVar5->kssl_ctx & 0x100) == 0);
              goto LAB_001003f4;
            }
          }
        }
      }
    }
  }
LAB_001003f2:
  iVar2 = 0;
LAB_001003f4:
  puStack_3d0 = (undefined *)0x1003fe;
  SSL_free(local_390);
  puStack_3d0 = (undefined *)0x100408;
  SSL_free(local_398);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  puStack_3d0 = &UNK_0010075a;
  __stack_chk_fail();
}



int run_mtu_tests(void)

{
  int iVar1;
  int iVar2;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  undefined8 uVar3;
  SSL_CIPHER *c;
  char *__s1;
  int iVar4;
  
  meth = (SSL_METHOD *)DTLS_method();
  ctx = SSL_CTX_new(meth);
  iVar1 = test_ptr("test/dtls_mtu_test.c",0x9a,"ctx = SSL_CTX_new(DTLS_method())",ctx);
  if (iVar1 != 0) {
    SSL_CTX_set_psk_server_callback(ctx,srvr_psk_callback);
    SSL_CTX_set_psk_client_callback(ctx,clnt_psk_callback);
    SSL_CTX_set_security_level(ctx,0);
    iVar1 = SSL_CTX_set_cipher_list(ctx,"PSK");
    iVar1 = test_true("test/dtls_mtu_test.c",0xa6,"SSL_CTX_set_cipher_list(ctx, \"PSK\")",iVar1 != 0
                     );
    if (iVar1 != 0) {
      iVar1 = 0;
      uVar3 = SSL_CTX_get_ciphers(ctx);
      for (iVar4 = 0; iVar2 = OPENSSL_sk_num(uVar3), iVar4 < iVar2; iVar4 = iVar4 + 1) {
        c = (SSL_CIPHER *)OPENSSL_sk_value(uVar3,iVar4);
        __s1 = SSL_CIPHER_get_name(c);
        iVar2 = strncmp(__s1,"PSK-",4);
        if (iVar2 == 0) {
          iVar1 = mtu_test(ctx,__s1,0);
          iVar2 = test_int_gt("test/dtls_mtu_test.c",0xb2,"ret = mtu_test(ctx, cipher_name, 0)",
                              &_LC11,iVar1,0);
          if (iVar2 == 0) break;
          test_info("test/dtls_mtu_test.c",0xb4,"%s OK",__s1);
          if (iVar1 != 1) {
            iVar1 = mtu_test(ctx,__s1,1);
            iVar2 = test_int_gt("test/dtls_mtu_test.c",0xb9,"ret = mtu_test(ctx, cipher_name, 1)",
                                &_LC11,iVar1,0);
            if (iVar2 == 0) break;
            test_info("test/dtls_mtu_test.c",0xbb,"%s without EtM OK",__s1);
          }
        }
      }
      goto LAB_001007a6;
    }
  }
  iVar1 = 0;
LAB_001007a6:
  SSL_CTX_free(ctx);
  return iVar1;
}



undefined8 setup_tests(void)

{
  add_test("run_mtu_tests",run_mtu_tests);
  add_test("test_server_mtu_larger_than_max_fragment_length",0x100000);
  return 1;
}



void cleanup_tests(void)

{
  bio_s_mempacket_test_free();
  return;
}



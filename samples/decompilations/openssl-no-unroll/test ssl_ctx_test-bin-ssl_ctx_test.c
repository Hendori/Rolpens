
ulong test_set_min_max_version(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  ulong uVar10;
  
  lVar7 = (long)param_1 * 0x1c;
  iVar8 = *(int *)(version_testdata + lVar7);
  iVar1 = *(int *)(version_testdata + lVar7 + 4);
  iVar2 = *(int *)(version_testdata + lVar7 + 8);
  uVar3 = *(undefined4 *)(version_testdata + lVar7 + 0xc);
  uVar4 = *(undefined4 *)(version_testdata + lVar7 + 0x10);
  uVar5 = *(undefined4 *)(version_testdata + lVar7 + 0x14);
  uVar6 = *(undefined4 *)(version_testdata + lVar7 + 0x18);
  if (iVar8 == 1) {
    meth = (SSL_METHOD *)DTLS_client_method();
  }
  else if (iVar8 == 2) {
    meth = (SSL_METHOD *)OSSL_QUIC_client_method();
  }
  else {
    if (iVar8 != 0) goto LAB_00100101;
    meth = (SSL_METHOD *)TLS_client_method();
  }
  if (meth == (SSL_METHOD *)0x0) {
LAB_00100101:
    uVar10 = test_skip("test/ssl_ctx_test.c",100,"Protocol not supported");
    return uVar10;
  }
  ctx = SSL_CTX_new(meth);
  if ((ctx == (SSL_CTX *)0x0) || (ssl = SSL_new(ctx), ssl == (SSL *)0x0)) {
    uVar10 = 0;
    ssl = (SSL *)0x0;
  }
  else {
    uVar10 = SSL_CTX_ctrl(ctx,0x7b,(long)iVar1,(void *)0x0);
    iVar8 = test_int_eq("test/ssl_ctx_test.c",0x6e,
                        "SSL_CTX_set_min_proto_version(ctx, t.min_version)","t.min_ok",
                        uVar10 & 0xffffffff,uVar3);
    if (iVar8 != 0) {
      uVar10 = SSL_CTX_ctrl(ctx,0x7c,(long)iVar2,(void *)0x0);
      iVar8 = test_int_eq("test/ssl_ctx_test.c",0x70,
                          "SSL_CTX_set_max_proto_version(ctx, t.max_version)","t.max_ok",
                          uVar10 & 0xffffffff,uVar4);
      if (iVar8 != 0) {
        uVar10 = SSL_CTX_ctrl(ctx,0x82,0,(void *)0x0);
        uVar9 = test_int_eq("test/ssl_ctx_test.c",0x72,"SSL_CTX_get_min_proto_version(ctx)",
                            "t.expected_min",uVar10 & 0xffffffff,uVar5);
        uVar10 = (ulong)uVar9;
        if (uVar9 == 0) goto LAB_00100136;
        uVar10 = SSL_CTX_ctrl(ctx,0x83,0,(void *)0x0);
        iVar8 = test_int_eq("test/ssl_ctx_test.c",0x74,"SSL_CTX_get_max_proto_version(ctx)",
                            "t.expected_max",uVar10 & 0xffffffff,uVar6);
        if (iVar8 != 0) {
          uVar10 = SSL_ctrl(ssl,0x7b,(long)iVar1,(void *)0x0);
          iVar8 = test_int_eq("test/ssl_ctx_test.c",0x77,
                              "SSL_set_min_proto_version(ssl, t.min_version)","t.min_ok",
                              uVar10 & 0xffffffff,uVar3);
          if (iVar8 != 0) {
            uVar10 = SSL_ctrl(ssl,0x7c,(long)iVar2,(void *)0x0);
            iVar8 = test_int_eq("test/ssl_ctx_test.c",0x79,
                                "SSL_set_max_proto_version(ssl, t.max_version)","t.max_ok",
                                uVar10 & 0xffffffff,uVar4);
            if (iVar8 != 0) {
              uVar10 = SSL_ctrl(ssl,0x82,0,(void *)0x0);
              iVar8 = test_int_eq("test/ssl_ctx_test.c",0x7b,"SSL_get_min_proto_version(ssl)",
                                  "t.expected_min",uVar10 & 0xffffffff,uVar5);
              if (iVar8 != 0) {
                uVar10 = SSL_ctrl(ssl,0x83,0,(void *)0x0);
                iVar8 = test_int_eq("test/ssl_ctx_test.c",0x7d,"SSL_get_max_proto_version(ssl)",
                                    "t.expected_max",uVar10 & 0xffffffff,uVar6);
                uVar10 = (ulong)(iVar8 != 0);
                goto LAB_00100136;
              }
            }
          }
        }
      }
    }
    uVar10 = 0;
  }
LAB_00100136:
  SSL_free(ssl);
  SSL_CTX_free(ctx);
  return uVar10;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_set_min_max_version",0x100000,0x19,1);
  return 1;
}



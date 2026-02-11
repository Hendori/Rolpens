
undefined4 test_cipher_name(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  stack_st_SSL_CIPHER *psVar4;
  SSL_CIPHER *c;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  ulong uVar10;
  SSL *local_50;
  undefined *local_48;
  
  uVar3 = SSL_CIPHER_standard_name(0);
  iVar1 = test_str_eq("test/ciphername_test.c",0x188,&_LC2,"\"(NONE)\"",uVar3,"(NONE)");
  if (iVar1 == 0) {
    test_info("test/ciphername_test.c",0x189,
              "test_cipher_name(std) failed: NULL input doesn\'t return \"(NONE)\"\n");
  }
  else {
    uVar3 = OPENSSL_cipher_name(0);
    iVar1 = test_str_eq("test/ciphername_test.c",0x18e,&_LC2,"\"(NONE)\"",uVar3,"(NONE)");
    if (iVar1 == 0) {
      test_info("test/ciphername_test.c",399,
                "test_cipher_name(ossl) failed: NULL input doesn\'t return \"(NONE)\"\n");
    }
    else {
      uVar3 = OPENSSL_cipher_name("This is not a valid cipher");
      iVar1 = test_str_eq("test/ciphername_test.c",0x194,&_LC2,"\"(NONE)\"",uVar3,"(NONE)");
      if (iVar1 == 0) {
        test_info("test/ciphername_test.c",0x195,
                  "test_cipher_name(ossl) failed: invalid input doesn\'t return \"(NONE)\"\n");
      }
      else {
        meth = (SSL_METHOD *)TLS_server_method();
        ctx = SSL_CTX_new(meth);
        if (ctx != (SSL_CTX *)0x0) {
          iVar1 = SSL_CTX_set_cipher_list(ctx,"ALL:eNULL");
          if (iVar1 == 0) {
            test_info("test/ciphername_test.c",0x1a1,"test_cipher_name failed: internal error\n");
            local_50 = (SSL *)0x0;
            uVar9 = 0;
          }
          else {
            local_50 = SSL_new(ctx);
            if (local_50 == (SSL *)0x0) {
              uVar9 = 0;
              test_info("test/ciphername_test.c",0x1a7,"test_cipher_name failed: internal error\n");
            }
            else {
              iVar1 = 0;
              psVar4 = SSL_get_ciphers(local_50);
              if (psVar4 == (stack_st_SSL_CIPHER *)0x0) {
                uVar9 = 0;
                test_info("test/ciphername_test.c",0x1ad,"test_cipher_name failed: internal error\n"
                         );
              }
              else {
                for (; iVar2 = OPENSSL_sk_num(psVar4), iVar1 < iVar2; iVar1 = iVar1 + 1) {
                  c = (SSL_CIPHER *)OPENSSL_sk_value(psVar4,iVar1);
                  uVar5 = SSL_CIPHER_get_id(c);
                  uVar10 = uVar5 & 0xffff;
                  if ((((uint)uVar5 & 0xfffd) != 0xff85) && ((int)uVar10 != 0xc102)) {
                    uVar3 = SSL_CIPHER_standard_name(c);
                    piVar8 = &cipher_names;
                    lVar6 = 0;
                    do {
                      if ((int)uVar10 == *piVar8) {
                        local_48 = (&PTR_s_TLS_NULL_WITH_NULL_NULL_001037c8)[lVar6 * 2];
                        goto LAB_001001be;
                      }
                      lVar6 = lVar6 + 1;
                      piVar8 = piVar8 + 4;
                    } while (lVar6 != 0x150);
                    local_48 = (undefined *)0x0;
LAB_001001be:
                    iVar2 = test_ptr("test/ciphername_test.c",0x1b9,&_LC2,uVar3);
                    if (iVar2 == 0) {
                      uVar9 = 0;
                      test_info("test/ciphername_test.c",0x1ba,
                                "test_cipher_name failed: expected %s, got NULL, cipher %x\n",
                                local_48,uVar10);
                      goto LAB_0010029a;
                    }
                    iVar2 = test_str_eq("test/ciphername_test.c",0x1bf,&_LC2,&_LC11,uVar3,local_48);
                    if (iVar2 == 0) {
                      uVar9 = 0;
                      test_info("test/ciphername_test.c",0x1c0,
                                "test_cipher_name(std) failed: expected %s, got %s, cipher %x\n",
                                local_48,uVar3,uVar10);
                      goto LAB_0010029a;
                    }
                    pcVar7 = SSL_CIPHER_get_name(c);
                    uVar3 = OPENSSL_cipher_name(uVar3);
                    iVar2 = test_str_eq("test/ciphername_test.c",0x1c7,&_LC13,&_LC11,uVar3,pcVar7);
                    if (iVar2 == 0) {
                      uVar9 = 0;
                      test_info("test/ciphername_test.c",0x1c8,
                                "test_cipher_name(ossl) failed: expected %s, got %s, cipher %x\n",
                                pcVar7,uVar3,uVar10);
                      goto LAB_0010029a;
                    }
                  }
                }
                uVar9 = 1;
              }
            }
          }
          goto LAB_0010029a;
        }
        test_info("test/ciphername_test.c",0x19c,"test_cipher_name failed: internal error\n");
      }
    }
  }
  local_50 = (SSL *)0x0;
  uVar9 = 0;
  ctx = (SSL_CTX *)0x0;
LAB_0010029a:
  SSL_CTX_free(ctx);
  SSL_free(local_50);
  return uVar9;
}



undefined8 setup_tests(void)

{
  add_test("test_cipher_name",0x100000);
  return 1;
}




bool test_v3(void)

{
  int iVar1;
  undefined4 uVar2;
  SSL_CIPHER *pSVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_1a;
  undefined2 local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a = 0xff009f0033002f00;
  local_30 = 0;
  local_28 = 0;
  local_12 = 0x56;
  iVar1 = SSL_bytes_to_cipher_list(s,&local_1a,10,0,&local_30,&local_28);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/cipherbytes_test.c",0x6d,&_LC0,local_30);
    if (iVar1 != 0) {
      uVar2 = OPENSSL_sk_num(local_30);
      iVar1 = test_int_eq("test/cipherbytes_test.c",0x6e,"sk_SSL_CIPHER_num(sk)",&_LC2,uVar2,3);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/cipherbytes_test.c",0x6f,&_LC4,local_28);
        if (iVar1 != 0) {
          uVar2 = OPENSSL_sk_num(local_28);
          iVar1 = test_int_eq("test/cipherbytes_test.c",0x70,"sk_SSL_CIPHER_num(scsv)",&_LC5,uVar2,2
                             );
          if (iVar1 != 0) {
            pSVar3 = (SSL_CIPHER *)OPENSSL_sk_value(local_30,0);
            pcVar4 = SSL_CIPHER_get_name(pSVar3);
            iVar1 = test_str_eq("test/cipherbytes_test.c",0x71,
                                "SSL_CIPHER_get_name(sk_SSL_CIPHER_value(sk, 0))","\"AES128-SHA\"",
                                pcVar4,"AES128-SHA");
            if (iVar1 != 0) {
              pSVar3 = (SSL_CIPHER *)OPENSSL_sk_value(local_30,1);
              pcVar4 = SSL_CIPHER_get_name(pSVar3);
              iVar1 = test_str_eq("test/cipherbytes_test.c",0x73,
                                  "SSL_CIPHER_get_name(sk_SSL_CIPHER_value(sk, 1))",
                                  "\"DHE-RSA-AES128-SHA\"",pcVar4,"DHE-RSA-AES128-SHA");
              if (iVar1 != 0) {
                pSVar3 = (SSL_CIPHER *)OPENSSL_sk_value(local_30,2);
                pcVar4 = SSL_CIPHER_get_name(pSVar3);
                iVar1 = test_str_eq("test/cipherbytes_test.c",0x75,
                                    "SSL_CIPHER_get_name(sk_SSL_CIPHER_value(sk, 2))",
                                    "\"DHE-RSA-AES256-GCM-SHA384\"",pcVar4,
                                    "DHE-RSA-AES256-GCM-SHA384");
                if (iVar1 != 0) {
                  pSVar3 = (SSL_CIPHER *)OPENSSL_sk_value(local_28,0);
                  pcVar4 = SSL_CIPHER_get_name(pSVar3);
                  iVar1 = test_str_eq("test/cipherbytes_test.c",0x77,
                                      "SSL_CIPHER_get_name(sk_SSL_CIPHER_value(scsv, 0))",
                                      "\"TLS_EMPTY_RENEGOTIATION_INFO_SCSV\"",pcVar4,
                                      "TLS_EMPTY_RENEGOTIATION_INFO_SCSV");
                  if (iVar1 != 0) {
                    pSVar3 = (SSL_CIPHER *)OPENSSL_sk_value(local_28,1);
                    pcVar4 = SSL_CIPHER_get_name(pSVar3);
                    iVar1 = test_str_eq("test/cipherbytes_test.c",0x79,
                                        "SSL_CIPHER_get_name(sk_SSL_CIPHER_value(scsv, 1))",
                                        "\"TLS_FALLBACK_SCSV\"",pcVar4,"TLS_FALLBACK_SCSV");
                    bVar5 = iVar1 != 0;
                    goto LAB_0010006c;
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
LAB_0010006c:
  OPENSSL_sk_free(local_30);
  OPENSSL_sk_free(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_unsupported(void)

{
  int iVar1;
  undefined4 uVar2;
  SSL_CIPHER *c;
  char *pcVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_16;
  undefined2 local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_16 = 0x2f000fc0;
  local_12 = 1;
  iVar1 = SSL_bytes_to_cipher_list(s,&local_16,6,0,&local_28,&local_20);
  iVar1 = test_true("test/cipherbytes_test.c",0x34,
                    "SSL_bytes_to_cipher_list(s, bytes, sizeof(bytes), 0, &sk, &scsv)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/cipherbytes_test.c",0x36,&_LC0,local_28);
    if (iVar1 != 0) {
      uVar2 = OPENSSL_sk_num(local_28);
      iVar1 = test_int_eq("test/cipherbytes_test.c",0x37,"sk_SSL_CIPHER_num(sk)",&_LC23,uVar2,1);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/cipherbytes_test.c",0x38,&_LC4,local_20);
        if (iVar1 != 0) {
          uVar2 = OPENSSL_sk_num(local_20);
          iVar1 = test_int_eq("test/cipherbytes_test.c",0x39,"sk_SSL_CIPHER_num(scsv)",&_LC24,uVar2,
                              0);
          if (iVar1 != 0) {
            c = (SSL_CIPHER *)OPENSSL_sk_value(local_28,0);
            pcVar3 = SSL_CIPHER_get_name(c);
            iVar1 = test_str_eq("test/cipherbytes_test.c",0x3a,
                                "SSL_CIPHER_get_name(sk_SSL_CIPHER_value(sk, 0))","\"AES128-SHA\"",
                                pcVar3,"AES128-SHA");
            bVar4 = iVar1 != 0;
            goto LAB_00100323;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00100323:
  OPENSSL_sk_free(local_28);
  OPENSSL_sk_free(local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_v2(void)

{
  int iVar1;
  undefined4 uVar2;
  SSL_CIPHER *pSVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_19;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_11 = 0x33;
  local_19 = 0x800001350000;
  iVar1 = SSL_bytes_to_cipher_list(s,&local_19,9,1,&local_30,&local_28);
  iVar1 = test_true("test/cipherbytes_test.c",0x4e,
                    "SSL_bytes_to_cipher_list(s, bytes, sizeof(bytes), 1, &sk, &scsv)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/cipherbytes_test.c",0x50,&_LC0,local_30);
    if (iVar1 != 0) {
      uVar2 = OPENSSL_sk_num(local_30);
      iVar1 = test_int_eq("test/cipherbytes_test.c",0x51,"sk_SSL_CIPHER_num(sk)",&_LC5,uVar2,2);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/cipherbytes_test.c",0x52,&_LC4,local_28);
        if (iVar1 != 0) {
          uVar2 = OPENSSL_sk_num(local_28);
          iVar1 = test_int_eq("test/cipherbytes_test.c",0x53,"sk_SSL_CIPHER_num(scsv)",&_LC24,uVar2,
                              0);
          if (iVar1 != 0) {
            pSVar3 = (SSL_CIPHER *)OPENSSL_sk_value(local_30,0);
            pcVar4 = SSL_CIPHER_get_name(pSVar3);
            iVar1 = strcmp(pcVar4,"AES256-SHA");
            if (iVar1 == 0) {
              pSVar3 = (SSL_CIPHER *)OPENSSL_sk_value(local_30,1);
              pcVar4 = SSL_CIPHER_get_name(pSVar3);
              iVar1 = strcmp(pcVar4,"DHE-RSA-AES128-SHA");
              bVar5 = iVar1 == 0;
              goto LAB_001004c8;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_001004c8:
  OPENSSL_sk_free(local_30);
  OPENSSL_sk_free(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_empty(void)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = 0;
  local_11 = 0;
  uVar1 = SSL_bytes_to_cipher_list(s,&local_11,0,0,&local_28,&local_20);
  iVar2 = test_int_eq("test/cipherbytes_test.c",0x21,
                      "SSL_bytes_to_cipher_list(s, bytes, 0, 0, &sk, &scsv)",&_LC24,uVar1,0);
  if (iVar2 != 0) {
    iVar2 = test_ptr_null("test/cipherbytes_test.c",0x22,&_LC0,local_28);
    if (iVar2 != 0) {
      iVar2 = test_ptr_null("test/cipherbytes_test.c",0x23,&_LC4,local_20);
      bVar3 = iVar2 != 0;
      goto LAB_0010068a;
    }
  }
  bVar3 = false;
LAB_0010068a:
  OPENSSL_sk_free(local_28);
  OPENSSL_sk_free(local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  SSL_METHOD *meth;
  
  meth = (SSL_METHOD *)TLS_server_method();
  ctx = SSL_CTX_new(meth);
  iVar1 = test_ptr("test/cipherbytes_test.c",0x86,"ctx = SSL_CTX_new(TLS_server_method())",ctx);
  if (iVar1 != 0) {
    s = SSL_new(ctx);
    iVar1 = test_ptr("test/cipherbytes_test.c",0x87,"s = SSL_new(ctx)",s);
    if (iVar1 != 0) {
      add_test("test_empty",test_empty);
      add_test("test_unsupported",test_unsupported);
      add_test("test_v2",test_v2);
      add_test("test_v3",0x100000);
      return 1;
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  SSL_free(s);
  SSL_CTX_free(ctx);
  return;
}



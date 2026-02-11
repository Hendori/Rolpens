
undefined8 cookie_gen(undefined8 param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    *(char *)(param_2 + lVar2) = (char)lVar2;
    lVar1 = lVar2 + 1;
    lVar2 = lVar2 + 2;
    *(char *)(param_2 + lVar1) = (char)lVar1;
  } while (lVar2 != 0x14);
  *param_3 = 0x14;
  return 1;
}



int dtls_listen_test(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  void *ptr;
  SSL *ssl;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  BIO *bp_00;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  meth = (SSL_METHOD *)DTLS_server_method();
  ctx = SSL_CTX_new(meth);
  iVar1 = test_ptr("test/dtlsv1listentest.c",0x12d,"ctx = SSL_CTX_new(DTLS_server_method())",ctx);
  if (iVar1 == 0) {
    iVar1 = 0;
    ptr = (void *)0x0;
    bp_00 = (BIO *)0x0;
    ssl = (SSL *)0x0;
    goto LAB_00100094;
  }
  ptr = (void *)BIO_ADDR_new();
  iVar1 = test_ptr("test/dtlsv1listentest.c",0x12e,"peer = BIO_ADDR_new()",ptr);
  if (iVar1 == 0) {
    bp_00 = (BIO *)0x0;
    ssl = (SSL *)0x0;
    iVar1 = 0;
    goto LAB_00100094;
  }
  bp_00 = (BIO *)0x0;
  SSL_CTX_set_cookie_generate_cb(ctx,cookie_gen);
  SSL_CTX_set_cookie_verify_cb(ctx,cookie_verify);
  ssl = SSL_new(ctx);
  iVar1 = test_ptr("test/dtlsv1listentest.c",0x134,"ssl = SSL_new(ctx)",ssl);
  if (iVar1 == 0) goto LAB_00100094;
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/dtlsv1listentest.c",0x135,"outbio = BIO_new(BIO_s_mem())",bp);
  if (iVar1 == 0) goto LAB_00100094;
  SSL_set0_wbio(ssl,bp);
  lVar3 = (long)param_1 * 0x10;
  bp_00 = BIO_new_mem_buf(*(void **)(testpackets + lVar3),*(int *)(testpackets + lVar3 + 8));
  iVar1 = test_ptr("test/dtlsv1listentest.c",0x13a,
                   "inbio = BIO_new_mem_buf((char *)tp->in, tp->inlen)");
  if (iVar1 == 0) goto LAB_001001e8;
  BIO_ctrl(bp_00,0x82,-1,(void *)0x0);
  SSL_set0_rbio(ssl,bp_00);
  uVar2 = DTLSv1_listen(ssl,ptr);
  iVar1 = test_int_ge("test/dtlsv1listentest.c",0x140,"ret = DTLSv1_listen(ssl, peer)",&_LC6,uVar2,0
                     );
  if (iVar1 == 0) goto LAB_00100094;
  lVar4 = BIO_ctrl(bp,3,0,&local_48);
  if (*(int *)(testpackets + lVar3 + 0xc) == 1) {
    iVar1 = test_int_eq("test/dtlsv1listentest.c",0x145,&_LC8,&_LC6,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/dtlsv1listentest.c",0x146,&_LC10,"verify",local_48,lVar4,verify,0x30
                         );
      goto joined_r0x00100357;
    }
  }
  else if (lVar4 == 0) {
    iVar1 = test_true("test/dtlsv1listentest.c",0x149,
                      "(ret == 0 && tp->outtype == DROP) || (ret == 1 && tp->outtype == GOOD)");
joined_r0x00100357:
    if (iVar1 != 0) {
      iVar1 = 1;
      bp_00 = (BIO *)0x0;
      BIO_ctrl(bp,1,0,(void *)0x0);
      SSL_set0_rbio(ssl,0);
      goto LAB_00100094;
    }
  }
  else {
    test_info("test/dtlsv1listentest.c",0x14d,"Test %d: unexpected data output",param_1);
  }
LAB_001001e8:
  iVar1 = 0;
LAB_00100094:
  SSL_free(ssl);
  SSL_CTX_free(ctx);
  BIO_free(bp_00);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 cookie_verify(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 0x14) {
    lVar1 = 0;
    while ((uint)*(byte *)(param_2 + lVar1) == (uint)lVar1) {
      lVar1 = lVar1 + 1;
      if (lVar1 == 0x14) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 setup_tests(void)

{
  add_all_tests("dtls_listen_test",dtls_listen_test,9,1);
  return 1;
}



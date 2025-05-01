
time_t time(time_t *__timer)

{
  if (__timer != (time_t *)0x0) {
    *__timer = 0x58910178;
  }
  return 0x58910178;
}



undefined8 FuzzerInitialize(void)

{
  stack_st_SSL_COMP *psVar1;
  
  FuzzerSetRand();
  OPENSSL_init_crypto(0x102,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  SSL_get_ex_data_X509_STORE_CTX_idx();
  psVar1 = SSL_COMP_get_compression_methods();
  if (psVar1 != (stack_st_SSL_COMP *)0x0) {
    OPENSSL_sk_sort(psVar1);
  }
  return 1;
}



undefined8 FuzzerTestOneInput(void *param_1,long param_2)

{
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  long lVar2;
  BIO_METHOD *pBVar3;
  BIO *a;
  BIO *wbio;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_001000ab;
  meth = (SSL_METHOD *)TLS_method();
  ctx = SSL_CTX_new(meth);
  if ((ctx == (SSL_CTX *)0x0) || (ssl = SSL_new(ctx), ssl == (SSL *)0x0)) {
    ssl = (SSL *)0x0;
  }
  else {
    lVar2 = SSL_ctrl(ssl,0x7b,0,(void *)0x0);
    if (lVar2 != 1) goto LAB_0010024f;
    iVar1 = SSL_set_cipher_list(ssl,"ALL:eNULL:@SECLEVEL=0");
    if (iVar1 != 1) {
      OPENSSL_die("assertion failed: SSL_set_cipher_list(client, \"ALL:eNULL:@SECLEVEL=0\") == 1",
                  "fuzz/client.c",0x4b);
LAB_00100237:
      OPENSSL_die("assertion failed: (size_t)BIO_write(in, buf, len) == len","fuzz/client.c",0x57);
LAB_0010024f:
      OPENSSL_die("assertion failed: SSL_set_min_proto_version(client, 0) == 1","fuzz/client.c",0x4a
                 );
      uVar4 = FuzzerClearRand();
      return uVar4;
    }
    SSL_ctrl(ssl,0x37,0,"localhost");
    pBVar3 = BIO_s_mem();
    a = BIO_new(pBVar3);
    if (a != (BIO *)0x0) {
      pBVar3 = BIO_s_mem();
      wbio = BIO_new(pBVar3);
      if (wbio == (BIO *)0x0) {
        BIO_free(a);
      }
      else {
        SSL_set_bio(ssl,a,wbio);
        SSL_set_connect_state(ssl);
        iVar1 = BIO_write(a,param_1,(int)param_2);
        if (iVar1 != param_2) goto LAB_00100237;
        iVar1 = SSL_do_handshake(ssl);
        if (iVar1 == 1) {
          do {
            iVar1 = SSL_read(ssl,auStack_438,0x400);
          } while (0 < iVar1);
        }
      }
    }
  }
  SSL_free(ssl);
  ERR_clear_error();
  SSL_CTX_free(ctx);
LAB_001000ab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}



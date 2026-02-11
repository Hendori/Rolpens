
X509 * load_cert_pem(void *param_1,undefined8 param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar2;
  X509 *pXVar3;
  long in_FS_OFFSET;
  X509 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (X509 *)0x0;
  iVar1 = test_ptr("test/testutil/load.c",0x17,&_LC0,param_1);
  if (iVar1 != 0) {
    type = BIO_s_file();
    bp = BIO_new(type);
    iVar1 = test_ptr("test/testutil/load.c",0x17,"bio = BIO_new(BIO_s_file())",bp);
    if (iVar1 != 0) {
      uVar2 = BIO_ctrl(bp,0x6c,3,param_1);
      iVar1 = test_int_gt("test/testutil/load.c",0x19,"BIO_read_filename(bio, file)",&_LC3,
                          uVar2 & 0xffffffff,0);
      if (iVar1 != 0) {
        local_38 = (X509 *)X509_new_ex(param_2,0);
        iVar1 = test_ptr("test/testutil/load.c",0x1a,"cert = X509_new_ex(libctx, NULL)");
        if (iVar1 != 0) {
          local_38 = PEM_read_bio_X509(bp,&local_38,(undefined1 *)0x0,(void *)0x0);
          test_ptr("test/testutil/load.c",0x1b,"cert = PEM_read_bio_X509(bio, &cert, NULL, NULL)",
                   local_38);
        }
      }
      BIO_free(bp);
      pXVar3 = local_38;
      goto LAB_001000ca;
    }
  }
  pXVar3 = (X509 *)0x0;
LAB_001000ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long load_certs_pem(char *param_1)

{
  int iVar1;
  BIO *a;
  long lVar2;
  X509 *pXVar3;
  
  iVar1 = test_ptr("test/testutil/load.c",0x27,&_LC0);
  if ((iVar1 != 0) && (a = BIO_new_file(param_1,"r"), a != (BIO *)0x0)) {
    lVar2 = OPENSSL_sk_new_null();
    if (lVar2 == 0) {
      BIO_free(a);
      return 0;
    }
    ERR_set_mark();
    do {
      pXVar3 = PEM_read_bio_X509(a,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
      if (pXVar3 == (X509 *)0x0) {
        ERR_pop_to_mark();
        BIO_free(a);
        return lVar2;
      }
      iVar1 = OPENSSL_sk_push(lVar2);
    } while (iVar1 != 0);
    OSSL_STACK_OF_X509_free(lVar2);
    BIO_free(a);
  }
  return 0;
}



EVP_PKEY * load_pkey_pem(void *param_1,undefined8 param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar2;
  EVP_PKEY *pkey;
  ulong uVar3;
  EVP_PKEY *pEVar4;
  
  iVar1 = test_ptr("test/testutil/load.c",0x4a,&_LC0,param_1);
  if (iVar1 != 0) {
    type = BIO_s_file();
    bp = BIO_new(type);
    iVar1 = test_ptr("test/testutil/load.c",0x4a,"bio = BIO_new(BIO_s_file())",bp);
    if (iVar1 != 0) {
      uVar2 = BIO_ctrl(bp,0x6c,3,param_1);
      iVar1 = test_int_gt("test/testutil/load.c",0x4c,"BIO_read_filename(bio, file)",&_LC3,
                          uVar2 & 0xffffffff,0);
      if (iVar1 == 0) {
        pEVar4 = (EVP_PKEY *)0x0;
      }
      else {
        uVar2 = ERR_peek_error();
        pkey = (EVP_PKEY *)PEM_read_bio_PrivateKey_ex(bp,0,0,0,param_2,0);
        iVar1 = test_ptr("test/testutil/load.c",0x4f,
                         "key = PEM_read_bio_PrivateKey_ex(bio, NULL, NULL, NULL, libctx, NULL)",
                         pkey);
        pEVar4 = pkey;
        if (iVar1 != 0) {
          uVar3 = ERR_peek_error();
          if (uVar3 != uVar2) {
            test_info("test/testutil/load.c",0x52,"Spurious error from reading PEM");
            pEVar4 = (EVP_PKEY *)0x0;
            EVP_PKEY_free(pkey);
          }
        }
      }
      BIO_free(bp);
      return pEVar4;
    }
  }
  return (EVP_PKEY *)0x0;
}



X509_REQ * load_csr_der(char *param_1,undefined8 param_2)

{
  int iVar1;
  BIO *bp;
  X509_REQ *pXVar2;
  long in_FS_OFFSET;
  X509_REQ *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_REQ *)0x0;
  iVar1 = test_ptr("test/testutil/load.c",0x61,&_LC0,param_1);
  if (iVar1 != 0) {
    bp = BIO_new_file(param_1,"rb");
    iVar1 = test_ptr("test/testutil/load.c",0x61,"bio = BIO_new_file(file, \"rb\")",bp);
    if (iVar1 != 0) {
      local_28 = (X509_REQ *)X509_REQ_new_ex(param_2,0);
      iVar1 = test_ptr("test/testutil/load.c",0x65,&_LC12,local_28);
      if (iVar1 != 0) {
        pXVar2 = d2i_X509_REQ_bio(bp,&local_28);
        test_ptr("test/testutil/load.c",0x66,"d2i_X509_REQ_bio(bio, &csr)",pXVar2);
      }
      BIO_free(bp);
      pXVar2 = local_28;
      goto LAB_001003f2;
    }
  }
  pXVar2 = (X509_REQ *)0x0;
LAB_001003f2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



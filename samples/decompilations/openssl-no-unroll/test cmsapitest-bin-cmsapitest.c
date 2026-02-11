
bool test_d2i_CMS_bio_NULL(void)

{
  int iVar1;
  BIO *bp;
  CMS_ContentInfo *cms;
  BIO *a;
  ulong uVar2;
  
  cms = (CMS_ContentInfo *)0x0;
  bp = BIO_new_mem_buf(cms_data_0,0x5c9);
  iVar1 = test_ptr("test/cmsapitest.c",0x132,"bio = BIO_new_mem_buf(cms_data, sizeof(cms_data))",bp)
  ;
  if (iVar1 != 0) {
    cms = d2i_CMS_bio(bp,(CMS_ContentInfo **)0x0);
    iVar1 = test_ptr("test/cmsapitest.c",0x133,"cms = d2i_CMS_bio(bio, NULL)");
    if (iVar1 != 0) {
      iVar1 = CMS_verify(cms,(stack_st_X509 *)0x0,(X509_STORE *)0x0,(BIO *)0x0,(BIO *)0x0,0x20);
      iVar1 = test_true("test/cmsapitest.c",0x134,"CMS_verify(cms, NULL, NULL, NULL, NULL, flags)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        a = (BIO *)CMS_SignedData_verify(*(undefined8 *)(cms + 8),0,0,0,0,0,0x20,0,0);
        iVar1 = test_ptr("test/cmsapitest.c",0x135,
                         "content = CMS_SignedData_verify(cms->d.signedData, NULL, NULL, NULL, NULL, NULL, flags, NULL, NULL)"
                         ,a);
        BIO_free(a);
        CMS_ContentInfo_free(cms);
        BIO_free(bp);
        if (iVar1 == 0) {
          return false;
        }
        uVar2 = ERR_peek_error();
        iVar1 = test_int_eq("test/cmsapitest.c",0x13b,"ERR_peek_error()",&_LC5,uVar2 & 0xffffffff,0)
        ;
        return iVar1 != 0;
      }
    }
  }
  BIO_free((BIO *)0x0);
  CMS_ContentInfo_free(cms);
  BIO_free(bp);
  return false;
}



bool test_CMS_add1_cert(void)

{
  int iVar1;
  CMS_ContentInfo *cms;
  CMS_SignerInfo *pCVar2;
  bool bVar3;
  
  cms = CMS_ContentInfo_new();
  iVar1 = test_ptr("test/cmsapitest.c",0x60,"cms = CMS_ContentInfo_new()");
  if (iVar1 != 0) {
    pCVar2 = CMS_add1_signer(cms,cert,privkey,(EVP_MD *)0x0,0);
    iVar1 = test_ptr("test/cmsapitest.c",0x61,"CMS_add1_signer(cms, cert, privkey, NULL, 0)",pCVar2)
    ;
    if (iVar1 != 0) {
      iVar1 = CMS_add1_cert(cms,cert);
      iVar1 = test_true("test/cmsapitest.c",0x62,"CMS_add1_cert(cms, cert)",iVar1 != 0);
      bVar3 = iVar1 != 0;
      goto LAB_001001a6;
    }
  }
  bVar3 = false;
LAB_001001a6:
  CMS_ContentInfo_free(cms);
  return bVar3;
}



bool test_encrypt_decrypt(EVP_CIPHER *param_1)

{
  int iVar1;
  undefined4 uVar2;
  stack_st_X509 *certs;
  BIO *in;
  BIO_METHOD *type;
  BIO *out;
  CMS_ContentInfo *cms;
  BIO *a;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  certs = (stack_st_X509 *)OPENSSL_sk_new_null();
  in = BIO_new_mem_buf("Hello world",0xb);
  type = BIO_s_mem();
  out = BIO_new(type);
  iVar1 = test_ptr("test/cmsapitest.c",0x23,"certstack",certs);
  if (iVar1 == 0) {
LAB_001002a2:
    a = (BIO *)0x0;
    cms = (CMS_ContentInfo *)0x0;
LAB_001002a8:
    BIO_free(a);
    OPENSSL_sk_free(certs);
    BIO_free(in);
    BIO_free(out);
    CMS_ContentInfo_free(cms);
  }
  else {
    iVar1 = test_ptr("test/cmsapitest.c",0x23,"msgbio",in);
    if (iVar1 == 0) goto LAB_001002a2;
    iVar1 = test_ptr("test/cmsapitest.c",0x23,"outmsgbio",out);
    if (iVar1 == 0) goto LAB_001002a2;
    uVar2 = OPENSSL_sk_push(certs,cert);
    iVar1 = test_int_gt("test/cmsapitest.c",0x26,"sk_X509_push(certstack, cert)",&_LC5,uVar2,0);
    if (iVar1 == 0) goto LAB_001002a2;
    cms = CMS_encrypt(certs,in,param_1,1);
    iVar1 = test_ptr("test/cmsapitest.c",0x2a,"content");
    if (iVar1 == 0) {
LAB_001003a3:
      a = (BIO *)0x0;
      goto LAB_001002a8;
    }
    iVar1 = CMS_decrypt(cms,privkey,cert,(BIO *)0x0,out,1);
    iVar1 = test_true("test/cmsapitest.c",0x2d,
                      "CMS_decrypt(content, privkey, cert, NULL, outmsgbio, CMS_TEXT)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001003a3;
    a = (BIO *)CMS_EnvelopedData_decrypt(*(undefined8 *)(cms + 8),0,privkey,cert,0,1,0,0);
    iVar1 = test_ptr("test/cmsapitest.c",0x31,
                     "contentbio = CMS_EnvelopedData_decrypt(content->d.envelopedData, NULL, privkey, cert, NULL, CMS_TEXT, NULL, NULL)"
                     ,a);
    if (iVar1 == 0) goto LAB_001002a8;
    iVar1 = BIO_gets(out,local_98,0x50);
    iVar1 = test_int_eq("test/cmsapitest.c",0x38,"BIO_gets(outmsgbio, buf, sizeof(buf))",
                        "strlen(msg)",iVar1,0xb);
    if (iVar1 == 0) goto LAB_001002a8;
    iVar1 = strcmp(local_98,"Hello world");
    iVar1 = test_int_eq("test/cmsapitest.c",0x39,"strcmp(buf, msg)",&_LC5,iVar1,0);
    BIO_free(a);
    OPENSSL_sk_free(certs);
    BIO_free(in);
    BIO_free(out);
    CMS_ContentInfo_free(cms);
    if (iVar1 != 0) {
      uVar3 = ERR_peek_error();
      iVar1 = test_int_eq("test/cmsapitest.c",0x44,"ERR_peek_error()",&_LC5,uVar3 & 0xffffffff,0);
      bVar4 = iVar1 != 0;
      goto LAB_001002d8;
    }
  }
  bVar4 = false;
LAB_001002d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_encrypt_decrypt_aes_256_gcm(void)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_256_gcm();
  test_encrypt_decrypt(pEVar1);
  return;
}



void test_encrypt_decrypt_aes_192_gcm(void)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_192_gcm();
  test_encrypt_decrypt(pEVar1);
  return;
}



void test_encrypt_decrypt_aes_128_gcm(void)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_128_gcm();
  test_encrypt_decrypt(pEVar1);
  return;
}



void test_encrypt_decrypt_aes_cbc(void)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_128_cbc();
  test_encrypt_decrypt(pEVar1);
  return;
}



uint test_d2i_CMS_decode(int param_1)

{
  int iVar1;
  uint uVar2;
  BIO *bp;
  ulong uVar3;
  uchar *ptr;
  CMS_ContentInfo *a;
  uchar *addr;
  long len;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  bp = BIO_new_file(derin,"r");
  iVar1 = test_ptr("test/cmsapitest.c",0x167,"bio = BIO_new_file(derin, \"r\")",bp);
  if (iVar1 == 0) {
    uVar2 = 0;
    ptr = (uchar *)0x0;
    a = (CMS_ContentInfo *)0x0;
    goto LAB_0010065d;
  }
  if (param_1 == 0) {
    ptr = (uchar *)0x0;
    a = d2i_CMS_bio(bp,(CMS_ContentInfo **)0x0);
    iVar1 = test_ptr("test/cmsapitest.c",0x16c,"cms = d2i_CMS_bio(bio, NULL)",a);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_0010065d;
    }
  }
  else if (param_1 == 1) {
    len = 0;
    addr = (uchar *)0x0;
    do {
      ptr = (uchar *)CRYPTO_realloc(addr,(int)len + 0x100,"test/cmsapitest.c",0x147);
      if (((ptr == (uchar *)0x0) || (iVar1 = BIO_read(bp,ptr + len,0x100), addr = ptr, iVar1 < 0))
         || (0x7fffffffffffffff - (long)iVar1 < len)) {
        len = 0;
        CRYPTO_free(addr);
        ptr = (uchar *)0x0;
        break;
      }
      len = len + iVar1;
    } while (0xff < iVar1);
    a = (CMS_ContentInfo *)0x0;
    uVar2 = test_ptr("test/cmsapitest.c",0x170,"buf = read_all(bio, &buf_len)",ptr);
    if (uVar2 == 0) goto LAB_0010065d;
    local_48 = ptr;
    a = d2i_CMS_ContentInfo((CMS_ContentInfo **)0x0,&local_48,len);
    iVar1 = test_ptr("test/cmsapitest.c",0x173,"cms = d2i_CMS_ContentInfo(NULL, &tmp, buf_len)",a);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_0010065d;
    }
  }
  else {
    ptr = (uchar *)0x0;
    a = (CMS_ContentInfo *)0x0;
  }
  uVar3 = ERR_peek_error();
  iVar1 = test_int_eq("test/cmsapitest.c",0x178,"ERR_peek_error()",&_LC5,uVar3 & 0xffffffff,0);
  uVar2 = (uint)(iVar1 != 0);
LAB_0010065d:
  CMS_ContentInfo_free(a);
  BIO_free(bp);
  CRYPTO_free(ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  char *filename;
  char *filename_00;
  BIO *pBVar2;
  X509 *pXVar3;
  EVP_PKEY *pEVar4;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/cmsapitest.c",0x18c,"Error parsing test options\n");
  }
  else {
    filename = (char *)test_get_argument(0);
    iVar1 = test_ptr("test/cmsapitest.c",400,"certin = test_get_argument(0)",filename);
    if (iVar1 != 0) {
      filename_00 = (char *)test_get_argument(1);
      iVar1 = test_ptr("test/cmsapitest.c",0x191,"privkeyin = test_get_argument(1)",filename_00);
      if (iVar1 != 0) {
        derin = test_get_argument(2);
        iVar1 = test_ptr("test/cmsapitest.c",0x192,"derin = test_get_argument(2)",derin);
        if (iVar1 != 0) {
          pBVar2 = BIO_new_file(filename,"r");
          iVar1 = test_ptr("test/cmsapitest.c",0x196,"certbio");
          if (iVar1 != 0) {
            pXVar3 = PEM_read_bio_X509(pBVar2,&cert,(undefined1 *)0x0,(void *)0x0);
            iVar1 = test_true("test/cmsapitest.c",0x198,
                              "PEM_read_bio_X509(certbio, &cert, NULL, NULL)",pXVar3 != (X509 *)0x0)
            ;
            if (iVar1 == 0) {
              BIO_free(pBVar2);
            }
            else {
              BIO_free(pBVar2);
              pBVar2 = BIO_new_file(filename_00,"r");
              iVar1 = test_ptr("test/cmsapitest.c",0x19f,"privkeybio");
              if (iVar1 == 0) {
                X509_free(cert);
                cert = (X509 *)0x0;
              }
              else {
                pEVar4 = PEM_read_bio_PrivateKey
                                   (pBVar2,(EVP_PKEY **)&privkey,(undefined1 *)0x0,(void *)0x0);
                iVar1 = test_true("test/cmsapitest.c",0x1a4,
                                  "PEM_read_bio_PrivateKey(privkeybio, &privkey, NULL, NULL)",
                                  pEVar4 != (EVP_PKEY *)0x0);
                if (iVar1 != 0) {
                  BIO_free(pBVar2);
                  add_test("test_encrypt_decrypt_aes_cbc",test_encrypt_decrypt_aes_cbc);
                  add_test("test_encrypt_decrypt_aes_128_gcm",test_encrypt_decrypt_aes_128_gcm);
                  add_test("test_encrypt_decrypt_aes_192_gcm",test_encrypt_decrypt_aes_192_gcm);
                  add_test("test_encrypt_decrypt_aes_256_gcm",test_encrypt_decrypt_aes_256_gcm);
                  add_test("test_CMS_add1_cert",test_CMS_add1_cert);
                  add_test("test_d2i_CMS_bio_NULL",0x100000);
                  add_all_tests("test_d2i_CMS_decode",test_d2i_CMS_decode,2,1);
                  return 1;
                }
                BIO_free(pBVar2);
                X509_free(cert);
                cert = (X509 *)0x0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  X509_free(cert);
  EVP_PKEY_free(privkey);
  return;
}



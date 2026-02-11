
uint test_protected_params(void)

{
  uint uVar1;
  int iVar2;
  BIO *bp;
  EVP_PKEY *pkey;
  
  bp = BIO_new_mem_buf("-----BEGIN RSA PRIVATE KEY-----\nProc-Type: 4,ENCRYPTED\nDEK-Info: AES-256-CBC,4A44448ED28992710556549B35100CEA\n\nXw3INxKeH+rUUF57mjATpvj6zknVhedwrlRmRvnwlLv5wqIy5Ae4UVLPh7SUswfC\n-----END RSA PRIVATE KEY-----\n"
                       ,0xce);
  uVar1 = test_ptr("test/pemtest.c",0x8e,&_LC1,bp);
  if (uVar1 != 0) {
    pkey = PEM_read_bio_Parameters(bp,(EVP_PKEY **)0x0);
    iVar2 = test_ptr_null("test/pemtest.c",0x93,&_LC3,pkey);
    uVar1 = (uint)(iVar2 != 0);
    EVP_PKEY_free(pkey);
    BIO_free(bp);
  }
  return uVar1;
}



uint test_empty_payload(void)

{
  uint uVar1;
  int iVar2;
  BIO *a;
  long in_FS_OFFSET;
  void *local_40;
  void *local_38;
  void *local_30;
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  local_30 = (void *)0x0;
  a = BIO_new_mem_buf("-----BEGIN CERTIFICATE-----\n-\n-----END CERTIFICATE-----",0x37);
  uVar1 = test_ptr("test/pemtest.c",0x70,&_LC1,a);
  if (uVar1 != 0) {
    iVar2 = PEM_read_bio_ex(a,&local_40,&local_38,&local_30,local_28,0);
    iVar2 = test_false("test/pemtest.c",0x74,"PEM_read_bio_ex(b, &name, &header, &data, &len, 0)",
                       iVar2 != 0);
    uVar1 = (uint)(iVar2 != 0);
    CRYPTO_free(local_40);
    CRYPTO_free(local_38);
    CRYPTO_free(local_30);
    BIO_free(a);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_cert_key_cert(void)

{
  EVP_PKEY *pkey;
  undefined8 uVar1;
  
  pkey = (EVP_PKEY *)load_pkey_pem(pemfile,0);
  uVar1 = test_ptr("test/pemtest.c",0x5c,"key = load_pkey_pem(pemfile, NULL)",pkey);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  EVP_PKEY_free(pkey);
  return 1;
}



undefined8 test_invalid(void)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bio;
  undefined8 uVar2;
  long in_FS_OFFSET;
  void *local_40;
  void *local_38;
  void *local_30;
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_mem();
  bio = BIO_new(type);
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  local_30 = (void *)0x0;
  iVar1 = test_ptr("test/pemtest.c",0x47,&_LC1,bio);
  if (iVar1 != 0) {
    iVar1 = BIO_printf(bio,"-----BEGIN %s-----\n","PEMTESTDATA");
    iVar1 = test_true("test/pemtest.c",0x48,"BIO_printf(b, \"-----BEGIN %s-----\\n\", pemtype)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BIO_printf(bio,"%c%s\n",9,"aGVsbG8gd29ybGQ=");
      iVar1 = test_true("test/pemtest.c",0x49,"BIO_printf(b, \"%c%s\\n\", \'\\t\', encoded)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BIO_printf(bio,"-----END %s-----\n","PEMTESTDATA");
        iVar1 = test_true("test/pemtest.c",0x4a,"BIO_printf(b, \"-----END %s-----\\n\", pemtype)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = PEM_read_bio_ex(bio,&local_40,&local_38,&local_30,local_28,4);
          iVar1 = test_true("test/pemtest.c",0x4c,
                            "PEM_read_bio_ex(b, &name, &header, &data, &len, PEM_FLAG_ONLY_B64)",
                            iVar1 != 0);
          if (iVar1 == 0) {
            BIO_free(bio);
            CRYPTO_free(local_40);
            CRYPTO_free(local_38);
            CRYPTO_free(local_30);
            uVar2 = 1;
            goto LAB_0010029d;
          }
        }
      }
    }
  }
  BIO_free(bio);
  uVar2 = 0;
LAB_0010029d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_b64(int param_1)

{
  char *__s;
  undefined8 uVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *bio;
  size_t sVar3;
  long in_FS_OFFSET;
  bool bVar4;
  void *local_50;
  void *local_48;
  void *local_40;
  undefined4 local_38 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_mem();
  bio = BIO_new(type);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = (void *)0x0;
  __s = *(char **)(b64_pem_data + (long)param_1 * 0x10);
  uVar1 = *(undefined8 *)(b64_pem_data + (long)param_1 * 0x10 + 8);
  iVar2 = test_ptr("test/pemtest.c",0x2b,&_LC1,bio);
  if (iVar2 != 0) {
    iVar2 = BIO_printf(bio,"-----BEGIN %s-----\n","PEMTESTDATA");
    iVar2 = test_true("test/pemtest.c",0x2c,"BIO_printf(b, \"-----BEGIN %s-----\\n\", pemtype)",
                      iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = BIO_printf(bio,"%s\n",uVar1);
      iVar2 = test_true("test/pemtest.c",0x2d,"BIO_printf(b, \"%s\\n\", encoded)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = BIO_printf(bio,"-----END %s-----\n","PEMTESTDATA");
        iVar2 = test_true("test/pemtest.c",0x2e,"BIO_printf(b, \"-----END %s-----\\n\", pemtype)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = PEM_read_bio_ex(bio,&local_50,&local_48,&local_40,local_38,4);
          iVar2 = test_true("test/pemtest.c",0x2f,
                            "PEM_read_bio_ex(b, &name, &header, &data, &len, PEM_FLAG_ONLY_B64)",
                            iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = memcmp("PEMTESTDATA",local_50,0xb);
            iVar2 = test_int_eq("test/pemtest.c",0x32,"memcmp(pemtype, name, strlen(pemtype))",
                                &_LC18,iVar2,0);
            if (iVar2 != 0) {
              sVar3 = strlen(__s);
              iVar2 = test_int_eq("test/pemtest.c",0x33,&_LC21,"strlen(raw)",local_38[0],
                                  sVar3 & 0xffffffff);
              if (iVar2 != 0) {
                sVar3 = strlen(__s);
                iVar2 = memcmp(local_40,__s,sVar3);
                iVar2 = test_int_eq("test/pemtest.c",0x34,"memcmp(data, raw, strlen(raw))",&_LC18,
                                    iVar2,0);
                bVar4 = iVar2 != 0;
                goto LAB_00100458;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00100458:
  BIO_free(bio);
  CRYPTO_free(local_50);
  CRYPTO_free(local_48);
  CRYPTO_free(local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  undefined8 uVar1;
  
  pemfile = test_get_argument(0);
  uVar1 = test_ptr("test/pemtest.c",0x9f,"pemfile = test_get_argument(0)",pemfile);
  if ((int)uVar1 != 0) {
    add_all_tests("test_b64",test_b64,2,1);
    add_test("test_invalid",test_invalid);
    add_test("test_cert_key_cert",test_cert_key_cert);
    add_test("test_empty_payload",test_empty_payload);
    add_test("test_protected_params",0x100000);
    uVar1 = 1;
  }
  return uVar1;
}



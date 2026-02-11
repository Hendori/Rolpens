
undefined8 callback_original_pw(undefined8 *param_1)

{
  *param_1 = 0x7361705f6b616577;
  *(undefined8 *)((long)param_1 + 5) = 0x64726f7773736170;
  return 0xd;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int callback_copy_password(undefined1 (*param_1) [16],int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = ram0x00101068;
  uVar3 = s_aaaaaaaaaaaaaaa_00101059._7_8_;
  uVar2 = ram0x00101058;
  uVar1 = _LC0._0_8_;
  switch(callback_test) {
  case 0:
    return -1;
  case 1:
    return 0;
  case 2:
    *(undefined8 *)*param_1 = 0x7361705f6b616577;
    *(undefined8 *)(*param_1 + 5) = 0x64726f7773736170;
    return 0xd;
  case 3:
    *param_1 = (undefined1  [16])0x0;
    return 0x10;
  case 4:
    param_1[1][0] = 0x61;
    *(undefined8 *)*param_1 = uVar1;
    *(undefined8 *)(*param_1 + 8) = uVar2;
    break;
  case 5:
    param_1[1][0] = 0x62;
    *(undefined8 *)*param_1 = uVar3;
    *(undefined8 *)(*param_1 + 8) = uVar4;
    break;
  case 6:
    memset(param_1,0x65,(long)param_2);
    return param_2;
  case 7:
    memset(param_1,0x65,(long)param_2);
    return 1000000;
  default:
    return -1;
  }
  return 0x11;
}



undefined8 write_callback(undefined8 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = test_ptr("test/bio_pw_callback_test.c",0x8a,"cb_data");
  if (iVar1 != 0) {
    iVar1 = test_char_eq("test/bio_pw_callback_test.c",0x8c,"cb_data->magic","cb_magic",
                         (int)*param_4,0x70);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/bio_pw_callback_test.c",0x8e,&_LC7,param_1);
      if (iVar1 != 0) {
        iVar1 = test_int_gt("test/bio_pw_callback_test.c",0x90,&_LC9,&_LC8,param_2,0);
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/bio_pw_callback_test.c",0x92,"rwflag",&_LC10,param_3,1);
          if (iVar1 != 0) {
            uVar2 = callback_copy_password(param_1,param_2);
            param_4[4] = '\x01';
            param_4[5] = '\0';
            param_4[6] = '\0';
            param_4[7] = '\0';
            return uVar2;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



undefined8 read_callback(undefined8 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = test_ptr("test/bio_pw_callback_test.c",0x74,"cb_data");
  if (iVar1 != 0) {
    iVar1 = test_char_eq("test/bio_pw_callback_test.c",0x76,"cb_data->magic","cb_magic",
                         (int)*param_4,0x70);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/bio_pw_callback_test.c",0x78,&_LC7,param_1);
      if (iVar1 != 0) {
        iVar1 = test_int_gt("test/bio_pw_callback_test.c",0x7a,&_LC9,&_LC8,param_2,0);
        if (iVar1 != 0) {
          iVar1 = test_int_eq("test/bio_pw_callback_test.c",0x7c,"rwflag",&_LC8,param_3,0);
          if (iVar1 != 0) {
            uVar2 = callback_copy_password(param_1,param_2);
            param_4[4] = '\x01';
            param_4[5] = '\0';
            param_4[6] = '\0';
            param_4[7] = '\0';
            return uVar2;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



undefined8 full_cycle_test(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  EVP_CIPHER *pEVar3;
  long lVar4;
  EVP_PKEY *pEVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  char *local_70;
  int local_5c;
  void *local_58;
  EVP_PKEY *local_50;
  char local_48 [4];
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (void *)0x0;
  local_5c = 0;
  local_50 = (EVP_PKEY *)0x0;
  callback_test = param_2;
  iVar1 = test_ptr("test/bio_pw_callback_test.c",0xa3,"enc_data",&local_58);
  if ((iVar1 == 0) ||
     (iVar1 = test_ptr("test/bio_pw_callback_test.c",0xa5,"enc_data_size",&local_5c), iVar1 == 0)) {
    BUF_MEM_free((BUF_MEM *)local_50);
    BIO_free((BIO *)0x0);
  }
  else {
    type = BIO_s_mem();
    pBVar2 = BIO_new(type);
    iVar1 = test_ptr("test/bio_pw_callback_test.c",0xa7,"bio = BIO_new(BIO_s_mem())");
    if (iVar1 != 0) {
      local_48[0] = 'p';
      local_44 = 0;
      if (param_1 == 1) {
        pEVar3 = EVP_aes_256_cbc();
        iVar1 = i2d_PKCS8PrivateKey_bio
                          (pBVar2,original_pkey,pEVar3,(char *)0x0,0,write_callback,local_48);
      }
      else {
        pEVar3 = EVP_aes_256_cbc();
        iVar1 = PEM_write_bio_PrivateKey
                          (pBVar2,original_pkey,pEVar3,(uchar *)0x0,0,write_callback,local_48);
      }
      local_70 = local_48;
      iVar1 = test_int_ne("test/bio_pw_callback_test.c",0xb5,"w_ret",&_LC8,iVar1,0);
      if (((iVar1 != 0) &&
          (iVar1 = test_char_eq("test/bio_pw_callback_test.c",0xb7,"cb_data.magic","cb_magic",
                                (int)local_48[0],0x70), iVar1 != 0)) &&
         (iVar1 = test_int_eq("test/bio_pw_callback_test.c",0xb9,"cb_data.result",&_LC10,local_44,1)
         , iVar1 != 0)) {
        lVar4 = BIO_ctrl(pBVar2,3,0,&local_58);
        local_5c = (int)lVar4;
        BIO_ctrl(pBVar2,0x73,0,&local_50);
        lVar4 = BIO_ctrl(pBVar2,9,0,(void *)0x0);
        if ((int)lVar4 != 0) {
          *(char **)&local_50->references = (char *)0x0;
          BUF_MEM_free((BUF_MEM *)local_50);
          BIO_free(pBVar2);
          local_50 = (EVP_PKEY *)0x0;
          callback_test = param_3;
          pBVar2 = BIO_new_mem_buf(local_58,local_5c);
          iVar1 = test_ptr("test/bio_pw_callback_test.c",0xd1,
                           "bio = BIO_new_mem_buf(enc_data, enc_data_size)",pBVar2);
          if (iVar1 != 0) {
            local_48[0] = 'p';
            local_44 = 0;
            if (param_1 == 1) {
              pEVar5 = d2i_PKCS8PrivateKey_bio(pBVar2,&local_50,read_callback,local_70);
            }
            else {
              pEVar5 = PEM_read_bio_PrivateKey(pBVar2,&local_50,read_callback,local_70);
            }
            if (param_4 == 1) {
              iVar1 = test_ptr("test/bio_pw_callback_test.c",0xde,"r_ret",pEVar5);
            }
            else {
              iVar1 = test_ptr_null("test/bio_pw_callback_test.c",0xe1);
            }
            if (((iVar1 != 0) &&
                (iVar1 = test_char_eq("test/bio_pw_callback_test.c",0xe4,"cb_data.magic","cb_magic",
                                      (int)local_48[0],0x70), iVar1 != 0)) &&
               (iVar1 = test_int_eq("test/bio_pw_callback_test.c",0xe6,"cb_data.result",&_LC10,
                                    local_44,1), iVar1 != 0)) {
              EVP_PKEY_free(local_50);
              uVar6 = 1;
              BIO_free(pBVar2);
              goto LAB_001003a0;
            }
          }
          EVP_PKEY_free(local_50);
          BIO_free(pBVar2);
          goto LAB_0010039e;
        }
      }
    }
    BUF_MEM_free((BUF_MEM *)local_50);
    BIO_free(pBVar2);
  }
LAB_0010039e:
  uVar6 = 0;
LAB_001003a0:
  CRYPTO_free(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_pkcs8_exceed_size(void)

{
  full_cycle_test(1,6,7,0);
  return;
}



void test_pkcs8_match_size(void)

{
  full_cycle_test(1,6,6,1);
  return;
}



void test_pkcs8_a0a_a0b(void)

{
  full_cycle_test(1,4,5,0);
  return;
}



void test_pkcs8_a0a(void)

{
  full_cycle_test(1,4,4,1);
  return;
}



void test_pkcs8_16zero(void)

{
  full_cycle_test(1,3,3,1);
  return;
}



void test_pkcs8_weak(void)

{
  full_cycle_test(1,2,2,1);
  return;
}



void test_pkcs8_zero_length(void)

{
  full_cycle_test(1,1,1,1);
  return;
}



void test_pkcs8_negative(void)

{
  full_cycle_test(1,2,0,0);
  return;
}



void test_pem_exceed_size(void)

{
  full_cycle_test(0,6,7,0);
  return;
}



void test_pem_match_size(void)

{
  full_cycle_test(0,6,6,1);
  return;
}



void test_pem_a0a_a0b(void)

{
  full_cycle_test(0,4,5,0);
  return;
}



void test_pem_a0a(void)

{
  full_cycle_test(0,4,4,1);
  return;
}



void test_pem_16zero(void)

{
  full_cycle_test(0,3,3,1);
  return;
}



void test_pem_weak(void)

{
  full_cycle_test(0,2,2,1);
  return;
}



void test_pem_zero_length(void)

{
  full_cycle_test(0,1,1,1);
  return;
}



void test_pem_negative(void)

{
  full_cycle_test(0,2,0,0);
  return;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  BIO *bp;
  EVP_PKEY *pEVar2;
  
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        bp = BIO_new_file(key_file,"r");
        iVar1 = test_ptr("test/bio_pw_callback_test.c",0x174,"bio = BIO_new_file(key_file, \"r\")");
        if (iVar1 == 0) {
          return 0;
        }
        pEVar2 = PEM_read_bio_PrivateKey
                           (bp,(EVP_PKEY **)&original_pkey,callback_original_pw,(void *)0x0);
        iVar1 = test_ptr("test/bio_pw_callback_test.c",0x176,
                         "PEM_read_bio_PrivateKey(bio, &original_pkey, callback_original_pw, NULL)",
                         pEVar2);
        if (iVar1 == 0) {
          return 0;
        }
        BIO_free(bp);
        add_test("test_pem_negative",test_pem_negative);
        add_test("test_pem_zero_length",test_pem_zero_length);
        add_test("test_pem_weak",test_pem_weak);
        add_test("test_pem_16zero",test_pem_16zero);
        add_test("test_pem_a0a",test_pem_a0a);
        add_test("test_pem_a0a_a0b",test_pem_a0a_a0b);
        add_test("test_pem_match_size",test_pem_match_size);
        add_test("test_pem_exceed_size",test_pem_exceed_size);
        add_test("test_pkcs8_negative",test_pkcs8_negative);
        add_test("test_pkcs8_zero_length",test_pkcs8_zero_length);
        add_test("test_pkcs8_weak",test_pkcs8_weak);
        add_test("test_pkcs8_16zero",test_pkcs8_16zero);
        add_test("test_pkcs8_a0a",test_pkcs8_a0a);
        add_test("test_pkcs8_a0a_a0b",test_pkcs8_a0a_a0b);
        add_test("test_pkcs8_match_size",test_pkcs8_match_size);
        add_test("test_pkcs8_exceed_size",test_pkcs8_exceed_size);
        return 1;
      }
      if (iVar1 != 1) break;
      key_file = (char *)opt_arg();
      iVar1 = opt_next();
    }
    if (5 < iVar1 - 500U) {
      return 0;
    }
  } while( true );
}



void cleanup_tests(void)

{
  EVP_PKEY_free(original_pkey);
  return;
}



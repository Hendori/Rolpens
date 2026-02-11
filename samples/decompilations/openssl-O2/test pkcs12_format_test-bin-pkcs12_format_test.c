
undefined4 test_set0_attrs(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ASN1_OBJECT *value;
  X509_ATTRIBUTE *attr;
  long in_FS_OFFSET;
  stack_st_X509_ATTRIBUTE *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = new_pkcs12_builder("attrs.p12");
  local_38 = (stack_st_X509_ATTRIBUTE *)0x0;
  start_pkcs12(lVar3);
  start_contentinfo(lVar3);
  add_certbag(lVar3,CERT1,0x1f1,ATTRS4);
  uVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar3 + 0x28));
  local_38 = (stack_st_X509_ATTRIBUTE *)PKCS12_SAFEBAG_get0_attrs(uVar4);
  value = OBJ_txt2obj("anyExtendedKeyUsage",0);
  attr = X509_ATTRIBUTE_create(0x503,6,value);
  X509at_add1_attr(&local_38,attr);
  PKCS12_SAFEBAG_set0_attrs(uVar4,local_38);
  local_38 = (stack_st_X509_ATTRIBUTE *)PKCS12_SAFEBAG_get0_attrs(uVar4);
  X509_ATTRIBUTE_free(attr);
  iVar1 = test_ptr("test/pkcs12_format_test.c",0x305,"attrs",local_38);
  if (iVar1 == 0) {
    end_pkcs12_builder(lVar3);
    uVar2 = 0;
  }
  else {
    end_contentinfo(lVar3);
    end_pkcs12(lVar3);
    start_check_pkcs12(lVar3);
    start_check_contentinfo(lVar3);
    check_certbag(lVar3,CERT1,0x1f1,ATTRS3);
    end_check_contentinfo(lVar3);
    end_check_pkcs12(lVar3);
    uVar2 = end_pkcs12_builder(lVar3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_cert_no_attrs(void)

{
  undefined8 uVar1;
  
  uVar1 = new_pkcs12_builder("1cert.p12");
  start_pkcs12(uVar1);
  start_contentinfo(uVar1);
  add_certbag(uVar1,CERT1,0x1f1,0);
  end_contentinfo(uVar1);
  end_pkcs12(uVar1);
  start_check_pkcs12(uVar1);
  start_check_contentinfo(uVar1);
  check_certbag(uVar1,CERT1,0x1f1,0);
  end_check_contentinfo(uVar1);
  end_check_pkcs12(uVar1);
  end_pkcs12_builder(uVar1);
  return;
}



void test_jdk_trusted_attr(void)

{
  undefined8 uVar1;
  
  uVar1 = new_pkcs12_builder("jdk_trusted.p12");
  start_pkcs12(uVar1);
  start_contentinfo(uVar1);
  add_certbag(uVar1,CERT1,0x1f1,ATTRS3);
  end_contentinfo(uVar1);
  end_pkcs12_with_mac(uVar1,mac_default);
  start_check_pkcs12_with_mac(uVar1,mac_default);
  start_check_contentinfo(uVar1);
  check_certbag(uVar1,CERT1,0x1f1,ATTRS3);
  end_check_contentinfo(uVar1);
  end_check_pkcs12(uVar1);
  end_pkcs12_builder(uVar1);
  return;
}



void test_cert_key_with_attrs_and_mac(void)

{
  undefined8 uVar1;
  
  uVar1 = new_pkcs12_builder("1cert1key.p12");
  start_pkcs12(uVar1);
  start_contentinfo(uVar1);
  add_certbag(uVar1,CERT1,0x1f1,ATTRS1);
  add_keybag(uVar1,KEY1,0x261,ATTRS1,enc_default);
  end_contentinfo(uVar1);
  end_pkcs12_with_mac(uVar1,mac_default);
  start_check_pkcs12_with_mac(uVar1,mac_default);
  start_check_contentinfo(uVar1);
  check_certbag(uVar1,CERT1,0x1f1,ATTRS1);
  check_keybag(uVar1,KEY1,0x261,ATTRS1,enc_default);
  end_check_contentinfo(uVar1);
  end_check_pkcs12(uVar1);
  end_pkcs12_builder(uVar1);
  return;
}



void test_single_key_with_attrs(void)

{
  undefined8 uVar1;
  
  uVar1 = new_pkcs12_builder("1keyattrs.p12");
  start_pkcs12(uVar1);
  start_contentinfo(uVar1);
  add_keybag(uVar1,KEY1,0x261,ATTRS1,enc_default);
  end_contentinfo(uVar1);
  end_pkcs12(uVar1);
  start_check_pkcs12(uVar1);
  start_check_contentinfo(uVar1);
  check_keybag(uVar1,KEY1,0x261,ATTRS1,enc_default);
  end_check_contentinfo(uVar1);
  end_check_pkcs12(uVar1);
  end_pkcs12_builder(uVar1);
  return;
}



void test_cert_key_encrypted_content(void)

{
  undefined8 uVar1;
  
  uVar1 = new_pkcs12_builder("1cert1key_enc.p12");
  start_pkcs12(uVar1);
  start_contentinfo(uVar1);
  add_certbag(uVar1,CERT1,0x1f1,ATTRS1);
  add_keybag(uVar1,KEY1,0x261,ATTRS1,enc_default);
  end_contentinfo_encrypted(uVar1,enc_default);
  end_pkcs12_with_mac(uVar1,mac_default);
  start_check_pkcs12_with_mac(uVar1,mac_default);
  start_check_contentinfo_encrypted(uVar1,enc_default);
  check_certbag(uVar1,CERT1,0x1f1,ATTRS1);
  check_keybag(uVar1,KEY1,0x261,ATTRS1,enc_default);
  end_check_contentinfo(uVar1);
  end_check_pkcs12(uVar1);
  end_pkcs12_builder(uVar1);
  return;
}



void test_single_cert_mac(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack_78 [88];
  long local_20;
  
  uVar1 = param_1[4];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = OBJ_nid2sn(*param_1);
  BIO_snprintf(acStack_78,0x50,"1cert_mac-%s_iter-%d.p12",pcVar2,(ulong)uVar1);
  uVar3 = new_pkcs12_builder(acStack_78);
  start_pkcs12(uVar3);
  start_contentinfo(uVar3);
  add_certbag(uVar3,CERT1,0x1f1,0);
  end_contentinfo(uVar3);
  end_pkcs12_with_mac(uVar3,param_1);
  start_check_pkcs12_with_mac(uVar3,param_1);
  start_check_contentinfo(uVar3);
  check_certbag(uVar3,CERT1,0x1f1,0);
  end_check_contentinfo(uVar3);
  end_check_pkcs12(uVar3);
  end_pkcs12_builder(uVar3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_cert_mac_iter(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  char *local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = 0x40;
  local_20 = "Password1";
  local_18 = *(undefined4 *)((long)&iters + (long)param_1 * 4);
  test_single_cert_mac(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_cert_mac_pass(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = 0x40;
  local_20 = *(undefined8 *)(passwords + (long)param_1 * 8);
  local_18 = 1000;
  test_single_cert_mac(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_cert_mac_alg(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  char *local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 1000;
  local_28[0] = *(undefined4 *)(mac_nids + (long)param_1 * 4);
  local_20 = "Password1";
  test_single_cert_mac(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_key(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack_78 [88];
  long local_20;
  
  uVar1 = param_1[4];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = OBJ_nid2sn(*param_1);
  BIO_snprintf(acStack_78,0x50,"1key_ciph-%s_iter-%d.p12",pcVar2,(ulong)uVar1);
  uVar3 = new_pkcs12_builder(acStack_78);
  start_pkcs12(uVar3);
  start_contentinfo(uVar3);
  add_keybag(uVar3,KEY1,0x261,0,param_1);
  end_contentinfo(uVar3);
  end_pkcs12(uVar3);
  start_check_pkcs12(uVar3);
  start_check_contentinfo(uVar3);
  check_keybag(uVar3,KEY1,0x261,0,param_1);
  end_check_contentinfo(uVar3);
  end_check_pkcs12(uVar3);
  end_pkcs12_builder(uVar3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_key_enc_iter(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  char *local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = 0x92;
  local_20 = "Password1";
  local_18 = *(undefined4 *)((long)&iters + (long)param_1 * 4);
  test_single_key(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_key_enc_pass(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = 0x92;
  local_20 = *(undefined8 *)(passwords + (long)param_1 * 8);
  local_18 = 1000;
  test_single_key(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_single_key_enc_alg(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  char *local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (lgcyprov == 0) {
    local_28[0] = *(undefined4 *)(enc_nids_no_legacy + (long)param_1 * 4);
  }
  else {
    local_28[0] = *(undefined4 *)(enc_nids_all + (long)param_1 * 4);
  }
  local_20 = "Password1";
  local_18 = 1000;
  test_single_key(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint pkcs12_recreate_test(void)

{
  int iVar1;
  uint uVar2;
  X509 *cert;
  EVP_PKEY *pkey;
  PKCS12 *p12;
  ulong uVar3;
  BIO_METHOD *type;
  BIO *bp;
  PKCS12 *a;
  long in_FS_OFFSET;
  X509 *local_68;
  EVP_PKEY *local_60;
  PKCS12 *local_58;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (X509 *)0x0;
  local_50 = CERT1;
  local_60 = (EVP_PKEY *)0x0;
  local_58 = (PKCS12 *)0x0;
  local_48 = KEY1;
  cert = d2i_X509((X509 **)0x0,&local_50,0x1f1);
  iVar1 = test_ptr("test/pkcs12_format_test.c",899,&_LC12,cert);
  if (iVar1 == 0) {
    uVar2 = 0;
    bp = (BIO *)0x0;
    a = (PKCS12 *)0x0;
    p12 = (PKCS12 *)0x0;
    pkey = (EVP_PKEY *)0x0;
  }
  else {
    pkey = d2i_AutoPrivateKey((EVP_PKEY **)0x0,&local_48,0x261);
    iVar1 = test_ptr("test/pkcs12_format_test.c",0x386,&_LC13,pkey);
    if (iVar1 == 0) {
      bp = (BIO *)0x0;
      a = (PKCS12 *)0x0;
      p12 = (PKCS12 *)0x0;
      uVar2 = 0;
    }
    else {
      p12 = PKCS12_create("pass",(char *)0x0,pkey,cert,(stack_st_X509 *)0x0,0x1ab,0x1ab,2,1,0);
      uVar2 = test_ptr("test/pkcs12_format_test.c",0x38a,&_LC15,p12);
      if (uVar2 != 0) {
        uVar3 = ERR_peek_error();
        uVar2 = test_int_eq("test/pkcs12_format_test.c",0x38c,"ERR_peek_error()",&_LC16,
                            uVar3 & 0xffffffff,0);
        if (uVar2 != 0) {
          type = BIO_s_mem();
          bp = BIO_new(type);
          iVar1 = test_ptr("test/pkcs12_format_test.c",0x390,&_LC18,bp);
          if (iVar1 != 0) {
            a = (PKCS12 *)0x0;
            iVar1 = i2d_PKCS12_bio(bp,p12);
            uVar2 = test_int_eq("test/pkcs12_format_test.c",0x392,"i2d_PKCS12_bio(bio, p12)",&_LC19,
                                iVar1,1);
            if (uVar2 == 0) goto LAB_00100a49;
            local_58 = (PKCS12 *)PKCS12_init_ex(0x15,testctx,0);
            iVar1 = test_ptr("test/pkcs12_format_test.c",0x395,"p12_parsed",local_58);
            if (iVar1 != 0) {
              local_58 = d2i_PKCS12_bio(bp,&local_58);
              iVar1 = test_ptr("test/pkcs12_format_test.c",0x398,"p12_parsed",local_58);
              if (iVar1 != 0) {
                iVar1 = PKCS12_parse(local_58,"pass",&local_60,&local_68,(stack_st_X509 **)0x0);
                iVar1 = test_int_eq("test/pkcs12_format_test.c",0x39a,
                                    "PKCS12_parse(p12_parsed, \"pass\", &pkey_parsed, &cert_parsed, NULL)"
                                    ,&_LC19,iVar1,1);
                if (iVar1 != 0) {
                  a = PKCS12_create("new_pass",(char *)0x0,local_60,local_68,(stack_st_X509 *)0x0,
                                    0x1ab,0x1ab,2,1,0);
                  uVar2 = test_ptr("test/pkcs12_format_test.c",0x3a2,"p12_recreated",a);
                  if (uVar2 != 0) {
                    uVar3 = ERR_peek_error();
                    iVar1 = test_int_eq("test/pkcs12_format_test.c",0x3a4,"ERR_peek_error()",&_LC16,
                                        uVar3 & 0xffffffff,0);
                    uVar2 = (uint)(iVar1 != 0);
                  }
                  goto LAB_00100a49;
                }
              }
            }
          }
          a = (PKCS12 *)0x0;
          uVar2 = 0;
          goto LAB_00100a49;
        }
      }
      bp = (BIO *)0x0;
      a = (PKCS12 *)0x0;
    }
  }
LAB_00100a49:
  BIO_free(bp);
  PKCS12_free(p12);
  PKCS12_free(local_58);
  PKCS12_free(a);
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(local_60);
  X509_free(cert);
  X509_free(local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint pkcs12_create_test(void)

{
  int iVar1;
  uint uVar2;
  EVP_PKEY *pkey;
  ulong uVar3;
  PKCS12 *a;
  long in_FS_OFFSET;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = rsa_key_0;
  pkey = (EVP_PKEY *)d2i_PrivateKey_ex(6,0,&local_48,0x261,0,0);
  iVar1 = test_ptr("test/pkcs12_format_test.c",0x35f,
                   "pkey = d2i_PrivateKey_ex(EVP_PKEY_RSA, NULL, &p, sizeof(rsa_key), NULL, NULL)",
                   pkey);
  if (iVar1 != 0) {
    uVar3 = ERR_peek_error();
    iVar1 = test_int_eq("test/pkcs12_format_test.c",0x362,"ERR_peek_error()",&_LC16,
                        uVar3 & 0xffffffff,0);
    if (iVar1 != 0) {
      a = PKCS12_create((char *)0x0,(char *)0x0,pkey,(X509 *)0x0,(stack_st_X509 *)0x0,0x92,0x92,2,1,
                        0);
      uVar2 = test_ptr("test/pkcs12_format_test.c",0x367,&_LC15,a);
      if (uVar2 != 0) {
        uVar3 = ERR_peek_error();
        iVar1 = test_int_eq("test/pkcs12_format_test.c",0x36a,"ERR_peek_error()",&_LC16,
                            uVar3 & 0xffffffff,0);
        uVar2 = (uint)(iVar1 != 0);
      }
      goto LAB_00100de0;
    }
  }
  a = (PKCS12 *)0x0;
  uVar2 = 0;
LAB_00100de0:
  PKCS12_free(a);
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int get_custom_oid(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sec_nid_1;
  if (sec_nid_1 == -1) {
    iVar2 = OBJ_create("1.3.5.7.9","CustomSecretOID","My custom secret OID");
    iVar2 = test_true("test/pkcs12_format_test.c",0x144,
                      "OBJ_create(\"1.3.5.7.9\", \"CustomSecretOID\", \"My custom secret OID\")",
                      iVar2 != 0);
    if (iVar2 != 0) {
      sec_nid_1 = OBJ_txt2nid("CustomSecretOID");
      return sec_nid_1;
    }
  }
  return iVar1;
}



void test_multiple_contents(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = new_pkcs12_builder("multi_contents.p12");
  uVar1 = get_custom_oid();
  start_pkcs12(uVar2);
  start_contentinfo(uVar2);
  add_certbag(uVar2,CERT1,0x1f1,ATTRS1);
  add_certbag(uVar2,CERT2,0x1f1,ATTRS2);
  add_keybag(uVar2,KEY1,0x261,ATTRS1,enc_default);
  add_keybag(uVar2,KEY2,0x260,ATTRS2,enc_default);
  end_contentinfo(uVar2);
  start_contentinfo(uVar2);
  add_secretbag(uVar2,uVar1,"VeryVerySecretMessage",ATTRS1);
  end_contentinfo_encrypted(uVar2,enc_default);
  end_pkcs12_with_mac(uVar2,mac_default);
  start_check_pkcs12_with_mac(uVar2,mac_default);
  start_check_contentinfo(uVar2);
  check_certbag(uVar2,CERT1,0x1f1,ATTRS1);
  check_certbag(uVar2,CERT2,0x1f1,ATTRS2);
  check_keybag(uVar2,KEY1,0x261,ATTRS1,enc_default);
  check_keybag(uVar2,KEY2,0x260,ATTRS2,enc_default);
  end_check_contentinfo(uVar2);
  start_check_contentinfo_encrypted(uVar2,enc_default);
  check_secretbag(uVar2,uVar1,"VeryVerySecretMessage",ATTRS1);
  end_check_contentinfo(uVar2);
  end_check_pkcs12(uVar2);
  end_pkcs12_builder(uVar2);
  return;
}



void test_single_secret_encrypted_content(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = new_pkcs12_builder("1secret.p12");
  uVar2 = get_custom_oid();
  start_pkcs12(uVar1);
  start_contentinfo(uVar1);
  add_secretbag(uVar1,uVar2,"VerySecretMessage",ATTRS1);
  end_contentinfo_encrypted(uVar1,enc_default);
  end_pkcs12_with_mac(uVar1,mac_default);
  start_check_pkcs12_with_mac(uVar1,mac_default);
  start_check_contentinfo_encrypted(uVar1,enc_default);
  check_secretbag(uVar1,uVar2,"VerySecretMessage",ATTRS1);
  end_check_contentinfo(uVar1);
  end_check_pkcs12(uVar1);
  end_pkcs12_builder(uVar1);
  return;
}



void test_single_secret_enc_alg(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_b8 [2];
  char *local_b0;
  undefined4 local_a8;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lgcyprov == 0) {
    local_b8[0] = *(int *)(enc_nids_no_legacy + (long)param_1 * 4);
  }
  else {
    local_b8[0] = *(int *)(enc_nids_all + (long)param_1 * 4);
  }
  local_b0 = "Password1";
  local_a8 = 1000;
  pcVar2 = OBJ_nid2sn(local_b8[0]);
  BIO_snprintf(local_98,0x50,"1secret_ciph-%s_iter-%d.p12",pcVar2,1000);
  uVar3 = new_pkcs12_builder(local_98);
  uVar1 = get_custom_oid();
  start_pkcs12(uVar3);
  start_contentinfo(uVar3);
  add_secretbag(uVar3,uVar1,"VerySecretMessage",ATTRS1);
  end_contentinfo_encrypted(uVar3,local_b8);
  end_pkcs12_with_mac(uVar3,mac_default);
  start_check_pkcs12_with_mac(uVar3,mac_default);
  start_check_contentinfo_encrypted(uVar3,local_b8);
  check_secretbag(uVar3,uVar1,"VerySecretMessage",ATTRS1);
  end_check_contentinfo(uVar3);
  end_check_pkcs12(uVar3);
  end_pkcs12_builder(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_2;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
LAB_0010137a:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        if (default_libctx == 0) {
          testctx = OSSL_LIB_CTX_new();
          iVar1 = test_ptr("test/pkcs12_format_test.c",0x3e1,"testctx",testctx);
          if (iVar1 == 0) {
            return 0;
          }
          nullprov = OSSL_PROVIDER_load(0,&_LC38);
          iVar1 = test_ptr("test/pkcs12_format_test.c",0x3e4,"nullprov",nullprov);
          if (iVar1 == 0) {
            return 0;
          }
        }
        deflprov = OSSL_PROVIDER_load(testctx,"default");
        iVar1 = test_ptr("test/pkcs12_format_test.c",0x3e9,"deflprov",deflprov);
        if (iVar1 == 0) {
          return 0;
        }
        lgcyprov = OSSL_PROVIDER_load(testctx,"legacy");
        PKCS12_helper_set_libctx(testctx);
        if (default_libctx == 0) {
          iVar1 = OSSL_PROVIDER_available(0,"default");
          iVar1 = test_false("test/pkcs12_format_test.c",0x3f4,
                             "OSSL_PROVIDER_available(NULL, \"default\")",iVar1 != 0);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = OSSL_PROVIDER_available(0,&_LC43);
          iVar1 = test_false("test/pkcs12_format_test.c",0x3f5,
                             "OSSL_PROVIDER_available(NULL, \"fips\")",iVar1 != 0);
          if (iVar1 == 0) {
            return 0;
          }
        }
        add_test("test_single_cert_no_attrs",test_single_cert_no_attrs);
        if (lgcyprov == 0) {
          add_all_tests("test_single_key_enc_alg",test_single_key_enc_alg,5,1);
          add_all_tests("test_single_secret_enc_alg",test_single_secret_enc_alg,5,1);
        }
        else {
          add_all_tests("test_single_key_enc_alg",test_single_key_enc_alg,0x10,1);
          add_all_tests("test_single_secret_enc_alg",test_single_secret_enc_alg,0x10,1);
        }
        if ((default_libctx != 0) &&
           (add_test("pkcs12_create_test",pkcs12_create_test), default_libctx != 0)) {
          add_test("pkcs12_recreate_test",pkcs12_recreate_test);
        }
        add_all_tests("test_single_key_enc_pass",test_single_key_enc_pass,2,1);
        add_all_tests("test_single_key_enc_iter",test_single_key_enc_iter,2,1);
        add_test("test_single_key_with_attrs",test_single_key_with_attrs);
        add_all_tests("test_single_cert_mac_alg",test_single_cert_mac_alg,6,1);
        add_all_tests("test_single_cert_mac_pass",test_single_cert_mac_pass,2,1);
        add_all_tests("test_single_cert_mac_iter",test_single_cert_mac_iter,2,1);
        add_test("test_cert_key_with_attrs_and_mac",test_cert_key_with_attrs_and_mac);
        add_test("test_cert_key_encrypted_content",test_cert_key_encrypted_content);
        add_test("test_single_secret_encrypted_content",test_single_secret_encrypted_content);
        add_test("test_multiple_contents",test_multiple_contents);
        add_test("test_jdk_trusted_attr",test_jdk_trusted_attr);
        add_test("test_set0_attrs",0x100000);
        return 1;
      }
      if (iVar1 == 3) {
        default_libctx = 0;
        goto LAB_0010137a;
      }
      if (3 < iVar1) {
        if (5 < iVar1 - 500U) {
          return 0;
        }
        goto LAB_0010137a;
      }
      if (iVar1 == 1) break;
      if (iVar1 != 2) {
        return 0;
      }
      PKCS12_helper_set_legacy(1);
      iVar1 = opt_next();
    }
    PKCS12_helper_set_write_files(1);
  } while( true );
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(nullprov);
  OSSL_PROVIDER_unload(deflprov);
  OSSL_PROVIDER_unload(lgcyprov);
  OSSL_LIB_CTX_free(testctx);
  return;
}



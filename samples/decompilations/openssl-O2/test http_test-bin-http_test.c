
undefined4 test_http_resp_hdr_limit(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  BIO_METHOD *pBVar3;
  BIO *b;
  BIO *a;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  char *local_48;
  undefined1 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar3 = BIO_s_mem();
  b = BIO_new(pBVar3);
  pBVar3 = BIO_s_mem();
  a = BIO_new(pBVar3);
  local_40 = 0x30;
  local_48 = (char *)0x0;
  local_3c = 0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = test_ptr("test/http_test.c",0x1eb,&_LC0,b);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/http_test.c",0x1eb,&_LC2,a);
    if (iVar1 != 0) {
      local_48 = "test\n";
      local_58._8_8_ = "text/plain";
      local_58._0_8_ = a;
      local_40 = 0x31;
      BIO_set_callback_ex(b,http_bio_cb_ex);
      BIO_set_callback_arg(b,local_58);
      uVar4 = OSSL_HTTP_REQ_CTX_new(b,a,0x2000);
      iVar1 = test_ptr("test/http_test.c",0x1f7,&_LC5,uVar4);
      if (iVar1 != 0) {
        iVar1 = OSSL_HTTP_REQ_CTX_set_request_line(uVar4,0,0,0,"/path");
        iVar1 = test_true("test/http_test.c",0x1fa,
                          "OSSL_HTTP_REQ_CTX_set_request_line(rctx, 0 , NULL, NULL, RPATH)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(uVar4,param_1);
          uVar5 = OSSL_HTTP_REQ_CTX_exchange(uVar4);
          if (param_1 == 1) {
            uVar2 = test_ptr_null("test/http_test.c",0x206,&_LC8,uVar5);
          }
          else {
            uVar2 = test_ptr("test/http_test.c",0x208);
          }
          goto LAB_00100085;
        }
      }
      uVar2 = 0;
      goto LAB_00100085;
    }
  }
  uVar4 = 0;
  uVar2 = 0;
LAB_00100085:
  BIO_free(b);
  BIO_free(a);
  OSSL_HTTP_REQ_CTX_free(uVar4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_hdr_resp_hdr_limit_256(void)

{
  test_http_resp_hdr_limit(0x100);
  return;
}



void test_hdr_resp_hdr_limit_short(void)

{
  test_http_resp_hdr_limit(1);
  return;
}



void test_hdr_resp_hdr_limit_none(void)

{
  test_http_resp_hdr_limit(0);
  return;
}



bool test_http_keep_alive(undefined1 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  BIO_METHOD *pBVar3;
  BIO *b;
  BIO *bp;
  BIO *a;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  uint local_8c;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar3 = BIO_s_mem();
  b = BIO_new(pBVar3);
  pBVar3 = BIO_s_mem();
  bp = BIO_new(pBVar3);
  local_58 = 0;
  local_50 = 0x30;
  local_4c = 0;
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  if ((b == (BIO *)0x0) || (bp == (BIO *)0x0)) {
    bVar5 = false;
  }
  else {
    local_68._8_8_ = "application/x-x509-ca-cert";
    local_68._0_8_ = bp;
    local_50 = param_1;
    local_4c = param_3;
    BIO_set_callback_ex(b,http_bio_cb_ex);
    BIO_set_callback_arg(b,local_68);
    local_8c = 1;
    do {
      uVar1 = local_8c;
      a = (BIO *)OSSL_HTTP_transfer(&local_70,0,0,"/path",0,0,0,b,bp,0,0,0,0,0,0,
                                    "application/x-x509-ca-cert",0,0,0,param_2);
      if ((param_2 == 2) && ((((byte)param_3 ^ 1) & 1) != 0)) {
        iVar2 = test_ptr_null("test/http_test.c",0x10c);
        if (iVar2 == 0) {
LAB_0010036f:
          bVar5 = false;
          BIO_free(a);
          BIO_ctrl(bp,1,0,(void *)0x0);
          break;
        }
        OSSL_HTTP_is_alive(local_70);
        uVar4 = 0x10d;
      }
      else {
        iVar2 = test_ptr("test/http_test.c",0x10f,&_LC10);
        if (iVar2 == 0) goto LAB_0010036f;
        OSSL_HTTP_is_alive(local_70);
        uVar4 = 0x110;
      }
      iVar2 = test_int_eq("test/http_test.c",uVar4,"OSSL_HTTP_is_alive(rctx)");
      bVar5 = iVar2 != 0;
      BIO_free(a);
      BIO_ctrl(bp,1,0,(void *)0x0);
      local_8c = 2;
      param_2 = 0;
    } while (uVar1 < 2 && bVar5);
    OSSL_HTTP_close(local_70,bVar5);
  }
  BIO_free(b);
  BIO_free(bp);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



void test_http_keep_alive_1_require_no(void)

{
  test_http_keep_alive(0x31,2,0);
  return;
}



void test_http_keep_alive_0_require_no(void)

{
  test_http_keep_alive(0x30,2,0);
  return;
}



void test_http_keep_alive_1_require_yes(void)

{
  test_http_keep_alive(0x31,2,1);
  return;
}



void test_http_keep_alive_0_require_yes(void)

{
  test_http_keep_alive(0x30,2,1);
  return;
}



void test_http_keep_alive_1_prefer_yes(void)

{
  test_http_keep_alive(0x31,1,1);
  return;
}



void test_http_keep_alive_0_prefer_yes(void)

{
  test_http_keep_alive(0x30,1,1);
  return;
}



void test_http_keep_alive_1_no_no(void)

{
  test_http_keep_alive(0x31,0,0);
  return;
}



void test_http_keep_alive_0_no_no(void)

{
  test_http_keep_alive(0x30,0,0);
  return;
}



uint test_http_method(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  BIO_METHOD *pBVar3;
  BIO *b;
  BIO *a;
  BIO *pBVar4;
  BIO *a_00;
  X509 *b_00;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined1 local_c8 [16];
  char *local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  char local_9f [7];
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar3 = BIO_s_mem();
  b = BIO_new(pBVar3);
  pBVar3 = BIO_s_mem();
  a = BIO_new(pBVar3);
  pcVar6 = "/path";
  if (param_1 == 2) {
    pcVar6 = "/will-be-redirected";
  }
  local_b8 = (char *)0x0;
  local_b0 = 0x30;
  local_ac = 0;
  local_c8 = (undefined1  [16])0x0;
  BIO_snprintf(local_98,0x50,"/%d%s",(ulong)param_3,pcVar6);
  if (param_2 == 0) {
    a_00 = (BIO *)ASN1_item_i2d_mem_bio(x509_it,x509);
    local_b8 = (char *)0x0;
    if (((b != (BIO *)0x0) && (a != (BIO *)0x0)) && (a_00 != (BIO *)0x0)) {
      pcVar5 = "application/x-x509-ca-cert";
      pcVar6 = local_b8;
LAB_00100741:
      local_b8 = pcVar6;
      local_c8._8_8_ = pcVar5;
      local_c8._0_8_ = a;
      BIO_set_callback_ex(b,http_bio_cb_ex);
      BIO_set_callback_arg(b,local_c8);
      if (param_1 == 0) {
        pBVar4 = (BIO *)OSSL_HTTP_transfer(0,0,0,local_98,0,0,0,b,a,0,0,0,0,pcVar5,a_00,pcVar5,
                                           param_2 ^ 1,0x19000,0,0);
      }
      else {
        pBVar4 = (BIO *)OSSL_HTTP_get(local_98,0,0,b,a,0,0,0,0,pcVar5,param_2 ^ 1,0x19000,0);
      }
      uVar2 = test_int_eq("test/http_test.c",0xcc,
                          "suggested_status == HTTP_STATUS_CODES_FATAL_ERROR","rsp == NULL",
                          param_3 == 399,pBVar4 == (BIO *)0x0);
      if ((uVar2 != 0) && (uVar2 = (uint)(param_3 == 399), pBVar4 != (BIO *)0x0)) {
        if (param_2 == 0) {
          b_00 = d2i_X509_bio(pBVar4,(X509 **)0x0);
          uVar2 = test_ptr("test/http_test.c",0xe0,"rcert",b_00);
          if (uVar2 != 0) {
            iVar1 = X509_cmp(x509,b_00);
            iVar1 = test_int_eq("test/http_test.c",0xe0,"X509_cmp(x509, rcert)",&_LC11,iVar1,0);
            uVar2 = (uint)(iVar1 != 0);
          }
          X509_free(b_00);
        }
        else {
          iVar1 = BIO_gets(pBVar4,local_9f,7);
          uVar2 = test_int_eq("test/http_test.c",0xda,"BIO_gets(rsp, rtext, sizeof(rtext))",
                              "sizeof(text1) - 1",iVar1,5);
          if (uVar2 != 0) {
            iVar1 = test_str_eq("test/http_test.c",0xdc,"rtext","text1",local_9f,"test\n");
            uVar2 = (uint)(iVar1 != 0);
          }
        }
        BIO_free(pBVar4);
      }
      goto LAB_001006a6;
    }
LAB_00100890:
    uVar2 = 0;
  }
  else {
    pBVar3 = BIO_s_mem();
    pBVar4 = BIO_new(pBVar3);
    if (pBVar4 != (BIO *)0x0) {
      iVar1 = BIO_puts(pBVar4,"test\n");
      if (iVar1 == 5) {
        iVar1 = BIO_puts(pBVar4,"more\n");
        if (iVar1 == 5) {
          local_b8 = "test\n";
          a_00 = pBVar4;
          if ((b != (BIO *)0x0) && (pcVar5 = "text/plain", pcVar6 = "test\n", a != (BIO *)0x0))
          goto LAB_00100741;
          goto LAB_00100890;
        }
      }
    }
    a_00 = (BIO *)0x0;
    BIO_free(pBVar4);
    local_b8 = "test\n";
    uVar2 = 0;
  }
LAB_001006a6:
  BIO_free(a_00);
  BIO_free(b);
  BIO_free(a);
  OPENSSL_sk_pop_free(0,&X509V3_conf_free);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_http_post_x509_error_status(void)

{
  test_http_method(0,0,400);
  return;
}



void test_http_post_x509_fatal_status(void)

{
  test_http_method(0,0,399);
  return;
}



void test_http_post_x509(void)

{
  test_http_method(0,0,200);
  return;
}



void test_http_get_x509_redirected(void)

{
  test_http_method(2,0,200);
  return;
}



void test_http_get_x509(void)

{
  test_http_method(1,0,200);
  return;
}



void test_http_post_txt(void)

{
  test_http_method(0,1,200);
  return;
}



void test_http_get_txt_error_status(void)

{
  test_http_method(1,1,400);
  return;
}



void test_http_get_txt_fatal_status(void)

{
  test_http_method(1,1,399);
  return;
}



void test_http_get_txt_redirected(void)

{
  test_http_method(2,1,200);
  return;
}



void test_http_get_txt(void)

{
  test_http_method(1,1,200);
  return;
}



undefined8 test_http_url_invalid(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 1;
  local_2c = 1;
  local_28 = &_LC25;
  local_20 = &_LC25;
  local_18 = &_LC25;
  iVar1 = OSSL_HTTP_parse_url(param_1,&local_2c,0,&local_28,&local_20,&local_30,&local_18,0,0);
  iVar1 = test_false("test/http_test.c",0x16b,
                     "OSSL_HTTP_parse_url(url, &ssl, NULL, &host, &port, &num, &path, NULL, NULL)",
                     iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_ptr_null("test/http_test.c",0x16d,&_LC27,local_28);
    if (iVar1 != 0) {
      iVar1 = test_ptr_null("test/http_test.c",0x16e,&_LC28,local_20);
      if (iVar1 != 0) {
        iVar1 = test_ptr_null("test/http_test.c",0x16f,&_LC29,local_18);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_00100bd1;
        }
      }
    }
  }
  CRYPTO_free(local_28);
  CRYPTO_free(local_20);
  CRYPTO_free(local_18);
  uVar2 = 0;
LAB_00100bd1:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_http_url_invalid_path(void)

{
  test_http_url_invalid("https://[FF01::101]pkix");
  return;
}



ulong test_http_url_invalid_port(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_http_url_invalid("https://1.2.3.4:65536/pkix");
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = test_http_url_invalid("https://1.2.3.4:");
  return (ulong)(iVar1 != 0);
}



void test_http_url_invalid_prefix(void)

{
  test_http_url_invalid("htttps://1.2.3.4:65535/pkix");
  return;
}



bool test_http_url_path_query_ok(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  void *local_30;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OSSL_HTTP_parse_url(param_1,0,0,&local_30,0,0,&local_28,0,0);
  iVar1 = test_true("test/http_test.c",0x141,
                    "OSSL_HTTP_parse_url(url, NULL, NULL, &host, NULL, NULL, &path, NULL, NULL)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_str_eq("test/http_test.c",0x143,&_LC27,"\"host\"",local_30);
    if (iVar1 != 0) {
      iVar1 = test_str_eq("test/http_test.c",0x144,&_LC29,"exp_path_qu",local_28,param_2);
      bVar2 = iVar1 != 0;
      goto LAB_00100d07;
    }
  }
  bVar2 = false;
LAB_00100d07:
  CRYPTO_free(local_30);
  CRYPTO_free(local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_http_url_path_query(void)

{
  int iVar1;
  
  iVar1 = test_http_url_path_query_ok("http://usr@host:1/p?q=x#frag","/p?q=x");
  if (iVar1 != 0) {
    iVar1 = test_http_url_path_query_ok("http://host?query#frag","/?query");
    if (iVar1 != 0) {
      iVar1 = test_http_url_path_query_ok("http://host:9999#frag",&_LC41);
      return iVar1 != 0;
    }
  }
  return false;
}



ulong test_http_url_ok(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  char *local_70;
  void *local_68;
  void *local_60;
  void *local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = __isoc99_sscanf(param_4,&_LC43,&local_7c);
  uVar4 = test_int_eq("test/http_test.c",0x124,"sscanf(exp_port, \"%d\", &exp_num)",&_LC25,uVar1,1);
  if ((int)uVar4 != 0) {
    iVar2 = OSSL_HTTP_parse_url(param_1,&local_74,&local_70,&local_68,&local_60,&local_78,&local_58,
                                &local_50,&local_48);
    iVar2 = test_true("test/http_test.c",0x126,
                      "OSSL_HTTP_parse_url(url, &ssl, &user, &host, &port, &num, &path, &query, &frag)"
                      ,iVar2 != 0);
    if ((((((iVar2 == 0) ||
           (iVar2 = test_str_eq("test/http_test.c",0x128,&_LC27,"exp_host",local_68,param_3),
           iVar2 == 0)) ||
          (iVar2 = test_str_eq("test/http_test.c",0x129,&_LC28,"exp_port",local_60,param_4),
          iVar2 == 0)) ||
         ((iVar2 = test_int_eq("test/http_test.c",0x12a,&_LC49,"exp_num",local_78,local_7c),
          iVar2 == 0 ||
          (iVar2 = test_str_eq("test/http_test.c",299,&_LC29,"exp_path",local_58,param_5),
          iVar2 == 0)))) ||
        ((iVar2 = test_int_eq("test/http_test.c",300,&_LC52,"exp_ssl",local_74,param_2), iVar2 == 0
         || ((uVar3 = 1, *local_70 != '\0' &&
             (uVar3 = test_str_eq("test/http_test.c",0x12e,&_LC55,"\"user:pass\"",local_70,
                                  "user:pass"), uVar3 == 0)))))) ||
       ((*local_48 != '\0' &&
        (uVar3 = test_str_eq("test/http_test.c",0x130,&_LC58,&_LC57,local_48,&_LC56), uVar3 == 0))))
    {
      uVar3 = 0;
    }
    else if (*local_50 != '\0') {
      uVar3 = test_str_eq("test/http_test.c",0x132,"query",&_LC60,local_50,&_LC59);
    }
    CRYPTO_free(local_70);
    CRYPTO_free(local_68);
    CRYPTO_free(local_60);
    CRYPTO_free(local_58);
    CRYPTO_free(local_50);
    CRYPTO_free(local_48);
    uVar4 = (ulong)uVar3;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void test_http_url_ipv6(void)

{
  test_http_url_ok("http://[FF01::101]:6",0,"[FF01::101]",&_LC62,&_LC41);
  return;
}



void test_http_url_ipv4(void)

{
  test_http_url_ok("https://1.2.3.4/p/q",1,"1.2.3.4",&_LC66,&_LC65);
  return;
}



void test_http_url_userinfo_query_fragment(void)

{
  test_http_url_ok("user:pass@host/p?q#fr",0,&_LC27,&_LC70,&_LC69);
  return;
}



void test_http_url_dns(void)

{
  test_http_url_ok("host:65535/path",0,&_LC27,"65535","/path");
  return;
}



ulong http_bio_cb_ex(BIO *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                    undefined8 param_6,int param_7)

{
  char cVar1;
  char cVar2;
  BIO *bio;
  char *__s;
  undefined8 uVar3;
  bool bVar4;
  ASN1_VALUE *val;
  ASN1_ITEM *it;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  size_t sVar11;
  char *pcVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  char *local_50;
  char local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar7 = BIO_get_callback_arg(param_1);
  it = x509_it;
  val = x509;
  if ((param_2 != 0x86) || (param_5 != 0xb)) {
    uVar8 = (ulong)param_7;
    goto LAB_00101225;
  }
  cVar1 = pcVar7[0x18];
  bio = *(BIO **)pcVar7;
  __s = *(char **)(pcVar7 + 0x10);
  uVar3 = *(undefined8 *)(pcVar7 + 8);
  uVar6 = *(uint *)(pcVar7 + 0x1c);
  lVar9 = BIO_ctrl(param_1,3,0,&local_50);
  pcVar7 = local_50;
  builtin_strncpy(local_44,"200",4);
  if (lVar9 < 4) {
LAB_001012b7:
    uVar13 = 0;
LAB_001012b9:
    iVar5 = test_true("test/http_test.c",0x38,"count >= 5 && CHECK_AND_SKIP_PREFIX(hdr, \"POST \")",
                      uVar13);
    bVar4 = false;
    if (iVar5 != 0) goto LAB_001012e1;
  }
  else {
    iVar5 = strncmp(local_50,"GET ",4);
    if (iVar5 != 0) {
      if (lVar9 == 4) goto LAB_001012b7;
      iVar5 = strncmp(pcVar7,"POST ",5);
      uVar13 = 0;
      if (iVar5 == 0) {
        pcVar7 = pcVar7 + 5;
        uVar13 = 1;
      }
      goto LAB_001012b9;
    }
    bVar4 = true;
    pcVar7 = pcVar7 + 4;
LAB_001012e1:
    if (*pcVar7 == '/') {
      cVar2 = pcVar7[1];
      pcVar10 = pcVar7 + 1;
      while ((byte)(cVar2 - 0x30U) < 10) {
        pcVar12 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
        cVar2 = *pcVar12;
      }
      if (pcVar10 == pcVar7 + 4) {
        strncpy(local_44,pcVar7 + 1,3);
        pcVar7 = pcVar10;
      }
    }
    pcVar10 = strchr(pcVar7,0x20);
    if (((((pcVar10 != (char *)0x0) &&
          (iVar5 = test_strn_eq("test/http_test.c",0x4b,"++hdr","\"HTTP/1.\"",pcVar10 + 1,7,
                                "HTTP/1.",7), iVar5 != 0)) &&
         (iVar5 = test_char_le("test/http_test.c",0x4f,&_LC86,&_LC85,0x30,(int)pcVar10[8]),
         iVar5 != 0)) &&
        ((iVar5 = test_char_le("test/http_test.c",0x4f,"*hdr++",&_LC87,(int)pcVar10[8],0x31),
         iVar5 != 0 &&
         (iVar5 = test_char_eq("test/http_test.c",0x51,"*hdr++",&_LC89,(int)pcVar10[9],0xd),
         iVar5 != 0)))) &&
       (iVar5 = test_char_eq("test/http_test.c",0x51,"*hdr++",&_LC90,(int)pcVar10[10],10),
       iVar5 != 0)) {
      pcVar12 = pcVar10 + 0xb;
      lVar9 = lVar9 - ((long)pcVar12 - (long)local_50);
      if ((-1 < lVar9) && (bio != (BIO *)0x0)) {
        iVar5 = strncmp(pcVar7,"/path",5);
        if (iVar5 == 0) {
          iVar5 = strcmp(local_44,"200");
          pcVar7 = "OK";
          if (iVar5 != 0) {
            iVar5 = strcmp(local_44,"400");
            pcVar7 = "fatal";
            if (-1 < iVar5) {
              pcVar7 = "error";
            }
          }
          iVar5 = BIO_printf(bio,"HTTP/1.%c %s %s\r\n",(ulong)(uint)(int)cVar1,local_44,pcVar7);
          if (0 < iVar5) {
            if (uVar6 == (cVar1 == '0')) {
              pcVar7 = "close";
              if (cVar1 == '0') {
                pcVar7 = "keep-alive";
              }
              iVar5 = BIO_printf(bio,"Connection: %s\r\n",pcVar7);
              if (iVar5 < 1) {
                uVar8 = 0;
                goto LAB_00101225;
              }
            }
            iVar5 = strcmp(local_44,"399");
            if (iVar5 == 0) {
              iVar5 = BIO_puts(bio,"\r\n");
              uVar8 = (ulong)(iVar5 == 2);
              goto LAB_00101225;
            }
            if (!bVar4) {
              iVar5 = strncmp(pcVar12,"Connection: ",0xc);
              if (iVar5 == 0) {
                pcVar12 = strstr(pcVar10 + 0x17,"\r\n");
                if (pcVar12 == (char *)0x0) goto LAB_00101370;
                pcVar12 = pcVar12 + 2;
              }
              iVar5 = BIO_write(bio,pcVar12,(int)lVar9);
              uVar8 = (ulong)(iVar5 == lVar9);
              goto LAB_00101225;
            }
            if (__s == (char *)0x0) {
              uVar6 = ASN1_item_i2d(val,(uchar **)0x0,it);
              if ((0 < (int)uVar6) &&
                 (iVar5 = BIO_printf(bio,"Content-Type: %s\r\nContent-Length: %d\r\n\r\n",uVar3,
                                     (ulong)uVar6), 0 < iVar5)) {
                iVar5 = ASN1_item_i2d_bio(it,bio,val);
                uVar8 = (ulong)iVar5;
                goto LAB_00101225;
              }
            }
            else {
              sVar11 = strlen(__s);
              iVar5 = BIO_printf(bio,"Content-Type: %s\r\nContent-Length: %d\r\n\r\n",uVar3,
                                 sVar11 & 0xffffffff);
              if (0 < iVar5) {
                iVar5 = BIO_puts(bio,__s);
                uVar8 = (ulong)iVar5;
                goto LAB_00101225;
              }
            }
          }
        }
        else if (bVar4) {
          iVar5 = BIO_printf(bio,"HTTP/1.%c 301 Moved Permanently\r\nLocation: %s\r\n\r\n",
                             (ulong)(uint)(int)cVar1,"/path");
          uVar8 = (ulong)(0 < iVar5);
          goto LAB_00101225;
        }
      }
    }
  }
LAB_00101370:
  uVar8 = 0;
LAB_00101225:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup_tests(void)

{
  X509_free(x509);
  return;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    x509_it = X509_it();
    uVar2 = test_get_argument(0);
    x509 = load_cert_pem(uVar2,0);
    iVar1 = test_ptr("test/http_test.c",0x22e,"(x509 = load_cert_pem(test_get_argument(0), NULL))",
                     x509);
    if (iVar1 != 0) {
      add_test("test_http_url_dns",test_http_url_dns);
      add_test("test_http_url_path_query",test_http_url_path_query);
      add_test("test_http_url_userinfo_query_fragment",test_http_url_userinfo_query_fragment);
      add_test("test_http_url_ipv4",test_http_url_ipv4);
      add_test("test_http_url_ipv6",test_http_url_ipv6);
      add_test("test_http_url_invalid_prefix",test_http_url_invalid_prefix);
      add_test("test_http_url_invalid_port",test_http_url_invalid_port);
      add_test("test_http_url_invalid_path",test_http_url_invalid_path);
      add_test("test_http_get_txt",test_http_get_txt);
      add_test("test_http_get_txt_redirected",test_http_get_txt_redirected);
      add_test("test_http_get_txt_fatal_status",test_http_get_txt_fatal_status);
      add_test("test_http_get_txt_error_status",test_http_get_txt_error_status);
      add_test("test_http_post_txt",test_http_post_txt);
      add_test("test_http_get_x509",test_http_get_x509);
      add_test("test_http_get_x509_redirected",test_http_get_x509_redirected);
      add_test("test_http_post_x509",test_http_post_x509);
      add_test("test_http_post_x509_fatal_status",test_http_post_x509_fatal_status);
      add_test("test_http_post_x509_error_status",test_http_post_x509_error_status);
      add_test("test_http_keep_alive_0_no_no",test_http_keep_alive_0_no_no);
      add_test("test_http_keep_alive_1_no_no",test_http_keep_alive_1_no_no);
      add_test("test_http_keep_alive_0_prefer_yes",test_http_keep_alive_0_prefer_yes);
      add_test("test_http_keep_alive_1_prefer_yes",test_http_keep_alive_1_prefer_yes);
      add_test("test_http_keep_alive_0_require_yes",test_http_keep_alive_0_require_yes);
      add_test("test_http_keep_alive_1_require_yes",test_http_keep_alive_1_require_yes);
      add_test("test_http_keep_alive_0_require_no",test_http_keep_alive_0_require_no);
      add_test("test_http_keep_alive_1_require_no",test_http_keep_alive_1_require_no);
      add_test("test_hdr_resp_hdr_limit_none",test_hdr_resp_hdr_limit_none);
      add_test("test_hdr_resp_hdr_limit_short",test_hdr_resp_hdr_limit_short);
      add_test("test_hdr_resp_hdr_limit_256",test_hdr_resp_hdr_limit_256);
      return 1;
    }
  }
  return 0;
}



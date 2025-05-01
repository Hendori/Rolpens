
bool test_x509_time_print_iso_8601(int param_1)

{
  char *__s;
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/x509_time_test.c",0x23d,"m = BIO_new(BIO_s_mem())",bp);
  if (iVar1 != 0) {
    iVar1 = ASN1_TIME_print_ex(bp,x509_print_tests_iso_8601 + (long)param_1 * 0x20,1);
    __s = *(char **)(x509_print_tests_iso_8601 + (long)param_1 * 0x20 + 0x18);
    if (iVar1 == 0) {
      iVar1 = test_str_eq("test/x509_time_test.c",0x243,"readable","\"Bad time value\"",__s,
                          "Bad time value");
      if (iVar1 == 0) goto LAB_00100053;
    }
    uVar2 = BIO_ctrl(bp,3,0,&local_38);
    iVar1 = test_int_ne("test/x509_time_test.c",0x247,"rv = BIO_get_mem_data(m, &pp)",&_LC2,
                        uVar2 & 0xffffffff,0);
    if (iVar1 != 0) {
      sVar3 = strlen(__s);
      iVar1 = test_int_eq("test/x509_time_test.c",0x248,&_LC8,"(int)strlen(readable)",
                          uVar2 & 0xffffffff,sVar3 & 0xffffffff);
      if (iVar1 != 0) {
        iVar1 = test_strn_eq("test/x509_time_test.c",0x249,&_LC9,"readable",local_38,
                             (long)(int)uVar2,__s,(long)(int)uVar2);
        bVar4 = iVar1 != 0;
        goto LAB_00100055;
      }
    }
  }
LAB_00100053:
  bVar4 = false;
LAB_00100055:
  BIO_free(bp);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_x509_time_print_rfc_822(int param_1)

{
  char *__s;
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  ulong uVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/x509_time_test.c",0x221,"m = BIO_new(BIO_s_mem())",bp);
  if (iVar1 != 0) {
    iVar1 = ASN1_TIME_print_ex(bp,x509_print_tests_rfc_822 + (long)param_1 * 0x20,0);
    __s = *(char **)(x509_print_tests_rfc_822 + (long)param_1 * 0x20 + 0x18);
    if (iVar1 == 0) {
      iVar1 = test_str_eq("test/x509_time_test.c",0x227,"readable","\"Bad time value\"",__s,
                          "Bad time value");
      if (iVar1 == 0) goto LAB_001001d3;
    }
    uVar2 = BIO_ctrl(bp,3,0,&local_38);
    iVar1 = test_int_ne("test/x509_time_test.c",0x22b,"rv = BIO_get_mem_data(m, &pp)",&_LC2,
                        uVar2 & 0xffffffff,0);
    if (iVar1 != 0) {
      sVar3 = strlen(__s);
      iVar1 = test_int_eq("test/x509_time_test.c",0x22c,&_LC8,"(int)strlen(readable)",
                          uVar2 & 0xffffffff,sVar3 & 0xffffffff);
      if (iVar1 != 0) {
        iVar1 = test_strn_eq("test/x509_time_test.c",0x22d,&_LC9,"readable",local_38,
                             (long)(int)uVar2,__s,(long)(int)uVar2);
        bVar4 = iVar1 != 0;
        goto LAB_001001d5;
      }
    }
  }
LAB_001001d3:
  bVar4 = false;
LAB_001001d5:
  BIO_free(bp);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_days(int param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ASN1_TIME *s;
  long in_FS_OFFSET;
  undefined1 auStack_88 [24];
  undefined4 local_70;
  undefined4 local_6c;
  char local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = (long)param_1 * 0x14;
  BIO_snprintf(local_48,0x10,"%04d%02d%02d050505Z",(ulong)*(uint *)(day_of_week_tests + lVar1),
               (ulong)*(uint *)(day_of_week_tests + lVar1 + 4),
               (ulong)*(uint *)(day_of_week_tests + lVar1 + 8));
  s = ASN1_TIME_new();
  uVar2 = test_ptr("test/x509_time_test.c",0x1d5,"a = ASN1_TIME_new()",s);
  if (uVar2 == 0) goto LAB_00100387;
  iVar3 = ASN1_TIME_set_string(s,local_48);
  iVar3 = test_true("test/x509_time_test.c",0x1d8,"ASN1_TIME_set_string(a, d)",iVar3 != 0);
  if (iVar3 == 0) {
LAB_001003da:
    uVar2 = 0;
  }
  else {
    iVar3 = ASN1_TIME_to_tm(s,auStack_88);
    iVar3 = test_true("test/x509_time_test.c",0x1d9,"ASN1_TIME_to_tm(a, &t)",iVar3 != 0);
    if (iVar3 == 0) goto LAB_001003da;
    iVar3 = test_int_eq("test/x509_time_test.c",0x1da,"t.tm_yday","day_of_week_tests[n].yd",local_6c
                        ,*(undefined4 *)(day_of_week_tests + lVar1 + 0xc));
    if (iVar3 == 0) goto LAB_001003da;
    iVar3 = test_int_eq("test/x509_time_test.c",0x1db,"t.tm_wday","day_of_week_tests[n].wd",local_70
                        ,*(undefined4 *)(day_of_week_tests + lVar1 + 0x10));
    uVar2 = (uint)(iVar3 != 0);
  }
  ASN1_TIME_free(s);
LAB_00100387:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_x509_time(int param_1)

{
  undefined4 uVar1;
  char *__s;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ASN1_TIME *a;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = (long)param_1 * 0x20;
  if (*(int *)(x509_format_tests + lVar6 + 8) == 0) {
    uVar2 = ASN1_TIME_set_string_X509(0,*(undefined8 *)(x509_format_tests + lVar6));
    uVar1 = *(undefined4 *)(x509_format_tests + lVar6 + 0xc);
    iVar3 = test_int_eq("test/x509_time_test.c",0x170,"result","x509_format_tests[idx].expected",
                        uVar2,uVar1);
    if (iVar3 == 0) {
      test_info("test/x509_time_test.c",0x171,"test_x509_time(%d) failed: expected %d, got %d\n",
                param_1,uVar1,uVar2);
      return 0;
    }
    return 1;
  }
  a = ASN1_TIME_new();
  if (a == (ASN1_TIME *)0x0) {
    test_info("test/x509_time_test.c",0x169,"test_x509_time(%d) failed: internal error\n",param_1);
    return 0;
  }
  uVar2 = ASN1_TIME_set_string_X509(a,*(undefined8 *)(x509_format_tests + lVar6));
  uVar1 = *(undefined4 *)(x509_format_tests + lVar6 + 0xc);
  iVar3 = test_int_eq("test/x509_time_test.c",0x170,"result","x509_format_tests[idx].expected",uVar2
                      ,uVar1);
  if (iVar3 == 0) {
    uVar7 = 0;
    test_info("test/x509_time_test.c",0x171,"test_x509_time(%d) failed: expected %d, got %d\n",
              param_1,uVar1,uVar2);
  }
  else {
    iVar3 = *(int *)(x509_format_tests + lVar6 + 0x10);
    if ((iVar3 == -1) ||
       (iVar4 = test_int_eq("test/x509_time_test.c",0x178,"t->type",
                            "x509_format_tests[idx].expected_type",a->type,iVar3), iVar4 != 0)) {
      __s = *(char **)(x509_format_tests + (long)param_1 * 0x20 + 0x18);
      if (__s != (char *)0x0) {
        sVar5 = strlen(__s);
        iVar3 = test_mem_eq("test/x509_time_test.c",0x181,"(const char *)t->data",
                            "x509_format_tests[idx].expected_string",a->data,(long)a->length,__s,
                            sVar5);
        if (iVar3 == 0) {
          uVar7 = 0;
          test_info("test/x509_time_test.c",0x184,
                    "test_x509_time(%d) failed: expected_string %s, got %.*s\n",param_1,__s,
                    a->length,a->data);
          goto LAB_0010058f;
        }
      }
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      test_info("test/x509_time_test.c",0x179,
                "test_x509_time(%d) failed: expected_type %d, got %d\n",param_1,iVar3,a->type);
    }
  }
LAB_0010058f:
  ASN1_TIME_free(a);
  return uVar7;
}



uint test_x509_cmp_time_current(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  time_t t;
  ASN1_TIME *s;
  ASN1_TIME *s_00;
  
  t = time((time_t *)0x0);
  s = ASN1_TIME_adj((ASN1_TIME *)0x0,t,-1,0);
  s_00 = ASN1_TIME_adj((ASN1_TIME *)0x0,t,1,0);
  iVar1 = X509_cmp_time(s,(time_t *)0x0);
  iVar1 = test_int_eq("test/x509_time_test.c",0x11f,"cmp_result",&_LC28,iVar1,0xffffffff);
  iVar2 = X509_cmp_time(s_00,(time_t *)0x0);
  uVar3 = test_int_eq("test/x509_time_test.c",0x123,"cmp_result",&_LC30,iVar2,1);
  if (uVar3 != 0) {
    uVar3 = (uint)(iVar1 != 0);
  }
  ASN1_TIME_free(s);
  ASN1_TIME_free(s_00);
  return uVar3;
}



bool test_X509_cmp_timeframe_vpm(X509_VERIFY_PARAM *param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((param_1 == (X509_VERIFY_PARAM *)0x0) ||
     (uVar3 = X509_VERIFY_PARAM_get_flags(param_1), (uVar3 & 2) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar3 = X509_VERIFY_PARAM_get_flags(param_1);
    uVar4 = (uint)(uVar3 >> 0x15) & 1;
  }
  if ((param_3 != 0 && param_4 != 0) && (param_2 != 0)) {
    uVar1 = X509_cmp_timeframe(param_1,param_2,param_4);
    iVar2 = test_int_eq("test/x509_time_test.c",0x136,
                        "X509_cmp_timeframe(vpm, asn1_before, asn1_after)",&_LC2,uVar1,0);
    if (iVar2 != 0) {
      uVar1 = X509_cmp_timeframe(param_1,param_2,0);
      iVar2 = test_int_eq("test/x509_time_test.c",0x137,"X509_cmp_timeframe(vpm, asn1_before, NULL)"
                          ,&_LC2,uVar1,0);
      if (iVar2 != 0) {
        uVar1 = X509_cmp_timeframe(param_1,0,param_4);
        iVar2 = test_int_eq("test/x509_time_test.c",0x138,
                            "X509_cmp_timeframe(vpm, NULL, asn1_after)",&_LC2,uVar1,0);
        if (iVar2 != 0) {
          uVar1 = X509_cmp_timeframe(param_1,0,0);
          iVar2 = test_int_eq("test/x509_time_test.c",0x139,"X509_cmp_timeframe(vpm, NULL, NULL)",
                              &_LC2,uVar1,0);
          if (iVar2 != 0) {
            uVar1 = X509_cmp_timeframe(param_1,param_4,param_4);
            iVar2 = test_int_eq("test/x509_time_test.c",0x13a,
                                "X509_cmp_timeframe(vpm, asn1_after, asn1_after)",
                                "always_0 ? 0 : -1",uVar1,uVar4 - 1);
            if (iVar2 != 0) {
              uVar1 = X509_cmp_timeframe(param_1,param_2,param_2);
              iVar2 = test_int_eq("test/x509_time_test.c",0x13c,
                                  "X509_cmp_timeframe(vpm, asn1_before, asn1_before)",
                                  "always_0 ? 0 : 1",uVar1,uVar4 ^ 1);
              if (iVar2 != 0) {
                uVar1 = X509_cmp_timeframe(param_1,param_4,param_2);
                iVar2 = test_int_eq("test/x509_time_test.c",0x13e,
                                    "X509_cmp_timeframe(vpm, asn1_after, asn1_before)",
                                    "always_0 ? 0 : 1",uVar1,uVar4 ^ 1);
                return iVar2 != 0;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



bool test_X509_cmp_timeframe(void)

{
  int iVar1;
  time_t t;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  ASN1_TIME *a_01;
  X509_VERIFY_PARAM *param;
  bool bVar2;
  
  bVar2 = false;
  t = time((time_t *)0x0);
  a = ASN1_TIME_adj((ASN1_TIME *)0x0,t,0,0);
  a_00 = ASN1_TIME_adj((ASN1_TIME *)0x0,t,-1,0);
  a_01 = ASN1_TIME_adj((ASN1_TIME *)0x0,t,1,0);
  param = X509_VERIFY_PARAM_new();
  if (param == (X509_VERIFY_PARAM *)0x0) goto LAB_00100a1f;
  iVar1 = test_X509_cmp_timeframe_vpm(0,a_00,a,a_01);
  if (iVar1 == 0) {
LAB_00100a0f:
    X509_VERIFY_PARAM_set_time(param,t);
LAB_00100a14:
    bVar2 = false;
  }
  else {
    iVar1 = test_X509_cmp_timeframe_vpm(param,a_00,a,a_01);
    if (iVar1 == 0) goto LAB_00100a0f;
    X509_VERIFY_PARAM_set_time(param,t);
    iVar1 = test_X509_cmp_timeframe_vpm(param,a_00,a,a_01);
    if (iVar1 == 0) goto LAB_00100a14;
    iVar1 = X509_VERIFY_PARAM_set_flags(param,0x200000);
    if (iVar1 == 0) goto LAB_00100a14;
    iVar1 = test_X509_cmp_timeframe_vpm(param,a_00,a,a_01);
    bVar2 = iVar1 != 0;
  }
  X509_VERIFY_PARAM_free(param);
LAB_00100a1f:
  ASN1_TIME_free(a);
  ASN1_TIME_free(a_00);
  ASN1_TIME_free(a_01);
  return bVar2;
}



bool test_x509_cmp_time(int param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  long local_38;
  long local_30;
  
  lVar4 = (long)param_1 * 0x20;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_48._8_8_ = *(char **)(x509_cmp_tests + lVar4);
  local_48._4_4_ = *(undefined4 *)(x509_cmp_tests + lVar4 + 8);
  local_48._0_4_ = 0;
  sVar3 = strlen(*(char **)(x509_cmp_tests + lVar4));
  local_48._0_4_ = (int)sVar3;
  iVar1 = X509_cmp_time((ASN1_TIME *)local_48,(time_t *)(x509_cmp_tests + lVar4 + 0x10));
  iVar2 = test_int_eq("test/x509_time_test.c",0x10c,"result","x509_cmp_tests[idx].expected",iVar1,
                      *(undefined4 *)(x509_cmp_tests + lVar4 + 0x18));
  if (iVar2 == 0) {
    test_info("test/x509_time_test.c",0x10d,"test_x509_cmp_time(%d) failed: expected %d, got %d\n",
              param_1,*(undefined4 *)(x509_cmp_tests + lVar4 + 0x18),iVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_x509_cmp_time_current",test_x509_cmp_time_current);
  add_test("test_X509_cmp_timeframe",test_X509_cmp_timeframe);
  add_all_tests("test_x509_cmp_time",test_x509_cmp_time,0x1a,1);
  add_all_tests("test_x509_time",test_x509_time,0x14,1);
  add_all_tests("test_days",test_days,0x31,1);
  add_all_tests("test_x509_time_print_rfc_822",test_x509_time_print_rfc_822,7,1);
  add_all_tests("test_x509_time_print_iso_8601",0x100000,7,1);
  return 1;
}



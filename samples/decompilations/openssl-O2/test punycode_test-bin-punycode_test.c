
void test_a2ulabel_bad_decode(int param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ossl_a2ulabel((long)param_1 * 0x20 + 0x100f08,auStack_28,
                        *(undefined8 *)(bad_decode_tests + (long)param_1 * 0x20));
  test_int_eq("test/punycode_test.c",0xbb,
              "ossl_a2ulabel(bad_decode_tests[tst].input, out, bad_decode_tests[tst].outlen)",&_LC0,
              uVar1,0xffffffff);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_puny_overrun(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_4c;
  undefined1 local_48 [40];
  long local_20;
  
  uVar2 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 7;
  iVar1 = ossl_punycode_decode("3B-ww4c5e180e575a65lsy2b",0x18,local_48,&local_4c);
  iVar1 = test_false("test/punycode_test.c",0xe7,"ossl_punycode_decode(in, strlen(in), buf, &bsize)"
                     ,iVar1 != 0);
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = test_mem_eq("test/punycode_test.c",0xe8,&_LC6,&_LC5,local_48,(ulong)local_4c * 4);
    if (iVar1 != 0) {
      test_error("test/punycode_test.c",0xe9,"CRITICAL: buffer overrun detected!",0x20);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_punycode(int param_1)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  uint local_ec;
  undefined1 local_e8 [200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_ec = 0x32;
  __s = *(char **)(&DAT_00101068 + (long)param_1 * 0xd0);
  sVar2 = strlen(__s);
  iVar1 = ossl_punycode_decode(__s,sVar2,local_e8,&local_ec);
  uVar3 = test_true("test/punycode_test.c",0xa0,
                    "ossl_punycode_decode(tc->encoded, strlen(tc->encoded), buffer, &bsize)",
                    iVar1 != 0);
  if ((int)uVar3 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(&puny_cases + (long)param_1 * 0xd0 + lVar4 * 4) == 0) {
        lVar4 = lVar4 << 2;
        goto LAB_0010021d;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x32);
    lVar4 = 200;
LAB_0010021d:
    iVar1 = test_mem_eq("test/punycode_test.c",0xa6,"buffer","tc->raw",local_e8,(ulong)local_ec * 4,
                        &puny_cases + (long)param_1 * 0xd0,lVar4);
    uVar3 = (ulong)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_dotted_overflow(void)

{
  int iVar1;
  undefined4 uVar2;
  BUF_MEM *a;
  char *__s;
  size_t sVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 auStack_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = BUF_MEM_new();
  iVar1 = test_ptr("test/punycode_test.c",0xfa,"in = BUF_MEM_new()",a);
  if (iVar1 == 0) {
    bVar5 = false;
    goto LAB_00100405;
  }
  iVar1 = WPACKET_init_len(auStack_78,a,0);
  uVar4 = 0;
  iVar1 = test_true("test/punycode_test.c",0xfc,"WPACKET_init_len(&p, in, 0)",iVar1 != 0);
  if (iVar1 == 0) {
    bVar5 = false;
    BUF_MEM_free(a);
    goto LAB_00100405;
  }
  do {
    for (; uVar4 < 2; uVar4 = uVar4 + 1) {
      iVar1 = WPACKET_memcpy(auStack_78,"xn--a",5);
      iVar1 = test_true("test/punycode_test.c",0x103,
                        "WPACKET_memcpy(&p, \"xn--a\", sizeof(\"xn--a\") - 1)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_001003e0;
    }
    iVar1 = WPACKET_put_bytes__(auStack_78,0x2e,1);
    iVar1 = test_true("test/punycode_test.c",0x101,"WPACKET_put_bytes_u8(&p, \'.\')",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001003e0;
    iVar1 = WPACKET_memcpy(auStack_78,"xn--a",5);
    iVar1 = test_true("test/punycode_test.c",0x103,
                      "WPACKET_memcpy(&p, \"xn--a\", sizeof(\"xn--a\") - 1)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001003e0;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x16);
  iVar1 = WPACKET_put_bytes__(auStack_78,0,1);
  iVar1 = test_true("test/punycode_test.c",0x106,"WPACKET_put_bytes_u8(&p, \'\\0\')",iVar1 != 0);
  if (iVar1 == 0) {
LAB_001003e0:
    bVar5 = false;
    __s = (char *)0x0;
  }
  else {
    __s = (char *)CRYPTO_malloc((int)a->length,"test/punycode_test.c",0x108);
    iVar1 = test_ptr("test/punycode_test.c",0x108,"out = OPENSSL_malloc(in->length)",__s);
    if (iVar1 != 0) {
      memset(__s,0x7f,a->length - 1);
      uVar2 = ossl_a2ulabel(a->data,__s,0x16);
      iVar1 = test_int_le("test/punycode_test.c",0x10d,"ossl_a2ulabel(in->data, out, num_reps)",
                          &_LC18,uVar2,0);
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/punycode_test.c",0x10e,"out[num_reps]",&_LC20,(int)__s[0x16],0x7f)
        ;
        if (iVar1 != 0) {
          uVar2 = ossl_a2ulabel(a->data,__s,a->length);
          iVar1 = test_int_gt("test/punycode_test.c",0x112,
                              "ossl_a2ulabel(in->data, out, in->length)",&_LC18,uVar2,0);
          if (iVar1 != 0) {
            sVar3 = strlen(__s);
            iVar1 = test_size_t_eq("test/punycode_test.c",0x113,"strlen(out)","num_reps * 3",sVar3,
                                   0x42);
            bVar5 = iVar1 != 0;
            goto LAB_001003e5;
          }
        }
      }
    }
    bVar5 = false;
  }
LAB_001003e5:
  WPACKET_cleanup(auStack_78);
  BUF_MEM_free(a);
  CRYPTO_free(__s);
LAB_00100405:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_a2ulabel(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  byte bVar6;
  undefined1 auStack_298 [64];
  undefined1 local_258 [8];
  undefined8 auStack_250 [62];
  undefined8 local_5b;
  undefined4 local_53;
  long local_40;
  
  bVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined8 *)local_258;
  for (lVar3 = 0x42; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  uVar1 = ossl_a2ulabel("xn--a.b.c",auStack_298,1);
  iVar2 = test_int_eq("test/punycode_test.c",199,"ossl_a2ulabel(\"xn--a.b.c\", out, 1)",&_LC18,uVar1
                      ,0);
  if (iVar2 != 0) {
    uVar1 = ossl_a2ulabel("xn--a.b.c",auStack_298,7);
    iVar2 = test_int_eq("test/punycode_test.c",200,"ossl_a2ulabel(\"xn--a.b.c\", out, 7)",&_LC27,
                        uVar1,1);
    if (iVar2 != 0) {
      uVar1 = ossl_a2ulabel("xn--a.b.c",auStack_298,6);
      iVar2 = test_int_eq("test/punycode_test.c",0xcb,"ossl_a2ulabel(\"xn--a.b.c\", out, 6)",&_LC18,
                          uVar1,0);
      if (iVar2 != 0) {
        uVar1 = ossl_a2ulabel("xn--a.b.c",auStack_298,7);
        iVar2 = test_int_eq("test/punycode_test.c",0xcc,"ossl_a2ulabel(\"xn--a.b.c\", out, 7)",
                            &_LC27,uVar1,1);
        if (iVar2 != 0) {
          iVar2 = test_str_eq("test/punycode_test.c",0xcd,&_LC5,"\"\\xc2\\x80.b.c\"",auStack_298,
                              &_LC30);
          if (iVar2 != 0) {
            uVar1 = ossl_a2ulabel("xn--e28h.com",auStack_298,10);
            iVar2 = test_int_eq("test/punycode_test.c",0xd1,
                                "ossl_a2ulabel(\"xn--e28h.com\", out, 10)",&_LC27,uVar1,1);
            if (iVar2 != 0) {
              local_258._0_4_ = 0x2d2d6e78;
              stack0xfffffffffffffdac = 0x6565656565656565;
              local_5b = 0x6565656565656565;
              puVar4 = auStack_250;
              for (lVar3 = 0x3f; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar4 = 0x6565656565656565;
                puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
              }
              local_53 = 0x6179332d;
              uVar1 = ossl_a2ulabel(local_258,auStack_298,0x32);
              iVar2 = test_int_eq("test/punycode_test.c",0xd8,"ossl_a2ulabel(in, out, 50)",&_LC0,
                                  uVar1,0xffffffff);
              bVar5 = iVar2 != 0;
              goto LAB_00100628;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_00100628:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_punycode",test_punycode,0x14,1);
  add_test("test_dotted_overflow",test_dotted_overflow);
  add_test("test_a2ulabel",test_a2ulabel);
  add_test("test_puny_overrun",test_puny_overrun);
  add_all_tests("test_a2ulabel_bad_decode",0x100000,5,1);
  return 1;
}



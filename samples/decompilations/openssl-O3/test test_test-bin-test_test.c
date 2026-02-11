
void test_skip_many(undefined4 param_1)

{
  test_skip("test/test_test.c",0x21d,"skip tests: %d",param_1);
  return;
}



void test_skip_null(void)

{
  test_skip("test/test_test.c",0x226,0);
  return;
}



void test_skip_one(void)

{
  test_skip("test/test_test.c",0x218,"skip test");
  return;
}



undefined8 test_bn_output(int param_1)

{
  char *str;
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BIGNUM *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (BIGNUM *)0x0;
  str = *(char **)(bn_output_tests + (long)param_1 * 8);
  if (str != (char *)0x0) {
    iVar1 = BN_hex2bn(&local_18,str);
    uVar2 = test_true("test/test_test.c",0x20f,"BN_hex2bn(&b, bn_output_tests[n])",iVar1 != 0);
    if ((int)uVar2 == 0) goto LAB_001000dc;
  }
  test_output_bignum(str,local_18);
  BN_free(local_18);
  uVar2 = 1;
LAB_001000dc:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 test_output(void)

{
  long in_FS_OFFSET;
  char local_98 [8];
  char acStack_90 [8];
  char local_88 [8];
  char acStack_80 [8];
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char cStack_40;
  undefined7 uStack_3f;
  char cStack_38;
  char acStack_37 [23];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (char  [8])_LC5._0_8_;
  acStack_90 = (char  [8])_LC5._8_8_;
  local_88 = (char  [8])_LC5._16_8_;
  acStack_80 = (char  [8])_LC5._24_8_;
  local_78 = (char  [8])_LC5._32_8_;
  acStack_70 = (char  [8])_LC5._40_8_;
  local_68 = (char  [8])_LC5._48_8_;
  acStack_60 = (char  [8])_LC5._56_8_;
  local_58 = (char  [8])_LC5._64_8_;
  acStack_50 = (char  [8])_LC5._72_8_;
  local_48 = (char  [8])_LC5._80_8_;
  cStack_40 = (char)_LC5._88_8_;
  uStack_3f = (undefined7)_LC5._96_8_;
  cStack_38 = SUB81(_LC5._96_8_,7);
  acStack_37._0_8_ = _LC5._104_8_;
  test_output_string(&_LC4,local_98,0x68);
  test_output_memory(&_LC4,local_98,0x69);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_single_eval(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar2 = test_int_eq("test/test_test.c",0x1cb,&_LC13,&_LC12,4,4);
  if (iVar2 != 0) {
    iVar2 = test_int_eq("test/test_test.c",0x1cc,&_LC15,&_LC14,5,5);
    if (iVar2 != 0) {
      iVar2 = test_int_gt("test/test_test.c",0x1cd,&_LC16,&_LC14,6,5);
      if (iVar2 != 0) {
        iVar2 = test_int_le("test/test_test.c",0x1ce,&_LC14,&_LC13,5,6);
        if (iVar2 != 0) {
          iVar2 = test_int_ne("test/test_test.c",0x1cf,&_LC17,&_LC14,6,5);
          if (iVar2 != 0) {
            iVar2 = test_int_eq("test/test_test.c",0x1d0,&_LC19,"i *= 2",0xc,0xc);
            if (iVar2 != 0) {
              iVar2 = test_long_eq("test/test_test.c",0x1d2,&_LC21,"-9000L",0xffffffffffffdcd8,
                                   0xffffffffffffdcd8);
              if (iVar2 != 0) {
                iVar2 = test_long_eq("test/test_test.c",0x1d3,&_LC22,"-9000L",0xffffffffffffdcd8,
                                     0xffffffffffffdcd8);
                if (iVar2 != 0) {
                  iVar2 = test_long_ne("test/test_test.c",0x1d4,"-9000L","l /= 2",0xffffffffffffdcd8
                                       ,0xffffffffffffee6c);
                  if (iVar2 != 0) {
                    iVar2 = test_long_lt("test/test_test.c",0x1d5,&_LC25,"-4500L",0xffffffffffffee6b
                                         ,0xffffffffffffee6c);
                    if (iVar2 != 0) {
                      iVar2 = test_char_eq("test/test_test.c",0x1d7,&_LC27,&_LC26,0x65,0x65);
                      if (iVar2 != 0) {
                        iVar2 = test_char_eq("test/test_test.c",0x1d8,&_LC26,&_LC28,0x65,0x65);
                        if (iVar2 != 0) {
                          iVar2 = test_char_ne("test/test_test.c",0x1d9,&_LC30,&_LC29,100,99);
                          if (iVar2 != 0) {
                            iVar2 = test_char_le("test/test_test.c",0x1da,&_LC31,&_LC29,0x62,0x62);
                            if (iVar2 != 0) {
                              iVar2 = test_char_lt("test/test_test.c",0x1db,&_LC33,&_LC32,0x62,99);
                              if (iVar2 != 0) {
                                iVar2 = test_uchar_eq("test/test_test.c",0x1dd,&_LC35,&_LC34,0x16,
                                                      0x16);
                                if (iVar2 != 0) {
                                  iVar2 = test_uchar_eq("test/test_test.c",0x1de,"uc /= 2",&_LC36,
                                                        0xb,0xb);
                                  if (iVar2 != 0) {
                                    iVar2 = test_ulong_eq("test/test_test.c",0x1df,"ul ^= 1",&_LC38,
                                                          0x1f5,0x1f5);
                                    if (iVar2 != 0) {
                                      iVar2 = test_ulong_eq("test/test_test.c",0x1e0,&_LC41,
                                                            "ul ^= 3",0x1f6,0x1f6);
                                      if (iVar2 != 0) {
                                        iVar2 = test_ulong_eq("test/test_test.c",0x1e1,
                                                              "ul = ul * 3 - 6",&_LC42,0x5dc,0x5dc);
                                        if (iVar2 != 0) {
                                          iVar2 = test_size_t_eq("test/test_test.c",0x1e3,
                                                                 "(--i, st++)",&_LC44,0x4d2,0x4d2);
                                          if (iVar2 != 0) {
                                            iVar2 = test_size_t_eq("test/test_test.c",0x1e4,&_LC47,
                                                                   &_LC46,0x4d3,0x4d3);
                                            if (iVar2 != 0) {
                                              iVar2 = test_int_eq("test/test_test.c",0x1e5,&_LC36,
                                                                  &_LC15,0xb,0xb);
                                              if (iVar2 != 0) {
                                                iVar2 = test_ptr_eq("test/test_test.c",0x1e7,&_LC49,
                                                                    &_LC48,&local_34,&local_34);
                                                if (iVar2 != 0) {
                                                  iVar2 = test_ptr_eq("test/test_test.c",0x1e8,
                                                                      "buf + 2",&_LC50,
                                                                      (long)&local_34 + 2,
                                                                      (long)&local_34 + 2);
                                                  if (iVar2 != 0) {
                                                    iVar2 = test_ptr_eq("test/test_test.c",0x1e9,
                                                                        &_LC48,"p -= 2",&local_34,
                                                                        &local_34);
                                                    if (iVar2 != 0) {
                                                      lVar1 = (long)&local_34 + 1;
                                                      iVar2 = test_ptr("test/test_test.c",0x1ea,
                                                                       &_LC50,lVar1);
                                                      if (iVar2 != 0) {
                                                        iVar2 = test_ptr_eq("test/test_test.c",0x1eb
                                                                            ,&_LC54,"buf + 1",lVar1,
                                                                            lVar1);
                                                        if (iVar2 != 0) {
                                                          iVar2 = test_ptr_null("test/test_test.c",
                                                                                0x1ec,"p = NULL",0);
                                                          if (iVar2 != 0) {
                                                            iVar2 = test_str_eq("test/test_test.c",
                                                                                0x1ee,
                                                  "p = &(\"123456\"[1])","\"23456\"",&DAT_0010420d,
                                                  "23456");
                                                  if (iVar2 != 0) {
                                                    iVar2 = test_str_eq("test/test_test.c",0x1ef,
                                                                        "\"3456\"",&_LC50,&_LC60,
                                                                        &DAT_0010420e);
                                                    if (iVar2 != 0) {
                                                      iVar2 = test_str_ne("test/test_test.c",0x1f0,
                                                                          &_LC49,"\"456\"",
                                                                          &DAT_0010420e,&_LC62);
                                                      if (iVar2 != 0) {
                                                        iVar2 = test_mem_eq("test/test_test.c",0x1f2
                                                                            ,&_LC64,"\"3456\"",
                                                                            &DAT_0010420e,5,&_LC60,5
                                                                           );
                                                        if (iVar2 != 0) {
                                                          iVar2 = test_mem_ne("test/test_test.c",499
                                                                              ,&_LC49,"\"456\"",
                                                                              &DAT_0010420e,4,&_LC62
                                                                              ,4);
                                                          if (iVar2 != 0) {
                                                            iVar2 = test_mem_eq("test/test_test.c",
                                                                                500,&_LC65,"\"456\""
                                                                                ,&DAT_0010420f,4,
                                                                                &_LC62,4);
                                                            bVar3 = iVar2 != 0;
                                                            goto LAB_0010023f;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0010023f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_messages(void)

{
  test_info("test/test_test.c",0x1bb,"This is an %s message.",&_LC66);
  test_error("test/test_test.c",0x1bc,"This is an %s message.","error");
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_case_part_0_constprop_1(undefined8 param_1)

{
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",param_1,1);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_memory_overflow(void)

{
  int iVar1;
  
  iVar1 = test_mem_eq("test/test_test.c",0x135,&_LC54,&_LC71,
                      "1234567890123456789012345678901234567890123456789012",0x34,
                      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",0x34);
  if (iVar1 == 0) {
    return 1;
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_mem_eq(p, strlen(p), q, strlen(q))",0);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] test_long_output(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong extraout_RDX;
  ulong uVar3;
  undefined1 auVar4 [16];
  char *pcVar5;
  
  iVar2 = test_str_eq("test/test_test.c",0x18b,&_LC54,&_LC71,
                      "1234567890123456789012345678901234567890123456789012",
                      "1234567890klmnopqrs01234567890EFGHIJKLM0123456789XYZ");
  if (iVar2 != 0) {
    __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_str_eq(p, q)",0);
  }
  uVar3 = (ulong)(iVar2 == 0);
  iVar2 = test_str_eq("test/test_test.c",0x18c,&_LC71,&_LC77,
                      "1234567890klmnopqrs01234567890EFGHIJKLM0123456789XYZ",
                      "1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY+12345678901234567890123ABC78901234567890123456789012"
                     );
  if (iVar2 != 0) {
    uVar3 = 0;
    __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_str_eq(q, r)",0);
  }
  iVar2 = test_str_eq("test/test_test.c",0x18d,&_LC77,&_LC80,
                      "1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY+12345678901234567890123ABC78901234567890123456789012"
                      ,
                      "1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY-1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                     );
  if (iVar2 != 0) {
    uVar3 = 0;
    __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_str_eq(r, s)",0);
  }
  pcVar5 = 
  "1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY-1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
  ;
  iVar2 = test_mem_eq("test/test_test.c",0x18e,&_LC77,&_LC80,
                      "1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY+12345678901234567890123ABC78901234567890123456789012"
                      ,0x9c,
                      "1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY-1234567890123456789012345678901234567890123456789012abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      ,0xd0);
  if (iVar2 == 0) {
    auVar4._8_8_ = pcVar5;
    auVar4._0_8_ = uVar3;
    return auVar4;
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_mem_eq(r, strlen(r), s, strlen(s))",0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = extraout_RDX;
  return auVar1 << 0x40;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_bool(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_true("test/test_test.c",0xf5,&_LC83,0);
  uVar3 = 0;
  pcVar2 = "TEST_true(0)";
  if (iVar1 == 0) {
    iVar1 = test_true("test/test_test.c",0xf6,&_LC85,1,0);
    if (iVar1 == 1) {
      iVar1 = test_false("test/test_test.c",0xf7,&_LC83,0);
      uVar3 = 1;
      pcVar2 = "TEST_false(0)";
      if (iVar1 == 1) {
        iVar1 = test_false("test/test_test.c",0xf8,&_LC85,1,1);
        uVar3 = 0;
        pcVar2 = "TEST_false(1)";
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
    else {
      uVar3 = 1;
      pcVar2 = "TEST_true(1)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_memory(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  iVar1 = test_mem_eq("test/test_test.c",0x11d,&_LC89,&_LC89,0,0,0,0);
  uVar4 = 1;
  pcVar3 = "TEST_mem_eq(NULL, 0, NULL, 0)";
  if (iVar1 == 1) {
    iVar1 = test_mem_eq("test/test_test.c",0x11e,&_LC89,&_LC89,0,1,0,2);
    if (iVar1 == 1) {
      iVar1 = test_mem_eq("test/test_test.c",0x11f,&_LC89,"\"xyz\"",0,0,&_LC93,3);
      uVar4 = 0;
      pcVar3 = "TEST_mem_eq(NULL, 0, \"xyz\", 3)";
      if (iVar1 == 0) {
        iVar1 = test_mem_eq("test/test_test.c",0x120,&_LC89,"\"abc\"",0,7,&_LC96,3);
        uVar4 = 0;
        pcVar3 = "TEST_mem_eq(NULL, 7, \"abc\", 3)";
        if (iVar1 == 0) {
          iVar1 = test_mem_ne("test/test_test.c",0x121,&_LC89,&_LC89,0,0,0,0);
          pcVar3 = "TEST_mem_ne(NULL, 0, NULL, 0)";
          uVar4 = 0;
          if (iVar1 == 0) {
            iVar1 = test_mem_eq("test/test_test.c",0x122,&_LC89,&_LC99,0,0,&_LC100,0);
            uVar4 = 0;
            pcVar3 = "TEST_mem_eq(NULL, 0, \"\", 0)";
            if (iVar1 == 0) {
              iVar1 = test_mem_eq("test/test_test.c",0x123,&_LC99,&_LC89,&_LC100,0,0,0);
              uVar4 = 0;
              pcVar3 = "TEST_mem_eq(\"\", 0, NULL, 0)";
              if (iVar1 == 0) {
                iVar1 = test_mem_ne("test/test_test.c",0x124,&_LC99,&_LC99,&_LC100,0,&_LC100,0);
                uVar4 = 0;
                pcVar3 = "TEST_mem_ne(\"\", 0, \"\", 0)";
                if (iVar1 == 0) {
                  iVar1 = test_mem_eq("test/test_test.c",0x125,"\"xyz\"",&_LC89,&_LC93,3,0,0);
                  pcVar3 = "TEST_mem_eq(\"xyz\", 3, NULL, 0)";
                  uVar4 = 0;
                  if (iVar1 == 0) {
                    iVar1 = test_mem_eq("test/test_test.c",0x126,"\"xyz\"",&_LC48,&_LC93,3,&buf_1,4)
                    ;
                    uVar4 = 0;
                    pcVar3 = "TEST_mem_eq(\"xyz\", 3, buf, sizeof(buf))";
                    if (iVar1 == 0) {
                      uVar2 = test_mem_eq("test/test_test.c",0x127,"\"xyz\"",&_LC48,&_LC93,4,&buf_1,
                                          4);
                      uVar4 = 1;
                      pcVar3 = "TEST_mem_eq(\"xyz\", 4, buf, sizeof(buf))";
                      if ((int)uVar2 == 1) {
                        return uVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar4 = 1;
      pcVar3 = "TEST_mem_eq(NULL, 1, NULL, 2)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar3,uVar4);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_pointer(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_45;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  local_45 = 1;
  iVar1 = test_ptr("test/test_test.c",0xde,&_LC107,&local_45);
  uVar4 = 1;
  pcVar2 = "TEST_ptr(&y)";
  if (iVar1 == 1) {
    iVar1 = test_ptr("test/test_test.c",0xdf,&_LC89,0,1);
    if (iVar1 == 0) {
      iVar1 = test_ptr_null("test/test_test.c",0xe0,&_LC107,&local_45);
      uVar4 = 0;
      pcVar2 = "TEST_ptr_null(&y)";
      if (iVar1 == 0) {
        iVar1 = test_ptr_null("test/test_test.c",0xe1,&_LC89,0,0);
        uVar4 = 1;
        pcVar2 = "TEST_ptr_null(NULL)";
        if (iVar1 == 1) {
          iVar1 = test_ptr_eq("test/test_test.c",0xe2,&_LC89,&_LC89,0,0);
          uVar4 = 1;
          pcVar2 = "TEST_ptr_eq(NULL, NULL)";
          if (iVar1 == 1) {
            iVar1 = test_ptr_eq("test/test_test.c",0xe3,&_LC89,&_LC107,0,&local_45);
            uVar4 = 0;
            pcVar2 = "TEST_ptr_eq(NULL, &y)";
            if (iVar1 == 0) {
              iVar1 = test_ptr_eq("test/test_test.c",0xe4,&_LC107,&_LC89,&local_45,0);
              uVar4 = 0;
              pcVar2 = "TEST_ptr_eq(&y, NULL)";
              if (iVar1 == 0) {
                iVar1 = test_ptr_eq("test/test_test.c",0xe5,&_LC107,&_LC115,&local_45,&local_44);
                uVar4 = 0;
                pcVar2 = "TEST_ptr_eq(&y, &x)";
                if (iVar1 == 0) {
                  iVar1 = test_ptr_eq("test/test_test.c",0xe6,&_LC115,&_LC115,&local_44,&local_44);
                  uVar4 = 1;
                  pcVar2 = "TEST_ptr_eq(&x, &x)";
                  if (iVar1 == 1) {
                    iVar1 = test_ptr_ne("test/test_test.c",0xe7,&_LC89,&_LC89,0,0);
                    uVar4 = 0;
                    pcVar2 = "TEST_ptr_ne(NULL, NULL)";
                    if (iVar1 == 0) {
                      iVar1 = test_ptr_ne("test/test_test.c",0xe8,&_LC89,&_LC107,0,&local_45);
                      uVar4 = 1;
                      pcVar2 = "TEST_ptr_ne(NULL, &y)";
                      if (iVar1 == 1) {
                        iVar1 = test_ptr_ne("test/test_test.c",0xe9,&_LC107,&_LC89,&local_45,0);
                        uVar4 = 1;
                        pcVar2 = "TEST_ptr_ne(&y, NULL)";
                        if (iVar1 == 1) {
                          iVar1 = test_ptr_ne("test/test_test.c",0xea,&_LC107,&_LC115,&local_45,
                                              &local_44);
                          uVar4 = 1;
                          pcVar2 = "TEST_ptr_ne(&y, &x)";
                          if (iVar1 == 1) {
                            iVar1 = test_ptr_ne("test/test_test.c",0xeb,&_LC115,&_LC115,&local_44,
                                                &local_44);
                            uVar4 = 0;
                            pcVar2 = "TEST_ptr_ne(&x, &x)";
                            uVar3 = 1;
                            if (iVar1 == 0) goto LAB_001011ac;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar4 = 0;
      pcVar2 = "TEST_ptr(NULL)";
    }
  }
  uVar3 = 0;
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar4);
LAB_001011ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_uint(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_uint_eq("test/test_test.c",0x3a,&_LC123,&_LC123,3,3);
  uVar3 = 1;
  pcVar2 = "TEST_uint_eq(3u, 3u)";
  if (iVar1 == 1) {
    iVar1 = test_uint_eq("test/test_test.c",0x3b,&_LC123,&_LC125,3,5);
    if (iVar1 == 0) {
      iVar1 = test_uint_ne("test/test_test.c",0x3c,&_LC128,&_LC127,4,2);
      uVar3 = 1;
      pcVar2 = "TEST_uint_ne(4u, 2u)";
      if (iVar1 == 1) {
        iVar1 = test_uint_ne("test/test_test.c",0x3d,&_LC130,&_LC130,6,6);
        uVar3 = 0;
        pcVar2 = "TEST_uint_ne(6u, 6u)";
        if (iVar1 == 0) {
          iVar1 = test_uint_lt("test/test_test.c",0x3e,&_LC125,&_LC132,5,9);
          uVar3 = 1;
          pcVar2 = "TEST_uint_lt(5u, 9u)";
          if (iVar1 == 1) {
            iVar1 = test_uint_lt("test/test_test.c",0x3f,&_LC132,&_LC125,9,5);
            uVar3 = 0;
            pcVar2 = "TEST_uint_lt(9u, 5u)";
            if (iVar1 == 0) {
              iVar1 = test_uint_le("test/test_test.c",0x40,&_LC125,&_LC132,5,9);
              uVar3 = 1;
              pcVar2 = "TEST_uint_le(5u, 9u)";
              if (iVar1 == 1) {
                iVar1 = test_uint_le("test/test_test.c",0x41,&_LC136,&_LC136,7,7);
                uVar3 = 1;
                pcVar2 = "TEST_uint_le(7u, 7u)";
                if (iVar1 == 1) {
                  iVar1 = test_uint_le("test/test_test.c",0x42,&_LC132,&_LC125,9,5);
                  uVar3 = 0;
                  pcVar2 = "TEST_uint_le(9u, 5u)";
                  if (iVar1 == 0) {
                    iVar1 = test_uint_gt("test/test_test.c",0x43,&_LC140,&_LC139,0xb,1);
                    uVar3 = 1;
                    pcVar2 = "TEST_uint_gt(11u, 1u)";
                    if (iVar1 == 1) {
                      iVar1 = test_uint_gt("test/test_test.c",0x44,&_LC139,&_LC140,1,0xb);
                      uVar3 = 0;
                      pcVar2 = "TEST_uint_gt(1u, 11u)";
                      if (iVar1 == 0) {
                        iVar1 = test_uint_ge("test/test_test.c",0x45,&_LC140,&_LC139,0xb,1);
                        uVar3 = 1;
                        pcVar2 = "TEST_uint_ge(11u, 1u)";
                        if (iVar1 == 1) {
                          iVar1 = test_uint_ge("test/test_test.c",0x46,&_LC130,&_LC130,6,6);
                          uVar3 = 1;
                          pcVar2 = "TEST_uint_ge(6u, 6u)";
                          if (iVar1 == 1) {
                            iVar1 = test_uint_ge("test/test_test.c",0x47,&_LC139,&_LC140,1,0xb);
                            uVar3 = 0;
                            pcVar2 = "TEST_uint_ge(1u, 11u)";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_uint_eq(3u, 5u)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_string(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_str_eq("test/test_test.c",0x104,&_LC89,&_LC89,0,0);
  uVar3 = 1;
  pcVar2 = "TEST_str_eq(NULL, NULL)";
  if (iVar1 == 1) {
    iVar1 = test_str_eq("test/test_test.c",0x105,"\"abc\"",&_LC48,&_LC96,&buf_0);
    if (iVar1 == 1) {
      iVar1 = test_str_eq("test/test_test.c",0x106,"\"abc\"",&_LC89,&_LC96,0);
      uVar3 = 0;
      pcVar2 = "TEST_str_eq(\"abc\", NULL)";
      if (iVar1 == 0) {
        iVar1 = test_str_eq("test/test_test.c",0x107,"\"abc\"",&_LC99,&_LC96,&_LC100);
        uVar3 = 0;
        pcVar2 = "TEST_str_eq(\"abc\", \"\")";
        if (iVar1 == 0) {
          iVar1 = test_str_eq("test/test_test.c",0x108,&_LC89,&_LC48,0,&buf_0);
          uVar3 = 0;
          pcVar2 = "TEST_str_eq(NULL, buf)";
          if (iVar1 == 0) {
            iVar1 = test_str_ne("test/test_test.c",0x109,&_LC89,&_LC89,0,0);
            uVar3 = 0;
            pcVar2 = "TEST_str_ne(NULL, NULL)";
            if (iVar1 == 0) {
              iVar1 = test_str_eq("test/test_test.c",0x10a,&_LC99,&_LC89,&_LC100,0);
              uVar3 = 0;
              pcVar2 = "TEST_str_eq(\"\", NULL)";
              if (iVar1 == 0) {
                iVar1 = test_str_eq("test/test_test.c",0x10b,&_LC89,&_LC99,0,&_LC100);
                uVar3 = 0;
                pcVar2 = "TEST_str_eq(NULL, \"\")";
                if (iVar1 == 0) {
                  iVar1 = test_str_ne("test/test_test.c",0x10c,&_LC99,&_LC99,&_LC100);
                  uVar3 = 0;
                  pcVar2 = "TEST_str_ne(\"\", \"\")";
                  if (iVar1 == 0) {
                    iVar1 = test_str_eq("test/test_test.c",0x10d,"\"\\1\\2\\3\\4\\5\"",
                                        "\"\\1x\\3\\6\\5\"",&_LC156,&_LC155);
                    uVar3 = 0;
                    pcVar2 = "TEST_str_eq(\"\\1\\2\\3\\4\\5\", \"\\1x\\3\\6\\5\")";
                    if (iVar1 == 0) {
                      iVar1 = test_str_ne("test/test_test.c",0x10e,"\"abc\"",&_LC48,&_LC96,&buf_0);
                      uVar3 = 0;
                      pcVar2 = "TEST_str_ne(\"abc\", buf)";
                      if (iVar1 == 0) {
                        iVar1 = test_str_ne("test/test_test.c",0x10f,"\"abc\"",&_LC89,&_LC96,0);
                        uVar3 = 1;
                        pcVar2 = "TEST_str_ne(\"abc\", NULL)";
                        if (iVar1 == 1) {
                          iVar1 = test_str_ne("test/test_test.c",0x110,&_LC89,&_LC48,0,&buf_0);
                          uVar3 = 1;
                          pcVar2 = "TEST_str_ne(NULL, buf)";
                          if (iVar1 == 1) {
                            iVar1 = test_str_eq("test/test_test.c",0x111,"\"abcdef\"",
                                                "\"abcdefghijk\"","abcdef","abcdefghijk");
                            uVar3 = 0;
                            pcVar2 = "TEST_str_eq(\"abcdef\", \"abcdefghijk\")";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 1;
      pcVar2 = "TEST_str_eq(\"abc\", buf)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_size_t(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_size_t_eq("test/test_test.c",0xad,"(size_t)10","(size_t)10",10,10);
  uVar3 = 1;
  pcVar2 = "TEST_size_t_eq((size_t)10, (size_t)10)";
  if (iVar1 == 1) {
    iVar1 = test_size_t_eq("test/test_test.c",0xae,"(size_t)10","(size_t)12",10,0xc);
    if (iVar1 == 0) {
      iVar1 = test_size_t_ne("test/test_test.c",0xaf,"(size_t)10","(size_t)12",10,0xc);
      uVar3 = 1;
      pcVar2 = "TEST_size_t_ne((size_t)10, (size_t)12)";
      if (iVar1 == 1) {
        iVar1 = test_size_t_ne("test/test_test.c",0xb0,"(size_t)24","(size_t)24",0x18,0x18);
        uVar3 = 0;
        pcVar2 = "TEST_size_t_ne((size_t)24, (size_t)24)";
        if (iVar1 == 0) {
          iVar1 = test_size_t_lt("test/test_test.c",0xb1,"(size_t)30","(size_t)88",0x1e,0x58);
          uVar3 = 1;
          pcVar2 = "TEST_size_t_lt((size_t)30, (size_t)88)";
          if (iVar1 == 1) {
            iVar1 = test_size_t_lt("test/test_test.c",0xb2,"(size_t)88","(size_t)30",0x58,0x1e);
            uVar3 = 0;
            pcVar2 = "TEST_size_t_lt((size_t)88, (size_t)30)";
            if (iVar1 == 0) {
              iVar1 = test_size_t_le("test/test_test.c",0xb3,"(size_t)30","(size_t)88",0x1e,0x58);
              uVar3 = 1;
              pcVar2 = "TEST_size_t_le((size_t)30, (size_t)88)";
              if (iVar1 == 1) {
                iVar1 = test_size_t_le("test/test_test.c",0xb4,"(size_t)33","(size_t)33",0x21,0x21);
                uVar3 = 1;
                pcVar2 = "TEST_size_t_le((size_t)33, (size_t)33)";
                if (iVar1 == 1) {
                  iVar1 = test_size_t_le("test/test_test.c",0xb5,"(size_t)88","(size_t)30",0x58,0x1e
                                        );
                  uVar3 = 0;
                  pcVar2 = "TEST_size_t_le((size_t)88, (size_t)30)";
                  if (iVar1 == 0) {
                    iVar1 = test_size_t_gt("test/test_test.c",0xb6,"(size_t)52","(size_t)33",0x34,
                                           0x21);
                    uVar3 = 1;
                    pcVar2 = "TEST_size_t_gt((size_t)52, (size_t)33)";
                    if (iVar1 == 1) {
                      iVar1 = test_size_t_gt("test/test_test.c",0xb7,"(size_t)33","(size_t)52",0x21,
                                             0x34);
                      uVar3 = 0;
                      pcVar2 = "TEST_size_t_gt((size_t)33, (size_t)52)";
                      if (iVar1 == 0) {
                        iVar1 = test_size_t_ge("test/test_test.c",0xb8,"(size_t)52","(size_t)33",
                                               0x34,0x21);
                        uVar3 = 1;
                        pcVar2 = "TEST_size_t_ge((size_t)52, (size_t)33)";
                        if (iVar1 == 1) {
                          iVar1 = test_size_t_ge("test/test_test.c",0xb9,"(size_t)38","(size_t)38",
                                                 0x26,0x26);
                          uVar3 = 1;
                          pcVar2 = "TEST_size_t_ge((size_t)38, (size_t)38)";
                          if (iVar1 == 1) {
                            iVar1 = test_size_t_ge("test/test_test.c",0xba,"(size_t)33","(size_t)52"
                                                   ,0x21,0x34);
                            uVar3 = 0;
                            pcVar2 = "TEST_size_t_ge((size_t)33, (size_t)52)";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_size_t_eq((size_t)10, (size_t)12)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_uchar(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_uchar_eq("test/test_test.c",0x68,&_LC190,&_LC190,0x31,0x31);
  uVar3 = 1;
  pcVar2 = "TEST_uchar_eq(49, 49)";
  if (iVar1 == 1) {
    iVar1 = test_uchar_eq("test/test_test.c",0x69,&_LC190,&_LC192,0x31,0x3c);
    if (iVar1 == 0) {
      iVar1 = test_uchar_ne("test/test_test.c",0x6a,&_LC195,&_LC194,0x32,2);
      uVar3 = 1;
      pcVar2 = "TEST_uchar_ne(50, 2)";
      if (iVar1 == 1) {
        iVar1 = test_uchar_ne("test/test_test.c",0x6b,&_LC197,&_LC197,0x42,0x42);
        uVar3 = 0;
        pcVar2 = "TEST_uchar_ne(66, 66)";
        if (iVar1 == 0) {
          iVar1 = test_uchar_lt("test/test_test.c",0x6c,&_LC192,&_LC199,0x3c,0x50);
          uVar3 = 1;
          pcVar2 = "TEST_uchar_lt(60, 80)";
          if (iVar1 == 1) {
            iVar1 = test_uchar_lt("test/test_test.c",0x6d,&_LC199,&_LC192,0x50,0x3c);
            uVar3 = 0;
            pcVar2 = "TEST_uchar_lt(80, 60)";
            if (iVar1 == 0) {
              iVar1 = test_uchar_le("test/test_test.c",0x6e,&_LC192,&_LC199,0x3c,0x50);
              uVar3 = 1;
              pcVar2 = "TEST_uchar_le(60, 80)";
              if (iVar1 == 1) {
                iVar1 = test_uchar_le("test/test_test.c",0x6f,&_LC203,&_LC203,0x4e,0x4e);
                uVar3 = 1;
                pcVar2 = "TEST_uchar_le(78, 78)";
                if (iVar1 == 1) {
                  iVar1 = test_uchar_le("test/test_test.c",0x70,&_LC199,&_LC192,0x50,0x3c);
                  uVar3 = 0;
                  pcVar2 = "TEST_uchar_le(80, 60)";
                  if (iVar1 == 0) {
                    iVar1 = test_uchar_gt("test/test_test.c",0x71,&_LC207,&_LC206,0x58,0x25);
                    uVar3 = 1;
                    pcVar2 = "TEST_uchar_gt(88, 37)";
                    if (iVar1 == 1) {
                      iVar1 = test_uchar_gt("test/test_test.c",0x72,&_LC206,&_LC207,0x25,0x58);
                      uVar3 = 0;
                      pcVar2 = "TEST_uchar_gt(37, 88)";
                      if (iVar1 == 0) {
                        iVar1 = test_uchar_ge("test/test_test.c",0x73,&_LC207,&_LC206,0x58,0x25);
                        uVar3 = 1;
                        pcVar2 = "TEST_uchar_ge(88, 37)";
                        if (iVar1 == 1) {
                          iVar1 = test_uchar_ge("test/test_test.c",0x74,&_LC197,&_LC197,0x42,0x42);
                          uVar3 = 1;
                          pcVar2 = "TEST_uchar_ge(66, 66)";
                          if (iVar1 == 1) {
                            iVar1 = test_uchar_ge("test/test_test.c",0x75,&_LC206,&_LC207,0x25,0x58)
                            ;
                            uVar3 = 0;
                            pcVar2 = "TEST_uchar_ge(37, 88)";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_uchar_eq(49, 60)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_char(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_char_eq("test/test_test.c",0x51,&_LC213,&_LC213,0x61,0x61);
  uVar3 = 1;
  pcVar2 = "TEST_char_eq(\'a\', \'a\')";
  if (iVar1 == 1) {
    iVar1 = test_char_eq("test/test_test.c",0x52,&_LC213,&_LC215,0x61,0x41);
    if (iVar1 == 0) {
      iVar1 = test_char_ne("test/test_test.c",0x53,&_LC213,&_LC32,0x61,99);
      uVar3 = 1;
      pcVar2 = "TEST_char_ne(\'a\', \'c\')";
      if (iVar1 == 1) {
        iVar1 = test_char_ne("test/test_test.c",0x54,&_LC26,&_LC26,0x65,0x65);
        uVar3 = 0;
        pcVar2 = "TEST_char_ne(\'e\', \'e\')";
        if (iVar1 == 0) {
          iVar1 = test_char_lt("test/test_test.c",0x55,&_LC220,&_LC219,0x69,0x78);
          uVar3 = 1;
          pcVar2 = "TEST_char_lt(\'i\', \'x\')";
          if (iVar1 == 1) {
            iVar1 = test_char_lt("test/test_test.c",0x56,&_LC219,&_LC220,0x78,0x69);
            uVar3 = 0;
            pcVar2 = "TEST_char_lt(\'x\', \'i\')";
            if (iVar1 == 0) {
              iVar1 = test_char_le("test/test_test.c",0x57,&_LC220,&_LC219,0x69,0x78);
              uVar3 = 1;
              pcVar2 = "TEST_char_le(\'i\', \'x\')";
              if (iVar1 == 1) {
                iVar1 = test_char_le("test/test_test.c",0x58,&_LC224,&_LC224,0x6e,0x6e);
                uVar3 = 1;
                pcVar2 = "TEST_char_le(\'n\', \'n\')";
                if (iVar1 == 1) {
                  iVar1 = test_char_le("test/test_test.c",0x59,&_LC219,&_LC220,0x78,0x69);
                  uVar3 = 0;
                  pcVar2 = "TEST_char_le(\'x\', \'i\')";
                  if (iVar1 == 0) {
                    iVar1 = test_char_gt("test/test_test.c",0x5a,&_LC227,&_LC224,0x77,0x6e);
                    uVar3 = 1;
                    pcVar2 = "TEST_char_gt(\'w\', \'n\')";
                    if (iVar1 == 1) {
                      iVar1 = test_char_gt("test/test_test.c",0x5b,&_LC224,&_LC227,0x6e,0x77);
                      uVar3 = 0;
                      pcVar2 = "TEST_char_gt(\'n\', \'w\')";
                      if (iVar1 == 0) {
                        iVar1 = test_char_ge("test/test_test.c",0x5c,&_LC227,&_LC224,0x77,0x6e);
                        uVar3 = 1;
                        pcVar2 = "TEST_char_ge(\'w\', \'n\')";
                        if (iVar1 == 1) {
                          iVar1 = test_char_ge("test/test_test.c",0x5d,&_LC231,&_LC231,0x70,0x70);
                          uVar3 = 1;
                          pcVar2 = "TEST_char_ge(\'p\', \'p\')";
                          if (iVar1 == 1) {
                            iVar1 = test_char_ge("test/test_test.c",0x5e,&_LC224,&_LC227,0x6e,0x77);
                            uVar3 = 0;
                            pcVar2 = "TEST_char_ge(\'n\', \'w\')";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_char_eq(\'a\', \'A\')";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_int(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_int_eq("test/test_test.c",0x23,&_LC85,&_LC85,1,1);
  uVar3 = 1;
  pcVar2 = "TEST_int_eq(1, 1)";
  if (iVar1 == 1) {
    iVar1 = test_int_eq("test/test_test.c",0x24,&_LC85,&_LC235,1,0xffffffff);
    if (iVar1 == 0) {
      iVar1 = test_int_ne("test/test_test.c",0x25,&_LC85,&_LC194,1,2);
      uVar3 = 1;
      pcVar2 = "TEST_int_ne(1, 2)";
      if (iVar1 == 1) {
        iVar1 = test_int_ne("test/test_test.c",0x26,&_LC238,&_LC238,3,3);
        uVar3 = 0;
        pcVar2 = "TEST_int_ne(3, 3)";
        if (iVar1 == 0) {
          iVar1 = test_int_lt("test/test_test.c",0x27,&_LC12,&_LC240,4,9);
          uVar3 = 1;
          pcVar2 = "TEST_int_lt(4, 9)";
          if (iVar1 == 1) {
            iVar1 = test_int_lt("test/test_test.c",0x28,&_LC240,&_LC12,9,4);
            uVar3 = 0;
            pcVar2 = "TEST_int_lt(9, 4)";
            if (iVar1 == 0) {
              iVar1 = test_int_le("test/test_test.c",0x29,&_LC12,&_LC240,4,9);
              uVar3 = 1;
              pcVar2 = "TEST_int_le(4, 9)";
              if (iVar1 == 1) {
                iVar1 = test_int_le("test/test_test.c",0x2a,&_LC14,&_LC14,5,5);
                uVar3 = 1;
                pcVar2 = "TEST_int_le(5, 5)";
                if (iVar1 == 1) {
                  iVar1 = test_int_le("test/test_test.c",0x2b,&_LC240,&_LC12,9,4);
                  uVar3 = 0;
                  pcVar2 = "TEST_int_le(9, 4)";
                  if (iVar1 == 0) {
                    iVar1 = test_int_gt("test/test_test.c",0x2c,&_LC246,&_LC14,8,5);
                    uVar3 = 1;
                    pcVar2 = "TEST_int_gt(8, 5)";
                    if (iVar1 == 1) {
                      iVar1 = test_int_gt("test/test_test.c",0x2d,&_LC14,&_LC246,5,8);
                      uVar3 = 0;
                      pcVar2 = "TEST_int_gt(5, 8)";
                      if (iVar1 == 0) {
                        iVar1 = test_int_ge("test/test_test.c",0x2e,&_LC246,&_LC14,8,5);
                        uVar3 = 1;
                        pcVar2 = "TEST_int_ge(8, 5)";
                        if (iVar1 == 1) {
                          iVar1 = test_int_ge("test/test_test.c",0x2f,&_LC250,&_LC250,6,6);
                          uVar3 = 1;
                          pcVar2 = "TEST_int_ge(6, 6)";
                          if (iVar1 == 1) {
                            iVar1 = test_int_ge("test/test_test.c",0x30,&_LC14,&_LC246,5,8);
                            uVar3 = 0;
                            pcVar2 = "TEST_int_ge(5, 8)";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_int_eq(1, -1)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_long(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_long_eq("test/test_test.c",0x7f,&_LC253,&_LC253,0x7b,0x7b);
  uVar3 = 1;
  pcVar2 = "TEST_long_eq(123l, 123l)";
  if (iVar1 == 1) {
    iVar1 = test_long_eq("test/test_test.c",0x80,&_LC253,"-123l",0x7b,0xffffffffffffff85);
    if (iVar1 == 0) {
      iVar1 = test_long_ne("test/test_test.c",0x81,&_LC253,&_LC257,0x7b,500);
      uVar3 = 1;
      pcVar2 = "TEST_long_ne(123l, 500l)";
      if (iVar1 == 1) {
        iVar1 = test_long_ne("test/test_test.c",0x82,"1000l","1000l",1000,1000);
        uVar3 = 0;
        pcVar2 = "TEST_long_ne(1000l, 1000l)";
        if (iVar1 == 0) {
          iVar1 = test_long_lt("test/test_test.c",0x83,"-8923l","102934563l",0xffffffffffffdd25,
                               0x622a823);
          uVar3 = 1;
          pcVar2 = "TEST_long_lt(-8923l, 102934563l)";
          if (iVar1 == 1) {
            iVar1 = test_long_lt("test/test_test.c",0x84,"102934563l","-8923l",0x622a823,
                                 0xffffffffffffdd25);
            uVar3 = 0;
            pcVar2 = "TEST_long_lt(102934563l, -8923l)";
            if (iVar1 == 0) {
              iVar1 = test_long_le("test/test_test.c",0x85,"-8923l","102934563l",0xffffffffffffdd25,
                                   0x622a823);
              uVar3 = 1;
              pcVar2 = "TEST_long_le(-8923l, 102934563l)";
              if (iVar1 == 1) {
                iVar1 = test_long_le("test/test_test.c",0x86,"12345l","12345l",0x3039,0x3039);
                uVar3 = 1;
                pcVar2 = "TEST_long_le(12345l, 12345l)";
                if (iVar1 == 1) {
                  iVar1 = test_long_le("test/test_test.c",0x87,"102934563l","-8923l",0x622a823,
                                       0xffffffffffffdd25);
                  uVar3 = 0;
                  pcVar2 = "TEST_long_le(102934563l, -8923l)";
                  if (iVar1 == 0) {
                    iVar1 = test_long_gt("test/test_test.c",0x88,"84325677l","12345l",0x506b52d,
                                         0x3039);
                    uVar3 = 1;
                    pcVar2 = "TEST_long_gt(84325677l, 12345l)";
                    if (iVar1 == 1) {
                      iVar1 = test_long_gt("test/test_test.c",0x89,"12345l","84325677l",0x3039,
                                           0x506b52d);
                      uVar3 = 0;
                      pcVar2 = "TEST_long_gt(12345l, 84325677l)";
                      if (iVar1 == 0) {
                        iVar1 = test_long_ge("test/test_test.c",0x8a,"84325677l","12345l",0x506b52d,
                                             0x3039);
                        uVar3 = 1;
                        pcVar2 = "TEST_long_ge(84325677l, 12345l)";
                        if (iVar1 == 1) {
                          iVar1 = test_long_ge("test/test_test.c",0x8b,"465869l","465869l",0x71bcd,
                                               0x71bcd);
                          uVar3 = 1;
                          pcVar2 = "TEST_long_ge(465869l, 465869l)";
                          if (iVar1 == 1) {
                            iVar1 = test_long_ge("test/test_test.c",0x8c,"12345l","84325677l",0x3039
                                                 ,0x506b52d);
                            uVar3 = 0;
                            pcVar2 = "TEST_long_ge(12345l, 84325677l)";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_long_eq(123l, -123l)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_ulong(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_ulong_eq("test/test_test.c",0x96,"919ul","919ul",0x397,0x397);
  uVar3 = 1;
  pcVar2 = "TEST_ulong_eq(919ul, 919ul)";
  if (iVar1 == 1) {
    iVar1 = test_ulong_eq("test/test_test.c",0x97,"919ul","10234ul",0x397,0x27fa);
    if (iVar1 == 0) {
      iVar1 = test_ulong_ne("test/test_test.c",0x98,"8190ul",&_LC280,0x1ffe,0x42);
      uVar3 = 1;
      pcVar2 = "TEST_ulong_ne(8190ul, 66ul)";
      if (iVar1 == 1) {
        iVar1 = test_ulong_ne("test/test_test.c",0x99,"10555ul","10555ul",0x293b,0x293b);
        uVar3 = 0;
        pcVar2 = "TEST_ulong_ne(10555ul, 10555ul)";
        if (iVar1 == 0) {
          iVar1 = test_ulong_lt("test/test_test.c",0x9a,"10234ul","1000000ul",0x27fa,1000000);
          uVar3 = 1;
          pcVar2 = "TEST_ulong_lt(10234ul, 1000000ul)";
          if (iVar1 == 1) {
            iVar1 = test_ulong_lt("test/test_test.c",0x9b,"1000000ul","10234ul",1000000,0x27fa);
            uVar3 = 0;
            pcVar2 = "TEST_ulong_lt(1000000ul, 10234ul)";
            if (iVar1 == 0) {
              iVar1 = test_ulong_le("test/test_test.c",0x9c,"10234ul","1000000ul",0x27fa,1000000);
              uVar3 = 1;
              pcVar2 = "TEST_ulong_le(10234ul, 1000000ul)";
              if (iVar1 == 1) {
                iVar1 = test_ulong_le("test/test_test.c",0x9d,"100000ul","100000ul",100000,100000);
                uVar3 = 1;
                pcVar2 = "TEST_ulong_le(100000ul, 100000ul)";
                if (iVar1 == 1) {
                  iVar1 = test_ulong_le("test/test_test.c",0x9e,"1000000ul","10234ul",1000000,0x27fa
                                       );
                  uVar3 = 0;
                  pcVar2 = "TEST_ulong_le(1000000ul, 10234ul)";
                  if (iVar1 == 0) {
                    iVar1 = test_ulong_gt("test/test_test.c",0x9f,"100000000ul",&_LC292,100000000,
                                          0x16);
                    uVar3 = 1;
                    pcVar2 = "TEST_ulong_gt(100000000ul, 22ul)";
                    if (iVar1 == 1) {
                      iVar1 = test_ulong_gt("test/test_test.c",0xa0,&_LC292,"100000000ul",0x16,
                                            100000000);
                      uVar3 = 0;
                      pcVar2 = "TEST_ulong_gt(22ul, 100000000ul)";
                      if (iVar1 == 0) {
                        iVar1 = test_ulong_ge("test/test_test.c",0xa1,"100000000ul",&_LC292,
                                              100000000,0x16);
                        uVar3 = 1;
                        pcVar2 = "TEST_ulong_ge(100000000ul, 22ul)";
                        if (iVar1 == 1) {
                          iVar1 = test_ulong_ge("test/test_test.c",0xa2,"10555ul","10555ul",0x293b,
                                                0x293b);
                          uVar3 = 1;
                          pcVar2 = "TEST_ulong_ge(10555ul, 10555ul)";
                          if (iVar1 == 1) {
                            iVar1 = test_ulong_ge("test/test_test.c",0xa3,&_LC292,"100000000ul",0x16
                                                  ,100000000);
                            uVar3 = 0;
                            pcVar2 = "TEST_ulong_ge(22ul, 100000000ul)";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_ulong_eq(919ul, 10234ul)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_time_t(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = test_time_t_eq("test/test_test.c",0xc4,"(time_t)10","(time_t)10",10,10);
  uVar3 = 1;
  pcVar2 = "TEST_time_t_eq((time_t)10, (time_t)10)";
  if (iVar1 == 1) {
    iVar1 = test_time_t_eq("test/test_test.c",0xc5,"(time_t)10","(time_t)12",10,0xc);
    if (iVar1 == 0) {
      iVar1 = test_time_t_ne("test/test_test.c",0xc6,"(time_t)10","(time_t)12",10,0xc);
      uVar3 = 1;
      pcVar2 = "TEST_time_t_ne((time_t)10, (time_t)12)";
      if (iVar1 == 1) {
        iVar1 = test_time_t_ne("test/test_test.c",199,"(time_t)24","(time_t)24",0x18,0x18);
        uVar3 = 0;
        pcVar2 = "TEST_time_t_ne((time_t)24, (time_t)24)";
        if (iVar1 == 0) {
          iVar1 = test_time_t_lt("test/test_test.c",200,"(time_t)30","(time_t)88",0x1e,0x58);
          uVar3 = 1;
          pcVar2 = "TEST_time_t_lt((time_t)30, (time_t)88)";
          if (iVar1 == 1) {
            iVar1 = test_time_t_lt("test/test_test.c",0xc9,"(time_t)88","(time_t)30",0x58,0x1e);
            uVar3 = 0;
            pcVar2 = "TEST_time_t_lt((time_t)88, (time_t)30)";
            if (iVar1 == 0) {
              iVar1 = test_time_t_le("test/test_test.c",0xca,"(time_t)30","(time_t)88",0x1e,0x58);
              uVar3 = 1;
              pcVar2 = "TEST_time_t_le((time_t)30, (time_t)88)";
              if (iVar1 == 1) {
                iVar1 = test_time_t_le("test/test_test.c",0xcb,"(time_t)33","(time_t)33",0x21,0x21);
                uVar3 = 1;
                pcVar2 = "TEST_time_t_le((time_t)33, (time_t)33)";
                if (iVar1 == 1) {
                  iVar1 = test_time_t_le("test/test_test.c",0xcc,"(time_t)88","(time_t)30",0x58,0x1e
                                        );
                  uVar3 = 0;
                  pcVar2 = "TEST_time_t_le((time_t)88, (time_t)30)";
                  if (iVar1 == 0) {
                    iVar1 = test_time_t_gt("test/test_test.c",0xcd,"(time_t)52","(time_t)33",0x34,
                                           0x21);
                    uVar3 = 1;
                    pcVar2 = "TEST_time_t_gt((time_t)52, (time_t)33)";
                    if (iVar1 == 1) {
                      iVar1 = test_time_t_gt("test/test_test.c",0xce,"(time_t)33","(time_t)52",0x21,
                                             0x34);
                      uVar3 = 0;
                      pcVar2 = "TEST_time_t_gt((time_t)33, (time_t)52)";
                      if (iVar1 == 0) {
                        iVar1 = test_time_t_ge("test/test_test.c",0xcf,"(time_t)52","(time_t)33",
                                               0x34,0x21);
                        uVar3 = 1;
                        pcVar2 = "TEST_time_t_ge((time_t)52, (time_t)33)";
                        if (iVar1 == 1) {
                          iVar1 = test_time_t_ge("test/test_test.c",0xd0,"(time_t)38","(time_t)38",
                                                 0x26,0x26);
                          uVar3 = 1;
                          pcVar2 = "TEST_time_t_ge((time_t)38, (time_t)38)";
                          if (iVar1 == 1) {
                            iVar1 = test_time_t_ge("test/test_test.c",0xd1,"(time_t)33","(time_t)52"
                                                   ,0x21,0x34);
                            uVar3 = 0;
                            pcVar2 = "TEST_time_t_ge((time_t)33, (time_t)52)";
                            if (iVar1 == 0) {
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      pcVar2 = "TEST_time_t_eq((time_t)10, (time_t)12)";
    }
  }
  __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar2,uVar3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_long_bignum(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  BIGNUM *local_2a8;
  BIGNUM *local_2a0;
  BIGNUM *local_298;
  BIGNUM *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined2 local_1f8;
  char local_1e8 [8];
  char acStack_1e0 [8];
  char local_1d8 [8];
  char acStack_1d0 [8];
  char local_1c8 [8];
  char acStack_1c0 [8];
  char local_1b8 [8];
  char acStack_1b0 [8];
  char local_1a8 [8];
  char acStack_1a0 [8];
  char local_198 [8];
  undefined7 uStack_190;
  char cStack_189;
  undefined7 uStack_188;
  char acStack_181 [9];
  char local_178 [4];
  undefined2 local_174;
  char local_172 [322];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_2a8 = (BIGNUM *)0x0;
  pcVar8 = 
  "123456789012345678901234567890123456789012345678901212345678901234567890123456789012345678901234567890121234567890123456789012345678901234567890123456789012123456789012345678901234567890123456789012345678901212345678901234567890123456789012345678901234567890121234567890123456789012345678901234567890123456789012FFFFFF"
  ;
  pcVar9 = local_178;
  for (lVar6 = 0x27; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)pcVar9 = *(undefined8 *)pcVar8;
    pcVar8 = pcVar8 + 8;
    pcVar9 = pcVar9 + 8;
  }
  local_1e8 = (char  [8])_LC5._0_8_;
  acStack_1e0 = (char  [8])_LC5._8_8_;
  local_2a0 = (BIGNUM *)0x0;
  local_1d8 = (char  [8])_LC5._16_8_;
  acStack_1d0 = (char  [8])_LC5._24_8_;
  local_298 = (BIGNUM *)0x0;
  local_1c8 = (char  [8])_LC5._32_8_;
  acStack_1c0 = (char  [8])_LC5._40_8_;
  local_290 = (BIGNUM *)0x0;
  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
  *(undefined2 *)(pcVar9 + 4) = _LC321._316_2_;
  pcVar9[6] = _LC321[0x13e];
  local_1a8 = (char  [8])_LC5._32_8_;
  acStack_1a0 = (char  [8])_LC5._40_8_;
  local_1f8 = 0x44;
  local_198 = (char  [8])_LC336._16_8_;
  uStack_190 = (undefined7)_LC336._24_8_;
  local_248 = 0;
  cStack_189 = (char)_LC336._32_8_;
  uStack_188 = SUB87(_LC336._32_8_,1);
  acStack_181._0_8_ = _LC336._40_8_;
  local_1b8 = (char  [8])_LC336._0_8_;
  acStack_1b0 = (char  [8])_LC336._8_8_;
  local_238 = __LC339;
  uStack_230 = _UNK_00106168;
  local_228 = __LC340;
  uStack_220 = _UNK_00106178;
  local_218 = __LC341;
  uStack_210 = _UNK_00106188;
  local_208 = __LC342;
  uStack_200 = _UNK_00106198;
  local_288 = __LC343;
  uStack_280 = _UNK_001061a8;
  local_278 = __LC344;
  uStack_270 = _UNK_001061b8;
  local_268 = __LC345;
  uStack_260 = _UNK_001061c8;
  local_258 = __LC346;
  uStack_250 = _UNK_001061d8;
  iVar1 = BN_hex2bn(&local_2a8,local_178);
  iVar1 = test_true("test/test_test.c",0x1a8,"BN_hex2bn(&a, as)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = BN_hex2bn(&local_2a0,local_1e8);
    iVar1 = test_true("test/test_test.c",0x1a9,"BN_hex2bn(&b, bs)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_hex2bn(&local_298,(char *)&local_238);
      iVar1 = test_true("test/test_test.c",0x1aa,"BN_hex2bn(&c, cs)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BN_hex2bn(&local_290,(char *)&local_288);
        iVar1 = test_true("test/test_test.c",0x1ab,"BN_hex2bn(&d, ds)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_BN_eq("test/test_test.c",0x1ac,&_LC327,&_LC326,local_2a8,local_2a0);
          if (iVar1 != 0) {
            __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_BN_eq(a, b)",0);
          }
          iVar2 = test_BN_eq("test/test_test.c",0x1ad,&_LC326,&_LC327,local_2a0,local_2a8);
          if (iVar2 != 0) {
            __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_BN_eq(b, a)",0);
          }
          iVar3 = test_BN_eq("test/test_test.c",0x1ae,&_LC326,&_LC89,local_2a0,0);
          if (iVar3 != 0) {
            __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_BN_eq(b, NULL)",0);
          }
          iVar4 = test_BN_eq("test/test_test.c",0x1af,&_LC89,&_LC327,0,local_2a8);
          if (iVar4 != 0) {
            __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_BN_eq(NULL, a)",0);
          }
          iVar5 = test_BN_ne("test/test_test.c",0x1b0,&_LC327,&_LC89,local_2a8,0);
          if (iVar5 != 1) {
            __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_BN_ne(a, NULL)",1);
          }
          bVar7 = iVar5 == 1 && (iVar4 == 0 && (iVar3 == 0 && (iVar2 == 0 && iVar1 == 0)));
          iVar1 = test_BN_eq("test/test_test.c",0x1b1,&_LC334,&_LC333,local_298,local_290);
          if (iVar1 == 0) goto LAB_001030fc;
          __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n","TEST_BN_eq(c, d)",0);
        }
      }
    }
  }
  bVar7 = false;
LAB_001030fc:
  BN_free(local_2a8);
  BN_free(local_2a0);
  BN_free(local_298);
  BN_free(local_290);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_bignum(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  iVar1 = BN_dec2bn(&local_58,"0");
  iVar1 = test_int_eq("test/test_test.c",0x13d,"BN_dec2bn(&a, \"0\")",&_LC85,iVar1,1);
  uVar4 = 1;
  pcVar3 = "TEST_int_eq(BN_dec2bn(&a, \"0\"), 1)";
  if (iVar1 == 1) {
    iVar1 = test_BN_eq_word("test/test_test.c",0x13e,&_LC327,&_LC83,local_58,0);
    if (iVar1 != 1) {
      uVar4 = 1;
      pcVar3 = "TEST_BN_eq_word(a, 0)";
      goto LAB_00103e30;
    }
    iVar1 = test_BN_eq_word("test/test_test.c",0x13f,&_LC327,&_LC351,local_58,0x1e);
    uVar4 = 0;
    pcVar3 = "TEST_BN_eq_word(a, 30)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_abs_eq_word("test/test_test.c",0x140,&_LC327,&_LC83,local_58,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_abs_eq_word(a, 0)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq_one("test/test_test.c",0x141,&_LC327,local_58,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_eq_one(a)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_eq_zero("test/test_test.c",0x142,&_LC327,local_58,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_eq_zero(a)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_ne_zero("test/test_test.c",0x143,&_LC327,local_58,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_ne_zero(a)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_le_zero("test/test_test.c",0x144,&_LC327,local_58,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_le_zero(a)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_lt_zero("test/test_test.c",0x145,&_LC327,local_58,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_lt_zero(a)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_ge_zero("test/test_test.c",0x146,&_LC327,local_58,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_ge_zero(a)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_gt_zero("test/test_test.c",0x147,&_LC327,local_58,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_gt_zero(a)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_even("test/test_test.c",0x148,&_LC327,local_58,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_even(a)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_odd("test/test_test.c",0x149,&_LC327,local_58,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_odd(a)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_eq("test/test_test.c",0x14a,&_LC326,&_LC334,local_50,local_48);
    uVar4 = 1;
    pcVar3 = "TEST_BN_eq(b, c)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq("test/test_test.c",0x14b,&_LC327,&_LC326,local_58,local_50);
    if (iVar1 != 0) {
LAB_00103e90:
      uVar4 = 0;
      pcVar3 = "TEST_BN_eq(a, b)";
      goto LAB_00103e30;
    }
    iVar1 = test_BN_ne("test/test_test.c",0x14c,&_LC89,&_LC334,0,local_48);
    uVar4 = 0;
    pcVar3 = "TEST_BN_ne(NULL, c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = BN_dec2bn(&local_50,"1");
    iVar1 = test_int_eq("test/test_test.c",0x14d,"BN_dec2bn(&b, \"1\")",&_LC85,iVar1,1);
    uVar4 = 1;
    pcVar3 = "TEST_int_eq(BN_dec2bn(&b, \"1\"), 1)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq_word("test/test_test.c",0x14e,&_LC326,&_LC85,local_50,1);
    uVar4 = 1;
    pcVar3 = "TEST_BN_eq_word(b, 1)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq_one("test/test_test.c",0x14f,&_LC326,local_50,1);
    uVar4 = 1;
    pcVar3 = "TEST_BN_eq_one(b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_abs_eq_word("test/test_test.c",0x150,&_LC326,&_LC83,local_50,0);
    uVar4 = 0;
    pcVar3 = "TEST_BN_abs_eq_word(b, 0)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_abs_eq_word("test/test_test.c",0x151,&_LC326,&_LC85,local_50,1);
    uVar4 = 1;
    pcVar3 = "TEST_BN_abs_eq_word(b, 1)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq_zero("test/test_test.c",0x152,&_LC326,local_50,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_eq_zero(b)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_ne_zero("test/test_test.c",0x153,&_LC326,local_50,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_ne_zero(b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_le_zero("test/test_test.c",0x154,&_LC326,local_50,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_le_zero(b)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_lt_zero("test/test_test.c",0x155,&_LC326,local_50,0);
    uVar4 = 0;
    pcVar3 = "TEST_BN_lt_zero(b)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_ge_zero("test/test_test.c",0x156,&_LC326,local_50,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_ge_zero(b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_gt_zero("test/test_test.c",0x157,&_LC326,local_50,1);
    uVar4 = 1;
    pcVar3 = "TEST_BN_gt_zero(b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_even("test/test_test.c",0x158,&_LC326,local_50,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_even(b)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_odd("test/test_test.c",0x159,&_LC326,local_50,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_odd(b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = BN_dec2bn(&local_48,"-334739439");
    iVar1 = test_int_eq("test/test_test.c",0x15a,"BN_dec2bn(&c, \"-334739439\")",&_LC380,iVar1,10);
    uVar4 = 1;
    pcVar3 = "TEST_int_eq(BN_dec2bn(&c, \"-334739439\"), 10)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq_word("test/test_test.c",0x15b,&_LC334,"334739439",local_48,0x13f3b7ef);
    uVar4 = 0;
    pcVar3 = "TEST_BN_eq_word(c, 334739439)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_abs_eq_word("test/test_test.c",0x15c,&_LC334,"334739439",local_48,0x13f3b7ef);
    uVar4 = 1;
    pcVar3 = "TEST_BN_abs_eq_word(c, 334739439)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq_zero("test/test_test.c",0x15d,&_LC334,local_48,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_eq_zero(c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_ne_zero("test/test_test.c",0x15e,&_LC334,local_48,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_ne_zero(c)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_le_zero("test/test_test.c",0x15f,&_LC334,local_48,1);
    uVar4 = 1;
    pcVar3 = "TEST_BN_le_zero(c)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_lt_zero("test/test_test.c",0x160,&_LC334,local_48,1);
    uVar4 = 1;
    pcVar3 = "TEST_BN_lt_zero(c)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_ge_zero("test/test_test.c",0x161,&_LC334,local_48,1);
    uVar4 = 0;
    pcVar3 = "TEST_BN_ge_zero(c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_gt_zero("test/test_test.c",0x162,&_LC334,local_48,0);
    uVar4 = 0;
    pcVar3 = "TEST_BN_gt_zero(c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_even("test/test_test.c",0x163,&_LC334,local_48,0);
    uVar4 = 0;
    pcVar3 = "TEST_BN_even(c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_odd("test/test_test.c",0x164,&_LC334,local_48,0);
    uVar4 = 1;
    pcVar3 = "TEST_BN_odd(c)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_eq("test/test_test.c",0x165,&_LC327,&_LC327,local_58,local_58);
    uVar4 = 1;
    pcVar3 = "TEST_BN_eq(a, a)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_ne("test/test_test.c",0x166,&_LC327,&_LC327,local_58,local_58);
    uVar4 = 0;
    pcVar3 = "TEST_BN_ne(a, a)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_eq("test/test_test.c",0x167,&_LC327,&_LC326,local_58,local_50);
    if (iVar1 != 0) goto LAB_00103e90;
    iVar1 = test_BN_ne("test/test_test.c",0x168,&_LC327,&_LC326,local_58,local_50);
    uVar4 = 1;
    pcVar3 = "TEST_BN_ne(a, b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_lt("test/test_test.c",0x169,&_LC327,&_LC334,local_58,local_48);
    uVar4 = 0;
    pcVar3 = "TEST_BN_lt(a, c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_lt("test/test_test.c",0x16a,&_LC334,&_LC326,local_48,local_50);
    uVar4 = 1;
    pcVar3 = "TEST_BN_lt(c, b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_lt("test/test_test.c",0x16b,&_LC326,&_LC334,local_50,local_48);
    uVar4 = 0;
    pcVar3 = "TEST_BN_lt(b, c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_le("test/test_test.c",0x16c,&_LC327,&_LC334,local_58,local_48);
    uVar4 = 0;
    pcVar3 = "TEST_BN_le(a, c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_le("test/test_test.c",0x16d,&_LC334,&_LC326,local_48,local_50);
    uVar4 = 1;
    pcVar3 = "TEST_BN_le(c, b)";
    if (iVar1 != 1) goto LAB_00103e30;
    iVar1 = test_BN_le("test/test_test.c",0x16e,&_LC326,&_LC334,local_50,local_48);
    uVar4 = 0;
    pcVar3 = "TEST_BN_le(b, c)";
    if (iVar1 != 0) goto LAB_00103e30;
    iVar1 = test_BN_gt("test/test_test.c",0x16f,&_LC327,&_LC334,local_58,local_48);
    if ((iVar1 == 1) || (iVar1 = test_case_part_0_constprop_1("TEST_BN_gt(a, c)"), iVar1 != 0)) {
      iVar1 = test_BN_gt("test/test_test.c",0x170,&_LC334,&_LC326,local_48,local_50);
      if (iVar1 == 0) {
        iVar1 = test_BN_gt("test/test_test.c",0x171,&_LC326,&_LC334,local_50,local_48);
        if (((iVar1 != 1) && (iVar1 = test_case_part_0_constprop_1("TEST_BN_gt(b, c)"), iVar1 == 0))
           || ((iVar1 = test_BN_ge("test/test_test.c",0x172,&_LC327,&_LC334,local_58,local_48),
               iVar1 != 1 && (iVar1 = test_case_part_0_constprop_1("TEST_BN_ge(a, c)"), iVar1 == 0))
              )) goto LAB_00103e4a;
        iVar1 = test_BN_ge("test/test_test.c",0x173,&_LC334,&_LC326,local_48,local_50);
        if (iVar1 == 0) {
          uVar2 = test_BN_ge("test/test_test.c",0x174,&_LC326,&_LC334,local_50,local_48);
          if (uVar2 != 1) {
            iVar1 = test_case_part_0_constprop_1("TEST_BN_ge(b, c)");
            uVar2 = (uint)(iVar1 != 0);
          }
          goto LAB_00103e4c;
        }
        uVar4 = 0;
        pcVar3 = "TEST_BN_ge(c, b)";
      }
      else {
        uVar4 = 0;
        pcVar3 = "TEST_BN_gt(c, b)";
      }
      goto LAB_00103e30;
    }
  }
  else {
LAB_00103e30:
    __fprintf_chk(_stderr,2,"# FATAL: %s != %d\n",pcVar3,uVar4);
  }
LAB_00103e4a:
  uVar2 = 0;
LAB_00103e4c:
  BN_free(local_58);
  BN_free(local_50);
  BN_free(local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 setup_tests(void)

{
  add_test("test_int",test_int);
  add_test("test_uint",test_uint);
  add_test("test_char",test_char);
  add_test("test_uchar",test_uchar);
  add_test("test_long",test_long);
  add_test("test_ulong",test_ulong);
  add_test("test_size_t",test_size_t);
  add_test("test_time_t",test_time_t);
  add_test("test_pointer",test_pointer);
  add_test("test_bool",test_bool);
  add_test("test_string",test_string);
  add_test("test_memory",test_memory);
  add_test("test_memory_overflow",test_memory_overflow);
  add_test("test_bignum",test_bignum);
  add_test("test_long_bignum",test_long_bignum);
  add_test("test_long_output",test_long_output);
  add_test("test_messages",test_messages);
  add_test("test_single_eval",test_single_eval);
  add_test("test_output",test_output);
  add_all_tests("test_bn_output",test_bn_output,4,1);
  add_test("test_skip_one",test_skip_one);
  add_test("test_skip_null",test_skip_null);
  add_all_tests("test_skip_many",0x100000,3,1);
  return 1;
}



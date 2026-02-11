
undefined8 test_clear_error(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0xffffffff;
  local_48 = 0;
  ERR_new();
  ERR_set_debug("test/errtest.c",0x129,"test_clear_error");
  ERR_set_error(0,0,"hello %s","world");
  ERR_peek_error_data(&local_48,&local_4c);
  iVar1 = test_str_eq("test/errtest.c",299,&_LC5,"\"hello world\"",local_48,"hello world");
  if (iVar1 != 0) {
    iVar1 = test_int_eq("test/errtest.c",300,"flags","ERR_TXT_STRING | ERR_TXT_MALLOCED",local_4c,3)
    ;
    if (iVar1 != 0) {
      ERR_clear_error();
      ERR_new();
      ERR_set_debug("test/errtest.c",0x131,"test_clear_error");
      ERR_set_error(0,0,0);
      ERR_peek_error_data(&local_48,&local_4c);
      iVar1 = test_str_eq("test/errtest.c",0x133,&_LC5,&_LC9,local_48,&_LC8);
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/errtest.c",0x134,"flags","ERR_TXT_MALLOCED",local_4c,1);
        if (iVar1 != 0) {
          ERR_clear_error();
          ERR_new();
          ERR_set_debug("test/errtest.c",0x139,"test_clear_error");
          ERR_set_error(0,0,"goodbye %s world","cruel");
          ERR_peek_error_data(&local_48,&local_4c);
          iVar1 = test_str_eq("test/errtest.c",0x13b,&_LC5,"\"goodbye cruel world\"",local_48,
                              "goodbye cruel world");
          if (iVar1 != 0) {
            iVar1 = test_int_eq("test/errtest.c",0x13c,"flags","ERR_TXT_STRING | ERR_TXT_MALLOCED",
                                local_4c,3);
            if (iVar1 != 0) {
              ERR_clear_error();
              ERR_new();
              ERR_set_debug("test/errtest.c",0x144,"test_clear_error");
              ERR_set_error(0,0,0);
              ERR_peek_error_data(&local_48,&local_4c);
              iVar1 = test_str_eq("test/errtest.c",0x146,&_LC5,&_LC9,local_48,&_LC8);
              if (iVar1 != 0) {
                iVar1 = test_int_eq("test/errtest.c",0x147,"flags","ERR_TXT_MALLOCED",local_4c,1);
                if (iVar1 != 0) {
                  ERR_clear_error();
                  uVar2 = 1;
                  goto LAB_001000b4;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_001000b4:
  ERR_clear_error();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool raised_error(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ERR_new();
  ERR_set_debug("test/errtest.c",0x9f,"raised_error");
  ERR_set_error(1,0xc0103,"calling exit()");
  uVar3 = ERR_get_error_all(&local_30,&local_34,0,&local_28,0);
  iVar2 = test_ulong_ne("test/errtest.c",0xa1,"e = ERR_get_error_all(&f, &l, NULL, &data, NULL)",
                        &_LC16,uVar3,0);
  if (iVar2 != 0) {
    uVar1 = (uint)uVar3 & 0x7fffff;
    if ((uVar3 & 0x80000000) != 0) {
      uVar1 = (uint)uVar3 & 0x7fffffff;
    }
    iVar2 = test_int_eq("test/errtest.c",0xa2,"ERR_GET_REASON(e)","ERR_R_INTERNAL_ERROR",uVar1,
                        0xc0103);
    if (iVar2 != 0) {
      iVar2 = test_int_eq("test/errtest.c",0xa4,&_LC21,&_LC20,local_34,0x9f);
      if (iVar2 != 0) {
        iVar2 = test_str_eq("test/errtest.c",0xa5,&_LC23,&_LC22,local_30,"test/errtest.c");
        if (iVar2 != 0) {
          iVar2 = test_str_eq("test/errtest.c",0xa7,&_LC5,"\"calling exit()\"",local_28,
                              "calling exit()");
          bVar4 = iVar2 != 0;
          goto LAB_001003aa;
        }
      }
    }
  }
  bVar4 = false;
LAB_001003aa:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_save_restore(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  ulong local_78;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0xffffffff;
  local_48 = 0;
  uVar3 = OSSL_ERR_STATE_new();
  iVar1 = test_ptr("test/errtest.c",0x15e,"es = OSSL_ERR_STATE_new()",uVar3);
  if (iVar1 == 0) goto LAB_001004c0;
  ERR_new();
  ERR_set_debug("test/errtest.c",0x161,"test_save_restore");
  ERR_set_error(0xf,0xc0100,0);
  uVar4 = ERR_peek_last_error();
  iVar1 = test_ulong_gt("test/errtest.c",0x163,"mallocfail",&_LC16,uVar4,0);
  if (iVar1 == 0) goto LAB_001004c0;
  if (param_1 == 1) {
    iVar1 = ERR_set_mark();
    iVar1 = test_int_eq("test/errtest.c",0x166,"ERR_set_mark()",&_LC27,iVar1,1);
    if (iVar1 == 0) goto LAB_001004c0;
    ERR_new();
    ERR_set_debug("test/errtest.c",0x169,"test_save_restore");
    ERR_set_error(0xf,0xc0103,"test data");
    local_78 = ERR_peek_last_error();
    uVar5 = ERR_peek_last_error();
    iVar1 = test_ulong_ne("test/errtest.c",0x16b,"mallocfail","ERR_peek_last_error()",uVar4,uVar5);
    if (iVar1 == 0) goto LAB_001004c0;
LAB_0010095f:
    OSSL_ERR_STATE_save_to_mark(uVar3);
    uVar5 = ERR_peek_last_error();
    iVar1 = test_ulong_ne("test/errtest.c",0x176,"ERR_peek_last_error()",&_LC16,uVar5,0);
  }
  else {
    ERR_new();
    ERR_set_debug("test/errtest.c",0x169,"test_save_restore");
    ERR_set_error(0xf,0xc0103,"test data");
    local_78 = ERR_peek_last_error();
    uVar5 = ERR_peek_last_error();
    iVar1 = test_ulong_ne("test/errtest.c",0x16b,"mallocfail","ERR_peek_last_error()",uVar4,uVar5);
    if (iVar1 == 0) goto LAB_001004c0;
    if (param_1 != 0) goto LAB_0010095f;
    OSSL_ERR_STATE_save(uVar3);
    uVar5 = ERR_peek_last_error();
    iVar1 = test_ulong_eq("test/errtest.c",0x171,"ERR_peek_last_error()",&_LC16,uVar5,0);
  }
  if (iVar1 != 0) {
    iVar1 = 0;
    while( true ) {
      OSSL_ERR_STATE_restore(uVar3);
      uVar5 = ERR_peek_last_error();
      iVar2 = test_ulong_eq("test/errtest.c",0x17d,"ERR_peek_last_error()","interr",uVar5,local_78);
      if (iVar2 == 0) break;
      ERR_peek_last_error_data(&local_48,&local_4c);
      iVar2 = test_str_eq("test/errtest.c",0x180,&_LC5,"testdata",local_48,"test data");
      if ((iVar2 == 0) ||
         (iVar2 = test_int_eq("test/errtest.c",0x181,"flags","ERR_TXT_STRING | ERR_TXT_MALLOCED",
                              local_4c,3), iVar2 == 0)) break;
      OSSL_ERR_STATE_restore(uVar3);
      if ((param_1 == 0) || (iVar1 == 0)) {
        uVar6 = ERR_get_error_all(0,0,0,&local_48,&local_4c);
        iVar2 = test_ulong_eq("test/errtest.c",0x189,
                              "ERR_get_error_all(NULL, NULL, NULL, &data, &flags)","mallocfail",
                              uVar6,uVar4);
        if ((iVar2 == 0) ||
           (iVar2 = test_int_ne("test/errtest.c",0x18b,"flags","ERR_TXT_STRING | ERR_TXT_MALLOCED",
                                local_4c,3), iVar2 == 0)) break;
      }
      uVar6 = ERR_get_error_all(0,0,0,&local_48,&local_4c);
      iVar2 = test_ulong_eq("test/errtest.c",399,
                            "ERR_get_error_all(NULL, NULL, NULL, &data, &flags)","interr",uVar6,
                            local_78);
      if ((iVar2 == 0) ||
         ((iVar2 = test_str_eq("test/errtest.c",0x191,&_LC5,"testdata",local_48,"test data"),
          iVar2 == 0 ||
          (iVar2 = test_int_eq("test/errtest.c",0x192,"flags","ERR_TXT_STRING | ERR_TXT_MALLOCED",
                               local_4c,3), iVar2 == 0)))) break;
      if (param_1 == 0) {
        uVar6 = ERR_get_error_all(0,0,0,&local_48,&local_4c);
        iVar2 = test_ulong_eq("test/errtest.c",0x196,
                              "ERR_get_error_all(NULL, NULL, NULL, &data, &flags)","mallocfail",
                              uVar6,uVar4);
        if ((iVar2 == 0) ||
           (iVar2 = test_int_ne("test/errtest.c",0x198,"flags","ERR_TXT_STRING | ERR_TXT_MALLOCED",
                                local_4c,3), iVar2 == 0)) break;
      }
      uVar6 = ERR_get_error_all(0,0,0,&local_48,&local_4c);
      iVar2 = test_ulong_eq("test/errtest.c",0x19c,
                            "ERR_get_error_all(NULL, NULL, NULL, &data, &flags)","interr",uVar6,
                            local_78);
      if ((iVar2 == 0) ||
         ((iVar2 = test_str_eq("test/errtest.c",0x19e,&_LC5,"testdata",local_48,"test data"),
          iVar2 == 0 ||
          (iVar2 = test_int_eq("test/errtest.c",0x19f,"flags","ERR_TXT_STRING | ERR_TXT_MALLOCED",
                               local_4c,3), iVar2 == 0)))) break;
      uVar5 = ERR_get_error();
      iVar2 = test_ulong_eq("test/errtest.c",0x1a2,"ERR_get_error()",&_LC16,uVar5,0);
      if (iVar2 == 0) break;
      if (iVar1 != 0) goto LAB_001004c3;
      iVar1 = 1;
    }
  }
LAB_001004c0:
  iVar1 = 0;
LAB_001004c3:
  OSSL_ERR_STATE_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_marks(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  ERR_new();
  ERR_set_debug("test/errtest.c",0xb1,"test_marks");
  ERR_set_error(0xf,0xc0100,0);
  uVar2 = ERR_peek_last_error();
  iVar1 = test_ulong_gt("test/errtest.c",0xb3,"mallocfail",&_LC16,uVar2,0);
  if (iVar1 != 0) {
    iVar1 = ERR_set_mark();
    iVar1 = test_true("test/errtest.c",0xb7,"ERR_set_mark()",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ERR_pop_to_mark();
      iVar1 = test_true("test/errtest.c",0xb8,"ERR_pop_to_mark()",iVar1 != 0);
      if (iVar1 != 0) {
        uVar3 = ERR_peek_last_error();
        iVar1 = test_ulong_eq("test/errtest.c",0xb9,"mallocfail","ERR_peek_last_error()",uVar2,uVar3
                             );
        if (iVar1 != 0) {
          iVar1 = ERR_set_mark();
          iVar1 = test_true("test/errtest.c",0xba,"ERR_set_mark()",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = ERR_clear_last_mark();
            iVar1 = test_true("test/errtest.c",0xbb,"ERR_clear_last_mark()",iVar1 != 0);
            if (iVar1 != 0) {
              uVar3 = ERR_peek_last_error();
              iVar1 = test_ulong_eq("test/errtest.c",0xbc,"mallocfail","ERR_peek_last_error()",uVar2
                                    ,uVar3);
              if (iVar1 != 0) {
                iVar1 = ERR_set_mark();
                iVar1 = test_true("test/errtest.c",0xc0,"ERR_set_mark()",iVar1 != 0);
                if (iVar1 != 0) {
                  ERR_new();
                  ERR_set_debug("test/errtest.c",0xc2,"test_marks");
                  ERR_set_error(0xf,0xc0103,0);
                  uVar3 = ERR_peek_last_error();
                  iVar1 = test_ulong_ne("test/errtest.c",0xc3,"mallocfail","ERR_peek_last_error()",
                                        uVar2,uVar3);
                  if (iVar1 != 0) {
                    iVar1 = ERR_pop_to_mark();
                    iVar1 = test_true("test/errtest.c",0xc4,"ERR_pop_to_mark()",iVar1 != 0);
                    if (iVar1 != 0) {
                      uVar3 = ERR_peek_last_error();
                      iVar1 = test_ulong_eq("test/errtest.c",0xc5,"mallocfail",
                                            "ERR_peek_last_error()",uVar2,uVar3);
                      if (iVar1 != 0) {
                        iVar1 = ERR_set_mark();
                        iVar1 = test_true("test/errtest.c",0xc9,"ERR_set_mark()",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = ERR_set_mark();
                          iVar1 = test_true("test/errtest.c",0xca,"ERR_set_mark()",iVar1 != 0);
                          if (iVar1 != 0) {
                            ERR_new();
                            ERR_set_debug("test/errtest.c",0xcc,"test_marks");
                            ERR_set_error(0xf,0xc0103,0);
                            uVar3 = ERR_peek_last_error();
                            iVar1 = test_ulong_ne("test/errtest.c",0xcd,"mallocfail",
                                                  "ERR_peek_last_error()",uVar2,uVar3);
                            if (iVar1 != 0) {
                              iVar1 = ERR_pop_to_mark();
                              iVar1 = test_true("test/errtest.c",0xce,"ERR_pop_to_mark()",iVar1 != 0
                                               );
                              if (iVar1 != 0) {
                                iVar1 = ERR_pop_to_mark();
                                iVar1 = test_true("test/errtest.c",0xcf,"ERR_pop_to_mark()",
                                                  iVar1 != 0);
                                if (iVar1 != 0) {
                                  uVar3 = ERR_peek_last_error();
                                  iVar1 = test_ulong_eq("test/errtest.c",0xd0,"mallocfail",
                                                        "ERR_peek_last_error()",uVar2,uVar3);
                                  if (iVar1 != 0) {
                                    iVar1 = ERR_set_mark();
                                    iVar1 = test_true("test/errtest.c",0xd3,"ERR_set_mark()",
                                                      iVar1 != 0);
                                    if (iVar1 != 0) {
                                      ERR_new();
                                      ERR_set_debug("test/errtest.c",0xd5,"test_marks");
                                      ERR_set_error(0xf,0xc0101,0);
                                      uVar3 = ERR_peek_last_error();
                                      iVar1 = test_ulong_ne("test/errtest.c",0xd7,"mallocfail",
                                                            "shouldnot",uVar2,uVar3);
                                      if (iVar1 != 0) {
                                        iVar1 = ERR_set_mark();
                                        iVar1 = test_true("test/errtest.c",0xd8,"ERR_set_mark()",
                                                          iVar1 != 0);
                                        if (iVar1 != 0) {
                                          ERR_new();
                                          ERR_set_debug("test/errtest.c",0xda,"test_marks");
                                          ERR_set_error(0xf,0xc0103,0);
                                          uVar4 = ERR_peek_last_error();
                                          iVar1 = test_ulong_ne("test/errtest.c",0xdb,"shouldnot",
                                                                "ERR_peek_last_error()",uVar3,uVar4)
                                          ;
                                          if (iVar1 != 0) {
                                            iVar1 = ERR_pop_to_mark();
                                            iVar1 = test_true("test/errtest.c",0xdc,
                                                              "ERR_pop_to_mark()",iVar1 != 0);
                                            if (iVar1 != 0) {
                                              uVar4 = ERR_peek_last_error();
                                              iVar1 = test_ulong_eq("test/errtest.c",0xdd,
                                                                    "shouldnot",
                                                                    "ERR_peek_last_error()",uVar3,
                                                                    uVar4);
                                              if (iVar1 != 0) {
                                                iVar1 = ERR_pop_to_mark();
                                                iVar1 = test_true("test/errtest.c",0xde,
                                                                  "ERR_pop_to_mark()",iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  uVar4 = ERR_peek_last_error();
                                                  iVar1 = test_ulong_eq("test/errtest.c",0xdf,
                                                                        "mallocfail",
                                                                        "ERR_peek_last_error()",
                                                                        uVar2,uVar4);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ERR_set_mark();
                                                    iVar1 = test_true("test/errtest.c",0xe3,
                                                                      "ERR_set_mark()",iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      ERR_new();
                                                      ERR_set_debug("test/errtest.c",0xe5,
                                                                    "test_marks");
                                                      ERR_set_error(0xf,0xc0101,0);
                                                      iVar1 = ERR_clear_last_mark();
                                                      iVar1 = test_true("test/errtest.c",0xe6,
                                                                        "ERR_clear_last_mark()",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        uVar4 = ERR_peek_last_error();
                                                        iVar1 = test_ulong_eq("test/errtest.c",0xe7,
                                                                              "shouldnot",
                                                                                                                                                            
                                                  "ERR_peek_last_error()",uVar3,uVar4);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ERR_pop_to_mark();
                                                    iVar1 = test_false("test/errtest.c",0xee,
                                                                       "ERR_pop_to_mark()",
                                                                       iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      uVar4 = ERR_peek_last_error();
                                                      iVar1 = test_ulong_eq("test/errtest.c",0xef,
                                                                            &_LC16,
                                                  "ERR_peek_last_error()",0,uVar4);
                                                  if (iVar1 != 0) {
                                                    ERR_new();
                                                    ERR_set_debug("test/errtest.c",0xf3,"test_marks"
                                                                 );
                                                    ERR_set_error(0xf,0xc0100,0);
                                                    iVar1 = ERR_clear_last_mark();
                                                    iVar1 = test_false("test/errtest.c",0xf4,
                                                                       "ERR_clear_last_mark()",
                                                                       iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      uVar4 = ERR_get_error();
                                                      iVar1 = test_ulong_eq("test/errtest.c",0xf6,
                                                                            "mallocfail",
                                                                            "ERR_get_error()",uVar2,
                                                                            uVar4);
                                                      if (iVar1 != 0) {
                                                        uVar4 = ERR_peek_last_error();
                                                        iVar1 = test_ulong_eq("test/errtest.c",0xf7,
                                                                              &_LC16,
                                                  "ERR_peek_last_error()",0,uVar4);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ERR_set_mark();
                                                    iVar1 = test_false("test/errtest.c",0x104,
                                                                       "ERR_set_mark()",iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      ERR_new();
                                                      ERR_set_debug("test/errtest.c",0x107,
                                                                    "test_marks");
                                                      ERR_set_error(0xf,0xc0100,0);
                                                      iVar1 = ERR_set_mark();
                                                      iVar1 = test_true("test/errtest.c",0x108,
                                                                        "ERR_set_mark()",iVar1 != 0)
                                                      ;
                                                      if (iVar1 != 0) {
                                                        ERR_new();
                                                        ERR_set_debug("test/errtest.c",0x10a,
                                                                      "test_marks");
                                                        ERR_set_error(0xf,0xc0103,0);
                                                        ERR_new();
                                                        ERR_set_debug("test/errtest.c",0x10b,
                                                                      "test_marks");
                                                        ERR_set_error(0xf,0xc0101,0);
                                                        iVar1 = ERR_pop_to_mark();
                                                        iVar1 = test_true("test/errtest.c",0x10e,
                                                                          "ERR_pop_to_mark()",
                                                                          iVar1 != 0);
                                                        if (iVar1 != 0) {
                                                          uVar4 = ERR_peek_last_error();
                                                          iVar1 = test_ulong_eq("test/errtest.c",
                                                                                0x10f,"mallocfail",
                                                                                                                                                                
                                                  "ERR_peek_last_error()",uVar2,uVar4);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ERR_set_mark();
                                                    iVar1 = test_true("test/errtest.c",0x112,
                                                                      "ERR_set_mark()",iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      ERR_new();
                                                      ERR_set_debug("test/errtest.c",0x114,
                                                                    "test_marks");
                                                      ERR_set_error(0xf,0xc0103,0);
                                                      ERR_new();
                                                      ERR_set_debug("test/errtest.c",0x115,
                                                                    "test_marks");
                                                      ERR_set_error(0xf,0xc0101,0);
                                                      iVar1 = ERR_clear_last_mark();
                                                      iVar1 = test_true("test/errtest.c",0x118,
                                                                        "ERR_clear_last_mark()",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        uVar2 = ERR_peek_last_error();
                                                        iVar1 = test_ulong_eq("test/errtest.c",0x119
                                                                              ,"shouldnot",
                                                                                                                                                            
                                                  "ERR_peek_last_error()",uVar3,uVar2);
                                                  if (iVar1 != 0) {
                                                    ERR_clear_error();
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
  return 0;
}



bool test_print_error_format(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  BIO_METHOD *type;
  BIO *bp;
  size_t sVar7;
  long in_FS_OFFSET;
  bool bVar8;
  char *local_240;
  char local_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_240 = (char *)0x0;
  ERR_set_mark();
  ERR_new();
  ERR_set_debug("test/errtest.c",0x25,"test_print_error_format");
  ERR_set_error(2,1,0);
  uVar5 = ERR_peek_error();
  uVar3 = (uint)uVar5 & 0x7fffff;
  if ((uVar5 & 0x80000000) != 0) {
    uVar3 = (uint)uVar5 & 0x7fffffff;
  }
  iVar4 = test_int_eq("test/errtest.c",0x48,"reasoncode","syserr",uVar3,1);
  if (iVar4 == 0) {
    bVar8 = false;
    bp = (BIO *)0x0;
    ERR_pop_to_mark();
  }
  else {
    pcVar6 = strerror(1);
    BIO_snprintf(local_238,0x200,":error:%08lX:%s:%s:%s:%s:%d",uVar5,"system library",
                 "test_print_error_format",pcVar6,"test/errtest.c",0x25);
    type = BIO_s_mem();
    bp = BIO_new(type);
    iVar4 = test_ptr("test/errtest.c",0x5d,"bio = BIO_new(BIO_s_mem())",bp);
    if (iVar4 != 0) {
      ERR_print_errors(bp);
      uVar5 = BIO_ctrl(bp,3,0,&local_240);
      iVar4 = test_int_gt("test/errtest.c",0x62,"len = BIO_get_mem_data(bio, &out)",&_LC16,
                          uVar5 & 0xffffffff,0);
      if (iVar4 != 0) {
        cVar2 = *local_240;
        pcVar6 = local_240;
        while ((cVar2 != ':' && (cVar2 != '\0'))) {
          iVar4 = test_true("test/errtest.c",0x66,"IS_HEX(*p)",
                            (byte)(cVar2 - 0x30U) < 10 || (byte)(cVar2 + 0xbfU) < 6);
          if (iVar4 == 0) {
            bVar8 = false;
            goto LAB_00101492;
          }
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar1;
        }
        iVar4 = test_true("test/errtest.c",0x69,"*p != 0",cVar2 != '\0');
        if (iVar4 != 0) {
          sVar7 = strlen(local_238);
          iVar4 = test_strn_eq("test/errtest.c",0x6a,"expected",&_LC45,local_238,sVar7,pcVar6,sVar7)
          ;
          bVar8 = iVar4 != 0;
          goto LAB_00101492;
        }
      }
    }
    bVar8 = false;
  }
LAB_00101492:
  BIO_free(bp);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void vdata_appends(void)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ERR_new();
  ERR_set_debug("test/errtest.c",0x87,"vdata_appends");
  ERR_set_error(0xf,0xc0100,0);
  ERR_add_error_data(1,"hello ");
  ERR_add_error_data(1,"world");
  ERR_peek_error_data(&local_18,0);
  test_str_eq("test/errtest.c",0x8b,&_LC5,"\"hello world\"",local_18,"hello world");
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void preserves_system_error(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  ERR_get_error();
  test_int_eq("test/errtest.c",0x7e,"errno","EINVAL",*piVar1,0x16);
  return;
}



undefined8 setup_tests(void)

{
  add_test("preserves_system_error",preserves_system_error);
  add_test("vdata_appends",vdata_appends);
  add_test("raised_error",raised_error);
  add_test("test_print_error_format",test_print_error_format);
  add_test("test_marks",test_marks);
  add_all_tests("test_save_restore",test_save_restore,2,1);
  add_test("test_clear_error",0x100000);
  return 1;
}



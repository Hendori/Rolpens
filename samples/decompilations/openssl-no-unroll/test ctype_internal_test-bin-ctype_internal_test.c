
ulong test_ctype_tolower(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(case_change + (long)param_1 * 8 + 4);
  uVar2 = ossl_tolower(*(undefined4 *)(case_change + (long)param_1 * 8));
  uVar4 = test_int_eq("test/ctype_internal_test.c",0x4a,"ossl_tolower(case_change[n].u)",
                      "case_change[n].l",uVar2,uVar1);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar2 = ossl_tolower(uVar1);
  iVar3 = test_int_eq("test/ctype_internal_test.c",0x4b,"ossl_tolower(case_change[n].l)",
                      "case_change[n].l",uVar2,uVar1);
  return (ulong)(iVar3 != 0);
}



ulong test_ctype_toupper(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(case_change + (long)param_1 * 8);
  uVar2 = ossl_toupper(*(undefined4 *)(case_change + (long)param_1 * 8 + 4));
  uVar4 = test_int_eq("test/ctype_internal_test.c",0x44,"ossl_toupper(case_change[n].l)",
                      "case_change[n].u",uVar2,uVar1);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar2 = ossl_toupper(uVar1);
  iVar3 = test_int_eq("test/ctype_internal_test.c",0x45,"ossl_toupper(case_change[n].u)",
                      "case_change[n].u",uVar2,uVar1);
  return (ulong)(iVar3 != 0);
}



bool test_ctype_chars(uint param_1)

{
  int iVar1;
  ushort **ppuVar2;
  long lVar3;
  
  iVar1 = test_int_eq("test/ctype_internal_test.c",0x1e,"isascii((unsigned char)n) != 0",
                      "ossl_isascii(n) != 0",(uint)~(int)(char)param_1 >> 0x1f,param_1 < 0x80);
  if (iVar1 != 0) {
    if (0x7f < param_1) {
      return true;
    }
    lVar3 = (long)(int)param_1;
    iVar1 = ossl_ctype_check(param_1,3);
    ppuVar2 = __ctype_b_loc();
    iVar1 = test_int_eq("test/ctype_internal_test.c",0x24,"isalpha(n) != 0","ossl_isalpha(n) != 0",
                        (*ppuVar2)[lVar3] >> 10 & 1,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_ctype_check(param_1,7);
      iVar1 = test_int_eq("test/ctype_internal_test.c",0x25,"isalnum(n) != 0","ossl_isalnum(n) != 0"
                          ,(*ppuVar2)[lVar3] >> 3 & 1,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_ctype_check(param_1,0x20);
        iVar1 = test_int_eq("test/ctype_internal_test.c",0x27,"isblank(n) != 0",
                            "ossl_isblank(n) != 0",(*ppuVar2)[lVar3] & 1,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_ctype_check(param_1,0x40);
          iVar1 = test_int_eq("test/ctype_internal_test.c",0x29,"iscntrl(n) != 0",
                              "ossl_iscntrl(n) != 0",(*ppuVar2)[lVar3] >> 1 & 1,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = ossl_isdigit(param_1);
            iVar1 = test_int_eq("test/ctype_internal_test.c",0x2a,"isdigit(n) != 0",
                                "ossl_isdigit(n) != 0",(*ppuVar2)[lVar3] >> 0xb & 1,iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ossl_ctype_check(param_1,0x80);
              iVar1 = test_int_eq("test/ctype_internal_test.c",0x2b,"isgraph(n) != 0",
                                  "ossl_isgraph(n) != 0",(uint)(int)(short)(*ppuVar2)[lVar3] >> 0x1f
                                  ,iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = ossl_islower(param_1);
                iVar1 = test_int_eq("test/ctype_internal_test.c",0x2c,"islower(n) != 0",
                                    "ossl_islower(n) != 0",(*ppuVar2)[lVar3] >> 9 & 1,iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = ossl_ctype_check(param_1,0x100);
                  iVar1 = test_int_eq("test/ctype_internal_test.c",0x2d,"isprint(n) != 0",
                                      "ossl_isprint(n) != 0",(*ppuVar2)[lVar3] >> 0xe & 1,iVar1 != 0
                                     );
                  if (iVar1 != 0) {
                    iVar1 = ossl_ctype_check(param_1,0x200);
                    iVar1 = test_int_eq("test/ctype_internal_test.c",0x2e,"ispunct(n) != 0",
                                        "ossl_ispunct(n) != 0",(*ppuVar2)[lVar3] >> 2 & 1,iVar1 != 0
                                       );
                    if (iVar1 != 0) {
                      iVar1 = ossl_ctype_check(param_1,8);
                      iVar1 = test_int_eq("test/ctype_internal_test.c",0x2f,"isspace(n) != 0",
                                          "ossl_isspace(n) != 0",(*ppuVar2)[lVar3] >> 0xd & 1,
                                          iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = ossl_isupper(param_1);
                        iVar1 = test_int_eq("test/ctype_internal_test.c",0x30,"isupper(n) != 0",
                                            "ossl_isupper(n) != 0",
                                            *(byte *)((long)*ppuVar2 + lVar3 * 2 + 1) & 1,iVar1 != 0
                                           );
                        if (iVar1 != 0) {
                          iVar1 = ossl_ctype_check(param_1,0x10);
                          iVar1 = test_int_eq("test/ctype_internal_test.c",0x31,"isxdigit(n) != 0",
                                              "ossl_isxdigit(n) != 0",(*ppuVar2)[lVar3] >> 0xc & 1,
                                              iVar1 != 0);
                          return iVar1 != 0;
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
  return false;
}



bool test_ctype_eof(void)

{
  int iVar1;
  
  iVar1 = test_int_eq("test/ctype_internal_test.c",0x1e,"isascii((unsigned char)n) != 0",
                      "ossl_isascii(n) != 0",0,0);
  return iVar1 != 0;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_ctype_chars",test_ctype_chars,0x100,1);
  add_all_tests("test_ctype_toupper",test_ctype_toupper,8,1);
  add_all_tests("test_ctype_tolower",0x100000,8,1);
  add_test("test_ctype_eof",test_ctype_eof);
  return 1;
}



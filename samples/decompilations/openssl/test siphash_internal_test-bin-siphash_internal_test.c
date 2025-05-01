
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_siphash(int param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *extraout_RDX;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  lVar6 = (long)param_1 * 0x50;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = *(undefined8 *)(tests + lVar6);
  lVar2 = *(long *)(tests + lVar6 + 8);
  local_e8 = *(undefined8 *)(tests + lVar6 + 0x10);
  uStack_e0 = *(undefined8 *)(tests + lVar6 + 0x18);
  local_d8 = *(undefined8 *)(tests + lVar6 + 0x20);
  uStack_d0 = *(undefined8 *)(tests + lVar6 + 0x28);
  local_c8 = *(undefined8 *)(tests + lVar6 + 0x30);
  uStack_c0 = *(undefined8 *)(tests + lVar6 + 0x38);
  local_b8 = *(undefined8 *)(tests + lVar6 + 0x40);
  uStack_b0 = *(undefined8 *)(tests + lVar6 + 0x48);
  uVar1 = *(uint *)(tests + lVar6);
  lStack_f0 = lVar2;
  if ((lVar2 - 8U & 0xfffffffffffffff7) == 0) {
    iVar3 = test_int_le("test/siphash_internal_test.c",0xbc,"inlen","sizeof(in)",uVar1,0x40);
    if (iVar3 != 0) {
      uVar8 = (ulong)(int)uVar1;
      local_a8 = __LC4;
      uStack_a0 = _UNK_001035a8;
      if (uVar8 != 0) {
        uVar4 = 0;
        if (0xe < uVar8 - 1) {
          local_88 = __LC4;
          uStack_80 = _UNK_001035a8;
          uVar4 = uVar8 >> 4;
          if (uVar4 != 1) {
            local_78 = __LC5;
            uStack_70 = _UNK_001035b8;
            if (uVar4 != 2) {
              local_68 = __LC6;
              uStack_60 = _UNK_001035c8;
              if (uVar4 != 3) {
                local_58 = __LC7;
                uStack_50 = _UNK_001035d8;
              }
            }
          }
          uVar4 = uVar8 & 0xfffffffffffffff0;
          if ((uVar1 & 0xf) == 0) goto LAB_00100270;
        }
        *(char *)((long)&local_88 + uVar4) = (char)uVar4;
        if (uVar4 + 1 < uVar8) {
          *(char *)((long)&local_88 + uVar4 + 1) = (char)(uVar4 + 1);
          if (uVar4 + 2 < uVar8) {
            *(char *)((long)&local_88 + uVar4 + 2) = (char)(uVar4 + 2);
            if (uVar4 + 3 < uVar8) {
              *(char *)((long)&local_88 + uVar4 + 3) = (char)(uVar4 + 3);
              if (uVar4 + 4 < uVar8) {
                *(char *)((long)&local_88 + uVar4 + 4) = (char)(uVar4 + 4);
                if (uVar4 + 5 < uVar8) {
                  *(char *)((long)&local_88 + uVar4 + 5) = (char)(uVar4 + 5);
                  if (uVar4 + 6 < uVar8) {
                    *(char *)((long)&local_88 + uVar4 + 6) = (char)(uVar4 + 6);
                    if (uVar4 + 7 < uVar8) {
                      *(char *)((long)&local_88 + uVar4 + 7) = (char)(uVar4 + 7);
                      if (uVar4 + 8 < uVar8) {
                        *(char *)((long)&uStack_80 + uVar4) = (char)(uVar4 + 8);
                        if (uVar4 + 9 < uVar8) {
                          *(char *)((long)&uStack_80 + uVar4 + 1) = (char)(uVar4 + 9);
                          if (uVar4 + 10 < uVar8) {
                            *(char *)((long)&uStack_80 + uVar4 + 2) = (char)(uVar4 + 10);
                            if (uVar4 + 0xb < uVar8) {
                              *(char *)((long)&uStack_80 + uVar4 + 3) = (char)(uVar4 + 0xb);
                              if (uVar4 + 0xc < uVar8) {
                                *(char *)((long)&uStack_80 + uVar4 + 4) = (char)(uVar4 + 0xc);
                                if (uVar4 + 0xd < uVar8) {
                                  *(char *)((long)&uStack_80 + uVar4 + 5) = (char)(uVar4 + 0xd);
                                  if (uVar4 + 0xe < uVar8) {
                                    *(char *)((long)&uStack_80 + uVar4 + 6) = (char)(uVar4 + 0xe);
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
LAB_00100270:
      iVar3 = SipHash_set_hash_size(local_138,lVar2);
      iVar3 = test_true("test/siphash_internal_test.c",0xc6,
                        "SipHash_set_hash_size(&siphash, expectedlen)",iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = SipHash_Init(local_138,&local_a8,0,0);
        iVar3 = test_true("test/siphash_internal_test.c",199,"SipHash_Init(&siphash, key, 0, 0)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          SipHash_Update(local_138,&local_88,uVar8);
          iVar3 = SipHash_Final(local_138,local_98,lVar2);
          iVar3 = test_true("test/siphash_internal_test.c",0xca,
                            "SipHash_Final(&siphash, out, expectedlen)",iVar3 != 0);
          if (iVar3 != 0) {
            iVar3 = test_mem_eq("test/siphash_internal_test.c",0xcb,&_LC12,"expected",local_98,lVar2
                                ,&local_e8,lVar2);
            if (iVar3 != 0) {
              if (uVar8 < 0x11) goto LAB_001003dd;
              iVar3 = SipHash_set_hash_size(local_138,lVar2);
              iVar3 = test_true("test/siphash_internal_test.c",0xcf,
                                "SipHash_set_hash_size(&siphash, expectedlen)",iVar3 != 0);
              if (iVar3 != 0) {
                iVar3 = SipHash_Init(local_138,&local_a8,0,0);
                iVar3 = test_true("test/siphash_internal_test.c",0xd0,
                                  "SipHash_Init(&siphash, key, 0, 0)",iVar3 != 0);
                if (iVar3 != 0) {
                  SipHash_Update(local_138,&local_88,1);
                  SipHash_Update(local_138,(long)&local_88 + 1,uVar8 - 1);
                  iVar3 = SipHash_Final(local_138,local_98,lVar2);
                  iVar3 = test_true("test/siphash_internal_test.c",0xd4,
                                    "SipHash_Final(&siphash, out, expectedlen)",iVar3 != 0);
                  if (iVar3 != 0) {
                    puVar7 = &local_e8;
                    lVar6 = lVar2;
                    iVar3 = test_mem_eq("test/siphash_internal_test.c",0xd7,&_LC12,"expected",
                                        local_98,lVar2);
                    if (iVar3 == 0) {
                      test_info("test/siphash_internal_test.c",0xd8,
                                "SipHash test #%d/1+(N-1) failed.",param_1,puVar7,lVar6);
                    }
                    else {
                      if (uVar8 < 0x21) {
LAB_001003dd:
                        uVar5 = 1;
                        goto LAB_001002e2;
                      }
                      iVar3 = SipHash_set_hash_size(local_138,lVar2);
                      iVar3 = test_true("test/siphash_internal_test.c",0xe0,
                                        "SipHash_set_hash_size(&siphash, expectedlen)",iVar3 != 0);
                      if (iVar3 != 0) {
                        iVar3 = SipHash_Init(local_138,&local_a8,0,0);
                        iVar3 = test_true("test/siphash_internal_test.c",0xe1,
                                          "SipHash_Init(&siphash, key, 0, 0)",iVar3 != 0);
                        if (iVar3 != 0) {
                          uVar4 = uVar8 >> 1;
                          SipHash_Update(local_138,&local_88,uVar4);
                          SipHash_Update(local_138,(long)&local_88 + uVar4,uVar8 - uVar4);
                          iVar3 = SipHash_Final(local_138,local_98,lVar2);
                          iVar3 = test_true("test/siphash_internal_test.c",0xe5,
                                            "SipHash_Final(&siphash, out, expectedlen)",iVar3 != 0);
                          if (iVar3 != 0) {
                            iVar3 = test_mem_eq("test/siphash_internal_test.c",0xe8,&_LC12,
                                                "expected",local_98,lVar2,&local_e8,lVar2);
                            if (iVar3 != 0) {
                              uVar4 = 0x10;
                              puVar7 = extraout_RDX;
                              do {
                                iVar3 = SipHash_set_hash_size(local_138,lVar2,puVar7);
                                iVar3 = test_true("test/siphash_internal_test.c",0xee,
                                                  "SipHash_set_hash_size(&siphash, expectedlen)",
                                                  iVar3 != 0);
                                if (iVar3 == 0) goto LAB_001002e0;
                                iVar3 = SipHash_Init(local_138,&local_a8,0,0);
                                iVar3 = test_true("test/siphash_internal_test.c",0xef,
                                                  "SipHash_Init(&siphash, key, 0, 0)",iVar3 != 0);
                                if (iVar3 == 0) goto LAB_001002e0;
                                SipHash_Update(local_138,&local_88,uVar4);
                                SipHash_Update(local_138,(long)&local_88 + uVar4);
                                iVar3 = SipHash_Final(local_138,local_98,lVar2);
                                iVar3 = test_true("test/siphash_internal_test.c",0xf3,
                                                  "SipHash_Final(&siphash, out, expectedlen)",
                                                  iVar3 != 0);
                                if (iVar3 == 0) goto LAB_001002e0;
                                puVar7 = &local_e8;
                                iVar3 = test_mem_eq("test/siphash_internal_test.c",0xf6,&_LC12,
                                                    "expected",local_98,lVar2,&local_e8,lVar2);
                                if (iVar3 == 0) {
                                  test_info("test/siphash_internal_test.c",0xf7,
                                            "SipHash test #%d/%zu+%zu failed.",param_1,uVar4,
                                            uVar8 - uVar4);
                                  goto LAB_001002e0;
                                }
                                uVar4 = uVar4 + 0x10;
                              } while (uVar4 < uVar8);
                              goto LAB_001003dd;
                            }
                            test_info("test/siphash_internal_test.c",0xe9,
                                      "SipHash test #%d/2 failed.",param_1);
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
    test_info("test/siphash_internal_test.c",0xb7,"size %zu vs %d and %d",lVar2,8,0x10);
  }
LAB_001002e0:
  uVar5 = 0;
LAB_001002e2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



bool test_siphash_basic(void)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  uVar1 = SipHash_set_hash_size(local_98,4);
  iVar2 = test_int_eq("test/siphash_internal_test.c",0x108,"SipHash_set_hash_size(&siphash, 4)",
                      &_LC17,uVar1,0);
  if (iVar2 != 0) {
    iVar2 = SipHash_Final(local_98,local_58,0);
    iVar2 = test_false("test/siphash_internal_test.c",0x109,"SipHash_Final(&siphash, output, 0)",
                       iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = SipHash_set_hash_size(local_98,8);
      iVar2 = test_true("test/siphash_internal_test.c",0x10b,"SipHash_set_hash_size(&siphash, 8)",
                        iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = SipHash_Final(local_98,local_58,8);
        iVar2 = test_false("test/siphash_internal_test.c",0x10c,"SipHash_Final(&siphash, output, 8)"
                           ,iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = SipHash_Init(local_98,key_0,0,0);
          iVar2 = test_true("test/siphash_internal_test.c",0x10d,"SipHash_Init(&siphash, key, 0, 0)"
                            ,iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = SipHash_Final(local_98,local_58,8);
            iVar2 = test_true("test/siphash_internal_test.c",0x10e,
                              "SipHash_Final(&siphash, output, 8)",iVar2 != 0);
            if (iVar2 != 0) {
              uVar1 = SipHash_Final(local_98,local_58,0x10);
              iVar2 = test_int_eq("test/siphash_internal_test.c",0x10f,
                                  "SipHash_Final(&siphash, output, 16)",&_LC17,uVar1,0);
              if (iVar2 != 0) {
                iVar2 = SipHash_set_hash_size(local_98,0x10);
                iVar2 = test_true("test/siphash_internal_test.c",0x112,
                                  "SipHash_set_hash_size(&siphash, 16)",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = SipHash_Init(local_98,key_0,0,0);
                  iVar2 = test_true("test/siphash_internal_test.c",0x113,
                                    "SipHash_Init(&siphash, key, 0, 0)",iVar2 != 0);
                  if (iVar2 != 0) {
                    uVar1 = SipHash_Final(local_98,local_58,8);
                    iVar2 = test_int_eq("test/siphash_internal_test.c",0x114,
                                        "SipHash_Final(&siphash, output, 8)",&_LC17,uVar1,0);
                    if (iVar2 != 0) {
                      iVar2 = SipHash_Final(local_98,local_58,0x10);
                      iVar2 = test_true("test/siphash_internal_test.c",0x115,
                                        "SipHash_Final(&siphash, output, 16)",iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = SipHash_set_hash_size(local_98,0);
                        iVar2 = test_true("test/siphash_internal_test.c",0x118,
                                          "SipHash_set_hash_size(&siphash, 0)",iVar2 != 0);
                        if (iVar2 != 0) {
                          iVar2 = SipHash_Init(local_98,key_0,0,0);
                          iVar2 = test_true("test/siphash_internal_test.c",0x119,
                                            "SipHash_Init(&siphash, key, 0, 0)",iVar2 != 0);
                          if (iVar2 != 0) {
                            uVar1 = SipHash_Final(local_98,local_58,8);
                            iVar2 = test_int_eq("test/siphash_internal_test.c",0x11a,
                                                "SipHash_Final(&siphash, output, 8)",&_LC17,uVar1,0)
                            ;
                            if (iVar2 != 0) {
                              iVar2 = SipHash_Final(local_98,local_58,0x10);
                              iVar2 = test_true("test/siphash_internal_test.c",0x11b,
                                                "SipHash_Final(&siphash, output, 16)",iVar2 != 0);
                              bVar3 = iVar2 != 0;
                              goto LAB_001007ca;
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
LAB_001007ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_siphash_basic",test_siphash_basic);
  add_all_tests("test_siphash",0x100000,0x80,1);
  return 1;
}



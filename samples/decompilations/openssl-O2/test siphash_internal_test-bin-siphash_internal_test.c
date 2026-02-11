
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_siphash(int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *extraout_RDX;
  undefined8 *puVar6;
  ulong uVar7;
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
  char local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  lVar5 = (long)param_1 * 0x50;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = *(undefined8 *)(tests + lVar5);
  lVar1 = *(long *)(tests + lVar5 + 8);
  local_e8 = *(undefined8 *)(tests + lVar5 + 0x10);
  uStack_e0 = *(undefined8 *)(tests + lVar5 + 0x18);
  local_d8 = *(undefined8 *)(tests + lVar5 + 0x20);
  uStack_d0 = *(undefined8 *)(tests + lVar5 + 0x28);
  local_c8 = *(undefined8 *)(tests + lVar5 + 0x30);
  uStack_c0 = *(undefined8 *)(tests + lVar5 + 0x38);
  local_b8 = *(undefined8 *)(tests + lVar5 + 0x40);
  uStack_b0 = *(undefined8 *)(tests + lVar5 + 0x48);
  iVar2 = *(int *)(tests + lVar5);
  uVar8 = (ulong)iVar2;
  lStack_f0 = lVar1;
  if ((lVar1 - 8U & 0xfffffffffffffff7) == 0) {
    iVar2 = test_int_le("test/siphash_internal_test.c",0xbc,"inlen","sizeof(in)",iVar2,0x40);
    if (iVar2 != 0) {
      local_a8 = __LC4;
      uStack_a0 = _UNK_00103488;
      if (uVar8 != 0) {
        uVar4 = 0;
        if ((uVar8 & 1) != 0) {
          local_88[0] = '\0';
          uVar4 = 1;
          if (uVar8 == 1) goto LAB_00100125;
        }
        do {
          local_88[uVar4] = (char)uVar4;
          uVar7 = uVar4 + 2;
          local_88[uVar4 + 1] = (char)uVar4 + '\x01';
          uVar4 = uVar7;
        } while (uVar8 != uVar7);
      }
LAB_00100125:
      iVar2 = SipHash_set_hash_size(local_138,lVar1);
      iVar2 = test_true("test/siphash_internal_test.c",0xc6,
                        "SipHash_set_hash_size(&siphash, expectedlen)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = SipHash_Init(local_138,&local_a8,0,0);
        iVar2 = test_true("test/siphash_internal_test.c",199,"SipHash_Init(&siphash, key, 0, 0)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          SipHash_Update(local_138,local_88,uVar8);
          iVar2 = SipHash_Final(local_138,local_98,lVar1);
          iVar2 = test_true("test/siphash_internal_test.c",0xca,
                            "SipHash_Final(&siphash, out, expectedlen)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = test_mem_eq("test/siphash_internal_test.c",0xcb,&_LC9,"expected",local_98,lVar1,
                                &local_e8,lVar1);
            if (iVar2 != 0) {
              if (uVar8 < 0x11) goto LAB_0010029a;
              iVar2 = SipHash_set_hash_size(local_138,lVar1);
              iVar2 = test_true("test/siphash_internal_test.c",0xcf,
                                "SipHash_set_hash_size(&siphash, expectedlen)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = SipHash_Init(local_138,&local_a8,0,0);
                iVar2 = test_true("test/siphash_internal_test.c",0xd0,
                                  "SipHash_Init(&siphash, key, 0, 0)",iVar2 != 0);
                if (iVar2 != 0) {
                  SipHash_Update(local_138,local_88,1);
                  SipHash_Update(local_138,local_88 + 1,uVar8 - 1);
                  iVar2 = SipHash_Final(local_138,local_98,lVar1);
                  iVar2 = test_true("test/siphash_internal_test.c",0xd4,
                                    "SipHash_Final(&siphash, out, expectedlen)",iVar2 != 0);
                  if (iVar2 != 0) {
                    puVar6 = &local_e8;
                    lVar5 = lVar1;
                    iVar2 = test_mem_eq("test/siphash_internal_test.c",0xd7,&_LC9,"expected",
                                        local_98,lVar1);
                    if (iVar2 == 0) {
                      test_info("test/siphash_internal_test.c",0xd8,
                                "SipHash test #%d/1+(N-1) failed.",param_1,puVar6,lVar5);
                    }
                    else {
                      if (uVar8 < 0x21) {
LAB_0010029a:
                        uVar3 = 1;
                        goto LAB_0010019a;
                      }
                      iVar2 = SipHash_set_hash_size(local_138,lVar1);
                      iVar2 = test_true("test/siphash_internal_test.c",0xe0,
                                        "SipHash_set_hash_size(&siphash, expectedlen)",iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = SipHash_Init(local_138,&local_a8,0,0);
                        iVar2 = test_true("test/siphash_internal_test.c",0xe1,
                                          "SipHash_Init(&siphash, key, 0, 0)",iVar2 != 0);
                        if (iVar2 != 0) {
                          uVar4 = uVar8 >> 1;
                          SipHash_Update(local_138,local_88,uVar4);
                          SipHash_Update(local_138,local_88 + uVar4,uVar8 - uVar4);
                          iVar2 = SipHash_Final(local_138,local_98,lVar1);
                          iVar2 = test_true("test/siphash_internal_test.c",0xe5,
                                            "SipHash_Final(&siphash, out, expectedlen)",iVar2 != 0);
                          if (iVar2 != 0) {
                            iVar2 = test_mem_eq("test/siphash_internal_test.c",0xe8,&_LC9,"expected"
                                                ,local_98,lVar1,&local_e8,lVar1);
                            if (iVar2 != 0) {
                              uVar4 = 0x10;
                              puVar6 = extraout_RDX;
                              do {
                                iVar2 = SipHash_set_hash_size(local_138,lVar1,puVar6);
                                iVar2 = test_true("test/siphash_internal_test.c",0xee,
                                                  "SipHash_set_hash_size(&siphash, expectedlen)",
                                                  iVar2 != 0);
                                if (iVar2 == 0) goto LAB_00100198;
                                iVar2 = SipHash_Init(local_138,&local_a8,0,0);
                                iVar2 = test_true("test/siphash_internal_test.c",0xef,
                                                  "SipHash_Init(&siphash, key, 0, 0)",iVar2 != 0);
                                if (iVar2 == 0) goto LAB_00100198;
                                SipHash_Update(local_138,local_88,uVar4);
                                SipHash_Update(local_138,local_88 + uVar4);
                                iVar2 = SipHash_Final(local_138,local_98,lVar1);
                                iVar2 = test_true("test/siphash_internal_test.c",0xf3,
                                                  "SipHash_Final(&siphash, out, expectedlen)",
                                                  iVar2 != 0);
                                if (iVar2 == 0) goto LAB_00100198;
                                puVar6 = &local_e8;
                                iVar2 = test_mem_eq("test/siphash_internal_test.c",0xf6,&_LC9,
                                                    "expected",local_98,lVar1,&local_e8,lVar1);
                                if (iVar2 == 0) {
                                  test_info("test/siphash_internal_test.c",0xf7,
                                            "SipHash test #%d/%zu+%zu failed.",param_1,uVar4,
                                            uVar8 - uVar4);
                                  goto LAB_00100198;
                                }
                                uVar4 = uVar4 + 0x10;
                              } while (uVar4 < uVar8);
                              goto LAB_0010029a;
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
    test_info("test/siphash_internal_test.c",0xb7,"size %zu vs %d and %d",lVar1,8,0x10);
  }
LAB_00100198:
  uVar3 = 0;
LAB_0010019a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
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
                      &_LC14,uVar1,0);
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
                                  "SipHash_Final(&siphash, output, 16)",&_LC14,uVar1,0);
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
                                        "SipHash_Final(&siphash, output, 8)",&_LC14,uVar1,0);
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
                                                "SipHash_Final(&siphash, output, 8)",&_LC14,uVar1,0)
                            ;
                            if (iVar2 != 0) {
                              iVar2 = SipHash_Final(local_98,local_58,0x10);
                              iVar2 = test_true("test/siphash_internal_test.c",0x11b,
                                                "SipHash_Final(&siphash, output, 16)",iVar2 != 0);
                              bVar3 = iVar2 != 0;
                              goto LAB_0010069a;
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
LAB_0010069a:
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



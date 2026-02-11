
bool test_srtm(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  uVar2 = ossl_quic_srtm_new(0,0);
  iVar1 = test_ptr("test/quic_srtm_test.c",0x1e,"srtm = ossl_quic_srtm_new(NULL, NULL)",uVar2);
  if (iVar1 != 0) {
    iVar1 = ossl_quic_srtm_add(uVar2,&ptrs,0,token_1);
    iVar1 = test_true("test/quic_srtm_test.c",0x21,"ossl_quic_srtm_add(srtm, ptrs + 0, 0, &token_1)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_quic_srtm_add(uVar2,&ptrs,0,token_1);
      iVar1 = test_false("test/quic_srtm_test.c",0x22,
                         "ossl_quic_srtm_add(srtm, ptrs + 0, 0, &token_1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_srtm_remove(uVar2,&ptrs,1);
        iVar1 = test_false("test/quic_srtm_test.c",0x23,"ossl_quic_srtm_remove(srtm, ptrs + 0, 1)",
                           iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_quic_srtm_remove(uVar2,0x10085b,0);
          iVar1 = test_false("test/quic_srtm_test.c",0x24,"ossl_quic_srtm_remove(srtm, ptrs + 3, 0)"
                             ,iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = ossl_quic_srtm_cull(uVar2,0x10085b);
            iVar1 = test_true("test/quic_srtm_test.c",0x25,"ossl_quic_srtm_cull(srtm, ptrs + 3)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ossl_quic_srtm_cull(uVar2,0x10085b);
              iVar1 = test_true("test/quic_srtm_test.c",0x26,"ossl_quic_srtm_cull(srtm, ptrs + 3)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = ossl_quic_srtm_add(uVar2,&ptrs,1,token_1);
                iVar1 = test_true("test/quic_srtm_test.c",0x27,
                                  "ossl_quic_srtm_add(srtm, ptrs + 0, 1, &token_1)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = ossl_quic_srtm_add(uVar2,&ptrs,2,token_1);
                  iVar1 = test_true("test/quic_srtm_test.c",0x28,
                                    "ossl_quic_srtm_add(srtm, ptrs + 0, 2, &token_1)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = ossl_quic_srtm_add(uVar2,&ptrs,3,token_1);
                    iVar1 = test_true("test/quic_srtm_test.c",0x29,
                                      "ossl_quic_srtm_add(srtm, ptrs + 0, 3, &token_1)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = ossl_quic_srtm_add(uVar2,0x100859,0,token_1);
                      iVar1 = test_true("test/quic_srtm_test.c",0x2a,
                                        "ossl_quic_srtm_add(srtm, ptrs + 1, 0, &token_1)",iVar1 != 0
                                       );
                      if (iVar1 != 0) {
                        iVar1 = ossl_quic_srtm_add(uVar2,0x10085a,0,token_2);
                        iVar1 = test_true("test/quic_srtm_test.c",0x2b,
                                          "ossl_quic_srtm_add(srtm, ptrs + 2, 0, &token_2)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = ossl_quic_srtm_add(uVar2,0x10085b,3,token_2);
                          iVar1 = test_true("test/quic_srtm_test.c",0x2c,
                                            "ossl_quic_srtm_add(srtm, ptrs + 3, 3, &token_2)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = ossl_quic_srtm_remove(uVar2,0x10085b,3);
                            iVar1 = test_true("test/quic_srtm_test.c",0x2d,
                                              "ossl_quic_srtm_remove(srtm, ptrs + 3, 3)",iVar1 != 0)
                            ;
                            if (iVar1 != 0) {
                              iVar1 = ossl_quic_srtm_lookup(uVar2,token_1,0,&local_50,&local_48);
                              iVar1 = test_true("test/quic_srtm_test.c",0x2e,
                                                "ossl_quic_srtm_lookup(srtm, &token_1, 0, &opaque, &seq_num)"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = test_ptr_eq("test/quic_srtm_test.c",0x2f,"opaque","ptrs + 1"
                                                    ,local_50,0x100859);
                                if (iVar1 != 0) {
                                  iVar1 = test_uint64_t_eq("test/quic_srtm_test.c",0x30,"seq_num",
                                                           &_LC16,local_48,0);
                                  if (iVar1 != 0) {
                                    iVar1 = ossl_quic_srtm_lookup
                                                      (uVar2,token_1,1,&local_50,&local_48);
                                    iVar1 = test_true("test/quic_srtm_test.c",0x31,
                                                                                                            
                                                  "ossl_quic_srtm_lookup(srtm, &token_1, 1, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = test_ptr_eq("test/quic_srtm_test.c",0x32,"opaque",
                                                          "ptrs + 0",local_50,&ptrs);
                                      if (iVar1 != 0) {
                                        iVar1 = test_uint64_t_eq("test/quic_srtm_test.c",0x33,
                                                                 "seq_num",&_LC20,local_48,3);
                                        if (iVar1 != 0) {
                                          iVar1 = ossl_quic_srtm_lookup
                                                            (uVar2,token_1,2,&local_50,&local_48);
                                          iVar1 = test_true("test/quic_srtm_test.c",0x34,
                                                                                                                        
                                                  "ossl_quic_srtm_lookup(srtm, &token_1, 2, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = test_ptr_eq("test/quic_srtm_test.c",0x35,
                                                                "opaque","ptrs + 0",local_50,&ptrs);
                                            if (iVar1 != 0) {
                                              iVar1 = test_uint64_t_eq("test/quic_srtm_test.c",0x36,
                                                                       "seq_num",&_LC22,local_48,2);
                                              if (iVar1 != 0) {
                                                iVar1 = ossl_quic_srtm_lookup
                                                                  (uVar2,token_1,3,&local_50,
                                                                   &local_48);
                                                iVar1 = test_true("test/quic_srtm_test.c",0x37,
                                                                                                                                    
                                                  "ossl_quic_srtm_lookup(srtm, &token_1, 3, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_ptr_eq("test/quic_srtm_test.c",0x38,
                                                                      "opaque","ptrs + 0",local_50,
                                                                      &ptrs);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_uint64_t_eq("test/quic_srtm_test.c"
                                                                             ,0x39,"seq_num",&_LC24,
                                                                             local_48,1);
                                                    if (iVar1 != 0) {
                                                      iVar1 = ossl_quic_srtm_lookup
                                                                        (uVar2,token_1,4,&local_50,
                                                                         &local_48);
                                                      iVar1 = test_true("test/quic_srtm_test.c",0x3a
                                                                        ,
                                                  "ossl_quic_srtm_lookup(srtm, &token_1, 4, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ptr_eq("test/quic_srtm_test.c",0x3b
                                                                        ,"opaque","ptrs + 0",
                                                                        local_50,&ptrs);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint64_t_eq(
                                                  "test/quic_srtm_test.c",0x3c,"seq_num",&_LC16,
                                                  local_48,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_srtm_lookup
                                                                      (uVar2,token_1,5,&local_50,
                                                                       &local_48);
                                                    iVar1 = test_false("test/quic_srtm_test.c",0x3d,
                                                                                                                                              
                                                  "ossl_quic_srtm_lookup(srtm, &token_1, 5, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_srtm_cull(uVar2,&ptrs);
                                                    iVar1 = test_true("test/quic_srtm_test.c",0x3e,
                                                                                                                                            
                                                  "ossl_quic_srtm_cull(srtm, ptrs + 0)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_srtm_lookup
                                                                      (uVar2,token_1,0,&local_50,
                                                                       &local_48);
                                                    iVar1 = test_true("test/quic_srtm_test.c",0x3f,
                                                                                                                                            
                                                  "ossl_quic_srtm_lookup(srtm, &token_1, 0, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ptr_eq("test/quic_srtm_test.c",0x40
                                                                        ,"opaque","ptrs + 1",
                                                                        local_50,0x100859);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint64_t_eq(
                                                  "test/quic_srtm_test.c",0x41,"seq_num",&_LC16,
                                                  local_48,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_srtm_lookup
                                                                      (uVar2,token_2,0,&local_50,
                                                                       &local_48);
                                                    iVar1 = test_true("test/quic_srtm_test.c",0x42,
                                                                                                                                            
                                                  "ossl_quic_srtm_lookup(srtm, &token_2, 0, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ptr_eq("test/quic_srtm_test.c",0x43
                                                                        ,"opaque","ptrs + 2",
                                                                        local_50,0x10085a);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint64_t_eq(
                                                  "test/quic_srtm_test.c",0x44,"seq_num",&_LC16,
                                                  local_48,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_srtm_remove(uVar2,0x10085a,0);
                                                    iVar1 = test_true("test/quic_srtm_test.c",0x45,
                                                                                                                                            
                                                  "ossl_quic_srtm_remove(srtm, ptrs + 2, 0)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_srtm_lookup
                                                                      (uVar2,token_2,0,&local_50,
                                                                       &local_48);
                                                    iVar1 = test_false("test/quic_srtm_test.c",0x46,
                                                                                                                                              
                                                  "ossl_quic_srtm_lookup(srtm, &token_2, 0, &opaque, &seq_num)"
                                                  ,iVar1 != 0);
                                                  bVar3 = iVar1 != 0;
                                                  goto LAB_00100064;
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
  bVar3 = false;
LAB_00100064:
  ossl_quic_srtm_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_srtm",0x100000);
  return 1;
}



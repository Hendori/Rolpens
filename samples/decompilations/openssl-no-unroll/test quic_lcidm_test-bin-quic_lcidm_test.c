
bool test_lcidm(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  int local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [13];
  undefined3 uStack_10b;
  undefined5 uStack_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [48];
  undefined1 local_b8 [16];
  undefined1 local_a8 [48];
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = SUB1613((undefined1  [16])0x0,0);
  local_168 = 0;
  uStack_10b = 0;
  uStack_108 = 0;
  local_160 = 0xffffffffffffffff;
  local_16c = 0;
  uVar2 = ossl_quic_lcidm_new(0,10);
  iVar1 = test_ptr("test/quic_lcidm_test.c",0x20,"lcidm = ossl_quic_lcidm_new(NULL, lcid_len)",uVar2
                  );
  if (iVar1 != 0) {
    uVar3 = ossl_quic_lcidm_get_lcid_len(uVar2);
    iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x23,"ossl_quic_lcidm_get_lcid_len(lcidm)",
                           "lcid_len",uVar3,10);
    if (iVar1 != 0) {
      iVar1 = ossl_quic_lcidm_enrol_odcid(uVar2,&ptrs,cid8_1);
      iVar1 = test_true("test/quic_lcidm_test.c",0x26,
                        "ossl_quic_lcidm_enrol_odcid(lcidm, ptrs + 0, &cid8_1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_lcidm_enrol_odcid(uVar2,&ptrs,cid8_2);
        iVar1 = test_false("test/quic_lcidm_test.c",0x27,
                           "ossl_quic_lcidm_enrol_odcid(lcidm, ptrs + 0, &cid8_2)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_quic_lcidm_enrol_odcid(uVar2,0x100aa9,cid8_1);
          iVar1 = test_false("test/quic_lcidm_test.c",0x28,
                             "ossl_quic_lcidm_enrol_odcid(lcidm, ptrs + 1, &cid8_1)",iVar1 != 0);
          if (iVar1 != 0) {
            uVar3 = ossl_quic_lcidm_get_num_active_lcid(uVar2,0x100aa9);
            iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x29,
                                   "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 1)",&_LC7,
                                   uVar3,0);
            if (iVar1 != 0) {
              iVar1 = ossl_quic_lcidm_enrol_odcid(uVar2,0x100aa9,cid8_3);
              iVar1 = test_true("test/quic_lcidm_test.c",0x2a,
                                "ossl_quic_lcidm_enrol_odcid(lcidm, ptrs + 1, &cid8_3)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = ossl_quic_lcidm_enrol_odcid(uVar2,0x100aa9,cid8_4);
                iVar1 = test_false("test/quic_lcidm_test.c",0x2b,
                                   "ossl_quic_lcidm_enrol_odcid(lcidm, ptrs + 1, &cid8_4)",
                                   iVar1 != 0);
                if (iVar1 != 0) {
                  uVar3 = ossl_quic_lcidm_get_num_active_lcid(uVar2,&ptrs);
                  iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x2c,
                                         "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 0)",
                                         &_LC11,uVar3,1);
                  if (iVar1 != 0) {
                    uVar3 = ossl_quic_lcidm_get_num_active_lcid(uVar2,0x100aa9);
                    iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x2d,
                                           "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 1)",
                                           &_LC11,uVar3,1);
                    if (iVar1 != 0) {
                      iVar1 = ossl_quic_lcidm_retire_odcid(uVar2,&ptrs);
                      iVar1 = test_true("test/quic_lcidm_test.c",0x2e,
                                        "ossl_quic_lcidm_retire_odcid(lcidm, ptrs + 0)",iVar1 != 0);
                      if (iVar1 != 0) {
                        uVar3 = ossl_quic_lcidm_get_num_active_lcid(uVar2,&ptrs);
                        iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x2f,
                                               "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 0)"
                                               ,&_LC7,uVar3,0);
                        if (iVar1 != 0) {
                          iVar1 = ossl_quic_lcidm_enrol_odcid(uVar2,&ptrs,cid8_1);
                          iVar1 = test_false("test/quic_lcidm_test.c",0x30,
                                             "ossl_quic_lcidm_enrol_odcid(lcidm, ptrs + 0, &cid8_1)"
                                             ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = ossl_quic_lcidm_enrol_odcid(uVar2,&ptrs,cid8_5);
                            iVar1 = test_false("test/quic_lcidm_test.c",0x31,
                                               "ossl_quic_lcidm_enrol_odcid(lcidm, ptrs + 0, &cid8_5)"
                                               ,iVar1 != 0);
                            if (iVar1 != 0) {
                              uVar3 = ossl_quic_lcidm_get_num_active_lcid(uVar2,&ptrs);
                              iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x32,
                                                                                                          
                                                  "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 0)"
                                                  ,&_LC7,uVar3,0);
                              if (iVar1 != 0) {
                                iVar1 = ossl_quic_lcidm_generate_initial(uVar2,0x100aaa,local_158);
                                iVar1 = test_true("test/quic_lcidm_test.c",0x34,
                                                  "ossl_quic_lcidm_generate_initial(lcidm, ptrs + 2, &lcid_1)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  uVar3 = ossl_quic_lcidm_get_num_active_lcid(uVar2,0x100aaa);
                                  iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x35,
                                                                                                                  
                                                  "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 2)"
                                                  ,&_LC11,uVar3,1);
                                  if (iVar1 != 0) {
                                    iVar1 = ossl_quic_lcidm_generate_initial
                                                      (uVar2,0x100aaa,local_118);
                                    iVar1 = test_false("test/quic_lcidm_test.c",0x36,
                                                                                                              
                                                  "ossl_quic_lcidm_generate_initial(lcidm, ptrs + 2, &lcid_init)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = ossl_quic_lcidm_generate(uVar2,0x100aaa,local_f8);
                                      iVar1 = test_true("test/quic_lcidm_test.c",0x37,
                                                                                                                
                                                  "ossl_quic_lcidm_generate(lcidm, ptrs + 2, &ncid_frame_1)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = ossl_quic_lcidm_generate(uVar2,0x100aaa,local_b8);
                                        iVar1 = test_true("test/quic_lcidm_test.c",0x38,
                                                                                                                    
                                                  "ossl_quic_lcidm_generate(lcidm, ptrs + 2, &ncid_frame_2)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = ossl_quic_lcidm_generate(uVar2,0x100aaa,local_78);
                                          iVar1 = test_true("test/quic_lcidm_test.c",0x39,
                                                                                                                        
                                                  "ossl_quic_lcidm_generate(lcidm, ptrs + 2, &ncid_frame_3)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            uVar3 = ossl_quic_lcidm_get_num_active_lcid
                                                              (uVar2,0x100aaa);
                                            iVar1 = test_size_t_eq("test/quic_lcidm_test.c",0x3a,
                                                                                                                                      
                                                  "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 2)"
                                                  ,&_LC21,uVar3,4);
                                            if (iVar1 != 0) {
                                              iVar1 = ossl_quic_lcidm_lookup
                                                                (uVar2,local_158,&local_160,
                                                                 &local_168);
                                              iVar1 = test_true("test/quic_lcidm_test.c",0x3b,
                                                                                                                                
                                                  "ossl_quic_lcidm_lookup(lcidm, &lcid_1, &seq_num, &opaque)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = test_ptr_eq("test/quic_lcidm_test.c",0x3c,
                                                                    "opaque","ptrs + 2",local_168,
                                                                    0x100aaa);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_uint64_t_eq("test/quic_lcidm_test.c",
                                                                           0x3d,"seq_num",&_LC7,
                                                                           local_160,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_lookup
                                                                      (uVar2,local_e8,&local_160,
                                                                       &local_168);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x3e,
                                                                                                                                            
                                                  "ossl_quic_lcidm_lookup(lcidm, &ncid_frame_1.conn_id, &seq_num, &opaque)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ptr_eq("test/quic_lcidm_test.c",
                                                                        0x40,"opaque","ptrs + 2",
                                                                        local_168,0x100aaa);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint64_t_eq(
                                                  "test/quic_lcidm_test.c",0x41,"seq_num",&_LC11,
                                                  local_160,1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_lookup
                                                                      (uVar2,local_a8,&local_160,
                                                                       &local_168);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x42,
                                                                                                                                            
                                                  "ossl_quic_lcidm_lookup(lcidm, &ncid_frame_2.conn_id, &seq_num, &opaque)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ptr_eq("test/quic_lcidm_test.c",
                                                                        0x44,"opaque","ptrs + 2",
                                                                        local_168,0x100aaa);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_uint64_t_eq(
                                                  "test/quic_lcidm_test.c",0x45,"seq_num",&_LC28,
                                                  local_160,2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_lookup
                                                                      (uVar2,local_68,&local_160,
                                                                       &local_168);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x46,
                                                                                                                                            
                                                  "ossl_quic_lcidm_lookup(lcidm, &ncid_frame_3.conn_id, &seq_num, &opaque)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_ptr_eq("test/quic_lcidm_test.c",
                                                                        0x48,"opaque","ptrs + 2",
                                                                        local_168,0x100aaa);
                                                    if (iVar1 != 0) {
                                                      uVar3 = 3;
                                                      iVar1 = test_uint64_t_eq(
                                                  "test/quic_lcidm_test.c",0x49,"seq_num",&_LC30,
                                                  local_160);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_retire
                                                                      (uVar2,0x100aaa,2,0,local_138,
                                                                       &local_160,&local_16c,uVar3);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x4a,
                                                                                                                                            
                                                  "ossl_quic_lcidm_retire(lcidm, ptrs + 2, 2, NULL, &lcid_dummy, &seq_num, &did_retire)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x4c,
                                                                      "did_retire",local_16c != 0);
                                                    if (iVar1 != 0) {
                                                      uVar3 = ossl_quic_lcidm_get_num_active_lcid
                                                                        (uVar2,0x100aaa);
                                                      uVar4 = 0x4d;
                                                      iVar1 = test_size_t_eq(
                                                  "test/quic_lcidm_test.c",0x4d,
                                                  "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 2)"
                                                  ,&_LC30,uVar3,3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_retire
                                                                      (uVar2,0x100aaa,2,0,local_138,
                                                                       &local_160,&local_16c);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x4e,
                                                                                                                                            
                                                  "ossl_quic_lcidm_retire(lcidm, ptrs + 2, 2, NULL, &lcid_dummy, &seq_num, &did_retire)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x50,
                                                                      "did_retire",local_16c != 0,
                                                                      uVar4);
                                                    if (iVar1 != 0) {
                                                      uVar3 = ossl_quic_lcidm_get_num_active_lcid
                                                                        (uVar2,0x100aaa);
                                                      uVar3 = test_size_t_eq(
                                                  "test/quic_lcidm_test.c",0x51,
                                                  "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 2)"
                                                  ,&_LC28,uVar3,2);
                                                  if ((int)uVar3 != 0) {
                                                    iVar1 = ossl_quic_lcidm_retire
                                                                      (uVar2,0x100aaa,2,0,local_138,
                                                                       &local_160,&local_16c,uVar3);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x52,
                                                                                                                                            
                                                  "ossl_quic_lcidm_retire(lcidm, ptrs + 2, 2, NULL, &lcid_dummy, &seq_num, &did_retire)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_false("test/quic_lcidm_test.c",0x54
                                                                       ,"did_retire",local_16c != 0)
                                                    ;
                                                    if (iVar1 != 0) {
                                                      uVar3 = ossl_quic_lcidm_get_num_active_lcid
                                                                        (uVar2,0x100aaa);
                                                      iVar1 = test_size_t_eq(
                                                  "test/quic_lcidm_test.c",0x55,
                                                  "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 2)"
                                                  ,&_LC28,uVar3,2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_lookup
                                                                      (uVar2,local_118,&local_160,
                                                                       &local_168);
                                                    iVar1 = test_false("test/quic_lcidm_test.c",0x56
                                                                       ,
                                                  "ossl_quic_lcidm_lookup(lcidm, &lcid_init, &seq_num, &opaque)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_lookup
                                                                      (uVar2,local_e8,&local_160,
                                                                       &local_168);
                                                    iVar1 = test_false("test/quic_lcidm_test.c",0x58
                                                                       ,
                                                  "ossl_quic_lcidm_lookup(lcidm, &ncid_frame_1.conn_id, &seq_num, &opaque)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_lookup
                                                                      (uVar2,local_a8,&local_160,
                                                                       &local_168);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x5a,
                                                                                                                                            
                                                  "ossl_quic_lcidm_lookup(lcidm, &ncid_frame_2.conn_id, &seq_num, &opaque)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_lcidm_cull(uVar2,0x100aaa);
                                                    iVar1 = test_true("test/quic_lcidm_test.c",0x5c,
                                                                                                                                            
                                                  "ossl_quic_lcidm_cull(lcidm, ptrs + 2)",iVar1 != 0
                                                  );
                                                  if (iVar1 != 0) {
                                                    uVar3 = ossl_quic_lcidm_get_num_active_lcid
                                                                      (uVar2,0x100aaa);
                                                    iVar1 = test_size_t_eq("test/quic_lcidm_test.c",
                                                                           0x5d,
                                                  "ossl_quic_lcidm_get_num_active_lcid(lcidm, ptrs + 2)"
                                                  ,&_LC7,uVar3,0);
                                                  bVar5 = iVar1 != 0;
                                                  goto LAB_0010008d;
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
              }
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_0010008d:
  ossl_quic_lcidm_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_lcidm",0x100000);
  return 1;
}



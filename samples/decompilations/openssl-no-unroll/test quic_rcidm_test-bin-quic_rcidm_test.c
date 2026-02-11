
uint test_rcidm(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_e0;
  char local_d8;
  long local_d7;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 2;
  local_b0._0_10_ = (unkuint10)0x308 << 0x40;
  local_b0._10_6_ = 0;
  local_78 = 3;
  local_70._0_10_ = (unkuint10)0x408 << 0x40;
  local_70._10_6_ = 0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  if (param_1 == 2) {
    uVar3 = ossl_quic_rcidm_new(0);
    uVar2 = test_ptr("test/quic_rcidm_test.c",0x2a,"rcidm = ossl_quic_rcidm_new(odcid)",uVar3);
    if (uVar2 == 0) goto LAB_001000ec;
    iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid(uVar3,&local_d8);
    uVar2 = test_false("test/quic_rcidm_test.c",0x37,
                       "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)",iVar1 != 0);
    if (uVar2 == 0) goto LAB_001000ec;
    uVar4 = ossl_quic_rcidm_get_num_active(uVar3);
    uVar2 = test_size_t_eq("test/quic_rcidm_test.c",0x38,"ossl_quic_rcidm_get_num_active(rcidm)",
                           &_LC7,uVar4,0);
    if (uVar2 == 0) goto LAB_001000ec;
    goto LAB_001003c5;
  }
  uVar3 = ossl_quic_rcidm_new(cid8_1);
  iVar1 = test_ptr("test/quic_rcidm_test.c",0x2a,"rcidm = ossl_quic_rcidm_new(odcid)",uVar3);
  if (iVar1 != 0) {
    iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed(uVar3,1);
    iVar1 = test_true("test/quic_rcidm_test.c",0x2f,
                      "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 1)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed(uVar3,0);
      iVar1 = test_false("test/quic_rcidm_test.c",0x30,
                         "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 0)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid(uVar3,&local_d8);
        iVar1 = test_true("test/quic_rcidm_test.c",0x31,
                          "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)",iVar1 != 0);
        if ((iVar1 != 0) &&
           (iVar1 = test_true("test/quic_rcidm_test.c",0x33,
                              "ossl_quic_conn_id_eq(&dcid_out, &cid8_1)",
                              local_d8 == '\b' && local_d7 == 1), iVar1 != 0)) {
          uVar4 = ossl_quic_rcidm_get_num_active(uVar3);
          iVar1 = test_size_t_eq("test/quic_rcidm_test.c",0x34,
                                 "ossl_quic_rcidm_get_num_active(rcidm)",&_LC7,uVar4,0);
          if (iVar1 != 0) {
            if (param_1 == 1) {
              iVar1 = ossl_quic_rcidm_add_from_server_retry(uVar3,cid8_5);
              iVar1 = test_true("test/quic_rcidm_test.c",0x3d,
                                "ossl_quic_rcidm_add_from_server_retry(rcidm, &cid8_5)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed(uVar3,1);
                uVar2 = test_true("test/quic_rcidm_test.c",0x3e,
                                  "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 1)",
                                  iVar1 != 0);
                if (uVar2 == 0) goto LAB_001000ec;
                iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed(uVar3,0);
                iVar1 = test_false("test/quic_rcidm_test.c",0x3f,
                                   "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 0)",
                                   iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid(uVar3,&local_d8);
                  iVar1 = test_true("test/quic_rcidm_test.c",0x40,
                                    "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)",
                                    iVar1 != 0);
                  if ((iVar1 != 0) &&
                     (iVar1 = test_true("test/quic_rcidm_test.c",0x42,
                                        "ossl_quic_conn_id_eq(&dcid_out, &cid8_5)",
                                        local_d8 == '\b' && local_d7 == 5), iVar1 != 0)) {
                    uVar4 = ossl_quic_rcidm_get_num_active(uVar3);
                    iVar1 = test_size_t_eq("test/quic_rcidm_test.c",0x43,
                                           "ossl_quic_rcidm_get_num_active(rcidm)",&_LC7,uVar4,0);
                    if (iVar1 == 0) {
                      uVar2 = 0;
                      goto LAB_001000ec;
                    }
                    goto LAB_001003c5;
                  }
                }
              }
            }
            else {
LAB_001003c5:
              iVar1 = ossl_quic_rcidm_add_from_initial(uVar3,cid8_2);
              iVar1 = test_true("test/quic_rcidm_test.c",0x47,
                                "ossl_quic_rcidm_add_from_initial(rcidm, &cid8_2)",iVar1 != 0);
              if (iVar1 != 0) {
                uVar4 = ossl_quic_rcidm_get_num_active(uVar3);
                iVar1 = test_size_t_eq("test/quic_rcidm_test.c",0x49,
                                       "ossl_quic_rcidm_get_num_active(rcidm)",&_LC12,uVar4,1);
                if (iVar1 != 0) {
                  iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed(uVar3,1);
                  iVar1 = test_true("test/quic_rcidm_test.c",0x4a,
                                    "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 1)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed(uVar3,0);
                    iVar1 = test_false("test/quic_rcidm_test.c",0x4b,
                                       "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 0)",
                                       iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid(uVar3,&local_d8);
                      iVar1 = test_true("test/quic_rcidm_test.c",0x4c,
                                        "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)",
                                        iVar1 != 0);
                      if ((iVar1 != 0) &&
                         (iVar1 = test_true("test/quic_rcidm_test.c",0x4d,
                                            "ossl_quic_conn_id_eq(&dcid_out, &cid8_2)",
                                            local_d8 == '\b' && local_d7 == 2), iVar1 != 0)) {
                        iVar1 = ossl_quic_rcidm_add_from_ncid(uVar3,&local_b8);
                        iVar1 = test_true("test/quic_rcidm_test.c",0x4f,
                                          "ossl_quic_rcidm_add_from_ncid(rcidm, &ncid_frame_1)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          uVar4 = ossl_quic_rcidm_get_num_active(uVar3);
                          iVar1 = test_size_t_eq("test/quic_rcidm_test.c",0x50,
                                                 "ossl_quic_rcidm_get_num_active(rcidm)",&_LC15,
                                                 uVar4,2);
                          if (iVar1 != 0) {
                            iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed(uVar3,0);
                            iVar1 = test_false("test/quic_rcidm_test.c",0x52,
                                               "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 0)"
                                               ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid(uVar3,&local_d8);
                              iVar1 = test_true("test/quic_rcidm_test.c",0x53,
                                                "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)"
                                                ,iVar1 != 0);
                              if ((iVar1 != 0) &&
                                 (iVar1 = test_true("test/quic_rcidm_test.c",0x54,
                                                    "ossl_quic_conn_id_eq(&dcid_out, &cid8_2)",
                                                    local_d8 == '\b' && local_d7 == 2), iVar1 != 0))
                              {
                                iVar1 = ossl_quic_rcidm_add_from_ncid(uVar3,&local_78);
                                iVar1 = test_true("test/quic_rcidm_test.c",0x56,
                                                  "ossl_quic_rcidm_add_from_ncid(rcidm, &ncid_frame_2)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  uVar4 = ossl_quic_rcidm_get_num_active(uVar3);
                                  iVar1 = test_size_t_eq("test/quic_rcidm_test.c",0x57,
                                                         "ossl_quic_rcidm_get_num_active(rcidm)",
                                                         &_LC17,uVar4,3);
                                  if (iVar1 != 0) {
                                    uVar4 = ossl_quic_rcidm_get_num_retiring(uVar3);
                                    iVar1 = test_size_t_eq("test/quic_rcidm_test.c",0x58,
                                                           "ossl_quic_rcidm_get_num_retiring(rcidm)"
                                                           ,&_LC7,uVar4,0);
                                    if (iVar1 != 0) {
                                      iVar1 = ossl_quic_rcidm_pop_retire_seq_num(uVar3,&local_e0);
                                      iVar1 = test_false("test/quic_rcidm_test.c",0x59,
                                                                                                                  
                                                  "ossl_quic_rcidm_pop_retire_seq_num(rcidm, &seq_num_out)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed
                                                          (uVar3,0);
                                        iVar1 = test_false("test/quic_rcidm_test.c",0x5b,
                                                                                                                      
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 0)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid
                                                            (uVar3,&local_d8);
                                          iVar1 = test_true("test/quic_rcidm_test.c",0x5c,
                                                                                                                        
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)"
                                                  ,iVar1 != 0);
                                          if ((iVar1 != 0) &&
                                             (iVar1 = test_true("test/quic_rcidm_test.c",0x5d,
                                                                                                                                
                                                  "ossl_quic_conn_id_eq(&dcid_out, &cid8_2)",
                                                  local_d8 == '\b' && local_d7 == 2), iVar1 != 0)) {
                                            ossl_quic_rcidm_on_handshake_complete(uVar3);
                                            iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed
                                                              (uVar3,1);
                                            iVar1 = test_true("test/quic_rcidm_test.c",0x62,
                                                                                                                            
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 1)"
                                                  ,iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid_changed
                                                                (uVar3,1);
                                              iVar1 = test_false("test/quic_rcidm_test.c",99,
                                                                                                                                  
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 1)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid
                                                                  (uVar3,&local_d8);
                                                iVar1 = test_true("test/quic_rcidm_test.c",100,
                                                                                                                                    
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)"
                                                  ,iVar1 != 0);
                                                if ((iVar1 != 0) &&
                                                   (iVar1 = test_true("test/quic_rcidm_test.c",0x65,
                                                                                                                                            
                                                  "ossl_quic_conn_id_eq(&dcid_out, &cid8_3)",
                                                  local_d8 == '\b' && local_d7 == 3), iVar1 != 0)) {
                                                  uVar4 = ossl_quic_rcidm_get_num_retiring(uVar3);
                                                  iVar1 = test_size_t_eq("test/quic_rcidm_test.c",
                                                                         0x66,
                                                  "ossl_quic_rcidm_get_num_retiring(rcidm)",&_LC12,
                                                  uVar4,1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_rcidm_peek_retire_seq_num
                                                                      (uVar3,&local_e0);
                                                    iVar1 = test_true("test/quic_rcidm_test.c",0x67,
                                                                                                                                            
                                                  "ossl_quic_rcidm_peek_retire_seq_num(rcidm, &seq_num_out)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_uint64_t_eq(
                                                  "test/quic_rcidm_test.c",0x68,"seq_num_out",&_LC7,
                                                  local_e0,0), iVar1 != 0)) {
                                                    ossl_quic_rcidm_request_roll(uVar3);
                                                    iVar1 = 
                                                  ossl_quic_rcidm_get_preferred_tx_dcid_changed
                                                            (uVar3,1);
                                                  iVar1 = test_true("test/quic_rcidm_test.c",0x6d,
                                                                                                                                        
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 1)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = 
                                                  ossl_quic_rcidm_get_preferred_tx_dcid_changed
                                                            (uVar3,1);
                                                  iVar1 = test_false("test/quic_rcidm_test.c",0x6e,
                                                                                                                                          
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid_changed(rcidm, 1)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_rcidm_get_preferred_tx_dcid
                                                                      (uVar3,&local_d8);
                                                    iVar1 = test_true("test/quic_rcidm_test.c",0x6f,
                                                                                                                                            
                                                  "ossl_quic_rcidm_get_preferred_tx_dcid(rcidm, &dcid_out)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_true("test/quic_rcidm_test.c",
                                                                        0x70,
                                                  "ossl_quic_conn_id_eq(&dcid_out, &cid8_4)",
                                                  local_d8 == '\b' && local_d7 == 4), iVar1 != 0)) {
                                                    uVar4 = ossl_quic_rcidm_get_num_retiring(uVar3);
                                                    iVar1 = test_size_t_eq("test/quic_rcidm_test.c",
                                                                           0x71,
                                                  "ossl_quic_rcidm_get_num_retiring(rcidm)",&_LC15,
                                                  uVar4,2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = ossl_quic_rcidm_peek_retire_seq_num
                                                                      (uVar3,&local_e0);
                                                    iVar1 = test_true("test/quic_rcidm_test.c",0x72,
                                                                                                                                            
                                                  "ossl_quic_rcidm_peek_retire_seq_num(rcidm, &seq_num_out)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_uint64_t_eq(
                                                  "test/quic_rcidm_test.c",0x73,"seq_num_out",&_LC7,
                                                  local_e0,0), iVar1 != 0)) {
                                                    iVar1 = ossl_quic_rcidm_pop_retire_seq_num
                                                                      (uVar3,&local_e0);
                                                    iVar1 = test_true("test/quic_rcidm_test.c",0x74,
                                                                                                                                            
                                                  "ossl_quic_rcidm_pop_retire_seq_num(rcidm, &seq_num_out)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_uint64_t_eq(
                                                  "test/quic_rcidm_test.c",0x75,"seq_num_out",&_LC7,
                                                  local_e0,0), iVar1 != 0)) {
                                                    iVar1 = ossl_quic_rcidm_pop_retire_seq_num
                                                                      (uVar3,&local_e0);
                                                    iVar1 = test_true("test/quic_rcidm_test.c",0x76,
                                                                                                                                            
                                                  "ossl_quic_rcidm_pop_retire_seq_num(rcidm, &seq_num_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_uint64_t_eq(
                                                  "test/quic_rcidm_test.c",0x77,"seq_num_out",&_LC15
                                                  ,local_e0,2);
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_001000ec;
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
  uVar2 = 0;
LAB_001000ec:
  ossl_quic_rcidm_free(uVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_rcidm",0x100000,3,1);
  return 1;
}



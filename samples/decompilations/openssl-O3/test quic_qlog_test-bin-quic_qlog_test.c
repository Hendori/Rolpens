
void now(void)

{
  long lVar1;
  
  lVar1 = last_time + 1000000000;
  if (0xffffffffc46535ff < last_time) {
    lVar1 = -1;
  }
  last_time = lVar1;
  return;
}



bool test_qlog_filter(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = local_88;
  for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_88[0]._0_2_ = 0x5501;
  uVar4 = ossl_qlog_new(local_88);
  iVar2 = test_ptr("test/quic_qlog_test.c",0xe1,"qlog = ossl_qlog_new(&qti)",uVar4);
  if (iVar2 != 0) {
    lVar5 = (long)param_1 * 0x18;
    uVar1 = *(undefined4 *)(filters + lVar5 + 8);
    uVar3 = ossl_qlog_set_filter(uVar4,*(undefined8 *)(filters + lVar5));
    iVar2 = test_int_eq("test/quic_qlog_test.c",0xe4,
                        "ossl_qlog_set_filter(qlog, filters[idx].filter)","filters[idx].expect_ok",
                        uVar3,uVar1);
    if (iVar2 != 0) {
      bVar7 = true;
      if (*(int *)(filters + lVar5 + 0xc) != 0) {
        uVar1 = *(undefined4 *)(filters + lVar5 + 0x10);
        uVar3 = ossl_qlog_enabled(uVar4);
        iVar2 = test_int_eq("test/quic_qlog_test.c",0xe9,
                            "ossl_qlog_enabled(qlog, filters[idx].expect_event_type)",
                            "filters[idx].expect_event_enable",uVar3,uVar1);
        bVar7 = iVar2 != 0;
      }
      goto LAB_00100094;
    }
  }
  bVar7 = false;
LAB_00100094:
  ossl_qlog_free(uVar4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_qlog(void)

{
  int iVar1;
  undefined8 uVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 auStack_86 [14];
  undefined1 local_78 [16];
  char *pcStack_68;
  char *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  last_time = 0x25e481b12992200;
  auStack_86 = SUB1614((undefined1  [16])0x0,2);
  local_88 = 0x5501;
  local_60 = "test group ID";
  local_58 = ZEXT816(0x100000) << 0x40;
  local_48 = 0;
  local_90 = 0;
  local_40 = 0x7b;
  local_38 = "OpenSSL/x.y.z";
  local_78 = ZEXT816(0x100658) << 0x40;
  pcStack_68 = "test description";
  uVar2 = ossl_qlog_new(&local_88);
  iVar1 = test_ptr("test/quic_qlog_test.c",0x61,"qlog = ossl_qlog_new(&qti)",uVar2);
  if (iVar1 != 0) {
    iVar1 = ossl_qlog_set_event_type_enabled(uVar2,5,1);
    iVar1 = test_true("test/quic_qlog_test.c",100,
                      "ossl_qlog_set_event_type_enabled(qlog, QLOG_EVENT_TYPE_transport_packet_sent, 1)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      type = BIO_s_mem();
      bp = BIO_new(type);
      iVar1 = test_ptr("test/quic_qlog_test.c",0x67,"bio = BIO_new(BIO_s_mem())",bp);
      if (iVar1 != 0) {
        iVar1 = ossl_qlog_set_sink_bio(uVar2,bp);
        iVar1 = test_true("test/quic_qlog_test.c",0x6a,"ossl_qlog_set_sink_bio(qlog, bio)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = ossl_qlog_event_try_begin
                            (uVar2,5,"transport","packet_sent","transport:packet_sent");
          if (iVar1 != 0) {
            ossl_qlog_str(uVar2,"field1",&_LC17);
            ossl_qlog_str_len(uVar2,"field2",&_LC19,3);
            ossl_qlog_i64(uVar2,"field3",0x2a);
            ossl_qlog_i64(uVar2,"field4",0x1000000000000000);
            ossl_qlog_u64(uVar2,"field5",0xffffffffffffffff);
            ossl_qlog_bool(uVar2,"field6",0);
            ossl_qlog_bool(uVar2,"field7",1);
            ossl_qlog_bin(uVar2,"field8",&bin_buf,2);
            ossl_qlog_bin(uVar2,"field9",(long)&local_88 + 1,(undefined1)local_88);
            ossl_qlog_group_begin(uVar2,"subgroup");
            ossl_qlog_str(uVar2,"field10",&_LC29);
            ossl_qlog_group_end(uVar2);
            ossl_qlog_array_begin(uVar2,"array");
            ossl_qlog_str(uVar2,0,&_LC32);
            ossl_qlog_str(uVar2,0,&_LC33);
            ossl_qlog_array_end(uVar2);
            ossl_qlog_event_end(uVar2);
          }
          iVar1 = ossl_qlog_event_try_begin
                            (uVar2,6,"transport","packet_received","transport:packet_received");
          if (iVar1 != 0) {
            ossl_qlog_str(uVar2,"field1",&_LC17);
            ossl_qlog_event_end(uVar2);
          }
          iVar1 = ossl_qlog_event_try_begin
                            (uVar2,5,"transport","packet_sent","transport:packet_sent");
          if (iVar1 != 0) {
            ossl_qlog_str(uVar2,"field1",&_LC19);
            ossl_qlog_event_end(uVar2);
          }
          iVar1 = ossl_qlog_flush(uVar2);
          iVar1 = test_true("test/quic_qlog_test.c",0x8a,"ossl_qlog_flush(qlog)",iVar1 != 0);
          if (iVar1 != 0) {
            lVar3 = BIO_ctrl(bp,3,0,&local_90);
            iVar1 = test_size_t_gt("test/quic_qlog_test.c",0x8e,"buf_len",&_LC37,lVar3,0);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/quic_qlog_test.c",0x91,&_LC40,"expected",local_90,lVar3,
                                  expected,0x27f);
              bVar4 = iVar1 != 0;
              goto LAB_0010023f;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_0010023f:
  ossl_qlog_free(uVar2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_qlog",test_qlog);
  add_all_tests("test_qlog_filter",test_qlog_filter,0x20,1);
  return 1;
}



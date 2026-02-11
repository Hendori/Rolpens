
bool test_wire_minimal(int param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  int local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(non_minimal_len + (long)param_1 * 8);
  if (-1 < lVar1) {
    local_28 = *(undefined8 *)(non_minimal + (long)param_1 * 8);
    local_20 = lVar1;
  }
  iVar2 = test_true("test/quic_wire_test.c",0x655,
                    "PACKET_buf_init(&pkt, non_minimal[idx], non_minimal_len[idx])",-1 < lVar1);
  if (iVar2 != 0) {
    iVar2 = ossl_quic_wire_peek_frame_header(&local_28,local_30,&local_34);
    iVar2 = test_true("test/quic_wire_test.c",0x659,
                      "ossl_quic_wire_peek_frame_header(&pkt, &frame_type, &is_minimal)",iVar2 != 0)
    ;
    if (iVar2 != 0) {
      iVar2 = test_false("test/quic_wire_test.c",0x65d,"is_minimal",local_34 != 0);
      bVar3 = iVar2 != 0;
      goto LAB_00100069;
    }
  }
  bVar3 = false;
LAB_00100069:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_wire_ack(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = (long)param_1 * 0x20;
  lVar4 = *(long *)(ack_cases + lVar3 + 8);
  if (-1 < lVar4) {
    local_48 = *(undefined8 *)(ack_cases + lVar3);
    local_40 = lVar4;
  }
  iVar1 = test_int_eq("test/quic_wire_test.c",0x599,
                      "PACKET_buf_init(&pkt, (unsigned char *)c->input_buf, c->input_buf_len)",&_LC4
                      ,-1 < lVar4,1);
  if (iVar1 != 0) {
    lVar4 = (long)param_1 * 0x20;
    uVar2 = (**(code **)(ack_cases + lVar4 + 0x10))(&local_48);
    if (*(int *)(ack_cases + lVar4 + 0x18) != 0) {
      iVar1 = test_int_eq("test/quic_wire_test.c",0x5a0,&_LC7,&_LC6,uVar2,0);
      bVar5 = iVar1 != 0;
      goto LAB_001001d3;
    }
    iVar1 = test_int_eq("test/quic_wire_test.c",0x5a3,&_LC7,&_LC4,uVar2,1);
    if (iVar1 != 0) {
      iVar1 = test_false("test/quic_wire_test.c",0x5a6,"PACKET_remaining(&pkt)",local_40 != 0);
      bVar5 = iVar1 != 0;
      goto LAB_001001d3;
    }
  }
  bVar5 = false;
LAB_001001d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_wire_retry_integrity_tag(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [12];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_b0 = 0x24;
  puVar3 = local_a8;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_b8 = retry_encoded;
  iVar1 = test_true("test/quic_wire_test.c",0x606,
                    "PACKET_buf_init(&pkt, retry_encoded, sizeof(retry_encoded))",1);
  if (iVar1 != 0) {
    iVar1 = ossl_quic_wire_decode_pkt_hdr(&local_b8,0,0,0,local_a8,0,0);
    iVar1 = test_true("test/quic_wire_test.c",0x609,
                      "ossl_quic_wire_decode_pkt_hdr(&pkt, 0, 0, 0, &hdr, NULL, NULL)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_int_eq("test/quic_wire_test.c",0x60c,"hdr.type","QUIC_PKT_TYPE_RETRY",
                          (undefined1)local_a8[0],4);
      if (iVar1 != 0) {
        iVar1 = ossl_quic_calculate_retry_integrity_tag(0,0,local_a8,retry_orig_dcid,local_48);
        iVar1 = test_true("test/quic_wire_test.c",0x60f,
                          "ossl_quic_calculate_retry_integrity_tag(NULL, NULL, &hdr, &retry_orig_dcid, got_tag)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_mem_eq("test/quic_wire_test.c",0x614,"got_tag",
                              "retry_encoded + sizeof(retry_encoded) - QUIC_RETRY_INTEGRITY_TAG_LEN"
                              ,local_48,0x10,0x104bd4,0x10);
          if (iVar1 != 0) {
            iVar1 = ossl_quic_validate_retry_integrity_tag(0,0,local_a8,retry_orig_dcid);
            iVar1 = test_true("test/quic_wire_test.c",0x61a,
                              "ossl_quic_validate_retry_integrity_tag(NULL, NULL, &hdr, &retry_orig_dcid)"
                              ,iVar1 != 0);
            bVar4 = iVar1 != 0;
            goto LAB_00100297;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00100297:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_wire_pkt_hdr_pn(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_50;
  undefined1 local_44 [4];
  long local_40;
  
  lVar6 = (long)param_1 * 0x20;
  uVar2 = *(undefined8 *)(pn_tests + lVar6);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_quic_wire_determine_pn_len(uVar2,*(undefined8 *)(pn_tests + lVar6 + 8));
  cVar1 = pn_tests[lVar6 + 0x18];
  iVar4 = test_int_eq("test/quic_wire_test.c",0x5d7,"pn_len","(int)t->expected_len",iVar3);
  if (iVar4 != 0) {
    lVar5 = (long)iVar3;
    iVar3 = ossl_quic_wire_encode_pkt_hdr_pn(uVar2,local_44,lVar5);
    iVar3 = test_true("test/quic_wire_test.c",0x5da,
                      "ossl_quic_wire_encode_pkt_hdr_pn(t->pn, buf, pn_len)",iVar3 != 0);
    if (iVar3 != 0) {
      iVar3 = test_mem_eq("test/quic_wire_test.c",0x5dd,"t->expected_bytes",&_LC20,lVar6 + 0x104c39,
                          (long)cVar1,local_44,lVar5);
      if (iVar3 != 0) {
        iVar3 = ossl_quic_wire_decode_pkt_hdr_pn
                          (local_44,lVar5,*(undefined8 *)(pn_tests + lVar6 + 0x10),&local_50);
        iVar3 = test_true("test/quic_wire_test.c",0x5e0,
                          "ossl_quic_wire_decode_pkt_hdr_pn(buf, pn_len, t->rx_largest_pn, &res_pn)"
                          ,iVar3 != 0);
        if (iVar3 != 0) {
          iVar3 = test_uint64_t_eq("test/quic_wire_test.c",0x5e4,"res_pn","t->pn",local_50,uVar2);
          bVar7 = iVar3 != 0;
          goto LAB_0010045e;
        }
      }
    }
  }
  bVar7 = false;
LAB_0010045e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_3_dec(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = local_78;
  local_88 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 4;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  iVar1 = ossl_quic_wire_peek_frame_ack_num_ranges(param_1,&local_c0);
  if ((-1 < (long)param_2) ||
     (iVar3 = test_int_eq("test/quic_wire_test.c",0x6b,&_LC27,&_LC4,iVar1,1), iVar3 != 0)) {
    uVar2 = ossl_quic_wire_decode_frame_ack(param_1,3,&local_b8,&local_c8);
    iVar3 = test_int_eq("test/quic_wire_test.c",0x6e,
                        "ossl_quic_wire_decode_frame_ack(pkt, 3, &f, &total_ranges)","fail < 0",
                        uVar2,param_2 >> 0x3f);
    if ((iVar3 != 0) &&
       ((iVar1 != 1 ||
        (iVar1 = test_uint64_t_eq("test/quic_wire_test.c",0x71,"peek_total_ranges",&_LC28,local_c0,2
                                 ), iVar1 != 0)))) {
      bVar4 = true;
      if (-1 < (long)param_2) goto LAB_0010065b;
      iVar1 = test_uint64_t_eq("test/quic_wire_test.c",0x77,"total_ranges","peek_total_ranges",
                               local_c8,local_c0);
      if ((((iVar1 != 0) &&
           (iVar1 = test_uint64_t_le("test/quic_wire_test.c",0x7a,
                                     "f.num_ack_ranges * sizeof(OSSL_QUIC_ACK_RANGE)","SIZE_MAX",
                                     local_b0 << 4,0xffffffffffffffff), iVar1 != 0)) &&
          (iVar1 = test_uint64_t_le("test/quic_wire_test.c",0x7c,
                                    "encode_case_3_f.num_ack_ranges * sizeof(OSSL_QUIC_ACK_RANGE)",
                                    "SIZE_MAX",0x20,0xffffffffffffffff), iVar1 != 0)) &&
         (iVar1 = test_mem_eq("test/quic_wire_test.c",0x81,"f.ack_ranges",
                              "encode_case_3_f.ack_ranges",local_b8,local_b0 << 4,
                              encode_case_3_ranges,0x20), iVar1 != 0)) {
        iVar1 = test_uint64_t_eq("test/quic_wire_test.c",0x87,"ossl_time2ticks(f.delay_time)",
                                 "ossl_time2ticks(encode_case_3_f.delay_time)",local_a8._0_8_,
                                 1000000);
        if (iVar1 != 0) {
          iVar1 = test_true("test/quic_wire_test.c",0x8b,"f.ecn_present",(byte)local_88 & 1);
          if (iVar1 != 0) {
            iVar1 = test_uint64_t_eq("test/quic_wire_test.c",0x8e,"f.ect0","encode_case_3_f.ect0",
                                     local_a8._8_8_,0x3c);
            if (iVar1 != 0) {
              iVar1 = test_uint64_t_eq("test/quic_wire_test.c",0x91,"f.ect1","encode_case_3_f.ect1",
                                       local_98._0_8_,0x46);
              if (iVar1 != 0) {
                iVar1 = test_uint64_t_eq("test/quic_wire_test.c",0x94,"f.ecnce",
                                         "encode_case_3_f.ecnce",local_98._8_8_,0x50);
                bVar4 = iVar1 != 0;
                goto LAB_0010065b;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_0010065b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



undefined8 ack_generic_decode(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  ulong local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_c8 [17];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 8;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  puVar6 = local_c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_108 = local_c8;
  uVar1 = ossl_quic_wire_peek_frame_ack_num_ranges(param_1,&local_110);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x56c,
                      "ossl_quic_wire_peek_frame_ack_num_ranges(pkt, &peek_total_ranges)",&_LC4,
                      uVar1,1);
  if (((iVar2 == 0) ||
      (iVar2 = ossl_quic_wire_decode_frame_ack(param_1,3,&local_108,&local_118), iVar2 == 0)) ||
     (iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x574,"total_ranges","peek_total_ranges",
                               local_118,local_110), iVar2 == 0)) {
LAB_0010094f:
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    if (local_100 != 0) {
      do {
        iVar2 = test_uint64_t_le("test/quic_wire_test.c",0x578,"f.ack_ranges[i].start",
                                 "f.ack_ranges[i].end",local_108[uVar5 * 2],
                                 (local_108 + uVar5 * 2)[1]);
        if ((iVar2 == 0) ||
           (iVar2 = test_uint64_t_lt("test/quic_wire_test.c",0x57a,"f.ack_ranges[i].end",&_LC48,
                                     local_108[uVar5 * 2 + 1],1000), iVar2 == 0)) goto LAB_0010094f;
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_100);
    }
    uVar3 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 test_wire_encode(int param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  BUF_MEM *a;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = BUF_MEM_new();
  iVar3 = test_ptr("test/quic_wire_test.c",0x4d4,"buf = BUF_MEM_new()",a);
  if (iVar3 != 0) {
    uVar4 = WPACKET_init(local_78,a);
    iVar3 = test_int_eq("test/quic_wire_test.c",0x4d7,"WPACKET_init(&wpkt, buf)",&_LC4,uVar4,1);
    if (iVar3 != 0) {
      lVar6 = (long)param_1 * 0x20;
      uVar4 = (**(code **)(encode_cases + lVar6))(local_78);
      iVar3 = test_int_eq("test/quic_wire_test.c",0x4db,"c->serializer(&wpkt)",&_LC4,uVar4,1);
      if (iVar3 == 0) {
LAB_00100b66:
        uVar5 = 0;
      }
      else {
        uVar4 = WPACKET_get_total_written(local_78,&local_a0);
        iVar3 = test_int_eq("test/quic_wire_test.c",0x4de,
                            "WPACKET_get_total_written(&wpkt, &written)",&_LC4,uVar4,1);
        if (iVar3 == 0) goto LAB_00100b66;
        lVar1 = *(long *)(encode_cases + lVar6 + 0x10);
        uVar5 = *(undefined8 *)(encode_cases + lVar6 + 8);
        iVar3 = test_mem_eq("test/quic_wire_test.c",0x4e1,"buf->data","c->expect_buf",a->data,
                            local_a0,uVar5,lVar1);
        if (iVar3 == 0) goto LAB_00100b66;
        if (-1 < local_a0) {
          local_98 = a->data;
          local_90 = local_a0;
        }
        iVar3 = test_int_eq("test/quic_wire_test.c",0x4e4,
                            "PACKET_buf_init(&pkt, (unsigned char *)buf->data, written)",&_LC4,
                            -1 < local_a0,1);
        if (iVar3 == 0) goto LAB_00100b66;
        pcVar2 = *(code **)(encode_cases + (long)param_1 * 0x20 + 0x18);
        uVar4 = (*pcVar2)(&local_98,0xffffffffffffffff);
        iVar3 = test_int_eq("test/quic_wire_test.c",0x4e7,"c->deserializer(&pkt, -1)",&_LC4,uVar4,1)
        ;
        if ((iVar3 == 0) ||
           (iVar3 = test_false("test/quic_wire_test.c",0x4ea,"PACKET_remaining(&pkt)",local_90 != 0)
           , iVar3 == 0)) goto LAB_00100b66;
        lVar6 = 0;
        if (lVar1 != 0) {
          do {
            if (-1 < lVar6) {
              local_88 = uVar5;
              local_80 = lVar6;
            }
            iVar3 = test_int_eq("test/quic_wire_test.c",0x4f7,
                                "PACKET_buf_init(&pkt2, (unsigned char *)c->expect_buf, i)",&_LC4,
                                -1 < lVar6,1);
            if (iVar3 == 0) goto LAB_00100b66;
            uVar4 = (*pcVar2)(&local_88,lVar6);
            iVar3 = test_int_eq("test/quic_wire_test.c",0x4fa,"c->deserializer(&pkt2, i)",&_LC4,
                                uVar4,1);
            if (iVar3 == 0) goto LAB_00100b66;
            lVar6 = lVar6 + 1;
          } while (lVar1 != lVar6);
        }
        uVar5 = 1;
      }
      WPACKET_finish(local_78);
      goto LAB_00100ab7;
    }
  }
  uVar5 = 0;
LAB_00100ab7:
  BUF_MEM_free(a);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



bool encode_case_23_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  uVar1 = ossl_quic_wire_decode_transport_param_int(param_1,&local_50,&local_48);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x47f,
                      "ossl_quic_wire_decode_transport_param_int(pkt, &id, &value)",
                      "fail < 0 || fail >= 7",uVar1,6 < param_2);
  if (iVar2 != 0) {
    if (param_2 < 7) {
      uVar1 = ossl_quic_wire_decode_transport_param_int(param_1,&local_50,&local_48);
      iVar2 = test_int_eq("test/quic_wire_test.c",0x48c,
                          "ossl_quic_wire_decode_transport_param_int(pkt, &id, &value)",
                          "fail < 0 || fail >= 14",uVar1,0);
      if (iVar2 != 0) {
LAB_00100e6f:
        bVar3 = true;
        goto LAB_00100e18;
      }
    }
    else {
      iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x485,&_LC63,"0x1234",local_50,0x1234);
      if (iVar2 != 0) {
        iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x489,"value","0x9781",local_48,0x9781);
        if (iVar2 != 0) {
          uVar1 = ossl_quic_wire_decode_transport_param_int(param_1,&local_50,&local_48);
          iVar2 = test_int_eq("test/quic_wire_test.c",0x48c,
                              "ossl_quic_wire_decode_transport_param_int(pkt, &id, &value)",
                              "fail < 0 || fail >= 14",uVar1,0xd < param_2);
          if (iVar2 != 0) {
            if (param_2 < 0xe) goto LAB_00100e6f;
            iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x492,&_LC63,"0x2233",local_50,0x2233);
            if (iVar2 != 0) {
              iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x496,"value","0x4545",local_48,
                                       0x4545);
              bVar3 = iVar2 != 0;
              goto LAB_00100e18;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100e18:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong encode_case_23_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = ossl_quic_wire_encode_transport_param_int(param_1,0x1234,0x9781);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x472,
                      "ossl_quic_wire_encode_transport_param_int(pkt, 0x1234, 0x9781)",&_LC4,uVar1,1
                     );
  if ((int)uVar3 != 0) {
    uVar1 = ossl_quic_wire_encode_transport_param_int(param_1,0x2233,0x4545);
    iVar2 = test_int_eq("test/quic_wire_test.c",0x475,
                        "ossl_quic_wire_encode_transport_param_int(pkt, 0x2233, 0x4545)",&_LC4,uVar1
                        ,1);
    uVar3 = (ulong)(iVar2 != 0);
  }
  return uVar3;
}



bool encode_case_22_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  uVar1 = ossl_quic_wire_peek_transport_param(param_1,&local_50);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x42b,"ossl_quic_wire_peek_transport_param(pkt, &id)",
                      "fail < 0 || fail >= 2",uVar1,1 < param_2);
  if (iVar2 != 0) {
    if (param_2 < 2) {
      local_50 = 0;
      uVar3 = ossl_quic_wire_decode_transport_param_bytes(param_1,&local_50,&local_48);
LAB_0010120f:
      iVar2 = test_ptr_null("test/quic_wire_test.c",0x43a,&_LC72,uVar3);
      if (iVar2 != 0) {
LAB_001011af:
        local_50 = 0;
        uVar3 = ossl_quic_wire_decode_transport_param_bytes(param_1,&local_50,&local_48);
LAB_001011c9:
        iVar2 = test_ptr_null("test/quic_wire_test.c",0x456,&_LC72,uVar3);
        bVar4 = iVar2 != 0;
        goto LAB_0010123a;
      }
    }
    else {
      iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x430,&_LC63,"0x1234",local_50,0x1234);
      if (iVar2 != 0) {
        local_50 = 0;
        uVar3 = ossl_quic_wire_decode_transport_param_bytes(param_1,&local_50,&local_48);
        if (param_2 < 8) goto LAB_0010120f;
        iVar2 = test_ptr("test/quic_wire_test.c",0x437,&_LC72,uVar3);
        if (iVar2 != 0) {
          iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x43f,&_LC63,"0x1234",local_50,0x1234);
          if (iVar2 != 0) {
            iVar2 = test_mem_eq("test/quic_wire_test.c",0x443,&_LC72,"encode_case_22_data",uVar3,
                                local_48,&encode_case_22_data,5);
            if (iVar2 != 0) {
              uVar1 = ossl_quic_wire_peek_transport_param(param_1,&local_50);
              iVar2 = test_int_eq("test/quic_wire_test.c",0x447,
                                  "ossl_quic_wire_peek_transport_param(pkt, &id)",
                                  "fail < 0 || fail >= 12",uVar1,0xb < param_2);
              if (iVar2 != 0) {
                if (param_2 < 0xc) goto LAB_001011af;
                iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x44c,&_LC63,"0x9781",local_50,
                                         0x9781);
                if (iVar2 != 0) {
                  local_50 = 0;
                  uVar3 = ossl_quic_wire_decode_transport_param_bytes(param_1,&local_50,&local_48);
                  if (param_2 < 0xf) goto LAB_001011c9;
                  iVar2 = test_ptr("test/quic_wire_test.c",0x453,&_LC72,uVar3);
                  if (iVar2 != 0) {
                    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x45b,&_LC63,"0x9781",local_50,
                                             0x9781);
                    if (iVar2 != 0) {
                      iVar2 = test_mem_eq("test/quic_wire_test.c",0x45f,&_LC72,&_LC75,uVar3,local_48
                                          ,&data_0,2);
                      bVar4 = iVar2 != 0;
                      goto LAB_0010123a;
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
  bVar4 = false;
LAB_0010123a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 encode_case_22_enc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  uVar2 = ossl_quic_wire_encode_transport_param_bytes(param_1,0x1234,&encode_case_22_data,5);
  iVar1 = test_ptr("test/quic_wire_test.c",0x415,
                   "ossl_quic_wire_encode_transport_param_bytes(pkt, 0x1234, encode_case_22_data, sizeof(encode_case_22_data))"
                   ,uVar2);
  if (iVar1 != 0) {
    puVar3 = (undefined2 *)ossl_quic_wire_encode_transport_param_bytes(param_1,0x9781,0,2);
    iVar1 = test_ptr("test/quic_wire_test.c",0x41a,
                     "p = ossl_quic_wire_encode_transport_param_bytes(pkt, 0x9781, NULL, 2)",puVar3)
    ;
    if (iVar1 != 0) {
      *puVar3 = 0x4433;
      return 1;
    }
  }
  return 0;
}



bool encode_case_21_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_decode_frame_handshake_done();
  iVar2 = test_int_eq("test/quic_wire_test.c",0x404,
                      "ossl_quic_wire_decode_frame_handshake_done(pkt)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  return iVar2 != 0;
}



bool encode_case_21_enc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_handshake_done();
  iVar2 = test_int_eq("test/quic_wire_test.c",0x3fb,
                      "ossl_quic_wire_encode_frame_handshake_done(pkt)",&_LC4,uVar1,1);
  return iVar2 != 0;
}



bool encode_case_20_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_28 = 0;
  local_38 = (undefined1  [16])0x0;
  uVar1 = ossl_quic_wire_decode_frame_conn_close(param_1,local_48);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x3d5,
                      "ossl_quic_wire_decode_frame_conn_close(pkt, &f)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (iVar2 != 0) {
    bVar3 = true;
    if (-1 < (long)param_2) goto LAB_001014e5;
    iVar2 = test_int_eq("test/quic_wire_test.c",0x3db,"f.is_app",&_LC6,local_48[0] & 1,0);
    if (iVar2 != 0) {
      iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x3de,"f.error_code","0x1234",local_48._8_8_,
                               0x1234);
      if (iVar2 != 0) {
        iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x3e1,"f.frame_type","0x9781",
                                 local_38._0_8_,0x9781);
        if (iVar2 != 0) {
          iVar2 = test_size_t_eq("test/quic_wire_test.c",0x3e4,"f.reason_len",&_LC85,local_28,0x12);
          if (iVar2 != 0) {
            iVar2 = test_mem_eq("test/quic_wire_test.c",999,"f.reason","encode_case_20_f.reason",
                                local_38._8_8_,local_28,"reason for closure",0x12);
            bVar3 = iVar2 != 0;
            goto LAB_001014e5;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001014e5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_20_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_conn_close(param_1,encode_case_20_f);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x3ca,
                      "ossl_quic_wire_encode_frame_conn_close(pkt, &encode_case_20_f)",&_LC4,uVar1,1
                     );
  return iVar2 != 0;
}



ulong encode_case_19_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_path_response(param_1,&local_28);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x3a8,
                      "ossl_quic_wire_decode_frame_path_response(pkt, &challenge)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x3ae,"challenge","encode_case_19_data",
                             local_28,0x5f4b120000731834);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_19_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_path_response(param_1,0x5f4b120000731834);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x39d,
                      "ossl_quic_wire_encode_frame_path_response(pkt, encode_case_19_data)",&_LC4,
                      uVar1,1);
  return iVar2 != 0;
}



ulong encode_case_18_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_path_challenge(param_1,&local_28);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x386,
                      "ossl_quic_wire_decode_frame_path_challenge(pkt, &challenge)","fail < 0",uVar1
                      ,param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x38c,"challenge","encode_case_18_data",
                             local_28,0x5f4b120000731834);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_18_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_path_challenge(param_1,0x5f4b120000731834);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x37b,
                      "ossl_quic_wire_encode_frame_path_challenge(pkt, encode_case_18_data)",&_LC4,
                      uVar1,1);
  return iVar2 != 0;
}



ulong encode_case_17_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_retire_conn_id(param_1,&local_28);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x364,
                      "ossl_quic_wire_decode_frame_retire_conn_id(pkt, &seq_num)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x36a,"seq_num","0x1234",local_28,0x1234);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_17_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_retire_conn_id(param_1,0x1234);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x35a,
                      "ossl_quic_wire_encode_frame_retire_conn_id(pkt, 0x1234)",&_LC4,uVar1,1);
  return iVar2 != 0;
}



ulong encode_case_16b_dec(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_28 = 0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar1 = ossl_quic_wire_decode_frame_new_conn_id(param_1,local_58);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x344,
                      "ossl_quic_wire_decode_frame_new_conn_id(pkt, &f)",&_LC6,uVar1,0);
  if ((int)uVar3 != 0) {
    *param_1 = *param_1 + param_1[1];
    param_1[1] = 0;
    iVar2 = test_true("test/quic_wire_test.c",0x347,"PACKET_forward(pkt, PACKET_remaining(pkt))",1);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_16_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_28 = 0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar1 = ossl_quic_wire_decode_frame_new_conn_id(param_1,local_58);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x301,
                      "ossl_quic_wire_decode_frame_new_conn_id(pkt, &f)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (iVar2 != 0) {
    bVar3 = true;
    if (-1 < (long)param_2) goto LAB_00101aba;
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x307,"f.seq_num","0x9781",local_58._0_8_,
                             0x9781);
    if (iVar2 != 0) {
      iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x30a,"f.retire_prior_to","0x1234",
                               local_58._8_8_,0x1234);
      if (iVar2 != 0) {
        iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x30d,"f.conn_id.id_len",
                                 "sizeof(encode_case_16_conn_id)",local_48[0],4);
        if (iVar2 != 0) {
          iVar2 = test_mem_eq("test/quic_wire_test.c",0x310,"f.conn_id.id","encode_case_16_conn_id",
                              local_48 + 1,local_48[0],&encode_case_16_conn_id,4);
          if (iVar2 != 0) {
            iVar2 = test_mem_eq("test/quic_wire_test.c",0x314,"f.stateless_reset.token",
                                "encode_case_16_f.stateless_reset.token",local_38 + 5,0x10,0x104fc5,
                                0x10);
            bVar3 = iVar2 != 0;
            goto LAB_00101aba;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00101aba:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_16b_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_new_conn_id(param_1,encode_case_16b_f);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x339,
                      "ossl_quic_wire_encode_frame_new_conn_id(pkt, &encode_case_16b_f)",&_LC4,uVar1
                      ,1);
  return iVar2 != 0;
}



bool encode_case_16_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_new_conn_id(param_1,encode_case_16_f);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x2f6,
                      "ossl_quic_wire_encode_frame_new_conn_id(pkt, &encode_case_16_f)",&_LC4,uVar1,
                      1);
  return iVar2 != 0;
}



bool encode_case_15_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_64 = 1;
  uVar1 = ossl_quic_wire_peek_frame_header(param_1,&local_50,&local_64);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x2aa,
                      "ossl_quic_wire_peek_frame_header(pkt, &frame_type_1, &is_minimal)",
                      "success_if",uVar1,param_2 != 0);
  if ((iVar2 != 0) &&
     (iVar2 = test_true("test/quic_wire_test.c",0x2af,"!success_if || is_minimal",
                        param_2 == 0 || local_64 != 0), iVar2 != 0)) {
    uVar1 = ossl_quic_wire_decode_frame_streams_blocked(param_1,&local_60);
    iVar2 = test_int_eq("test/quic_wire_test.c",0x2b3,
                        "ossl_quic_wire_decode_frame_streams_blocked(pkt, &max_streams_1)",
                        "success_if",uVar1,2 < param_2);
    if (iVar2 != 0) {
      uVar1 = ossl_quic_wire_peek_frame_header(param_1,&local_48,&local_64);
      iVar2 = test_int_eq("test/quic_wire_test.c",0x2b9,
                          "ossl_quic_wire_peek_frame_header(pkt, &frame_type_2, &is_minimal)",
                          "success_if",uVar1,3 < param_2);
      if ((iVar2 != 0) &&
         (iVar2 = test_true("test/quic_wire_test.c",0x2be,"!success_if || is_minimal",
                            param_2 < 4 || local_64 != 0), iVar2 != 0)) {
        uVar1 = ossl_quic_wire_decode_frame_streams_blocked(param_1,&local_58);
        iVar2 = test_int_eq("test/quic_wire_test.c",0x2c1,
                            "ossl_quic_wire_decode_frame_streams_blocked(pkt, &max_streams_2)",
                            "fail < 0 || fail >= 8",uVar1,7 < param_2);
        if (iVar2 != 0) {
          if (param_2 != 0) {
            iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x2c7,"frame_type_1",
                                     "OSSL_QUIC_FRAME_TYPE_STREAMS_BLOCKED_BIDI",local_50,0x16);
            if (iVar2 == 0) goto LAB_00101d41;
            if (2 < param_2) {
              iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x2cb,"max_streams_1","0x1234",
                                       local_60,0x1234);
              if (iVar2 == 0) goto LAB_00101d41;
              if (3 < param_2) {
                iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x2cf,"frame_type_2",
                                         "OSSL_QUIC_FRAME_TYPE_STREAMS_BLOCKED_UNI",local_48,0x17);
                if (iVar2 == 0) goto LAB_00101d41;
                if (7 < param_2) {
                  iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x2d3,"max_streams_2","0x9781",
                                           local_58,0x9781);
                  bVar3 = iVar2 != 0;
                  goto LAB_00101d43;
                }
              }
            }
          }
          bVar3 = true;
          goto LAB_00101d43;
        }
      }
    }
  }
LAB_00101d41:
  bVar3 = false;
LAB_00101d43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong encode_case_15_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = ossl_quic_wire_encode_frame_streams_blocked(param_1,0,0x1234);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x29a,
                      "ossl_quic_wire_encode_frame_streams_blocked(pkt, 0, 0x1234)",&_LC4,uVar1,1);
  if ((int)uVar3 != 0) {
    uVar1 = ossl_quic_wire_encode_frame_streams_blocked(param_1,1,0x9781);
    iVar2 = test_int_eq("test/quic_wire_test.c",0x29d,
                        "ossl_quic_wire_encode_frame_streams_blocked(pkt, 1, 0x9781)",&_LC4,uVar1,1)
    ;
    uVar3 = (ulong)(iVar2 != 0);
  }
  return uVar3;
}



bool encode_case_14_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_stream_data_blocked(param_1,&local_30,&local_28);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x280,
                      "ossl_quic_wire_decode_frame_stream_data_blocked(pkt, &stream_id, &max_data)",
                      "fail < 0",uVar1,param_2 >> 0x3f);
  if (iVar2 != 0) {
    bVar3 = true;
    if (-1 < (long)param_2) goto LAB_00102058;
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x288,"stream_id","0x1234",local_30,0x1234);
    if (iVar2 != 0) {
      iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x28b,"max_data","0x9781",local_28,0x9781);
      bVar3 = iVar2 != 0;
      goto LAB_00102058;
    }
  }
  bVar3 = false;
LAB_00102058:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_14_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_stream_data_blocked(param_1,0x1234,0x9781);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x274,
                      "ossl_quic_wire_encode_frame_stream_data_blocked(pkt, 0x1234, 0x9781)",&_LC4,
                      uVar1,1);
  return iVar2 != 0;
}



ulong encode_case_13_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_data_blocked(param_1,&local_28);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x25f,
                      "ossl_quic_wire_decode_frame_data_blocked(pkt, &max_data)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x266,"max_data","0x1234",local_28,0x1234);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_13_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_data_blocked(param_1,0x1234);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x255,
                      "ossl_quic_wire_encode_frame_data_blocked(pkt, 0x1234)",&_LC4,uVar1,1);
  return iVar2 != 0;
}



bool encode_case_12_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_64 = 1;
  uVar1 = ossl_quic_wire_peek_frame_header(param_1,&local_50,&local_64);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x21b,
                      "ossl_quic_wire_peek_frame_header(pkt, &frame_type_1, &is_minimal)",
                      "success_if",uVar1,param_2 != 0);
  if ((iVar2 != 0) &&
     (iVar2 = test_true("test/quic_wire_test.c",0x220,"!success_if || is_minimal",
                        param_2 == 0 || local_64 != 0), iVar2 != 0)) {
    uVar1 = ossl_quic_wire_decode_frame_max_streams(param_1,&local_60);
    iVar2 = test_int_eq("test/quic_wire_test.c",0x224,
                        "ossl_quic_wire_decode_frame_max_streams(pkt, &max_streams_1)","success_if",
                        uVar1,2 < param_2);
    if (iVar2 != 0) {
      uVar1 = ossl_quic_wire_peek_frame_header(param_1,&local_48,&local_64);
      iVar2 = test_int_eq("test/quic_wire_test.c",0x22a,
                          "ossl_quic_wire_peek_frame_header(pkt, &frame_type_2, &is_minimal)",
                          "success_if",uVar1,3 < param_2);
      if ((iVar2 != 0) &&
         (iVar2 = test_true("test/quic_wire_test.c",0x22f,"!success_if || is_minimal",
                            param_2 < 4 || local_64 != 0), iVar2 != 0)) {
        uVar1 = ossl_quic_wire_decode_frame_max_streams(param_1,&local_58);
        iVar2 = test_int_eq("test/quic_wire_test.c",0x233,
                            "ossl_quic_wire_decode_frame_max_streams(pkt, &max_streams_2)",
                            "success_if",uVar1,param_2 >> 0x3f);
        if (iVar2 != 0) {
          if (param_2 < 3) {
LAB_0010241d:
            bVar3 = true;
            goto LAB_00102303;
          }
          iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x239,"frame_type_1",
                                   "OSSL_QUIC_FRAME_TYPE_MAX_STREAMS_BIDI",local_50,0x12);
          if ((iVar2 != 0) &&
             (iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x23d,"max_streams_1","0x1234",
                                       local_60,0x1234), iVar2 != 0)) {
            if (param_2 < 8) goto LAB_0010241d;
            iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x241,"frame_type_2",
                                     "OSSL_QUIC_FRAME_TYPE_MAX_STREAMS_UNI",local_48,0x13);
            if (iVar2 != 0) {
              iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x245,"max_streams_2","0x9781",
                                       local_58,0x9781);
              bVar3 = iVar2 != 0;
              goto LAB_00102303;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00102303:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong encode_case_12_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = ossl_quic_wire_encode_frame_max_streams(param_1,0,0x1234);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x20b,
                      "ossl_quic_wire_encode_frame_max_streams(pkt, 0, 0x1234)",&_LC4,uVar1,1);
  if ((int)uVar3 != 0) {
    uVar1 = ossl_quic_wire_encode_frame_max_streams(param_1,1,0x9781);
    iVar2 = test_int_eq("test/quic_wire_test.c",0x20e,
                        "ossl_quic_wire_encode_frame_max_streams(pkt, 1, 0x9781)",&_LC4,uVar1,1);
    uVar3 = (ulong)(iVar2 != 0);
  }
  return uVar3;
}



bool encode_case_11_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_max_stream_data(param_1,&local_30,&local_28);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x1f1,
                      "ossl_quic_wire_decode_frame_max_stream_data(pkt, &stream_id, &max_data)",
                      "fail < 0",uVar1,param_2 >> 0x3f);
  if (iVar2 != 0) {
    bVar3 = true;
    if (-1 < (long)param_2) goto LAB_00102608;
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x1f9,"stream_id","0x1234",local_30,0x1234);
    if (iVar2 != 0) {
      iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x1fc,"max_data","0x9781",local_28,0x9781);
      bVar3 = iVar2 != 0;
      goto LAB_00102608;
    }
  }
  bVar3 = false;
LAB_00102608:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_11_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_max_stream_data(param_1,0x1234,0x9781);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x1e5,
                      "ossl_quic_wire_encode_frame_max_stream_data(pkt, 0x1234, 0x9781)",&_LC4,uVar1
                      ,1);
  return iVar2 != 0;
}



ulong encode_case_10_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_max_data(param_1,&local_28);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x1d1,
                      "ossl_quic_wire_decode_frame_max_data(pkt, &max_data)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x1d7,"max_data","0x1234",local_28,0x1234);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_10_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_max_data(param_1,0x1234);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x1c7,
                      "ossl_quic_wire_encode_frame_max_data(pkt, 0x1234)",&_LC4,uVar1,1);
  return iVar2 != 0;
}



bool encode_case_9_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_28 = 0;
  local_38 = (undefined1  [16])0x0;
  uVar1 = ossl_quic_wire_decode_frame_stream(param_1,0,local_48);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x1a0,"ossl_quic_wire_decode_frame_stream(pkt, 0, &f)"
                      ,"fail < 0",uVar1,param_2 >> 0x3f);
  if (iVar2 != 0) {
    bVar3 = true;
    if (-1 < (long)param_2) goto LAB_00102867;
    iVar2 = test_uint64_t_le("test/quic_wire_test.c",0x1a6,"f.len","SIZE_MAX",local_38._0_8_,
                             0xffffffffffffffff);
    if (iVar2 != 0) {
      iVar2 = test_mem_eq("test/quic_wire_test.c",0x1a9,"f.data","encode_case_9_data",local_38._8_8_
                          ,local_38._0_8_,&encode_case_9_data,5);
      if (iVar2 != 0) {
        iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x1ad,"f.stream_id","0x1234",local_48._0_8_
                                 ,0x1234);
        if (iVar2 != 0) {
          iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x1b0,"f.offset",&_LC148,local_48._8_8_,
                                   0x39);
          if (iVar2 != 0) {
            iVar2 = test_int_eq("test/quic_wire_test.c",0x1b3,"f.has_explicit_len",&_LC4,
                                (byte)local_28 & 1,1);
            if (iVar2 != 0) {
              iVar2 = test_int_eq("test/quic_wire_test.c",0x1b6,"f.is_fin",&_LC4,
                                  (byte)local_28 >> 1 & 1,1);
              bVar3 = iVar2 != 0;
              goto LAB_00102867;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00102867:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_8_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_28 = 0;
  local_38 = (undefined1  [16])0x0;
  if ((long)param_2 < 3) {
    uVar1 = ossl_quic_wire_decode_frame_stream(param_1,0,local_48);
    iVar2 = test_int_eq("test/quic_wire_test.c",0x169,
                        "ossl_quic_wire_decode_frame_stream(pkt, 0, &f)","fail < 0",uVar1,
                        param_2 >> 0x3f);
    if (iVar2 != 0) {
      if (-1 < (long)param_2) goto LAB_001029f6;
      iVar2 = test_uint64_t_le("test/quic_wire_test.c",0x16f,"f.len","SIZE_MAX",local_38._0_8_,
                               0xffffffffffffffff);
      if (iVar2 != 0) {
        iVar2 = test_mem_eq("test/quic_wire_test.c",0x172,"f.data","encode_case_8_data",
                            local_38._8_8_,local_38._0_8_,&encode_case_8_data,5);
        if (iVar2 != 0) {
          iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x176,"f.stream_id","0x1234",
                                   local_48._0_8_,0x1234);
          if (iVar2 != 0) {
            iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x179,"f.offset",&_LC6,local_48._8_8_,0
                                    );
            if (iVar2 != 0) {
              iVar2 = test_int_eq("test/quic_wire_test.c",0x17c,"f.has_explicit_len",&_LC6,
                                  (byte)local_28 & 1,0);
              if (iVar2 != 0) {
                iVar2 = test_int_eq("test/quic_wire_test.c",0x17f,"f.is_fin",&_LC6,
                                    (byte)local_28 >> 1 & 1,0);
                bVar3 = iVar2 != 0;
                goto LAB_001029fb;
              }
            }
          }
        }
      }
    }
    bVar3 = false;
  }
  else {
LAB_001029f6:
    bVar3 = true;
  }
LAB_001029fb:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



bool encode_case_9_enc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_quic_wire_encode_frame_stream(param_1,encode_case_9_f);
  iVar1 = test_ptr("test/quic_wire_test.c",0x195,
                   "ossl_quic_wire_encode_frame_stream(pkt, &encode_case_9_f)",uVar2);
  return iVar1 != 0;
}



bool encode_case_8_enc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_quic_wire_encode_frame_stream(param_1,encode_case_8_f);
  iVar1 = test_ptr("test/quic_wire_test.c",0x157,
                   "ossl_quic_wire_encode_frame_stream(pkt, &encode_case_8_f)",uVar2);
  return iVar1 != 0;
}



ulong encode_case_7_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_new_token(param_1,&local_30,&local_28);
  uVar3 = test_int_eq("test/quic_wire_test.c",0x137,
                      "ossl_quic_wire_decode_frame_new_token(pkt, &token, &token_len)","fail < 0",
                      uVar1,param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_mem_eq("test/quic_wire_test.c",0x13f,"token","encode_case_7_token",local_30,
                        local_28,encode_case_7_token,0x10);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_7_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_new_token(param_1,encode_case_7_token,0x10);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x12a,
                      "ossl_quic_wire_encode_frame_new_token(pkt, encode_case_7_token, sizeof(encode_case_7_token))"
                      ,&_LC4,uVar1,1);
  return iVar2 != 0;
}



bool encode_case_6_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_crypto(param_1,0,local_38);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x108,"ossl_quic_wire_decode_frame_crypto(pkt, 0, &f)"
                      ,"fail < 0",uVar1,param_2 >> 0x3f);
  if (iVar2 != 0) {
    bVar3 = true;
    if (-1 < (long)param_2) goto LAB_00102da2;
    iVar2 = test_uint64_t_eq("test/quic_wire_test.c",0x10e,"f.offset","0x1234",local_38._0_8_,0x1234
                            );
    if (iVar2 != 0) {
      iVar2 = test_uint64_t_le("test/quic_wire_test.c",0x111,"f.len","SIZE_MAX",local_38._8_8_,
                               0xffffffffffffffff);
      if (iVar2 != 0) {
        iVar2 = test_mem_eq("test/quic_wire_test.c",0x114,"f.data","encode_case_6_data",local_28,
                            local_38._8_8_,&encode_case_6_data,5);
        bVar3 = iVar2 != 0;
        goto LAB_00102da2;
      }
    }
  }
  bVar3 = false;
LAB_00102da2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_6_enc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_quic_wire_encode_frame_crypto(param_1,encode_case_6_f);
  iVar1 = test_ptr("test/quic_wire_test.c",0xfd,
                   "ossl_quic_wire_encode_frame_crypto(pkt, &encode_case_6_f)",uVar2);
  return iVar1 != 0;
}



ulong encode_case_5_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  uVar1 = ossl_quic_wire_decode_frame_stop_sending(param_1,local_38);
  uVar3 = test_int_eq("test/quic_wire_test.c",0xe0,
                      "ossl_quic_wire_decode_frame_stop_sending(pkt, &f)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_mem_eq("test/quic_wire_test.c",0xe6,&_LC164,"&encode_case_5_f",local_38,0x10,
                        encode_case_5_f,0x10);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_5_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_stop_sending(param_1,encode_case_5_f);
  iVar2 = test_int_eq("test/quic_wire_test.c",0xd5,
                      "ossl_quic_wire_encode_frame_stop_sending(pkt, &encode_case_5_f)",&_LC4,uVar1,
                      1);
  return iVar2 != 0;
}



ulong encode_case_4_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  uVar1 = ossl_quic_wire_decode_frame_reset_stream(param_1,local_38);
  uVar3 = test_int_eq("test/quic_wire_test.c",0xbb,
                      "ossl_quic_wire_decode_frame_reset_stream(pkt, &f)","fail < 0",uVar1,
                      param_2 >> 0x3f);
  if (((int)uVar3 != 0) && (uVar3 = 1, (long)param_2 < 0)) {
    iVar2 = test_mem_eq("test/quic_wire_test.c",0xc1,&_LC164,"&encode_case_4_f",local_38,0x18,
                        encode_case_4_f,0x18);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool encode_case_4_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_reset_stream(param_1,encode_case_4_f);
  iVar2 = test_int_eq("test/quic_wire_test.c",0xb0,
                      "ossl_quic_wire_encode_frame_reset_stream(pkt, &encode_case_4_f)",&_LC4,uVar1,
                      1);
  return iVar2 != 0;
}



bool encode_case_3_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_ack(param_1,3,encode_case_3_f);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x5a,
                      "ossl_quic_wire_encode_frame_ack(pkt, 3, &encode_case_3_f)",&_LC4,uVar1,1);
  return iVar2 != 0;
}



bool encode_case_2_dec(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_decode_frame_ping();
  iVar2 = test_int_eq("test/quic_wire_test.c",0x41,"ossl_quic_wire_decode_frame_ping(pkt)",
                      "fail < 0",uVar1,param_2 >> 0x3f);
  return iVar2 != 0;
}



bool encode_case_2_enc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_frame_ping();
  iVar2 = test_int_eq("test/quic_wire_test.c",0x38,"ossl_quic_wire_encode_frame_ping(pkt)",&_LC4,
                      uVar1,1);
  return iVar2 != 0;
}



bool encode_case_1_dec(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (-1 < param_2) {
    return true;
  }
  uVar1 = ossl_quic_wire_decode_padding();
  iVar2 = test_int_eq("test/quic_wire_test.c",0x2a,"ossl_quic_wire_decode_padding(pkt)",&_LC172,
                      uVar1,3);
  return iVar2 != 0;
}



bool encode_case_1_enc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ossl_quic_wire_encode_padding(param_1,3);
  iVar2 = test_int_eq("test/quic_wire_test.c",0x1e,"ossl_quic_wire_encode_padding(pkt, 3)",&_LC4,
                      uVar1,1);
  return iVar2 != 0;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_wire_encode",test_wire_encode,0x18,1);
  add_all_tests("test_wire_ack",test_wire_ack,7,1);
  add_all_tests("test_wire_pkt_hdr_pn",test_wire_pkt_hdr_pn,0x12,1);
  add_test("test_wire_retry_integrity_tag",test_wire_retry_integrity_tag);
  add_all_tests("test_wire_minimal",0x100000,6,1);
  return 1;
}



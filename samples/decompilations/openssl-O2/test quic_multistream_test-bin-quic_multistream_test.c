
void lh_STREAM_INFO_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_STREAM_INFO_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_STREAM_INFO_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_STREAM_INFO_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void helper_packet_plain_listener(void)

{
  long in_R8;
  
                    /* WARNING: Could not recover jumptable at 0x00100047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_R8 + 0xd8))(in_R8);
  return;
}



void helper_handshake_listener(void)

{
  long in_RCX;
  
                    /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_RCX + 0xe0))(in_RCX);
  return;
}



void helper_datagram_listener(void)

{
  long in_RCX;
  
                    /* WARNING: Could not recover jumptable at 0x00100067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_RCX + 0xe8))(in_RCX);
  return;
}



undefined8 script_22_inject_plain(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xcf | 0x10;
  }
  return 1;
}



undefined8 script_54_inject_handshake(undefined8 param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  
  if (param_3 != 0) {
    pbVar1 = param_2 + param_3;
    if ((param_3 & 1) != 0) {
      *param_2 = ~*param_2;
      param_2 = param_2 + 1;
      if (param_2 == pbVar1) {
        return 1;
      }
    }
    do {
      *param_2 = ~*param_2;
      param_2[1] = ~param_2[1];
      param_2 = param_2 + 2;
    } while (param_2 != pbVar1);
  }
  return 1;
}



undefined8 on_new_session(void)

{
  new_session_count = new_session_count + 1;
  return 0;
}



undefined8 reenable_test_event_handling(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0;
  return 1;
}



void set_event_handling_mode_conn(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x20) = 1;
  SSL_set_value_uint(uVar1,0,6,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
  return;
}



void stream_info_cmp(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



undefined8 * get_stream_info(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  char *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_ptr("test/quic_multistream_test.c",0x37a,"stream_name",param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x0;
    iVar1 = strcmp(param_2,"DEFAULT");
    if (iVar1 != 0) {
      local_48[0] = param_2;
      puVar2 = (undefined8 *)OPENSSL_LH_retrieve(param_1,local_48);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)CRYPTO_zalloc(0x18,"test/quic_multistream_test.c",899);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = param_2;
          puVar2[2] = 0xffffffffffffffff;
          OPENSSL_LH_insert(param_1,puVar2);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_28_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined1 local_98 [64];
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_00100260:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_98,local_58,0x20,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xc60,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_98,*(undefined8 *)(param_1 + 0xf8));
      iVar1 = test_true("test/quic_multistream_test.c",0xc64,
                        "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_98,*(long *)(param_1 + 0xf0) + -1);
        iVar1 = test_true("test/quic_multistream_test.c",0xc65,
                          "WPACKET_quic_write_vlint(&wpkt, h->inject_word0 - 1)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_quic_write_vlint(local_98,0x7b);
          iVar1 = test_true("test/quic_multistream_test.c",0xc67,
                            "WPACKET_quic_write_vlint(&wpkt, 123)",iVar1 != 0);
          if (iVar1 != 0) {
            if (*(long *)(param_1 + 0xf8) == 4) {
              iVar1 = WPACKET_quic_write_vlint(local_98,5);
              iVar1 = test_true("test/quic_multistream_test.c",0xc69,
                                "WPACKET_quic_write_vlint(&wpkt, 5)",iVar1 != 0);
              if (iVar1 == 0) goto LAB_00100340;
            }
            iVar1 = WPACKET_get_total_written(local_98,&local_a0);
            iVar1 = test_true("test/quic_multistream_test.c",0xc6c,
                              "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
            if ((iVar1 != 0) &&
               (iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_58,local_a0)
               , iVar1 != 0)) {
              WPACKET_finish(local_98);
              goto LAB_00100260;
            }
          }
        }
      }
LAB_00100340:
      WPACKET_cleanup(local_98);
    }
    uVar2 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 script_66_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_00100453:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_b8,local_78,0x40,0);
    iVar1 = test_true("test/quic_multistream_test.c",0x1280,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_b8,*(undefined8 *)(param_1 + 0xf8));
      iVar1 = test_true("test/quic_multistream_test.c",0x1284,
                        "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)",iVar1 != 0);
      if (iVar1 != 0) {
        if (*(long *)(param_1 + 0xf8) == 0x11) {
          iVar1 = WPACKET_quic_write_vlint(local_b8,*(long *)(param_1 + 0xf0) + -1);
          iVar1 = test_true("test/quic_multistream_test.c",0x1288,
                            "WPACKET_quic_write_vlint(&wpkt, h->inject_word0 - 1)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_0010053d;
        }
        iVar1 = WPACKET_quic_write_vlint(local_b8,0x3fffffffffffffff);
        iVar1 = test_true("test/quic_multistream_test.c",0x128c,
                          "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_VLINT_MAX)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_get_total_written(local_b8,&local_c0);
          iVar1 = test_true("test/quic_multistream_test.c",0x128f,
                            "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
          if ((iVar1 != 0) &&
             (iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_78,local_c0),
             iVar1 != 0)) {
            WPACKET_finish(local_b8);
            goto LAB_00100453;
          }
        }
      }
LAB_0010053d:
      WPACKET_cleanup(local_b8);
    }
    uVar2 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 script_65_inject_plain(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0xf0) == 0) {
LAB_00100620:
    uVar2 = 1;
  }
  else {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    iVar1 = WPACKET_init_static_len(local_b8,local_78,0x40,0);
    iVar1 = test_true("test/quic_multistream_test.c",0x1249,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_b8,6);
      iVar1 = test_true("test/quic_multistream_test.c",0x124d,
                        "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_CRYPTO)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_b8,0);
        iVar1 = test_true("test/quic_multistream_test.c",0x124e,"WPACKET_quic_write_vlint(&wpkt, 0)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_quic_write_vlint(local_b8,0);
          iVar1 = test_true("test/quic_multistream_test.c",0x124f,
                            "WPACKET_quic_write_vlint(&wpkt, 0)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_get_total_written(local_b8,&local_c0);
            iVar1 = test_true("test/quic_multistream_test.c",0x1252,
                              "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_78,local_c0);
              if (iVar1 != 0) {
                WPACKET_finish(local_b8);
                goto LAB_00100620;
              }
            }
          }
        }
      }
      WPACKET_cleanup(local_b8);
    }
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_61_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined1 local_98 [64];
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_001007c0:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_98,local_58,0x20,0);
    iVar1 = test_true("test/quic_multistream_test.c",0x11cc,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_98,*(undefined8 *)(param_1 + 0xf0));
      iVar1 = test_true("test/quic_multistream_test.c",0x11d0,
                        "WPACKET_quic_write_vlint(&wpkt, h->inject_word0)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_98,*(undefined8 *)(param_1 + 0xf8));
        iVar1 = test_true("test/quic_multistream_test.c",0x11d1,
                          "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_quic_write_vlint(local_98,0x7b);
          iVar1 = test_true("test/quic_multistream_test.c",0x11d3,
                            "WPACKET_quic_write_vlint(&wpkt, 123)",iVar1 != 0);
          if (iVar1 != 0) {
            if (*(long *)(param_1 + 0xf0) == 4) {
              iVar1 = WPACKET_quic_write_vlint(local_98,0);
              iVar1 = test_true("test/quic_multistream_test.c",0x11d5,
                                "WPACKET_quic_write_vlint(&wpkt, 0)",iVar1 != 0);
              if (iVar1 == 0) goto LAB_0010089c;
            }
            iVar1 = WPACKET_get_total_written(local_98,&local_a0);
            iVar1 = test_true("test/quic_multistream_test.c",0x11d8,
                              "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
            if ((iVar1 != 0) &&
               (iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_58,local_a0)
               , iVar1 != 0)) {
              WPACKET_finish(local_98);
              goto LAB_001007c0;
            }
          }
        }
      }
LAB_0010089c:
      WPACKET_cleanup(local_98);
    }
    uVar2 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 script_52_inject_plain(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_001009a5:
    uVar3 = 1;
  }
  else {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    lVar1 = *(long *)(param_1 + 0xf8);
    iVar2 = WPACKET_init_static_len(local_b8,local_78,0x40,0);
    iVar2 = test_true("test/quic_multistream_test.c",0x104e,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = WPACKET_quic_write_vlint(local_b8,lVar1);
      iVar2 = test_true("test/quic_multistream_test.c",0x1052,
                        "WPACKET_quic_write_vlint(&wpkt, type)",iVar2 != 0);
      if (iVar2 != 0) {
        if (lVar1 == 0x15) {
          iVar2 = WPACKET_quic_write_vlint(local_b8,0);
          iVar2 = test_true("test/quic_multistream_test.c",0x1056,
                            "WPACKET_quic_write_vlint(&wpkt, C_BIDI_ID(0))",iVar2 != 0);
          if (iVar2 == 0) goto LAB_00100a90;
        }
        iVar2 = WPACKET_quic_write_vlint(local_b8,0xffffff);
        iVar2 = test_true("test/quic_multistream_test.c",0x1059,
                          "WPACKET_quic_write_vlint(&wpkt, 0xFFFFFF)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = WPACKET_get_total_written(local_b8,&local_c0);
          iVar2 = test_true("test/quic_multistream_test.c",0x105c,
                            "WPACKET_get_total_written(&wpkt, &written)",iVar2 != 0);
          if ((iVar2 != 0) &&
             (iVar2 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_78,local_c0),
             iVar2 != 0)) {
            WPACKET_finish(local_b8);
            goto LAB_001009a5;
          }
        }
      }
LAB_00100a90:
      WPACKET_cleanup(local_b8);
    }
    uVar3 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 script_46_inject_plain(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined1 local_98 [64];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0xf0) == 0) {
LAB_00100b62:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_98,local_58,0x10,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xf7b,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      uVar3 = *(long *)(param_1 + 0xf0) - 1;
      if (uVar3 < 5) {
        lVar4 = *(long *)(CSWTCH_129 + uVar3 * 8);
        uVar2 = *(undefined8 *)(CSWTCH_130 + uVar3 * 8);
        local_d0 = *(undefined8 *)(CSWTCH_131 + uVar3 * 8);
        local_d8 = *(long *)(CSWTCH_132 + uVar3 * 8);
        local_c8 = *(undefined8 *)(CSWTCH_133 + uVar3 * 8);
        local_c0 = *(undefined8 *)(CSWTCH_134 + uVar3 * 8);
        local_b8 = *(undefined8 *)(CSWTCH_135 + uVar3 * 8);
        local_b0 = *(undefined8 *)(CSWTCH_136 + uVar3 * 8);
      }
      else {
        local_b0 = 0;
        uVar2 = 0;
        lVar4 = 2;
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
        local_d8 = 0;
        local_d0 = 0;
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
      iVar1 = WPACKET_quic_write_vlint(local_98,lVar4);
      iVar1 = test_true("test/quic_multistream_test.c",0xfa9,"WPACKET_quic_write_vlint(&wpkt, type)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_98,uVar2);
        iVar1 = test_true("test/quic_multistream_test.c",0xfaa,
                          "WPACKET_quic_write_vlint(&wpkt, largest_acked)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_quic_write_vlint(local_98,0);
          iVar1 = test_true("test/quic_multistream_test.c",0xfab,
                            "WPACKET_quic_write_vlint(&wpkt, 0)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(local_98,local_d8);
            iVar1 = test_true("test/quic_multistream_test.c",0xfac,
                              "WPACKET_quic_write_vlint(&wpkt, range_count)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = WPACKET_quic_write_vlint(local_98,local_d0);
              iVar1 = test_true("test/quic_multistream_test.c",0xfad,
                                "WPACKET_quic_write_vlint(&wpkt, first_range)",iVar1 != 0);
              if (iVar1 != 0) {
                if (local_d8 == 0) {
LAB_00100dbf:
                  if (lVar4 == 3) {
                    iVar1 = WPACKET_quic_write_vlint(local_98,0);
                    iVar1 = test_true("test/quic_multistream_test.c",0xfb6,
                                      "WPACKET_quic_write_vlint(&wpkt, ect0)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = WPACKET_quic_write_vlint(local_98,local_b8);
                      iVar1 = test_true("test/quic_multistream_test.c",0xfb7,
                                        "WPACKET_quic_write_vlint(&wpkt, ect1)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = WPACKET_quic_write_vlint(local_98,local_b0);
                        iVar1 = test_true("test/quic_multistream_test.c",0xfb8,
                                          "WPACKET_quic_write_vlint(&wpkt, ecnce)",iVar1 != 0);
                        if (iVar1 != 0) goto LAB_00100dc9;
                      }
                    }
                  }
                  else {
LAB_00100dc9:
                    iVar1 = WPACKET_get_total_written(local_98,&local_a0);
                    iVar1 = test_true("test/quic_multistream_test.c",0xfbb,
                                      "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
                    if ((iVar1 != 0) &&
                       (iVar1 = qtest_fault_prepend_frame
                                          (*(undefined8 *)(param_1 + 0xb8),local_58,local_a0),
                       iVar1 != 0)) {
                      WPACKET_finish(local_98);
                      goto LAB_00100b62;
                    }
                  }
                }
                else {
                  iVar1 = WPACKET_quic_write_vlint(local_98,local_c8);
                  iVar1 = test_true("test/quic_multistream_test.c",0xfb1,
                                    "WPACKET_quic_write_vlint(&wpkt, agap)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = WPACKET_quic_write_vlint(local_98,local_c0);
                    iVar1 = test_true("test/quic_multistream_test.c",0xfb2,
                                      "WPACKET_quic_write_vlint(&wpkt, alen)",iVar1 != 0);
                    if (iVar1 != 0) goto LAB_00100dbf;
                  }
                }
              }
            }
          }
        }
      }
      WPACKET_cleanup(local_98);
    }
    uVar2 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 script_24_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_00100f4d:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_88,local_48,0x10,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xbf2,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_88,*(undefined8 *)(param_1 + 0xf8));
      iVar1 = test_true("test/quic_multistream_test.c",0xbf6,
                        "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_88,0x1000000000000001);
        iVar1 = test_true("test/quic_multistream_test.c",0xbf7,
                          "WPACKET_quic_write_vlint(&wpkt, (((uint64_t)1) << 60) + 1)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_get_total_written(local_88,&local_90);
          iVar1 = test_true("test/quic_multistream_test.c",0xbfa,
                            "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_48,local_90);
            if (iVar1 != 0) {
              WPACKET_finish(local_88);
              goto LAB_00100f4d;
            }
          }
        }
      }
      WPACKET_cleanup(local_88);
    }
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_23_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_001010bd:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_88,local_48,0x10,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xbbd,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_88,7);
      iVar1 = test_true("test/quic_multistream_test.c",0xbc1,
                        "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_NEW_TOKEN)",iVar1 != 0
                       );
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_88,0);
        iVar1 = test_true("test/quic_multistream_test.c",0xbc2,"WPACKET_quic_write_vlint(&wpkt, 0)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_get_total_written(local_88,&local_90);
          iVar1 = test_true("test/quic_multistream_test.c",0xbc5,
                            "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_48,local_90);
            if (iVar1 != 0) {
              WPACKET_finish(local_88);
              goto LAB_001010bd;
            }
          }
        }
      }
      WPACKET_cleanup(local_88);
    }
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool check_avail_streams(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x18) + 0x10);
  if (uVar1 == 2) {
    iVar2 = SSL_get_value_uint(*(undefined8 *)(param_1 + 0x70),0,3,&local_28);
    uVar4 = 0x159c;
    pcVar3 = "SSL_get_quic_stream_uni_local_avail(h->c_conn, &v)";
    bVar5 = iVar2 != 0;
LAB_0010125c:
    iVar2 = test_true("test/quic_multistream_test.c",uVar4,pcVar3,bVar5);
    if (iVar2 != 0) {
      iVar2 = test_uint64_t_eq("test/quic_multistream_test.c",0x15a7,&_LC28,"hl->check_op->arg2",
                               local_28,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
      bVar5 = iVar2 != 0;
      goto LAB_001012a2;
    }
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        iVar2 = SSL_get_value_uint(*(undefined8 *)(param_1 + 0x70),0,1,&local_28);
        uVar4 = 0x1594;
        pcVar3 = "SSL_get_quic_stream_bidi_local_avail(h->c_conn, &v)";
        bVar5 = iVar2 != 0;
      }
      else {
        iVar2 = SSL_get_value_uint(*(undefined8 *)(param_1 + 0x70),0,2,&local_28);
        uVar4 = 0x1598;
        pcVar3 = "SSL_get_quic_stream_bidi_remote_avail(h->c_conn, &v)";
        bVar5 = iVar2 != 0;
      }
      goto LAB_0010125c;
    }
    if (uVar1 == 3) {
      iVar2 = SSL_get_value_uint(*(undefined8 *)(param_1 + 0x70),0,4,&local_28);
      uVar4 = 0x15a0;
      pcVar3 = "SSL_get_quic_stream_uni_remote_avail(h->c_conn, &v)";
      bVar5 = iVar2 != 0;
      goto LAB_0010125c;
    }
  }
  bVar5 = false;
LAB_001012a2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong check_idle_timeout(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = SSL_get_value_uint(*(undefined8 *)(param_1 + 0x70),
                             *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x10),5,&local_28);
  uVar2 = test_true("test/quic_multistream_test.c",0x1540,
                    "SSL_get_value_uint(h->c_conn, hl->check_op->arg1, SSL_VALUE_QUIC_IDLE_TIMEOUT, &v)"
                    ,iVar1 != 0);
  if ((int)uVar2 != 0) {
    iVar1 = test_uint64_t_eq("test/quic_multistream_test.c",0x1545,&_LC28,"hl->check_op->arg2",
                             local_28,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool script_72_check(long param_1)

{
  int iVar1;
  
  iVar1 = test_uint64_t_ge("test/quic_multistream_test.c",0x135c,"h->fail_count",&_LC33,
                           *(undefined8 *)(param_1 + 0x110),0x32);
  return iVar1 != 0;
}



bool cannot_change_idle_timeout(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = SSL_get_value_uint(*(undefined8 *)(param_1 + 0x70),1,5,&local_28);
  iVar1 = test_true("test/quic_multistream_test.c",0x156e,
                    "SSL_get_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, &v)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = test_uint64_t_eq("test/quic_multistream_test.c",0x1573,&_LC28,"30000",local_28,30000);
    if (iVar1 != 0) {
      iVar1 = SSL_set_value_uint(*(undefined8 *)(param_1 + 0x70),1,5,5000);
      iVar1 = test_false("test/quic_multistream_test.c",0x1576,
                         "SSL_set_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, 5000)"
                         ,iVar1 != 0);
      bVar2 = iVar1 != 0;
      goto LAB_001014d3;
    }
  }
  bVar2 = false;
LAB_001014d3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool modify_idle_timeout(long param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = SSL_set_value_uint(*(undefined8 *)(param_1 + 0x70),1,5,0x4000000000000000);
  iVar1 = test_false("test/quic_multistream_test.c",0x1526,
                     "SSL_set_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, (1ULL << 62))"
                     ,iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = SSL_set_value_uint(*(undefined8 *)(param_1 + 0x70),1,5,
                               *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
    iVar1 = test_true("test/quic_multistream_test.c",0x152c,
                      "SSL_set_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, hl->check_op->arg2)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_get_value_uint(*(undefined8 *)(param_1 + 0x70),1,5,&local_28);
      iVar1 = test_true("test/quic_multistream_test.c",0x1531,
                        "SSL_get_feature_request_uint(h->c_conn, SSL_VALUE_QUIC_IDLE_TIMEOUT, &v)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_uint64_t_eq("test/quic_multistream_test.c",0x1536,&_LC28,"hl->check_op->arg2",
                                 local_28,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
        bVar2 = iVar1 != 0;
        goto LAB_001015cf;
      }
    }
  }
  bVar2 = false;
LAB_001015cf:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool check_got_session_ticket(void)

{
  int iVar1;
  
  iVar1 = test_size_t_gt("test/quic_multistream_test.c",0x147b,"new_session_count",&_LC40,
                         new_session_count,0);
  return iVar1 != 0;
}



undefined8 setup_session(long param_1)

{
  SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 0x68),0x2c,3,(void *)0x0);
  SSL_CTX_sess_set_new_cb(*(SSL_CTX **)(param_1 + 0x68),on_new_session);
  return 1;
}



bool script_76_check(long param_1)

{
  int iVar1;
  
  iVar1 = SSL_shutdown_ex(*(undefined8 *)(param_1 + 0x70),0xc,0,0);
  iVar1 = test_false("test/quic_multistream_test.c",0x142c,
                     "SSL_shutdown_ex(h->c_conn, SSL_SHUTDOWN_FLAG_WAIT_PEER | SSL_SHUTDOWN_FLAG_NO_BLOCK, NULL, 0)"
                     ,iVar1 != 0);
  return iVar1 != 0;
}



undefined8 script_32_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == '\x05') {
    switch(*(undefined8 *)(param_1 + 0xf8)) {
    case 0:
      goto switchD_001017f2_caseD_0;
    case 1:
      lVar3 = 0;
      uVar2 = 0;
      break;
    case 2:
      uVar2 = 0x3fffffffffffffff;
      lVar3 = 5;
      break;
    case 3:
      lVar3 = 5;
      uVar2 = 0x40000000;
      break;
    case 4:
      lVar3 = 1;
      uVar2 = 0;
      break;
    default:
      goto switchD_001017f2_default;
    }
    iVar1 = WPACKET_init_static_len(local_c8,local_88,0x40,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xcfe,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 == 0) {
switchD_001017f2_default:
      uVar2 = 0;
      goto LAB_001017a2;
    }
    iVar1 = WPACKET_quic_write_vlint(local_c8,0xe);
    iVar1 = test_true("test/quic_multistream_test.c",0xd02,"WPACKET_quic_write_vlint(&wpkt, type)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_c8,*(long *)(param_1 + 0xf0) + -1);
      iVar1 = test_true("test/quic_multistream_test.c",0xd03,
                        "WPACKET_quic_write_vlint(&wpkt, h->inject_word0 - 1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_c8,uVar2);
        iVar1 = test_true("test/quic_multistream_test.c",0xd05,
                          "WPACKET_quic_write_vlint(&wpkt, offset)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_quic_write_vlint(local_c8,lVar3);
          iVar1 = test_true("test/quic_multistream_test.c",0xd06,
                            "WPACKET_quic_write_vlint(&wpkt, flen)",iVar1 != 0);
          if (iVar1 != 0) {
            if (lVar3 != 0) {
              lVar4 = 0;
              do {
                iVar1 = WPACKET_put_bytes__(local_c8,0x42,1);
                iVar1 = test_true("test/quic_multistream_test.c",0xd0a,
                                  "WPACKET_put_bytes_u8(&wpkt, 0x42)",iVar1 != 0);
                if (iVar1 == 0) goto LAB_001018b6;
                lVar4 = lVar4 + 1;
              } while (lVar3 != lVar4);
            }
            iVar1 = WPACKET_get_total_written(local_c8,&local_d0);
            iVar1 = test_true("test/quic_multistream_test.c",0xd0d,
                              "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
            if ((iVar1 != 0) &&
               (iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_88,local_d0)
               , iVar1 != 0)) {
              WPACKET_finish(local_c8);
              goto switchD_001017f2_caseD_0;
            }
          }
        }
      }
    }
LAB_001018b6:
    WPACKET_cleanup(local_c8);
    uVar2 = 0;
  }
  else {
switchD_001017f2_caseD_0:
    uVar2 = 1;
  }
LAB_001017a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 script_58_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_00101a43:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_b8,local_78,0x40,0);
    iVar1 = test_true("test/quic_multistream_test.c",0x1151,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0xf0) == 1) {
        iVar1 = WPACKET_quic_write_vlint(local_b8,0x1e);
        iVar1 = test_true("test/quic_multistream_test.c",0x1156,
                          "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_HANDSHAKE_DONE)",
                          iVar1 != 0);
joined_r0x00101bc2:
        if (iVar1 != 0) {
          iVar1 = WPACKET_get_total_written(local_b8,&local_c0);
          iVar1 = test_true("test/quic_multistream_test.c",0x115f,
                            "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
          if ((iVar1 != 0) &&
             (iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_78,local_c0),
             iVar1 != 0)) {
            WPACKET_finish(local_b8);
            goto LAB_00101a43;
          }
        }
      }
      else {
        iVar1 = WPACKET_put_bytes__(local_b8,0x40,1);
        iVar1 = test_true("test/quic_multistream_test.c",0x115a,"WPACKET_put_bytes_u8(&wpkt, 0x40)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(local_b8,0x1e,1);
          iVar1 = test_true("test/quic_multistream_test.c",0x115b,
                            "WPACKET_put_bytes_u8(&wpkt, 0x1E)",iVar1 != 0);
          goto joined_r0x00101bc2;
        }
      }
      WPACKET_cleanup(local_b8);
    }
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_39_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_f0;
  undefined1 local_e8 [64];
  byte local_a8 [2];
  undefined1 auStack_a6 [11];
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8[0] = 0;
  local_a8[1] = 0;
  auStack_a6 = SUB1611((undefined1  [16])0x0,2);
  uStack_9b = 0;
  uStack_98 = 0;
  uVar2 = ossl_quic_tserver_get_channel(*(undefined8 *)(param_1 + 0x40));
  if (*param_2 != '\x05') goto switchD_00101c83_caseD_0;
  switch(*(undefined8 *)(param_1 + 0xf8)) {
  case 0:
    goto switchD_00101c83_caseD_0;
  case 1:
    local_a8[0] = 0;
  default:
switchD_00101c83_default:
    uVar5 = 0;
    uVar3 = 0;
    break;
  case 2:
    local_a8[0] = 0x15;
    goto switchD_00101c83_default;
  case 3:
    uVar5 = 1;
    uVar3 = 0;
    local_a8[0] = 1;
    local_a8[1] = 0x55;
    break;
  case 4:
    uVar5 = 2;
    uVar3 = 2;
    ossl_quic_channel_get_diag_local_cid(uVar2,local_a8);
    break;
  case 5:
    uVar5 = 1;
    uVar3 = 1;
    local_a8[0] = 8;
    local_a8[1] = 0x55;
  }
  iVar1 = WPACKET_init_static_len(local_e8,local_88,0x40,0);
  iVar1 = test_true("test/quic_multistream_test.c",0xde4,
                    "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_quic_write_vlint(local_e8,0x18);
    iVar1 = test_true("test/quic_multistream_test.c",0xde8,
                      "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_NEW_CONN_ID)",iVar1 != 0
                     );
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_e8,uVar3);
      iVar1 = test_true("test/quic_multistream_test.c",0xde9,
                        "WPACKET_quic_write_vlint(&wpkt, seq_no)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_e8,uVar5);
        iVar1 = test_true("test/quic_multistream_test.c",0xdea,
                          "WPACKET_quic_write_vlint(&wpkt, retire_prior_to)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(local_e8,local_a8[0],1);
          iVar1 = test_true("test/quic_multistream_test.c",0xdeb,
                            "WPACKET_put_bytes_u8(&wpkt, new_cid.id_len)",iVar1 != 0);
          if (iVar1 != 0) {
            uVar6 = 0;
            if (local_a8[0] != 0) {
              do {
                iVar1 = WPACKET_put_bytes__(local_e8,auStack_a6[uVar6 - 1],1);
                iVar1 = test_true("test/quic_multistream_test.c",0xdef,
                                  "WPACKET_put_bytes_u8(&wpkt, new_cid.id[i])",iVar1 != 0);
                if (iVar1 == 0) goto LAB_00101d70;
                uVar6 = uVar6 + 1;
                if (local_a8[0] <= uVar6) goto LAB_00101ed0;
              } while (uVar6 != 0x14);
              if (0x14 < (ulong)local_a8[0]) {
                uVar6 = 0x14;
                do {
                  iVar1 = WPACKET_put_bytes__(local_e8,0x55,1);
                  iVar1 = test_true("test/quic_multistream_test.c",0xdf3,
                                    "WPACKET_put_bytes_u8(&wpkt, 0x55)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00101d70;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < local_a8[0]);
              }
            }
LAB_00101ed0:
            lVar4 = 0x10;
            do {
              iVar1 = WPACKET_put_bytes__(local_e8,0x42,1);
              iVar1 = test_true("test/quic_multistream_test.c",0xdf7,
                                "WPACKET_put_bytes_u8(&wpkt, 0x42)",iVar1 != 0);
              if (iVar1 == 0) goto LAB_00101d70;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            iVar1 = WPACKET_get_total_written(local_e8,&local_f0);
            iVar1 = test_true("test/quic_multistream_test.c",0xdfa,
                              "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
            if ((iVar1 != 0) &&
               (iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_88,local_f0)
               , iVar1 != 0)) {
              WPACKET_finish(local_e8);
switchD_00101c83_caseD_0:
              uVar2 = 1;
              goto LAB_00101c34;
            }
          }
        }
      }
    }
LAB_00101d70:
    WPACKET_cleanup(local_e8);
  }
  uVar2 = 0;
LAB_00101c34:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 script_41_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_00101fad:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_88,local_48,0x10,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xe52,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_88,*(undefined8 *)(param_1 + 0xf8));
      iVar1 = test_true("test/quic_multistream_test.c",0xe56,
                        "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(local_88,0xbdeb9451169c83aa,8);
        iVar1 = test_true("test/quic_multistream_test.c",0xe57,
                          "WPACKET_put_bytes_u64(&wpkt, path_challenge)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_get_total_written(local_88,&local_90);
          iVar1 = test_true("test/quic_multistream_test.c",0xe5a,
                            "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_size_t_eq("test/quic_multistream_test.c",0xe5b,"written",&_LC59,local_90,9)
            ;
            if (iVar1 != 0) {
              iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_48,local_90);
              if (iVar1 != 0) {
                *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
                WPACKET_finish(local_88);
                goto LAB_00101fad;
              }
            }
          }
        }
      }
      WPACKET_cleanup(local_88);
    }
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_42_inject_plain(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0xf0) == 0) {
LAB_0010215e:
    uVar2 = 1;
  }
  else {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    iVar1 = WPACKET_init_static_len(local_b8,local_78,0x40,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xec6,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(local_b8,6);
      iVar1 = test_true("test/quic_multistream_test.c",0xeca,
                        "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_CRYPTO)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_quic_write_vlint(local_b8,*(undefined8 *)(param_1 + 0xf8));
        iVar1 = test_true("test/quic_multistream_test.c",0xecb,
                          "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = WPACKET_quic_write_vlint(local_b8,1);
          iVar1 = test_true("test/quic_multistream_test.c",0xecc,
                            "WPACKET_quic_write_vlint(&wpkt, 1)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = WPACKET_put_bytes__(local_b8,0x42,1);
            iVar1 = test_true("test/quic_multistream_test.c",0xecd,
                              "WPACKET_put_bytes_u8(&wpkt, 0x42)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = WPACKET_get_total_written(local_b8,&local_c0);
              iVar1 = test_true("test/quic_multistream_test.c",0xed0,
                                "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_78,local_c0)
                ;
                if (iVar1 != 0) {
                  WPACKET_finish(local_b8);
                  goto LAB_0010215e;
                }
              }
            }
          }
        }
      }
      WPACKET_cleanup(local_b8);
    }
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool script_74_arm_packet_mutator(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
  do_mutation = 1;
  iVar1 = ossl_quic_channel_set_mutator(uVar2,script_74_alter_version,script_74_finish_mutation,0);
  return iVar1 != 0;
}



void script_74_finish_mutation(void)

{
  CRYPTO_free(hdr_to_free);
  return;
}



undefined8
script_74_alter_version
          (char *param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CRYPTO_memdup(param_1,0x58,"test/quic_multistream_test.c",0x13e7);
  iVar1 = do_mutation;
  *param_4 = lVar2;
  hdr_to_free = lVar2;
  *param_5 = param_2;
  *param_6 = param_3;
  if ((iVar1 != 0) && (do_mutation = 0, *param_1 == '\x01')) {
    *(undefined4 *)(lVar2 + 4) = 0xdeadbeef;
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0010253c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong script_68_inject_handshake(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined1 local_3d [5];
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(param_1 + 0xf0);
  local_3d._0_4_ = 0x1000018;
  local_3d[4] = 0;
  uStack_38 = __LC63;
  uStack_30 = _UNK_00122868;
  if (lVar5 == 1) {
    uVar7 = 0xc;
    uVar6 = 0x10;
    puVar8 = &uStack_38;
  }
  else {
    if (lVar5 != 2) {
      uVar3 = (ulong)(lVar5 == 0);
      goto LAB_00102459;
    }
    uVar7 = 1;
    uVar6 = 5;
    puVar8 = (undefined8 *)local_3d;
  }
  iVar1 = qtest_fault_resize_message(*(undefined8 *)(param_1 + 0xb8),uVar7);
  uVar3 = test_true("test/quic_multistream_test.c",0x12f4,
                    "qtest_fault_resize_message(h->qtf, datalen - SSL3_HM_HEADER_LENGTH)",iVar1 != 0
                   );
  if ((int)uVar3 != 0) {
    uVar2 = (uint)uVar6;
    if (uVar2 < 8) {
      if ((uVar6 & 4) == 0) {
        if (uVar2 != 0) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar8;
        }
      }
      else {
        *(undefined4 *)param_2 = *(undefined4 *)puVar8;
        *(undefined4 *)((long)param_2 + (uVar6 - 4)) = *(undefined4 *)((long)puVar8 + (uVar6 - 4));
      }
    }
    else {
      *param_2 = *puVar8;
      *(undefined8 *)((long)param_2 + (uVar6 - 8)) = *(undefined8 *)((long)puVar8 + (uVar6 - 8));
      lVar5 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
      uVar2 = uVar2 + (int)lVar5 & 0xfffffff8;
      if (7 < uVar2) {
        uVar6 = 0;
        do {
          uVar4 = (int)uVar6 + 8;
          *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar6) =
               *(undefined8 *)((long)puVar8 + (uVar6 - lVar5));
          uVar6 = (ulong)uVar4;
        } while (uVar4 < uVar2);
      }
    }
    uVar3 = 1;
  }
LAB_00102459:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 script_44_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) {
LAB_0010259d:
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_init_static_len(local_88,local_48,0x10,0);
    iVar1 = test_true("test/quic_multistream_test.c",0xf14,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_quic_wire_encode_padding(local_88,1);
      iVar1 = test_true("test/quic_multistream_test.c",0xf18,
                        "ossl_quic_wire_encode_padding(&wpkt, 1)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = WPACKET_get_total_written(local_88,&local_90);
        iVar1 = test_true("test/quic_multistream_test.c",0xf1b,
                          "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_48,local_90);
          if (iVar1 != 0) {
            WPACKET_finish(local_88);
            goto LAB_0010259d;
          }
        }
      }
      WPACKET_cleanup(local_88);
    }
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong script_41_check(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_uint64_t_gt("test/quic_multistream_test.c",0xe98,"h->scratch0",&_LC40,
                           *(undefined8 *)(param_1 + 0x100),0);
  if ((int)uVar2 != 0) {
    iVar1 = test_uint64_t_eq("test/quic_multistream_test.c",0xe9c,"h->scratch1",&_LC40,
                             *(undefined8 *)(param_1 + 0x108),0);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}



void script_41_trace(undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5,
                    undefined8 param_6,long param_7)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0x202 || param_5 == 0) || (param_2 != 1)) goto LAB_001027d0;
  if (-1 < param_5) {
    local_38 = param_4;
    local_30 = param_5;
  }
  iVar1 = test_true("test/quic_multistream_test.c",0xe78,"PACKET_buf_init(&pkt, buf, len)",
                    -1 < param_5);
  if (iVar1 != 0) {
    iVar1 = ossl_quic_wire_peek_frame_header(&local_38,&local_48,local_4c);
    iVar1 = test_true("test/quic_multistream_test.c",0xe7d,
                      "ossl_quic_wire_peek_frame_header(&pkt, &frame_type, &was_minimal)",iVar1 != 0
                     );
    if (iVar1 != 0) {
      if (local_48 != 0x1b) goto LAB_001027d0;
      iVar1 = ossl_quic_wire_decode_frame_path_response(&local_38,&local_40);
      iVar1 = test_true("test/quic_multistream_test.c",0xe86,
                        "ossl_quic_wire_decode_frame_path_response(&pkt, &frame_data)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_uint64_t_eq("test/quic_multistream_test.c",0xe87,"frame_data","path_challenge",
                                 local_40,0xbdeb9451169c83aa);
        if (iVar1 != 0) {
          *(long *)(param_7 + 0x100) = *(long *)(param_7 + 0x100) + 1;
          goto LAB_001027d0;
        }
      }
    }
  }
  *(long *)(param_7 + 0x108) = *(long *)(param_7 + 0x108) + 1;
LAB_001027d0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_21_inject_plain(long param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(ulong *)(param_1 + 0xf0) == 0) || (*(ulong *)(param_1 + 0xf0) != (ulong)*param_2)) {
LAB_001028a2:
    uVar3 = 1;
  }
  else {
    iVar2 = WPACKET_init_static_len(local_88,local_48,0x15,0);
    iVar2 = test_true("test/quic_multistream_test.c",0xb14,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = WPACKET_quic_write_vlint(local_88,*(undefined8 *)(param_1 + 0xf8));
      iVar2 = test_true("test/quic_multistream_test.c",0xb18,
                        "WPACKET_quic_write_vlint(&wpkt, h->inject_word1)",iVar2 != 0);
      if (iVar2 != 0) {
        uVar1 = *(ulong *)(param_1 + 0xf8);
        if (uVar1 < 0x18) {
          if (uVar1 < 8) {
            if (uVar1 == 7) {
              iVar2 = WPACKET_quic_write_vlint(local_88,1);
              iVar2 = test_true("test/quic_multistream_test.c",0xb4f,
                                "WPACKET_quic_write_vlint(&wpkt, (uint64_t)1)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = WPACKET_put_bytes__(local_88,0,1);
                iVar2 = test_true("test/quic_multistream_test.c",0xb53,
                                  "WPACKET_put_bytes_u8(&wpkt, (uint8_t)0)",iVar2 != 0);
                goto joined_r0x00102b74;
              }
            }
            else {
              if (uVar1 != 4) {
                if (uVar1 != 5) goto LAB_001029e0;
                goto LAB_00102983;
              }
LAB_00102ba7:
              iVar2 = WPACKET_quic_write_vlint(local_88,0);
              iVar2 = test_true("test/quic_multistream_test.c",0xb42,
                                "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = WPACKET_quic_write_vlint(local_88,0);
                iVar2 = test_true("test/quic_multistream_test.c",0xb44,
                                  "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = WPACKET_quic_write_vlint(local_88,0);
                  iVar2 = test_true("test/quic_multistream_test.c",0xb46,
                                    "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
                  goto joined_r0x00102b74;
                }
              }
            }
          }
          else {
            uVar4 = 1L << ((byte)uVar1 & 0x3f);
            if ((uVar4 & 0xdd0000) == 0) {
              if ((uVar4 & 0x220000) == 0) {
                if ((int)uVar1 != 8) goto LAB_001029e0;
                goto LAB_00102ba7;
              }
LAB_00102983:
              iVar2 = WPACKET_quic_write_vlint(local_88,0);
              iVar2 = test_true("test/quic_multistream_test.c",0xb37,
                                "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
              if (iVar2 == 0) goto LAB_00102a70;
              iVar2 = WPACKET_quic_write_vlint(local_88,0);
              iVar2 = test_true("test/quic_multistream_test.c",0xb39,
                                "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
            }
            else {
              iVar2 = WPACKET_quic_write_vlint(local_88,0);
              iVar2 = test_true("test/quic_multistream_test.c",0xb2e,
                                "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
            }
joined_r0x00102b74:
            if (iVar2 != 0) goto LAB_001029e0;
          }
        }
        else if (uVar1 < 0x1c) {
          if (uVar1 != 0x18) {
            iVar2 = WPACKET_put_bytes__(local_88,0,8);
            iVar2 = test_true("test/quic_multistream_test.c",0xb22,
                              "WPACKET_put_bytes_u64(&wpkt, (uint64_t)0)",iVar2 != 0);
            goto joined_r0x00102b74;
          }
          iVar2 = WPACKET_quic_write_vlint(local_88,0);
          iVar2 = test_true("test/quic_multistream_test.c",0xb5d,
                            "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
          if (iVar2 != 0) {
            iVar2 = WPACKET_quic_write_vlint(local_88,0);
            iVar2 = test_true("test/quic_multistream_test.c",0xb61,
                              "WPACKET_quic_write_vlint(&wpkt, (uint64_t)0)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = WPACKET_put_bytes__(local_88,1,1);
              iVar2 = test_true("test/quic_multistream_test.c",0xb65,
                                "WPACKET_put_bytes_u8(&wpkt, (uint8_t)1)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = WPACKET_put_bytes__(local_88,0,1);
                iVar2 = test_true("test/quic_multistream_test.c",0xb69,
                                  "WPACKET_put_bytes_u8(&wpkt, (uint8_t)0)",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = WPACKET_memset(local_88,0,0x10);
                  iVar2 = test_true("test/quic_multistream_test.c",0xb6d,
                                    "WPACKET_memset(&wpkt, 0, 16)",iVar2 != 0);
                  goto joined_r0x00102b74;
                }
              }
            }
          }
        }
        else {
          if (uVar1 == 0x1d) goto LAB_00102ba7;
LAB_001029e0:
          iVar2 = WPACKET_get_total_written(local_88,&local_90);
          iVar2 = test_true("test/quic_multistream_test.c",0xb73,
                            "WPACKET_get_total_written(&wpkt, &written)",iVar2 != 0);
          if ((iVar2 != 0) &&
             (iVar2 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_48,local_90),
             iVar2 != 0)) {
            WPACKET_finish(local_88);
            goto LAB_001028a2;
          }
        }
      }
LAB_00102a70:
      WPACKET_cleanup(local_88);
    }
    uVar3 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_20_trigger1(long param_1)

{
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x90));
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 1;
  ossl_crypto_condvar_broadcast(*(undefined8 *)(param_1 + 0x98));
  ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x90));
  return 1;
}



undefined8 script_20_wait1(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x18) + 0x28);
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x90));
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(ulong *)(param_1 + 0x100);
  while (uVar2 < uVar1) {
    ossl_crypto_condvar_wait(*(undefined8 *)(param_1 + 0x98));
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = *(ulong *)(param_1 + 0x100);
  }
  ossl_crypto_mutex_unlock(uVar3);
  return 1;
}



bool check_key_update_ge(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
  lVar3 = ossl_quic_channel_get_tx_key_epoch(uVar2);
  lVar4 = ossl_quic_channel_get_rx_key_epoch(uVar2);
  iVar1 = test_int64_t_ge("test/quic_multistream_test.c",0x1b3,&_LC78,&_LC40,lVar3 - lVar4,0);
  if (iVar1 != 0) {
    iVar1 = test_int64_t_le("test/quic_multistream_test.c",0x1b3,&_LC78,&_LC79,lVar3 - lVar4,1);
    if (iVar1 != 0) {
      iVar1 = test_uint64_t_ge("test/quic_multistream_test.c",0x1b7,"(uint64_t)rxke",
                               "hl->check_op->arg2",lVar4,
                               *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
      return iVar1 != 0;
    }
  }
  return false;
}



bool trigger_key_update(long param_1)

{
  int iVar1;
  
  iVar1 = SSL_key_update(*(undefined8 *)(param_1 + 0x70),1);
  iVar1 = test_true("test/quic_multistream_test.c",0x1a2,
                    "SSL_key_update(h->c_conn, SSL_KEY_UPDATE_REQUESTED)",iVar1 != 0);
  return iVar1 != 0;
}



bool check_key_update_lt(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
  uVar2 = ossl_quic_channel_get_tx_key_epoch(uVar2);
  iVar1 = test_uint64_t_lt("test/quic_multistream_test.c",0x1c3,&_LC82,"hl->check_op->arg2",uVar2,
                           *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
  return iVar1 != 0;
}



undefined8 override_key_update(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
  ossl_quic_channel_set_txku_threshold_override
            (uVar1,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
  return 1;
}



undefined8 server_helper_thread(long param_1)

{
  int iVar1;
  int iVar2;
  
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x120));
  iVar2 = *(int *)(param_1 + 0x130);
  iVar1 = *(int *)(param_1 + 0x134);
  while (iVar1 == 0) {
    while (iVar2 != 0) {
      ossl_quic_tserver_tick(*(undefined8 *)(param_1 + 0x40));
      ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x120));
      OSSL_sleep(1);
      ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x120));
      iVar2 = *(int *)(param_1 + 0x130);
      if (*(int *)(param_1 + 0x134) != 0) goto LAB_00102fd2;
    }
    ossl_crypto_condvar_wait(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x120));
    iVar2 = *(int *)(param_1 + 0x130);
    iVar1 = *(int *)(param_1 + 0x134);
  }
LAB_00102fd2:
  ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x120));
  return 1;
}



void stream_info_hash(undefined8 *param_1)

{
  OPENSSL_LH_strhash(*param_1);
  return;
}



int check_consistent_want(SSL *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = SSL_get_error(param_1,param_2);
  iVar2 = SSL_want(param_1);
  if ((uVar1 == 0) || (uVar1 == 6)) {
    bVar4 = true;
    if (iVar2 == 1) goto LAB_0010303d;
LAB_0010307b:
    bVar4 = iVar2 == 8 && uVar1 == 0xc;
  }
  else {
    if (((uVar1 & 0xfffffffb) == 1) && (bVar4 = true, iVar2 == 1)) goto LAB_0010303d;
    if ((uVar1 != 2) || (iVar2 != 3)) {
      if ((uVar1 == 3) && (bVar4 = true, iVar2 == 2)) goto LAB_0010303d;
      if ((uVar1 != 0xb) || (iVar2 != 7)) {
        if ((uVar1 == 4) && (bVar4 = true, iVar2 == 4)) goto LAB_0010303d;
        goto LAB_0010307b;
      }
    }
    bVar4 = true;
  }
LAB_0010303d:
  iVar3 = test_true("test/quic_multistream_test.c",0x3f3,
                    "(ec == SSL_ERROR_NONE && w == SSL_NOTHING) || (ec == SSL_ERROR_ZERO_RETURN && w == SSL_NOTHING) || (ec == SSL_ERROR_SSL && w == SSL_NOTHING) || (ec == SSL_ERROR_SYSCALL && w == SSL_NOTHING) || (ec == SSL_ERROR_WANT_READ && w == SSL_READING) || (ec == SSL_ERROR_WANT_WRITE && w == SSL_WRITING) || (ec == SSL_ERROR_WANT_CLIENT_HELLO_CB && w == SSL_CLIENT_HELLO_CB) || (ec == SSL_ERROR_WANT_X509_LOOKUP && w == SSL_X509_LOOKUP) || (ec == SSL_ERROR_WANT_RETRY_VERIFY && w == SSL_RETRY_VERIFY)"
                    ,bVar4);
  if (iVar3 == 0) {
    test_error("test/quic_multistream_test.c",0x400,"got error=%d, want=%d",uVar1,iVar2);
    return 0;
  }
  return iVar3;
}



void cleanup_stream(void *param_1)

{
  SSL_free(*(SSL **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



undefined4 join_threads(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    lVar2 = 0;
    uVar3 = 1;
    lVar1 = param_1 + 0x28;
    do {
      if (*(long *)(lVar1 + -8) != 0) {
        ossl_crypto_thread_native_join(*(long *)(lVar1 + -8),local_34);
        if (*(int *)(lVar1 + 8) == 0) {
          uVar3 = 0;
        }
        ossl_crypto_thread_native_clean(*(undefined8 *)(lVar1 + -8));
        *(undefined8 *)(lVar1 + -8) = 0;
      }
      lVar2 = lVar2 + 1;
      ossl_crypto_mutex_free(lVar1);
      lVar1 = lVar1 + 0x40;
    } while (param_2 != lVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 init_reason(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = _UNK_00122878;
  long_reason = __LC85;
  puVar3 = &long_reason;
  for (lVar2 = 0x100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0x7e7e7e7e7e7e7e7e;
    puVar3 = puVar3 + 1;
  }
  uRam00000000001087c8 = (undefined5)uVar1;
  DAT_00108fbf = 0;
  _DAT_001087cd = (undefined3)__LC86;
  uRam00000000001087d0 = (undefined5)((ulong)__LC86 >> 0x18);
  uRam00000000001087d5 = _UNK_00122888;
  return 1;
}



ulong script_53_inject_plain(long param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *ptr;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 1;
  if ((*(long *)(param_1 + 0xf0) == 0) || (*param_2 != '\x05')) goto LAB_00103274;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar4 = (-(ulong)(*(long *)(param_1 + 0xf8) == 0) & 0xffffffffffffff9d) + 0x75;
  lVar6 = (-(ulong)(*(long *)(param_1 + 0xf8) == 0) & 0xffffffffffffff9d) + 100;
  lVar5 = *(long *)(param_1 + 0xf8);
  ptr = CRYPTO_malloc((int)lVar4,"test/quic_multistream_test.c",0x10b5);
  uVar3 = test_ptr("test/quic_multistream_test.c",0x10b5,"frame_buf = OPENSSL_malloc(frame_len)",ptr
                  );
  if ((int)uVar3 == 0) goto LAB_00103274;
  iVar1 = WPACKET_init_static_len(local_78,ptr,lVar4,0);
  iVar1 = test_true("test/quic_multistream_test.c",0x10b8,
                    "WPACKET_init_static_len(&wpkt, frame_buf, frame_len, 0)",iVar1 != 0);
  if (iVar1 == 0) {
LAB_00103387:
    WPACKET_cleanup(local_78);
    uVar2 = 0;
  }
  else {
    iVar1 = WPACKET_quic_write_vlint(local_78,6);
    iVar1 = test_true("test/quic_multistream_test.c",0x10bb,
                      "WPACKET_quic_write_vlint(&wpkt, OSSL_QUIC_FRAME_TYPE_CRYPTO)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00103387;
    iVar1 = WPACKET_quic_write_vlint(local_78,-(uint)(lVar5 == 0) & 100000);
    iVar1 = test_true("test/quic_multistream_test.c",0x10bc,
                      "WPACKET_quic_write_vlint(&wpkt, offset)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00103387;
    iVar1 = WPACKET_quic_write_vlint(local_78,lVar6);
    iVar1 = test_true("test/quic_multistream_test.c",0x10bd,
                      "WPACKET_quic_write_vlint(&wpkt, data_len)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00103387;
    lVar5 = 0;
    do {
      iVar1 = WPACKET_put_bytes__(local_78,0x42,1);
      iVar1 = test_true("test/quic_multistream_test.c",0x10c1,"WPACKET_put_bytes_u8(&wpkt, 0x42)",
                        iVar1 != 0);
      if (iVar1 == 0) goto LAB_00103387;
      lVar5 = lVar5 + 1;
    } while (lVar6 != lVar5);
    iVar1 = WPACKET_get_total_written(local_78,&local_80);
    iVar1 = test_true("test/quic_multistream_test.c",0x10c4,
                      "WPACKET_get_total_written(&wpkt, &written)",iVar1 != 0);
    if ((iVar1 == 0) ||
       (iVar1 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),ptr,local_80), iVar1 == 0)
       ) goto LAB_00103387;
    WPACKET_finish(local_78);
    uVar2 = 1;
  }
  CRYPTO_free(ptr);
  uVar3 = (ulong)uVar2;
LAB_00103274:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



long get_time(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0xa8));
  iVar1 = test_true("test/quic_multistream_test.c",0x159,"CRYPTO_THREAD_read_lock(h->time_lock)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = ossl_time_now();
    lVar3 = uVar2 + *(ulong *)(param_1 + 0xb0);
    if (CARRY8(uVar2,*(ulong *)(param_1 + 0xb0))) {
      lVar3 = -1;
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xa8));
    return lVar3;
  }
  return 0;
}



undefined8 skip_time_ms(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xa8));
  uVar2 = test_true("test/quic_multistream_test.c",0x164,"CRYPTO_THREAD_write_lock(h->time_lock)",
                    iVar1 != 0);
  if ((int)uVar2 != 0) {
    uVar3 = *(long *)(*(long *)(param_2 + 0x18) + 0x28) * 1000000;
    lVar4 = uVar3 + *(ulong *)(param_1 + 0xb0);
    if (CARRY8(uVar3,*(ulong *)(param_1 + 0xb0))) {
      lVar4 = -1;
    }
    *(long *)(param_1 + 0xb0) = lVar4;
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xa8));
    uVar2 = 1;
  }
  return uVar2;
}



int server_gen_version_neg(long param_1,undefined8 *param_2)

{
  int iVar1;
  BUF_MEM *a;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  size_t local_e0;
  undefined1 local_d8 [64];
  undefined2 local_98 [14];
  undefined1 local_7b;
  undefined8 local_7a;
  long local_40;
  
  bVar5 = 0;
  iVar1 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0xf0) == 0) goto LAB_0010363d;
  uVar3 = 1;
  if (*(long *)(param_1 + 0xf0) != 1) {
    uVar3 = 0x5432abcd;
  }
  a = BUF_MEM_new();
  iVar1 = test_ptr("test/quic_multistream_test.c",0x13b9,"buf = BUF_MEM_new()",a);
  if (iVar1 == 0) {
LAB_00103633:
    iVar1 = 0;
  }
  else {
    iVar1 = WPACKET_init(local_d8,a);
    iVar1 = test_true("test/quic_multistream_test.c",0x13bc,"WPACKET_init(&wpkt, buf)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00103633;
    puVar4 = (undefined8 *)local_98;
    for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    local_98[0] = 0x8006;
    local_7b = 8;
    local_7a = 0x5555555555555555;
    iVar1 = ossl_quic_wire_encode_pkt_hdr(local_d8,0,local_98);
    iVar1 = test_true("test/quic_multistream_test.c",0x139d,
                      "ossl_quic_wire_encode_pkt_hdr(wpkt, 0, &hdr, NULL)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(local_d8,uVar3,4);
      test_true("test/quic_multistream_test.c",0x13a0,"WPACKET_put_bytes_u32(wpkt, version)",
                iVar1 != 0);
    }
    iVar1 = WPACKET_get_total_written(local_d8,&local_e0);
    iVar1 = test_true("test/quic_multistream_test.c",0x13c3,"WPACKET_get_total_written(&wpkt, &l)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = qtest_fault_resize_datagram(*(undefined8 *)(param_1 + 0xb8),local_e0);
      iVar1 = test_true("test/quic_multistream_test.c",0x13c6,
                        "qtest_fault_resize_datagram(h->qtf, l)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_0010363d;
      iVar1 = 1;
      memcpy((void *)*param_2,a->data,local_e0);
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    WPACKET_finish(local_d8);
  }
  BUF_MEM_free(a);
LAB_0010363d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_20_trigger2(long param_1)

{
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x90));
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  ossl_crypto_condvar_broadcast(*(undefined8 *)(param_1 + 0x98));
  ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x90));
  return 1;
}



undefined8 script_20_wait2(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x18) + 0x28);
  ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x90));
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(ulong *)(param_1 + 0x108);
  while (uVar2 < uVar1) {
    ossl_crypto_condvar_wait(*(undefined8 *)(param_1 + 0x98));
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = *(ulong *)(param_1 + 0x108);
  }
  ossl_crypto_mutex_unlock(uVar3);
  return 1;
}



void helper_cleanup(int *param_1)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  join_threads(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x22));
  if (*(long *)(param_1 + 0x46) != 0) {
    ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x48));
    param_1[0x4d] = 1;
    ossl_crypto_condvar_signal(*(undefined8 *)(param_1 + 0x4a));
    ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x48));
    ossl_crypto_thread_native_join(*(undefined8 *)(param_1 + 0x46),local_14);
    ossl_crypto_thread_native_clean(*(undefined8 *)(param_1 + 0x46));
    param_1[0x46] = 0;
    param_1[0x47] = 0;
  }
  CRYPTO_free(*(void **)(param_1 + 0x20));
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (param_1[0x33] == 0) {
    if (*(long *)(param_1 + 0x1e) != 0) {
      OPENSSL_LH_doall(*(long *)(param_1 + 0x1e),cleanup_stream);
      OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x1e));
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
    }
    SSL_free(*(SSL **)(param_1 + 0x1c));
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  else {
    SSL_free(*(SSL **)(param_1 + 0x1c));
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if (*(long *)(param_1 + 0x1e) != 0) {
      OPENSSL_LH_doall(*(long *)(param_1 + 0x1e),cleanup_stream);
      OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x1e));
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
    }
  }
  if (*(long *)(param_1 + 0x12) != 0) {
    OPENSSL_LH_doall(*(long *)(param_1 + 0x12),cleanup_stream);
    OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x12));
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  ossl_quic_tserver_free(*(undefined8 *)(param_1 + 0x10));
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  BIO_free(*(BIO **)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  BIO_free(*(BIO **)(param_1 + 0x18));
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  BIO_free(*(BIO **)(param_1 + 8));
  param_1[8] = 0;
  param_1[9] = 0;
  qtest_fault_free(*(undefined8 *)(param_1 + 0x2e));
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (-1 < *param_1) {
    BIO_closesocket();
    *param_1 = -1;
  }
  if (-1 < param_1[0x14]) {
    BIO_closesocket();
    param_1[0x14] = -1;
  }
  BIO_ADDR_free(*(undefined8 *)(param_1 + 0xc));
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  BIO_ADDR_free(*(undefined8 *)(param_1 + 10));
  param_1[10] = 0;
  param_1[0xb] = 0;
  SSL_CTX_free(*(SSL_CTX **)(param_1 + 0x1a));
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x2a));
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  ossl_crypto_mutex_free(param_1 + 0x24);
  ossl_crypto_condvar_free(param_1 + 0x26);
  ossl_crypto_mutex_free(param_1 + 0x48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    ossl_crypto_condvar_free(param_1 + 0x4a);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 set_event_handling_mode_stream(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = get_stream_info(*(undefined8 *)(param_2 + 8),&_LC99);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
  }
  iVar1 = test_ptr("test/quic_multistream_test.c",0x16a3,&_LC100,lVar2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = SSL_set_value_uint(lVar2,0,6,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
  return uVar3;
}



bool check_write_buf_stat(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_stream_info(*(undefined8 *)(param_2 + 8),&_LC99);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
  }
  iVar1 = test_ptr("test/quic_multistream_test.c",0x15b5,
                   "c_a = helper_local_get_c_stream(hl, \"a\")",lVar2);
  if (iVar1 != 0) {
    iVar1 = SSL_get_value_uint(lVar2,0,7,&local_48);
    iVar1 = test_true("test/quic_multistream_test.c",0x15b8,
                      "SSL_get_stream_write_buf_size(c_a, &size)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_get_value_uint(lVar2,0,8,&local_40);
      iVar1 = test_true("test/quic_multistream_test.c",0x15b9,
                        "SSL_get_stream_write_buf_used(c_a, &used)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_get_value_uint(lVar2,0,9,&local_38);
        iVar1 = test_true("test/quic_multistream_test.c",0x15ba,
                          "SSL_get_stream_write_buf_avail(c_a, &avail)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_uint64_t_ge("test/quic_multistream_test.c",0x15bb,&_LC106,"avail",local_48,
                                   local_38);
          if (iVar1 != 0) {
            iVar1 = test_uint64_t_ge("test/quic_multistream_test.c",0x15bc,&_LC106,&_LC107,local_48,
                                     local_40);
            if (iVar1 != 0) {
              iVar1 = test_uint64_t_eq("test/quic_multistream_test.c",0x15bd,"avail + used",&_LC106,
                                       local_40 + local_38,local_48);
              if (iVar1 != 0) {
                iVar1 = test_uint64_t_eq("test/quic_multistream_test.c",0x15c0,&_LC107,
                                         "hl->check_op->arg1",local_40,
                                         *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10));
                bVar3 = iVar1 != 0;
                goto LAB_00103be1;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00103be1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint script_85_poll(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long local_138;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  long local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 local_c8;
  long local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = 0;
  plVar8 = local_e8;
  for (lVar7 = 0x14; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar8 = 0;
    plVar8 = plVar8 + 1;
  }
  lVar7 = get_stream_info(*(undefined8 *)(param_2 + 8),&_LC99);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 8);
  }
  iVar2 = test_ptr("test/quic_multistream_test.c",0x1610,
                   "c_a = helper_local_get_c_stream(hl, \"a\")",lVar7);
  if (iVar2 != 0) {
    lVar5 = get_stream_info(*(undefined8 *)(param_2 + 8),&_LC110);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 8);
    }
    iVar2 = test_ptr("test/quic_multistream_test.c",0x1611,
                     "c_b = helper_local_get_c_stream(hl, \"b\")",lVar5);
    if (iVar2 != 0) {
      local_138 = get_stream_info(*(undefined8 *)(param_2 + 8),&_LC112);
      if (local_138 != 0) {
        local_138 = *(long *)(local_138 + 8);
      }
      iVar2 = test_ptr("test/quic_multistream_test.c",0x1612,
                       "c_c = helper_local_get_c_stream(hl, \"c\")",local_138);
      if (iVar2 != 0) {
        lVar6 = get_stream_info(*(undefined8 *)(param_2 + 8),&_LC114);
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 8);
        }
        iVar2 = test_ptr("test/quic_multistream_test.c",0x1613,
                         "c_d = helper_local_get_c_stream(hl, \"d\")");
        if (iVar2 != 0) {
          local_a0 = local_138;
          local_60 = *(undefined8 *)(param_1 + 0x70);
          local_e8[0]._0_4_ = 2;
          local_c8 = 2;
          local_a8 = 2;
          local_88 = 2;
          local_68 = 2;
          local_120 = 0xffffffffffffffff;
          local_d8 = 0xffffffff;
          uStack_d4 = 0xffffffff;
          uStack_d0._0_4_ = 0xffffffff;
          uStack_d0._4_4_ = 0xffffffff;
          local_b8 = 0xffffffff;
          uStack_b4 = 0xffffffff;
          uStack_b0 = 0xffffffff;
          uStack_ac = 0xffffffff;
          local_98 = 0xffffffff;
          uStack_94 = 0xffffffff;
          uStack_90 = 0xffffffff;
          uStack_8c = 0xffffffff;
          local_78 = 0xffffffff;
          uStack_74 = 0xffffffff;
          uStack_70 = 0xffffffff;
          uStack_6c = 0xffffffff;
          local_58 = 0xffffffff;
          uStack_54 = 0xffffffff;
          uStack_50 = 0xffffffff;
          uStack_4c = 0xffffffff;
          local_e8[1] = lVar7;
          local_c0 = lVar5;
          local_80 = lVar6;
          uVar3 = SSL_poll(local_e8,5,0x20,timeout_0,0,&local_120);
          uVar1 = *(ulong *)(*(long *)(param_2 + 0x18) + 0x28);
          if (uVar1 == 0) {
            local_118._0_8_ = 0x80;
            local_118._8_8_ = 0x80;
            local_108._0_8_ = 0x80;
            local_f8 = 0x1800;
          }
          else {
            if (uVar1 != 1) goto LAB_00103df3;
            local_118._0_8_ = 0xc0;
            local_118._8_8_ = 0x90;
            local_108._0_8_ = 0x20;
            local_f8 = 0x1a00;
          }
          local_108._8_8_ = 0x80;
          uVar4 = test_int_eq("test/quic_multistream_test.c",0x164c,&_LC117,"expected_ret",uVar3,1);
          if (uVar4 != 0) {
            iVar2 = test_size_t_eq("test/quic_multistream_test.c",0x164d,"result_count",
                                   "expected_result_count",local_120,5);
            uVar4 = (uint)(iVar2 != 0);
          }
          lVar7 = 0;
          do {
            iVar2 = test_uint64_t_eq("test/quic_multistream_test.c",0x1651,"items[i].revents",
                                     "expected_revents[i]",(&uStack_d0)[lVar7 * 4],
                                     *(undefined8 *)(local_118 + lVar7 * 8));
            if (iVar2 == 0) {
              uVar4 = 0;
              test_error("test/quic_multistream_test.c",0x1652,
                         "mismatch at index %zu in poll results, mode %d",lVar7,uVar1 & 0xffffffff);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 5);
          goto LAB_00103df5;
        }
      }
    }
  }
LAB_00103df3:
  uVar4 = 0;
LAB_00103df5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 script_41_setup(long param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) < 0)) {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar2 = (int *)(param_1 + 0x138);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar2 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((lVar1 == 0) || (*piVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *piVar2 = 1;
  }
  ossl_quic_tserver_set_msg_callback(uVar3,script_41_trace,param_1);
  return 1;
}



undefined8 check_stream_stopped(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x138);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28);
  if (-1 < *(int *)(param_2 + 0x10)) {
    piVar4 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((*(long *)(param_1 + 0x120) == 0) || (*piVar4 != 0)) {
    uVar3 = ossl_quic_tserver_stream_has_peer_stop_sending(*(undefined8 *)(param_1 + 0x38),uVar3,0);
    iVar2 = (int)uVar3;
  }
  else {
    ossl_crypto_mutex_lock();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *piVar4 = 1;
    uVar3 = ossl_quic_tserver_stream_has_peer_stop_sending(uVar1,uVar3,0);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 200) = 1;
  return uVar3;
}



undefined8 wait_incoming_acks_increased(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) < 0)) {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar4 = (int *)(param_1 + 0x138);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar4 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((lVar1 == 0) || (*piVar4 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *piVar4 = 1;
  }
  uVar3 = ossl_quic_tserver_get_channel(uVar3);
  uVar2 = ossl_quic_channel_get_diag_num_rx_ack(uVar3);
  if ((ulong)uVar2 == *(ulong *)(param_1 + 0x100)) {
    *(undefined4 *)(param_1 + 200) = 1;
    return 0;
  }
  return 1;
}



bool trigger_late_session_ticket(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  new_session_count = 0;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) < 0)) {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar3 = (int *)(param_1 + 0x138);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar3 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((lVar1 == 0) || (*piVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *piVar3 = 1;
  }
  iVar2 = ossl_quic_tserver_new_ticket(uVar4);
  iVar2 = test_true("test/quic_multistream_test.c",0x1473,
                    "ossl_quic_tserver_new_ticket(ACQUIRE_S())",iVar2 != 0);
  return iVar2 != 0;
}



bool set_max_early_data(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = (int *)(param_1 + 0x138);
  uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x28);
  if (-1 < *(int *)(param_2 + 0x10)) {
    piVar3 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((*(long *)(param_1 + 0x120) == 0) || (*piVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *piVar3 = 1;
  }
  iVar2 = ossl_quic_tserver_set_max_early_data(uVar4,uVar1);
  iVar2 = test_true("test/quic_multistream_test.c",0x132b,
                    "ossl_quic_tserver_set_max_early_data(ACQUIRE_S(), (uint32_t)hl->check_op->arg2)"
                    ,iVar2 != 0);
  return iVar2 != 0;
}



void check_stream_reset(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  piVar4 = (int *)(param_1 + 0x138);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28);
  if (-1 < *(int *)(param_2 + 0x10)) {
    piVar4 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((*(long *)(param_1 + 0x120) == 0) || (*piVar4 != 0)) {
    iVar3 = ossl_quic_tserver_stream_has_peer_reset_stream
                      (*(undefined8 *)(param_1 + 0x38),uVar1,&local_28);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *piVar4 = 1;
    iVar3 = ossl_quic_tserver_stream_has_peer_reset_stream(uVar2,uVar1,&local_28);
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 200) = 1;
  }
  else {
    test_uint64_t_eq("test/quic_multistream_test.c",0x189,&_LC126,&_LC125,local_28,0x2a);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool script_80_inject_pkt(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_120;
  undefined1 local_118 [64];
  undefined8 local_d8;
  undefined5 uStack_d0;
  undefined3 uStack_cb;
  undefined5 uStack_c8;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 uStack_93;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  uchar local_78 [48];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0xf8) == 1) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    fwrite("Sending stateless reset\n",1,0x18,_stderr);
    RAND_bytes(local_78,0x40);
    local_78[0] = '@';
    local_48 = __LC132;
    uStack_40 = _UNK_001228a8;
    uVar1 = SSL_inject_net_dgram
                      (*(undefined8 *)(param_1 + 0x70),local_78,0x40,0,
                       *(undefined8 *)(param_1 + 0x30));
    iVar2 = test_int_eq("test/quic_multistream_test.c",0x14cd,
                        "SSL_inject_net_dgram(h->c_conn, databuf, sizeof(databuf), NULL, h->s_net_bio_addr)"
                        ,&_LC79,uVar1,1);
    bVar4 = iVar2 != 0;
    goto LAB_00104546;
  }
  bVar4 = true;
  if (*(long *)(param_1 + 0xf0) != 1) goto LAB_00104546;
  local_88 = 0;
  uStack_83 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_b8 = (undefined1  [16])0x0;
  uStack_cb = 0;
  uStack_c8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9b = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  uStack_8b = 0;
  if ((*(long *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x138) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x138) = 1;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  uVar3 = ossl_quic_tserver_get_channel(uVar3);
  if (*(long *)(param_1 + 0xf0) == 0) {
LAB_00104677:
    bVar4 = true;
  }
  else {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    fwrite("sending new conn id\n",1,0x14,_stderr);
    iVar2 = WPACKET_init_static_len(local_118,local_78,0x40,0);
    iVar2 = test_true("test/quic_multistream_test.c",0x14e5,
                      "WPACKET_init_static_len(&wpkt, frame_buf, sizeof(frame_buf), 0)",iVar2 != 0);
    if (iVar2 == 0) {
      bVar4 = false;
      goto LAB_00104546;
    }
    ossl_quic_channel_get_diag_local_cid(uVar3,&local_d8);
    local_b8._8_8_ = _UNK_00122898;
    local_b8._0_8_ = __LC130;
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    uStack_93 = __LC132;
    uStack_8b = (undefined3)_UNK_001228a8;
    local_88 = (undefined5)((ulong)_UNK_001228a8 >> 0x18);
    uStack_9b = uStack_cb;
    uStack_98 = uStack_c8;
    iVar2 = ossl_quic_wire_encode_frame_new_conn_id(local_118,local_b8);
    iVar2 = test_true("test/quic_multistream_test.c",0x14f1,
                      "ossl_quic_wire_encode_frame_new_conn_id(&wpkt, &ncid)",iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = WPACKET_get_total_written(local_118,&local_120);
      iVar2 = test_true("test/quic_multistream_test.c",0x14f4,"WPACKET_get_total_written(&wpkt, &l)"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = qtest_fault_prepend_frame(*(undefined8 *)(param_1 + 0xb8),local_78,local_120);
        if (iVar2 != 0) {
          WPACKET_finish(local_118);
          goto LAB_00104677;
        }
      }
    }
    WPACKET_cleanup(local_118);
    bVar4 = false;
  }
LAB_00104546:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool check_shutdown_reason(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) < 0)) {
    lVar2 = *(long *)(param_1 + 0x120);
    piVar3 = (int *)(param_1 + 0x138);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x120);
    piVar3 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((lVar2 == 0) || (*piVar3 != 0)) {
    lVar2 = ossl_quic_tserver_get_terminate_cause(*(undefined8 *)(param_1 + 0x38));
  }
  else {
    ossl_crypto_mutex_lock();
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    *piVar3 = 1;
    lVar2 = ossl_quic_tserver_get_terminate_cause();
  }
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 200) = 1;
  }
  else {
    iVar1 = test_size_t_ge("test/quic_multistream_test.c",0x11a9,"tc->reason_len",&_LC33,
                           *(undefined8 *)(lVar2 + 0x18),0x32);
    if (iVar1 != 0) {
      iVar1 = test_mem_eq("test/quic_multistream_test.c",0x11aa,"long_reason","tc->reason",
                          &long_reason,*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x10),
                          *(undefined8 *)(lVar2 + 0x18));
      return iVar1 != 0;
    }
  }
  return false;
}



bool force_ping(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) < 0)) {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar5 = (int *)(param_1 + 0x138);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar5 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((lVar1 == 0) || (*piVar5 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *piVar5 = 1;
  }
  uVar4 = ossl_quic_tserver_get_channel(uVar4);
  uVar2 = ossl_quic_channel_get_diag_num_rx_ack(uVar4);
  *(ulong *)(param_1 + 0x100) = (ulong)uVar2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) < 0)) {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar5 = (int *)(param_1 + 0x138);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x120);
    piVar5 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((lVar1 == 0) || (*piVar5 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *piVar5 = 1;
  }
  iVar3 = ossl_quic_tserver_ping(uVar4);
  iVar3 = test_true("test/quic_multistream_test.c",0xf42,"ossl_quic_tserver_ping(ACQUIRE_S())",
                    iVar3 != 0);
  return iVar3 != 0;
}



undefined8 check_rejected(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = (int *)(param_1 + 0x138);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28);
  if (-1 < *(int *)(param_2 + 0x10)) {
    piVar3 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((*(long *)(param_1 + 0x120) == 0) || (*piVar3 != 0)) {
    iVar2 = ossl_quic_tserver_stream_has_peer_stop_sending(*(undefined8 *)(param_1 + 0x38),uVar1,0);
  }
  else {
    ossl_crypto_mutex_lock();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *piVar3 = 1;
    iVar2 = ossl_quic_tserver_stream_has_peer_stop_sending(uVar4,uVar1,0);
  }
  if (iVar2 != 0) {
    piVar3 = (int *)(param_1 + 0x138);
    if (-1 < *(int *)(param_2 + 0x10)) {
      piVar3 = (int *)((long)*(int *)(param_2 + 0x10) * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar3 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      *piVar3 = 1;
    }
    iVar2 = ossl_quic_tserver_stream_has_peer_reset_stream(uVar4,uVar1,0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 200) = 1;
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int run_script_worker(long param_1,long param_2,long param_3,int param_4)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  ulong uVar22;
  SSL *pSVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  size_t __n;
  char *pcVar28;
  undefined8 uVar29;
  undefined8 extraout_RDX;
  undefined *puVar30;
  char *pcVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  long *plVar38;
  long in_FS_OFFSET;
  bool bVar39;
  ulong local_1b8;
  ulong local_1a0;
  undefined1 *local_198;
  long local_188;
  int local_17c;
  long local_168;
  long local_160;
  int local_158;
  uint *local_150;
  int local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  ulong local_118;
  long local_108 [8];
  long local_c8 [8];
  long local_88 [8];
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 0;
  local_148 = 0;
  local_168 = param_1;
  local_158 = param_4;
  uVar18 = test_ptr("test/quic_multistream_test.c",0x35c,&_LC143,param_1);
  if (uVar18 != 0) {
    if (param_4 < 0) {
      local_160 = *(long *)(param_1 + 0x78);
      uVar18 = 1;
    }
    else {
      uVar37 = OPENSSL_LH_new(stream_info_hash,stream_info_cmp,extraout_RDX,uVar18);
      local_160 = OPENSSL_LH_set_thunks
                            (uVar37,0x100000,lh_STREAM_INFO_cfn_thunk,lh_STREAM_INFO_doall_thunk,
                             lh_STREAM_INFO_doall_arg_thunk);
      iVar19 = test_ptr("test/quic_multistream_test.c",0x362,
                        "hl->c_streams = lh_STREAM_INFO_new(stream_info_hash, stream_info_cmp)",
                        local_160);
      uVar18 = (uint)(iVar19 != 0);
    }
  }
  iVar19 = test_true("test/quic_multistream_test.c",0x41a,"helper_local_init(hl, h, thread_idx)",
                     uVar18);
  if (iVar19 == 0) {
    local_188 = 0;
    lVar35 = 0;
    local_198 = (undefined1 *)0x0;
    iVar19 = 0;
    goto LAB_00104fbd;
  }
  local_1b8 = 0;
  lVar35 = 0;
  local_188 = 0;
  bVar4 = true;
  local_1a0 = 0;
  local_17c = 0;
  local_198 = (undefined1 *)0x0;
  iVar19 = 0;
LAB_00104c75:
  pSVar23 = *(SSL **)(param_1 + 0x70);
  if (local_158 < 0) {
    piVar21 = (int *)(param_1 + 0x138);
  }
  else {
    piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((*(long *)(param_1 + 0x120) != 0) && (*piVar21 != 0)) {
    *piVar21 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    ossl_crypto_mutex_unlock();
  }
  if (iVar19 == 0) {
    lVar35 = lVar35 + (ulong)!bVar4;
    uVar22 = ossl_time_now();
    local_1b8 = uVar22 + 60000000000;
    local_1a0 = (ulong)(0xfffffff207b8a7ff < uVar22);
    if (0xfffffff207b8a7ff >= uVar22) {
      bVar4 = false;
      goto LAB_00104dd4;
    }
    uVar22 = ossl_time_now();
    bVar4 = false;
    local_1b8 = 0xffffffffffffffff;
    local_1a0 = 0;
LAB_00104d0f:
    iVar19 = -(uint)(uVar22 < local_1b8);
  }
  else {
LAB_00104dd4:
    uVar22 = ossl_time_now();
    iVar19 = 1;
    if (uVar22 <= local_1b8) goto LAB_00104d0f;
  }
  iVar19 = test_int_le("test/quic_multistream_test.c",0x443,
                       "ossl_time_compare(ossl_time_now(), op_deadline)",&_LC40,iVar19,0);
  if (iVar19 == 0) {
    test_error("test/quic_multistream_test.c",0x444,"op %zu timed out on thread %d",lVar35 + 1,
               param_4);
    goto LAB_00105420;
  }
  puVar1 = (uint *)(param_2 + lVar35 * 0x48);
  pcVar31 = *(char **)(puVar1 + 8);
  if (pcVar31 == (char *)0x0) {
joined_r0x00104df8:
    if (-1 < param_4) goto LAB_00104d83;
LAB_00104dfa:
    iVar19 = *(int *)(param_1 + 0xc4);
    uVar37 = 0xffffffffffffffff;
joined_r0x00104e0b:
    if (iVar19 == 0) {
      ossl_quic_tserver_tick(*(undefined8 *)(param_1 + 0x38));
    }
    else if (*(int *)(param_1 + 0x130) == 0) {
      ossl_crypto_mutex_lock(*(undefined8 *)(param_1 + 0x120));
      *(undefined4 *)(param_1 + 0x130) = 1;
      ossl_crypto_condvar_signal(*(undefined8 *)(param_1 + 0x128));
      ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0x120));
    }
    if ((local_148 == 0) && (local_17c != 0)) {
      SSL_handle_events(*(undefined8 *)(param_1 + 0x70));
    }
    switch(*puVar1) {
    case 0:
      goto switchD_00104dc2_caseD_0;
    case 1:
      local_150 = puVar1;
      iVar19 = (**(code **)(puVar1 + 6))(param_1,&local_168);
      local_150 = (uint *)0x0;
      if (*(int *)(param_1 + 200) == 0) goto LAB_001071f0;
      *(undefined4 *)(param_1 + 200) = 0;
joined_r0x001076c2:
      if (local_158 < 0) {
        piVar21 = (int *)(param_1 + 0x138);
      }
      else {
        piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
        uVar37 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar37 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar37;
        *piVar21 = 1;
      }
      ossl_quic_tserver_tick(uVar37);
      iVar19 = 1;
      break;
    case 2:
      goto switchD_00104dc2_caseD_2;
    case 3:
      goto switchD_00104dc2_caseD_3;
    case 4:
      goto switchD_00104dc2_caseD_4;
    case 5:
      goto switchD_00104e4e_caseD_5;
    case 6:
      goto switchD_00104dc2_caseD_6;
    case 7:
      goto switchD_00104e4e_caseD_7;
    case 8:
      goto switchD_00104dc2_caseD_8;
    case 9:
      goto switchD_00104e4e_caseD_9;
    case 10:
      goto switchD_00104dc2_caseD_a;
    case 0xb:
      goto switchD_00104e4e_caseD_b;
    case 0xc:
      goto switchD_00104dc2_caseD_c;
    case 0xd:
      goto switchD_00104dc2_caseD_d;
    case 0xe:
      goto switchD_00104dc2_caseD_e;
    case 0xf:
      goto switchD_00104e4e_caseD_f;
    case 0x10:
      goto switchD_00104dc2_caseD_10;
    case 0x11:
      goto switchD_00104dc2_caseD_11;
    case 0x12:
      goto switchD_00104dc2_caseD_12;
    case 0x13:
      goto switchD_00104dc2_caseD_13;
    case 0x14:
      goto switchD_00104dc2_caseD_14;
    case 0x15:
      goto switchD_00104dc2_caseD_15;
    case 0x16:
      goto switchD_00104dc2_caseD_16;
    case 0x17:
      goto switchD_00104dc2_caseD_17;
    case 0x18:
      goto switchD_00104e4e_caseD_18;
    case 0x19:
      goto switchD_00104dc2_caseD_19;
    case 0x1a:
      goto switchD_00104dc2_caseD_1a;
    case 0x1b:
      goto switchD_00104e4e_caseD_1b;
    case 0x1c:
      goto switchD_00104dc2_caseD_1c;
    case 0x1d:
    case 0x36:
      goto switchD_00104dc2_caseD_1d;
    case 0x1e:
      goto switchD_00104e4e_caseD_1e;
    case 0x1f:
      goto switchD_00104dc2_caseD_1f;
    case 0x20:
      goto switchD_00104dc2_caseD_20;
    case 0x21:
      goto switchD_00104dc2_caseD_21;
    case 0x22:
      goto switchD_00104e4e_caseD_22;
    case 0x23:
      goto switchD_00104dc2_caseD_23;
    case 0x24:
      goto switchD_00104dc2_caseD_24;
    case 0x25:
      goto switchD_00104dc2_caseD_25;
    case 0x26:
      goto switchD_00104dc2_caseD_26;
    case 0x27:
      goto switchD_00104dc2_caseD_27;
    case 0x28:
      goto switchD_00104dc2_caseD_28;
    case 0x29:
      goto switchD_00104e4e_caseD_29;
    case 0x2a:
      goto switchD_00104dc2_caseD_2a;
    case 0x2b:
      goto switchD_00104dc2_caseD_2b;
    case 0x2c:
      goto switchD_00104dc2_caseD_2c;
    case 0x2d:
      goto switchD_00104dc2_caseD_2d;
    case 0x2e:
      goto switchD_00104dc2_caseD_2e;
    case 0x2f:
      goto switchD_00104dc2_caseD_2f;
    case 0x30:
      goto switchD_00104dc2_caseD_30;
    case 0x31:
      goto switchD_00104dc2_caseD_31;
    case 0x32:
      goto switchD_00104dc2_caseD_32;
    case 0x33:
      goto switchD_00104dc2_caseD_33;
    case 0x34:
      goto switchD_00104dc2_caseD_34;
    case 0x35:
      goto switchD_00104e4e_caseD_35;
    default:
      test_error("test/quic_multistream_test.c",0x7da,"unknown op");
      goto LAB_00105420;
    }
    goto LAB_00104c75;
  }
  iVar19 = strcmp(pcVar31,"DEFAULT");
  if (iVar19 == 0) {
    pSVar23 = *(SSL **)(local_168 + 0x70);
    goto joined_r0x00104df8;
  }
  pSVar23 = (SSL *)get_stream_info(local_160,pcVar31);
  if (pSVar23 != (SSL *)0x0) {
    pSVar23 = (SSL *)pSVar23->method;
  }
  if (param_4 < 0) {
    iVar19 = strcmp(*(char **)(puVar1 + 8),"DEFAULT");
    if ((iVar19 == 0) || (lVar24 = get_stream_info(*(undefined8 *)(param_1 + 0x48)), lVar24 == 0))
    goto LAB_00104dfa;
    iVar19 = *(int *)(param_1 + 0xc4);
    uVar37 = *(undefined8 *)(lVar24 + 0x10);
    goto joined_r0x00104e0b;
  }
LAB_00104d83:
  if (local_148 == 0) {
    SSL_handle_events(*(undefined8 *)(param_1 + 0x70));
  }
  uVar18 = *puVar1;
  if ((0x34 < uVar18) || ((0x1801eb00054553U >> ((ulong)uVar18 & 0x3f) & 1) == 0)) {
    test_error("test/quic_multistream_test.c",0x47e,"opcode %lu not allowed on child thread",uVar18)
    ;
    goto LAB_00105420;
  }
  switch((ulong)uVar18) {
  case 0:
    goto switchD_00104dc2_caseD_0;
  case 1:
    local_150 = puVar1;
    iVar19 = (**(code **)(puVar1 + 6))(param_1,&local_168);
LAB_001071f0:
    local_150 = (uint *)0x0;
    iVar19 = test_true("test/quic_multistream_test.c",0x4dd,&_LC154,iVar19 != 0);
    break;
  case 2:
switchD_00104dc2_caseD_2:
    pcVar31 = *(char **)(puVar1 + 2);
    __n = strlen(pcVar31);
    iVar19 = test_size_t_le("test/quic_multistream_test.c",0x4e7,"alpn_len","UINT8_MAX");
    if (iVar19 != 0) {
      local_198 = (undefined1 *)CRYPTO_malloc((int)__n + 1,"test/quic_multistream_test.c",0x4e8);
      iVar19 = test_ptr("test/quic_multistream_test.c",0x4e8,
                        "tmp_buf = (unsigned char *)OPENSSL_malloc(alpn_len + 1)",local_198);
      if (iVar19 != 0) {
        memcpy(local_198 + 1,pcVar31,__n);
        *local_198 = (char)__n;
        iVar19 = SSL_set_alpn_protos(*(undefined8 *)(param_1 + 0x70),local_198,(int)__n + 1);
        iVar19 = test_false("test/quic_multistream_test.c",0x4ef,
                            "SSL_set_alpn_protos(h->c_conn, tmp_buf, alpn_len + 1)",iVar19 != 0);
        if (iVar19 != 0) {
          CRYPTO_free(local_198);
          goto LAB_0010599a;
        }
      }
    }
    goto LAB_00105420;
  case 3:
switchD_00104dc2_caseD_3:
    local_17c = SSL_connect(*(SSL **)(param_1 + 0x70));
    iVar19 = check_consistent_want(pSVar23,local_17c);
    if (iVar19 == 0) goto LAB_00105420;
    if (local_17c == 1) goto LAB_00105360;
    if ((*(int *)(param_1 + 0xc4) == 0) &&
       (iVar19 = SSL_get_error(*(SSL **)(param_1 + 0x70),local_17c), iVar19 - 2U < 2)) {
      if (*(int *)(param_1 + 0xc4) != 0) {
        test_error("test/quic_multistream_test.c",0x503,"spin again in blocking mode");
        goto LAB_00105420;
      }
      local_17c = 1;
      iVar19 = 1;
    }
    else {
      if ((*(long *)(puVar1 + 4) == 0) &&
         (iVar19 = test_int_eq("test/quic_multistream_test.c",0x505,&_LC117,&_LC79), iVar19 == 0))
      goto LAB_00105420;
      local_17c = 1;
      iVar19 = 0;
    }
    goto LAB_00104c75;
  case 4:
switchD_00104dc2_caseD_4:
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_138._8_8_;
    local_138 = auVar9 << 0x40;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x510,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = SSL_write_ex(pSVar23,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4),local_138)
    ;
    iVar20 = test_true("test/quic_multistream_test.c",0x514,&_LC161,iVar19 != 0);
    if ((iVar20 == 0) || (iVar19 = check_consistent_want(pSVar23,iVar19), iVar19 == 0))
    goto LAB_00105420;
    iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x516,"bytes_written","op->arg1");
    break;
  case 5:
    uVar37 = 0xffffffffffffffff;
switchD_00104e4e_caseD_5:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_138._8_8_;
    local_138 = auVar16 << 0x40;
    iVar19 = test_uint64_t_ne("test/quic_multistream_test.c",0x530,"s_stream_id","UINT64_MAX",uVar37
                              ,0xffffffffffffffff);
    if (iVar19 == 0) goto LAB_00105420;
    uVar29 = *(undefined8 *)(puVar1 + 4);
    piVar21 = (int *)(param_1 + 0x138);
    uVar33 = *(undefined8 *)(puVar1 + 2);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar34 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar34 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar34;
      *piVar21 = 1;
    }
    iVar19 = ossl_quic_tserver_write(uVar34,uVar37,uVar33,uVar29,local_138);
    iVar19 = test_true("test/quic_multistream_test.c",0x533,
                       "ossl_quic_tserver_write(ACQUIRE_S(), s_stream_id, op->arg0, op->arg1, &bytes_written)"
                       ,iVar19 != 0);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x536,"bytes_written","op->arg1");
    break;
  case 6:
switchD_00104dc2_caseD_6:
    lVar24 = *(long *)(puVar1 + 4);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_138._8_8_;
    local_138 = auVar10 << 0x40;
    if ((local_198 == (undefined1 *)0x0) && (lVar24 != 0)) {
      local_198 = (undefined1 *)CRYPTO_malloc((int)lVar24,"test/quic_multistream_test.c",0x55f);
      iVar19 = test_ptr("test/quic_multistream_test.c",0x55f,"tmp_buf = OPENSSL_malloc(op->arg1)",
                        local_198);
      if (iVar19 == 0) goto LAB_00105420;
      lVar24 = *(long *)(puVar1 + 4);
    }
    iVar19 = SSL_read_ex(pSVar23,local_198 + local_1a0,lVar24 - local_1a0,local_138);
    iVar20 = check_consistent_want(pSVar23,iVar19);
    if (iVar20 == 0) goto LAB_00105420;
    if (iVar19 != 0) {
      uVar22 = local_1a0 + local_138._0_8_;
      if (uVar22 == *(ulong *)(puVar1 + 4)) {
        if ((uVar22 == 0) ||
           (iVar19 = test_mem_eq("test/quic_multistream_test.c",0x570,"tmp_buf","op->arg0",local_198
                                 ,uVar22,*(undefined8 *)(puVar1 + 2),uVar22), iVar19 != 0)) {
          CRYPTO_free(local_198);
          goto LAB_0010599a;
        }
      }
      else {
        local_1a0 = uVar22;
        if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105b88;
        test_error("test/quic_multistream_test.c",0x56c,"spin again in blocking mode");
      }
      goto LAB_00105420;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      test_error("test/quic_multistream_test.c",0x568,"spin again in blocking mode");
      goto LAB_00105420;
    }
    goto LAB_00105b88;
  case 7:
    uVar37 = 0xffffffffffffffff;
switchD_00104e4e_caseD_7:
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_138._8_8_;
    local_138 = auVar17 << 0x40;
    iVar19 = test_uint64_t_ne("test/quic_multistream_test.c",0x57c,"s_stream_id","UINT64_MAX",uVar37
                             );
    if (iVar19 == 0) goto LAB_00105420;
    lVar24 = *(long *)(puVar1 + 4);
    if ((lVar24 != 0) && (local_198 == (undefined1 *)0x0)) {
      local_198 = (undefined1 *)CRYPTO_malloc((int)lVar24,"test/quic_multistream_test.c",0x580);
      iVar19 = test_ptr("test/quic_multistream_test.c",0x580,"tmp_buf = OPENSSL_malloc(op->arg1)",
                        local_198);
      if (iVar19 == 0) goto LAB_00105420;
      lVar24 = *(long *)(puVar1 + 4);
    }
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar29 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar29 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar29;
      *piVar21 = 1;
    }
    iVar19 = ossl_quic_tserver_read(uVar29,uVar37,local_198 + local_1a0,lVar24 - local_1a0);
    iVar19 = test_true("test/quic_multistream_test.c",0x583,
                       "ossl_quic_tserver_read(ACQUIRE_S(), s_stream_id, tmp_buf + offset, op->arg1 - offset, &bytes_read)"
                       ,iVar19 != 0);
    if (iVar19 == 0) goto LAB_00105420;
    uVar22 = local_1a0 + local_138._0_8_;
    if (uVar22 == *(ulong *)(puVar1 + 4)) {
      if ((uVar22 != 0) &&
         (iVar19 = test_mem_eq("test/quic_multistream_test.c",0x58f,"tmp_buf","op->arg0",local_198,
                               uVar22,*(undefined8 *)(puVar1 + 2),uVar22), iVar19 == 0))
      goto LAB_00105420;
      CRYPTO_free(local_198);
LAB_0010599a:
      local_198 = (undefined1 *)0x0;
      iVar19 = 0;
    }
    else {
      piVar21 = (int *)(param_1 + 0x138);
      if (-1 < local_158) {
        piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
        uVar37 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar37 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar37;
        *piVar21 = 1;
      }
      ossl_quic_tserver_tick(uVar37);
      iVar19 = 1;
      local_1a0 = uVar22;
    }
    goto LAB_00104c75;
  case 8:
switchD_00104dc2_caseD_8:
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_138._8_8_;
    local_138 = auVar11 << 0x40;
    iVar19 = SSL_read_ex(pSVar23,&local_41,1,local_138);
    iVar20 = check_consistent_want(pSVar23,iVar19);
    if (((iVar20 == 0) ||
        (iVar19 = test_false("test/quic_multistream_test.c",0x59f,&_LC161,iVar19 != 0), iVar19 == 0)
        ) || (iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x5a0,"bytes_read",&_LC40),
             iVar19 == 0)) goto LAB_00105420;
    iVar19 = SSL_get_error(pSVar23,0);
    if (iVar19 - 2U < 2) {
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105b88;
      test_error("test/quic_multistream_test.c",0x5a4,"spin again in blocking mode");
      goto LAB_00105420;
    }
    iVar19 = SSL_get_error(pSVar23,0);
    iVar19 = test_int_eq("test/quic_multistream_test.c",0x5a6,"SSL_get_error(c_tgt, 0)",
                         "SSL_ERROR_ZERO_RETURN",iVar19,6);
    if (iVar19 == 0) goto LAB_00105420;
    SSL_want(pSVar23);
    iVar19 = test_int_eq("test/quic_multistream_test.c",0x5aa,"SSL_want(c_tgt)","SSL_NOTHING");
    break;
  case 9:
    uVar37 = 0xffffffffffffffff;
switchD_00104e4e_caseD_9:
    iVar19 = test_uint64_t_ne("test/quic_multistream_test.c",0x5b1,"s_stream_id","UINT64_MAX");
    if (iVar19 != 0) {
      piVar21 = (int *)(param_1 + 0x138);
      if (-1 < local_158) {
        piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
        uVar29 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar29 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar29;
        *piVar21 = 1;
      }
      iVar19 = ossl_quic_tserver_has_read_ended(uVar29,uVar37);
      if (iVar19 == 0) goto joined_r0x001076c2;
      goto LAB_00105360;
    }
    goto LAB_00105420;
  case 10:
switchD_00104dc2_caseD_a:
    iVar19 = SSL_stream_conclude(pSVar23,0);
    iVar19 = test_true("test/quic_multistream_test.c",0x53d,"SSL_stream_conclude(c_tgt, 0)",
                       iVar19 != 0);
    break;
  case 0xb:
    uVar37 = 0xffffffffffffffff;
switchD_00104e4e_caseD_b:
    iVar19 = test_uint64_t_ne("test/quic_multistream_test.c",0x544,"s_stream_id","UINT64_MAX");
    if (iVar19 != 0) {
      piVar21 = (int *)(param_1 + 0x138);
      if (-1 < local_158) {
        piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
        uVar29 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar29 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar29;
        *piVar21 = 1;
      }
      ossl_quic_tserver_conclude(uVar29,uVar37);
      goto LAB_00105360;
    }
    goto LAB_00105420;
  case 0xc:
switchD_00104dc2_caseD_c:
    iVar19 = test_ptr_null("test/quic_multistream_test.c",0x5bd,"c_tgt",pSVar23);
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x5c0,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    uVar37 = ossl_quic_detach_stream(*(undefined8 *)(param_1 + 0x70));
    iVar19 = test_ptr("test/quic_multistream_test.c",0x5c3,
                      "c_stream = ossl_quic_detach_stream(h->c_conn)",uVar37);
    if (iVar19 == 0) goto LAB_00105420;
    lVar24 = get_stream_info(local_160,*(undefined8 *)(puVar1 + 8));
    if (lVar24 != 0) {
      *(undefined8 *)(lVar24 + 8) = uVar37;
      *(undefined8 *)(lVar24 + 0x10) = 0xffffffffffffffff;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x5c6,
                       "helper_local_set_c_stream(hl, op->stream_name, c_stream)",lVar24 != 0);
    break;
  case 0xd:
switchD_00104dc2_caseD_d:
    iVar19 = test_ptr("test/quic_multistream_test.c",0x5cd,"c_tgt",pSVar23);
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x5d0,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    iVar19 = ossl_quic_attach_stream(*(undefined8 *)(param_1 + 0x70),pSVar23);
    iVar19 = test_true("test/quic_multistream_test.c",0x5d3,
                       "ossl_quic_attach_stream(h->c_conn, c_tgt)",iVar19 != 0);
    if (iVar19 == 0) goto LAB_00105420;
    lVar24 = get_stream_info(local_160,*(undefined8 *)(puVar1 + 8));
    if (lVar24 != 0) {
      *(undefined8 *)(lVar24 + 8) = 0;
      *(undefined8 *)(lVar24 + 0x10) = 0xffffffffffffffff;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x5d6,
                       "helper_local_set_c_stream(hl, op->stream_name, NULL)",lVar24 != 0);
    break;
  case 0xe:
switchD_00104dc2_caseD_e:
    uVar22 = *(ulong *)(puVar1 + 4);
    iVar19 = test_ptr_null("test/quic_multistream_test.c",0x5e3,"c_tgt",pSVar23);
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x5e6,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    lVar24 = SSL_new_stream(*(undefined8 *)(param_1 + 0x70),uVar22 & 0xfffffffffffeffff);
    if ((uVar22 & 0x10000) == 0) {
      iVar19 = test_ptr("test/quic_multistream_test.c",0x5ea,"c_stream",lVar24);
      if (iVar19 == 0) goto LAB_00105420;
    }
    else if (lVar24 == 0) {
      ERR_get_error();
      iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x5ee,"ERR_GET_REASON(ERR_get_error())"
                              ,"SSL_R_STREAM_COUNT_LIMITED");
      if (iVar19 != 0) {
        *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 1;
        goto LAB_00105360;
      }
      goto LAB_00105420;
    }
    if (*(long *)(puVar1 + 10) != -1) {
      SSL_get_stream_id(lVar24);
      iVar19 = test_uint64_t_eq("test/quic_multistream_test.c",0x5f7,"SSL_get_stream_id(c_stream)",
                                "op->arg2");
      if (iVar19 == 0) goto LAB_00105420;
    }
    lVar36 = get_stream_info(local_160,*(undefined8 *)(puVar1 + 8));
    if (lVar36 != 0) {
      *(long *)(lVar36 + 8) = lVar24;
      *(undefined8 *)(lVar36 + 0x10) = 0xffffffffffffffff;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x5fb,
                       "helper_local_set_c_stream(hl, op->stream_name, c_stream)",lVar36 != 0);
    break;
  case 0xf:
    uVar37 = 0xffffffffffffffff;
switchD_00104e4e_caseD_f:
    local_138._0_8_ = 0xffffffffffffffff;
    iVar19 = test_uint64_t_eq("test/quic_multistream_test.c",0x604,"s_stream_id","UINT64_MAX",uVar37
                              ,0xffffffffffffffff);
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x607,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    lVar24 = *(long *)(puVar1 + 4);
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar37 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar37 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar37;
      *piVar21 = 1;
    }
    iVar19 = ossl_quic_tserver_stream_new(uVar37,lVar24 != 0,local_138);
    iVar19 = test_true("test/quic_multistream_test.c",0x60a,
                       "ossl_quic_tserver_stream_new(ACQUIRE_S(), op->arg1 > 0, &stream_id)",
                       iVar19 != 0);
    if (iVar19 == 0) goto LAB_00105420;
    uVar37 = local_138._0_8_;
    if (*(long *)(puVar1 + 10) != -1) {
      iVar19 = test_uint64_t_eq("test/quic_multistream_test.c",0x610,"stream_id","op->arg2");
      if (iVar19 == 0) goto LAB_00105420;
      uVar37 = local_138._0_8_;
    }
    pcVar31 = *(char **)(puVar1 + 8);
    iVar19 = strcmp(pcVar31,"DEFAULT");
    if ((iVar19 == 0) ||
       (lVar24 = get_stream_info(*(undefined8 *)(param_1 + 0x48),pcVar31), lVar24 == 0)) {
      uVar29 = 0;
    }
    else {
      *(undefined8 *)(lVar24 + 8) = 0;
      uVar29 = 1;
      *(undefined8 *)(lVar24 + 0x10) = uVar37;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x613,
                       "helper_set_s_stream(h, op->stream_name, stream_id)",uVar29);
    break;
  case 0x10:
switchD_00104dc2_caseD_10:
    iVar19 = test_ptr_null("test/quic_multistream_test.c",0x61d,"c_tgt",pSVar23);
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x620,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    lVar24 = SSL_accept_stream(*(undefined8 *)(param_1 + 0x70),0);
    if (lVar24 == 0) {
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105b88;
      test_error("test/quic_multistream_test.c",0x624,"spin again in blocking mode");
      goto LAB_00105420;
    }
    lVar36 = get_stream_info(local_160,*(undefined8 *)(puVar1 + 8));
    if (lVar36 != 0) {
      *(long *)(lVar36 + 8) = lVar24;
      *(undefined8 *)(lVar36 + 0x10) = 0xffffffffffffffff;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x626,
                       "helper_local_set_c_stream(hl, op->stream_name, c_stream)",lVar36 != 0);
    break;
  case 0x11:
switchD_00104dc2_caseD_11:
    pSVar23 = (SSL *)SSL_accept_stream(*(undefined8 *)(param_1 + 0x70),1);
    iVar19 = test_ptr_null("test/quic_multistream_test.c",0x643,
                           "c_stream = SSL_accept_stream(h->c_conn, SSL_ACCEPT_STREAM_NO_BLOCK)",
                           pSVar23);
    if (iVar19 != 0) goto LAB_00105360;
    SSL_free(pSVar23);
    goto LAB_00105420;
  case 0x12:
switchD_00104dc2_caseD_12:
    iVar19 = test_ptr("test/quic_multistream_test.c",0x64d,"c_tgt",pSVar23);
    if (iVar19 != 0) {
      iVar19 = SSL_is_connection(pSVar23);
      iVar19 = test_true("test/quic_multistream_test.c",0x64e,"!SSL_is_connection(c_tgt)",
                         iVar19 == 0);
      if ((iVar19 != 0) &&
         (iVar19 = test_ptr("test/quic_multistream_test.c",0x651,"op->stream_name",
                            *(undefined8 *)(puVar1 + 8)), iVar19 != 0)) {
        lVar24 = get_stream_info(local_160,*(undefined8 *)(puVar1 + 8));
        if (lVar24 != 0) {
          *(undefined8 *)(lVar24 + 8) = 0;
          *(undefined8 *)(lVar24 + 0x10) = 0xffffffffffffffff;
        }
        iVar19 = test_true("test/quic_multistream_test.c",0x654,
                           "helper_local_set_c_stream(hl, op->stream_name, NULL)",lVar24 != 0);
        if (iVar19 != 0) {
          SSL_free(pSVar23);
          goto LAB_00105360;
        }
      }
    }
    goto LAB_00105420;
  case 0x13:
switchD_00104dc2_caseD_13:
    iVar19 = test_ptr("test/quic_multistream_test.c",0x65e,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = SSL_set_default_stream_mode(pSVar23,puVar1[4]);
    iVar19 = test_true("test/quic_multistream_test.c",0x661,
                       "SSL_set_default_stream_mode(c_tgt, op->arg1)",iVar19 != 0);
    break;
  case 0x14:
switchD_00104dc2_caseD_14:
    iVar19 = test_ptr("test/quic_multistream_test.c",0x668,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = SSL_set_incoming_stream_policy(pSVar23,puVar1[4],0);
    iVar19 = test_true("test/quic_multistream_test.c",0x66b,
                       "SSL_set_incoming_stream_policy(c_tgt, op->arg1, 0)",iVar19 != 0);
    break;
  case 0x15:
switchD_00104dc2_caseD_15:
    uVar37 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
    local_138 = (undefined1  [16])0x0;
    uVar37 = ossl_quic_channel_get0_engine(uVar37);
    ossl_quic_engine_set_inhibit_tick(uVar37,0);
    iVar19 = test_ptr("test/quic_multistream_test.c",0x679,"c_tgt",pSVar23);
    if (iVar19 != 0) {
      local_138._8_8_ = *(undefined8 *)(puVar1 + 2);
      iVar19 = SSL_shutdown_ex(pSVar23,*(undefined8 *)(puVar1 + 4),local_138,0x10);
      iVar20 = test_int_ge("test/quic_multistream_test.c",0x67f,&_LC117,&_LC40);
      if (iVar20 != 0) {
        if (iVar19 != 0) goto LAB_00105360;
        if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105b88;
        test_error("test/quic_multistream_test.c",0x683,"spin again in blocking mode");
      }
    }
    goto LAB_00105420;
  case 0x16:
switchD_00104dc2_caseD_16:
    uVar22 = *(ulong *)(puVar1 + 4);
    local_118 = 0;
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x694,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    if (*(int *)(param_1 + 0xc4) != 0) {
      iVar19 = SSL_shutdown_ex(pSVar23,8,0,0);
      iVar19 = test_true("test/quic_multistream_test.c",0x698,
                         "SSL_shutdown_ex(c_tgt, SSL_SHUTDOWN_FLAG_WAIT_PEER, NULL, 0)",iVar19 != 0)
      ;
      if (iVar19 == 0) goto LAB_00105420;
    }
    iVar19 = SSL_get_conn_close_info(pSVar23,local_138,0x28);
    if (iVar19 != 0) {
      iVar19 = test_int_eq("test/quic_multistream_test.c",0x6a0,"expect_app",
                           "(cc_info.flags & SSL_CONN_CLOSE_FLAG_TRANSPORT) == 0",(uint)uVar22 & 1,
                           ((uint)local_118 >> 1 ^ 1) & 1);
      if (iVar19 != 0) {
        iVar19 = test_int_eq("test/quic_multistream_test.c",0x6a3,"expect_remote",
                             "(cc_info.flags & SSL_CONN_CLOSE_FLAG_LOCAL) == 0",
                             (uint)(uVar22 >> 1) & 1,~(uint)local_118 & 1);
        if ((iVar19 != 0) &&
           (iVar19 = test_uint64_t_eq("test/quic_multistream_test.c",0x6a6,"error_code",
                                      "cc_info.error_code"), iVar19 != 0)) goto LAB_00105360;
      }
      test_info("test/quic_multistream_test.c",0x6a7,"Connection close reason: %s",local_128._0_8_);
      goto LAB_00105420;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      test_error("test/quic_multistream_test.c",0x69e,"spin again in blocking mode");
      goto LAB_00105420;
    }
LAB_00105b88:
    iVar19 = 1;
    goto LAB_00104c75;
  case 0x17:
switchD_00104dc2_caseD_17:
    uVar37 = *(undefined8 *)(puVar1 + 4);
    piVar21 = (int *)(param_1 + 0x138);
    uVar29 = *(undefined8 *)(puVar1 + 10);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar33 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar33 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar33;
      *piVar21 = 1;
    }
    iVar19 = ossl_quic_tserver_is_term_any(uVar33);
    if (iVar19 == 0) {
      piVar21 = (int *)(param_1 + 0x138);
      if (-1 < local_158) {
        piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
        uVar37 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar37 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar37;
        *piVar21 = 1;
      }
      ossl_quic_tserver_ping(uVar37);
      piVar21 = (int *)(param_1 + 0x138);
      if (-1 < local_158) {
        piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
      }
      if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
        uVar37 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        ossl_crypto_mutex_lock();
        uVar37 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar37;
        *piVar21 = 1;
      }
      ossl_quic_tserver_tick(uVar37);
      goto LAB_00105b88;
    }
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar33 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar33 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar33;
      *piVar21 = 1;
    }
    puVar27 = (undefined8 *)ossl_quic_tserver_get_terminate_cause(uVar33);
    iVar19 = test_ptr("test/quic_multistream_test.c",0x6b9,
                      "tc = ossl_quic_tserver_get_terminate_cause(ACQUIRE_S())",puVar27);
    if (((iVar19 == 0) ||
        (iVar19 = test_uint64_t_eq("test/quic_multistream_test.c",0x6bc,"error_code",
                                   "tc->error_code",uVar29,*puVar27), iVar19 == 0)) ||
       (iVar19 = test_int_eq("test/quic_multistream_test.c",0x6bd,"expect_app","tc->app",
                             (uint)uVar37 & 1,*(byte *)(puVar27 + 4) & 1), iVar19 == 0))
    goto LAB_00105420;
    iVar19 = test_int_eq("test/quic_multistream_test.c",0x6be,"expect_remote","tc->remote");
    break;
  case 0x18:
switchD_00104e4e_caseD_18:
    iVar19 = test_uint64_t_eq("test/quic_multistream_test.c",0x6c5,"s_stream_id","UINT64_MAX");
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x6c8,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    pcVar31 = *(char **)(puVar1 + 8);
    uVar37 = *(undefined8 *)(puVar1 + 10);
    iVar19 = strcmp(pcVar31,"DEFAULT");
    if ((iVar19 == 0) ||
       (lVar24 = get_stream_info(*(undefined8 *)(param_1 + 0x48),pcVar31), lVar24 == 0)) {
      uVar29 = 0;
    }
    else {
      *(undefined8 *)(lVar24 + 8) = 0;
      uVar29 = 1;
      *(undefined8 *)(lVar24 + 0x10) = uVar37;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x6cb,
                       "helper_set_s_stream(h, op->stream_name, op->arg2)",uVar29);
    break;
  case 0x19:
switchD_00104dc2_caseD_19:
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_138._8_8_;
    local_138 = auVar13 << 0x40;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x550,"c_tgt",pSVar23);
    if (iVar19 != 0) {
      iVar19 = SSL_peek_ex(pSVar23,&local_41,1,local_138);
      if ((iVar19 != 0) && (local_138._0_8_ != 0)) goto LAB_00105360;
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105b88;
      test_error("test/quic_multistream_test.c",0x555,"spin again in blocking mode");
    }
    goto LAB_00105420;
  case 0x1a:
switchD_00104dc2_caseD_1a:
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_138._8_8_;
    local_138 = auVar7 << 0x40;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x6e2,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = SSL_write_ex(pSVar23,"apple",5,local_138);
    iVar20 = test_false("test/quic_multistream_test.c",0x6e6,&_LC161,iVar19 != 0);
    if (iVar20 == 0) goto LAB_00105420;
    iVar19 = check_consistent_want(pSVar23,iVar19);
    break;
  case 0x1b:
    uVar37 = 0xffffffffffffffff;
switchD_00104e4e_caseD_1b:
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_138._8_8_;
    local_138 = auVar14 << 0x40;
    iVar19 = test_uint64_t_ne("test/quic_multistream_test.c",0x6f0,"s_stream_id","UINT64_MAX",uVar37
                             );
    if (iVar19 == 0) goto LAB_00105420;
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar29 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar29 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar29;
      *piVar21 = 1;
    }
    iVar19 = ossl_quic_tserver_write(uVar29,uVar37,"apple",5);
    iVar19 = test_false("test/quic_multistream_test.c",0x6f3,
                        "ossl_quic_tserver_write(ACQUIRE_S(), s_stream_id, (const unsigned char *)\"apple\", 5, &bytes_written)"
                        ,iVar19 != 0);
    break;
  case 0x1c:
switchD_00104dc2_caseD_1c:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_138._8_8_;
    local_138 = auVar8 << 0x40;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x700,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = SSL_read_ex(pSVar23,&local_41,1,local_138);
    iVar20 = test_false("test/quic_multistream_test.c",0x704,&_LC161,iVar19 != 0);
    if (iVar20 == 0) goto LAB_00105420;
    iVar19 = check_consistent_want(pSVar23,iVar19);
    break;
  case 0x1d:
switchD_00104dc2_caseD_1d:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_138._8_8_;
    local_138 = auVar5 << 0x40;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x735,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    local_138._0_8_ = *(undefined8 *)(puVar1 + 10);
    if (*puVar1 == 0x1d) {
      iVar19 = SSL_stream_reset(pSVar23,local_138,8);
      iVar19 = test_true("test/quic_multistream_test.c",0x73a,
                         "SSL_stream_reset(c_tgt, &args, sizeof(args))",iVar19 != 0);
    }
    else {
      iVar19 = SSL_stream_reset(pSVar23,local_138,8);
      iVar19 = test_false("test/quic_multistream_test.c",0x73d,
                          "SSL_stream_reset(c_tgt, &args, sizeof(args))",iVar19 != 0);
    }
    break;
  case 0x1e:
switchD_00104e4e_caseD_1e:
    iVar19 = test_uint64_t_eq("test/quic_multistream_test.c",0x630,"s_stream_id","UINT64_MAX");
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x633,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar37 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar37 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar37;
      *piVar21 = 1;
    }
    lVar24 = ossl_quic_tserver_pop_incoming_stream(uVar37);
    if (lVar24 == -1) goto joined_r0x001076c2;
    pcVar31 = *(char **)(puVar1 + 8);
    iVar19 = strcmp(pcVar31,"DEFAULT");
    if ((iVar19 == 0) ||
       (lVar36 = get_stream_info(*(undefined8 *)(param_1 + 0x48),pcVar31), lVar36 == 0)) {
      uVar37 = 0;
    }
    else {
      *(undefined8 *)(lVar36 + 8) = 0;
      uVar37 = 1;
      *(long *)(lVar36 + 0x10) = lVar24;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x63a,
                       "helper_set_s_stream(h, op->stream_name, new_stream_id)",uVar37);
    break;
  case 0x1f:
switchD_00104dc2_caseD_1f:
    iVar19 = test_ptr_null("test/quic_multistream_test.c",0x750,"h->threads",
                           *(undefined8 *)(param_1 + 0x80));
    if (iVar19 == 0) {
      test_error("test/quic_multistream_test.c",0x751,"max one NEW_THREAD operation per script");
    }
    else {
      uVar37 = CRYPTO_zalloc(*(long *)(puVar1 + 4) << 6,"test/quic_multistream_test.c",0x755);
      *(undefined8 *)(param_1 + 0x80) = uVar37;
      iVar19 = test_ptr("test/quic_multistream_test.c",0x756,"h->threads",uVar37);
      if (iVar19 != 0) {
        lVar24 = *(long *)(puVar1 + 4);
        *(long *)(param_1 + 0x88) = lVar24;
        if (lVar24 != 0) {
          uVar22 = 0;
          do {
            lVar36 = uVar22 * 0x40;
            lVar24 = *(long *)(puVar1 + 2);
            plVar38 = (long *)(*(long *)(param_1 + 0x80) + lVar36);
            plVar38[2] = param_3;
            *(int *)(plVar38 + 3) = (int)uVar22;
            *plVar38 = param_1;
            plVar38[1] = lVar24;
            lVar24 = ossl_crypto_mutex_new();
            plVar38[5] = lVar24;
            iVar19 = test_ptr("test/quic_multistream_test.c",0x762,"h->threads[i].m",
                              *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28 + lVar36));
            if (iVar19 == 0) goto LAB_00105420;
            lVar24 = *(long *)(param_1 + 0x80) + lVar36;
            uVar37 = ossl_crypto_thread_native_start(run_script_child_thread,lVar24,1);
            *(undefined8 *)(lVar24 + 0x20) = uVar37;
            iVar19 = test_ptr("test/quic_multistream_test.c",0x768,"h->threads[i].t",
                              *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20 + lVar36));
            if (iVar19 == 0) goto LAB_00105420;
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(ulong *)(puVar1 + 4));
        }
        goto LAB_00105360;
      }
    }
    goto LAB_00105420;
  case 0x20:
switchD_00104dc2_caseD_20:
    iVar19 = test_size_t_lt("test/quic_multistream_test.c",0x4a7,"repeat_stack_len",
                            "OSSL_NELEM(repeat_stack_idx)",local_188);
    if ((iVar19 == 0) ||
       (iVar19 = test_size_t_gt("test/quic_multistream_test.c",0x4aa,"op->arg1",&_LC40), iVar19 == 0
       )) goto LAB_00105420;
    local_c8[local_188] = 0;
    local_108[local_188] = lVar35 + 1;
    local_88[local_188] = *(long *)(puVar1 + 4);
    local_188 = local_188 + 1;
    iVar19 = 0;
    goto LAB_00104c75;
  case 0x21:
switchD_00104dc2_caseD_21:
    iVar19 = test_size_t_gt("test/quic_multistream_test.c",0x4c2,"repeat_stack_len",&_LC40);
    if (iVar19 == 0) goto LAB_00105420;
    lVar24 = local_188 + -1;
    lVar36 = local_c8[lVar24];
    local_c8[lVar24] = lVar36 + 1;
    if (lVar36 + 1 == local_88[lVar24]) {
      iVar19 = 0;
      local_188 = lVar24;
    }
    else {
      lVar35 = local_108[lVar24];
      iVar19 = 1;
    }
    goto LAB_00104c75;
  case 0x22:
switchD_00104e4e_caseD_22:
    iVar19 = test_uint64_t_ne("test/quic_multistream_test.c",0x6d2,"s_stream_id","UINT64_MAX");
    if ((iVar19 == 0) ||
       (iVar19 = test_ptr("test/quic_multistream_test.c",0x6d5,"op->stream_name",
                          *(undefined8 *)(puVar1 + 8)), iVar19 == 0)) goto LAB_00105420;
    pcVar31 = *(char **)(puVar1 + 8);
    iVar19 = strcmp(pcVar31,"DEFAULT");
    if ((iVar19 == 0) ||
       (lVar24 = get_stream_info(*(undefined8 *)(param_1 + 0x48),pcVar31), lVar24 == 0)) {
      uVar37 = 0;
    }
    else {
      *(undefined8 *)(lVar24 + 8) = 0;
      uVar37 = 1;
      *(undefined8 *)(lVar24 + 0x10) = 0xffffffffffffffff;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x6d8,
                       "helper_set_s_stream(h, op->stream_name, UINT64_MAX)",uVar37);
    break;
  case 0x23:
switchD_00104dc2_caseD_23:
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_138._8_8_;
    local_138 = auVar12 << 0x40;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x711,"c_tgt",pSVar23);
    if (iVar19 != 0) {
      iVar19 = SSL_read_ex(pSVar23,&local_41,1,local_138);
      iVar19 = test_false("test/quic_multistream_test.c",0x715,&_LC161,iVar19 != 0);
      if ((iVar19 != 0) && (iVar19 = check_consistent_want(pSVar23), iVar19 != 0)) {
        iVar19 = SSL_get_error(pSVar23,0);
        if (1 < iVar19 - 2U) goto LAB_00105360;
        if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00105b88;
        test_error("test/quic_multistream_test.c",0x71b,"spin again in blocking mode");
      }
    }
    goto LAB_00105420;
  case 0x24:
switchD_00104dc2_caseD_24:
    BIO_closesocket(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    goto LAB_00105360;
  case 0x25:
switchD_00104dc2_caseD_25:
    uVar37 = *(undefined8 *)(puVar1 + 4);
    iVar19 = SSL_get_error(pSVar23,0);
    iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x778,"(size_t)SSL_get_error(c_tgt, 0)",
                            "op->arg1",(long)iVar19,uVar37);
    if (iVar19 == 0) goto LAB_00105420;
    SSL_want(pSVar23);
    iVar19 = test_int_eq("test/quic_multistream_test.c",0x77a,"SSL_want(c_tgt)","SSL_NOTHING");
    break;
  case 0x26:
switchD_00104dc2_caseD_26:
    ERR_peek_last_error();
    iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x781,
                            "(size_t)ERR_GET_REASON(ERR_peek_last_error())","op->arg1");
    break;
  case 0x27:
switchD_00104dc2_caseD_27:
    ERR_peek_last_error();
    iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x788,
                            "(size_t)ERR_GET_LIB(ERR_peek_last_error())","op->arg1");
    break;
  case 0x28:
switchD_00104dc2_caseD_28:
    OSSL_sleep(*(undefined8 *)(puVar1 + 10));
    goto LAB_00105360;
  case 0x29:
    uVar37 = 0xffffffffffffffff;
switchD_00104e4e_caseD_29:
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_138._8_8_;
    local_138 = auVar15 << 0x40;
    iVar19 = test_uint64_t_ne("test/quic_multistream_test.c",0x725,"s_stream_id","UINT64_MAX",uVar37
                             );
    if (iVar19 == 0) goto LAB_00105420;
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar29 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar29 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar29;
      *piVar21 = 1;
    }
    iVar19 = ossl_quic_tserver_read(uVar29,uVar37,&local_41,1);
    bVar39 = true;
    if ((iVar19 != 0) && (bVar39 = false, *(long *)(puVar1 + 4) != 0)) {
      bVar39 = local_138._0_8_ == 0;
    }
    iVar19 = test_true("test/quic_multistream_test.c",0x72b,
                       "ret == 0 || (op->arg1 && bytes_read == 0)",bVar39);
    break;
  case 0x2a:
switchD_00104dc2_caseD_2a:
    pcVar32 = *(code **)(puVar1 + 0xc);
    *(code **)(param_1 + 0xd8) = pcVar32;
    if (pcVar32 != (code *)0x0) {
      pcVar32 = helper_packet_plain_listener;
    }
    iVar19 = qtest_fault_set_packet_plain_listener(*(undefined8 *)(param_1 + 0xb8),pcVar32,param_1);
    iVar19 = test_true("test/quic_multistream_test.c",0x79a,
                       "qtest_fault_set_packet_plain_listener(h->qtf, h->qtf_packet_plain_cb != NULL ? helper_packet_plain_listener : NULL, h)"
                       ,iVar19 != 0);
    break;
  case 0x2b:
switchD_00104dc2_caseD_2b:
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) != 0) && (*piVar21 == 0)) {
      ossl_crypto_mutex_lock();
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
      *piVar21 = 1;
    }
    uVar37 = *(undefined8 *)(puVar1 + 10);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(puVar1 + 4);
    *(undefined8 *)(param_1 + 0xf8) = uVar37;
    goto LAB_00105360;
  case 0x2c:
switchD_00104dc2_caseD_2c:
    uVar37 = ossl_quic_conn_get_channel(*(undefined8 *)(param_1 + 0x70));
    uVar18 = puVar1[4];
    uVar37 = ossl_quic_channel_get0_engine(uVar37);
    ossl_quic_engine_set_inhibit_tick(uVar37,uVar18);
    goto LAB_00105360;
  case 0x2d:
switchD_00104dc2_caseD_2d:
    iVar19 = test_ptr("test/quic_multistream_test.c",0x7cc,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = ossl_quic_set_write_buffer_size(pSVar23,*(undefined8 *)(puVar1 + 4));
    iVar19 = test_true("test/quic_multistream_test.c",1999,
                       "ossl_quic_set_write_buffer_size(c_tgt, op->arg1)",iVar19 != 0);
    break;
  case 0x2e:
switchD_00104dc2_caseD_2e:
    pcVar32 = *(code **)(puVar1 + 0xe);
    *(code **)(param_1 + 0xe0) = pcVar32;
    if (pcVar32 != (code *)0x0) {
      pcVar32 = helper_handshake_listener;
    }
    iVar19 = qtest_fault_set_handshake_listener(*(undefined8 *)(param_1 + 0xb8),pcVar32,param_1);
    iVar19 = test_true("test/quic_multistream_test.c",0x7a5,
                       "qtest_fault_set_handshake_listener(h->qtf, h->qtf_handshake_cb != NULL ? helper_handshake_listener : NULL, h)"
                       ,iVar19 != 0);
    break;
  case 0x2f:
switchD_00104dc2_caseD_2f:
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar37 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar37 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar37;
      *piVar21 = 1;
    }
    iVar19 = ossl_quic_tserver_new_ticket(uVar37);
    iVar19 = test_true("test/quic_multistream_test.c",0x7d5,
                       "ossl_quic_tserver_new_ticket(ACQUIRE_S())",iVar19 != 0);
    break;
  case 0x30:
switchD_00104dc2_caseD_30:
    iVar19 = 0;
    if (pSVar23 == (SSL *)0x0) {
      lVar35 = lVar35 + *(long *)(puVar1 + 4);
      iVar19 = 0;
    }
    goto LAB_00104c75;
  case 0x31:
switchD_00104dc2_caseD_31:
    pcVar32 = *(code **)(puVar1 + 0x10);
    *(code **)(param_1 + 0xe8) = pcVar32;
    if (pcVar32 != (code *)0x0) {
      pcVar32 = helper_datagram_listener;
    }
    iVar19 = qtest_fault_set_datagram_listener(*(undefined8 *)(param_1 + 0xb8),pcVar32,param_1);
    iVar19 = test_true("test/quic_multistream_test.c",0x7b0,
                       "qtest_fault_set_datagram_listener(h->qtf, h->qtf_datagram_cb != NULL ? helper_datagram_listener : NULL, h)"
                       ,iVar19 != 0);
    break;
  case 0x32:
switchD_00104dc2_caseD_32:
    uVar37 = *(undefined8 *)(puVar1 + 4);
    piVar21 = (int *)(param_1 + 0x138);
    if (-1 < local_158) {
      piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
    }
    if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
      uVar29 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      ossl_crypto_mutex_lock();
      uVar29 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar29;
      *piVar21 = 1;
    }
    ossl_quic_tserver_shutdown(uVar29,uVar37);
    goto LAB_00105360;
  case 0x33:
switchD_00104dc2_caseD_33:
    ERR_pop();
    goto LAB_00105360;
  case 0x34:
switchD_00104dc2_caseD_34:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_138._8_8_;
    local_138 = auVar6 << 0x40;
    iVar19 = test_ptr("test/quic_multistream_test.c",0x520,"c_tgt",pSVar23);
    if (iVar19 == 0) goto LAB_00105420;
    iVar19 = SSL_write_ex2(pSVar23,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4),
                           *(undefined8 *)(puVar1 + 10),local_138);
    iVar20 = test_true("test/quic_multistream_test.c",0x525,&_LC161,iVar19 != 0);
    if ((iVar20 == 0) || (iVar19 = check_consistent_want(pSVar23,iVar19), iVar19 == 0))
    goto LAB_00105420;
    iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x527,"bytes_written","op->arg1");
  }
  if (iVar19 == 0) goto LAB_00105420;
LAB_00105360:
  iVar19 = 0;
  goto LAB_00104c75;
switchD_00104e4e_caseD_35:
  iVar19 = *(int *)(param_1 + 0xc4);
  if (iVar19 != 0) {
    lVar35 = lVar35 + *(long *)(puVar1 + 4);
    iVar19 = 0;
  }
  goto LAB_00104c75;
switchD_00104dc2_caseD_0:
  iVar19 = test_size_t_eq("test/quic_multistream_test.c",0x486,"repeat_stack_len",&_LC40,local_188,0
                         );
  if (iVar19 == 0) {
LAB_00105420:
    iVar19 = 0;
  }
  else {
    if ((param_4 < 0) && (*(long *)(param_1 + 0x88) != 0)) {
      uVar22 = 0;
      bVar4 = false;
      do {
        if (*(long *)(*(long *)(param_1 + 0x80) + 0x28 + uVar22 * 0x40) != 0) {
          ossl_crypto_mutex_lock();
          lVar24 = uVar22 * 0x40 + *(long *)(param_1 + 0x80);
          iVar19 = *(int *)(lVar24 + 0x34);
          ossl_crypto_mutex_unlock(*(undefined8 *)(lVar24 + 0x28));
          if (iVar19 == 0) {
            if (!bVar4) {
              test_info("test/quic_multistream_test.c",0x498,
                        "still waiting for other threads to finish (%zu)",uVar22);
            }
            piVar21 = (int *)(param_1 + 0x138);
            if (-1 < local_158) {
              piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
            }
            if ((*(long *)(param_1 + 0x120) == 0) || (*piVar21 != 0)) {
              uVar37 = *(undefined8 *)(param_1 + 0x38);
            }
            else {
              ossl_crypto_mutex_lock();
              uVar37 = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0x38) = uVar37;
              *piVar21 = 1;
            }
            ossl_quic_tserver_tick(uVar37);
            bVar4 = true;
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(ulong *)(param_1 + 0x88));
    }
    iVar19 = 1;
    test_info("test/quic_multistream_test.c",0x4a2,"script \"%s\" finished on thread %d",param_3,
              param_4);
  }
LAB_00104fbd:
  if (local_158 < 0) {
    piVar21 = (int *)(param_1 + 0x138);
  }
  else {
    piVar21 = (int *)((long)local_158 * 0x40 + *(long *)(param_1 + 0x80) + 0x38);
  }
  if ((*(long *)(param_1 + 0x120) != 0) && (*piVar21 != 0)) {
    *piVar21 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    ossl_crypto_mutex_unlock();
  }
  if (iVar19 == 0) {
    test_error("test/quic_multistream_test.c",0x7e6,"failed in script \"%s\" at op %zu, thread %d\n"
               ,param_3,lVar35 + 1,param_4);
    if (local_188 != 0) {
      lVar35 = 0;
      do {
        plVar3 = local_c8 + lVar35;
        plVar38 = local_108 + lVar35;
        plVar2 = local_88 + lVar35;
        lVar35 = lVar35 + 1;
        test_info("test/quic_multistream_test.c",0x7ea,
                  "while repeating, iteration %zu of %zu, starting at script op %zu",*plVar3,*plVar2
                  ,*plVar38);
      } while (local_188 != lVar35);
    }
    ERR_print_errors_fp(_stderr);
    if (*(long *)(param_1 + 0x70) != 0) {
      local_118 = 0;
      local_138 = (undefined1  [16])0x0;
      local_128 = (undefined1  [16])0x0;
      iVar20 = SSL_get_conn_close_info(*(long *)(param_1 + 0x70),local_138,0x28);
      if (iVar20 != 0) {
        puVar25 = (undefined *)ossl_quic_err_to_string(local_138._0_8_);
        puVar26 = (undefined *)ossl_quic_frame_type_to_string(local_138._8_8_);
        if (puVar25 == (undefined *)0x0) {
          puVar25 = &_LC137;
        }
        if (puVar26 == (undefined *)0x0) {
          puVar26 = &_LC137;
        }
        pcVar31 = "app";
        puVar30 = (undefined *)local_128._0_8_;
        if ((undefined *)local_128._0_8_ == (undefined *)0x0) {
          puVar30 = &_LC138;
        }
        if ((local_118 & 2) != 0) {
          pcVar31 = "transport";
        }
        pcVar28 = "remote";
        if ((local_118 & 1) != 0) {
          pcVar28 = "local";
        }
        test_info("test/quic_multistream_test.c",0x7fd,
                  "client side is closed: %llu(%s)/%llu(%s), %s, %s, reason: \"%s\"",local_138._0_8_
                  ,puVar25,local_138._8_8_,puVar26,pcVar28,pcVar31,puVar30);
      }
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (puVar27 = (undefined8 *)ossl_quic_tserver_get_terminate_cause(),
       puVar27 != (undefined8 *)0x0)) {
      puVar25 = (undefined *)ossl_quic_err_to_string(*puVar27);
      puVar26 = (undefined *)ossl_quic_frame_type_to_string(puVar27[1]);
      if (puVar25 == (undefined *)0x0) {
        puVar25 = &_LC137;
      }
      if (puVar26 == (undefined *)0x0) {
        puVar26 = &_LC137;
      }
      puVar30 = (undefined *)puVar27[2];
      pcVar31 = "transport";
      if (puVar30 == (undefined *)0x0) {
        puVar30 = &_LC138;
      }
      if ((*(byte *)(puVar27 + 4) & 1) != 0) {
        pcVar31 = "app";
      }
      pcVar28 = "local";
      if ((*(byte *)(puVar27 + 4) & 2) != 0) {
        pcVar28 = "remote";
      }
      test_info("test/quic_multistream_test.c",0x816,
                "server side is closed: %llu(%s)/%llu(%s), %s, %s, reason: \"%s\"",*puVar27,puVar25,
                puVar27[1],puVar26,pcVar28,pcVar31,puVar30);
    }
  }
  CRYPTO_free(local_198);
  if (((local_168 != 0) && (-1 < local_158)) && (local_160 != 0)) {
    OPENSSL_LH_doall(local_160,cleanup_stream);
    OPENSSL_LH_free(local_160);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 run_script_child_thread(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = run_script_worker(*param_1,param_1[1],param_1[2],*(undefined4 *)(param_1 + 3));
  ossl_crypto_mutex_lock(param_1[5]);
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  ossl_crypto_mutex_unlock(param_1[5]);
  return 1;
}



bool run_script(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  BIO_METHOD *type;
  SSL_METHOD *meth;
  long lVar4;
  int *piVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined4 local_264;
  void *local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined8 local_218;
  int local_208 [2];
  BIO *local_200;
  BIO *pBStack_1f8;
  BIO *local_1f0;
  BIO *pBStack_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  BIO *local_1b0;
  BIO *pBStack_1a8;
  SSL_CTX *local_1a0;
  SSL *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined4 local_148;
  int local_144;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_264 = 0;
  local_258 = (undefined1  [16])0x0;
  local_218 = 0;
  local_248 = (undefined1  [16])0x0;
  local_238 = (undefined1  [16])0x0;
  local_228 = (undefined1  [16])0x0;
  piVar5 = local_208;
  for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
    piVar5[0] = 0;
    piVar5[1] = 0;
    piVar5 = piVar5 + 2;
  }
  local_1b8 = -1;
  local_208[0] = -1;
  local_138 = 1;
  local_144 = param_4;
  local_13c = param_3;
  lVar4 = CRYPTO_zalloc(0x10,"test/quic_multistream_test.c",0x2b6);
  if (lVar4 == 0) {
LAB_00107c60:
    helper_cleanup(local_208);
    uVar3 = 0;
  }
  else {
    local_160 = CRYPTO_THREAD_lock_new();
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2ba,"h->time_lock = CRYPTO_THREAD_lock_new()",
                     local_160);
    if (iVar2 == 0) goto LAB_00107c60;
    uVar3 = OPENSSL_LH_new(stream_info_hash,stream_info_cmp);
    local_1c0 = OPENSSL_LH_set_thunks
                          (uVar3,0x100000,lh_STREAM_INFO_cfn_thunk,lh_STREAM_INFO_doall_thunk,
                           lh_STREAM_INFO_doall_arg_thunk);
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2bd,
                     "h->s_streams = lh_STREAM_INFO_new(stream_info_hash, stream_info_cmp)",
                     local_1c0);
    if (iVar2 == 0) goto LAB_00107c60;
    uVar3 = OPENSSL_LH_new(stream_info_hash,stream_info_cmp);
    local_190 = OPENSSL_LH_set_thunks
                          (uVar3,0x100000,lh_STREAM_INFO_cfn_thunk,lh_STREAM_INFO_doall_thunk,
                           lh_STREAM_INFO_doall_arg_thunk);
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2c1,
                     "h->c_streams = lh_STREAM_INFO_new(stream_info_hash, stream_info_cmp)",
                     local_190);
    if (iVar2 == 0) goto LAB_00107c60;
    local_264 = 0x100007f;
    local_208[0] = BIO_socket(2,2,0x11,0);
    iVar2 = test_int_ge("test/quic_multistream_test.c",0x2c8,"h->s_fd",&_LC40,local_208[0],0);
    if (iVar2 == 0) goto LAB_00107c60;
    iVar2 = BIO_socket_nbio(local_208[0],1);
    iVar2 = test_true("test/quic_multistream_test.c",0x2cb,"BIO_socket_nbio(h->s_fd, 1)",iVar2 != 0)
    ;
    if (iVar2 == 0) goto LAB_00107c60;
    local_1e0 = BIO_ADDR_new();
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2ce,"h->s_net_bio_orig_addr = BIO_ADDR_new()",
                     local_1e0);
    if (iVar2 == 0) goto LAB_00107c60;
    local_1d8 = (void *)BIO_ADDR_new();
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2cf,"h->s_net_bio_addr = BIO_ADDR_new()",
                     local_1d8);
    if (iVar2 == 0) goto LAB_00107c60;
    iVar2 = BIO_ADDR_rawmake(local_1e0,2,&local_264,4,0);
    iVar2 = test_true("test/quic_multistream_test.c",0x2d2,
                      "BIO_ADDR_rawmake(h->s_net_bio_orig_addr, AF_INET, &ina, sizeof(ina), 0)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    iVar2 = BIO_bind(local_208[0],local_1e0,0);
    iVar2 = test_true("test/quic_multistream_test.c",0x2d6,
                      "BIO_bind(h->s_fd, h->s_net_bio_orig_addr, 0)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    local_260 = local_1d8;
    iVar2 = BIO_sock_info(local_208[0],0,&local_260);
    iVar2 = test_true("test/quic_multistream_test.c",0x2da,
                      "BIO_sock_info(h->s_fd, BIO_SOCK_INFO_ADDRESS, &info)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    uVar1 = BIO_ADDR_rawport(local_1d8);
    iVar2 = test_int_gt("test/quic_multistream_test.c",0x2dd,"BIO_ADDR_rawport(h->s_net_bio_addr)",
                        &_LC40,uVar1,0);
    if (iVar2 == 0) goto LAB_00107c60;
    local_200 = BIO_new_dgram(local_208[0],0);
    pBStack_1f8 = local_200;
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2e0,
                     "h->s_net_bio = h->s_net_bio_own = BIO_new_dgram(h->s_fd, 0)",local_200);
    if ((iVar2 == 0) || (iVar2 = BIO_up_ref(local_200), iVar2 == 0)) goto LAB_00107c60;
    type = (BIO_METHOD *)qtest_get_bio_method();
    local_1f0 = BIO_new(type);
    pBStack_1e8 = local_1f0;
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2e8,"h->s_qtf_wbio",local_1f0);
    if (iVar2 == 0) goto LAB_00107c60;
    BIO_push(local_1f0,local_200);
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2eb,"BIO_push(h->s_qtf_wbio, h->s_net_bio)");
    if (iVar2 == 0) goto LAB_00107c60;
    local_248._8_8_ = 0;
    local_248._0_8_ = local_200;
    local_248 = local_248 << 0x40;
    local_238._8_8_ = get_time;
    local_238._0_8_ = local_1f0;
    local_228._8_8_ = 0;
    local_228._0_8_ = local_208;
    local_1c8 = ossl_quic_tserver_new(local_258,certfile,keyfile);
    iVar2 = test_ptr("test/quic_multistream_test.c",0x2f9,
                     "h->s_priv = ossl_quic_tserver_new(&s_args, certfile, keyfile)",local_1c8);
    if (iVar2 == 0) goto LAB_00107c60;
    if (param_4 == 0) {
      local_1d0 = local_1c8;
    }
    local_150 = qtest_create_injector();
    iVar2 = test_ptr("test/quic_multistream_test.c",0x301,"h->qtf",local_150);
    if (iVar2 == 0) goto LAB_00107c60;
    *(undefined8 *)(lVar4 + 8) = local_150;
    BIO_set_data(local_1f0,lVar4);
    pBStack_1f8 = (BIO *)0x0;
    pBStack_1e8 = (BIO *)0x0;
    local_1b8 = BIO_socket(2,2,0x11,0);
    iVar2 = test_int_ge("test/quic_multistream_test.c",0x30b,"h->c_fd",&_LC40,local_1b8,0);
    if (iVar2 == 0) goto LAB_00107c60;
    iVar2 = BIO_socket_nbio(local_1b8,1);
    iVar2 = test_true("test/quic_multistream_test.c",0x30e,"BIO_socket_nbio(h->c_fd, 1)",iVar2 != 0)
    ;
    if (iVar2 == 0) goto LAB_00107c60;
    local_1b0 = BIO_new_dgram(local_1b8,0);
    pBStack_1a8 = local_1b0;
    iVar2 = test_ptr("test/quic_multistream_test.c",0x311,
                     "h->c_net_bio = h->c_net_bio_own = BIO_new_dgram(h->c_fd, 0)",local_1b0);
    if (iVar2 == 0) goto LAB_00107c60;
    lVar4 = BIO_ctrl(local_1b0,0x2c,0,local_1d8);
    iVar2 = test_true("test/quic_multistream_test.c",0x314,
                      "BIO_dgram_set_peer(h->c_net_bio, h->s_net_bio_addr)",(int)lVar4 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    meth = (SSL_METHOD *)OSSL_QUIC_client_method();
    local_1a0 = SSL_CTX_new(meth);
    iVar2 = test_ptr("test/quic_multistream_test.c",0x317,
                     "h->c_ctx = SSL_CTX_new(OSSL_QUIC_client_method())",local_1a0);
    if (iVar2 == 0) goto LAB_00107c60;
    BIO_snprintf(local_c8,0x80,"quic_multistream_test: %s",param_2);
    iVar2 = ossl_quic_set_diag_title(local_1a0,local_c8);
    iVar2 = test_true("test/quic_multistream_test.c",0x31c,
                      "ossl_quic_set_diag_title(h->c_ctx, title)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    local_198 = SSL_new(local_1a0);
    iVar2 = test_ptr("test/quic_multistream_test.c",799,"h->c_conn = SSL_new(h->c_ctx)",local_198);
    if (iVar2 == 0) goto LAB_00107c60;
    iVar2 = ossl_quic_set_override_now_cb(local_198,get_time,local_208);
    iVar2 = test_true("test/quic_multistream_test.c",0x323,
                      "ossl_quic_set_override_now_cb(h->c_conn, get_time, h)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    SSL_set0_rbio(local_198,local_1b0);
    pBStack_1a8 = (BIO *)0x0;
    iVar2 = BIO_up_ref(local_1b0);
    iVar2 = test_true("test/quic_multistream_test.c",0x32a,"BIO_up_ref(h->c_net_bio)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    SSL_set0_wbio(local_198,local_1b0);
    iVar2 = SSL_set_blocking_mode(local_198,local_144);
    iVar2 = test_true("test/quic_multistream_test.c",0x32f,
                      "SSL_set_blocking_mode(h->c_conn, h->blocking)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00107c60;
    local_178 = ossl_crypto_mutex_new();
    iVar2 = test_ptr("test/quic_multistream_test.c",0x333,"h->misc_m = ossl_crypto_mutex_new()",
                     local_178);
    if (iVar2 == 0) goto LAB_00107c60;
    local_170 = ossl_crypto_condvar_new();
    iVar2 = test_ptr("test/quic_multistream_test.c",0x335,"h->misc_cv = ossl_crypto_condvar_new()",
                     local_170);
    if (iVar2 == 0) goto LAB_00107c60;
    if (local_144 != 0) {
      local_e8 = ossl_crypto_mutex_new();
      iVar2 = test_ptr("test/quic_multistream_test.c",0x33b,
                       "h->server_thread.m = ossl_crypto_mutex_new()",local_e8);
      if (iVar2 != 0) {
        local_e0 = ossl_crypto_condvar_new();
        iVar2 = test_ptr("test/quic_multistream_test.c",0x33e,
                         "h->server_thread.c = ossl_crypto_condvar_new()",local_e0);
        if (iVar2 != 0) {
          local_f0 = ossl_crypto_thread_native_start(server_helper_thread,local_208,1);
          iVar2 = test_ptr("test/quic_multistream_test.c",0x343,"h->server_thread.t",local_f0);
          if (iVar2 != 0) goto LAB_00108427;
        }
      }
      goto LAB_00107c60;
    }
LAB_00108427:
    local_168 = ossl_time_now();
    uVar3 = 1;
    local_148 = 1;
  }
  iVar2 = test_true("test/quic_multistream_test.c",0x82f,
                    "helper_init(&h, script_name, free_order, blocking, 1)",uVar3);
  if (iVar2 != 0) {
    iVar2 = run_script_worker(local_208,param_1,param_2,0xffffffff);
    iVar2 = test_true("test/quic_multistream_test.c",0x833,
                      "run_script_worker(&h, script, script_name, -1)",iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = join_threads(local_188,local_180);
      iVar2 = test_true("test/quic_multistream_test.c",0x837,
                        "join_threads(h.threads, h.num_threads)",iVar2 != 0);
      bVar6 = iVar2 != 0;
      goto LAB_00107c84;
    }
  }
  bVar6 = false;
LAB_00107c84:
  helper_cleanup(local_208);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



void test_script(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  char acStack_78 [72];
  long local_30;
  
  uVar2 = (int)param_1 / 2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 & uVar2 & 1) == 0) {
    iVar3 = (int)(param_1 - ((int)param_1 >> 0x1f)) >> 0x1f;
    iVar3 = (uVar2 - iVar3 & 1) + iVar3;
    uVar1 = (int)uVar2 / 2 + 1;
    BIO_snprintf(acStack_78,0x40,"script %d",(ulong)uVar1);
    test_info("test/quic_multistream_test.c",0x176e,"Running script %d (order=%d, blocking=%d)",
              uVar1,(int)param_1 % 2,iVar3);
    run_script(*(undefined8 *)(scripts + (long)((int)uVar2 / 2) * 8),acStack_78,(int)param_1 % 2,
               iVar3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_dyn_frame_types(int param_1)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  long in_FS_OFFSET;
  char acStack_68 [72];
  long local_20;
  
  lVar1 = (long)param_1 * 0x18;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = &dyn_frame_types_script;
  do {
    while (*piVar2 == 0x2b) {
      piVar3 = piVar2 + 0x12;
      *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(forbidden_frame_types + lVar1);
      *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(forbidden_frame_types + lVar1 + 8);
      piVar2 = piVar3;
      if (piVar3 == (int *)0x10c7d0) goto LAB_0010864d;
    }
    if (*piVar2 == 0x16) {
      *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(forbidden_frame_types + lVar1 + 0x10);
    }
    piVar2 = piVar2 + 0x12;
  } while (piVar2 != (int *)0x10c7d0);
LAB_0010864d:
  BIO_snprintf(acStack_68,0x40,"dyn script %d",(long)param_1);
  run_script(&dyn_frame_types_script,acStack_68,0,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/quic_multistream_test.c",0x17d0,"Error parsing test options\n");
  }
  else {
    certfile = test_get_argument(0);
    iVar1 = test_ptr("test/quic_multistream_test.c",0x17d4,"certfile = test_get_argument(0)",
                     certfile);
    if (iVar1 != 0) {
      keyfile = test_get_argument(1);
      iVar1 = test_ptr("test/quic_multistream_test.c",0x17d5,"keyfile = test_get_argument(1)",
                       keyfile);
      if (iVar1 != 0) {
        add_all_tests("test_dyn_frame_types",test_dyn_frame_types,0x28,1);
        add_all_tests("test_script",test_script,0x15c,1);
        return 1;
      }
    }
  }
  return 0;
}



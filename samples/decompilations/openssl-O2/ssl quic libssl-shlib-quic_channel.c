
undefined8 get_stream_limit(int param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x560);
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x558);
  }
  return uVar1;
}



void free_token(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void free_frame_data(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void ch_get_qlog(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined5 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined8 local_50;
  uint local_38;
  code *local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)&local_68;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (((*(long *)(param_1 + 0x48) == 0) && ((*(byte *)(param_1 + 0x625) & 2) != 0)) &&
     (((*(byte *)(param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x478) != '\0')))) {
    _local_68 = *(undefined8 *)(param_1 + 0x478);
    local_38 = *(byte *)(param_1 + 0x623) >> 1 & 1;
    uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x480);
    uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x485);
    uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
    local_50 = *(undefined8 *)(param_1 + 0x640);
    local_30 = get_time;
    local_28 = param_1;
    lVar1 = ossl_qlog_new_from_env(&local_68);
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      *(byte *)(param_1 + 0x625) = *(byte *)(param_1 + 0x625) & 0xfd;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void do_update(undefined8 param_1,long param_2)

{
  ossl_quic_stream_map_update_state(param_2 + 0x350,param_1);
  return;
}



undefined8 ch_generate_transport_params(long param_1)

{
  char *pcVar1;
  int iVar2;
  BUF_MEM *a;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined1 local_78 [56];
  long local_40;
  
  lVar6 = param_1 + 0x478;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (*(char *)(param_1 + 0x48d) != '\0') {
    lVar6 = param_1 + 0x48d;
  }
  if (((*(long *)(param_1 + 0x50) != 0) || ((*(byte *)(param_1 + 0x621) & 1) != 0)) ||
     (a = BUF_MEM_new(), a == (BUF_MEM *)0x0)) {
    a = (BUF_MEM *)0x0;
    uVar4 = 0;
    goto LAB_001001ac;
  }
  iVar2 = WPACKET_init(local_78,a);
  if (iVar2 != 0) {
    lVar3 = ossl_quic_wire_encode_transport_param_bytes(local_78,0xc,0,0);
    if (lVar3 != 0) {
      if ((*(byte *)(param_1 + 0x623) & 2) == 0) {
        iVar2 = ossl_quic_wire_encode_transport_param_cid(local_78,0xf,param_1 + 0x4a2);
joined_r0x0010046c:
        if (iVar2 != 0) {
LAB_00100251:
          iVar2 = ossl_quic_wire_encode_transport_param_int
                            (local_78,1,*(undefined8 *)(param_1 + 0x568));
          if (((iVar2 != 0) &&
              (iVar2 = ossl_quic_wire_encode_transport_param_int(local_78,3,0x4b0), iVar2 != 0)) &&
             ((iVar2 = ossl_quic_wire_encode_transport_param_int(local_78,0xe,2), iVar2 != 0 &&
              ((*(long *)(param_1 + 0x520) == 0x19 ||
               (iVar2 = ossl_quic_wire_encode_transport_param_int(local_78,0xb), iVar2 != 0)))))) {
            uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x110);
            iVar2 = ossl_quic_wire_encode_transport_param_int(local_78,4,uVar4);
            if ((iVar2 != 0) &&
               (((iVar2 = ossl_quic_wire_encode_transport_param_int
                                    (local_78,5,*(undefined8 *)(param_1 + 0x508)), iVar2 != 0 &&
                 (iVar2 = ossl_quic_wire_encode_transport_param_int
                                    (local_78,6,*(undefined8 *)(param_1 + 0x510)), iVar2 != 0)) &&
                (iVar2 = ossl_quic_wire_encode_transport_param_int
                                   (local_78,7,*(undefined8 *)(param_1 + 0x518)), iVar2 != 0)))) {
              uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x290);
              iVar2 = ossl_quic_wire_encode_transport_param_int(local_78,8,uVar4);
              if (iVar2 != 0) {
                uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x2f0);
                iVar2 = ossl_quic_wire_encode_transport_param_int(local_78,9,uVar4);
                if ((iVar2 != 0) && (iVar2 = WPACKET_finish(local_78), iVar2 != 0)) {
                  iVar2 = WPACKET_get_total_written(local_78,&local_80);
                  if (iVar2 != 0) {
                    pcVar1 = a->data;
                    uVar4 = *(undefined8 *)(param_1 + 0x28);
                    *(char **)(param_1 + 0x50) = pcVar1;
                    a->data = (char *)0x0;
                    iVar2 = ossl_quic_tls_set_transport_params(uVar4,pcVar1,local_80);
                    if (iVar2 != 0) {
                      uVar4 = ch_get_qlog(param_1);
                      iVar2 = ossl_qlog_event_try_begin
                                        (uVar4,4,"transport","parameters_set",
                                         "transport:parameters_set");
                      if (iVar2 != 0) {
                        ossl_qlog_str(uVar4,"owner","local");
                        ossl_qlog_bool(uVar4,"disable_active_migration",1);
                        if ((*(byte *)(param_1 + 0x623) & 2) == 0) {
                          ossl_qlog_str(uVar4,"initial_source_connection_id",&_LC9);
                        }
                        else {
                          ossl_qlog_bin(uVar4,"original_destination_connection_id",param_1 + 0x479,
                                        *(undefined1 *)(param_1 + 0x478));
                          ossl_qlog_bin(uVar4,"initial_source_connection_id",param_1 + 0x4cd,
                                        *(undefined1 *)(param_1 + 0x4cc));
                        }
                        ossl_qlog_u64(uVar4,"max_idle_timeout",*(undefined8 *)(param_1 + 0x578));
                        ossl_qlog_u64(uVar4,"max_udp_payload_size",0x4b0);
                        ossl_qlog_u64(uVar4,"active_connection_id_limit",2);
                        ossl_qlog_u64(uVar4,"max_ack_delay",*(undefined8 *)(param_1 + 0x520));
                        uVar5 = ossl_quic_rxfc_get_cwm(param_1 + 0x110);
                        ossl_qlog_u64(uVar4,"initial_max_data",uVar5);
                        ossl_qlog_u64(uVar4,"initial_max_stream_data_bidi_local",
                                      *(undefined8 *)(param_1 + 0x508));
                        ossl_qlog_u64(uVar4,"initial_max_stream_data_bidi_remote",
                                      *(undefined8 *)(param_1 + 0x510));
                        ossl_qlog_u64(uVar4,"initial_max_stream_data_uni",
                                      *(undefined8 *)(param_1 + 0x518));
                        uVar5 = ossl_quic_rxfc_get_cwm(param_1 + 0x290);
                        ossl_qlog_u64(uVar4,"initial_max_streams_bidi",uVar5);
                        uVar5 = ossl_quic_rxfc_get_cwm(param_1 + 0x2f0);
                        ossl_qlog_u64(uVar4,"initial_max_streams_uni",uVar5);
                        ossl_qlog_event_end(uVar4);
                      }
                      *(byte *)(param_1 + 0x621) = *(byte *)(param_1 + 0x621) | 1;
                      uVar4 = 1;
                      goto LAB_001001ac;
                    }
                  }
                  goto LAB_00100480;
                }
              }
            }
          }
        }
      }
      else {
        iVar2 = ossl_quic_wire_encode_transport_param_cid(local_78,0,lVar6);
        if ((iVar2 != 0) &&
           (iVar2 = ossl_quic_wire_encode_transport_param_cid(local_78,0xf,param_1 + 0x4cc),
           iVar2 != 0)) {
          if (*(char *)(param_1 + 0x48d) != '\0') {
            iVar2 = ossl_quic_wire_encode_transport_param_cid(local_78,0x10,param_1 + 0x478);
            goto joined_r0x0010046c;
          }
          goto LAB_00100251;
        }
      }
    }
    WPACKET_cleanup(local_78);
  }
LAB_00100480:
  uVar4 = 0;
LAB_001001ac:
  BUF_MEM_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void free_buf_mem(undefined8 param_1,undefined8 param_2,BUF_MEM *param_3)

{
  BUF_MEM_free(param_3);
  return;
}



undefined8 ch_on_crypto_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar2 = *(uint *)(param_4 + 0x620) >> 0xe & 7;
  if (uVar2 != 0) {
    uVar4 = (ulong)(((char)uVar2 != '\x02') + 1);
  }
  lVar1 = *(long *)(param_4 + 0x448 + uVar4 * 8);
  if (lVar1 != 0) {
    uVar3 = ossl_quic_sstream_append(lVar1,param_1,param_2,param_3);
    return uVar3;
  }
  return 0;
}



bool rx_late_validate(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = ossl_ackm_is_rx_pn_processable(*(undefined8 *)(param_3 + 0x418),param_1,param_2);
  return iVar1 != 0;
}



void ch_on_txp_ack_tx(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  
  if (param_2 != 2) {
    return;
  }
  if ((*(byte *)(param_3 + 0x624) & 4) != 0) {
    iVar1 = ossl_quic_frame_ack_contains_pn(param_1,*(undefined8 *)(param_3 + 0x618));
    if (iVar1 != 0) {
      *(byte *)(param_3 + 0x624) = *(byte *)(param_3 + 0x624) | 8;
      return;
    }
  }
  return;
}



void get_time(undefined8 *param_1)

{
  ossl_quic_port_get_time(*param_1);
  return;
}



undefined8 ch_init_new_stream(long param_1,long param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  byte bVar7;
  
  bVar1 = *(byte *)(param_2 + 0x100);
  bVar5 = *(byte *)(param_1 + 0x623) >> 1 & 1;
  if (param_3 != 0) {
    lVar4 = ossl_quic_sstream_new(0x2000);
    *(long *)(param_2 + 0x70) = lVar4;
    if (lVar4 == 0) {
      uVar6 = 0;
      goto LAB_00100808;
    }
  }
  if (param_4 == 0) {
LAB_00100740:
    lVar4 = param_2 + 0x80;
    iVar2 = ossl_quic_txfc_init(lVar4,param_1 + 0xf0);
    if (iVar2 != 0) {
      bVar7 = bVar1 & 2;
      bVar1 = bVar1 & 1;
      if ((*(char *)(param_1 + 0x620) < '\0') && ((param_3 & 1) != 0)) {
        if (bVar7 == 0) {
          if (bVar5 == bVar1) {
            ossl_quic_txfc_bump_cwm(lVar4,*(undefined8 *)(param_1 + 0x528));
            if (param_4 != 0) {
LAB_001008da:
              lVar4 = *(long *)(param_1 + 0x508);
              lVar3 = lVar4 * 0xc;
              goto LAB_001007dc;
            }
          }
          else {
            ossl_quic_txfc_bump_cwm(lVar4,*(undefined8 *)(param_1 + 0x530));
            if (param_4 != 0) goto LAB_00100797;
          }
        }
        else {
          ossl_quic_txfc_bump_cwm(lVar4,*(undefined8 *)(param_1 + 0x538));
          if (param_4 != 0) {
LAB_00100880:
            lVar4 = *(long *)(param_1 + 0x518);
            lVar3 = lVar4 * 0xc;
            goto LAB_001007dc;
          }
        }
LAB_001007d8:
        lVar3 = 0;
        lVar4 = 0;
      }
      else {
        if (param_4 == 0) goto LAB_001007d8;
        if (bVar7 != 0) goto LAB_00100880;
        if (bVar5 == bVar1) goto LAB_001008da;
LAB_00100797:
        lVar4 = *(long *)(param_1 + 0x510);
        lVar3 = lVar4 * 0xc;
      }
LAB_001007dc:
      iVar2 = ossl_quic_rxfc_init(param_2 + 0xa0,param_1 + 0x110,lVar4,lVar3,get_time,param_1);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  else {
    lVar4 = ossl_quic_rstream_new(0,0,0);
    *(long *)(param_2 + 0x78) = lVar4;
    if (lVar4 != 0) goto LAB_00100740;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x70);
LAB_00100808:
  ossl_quic_sstream_free(uVar6);
  *(undefined8 *)(param_2 + 0x70) = 0;
  ossl_quic_rstream_free(*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(param_2 + 0x78) = 0;
  return 0;
}



void ch_cleanup(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1[0x83] != 0) {
    ossl_ackm_on_pkt_space_discarded(param_1[0x83],0);
    ossl_ackm_on_pkt_space_discarded(param_1[0x83],1);
    ossl_ackm_on_pkt_space_discarded(param_1[0x83],2);
  }
  ossl_quic_lcidm_cull(param_1[7],param_1);
  ossl_quic_srtm_cull(param_1[8],param_1);
  ossl_quic_tx_packetiser_free(param_1[0x1b]);
  ossl_quic_txpim_free(param_1[0x1c]);
  ossl_quic_cfq_free(param_1[0x1d]);
  ossl_qtx_free(param_1[0x84]);
  if (param_1[0x81] != 0) {
    (**(code **)(param_1[0x82] + 8))();
  }
  if ((*(byte *)((long)param_1 + 0x621) & 0x10) != 0) {
    ossl_statm_destroy(param_1 + 0x7c);
  }
  ossl_ackm_free(param_1[0x83]);
  if ((*(byte *)((long)param_1 + 0x621) & 0x20) != 0) {
    ossl_quic_stream_map_cleanup(param_1 + 0x6a);
  }
  plVar4 = param_1 + 0x89;
  do {
    plVar5 = plVar4 + 1;
    ossl_quic_sstream_free(*plVar4);
    ossl_quic_rstream_free(plVar4[3]);
    plVar4 = plVar5;
  } while (plVar5 != param_1 + 0x8c);
  ossl_qrx_pkt_release(param_1[0xaa]);
  param_1[0xaa] = 0;
  ossl_quic_tls_free(param_1[5]);
  ossl_qrx_free(param_1[0x85]);
  CRYPTO_free((void *)param_1[10]);
  CRYPTO_free((void *)param_1[0xba]);
  OSSL_ERR_STATE_free(param_1[0xc5]);
  CRYPTO_free((void *)param_1[0xc6]);
  CRYPTO_free((void *)param_1[0xb]);
  if ((*(byte *)((long)param_1 + 0x625) & 1) != 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    if (param_1 == *(long **)(lVar1 + 0x48)) {
      *(long *)(lVar1 + 0x48) = lVar3;
    }
    lVar2 = param_1[2];
    if (param_1 == *(long **)(lVar1 + 0x50)) {
      *(long *)(lVar1 + 0x50) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
      lVar3 = param_1[1];
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    *(long *)(lVar1 + 0x58) = *(long *)(lVar1 + 0x58) + -1;
    *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
    *(byte *)((long)param_1 + 0x625) = *(byte *)((long)param_1 + 0x625) & 0xfe;
  }
  if (param_1[9] != 0) {
    ossl_qlog_flush();
  }
  CRYPTO_free((void *)param_1[200]);
  ossl_qlog_free(param_1[9]);
  return;
}



void copy_tcause(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = param_2[1];
  bVar1 = *(byte *)(param_1 + 4);
  *param_1 = *param_2;
  param_1[1] = uVar4;
  bVar2 = *(byte *)(param_2 + 4);
  *(byte *)(param_1 + 4) = bVar1 & 0xfe | bVar2 & 1;
  bVar3 = *(byte *)(param_2 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = bVar1 & 0xfc | bVar2 & 1 | bVar3 & 2;
  if ((param_2[2] != 0) && (lVar5 = param_2[3], lVar5 != 0)) {
    lVar6 = -2;
    if (lVar5 != -1) {
      lVar6 = lVar5;
    }
    lVar5 = CRYPTO_memdup(param_2[2],lVar6 + 1,"ssl/quic/quic_channel.c",0xc59);
    param_1[2] = lVar5;
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + lVar6) = 0;
      param_1[3] = lVar6;
      return;
    }
  }
  return;
}



byte txku_in_progress(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(byte *)((long)param_1 + 0x624) & 1) != 0) {
    uVar2 = ossl_ackm_get_largest_acked(param_1[0x83],2);
    if ((ulong)param_1[0xc2] <= uVar2) {
      uVar2 = ossl_ackm_get_pto_duration(param_1[0x83]);
      *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xfe;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      uVar2 = SUB168(auVar1 * ZEXT816(3),0);
      if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
        uVar2 = 0xffffffffffffffff;
      }
      uVar3 = ossl_quic_port_get_time(*param_1);
      lVar4 = uVar2 + uVar3;
      if (CARRY8(uVar2,uVar3)) {
        lVar4 = -1;
      }
      param_1[0xc0] = lVar4;
    }
    return *(byte *)((long)param_1 + 0x624) & 1;
  }
  return *(byte *)((long)param_1 + 0x624) & 1;
}



void free_peer_token(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ossl_quic_free_peer_token(param_3);
  return;
}



void txfc_bump_cwm_uni(long param_1,undefined8 *param_2)

{
  if (((*(byte *)(param_1 + 0x100) & 2) != 0) && ((*(byte *)(param_1 + 0x100) & 1) == 0)) {
    ossl_quic_txfc_bump_cwm(param_1 + 0x80,*param_2);
    return;
  }
  return;
}



void ch_update_ping_deadline(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  
  if (param_1[0xaf] != 0) {
    uVar2 = ossl_ackm_get_pto_duration(param_1[0x83]);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    uVar2 = SUB168(auVar1 * ZEXT816(3),0);
    if (SUB168(auVar1 * ZEXT816(3),8) == 0) {
      if (uVar2 <= (ulong)(param_1[0xaf] * 1000000)) {
        uVar2 = param_1[0xaf] * 1000000;
      }
      if (uVar2 != 0xffffffffffffffff) {
        uVar3 = uVar2 >> 1;
        if (49999999999 < uVar2) {
          uVar3 = 25000000000;
        }
        uVar2 = ossl_quic_port_get_time(*param_1);
        if (!CARRY8(uVar2,uVar3)) {
          param_1[0xbf] = uVar2 + uVar3;
          return;
        }
      }
    }
  }
  param_1[0xbf] = 0xffffffffffffffff;
  return;
}



void ch_discard_el_isra_0(long param_1,uint param_2)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x622) >> 4) >> (param_2 & 0x1f) & 1) != 0) {
    return;
  }
  ossl_quic_tx_packetiser_discard_enc_level(*(undefined8 *)(param_1 + 0xd8));
  ossl_qrx_discard_enc_level(*(undefined8 *)(param_1 + 0x428),param_2);
  ossl_qtx_discard_enc_level(*(undefined8 *)(param_1 + 0x420),param_2);
  lVar1 = param_1 + (ulong)(param_2 != 0) * 8;
  ossl_ackm_on_pkt_space_discarded(*(undefined8 *)(param_1 + 0x418),(ulong)(param_2 != 0));
  if ((*(long *)(lVar1 + 0x448) != 0) && (*(long *)(lVar1 + 0x460) != 0)) {
    ossl_quic_sstream_free();
    *(undefined8 *)(lVar1 + 0x448) = 0;
    ossl_quic_rstream_free(*(undefined8 *)(lVar1 + 0x460));
    *(undefined8 *)(lVar1 + 0x460) = 0;
    *(byte *)(param_1 + 0x622) =
         *(byte *)(param_1 + 0x622) & 0xf |
         (byte)(((uint)(*(byte *)(param_1 + 0x622) >> 4) | 1 << ((byte)param_2 & 0x1f)) << 4);
  }
  return;
}



void txfc_bump_cwm_bidi(long param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 0x100) & 3) != 0) {
    return;
  }
  ossl_quic_txfc_bump_cwm(param_1 + 0x80,*param_2);
  return;
}



void ch_update_idle(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0xffffffffffffffff;
  if (param_1[0xaf] != 0) {
    uVar3 = ossl_ackm_get_pto_duration(param_1[0x83]);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    uVar2 = SUB168(auVar1 * ZEXT816(3),0);
    if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    uVar3 = param_1[0xaf] * 1000000;
    if ((ulong)(param_1[0xaf] * 1000000) < uVar2) {
      uVar3 = uVar2;
    }
  }
  uVar2 = ossl_quic_port_get_time(*param_1);
  lVar4 = uVar3 + uVar2;
  if (CARRY8(uVar3,uVar2)) {
    lVar4 = -1;
  }
  param_1[0xbe] = lVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ch_init(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  long local_248;
  code *local_240;
  long *local_238;
  code *local_230;
  long *local_228;
  code *local_220;
  long *local_218;
  code *local_210;
  long *local_208;
  code *local_200;
  long *local_1f8;
  code *local_1f0;
  long *local_1e8;
  code *local_1e0;
  long *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined5 local_178;
  undefined5 uStack_170;
  undefined3 uStack_16b;
  undefined5 uStack_168;
  long local_163;
  undefined5 uStack_15b;
  undefined3 uStack_156;
  undefined5 uStack_153;
  undefined4 local_dc;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  long local_88;
  code *local_80;
  long *local_78;
  code *local_70;
  long *local_68;
  undefined4 local_60;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_188 = 0;
  local_278 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  local_258 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  puVar8 = (undefined8 *)&local_178;
  for (lVar5 = 0x27; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_1a8 = (undefined1  [16])0x0;
  plVar7 = &local_248;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar7 = 0;
    plVar7 = plVar7 + 1;
  }
  local_198 = (undefined1  [16])0x0;
  if (((*param_1 != 0) && (param_1[7] != 0)) && (param_1[8] != 0)) {
    iVar1 = ossl_quic_port_get_rx_short_dcid_len();
    iVar2 = ossl_quic_port_get_tx_init_dcid_len(*param_1);
    if ((*(byte *)((long)param_1 + 0x623) & 2) == 0) {
      iVar2 = ossl_quic_gen_rand_conn_id(**(undefined8 **)*param_1,(long)iVar2,param_1 + 0x8f);
      if (iVar2 == 0) goto LAB_001015a0;
    }
    local_278._0_8_ = **(undefined8 **)*param_1;
    param_1[0xb0] = 0x4b0;
    param_1[0xbf] = -1;
    local_258._8_8_ = param_1;
    local_258._0_8_ = ch_get_qlog_cb;
    local_268._8_8_ = 0x4b0;
    lVar5 = ossl_qtx_new(local_278);
    param_1[0x84] = lVar5;
    if (lVar5 != 0) {
      lVar5 = ossl_quic_txpim_new();
      param_1[0x1c] = lVar5;
      if (lVar5 != 0) {
        lVar5 = ossl_quic_cfq_new();
        param_1[0x1d] = lVar5;
        if (lVar5 != 0) {
          iVar2 = ossl_quic_txfc_init(param_1 + 0x1e,0);
          lVar3 = _UNK_00106ca8;
          lVar5 = __LC20;
          if (iVar2 != 0) {
            param_1[0xa3] = 0x80000;
            param_1[0xa1] = lVar5;
            param_1[0xa2] = lVar3;
            iVar2 = ossl_quic_rxfc_init(param_1 + 0x22,0,0xc0000,0xf00000,get_time,param_1);
            if (iVar2 != 0) {
              plVar7 = param_1 + 0x52;
              plVar6 = param_1 + 0x2e;
              do {
                iVar2 = ossl_quic_rxfc_init_standalone(plVar6,0x4000,get_time,param_1);
                if (iVar2 == 0) goto LAB_001015a0;
                plVar6 = plVar6 + 0xc;
              } while (plVar6 != plVar7);
              iVar2 = ossl_quic_rxfc_init_standalone(plVar7,100,get_time,param_1);
              if (iVar2 != 0) {
                plVar6 = param_1 + 0x5e;
                iVar2 = ossl_quic_rxfc_init_standalone(plVar6,100,get_time,param_1);
                if (iVar2 != 0) {
                  iVar2 = ossl_statm_init(param_1 + 0x7c);
                  if (iVar2 != 0) {
                    *(byte *)((long)param_1 + 0x621) = *(byte *)((long)param_1 + 0x621) | 0x10;
                    param_1[0x82] = (long)&ossl_cc_newreno_method;
                    lVar5 = (*_ossl_cc_newreno_method)(get_time,param_1);
                    param_1[0x81] = lVar5;
                    if (lVar5 != 0) {
                      lVar5 = ossl_ackm_new(get_time,param_1,param_1 + 0x7c,param_1[0x82],lVar5);
                      param_1[0x83] = lVar5;
                      if (lVar5 != 0) {
                        iVar2 = ossl_quic_stream_map_init
                                          (param_1 + 0x6a,0x100000,param_1,plVar7,plVar6,
                                           *(byte *)((long)param_1 + 0x623) >> 1 & 1);
                        if ((iVar2 != 0) &&
                           ((*(byte *)((long)param_1 + 0x621) =
                                  *(byte *)((long)param_1 + 0x621) | 0x20,
                            (*(byte *)((long)param_1 + 0x623) & 2) != 0 ||
                            (iVar2 = ossl_quic_lcidm_generate_initial
                                               (param_1[7],param_1,(long)param_1 + 0x4a2),
                            iVar2 != 0)))) {
                          _local_178 = *(undefined8 *)((long)param_1 + 0x4a2);
                          lVar5 = 0;
                          local_163 = param_1[0x8f];
                          local_70 = ch_get_qlog_cb;
                          uStack_170 = (undefined5)*(undefined8 *)((long)param_1 + 0x4aa);
                          local_c8 = param_1[0x1d];
                          local_d8 = param_1[0x84];
                          uStack_16b = (undefined3)*(undefined8 *)((long)param_1 + 0x4af);
                          uStack_168 = (undefined5)
                                       ((ulong)*(undefined8 *)((long)param_1 + 0x4af) >> 0x18);
                          uStack_15b = (undefined5)param_1[0x90];
                          lStack_c0 = param_1[0x83];
                          lStack_d0 = param_1[0x1c];
                          uStack_156 = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
                          uStack_153 = (undefined5)
                                       ((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
                          local_dc = 3;
                          local_90 = param_1[0x82];
                          local_88 = param_1[0x81];
                          local_80 = get_time;
                          local_60 = 1;
                          local_b8 = param_1 + 0x6a;
                          local_b0 = param_1 + 0x1e;
                          local_a8 = param_1 + 0x22;
                          local_a0 = plVar7;
                          local_98 = plVar6;
                          local_78 = param_1;
                          local_68 = param_1;
                          do {
                            lVar3 = ossl_quic_sstream_new(0x4000);
                            *(long *)((long)param_1 + lVar5 + 0x448) = lVar3;
                            if (lVar3 == 0) goto LAB_001015a0;
                            *(long *)((long)local_58 + lVar5) = lVar3;
                            lVar5 = lVar5 + 8;
                          } while (lVar5 != 0x18);
                          lVar5 = ossl_quic_tx_packetiser_new(&local_178);
                          param_1[0x1b] = lVar5;
                          if (lVar5 != 0) {
                            if ((*(byte *)((long)param_1 + 0x623) & 2) == 0) {
                              ossl_quic_tx_packetiser_set_validated(lVar5);
                            }
                            ossl_quic_tx_packetiser_set_ack_tx_cb
                                      (param_1[0x1b],ch_on_txp_ack_tx,param_1);
                            if (param_1[0x85] == 0) {
                              if ((*(byte *)((long)param_1 + 0x625) & 4) == 0) {
                                local_1b8._8_8_ = (long)iVar1;
                                local_1b8._0_8_ = ((undefined8 *)*param_1)[8];
                                local_1c8._0_8_ = **(undefined8 **)*param_1;
                                local_1a8._0_8_ = 0x20;
                                lVar5 = ossl_qrx_new(local_1c8);
                                param_1[0x85] = lVar5;
                                if (lVar5 == 0) goto LAB_001015a0;
                                goto LAB_0010137c;
                              }
                            }
                            else {
LAB_0010137c:
                              iVar1 = ossl_qrx_set_late_validation_cb
                                                (param_1[0x85],rx_late_validate,param_1);
                              if ((iVar1 == 0) ||
                                 (iVar1 = ossl_qrx_set_key_update_cb
                                                    (param_1[0x85],rxku_detected,param_1),
                                 iVar1 == 0)) goto LAB_001015a0;
                            }
                            plVar7 = param_1 + 0x8c;
                            do {
                              lVar5 = ossl_quic_rstream_new(0,0,0);
                              *plVar7 = lVar5;
                              if (lVar5 == 0) goto LAB_001015a0;
                              plVar7 = plVar7 + 1;
                            } while (param_1 + 0x8f != plVar7);
                            local_248 = param_1[6];
                            local_240 = ch_on_crypto_send;
                            local_230 = ch_on_crypto_recv_record;
                            local_220 = ch_on_crypto_release_record;
                            local_210 = ch_on_handshake_yield_secret;
                            local_200 = ch_on_transport_params;
                            local_1f0 = ch_on_handshake_complete;
                            local_1e0 = ch_on_handshake_alert;
                            local_1d0 = *(byte *)((long)param_1 + 0x623) >> 1 & 1;
                            local_1cc = 1;
                            local_238 = param_1;
                            local_228 = param_1;
                            local_218 = param_1;
                            local_208 = param_1;
                            local_1f8 = param_1;
                            local_1e8 = param_1;
                            local_1d8 = param_1;
                            lVar5 = ossl_quic_tls_new(&local_248);
                            param_1[5] = lVar5;
                            if (lVar5 != 0) {
                              *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfff03fff;
                              lVar3 = _UNK_00106cb8;
                              lVar5 = __LC21;
                              *(undefined1 *)(param_1 + 0xa9) = 3;
                              param_1[0xa4] = 0x19;
                              param_1[0xa8] = 0x19;
                              param_1[0xb1] = 2;
                              param_1[0xb7] = -1;
                              param_1[0xaf] = 30000;
                              param_1[0xad] = lVar5;
                              param_1[0xae] = lVar3;
                              ossl_ackm_set_tx_max_ack_delay(param_1[0x83],25000000);
                              ossl_ackm_set_rx_max_ack_delay(param_1[0x83],param_1[0xa8] * 1000000);
                              ch_update_idle(param_1);
                              lVar5 = *param_1;
                              lVar3 = *(long *)(lVar5 + 0x50);
                              if (lVar3 != 0) {
                                *(long **)(lVar3 + 8) = param_1;
                              }
                              param_1[2] = lVar3;
                              lVar3 = *(long *)(lVar5 + 0x48);
                              param_1[1] = 0;
                              *(long **)(lVar5 + 0x50) = param_1;
                              if (lVar3 == 0) {
                                *(long **)(lVar5 + 0x48) = param_1;
                              }
                              *(long *)(lVar5 + 0x58) = *(long *)(lVar5 + 0x58) + 1;
                              uVar4 = 1;
                              *(byte *)((long)param_1 + 0x625) =
                                   *(byte *)((long)param_1 + 0x625) | 1;
                              goto LAB_001015aa;
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
LAB_001015a0:
  ch_cleanup(param_1);
  uVar4 = 0;
LAB_001015aa:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void ch_get_qlog_cb(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined5 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined8 local_50;
  uint local_38;
  code *local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)&local_68;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (((*(long *)(param_1 + 0x48) == 0) && ((*(byte *)(param_1 + 0x625) & 2) != 0)) &&
     (((*(byte *)(param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x478) != '\0')))) {
    _local_68 = *(undefined8 *)(param_1 + 0x478);
    local_38 = *(byte *)(param_1 + 0x623) >> 1 & 1;
    uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x480);
    uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x485);
    uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
    local_50 = *(undefined8 *)(param_1 + 0x640);
    local_30 = get_time;
    local_28 = param_1;
    lVar1 = ossl_qlog_new_from_env(&local_68);
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      *(byte *)(param_1 + 0x625) = *(byte *)(param_1 + 0x625) & 0xfd;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ch_start_terminating(undefined8 *param_1,long param_2,int param_3)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  long in_FS_OFFSET;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar8 = *(byte *)(param_1 + 0xc4);
  if ((bVar8 & 0x20) == 0) {
    bVar2 = bVar8 & 7;
    if (bVar2 != 3) {
      if (bVar2 < 4) {
        if (bVar2 == 1) {
          param_3 = 1;
LAB_0010184e:
          copy_tcause(param_1 + 0xb8,param_2);
          uVar4 = ch_get_qlog(param_1);
          ossl_qlog_event_connectivity_connection_closed(uVar4,param_2);
          if (param_3 != 0) {
            bVar3 = *(byte *)(param_1 + 0xc4) & 7;
            *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xf8 | 4;
            bVar2 = *(byte *)((long)param_1 + 0x621) >> 2 & 1;
            bVar8 = *(byte *)((long)param_1 + 0x621) >> 1 & 1;
            uVar4 = ch_get_qlog(param_1);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar7 = 4;
              goto LAB_001019f7;
            }
            goto LAB_00101b31;
          }
          bVar3 = *(byte *)(param_2 + 0x20) & 2;
          bVar8 = *(byte *)(param_1 + 0xc4);
          *(byte *)(param_1 + 0xc4) = bVar8 & 0xf8 | 3U - (bVar3 == 0) & 7;
          bVar2 = *(byte *)((long)param_1 + 0x621);
          uVar4 = ch_get_qlog(param_1);
          ossl_qlog_event_connectivity_connection_state_updated
                    (uVar4,bVar8 & 7,3 - (uint)(bVar3 == 0),bVar2 >> 1 & 1,bVar2 >> 2 & 1);
          uVar5 = ossl_ackm_get_pto_duration(param_1[0x83]);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar5;
          uVar5 = SUB168(auVar1 * ZEXT816(3),0);
          if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
            uVar5 = 0xffffffffffffffff;
          }
          uVar6 = ossl_quic_port_get_time(*param_1);
          lVar9 = uVar5 + uVar6;
          if (CARRY8(uVar5,uVar6)) {
            lVar9 = -1;
          }
          param_1[0xbd] = lVar9;
          if ((*(byte *)(param_2 + 0x20) & 2) == 0) {
            local_60 = param_1[0xb8];
            uStack_58 = param_1[0xb9];
            local_68 = (ulong)*(byte *)(param_1 + 0xbc) & 0xffffffffffffff01;
            local_50 = param_1[0xba];
            local_48 = param_1[0xbb];
            ossl_quic_tx_packetiser_schedule_conn_close(param_1[0x1b],&local_68);
            *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 1;
          }
          goto LAB_00101820;
        }
        if (bVar2 == 2) {
LAB_00101786:
          *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xf8 | 4;
          bVar2 = *(byte *)((long)param_1 + 0x621) >> 2 & 1;
          bVar8 = *(byte *)((long)param_1 + 0x621) >> 1 & 1;
          uVar4 = ch_get_qlog(param_1);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar7 = 4;
            bVar3 = 2;
            goto LAB_001019f7;
          }
          goto LAB_00101b31;
        }
      }
      else {
LAB_00101980:
        if ((bVar8 & 7) == 4) goto LAB_00101820;
      }
LAB_00101989:
      copy_tcause(param_1 + 0xb8,param_2);
      bVar3 = *(byte *)(param_1 + 0xc4) & 7;
      *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xf8 | 4;
      bVar8 = *(byte *)((long)param_1 + 0x621);
      uVar4 = ch_get_qlog(param_1);
      bVar2 = bVar8 >> 2 & 1;
      bVar8 = bVar8 >> 1 & 1;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = 4;
        goto LAB_001019f7;
      }
      goto LAB_00101b31;
    }
LAB_00101a20:
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xf8 | 4;
    bVar2 = *(byte *)((long)param_1 + 0x621) >> 2 & 1;
    bVar8 = *(byte *)((long)param_1 + 0x621) >> 1 & 1;
    uVar4 = ch_get_qlog(param_1);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 4;
      bVar3 = 3;
LAB_001019f7:
      ossl_qlog_event_connectivity_connection_state_updated(uVar4,bVar3,uVar7,bVar8,bVar2);
      return;
    }
  }
  else {
    bVar2 = bVar8 & 7;
    if (bVar2 == 3) {
      if (param_3 != 0) goto LAB_00101a20;
    }
    else {
      if (3 < bVar2) goto LAB_00101980;
      if (bVar2 == 1) goto LAB_0010184e;
      if (bVar2 != 2) goto LAB_00101989;
      if (param_3 != 0) goto LAB_00101786;
      if ((*(byte *)(param_2 + 0x20) & 2) != 0) {
        *(byte *)(param_1 + 0xc4) = bVar8 & 0xf8 | 3;
        bVar2 = *(byte *)((long)param_1 + 0x621) >> 2 & 1;
        bVar8 = *(byte *)((long)param_1 + 0x621) >> 1 & 1;
        uVar4 = ch_get_qlog();
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = 3;
          bVar3 = 2;
          goto LAB_001019f7;
        }
        goto LAB_00101b31;
      }
    }
LAB_00101820:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00101b31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ch_on_new_conn_common
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = BIO_ADDR_copy(param_1 + 0xd);
  if (iVar3 != 0) {
    uVar4 = param_4[1];
    param_1[0x8f] = *param_4;
    param_1[0x90] = uVar4;
    *(undefined8 *)((long)param_1 + 0x485) = *(undefined8 *)((long)param_4 + 0xd);
    uVar4 = param_3[1];
    *(undefined8 *)((long)param_1 + 0x4e1) = *param_3;
    *(undefined8 *)((long)param_1 + 0x4e9) = uVar4;
    uVar4 = *(undefined8 *)((long)param_3 + 0xd);
    *(undefined1 *)((long)param_1 + 0x48d) = 0;
    *(undefined8 *)((long)param_1 + 0x4ee) = uVar4;
    if (param_5 != (undefined8 *)0x0) {
      uVar4 = param_5[1];
      *(undefined8 *)((long)param_1 + 0x48d) = *param_5;
      *(undefined8 *)((long)param_1 + 0x495) = uVar4;
      *(undefined8 *)((long)param_1 + 0x49a) = *(undefined8 *)((long)param_5 + 0xd);
    }
    iVar3 = ossl_quic_tx_packetiser_set_peer(param_1[0x1b],param_1 + 0xd);
    if (((iVar3 != 0) &&
        (iVar3 = ossl_quic_tx_packetiser_set_cur_dcid(param_1[0x1b],(long)param_1 + 0x4e1),
        iVar3 != 0)) &&
       (iVar3 = ossl_quic_tx_packetiser_set_cur_scid(param_1[0x1b],(long)param_1 + 0x4cc),
       iVar3 != 0)) {
      ossl_qtx_set_qlog_cb(param_1[0x84],ch_get_qlog_cb,param_1);
      ossl_quic_tx_packetiser_set_qlog_cb(param_1[0x1b],ch_get_qlog_cb,param_1);
      iVar3 = ossl_quic_provide_initial_secret
                        (**(undefined8 **)*param_1,(*(undefined8 **)*param_1)[1],param_1 + 0x8f,1,0,
                         param_1[0x84]);
      if (iVar3 != 0) {
        if (param_5 == (undefined8 *)0x0) {
          param_5 = param_1 + 0x8f;
        }
        iVar3 = ossl_quic_lcidm_enrol_odcid(param_1[7],param_1,param_5);
        if (iVar3 != 0) {
          bVar1 = *(byte *)(param_1 + 0xc4);
          bVar2 = *(byte *)((long)param_1 + 0x621);
          *(byte *)(param_1 + 0xc4) = bVar1 & 0xf8 | 1;
          uVar4 = ch_get_qlog(param_1);
          ossl_qlog_event_connectivity_connection_state_updated
                    (uVar4,bVar1 & 7,1,bVar2 >> 1 & 1,bVar2 >> 2 & 1);
          *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xbf;
          return 1;
        }
      }
    }
  }
  return 0;
}



void ossl_quic_channel_init(void)

{
  ch_init();
  return;
}



void ossl_quic_channel_bind_qrx(long param_1,undefined8 param_2)

{
  if ((*(long *)(param_1 + 0x428) == 0) && ((*(byte *)(param_1 + 0x625) & 4) != 0)) {
    *(undefined8 *)(param_1 + 0x428) = param_2;
    ossl_qrx_set_late_validation_cb(param_2,rx_late_validate,param_1);
    ossl_qrx_set_key_update_cb(*(undefined8 *)(param_1 + 0x428),rxku_detected,param_1);
    return;
  }
  return;
}



undefined8 * ossl_quic_channel_alloc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *ptr;
  char *pcVar6;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x648,"ssl/quic/quic_channel.c",0x1d1);
  if (ptr != (undefined8 *)0x0) {
    uVar3 = *(uint *)(param_1 + 4);
    uVar1 = param_1[5];
    *ptr = *param_1;
    uVar2 = param_1[1];
    ptr[8] = param_1[2];
    uVar5 = param_1[3];
    ptr[6] = uVar1;
    ptr[7] = uVar2;
    ptr[0x85] = uVar5;
    uVar4 = *(uint *)(param_1 + 6);
    ptr[0xc4] = (ulong)(uVar4 & 1) << 0x29 | (ulong)(uVar3 & 1) << 0x19 |
                (ulong)(*(uint *)((long)param_1 + 0x34) & 1) << 0x2a |
                ptr[0xc4] & 0xfffff9fffdffffff;
    if ((ulong)(uVar4 & 1) == 0) {
      return ptr;
    }
    if ((char *)param_1[7] == (char *)0x0) {
      return ptr;
    }
    pcVar6 = CRYPTO_strdup((char *)param_1[7],"ssl/quic/quic_channel.c",0x1df);
    ptr[200] = pcVar6;
    if (pcVar6 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void ossl_quic_channel_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ch_cleanup();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_quic_channel_set_mutator(long param_1)

{
  if (*(long *)(param_1 + 0x420) != 0) {
    ossl_qtx_set_mutator();
    return 1;
  }
  return 0;
}



undefined8 ossl_quic_channel_get_peer_addr(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (-1 < *(char *)(param_1 + 0x624)) {
    return 0;
  }
  uVar1 = BIO_ADDR_copy(param_2,param_1 + 0x68);
  return uVar1;
}



undefined8 ossl_quic_channel_set_peer_addr(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x620) & 7) != 0) {
    return 0;
  }
  if ((param_2 == 0) || (iVar1 = BIO_ADDR_family(param_2), iVar1 == 0)) {
    BIO_ADDR_clear(param_1 + 0x68);
    *(byte *)(param_1 + 0x624) = *(byte *)(param_1 + 0x624) & 0x7f;
  }
  else {
    iVar1 = BIO_ADDR_copy(param_1 + 0x68,param_2);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x624) = *(byte *)(param_1 + 0x624) & 0x7f;
      return 0;
    }
    *(byte *)(param_1 + 0x624) = *(byte *)(param_1 + 0x624) | 0x80;
  }
  return 1;
}



void ossl_quic_channel_get_reactor(undefined8 *param_1)

{
  ossl_quic_port_get0_reactor(*param_1);
  return;
}



long ossl_quic_channel_get_qsm(long param_1)

{
  return param_1 + 0x350;
}



long ossl_quic_channel_get_statm(long param_1)

{
  return param_1 + 0x3e0;
}



undefined8 ch_on_crypto_release_record(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  long in_FS_OFFSET;
  undefined8 local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  bVar5 = *(byte *)(param_2 + 0x622) >> 1;
  if ((bVar5 & 7) != 0) {
    uVar3 = (ulong)(((bVar5 & 7) != 2) + 1);
  }
  lVar1 = *(long *)(param_2 + 0x460 + uVar3 * 8);
  if (lVar1 != 0) {
    uVar4 = ossl_quic_channel_get_statm(param_2);
    ossl_statm_get_rtt_info(uVar4,local_58);
    iVar2 = ossl_quic_rxfc_on_retire(param_2 + 0x170 + uVar3 * 0x60,param_1,local_58[0]);
    if (iVar2 != 0) {
      uVar4 = ossl_quic_rstream_release_record(lVar1,param_1);
      goto LAB_00102051;
    }
  }
  uVar4 = 0;
LAB_00102051:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_channel_get0_tls(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 ossl_quic_channel_schedule_new_token(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  BUF_MEM *a;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  a = BUF_MEM_new();
  if (a != (BUF_MEM *)0x0) {
    iVar1 = WPACKET_init(local_68,a);
    if (iVar1 != 0) {
      iVar1 = ossl_quic_wire_encode_frame_new_token(local_68,param_2,param_3);
      if (iVar1 == 0) {
        WPACKET_cleanup(local_68);
      }
      else {
        WPACKET_finish();
        iVar1 = WPACKET_get_total_written(local_68,&local_70);
        if (iVar1 != 0) {
          lVar2 = ossl_quic_cfq_add_frame
                            (*(undefined8 *)(param_1 + 0xe8),1,2,7,0,a->data,local_70,free_buf_mem,a
                            );
          if (lVar2 != 0) {
            uVar3 = 1;
            goto LAB_001020fd;
          }
        }
      }
    }
  }
  BUF_MEM_free(a);
  uVar3 = 0;
LAB_001020fd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ossl_quic_channel_get_short_header_conn_id_len(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = ossl_quic_port_get_rx_short_dcid_len(*param_1);
  return (long)iVar1;
}



void ossl_quic_channel_get_stream_by_id(long param_1)

{
  ossl_quic_stream_map_get_by_id(param_1 + 0x350);
  return;
}



bool ossl_quic_channel_is_active(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (*(byte *)(param_1 + 0x620) & 7) == 1;
  }
  return bVar1;
}



bool ossl_quic_channel_is_closing(long param_1)

{
  return (*(byte *)(param_1 + 0x620) & 7) == 2;
}



bool ossl_quic_channel_is_terminated(long param_1)

{
  return (*(byte *)(param_1 + 0x620) & 7) == 4;
}



bool ossl_quic_channel_is_term_any(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = ossl_quic_channel_is_closing();
  bVar2 = true;
  if ((iVar1 == 0) && ((*(byte *)(param_1 + 0x620) & 7) != 3)) {
    iVar1 = ossl_quic_channel_is_terminated(param_1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



long ossl_quic_channel_get_terminate_cause(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_quic_channel_is_term_any();
  lVar2 = 0;
  if (iVar1 != 0) {
    lVar2 = param_1 + 0x5c0;
  }
  return lVar2;
}



byte ossl_quic_channel_is_handshake_complete(long param_1)

{
  return *(byte *)(param_1 + 0x621) >> 1 & 1;
}



byte ossl_quic_channel_is_handshake_confirmed(long param_1)

{
  return *(byte *)(param_1 + 0x621) >> 2 & 1;
}



undefined8 ossl_quic_channel_get0_demux(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x40);
}



undefined8 ossl_quic_channel_get0_port(undefined8 *param_1)

{
  return *param_1;
}



void ossl_quic_channel_get0_engine(undefined8 *param_1)

{
  ossl_quic_port_get0_engine(*param_1);
  return;
}



void ossl_quic_channel_get_mutex(undefined8 *param_1)

{
  ossl_quic_port_get0_mutex(*param_1);
  return;
}



bool ossl_quic_channel_has_pending(long *param_1)

{
  int iVar1;
  
  iVar1 = ossl_quic_demux_has_pending(*(undefined8 *)(*param_1 + 0x40));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = ossl_qrx_processed_read_pending(param_1[0x85]);
  return iVar1 != 0;
}



void ossl_quic_channel_local_close(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_28 = 0;
  local_38 = (undefined1  [16])0x0;
  iVar2 = ossl_quic_channel_is_term_any();
  if (iVar2 == 0) {
    local_28 = local_28 | 1;
    sVar3 = 0;
    local_48._0_8_ = param_2;
    local_38._0_8_ = param_3;
    pcVar1 = param_3;
    if (param_3 != (char *)0x0) {
      sVar3 = strlen(param_3);
      pcVar1 = (char *)local_38._0_8_;
    }
    local_38._0_8_ = pcVar1;
    local_38._8_8_ = sVar3;
    ch_start_terminating(param_1,local_48,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_channel_on_remote_conn_close(undefined8 param_1,byte *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_28 = 0;
  local_38 = (undefined1  [16])0x0;
  iVar1 = ossl_quic_channel_is_active();
  if (iVar1 != 0) {
    local_48 = *(undefined1 (*) [16])(param_2 + 8);
    local_28 = CONCAT71(local_28._1_7_,*param_2 & 1 | 2 | (byte)local_28 & 0xfc);
    local_38 = *(undefined1 (*) [16])(param_2 + 0x18);
    ch_start_terminating(param_1,local_48,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_channel_inject(long param_1)

{
  ossl_qrx_inject_urxe(*(undefined8 *)(param_1 + 0x428));
  return;
}



void ossl_quic_channel_inject_pkt(long param_1)

{
  ossl_qrx_inject_pkt(*(undefined8 *)(param_1 + 0x428));
  return;
}



void ossl_quic_channel_on_stateless_reset(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  local_18 = 2;
  ch_start_terminating(param_1,local_38,0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_channel_raise_net_error(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (undefined1  [16])0x0;
  local_20 = (undefined1  [16])0x0;
  if ((*(byte *)(param_1 + 0x624) & 0x20) == 0) {
    local_38 = 1;
    *(byte *)(param_1 + 0x624) = *(byte *)(param_1 + 0x624) | 0x20;
    local_30 = ZEXT816(0x105ce6) << 0x40;
    local_20 = ZEXT816(0x15);
    ch_start_terminating(param_1,&local_38,1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



byte ossl_quic_channel_net_error(long param_1)

{
  return *(byte *)(param_1 + 0x624) >> 5 & 1;
}



void ossl_quic_channel_restore_err_state(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  iVar1 = ossl_quic_port_is_running(*param_1);
  if (iVar1 == 0) {
    ossl_quic_port_restore_err_state(*param_1);
    return;
  }
  OSSL_ERR_STATE_restore(param_1[0xc5]);
  return;
}



void ossl_quic_channel_raise_protocol_error_loc
               (long param_1,long param_2,long param_3,char *param_4,long param_5,long param_6,
               undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  undefined *puVar7;
  long in_FS_OFFSET;
  undefined *local_88;
  undefined *local_80;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  uVar1 = 0xc0103;
  if (param_2 != 1) {
    uVar1 = 0x17e;
  }
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  puVar2 = (undefined *)ossl_quic_err_to_string(param_2);
  if ((*(byte *)(param_1 + 0x624) & 0x40) != 0) goto LAB_001027b8;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = &_LC9;
    local_80 = &_LC9;
    local_88 = &_LC9;
  }
  else {
    local_80 = &_LC24;
    local_88 = &_LC25;
  }
  if (param_5 != 0) {
    OSSL_ERR_STATE_restore(param_5);
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_channel.c",0xdde,"ossl_quic_channel_raise_protocol_error_loc");
    ERR_set_error(0x14,uVar1,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"",param_2,local_88,puVar2
                  ,local_80);
  }
  else {
    puVar3 = (undefined *)ossl_quic_frame_type_to_string(param_3);
    puVar4 = &_LC24;
    puVar7 = &_LC25;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = &_LC9;
      puVar3 = &_LC9;
      puVar7 = puVar4;
    }
    ERR_new();
    ERR_set_debug("ssl/quic/quic_channel.c",0xdd5,"ossl_quic_channel_raise_protocol_error_loc");
    ERR_set_error(0x14,uVar1,
                  "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                  ,param_2,local_88,puVar2,local_80,param_3,puVar7,puVar3,puVar4,param_4);
  }
  if (param_6 != 0) {
    ERR_set_debug(param_6,param_7,param_8);
  }
  lVar6 = *(long *)(param_1 + 0x628);
  if (lVar6 == 0) {
    lVar6 = OSSL_ERR_STATE_new();
    *(long *)(param_1 + 0x628) = lVar6;
    if (lVar6 != 0) goto LAB_00102781;
  }
  else {
LAB_00102781:
    OSSL_ERR_STATE_save(lVar6);
  }
  local_68._8_8_ = param_3;
  local_68._0_8_ = param_2;
  local_58._0_8_ = param_4;
  sVar5 = strlen(param_4);
  local_58._8_8_ = sVar5;
  *(byte *)(param_1 + 0x624) = *(byte *)(param_1 + 0x624) | 0x40;
  ch_start_terminating(param_1,local_68,0);
LAB_001027b8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 ch_on_handshake_alert(long param_1,byte param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (param_2 == 10) {
    if (((*(byte *)(param_1 + 0x621) & 2) != 0) &&
       (iVar1 = ossl_quic_tls_is_cert_request(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) {
      pcVar2 = "Post-handshake TLS CertificateRequest received";
      uVar3 = 0x4be;
      goto LAB_0010295f;
    }
  }
  else if (((param_2 == 0x2f) && ((*(byte *)(param_1 + 0x621) & 2) != 0)) &&
          (iVar1 = ossl_quic_tls_has_bad_max_early_data(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0
          )) {
    pcVar2 = "Bad max_early_data received";
    uVar3 = 0x4cd;
LAB_0010295f:
    ossl_quic_channel_raise_protocol_error_loc
              (param_1,10,0,pcVar2,0,"ssl/quic/quic_channel.c",uVar3,"ch_on_handshake_alert");
    return 1;
  }
  ossl_quic_channel_raise_protocol_error_loc
            (param_1,(ulong)param_2 + 0x100,0,"handshake alert",0,"ssl/quic/quic_channel.c",0x4d2,
             "ch_on_handshake_alert");
  return 1;
}



int ch_on_transport_params(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  char *pcVar25;
  long in_FS_OFFSET;
  int local_108;
  ulong local_e8;
  long local_e0;
  undefined8 local_d0;
  ulong local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  byte local_a8;
  undefined1 local_a7 [31];
  undefined2 local_88;
  undefined2 local_86;
  undefined1 local_84 [4];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  char local_60;
  undefined1 local_5f [31];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_3 + 0x620) < '\0') {
    pcVar25 = "multiple transport parameter extensions";
    goto LAB_001031ef;
  }
  if (param_2 < 0) {
    pcVar25 = "internal error (packet buf init)";
    uVar20 = 0x53c;
LAB_0010329e:
    ossl_quic_channel_raise_protocol_error_loc
              (param_3,1,0,pcVar25,0,"ssl/quic/quic_channel.c",uVar20,"ch_on_transport_params");
  }
  else {
    local_b8 = param_1;
    local_b0 = param_2;
    if (param_2 == 0) {
LAB_00103489:
      pcVar25 = "INITIAL_SCID was not sent but is required";
    }
    else {
      local_e0 = 0;
      bVar3 = false;
      iVar19 = 0;
      local_e8 = 0;
      local_108 = 0;
      bVar4 = false;
      bVar16 = false;
      bVar14 = false;
      bVar11 = false;
      bVar12 = false;
      bVar10 = false;
      bVar15 = false;
      bVar8 = false;
      bVar7 = false;
      bVar17 = false;
      bVar13 = false;
      bVar9 = false;
      bVar6 = false;
      bVar5 = false;
      do {
        iVar18 = ossl_quic_wire_peek_transport_param(&local_b8,&local_d0);
        if (iVar18 == 0) {
LAB_001031d8:
          pcVar25 = "bad transport parameter";
          goto LAB_001031ef;
        }
        switch(local_d0) {
        case 0:
          if (bVar5) {
            pcVar25 = "ORIG_DCID appears multiple times";
            goto LAB_001031ef;
          }
          if ((*(byte *)(param_3 + 0x623) & 2) != 0) {
            pcVar25 = "ORIG_DCID may not be sent by a client";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_cid(&local_b8,0,&local_a8);
          if (iVar18 == 0) {
            pcVar25 = "ORIG_DCID is malformed";
            goto LAB_001031ef;
          }
          bVar1 = *(byte *)(param_3 + 0x478);
          if (((local_a8 != bVar1) || (0x14 < bVar1)) ||
             (iVar18 = memcmp((void *)(param_3 + 0x479),local_a7,(ulong)bVar1), iVar18 != 0)) {
            pcVar25 = "ORIG_DCID does not match expected value";
            goto LAB_001031ef;
          }
          bVar5 = true;
          break;
        case 1:
          if (bVar16) {
            pcVar25 = "MAX_IDLE_TIMEOUT appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if (iVar18 == 0) {
            pcVar25 = "MAX_IDLE_TIMEOUT is malformed";
            goto LAB_001031ef;
          }
          uVar2 = *(ulong *)(param_3 + 0x568);
          *(ulong *)(param_3 + 0x570) = local_c8;
          uVar21 = local_c8;
          if (uVar2 != 0) {
            uVar24 = uVar2;
            if (local_c8 <= uVar2) {
              uVar24 = local_c8;
            }
            uVar21 = uVar2;
            if (local_c8 != 0) {
              uVar21 = uVar24;
            }
          }
          *(ulong *)(param_3 + 0x578) = uVar21;
          ch_update_idle(param_3);
          local_e8 = local_c8;
          bVar16 = true;
          break;
        case 2:
          if (bVar15) {
            pcVar25 = "STATELESS_RESET_TOKEN appears multiple times";
            goto LAB_001031ef;
          }
          if ((*(byte *)(param_3 + 0x623) & 2) != 0) {
            pcVar25 = "STATELESS_RESET_TOKEN may not be sent by a client";
            goto LAB_001031ef;
          }
          local_e0 = ossl_quic_wire_decode_transport_param_bytes(&local_b8,&local_d0,&local_c0);
          if ((local_e0 == 0) || (local_c0 != 0x10)) {
            pcVar25 = "STATELESS_RESET_TOKEN is malformed";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_srtm_add(*(undefined8 *)(param_3 + 0x40),param_3,
                                      *(undefined8 *)(param_3 + 0x4f8),local_e0);
          if (iVar18 == 0) {
            pcVar25 = "STATELESS_RESET_TOKEN encountered internal error";
            goto LAB_001031ef;
          }
          bVar15 = true;
          break;
        case 3:
          if (bVar14) {
            pcVar25 = "MAX_UDP_PAYLOAD_SIZE appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if ((iVar18 == 0) || (local_c8 < 0x4b0)) {
            pcVar25 = "MAX_UDP_PAYLOAD_SIZE is malformed";
            goto LAB_001031ef;
          }
          *(ulong *)(param_3 + 0x580) = local_c8;
          bVar14 = true;
          break;
        case 4:
          if (bVar9) {
            pcVar25 = "INITIAL_MAX_DATA appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if (iVar18 == 0) {
            pcVar25 = "INITIAL_MAX_DATA is malformed";
            goto LAB_001031ef;
          }
          ossl_quic_txfc_bump_cwm(param_3 + 0xf0,local_c8);
          bVar9 = true;
          break;
        case 5:
          if (bVar13) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if (iVar18 == 0) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL is malformed";
            goto LAB_001031ef;
          }
          bVar13 = true;
          *(ulong *)(param_3 + 0x530) = local_c8;
          break;
        case 6:
          if (bVar3) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if (iVar18 == 0) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE is malformed";
            goto LAB_001031ef;
          }
          bVar3 = true;
          *(ulong *)(param_3 + 0x528) = local_c8;
          ossl_quic_stream_map_visit(param_3 + 0x350,txfc_bump_cwm_bidi,&local_c8);
          break;
        case 7:
          if (bVar17) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_UNI appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0);
          if (iVar18 == 0) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_UNI is malformed";
            goto LAB_001031ef;
          }
          *(ulong *)(param_3 + 0x538) = local_c8;
          ossl_quic_stream_map_visit(param_3 + 0x350,txfc_bump_cwm_uni,&local_c8);
          bVar17 = true;
          break;
        case 8:
          if (bVar7) {
            pcVar25 = "INITIAL_MAX_STREAMS_BIDI appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if ((iVar18 == 0) || (0x1000000000000000 < local_c8)) {
            pcVar25 = "INITIAL_MAX_STREAMS_BIDI is malformed";
            goto LAB_001031ef;
          }
          *(ulong *)(param_3 + 0x558) = local_c8;
          bVar7 = true;
          break;
        case 9:
          if (bVar8) {
            pcVar25 = "INITIAL_MAX_STREAMS_UNI appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if ((iVar18 == 0) || (0x1000000000000000 < local_c8)) {
            pcVar25 = "INITIAL_MAX_STREAMS_UNI is malformed";
            goto LAB_001031ef;
          }
          *(ulong *)(param_3 + 0x560) = local_c8;
          bVar8 = true;
          break;
        case 10:
          if (bVar12) {
            pcVar25 = "ACK_DELAY_EXP appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if ((iVar18 == 0) || (0x14 < local_c8)) {
            pcVar25 = "ACK_DELAY_EXP is malformed";
            goto LAB_001031ef;
          }
          *(char *)(param_3 + 0x548) = (char)local_c8;
          bVar12 = true;
          break;
        case 0xb:
          if (bVar11) {
            pcVar25 = "MAX_ACK_DELAY appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if ((iVar18 == 0) || (0x3fff < local_c8)) {
            pcVar25 = "MAX_ACK_DELAY is malformed";
            goto LAB_001031ef;
          }
          *(ulong *)(param_3 + 0x540) = local_c8;
          ossl_ackm_set_rx_max_ack_delay(*(undefined8 *)(param_3 + 0x418),local_c8 * 1000000);
          bVar11 = true;
          break;
        case 0xc:
          if (local_108 != 0) {
            pcVar25 = "DISABLE_ACTIVE_MIGRATION appears multiple times";
            goto LAB_001031ef;
          }
          lVar22 = ossl_quic_wire_decode_transport_param_bytes(&local_b8,&local_d0,&local_c0);
          if ((lVar22 == 0) || (local_c0 != 0)) {
            pcVar25 = "DISABLE_ACTIVE_MIGRATION is malformed";
            goto LAB_001031ef;
          }
          local_108 = 1;
          break;
        case 0xd:
          if (bVar10) {
            pcVar25 = "PREFERRED_ADDR appears multiple times";
            goto LAB_001031ef;
          }
          if ((*(byte *)(param_3 + 0x623) & 2) != 0) {
            pcVar25 = "PREFERRED_ADDR may not be sent by a client";
            goto LAB_001031ef;
          }
          if (*(char *)(param_3 + 0x4e1) == '\0') {
            pcVar25 = "PREFERRED_ADDR provided for zero-length CID";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_preferred_addr(&local_b8,&local_88);
          if (iVar18 == 0) {
            pcVar25 = "PREFERRED_ADDR is malformed";
            goto LAB_001031ef;
          }
          if (local_60 == '\0') {
            pcVar25 = "zero-length CID in PREFERRED_ADDR";
            goto LAB_001031ef;
          }
          bVar10 = true;
          break;
        case 0xe:
          if (bVar4) {
            pcVar25 = "ACTIVE_CONN_ID_LIMIT appears multiple times";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_b8,&local_d0,&local_c8);
          if ((iVar18 == 0) || (local_c8 < 2)) {
            pcVar25 = "ACTIVE_CONN_ID_LIMIT is malformed";
            goto LAB_001031ef;
          }
          *(ulong *)(param_3 + 0x588) = local_c8;
          bVar4 = true;
          break;
        case 0xf:
          if (iVar19 != 0) {
            pcVar25 = "INITIAL_SCID appears multiple times";
            goto LAB_001031ef;
          }
          iVar19 = ossl_quic_wire_decode_transport_param_cid(&local_b8,0,&local_a8);
          if (iVar19 == 0) {
            pcVar25 = "INITIAL_SCID is malformed";
            goto LAB_001031ef;
          }
          bVar1 = *(byte *)(param_3 + 0x4a2);
          if (((local_a8 != bVar1) || (0x14 < bVar1)) ||
             (iVar19 = memcmp((void *)(param_3 + 0x4a3),local_a7,(ulong)bVar1), iVar19 != 0)) {
            pcVar25 = "INITIAL_SCID does not match expected value";
            goto LAB_001031ef;
          }
          iVar19 = 1;
          break;
        case 0x10:
          if ((*(byte *)(param_3 + 0x623) & 2) != 0) {
            pcVar25 = "RETRY_SCID may not be sent by a client";
            goto LAB_001031ef;
          }
          if (bVar6) {
            pcVar25 = "RETRY_SCID appears multiple times";
            goto LAB_001031ef;
          }
          if ((*(byte *)(param_3 + 0x621) & 8) == 0) {
            pcVar25 = "RETRY_SCID sent when not performing a retry";
            goto LAB_001031ef;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_cid(&local_b8,0,&local_a8);
          if (iVar18 == 0) {
            pcVar25 = "RETRY_SCID is malformed";
            goto LAB_001031ef;
          }
          bVar1 = *(byte *)(param_3 + 0x4b7);
          if (((local_a8 != bVar1) || (0x14 < bVar1)) ||
             (iVar18 = memcmp((void *)(param_3 + 0x4b8),local_a7,(ulong)bVar1), iVar18 != 0)) {
            pcVar25 = "RETRY_SCID does not match expected value";
            goto LAB_001031ef;
          }
          bVar6 = true;
          break;
        default:
          lVar22 = ossl_quic_wire_decode_transport_param_bytes(&local_b8,&local_d0,&local_c0);
          if (lVar22 == 0) goto LAB_001031d8;
        }
      } while (local_b0 != 0);
      if (iVar19 == 0) goto LAB_00103489;
      if ((*(byte *)(param_3 + 0x623) & 2) != 0) {
        *(byte *)(param_3 + 0x620) = *(byte *)(param_3 + 0x620) | 0x80;
        uVar20 = ch_get_qlog(param_3);
        iVar18 = ossl_qlog_event_try_begin
                           (uVar20,4,"transport","parameters_set","transport:parameters_set");
        if (iVar18 != 0) {
          ossl_qlog_str(uVar20,"owner","remote");
          if (bVar5) {
LAB_00103666:
            ossl_qlog_bin(uVar20,"original_destination_connection_id",param_3 + 0x479,
                          *(undefined1 *)(param_3 + 0x478));
          }
          ossl_qlog_bin(uVar20,"original_source_connection_id",param_3 + 0x479,
                        *(undefined1 *)(param_3 + 0x478));
          if (bVar6) {
            ossl_qlog_bin(uVar20,"retry_source_connection_id",param_3 + 0x4b8,
                          *(undefined1 *)(param_3 + 0x4b7));
          }
          if (bVar9) {
            uVar23 = ossl_quic_txfc_get_cwm(param_3 + 0xf0);
            ossl_qlog_u64(uVar20,"initial_max_data",uVar23);
          }
          if (bVar13) {
            ossl_qlog_u64(uVar20,"initial_max_stream_data_bidi_local",
                          *(undefined8 *)(param_3 + 0x528));
          }
          if (bVar3) {
            ossl_qlog_u64(uVar20,"initial_max_stream_data_bidi_remote",
                          *(undefined8 *)(param_3 + 0x530));
          }
          if (bVar17) {
            ossl_qlog_u64(uVar20,"initial_max_stream_data_uni",*(undefined8 *)(param_3 + 0x538));
          }
          if (bVar7) {
            ossl_qlog_u64(uVar20,"initial_max_streams_bidi",*(undefined8 *)(param_3 + 0x558));
          }
          if (bVar8) {
            ossl_qlog_u64(uVar20,"initial_max_streams_uni",*(undefined8 *)(param_3 + 0x560));
          }
          if (bVar12) {
            ossl_qlog_u64(uVar20,"ack_delay_exponent",*(undefined1 *)(param_3 + 0x548));
          }
          if (bVar11) {
            ossl_qlog_u64(uVar20,"max_ack_delay",*(undefined8 *)(param_3 + 0x540));
          }
          if (bVar14) {
            ossl_qlog_u64(uVar20,"max_udp_payload_size",*(undefined8 *)(param_3 + 0x580));
          }
          if (bVar16) {
            ossl_qlog_u64(uVar20,"max_idle_timeout",local_e8);
          }
          if (bVar4) {
            ossl_qlog_u64(uVar20,"active_connection_id_limit",*(undefined8 *)(param_3 + 0x588));
          }
          if (bVar15) {
            ossl_qlog_bin(uVar20,"stateless_reset_token",local_e0,0x10);
          }
          if (bVar10) {
            ossl_qlog_group_begin(uVar20,"preferred_addr");
            ossl_qlog_u64(uVar20,"port_v4",local_88);
            ossl_qlog_u64(uVar20,"port_v6",local_86);
            ossl_qlog_bin(uVar20,"ip_v4",local_84,4);
            ossl_qlog_bin(uVar20,"ip_v6",local_80,0x10);
            ossl_qlog_bin(uVar20,"stateless_reset_token",local_70,0x10);
            ossl_qlog_bin(uVar20,"connection_id",local_5f,local_60);
            ossl_qlog_group_end(uVar20);
          }
          ossl_qlog_bool(uVar20,"disable_active_migration",local_108);
          ossl_qlog_event_end(uVar20);
        }
LAB_00102be2:
        if (((bVar3 || bVar9) || bVar8) || bVar7) {
          ossl_quic_stream_map_visit(param_3 + 0x350,do_update,param_3);
        }
        if (((*(byte *)(param_3 + 0x623) & 2) == 0) ||
           (iVar18 = ch_generate_transport_params(param_3), iVar18 != 0)) goto LAB_0010321a;
        pcVar25 = "internal error";
        uVar20 = 0x723;
        goto LAB_0010329e;
      }
      if (bVar5) {
        if (((*(byte *)(param_3 + 0x621) & 8) == 0) || (bVar6)) {
          *(byte *)(param_3 + 0x620) = *(byte *)(param_3 + 0x620) | 0x80;
          uVar20 = ch_get_qlog(param_3);
          iVar18 = ossl_qlog_event_try_begin
                             (uVar20,4,"transport","parameters_set","transport:parameters_set");
          if (iVar18 != 0) {
            ossl_qlog_str(uVar20,"owner","remote");
            goto LAB_00103666;
          }
          goto LAB_00102be2;
        }
        pcVar25 = "RETRY_SCID was not sent but is required";
      }
      else {
        pcVar25 = "ORIG_DCID was not sent but is required";
      }
    }
LAB_001031ef:
    ossl_quic_channel_raise_protocol_error_loc
              (param_3,8,0,pcVar25,0,"ssl/quic/quic_channel.c",0x72b);
  }
  iVar19 = 0;
LAB_0010321a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar19;
}



undefined8
ch_on_handshake_yield_secret
          (uint param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined4 local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 - 1 < 3) && (param_1 - 2 < 2)) {
    if (param_2 == 0) {
      if ((*(byte *)(param_7 + 0x622) >> 1 & 7) < param_1) {
        uVar5 = 0;
        uVar2 = 0;
        while( true ) {
          lVar1 = *(long *)(param_7 + 0x460 + (ulong)uVar2 * 8);
          local_4c = 0;
          local_48 = 0;
          if (lVar1 != 0) {
            iVar3 = ossl_quic_rstream_available(lVar1,&local_48,&local_4c);
            if ((iVar3 == 0) || (local_48 != 0)) {
              ossl_quic_channel_raise_protocol_error_loc
                        (param_7,10,6,"crypto stream data in wrong EL",0,"ssl/quic/quic_channel.c",
                         0x45a,"ch_on_handshake_yield_secret");
              goto LAB_001038e7;
            }
          }
          uVar5 = uVar5 + 1;
          if (param_1 == uVar5) break;
          uVar2 = (uVar5 != 2) + 1;
        }
        iVar3 = ossl_qrx_provide_secret
                          (*(undefined8 *)(param_7 + 0x428),param_1,param_3,param_4,param_5,param_6)
        ;
        if (iVar3 != 0) {
          *(ushort *)(param_7 + 0x622) =
               (short)param_1 * 2 & 0x40eU | 0x400 | *(ushort *)(param_7 + 0x622) & 0xfbf1;
LAB_00103a2b:
          uVar4 = 1;
          goto LAB_001038e9;
        }
      }
    }
    else if ((*(uint *)(param_7 + 0x620) >> 0xe & 7) < param_1) {
      iVar3 = ossl_qtx_provide_secret(*(undefined8 *)(param_7 + 0x420),param_1,param_3);
      if (iVar3 != 0) {
        *(uint *)(param_7 + 0x620) = *(uint *)(param_7 + 0x620) & 0xfffe3fff | (param_1 & 7) << 0xe;
        goto LAB_00103a2b;
      }
    }
  }
LAB_001038e7:
  uVar4 = 0;
LAB_001038e9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ch_on_crypto_recv_record(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  long local_30;
  
  iVar6 = 0;
  bVar5 = *(byte *)(param_3 + 0x622);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  local_40 = 0;
  if ((bVar5 & 0xe) != 0) {
    while( true ) {
      do {
        local_3c = 0;
        lVar1 = *(long *)(param_3 + 0x460 + (ulong)uVar3 * 8);
        local_38 = 0;
        if (lVar1 == 0) {
          uVar3 = bVar5 >> 1 & 7;
          if (uVar3 <= iVar6 + 1U) goto LAB_00103b69;
        }
        else {
          iVar2 = ossl_quic_rstream_available(lVar1,&local_38,&local_3c);
          if ((iVar2 == 0) || (local_38 != 0)) {
            ossl_quic_channel_raise_protocol_error_loc
                      (param_3,10,6,"crypto stream data in wrong EL",0,"ssl/quic/quic_channel.c",
                       0x3f9,"ch_on_crypto_recv_record");
            goto LAB_00103bea;
          }
          bVar5 = *(byte *)(param_3 + 0x622);
          uVar3 = bVar5 >> 1 & 7;
          if (uVar3 <= iVar6 + 1U) goto LAB_00103b69;
        }
        iVar6 = iVar6 + 1;
        uVar3 = 2;
      } while (iVar6 != 1);
      uVar3 = bVar5 >> 1 & 7;
      if ((byte)uVar3 < 3) break;
      iVar6 = 2;
      uVar3 = 1;
    }
LAB_00103b69:
    if ((char)uVar3 != '\0') {
      uVar3 = ((char)uVar3 != '\x02') + 1;
      goto LAB_00103b7c;
    }
  }
  uVar3 = 0;
LAB_00103b7c:
  lVar1 = *(long *)(param_3 + 0x460 + (ulong)uVar3 * 8);
  if (lVar1 == 0) {
LAB_00103bea:
    uVar4 = 0;
  }
  else {
    uVar4 = ossl_quic_rstream_get_record(lVar1,param_1,param_2,&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ch_trigger_txku(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = ossl_quic_tx_packetiser_get_next_pn(*(undefined8 *)(param_1 + 0xd8),2);
  if (uVar3 >> 0x3e == 0) {
    iVar1 = ossl_qtx_trigger_key_update(*(undefined8 *)(param_1 + 0x420));
    if (iVar1 != 0) {
      *(ulong *)(param_1 + 0x610) = uVar3;
      uVar2 = (uint)(*(byte *)(param_1 + 0x623) >> 7) << 4 | 1 |
              *(byte *)(param_1 + 0x624) & 0xffffffee;
      *(char *)(param_1 + 0x624) = (char)uVar2;
      return uVar2;
    }
  }
  ossl_quic_channel_raise_protocol_error_loc(param_1,1,0,"key update",0,"ssl/quic/quic_channel.c");
  return 0x2e5;
}



void rxku_detected(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((param_2[0xc4] & 0x400000400) == 0x400) {
    cVar1 = *(char *)((long)param_2 + 0x623);
    uVar2 = ossl_ackm_get_pto_duration(param_2[0x83]);
    param_2[0xc3] = param_1;
    param_2[0xc4] = param_2[0xc4] & 0xfffffff97fffffff | 0x600000000;
    uVar3 = ossl_quic_port_get_time(*param_2);
    lVar4 = uVar3 + uVar2;
    if (CARRY8(uVar3,uVar2)) {
      lVar4 = -1;
    }
    *(byte *)((long)param_2 + 0x624) = *(byte *)((long)param_2 + 0x624) & 0xef;
    param_2[0xc1] = lVar4;
    if ((~(int)cVar1 >> 0x1f) * -2 == 2) {
      ch_trigger_txku(param_2);
    }
    ossl_quic_tx_packetiser_schedule_ack(param_2[0x1b],2);
    return;
  }
  ossl_quic_channel_raise_protocol_error_loc
            (param_2,0xe,0,"RX key update again too soon",0,"ssl/quic/quic_channel.c",0x379,
             "rxku_detected");
  return;
}



undefined8 ch_tick_tls(long param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x623) = *(byte *)(param_1 + 0x623) | 8;
    ossl_quic_tls_tick(*(undefined8 *)(param_1 + 0x28));
    iVar1 = ossl_quic_tls_get_error(*(undefined8 *)(param_1 + 0x28),&local_38,&local_30,&local_28);
    if (iVar1 != 0) {
      ossl_quic_channel_raise_protocol_error_loc
                (param_1,local_38,0,local_30,local_28,"ssl/quic/quic_channel.c",0x876,"ch_tick_tls")
      ;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      uVar2 = 0;
      goto LAB_00103dc8;
    }
  }
  uVar2 = 1;
LAB_00103dc8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_channel_start(long *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  byte bVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)((long)param_1 + 0x623) & 2) == 0) {
    if ((*(byte *)(param_1 + 0xc4) & 7) != 0) {
LAB_00103e95:
      uVar3 = 1;
      goto LAB_00103f02;
    }
    iVar2 = ossl_quic_tx_packetiser_set_peer(param_1[0x1b],param_1 + 0xd);
    if (iVar2 != 0) {
      bVar5 = *(byte *)((long)param_1 + 0x623);
      plVar4 = (long *)*param_1;
      if ((bVar5 & 2) == 0) {
        iVar2 = ossl_quic_get_peer_token(plVar4[5],param_1 + 0xd,&local_38);
        if ((iVar2 != 0) &&
           (iVar2 = ossl_quic_tx_packetiser_set_initial_token
                              (param_1[0x1b],*(undefined8 *)(local_38 + 0x18),
                               *(undefined8 *)(local_38 + 0x20),free_peer_token), iVar2 == 0)) {
          ossl_quic_free_peer_token(local_38);
        }
        bVar5 = *(byte *)((long)param_1 + 0x623);
        plVar4 = (long *)*param_1;
      }
      iVar2 = ossl_quic_provide_initial_secret
                        (*(undefined8 *)*plVar4,((undefined8 *)*plVar4)[1],param_1 + 0x8f,
                         bVar5 >> 1 & 1,param_1[0x85],param_1[0x84]);
      if ((iVar2 != 0) &&
         (((*(uint *)(param_1 + 0xc4) & 0x2000100) != 0 ||
          (iVar2 = ch_generate_transport_params(param_1), iVar2 != 0)))) {
        bVar5 = *(byte *)(param_1 + 0xc4);
        bVar1 = *(byte *)((long)param_1 + 0x621);
        *(byte *)(param_1 + 0xc4) = bVar5 & 0xf8 | 1;
        uVar3 = ch_get_qlog(param_1);
        ossl_qlog_event_connectivity_connection_state_updated
                  (uVar3,bVar5 & 7,1,bVar1 >> 1 & 1,bVar1 >> 2 & 1);
        *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xbf;
        uVar3 = ch_get_qlog(param_1);
        ossl_qlog_event_connectivity_connection_started(uVar3,param_1 + 0x8f);
        iVar2 = ch_tick_tls(param_1,0,0);
        if (iVar2 != 0) {
          uVar3 = ossl_quic_port_get0_reactor(*param_1);
          ossl_quic_reactor_tick(uVar3,0);
          goto LAB_00103e95;
        }
      }
    }
  }
  uVar3 = 0;
LAB_00103f02:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 ossl_quic_channel_on_handshake_confirmed(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if ((*(byte *)(param_1 + 0x621) & 4) != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x621) & 2) != 0) {
    ch_discard_el_isra_0(param_1,2);
    bVar1 = *(byte *)(param_1 + 0x621);
    bVar3 = *(byte *)(param_1 + 0x620) & 7;
    *(byte *)(param_1 + 0x621) = bVar1 | 4;
    uVar2 = ch_get_qlog(param_1);
    ossl_qlog_event_connectivity_connection_state_updated(uVar2,bVar3,bVar3,(bVar1 & 2) >> 1,1);
    ossl_ackm_on_handshake_confirmed(*(undefined8 *)(param_1 + 0x418));
    return 1;
  }
  ossl_quic_channel_raise_protocol_error_loc
            (param_1,10,0x1e,"handshake cannot be confirmed before it is completed",0,
             "ssl/quic/quic_channel.c",0xc08,"ossl_quic_channel_on_handshake_confirmed");
  return 0;
}



undefined8 ch_on_handshake_complete(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if ((*(byte *)(param_1 + 0x621) & 2) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x620) & 0x1c000) == 0xc000) {
    ossl_quic_tx_packetiser_set_validated(*(undefined8 *)(param_1 + 0xd8));
    if (*(char *)(param_1 + 0x620) < '\0') {
      CRYPTO_free(*(void **)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x50) = 0;
      ossl_qrx_allow_1rtt_processing(*(undefined8 *)(param_1 + 0x428));
      ossl_quic_tx_packetiser_notify_handshake_complete(*(undefined8 *)(param_1 + 0xd8));
      *(byte *)(param_1 + 0x621) = *(byte *)(param_1 + 0x621) | 2;
      if (*(long *)(param_1 + 0x58) != 0) {
        ossl_quic_channel_schedule_new_token
                  (param_1,*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
        CRYPTO_free(*(void **)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      if ((*(byte *)(param_1 + 0x623) & 2) != 0) {
        ossl_quic_channel_on_handshake_confirmed(param_1);
        ossl_quic_tx_packetiser_schedule_handshake_done(*(undefined8 *)(param_1 + 0xd8));
      }
      bVar1 = *(byte *)(param_1 + 0x621);
      bVar3 = *(byte *)(param_1 + 0x620) & 7;
      uVar2 = ch_get_qlog(param_1);
      ossl_qlog_event_connectivity_connection_state_updated
                (uVar2,bVar3,bVar3,bVar1 >> 1 & 1,bVar1 >> 2 & 1);
      return 1;
    }
    ossl_quic_channel_raise_protocol_error_loc
              (param_1,0x16d,6,"no transport parameters received",0,"ssl/quic/quic_channel.c",0x482,
               "ch_on_handshake_complete");
  }
  return 0;
}



void ossl_quic_channel_on_new_conn_id(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  BUF_MEM *a;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  undefined8 local_80;
  undefined1 local_78 [56];
  long local_40;
  
  uVar7 = *(ulong *)(param_1 + 0x4f8);
  uVar6 = *(ulong *)(param_1 + 0x500);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_quic_channel_is_active();
  if (iVar3 == 0) goto LAB_00104420;
  if (*(char *)(param_1 + 0x4e1) == '\0') {
    ossl_quic_channel_raise_protocol_error_loc
              (param_1,10,0x18,"zero length connection id in use",0,"ssl/quic/quic_channel.c",0xd07,
               "ossl_quic_channel_on_new_conn_id");
    goto LAB_00104420;
  }
  if (uVar7 < *param_2) {
    uVar7 = *param_2;
  }
  if (uVar6 < param_2[1]) {
    uVar6 = param_2[1];
  }
  if (uVar7 - uVar6 < 2) {
    uVar1 = *(ulong *)(param_1 + 0x500);
    if (uVar6 - uVar1 < 0xb) {
      if (*(ulong *)(param_1 + 0x4f8) < uVar7) {
        iVar3 = ossl_quic_srtm_add(*(undefined8 *)(param_1 + 0x40),param_1,uVar7,
                                   (long)param_2 + 0x25);
        if (iVar3 == 0) {
          pcVar5 = "unable to store stateless reset token";
          uVar8 = 0xd42;
          goto LAB_001044ae;
        }
        uVar1 = param_2[2];
        uVar2 = param_2[3];
        uVar8 = *(undefined8 *)((long)param_2 + 0x1d);
        *(ulong *)(param_1 + 0x4f8) = uVar7;
        *(ulong *)(param_1 + 0x4e1) = uVar1;
        *(ulong *)(param_1 + 0x4e9) = uVar2;
        *(undefined8 *)(param_1 + 0x4ee) = uVar8;
        ossl_quic_tx_packetiser_set_cur_dcid(*(undefined8 *)(param_1 + 0xd8),param_1 + 0x4e1);
        uVar1 = *(ulong *)(param_1 + 0x500);
      }
      while (uVar1 < uVar6) {
        ossl_quic_srtm_remove(*(undefined8 *)(param_1 + 0x40),param_1,uVar1);
        a = BUF_MEM_new();
        if (a == (BUF_MEM *)0x0) {
LAB_00104450:
          ossl_quic_channel_raise_protocol_error_loc
                    (param_1,1,0x18,"internal error enqueueing retire conn id",0,
                     "ssl/quic/quic_channel.c",0xcf3,"ch_enqueue_retire_conn_id");
          BUF_MEM_free(a);
          break;
        }
        iVar3 = WPACKET_init(local_78,a);
        if (iVar3 == 0) goto LAB_00104450;
        iVar3 = ossl_quic_wire_encode_frame_retire_conn_id(local_78,uVar1);
        if (iVar3 == 0) {
          WPACKET_cleanup(local_78);
          goto LAB_00104450;
        }
        WPACKET_finish();
        iVar3 = WPACKET_get_total_written(local_78,&local_80);
        if ((iVar3 == 0) ||
           (lVar4 = ossl_quic_cfq_add_frame
                              (*(undefined8 *)(param_1 + 0xe8),1,2,0x19,0,a->data,local_80,
                               free_frame_data,0), lVar4 == 0)) goto LAB_00104450;
        a->data = (char *)0x0;
        BUF_MEM_free(a);
        uVar1 = *(long *)(param_1 + 0x500) + 1;
        *(ulong *)(param_1 + 0x500) = uVar1;
      }
      goto LAB_00104420;
    }
    pcVar5 = "retiring connection id limit violated";
    uVar8 = 0xd36;
  }
  else {
    pcVar5 = "active_connection_id limit violated";
    uVar8 = 0xd1f;
  }
LAB_001044ae:
  ossl_quic_channel_raise_protocol_error_loc
            (param_1,9,0x18,pcVar5,0,"ssl/quic/quic_channel.c",uVar8,
             "ossl_quic_channel_on_new_conn_id");
LAB_00104420:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_quic_channel_subtick(long *param_1,ulong *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  void *ptr;
  int *piVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  char *pcVar20;
  byte bVar21;
  char cVar22;
  int *piVar23;
  long *plVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  if (((*(byte *)(param_1 + 0xc4) & 7) == 0) ||
     (iVar8 = ossl_quic_channel_is_terminated(), iVar8 != 0)) {
    uVar7 = 0;
  }
  else {
    iVar8 = ossl_quic_channel_is_closing(param_1);
    if (((iVar8 == 0) && ((*(byte *)(param_1 + 0xc4) & 7) != 3)) ||
       (uVar12 = ossl_quic_port_get_time(*param_1), uVar12 < (ulong)param_1[0xbd])) {
      plVar24 = (long *)*param_1;
      if ((*(byte *)(*plVar24 + 0xa0) & 1) == 0) {
        if (((*(byte *)((long)param_1 + 0x624) & 2) != 0) &&
           (uVar12 = ossl_quic_port_get_time(), (ulong)param_1[0xc1] <= uVar12)) {
          *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xfd;
          param_1[0xc1] = -1;
          iVar8 = ossl_qrx_key_update_timeout(param_1[0x85],1);
          if (iVar8 == 0) {
            ossl_quic_channel_raise_protocol_error_loc
                      (param_1,1,0,"RXKU cooldown internal error",0,"ssl/quic/quic_channel.c",0x3a9,
                       "ch_rxku_tick");
          }
        }
        do {
          *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) & 0xf3;
          bVar25 = false;
          iVar8 = ossl_quic_channel_is_closing(param_1);
          plVar24 = param_1 + 0xd;
          if ((*(uint *)(param_1 + 0xc4) & 0x2000020) != 0) {
            while (iVar10 = ossl_qrx_read_pkt(param_1[0x85],param_1 + 0xaa), iVar10 != 0) {
              if (iVar8 != 0) {
                ossl_quic_tx_packetiser_record_received_closing_bytes
                          (param_1[0x1b],*(undefined8 *)(*(long *)param_1[0xaa] + 0x48));
              }
              if (!bVar25) {
                ch_update_idle(param_1);
                ch_update_ping_deadline(param_1);
              }
              bVar21 = *(byte *)(param_1 + 0xc4);
              iVar10 = ossl_quic_channel_is_active(param_1);
              plVar19 = (long *)param_1[0xaa];
              bVar21 = bVar21 >> 4 & 1;
              if (iVar10 == 0) goto switchD_00104962_caseD_0;
              pbVar3 = (byte *)*plVar19;
              bVar1 = *pbVar3;
              if ((bVar1 & 0xfd) != 4) {
                if ((*(byte *)(param_1 + 0xc4) & 8) == 0) {
                  uVar5 = *(undefined8 *)(pbVar3 + 0x1d);
                  uVar6 = *(undefined8 *)(pbVar3 + 0x25);
                  uVar13 = *(undefined8 *)(pbVar3 + 0x2a);
                  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 8;
                  *(undefined8 *)((long)param_1 + 0x4a2) = uVar5;
                  *(undefined8 *)((long)param_1 + 0x4aa) = uVar6;
                  *(undefined8 *)((long)param_1 + 0x4af) = uVar13;
                  *(undefined8 *)((long)param_1 + 0x4e1) = *(undefined8 *)((long)param_1 + 0x4a2);
                  *(undefined8 *)((long)param_1 + 0x4e9) = *(undefined8 *)((long)param_1 + 0x4aa);
                  *(undefined8 *)((long)param_1 + 0x4ee) = uVar13;
                  ossl_quic_tx_packetiser_set_cur_dcid(param_1[0x1b],(long)param_1 + 0x4a2);
                  plVar19 = (long *)param_1[0xaa];
                  bVar1 = *(byte *)*plVar19;
                }
                if ((bVar1 - 1 < 5) &&
                   (((*(byte *)((long)param_1 + 0x622) >> 4) >>
                     (*(uint *)(CSWTCH_72 + (ulong)(bVar1 - 1) * 4) & 0x1f) & 1) != 0))
                goto switchD_00104962_caseD_0;
              }
              if (((*(byte *)((long)param_1 + 0x623) & 2) == 0) && (plVar19[1] != 0)) {
                iVar10 = BIO_ADDR_family(plVar24);
                if ((iVar10 != 2) && (iVar10 = BIO_ADDR_family(plVar24), iVar10 != 10)) {
                  plVar19 = (long *)param_1[0xaa];
                  goto LAB_001048b0;
                }
                lVar17 = *(long *)(param_1[0xaa] + 8);
                iVar10 = BIO_ADDR_family(lVar17);
                iVar9 = BIO_ADDR_family(plVar24);
                if (iVar10 == iVar9) {
                  iVar10 = BIO_ADDR_family(lVar17);
                  plVar19 = (long *)param_1[0xaa];
                  if (iVar10 == 2) {
                    if (*(int *)((long)param_1 + 0x6c) == *(int *)(lVar17 + 4)) goto LAB_00104f13;
                  }
                  else if ((iVar10 == 10) &&
                          (*(long *)(lVar17 + 8) == param_1[0xe] &&
                           *(long *)(lVar17 + 0x10) == param_1[0xf])) {
LAB_00104f13:
                    if (*(short *)(lVar17 + 2) == *(short *)((long)param_1 + 0x6a))
                    goto LAB_001048b0;
                  }
                  goto switchD_00104962_caseD_0;
                }
LAB_001049c0:
                plVar19 = (long *)param_1[0xaa];
              }
              else {
LAB_001048b0:
                pbVar3 = (byte *)*plVar19;
                bVar1 = *pbVar3;
                if ((*(uint *)(param_1 + 0xc4) & 0x2000008) != 8) {
                  if (1 < bVar1 - 5) goto LAB_001048dc;
                  if (bVar1 != 6) goto LAB_00104dfa;
LAB_00104d50:
                  if ((*(int *)(pbVar3 + 4) == 0) && (bVar21 == 0)) {
                    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x10;
                    uVar12 = *(ulong *)(pbVar3 + 0x48);
                    if ((long)uVar12 < 0) goto switchD_00104962_caseD_0;
                    piVar15 = *(int **)(pbVar3 + 0x50);
                    piVar23 = (int *)((uVar12 & 0xfffffffffffffffc) + (long)piVar15);
                    piVar14 = (int *)((long)piVar15 + uVar12);
                    do {
                      if (piVar15 == piVar14) {
                        ossl_quic_channel_raise_protocol_error_loc
                                  (param_1,2,0,"unsupported protocol version",0,
                                   "ssl/quic/quic_channel.c",0x990,"ch_rx_handle_packet");
                        plVar19 = (long *)param_1[0xaa];
                        goto switchD_00104962_caseD_0;
                      }
                      if (piVar23 == piVar15) goto switchD_00104962_caseD_0;
                      iVar10 = *piVar15;
                      piVar15 = piVar15 + 1;
                    } while (iVar10 != 1);
                    ossl_quic_tx_packetiser_set_protocol_version(param_1[0x1b],1);
                    iVar10 = ossl_ackm_mark_packet_pseudo_lost(param_1[0x83],0,0);
                    if (iVar10 != 0) goto LAB_001049c0;
                    pcVar20 = "handling ver negotiation packet";
                    uVar13 = 0x985;
LAB_00104b59:
                    ossl_quic_channel_raise_protocol_error_loc
                              (param_1,1,0,pcVar20,0,"ssl/quic/quic_channel.c",uVar13,
                               "ch_rx_handle_packet");
                    plVar19 = (long *)param_1[0xaa];
                  }
                  goto switchD_00104962_caseD_0;
                }
                if (bVar1 == 5) {
LAB_00104dfa:
                  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x10;
LAB_00104e02:
                  if ((pbVar3[2] & 0x30) == 0) goto LAB_001048f8;
                  pcVar20 = "packet header reserved bits";
                  uVar13 = 0x99e;
LAB_00104e2a:
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,10,0,pcVar20,0,"ssl/quic/quic_channel.c",uVar13,
                             "ch_rx_handle_packet");
                  plVar19 = (long *)param_1[0xaa];
                }
                else {
                  bVar2 = pbVar3[0x1d];
                  if (((*(byte *)((long)param_1 + 0x4a2) != bVar2) || (0x14 < bVar2)) ||
                     (iVar10 = memcmp(pbVar3 + 0x1e,(void *)((long)param_1 + 0x4a3),(ulong)bVar2),
                     iVar10 != 0)) goto switchD_00104962_caseD_0;
                  if (bVar1 == 6) goto LAB_00104d50;
LAB_001048dc:
                  if (*(int *)(pbVar3 + 4) != 1) goto switchD_00104962_caseD_0;
                  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x10;
                  if (bVar1 != 4) goto LAB_00104e02;
LAB_001048f8:
                  local_78 = *(undefined8 *)(pbVar3 + 0x50);
                  lVar17 = plVar19[4];
                  lVar4 = plVar19[8];
                  local_70 = *(undefined8 *)(pbVar3 + 0x48);
                  uVar13 = ch_get_qlog(param_1);
                  ossl_qlog_event_transport_packet_received(uVar13,pbVar3,lVar17,&local_78,1,lVar4);
                  plVar19 = (long *)param_1[0xaa];
                  pcVar20 = (char *)*plVar19;
                  switch(*pcVar20) {
                  case '\x01':
                  case '\x03':
                  case '\x05':
                    if (((*(byte *)((long)param_1 + 0x623) & 2) != 0) && (*pcVar20 == '\x03')) {
                      ch_discard_el_isra_0(param_1,0);
                      plVar19 = (long *)param_1[0xaa];
                    }
                    if (((*(byte *)((long)param_1 + 0x624) & 2) == 0) ||
                       (*(char *)*plVar19 != '\x05')) {
LAB_00104991:
                      if ((((*(byte *)((long)param_1 + 0x623) & 2) == 0) &&
                          (*(char *)*plVar19 == '\x01')) &&
                         (*(long *)((char *)*plVar19 + 0x40) != 0)) {
                        pcVar20 = "client received initial token";
                        uVar13 = 0xa11;
                        goto LAB_00104e2a;
                      }
                    }
                    else if ((ulong)param_1[0xc3] <= (ulong)plVar19[4]) {
                      uVar12 = plVar19[7];
                      uVar16 = ossl_qrx_get_key_epoch(param_1[0x85]);
                      if (uVar12 < uVar16) {
                        ossl_quic_channel_raise_protocol_error_loc
                                  (param_1,0xe,0,"new packet with old keys",0,
                                   "ssl/quic/quic_channel.c",0x9f8,"ch_rx_handle_packet");
                        plVar19 = (long *)param_1[0xaa];
                        break;
                      }
                      plVar19 = (long *)param_1[0xaa];
                      goto LAB_00104991;
                    }
                    ossl_quic_handle_frames(param_1,plVar19);
                    if ((*(byte *)((long)param_1 + 0x623) & 0x10) != 0) {
                      ch_tick_tls(param_1,param_3 & 1,0);
                    }
                    goto LAB_001049c0;
                  case '\x04':
                    if ((((*(uint *)(param_1 + 0xc4) & 0x2000800) == 0) &&
                        ((*(byte *)(param_1 + 0xc4) & 8) == 0)) &&
                       (0x10 < *(ulong *)(pcVar20 + 0x48))) {
                      iVar10 = ossl_quic_validate_retry_integrity_tag
                                         (**(undefined8 **)*param_1,(*(undefined8 **)*param_1)[1],
                                          pcVar20,param_1 + 0x8f);
                      plVar19 = (long *)param_1[0xaa];
                      if (iVar10 != 0) {
                        lVar17 = *plVar19;
                        bVar1 = *(byte *)(param_1 + 0x8f);
                        if (((*(byte *)(lVar17 + 0x1d) != bVar1) || (0x14 < bVar1)) ||
                           (iVar10 = memcmp((void *)((long)param_1 + 0x479),(void *)(lVar17 + 0x1e),
                                            (ulong)bVar1), iVar10 != 0)) {
                          uVar13 = *(undefined8 *)(lVar17 + 0x50);
                          lVar4 = *(long *)(lVar17 + 0x48);
                          iVar10 = ossl_quic_tx_packetiser_set_cur_dcid(param_1[0x1b],lVar17 + 0x1d)
                          ;
                          if (iVar10 != 0) {
                            lVar4 = lVar4 + -0x10;
                            ptr = (void *)CRYPTO_memdup(uVar13,lVar4,"ssl/quic/quic_channel.c",0xba1
                                                       );
                            if (ptr != (void *)0x0) {
                              iVar10 = ossl_quic_tx_packetiser_set_initial_token
                                                 (param_1[0x1b],ptr,lVar4,free_token);
                              if (iVar10 == 0) {
                                ossl_quic_channel_raise_protocol_error_loc
                                          (param_1,0xb,0,"received oversize token",0,
                                           "ssl/quic/quic_channel.c",0xbab,"ch_retry");
                                CRYPTO_free(ptr);
                              }
                              else {
                                uVar13 = *(undefined8 *)(lVar17 + 0x25);
                                *(undefined8 *)((long)param_1 + 0x4b7) =
                                     *(undefined8 *)(lVar17 + 0x1d);
                                *(undefined8 *)((long)param_1 + 0x4bf) = uVar13;
                                uVar13 = *(undefined8 *)(lVar17 + 0x2a);
                                *(byte *)((long)param_1 + 0x621) =
                                     *(byte *)((long)param_1 + 0x621) | 8;
                                *(undefined8 *)((long)param_1 + 0x4c4) = uVar13;
                                iVar10 = ossl_ackm_mark_packet_pseudo_lost(param_1[0x83],0,bVar21);
                                if ((iVar10 != 0) &&
                                   (iVar10 = ossl_quic_provide_initial_secret
                                                       (**(undefined8 **)*param_1,
                                                        (*(undefined8 **)*param_1)[1],
                                                        (long)param_1 + 0x4b7,0,param_1[0x85],
                                                        param_1[0x84]), iVar10 != 0))
                                goto LAB_001049c0;
                              }
                            }
                          }
                          pcVar20 = "handling retry packet";
                          uVar13 = 0x9d2;
                          goto LAB_00104b59;
                        }
                      }
                    }
                    break;
                  case '\x06':
                    if (bVar21 == 0) {
                      piVar14 = *(int **)(pcVar20 + 0x50);
                      if (-1 < (long)*(ulong *)(pcVar20 + 0x48)) {
                        piVar15 = (int *)((long)piVar14 +
                                         (*(ulong *)(pcVar20 + 0x48) & 0xfffffffffffffffc));
                        do {
                          if (piVar15 == piVar14) {
                            local_68 = 2;
                            local_60 = ZEXT816(0x105fb0) << 0x40;
                            local_50 = ZEXT816(0x1b);
                            ch_start_terminating(param_1,&local_68,1);
                            goto LAB_001049c0;
                          }
                          iVar10 = *piVar14;
                          piVar14 = piVar14 + 1;
                        } while (iVar10 != 0x1000000);
                      }
                    }
                  }
                }
              }
switchD_00104962_caseD_0:
              bVar25 = true;
              ossl_qrx_pkt_release(plVar19);
              *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) & 0xdf;
              param_1[0xaa] = 0;
            }
            uVar12 = 0xffffffffffffffff;
            uVar11 = 0;
            do {
              if (((*(byte *)((long)param_1 + 0x622) >> 4) >> (uVar11 & 0x1f) & 1) == 0) {
                if ((*(byte *)((long)param_1 + 0x622) >> 1 & 7) < uVar11) break;
                uVar16 = ossl_qrx_get_max_forged_pkt_count(param_1[0x85],uVar11);
                if (uVar16 < uVar12) {
                  uVar12 = uVar16;
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != 4);
            uVar16 = ossl_qrx_get_cur_forged_pkt_count(param_1[0x85]);
            if (uVar12 <= uVar16) {
              ossl_quic_channel_raise_protocol_error_loc
                        (param_1,0xf,0,"forgery limit",0,"ssl/quic/quic_channel.c",0x89d,
                         "ch_rx_check_forged_pkt_limit");
            }
            if ((bVar25) && (local_7c = 1, iVar8 != 0)) {
              *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 1;
            }
          }
          bVar21 = *(byte *)((long)param_1 + 0x623);
          if ((bVar21 & 8) == 0) {
            ch_tick_tls(param_1,param_3 & 1,&local_7c);
            bVar21 = *(byte *)((long)param_1 + 0x623);
          }
        } while ((bVar21 & 4) != 0);
        plVar24 = (long *)*param_1;
      }
      uVar12 = ossl_quic_port_get_time(plVar24);
      lVar4 = _UNK_00106cc8;
      lVar17 = __LC114;
      if (uVar12 < (ulong)param_1[0xbe]) {
        if ((*(byte *)(*(long *)*param_1 + 0xa0) & 1) == 0) {
          uVar16 = ossl_ackm_get_loss_detection_deadline(param_1[0x83]);
          if ((uVar16 != 0) && (uVar16 <= uVar12)) {
            ossl_ackm_on_timeout(param_1[0x83]);
          }
          if ((ulong)param_1[0xbf] <= uVar12) {
            cVar22 = '\0';
            uVar11 = *(uint *)(param_1 + 0xc4) >> 0xe & 7;
            if (uVar11 != 0) {
              cVar22 = ((char)uVar11 != '\x02') + '\x01';
            }
            ossl_quic_tx_packetiser_schedule_ack_eliciting(param_1[0x1b],cVar22);
            ch_update_ping_deadline(param_1);
          }
          if ((*(byte *)(param_1 + 0xc4) & 7) == 3) {
LAB_001053b6:
            uVar7 = (undefined1)local_7c;
          }
          else {
            iVar8 = ossl_quic_channel_is_closing(param_1);
            if (iVar8 != 0) {
              if ((*(byte *)((long)param_1 + 0x623) & 1) == 0) goto LAB_001053b6;
              *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) & 0xfe;
            }
            if (((((*(uint *)(param_1 + 0xc4) & 0x1c400) == 0xc400) &&
                 (iVar8 = txku_in_progress(param_1), iVar8 == 0)) &&
                (uVar12 = ossl_quic_port_get_time(*param_1), (ulong)param_1[0xc0] <= uVar12)) &&
               ((*(byte *)((long)param_1 + 0x624) & 6) == 0)) {
              uVar16 = ossl_qtx_get_cur_epoch_pkt_count(param_1[0x84],3);
              uVar18 = ossl_qtx_get_max_epoch_pkt_count(param_1[0x84],3);
              uVar12 = param_1[0xb7];
              if (param_1[0xb7] == 0xffffffffffffffff) {
                uVar12 = uVar18 >> 1;
              }
              if (uVar12 <= uVar16) {
                *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 0x80;
                ch_trigger_txku(param_1);
              }
            }
            *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xf7;
            do {
              iVar8 = ossl_quic_tx_packetiser_generate(param_1[0x1b],&local_68);
              if (local_60._0_8_ == 0) {
                if (iVar8 == 0) {
LAB_0010530f:
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,1,0,"internal error (txp generate)",0,"ssl/quic/quic_channel.c"
                             ,0xab1,"ch_tx");
                }
                break;
              }
              *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x20;
              *(byte *)(*param_1 + 0x9a) = *(byte *)(*param_1 + 0x9a) | 8;
              bVar21 = *(byte *)((long)param_1 + 0x623);
              if (((int)local_68 != 0) && ((bVar21 & 0x20) == 0)) {
                ch_update_idle(param_1);
                bVar21 = *(byte *)((long)param_1 + 0x623) | 0x20;
                *(byte *)((long)param_1 + 0x623) = bVar21;
              }
              if (((bVar21 & 2) == 0) && (local_68._4_4_ != 0)) {
                ch_discard_el_isra_0(param_1,0);
              }
              if ((*(byte *)((long)param_1 + 0x624) & 8) != 0) {
                *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xfb;
              }
              ch_update_ping_deadline(param_1);
              if (iVar8 == 0) goto LAB_0010530f;
            } while (local_60._0_8_ != 0);
            iVar8 = ossl_qtx_flush_net(param_1[0x84]);
            if ((iVar8 + 1U & 0xfffffffd) != 0) {
              ossl_quic_port_raise_net_error(*param_1,param_1);
            }
            lVar17 = ossl_qtx_get_queue_len_datagrams(param_1[0x84]);
            if (lVar17 == 0) goto LAB_001053b6;
            local_7c = 1;
            uVar7 = 1;
          }
          ossl_quic_stream_map_gc(param_1 + 0x6a);
        }
        else {
          uVar7 = (undefined1)local_7c;
        }
        iVar8 = ossl_quic_channel_is_terminated(param_1);
        uVar12 = 0xffffffffffffffff;
        if (iVar8 == 0) {
          uVar12 = ossl_ackm_get_loss_detection_deadline(param_1[0x83]);
          iVar8 = 0;
          if (uVar12 == 0) {
            uVar12 = 0xffffffffffffffff;
          }
          do {
            iVar10 = ossl_qtx_is_enc_level_provisioned(param_1[0x84],iVar8);
            if (iVar10 != 0) {
              cVar22 = '\0';
              if (iVar8 != 0) {
                cVar22 = (iVar8 != 2) + '\x01';
              }
              uVar16 = ossl_ackm_get_ack_deadline(param_1[0x83],cVar22);
              if (uVar16 < uVar12) {
                uVar12 = uVar16;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 4);
          uVar16 = param_1[0xbf];
          uVar18 = uVar16;
          if (uVar12 <= uVar16) {
            uVar18 = uVar12;
          }
          if (uVar16 != 0xffffffffffffffff) {
            uVar12 = uVar18;
          }
          uVar16 = ossl_quic_tx_packetiser_get_deadline(param_1[0x1b]);
          if (uVar16 <= uVar12) {
            uVar12 = uVar16;
          }
          iVar8 = ossl_quic_channel_is_closing(param_1);
          if ((iVar8 == 0) && ((*(byte *)(param_1 + 0xc4) & 7) != 3)) {
            uVar16 = param_1[0xbe];
            uVar18 = uVar16;
            if (uVar12 <= uVar16) {
              uVar18 = uVar12;
            }
            if (uVar16 != 0xffffffffffffffff) {
              uVar12 = uVar18;
            }
          }
          else if ((ulong)param_1[0xbd] < uVar12) {
            uVar12 = param_1[0xbd];
          }
          if (((*(byte *)((long)param_1 + 0x624) & 2) != 0) && ((ulong)param_1[0xc1] < uVar12)) {
            uVar12 = param_1[0xc1];
          }
        }
        *param_2 = uVar12;
        iVar8 = ossl_quic_channel_is_terminated(param_1);
        *(bool *)(param_2 + 1) = iVar8 == 0;
        iVar8 = ossl_quic_channel_is_terminated(param_1);
        bVar25 = false;
        if (iVar8 == 0) {
          lVar17 = ossl_qtx_get_queue_len_datagrams(param_1[0x84]);
          bVar25 = lVar17 != 0;
        }
        *(bool *)((long)param_2 + 9) = bVar25;
        *(undefined1 *)((long)param_2 + 10) = uVar7;
        goto LAB_00104610;
      }
      if ((*(byte *)(*(long *)*param_1 + 0xa0) & 1) == 0) {
        *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfe;
        param_1[0xb8] = lVar17;
        param_1[0xb9] = lVar4;
        goto LAB_001046d1;
      }
    }
    else {
LAB_001046d1:
      bVar21 = *(byte *)(param_1 + 0xc4);
      bVar1 = *(byte *)((long)param_1 + 0x621);
      *(byte *)(param_1 + 0xc4) = bVar21 & 0xf8 | 4;
      uVar13 = ch_get_qlog(param_1);
      ossl_qlog_event_connectivity_connection_state_updated
                (uVar13,bVar21 & 7,4,bVar1 >> 1 & 1,bVar1 >> 2 & 1);
    }
    uVar7 = 1;
  }
  *(undefined1 *)((long)param_2 + 10) = uVar7;
  *(undefined2 *)(param_2 + 1) = 0;
  *param_2 = 0xffffffffffffffff;
LAB_00104610:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_quic_channel_on_new_conn(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 0x620) & 0x2000007) != 0x2000000) {
    return 0;
  }
  iVar1 = ossl_quic_lcidm_generate_initial(*(undefined8 *)(param_1 + 0x38),param_1,param_1 + 0x4cc);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ch_on_new_conn_common(param_1,param_2,param_3,param_4,0);
  return uVar2;
}



undefined8
ossl_quic_bind_channel
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,undefined8 param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_4 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x620) & 0x2000007) == 0x2000000) {
    uVar2 = param_4[1];
    *(undefined8 *)(param_1 + 0x4cc) = *param_4;
    *(undefined8 *)(param_1 + 0x4d4) = uVar2;
    *(undefined8 *)(param_1 + 0x4d9) = *(undefined8 *)((long)param_4 + 0xd);
    iVar1 = ossl_quic_lcidm_bind_channel(*(undefined8 *)(param_1 + 0x38),param_1,param_4);
    if (iVar1 != 0) {
      uVar2 = ch_on_new_conn_common(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  return 0;
}



undefined8 ossl_quic_channel_get0_ssl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



void ossl_quic_channel_is_new_local_stream_admissible(long param_1,int param_2)

{
  if (param_2 != 0) {
    ossl_quic_stream_map_is_local_allowed_by_stream_limit
              (param_1 + 0x350,*(undefined8 *)(param_1 + 0x598),param_2);
    return;
  }
  ossl_quic_stream_map_is_local_allowed_by_stream_limit
            (param_1 + 0x350,*(undefined8 *)(param_1 + 0x590),0);
  return;
}



long ossl_quic_channel_get_local_stream_count_avail(long param_1,int param_2)

{
  if (param_2 != 0) {
    return *(long *)(param_1 + 0x560) - *(long *)(param_1 + 0x598);
  }
  return *(long *)(param_1 + 0x558) - *(long *)(param_1 + 0x590);
}



void ossl_quic_channel_get_remote_stream_count_avail(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x290;
  if (param_2 != 0) {
    lVar1 = param_1 + 0x2f0;
  }
  ossl_quic_rxfc_get_credit(lVar1);
  return;
}



long ossl_quic_channel_new_stream_local(long param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = *(byte *)(param_1 + 0x623) >> 1 & 1;
  if (param_2 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x590);
    plVar1 = (long *)(param_1 + 0x590);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x598);
    uVar5 = uVar5 | 2;
    plVar1 = (long *)(param_1 + 0x598);
  }
  if (uVar2 >> 0x3e == 0) {
    lVar4 = ossl_quic_stream_map_alloc(param_1 + 0x350,uVar2 << 2 | (long)(int)uVar5);
    if (lVar4 != 0) {
      iVar3 = ch_init_new_stream(param_1,lVar4,1,param_2 == 0);
      if (iVar3 != 0) {
        *plVar1 = *plVar1 + 1;
        return lVar4;
      }
      ossl_quic_stream_map_release(param_1 + 0x350,lVar4);
    }
  }
  return 0;
}



void ossl_quic_channel_set_incoming_stream_auto_reject(long param_1,int param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x5b0) = param_3;
  *(byte *)(param_1 + 0x623) = *(byte *)(param_1 + 0x623) & 0xbf | (param_2 != 0) << 6;
  return;
}



void ossl_quic_channel_reject_stream(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x350;
  ossl_quic_stream_map_stop_sending_recv_part(lVar1,param_2,*(undefined8 *)(param_1 + 0x5b0));
  ossl_quic_stream_map_reset_stream_send_part(lVar1,param_2,*(undefined8 *)(param_1 + 0x5b0));
  *(byte *)(param_2 + 0x104) = *(byte *)(param_2 + 0x104) | 0x20;
  ossl_quic_stream_map_update_state(lVar1,param_2);
  return;
}



long ossl_quic_channel_new_stream_remote(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (((uint)param_2 & 1) == ((*(byte *)(param_1 + 0x623) >> 1 ^ 1) & 1)) {
    lVar1 = param_1 + 0x350;
    lVar3 = ossl_quic_stream_map_alloc(lVar1,param_2,(uint)param_2 & 3);
    if (lVar3 != 0) {
      iVar2 = ch_init_new_stream(param_1,lVar3,(param_2 & 2) == 0,1);
      if (iVar2 != 0) {
        if ((*(byte *)(param_1 + 0x623) & 0x40) != 0) {
          ossl_quic_channel_reject_stream(param_1);
          return lVar3;
        }
        ossl_quic_stream_map_push_accept_queue(lVar1);
        return lVar3;
      }
      ossl_quic_stream_map_release(lVar1,lVar3);
    }
  }
  return 0;
}



bool ossl_quic_channel_replace_local_cid(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = param_1 + 0x4cc;
  iVar3 = ossl_quic_lcidm_debug_remove(*(undefined8 *)(param_1 + 0x38),lVar1);
  if (iVar3 != 0) {
    uVar2 = param_2[1];
    *(undefined8 *)(param_1 + 0x4cc) = *param_2;
    *(undefined8 *)(param_1 + 0x4d4) = uVar2;
    *(undefined8 *)(param_1 + 0x4d9) = *(undefined8 *)((long)param_2 + 0xd);
    iVar3 = ossl_quic_tx_packetiser_set_cur_scid(*(undefined8 *)(param_1 + 0xd8),lVar1);
    if (iVar3 != 0) {
      iVar3 = ossl_quic_lcidm_debug_add(*(undefined8 *)(param_1 + 0x38),param_1,lVar1,100);
      return iVar3 != 0;
    }
  }
  return false;
}



void ossl_quic_channel_set_msg_callback(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x430) = param_2;
  *(undefined8 *)(param_1 + 0x440) = param_3;
  ossl_qtx_set_msg_callback(*(undefined8 *)(param_1 + 0x420));
  ossl_quic_tx_packetiser_set_msg_callback(*(undefined8 *)(param_1 + 0xd8),param_2,param_3);
  if ((*(byte *)(param_1 + 0x625) & 4) != 0) {
    return;
  }
  ossl_qrx_set_msg_callback(*(undefined8 *)(param_1 + 0x428),param_2,param_3);
  return;
}



void ossl_quic_channel_set_msg_callback_arg(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x438) = param_2;
  ossl_qtx_set_msg_callback_arg(*(undefined8 *)(param_1 + 0x420));
  ossl_quic_tx_packetiser_set_msg_callback_arg(*(undefined8 *)(param_1 + 0xd8),param_2);
  if ((*(byte *)(param_1 + 0x625) & 4) != 0) {
    return;
  }
  ossl_qrx_set_msg_callback_arg(*(undefined8 *)(param_1 + 0x428),param_2);
  return;
}



void ossl_quic_channel_set_txku_threshold_override(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x5b8) = param_2;
  return;
}



void ossl_quic_channel_get_tx_key_epoch(long param_1)

{
  ossl_qtx_get_key_epoch(*(undefined8 *)(param_1 + 0x420));
  return;
}



void ossl_quic_channel_get_rx_key_epoch(long param_1)

{
  ossl_qrx_get_key_epoch(*(undefined8 *)(param_1 + 0x428));
  return;
}



undefined8 ossl_quic_channel_trigger_txku(long param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x620) & 0x1c400) != 0xc400) {
    return 0;
  }
  iVar1 = txku_in_progress();
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x623) = *(byte *)(param_1 + 0x623) | 0x80;
    ch_trigger_txku();
    return 1;
  }
  return 0;
}



undefined8 ossl_quic_channel_ping(long param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *(uint *)(param_1 + 0x620) >> 0xe & 7;
  if (uVar1 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = ((char)uVar1 != '\x02') + '\x01';
  }
  ossl_quic_tx_packetiser_schedule_ack_eliciting(*(undefined8 *)(param_1 + 0xd8),cVar2);
  return 1;
}



undefined2 ossl_quic_channel_get_diag_num_rx_ack(long param_1)

{
  return *(undefined2 *)(param_1 + 0x54a);
}



void ossl_quic_channel_get_diag_local_cid(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x4d4);
  *param_2 = *(undefined8 *)(param_1 + 0x4cc);
  param_2[1] = uVar1;
  *(undefined8 *)((long)param_2 + 0xd) = *(undefined8 *)(param_1 + 0x4d9);
  return;
}



byte ossl_quic_channel_have_generated_transport_params(long param_1)

{
  return *(byte *)(param_1 + 0x621) & 1;
}



void ossl_quic_channel_set_max_idle_timeout_request(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x568) = param_2;
  return;
}



undefined8 ossl_quic_channel_get_max_idle_timeout_request(long param_1)

{
  return *(undefined8 *)(param_1 + 0x568);
}



undefined8 ossl_quic_channel_get_max_idle_timeout_peer_request(long param_1)

{
  return *(undefined8 *)(param_1 + 0x570);
}



undefined8 ossl_quic_channel_get_max_idle_timeout_actual(long param_1)

{
  return *(undefined8 *)(param_1 + 0x578);
}




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
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined8 local_e0;
  undefined1 local_d8 [64];
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  uint local_68;
  code *local_60;
  long local_58;
  long local_40;
  
  bVar7 = 0;
  lVar5 = param_1 + 0x478;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0;
  if (*(char *)(param_1 + 0x48d) != '\0') {
    lVar5 = param_1 + 0x48d;
  }
  if (((*(long *)(param_1 + 0x50) != 0) || ((*(byte *)(param_1 + 0x621) & 1) != 0)) ||
     (a = BUF_MEM_new(), a == (BUF_MEM *)0x0)) {
    a = (BUF_MEM *)0x0;
    uVar4 = 0;
    goto LAB_001000d2;
  }
  iVar2 = WPACKET_init(local_d8,a);
  if (iVar2 != 0) {
    lVar3 = ossl_quic_wire_encode_transport_param_bytes(local_d8,0xc,0,0);
    if (lVar3 != 0) {
      if ((*(byte *)(param_1 + 0x623) & 2) == 0) {
        iVar2 = ossl_quic_wire_encode_transport_param_cid(local_d8,0xf,param_1 + 0x4a2);
joined_r0x001003ac:
        if (iVar2 != 0) {
LAB_00100179:
          iVar2 = ossl_quic_wire_encode_transport_param_int
                            (local_d8,1,*(undefined8 *)(param_1 + 0x568));
          if (((iVar2 != 0) &&
              (iVar2 = ossl_quic_wire_encode_transport_param_int(local_d8,3,0x4b0), iVar2 != 0)) &&
             ((iVar2 = ossl_quic_wire_encode_transport_param_int(local_d8,0xe,2), iVar2 != 0 &&
              ((*(long *)(param_1 + 0x520) == 0x19 ||
               (iVar2 = ossl_quic_wire_encode_transport_param_int(local_d8,0xb), iVar2 != 0)))))) {
            uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x110);
            iVar2 = ossl_quic_wire_encode_transport_param_int(local_d8,4,uVar4);
            if ((iVar2 != 0) &&
               (((iVar2 = ossl_quic_wire_encode_transport_param_int
                                    (local_d8,5,*(undefined8 *)(param_1 + 0x508)), iVar2 != 0 &&
                 (iVar2 = ossl_quic_wire_encode_transport_param_int
                                    (local_d8,6,*(undefined8 *)(param_1 + 0x510)), iVar2 != 0)) &&
                (iVar2 = ossl_quic_wire_encode_transport_param_int
                                   (local_d8,7,*(undefined8 *)(param_1 + 0x518)), iVar2 != 0)))) {
              uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x290);
              iVar2 = ossl_quic_wire_encode_transport_param_int(local_d8,8,uVar4);
              if (iVar2 != 0) {
                uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x2f0);
                iVar2 = ossl_quic_wire_encode_transport_param_int(local_d8,9,uVar4);
                if ((iVar2 != 0) && (iVar2 = WPACKET_finish(local_d8), iVar2 != 0)) {
                  iVar2 = WPACKET_get_total_written(local_d8,&local_e0);
                  if (iVar2 != 0) {
                    pcVar1 = a->data;
                    uVar4 = *(undefined8 *)(param_1 + 0x28);
                    *(char **)(param_1 + 0x50) = pcVar1;
                    a->data = (char *)0x0;
                    iVar2 = ossl_quic_tls_set_transport_params(uVar4,pcVar1,local_e0);
                    if (iVar2 != 0) {
                      lVar5 = *(long *)(param_1 + 0x48);
                      puVar6 = &local_98;
                      for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
                        *(undefined4 *)puVar6 = 0;
                        puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -8 + 4);
                      }
                      if (((lVar5 == 0) && ((*(byte *)(param_1 + 0x625) & 2) != 0)) &&
                         (((*(byte *)(param_1 + 0x623) & 2) == 0 ||
                          (*(char *)(param_1 + 0x478) != '\0')))) {
                        local_98 = *(undefined8 *)(param_1 + 0x478);
                        local_68 = *(byte *)(param_1 + 0x623) >> 1 & 1;
                        uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x480);
                        uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x485);
                        uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
                        local_80 = *(undefined8 *)(param_1 + 0x640);
                        local_60 = get_time;
                        local_58 = param_1;
                        lVar5 = ossl_qlog_new_from_env(&local_98);
                        *(long *)(param_1 + 0x48) = lVar5;
                        if (lVar5 == 0) {
                          *(byte *)(param_1 + 0x625) = *(byte *)(param_1 + 0x625) & 0xfd;
                        }
                      }
                      iVar2 = ossl_qlog_event_try_begin
                                        (lVar5,4,"transport","parameters_set",
                                         "transport:parameters_set");
                      if (iVar2 != 0) {
                        ossl_qlog_str(lVar5,"owner","local");
                        ossl_qlog_bool(lVar5,"disable_active_migration",1);
                        if ((*(byte *)(param_1 + 0x623) & 2) == 0) {
                          ossl_qlog_str(lVar5,"initial_source_connection_id",&_LC9);
                        }
                        else {
                          ossl_qlog_bin(lVar5,"original_destination_connection_id",param_1 + 0x479,
                                        *(undefined1 *)(param_1 + 0x478));
                          ossl_qlog_bin(lVar5,"initial_source_connection_id",param_1 + 0x4cd,
                                        *(undefined1 *)(param_1 + 0x4cc));
                        }
                        ossl_qlog_u64(lVar5,"max_idle_timeout",*(undefined8 *)(param_1 + 0x578));
                        ossl_qlog_u64(lVar5,"max_udp_payload_size",0x4b0);
                        ossl_qlog_u64(lVar5,"active_connection_id_limit",2);
                        ossl_qlog_u64(lVar5,"max_ack_delay",*(undefined8 *)(param_1 + 0x520));
                        uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x110);
                        ossl_qlog_u64(lVar5,"initial_max_data",uVar4);
                        ossl_qlog_u64(lVar5,"initial_max_stream_data_bidi_local",
                                      *(undefined8 *)(param_1 + 0x508));
                        ossl_qlog_u64(lVar5,"initial_max_stream_data_bidi_remote",
                                      *(undefined8 *)(param_1 + 0x510));
                        ossl_qlog_u64(lVar5,"initial_max_stream_data_uni",
                                      *(undefined8 *)(param_1 + 0x518));
                        uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x290);
                        ossl_qlog_u64(lVar5,"initial_max_streams_bidi",uVar4);
                        uVar4 = ossl_quic_rxfc_get_cwm(param_1 + 0x2f0);
                        ossl_qlog_u64(lVar5,"initial_max_streams_uni",uVar4);
                        ossl_qlog_event_end(lVar5);
                      }
                      *(byte *)(param_1 + 0x621) = *(byte *)(param_1 + 0x621) | 1;
                      uVar4 = 1;
                      goto LAB_001000d2;
                    }
                  }
                  goto LAB_001003c0;
                }
              }
            }
          }
        }
      }
      else {
        iVar2 = ossl_quic_wire_encode_transport_param_cid(local_d8,0,lVar5);
        if ((iVar2 != 0) &&
           (iVar2 = ossl_quic_wire_encode_transport_param_cid(local_d8,0xf,param_1 + 0x4cc),
           iVar2 != 0)) {
          if (*(char *)(param_1 + 0x48d) != '\0') {
            iVar2 = ossl_quic_wire_encode_transport_param_cid(local_d8,0x10,param_1 + 0x478);
            goto joined_r0x001003ac;
          }
          goto LAB_00100179;
        }
      }
    }
    WPACKET_cleanup(local_d8);
  }
LAB_001003c0:
  uVar4 = 0;
LAB_001000d2:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ch_init(long *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
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
  puVar11 = (undefined8 *)&local_178;
  for (lVar8 = 0x27; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_1a8 = (undefined1  [16])0x0;
  plVar10 = &local_248;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar10 = 0;
    plVar10 = plVar10 + 1;
  }
  local_198 = (undefined1  [16])0x0;
  if (((*param_1 != 0) && (param_1[7] != 0)) && (param_1[8] != 0)) {
    iVar2 = ossl_quic_port_get_rx_short_dcid_len();
    iVar3 = ossl_quic_port_get_tx_init_dcid_len(*param_1);
    if ((*(byte *)((long)param_1 + 0x623) & 2) == 0) {
      iVar3 = ossl_quic_gen_rand_conn_id(**(undefined8 **)*param_1,(long)iVar3,param_1 + 0x8f);
      if (iVar3 == 0) goto LAB_00101178;
    }
    local_278._0_8_ = **(undefined8 **)*param_1;
    param_1[0xb0] = 0x4b0;
    param_1[0xbf] = -1;
    local_258._8_8_ = param_1;
    local_258._0_8_ = ch_get_qlog_cb;
    local_268._8_8_ = 0x4b0;
    lVar8 = ossl_qtx_new(local_278);
    param_1[0x84] = lVar8;
    if (lVar8 != 0) {
      lVar8 = ossl_quic_txpim_new();
      param_1[0x1c] = lVar8;
      if (lVar8 != 0) {
        lVar8 = ossl_quic_cfq_new();
        param_1[0x1d] = lVar8;
        if (lVar8 != 0) {
          iVar3 = ossl_quic_txfc_init(param_1 + 0x1e,0);
          lVar4 = _UNK_001080a8;
          lVar8 = __LC20;
          if (iVar3 != 0) {
            param_1[0xa3] = 0x80000;
            param_1[0xa1] = lVar8;
            param_1[0xa2] = lVar4;
            iVar3 = ossl_quic_rxfc_init(param_1 + 0x22,0,0xc0000,0xf00000,get_time,param_1);
            if (iVar3 != 0) {
              plVar10 = param_1 + 0x52;
              plVar9 = param_1 + 0x2e;
              do {
                iVar3 = ossl_quic_rxfc_init_standalone(plVar9,0x4000,get_time,param_1);
                if (iVar3 == 0) goto LAB_00101178;
                plVar9 = plVar9 + 0xc;
              } while (plVar9 != plVar10);
              iVar3 = ossl_quic_rxfc_init_standalone(plVar10,100,get_time,param_1);
              if (iVar3 != 0) {
                plVar9 = param_1 + 0x5e;
                iVar3 = ossl_quic_rxfc_init_standalone(plVar9,100,get_time,param_1);
                if (iVar3 != 0) {
                  iVar3 = ossl_statm_init(param_1 + 0x7c);
                  if (iVar3 != 0) {
                    *(byte *)((long)param_1 + 0x621) = *(byte *)((long)param_1 + 0x621) | 0x10;
                    param_1[0x82] = (long)&ossl_cc_newreno_method;
                    lVar8 = (*_ossl_cc_newreno_method)(get_time,param_1);
                    param_1[0x81] = lVar8;
                    if (lVar8 != 0) {
                      lVar8 = ossl_ackm_new(get_time,param_1,param_1 + 0x7c,param_1[0x82],lVar8);
                      param_1[0x83] = lVar8;
                      if (lVar8 != 0) {
                        iVar3 = ossl_quic_stream_map_init
                                          (param_1 + 0x6a,0x100000,param_1,plVar10,plVar9,
                                           *(byte *)((long)param_1 + 0x623) >> 1 & 1);
                        if ((iVar3 != 0) &&
                           ((*(byte *)((long)param_1 + 0x621) =
                                  *(byte *)((long)param_1 + 0x621) | 0x20,
                            (*(byte *)((long)param_1 + 0x623) & 2) != 0 ||
                            (iVar3 = ossl_quic_lcidm_generate_initial
                                               (param_1[7],param_1,(long)param_1 + 0x4a2),
                            iVar3 != 0)))) {
                          _local_178 = *(undefined8 *)((long)param_1 + 0x4a2);
                          lVar8 = 0;
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
                          local_a0 = plVar10;
                          local_98 = plVar9;
                          local_78 = param_1;
                          local_68 = param_1;
                          do {
                            lVar4 = ossl_quic_sstream_new(0x4000);
                            *(long *)((long)param_1 + lVar8 + 0x448) = lVar4;
                            if (lVar4 == 0) goto LAB_00101178;
                            *(long *)((long)local_58 + lVar8) = lVar4;
                            lVar8 = lVar8 + 8;
                          } while (lVar8 != 0x18);
                          lVar8 = ossl_quic_tx_packetiser_new(&local_178);
                          param_1[0x1b] = lVar8;
                          if (lVar8 != 0) {
                            if ((*(byte *)((long)param_1 + 0x623) & 2) == 0) {
                              ossl_quic_tx_packetiser_set_validated(lVar8);
                            }
                            ossl_quic_tx_packetiser_set_ack_tx_cb
                                      (param_1[0x1b],ch_on_txp_ack_tx,param_1);
                            if (param_1[0x85] == 0) {
                              if ((*(byte *)((long)param_1 + 0x625) & 4) == 0) {
                                local_1b8._8_8_ = (long)iVar2;
                                local_1b8._0_8_ = ((undefined8 *)*param_1)[8];
                                local_1c8._0_8_ = **(undefined8 **)*param_1;
                                local_1a8._0_8_ = 0x20;
                                lVar8 = ossl_qrx_new(local_1c8);
                                param_1[0x85] = lVar8;
                                if (lVar8 == 0) goto LAB_00101178;
                                goto LAB_00100f0c;
                              }
                            }
                            else {
LAB_00100f0c:
                              iVar2 = ossl_qrx_set_late_validation_cb
                                                (param_1[0x85],rx_late_validate,param_1);
                              if ((iVar2 == 0) ||
                                 (iVar2 = ossl_qrx_set_key_update_cb
                                                    (param_1[0x85],rxku_detected,param_1),
                                 iVar2 == 0)) goto LAB_00101178;
                            }
                            plVar10 = param_1 + 0x8c;
                            do {
                              lVar8 = ossl_quic_rstream_new(0,0,0);
                              *plVar10 = lVar8;
                              if (lVar8 == 0) goto LAB_00101178;
                              plVar10 = plVar10 + 1;
                            } while (param_1 + 0x8f != plVar10);
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
                            lVar8 = ossl_quic_tls_new(&local_248);
                            param_1[5] = lVar8;
                            if (lVar8 != 0) {
                              *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfff03fff;
                              lVar4 = _UNK_001080b8;
                              lVar8 = __LC21;
                              *(undefined1 *)(param_1 + 0xa9) = 3;
                              param_1[0xa4] = 0x19;
                              param_1[0xa8] = 0x19;
                              param_1[0xb1] = 2;
                              param_1[0xb7] = -1;
                              param_1[0xaf] = 30000;
                              param_1[0xad] = lVar8;
                              param_1[0xae] = lVar4;
                              ossl_ackm_set_tx_max_ack_delay(param_1[0x83],25000000);
                              ossl_ackm_set_rx_max_ack_delay(param_1[0x83],param_1[0xa8] * 1000000);
                              uVar5 = 0xffffffffffffffff;
                              if (param_1[0xaf] != 0) {
                                uVar5 = ossl_ackm_get_pto_duration(param_1[0x83]);
                                auVar1._8_8_ = 0;
                                auVar1._0_8_ = uVar5;
                                uVar6 = SUB168(auVar1 * ZEXT816(3),0);
                                if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
                                  uVar6 = 0xffffffffffffffff;
                                }
                                uVar5 = param_1[0xaf] * 1000000;
                                if ((ulong)(param_1[0xaf] * 1000000) < uVar6) {
                                  uVar5 = uVar6;
                                }
                              }
                              uVar6 = ossl_quic_port_get_time(*param_1);
                              lVar8 = uVar6 + uVar5;
                              if (CARRY8(uVar6,uVar5)) {
                                lVar8 = -1;
                              }
                              param_1[0xbe] = lVar8;
                              lVar8 = *param_1;
                              lVar4 = *(long *)(lVar8 + 0x50);
                              if (lVar4 != 0) {
                                *(long **)(lVar4 + 8) = param_1;
                              }
                              param_1[2] = lVar4;
                              lVar4 = *(long *)(lVar8 + 0x48);
                              param_1[1] = 0;
                              *(long **)(lVar8 + 0x50) = param_1;
                              if (lVar4 == 0) {
                                *(long **)(lVar8 + 0x48) = param_1;
                              }
                              *(long *)(lVar8 + 0x58) = *(long *)(lVar8 + 0x58) + 1;
                              uVar7 = 1;
                              *(byte *)((long)param_1 + 0x625) =
                                   *(byte *)((long)param_1 + 0x625) | 1;
                              goto LAB_00101182;
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
LAB_00101178:
  ch_cleanup(param_1);
  uVar7 = 0;
LAB_00101182:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
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



void ch_record_state_transition(long param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined5 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined8 local_70;
  uint local_58;
  code *local_50;
  long local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(param_1 + 0x620);
  *(byte *)(param_1 + 0x620) = bVar1 & 0xf8 | (byte)param_2 & 7;
  bVar2 = *(byte *)(param_1 + 0x621);
  puVar4 = (undefined8 *)&local_88;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (((lVar3 == 0) && ((*(byte *)(param_1 + 0x625) & 2) != 0)) &&
     (((*(byte *)(param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x478) != '\0')))) {
    _local_88 = *(undefined8 *)(param_1 + 0x478);
    local_58 = *(byte *)(param_1 + 0x623) >> 1 & 1;
    uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x480);
    uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x485);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
    local_70 = *(undefined8 *)(param_1 + 0x640);
    local_50 = get_time;
    local_48 = param_1;
    lVar3 = ossl_qlog_new_from_env(&local_88);
    *(long *)(param_1 + 0x48) = lVar3;
    if (lVar3 == 0) {
      *(byte *)(param_1 + 0x625) = *(byte *)(param_1 + 0x625) & 0xfd;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    ossl_qlog_event_connectivity_connection_state_updated(lVar3,bVar1 & 7,param_2,bVar2 >> 1 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}



void ch_start_terminating(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined8 local_70;
  uint local_58;
  code *local_50;
  undefined8 *local_48;
  long local_30;
  
  bVar11 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(param_1 + 0xc4);
  if ((bVar1 & 0x20) == 0) {
    bVar4 = bVar1 & 7;
    if (bVar4 != 3) {
      if (bVar4 < 4) {
        if (bVar4 == 1) {
          param_3 = 1;
LAB_0010152e:
          uVar9 = param_2[1];
          bVar1 = *(byte *)(param_1 + 0xbc);
          param_1[0xb8] = *param_2;
          param_1[0xb9] = uVar9;
          bVar4 = *(byte *)(param_2 + 4);
          *(byte *)(param_1 + 0xbc) = bVar1 & 0xfe | bVar4 & 1;
          bVar2 = *(byte *)(param_2 + 4);
          param_1[0xba] = 0;
          param_1[0xbb] = 0;
          *(byte *)(param_1 + 0xbc) = bVar1 & 0xfc | bVar4 & 1 | bVar2 & 2;
          if ((param_2[2] != 0) && (lVar7 = param_2[3], lVar7 != 0)) {
            lVar8 = -2;
            if (lVar7 != -1) {
              lVar8 = lVar7;
            }
            lVar7 = CRYPTO_memdup(param_2[2],lVar8 + 1,"ssl/quic/quic_channel.c",0xc59);
            param_1[0xba] = lVar7;
            if (lVar7 != 0) {
              *(undefined1 *)(lVar7 + lVar8) = 0;
              param_1[0xbb] = lVar8;
            }
          }
          puVar10 = &local_88;
          for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
          }
          lVar7 = param_1[9];
          if (((lVar7 == 0) && ((*(byte *)((long)param_1 + 0x625) & 2) != 0)) &&
             (((*(byte *)((long)param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x8f) != '\0'))))
          {
            local_88 = param_1[0x8f];
            local_58 = *(byte *)((long)param_1 + 0x623) >> 1 & 1;
            uStack_80 = (undefined5)param_1[0x90];
            uStack_7b = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
            uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
            local_70 = param_1[200];
            local_50 = get_time;
            local_48 = param_1;
            lVar7 = ossl_qlog_new_from_env(&local_88);
            param_1[9] = lVar7;
            if (lVar7 == 0) {
              *(byte *)((long)param_1 + 0x625) = *(byte *)((long)param_1 + 0x625) & 0xfd;
            }
          }
          ossl_qlog_event_connectivity_connection_closed(lVar7,param_2);
          if (param_3 == 0) {
            ch_record_state_transition(param_1,((*(byte *)(param_2 + 4) & 2) != 0) + '\x02');
            uVar5 = ossl_ackm_get_pto_duration(param_1[0x83]);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar5;
            uVar5 = SUB168(auVar3 * ZEXT816(3),0);
            if (SUB168(auVar3 * ZEXT816(3),8) != 0) {
              uVar5 = 0xffffffffffffffff;
            }
            uVar6 = ossl_quic_port_get_time(*param_1);
            lVar7 = uVar5 + uVar6;
            if (CARRY8(uVar5,uVar6)) {
              lVar7 = -1;
            }
            param_1[0xbd] = lVar7;
            if ((*(byte *)(param_2 + 4) & 2) == 0) {
              local_b0 = param_1[0xb8];
              uStack_a8 = param_1[0xb9];
              local_b8 = (ulong)*(byte *)(param_1 + 0xbc) & 0xffffffffffffff01;
              local_a0 = param_1[0xba];
              local_98 = param_1[0xbb];
              ossl_quic_tx_packetiser_schedule_conn_close(param_1[0x1b],&local_b8);
              *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 1;
            }
            goto LAB_00101500;
          }
        }
        else if (bVar4 != 2) goto LAB_00101678;
      }
      else {
LAB_00101670:
        if ((bVar1 & 7) == 4) goto LAB_00101500;
LAB_00101678:
        uVar9 = param_2[1];
        bVar1 = *(byte *)(param_1 + 0xbc);
        param_1[0xb8] = *param_2;
        param_1[0xb9] = uVar9;
        bVar11 = *(byte *)(param_2 + 4);
        *(byte *)(param_1 + 0xbc) = bVar1 & 0xfe | bVar11 & 1;
        bVar4 = *(byte *)(param_2 + 4);
        param_1[0xba] = 0;
        param_1[0xbb] = 0;
        *(byte *)(param_1 + 0xbc) = bVar1 & 0xfc | bVar11 & 1 | bVar4 & 2;
        if ((param_2[2] != 0) && (lVar7 = param_2[3], lVar7 != 0)) {
          lVar8 = -2;
          if (lVar7 != -1) {
            lVar8 = lVar7;
          }
          lVar7 = CRYPTO_memdup(param_2[2],lVar8 + 1,"ssl/quic/quic_channel.c",0xc59);
          param_1[0xba] = lVar7;
          if (lVar7 != 0) {
            *(undefined1 *)(lVar7 + lVar8) = 0;
            param_1[0xbb] = lVar8;
          }
        }
      }
    }
  }
  else {
    bVar4 = bVar1 & 7;
    if (bVar4 == 3) {
      if (param_3 == 0) {
LAB_00101500:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010182d;
      }
    }
    else {
      if (3 < bVar4) goto LAB_00101670;
      if (bVar4 == 1) goto LAB_0010152e;
      if (bVar4 != 2) goto LAB_00101678;
      if (param_3 == 0) {
        if ((*(byte *)(param_2 + 4) & 2) != 0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar9 = 3;
            goto LAB_001014ba;
          }
          goto LAB_0010182d;
        }
        goto LAB_00101500;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar9 = 4;
LAB_001014ba:
    ch_record_state_transition(param_1,uVar9);
    return;
  }
LAB_0010182d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = *(byte *)(param_2 + 0x622) >> 1;
  if ((bVar2 & 7) == 0) {
    lVar6 = 0x170;
    uVar3 = 0;
  }
  else {
    bVar7 = (bVar2 & 7) != 2;
    lVar6 = 0x1d0;
    if (bVar7) {
      lVar6 = 0x230;
    }
    uVar3 = bVar7 + 1;
  }
  lVar1 = *(long *)(param_2 + 0x460 + (ulong)uVar3 * 8);
  if (lVar1 != 0) {
    uVar5 = ossl_quic_channel_get_statm(param_2);
    ossl_statm_get_rtt_info(uVar5,local_58);
    iVar4 = ossl_quic_rxfc_on_retire(param_2 + lVar6,param_1,local_58[0]);
    if (iVar4 != 0) {
      uVar5 = ossl_quic_rstream_release_record(lVar1,param_1);
      goto LAB_00101ba2;
    }
  }
  uVar5 = 0;
LAB_00101ba2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
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
            goto LAB_00101c4d;
          }
        }
      }
    }
  }
  BUF_MEM_free(a);
  uVar3 = 0;
LAB_00101c4d:
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



void ossl_quic_channel_local_close(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  byte bVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  ulong local_c8;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined8 local_70;
  uint local_58;
  code *local_50;
  undefined8 *local_48;
  long local_30;
  
  bVar11 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0;
  local_d8 = (undefined1  [16])0x0;
  iVar4 = ossl_quic_channel_is_term_any();
  if (iVar4 != 0) goto LAB_00101f70;
  local_c8 = local_c8 | 1;
  sVar5 = 0;
  local_d8._0_8_ = param_3;
  pcVar2 = param_3;
  local_e8 = param_2;
  if (param_3 != (char *)0x0) {
    sVar5 = strlen(param_3);
    pcVar2 = (char *)local_d8._0_8_;
  }
  local_d8._0_8_ = pcVar2;
  local_d8._8_8_ = sVar5;
  bVar3 = *(byte *)(param_1 + 0xc4) & 7;
  bVar10 = *(byte *)(param_1 + 0xc4) & 0x20;
  if (bVar3 == 3) {
    if (bVar10 != 0) goto LAB_00101f70;
  }
  else if (bVar3 < 4) {
    if (bVar3 == 1) {
      param_1[0xba] = 0;
      param_1[0xbb] = 0;
      param_1[0xb8] = param_2;
      param_1[0xb9] = uStack_e0;
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfd | 1 | (byte)local_c8 & 2;
      if ((sVar5 != 0) && (param_3 != (char *)0x0)) {
        lVar8 = CRYPTO_memdup(param_3,sVar5 + 1,"ssl/quic/quic_channel.c",0xc59);
        param_1[0xba] = lVar8;
        if (lVar8 != 0) {
          *(undefined1 *)(lVar8 + sVar5) = 0;
          param_1[0xbb] = sVar5;
        }
      }
      puVar9 = &local_88;
      for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
      }
      lVar8 = param_1[9];
      if (((lVar8 == 0) && ((*(byte *)((long)param_1 + 0x625) & 2) != 0)) &&
         (((*(byte *)((long)param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x8f) != '\0')))) {
        local_88 = param_1[0x8f];
        local_58 = *(byte *)((long)param_1 + 0x623) >> 1 & 1;
        uStack_80 = (undefined5)param_1[0x90];
        uStack_7b = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
        uStack_78 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
        local_70 = param_1[200];
        local_50 = get_time;
        local_48 = param_1;
        lVar8 = ossl_qlog_new_from_env(&local_88);
        param_1[9] = lVar8;
        if (lVar8 == 0) {
          *(byte *)((long)param_1 + 0x625) = *(byte *)((long)param_1 + 0x625) & 0xfd;
        }
      }
      ossl_qlog_event_connectivity_connection_closed(lVar8,&local_e8);
      if (bVar10 != 0) {
        ch_record_state_transition(param_1,((local_c8 & 2) != 0) + '\x02');
        uVar6 = ossl_ackm_get_pto_duration(param_1[0x83]);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar6;
        uVar6 = SUB168(auVar1 * ZEXT816(3),0);
        if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
          uVar6 = 0xffffffffffffffff;
        }
        uVar7 = ossl_quic_port_get_time(*param_1);
        lVar8 = uVar7 + uVar6;
        if (CARRY8(uVar7,uVar6)) {
          lVar8 = -1;
        }
        param_1[0xbd] = lVar8;
        if ((local_c8 & 2) == 0) {
          local_b0 = param_1[0xb8];
          uStack_a8 = param_1[0xb9];
          local_b8 = (ulong)*(byte *)(param_1 + 0xbc) & 0xffffffffffffff01;
          local_a0 = param_1[0xba];
          local_98 = param_1[0xbb];
          ossl_quic_tx_packetiser_schedule_conn_close(param_1[0x1b],&local_b8);
          *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 1;
        }
        goto LAB_00101f70;
      }
    }
    else {
      if (bVar3 != 2) goto LAB_00101fa4;
      if (bVar10 != 0) {
        if ((local_c8 & 2) != 0) {
          ch_record_state_transition(param_1,3);
        }
        goto LAB_00101f70;
      }
    }
  }
  else {
    if (bVar3 == 4) goto LAB_00101f70;
LAB_00101fa4:
    param_1[0xba] = 0;
    param_1[0xbb] = 0;
    param_1[0xb8] = param_2;
    param_1[0xb9] = uStack_e0;
    *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfd | 1 | (byte)local_c8 & 2;
    if ((param_3 != (char *)0x0) && (sVar5 != 0)) {
      lVar8 = CRYPTO_memdup(param_3,sVar5 + 1,"ssl/quic/quic_channel.c",0xc59);
      param_1[0xba] = lVar8;
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + sVar5) = 0;
        param_1[0xbb] = sVar5;
      }
    }
  }
  ch_record_state_transition(param_1,4);
LAB_00101f70:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ossl_quic_channel_on_remote_conn_close(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  undefined8 *puVar12;
  byte bVar13;
  long in_FS_OFFSET;
  byte bVar14;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulong local_b8;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined8 local_60;
  uint local_48;
  code *local_40;
  undefined8 *local_38;
  long local_20;
  
  bVar14 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_c8 = (undefined1  [16])0x0;
  iVar6 = ossl_quic_channel_is_active();
  if (iVar6 == 0) goto LAB_001022e7;
  uVar3 = *(undefined8 *)*(undefined1 (*) [16])(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  local_d8 = *(undefined1 (*) [16])(param_2 + 8);
  lVar9 = *(long *)*(undefined1 (*) [16])(param_2 + 0x18);
  bVar11 = *param_2 & 1;
  lVar1 = *(long *)(param_2 + 0x20);
  local_c8 = *(undefined1 (*) [16])(param_2 + 0x18);
  local_b8 = CONCAT71(local_b8._1_7_,(byte)local_b8 & 0xfe | 2 | bVar11);
  bVar5 = *(byte *)(param_1 + 0xc4) & 7;
  bVar13 = *(byte *)(param_1 + 0xc4) & 0x20;
  if (bVar5 == 3) {
    if (bVar13 != 0) goto LAB_001022e7;
  }
  else if (bVar5 < 4) {
    if (bVar5 == 1) {
      param_1[0xb8] = uVar3;
      param_1[0xb9] = uVar4;
      param_1[0xba] = 0;
      param_1[0xbb] = 0;
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfe | bVar11 | 2;
      if ((lVar9 != 0) && (lVar1 != 0)) {
        lVar10 = -2;
        if (lVar1 != -1) {
          lVar10 = lVar1;
        }
        lVar9 = CRYPTO_memdup(lVar9,lVar10 + 1,"ssl/quic/quic_channel.c",0xc59);
        param_1[0xba] = lVar9;
        if (lVar9 != 0) {
          *(undefined1 *)(lVar9 + lVar10) = 0;
          param_1[0xbb] = lVar10;
        }
      }
      puVar12 = &local_78;
      for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
      }
      lVar9 = param_1[9];
      if (((lVar9 == 0) && ((*(byte *)((long)param_1 + 0x625) & 2) != 0)) &&
         (((*(byte *)((long)param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x8f) != '\0')))) {
        local_78 = param_1[0x8f];
        local_48 = *(byte *)((long)param_1 + 0x623) >> 1 & 1;
        uStack_70 = (undefined5)param_1[0x90];
        uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
        uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
        local_60 = param_1[200];
        local_40 = get_time;
        local_38 = param_1;
        lVar9 = ossl_qlog_new_from_env(&local_78);
        param_1[9] = lVar9;
        if (lVar9 == 0) {
          *(byte *)((long)param_1 + 0x625) = *(byte *)((long)param_1 + 0x625) & 0xfd;
        }
      }
      ossl_qlog_event_connectivity_connection_closed(lVar9,local_d8);
      if (bVar13 != 0) {
        ch_record_state_transition(param_1,((local_b8 & 2) != 0) + '\x02');
        uVar7 = ossl_ackm_get_pto_duration(param_1[0x83]);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        uVar7 = SUB168(auVar2 * ZEXT816(3),0);
        if (SUB168(auVar2 * ZEXT816(3),8) != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        uVar8 = ossl_quic_port_get_time(*param_1);
        lVar9 = uVar8 + uVar7;
        if (CARRY8(uVar8,uVar7)) {
          lVar9 = -1;
        }
        param_1[0xbd] = lVar9;
        if ((local_b8 & 2) == 0) {
          local_a0 = param_1[0xb8];
          uStack_98 = param_1[0xb9];
          local_a8 = (ulong)*(byte *)(param_1 + 0xbc) & 0xffffffffffffff01;
          local_90 = param_1[0xba];
          local_88 = param_1[0xbb];
          ossl_quic_tx_packetiser_schedule_conn_close(param_1[0x1b],&local_a8);
          *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 1;
        }
        goto LAB_001022e7;
      }
    }
    else {
      if (bVar5 != 2) goto LAB_001024b8;
      if (bVar13 != 0) {
        ch_record_state_transition(param_1,3);
        goto LAB_001022e7;
      }
    }
  }
  else {
    if (bVar5 == 4) goto LAB_001022e7;
LAB_001024b8:
    param_1[0xb8] = uVar3;
    param_1[0xb9] = uVar4;
    param_1[0xba] = 0;
    param_1[0xbb] = 0;
    *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfe | bVar11 | 2;
    if ((lVar9 != 0) && (lVar1 != 0)) {
      lVar10 = -2;
      if (lVar1 != -1) {
        lVar10 = lVar1;
      }
      lVar9 = CRYPTO_memdup(lVar9,lVar10 + 1,"ssl/quic/quic_channel.c",0xc59);
      param_1[0xba] = lVar9;
      if (lVar9 != 0) {
        *(undefined1 *)(lVar9 + lVar10) = 0;
        param_1[0xbb] = lVar10;
      }
    }
  }
  ch_record_state_transition(param_1,4);
LAB_001022e7:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



void ossl_quic_channel_on_stateless_reset(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulong local_b8;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined5 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined8 local_60;
  uint local_48;
  code *local_40;
  undefined8 *local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1  [16])0x0;
  bVar2 = *(byte *)(param_1 + 0xc4) & 7;
  local_b8 = 2;
  local_c8 = (undefined1  [16])0x0;
  bVar6 = *(byte *)(param_1 + 0xc4) & 0x20;
  if (bVar2 == 3) {
    if (bVar6 != 0) goto LAB_00102700;
  }
  else {
    if (3 < bVar2) {
      if (bVar2 == 4) goto LAB_00102700;
LAB_0010272c:
      param_1[0xba] = 0;
      *(undefined1 (*) [16])(param_1 + 0xb8) = (undefined1  [16])0x0;
      param_1[0xbb] = 0;
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfc | 2;
      ch_record_state_transition(param_1,4);
      goto LAB_00102700;
    }
    if (bVar2 == 1) {
      param_1[0xba] = 0;
      param_1[0xbb] = 0;
      *(undefined1 (*) [16])(param_1 + 0xb8) = (undefined1  [16])0x0;
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfc | 2;
      puVar7 = (undefined8 *)&local_78;
      for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      lVar5 = param_1[9];
      if (((lVar5 == 0) && ((*(byte *)((long)param_1 + 0x625) & 2) != 0)) &&
         (((*(byte *)((long)param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x8f) != '\0')))) {
        _local_78 = param_1[0x8f];
        local_48 = *(byte *)((long)param_1 + 0x623) >> 1 & 1;
        uStack_70 = (undefined5)param_1[0x90];
        uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
        uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
        local_60 = param_1[200];
        local_40 = get_time;
        local_38 = param_1;
        lVar5 = ossl_qlog_new_from_env(&local_78);
        param_1[9] = lVar5;
        if (lVar5 == 0) {
          *(byte *)((long)param_1 + 0x625) = *(byte *)((long)param_1 + 0x625) & 0xfd;
        }
      }
      ossl_qlog_event_connectivity_connection_closed(lVar5,local_d8);
      if (bVar6 != 0) {
        ch_record_state_transition(param_1,((local_b8 & 2) != 0) + '\x02');
        uVar3 = ossl_ackm_get_pto_duration(param_1[0x83]);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar3 = SUB168(auVar1 * ZEXT816(3),0);
        if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
          uVar3 = 0xffffffffffffffff;
        }
        uVar4 = ossl_quic_port_get_time(*param_1);
        lVar5 = uVar4 + uVar3;
        if (CARRY8(uVar4,uVar3)) {
          lVar5 = -1;
        }
        param_1[0xbd] = lVar5;
        if ((local_b8 & 2) == 0) {
          local_a0 = param_1[0xb8];
          uStack_98 = param_1[0xb9];
          local_a8 = (ulong)*(byte *)(param_1 + 0xbc) & 0xffffffffffffff01;
          local_90 = param_1[0xba];
          local_88 = param_1[0xbb];
          ossl_quic_tx_packetiser_schedule_conn_close(param_1[0x1b],&local_a8);
          *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 1;
        }
        goto LAB_00102700;
      }
    }
    else {
      if (bVar2 != 2) goto LAB_0010272c;
      if (bVar6 != 0) {
        ch_record_state_transition(param_1,3);
        goto LAB_00102700;
      }
    }
  }
  ch_record_state_transition(param_1,4);
LAB_00102700:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_quic_channel_raise_net_error(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined8 local_50;
  uint local_38;
  code *local_30;
  long local_28;
  long local_10;
  
  bVar6 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  if ((*(byte *)(param_1 + 0x624) & 0x20) != 0) goto LAB_00102988;
  *(byte *)(param_1 + 0x624) = *(byte *)(param_1 + 0x624) | 0x20;
  local_98 = 1;
  bVar3 = *(byte *)(param_1 + 0x620) & 7;
  local_90 = ZEXT816(0x1070f6) << 0x40;
  local_80 = ZEXT816(0x15);
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 == 1) {
        *(byte *)(param_1 + 0x5e0) = *(byte *)(param_1 + 0x5e0) & 0xfc;
        uVar2 = _UNK_001080c8;
        uVar1 = __LC24;
        *(undefined8 *)(param_1 + 0x5d0) = 0;
        *(undefined8 *)(param_1 + 0x5d8) = 0;
        *(undefined8 *)(param_1 + 0x5c0) = uVar1;
        *(undefined8 *)(param_1 + 0x5c8) = uVar2;
        lVar4 = CRYPTO_memdup("network BIO I/O error",0x16,"ssl/quic/quic_channel.c",0xc59);
        *(long *)(param_1 + 0x5d0) = lVar4;
        if (lVar4 != 0) {
          *(undefined1 *)(lVar4 + 0x15) = 0;
          *(undefined8 *)(param_1 + 0x5d8) = 0x15;
        }
        puVar5 = &local_68;
        for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
        }
        lVar4 = *(long *)(param_1 + 0x48);
        if (((lVar4 == 0) && ((*(byte *)(param_1 + 0x625) & 2) != 0)) &&
           (((*(byte *)(param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x478) != '\0')))) {
          local_68 = *(undefined8 *)(param_1 + 0x478);
          local_38 = *(byte *)(param_1 + 0x623) >> 1 & 1;
          uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x480);
          uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x485);
          uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
          local_50 = *(undefined8 *)(param_1 + 0x640);
          local_30 = get_time;
          local_28 = param_1;
          lVar4 = ossl_qlog_new_from_env(&local_68);
          *(long *)(param_1 + 0x48) = lVar4;
          if (lVar4 == 0) {
            *(byte *)(param_1 + 0x625) = *(byte *)(param_1 + 0x625) & 0xfd;
          }
        }
        ossl_qlog_event_connectivity_connection_closed(lVar4,&local_98);
        ch_record_state_transition(param_1,4);
        goto LAB_00102988;
      }
      goto LAB_00102aa8;
    }
  }
  else {
    if (bVar3 == 4) goto LAB_00102988;
LAB_00102aa8:
    *(byte *)(param_1 + 0x5e0) = *(byte *)(param_1 + 0x5e0) & 0xfc;
    uVar2 = _UNK_001080c8;
    uVar1 = __LC24;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    *(undefined8 *)(param_1 + 0x5c0) = uVar1;
    *(undefined8 *)(param_1 + 0x5c8) = uVar2;
    lVar4 = CRYPTO_memdup("network BIO I/O error",0x16,"ssl/quic/quic_channel.c",0xc59);
    *(long *)(param_1 + 0x5d0) = lVar4;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x15) = 0;
      *(undefined8 *)(param_1 + 0x5d8) = 0x15;
    }
  }
  ch_record_state_transition(param_1,4);
LAB_00102988:
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
  if ((*(byte *)(param_1 + 0x624) & 0x40) != 0) goto LAB_00102da8;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = &_LC9;
    local_80 = &_LC9;
    local_88 = &_LC9;
  }
  else {
    local_80 = &_LC25;
    local_88 = &_LC26;
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
    puVar4 = &_LC25;
    puVar7 = &_LC26;
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
    if (lVar6 != 0) goto LAB_00102d71;
  }
  else {
LAB_00102d71:
    OSSL_ERR_STATE_save(lVar6);
  }
  local_68._8_8_ = param_3;
  local_68._0_8_ = param_2;
  local_58._0_8_ = param_4;
  sVar5 = strlen(param_4);
  local_58._8_8_ = sVar5;
  *(byte *)(param_1 + 0x624) = *(byte *)(param_1 + 0x624) | 0x40;
  ch_start_terminating(param_1,local_68,0);
LAB_00102da8:
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
      goto LAB_00102f4f;
    }
  }
  else if (((param_2 == 0x2f) && ((*(byte *)(param_1 + 0x621) & 2) != 0)) &&
          (iVar1 = ossl_quic_tls_has_bad_max_early_data(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0
          )) {
    pcVar2 = "Bad max_early_data received";
    uVar3 = 0x4cd;
LAB_00102f4f:
    ossl_quic_channel_raise_protocol_error_loc
              (param_1,10,0,pcVar2,0,"ssl/quic/quic_channel.c",uVar3,"ch_on_handshake_alert");
    return 1;
  }
  ossl_quic_channel_raise_protocol_error_loc
            (param_1,(ulong)param_2 + 0x100,0,"handshake alert",0,"ssl/quic/quic_channel.c",0x4d2,
             "ch_on_handshake_alert");
  return 1;
}



int ch_on_transport_params(undefined8 param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
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
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  undefined8 *puVar24;
  long in_FS_OFFSET;
  byte bVar25;
  undefined8 uVar26;
  int local_150;
  int local_144;
  long local_138;
  ulong local_130;
  undefined8 local_120;
  ulong local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  byte local_f8;
  undefined1 local_f7 [31];
  undefined2 local_d8;
  undefined2 local_d6;
  undefined1 local_d4 [4];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  char local_b0;
  undefined1 local_af [23];
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  uint local_68;
  code *local_60;
  undefined8 *local_58;
  long local_40;
  
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_3 + 0xc4) < '\0') {
    pcVar23 = "multiple transport parameter extensions";
    goto LAB_001030a7;
  }
  if (param_2 < 0) {
    pcVar23 = "internal error (packet buf init)";
    uVar26 = 0x53c;
LAB_0010383e:
    ossl_quic_channel_raise_protocol_error_loc
              (param_3,1,0,pcVar23,0,"ssl/quic/quic_channel.c",uVar26,"ch_on_transport_params");
  }
  else {
    local_108 = param_1;
    local_100 = param_2;
    if (param_2 == 0) {
LAB_00103b00:
      pcVar23 = "INITIAL_SCID was not sent but is required";
    }
    else {
      local_150 = 0;
      bVar3 = false;
      local_138 = 0;
      local_130 = 0;
      bVar17 = false;
      bVar12 = false;
      bVar10 = false;
      bVar14 = false;
      bVar15 = false;
      bVar16 = false;
      bVar13 = false;
      bVar8 = false;
      bVar7 = false;
      bVar5 = false;
      bVar11 = false;
      bVar9 = false;
      bVar4 = false;
      bVar6 = false;
      local_144 = 0;
      do {
        iVar18 = ossl_quic_wire_peek_transport_param(&local_108,&local_120);
        if (iVar18 == 0) {
LAB_00103870:
          pcVar23 = "bad transport parameter";
          goto LAB_001030a7;
        }
        switch(local_120) {
        case 0:
          if (bVar6) {
            pcVar23 = "ORIG_DCID appears multiple times";
            goto LAB_001030a7;
          }
          if ((*(byte *)((long)param_3 + 0x623) & 2) != 0) {
            pcVar23 = "ORIG_DCID may not be sent by a client";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_cid(&local_108,0,&local_f8);
          if (iVar18 == 0) {
            pcVar23 = "ORIG_DCID is malformed";
            goto LAB_001030a7;
          }
          bVar1 = *(byte *)(param_3 + 0x8f);
          if (((local_f8 != bVar1) || (0x14 < bVar1)) ||
             (iVar18 = memcmp((void *)((long)param_3 + 0x479),local_f7,(ulong)bVar1), iVar18 != 0))
          {
            pcVar23 = "ORIG_DCID does not match expected value";
            goto LAB_001030a7;
          }
          bVar6 = true;
          break;
        case 1:
          if (bVar12) {
            pcVar23 = "MAX_IDLE_TIMEOUT appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if (iVar18 == 0) {
            pcVar23 = "MAX_IDLE_TIMEOUT is malformed";
            goto LAB_001030a7;
          }
          uVar19 = param_3[0xad];
          param_3[0xae] = local_118;
          if (uVar19 == 0) {
            param_3[0xaf] = local_118;
            uVar19 = 0xffffffffffffffff;
            if (local_118 != 0) goto LAB_001034a0;
          }
          else {
            uVar20 = uVar19;
            if (local_118 <= uVar19) {
              uVar20 = local_118;
            }
            if (local_118 != 0) {
              uVar19 = uVar20;
            }
            param_3[0xaf] = uVar19;
LAB_001034a0:
            uVar19 = ossl_ackm_get_pto_duration(param_3[0x83]);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar19;
            uVar20 = SUB168(auVar2 * ZEXT816(3),0);
            if (SUB168(auVar2 * ZEXT816(3),8) != 0) {
              uVar20 = 0xffffffffffffffff;
            }
            uVar19 = param_3[0xaf] * 1000000;
            if ((ulong)(param_3[0xaf] * 1000000) < uVar20) {
              uVar19 = uVar20;
            }
          }
          uVar20 = ossl_quic_port_get_time(*param_3);
          lVar21 = uVar20 + uVar19;
          if (CARRY8(uVar20,uVar19)) {
            lVar21 = -1;
          }
          param_3[0xbe] = lVar21;
          local_130 = local_118;
          bVar12 = true;
          break;
        case 2:
          if (bVar13) {
            pcVar23 = "STATELESS_RESET_TOKEN appears multiple times";
            goto LAB_001030a7;
          }
          if ((*(byte *)((long)param_3 + 0x623) & 2) != 0) {
            pcVar23 = "STATELESS_RESET_TOKEN may not be sent by a client";
            goto LAB_001030a7;
          }
          local_138 = ossl_quic_wire_decode_transport_param_bytes(&local_108,&local_120,&local_110);
          if ((local_138 == 0) || (local_110 != 0x10)) {
            pcVar23 = "STATELESS_RESET_TOKEN is malformed";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_srtm_add(param_3[8],param_3,param_3[0x9f],local_138);
          if (iVar18 == 0) {
            pcVar23 = "STATELESS_RESET_TOKEN encountered internal error";
            goto LAB_001030a7;
          }
          bVar13 = true;
          break;
        case 3:
          if (bVar10) {
            pcVar23 = "MAX_UDP_PAYLOAD_SIZE appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if ((iVar18 == 0) || (local_118 < 0x4b0)) {
            pcVar23 = "MAX_UDP_PAYLOAD_SIZE is malformed";
            goto LAB_001030a7;
          }
          param_3[0xb0] = local_118;
          bVar10 = true;
          break;
        case 4:
          if (bVar9) {
            pcVar23 = "INITIAL_MAX_DATA appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if (iVar18 == 0) {
            pcVar23 = "INITIAL_MAX_DATA is malformed";
            goto LAB_001030a7;
          }
          ossl_quic_txfc_bump_cwm(param_3 + 0x1e,local_118);
          bVar9 = true;
          break;
        case 5:
          if (bVar11) {
            pcVar23 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if (iVar18 == 0) {
            pcVar23 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL is malformed";
            goto LAB_001030a7;
          }
          bVar11 = true;
          param_3[0xa6] = local_118;
          break;
        case 6:
          if (bVar3) {
            pcVar23 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if (iVar18 == 0) {
            pcVar23 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE is malformed";
            goto LAB_001030a7;
          }
          bVar3 = true;
          param_3[0xa5] = local_118;
          ossl_quic_stream_map_visit(param_3 + 0x6a,txfc_bump_cwm_bidi,&local_118);
          break;
        case 7:
          if (bVar5) {
            pcVar23 = "INITIAL_MAX_STREAM_DATA_UNI appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if (iVar18 == 0) {
            pcVar23 = "INITIAL_MAX_STREAM_DATA_UNI is malformed";
            goto LAB_001030a7;
          }
          param_3[0xa7] = local_118;
          ossl_quic_stream_map_visit(param_3 + 0x6a,txfc_bump_cwm_uni,&local_118);
          bVar5 = true;
          break;
        case 8:
          if (bVar7) {
            pcVar23 = "INITIAL_MAX_STREAMS_BIDI appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if ((iVar18 == 0) || (0x1000000000000000 < local_118)) {
            pcVar23 = "INITIAL_MAX_STREAMS_BIDI is malformed";
            goto LAB_001030a7;
          }
          param_3[0xab] = local_118;
          bVar7 = true;
          break;
        case 9:
          if (bVar8) {
            pcVar23 = "INITIAL_MAX_STREAMS_UNI appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if ((iVar18 == 0) || (0x1000000000000000 < local_118)) {
            pcVar23 = "INITIAL_MAX_STREAMS_UNI is malformed";
            goto LAB_001030a7;
          }
          param_3[0xac] = local_118;
          bVar8 = true;
          break;
        case 10:
          if (bVar15) {
            pcVar23 = "ACK_DELAY_EXP appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if ((iVar18 == 0) || (0x14 < local_118)) {
            pcVar23 = "ACK_DELAY_EXP is malformed";
            goto LAB_001030a7;
          }
          *(char *)(param_3 + 0xa9) = (char)local_118;
          bVar15 = true;
          break;
        case 0xb:
          if (bVar14) {
            pcVar23 = "MAX_ACK_DELAY appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if ((iVar18 == 0) || (0x3fff < local_118)) {
            pcVar23 = "MAX_ACK_DELAY is malformed";
            goto LAB_001030a7;
          }
          param_3[0xa8] = local_118;
          ossl_ackm_set_rx_max_ack_delay(param_3[0x83],local_118 * 1000000);
          bVar14 = true;
          break;
        case 0xc:
          if (local_150 != 0) {
            pcVar23 = "DISABLE_ACTIVE_MIGRATION appears multiple times";
            goto LAB_001030a7;
          }
          lVar21 = ossl_quic_wire_decode_transport_param_bytes(&local_108,&local_120,&local_110);
          if ((lVar21 == 0) || (local_110 != 0)) {
            pcVar23 = "DISABLE_ACTIVE_MIGRATION is malformed";
            goto LAB_001030a7;
          }
          local_150 = 1;
          break;
        case 0xd:
          if (bVar16) {
            pcVar23 = "PREFERRED_ADDR appears multiple times";
            goto LAB_001030a7;
          }
          if ((*(byte *)((long)param_3 + 0x623) & 2) != 0) {
            pcVar23 = "PREFERRED_ADDR may not be sent by a client";
            goto LAB_001030a7;
          }
          if (*(char *)((long)param_3 + 0x4e1) == '\0') {
            pcVar23 = "PREFERRED_ADDR provided for zero-length CID";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_preferred_addr(&local_108,&local_d8);
          if (iVar18 == 0) {
            pcVar23 = "PREFERRED_ADDR is malformed";
            goto LAB_001030a7;
          }
          if (local_b0 == '\0') {
            pcVar23 = "zero-length CID in PREFERRED_ADDR";
            goto LAB_001030a7;
          }
          bVar16 = true;
          break;
        case 0xe:
          if (bVar17) {
            pcVar23 = "ACTIVE_CONN_ID_LIMIT appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_int(&local_108,&local_120,&local_118);
          if ((iVar18 == 0) || (local_118 < 2)) {
            pcVar23 = "ACTIVE_CONN_ID_LIMIT is malformed";
            goto LAB_001030a7;
          }
          param_3[0xb1] = local_118;
          bVar17 = true;
          break;
        case 0xf:
          if (local_144 != 0) {
            pcVar23 = "INITIAL_SCID appears multiple times";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_cid(&local_108,0,&local_f8);
          if (iVar18 == 0) {
            pcVar23 = "INITIAL_SCID is malformed";
            goto LAB_001030a7;
          }
          bVar1 = *(byte *)((long)param_3 + 0x4a2);
          if (((local_f8 != bVar1) || (0x14 < bVar1)) ||
             (iVar18 = memcmp((void *)((long)param_3 + 0x4a3),local_f7,(ulong)bVar1), iVar18 != 0))
          {
            pcVar23 = "INITIAL_SCID does not match expected value";
            goto LAB_001030a7;
          }
          local_144 = 1;
          break;
        case 0x10:
          if ((*(byte *)((long)param_3 + 0x623) & 2) != 0) {
            pcVar23 = "RETRY_SCID may not be sent by a client";
            goto LAB_001030a7;
          }
          if (bVar4) {
            pcVar23 = "RETRY_SCID appears multiple times";
            goto LAB_001030a7;
          }
          if ((*(byte *)((long)param_3 + 0x621) & 8) == 0) {
            pcVar23 = "RETRY_SCID sent when not performing a retry";
            goto LAB_001030a7;
          }
          iVar18 = ossl_quic_wire_decode_transport_param_cid(&local_108,0,&local_f8);
          if (iVar18 == 0) {
            pcVar23 = "RETRY_SCID is malformed";
            goto LAB_001030a7;
          }
          bVar1 = *(byte *)((long)param_3 + 0x4b7);
          if (((local_f8 != bVar1) || (0x14 < bVar1)) ||
             (iVar18 = memcmp(param_3 + 0x97,local_f7,(ulong)bVar1), iVar18 != 0)) {
            pcVar23 = "RETRY_SCID does not match expected value";
            goto LAB_001030a7;
          }
          bVar4 = true;
          break;
        default:
          lVar21 = ossl_quic_wire_decode_transport_param_bytes(&local_108,&local_120,&local_110);
          if (lVar21 == 0) goto LAB_00103870;
        }
      } while (local_100 != 0);
      if (local_144 == 0) goto LAB_00103b00;
      bVar1 = *(byte *)((long)param_3 + 0x623);
      if ((bVar1 & 2) != 0) {
LAB_00103265:
        lVar21 = param_3[9];
        *(byte *)(param_3 + 0xc4) = *(byte *)(param_3 + 0xc4) | 0x80;
        puVar24 = &local_98;
        for (lVar22 = 0xb; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar24 = 0;
          puVar24 = puVar24 + (ulong)bVar25 * -2 + 1;
        }
        if (((lVar21 == 0) && ((*(byte *)((long)param_3 + 0x625) & 2) != 0)) &&
           (((bVar1 & 2) == 0 || (*(char *)(param_3 + 0x8f) != '\0')))) {
          local_98 = param_3[0x8f];
          local_68 = bVar1 >> 1 & 1;
          uStack_90 = (undefined5)param_3[0x90];
          uStack_8b = (undefined3)*(undefined8 *)((long)param_3 + 0x485);
          uStack_88 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x485) >> 0x18);
          local_80 = param_3[200];
          local_60 = get_time;
          local_58 = param_3;
          lVar21 = ossl_qlog_new_from_env(&local_98);
          param_3[9] = lVar21;
          if (lVar21 == 0) {
            *(byte *)((long)param_3 + 0x625) = *(byte *)((long)param_3 + 0x625) & 0xfd;
          }
        }
        iVar18 = ossl_qlog_event_try_begin
                           (lVar21,4,"transport","parameters_set","transport:parameters_set");
        if (iVar18 != 0) {
          ossl_qlog_str(lVar21,"owner","remote");
          if (bVar6) {
            ossl_qlog_bin(lVar21,"original_destination_connection_id",(long)param_3 + 0x479,
                          *(undefined1 *)(param_3 + 0x8f));
          }
          ossl_qlog_bin(lVar21,"original_source_connection_id",(long)param_3 + 0x479,
                        *(undefined1 *)(param_3 + 0x8f));
          if (bVar4) {
            ossl_qlog_bin(lVar21,"retry_source_connection_id",param_3 + 0x97,
                          *(undefined1 *)((long)param_3 + 0x4b7));
          }
          if (bVar9) {
            uVar26 = ossl_quic_txfc_get_cwm(param_3 + 0x1e);
            ossl_qlog_u64(lVar21,"initial_max_data",uVar26);
          }
          if (bVar11) {
            ossl_qlog_u64(lVar21,"initial_max_stream_data_bidi_local",param_3[0xa5]);
          }
          if (bVar3) {
            ossl_qlog_u64(lVar21,"initial_max_stream_data_bidi_remote",param_3[0xa6]);
          }
          if (bVar5) {
            ossl_qlog_u64(lVar21,"initial_max_stream_data_uni",param_3[0xa7]);
          }
          if (bVar7) {
            ossl_qlog_u64(lVar21,"initial_max_streams_bidi",param_3[0xab]);
          }
          if (bVar8) {
            ossl_qlog_u64(lVar21,"initial_max_streams_uni",param_3[0xac]);
          }
          if (bVar15) {
            ossl_qlog_u64(lVar21,"ack_delay_exponent",*(undefined1 *)(param_3 + 0xa9));
          }
          if (bVar14) {
            ossl_qlog_u64(lVar21,"max_ack_delay",param_3[0xa8]);
          }
          if (bVar10) {
            ossl_qlog_u64(lVar21,"max_udp_payload_size",param_3[0xb0]);
          }
          if (bVar12) {
            ossl_qlog_u64(lVar21,"max_idle_timeout",local_130);
          }
          if (bVar17) {
            ossl_qlog_u64(lVar21,"active_connection_id_limit",param_3[0xb1]);
          }
          if (bVar13) {
            ossl_qlog_bin(lVar21,"stateless_reset_token",local_138,0x10);
          }
          if (bVar16) {
            ossl_qlog_group_begin(lVar21,"preferred_addr");
            ossl_qlog_u64(lVar21,"port_v4",local_d8);
            ossl_qlog_u64(lVar21,"port_v6",local_d6);
            ossl_qlog_bin(lVar21,"ip_v4",local_d4,4);
            ossl_qlog_bin(lVar21,"ip_v6",local_d0,0x10);
            ossl_qlog_bin(lVar21,"stateless_reset_token",local_c0,0x10);
            ossl_qlog_bin(lVar21,"connection_id",local_af,local_b0);
            ossl_qlog_group_end(lVar21);
          }
          ossl_qlog_bool(lVar21,"disable_active_migration",local_150);
          ossl_qlog_event_end(lVar21);
        }
        if (((bVar3 || bVar9) || bVar8) || bVar7) {
          ossl_quic_stream_map_visit(param_3 + 0x6a,do_update,param_3);
        }
        if (((*(byte *)((long)param_3 + 0x623) & 2) == 0) ||
           (iVar18 = ch_generate_transport_params(param_3), iVar18 != 0)) goto LAB_001030d2;
        pcVar23 = "internal error";
        uVar26 = 0x723;
        goto LAB_0010383e;
      }
      if (bVar6) {
        if (((*(byte *)((long)param_3 + 0x621) & 8) == 0) || (bVar4)) goto LAB_00103265;
        pcVar23 = "RETRY_SCID was not sent but is required";
      }
      else {
        pcVar23 = "ORIG_DCID was not sent but is required";
      }
    }
LAB_001030a7:
    ossl_quic_channel_raise_protocol_error_loc
              (param_3,8,0,pcVar23,0,"ssl/quic/quic_channel.c",0x72b);
  }
  local_144 = 0;
LAB_001030d2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_144;
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
              goto LAB_00103fb7;
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
LAB_001040fb:
          uVar4 = 1;
          goto LAB_00103fb9;
        }
      }
    }
    else if ((*(uint *)(param_7 + 0x620) >> 0xe & 7) < param_1) {
      iVar3 = ossl_qtx_provide_secret(*(undefined8 *)(param_7 + 0x420),param_1,param_3);
      if (iVar3 != 0) {
        *(uint *)(param_7 + 0x620) = *(uint *)(param_7 + 0x620) & 0xfffe3fff | (param_1 & 7) << 0xe;
        goto LAB_001040fb;
      }
    }
  }
LAB_00103fb7:
  uVar4 = 0;
LAB_00103fb9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ch_on_crypto_recv_record(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  bVar1 = *(byte *)(param_3 + 0x622) >> 1;
  bVar2 = bVar1 & 7;
  if ((bVar1 & 7) != 0) {
    uVar6 = 0;
    lVar5 = 0;
LAB_001041b0:
    lVar5 = *(long *)(param_3 + 0x460 + lVar5 * 8);
    local_3c = 0;
    local_38 = 0;
    if (lVar5 != 0) {
      iVar3 = ossl_quic_rstream_available(lVar5,&local_38,&local_3c);
      if ((iVar3 == 0) || (local_38 != 0)) {
        ossl_quic_channel_raise_protocol_error_loc
                  (param_3,10,6,"crypto stream data in wrong EL",0,"ssl/quic/quic_channel.c",0x3f9,
                   "ch_on_crypto_recv_record");
        goto LAB_001042b2;
      }
      bVar2 = *(byte *)(param_3 + 0x622) >> 1 & 7;
    }
    uVar6 = uVar6 + 1;
    if (uVar6 < bVar2) {
      if (uVar6 != 1) goto LAB_00104220;
      if (bVar2 != 2) {
        uVar6 = 2;
        goto LAB_00104218;
      }
      goto LAB_001042c0;
    }
    if (bVar2 != 0) {
      if (bVar2 == 2) {
LAB_001042c0:
        lVar5 = 1;
      }
      else {
        lVar5 = 2;
      }
      goto LAB_00104245;
    }
  }
  lVar5 = 0;
LAB_00104245:
  lVar5 = *(long *)(param_3 + 0x460 + lVar5 * 8);
  if (lVar5 == 0) {
LAB_001042b2:
    uVar4 = 0;
  }
  else {
    uVar4 = ossl_quic_rstream_get_record(lVar5,param_1,param_2,&local_40);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
LAB_00104220:
  lVar5 = 2;
  if (uVar6 == 2) {
LAB_00104218:
    lVar5 = 1;
  }
  goto LAB_001041b0;
}



undefined8 ossl_quic_channel_on_handshake_confirmed(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined8 local_60;
  uint local_48;
  code *local_40;
  long local_38;
  long local_20;
  
  bVar6 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x621) & 4) == 0) {
    if ((*(byte *)(param_1 + 0x621) & 2) == 0) {
      ossl_quic_channel_raise_protocol_error_loc
                (param_1,10,0x1e,"handshake cannot be confirmed before it is completed",0,
                 "ssl/quic/quic_channel.c",0xc08,"ossl_quic_channel_on_handshake_confirmed");
      uVar2 = 0;
      goto LAB_0010437f;
    }
    if ((*(byte *)(param_1 + 0x622) & 0x40) == 0) {
      ossl_quic_tx_packetiser_discard_enc_level(*(undefined8 *)(param_1 + 0xd8),2);
      ossl_qrx_discard_enc_level(*(undefined8 *)(param_1 + 0x428),2);
      ossl_qtx_discard_enc_level(*(undefined8 *)(param_1 + 0x420),2);
      ossl_ackm_on_pkt_space_discarded(*(undefined8 *)(param_1 + 0x418),1);
      if ((*(long *)(param_1 + 0x450) != 0) && (*(long *)(param_1 + 0x468) != 0)) {
        ossl_quic_sstream_free();
        *(undefined8 *)(param_1 + 0x450) = 0;
        ossl_quic_rstream_free(*(undefined8 *)(param_1 + 0x468));
        *(byte *)(param_1 + 0x622) = *(byte *)(param_1 + 0x622) | 0x40;
        *(undefined8 *)(param_1 + 0x468) = 0;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x621);
    bVar5 = *(byte *)(param_1 + 0x620) & 7;
    *(byte *)(param_1 + 0x621) = bVar1 | 4;
    puVar4 = &local_78;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    }
    lVar3 = *(long *)(param_1 + 0x48);
    if (((lVar3 == 0) && ((*(byte *)(param_1 + 0x625) & 2) != 0)) &&
       (((*(byte *)(param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x478) != '\0')))) {
      local_78 = *(undefined8 *)(param_1 + 0x478);
      local_48 = *(byte *)(param_1 + 0x623) >> 1 & 1;
      uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x480);
      uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x485);
      uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
      local_60 = *(undefined8 *)(param_1 + 0x640);
      local_40 = get_time;
      local_38 = param_1;
      lVar3 = ossl_qlog_new_from_env(&local_78);
      *(long *)(param_1 + 0x48) = lVar3;
      if (lVar3 == 0) {
        *(byte *)(param_1 + 0x625) = *(byte *)(param_1 + 0x625) & 0xfd;
      }
    }
    ossl_qlog_event_connectivity_connection_state_updated(lVar3,bVar5,bVar5,(bVar1 & 2) >> 1,1);
    ossl_ackm_on_handshake_confirmed(*(undefined8 *)(param_1 + 0x418));
  }
  uVar2 = 1;
LAB_0010437f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ch_on_handshake_complete(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined8 local_60;
  uint local_48;
  code *local_40;
  long local_38;
  long local_20;
  
  bVar6 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(byte *)(param_1 + 0x621) & 2) == 0) && ((*(uint *)(param_1 + 0x620) & 0x1c000) == 0xc000))
  {
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
      bVar5 = *(byte *)(param_1 + 0x620) & 7;
      puVar4 = &local_78;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      if (((lVar3 == 0) && ((*(byte *)(param_1 + 0x625) & 2) != 0)) &&
         (((*(byte *)(param_1 + 0x623) & 2) == 0 || (*(char *)(param_1 + 0x478) != '\0')))) {
        local_78 = *(undefined8 *)(param_1 + 0x478);
        local_48 = *(byte *)(param_1 + 0x623) >> 1 & 1;
        uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x480);
        uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x485);
        uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
        local_60 = *(undefined8 *)(param_1 + 0x640);
        local_40 = get_time;
        local_38 = param_1;
        lVar3 = ossl_qlog_new_from_env(&local_78);
        *(long *)(param_1 + 0x48) = lVar3;
        if (lVar3 == 0) {
          *(byte *)(param_1 + 0x625) = *(byte *)(param_1 + 0x625) & 0xfd;
        }
      }
      ossl_qlog_event_connectivity_connection_state_updated
                (lVar3,bVar5,bVar5,bVar1 >> 1 & 1,bVar1 >> 2 & 1);
      uVar2 = 1;
      goto LAB_0010462f;
    }
    ossl_quic_channel_raise_protocol_error_loc
              (param_1,0x16d,6,"no transport parameters received",0,"ssl/quic/quic_channel.c",0x482,
               "ch_on_handshake_complete");
  }
  uVar2 = 0;
LAB_0010462f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (iVar3 == 0) goto LAB_001048c0;
  if (*(char *)(param_1 + 0x4e1) == '\0') {
    ossl_quic_channel_raise_protocol_error_loc
              (param_1,10,0x18,"zero length connection id in use",0,"ssl/quic/quic_channel.c",0xd07,
               "ossl_quic_channel_on_new_conn_id");
    goto LAB_001048c0;
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
          goto LAB_0010494e;
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
LAB_001048f0:
          ossl_quic_channel_raise_protocol_error_loc
                    (param_1,1,0x18,"internal error enqueueing retire conn id",0,
                     "ssl/quic/quic_channel.c",0xcf3,"ch_enqueue_retire_conn_id");
          BUF_MEM_free(a);
          break;
        }
        iVar3 = WPACKET_init(local_78,a);
        if (iVar3 == 0) goto LAB_001048f0;
        iVar3 = ossl_quic_wire_encode_frame_retire_conn_id(local_78,uVar1);
        if (iVar3 == 0) {
          WPACKET_cleanup(local_78);
          goto LAB_001048f0;
        }
        WPACKET_finish();
        iVar3 = WPACKET_get_total_written(local_78,&local_80);
        if ((iVar3 == 0) ||
           (lVar4 = ossl_quic_cfq_add_frame
                              (*(undefined8 *)(param_1 + 0xe8),1,2,0x19,0,a->data,local_80,
                               free_frame_data,0), lVar4 == 0)) goto LAB_001048f0;
        a->data = (char *)0x0;
        BUF_MEM_free(a);
        uVar1 = *(long *)(param_1 + 0x500) + 1;
        *(ulong *)(param_1 + 0x500) = uVar1;
      }
      goto LAB_001048c0;
    }
    pcVar5 = "retiring connection id limit violated";
    uVar8 = 0xd36;
  }
  else {
    pcVar5 = "active_connection_id limit violated";
    uVar8 = 0xd1f;
  }
LAB_0010494e:
  ossl_quic_channel_raise_protocol_error_loc
            (param_1,9,0x18,pcVar5,0,"ssl/quic/quic_channel.c",uVar8,
             "ossl_quic_channel_on_new_conn_id");
LAB_001048c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void rxku_detected(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  char *pcVar7;
  
  if ((param_2[0xc4] & 0x400000400) != 0x400) {
    ossl_quic_channel_raise_protocol_error_loc
              (param_2,0xe,0,"RX key update again too soon",0,"ssl/quic/quic_channel.c",0x379,
               "rxku_detected");
    return;
  }
  cVar1 = *(char *)((long)param_2 + 0x623);
  uVar3 = ossl_ackm_get_pto_duration(param_2[0x83]);
  param_2[0xc3] = param_1;
  param_2[0xc4] = param_2[0xc4] & 0xfffffff97fffffff | 0x600000000;
  auVar6 = ossl_quic_port_get_time(*param_2);
  pcVar7 = auVar6._8_8_;
  lVar4 = auVar6._0_8_ + uVar3;
  if (CARRY8(auVar6._0_8_,uVar3)) {
    lVar4 = -1;
  }
  *(byte *)((long)param_2 + 0x624) = *(byte *)((long)param_2 + 0x624) & 0xef;
  param_2[0xc1] = lVar4;
  if ((~(int)cVar1 >> 0x1f) * -2 == 2) {
    uVar3 = ossl_quic_tx_packetiser_get_next_pn(param_2[0x1b],2);
    if (uVar3 >> 0x3e == 0) {
      iVar2 = ossl_qtx_trigger_key_update(param_2[0x84]);
      if (iVar2 != 0) {
        param_2[0xc2] = uVar3;
        uVar5 = *(byte *)((long)param_2 + 0x624) & 0xffffffee;
        pcVar7 = (char *)(ulong)uVar5;
        *(byte *)((long)param_2 + 0x624) =
             (*(byte *)((long)param_2 + 0x623) >> 7) << 4 | 1 | (byte)uVar5;
        goto LAB_00104afe;
      }
    }
    pcVar7 = "ch_trigger_txku";
    ossl_quic_channel_raise_protocol_error_loc
              (param_2,1,0,"key update",0,"ssl/quic/quic_channel.c",0x2e5);
  }
LAB_00104afe:
  ossl_quic_tx_packetiser_schedule_ack(param_2[0x1b],2,pcVar7);
  return;
}



undefined8 ossl_quic_channel_start(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  long in_FS_OFFSET;
  byte bVar6;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  long local_60;
  uint local_48;
  code *local_40;
  long *local_38;
  long local_20;
  
  bVar6 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)((long)param_1 + 0x623) & 2) == 0) {
    if ((*(byte *)(param_1 + 0xc4) & 7) != 0) {
LAB_00104c36:
      uVar2 = 1;
      goto LAB_00104c3b;
    }
    iVar1 = ossl_quic_tx_packetiser_set_peer(param_1[0x1b],param_1 + 0xd);
    if (iVar1 != 0) {
      bVar4 = *(byte *)((long)param_1 + 0x623);
      plVar3 = (long *)*param_1;
      if ((bVar4 & 2) == 0) {
        iVar1 = ossl_quic_get_peer_token(plVar3[5],param_1 + 0xd,&local_98);
        if (iVar1 != 0) {
          iVar1 = ossl_quic_tx_packetiser_set_initial_token
                            (param_1[0x1b],*(undefined8 *)(local_98 + 0x18),
                             *(undefined8 *)(local_98 + 0x20),free_peer_token);
          if (iVar1 == 0) {
            ossl_quic_free_peer_token(local_98);
          }
        }
        bVar4 = *(byte *)((long)param_1 + 0x623);
        plVar3 = (long *)*param_1;
      }
      iVar1 = ossl_quic_provide_initial_secret
                        (*(undefined8 *)*plVar3,((undefined8 *)*plVar3)[1],param_1 + 0x8f,
                         bVar4 >> 1 & 1,param_1[0x85],param_1[0x84]);
      if (iVar1 != 0) {
        if ((*(uint *)(param_1 + 0xc4) & 0x2000100) == 0) {
          iVar1 = ch_generate_transport_params(param_1);
          if (iVar1 == 0) goto LAB_00104e60;
        }
        ch_record_state_transition(param_1,1);
        *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xbf;
        plVar3 = &local_78;
        for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
          *plVar3 = 0;
          plVar3 = plVar3 + (ulong)bVar6 * -2 + 1;
        }
        lVar5 = param_1[9];
        if (((lVar5 == 0) && ((*(byte *)((long)param_1 + 0x625) & 2) != 0)) &&
           (((*(byte *)((long)param_1 + 0x623) & 2) == 0 || ((char)param_1[0x8f] != '\0')))) {
          local_78 = param_1[0x8f];
          local_48 = *(byte *)((long)param_1 + 0x623) >> 1 & 1;
          uStack_70 = (undefined5)param_1[0x90];
          uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
          local_60 = param_1[200];
          local_40 = get_time;
          local_38 = param_1;
          lVar5 = ossl_qlog_new_from_env(&local_78);
          param_1[9] = lVar5;
          if (lVar5 == 0) {
            *(byte *)((long)param_1 + 0x625) = *(byte *)((long)param_1 + 0x625) & 0xfd;
          }
        }
        ossl_qlog_event_connectivity_connection_started(lVar5,param_1 + 0x8f);
        local_80 = 0;
        *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 8;
        ossl_quic_tls_tick(param_1[5]);
        iVar1 = ossl_quic_tls_get_error(param_1[5],&local_90,&local_88,&local_80);
        if (iVar1 == 0) {
          uVar2 = ossl_quic_port_get0_reactor(*param_1);
          ossl_quic_reactor_tick(uVar2,0);
          goto LAB_00104c36;
        }
        ossl_quic_channel_raise_protocol_error_loc
                  (param_1,local_90,0,local_88,local_80,"ssl/quic/quic_channel.c",0x876,
                   "ch_tick_tls");
      }
    }
  }
LAB_00104e60:
  uVar2 = 0;
LAB_00104c3b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_quic_channel_subtick(long *param_1,ulong *param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  void *ptr;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  char *pcVar23;
  int *piVar24;
  byte bVar25;
  char cVar26;
  int *piVar27;
  bool bVar28;
  byte *pbVar29;
  byte bVar30;
  long in_FS_OFFSET;
  bool bVar31;
  byte bVar32;
  undefined8 uVar33;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  long local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  long local_80;
  uint local_68;
  code *local_60;
  long *local_58;
  long local_40;
  
  bVar32 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(byte *)(param_1 + 0xc4) & 7) == 0) ||
     (iVar12 = ossl_quic_channel_is_terminated(), iVar12 != 0)) {
    uVar11 = 0;
  }
  else {
    iVar12 = ossl_quic_channel_is_closing(param_1);
    if (((iVar12 == 0) && ((*(byte *)(param_1 + 0xc4) & 7) != 3)) ||
       (uVar16 = ossl_quic_port_get_time(*param_1), uVar16 < (ulong)param_1[0xbd])) {
      plVar21 = (long *)*param_1;
      bVar28 = false;
      if ((*(byte *)(*plVar21 + 0xa0) & 1) == 0) {
        if (((*(byte *)((long)param_1 + 0x624) & 2) != 0) &&
           (uVar16 = ossl_quic_port_get_time(), (ulong)param_1[0xc1] <= uVar16)) {
          *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xfd;
          param_1[0xc1] = -1;
          iVar12 = ossl_qrx_key_update_timeout(param_1[0x85],1);
          if (iVar12 == 0) {
            ossl_quic_channel_raise_protocol_error_loc
                      (param_1,1,0,"RXKU cooldown internal error",0,"ssl/quic/quic_channel.c",0x3a9)
            ;
          }
        }
        bVar28 = false;
        do {
          *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) & 0xf3;
          bVar31 = false;
          iVar12 = ossl_quic_channel_is_closing(param_1);
          if ((*(uint *)(param_1 + 0xc4) & 0x2000020) != 0) {
            while (iVar14 = ossl_qrx_read_pkt(param_1[0x85],param_1 + 0xaa), iVar14 != 0) {
              if (iVar12 != 0) {
                ossl_quic_tx_packetiser_record_received_closing_bytes
                          (param_1[0x1b],*(undefined8 *)(*(long *)param_1[0xaa] + 0x48));
              }
              if (!bVar31) {
                uVar16 = 0xffffffffffffffff;
                if (param_1[0xaf] != 0) {
                  uVar16 = ossl_ackm_get_pto_duration(param_1[0x83]);
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar16;
                  uVar18 = SUB168(auVar3 * ZEXT816(3),0);
                  if (SUB168(auVar3 * ZEXT816(3),8) != 0) {
                    uVar18 = 0xffffffffffffffff;
                  }
                  uVar16 = param_1[0xaf] * 1000000;
                  if ((ulong)(param_1[0xaf] * 1000000) < uVar18) {
                    uVar16 = uVar18;
                  }
                }
                uVar18 = ossl_quic_port_get_time(*param_1);
                lVar19 = uVar18 + uVar16;
                if (CARRY8(uVar18,uVar16)) {
                  lVar19 = -1;
                }
                param_1[0xbe] = lVar19;
                if (param_1[0xaf] != 0) {
                  uVar16 = ossl_ackm_get_pto_duration(param_1[0x83]);
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar16;
                  uVar16 = SUB168(auVar4 * ZEXT816(3),0);
                  if (SUB168(auVar4 * ZEXT816(3),8) == 0) {
                    uVar18 = param_1[0xaf] * 1000000;
                    if ((ulong)(param_1[0xaf] * 1000000) < uVar16) {
                      uVar18 = uVar16;
                    }
                    if (uVar18 != 0xffffffffffffffff) {
                      uVar16 = uVar18 >> 1;
                      if (49999999999 < uVar18) {
                        uVar16 = 25000000000;
                      }
                      uVar18 = ossl_quic_port_get_time(*param_1);
                      lVar19 = uVar18 + uVar16;
                      if (CARRY8(uVar18,uVar16)) {
                        lVar19 = -1;
                      }
                      param_1[0xbf] = lVar19;
                      goto LAB_00105078;
                    }
                  }
                }
                param_1[0xbf] = -1;
              }
LAB_00105078:
              bVar25 = *(byte *)(param_1 + 0xc4);
              iVar14 = ossl_quic_channel_is_active(param_1);
              plVar21 = (long *)param_1[0xaa];
              bVar25 = bVar25 >> 4 & 1;
              if (iVar14 == 0) goto switchD_0010532b_caseD_0;
              pbVar29 = (byte *)*plVar21;
              bVar30 = *pbVar29;
              if ((bVar30 & 0xfd) != 4) {
                if ((*(byte *)(param_1 + 0xc4) & 8) == 0) {
                  uVar9 = *(undefined8 *)(pbVar29 + 0x1d);
                  uVar10 = *(undefined8 *)(pbVar29 + 0x25);
                  uVar33 = *(undefined8 *)(pbVar29 + 0x2a);
                  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 8;
                  *(undefined8 *)((long)param_1 + 0x4a2) = uVar9;
                  *(undefined8 *)((long)param_1 + 0x4aa) = uVar10;
                  *(undefined8 *)((long)param_1 + 0x4af) = uVar33;
                  *(undefined8 *)((long)param_1 + 0x4e1) = *(undefined8 *)((long)param_1 + 0x4a2);
                  *(undefined8 *)((long)param_1 + 0x4e9) = *(undefined8 *)((long)param_1 + 0x4aa);
                  *(undefined8 *)((long)param_1 + 0x4ee) = uVar33;
                  ossl_quic_tx_packetiser_set_cur_dcid(param_1[0x1b],(long)param_1 + 0x4a2);
                  plVar21 = (long *)param_1[0xaa];
                  pbVar29 = (byte *)*plVar21;
                  bVar30 = *pbVar29;
                }
                if ((bVar30 - 1 < 5) &&
                   (((*(byte *)((long)param_1 + 0x622) >> 4) >>
                     (*(uint *)(CSWTCH_72 + (ulong)(bVar30 - 1) * 4) & 0x1f) & 1) != 0))
                goto switchD_0010532b_caseD_0;
              }
              if (((*(byte *)((long)param_1 + 0x623) & 2) == 0) && (plVar21[1] != 0)) {
                plVar21 = param_1 + 0xd;
                iVar14 = BIO_ADDR_family(plVar21);
                if ((iVar14 != 2) && (iVar14 = BIO_ADDR_family(plVar21), iVar14 != 10)) {
                  plVar21 = (long *)param_1[0xaa];
                  pbVar29 = (byte *)*plVar21;
                  bVar30 = *pbVar29;
                  goto LAB_00105270;
                }
                lVar19 = *(long *)(param_1[0xaa] + 8);
                iVar14 = BIO_ADDR_family(lVar19);
                iVar13 = BIO_ADDR_family(plVar21);
                if (iVar14 == iVar13) {
                  iVar14 = BIO_ADDR_family(lVar19);
                  plVar21 = (long *)param_1[0xaa];
                  if (iVar14 == 2) {
                    if (*(int *)(lVar19 + 4) == *(int *)((long)param_1 + 0x6c)) goto LAB_001057fb;
                  }
                  else if ((iVar14 == 10) &&
                          (*(long *)(lVar19 + 8) == param_1[0xe] &&
                           *(long *)(lVar19 + 0x10) == param_1[0xf])) {
LAB_001057fb:
                    if (*(short *)(lVar19 + 2) == *(short *)((long)param_1 + 0x6a)) {
                      pbVar29 = (byte *)*plVar21;
                      bVar30 = *pbVar29;
                      goto LAB_00105270;
                    }
                  }
                  goto switchD_0010532b_caseD_0;
                }
LAB_0010538a:
                plVar21 = (long *)param_1[0xaa];
              }
              else {
LAB_00105270:
                if ((*(uint *)(param_1 + 0xc4) & 0x2000008) != 8) {
                  if (1 < bVar30 - 5) goto LAB_00105295;
                  if (bVar30 != 6) goto LAB_001056da;
LAB_00105628:
                  if ((*(int *)(pbVar29 + 4) == 0) && (bVar25 == 0)) {
                    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x10;
                    uVar16 = *(ulong *)(pbVar29 + 0x48);
                    if ((long)uVar16 < 0) goto switchD_0010532b_caseD_0;
                    piVar17 = *(int **)(pbVar29 + 0x50);
                    piVar24 = (int *)((uVar16 & 0xfffffffffffffffc) + (long)piVar17);
                    piVar27 = (int *)(uVar16 + (long)piVar17);
                    do {
                      if (piVar17 == piVar27) {
                        ossl_quic_channel_raise_protocol_error_loc
                                  (param_1,2,0,"unsupported protocol version",0,
                                   "ssl/quic/quic_channel.c",0x990,"ch_rx_handle_packet");
                        plVar21 = (long *)param_1[0xaa];
                        goto switchD_0010532b_caseD_0;
                      }
                      if (piVar17 == piVar24) goto switchD_0010532b_caseD_0;
                      iVar14 = *piVar17;
                      piVar17 = piVar17 + 1;
                    } while (iVar14 != 1);
                    ossl_quic_tx_packetiser_set_protocol_version(param_1[0x1b],1);
                    iVar14 = ossl_ackm_mark_packet_pseudo_lost(param_1[0x83],0,0);
                    if (iVar14 != 0) goto LAB_0010538a;
                    pcVar23 = "handling ver negotiation packet";
                    uVar33 = 0x985;
LAB_00105482:
                    ossl_quic_channel_raise_protocol_error_loc
                              (param_1,1,0,pcVar23,0,"ssl/quic/quic_channel.c",uVar33,
                               "ch_rx_handle_packet");
                    plVar21 = (long *)param_1[0xaa];
                  }
                  goto switchD_0010532b_caseD_0;
                }
                if (bVar30 == 5) {
LAB_001056da:
                  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x10;
LAB_001056e2:
                  if ((pbVar29[2] & 0x30) == 0) goto LAB_001052b2;
                  pcVar23 = "packet header reserved bits";
                  uVar33 = 0x99e;
LAB_0010570b:
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,10,0,pcVar23,0,"ssl/quic/quic_channel.c",uVar33,
                             "ch_rx_handle_packet");
                  plVar21 = (long *)param_1[0xaa];
                }
                else {
                  bVar1 = pbVar29[0x1d];
                  if (((*(byte *)((long)param_1 + 0x4a2) != bVar1) || (0x14 < bVar1)) ||
                     (iVar14 = memcmp(pbVar29 + 0x1e,(void *)((long)param_1 + 0x4a3),(ulong)bVar1),
                     iVar14 != 0)) goto switchD_0010532b_caseD_0;
                  if (bVar30 == 6) goto LAB_00105628;
LAB_00105295:
                  if (*(int *)(pbVar29 + 4) != 1) goto switchD_0010532b_caseD_0;
                  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x10;
                  if (bVar30 != 4) goto LAB_001056e2;
LAB_001052b2:
                  local_d8 = *(undefined8 *)(pbVar29 + 0x50);
                  lVar19 = plVar21[8];
                  lVar2 = plVar21[4];
                  local_d0 = *(undefined8 *)(pbVar29 + 0x48);
                  plVar21 = &local_98;
                  for (lVar22 = 0xb; lVar22 != 0; lVar22 = lVar22 + -1) {
                    *plVar21 = 0;
                    plVar21 = plVar21 + (ulong)bVar32 * -2 + 1;
                  }
                  lVar22 = param_1[9];
                  if (((lVar22 == 0) && ((*(byte *)((long)param_1 + 0x625) & 2) != 0)) &&
                     (((*(byte *)((long)param_1 + 0x623) & 2) == 0 || ((char)param_1[0x8f] != '\0'))
                     )) {
                    local_98 = param_1[0x8f];
                    local_68 = *(byte *)((long)param_1 + 0x623) >> 1 & 1;
                    uStack_90 = (undefined5)param_1[0x90];
                    uStack_8b = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
                    uStack_88 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
                    local_80 = param_1[200];
                    local_60 = get_time;
                    local_58 = param_1;
                    lVar22 = ossl_qlog_new_from_env(&local_98);
                    param_1[9] = lVar22;
                    if (lVar22 == 0) {
                      *(byte *)((long)param_1 + 0x625) = *(byte *)((long)param_1 + 0x625) & 0xfd;
                    }
                  }
                  ossl_qlog_event_transport_packet_received(lVar22,pbVar29,lVar2,&local_d8,1,lVar19)
                  ;
                  plVar21 = (long *)param_1[0xaa];
                  pcVar23 = (char *)*plVar21;
                  switch(*pcVar23) {
                  case '\x01':
                  case '\x03':
                  case '\x05':
                    if (((*(byte *)((long)param_1 + 0x623) & 2) != 0) && (*pcVar23 == '\x03')) {
                      ch_discard_el_isra_0(param_1,0);
                      plVar21 = (long *)param_1[0xaa];
                    }
                    if (((*(byte *)((long)param_1 + 0x624) & 2) == 0) ||
                       (*(char *)*plVar21 != '\x05')) {
LAB_00105359:
                      if ((((*(byte *)((long)param_1 + 0x623) & 2) == 0) &&
                          (*(char *)*plVar21 == '\x01')) &&
                         (*(long *)((char *)*plVar21 + 0x40) != 0)) {
                        pcVar23 = "client received initial token";
                        uVar33 = 0xa11;
                        goto LAB_0010570b;
                      }
                    }
                    else if ((ulong)param_1[0xc3] <= (ulong)plVar21[4]) {
                      uVar16 = plVar21[7];
                      uVar18 = ossl_qrx_get_key_epoch(param_1[0x85]);
                      if (uVar16 < uVar18) {
                        ossl_quic_channel_raise_protocol_error_loc
                                  (param_1,0xe,0,"new packet with old keys",0,
                                   "ssl/quic/quic_channel.c",0x9f8,"ch_rx_handle_packet");
                        plVar21 = (long *)param_1[0xaa];
                        break;
                      }
                      plVar21 = (long *)param_1[0xaa];
                      goto LAB_00105359;
                    }
                    ossl_quic_handle_frames(param_1,plVar21);
                    if (((*(byte *)((long)param_1 + 0x623) & 0x10) != 0) &&
                       (local_c8 = 0, (param_3 & 1) == 0)) {
                      *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 8;
                      ossl_quic_tls_tick(param_1[5]);
                      iVar14 = ossl_quic_tls_get_error(param_1[5],&local_e8,&local_e0,&local_c8);
                      if (iVar14 != 0) {
                        ossl_quic_channel_raise_protocol_error_loc
                                  (param_1,local_e8,0,local_e0,local_c8,"ssl/quic/quic_channel.c",
                                   0x876,"ch_tick_tls");
                      }
                    }
                    goto LAB_0010538a;
                  case '\x04':
                    if ((((*(uint *)(param_1 + 0xc4) & 0x2000800) == 0) &&
                        ((*(byte *)(param_1 + 0xc4) & 8) == 0)) &&
                       (0x10 < *(ulong *)(pcVar23 + 0x48))) {
                      iVar14 = ossl_quic_validate_retry_integrity_tag
                                         (**(undefined8 **)*param_1,(*(undefined8 **)*param_1)[1],
                                          pcVar23,param_1 + 0x8f);
                      plVar21 = (long *)param_1[0xaa];
                      if (iVar14 != 0) {
                        lVar2 = *plVar21;
                        uVar33 = *(undefined8 *)(lVar2 + 0x50);
                        lVar19 = *(long *)(lVar2 + 0x48);
                        bVar30 = *(byte *)(param_1 + 0x8f);
                        if (((*(byte *)(lVar2 + 0x1d) != bVar30) || (0x14 < bVar30)) ||
                           (iVar14 = memcmp((void *)((long)param_1 + 0x479),(void *)(lVar2 + 0x1e),
                                            (ulong)bVar30), iVar14 != 0)) {
                          iVar14 = ossl_quic_tx_packetiser_set_cur_dcid(param_1[0x1b],lVar2 + 0x1d);
                          if (iVar14 != 0) {
                            lVar19 = lVar19 + -0x10;
                            ptr = (void *)CRYPTO_memdup(uVar33,lVar19,"ssl/quic/quic_channel.c",
                                                        0xba1);
                            if (ptr != (void *)0x0) {
                              iVar14 = ossl_quic_tx_packetiser_set_initial_token
                                                 (param_1[0x1b],ptr,lVar19,free_token);
                              if (iVar14 == 0) {
                                ossl_quic_channel_raise_protocol_error_loc
                                          (param_1,0xb,0,"received oversize token",0,
                                           "ssl/quic/quic_channel.c",0xbab,"ch_retry");
                                CRYPTO_free(ptr);
                              }
                              else {
                                uVar33 = *(undefined8 *)(lVar2 + 0x25);
                                *(undefined8 *)((long)param_1 + 0x4b7) =
                                     *(undefined8 *)(lVar2 + 0x1d);
                                *(undefined8 *)((long)param_1 + 0x4bf) = uVar33;
                                uVar33 = *(undefined8 *)(lVar2 + 0x2a);
                                *(byte *)((long)param_1 + 0x621) =
                                     *(byte *)((long)param_1 + 0x621) | 8;
                                *(undefined8 *)((long)param_1 + 0x4c4) = uVar33;
                                iVar14 = ossl_ackm_mark_packet_pseudo_lost(param_1[0x83],0,bVar25);
                                if ((iVar14 != 0) &&
                                   (iVar14 = ossl_quic_provide_initial_secret
                                                       (**(undefined8 **)*param_1,
                                                        (*(undefined8 **)*param_1)[1],
                                                        (long)param_1 + 0x4b7,0,param_1[0x85],
                                                        param_1[0x84]), iVar14 != 0))
                                goto LAB_0010538a;
                              }
                            }
                          }
                          pcVar23 = "handling retry packet";
                          uVar33 = 0x9d2;
                          goto LAB_00105482;
                        }
                      }
                    }
                    break;
                  case '\x06':
                    if (bVar25 == 0) {
                      piVar17 = *(int **)(pcVar23 + 0x50);
                      if (-1 < (long)*(ulong *)(pcVar23 + 0x48)) {
                        piVar24 = (int *)((*(ulong *)(pcVar23 + 0x48) & 0xfffffffffffffffc) +
                                         (long)piVar17);
                        do {
                          if (piVar24 == piVar17) {
                            local_c8 = 2;
                            local_c0 = ZEXT816(0x1073c0) << 0x40;
                            local_b0 = ZEXT816(0x1b);
                            ch_start_terminating(param_1,&local_c8,1);
                            goto LAB_0010538a;
                          }
                          iVar14 = *piVar17;
                          piVar17 = piVar17 + 1;
                        } while (iVar14 != 0x1000000);
                      }
                    }
                  }
                }
              }
switchD_0010532b_caseD_0:
              bVar31 = true;
              ossl_qrx_pkt_release(plVar21);
              *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) & 0xdf;
              param_1[0xaa] = 0;
            }
            uVar16 = 0xffffffffffffffff;
            uVar15 = 0;
            do {
              if (((*(byte *)((long)param_1 + 0x622) >> 4) >> (uVar15 & 0x1f) & 1) == 0) {
                if ((*(byte *)((long)param_1 + 0x622) >> 1 & 7) < uVar15) break;
                uVar18 = ossl_qrx_get_max_forged_pkt_count(param_1[0x85],uVar15);
                if (uVar18 < uVar16) {
                  uVar16 = uVar18;
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != 4);
            uVar18 = ossl_qrx_get_cur_forged_pkt_count(param_1[0x85]);
            if (uVar16 <= uVar18) {
              ossl_quic_channel_raise_protocol_error_loc
                        (param_1,0xf,0,"forgery limit",0,"ssl/quic/quic_channel.c",0x89d,
                         "ch_rx_check_forged_pkt_limit");
            }
            if ((bVar31) && (bVar28 = bVar31, iVar12 != 0)) {
              *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 1;
            }
          }
          bVar25 = *(byte *)((long)param_1 + 0x623);
          if (((bVar25 & 8) == 0) && (local_c8 = 0, (param_3 & 1) == 0)) {
            *(byte *)((long)param_1 + 0x623) = bVar25 | 8;
            ossl_quic_tls_tick(param_1[5]);
            iVar12 = ossl_quic_tls_get_error(param_1[5],&local_e0,&local_d8,&local_c8);
            if (iVar12 == 0) {
              bVar25 = *(byte *)((long)param_1 + 0x623);
            }
            else {
              ossl_quic_channel_raise_protocol_error_loc
                        (param_1,local_e0,0,local_d8,local_c8,"ssl/quic/quic_channel.c",0x876,
                         "ch_tick_tls");
              bVar28 = true;
              bVar25 = *(byte *)((long)param_1 + 0x623);
            }
          }
        } while ((bVar25 & 4) != 0);
        plVar21 = (long *)*param_1;
      }
      uVar16 = ossl_quic_port_get_time(plVar21);
      lVar2 = _UNK_001080d8;
      lVar19 = __LC115;
      if (uVar16 < (ulong)param_1[0xbe]) {
        if ((*(byte *)(*(long *)*param_1 + 0xa0) & 1) == 0) {
          uVar18 = ossl_ackm_get_loss_detection_deadline(param_1[0x83]);
          if ((uVar18 != 0) && (uVar18 <= uVar16)) {
            ossl_ackm_on_timeout(param_1[0x83]);
          }
          if ((ulong)param_1[0xbf] <= uVar16) {
            cVar26 = '\0';
            uVar15 = *(uint *)(param_1 + 0xc4) >> 0xe & 7;
            if (uVar15 != 0) {
              cVar26 = ((char)uVar15 != '\x02') + '\x01';
            }
            ossl_quic_tx_packetiser_schedule_ack_eliciting(param_1[0x1b],cVar26);
            if (param_1[0xaf] != 0) {
              uVar16 = ossl_ackm_get_pto_duration(param_1[0x83]);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar16;
              uVar16 = SUB168(auVar5 * ZEXT816(3),0);
              if (SUB168(auVar5 * ZEXT816(3),8) == 0) {
                if (uVar16 <= (ulong)(param_1[0xaf] * 1000000)) {
                  uVar16 = param_1[0xaf] * 1000000;
                }
                if (uVar16 != 0xffffffffffffffff) {
                  uVar18 = uVar16 >> 1;
                  if (49999999999 < uVar16) {
                    uVar18 = 25000000000;
                  }
                  uVar16 = ossl_quic_port_get_time(*param_1);
                  lVar19 = uVar16 + uVar18;
                  if (CARRY8(uVar16,uVar18)) {
                    lVar19 = -1;
                  }
                  param_1[0xbf] = lVar19;
                  goto LAB_00105ca9;
                }
              }
            }
            param_1[0xbf] = -1;
          }
LAB_00105ca9:
          bVar31 = bVar28;
          if ((*(byte *)(param_1 + 0xc4) & 7) != 3) {
            iVar12 = ossl_quic_channel_is_closing(param_1);
            if (iVar12 != 0) {
              if ((*(byte *)((long)param_1 + 0x623) & 1) == 0) goto LAB_00105e84;
              *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) & 0xfe;
            }
            if ((*(uint *)(param_1 + 0xc4) & 0x1c400) == 0xc400) {
              if ((*(byte *)((long)param_1 + 0x624) & 1) != 0) {
                uVar16 = ossl_ackm_get_largest_acked(param_1[0x83],2);
                if ((ulong)param_1[0xc2] <= uVar16) {
                  uVar16 = ossl_ackm_get_pto_duration(param_1[0x83]);
                  *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xfe;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar16;
                  uVar16 = SUB168(auVar8 * ZEXT816(3),0);
                  if (SUB168(auVar8 * ZEXT816(3),8) != 0) {
                    uVar16 = 0xffffffffffffffff;
                  }
                  uVar18 = ossl_quic_port_get_time(*param_1);
                  lVar19 = uVar18 + uVar16;
                  if (CARRY8(uVar18,uVar16)) {
                    lVar19 = -1;
                  }
                  param_1[0xc0] = lVar19;
                }
                if ((*(byte *)((long)param_1 + 0x624) & 1) != 0) goto LAB_00105cf9;
              }
              uVar16 = ossl_quic_port_get_time(*param_1);
              if ((uVar16 < (ulong)param_1[0xc0]) || ((*(byte *)((long)param_1 + 0x624) & 6) != 0))
              goto LAB_00105cf9;
              uVar18 = ossl_qtx_get_cur_epoch_pkt_count(param_1[0x84],3);
              uVar20 = ossl_qtx_get_max_epoch_pkt_count(param_1[0x84],3);
              lVar19 = param_1[0x1b];
              uVar16 = param_1[0xb7];
              if (param_1[0xb7] == 0xffffffffffffffff) {
                uVar16 = uVar20 >> 1;
              }
              if (uVar16 <= uVar18) {
                *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 0x80;
                uVar16 = ossl_quic_tx_packetiser_get_next_pn(lVar19,2);
                if ((uVar16 >> 0x3e == 0) &&
                   (iVar12 = ossl_qtx_trigger_key_update(param_1[0x84]), iVar12 != 0)) {
                  param_1[0xc2] = uVar16;
                  *(byte *)((long)param_1 + 0x624) =
                       (*(byte *)((long)param_1 + 0x623) >> 7) << 4 | 1 |
                       *(byte *)((long)param_1 + 0x624) & 0xee;
                  goto LAB_00105cf9;
                }
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,1,0,"key update",0,"ssl/quic/quic_channel.c",0x2e5,
                           "ch_trigger_txku");
                lVar19 = param_1[0x1b];
              }
            }
            else {
LAB_00105cf9:
              lVar19 = param_1[0x1b];
            }
            *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xf7;
            while( true ) {
              iVar12 = ossl_quic_tx_packetiser_generate(lVar19,&local_c8);
              if (local_c0._0_8_ == 0) break;
              lVar19 = *param_1;
              *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x20;
              bVar32 = *(byte *)((long)param_1 + 0x623);
              *(byte *)(lVar19 + 0x9a) = *(byte *)(lVar19 + 0x9a) | 8;
              if (((int)local_c8 != 0) && ((bVar32 & 0x20) == 0)) {
                uVar16 = 0xffffffffffffffff;
                if (param_1[0xaf] != 0) {
                  uVar16 = ossl_ackm_get_pto_duration(param_1[0x83]);
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar16;
                  uVar18 = SUB168(auVar7 * ZEXT816(3),0);
                  if (SUB168(auVar7 * ZEXT816(3),8) != 0) {
                    uVar18 = 0xffffffffffffffff;
                  }
                  lVar19 = *param_1;
                  uVar16 = param_1[0xaf] * 1000000;
                  if ((ulong)(param_1[0xaf] * 1000000) < uVar18) {
                    uVar16 = uVar18;
                  }
                }
                uVar18 = ossl_quic_port_get_time(lVar19);
                lVar19 = uVar18 + uVar16;
                if (CARRY8(uVar18,uVar16)) {
                  lVar19 = -1;
                }
                param_1[0xbe] = lVar19;
                bVar32 = *(byte *)((long)param_1 + 0x623) | 0x20;
                *(byte *)((long)param_1 + 0x623) = bVar32;
              }
              if (((bVar32 & 2) == 0) && (local_c8._4_4_ != 0)) {
                ch_discard_el_isra_0(param_1,0);
              }
              if ((*(byte *)((long)param_1 + 0x624) & 8) != 0) {
                *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xfb;
              }
              if (param_1[0xaf] == 0) {
LAB_00105e95:
                lVar19 = -1;
              }
              else {
                uVar16 = ossl_ackm_get_pto_duration(param_1[0x83]);
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar16;
                uVar16 = SUB168(auVar6 * ZEXT816(3),0);
                if (SUB168(auVar6 * ZEXT816(3),8) != 0) goto LAB_00105e95;
                if (uVar16 <= (ulong)(param_1[0xaf] * 1000000)) {
                  uVar16 = param_1[0xaf] * 1000000;
                }
                if (uVar16 == 0xffffffffffffffff) goto LAB_00105e95;
                uVar18 = uVar16 >> 1;
                if (49999999999 < uVar16) {
                  uVar18 = 25000000000;
                }
                uVar16 = ossl_quic_port_get_time(*param_1);
                lVar19 = uVar16 + uVar18;
                if (CARRY8(uVar16,uVar18)) goto LAB_00105e95;
              }
              param_1[0xbf] = lVar19;
              if (iVar12 == 0) goto LAB_00105e1d;
              if (local_c0._0_8_ == 0) goto LAB_00105e4c;
              lVar19 = param_1[0x1b];
            }
            if (iVar12 == 0) {
LAB_00105e1d:
              ossl_quic_channel_raise_protocol_error_loc
                        (param_1,1,0,"internal error (txp generate)",0,"ssl/quic/quic_channel.c",
                         0xab1,"ch_tx");
            }
LAB_00105e4c:
            iVar12 = ossl_qtx_flush_net(param_1[0x84]);
            if ((iVar12 + 1U & 0xfffffffd) != 0) {
              ossl_quic_port_raise_net_error(*param_1,param_1);
            }
            lVar19 = ossl_qtx_get_queue_len_datagrams(param_1[0x84]);
            bVar31 = true;
            if (lVar19 == 0) {
              bVar31 = bVar28;
            }
          }
LAB_00105e84:
          bVar28 = bVar31;
          ossl_quic_stream_map_gc(param_1 + 0x6a);
        }
        iVar12 = ossl_quic_channel_is_terminated(param_1);
        uVar16 = 0xffffffffffffffff;
        if (iVar12 == 0) {
          uVar16 = ossl_ackm_get_loss_detection_deadline(param_1[0x83]);
          iVar12 = 0;
          if (uVar16 == 0) {
            uVar16 = 0xffffffffffffffff;
          }
          do {
            iVar14 = ossl_qtx_is_enc_level_provisioned(param_1[0x84],iVar12);
            if (iVar14 != 0) {
              cVar26 = '\0';
              if (iVar12 != 0) {
                cVar26 = (iVar12 != 2) + '\x01';
              }
              uVar18 = ossl_ackm_get_ack_deadline(param_1[0x83],cVar26);
              if (uVar18 < uVar16) {
                uVar16 = uVar18;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 != 4);
          uVar18 = param_1[0xbf];
          uVar20 = uVar18;
          if (uVar16 <= uVar18) {
            uVar20 = uVar16;
          }
          if (uVar18 != 0xffffffffffffffff) {
            uVar16 = uVar20;
          }
          uVar18 = ossl_quic_tx_packetiser_get_deadline(param_1[0x1b]);
          if (uVar18 <= uVar16) {
            uVar16 = uVar18;
          }
          iVar12 = ossl_quic_channel_is_closing(param_1);
          if ((iVar12 == 0) && ((*(byte *)(param_1 + 0xc4) & 7) != 3)) {
            uVar18 = param_1[0xbe];
            uVar20 = uVar18;
            if (uVar16 <= uVar18) {
              uVar20 = uVar16;
            }
            if (uVar18 != 0xffffffffffffffff) {
              uVar16 = uVar20;
            }
          }
          else if ((ulong)param_1[0xbd] < uVar16) {
            uVar16 = param_1[0xbd];
          }
          if (((*(byte *)((long)param_1 + 0x624) & 2) != 0) && ((ulong)param_1[0xc1] < uVar16)) {
            uVar16 = param_1[0xc1];
          }
        }
        *param_2 = uVar16;
        iVar12 = ossl_quic_channel_is_terminated(param_1);
        *(bool *)(param_2 + 1) = iVar12 == 0;
        iVar12 = ossl_quic_channel_is_terminated(param_1);
        bVar31 = false;
        if (iVar12 == 0) {
          lVar19 = ossl_qtx_get_queue_len_datagrams(param_1[0x84]);
          bVar31 = lVar19 != 0;
        }
        *(bool *)((long)param_2 + 9) = bVar31;
        *(bool *)((long)param_2 + 10) = bVar28;
        goto LAB_00104efb;
      }
      if ((*(byte *)(*(long *)*param_1 + 0xa0) & 1) == 0) {
        *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfe;
        param_1[0xb8] = lVar19;
        param_1[0xb9] = lVar2;
        goto LAB_00104fb1;
      }
    }
    else {
LAB_00104fb1:
      ch_record_state_transition(param_1,4);
    }
    uVar11 = 1;
  }
  *(undefined1 *)((long)param_2 + 10) = uVar11;
  *(undefined2 *)(param_2 + 1) = 0;
  *param_2 = 0xffffffffffffffff;
LAB_00104efb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8
ossl_quic_channel_on_new_conn
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0xc4) & 0x2000007) != 0x2000000) {
    return 0;
  }
  iVar2 = ossl_quic_lcidm_generate_initial(param_1[7],param_1,(long)param_1 + 0x4cc);
  if (iVar2 != 0) {
    iVar2 = BIO_ADDR_copy(param_1 + 0xd,param_2);
    if (iVar2 != 0) {
      uVar1 = param_4[1];
      param_1[0x8f] = *param_4;
      param_1[0x90] = uVar1;
      *(undefined8 *)((long)param_1 + 0x485) = *(undefined8 *)((long)param_4 + 0xd);
      uVar1 = param_3[1];
      *(undefined8 *)((long)param_1 + 0x4e1) = *param_3;
      *(undefined8 *)((long)param_1 + 0x4e9) = uVar1;
      uVar1 = *(undefined8 *)((long)param_3 + 0xd);
      *(undefined1 *)((long)param_1 + 0x48d) = 0;
      *(undefined8 *)((long)param_1 + 0x4ee) = uVar1;
      iVar2 = ossl_quic_tx_packetiser_set_peer(param_1[0x1b],param_1 + 0xd);
      if (((iVar2 != 0) &&
          (iVar2 = ossl_quic_tx_packetiser_set_cur_dcid(param_1[0x1b],(long)param_1 + 0x4e1),
          iVar2 != 0)) &&
         (iVar2 = ossl_quic_tx_packetiser_set_cur_scid(param_1[0x1b],(long)param_1 + 0x4cc),
         iVar2 != 0)) {
        ossl_qtx_set_qlog_cb(param_1[0x84],ch_get_qlog_cb,param_1);
        ossl_quic_tx_packetiser_set_qlog_cb(param_1[0x1b],ch_get_qlog_cb,param_1);
        iVar2 = ossl_quic_provide_initial_secret
                          (**(undefined8 **)*param_1,(*(undefined8 **)*param_1)[1],param_1 + 0x8f,1,
                           0,param_1[0x84]);
        if ((iVar2 != 0) &&
           (iVar2 = ossl_quic_lcidm_enrol_odcid(param_1[7],param_1,param_1 + 0x8f), iVar2 != 0)) {
          ch_record_state_transition(param_1,1);
          *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xbf;
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined8
ossl_quic_bind_channel
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_4 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xc4) & 0x2000007) == 0x2000000) {
    uVar1 = param_4[1];
    *(undefined8 *)((long)param_1 + 0x4cc) = *param_4;
    *(undefined8 *)((long)param_1 + 0x4d4) = uVar1;
    *(undefined8 *)((long)param_1 + 0x4d9) = *(undefined8 *)((long)param_4 + 0xd);
    iVar2 = ossl_quic_lcidm_bind_channel(param_1[7],param_1,param_4);
    if (iVar2 != 0) {
      iVar2 = BIO_ADDR_copy(param_1 + 0xd,param_2);
      if (iVar2 != 0) {
        uVar1 = param_4[1];
        param_1[0x8f] = *param_4;
        param_1[0x90] = uVar1;
        *(undefined8 *)((long)param_1 + 0x485) = *(undefined8 *)((long)param_4 + 0xd);
        uVar1 = param_3[1];
        *(undefined8 *)((long)param_1 + 0x4e1) = *param_3;
        *(undefined8 *)((long)param_1 + 0x4e9) = uVar1;
        uVar1 = *(undefined8 *)((long)param_3 + 0xd);
        *(undefined1 *)((long)param_1 + 0x48d) = 0;
        *(undefined8 *)((long)param_1 + 0x4ee) = uVar1;
        if (param_5 != (undefined8 *)0x0) {
          uVar1 = param_5[1];
          *(undefined8 *)((long)param_1 + 0x48d) = *param_5;
          *(undefined8 *)((long)param_1 + 0x495) = uVar1;
          *(undefined8 *)((long)param_1 + 0x49a) = *(undefined8 *)((long)param_5 + 0xd);
        }
        iVar2 = ossl_quic_tx_packetiser_set_peer(param_1[0x1b],param_1 + 0xd);
        if (((iVar2 != 0) &&
            (iVar2 = ossl_quic_tx_packetiser_set_cur_dcid(param_1[0x1b],(long)param_1 + 0x4e1),
            iVar2 != 0)) &&
           (iVar2 = ossl_quic_tx_packetiser_set_cur_scid(param_1[0x1b],(long)param_1 + 0x4cc),
           iVar2 != 0)) {
          ossl_qtx_set_qlog_cb(param_1[0x84],ch_get_qlog_cb,param_1);
          ossl_quic_tx_packetiser_set_qlog_cb(param_1[0x1b],ch_get_qlog_cb,param_1);
          iVar2 = ossl_quic_provide_initial_secret
                            (**(undefined8 **)*param_1,(*(undefined8 **)*param_1)[1],param_1 + 0x8f,
                             1,0,param_1[0x84]);
          if (iVar2 != 0) {
            if (param_5 == (undefined8 *)0x0) {
              param_5 = param_1 + 0x8f;
            }
            iVar2 = ossl_quic_lcidm_enrol_odcid(param_1[7],param_1,param_5);
            if (iVar2 != 0) {
              ch_record_state_transition(param_1,1);
              *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xbf;
              return 1;
            }
          }
        }
      }
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
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  
  uVar6 = *(byte *)(param_1 + 0x623) >> 1 & 1;
  if (param_2 == 0) {
    uVar8 = *(ulong *)(param_1 + 0x590);
    plVar9 = (long *)(param_1 + 0x590);
  }
  else {
    uVar6 = uVar6 | 2;
    uVar8 = *(ulong *)(param_1 + 0x598);
    plVar9 = (long *)(param_1 + 0x598);
  }
  if (uVar8 >> 0x3e != 0) {
    return 0;
  }
  lVar3 = ossl_quic_stream_map_alloc(param_1 + 0x350,uVar8 << 2 | (long)(int)uVar6);
  if (lVar3 == 0) {
    return 0;
  }
  bVar7 = *(byte *)(param_1 + 0x623);
  bVar1 = *(byte *)(lVar3 + 0x100);
  lVar4 = ossl_quic_sstream_new(0x2000);
  *(long *)(lVar3 + 0x70) = lVar4;
  bVar7 = bVar7 >> 1 & 1;
  if (lVar4 == 0) goto LAB_0010686c;
  if (param_2 == 0) {
    lVar4 = ossl_quic_rstream_new(0,0,0);
    *(long *)(lVar3 + 0x78) = lVar4;
    if (lVar4 != 0) goto LAB_001067fa;
  }
  else {
LAB_001067fa:
    lVar4 = lVar3 + 0x80;
    iVar2 = ossl_quic_txfc_init(lVar4,param_1 + 0xf0);
    if (iVar2 != 0) {
      bVar10 = bVar1 & 2;
      bVar1 = bVar1 & 1;
      if (*(char *)(param_1 + 0x620) < '\0') {
        if (bVar10 == 0) {
          if (bVar1 == bVar7) {
            ossl_quic_txfc_bump_cwm(lVar4,*(undefined8 *)(param_1 + 0x528));
            if (param_2 == 0) goto LAB_00106975;
          }
          else {
            ossl_quic_txfc_bump_cwm(lVar4,*(undefined8 *)(param_1 + 0x530));
            if (param_2 == 0) goto LAB_0010684e;
          }
        }
        else {
          ossl_quic_txfc_bump_cwm(lVar4,*(undefined8 *)(param_1 + 0x538));
          if (param_2 == 0) goto LAB_001068ea;
        }
LAB_00106950:
        lVar5 = 0;
        lVar4 = 0;
      }
      else {
        if (param_2 != 0) goto LAB_00106950;
        if (bVar10 == 0) {
          if (bVar1 == bVar7) {
LAB_00106975:
            lVar4 = *(long *)(param_1 + 0x508);
            lVar5 = lVar4 * 0xc;
          }
          else {
LAB_0010684e:
            lVar4 = *(long *)(param_1 + 0x510);
            lVar5 = lVar4 * 0xc;
          }
        }
        else {
LAB_001068ea:
          lVar4 = *(long *)(param_1 + 0x518);
          lVar5 = lVar4 * 0xc;
        }
      }
      iVar2 = ossl_quic_rxfc_init(lVar3 + 0xa0,param_1 + 0x110,lVar4,lVar5,get_time,param_1);
      if (iVar2 != 0) {
        *plVar9 = *plVar9 + 1;
        return lVar3;
      }
    }
  }
  lVar4 = *(long *)(lVar3 + 0x70);
LAB_0010686c:
  ossl_quic_sstream_free(lVar4);
  *(undefined8 *)(lVar3 + 0x70) = 0;
  ossl_quic_rstream_free(*(undefined8 *)(lVar3 + 0x78));
  *(undefined8 *)(lVar3 + 0x78) = 0;
  ossl_quic_stream_map_release(param_1 + 0x350,lVar3);
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
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined8 uVar7;
  byte bVar8;
  
  if (((uint)param_2 & 1) != ((*(byte *)(param_1 + 0x623) >> 1 ^ 1) & 1)) {
    return 0;
  }
  lVar1 = param_1 + 0x350;
  lVar4 = ossl_quic_stream_map_alloc(lVar1,param_2,(uint)param_2 & 3);
  if (lVar4 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(lVar4 + 0x100);
  bVar6 = *(byte *)(param_1 + 0x623) >> 1 & 1;
  if ((param_2 & 2) == 0) {
    lVar5 = ossl_quic_sstream_new(0x2000);
    *(long *)(lVar4 + 0x70) = lVar5;
    if (lVar5 == 0) {
      uVar7 = 0;
      goto LAB_00106b44;
    }
  }
  lVar5 = ossl_quic_rstream_new(0,0,0);
  *(long *)(lVar4 + 0x78) = lVar5;
  if (lVar5 != 0) {
    lVar5 = lVar4 + 0x80;
    iVar3 = ossl_quic_txfc_init(lVar5,param_1 + 0xf0);
    if (iVar3 != 0) {
      bVar8 = bVar2 & 2;
      bVar2 = bVar2 & 1;
      if ((*(char *)(param_1 + 0x620) < '\0') && ((param_2 & 2) == 0)) {
        if (bVar8 == 0) {
          if (bVar2 == bVar6) {
            ossl_quic_txfc_bump_cwm(lVar5,*(undefined8 *)(param_1 + 0x528));
            goto LAB_00106bf0;
          }
          ossl_quic_txfc_bump_cwm(lVar5,*(undefined8 *)(param_1 + 0x530));
LAB_00106af4:
          lVar5 = *(long *)(param_1 + 0x510);
        }
        else {
          ossl_quic_txfc_bump_cwm(lVar5,*(undefined8 *)(param_1 + 0x538));
LAB_00106bce:
          lVar5 = *(long *)(param_1 + 0x518);
        }
      }
      else {
        if (bVar8 != 0) goto LAB_00106bce;
        if (bVar2 != bVar6) goto LAB_00106af4;
LAB_00106bf0:
        lVar5 = *(long *)(param_1 + 0x508);
      }
      iVar3 = ossl_quic_rxfc_init(lVar4 + 0xa0,param_1 + 0x110,lVar5,lVar5 * 0xc,get_time,param_1);
      if (iVar3 != 0) {
        if ((*(byte *)(param_1 + 0x623) & 0x40) == 0) {
          ossl_quic_stream_map_push_accept_queue(lVar1,lVar4);
          return lVar4;
        }
        ossl_quic_channel_reject_stream(param_1);
        return lVar4;
      }
    }
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x70);
LAB_00106b44:
  ossl_quic_sstream_free(uVar7);
  *(undefined8 *)(lVar4 + 0x70) = 0;
  ossl_quic_rstream_free(*(undefined8 *)(lVar4 + 0x78));
  *(undefined8 *)(lVar4 + 0x78) = 0;
  ossl_quic_stream_map_release(lVar1,lVar4);
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



undefined8 ossl_quic_channel_trigger_txku(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((*(uint *)(param_1 + 0xc4) & 0x1c400) != 0xc400) {
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x624) & 1) != 0) {
    uVar3 = ossl_ackm_get_largest_acked(param_1[0x83],2);
    if ((ulong)param_1[0xc2] <= uVar3) {
      uVar3 = ossl_ackm_get_pto_duration(param_1[0x83]);
      *(byte *)((long)param_1 + 0x624) = *(byte *)((long)param_1 + 0x624) & 0xfe;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      uVar3 = SUB168(auVar1 * ZEXT816(3),0);
      if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      uVar4 = ossl_quic_port_get_time(*param_1);
      lVar5 = uVar4 + uVar3;
      if (CARRY8(uVar4,uVar3)) {
        lVar5 = -1;
      }
      param_1[0xc0] = lVar5;
    }
    if ((*(byte *)((long)param_1 + 0x624) & 1) != 0) {
      return 0;
    }
  }
  *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 0x80;
  uVar3 = ossl_quic_tx_packetiser_get_next_pn(param_1[0x1b],2);
  if ((uVar3 >> 0x3e == 0) && (iVar2 = ossl_qtx_trigger_key_update(param_1[0x84]), iVar2 != 0)) {
    param_1[0xc2] = uVar3;
    *(byte *)((long)param_1 + 0x624) =
         (*(byte *)((long)param_1 + 0x623) >> 7) << 4 | 1 | *(byte *)((long)param_1 + 0x624) & 0xee;
  }
  else {
    ossl_quic_channel_raise_protocol_error_loc
              (param_1,1,0,"key update",0,"ssl/quic/quic_channel.c",0x2e5,"ch_trigger_txku");
  }
  return 1;
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



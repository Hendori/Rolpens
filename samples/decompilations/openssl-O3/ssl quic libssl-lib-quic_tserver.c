
char alpn_select_cb(undefined8 param_1,uchar **param_2,uchar *param_3,uchar *param_4,uint param_5,
                   long param_6)

{
  uint inlen;
  int iVar1;
  undefined1 *in;
  
  in = *(undefined1 **)(param_6 + 0x38);
  if (in == (uchar *)0x0) {
    inlen = 9;
    in = alpndeflt_0;
  }
  else {
    inlen = *(uint *)(param_6 + 0x40);
  }
  iVar1 = SSL_select_next_proto(param_2,param_3,in,inlen,param_4,param_5);
  return (iVar1 != 1) * '\x02';
}



undefined1 (*) [16] ossl_quic_tserver_new(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 (*ptr) [16];
  long lVar8;
  SSL *pSVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  SSL_CTX *ctx;
  undefined1 (*pauVar12) [16];
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_38 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (((param_1[3] == 0) || (param_1[4] == 0)) ||
     (ptr = (undefined1 (*) [16])CRYPTO_zalloc(0x88,"ssl/quic/quic_tserver.c",0x57),
     ptr == (undefined1 (*) [16])0x0)) {
    ptr = (undefined1 (*) [16])0x0;
  }
  else {
    uVar11 = param_1[1];
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar3 = param_1[4];
    uVar4 = param_1[5];
    uVar5 = param_1[6];
    uVar6 = param_1[7];
    *(undefined8 *)*ptr = *param_1;
    *(undefined8 *)(*ptr + 8) = uVar11;
    *(undefined8 *)ptr[1] = uVar1;
    *(undefined8 *)(ptr[1] + 8) = uVar2;
    *(undefined8 *)ptr[2] = uVar3;
    *(undefined8 *)(ptr[2] + 8) = uVar4;
    *(undefined8 *)ptr[3] = uVar5;
    *(undefined8 *)(ptr[3] + 8) = uVar6;
    *(undefined8 *)ptr[4] = param_1[8];
    lVar8 = ossl_crypto_mutex_new();
    *(long *)(ptr[6] + 8) = lVar8;
    if (lVar8 != 0) {
      ctx = (SSL_CTX *)param_1[2];
      if (ctx == (SSL_CTX *)0x0) {
        uVar11 = TLS_method();
        ctx = (SSL_CTX *)SSL_CTX_new_ex(*(undefined8 *)*ptr,*(undefined8 *)(*ptr + 8),uVar11);
        *(SSL_CTX **)ptr[7] = ctx;
        if (ctx == (SSL_CTX *)0x0) goto LAB_00100280;
      }
      else {
        *(SSL_CTX **)ptr[7] = ctx;
      }
      if (param_2 != (char *)0x0) {
        iVar7 = SSL_CTX_use_certificate_file(ctx,param_2,1);
        if (iVar7 < 1) goto LAB_00100280;
        ctx = *(SSL_CTX **)ptr[7];
      }
      if (param_3 != (char *)0x0) {
        iVar7 = SSL_CTX_use_PrivateKey_file(ctx,param_3,1);
        if (iVar7 < 1) goto LAB_00100280;
        ctx = *(SSL_CTX **)ptr[7];
      }
      SSL_CTX_set_alpn_select_cb(ctx,0x100000,ptr);
      pSVar9 = SSL_new(*(SSL_CTX **)ptr[7]);
      *(SSL **)(ptr[7] + 8) = pSVar9;
      if (pSVar9 != (SSL *)0x0) {
        local_78 = *ptr;
        local_68._0_8_ = *(undefined8 *)(ptr[6] + 8);
        lVar8 = ossl_quic_engine_new(local_78);
        *(long *)ptr[5] = lVar8;
        if (lVar8 != 0) {
          ossl_quic_engine_set_time_cb(lVar8,*(undefined8 *)(ptr[2] + 8),*(undefined8 *)ptr[3]);
          local_48._8_8_ = *(undefined8 *)ptr[7];
          local_38 = _LC1;
          lVar8 = ossl_quic_engine_create_port(*(undefined8 *)ptr[5],local_58);
          *(long *)(ptr[5] + 8) = lVar8;
          if (lVar8 != 0) {
            lVar8 = ossl_quic_port_create_incoming(lVar8,*(undefined8 *)(ptr[7] + 8));
            *(long *)ptr[6] = lVar8;
            if (((lVar8 != 0) &&
                (iVar7 = ossl_quic_port_set_net_rbio
                                   (*(undefined8 *)(ptr[5] + 8),*(undefined8 *)(ptr[1] + 8)),
                iVar7 != 0)) &&
               ((iVar7 = ossl_quic_port_set_net_wbio
                                   (*(undefined8 *)(ptr[5] + 8),*(undefined8 *)ptr[2]), iVar7 != 0
                && (puVar10 = (undefined4 *)CRYPTO_zalloc(0x180,"ssl/quic/quic_tserver.c",0x8e),
                   puVar10 != (undefined4 *)0x0)))) {
              uVar11 = *(undefined8 *)ptr[6];
              *(undefined4 **)(ptr[4] + 8) = puVar10;
              *puVar10 = 0x80;
              *(undefined8 *)(puVar10 + 0x28) = uVar11;
              pauVar12 = ptr;
              goto LAB_001002d9;
            }
          }
        }
      }
    }
LAB_00100280:
    if (param_1[2] == 0) {
      SSL_CTX_free(*(SSL_CTX **)ptr[7]);
    }
    SSL_free(*(SSL **)(ptr[7] + 8));
    ossl_quic_channel_free(*(undefined8 *)ptr[6]);
    ossl_quic_port_free(*(undefined8 *)(ptr[5] + 8));
    ossl_quic_engine_free(*(undefined8 *)ptr[5]);
    ossl_crypto_mutex_free();
    CRYPTO_free((void *)0x0);
  }
  pauVar12 = (undefined1 (*) [16])0x0;
  CRYPTO_free(ptr);
LAB_001002d9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar12;
}



void ossl_quic_tserver_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    SSL_free(*(SSL **)((long)param_1 + 0x78));
    ossl_quic_channel_free(*(undefined8 *)((long)param_1 + 0x60));
    ossl_quic_port_free(*(undefined8 *)((long)param_1 + 0x58));
    ossl_quic_engine_free(*(undefined8 *)((long)param_1 + 0x50));
    BIO_free_all(*(BIO **)((long)param_1 + 0x18));
    BIO_free_all(*(BIO **)((long)param_1 + 0x20));
    CRYPTO_free(*(void **)((long)param_1 + 0x48));
    SSL_CTX_free(*(SSL_CTX **)((long)param_1 + 0x70));
    ossl_crypto_mutex_free((long)param_1 + 0x68);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void ossl_quic_tserver_set_plain_packet_mutator(long param_1)

{
  ossl_quic_channel_set_mutator(*(undefined8 *)(param_1 + 0x60));
  return;
}



void ossl_quic_tserver_set_handshake_mutator
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_quic_channel_get0_ssl(*(undefined8 *)(param_1 + 0x60));
  ossl_statem_set_mutator(uVar1,param_2,param_3,param_4);
  return;
}



undefined8 ossl_quic_tserver_tick(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_quic_channel_get_reactor(*(undefined8 *)(param_1 + 0x60));
  ossl_quic_reactor_tick(uVar2,0);
  iVar1 = ossl_quic_channel_is_active(*(undefined8 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 1;
  }
  return 1;
}



void ossl_quic_tserver_is_connected(long param_1)

{
  ossl_quic_channel_is_active(*(undefined8 *)(param_1 + 0x60));
  return;
}



void ossl_quic_tserver_is_term_any(long param_1)

{
  ossl_quic_channel_is_term_any(*(undefined8 *)(param_1 + 0x60));
  return;
}



void ossl_quic_tserver_get_terminate_cause(long param_1)

{
  ossl_quic_channel_get_terminate_cause(*(undefined8 *)(param_1 + 0x60));
  return;
}



void ossl_quic_tserver_is_terminated(long param_1)

{
  ossl_quic_channel_is_terminated(*(undefined8 *)(param_1 + 0x60));
  return;
}



void ossl_quic_tserver_get_short_header_conn_id_len(long param_1)

{
  ossl_quic_channel_get_short_header_conn_id_len(*(undefined8 *)(param_1 + 0x60));
  return;
}



void ossl_quic_tserver_is_handshake_confirmed(long param_1)

{
  ossl_quic_channel_is_handshake_confirmed(*(undefined8 *)(param_1 + 0x60));
  return;
}



undefined8
ossl_quic_tserver_read
          (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
  uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
  lVar3 = ossl_quic_stream_map_get_by_id(uVar2,param_2);
  if (lVar3 == 0) {
    if ((param_2 & 1) == 0) {
      iVar1 = ossl_quic_channel_is_active(*(undefined8 *)(param_1 + 0x60));
      if (iVar1 != 0) {
        *param_5 = 0;
        goto LAB_00100541;
      }
    }
  }
  else if ((byte)(*(char *)(lVar3 + 0x102) - 1U) < 3) {
    iVar1 = ossl_quic_rstream_read(*(undefined8 *)(lVar3 + 0x78),param_3,param_4,param_5,&local_6c);
    if (iVar1 != 0) {
      if (*param_5 == 0) {
        if (local_6c == 0) goto LAB_00100541;
LAB_001005d7:
        uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
        ossl_quic_stream_map_notify_totally_read(uVar2,lVar3);
      }
      else {
        uVar2 = ossl_quic_channel_get_statm(*(undefined8 *)(param_1 + 0x60));
        ossl_statm_get_rtt_info(uVar2,local_68);
        iVar1 = ossl_quic_rxfc_on_retire(lVar3 + 0xa0,*param_5,local_68[0]);
        if (iVar1 == 0) goto LAB_00100576;
        if (local_6c != 0) goto LAB_001005d7;
      }
      if (*param_5 != 0) {
        uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
        ossl_quic_stream_map_update_state(uVar2,lVar3);
      }
LAB_00100541:
      uVar2 = 1;
      goto LAB_00100546;
    }
  }
LAB_00100576:
  uVar2 = 0;
LAB_00100546:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_tserver_has_read_ended(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  local_40 = 0;
  uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
  lVar3 = ossl_quic_stream_map_get_by_id(uVar2,param_2);
  if (lVar3 != 0) {
    if (*(byte *)(lVar3 + 0x102) == 4) {
LAB_00100730:
      uVar2 = 1;
      goto LAB_0010068c;
    }
    if (*(byte *)(lVar3 + 0x102) - 1 < 3) {
      iVar1 = ossl_quic_rstream_peek(*(undefined8 *)(lVar3 + 0x78),&local_31,1,&local_40,&local_44);
      if (((iVar1 != 0) && (local_44 != 0)) && (local_40 == 0)) {
        iVar1 = ossl_quic_rstream_read
                          (*(undefined8 *)(lVar3 + 0x78),&local_31,1,&local_40,&local_44);
        if (iVar1 != 0) {
          uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
          ossl_quic_stream_map_notify_totally_read(uVar2,lVar3);
          uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
          ossl_quic_stream_map_update_state(uVar2,lVar3);
          goto LAB_00100730;
        }
      }
    }
  }
  uVar2 = 0;
LAB_0010068c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_quic_tserver_write
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = ossl_quic_channel_is_active(*(undefined8 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
    lVar3 = ossl_quic_stream_map_get_by_id(uVar2,param_2);
    if ((lVar3 != 0) && (*(byte *)(lVar3 + 0x101) - 1 < 3)) {
      iVar1 = ossl_quic_sstream_append(*(undefined8 *)(lVar3 + 0x70),param_3,param_4,param_5);
      if (iVar1 != 0) {
        if (*param_5 != 0) {
          uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
          ossl_quic_stream_map_update_state(uVar2,lVar3);
        }
        ossl_quic_tserver_tick(param_1);
        return 1;
      }
    }
  }
  return 0;
}



undefined8 ossl_quic_tserver_conclude(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = ossl_quic_channel_is_active(*(undefined8 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
    lVar3 = ossl_quic_stream_map_get_by_id(uVar2,param_2);
    if ((lVar3 != 0) && (*(byte *)(lVar3 + 0x101) - 1 < 3)) {
      iVar1 = ossl_quic_sstream_get_final_size(*(undefined8 *)(lVar3 + 0x70),0);
      if (iVar1 == 0) {
        ossl_quic_sstream_fin(*(undefined8 *)(lVar3 + 0x70));
        uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
        ossl_quic_stream_map_update_state(uVar2,lVar3);
      }
      ossl_quic_tserver_tick(param_1);
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_quic_tserver_stream_new(long param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_quic_channel_is_active(*(undefined8 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    lVar2 = ossl_quic_channel_new_stream_local(*(undefined8 *)(param_1 + 0x60),param_2);
    if (lVar2 != 0) {
      *param_3 = *(undefined8 *)(lVar2 + 0x38);
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_quic_tserver_get0_rbio(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 ossl_quic_tserver_get0_ssl_ctx(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



byte ossl_quic_tserver_stream_has_peer_stop_sending
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  
  uVar1 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
  lVar2 = ossl_quic_stream_map_get_by_id(uVar1,param_2);
  if (lVar2 != 0) {
    bVar3 = *(byte *)(lVar2 + 0x103);
    if (((bVar3 & 8) != 0) && (param_3 != (undefined8 *)0x0)) {
      *param_3 = *(undefined8 *)(lVar2 + 0x50);
      bVar3 = *(byte *)(lVar2 + 0x103);
    }
    return bVar3 >> 3 & 1;
  }
  return 0;
}



bool ossl_quic_tserver_stream_has_peer_reset_stream
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  
  uVar1 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
  lVar2 = ossl_quic_stream_map_get_by_id(uVar1,param_2);
  if (lVar2 != 0) {
    bVar3 = (byte)(*(char *)(lVar2 + 0x102) - 5U) < 2;
    if ((param_3 != (undefined8 *)0x0) && (bVar3)) {
      *param_3 = *(undefined8 *)(lVar2 + 0x58);
      bVar3 = (byte)(*(char *)(lVar2 + 0x102) - 5U) < 2;
    }
    return bVar3;
  }
  return false;
}



void ossl_quic_tserver_set_new_local_cid(long param_1)

{
  ossl_quic_channel_replace_local_cid(*(undefined8 *)(param_1 + 0x60));
  return;
}



undefined8 ossl_quic_tserver_pop_incoming_stream(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
  lVar2 = ossl_quic_stream_map_peek_accept_queue(uVar1);
  if (lVar2 != 0) {
    ossl_quic_stream_map_remove_from_accept_queue(uVar1,lVar2,0);
    return *(undefined8 *)(lVar2 + 0x38);
  }
  return 0xffffffffffffffff;
}



undefined8 ossl_quic_tserver_is_stream_totally_acked(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0x60));
  lVar2 = ossl_quic_stream_map_get_by_id(uVar1,param_2);
  if (lVar2 != 0) {
    uVar1 = ossl_quic_sstream_is_totally_acked(*(undefined8 *)(lVar2 + 0x70));
    return uVar1;
  }
  return 1;
}



void ossl_quic_tserver_get_net_read_desired(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_quic_channel_get_reactor(*(undefined8 *)(param_1 + 0x60));
  ossl_quic_reactor_net_read_desired(uVar1);
  return;
}



void ossl_quic_tserver_get_net_write_desired(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_quic_channel_get_reactor(*(undefined8 *)(param_1 + 0x60));
  ossl_quic_reactor_net_write_desired(uVar1);
  return;
}



void ossl_quic_tserver_get_deadline(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_quic_channel_get_reactor(*(undefined8 *)(param_1 + 0x60));
  ossl_quic_reactor_get_tick_deadline(uVar1);
  return;
}



undefined8 ossl_quic_tserver_shutdown(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  ossl_quic_channel_local_close(*(undefined8 *)(param_1 + 0x60),param_2,0);
  iVar1 = ossl_quic_channel_is_terminated(*(undefined8 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = ossl_quic_channel_get_reactor(*(undefined8 *)(param_1 + 0x60));
  ossl_quic_reactor_tick(uVar2,0);
  uVar2 = ossl_quic_channel_is_terminated(*(undefined8 *)(param_1 + 0x60));
  return uVar2;
}



undefined8 ossl_quic_tserver_ping(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_quic_channel_is_terminated(*(undefined8 *)(param_1 + 0x60));
  if (iVar1 == 0) {
    iVar1 = ossl_quic_channel_ping(*(undefined8 *)(param_1 + 0x60));
    if (iVar1 != 0) {
      uVar2 = ossl_quic_channel_get_reactor(*(undefined8 *)(param_1 + 0x60));
      ossl_quic_reactor_tick(uVar2,0);
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_quic_tserver_get_channel(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



void ossl_quic_tserver_set_msg_callback(long param_1,cb *param_2,void *param_3)

{
  ossl_quic_channel_set_msg_callback
            (*(undefined8 *)(param_1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x48));
  ossl_quic_channel_set_msg_callback_arg(*(undefined8 *)(param_1 + 0x60),param_3);
  SSL_set_msg_callback(*(SSL **)(param_1 + 0x78),param_2);
  SSL_ctrl(*(SSL **)(param_1 + 0x78),0x10,0,param_3);
  return;
}



void ossl_quic_tserver_new_ticket(long param_1)

{
  SSL_new_session_ticket(*(undefined8 *)(param_1 + 0x78));
  return;
}



void ossl_quic_tserver_set_max_early_data(long param_1)

{
  SSL_set_max_early_data(*(undefined8 *)(param_1 + 0x78));
  return;
}



void ossl_quic_tserver_set_psk_find_session_cb(long param_1)

{
  SSL_set_psk_find_session_callback(*(undefined8 *)(param_1 + 0x78));
  return;
}




void lh_QUIC_TOKEN_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_TOKEN_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_TOKEN_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_TOKEN_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void qc_cleanup(long param_1,int param_2)

{
  long lVar1;
  BIO *pBVar2;
  
  SSL_free(*(SSL **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  ossl_quic_channel_free(*(undefined8 *)(param_1 + 0xa0));
  lVar1 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar1 == 0) {
LAB_001000f0:
    if (param_2 == 0) goto LAB_00100101;
  }
  else {
    if ((*(long *)(param_1 + 0x80) == 0) && ((*(byte *)(param_1 + 0x151) & 2) == 0)) {
      pBVar2 = (BIO *)ossl_quic_port_get_net_rbio(lVar1);
      BIO_free_all(pBVar2);
      pBVar2 = (BIO *)ossl_quic_port_get_net_wbio(lVar1);
      BIO_free_all(pBVar2);
      ossl_quic_port_free(*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0x98) = 0;
      ossl_quic_engine_free(*(undefined8 *)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x90) = 0;
      goto LAB_001000f0;
    }
    if (param_2 == 0) {
      return;
    }
  }
  ossl_crypto_mutex_unlock(*(undefined8 *)(param_1 + 0xa8));
LAB_00100101:
  if ((*(long *)(param_1 + 0x80) == 0) && ((*(byte *)(param_1 + 0x151) & 2) == 0)) {
    ossl_crypto_mutex_free(param_1 + 0xa8);
    return;
  }
  return;
}



void quic_shutdown_peer_wait(long param_1)

{
  ossl_quic_channel_is_term_any(*(undefined8 *)(param_1 + 0xa0));
  return;
}



void quic_classify_stream
               (long param_1,long param_2,uint param_3,undefined4 *param_4,undefined8 *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 uStack_38;
  long local_30;
  
  bVar5 = *(byte *)(param_2 + 0x100);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(param_1 + 0x150);
  bVar4 = bVar5 & 1;
  puVar6 = &uStack_38;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0xffffffffffffffff;
    bVar5 = *(byte *)(param_2 + 0x100);
    puVar6 = param_5;
  }
  if (((bVar5 & 2) != 0) && ((((bVar1 >> 1 & 1) == bVar4 ^ param_3) & 1) != 0)) {
    *param_4 = 2;
    goto LAB_001001b0;
  }
  iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(param_1 + 0xa0));
  if (iVar2 != 0) {
    *param_4 = 6;
    goto LAB_001001b0;
  }
  if (param_3 == 0) {
    if (*(char *)(param_2 + 0x102) == '\x04') {
LAB_00100270:
      *param_4 = 3;
      goto LAB_001001b0;
    }
    if ((*(byte *)(param_2 + 0x103) & 4) == 0) {
      if (1 < (byte)(*(char *)(param_2 + 0x102) - 5U)) {
LAB_0010024f:
        *param_4 = 1;
        goto LAB_001001b0;
      }
      *param_4 = 5;
      uVar3 = *(undefined8 *)(param_2 + 0x58);
    }
    else {
      *param_4 = 4;
      uVar3 = *(undefined8 *)(param_2 + 0x40);
    }
  }
  else if ((byte)(*(char *)(param_2 + 0x101) - 5U) < 2) {
    *param_4 = 4;
    uVar3 = *(undefined8 *)(param_2 + 0x48);
  }
  else {
    if ((*(byte *)(param_2 + 0x103) & 8) == 0) {
      iVar2 = ossl_quic_sstream_get_final_size(*(undefined8 *)(param_2 + 0x70),&uStack_38);
      if (iVar2 == 0) goto LAB_0010024f;
      goto LAB_00100270;
    }
    *param_4 = 5;
    uVar3 = *(undefined8 *)(param_2 + 0x50);
  }
  *puVar6 = uVar3;
LAB_001001b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quic_shutdown_wait(long param_1)

{
  ossl_quic_channel_is_terminated(*(undefined8 *)(param_1 + 0xa0));
  return;
}



undefined8 quic_validate_for_write(long param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x80), lVar4 == 0)) {
LAB_00100340:
    *param_2 = 0xc0103;
    return 0;
  }
  bVar1 = *(byte *)(lVar4 + 0x101);
  if (bVar1 != 4) {
    if (4 < bVar1) {
      if ((byte)(bVar1 - 5) < 2) {
        *param_2 = 0x177;
        return 0;
      }
LAB_00100350:
      *param_2 = 0x16e;
      return 0;
    }
    if (bVar1 == 1) {
      uVar3 = ossl_quic_channel_get_qsm(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0));
      iVar2 = ossl_quic_stream_map_ensure_send_part_id(uVar3,*(undefined8 *)(param_1 + 0x80));
      if (iVar2 == 0) goto LAB_00100340;
      lVar4 = *(long *)(param_1 + 0x80);
    }
    else if (1 < (byte)(bVar1 - 2)) goto LAB_00100350;
    iVar2 = ossl_quic_sstream_get_final_size(*(undefined8 *)(lVar4 + 0x70),0);
    if (iVar2 == 0) {
      return 1;
    }
  }
  *param_2 = 0x16d;
  return 0;
}



void quic_post_write(long param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar1 = ossl_quic_channel_get_qsm(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0));
    ossl_quic_stream_map_update_state(uVar1,uVar2);
  }
  if ((param_3 != 0) && ((param_4 & 1) != 0)) {
    ossl_quic_sstream_fin(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x70));
  }
  if (param_5 == 0) {
    return;
  }
  uVar2 = ossl_quic_channel_get_reactor(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0));
  ossl_quic_reactor_tick(uVar2,0);
  return;
}



undefined8 xso_sstream_append(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x70);
  uVar2 = ossl_quic_sstream_get_cur_size(uVar5);
  uVar3 = ossl_quic_txfc_get_cwm(*(long *)(param_1 + 0x80) + 0x80);
  if (uVar3 < uVar2) {
    param_3 = 0;
    ossl_quic_sstream_get_buffer_size(uVar5);
    ossl_quic_sstream_get_buffer_avail(uVar5);
  }
  else {
    if (uVar3 - uVar2 <= param_3) {
      param_3 = uVar3 - uVar2;
    }
    lVar4 = ossl_quic_sstream_get_buffer_size(uVar5);
    uVar2 = ossl_quic_sstream_get_buffer_avail(uVar5);
    if ((uVar2 < param_3) && (lVar4 != 0x600000)) {
      uVar2 = (param_3 + lVar4) - uVar2;
      if (0x600000 < uVar2) {
        uVar2 = 0x600000;
      }
      iVar1 = ossl_quic_sstream_set_buffer_size(uVar5,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  uVar5 = ossl_quic_sstream_append(uVar5,param_2,param_3,param_4);
  return uVar5;
}



int quic_token_cmp(long param_1,long param_2)

{
  int iVar1;
  
  if (*(size_t *)(param_1 + 0x10) == *(size_t *)(param_2 + 0x10)) {
    iVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
    return iVar1;
  }
  return 1;
}



void quic_token_hash(long param_1)

{
  ossl_fnv1a_hash(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



ulong quic_accept_connection_wait(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = ossl_quic_port_is_running();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = ossl_quic_port_have_incoming(param_1);
  return (ulong)(iVar1 != 0);
}



void qc_update_reject_policy(long param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    if ((*(long *)(param_1 + 0xb0) == 0) && ((*(byte *)(param_1 + 0x150) & 0x10) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(param_1 + 0x154) != 0;
    }
  }
  else {
    bVar1 = *(int *)(param_1 + 0x168) == 2;
  }
  ossl_quic_channel_set_incoming_stream_auto_reject
            (*(undefined8 *)(param_1 + 0xa0),bVar1,*(undefined8 *)(param_1 + 0x170));
  return;
}



void qc_set_default_xso(long param_1,SSL *param_2,int param_3)

{
  SSL *ssl;
  int iVar1;
  
  ssl = *(SSL **)(param_1 + 0xb0);
  if (param_2 == ssl) {
    if (param_3 == 0) {
      return;
    }
    *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 0x10;
    qc_update_reject_policy();
    return;
  }
  *(SSL **)(param_1 + 0xb0) = param_2;
  if (param_2 == (SSL *)0x0) {
    iVar1 = SSL_up_ref();
    if (iVar1 == 0) goto joined_r0x00100666;
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    UNLOCK();
  }
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 0x10;
    qc_update_reject_policy();
  }
joined_r0x00100666:
  if (ssl == (SSL *)0x0) {
    return;
  }
  SSL_free(ssl);
  return;
}



bool quic_shutdown_flush_wait(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = true;
  iVar1 = ossl_quic_channel_is_term_any(*(undefined8 *)(param_1 + 0xa0));
  if (iVar1 == 0) {
    bVar3 = false;
    uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(param_1 + 0xa0));
    if ((*(byte *)(param_1 + 0x150) & 0x20) != 0) {
      iVar1 = ossl_quic_stream_map_is_shutdown_flush_finished(uVar2);
      return iVar1 != 0;
    }
  }
  return bVar3;
}



void qctx_lock_for_io(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
  ossl_crypto_mutex_lock(uVar1);
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  if ((int)param_1[5] == 0) {
    if (param_1[3] != 0) {
      *(undefined4 *)(param_1[3] + 0x178) = 0;
    }
  }
  else if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 0xb8) = 0;
    return;
  }
  return;
}



ulong quic_new_stream_wait(long *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x150) & 0x20) == 0) {
    iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0));
    if (iVar2 == 0) {
      iVar2 = ossl_quic_channel_is_active(*(undefined8 *)(lVar1 + 0xa0));
      if (iVar2 != 0) {
        iVar2 = ossl_quic_channel_is_new_local_stream_admissible
                          (*(undefined8 *)(lVar1 + 0xa0),(int)param_1[1]);
        return (ulong)(iVar2 != 0);
      }
    }
  }
  return 0xffffffff;
}



ulong quic_handshake_wait(long *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if ((((*(byte *)(lVar1 + 0x150) & 0x20) == 0) &&
      (iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0)), iVar2 == 0)) &&
     (iVar2 = ossl_quic_channel_is_active(*(undefined8 *)(lVar1 + 0xa0)), iVar2 != 0)) {
    iVar2 = ossl_quic_channel_is_handshake_complete(*(undefined8 *)(*param_1 + 0xa0));
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = SSL_want(*(SSL **)(*param_1 + 0x78));
    return (ulong)(iVar2 - 7U < 2 || iVar2 == 4);
  }
  return 0xffffffff;
}



undefined8
quic_raise_non_normal_error_constprop_0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 param_10,undefined4 param_11,undefined8 param_12,int param_13,
          undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined1 local_d8 [48];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_e0 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 != 0) {
    if (*(int *)(param_9 + 0x34) != 0) {
      if (*(int *)(param_9 + 0x28) == 0) {
        if (*(long *)(param_9 + 0x18) != 0) {
          *(undefined4 *)(*(long *)(param_9 + 0x18) + 0x178) = 1;
        }
      }
      else if (*(long *)(param_9 + 0x20) != 0) {
        *(undefined4 *)(*(long *)(param_9 + 0x20) + 0xb8) = 1;
      }
    }
    if ((param_13 == 0xcf) && (*(long *)(param_9 + 0x18) != 0)) {
      ossl_quic_channel_restore_err_state(*(undefined8 *)(*(long *)(param_9 + 0x18) + 0xa0));
    }
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_impl.c",param_11,param_12);
  local_f0 = &stack0x00000008;
  local_f8 = 0x30;
  local_e8 = local_d8;
  local_f4 = 0x30;
  ERR_vset_error(0x14,param_13,param_14,&local_f8);
  if (local_e0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * alloc_port_user_ssl(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  void *ptr;
  undefined8 uVar6;
  byte bVar7;
  
  ptr = (void *)CRYPTO_zalloc(0x180,"ssl/quic/quic_impl.c",0x120d);
  if (ptr == (void *)0x0) {
    quic_raise_non_normal_error_constprop_0
              (0,"ssl/quic/quic_impl.c",0x120e,"create_qc_from_incoming_conn",0x8000f,0);
  }
  else {
    iVar5 = ossl_quic_obj_init(ptr,*(undefined8 *)(param_2 + 8),0x80,param_2,0,0);
    if (iVar5 != 0) {
      ossl_quic_channel_get_peer_addr(param_1,(long)ptr + 0xb8);
      *(byte *)((long)ptr + 0x151) = *(byte *)((long)ptr + 0x151) | 2;
      uVar6 = *(undefined8 *)(param_2 + 0x90);
      uVar4 = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)((long)ptr + 0x90) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)((long)ptr + 0x98) = uVar4;
      *(undefined8 *)((long)ptr + 0xa0) = param_1;
      *(undefined8 *)((long)ptr + 0xa8) = uVar6;
      uVar6 = ossl_quic_channel_get0_tls(param_1);
      lVar2 = *(long *)(param_2 + 8);
      bVar7 = 1;
      *(undefined8 *)((long)ptr + 0x78) = uVar6;
      bVar1 = *(byte *)((long)ptr + 0x150);
      uVar3 = *(ulong *)(lVar2 + 0x138);
      *(undefined4 *)((long)ptr + 0x154) = 1;
      *(ulong *)((long)ptr + 0x160) = uVar3 & 0x3df6ffb87;
      *(byte *)((long)ptr + 0x150) = bVar1 | 7;
      *(undefined4 *)((long)ptr + 0x168) = 0;
      *(undefined4 *)((long)ptr + 0x178) = 0;
      if (*(long *)((long)ptr + 0xb0) == 0) {
        bVar7 = bVar1 >> 4 & 1;
      }
      ossl_quic_channel_set_incoming_stream_auto_reject
                (*(undefined8 *)((long)ptr + 0xa0),bVar7,*(undefined8 *)((long)ptr + 0x170));
      return ptr;
    }
    quic_raise_non_normal_error_constprop_0
              (0,"ssl/quic/quic_impl.c",0x1215,"create_qc_from_incoming_conn",0xc0103,0);
  }
  CRYPTO_free(ptr);
  return (void *)0x0;
}



ulong wait_for_incoming_stream(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + 0x18);
  uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(lVar3 + 0xa0));
  if ((*(byte *)(lVar3 + 0x150) & 0x20) == 0) {
    iVar1 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar3 + 0xa0));
    if (iVar1 == 0) {
      iVar1 = ossl_quic_channel_is_active(*(undefined8 *)(lVar3 + 0xa0));
      if (iVar1 != 0) {
        lVar3 = ossl_quic_stream_map_peek_accept_queue(uVar2);
        param_1[1] = lVar3;
        return (ulong)(lVar3 != 0);
      }
    }
  }
  quic_raise_non_normal_error_constprop_0
            (*param_1,"ssl/quic/quic_impl.c",0xeec,"wait_for_incoming_stream",0xcf,0);
  return 0xffffffff;
}



void * create_xso_from_stream(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  void *ptr;
  uint uVar5;
  
  ptr = (void *)CRYPTO_zalloc(0xc0,"ssl/quic/quic_impl.c",0x876);
  if (ptr == (void *)0x0) {
    quic_raise_non_normal_error_constprop_0
              (0,"ssl/quic/quic_impl.c",0x877,"create_xso_from_stream",0x8000f,0);
  }
  else {
    iVar4 = ossl_quic_obj_init(ptr,*(undefined8 *)(param_1 + 8),0x81,param_1,0,0);
    if (iVar4 == 0) {
      quic_raise_non_normal_error_constprop_0
                (0,"ssl/quic/quic_impl.c",0x87d,"create_xso_from_stream",0xc0103,0);
    }
    else {
      iVar4 = SSL_up_ref(param_1);
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x158);
        uVar2 = *(ulong *)(param_1 + 0x160);
        *(long *)((long)ptr + 0x78) = param_1;
        lVar3 = *(long *)(param_2 + 0x78);
        *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 1;
        *(undefined4 *)((long)ptr + 0xa8) = uVar1;
        *(long *)((long)ptr + 0x80) = param_2;
        *(ulong *)((long)ptr + 0xb0) = (ulong)((uint)uVar2 & 0xde0fa987);
        uVar5 = (uint)(uVar2 >> 1) & 1;
        *(undefined4 *)((long)ptr + 0xb8) = 0;
        if (lVar3 != 0) {
          ossl_quic_rstream_set_cleanse(lVar3,uVar5);
          param_2 = *(long *)((long)ptr + 0x80);
        }
        if (*(long *)(param_2 + 0x70) != 0) {
          ossl_quic_sstream_set_cleanse(*(long *)(param_2 + 0x70),uVar5);
        }
        return ptr;
      }
      quic_raise_non_normal_error_constprop_0
                (0,"ssl/quic/quic_impl.c",0x883,"create_xso_from_stream",0x80014,0);
    }
  }
  CRYPTO_free(ptr);
  return (void *)0x0;
}



void wrong_type_isra_0(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1a6;
  uVar1 = param_1 & 0x87;
  if ((((uVar1 != 0x80) && (uVar2 = 0x1a5, uVar1 != 4)) && (uVar2 = 0x164, uVar1 != 1)) &&
     (uVar2 = 0x163, (param_1 & 0x86) != 2)) {
    uVar2 = 0x8010c;
  }
  quic_raise_non_normal_error_constprop_0(0,"ssl/quic/quic_impl.c",0xda,"wrong_type",uVar2,0);
  return;
}



ulong quic_wait_for_stream(long *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0x150) & 0x20) == 0) {
    iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar4 + 0xa0));
    if (iVar2 == 0) {
      iVar2 = ossl_quic_channel_is_active(*(undefined8 *)(lVar4 + 0xa0));
      if (iVar2 != 0) {
        lVar4 = param_1[3];
        uVar3 = ossl_quic_channel_get_qsm(*(undefined8 *)(*param_1 + 0xa0));
        lVar4 = ossl_quic_stream_map_get_by_id(uVar3,lVar4);
        param_1[1] = lVar4;
        if (lVar4 == 0) {
          uVar1 = param_1[3];
          uVar3 = ossl_quic_channel_get_qsm(*(undefined8 *)(*param_1 + 0xa0));
          lVar4 = ossl_quic_stream_map_get_by_id(uVar3,uVar1 | 2);
          param_1[1] = lVar4;
        }
        return (ulong)(lVar4 != 0);
      }
    }
  }
  quic_raise_non_normal_error_constprop_0
            (param_1[2],"ssl/quic/quic_impl.c",0x809,"quic_wait_for_stream",0xcf,0);
  return 0xffffffff;
}



ulong quic_write_again(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar1 = *(long *)(*param_1 + 0x78);
  if ((*(byte *)(lVar1 + 0x150) & 0x20) == 0) {
    iVar5 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0));
    if (iVar5 == 0) {
      iVar5 = ossl_quic_channel_is_active(*(undefined8 *)(lVar1 + 0xa0));
      if (iVar5 != 0) {
        iVar5 = quic_validate_for_write(*param_1,param_1 + 4);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 4) = 0xc0103;
          iVar5 = xso_sstream_append(*param_1,param_1[1],param_1[2],&local_48);
          lVar1 = local_48;
          if (iVar5 != 0) {
            uVar6 = param_1[5];
            lVar2 = param_1[2];
            lVar3 = *param_1;
            if (local_48 != 0) {
              uVar4 = *(undefined8 *)(lVar3 + 0x80);
              uVar7 = ossl_quic_channel_get_qsm(*(undefined8 *)(*(long *)(lVar3 + 0x78) + 0xa0));
              ossl_quic_stream_map_update_state(uVar7,uVar4);
            }
            if ((lVar2 == lVar1) && ((uVar6 & 1) != 0)) {
              ossl_quic_sstream_fin(*(undefined8 *)(*(long *)(lVar3 + 0x80) + 0x70));
            }
            lVar1 = param_1[2];
            param_1[1] = param_1[1] + local_48;
            param_1[2] = lVar1 - local_48;
            param_1[3] = local_48 + param_1[3];
            uVar6 = (ulong)(lVar1 - local_48 == 0);
            goto LAB_00100eff;
          }
        }
      }
    }
  }
  uVar6 = 0xfffffffe;
LAB_00100eff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 qc_get_stream_write_buf_stat(long *param_1,int param_2,undefined8 *param_3,code *param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
  ossl_crypto_mutex_lock(uVar3);
  if (param_2 == 0) {
    if (param_1[4] == 0) {
      quic_raise_non_normal_error_constprop_0
                (param_1,"ssl/quic/quic_impl.c",0xe72,"qc_get_stream_write_buf_stat",0x163,0);
    }
    else {
      lVar2 = *(long *)(param_1[4] + 0x80);
      bVar1 = *(byte *)(lVar2 + 0x101);
      if (bVar1 != 0) {
        if (bVar1 - 1 < 3) {
          uVar5 = 1;
          uVar3 = (*param_4)(*(undefined8 *)(lVar2 + 0x70));
        }
        else {
          uVar3 = 0;
          uVar5 = 1;
        }
        goto LAB_0010109a;
      }
      quic_raise_non_normal_error_constprop_0
                (param_1,"ssl/quic/quic_impl.c",0xe77,"qc_get_stream_write_buf_stat",0x16e,0);
    }
  }
  else {
    quic_raise_non_normal_error_constprop_0
              (param_1,"ssl/quic/quic_impl.c",0xe6c,"qc_get_stream_write_buf_stat",0x19f,0);
  }
  uVar3 = 0;
  uVar5 = 0;
LAB_0010109a:
  uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
  ossl_crypto_mutex_unlock(uVar4);
  *param_3 = uVar3;
  return uVar5;
}



undefined8 qc_getset_idle_timeout(long *param_1,int param_2,undefined8 *param_3,ulong *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
  ossl_crypto_mutex_lock(uVar3);
  if (param_2 == 1) {
    uVar3 = ossl_quic_channel_get_max_idle_timeout_request(*(undefined8 *)(param_1[3] + 0xa0));
    if (param_4 == (ulong *)0x0) {
LAB_00101270:
      uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
      ossl_crypto_mutex_unlock(uVar4);
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = uVar3;
      }
      return 1;
    }
    uVar1 = *param_4;
    if (uVar1 >> 0x3e == 0) {
      iVar2 = ossl_quic_channel_have_generated_transport_params(*(undefined8 *)(param_1[3] + 0xa0));
      if (iVar2 == 0) {
        ossl_quic_channel_set_max_idle_timeout_request(*(undefined8 *)(param_1[3] + 0xa0),uVar1);
        goto LAB_00101270;
      }
      quic_raise_non_normal_error_constprop_0
                (param_1,"ssl/quic/quic_impl.c",0xdde,"qc_getset_idle_timeout",0x19d,0);
    }
    else {
      quic_raise_non_normal_error_constprop_0
                (param_1,"ssl/quic/quic_impl.c",0xdd8,"qc_getset_idle_timeout",0x80106,0);
    }
  }
  else if (param_2 - 2U < 2) {
    if (param_4 == (ulong *)0x0) {
      iVar2 = ossl_quic_channel_is_handshake_complete(*(undefined8 *)(param_1[3] + 0xa0));
      if (iVar2 != 0) {
        if (param_2 == 3) {
          uVar3 = ossl_quic_channel_get_max_idle_timeout_actual(*(undefined8 *)(param_1[3] + 0xa0));
        }
        else {
          uVar3 = ossl_quic_channel_get_max_idle_timeout_peer_request();
        }
        goto LAB_00101270;
      }
      quic_raise_non_normal_error_constprop_0
                (param_1,"ssl/quic/quic_impl.c",0xdf0,"qc_getset_idle_timeout",0x1a1,0);
    }
    else {
      quic_raise_non_normal_error_constprop_0
                (param_1,"ssl/quic/quic_impl.c",0xdea,"qc_getset_idle_timeout",0x1a0,0);
    }
  }
  else {
    quic_raise_non_normal_error_constprop_0
              (param_1,"ssl/quic/quic_impl.c",0xdfb,"qc_getset_idle_timeout",0x19f,0);
  }
  uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
  ossl_crypto_mutex_unlock(uVar3);
  return 0;
}



long quic_conn_stream_new(long *param_1,uint param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long local_58;
  uint local_50;
  long local_40;
  
  uVar8 = param_2 & 1;
  lVar1 = param_1[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
    ossl_crypto_mutex_lock(uVar6);
  }
  if (((*(byte *)(lVar1 + 0x150) & 0x20) == 0) &&
     (iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0)), iVar2 == 0)) {
    uVar6 = *(undefined8 *)(lVar1 + 0xa0);
    if ((param_2 & 4) == 0) {
      iVar2 = ossl_quic_channel_is_new_local_stream_admissible(uVar6,uVar8);
      if (iVar2 == 0) {
        if (((param_2 & 2) == 0) && (iVar2 = ossl_quic_obj_blocking(*param_1), iVar2 != 0)) {
          uVar6 = *(undefined8 *)(*param_1 + 0x58);
          local_58 = lVar1;
          local_50 = uVar8;
          ossl_quic_engine_set_inhibit_tick(uVar6,0);
          uVar6 = ossl_quic_engine_get0_reactor(uVar6);
          iVar2 = ossl_quic_reactor_block_until_pred(uVar6,quic_new_stream_wait,&local_58,0);
          if ((((*(byte *)(lVar1 + 0x150) & 0x20) == 0) &&
              (iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0)), iVar3 == 0)) &&
             (iVar3 = ossl_quic_channel_is_active(*(undefined8 *)(lVar1 + 0xa0)), iVar3 != 0)) {
            if (0 < iVar2) goto LAB_00101530;
            uVar7 = 0xc0103;
            uVar6 = 0x8d4;
          }
          else {
            uVar7 = 0xcf;
            uVar6 = 0x8d1;
          }
        }
        else {
          uVar7 = 0x19b;
          uVar6 = 0x8c7;
        }
        goto LAB_001013e3;
      }
LAB_00101530:
      uVar6 = *(undefined8 *)(lVar1 + 0xa0);
    }
    lVar4 = ossl_quic_channel_new_stream_local(uVar6,uVar8);
    if (lVar4 == 0) {
      uVar7 = 0xc0103;
      uVar6 = 0x8db;
      goto LAB_001013e3;
    }
    lVar5 = create_xso_from_stream(lVar1,lVar4);
    if (lVar5 != 0) {
      *(byte *)(lVar1 + 0x150) = *(byte *)(lVar1 + 0x150) | 0x10;
      qc_update_reject_policy(lVar1);
      if (param_3 != 0) {
        uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
        ossl_crypto_mutex_unlock(uVar6);
      }
      goto LAB_0010142b;
    }
  }
  else {
    uVar7 = 0xcf;
    uVar6 = 0x8ba;
LAB_001013e3:
    lVar4 = 0;
    quic_raise_non_normal_error_constprop_0
              (param_1,"ssl/quic/quic_impl.c",uVar6,"quic_conn_stream_new",uVar7,0);
  }
  CRYPTO_free((void *)0x0);
  uVar6 = ossl_quic_channel_get_qsm(*(undefined8 *)(lVar1 + 0xa0));
  ossl_quic_stream_map_release(uVar6,lVar4);
  if (param_3 != 0) {
    uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*param_1 + 0x58));
    ossl_crypto_mutex_unlock(uVar6);
  }
  lVar5 = 0;
LAB_0010142b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



undefined8
quic_read_actual(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                int param_6)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_5c;
  undefined8 local_58 [5];
  long local_30;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    uVar6 = 0xc0103;
  }
  else {
    bVar2 = *(byte *)(*(long *)(lVar3 + 0x80) + 0x102);
    if (bVar2 == 5) {
      uVar6 = ossl_quic_channel_get_qsm(*(undefined8 *)(*(long *)(lVar3 + 0x78) + 0xa0));
      ossl_quic_stream_map_notify_app_read_reset_recv_part(uVar6,*(undefined8 *)(lVar3 + 0x80));
      uVar6 = 0x177;
    }
    else if (bVar2 < 6) {
      if (bVar2 == 4) {
        *(byte *)(lVar3 + 0x88) = *(byte *)(lVar3 + 0x88) | 1;
        if (*(int *)(param_1 + 0x34) != 0) {
          if (*(int *)(param_1 + 0x28) == 0) {
LAB_001018e0:
            if (*(long *)(param_1 + 0x18) != 0) {
              *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x178) = 6;
              uVar6 = 0;
              goto LAB_00101720;
            }
          }
          else {
            *(undefined4 *)(lVar3 + 0xb8) = 6;
          }
        }
LAB_001016dd:
        uVar6 = 0;
        goto LAB_00101720;
      }
      if (bVar2 != 0) {
        if (param_6 == 0) {
          iVar5 = ossl_quic_rstream_read
                            (*(undefined8 *)(param_2 + 0x78),param_3,param_4,param_5,&local_5c);
          if (iVar5 == 0) {
            uVar6 = quic_raise_non_normal_error_constprop_0
                              (param_1,"ssl/quic/quic_impl.c",0xb64,"quic_read_actual",0xc0103,0);
            goto LAB_00101720;
          }
          if (*param_5 != 0) {
            uVar6 = ossl_quic_channel_get_statm(*(undefined8 *)(lVar4 + 0xa0));
            ossl_statm_get_rtt_info(uVar6,local_58);
            iVar5 = ossl_quic_rxfc_on_retire(param_2 + 0xa0,*param_5,local_58[0]);
            if (iVar5 == 0) {
              uVar6 = quic_raise_non_normal_error_constprop_0
                                (param_1,"ssl/quic/quic_impl.c",0xb75,"quic_read_actual",0xc0103,0);
              goto LAB_00101720;
            }
          }
          if (local_5c != 0) {
            uVar6 = ossl_quic_channel_get_qsm(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa0));
            ossl_quic_stream_map_notify_totally_read
                      (uVar6,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
            if (*param_5 != 0) goto LAB_001017c7;
            goto LAB_0010183a;
          }
          if (*param_5 != 0) {
LAB_001017c7:
            uVar6 = ossl_quic_channel_get_qsm(*(undefined8 *)(lVar4 + 0xa0));
            ossl_quic_stream_map_update_state(uVar6,param_2);
            goto LAB_00101782;
          }
        }
        else {
          iVar5 = ossl_quic_rstream_peek();
          if (iVar5 == 0) {
            uVar6 = quic_raise_non_normal_error_constprop_0
                              (param_1,"ssl/quic/quic_impl.c",0xb5f,"quic_read_actual",0xc0103,0);
            goto LAB_00101720;
          }
LAB_00101782:
          if (*param_5 == 0) {
LAB_0010183a:
            if (local_5c != 0) {
              lVar3 = *(long *)(param_1 + 0x20);
              pbVar1 = (byte *)(lVar3 + 0x88);
              *pbVar1 = *pbVar1 | 1;
              if (*(int *)(param_1 + 0x34) != 0) {
                if (*(int *)(param_1 + 0x28) != 0) {
                  *(undefined4 *)(lVar3 + 0xb8) = 6;
                  uVar6 = 0;
                  goto LAB_00101720;
                }
                goto LAB_001018e0;
              }
              goto LAB_001016dd;
            }
          }
        }
        uVar6 = 1;
        goto LAB_00101720;
      }
      uVar6 = 0x17b;
    }
    else {
      uVar6 = 0x17b;
      if (bVar2 == 6) {
        uVar6 = 0x177;
      }
    }
  }
  uVar6 = quic_raise_non_normal_error_constprop_0
                    (param_1,"ssl/quic/quic_impl.c",0xb58,"quic_read_actual",uVar6,0);
LAB_00101720:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong quic_read_again(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(lVar3 + 0x18);
  if ((*(byte *)(lVar1 + 0x150) & 0x20) == 0) {
    iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0));
    if ((iVar2 == 0) &&
       (iVar2 = ossl_quic_channel_is_active(*(undefined8 *)(lVar1 + 0xa0)), iVar2 != 0)) {
      iVar2 = quic_read_actual(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],(int)param_1[5])
      ;
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      return (ulong)(*(long *)param_1[4] != 0);
    }
    lVar3 = *param_1;
  }
  quic_raise_non_normal_error_constprop_0
            (lVar3,"ssl/quic/quic_impl.c",0xb92,"quic_read_again",0xcf,0);
  return 0xffffffff;
}



undefined8 qc_wait_for_default_xso_for_read(long *param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long *local_68;
  ulong local_60;
  undefined8 local_58 [5];
  long local_30;
  
  lVar1 = param_1[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = *(byte *)(lVar1 + 0x150);
  if (((bVar2 & 0x10) != 0) || (*(int *)(lVar1 + 0x154) == 0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x163;
      uVar5 = 0x82a;
LAB_00101a81:
      uVar5 = quic_raise_non_normal_error_constprop_0
                        (param_1,"ssl/quic/quic_impl.c",uVar5,"qc_wait_for_default_xso_for_read",
                         uVar7,0);
      return uVar5;
    }
    goto LAB_00101d75;
  }
  uVar5 = ossl_quic_channel_get_qsm(*(undefined8 *)(lVar1 + 0xa0));
  uVar6 = (ulong)((bVar2 >> 1 ^ 1) & 1);
  lVar4 = ossl_quic_stream_map_get_by_id(uVar5,uVar6);
  if (lVar4 == 0) {
    uVar5 = ossl_quic_channel_get_qsm(*(undefined8 *)(lVar1 + 0xa0));
    lVar4 = ossl_quic_stream_map_get_by_id(uVar5,uVar6 | 2);
    if (lVar4 != 0) goto LAB_00101ad0;
    lVar4 = *param_1;
    do {
      bVar2 = *(byte *)(lVar4 + 0x70) >> 5;
      if ((bVar2 & 3) != 0) {
        if ((bVar2 & 3) == 2) goto LAB_00101bb2;
        break;
      }
      lVar4 = *(long *)(lVar4 + 0x40);
    } while (lVar4 != 0);
    uVar5 = ossl_quic_engine_get0_reactor(*(undefined8 *)(*param_1 + 0x58));
    ossl_quic_reactor_tick(uVar5,0);
LAB_00101bb2:
    uVar5 = ossl_quic_channel_get_qsm(*(undefined8 *)(lVar1 + 0xa0));
    lVar4 = ossl_quic_stream_map_get_by_id(uVar5,uVar6);
    if (lVar4 != 0) goto LAB_00101ad0;
    if (param_2 != 0) goto LAB_00101bda;
    iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0));
    if (iVar3 != 0) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101d75;
      uVar7 = 0xcf;
      uVar5 = 0x848;
      goto LAB_00101a81;
    }
    iVar3 = ossl_quic_obj_blocking(*param_1);
    if (iVar3 != 0) {
      uVar5 = *(undefined8 *)(*param_1 + 0x58);
      local_70 = 0;
      local_78 = lVar1;
      local_68 = param_1;
      local_60 = uVar6;
      ossl_quic_engine_set_inhibit_tick(uVar5,0);
      uVar5 = ossl_quic_engine_get0_reactor(uVar5);
      iVar3 = ossl_quic_reactor_block_until_pred(uVar5,quic_wait_for_stream,&local_78,0);
      if (iVar3 == 0) {
        uVar5 = quic_raise_non_normal_error_constprop_0
                          (param_1,"ssl/quic/quic_impl.c",0x856,"qc_wait_for_default_xso_for_read",
                           0xc0103,0);
      }
      else {
        if (iVar3 < 0) goto LAB_00101bda;
        lVar4 = local_70;
        if (local_70 != 0) goto LAB_00101ad0;
        uVar5 = 0;
      }
      goto LAB_00101b3f;
    }
    if (*(int *)((long)param_1 + 0x34) == 0) {
LAB_00101bda:
      uVar5 = 0;
    }
    else if ((int)param_1[5] == 0) {
      if (param_1[3] == 0) goto LAB_00101bda;
      *(undefined4 *)(param_1[3] + 0x178) = 2;
      uVar5 = 0;
    }
    else {
      if (param_1[4] == 0) goto LAB_00101bda;
      *(undefined4 *)(param_1[4] + 0xb8) = 2;
      uVar5 = 0;
    }
  }
  else {
LAB_00101ad0:
    uVar5 = ossl_quic_channel_get_statm(*(undefined8 *)(lVar1 + 0xa0));
    ossl_statm_get_rtt_info(uVar5,local_58);
    uVar5 = ossl_quic_channel_get_qsm(*(undefined8 *)(lVar1 + 0xa0));
    ossl_quic_stream_map_remove_from_accept_queue(uVar5,lVar4,local_58[0]);
    uVar5 = create_xso_from_stream(lVar1,lVar4);
    qc_set_default_xso(lVar1,uVar5,0);
    if (*(long *)(lVar1 + 0xb0) == 0) {
      uVar5 = quic_raise_non_normal_error_constprop_0
                        (param_1,"ssl/quic/quic_impl.c",0x86b,"qc_wait_for_default_xso_for_read",
                         0xc0103,0);
    }
    else {
      *(byte *)(lVar1 + 0x150) = *(byte *)(lVar1 + 0x150) | 0x10;
      qc_update_reject_policy(lVar1);
      uVar5 = 1;
    }
  }
LAB_00101b3f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00101d75:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong quic_do_handshake(long *param_1)

{
  void *parg;
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  BIO *bp;
  undefined8 uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  lVar1 = param_1[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_quic_channel_is_handshake_complete(*(undefined8 *)(lVar1 + 0xa0));
  if (iVar3 != 0) goto LAB_00101db3;
  if ((*(byte *)(lVar1 + 0x150) & 0x20) == 0) {
    iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0));
    if (iVar3 == 0) {
      if ((*(byte *)(lVar1 + 0x150) >> 1 & 1) == (*(byte *)(lVar1 + 0x150) >> 2 & 1)) {
        uVar7 = *(undefined8 *)(*param_1 + 0x60);
        lVar6 = ossl_quic_port_get_net_rbio(uVar7);
        bp = (BIO *)ossl_quic_port_get_net_wbio(uVar7);
        if ((lVar6 == 0) || (bp == (BIO *)0x0)) {
          quic_raise_non_normal_error_constprop_0
                    (param_1,"ssl/quic/quic_impl.c",0x740,"quic_do_handshake",0x80,0);
          goto LAB_00101fe0;
        }
        if ((*(byte *)(lVar1 + 0x150) & 1) == 0) {
          iVar3 = ossl_quic_port_is_addressed_w(uVar7);
          if (iVar3 != 0) {
            parg = (void *)(lVar1 + 0xb8);
            iVar3 = BIO_ADDR_family(parg);
            if (iVar3 == 0) {
              lVar6 = BIO_ctrl(bp,0x5d,0,parg);
              if ((int)lVar6 < 1) {
                BIO_ADDR_clear(parg);
              }
              else {
                ossl_quic_channel_set_peer_addr(*(undefined8 *)(lVar1 + 0xa0));
              }
            }
          }
          if ((*(byte *)(lVar1 + 0x150) & 1) == 0) {
            iVar3 = ossl_quic_port_is_addressed_w(uVar7);
            if (iVar3 != 0) {
              iVar3 = BIO_ADDR_family(lVar1 + 0xb8);
              if (iVar3 == 0) {
                quic_raise_non_normal_error_constprop_0
                          (param_1,"ssl/quic/quic_impl.c",0x760,"quic_do_handshake",0x15a,0);
                goto LAB_00101fe0;
              }
            }
          }
        }
        lVar6 = param_1[3];
        if ((*(byte *)(lVar6 + 0x150) & 1) != 0) goto LAB_00101e6c;
        iVar3 = ossl_quic_channel_set_peer_addr(*(undefined8 *)(lVar6 + 0xa0));
        if (iVar3 == 0) {
          quic_raise_non_normal_error_constprop_0
                    (param_1,"ssl/quic/quic_impl.c",0x70d,"ensure_channel_started",0xc0103,
                     "failed to configure channel");
          goto LAB_00101fe0;
        }
        iVar3 = ossl_quic_channel_start(*(undefined8 *)(lVar6 + 0xa0));
        if (iVar3 == 0) {
          ossl_quic_channel_restore_err_state(*(undefined8 *)(lVar6 + 0xa0));
          quic_raise_non_normal_error_constprop_0
                    (param_1,"ssl/quic/quic_impl.c",0x714,"ensure_channel_started",0xc0103,
                     "failed to start channel");
          goto LAB_00101fe0;
        }
        if ((*(byte *)(lVar6 + 0x150) & 8) != 0) {
          iVar3 = ossl_quic_thread_assist_init_start(lVar6 + 0x128);
          if (iVar3 == 0) {
            quic_raise_non_normal_error_constprop_0
                      (param_1,"ssl/quic/quic_impl.c",0x71c,"ensure_channel_started",0xc0103,
                       "failed to start assist thread");
            goto LAB_00101fe0;
          }
        }
LAB_00101e6c:
        *(byte *)(lVar6 + 0x150) = *(byte *)(lVar6 + 0x150) | 1;
        uVar4 = ossl_quic_channel_is_handshake_complete(*(undefined8 *)(lVar1 + 0xa0));
        uVar8 = (ulong)uVar4;
        if (uVar4 == 0) {
          iVar3 = ossl_quic_obj_blocking(*param_1);
          if (iVar3 == 0) {
            lVar6 = *param_1;
            do {
              bVar2 = *(byte *)(lVar6 + 0x70) >> 5;
              if ((bVar2 & 3) != 0) {
                if ((bVar2 & 3) == 2) goto LAB_00101ecd;
                break;
              }
              lVar6 = *(long *)(lVar6 + 0x40);
            } while (lVar6 != 0);
            uVar7 = ossl_quic_engine_get0_reactor(*(undefined8 *)(*param_1 + 0x58));
            ossl_quic_reactor_tick(uVar7);
LAB_00101ecd:
            iVar3 = ossl_quic_channel_is_handshake_complete(*(undefined8 *)(lVar1 + 0xa0));
            if (iVar3 != 0) goto LAB_00101db3;
            iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0));
            if (iVar3 == 0) {
              iVar3 = ossl_quic_obj_desires_blocking(lVar1);
              if (iVar3 != 0) {
                ossl_quic_engine_update_poll_descriptors(*(undefined8 *)(lVar1 + 0x58));
              }
              goto LAB_00101f10;
            }
            uVar8 = 0;
            quic_raise_non_normal_error_constprop_0
                      (param_1,"ssl/quic/quic_impl.c",0x778,"quic_do_handshake",0xcf,0);
          }
          else {
LAB_00101f10:
            iVar3 = ossl_quic_obj_blocking(*param_1);
            if (iVar3 == 0) {
              iVar3 = SSL_want(*(SSL **)(lVar1 + 0x78));
              if ((iVar3 - 7U < 2) || (iVar3 == 4)) {
LAB_00101fb2:
                iVar3 = SSL_get_error(*(SSL **)(lVar1 + 0x78),0);
                if (*(int *)((long)param_1 + 0x34) != 0) {
                  if ((int)param_1[5] == 0) {
                    if (param_1[3] != 0) {
                      *(int *)(param_1[3] + 0x178) = iVar3;
                    }
                  }
                  else if (param_1[4] != 0) {
                    *(int *)(param_1[4] + 0xb8) = iVar3;
                  }
                }
              }
              else if (*(int *)((long)param_1 + 0x34) != 0) {
                if ((int)param_1[5] == 0) {
                  if (param_1[3] != 0) {
                    *(undefined4 *)(param_1[3] + 0x178) = 2;
                  }
                }
                else if (param_1[4] != 0) {
                  *(undefined4 *)(param_1[4] + 0xb8) = 2;
                }
              }
              goto LAB_00101fe0;
            }
            uVar7 = *(undefined8 *)(*param_1 + 0x58);
            local_38 = lVar1;
            ossl_quic_engine_set_inhibit_tick(uVar7,0);
            uVar7 = ossl_quic_engine_get0_reactor(uVar7);
            iVar3 = ossl_quic_reactor_block_until_pred(uVar7,quic_handshake_wait,&local_38,0);
            if ((*(byte *)(lVar1 + 0x150) & 0x20) == 0) {
              iVar5 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar1 + 0xa0));
              if (iVar5 == 0) {
                iVar5 = ossl_quic_channel_is_active(*(undefined8 *)(lVar1 + 0xa0));
                if (iVar5 != 0) {
                  if (0 < iVar3) {
                    iVar3 = SSL_want(*(SSL **)(lVar1 + 0x78));
                    if ((1 < iVar3 - 7U) && (uVar8 = 1, iVar3 != 4)) goto LAB_00101db9;
                    goto LAB_00101fb2;
                  }
                  quic_raise_non_normal_error_constprop_0
                            (param_1,"ssl/quic/quic_impl.c",0x794,"quic_do_handshake",0xc0103,0);
                  goto LAB_00101fe0;
                }
              }
            }
            quic_raise_non_normal_error_constprop_0
                      (param_1,"ssl/quic/quic_impl.c",0x791,"quic_do_handshake",0xcf,0);
          }
        }
        else {
LAB_00101db3:
          uVar8 = 1;
        }
      }
      else {
        quic_raise_non_normal_error_constprop_0
                  (param_1,"ssl/quic/quic_impl.c",0x737,"quic_do_handshake",0x80106,0);
LAB_00101fe0:
        uVar8 = 0xffffffff;
      }
LAB_00101db9:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar8;
      }
      goto LAB_00102369;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar8 = quic_raise_non_normal_error_constprop_0
                      (param_1,"ssl/quic/quic_impl.c",0x734,"quic_do_handshake",0xcf,0);
    return uVar8;
  }
LAB_00102369:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 expect_quic_as(int *param_1,undefined1 (*param_2) [16],uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = param_3 & 0x20;
  if ((param_3 & 8) != 0) {
    param_3 = param_3 | 2;
  }
  *(undefined8 *)param_2[2] = 0;
  *(undefined8 *)(param_2[2] + 8) = 0;
  *(undefined4 *)param_2[3] = 0;
  *param_2 = (undefined1  [16])0x0;
  *(uint *)(param_2[3] + 4) = (uint)((param_3 & 0x40) != 0);
  param_2[1] = (undefined1  [16])0x0;
  if (param_1 == (int *)0x0) {
    quic_raise_non_normal_error_constprop_0
              (0,"ssl/quic/quic_impl.c",0x10d,"expect_quic_as",0xc0102,0);
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0x82) {
    if ((param_3 & 4) == 0) {
LAB_00102578:
      wrong_type_isra_0(param_3);
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x1e);
    *(int **)*param_2 = param_1;
    *(undefined8 *)(*param_2 + 8) = uVar2;
    *(int **)param_2[1] = param_1;
    *(undefined4 *)(param_2[2] + 0xc) = 1;
joined_r0x00102568:
    if (uVar5 == 0) {
      return 1;
    }
    if ((param_3 & 0x40) == 0) {
      uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*(long *)*param_2 + 0x58));
      ossl_crypto_mutex_lock(uVar2);
      return 1;
    }
LAB_0010248c:
    qctx_lock_for_io(param_2);
    return 1;
  }
  if (0x82 < iVar1) {
    if (iVar1 != 0x83) {
LAB_001024a0:
      quic_raise_non_normal_error_constprop_0
                (0,"ssl/quic/quic_impl.c",0x168,"expect_quic_as",0xc0103,0);
      return 0;
    }
    if ((param_3 & 0x80) == 0) goto LAB_00102578;
    *(int **)*param_2 = param_1;
    *(int **)(*param_2 + 8) = param_1;
    *(undefined4 *)param_2[3] = 1;
    if (uVar5 == 0) {
      return 1;
    }
    if ((param_3 & 0x40) == 0) {
      uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(param_1 + 0x16));
      ossl_crypto_mutex_lock(uVar2);
      return 1;
    }
    goto LAB_0010248c;
  }
  if (iVar1 != 0x80) {
    if (iVar1 != 0x81) goto LAB_001024a0;
    if ((param_3 & 2) == 0) goto LAB_00102578;
    lVar3 = *(long *)(param_1 + 0x1e);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
    uVar4 = *(undefined8 *)(lVar3 + 0x88);
    *(int **)*param_2 = param_1;
    *(undefined8 *)(*param_2 + 8) = uVar4;
    *(undefined8 *)param_2[1] = uVar2;
    *(long *)(param_2[1] + 8) = lVar3;
    *(int **)param_2[2] = param_1;
    *(undefined4 *)(param_2[2] + 8) = 1;
    goto joined_r0x00102568;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x22);
  *(int **)*param_2 = param_1;
  *(undefined8 *)(*param_2 + 8) = uVar2;
  *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + 0x20);
  *(int **)(param_2[1] + 8) = param_1;
  if ((param_3 & 8) == 0) {
    lVar3 = *(long *)(param_1 + 0x2c);
    if ((param_3 & 1) == 0) {
      if ((lVar3 == 0) || ((param_3 & 2) == 0)) goto LAB_00102578;
      *(long *)param_2[2] = lVar3;
      if (uVar5 == 0) {
        return 1;
      }
      if ((param_3 & 0x40) == 0) goto LAB_001025e2;
      qctx_lock_for_io(param_2);
    }
    else {
      *(long *)param_2[2] = lVar3;
      if (uVar5 == 0) {
        return 1;
      }
      if ((param_3 & 0x40) != 0) goto LAB_0010248c;
LAB_001025e2:
      uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*(long *)*param_2 + 0x58));
      ossl_crypto_mutex_lock(uVar2);
    }
  }
  else {
    if ((param_3 & 0x40) == 0) {
      uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(param_1 + 0x16));
      ossl_crypto_mutex_lock(uVar2);
    }
    else {
      qctx_lock_for_io(param_2);
    }
    lVar3 = *(long *)(param_1 + 0x2c);
    if (lVar3 == 0) {
      if (((*(byte *)(param_1 + 0x54) & 0x20) != 0) ||
         (iVar1 = ossl_quic_channel_is_term_any(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) {
        uVar2 = 0;
        quic_raise_non_normal_error_constprop_0
                  (param_2,"ssl/quic/quic_impl.c",0x13d,"expect_quic_as",0xcf,0);
        goto LAB_00102604;
      }
      iVar1 = quic_do_handshake(param_2);
      if (iVar1 < 1) goto LAB_00102747;
      lVar3 = *(long *)(param_2[1] + 8);
      if (((*(byte *)(lVar3 + 0x150) & 0x10) == 0) && (*(int *)(lVar3 + 0x154) != 0)) {
        uVar2 = quic_conn_stream_new(param_2,*(int *)(lVar3 + 0x154) == 2,0);
        qc_set_default_xso(lVar3,uVar2,0);
        if (*(long *)(lVar3 + 0xb0) == 0) {
          iVar1 = quic_raise_non_normal_error_constprop_0
                            (param_2,"ssl/quic/quic_impl.c",0x7f5,
                             "qc_try_create_default_xso_for_write",0xc0103,0);
          goto LAB_001027a3;
        }
        *(byte *)(lVar3 + 0x150) = *(byte *)(lVar3 + 0x150) | 0x10;
        qc_update_reject_policy(lVar3);
      }
      else {
        iVar1 = quic_raise_non_normal_error_constprop_0
                          (param_2,"ssl/quic/quic_impl.c",0x7eb,
                           "qc_try_create_default_xso_for_write",0x163,0);
LAB_001027a3:
        if (iVar1 == 0) {
          uVar2 = 0;
          goto LAB_00102604;
        }
      }
      lVar3 = *(long *)(param_1 + 0x2c);
      if ((param_3 & 1) == 0) {
        if (lVar3 != 0) goto LAB_0010252f;
        goto LAB_00102740;
      }
    }
    else if ((param_3 & 1) == 0) {
LAB_0010252f:
      if ((param_3 & 2) == 0) {
LAB_00102740:
        wrong_type_isra_0(param_3);
LAB_00102747:
        uVar2 = 0;
        goto LAB_00102604;
      }
    }
    *(long *)param_2[2] = lVar3;
  }
  if (uVar5 != 0) {
    return 1;
  }
  uVar2 = 1;
LAB_00102604:
  uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(*(long *)*param_2 + 0x58));
  ossl_crypto_mutex_unlock(uVar4);
  return uVar2;
}



ulong quic_mask_or_options(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_78 [3];
  long local_60;
  long local_58;
  int local_50;
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_78,3);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    if (local_50 == 0) {
      SSL_clear_options(*(undefined8 *)(local_60 + 0x78),param_2 & 0x3df6ffb85);
      SSL_set_options(*(undefined8 *)(local_60 + 0x78),param_3 & 0x3df6ffb85);
      uVar5 = (~param_2 & *(ulong *)(local_60 + 0x160) | param_3) & 0x3df6ffb87;
      *(ulong *)(local_60 + 0x160) = uVar5;
    }
    else {
      uVar5 = *(ulong *)(local_60 + 0x160);
    }
    if (local_58 != 0) {
      param_3 = ~param_2 & *(ulong *)(local_58 + 0xb0) | param_3;
      uVar4 = (uint)(param_3 >> 1) & 1;
      *(ulong *)(local_58 + 0xb0) = (ulong)((uint)param_3 & 0xde0fa987);
      lVar3 = *(long *)(local_58 + 0x80);
      if (*(long *)(lVar3 + 0x78) != 0) {
        ossl_quic_rstream_set_cleanse(*(long *)(lVar3 + 0x78),uVar4);
        lVar3 = *(long *)(local_58 + 0x80);
      }
      if (*(long *)(lVar3 + 0x70) != 0) {
        ossl_quic_sstream_set_cleanse(*(long *)(lVar3 + 0x70),uVar4);
      }
      if (local_50 != 0) {
        uVar5 = *(ulong *)(local_58 + 0xb0);
      }
    }
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_quic_pending_int(undefined8 param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  undefined4 uStack_5c;
  long local_58 [3];
  long local_40;
  long local_38;
  long local_20;
  
  uVar6 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = expect_quic_as(param_1,local_58,3);
  if (iVar3 == 0) goto LAB_00102982;
  uVar5 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
  ossl_crypto_mutex_lock(uVar5);
  if ((*(byte *)(local_40 + 0x150) & 1) == 0) {
LAB_00102b06:
    uVar6 = 0;
  }
  else {
    if (local_38 == 0) {
      iVar3 = qc_wait_for_default_xso_for_read(local_58,1);
      if (iVar3 == 0) {
        quic_raise_non_normal_error_constprop_0
                  (local_58,"ssl/quic/quic_impl.c",0xc27,"ossl_quic_pending_int",0x163,0);
        goto LAB_00102b06;
      }
      local_38 = *(long *)(local_40 + 0xb0);
    }
    lVar2 = *(long *)(local_38 + 0x80);
    if (lVar2 == 0) {
      uVar6 = 0;
      quic_raise_non_normal_error_constprop_0
                (local_58,"ssl/quic/quic_impl.c",0xc2d,"ossl_quic_pending_int",0xc0103,0);
    }
    else {
      bVar1 = *(byte *)(lVar2 + 0x102);
      local_64 = 0;
      if (param_2 == 0) {
        uVar6 = 0;
        if (((byte)(bVar1 - 1) < 3) &&
           (iVar3 = ossl_quic_rstream_available(*(undefined8 *)(lVar2 + 0x78),&local_60,&local_64),
           iVar3 != 0)) {
          uVar6 = (ulong)local_60;
        }
      }
      else {
        if (bVar1 < 4) {
          if (bVar1 != 0) {
            iVar4 = ossl_quic_rstream_available(*(undefined8 *)(lVar2 + 0x78),&local_60,&local_64);
            iVar3 = local_64;
            if ((iVar4 != 0) && (CONCAT44(uStack_5c,local_60) != 0)) {
              iVar3 = local_60;
            }
            if (iVar3 != 0) goto LAB_00102aa4;
          }
LAB_00102a3f:
          iVar3 = ossl_quic_channel_has_pending(*(undefined8 *)(local_40 + 0xa0));
          if (iVar3 == 0) {
            iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_40 + 0xa0));
            uVar6 = (ulong)(iVar3 != 0);
            goto LAB_00102a7d;
          }
        }
        else if (bVar1 != 5) goto LAB_00102a3f;
LAB_00102aa4:
        uVar6 = 1;
      }
    }
  }
LAB_00102a7d:
  uVar5 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
  ossl_crypto_mutex_unlock(uVar5);
LAB_00102982:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



uint quic_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
              undefined4 param_5)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80;
  long local_78 [3];
  long local_60;
  long local_58;
  int local_50;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  uVar3 = expect_quic_as(param_1,local_78,3);
  if (uVar3 == 0) goto LAB_00102bc9;
  uVar5 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
  ossl_crypto_mutex_lock(uVar5);
  local_44 = 1;
  if (local_50 == 0) {
    if (local_60 != 0) {
      *(undefined4 *)(local_60 + 0x178) = 0;
    }
LAB_00102c2e:
    iVar4 = quic_do_handshake(local_78);
    if (0 < iVar4) goto LAB_00102c3e;
LAB_00102e38:
    uVar3 = 0;
  }
  else {
    if (local_58 == 0) goto LAB_00102c2e;
    *(undefined4 *)(local_58 + 0xb8) = 0;
    iVar4 = quic_do_handshake(local_78);
    if (iVar4 < 1) goto LAB_00102e38;
LAB_00102c3e:
    if (local_58 == 0) {
      uVar3 = qc_wait_for_default_xso_for_read(local_78,0);
      if (uVar3 == 0) goto LAB_00102d05;
      local_58 = *(long *)(local_60 + 0xb0);
    }
    uVar3 = quic_read_actual(local_78,*(undefined8 *)(local_58 + 0x80),param_2,param_3,param_4,
                             param_5);
    if (uVar3 != 0) {
      bVar2 = *(byte *)(local_60 + 0x150) & 0x20;
      if (*param_4 == 0) {
        if ((bVar2 == 0) &&
           (iVar4 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_60 + 0xa0)), iVar4 == 0)) {
          iVar4 = ossl_quic_obj_blocking(local_78[0]);
          lVar6 = local_78[0];
          if (iVar4 == 0) {
            do {
              bVar2 = *(byte *)(lVar6 + 0x70) >> 5;
              if ((bVar2 & 3) != 0) {
                if ((bVar2 & 3) == 2) goto LAB_00102da2;
                break;
              }
              plVar1 = (long *)(lVar6 + 0x40);
              lVar6 = *plVar1;
            } while (*plVar1 != 0);
            uVar5 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_78[0] + 0x58));
            ossl_quic_reactor_tick(uVar5,0);
LAB_00102da2:
            uVar3 = quic_read_actual(local_78,*(undefined8 *)(local_58 + 0x80),param_2,param_3,
                                     param_4,param_5);
            if ((uVar3 != 0) && (uVar3 = 1, *param_4 == 0)) {
              if (local_44 != 0) {
                if (local_50 != 0) {
                  uVar3 = 0;
                  if (local_58 != 0) {
                    *(undefined4 *)(local_58 + 0xb8) = 2;
                    uVar3 = 0;
                  }
                  goto LAB_00102d05;
                }
                if (local_60 != 0) {
                  *(undefined4 *)(local_60 + 0x178) = 2;
                }
              }
              uVar3 = 0;
            }
          }
          else {
            local_a0 = *(undefined8 *)(local_58 + 0x80);
            uVar5 = *(undefined8 *)(local_78[0] + 0x58);
            local_a8 = local_78;
            local_98 = param_2;
            local_90 = param_3;
            local_88 = param_4;
            local_80 = param_5;
            ossl_quic_engine_set_inhibit_tick(uVar5,0);
            uVar5 = ossl_quic_engine_get0_reactor(uVar5);
            uVar3 = ossl_quic_reactor_block_until_pred(uVar5,quic_read_again,&local_a8,0);
            if (uVar3 == 0) {
              uVar3 = quic_raise_non_normal_error_constprop_0
                                (local_78,"ssl/quic/quic_impl.c",0xbe5,"quic_read",0xc0103,0);
            }
            else {
              uVar3 = ~uVar3 >> 0x1f;
            }
          }
        }
        else {
          uVar3 = quic_raise_non_normal_error_constprop_0
                            (local_78,"ssl/quic/quic_impl.c",0xbd4,"quic_read",0xcf,0);
        }
      }
      else {
        if ((bVar2 == 0) &&
           (iVar4 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_60 + 0xa0)),
           lVar6 = local_78[0], iVar4 == 0)) {
          do {
            bVar2 = *(byte *)(lVar6 + 0x70) >> 5;
            if ((bVar2 & 3) != 0) {
              uVar3 = 1;
              if ((bVar2 & 3) == 2) goto LAB_00102d05;
              break;
            }
            lVar6 = *(long *)(lVar6 + 0x40);
          } while (lVar6 != 0);
          uVar5 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_78[0] + 0x58));
          ossl_quic_reactor_tick(uVar5,0);
        }
        uVar3 = 1;
      }
    }
  }
LAB_00102d05:
  uVar5 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
  ossl_crypto_mutex_unlock(uVar5);
LAB_00102bc9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void * ossl_quic_new(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *ptr;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  byte bVar7;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  lVar4 = param_1[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OSSL_QUIC_server_method();
  if (lVar4 == lVar3) {
    quic_raise_non_normal_error_constprop_0
              (0,"ssl/quic/quic_impl.c",0x239,"ossl_quic_new",0xc0101,0);
  }
  else {
    ptr = (void *)CRYPTO_zalloc(0x180,"ssl/quic/quic_impl.c",0x23d);
    if (ptr == (void *)0x0) {
      quic_raise_non_normal_error_constprop_0
                (0,"ssl/quic/quic_impl.c",0x23f,"ossl_quic_new",0x8000f,0);
    }
    else {
      lVar4 = ossl_crypto_mutex_new();
      *(long *)((long)ptr + 0xa8) = lVar4;
      if (lVar4 == 0) {
        quic_raise_non_normal_error_constprop_0
                  (0,"ssl/quic/quic_impl.c",0x246,"ossl_quic_new",0x8000f,0);
      }
      else {
        uVar5 = TLS_method();
        puVar6 = (uint *)ossl_ssl_connection_new_int(param_1,ptr,uVar5);
        *(uint **)((long)ptr + 0x78) = puVar6;
        if ((puVar6 == (uint *)0x0) ||
           ((*puVar6 != 0 &&
            (((*puVar6 & 0x80) == 0 ||
             (puVar6 = (uint *)ossl_quic_obj_get0_handshake_layer(), puVar6 == (uint *)0x0)))))) {
          quic_raise_non_normal_error_constprop_0
                    (0,"ssl/quic/quic_impl.c",0x24e,"ossl_quic_new",0xc0103,0);
        }
        else {
          uVar1 = param_1[0xda];
          *(ulong *)(puVar6 + 0x58) = *(ulong *)(puVar6 + 0x58) | 0x6000;
          bVar7 = *(byte *)((long)ptr + 0x150);
          *(ulong *)(puVar6 + 0x26c) = *(ulong *)(puVar6 + 0x26c) & 0x3df6ffb85;
          local_58 = (undefined1  [16])0x0;
          local_48 = (undefined1  [16])0x0;
          local_78 = *param_1;
          puVar6[0x2eb] = 0;
          uStack_70 = param_1[0x8e];
          local_60 = 0;
          *(byte *)((long)ptr + 0x150) =
               (byte)((int)CONCAT71(0x3df6ffb,(uVar1 & 4) != 0) << 3) | bVar7 & 0xf1;
          local_68 = *(undefined8 *)((long)ptr + 0xa8);
          local_38 = 0;
          if (((uVar1 & 4) != 0) || ((~(uint)uVar1 & 10) == 0)) {
            local_60 = 1;
          }
          lVar4 = ossl_quic_engine_new(&local_78);
          *(long *)((long)ptr + 0x90) = lVar4;
          if (lVar4 == 0) {
            quic_raise_non_normal_error_constprop_0
                      (0,"ssl/quic/quic_impl.c",0x6eb,"create_channel",0xc0103,0);
          }
          else {
            local_48._8_8_ = param_1;
            lVar4 = ossl_quic_engine_create_port(lVar4,local_58);
            *(long *)((long)ptr + 0x98) = lVar4;
            if (lVar4 == 0) {
              quic_raise_non_normal_error_constprop_0
                        (0,"ssl/quic/quic_impl.c",0x6f2,"create_channel",0xc0103,0);
              ossl_quic_engine_free(*(undefined8 *)((long)ptr + 0x90));
            }
            else {
              lVar4 = ossl_quic_port_create_outgoing(lVar4,*(undefined8 *)((long)ptr + 0x78));
              *(long *)((long)ptr + 0xa0) = lVar4;
              if (lVar4 == 0) {
                quic_raise_non_normal_error_constprop_0
                          (0,"ssl/quic/quic_impl.c",0x6f9,"create_channel",0xc0103,0);
                ossl_quic_port_free(*(undefined8 *)((long)ptr + 0x98));
                ossl_quic_engine_free(*(undefined8 *)((long)ptr + 0x90));
              }
              else {
                ossl_quic_channel_set_msg_callback(lVar4,param_1[0x2e],ptr);
                ossl_quic_channel_set_msg_callback_arg
                          (*(undefined8 *)((long)ptr + 0xa0),param_1[0x2f]);
                iVar2 = ossl_quic_obj_init(ptr,param_1,0x80,0,*(undefined8 *)((long)ptr + 0x90),
                                           *(undefined8 *)((long)ptr + 0x98));
                if (iVar2 != 0) {
                  bVar7 = 1;
                  *(undefined4 *)((long)ptr + 0x154) = 1;
                  *(undefined4 *)((long)ptr + 0x158) =
                       *(undefined4 *)(*(long *)((long)ptr + 8) + 0x140);
                  *(ulong *)((long)ptr + 0x160) =
                       *(ulong *)(*(long *)((long)ptr + 8) + 0x138) & 0x3df6ffb87;
                  *(undefined4 *)((long)ptr + 0x168) = 0;
                  *(undefined4 *)((long)ptr + 0x178) = 0;
                  if (*(long *)((long)ptr + 0xb0) == 0) {
                    bVar7 = *(byte *)((long)ptr + 0x150) >> 4 & 1;
                  }
                  ossl_quic_channel_set_incoming_stream_auto_reject
                            (*(undefined8 *)((long)ptr + 0xa0),bVar7,
                             *(undefined8 *)((long)ptr + 0x170));
                  goto LAB_001031ba;
                }
                quic_raise_non_normal_error_constprop_0
                          (0,"ssl/quic/quic_impl.c",0x26b,"ossl_quic_new",0xc0103,0);
              }
            }
          }
        }
      }
      qc_cleanup(ptr,0);
      CRYPTO_free(ptr);
    }
  }
  ptr = (void *)0x0;
LAB_001031ba:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptr;
}



void ossl_quic_free(undefined8 param_1)

{
  SSL *ssl;
  X509_VERIFY_PARAM *pXVar1;
  int iVar2;
  undefined8 uVar3;
  BIO *pBVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long local_58;
  SSL *local_50;
  X509_VERIFY_PARAM *local_48;
  int local_40;
  int local_3c;
  int local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = expect_quic_as(param_1,&local_68,0x87);
  if (iVar2 == 0) goto LAB_001034b0;
  if (local_38 != 0) {
    ossl_quic_engine_free(*(undefined8 *)(local_60 + 0x78));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      ossl_crypto_mutex_free(local_60 + 0x80);
      return;
    }
    goto LAB_001036c8;
  }
  if (local_3c == 0) {
    uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68 + 0x58));
    ossl_crypto_mutex_lock(uVar3);
    if (local_40 == 0) {
      ssl = (SSL *)local_50->param;
      if (ssl != (SSL *)0x0) {
        uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68 + 0x58));
        ossl_crypto_mutex_unlock(uVar3);
        SSL_free(ssl);
        uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68 + 0x58));
        ossl_crypto_mutex_lock(uVar3);
        local_50->param = (X509_VERIFY_PARAM *)0x0;
      }
      if ((~*(byte *)&local_50->info_callback & 9) == 0) {
        ossl_quic_thread_assist_wait_stopped(local_50->sid_ctx + 0x1c);
        ossl_quic_thread_assist_cleanup(local_50->sid_ctx + 0x1c);
      }
      qc_cleanup(local_50,1);
      if (local_50->s3 != (ssl3_state_st *)0x0) {
        SSL_free((SSL *)local_50->s3);
      }
      local_50 = (SSL *)local_50->d1;
      if ((dtls1_state_st *)local_50 != (dtls1_state_st *)0x0) goto LAB_0010348d;
    }
    else {
      local_50->verify_callback = local_50->verify_callback + -1;
      uVar5 = local_48[2].inh_flags;
      if ((byte)(*(char *)(uVar5 + 0x101) - 1U) < 2) {
        iVar2 = ossl_quic_sstream_get_final_size(*(undefined8 *)(uVar5 + 0x70),0);
        uVar5 = local_48[2].inh_flags;
        if (iVar2 == 0) {
          uVar3 = ossl_quic_channel_get_qsm(local_50->msg_callback_arg);
          ossl_quic_stream_map_reset_stream_send_part(uVar3,uVar5,0);
          uVar5 = local_48[2].inh_flags;
        }
      }
      if ((byte)(*(char *)(uVar5 + 0x102) - 1U) < 2) {
        uVar3 = ossl_quic_channel_get_qsm(local_50->msg_callback_arg);
        ossl_quic_stream_map_stop_sending_recv_part(uVar3,uVar5,0);
        uVar5 = local_48[2].inh_flags;
      }
      *(byte *)(uVar5 + 0x104) = *(byte *)(uVar5 + 0x104) | 0x20;
      uVar3 = ossl_quic_channel_get_qsm(local_50->msg_callback_arg);
      ossl_quic_stream_map_update_state(uVar3,uVar5);
      pXVar1 = local_50->param;
      uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68 + 0x58));
      ossl_crypto_mutex_unlock(uVar3);
      if (local_48 != pXVar1) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001036c8;
        goto LAB_001034a1;
      }
    }
LAB_001034b0:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)(local_58 + 0x88);
    pBVar4 = (BIO *)ossl_quic_port_get_net_rbio(uVar3);
    BIO_free_all(pBVar4);
    pBVar4 = (BIO *)ossl_quic_port_get_net_wbio(uVar3);
    BIO_free_all(pBVar4);
    ossl_quic_port_drop_incoming(*(undefined8 *)(local_58 + 0x88));
    ossl_quic_port_free(*(undefined8 *)(local_58 + 0x88));
    local_50 = *(SSL **)(local_58 + 0x78);
    if ((dtls1_state_st *)local_50 == (dtls1_state_st *)0x0) {
      ossl_quic_engine_free(*(undefined8 *)(local_58 + 0x80));
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        ossl_crypto_mutex_free(local_58 + 0x90);
        return;
      }
      goto LAB_001036c8;
    }
LAB_0010348d:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001034a1:
      SSL_free(local_50);
      return;
    }
  }
LAB_001036c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_deinit(void)

{
  return;
}



undefined8 ossl_quic_reset(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,0x87);
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_impl.c",0x34d,"ossl_quic_reset");
    ERR_set_error(0x14,0x8010c,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_clear(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,0x87);
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_impl.c",0x359,"ossl_quic_clear");
    ERR_set_error(0x14,0x8010c,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_init(void)

{
  ossl_quic_clear();
  return;
}



undefined8 ossl_quic_set_override_now_cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_58,0x87);
  if ((int)uVar1 != 0) {
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar1);
    ossl_quic_engine_set_time_cb(*(undefined8 *)(local_58[0] + 0x58),param_2,param_3);
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar1);
    uVar1 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_conn_force_assist_thread_wake(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,1);
  if ((iVar1 == 0) || ((~*(byte *)(local_30 + 0x150) & 9) != 0)) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    ossl_quic_thread_assist_notify_deadline_changed(local_30 + 0x128);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_set_options(undefined8 param_1,undefined8 param_2)

{
  quic_mask_or_options(param_1,0,param_2);
  return;
}



void ossl_quic_clear_options(undefined8 param_1,undefined8 param_2)

{
  quic_mask_or_options(param_1,param_2,0);
  return;
}



void ossl_quic_get_options(undefined8 param_1)

{
  quic_mask_or_options(param_1,0,0);
  return;
}



void ossl_quic_conn_set0_net_rbio(undefined8 param_1,BIO *param_2)

{
  undefined8 uVar1;
  int iVar2;
  BIO *a;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = expect_quic_as(param_1,local_58,7);
  if (iVar2 != 0) {
    uVar1 = *(undefined8 *)(local_58[0] + 0x60);
    a = (BIO *)ossl_quic_port_get_net_rbio(uVar1);
    if (param_2 != a) {
      iVar2 = ossl_quic_port_set_net_rbio(uVar1,param_2);
      if (iVar2 != 0) {
        BIO_free_all(a);
        if (param_2 != (BIO *)0x0) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            BIO_ctrl(param_2,0x66,1,(void *)0x0);
            return;
          }
          goto LAB_001039e0;
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001039e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_conn_set0_net_wbio(undefined8 param_1,BIO *param_2)

{
  undefined8 uVar1;
  int iVar2;
  BIO *a;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = expect_quic_as(param_1,local_58,7);
  if (iVar2 != 0) {
    uVar1 = *(undefined8 *)(local_58[0] + 0x60);
    a = (BIO *)ossl_quic_port_get_net_wbio(uVar1);
    if (param_2 != a) {
      iVar2 = ossl_quic_port_set_net_wbio(uVar1,param_2);
      if (iVar2 != 0) {
        BIO_free_all(a);
        if (param_2 != (BIO *)0x0) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            BIO_ctrl(param_2,0x66,1,(void *)0x0);
            return;
          }
          goto LAB_00103aa0;
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103aa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_conn_get_net_rbio(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_48 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_48,7);
  if (iVar1 == 0) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar2 = ossl_quic_port_get_net_rbio(*(undefined8 *)(local_48[0] + 0x60));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_conn_get_net_wbio(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_48 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_48,7);
  if (iVar1 == 0) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar2 = ossl_quic_port_get_net_wbio(*(undefined8 *)(local_48[0] + 0x60));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_conn_get_blocking_mode(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_48,7);
  if (iVar1 == 0) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar2 = ossl_quic_obj_blocking(local_48[0]);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_quic_conn_set_blocking_mode(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_68 [7];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_68,7);
  if (iVar1 == 0) goto LAB_00103c37;
  uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
  ossl_crypto_mutex_lock(uVar2);
  if (param_2 == 0) {
    uVar2 = 1;
LAB_00103c92:
    iVar1 = 1;
    ossl_quic_obj_set_blocking_mode(local_68[0],uVar2);
  }
  else {
    if (*(long *)(local_68[0] + 0x40) == 0) {
      ossl_quic_engine_update_poll_descriptors(*(undefined8 *)(local_68[0] + 0x58),1);
    }
    iVar1 = ossl_quic_obj_can_support_blocking(local_68[0]);
    uVar2 = 2;
    if (iVar1 != 0) goto LAB_00103c92;
    iVar1 = quic_raise_non_normal_error_constprop_0
                      (local_68,"ssl/quic/quic_impl.c",0x4d6,"ossl_quic_conn_set_blocking_mode",
                       0x8010c,0);
  }
  uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
  ossl_crypto_mutex_unlock(uVar2);
LAB_00103c37:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_conn_set_initial_peer_addr(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,auStack_58,3);
  if ((int)uVar1 != 0) {
    if ((*(byte *)(local_40 + 0x150) & 1) == 0) {
      if (param_2 != 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar1 = BIO_ADDR_copy(local_40 + 0xb8,param_2);
          return uVar1;
        }
        goto LAB_00103dd3;
      }
      BIO_ADDR_clear(local_40 + 0xb8);
      uVar1 = 1;
    }
    else {
      uVar1 = quic_raise_non_normal_error_constprop_0
                        (auStack_58,"ssl/quic/quic_impl.c",0x4f0,
                         "ossl_quic_conn_set_initial_peer_addr",0xc0101,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
LAB_00103dd3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_handle_events(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_48 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_48,0x87);
  if ((int)uVar1 != 0) {
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_lock(uVar1);
    uVar1 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_48[0] + 0x58));
    ossl_quic_reactor_tick(uVar1,0);
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar1);
    uVar1 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_quic_get_event_timeout(undefined8 param_1,ulong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_68 [7];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_68,0x87);
  if ((int)uVar1 != 0) {
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_lock(uVar1);
    uVar1 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_68[0] + 0x58));
    uVar2 = ossl_quic_reactor_get_tick_deadline(uVar1);
    if (uVar2 == 0xffffffffffffffff) {
      uVar1 = ossl_quic_engine_get0_mutex();
      ossl_crypto_mutex_unlock(uVar1);
      uVar4 = _UNK_001091f8;
      uVar2 = __LC4;
      *param_3 = 1;
      *param_2 = uVar2;
      param_2[1] = uVar4;
    }
    else {
      uVar3 = ossl_quic_engine_get_time(*(undefined8 *)(local_68[0] + 0x58));
      uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
      ossl_crypto_mutex_unlock(uVar1);
      uVar4 = uVar2 - uVar3;
      if (uVar2 < uVar3) {
        uVar4 = 0;
      }
      if (uVar4 < 0xfffffffffffffc19) {
        uVar3 = (uVar4 + 999) / 1000000000;
        uVar2 = ((uVar4 + 999) % 1000000000) / 1000;
      }
      else {
        uVar3 = 0x44b82fa09;
        uVar2 = 0xad3af;
      }
      *param_2 = uVar3;
      param_2[1] = uVar2;
      *param_3 = 0;
    }
    uVar1 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_get_rpoll_descriptor(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,7);
  if (iVar1 != 0) {
    lVar2 = ossl_quic_port_get_net_rbio(*(undefined8 *)(local_58[0] + 0x60));
    if ((param_2 != 0) && (lVar2 != 0)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        BIO_get_rpoll_descriptor(lVar2,param_2);
        return;
      }
      goto LAB_0010408b;
    }
    quic_raise_non_normal_error_constprop_0
              (local_58,"ssl/quic/quic_impl.c",0x54f,"ossl_quic_get_rpoll_descriptor",0x80106,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010408b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_get_wpoll_descriptor(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,7);
  if (iVar1 != 0) {
    lVar2 = ossl_quic_port_get_net_wbio(*(undefined8 *)(local_58[0] + 0x60));
    if ((param_2 != 0) && (lVar2 != 0)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        BIO_get_wpoll_descriptor(lVar2,param_2);
        return;
      }
      goto LAB_0010414b;
    }
    quic_raise_non_normal_error_constprop_0
              (local_58,"ssl/quic/quic_impl.c",0x562,"ossl_quic_get_wpoll_descriptor",0x80106,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010414b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_quic_get_net_read_desired(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,7);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    uVar2 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_58[0] + 0x58));
    iVar1 = ossl_quic_reactor_net_read_desired(uVar2);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_quic_get_net_write_desired(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,7);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    uVar2 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_58[0] + 0x58));
    iVar1 = ossl_quic_reactor_net_write_desired(uVar2);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_quic_conn_shutdown(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  long local_78 [3];
  long local_60;
  int local_50;
  long local_40;
  
  uVar9 = param_2 & 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = expect_quic_as(param_1,local_78,3);
  if (iVar3 != 0) {
    if (local_50 == 0) {
      uVar5 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
      ossl_crypto_mutex_lock(uVar5);
      iVar3 = ossl_quic_channel_is_terminated(*(undefined8 *)(local_60 + 0xa0));
      if (iVar3 == 0) {
        uVar5 = *(undefined8 *)(local_60 + 0xa0);
        uVar4 = 0;
        if ((param_2 & 10) == 0) {
          if ((*(byte *)(local_60 + 0x150) & 0x20) == 0) {
            uVar5 = ossl_quic_channel_get_qsm(uVar5);
            ossl_quic_stream_map_begin_shutdown_flush(uVar5);
            *(byte *)(local_60 + 0x150) = *(byte *)(local_60 + 0x150) | 0x20;
            uVar5 = ossl_quic_channel_get_qsm(*(undefined8 *)(local_60 + 0xa0));
            if ((*(byte *)(local_60 + 0x150) & 0x20) != 0) goto LAB_001045d0;
LAB_001044dd:
            lVar7 = local_78[0];
            if ((uVar9 == 0) && (iVar3 = ossl_quic_obj_blocking(local_78[0]), iVar3 != 0)) {
              uVar5 = *(undefined8 *)(local_78[0] + 0x58);
              ossl_quic_engine_set_inhibit_tick(uVar5,0);
              uVar5 = ossl_quic_engine_get0_reactor(uVar5);
              iVar3 = ossl_quic_reactor_block_until_pred(uVar5,quic_shutdown_flush_wait,local_60,0);
              if (iVar3 < 1) goto LAB_001043f0;
            }
            else {
              do {
                bVar2 = *(byte *)(lVar7 + 0x70) >> 5;
                if ((bVar2 & 3) != 0) {
                  if ((bVar2 & 3) == 2) goto LAB_00104512;
                  break;
                }
                plVar1 = (long *)(lVar7 + 0x40);
                lVar7 = *plVar1;
              } while (*plVar1 != 0);
              uVar5 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_78[0] + 0x58));
              ossl_quic_reactor_tick(uVar5,0);
            }
          }
          else {
            uVar5 = ossl_quic_channel_get_qsm(uVar5);
            if ((*(byte *)(local_60 + 0x150) & 0x20) == 0) goto LAB_001044dd;
LAB_001045d0:
            iVar3 = ossl_quic_stream_map_is_shutdown_flush_finished(uVar5);
            if (iVar3 == 0) goto LAB_001044dd;
          }
LAB_00104512:
          uVar5 = ossl_quic_channel_get_qsm(*(undefined8 *)(local_60 + 0xa0));
          if ((*(byte *)(local_60 + 0x150) & 0x20) != 0) {
            iVar3 = ossl_quic_stream_map_is_shutdown_flush_finished(uVar5);
joined_r0x00104536:
            if (iVar3 != 0) {
LAB_00104366:
              uVar5 = *(undefined8 *)(local_60 + 0xa0);
              goto LAB_0010436d;
            }
          }
        }
        else if ((param_2 & 8) == 0) {
LAB_0010436d:
          *(byte *)(local_60 + 0x150) = *(byte *)(local_60 + 0x150) | 0x20;
          uVar6 = 0;
          uVar8 = 0;
          if (param_3 != (undefined8 *)0x0) {
            uVar6 = param_3[1];
            uVar8 = *param_3;
          }
          ossl_quic_channel_local_close(uVar5,uVar8,uVar6);
          SSL_set_shutdown(*(SSL **)(local_60 + 0x78),1);
          iVar3 = ossl_quic_channel_is_terminated(*(undefined8 *)(local_60 + 0xa0));
          if (iVar3 != 0) goto LAB_001044a0;
          lVar7 = local_78[0];
          if (((uVar9 == 0) && (iVar3 = ossl_quic_obj_blocking(local_78[0]), iVar3 != 0)) &&
             ((param_2 & 1) == 0)) {
            uVar5 = *(undefined8 *)(local_78[0] + 0x58);
            ossl_quic_engine_set_inhibit_tick(uVar5,0);
            uVar5 = ossl_quic_engine_get0_reactor(uVar5);
            iVar3 = ossl_quic_reactor_block_until_pred(uVar5,quic_shutdown_wait,local_60,0);
            if (iVar3 < 1) goto LAB_001043f0;
          }
          else {
            do {
              bVar2 = *(byte *)(lVar7 + 0x70) >> 5;
              if ((bVar2 & 3) != 0) {
                if ((bVar2 & 3) == 2) goto LAB_001043e2;
                break;
              }
              plVar1 = (long *)(lVar7 + 0x40);
              lVar7 = *plVar1;
            } while (*plVar1 != 0);
            uVar5 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_78[0] + 0x58));
            ossl_quic_reactor_tick(uVar5,0);
          }
LAB_001043e2:
          uVar4 = ossl_quic_channel_is_terminated(*(undefined8 *)(local_60 + 0xa0));
        }
        else {
          iVar3 = ossl_quic_channel_is_term_any();
          if (iVar3 != 0) goto LAB_00104366;
          lVar7 = local_78[0];
          if ((uVar9 != 0) || (iVar3 = ossl_quic_obj_blocking(local_78[0]), iVar3 == 0)) {
            do {
              bVar2 = *(byte *)(lVar7 + 0x70) >> 5;
              if ((bVar2 & 3) != 0) {
                if ((bVar2 & 3) == 2) goto LAB_00104352;
                break;
              }
              plVar1 = (long *)(lVar7 + 0x40);
              lVar7 = *plVar1;
            } while (*plVar1 != 0);
            uVar5 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_78[0] + 0x58));
            ossl_quic_reactor_tick(uVar5,0);
LAB_00104352:
            iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_60 + 0xa0));
            goto joined_r0x00104536;
          }
          uVar5 = *(undefined8 *)(local_78[0] + 0x58);
          ossl_quic_engine_set_inhibit_tick(uVar5,0);
          uVar5 = ossl_quic_engine_get0_reactor(uVar5);
          iVar3 = ossl_quic_reactor_block_until_pred(uVar5,quic_shutdown_peer_wait,local_60,0);
          if (0 < iVar3) goto LAB_00104352;
        }
LAB_001043f0:
        uVar5 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
        ossl_crypto_mutex_unlock(uVar5);
      }
      else {
LAB_001044a0:
        uVar4 = 1;
        uVar5 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
        ossl_crypto_mutex_unlock(uVar5);
      }
      goto LAB_00104401;
    }
    quic_raise_non_normal_error_constprop_0
              (local_78,"ssl/quic/quic_impl.c",0x5d4,"ossl_quic_conn_shutdown",0x164,0);
  }
  uVar4 = 0xffffffff;
LAB_00104401:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_quic_ctrl(undefined8 param_1,int param_2,ulong param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_6c;
  undefined1 local_68 [24];
  long local_50;
  long local_48;
  int local_40;
  int local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_68,7);
  if (iVar1 == 0) {
switchD_001046f1_caseD_28:
    uVar3 = 0;
    goto LAB_00104702;
  }
  if (param_2 < 0x4f) {
    if (param_2 < 0x10) goto switchD_001046f1_caseD_11;
    uVar2 = (uint)param_3;
    switch(param_2) {
    case 0x10:
      if (local_3c == 0) {
        ossl_quic_channel_set_msg_callback_arg(*(undefined8 *)(local_50 + 0xa0),param_4);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = SSL_ctrl(*(SSL **)(local_50 + 0x78),0x10,param_3,param_4);
          return uVar3;
        }
        goto LAB_00104947;
      }
      uVar4 = 0x65f;
      goto LAB_001048d5;
    default:
      goto switchD_001046f1_caseD_11;
    case 0x21:
      if (local_3c != 0) {
        uVar4 = 0x63b;
        goto LAB_001048d5;
      }
      if (local_40 == 0) {
        *(uint *)(local_50 + 0x158) = *(uint *)(local_50 + 0x158) | uVar2;
      }
      if (local_48 == 0) {
LAB_001047d8:
        uVar3 = (ulong)*(uint *)(local_50 + 0x158);
      }
      else {
        if ((*(byte *)(local_48 + 0x88) & 4) != 0) {
          param_3 = (ulong)(uVar2 & 0xfffffffe);
        }
        uVar2 = (uint)param_3 | *(uint *)(local_48 + 0xa8);
        uVar3 = (ulong)uVar2;
        *(uint *)(local_48 + 0xa8) = uVar2;
      }
      break;
    case 0x28:
    case 0x29:
    case 0x34:
      goto switchD_001046f1_caseD_28;
    case 0x49:
      iVar1 = ossl_quic_get_event_timeout(param_1,param_4,&local_6c);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = (ulong)(local_6c == 0);
      }
      break;
    case 0x4a:
      iVar1 = ossl_quic_handle_events(param_1);
      uVar3 = (ulong)(iVar1 == 1) * 2 - 1;
      break;
    case 0x4e:
      if (local_3c != 0) {
        uVar4 = 0x651;
        goto LAB_001048d5;
      }
      if (local_40 == 0) {
        *(uint *)(local_50 + 0x158) = *(uint *)(local_50 + 0x158) & ~uVar2;
      }
      if (local_48 == 0) goto LAB_001047d8;
      uVar2 = ~uVar2 & *(uint *)(local_48 + 0xa8);
      uVar3 = (ulong)uVar2;
      *(uint *)(local_48 + 0xa8) = uVar2;
    }
  }
  else {
    if (param_2 - 0x7dU < 2) goto switchD_001046f1_caseD_28;
switchD_001046f1_caseD_11:
    if (local_3c == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = ossl_ctrl_internal(local_50,param_2,param_3,param_4,1);
        return uVar3;
      }
      goto LAB_00104947;
    }
    uVar4 = 0x684;
LAB_001048d5:
    iVar1 = quic_raise_non_normal_error_constprop_0
                      (local_68,"ssl/quic/quic_impl.c",uVar4,"ossl_quic_ctrl",0x8010c,0);
    uVar3 = (ulong)iVar1;
  }
LAB_00104702:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00104947:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_set_connect_state(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  int local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,3);
  if (iVar1 != 0) {
    if (((*(byte *)(local_30 + 0x150) & 1) == 0) && (local_20 == 0)) {
      *(byte *)(local_30 + 0x150) = *(byte *)(local_30 + 0x150) & 0xfb;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_set_accept_state(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  int local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,3);
  if (iVar1 != 0) {
    if (((*(byte *)(local_30 + 0x150) & 1) == 0) && (local_20 == 0)) {
      *(byte *)(local_30 + 0x150) = *(byte *)(local_30 + 0x150) | 4;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_quic_do_handshake(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_38;
  int local_30;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,3);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    local_24 = 1;
    if (local_30 == 0) {
      if (local_40 != 0) {
        *(undefined4 *)(local_40 + 0x178) = 0;
      }
    }
    else if (local_38 != 0) {
      *(undefined4 *)(local_38 + 0xb8) = 0;
    }
    iVar1 = quic_do_handshake(local_58);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_connect(undefined8 param_1)

{
  ossl_quic_set_connect_state();
  ossl_quic_do_handshake(param_1);
  return;
}



void ossl_quic_accept(undefined8 param_1)

{
  ossl_quic_set_accept_state();
  ossl_quic_do_handshake(param_1);
  return;
}



undefined8 ossl_quic_conn_stream_new(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_58,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = quic_conn_stream_new(auStack_58,param_2,1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_quic_get_error(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_38;
  int local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,3);
  if (iVar1 != 0) {
    uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar3);
    iVar2 = ossl_quic_channel_net_error(*(undefined8 *)(local_40 + 0xa0));
    if (local_30 == 0) {
      iVar1 = *(int *)(local_40 + 0x178);
    }
    else {
      iVar1 = *(int *)(local_38 + 0xb8);
    }
    uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar3);
    if (iVar2 != 0) {
      iVar1 = 5;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined4 ossl_quic_want(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_38;
  int local_30;
  long local_20;
  
  uVar3 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,3);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    if (local_30 == 0) {
      iVar1 = *(int *)(local_40 + 0x178);
    }
    else {
      iVar1 = *(int *)(local_38 + 0xb8);
    }
    uVar3 = 1;
    if (iVar1 - 2U < 0xb) {
      uVar3 = *(undefined4 *)(CSWTCH_124 + (ulong)(iVar1 - 2U) * 4);
    }
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ossl_quic_write_flags(undefined8 param_1,long param_2,long param_3,ulong param_4,long *param_5)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined4 local_b4;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  ulong local_80;
  long local_78 [3];
  long local_60;
  long local_58;
  int local_50;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_5 = 0;
  if (param_3 == 0) {
    iVar3 = expect_quic_as(param_1,local_78,3);
    if (iVar3 != 0) {
      uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
      ossl_crypto_mutex_lock(uVar6);
      local_44 = 1;
      if (local_50 == 0) {
        if (local_60 != 0) {
          *(undefined4 *)(local_60 + 0x178) = 0;
        }
        goto LAB_00104e35;
      }
      if (local_58 == 0) goto LAB_00105010;
      *(undefined4 *)(local_58 + 0xb8) = 0;
LAB_00104e41:
      uVar5 = *(uint *)(local_58 + 0xa8) & 1;
      lVar11 = local_58;
LAB_00104e4e:
      if ((param_4 & 0xfffffffe) == 0) {
        if (((*(byte *)(local_60 + 0x150) & 0x20) != 0) ||
           (iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_60 + 0xa0)), iVar3 != 0)) {
          uVar6 = 0xae8;
          pcVar7 = "ossl_quic_write_flags";
          uVar4 = 0xcf;
          goto LAB_00104e83;
        }
        iVar3 = quic_do_handshake(local_78);
        uVar4 = 0;
        if (0 < iVar3) {
          if (param_3 == 0) {
            lVar8 = local_78[0];
            if ((param_4 & 1) != 0) {
              do {
                bVar2 = *(byte *)(lVar8 + 0x70) >> 5;
                if ((bVar2 & 3) != 0) {
                  ossl_quic_sstream_fin(*(undefined8 *)(*(long *)(lVar11 + 0x80) + 0x70));
                  if ((bVar2 & 3) != 2) goto LAB_00105068;
                  goto LAB_00105088;
                }
                plVar1 = (long *)(lVar8 + 0x40);
                lVar8 = *plVar1;
              } while (*plVar1 != 0);
              ossl_quic_sstream_fin(*(undefined8 *)(*(long *)(lVar11 + 0x80) + 0x70));
LAB_00105068:
              uVar6 = ossl_quic_channel_get_reactor
                                (*(undefined8 *)(*(long *)(lVar11 + 0x78) + 0xa0));
              ossl_quic_reactor_tick(uVar6,0);
            }
LAB_00105088:
            uVar4 = 1;
          }
          else {
            iVar3 = quic_validate_for_write(lVar11,&local_b4);
            lVar8 = local_78[0];
            if (iVar3 == 0) {
              uVar4 = quic_raise_non_normal_error_constprop_0
                                (local_78,"ssl/quic/quic_impl.c",0xaf7,"ossl_quic_write_flags",
                                 local_b4,0);
            }
            else {
              iVar3 = ossl_quic_obj_blocking(local_78[0]);
              if (iVar3 == 0) {
                if (uVar5 == 0) {
                  local_a8 = 0;
                  lVar9 = param_2;
                  lVar10 = param_3;
                  if ((*(byte *)(lVar11 + 0x88) & 4) != 0) {
                    if ((((*(uint *)(lVar11 + 0xa8) & 2) == 0) &&
                        (param_2 != *(long *)(lVar11 + 0x90))) ||
                       (param_3 != *(long *)(lVar11 + 0x98))) {
                      uVar6 = 0xa45;
                      pcVar7 = "quic_write_nonblocking_aon";
                      uVar4 = 0x7f;
                      goto LAB_00104e83;
                    }
                    lVar9 = param_2 + *(long *)(lVar11 + 0xa0);
                    lVar10 = param_3 - *(long *)(lVar11 + 0xa0);
                  }
                  iVar3 = xso_sstream_append(lVar11,lVar9,lVar10,&local_a8);
                  if (iVar3 == 0) {
                    *param_5 = 0;
                    uVar4 = quic_raise_non_normal_error_constprop_0
                                      (local_78,"ssl/quic/quic_impl.c",0xa53,
                                       "quic_write_nonblocking_aon",0xc0103,0);
                  }
                  else {
                    do {
                      bVar2 = *(byte *)(lVar8 + 0x70) >> 5;
                      if ((bVar2 & 3) != 0) {
                        bVar12 = (bVar2 & 3) != 2;
                        goto LAB_00105284;
                      }
                      lVar8 = *(long *)(lVar8 + 0x40);
                    } while (lVar8 != 0);
                    bVar12 = true;
LAB_00105284:
                    quic_post_write(lVar11,local_a8 != 0,lVar10 == local_a8,param_4,bVar12);
                    if (lVar10 == local_a8) {
                      if ((*(byte *)(lVar11 + 0x88) & 4) == 0) {
                        *param_5 = lVar10;
                      }
                      else {
                        *param_5 = *(long *)(lVar11 + 0x98);
                        *(undefined8 *)(lVar11 + 0x90) = 0;
                        *(byte *)(lVar11 + 0x88) = *(byte *)(lVar11 + 0x88) & 0xfb;
                        *(undefined1 (*) [16])(lVar11 + 0x98) = (undefined1  [16])0x0;
                      }
                      goto LAB_00105088;
                    }
                    if ((*(byte *)(lVar11 + 0x88) & 4) == 0) {
                      if (local_a8 != 0) {
                        *(byte *)(lVar11 + 0x88) = *(byte *)(lVar11 + 0x88) | 4;
                        *(long *)(lVar11 + 0x90) = param_2;
                        *(long *)(lVar11 + 0x98) = param_3;
                        *(long *)(lVar11 + 0xa0) = local_a8;
                      }
                      *param_5 = 0;
                    }
                    else {
                      *(long *)(lVar11 + 0xa0) = *(long *)(lVar11 + 0xa0) + local_a8;
                    }
                    if (local_44 != 0) {
                      if (local_50 == 0) {
                        *(undefined4 *)(local_60 + 0x178) = 3;
                      }
                      else {
                        *(undefined4 *)(lVar11 + 0xb8) = 3;
                      }
                    }
                    uVar4 = 0;
                  }
                }
                else {
                  iVar3 = xso_sstream_append(lVar11,param_2,param_3,param_5);
                  if (iVar3 == 0) {
                    *param_5 = 0;
                    uVar4 = quic_raise_non_normal_error_constprop_0
                                      (local_78,"ssl/quic/quic_impl.c",0xa91,
                                       "quic_write_nonblocking_epw",0xc0103,0);
                  }
                  else {
                    do {
                      bVar2 = *(byte *)(lVar8 + 0x70) >> 5;
                      if ((bVar2 & 3) != 0) {
                        uVar5 = (uint)((bVar2 & 3) != 2);
                        break;
                      }
                      lVar8 = *(long *)(lVar8 + 0x40);
                    } while (lVar8 != 0);
                    quic_post_write(lVar11,*param_5 != 0,param_3 == *param_5,param_4,uVar5);
                    if (*param_5 != 0) goto LAB_00105088;
                    if (local_44 != 0) {
                      if (local_50 == 0) {
                        *(undefined4 *)(local_60 + 0x178) = 3;
                      }
                      else if (lVar11 != 0) {
                        *(undefined4 *)(lVar11 + 0xb8) = 3;
                      }
                    }
                  }
                }
              }
              else {
                local_b0 = 0;
                iVar3 = xso_sstream_append(lVar11,param_2,param_3,&local_b0);
                if (iVar3 != 0) {
                  quic_post_write(lVar11,local_b0 != 0,param_3 == local_b0,param_4,1);
                  *param_5 = local_b0;
                  if (param_3 != local_b0) {
                    local_98 = param_3 - local_b0;
                    uVar6 = *(undefined8 *)(lVar8 + 0x58);
                    local_a0 = param_2 + local_b0;
                    local_88 = 0xc0103;
                    local_90 = 0;
                    local_a8 = lVar11;
                    local_80 = param_4;
                    ossl_quic_engine_set_inhibit_tick(uVar6,0);
                    uVar6 = ossl_quic_engine_get0_reactor(uVar6);
                    iVar3 = ossl_quic_reactor_block_until_pred(uVar6,quic_write_again,&local_a8,0);
                    if (iVar3 < 1) {
                      lVar11 = *(long *)(lVar11 + 0x78);
                      if ((((*(byte *)(lVar11 + 0x150) & 0x20) == 0) &&
                          (iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar11 + 0xa0)),
                          iVar3 == 0)) &&
                         (iVar3 = ossl_quic_channel_is_active(*(undefined8 *)(lVar11 + 0xa0)),
                         iVar3 != 0)) {
                        uVar6 = 0xa09;
                        pcVar7 = "quic_write_blocking";
                        uVar4 = local_88;
                      }
                      else {
                        uVar4 = 0xcf;
                        uVar6 = 0xa07;
                        pcVar7 = "quic_write_blocking";
                      }
                      goto LAB_00104e83;
                    }
                    *param_5 = *param_5 + local_90;
                  }
                  goto LAB_00105088;
                }
                *param_5 = 0;
                uVar4 = quic_raise_non_normal_error_constprop_0
                                  (local_78,"ssl/quic/quic_impl.c",0x9e9,"quic_write_blocking",
                                   0xc0103,0);
              }
            }
          }
        }
      }
      else {
        uVar4 = 0x19c;
        uVar6 = 0xae3;
        pcVar7 = "ossl_quic_write_flags";
LAB_00104e83:
        uVar4 = quic_raise_non_normal_error_constprop_0
                          (local_78,"ssl/quic/quic_impl.c",uVar6,pcVar7,uVar4,0);
      }
      uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
      ossl_crypto_mutex_unlock(uVar6);
      goto LAB_00104d8e;
    }
  }
  else {
    iVar3 = expect_quic_as(param_1,local_78,0x6a);
    if (iVar3 != 0) {
LAB_00104e35:
      if (local_58 != 0) goto LAB_00104e41;
LAB_00105010:
      uVar5 = 0;
      lVar11 = 0;
      goto LAB_00104e4e;
    }
  }
  uVar4 = 0;
LAB_00104d8e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_write(void)

{
  ossl_quic_write_flags();
  return;
}



void ossl_quic_read(void)

{
  quic_read();
  return;
}



void ossl_quic_peek(void)

{
  quic_read();
  return;
}



void ossl_quic_pending(undefined8 param_1)

{
  ossl_quic_pending_int(param_1,0);
  return;
}



bool ossl_quic_has_pending(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = ossl_quic_pending_int(param_1,1);
  return lVar1 != 0;
}



undefined8 ossl_quic_conn_stream_conclude(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_6c;
  long local_68 [3];
  long local_50;
  long local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = expect_quic_as(param_1,local_68,0x2a);
  if ((int)uVar3 != 0) {
    lVar5 = *(long *)(local_48 + 0x80);
    if ((*(byte *)(local_50 + 0x150) & 0x20) == 0) {
      iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_50 + 0xa0));
      if (iVar2 == 0) {
        iVar2 = ossl_quic_channel_is_active(*(undefined8 *)(local_50 + 0xa0));
        if (iVar2 != 0) {
          iVar2 = quic_validate_for_write(local_48,&local_6c);
          if (iVar2 == 0) {
            uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
            ossl_crypto_mutex_unlock(uVar3);
            uVar3 = quic_raise_non_normal_error_constprop_0
                              (local_68,"ssl/quic/quic_impl.c",0xc61,
                               "ossl_quic_conn_stream_conclude",local_6c,0);
          }
          else {
            iVar2 = ossl_quic_sstream_get_final_size(*(undefined8 *)(lVar5 + 0x70),0);
            if (iVar2 == 0) {
              ossl_quic_sstream_fin(*(undefined8 *)(lVar5 + 0x70));
              lVar5 = local_68[0];
              do {
                bVar1 = *(byte *)(lVar5 + 0x70) >> 5;
                if ((bVar1 & 3) != 0) {
                  uVar3 = *(undefined8 *)(local_48 + 0x80);
                  uVar4 = ossl_quic_channel_get_qsm
                                    (*(undefined8 *)(*(long *)(local_48 + 0x78) + 0xa0));
                  ossl_quic_stream_map_update_state(uVar4,uVar3);
                  if ((bVar1 & 3) == 2) goto LAB_00105656;
                  goto LAB_00105742;
                }
                lVar5 = *(long *)(lVar5 + 0x40);
              } while (lVar5 != 0);
              uVar3 = *(undefined8 *)(local_48 + 0x80);
              uVar4 = ossl_quic_channel_get_qsm(*(undefined8 *)(*(long *)(local_48 + 0x78) + 0xa0));
              ossl_quic_stream_map_update_state(uVar4,uVar3);
LAB_00105742:
              uVar3 = ossl_quic_channel_get_reactor
                                (*(undefined8 *)(*(long *)(local_48 + 0x78) + 0xa0));
              ossl_quic_reactor_tick(uVar3,0);
LAB_00105656:
              uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
              ossl_crypto_mutex_unlock(uVar3);
            }
            else {
              uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
              ossl_crypto_mutex_unlock(uVar3);
            }
            uVar3 = 1;
          }
          goto LAB_00105564;
        }
      }
    }
    uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar3);
    uVar3 = quic_raise_non_normal_error_constprop_0
                      (local_68,"ssl/quic/quic_impl.c",0xc5c,"ossl_quic_conn_stream_conclude",0xcf,0
                      );
  }
LAB_00105564:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_inject_net_dgram
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_78 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_78,7);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    if (*(long *)(local_78[0] + 0x60) == 0) {
      iVar1 = 0;
      quic_raise_non_normal_error_constprop_0
                (local_78,"ssl/quic/quic_impl.c",0xc85,"SSL_inject_net_dgram",0x8010c,0);
    }
    else {
      uVar2 = ossl_quic_port_get0_demux();
      iVar1 = ossl_quic_demux_inject(uVar2,param_2,param_3,param_4,param_5);
    }
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_get0_connection(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  undefined8 local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,3);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_30;
}



undefined8 ossl_quic_get0_listener(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,7);
  if (iVar1 == 0) {
    local_38 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38;
}



undefined8 ossl_quic_get0_domain(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,0x87);
  if (iVar1 == 0) {
    local_40 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_40;
}



undefined8 ossl_quic_get_domain_flags(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_48 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_48,0x87);
  if ((int)uVar1 != 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(local_48[0] + 0x68);
    }
    uVar1 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



byte ossl_quic_get_stream_type(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = expect_quic_as(param_1,auStack_48,3);
  bVar2 = 3;
  if (iVar3 != 0) {
    if (local_28 == 0) {
      bVar2 = 0;
      if ((*(byte *)(local_30 + 0x150) & 0x10) == 0) {
        bVar2 = -(*(int *)(local_30 + 0x154) != 0) & 3;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)(local_28 + 0x80) + 0x100);
      if ((bVar1 & 2) != 0) {
        bVar2 = ((*(byte *)(local_30 + 0x150) >> 1 & 1) == (bVar1 & 1)) + 1;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_get_stream_id(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_48 [4];
  long local_28;
  long local_10;
  
  uVar3 = 0xffffffffffffffff;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_48,0x22);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(local_28 + 0x80) + 0x38);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_quic_is_stream_local(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_48 [4];
  long local_28;
  long local_10;
  
  uVar3 = 0xffffffff;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_48,0x22);
  if (iVar1 != 0) {
    uVar3 = (ulong)((*(byte *)(*(long *)(local_28 + 0x80) + 0x100) & 1) ==
                   (*(byte *)(*(long *)(local_28 + 0x80) + 0x103) >> 1 & 1));
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_set_default_stream_mode(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_58,1);
  if ((int)uVar1 != 0) {
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar1);
    uVar1 = *(undefined8 *)(local_58[0] + 0x58);
    if ((*(byte *)(local_40 + 0x150) & 0x10) == 0) {
      if (param_2 < 3) {
        *(uint *)(local_40 + 0x154) = param_2;
        uVar1 = ossl_quic_engine_get0_mutex(uVar1);
        ossl_crypto_mutex_unlock(uVar1);
        uVar1 = 1;
      }
      else {
        uVar1 = ossl_quic_engine_get0_mutex(uVar1);
        ossl_crypto_mutex_unlock(uVar1);
        uVar1 = quic_raise_non_normal_error_constprop_0
                          (local_58,"ssl/quic/quic_impl.c",0xd31,"ossl_quic_set_default_stream_mode"
                           ,0x80106,"bad default stream type");
      }
    }
    else {
      uVar1 = ossl_quic_engine_get0_mutex(uVar1);
      ossl_crypto_mutex_unlock(uVar1);
      uVar1 = quic_raise_non_normal_error_constprop_0
                        (local_58,"ssl/quic/quic_impl.c",0xd25,"ossl_quic_set_default_stream_mode",
                         0xc0101,"too late to change default stream mode");
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ossl_quic_detach_stream(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,1);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    lVar3 = *(long *)(local_40 + 0xb0);
    if (lVar3 != 0) {
      *(undefined8 *)(local_40 + 0xb0) = 0;
      iVar1 = SSL_up_ref(local_40);
      if (iVar1 == 0) {
        uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
        ossl_crypto_mutex_unlock(uVar2);
      }
      else {
        *(byte *)(local_40 + 0x150) = *(byte *)(local_40 + 0x150) | 0x10;
        qc_update_reject_policy(local_40);
        uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
        ossl_crypto_mutex_unlock(uVar2);
      }
      goto LAB_00105d63;
    }
    *(byte *)(local_40 + 0x150) = *(byte *)(local_40 + 0x150) | 0x10;
    qc_update_reject_policy(local_40);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  lVar3 = 0;
LAB_00105d63:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



undefined8 ossl_quic_attach_stream(undefined8 param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = expect_quic_as(param_1,local_58,1);
  lVar1 = local_58[0];
  if ((int)uVar2 != 0) {
    if ((param_2 == (int *)0x0) || (*param_2 != 0x81)) {
      uVar2 = quic_raise_non_normal_error_constprop_0
                        (local_58,"ssl/quic/quic_impl.c",0xd60,"ossl_quic_attach_stream",0xc0102,
                         "stream to attach must be a valid QUIC stream");
    }
    else {
      uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
      ossl_crypto_mutex_lock(uVar2);
      if (*(long *)(local_40 + 0xb0) == 0) {
        if (param_2[8] == 1) {
          qc_set_default_xso(local_40,param_2,1);
          uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
          ossl_crypto_mutex_unlock(uVar2);
          uVar2 = 1;
        }
        else {
          uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
          ossl_crypto_mutex_unlock(uVar2);
          uVar2 = quic_raise_non_normal_error_constprop_0
                            (local_58,"ssl/quic/quic_impl.c",0xd79,"ossl_quic_attach_stream",0x80106
                             ,"stream being attached must have only 1 reference");
        }
      }
      else {
        uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(lVar1 + 0x58));
        ossl_crypto_mutex_unlock(uVar2);
        uVar2 = quic_raise_non_normal_error_constprop_0
                          (local_58,"ssl/quic/quic_impl.c",0xd69,"ossl_quic_attach_stream",0xc0101,
                           "connection already has a default stream");
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_quic_set_incoming_stream_policy(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_78 [3];
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_78,1);
  if (uVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    if (2 < param_2) {
      quic_raise_non_normal_error_constprop_0
                (local_78,"ssl/quic/quic_impl.c",0xdba,"ossl_quic_set_incoming_stream_policy",
                 0x80106,0);
    }
    else {
      *(uint *)(local_60 + 0x168) = param_2;
      *(undefined8 *)(local_60 + 0x170) = param_3;
    }
    uVar1 = (uint)(2 >= param_2);
    qc_update_reject_policy(local_60);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_get_value_uint(undefined8 param_1,int param_2,int param_3,ulong *param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_68 [3];
  long local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < param_3 - 6U) {
    iVar2 = expect_quic_as(param_1,local_68,1);
    if (iVar2 != 0) goto LAB_00106094;
LAB_001060d1:
    uVar4 = 0;
    goto LAB_001060d3;
  }
  iVar2 = expect_quic_as(param_1,local_68,3);
  if (iVar2 == 0) goto LAB_001060d1;
LAB_00106094:
  if (param_4 == (ulong *)0x0) {
    uVar4 = quic_raise_non_normal_error_constprop_0
                      (local_68,"ssl/quic/quic_impl.c",0xe9d,"ossl_quic_get_value_uint",0x80106,0);
    goto LAB_001060d3;
  }
  switch(param_3) {
  default:
    uVar4 = quic_raise_non_normal_error_constprop_0
                      (local_68,"ssl/quic/quic_impl.c",0xebb,"ossl_quic_get_value_uint",0x19e,0);
    break;
  case 1:
    if (param_2 != 0) {
LAB_00106298:
      quic_raise_non_normal_error_constprop_0
                (local_68,"ssl/quic/quic_impl.c",0xe11,"qc_get_stream_avail",0x19f,0);
      goto LAB_001060d1;
    }
    uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_lock(uVar4);
    uVar5 = 0;
    uVar4 = *(undefined8 *)(local_50 + 0xa0);
    goto LAB_0010613c;
  case 2:
    if (param_2 != 0) goto LAB_00106298;
    uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_lock(uVar4);
    uVar3 = ossl_quic_channel_get_remote_stream_count_avail(*(undefined8 *)(local_50 + 0xa0),0);
    goto LAB_00106179;
  case 3:
    if (param_2 != 0) goto LAB_00106298;
    uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_lock(uVar4);
    uVar5 = 1;
    uVar4 = *(undefined8 *)(local_50 + 0xa0);
LAB_0010613c:
    uVar3 = ossl_quic_channel_get_local_stream_count_avail(uVar4,uVar5);
    goto LAB_00106179;
  case 4:
    if (param_2 != 0) goto LAB_00106298;
    uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_lock(uVar4);
    uVar3 = ossl_quic_channel_get_remote_stream_count_avail(*(undefined8 *)(local_50 + 0xa0),1);
LAB_00106179:
    *param_4 = uVar3;
    uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar4);
LAB_001061e6:
    uVar4 = 1;
    break;
  case 5:
    uVar4 = qc_getset_idle_timeout(local_68,param_2,param_4,0);
    break;
  case 6:
    uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_lock(uVar4);
    if (param_2 != 0) {
      quic_raise_non_normal_error_constprop_0
                (local_68,"ssl/quic/quic_impl.c",0xe41,"qc_getset_event_handling",0x19f,0);
      uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
      ossl_crypto_mutex_unlock(uVar4);
      goto LAB_001060d1;
    }
    bVar1 = *(byte *)(local_68[0] + 0x70);
    uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar4);
    *param_4 = (ulong)(bVar1 >> 5 & 3);
    goto LAB_001061e6;
  case 7:
    uVar4 = qc_get_stream_write_buf_stat(local_68,param_2,param_4,ossl_quic_sstream_get_buffer_size)
    ;
    break;
  case 8:
    uVar4 = qc_get_stream_write_buf_stat
                      (local_68,param_2,param_4,&ossl_quic_sstream_get_buffer_used);
    break;
  case 9:
    uVar4 = qc_get_stream_write_buf_stat
                      (local_68,param_2,param_4,ossl_quic_sstream_get_buffer_avail);
  }
LAB_001060d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_quic_set_value_uint(undefined8 param_1,int param_2,int param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ulong local_70;
  long local_68 [7];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_4;
  if (param_3 - 6U < 4) {
    iVar1 = expect_quic_as(param_1,local_68,3);
    if (iVar1 == 0) {
LAB_001064a0:
      uVar2 = 0;
      goto LAB_0010644a;
    }
    if (param_3 == 6) {
      uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
      ossl_crypto_mutex_lock(uVar3);
      if (param_2 == 0) {
        if (local_70 < 3) {
          uVar2 = 1;
          *(byte *)(local_68[0] + 0x70) =
               (byte)(((uint)local_70 & 3) << 5) | *(byte *)(local_68[0] + 0x70) & 0x9f;
        }
        else {
          uVar2 = 0;
          quic_raise_non_normal_error_constprop_0
                    (local_68,"ssl/quic/quic_impl.c",0xe4d,"qc_getset_event_handling",0x80106,0);
        }
      }
      else {
        uVar2 = 0;
        quic_raise_non_normal_error_constprop_0
                  (local_68,"ssl/quic/quic_impl.c",0xe41,"qc_getset_event_handling",0x19f,0);
      }
      uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
      ossl_crypto_mutex_unlock(uVar3);
      goto LAB_0010644a;
    }
  }
  else {
    iVar1 = expect_quic_as(param_1,local_68,1);
    if (iVar1 == 0) goto LAB_001064a0;
    if (param_3 == 5) {
      uVar2 = qc_getset_idle_timeout(local_68,param_2,0,&local_70);
      goto LAB_0010644a;
    }
  }
  uVar2 = quic_raise_non_normal_error_constprop_0
                    (local_68,"ssl/quic/quic_impl.c",0xed3,"ossl_quic_set_value_uint",0x19e,0);
LAB_0010644a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ossl_quic_accept_stream(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long *local_88;
  long local_80;
  long local_68 [3];
  long local_50;
  long local_30;
  
  lVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_68,1);
  if (iVar1 == 0) goto LAB_0010661e;
  uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
  ossl_crypto_mutex_lock(uVar2);
  if (*(int *)(local_50 + 0x168) == 0) {
    if (((*(long *)(local_50 + 0xb0) == 0) && ((*(byte *)(local_50 + 0x150) & 0x10) == 0)) ||
       (*(int *)(local_50 + 0x154) == 0)) goto LAB_00106594;
LAB_00106658:
    quic_raise_non_normal_error_constprop_0
              (local_68,"ssl/quic/quic_impl.c",0xf09,"ossl_quic_accept_stream",0xc0101,0);
LAB_0010667e:
    lVar4 = 0;
  }
  else {
    if (*(int *)(local_50 + 0x168) == 2) goto LAB_00106658;
LAB_00106594:
    uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(local_50 + 0xa0));
    lVar3 = ossl_quic_stream_map_peek_accept_queue(uVar2);
    if (lVar3 == 0) {
      iVar1 = ossl_quic_obj_blocking(local_68[0]);
      if ((iVar1 == 0) || ((param_2 & 1) != 0)) goto LAB_0010667e;
      uVar5 = *(undefined8 *)(local_68[0] + 0x58);
      local_80 = 0;
      local_88 = local_68;
      ossl_quic_engine_set_inhibit_tick(uVar5,0);
      uVar5 = ossl_quic_engine_get0_reactor(uVar5);
      iVar1 = ossl_quic_reactor_block_until_pred(uVar5,wait_for_incoming_stream,&local_88,0);
      if (iVar1 == 0) {
        lVar4 = 0;
        quic_raise_non_normal_error_constprop_0
                  (local_68,"ssl/quic/quic_impl.c",0xf1a,"ossl_quic_accept_stream",0xc0103,0);
      }
      else {
        if (iVar1 < 0) goto LAB_0010667e;
        lVar3 = local_80;
        if (local_80 != 0) goto LAB_001065b7;
        lVar4 = 0;
      }
    }
    else {
LAB_001065b7:
      lVar4 = create_xso_from_stream(local_50,lVar3);
      if (lVar4 != 0) {
        uVar5 = ossl_quic_channel_get_statm(*(undefined8 *)(local_50 + 0xa0));
        ossl_statm_get_rtt_info(uVar5,&local_88);
        ossl_quic_stream_map_remove_from_accept_queue(uVar2,lVar3,local_88);
        *(byte *)(local_50 + 0x150) = *(byte *)(local_50 + 0x150) | 0x10;
        qc_update_reject_policy();
      }
    }
  }
  uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
  ossl_crypto_mutex_unlock(uVar2);
LAB_0010661e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



undefined8 ossl_quic_get_accept_stream_queue_len(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_20;
  
  uVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,1);
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(local_40 + 0xa0));
    uVar2 = ossl_quic_stream_map_get_total_accept_queue_len(uVar2);
    uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_quic_stream_reset(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_7c;
  long local_78 [3];
  long local_60;
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_78,0x2a);
  if (iVar1 != 0) {
    uVar4 = 0;
    uVar2 = ossl_quic_channel_get_qsm(*(undefined8 *)(local_60 + 0xa0));
    uVar3 = *(undefined8 *)(local_58 + 0x80);
    if (param_2 != (undefined8 *)0x0) {
      uVar4 = *param_2;
    }
    iVar1 = quic_validate_for_write(local_58,&local_7c);
    if (iVar1 == 0) {
      iVar1 = quic_raise_non_normal_error_constprop_0
                        (local_78,"ssl/quic/quic_impl.c",0xf62,"ossl_quic_stream_reset",local_7c,0);
    }
    else {
      iVar1 = ossl_quic_stream_map_reset_stream_send_part(uVar2,uVar3,uVar4);
      if (iVar1 != 0) {
        *(byte *)(local_58 + 0x88) = *(byte *)(local_58 + 0x88) | 2;
      }
    }
    uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_quic_get_stream_read_state(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_4c;
  long local_48 [3];
  undefined8 local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_48,0x22);
  if ((int)uVar1 != 0) {
    quic_classify_stream(local_30,*(undefined8 *)(local_28 + 0x80),0,&local_4c,0);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
    uVar1 = (ulong)local_4c;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_quic_get_stream_write_state(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_4c;
  long local_48 [3];
  undefined8 local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_48,0x22);
  if ((int)uVar1 != 0) {
    quic_classify_stream(local_30,*(undefined8 *)(local_28 + 0x80),1,&local_4c,0);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
    uVar1 = (ulong)local_4c;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_get_stream_read_error_code(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_4c;
  long local_48 [3];
  undefined8 local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_48,0x22);
  if (iVar1 != 0) {
    quic_classify_stream(local_30,*(undefined8 *)(local_28 + 0x80),0,&local_4c,param_2);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
    uVar2 = 0;
    if ((local_4c == 3) || (uVar2 = 1, local_4c - 4U < 2)) goto LAB_00106a28;
  }
  uVar2 = 0xffffffff;
LAB_00106a28:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 ossl_quic_get_stream_write_error_code(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_4c;
  long local_48 [3];
  undefined8 local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_48,0x22);
  if (iVar1 != 0) {
    quic_classify_stream(local_30,*(undefined8 *)(local_28 + 0x80),0,&local_4c,param_2);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_48[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
    uVar2 = 0;
    if ((local_4c == 3) || (uVar2 = 1, local_4c - 4U < 2)) goto LAB_00106ad8;
  }
  uVar2 = 0xffffffff;
LAB_00106ad8:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int ossl_quic_set_write_buffer_size(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_58 [4];
  long local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = expect_quic_as(param_1,local_58,0x22);
  if (iVar2 == 0) goto LAB_00106bc2;
  bVar1 = *(byte *)(*(long *)(local_38 + 0x80) + 0x101);
  if (bVar1 == 0) {
    iVar2 = 0;
    quic_raise_non_normal_error_constprop_0
              (local_58,"ssl/quic/quic_impl.c",0x1002,"ossl_quic_set_write_buffer_size",0xc0101,0);
  }
  else {
    if (bVar1 - 1 < 3) {
      iVar2 = ossl_quic_sstream_set_buffer_size
                        (*(undefined8 *)(*(long *)(local_38 + 0x80) + 0x70),param_2);
      if (iVar2 == 0) {
        iVar2 = 0;
        quic_raise_non_normal_error_constprop_0
                  (local_58,"ssl/quic/quic_impl.c",0x1010,"ossl_quic_set_write_buffer_size",0xc0103,
                   0);
        goto LAB_00106bad;
      }
    }
    iVar2 = 1;
  }
LAB_00106bad:
  uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
  ossl_crypto_mutex_unlock(uVar3);
LAB_00106bc2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_get_conn_close_info(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = expect_quic_as(param_1,auStack_48,1);
  uVar4 = 0xffffffff;
  if (iVar2 != 0) {
    puVar5 = (undefined8 *)ossl_quic_channel_get_terminate_cause(*(undefined8 *)(local_30 + 0xa0));
    if (puVar5 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar1 = puVar5[1];
      uVar4 = puVar5[2];
      *param_2 = *puVar5;
      param_2[1] = uVar1;
      param_2[2] = uVar4;
      param_2[3] = puVar5[3];
      uVar3 = (*(byte *)(puVar5 + 4) >> 1 ^ 1) & 1;
      if ((*(byte *)(puVar5 + 4) & 1) == 0) {
        *(uint *)(param_2 + 4) = uVar3 | 2;
      }
      else {
        *(uint *)(param_2 + 4) = uVar3;
      }
      uVar4 = 1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_key_update(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,1);
  if (iVar1 != 0) {
    if (param_2 < 2) {
      uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
      ossl_crypto_mutex_lock(uVar2);
      iVar1 = ossl_quic_channel_trigger_txku(*(undefined8 *)(local_40 + 0xa0));
      if (iVar1 != 0) {
        uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
        ossl_crypto_mutex_unlock(uVar2);
        uVar2 = 1;
        goto LAB_00106d6d;
      }
      quic_raise_non_normal_error_constprop_0
                (local_58,"ssl/quic/quic_impl.c",0x1056,"ossl_quic_key_update",0x84,0);
      uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
      ossl_crypto_mutex_unlock(uVar2);
    }
    else {
      quic_raise_non_normal_error_constprop_0
                (local_58,"ssl/quic/quic_impl.c",0x104e,"ossl_quic_key_update",0x80106,0);
    }
  }
  uVar2 = 0;
LAB_00106d6d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_get_key_update_type(void)

{
  return 0xffffffff;
}



void * ossl_quic_new_listener(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  void *ptr;
  long lVar2;
  void *pvVar3;
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
  ptr = (void *)CRYPTO_zalloc(0xa0,"ssl/quic/quic_impl.c",0x1095);
  if (ptr == (void *)0x0) {
    quic_raise_non_normal_error_constprop_0
              (0,"ssl/quic/quic_impl.c",0x1096,"ossl_quic_new_listener",0x8000f,0);
  }
  else {
    lVar2 = ossl_crypto_mutex_new();
    *(long *)((long)ptr + 0x90) = lVar2;
    if (lVar2 == 0) {
      quic_raise_non_normal_error_constprop_0
                (0,"ssl/quic/quic_impl.c",0x109c,"ossl_quic_new_listener",0x8000f,0);
    }
    else {
      local_78._8_8_ = param_1[0x8e];
      local_78._0_8_ = *param_1;
      if (((param_1[0xda] & 4) != 0) || ((~param_1[0xda] & 10) == 0)) {
        local_68._8_8_ = local_68._8_8_ | 1;
      }
      local_68._0_8_ = lVar2;
      lVar2 = ossl_quic_engine_new(local_78);
      *(long *)((long)ptr + 0x80) = lVar2;
      if (lVar2 == 0) {
        quic_raise_non_normal_error_constprop_0
                  (0,"ssl/quic/quic_impl.c",0x10ab,"ossl_quic_new_listener",0xc0103,0);
      }
      else {
        local_38 = CONCAT44(local_38._4_4_,1);
        local_58._8_8_ = alloc_port_user_ssl;
        local_48._8_8_ = param_1;
        local_48._0_8_ = ptr;
        if ((param_2 & 2) == 0) {
          local_38 = 0x100000001;
        }
        lVar2 = ossl_quic_engine_create_port(lVar2,local_58);
        *(long *)((long)ptr + 0x88) = lVar2;
        if (lVar2 == 0) {
          quic_raise_non_normal_error_constprop_0
                    (0,"ssl/quic/quic_impl.c",0x10b7,"ossl_quic_new_listener",0xc0103,0);
        }
        else {
          ossl_quic_port_set_allow_incoming(lVar2,1);
          iVar1 = ossl_quic_obj_init(ptr,param_1,0x82,0,*(undefined8 *)((long)ptr + 0x80),
                                     *(undefined8 *)((long)ptr + 0x88));
          pvVar3 = ptr;
          if (iVar1 != 0) goto LAB_00106f65;
        }
      }
    }
    ossl_quic_engine_free(*(undefined8 *)((long)ptr + 0x80));
  }
  pvVar3 = (void *)0x0;
  ossl_crypto_mutex_free((long)ptr + 0x90);
  CRYPTO_free(ptr);
LAB_00106f65:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar3;
}



void * ossl_quic_new_listener_from(long param_1,ulong param_2)

{
  ssl2_state_st *psVar1;
  int iVar2;
  undefined8 uVar3;
  void *ptr;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  long local_78;
  SSL *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_88 = 0;
  local_98 = (undefined1  [16])0x0;
  iVar2 = expect_quic_as(param_1,&local_78,0x80);
  if (iVar2 != 0) {
    iVar2 = SSL_up_ref(local_70);
    if (iVar2 != 0) {
      uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78 + 0x58));
      ossl_crypto_mutex_lock(uVar3);
      ptr = (void *)CRYPTO_zalloc(0xa0,"ssl/quic/quic_impl.c",0x10e3);
      if (ptr == (void *)0x0) {
        quic_raise_non_normal_error_constprop_0
                  (0,"ssl/quic/quic_impl.c",0x10e4,"ossl_quic_new_listener_from",0x8000f,0);
      }
      else {
        local_88 = CONCAT44(local_88._4_4_,1);
        local_a8._8_8_ = alloc_port_user_ssl;
        local_98._8_8_ = *(undefined8 *)(param_1 + 8);
        local_98._0_8_ = ptr;
        if ((param_2 & 2) == 0) {
          local_88 = 0x100000001;
        }
        lVar4 = ossl_quic_engine_create_port(local_70->s2,local_a8);
        *(long *)((long)ptr + 0x88) = lVar4;
        if (lVar4 == 0) {
          quic_raise_non_normal_error_constprop_0
                    (0,"ssl/quic/quic_impl.c",0x10f0,"ossl_quic_new_listener_from",0xc0103,0);
        }
        else {
          psVar1 = local_70->s2;
          *(SSL **)((long)ptr + 0x78) = local_70;
          *(ssl2_state_st **)((long)ptr + 0x80) = psVar1;
          *(ssl3_state_st **)((long)ptr + 0x90) = local_70->s3;
          ossl_quic_port_set_allow_incoming(lVar4,1);
          iVar2 = ossl_quic_obj_init(ptr,*(undefined8 *)(param_1 + 8),0x82,local_70,0,
                                     *(undefined8 *)((long)ptr + 0x88));
          if (iVar2 != 0) {
            uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78 + 0x58));
            ossl_crypto_mutex_unlock(uVar3);
            goto LAB_001071d3;
          }
        }
        ossl_quic_port_free(*(undefined8 *)((long)ptr + 0x88));
      }
      CRYPTO_free(ptr);
      uVar3 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78 + 0x58));
      ossl_crypto_mutex_unlock(uVar3);
      SSL_free(local_70);
    }
  }
  ptr = (void *)0x0;
LAB_001071d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_listen(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_58 [2];
  long local_48;
  long local_40;
  long local_38;
  int local_30;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = expect_quic_as(param_1,local_58,4);
  if ((int)uVar1 != 0) {
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar1);
    local_24 = 1;
    if (local_30 == 0) {
      if (local_40 != 0) {
        *(undefined4 *)(local_40 + 0x178) = 0;
      }
    }
    else if (local_38 != 0) {
      *(undefined4 *)(local_38 + 0xb8) = 0;
    }
    if ((*(byte *)(local_48 + 0x98) & 1) == 0) {
      ossl_quic_port_set_allow_incoming(*(undefined8 *)(local_48 + 0x88),1);
      *(byte *)(local_48 + 0x98) = *(byte *)(local_48 + 0x98) | 1;
    }
    uVar1 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar1);
    uVar1 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



SSL * ossl_quic_accept_connection(undefined8 param_1,uint param_2)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  SSL *pSVar8;
  SSL *pSVar9;
  long in_FS_OFFSET;
  long local_68 [2];
  ssl3_state_st *local_58;
  long local_50;
  long local_48;
  int local_40;
  undefined4 local_34;
  long local_30;
  
  pSVar8 = (SSL *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = expect_quic_as(param_1,local_68,4);
  if (iVar5 == 0) goto LAB_00107454;
  uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
  ossl_crypto_mutex_lock(uVar6);
  local_34 = 1;
  if (local_40 == 0) {
    if (local_50 != 0) {
      *(undefined4 *)(local_50 + 0x178) = 0;
    }
  }
  else if (local_48 != 0) {
    *(undefined4 *)(local_48 + 0xb8) = 0;
  }
  if ((local_58->write_mac_secret[0x34] & 1) == 0) {
    ossl_quic_port_set_allow_incoming(*(undefined8 *)(local_58->write_mac_secret + 0x24),1);
    local_58->write_mac_secret[0x34] = local_58->write_mac_secret[0x34] | 1;
  }
  lVar7 = ossl_quic_port_pop_incoming(*(undefined8 *)(local_58->write_mac_secret + 0x24));
  if (lVar7 == 0) {
    iVar5 = ossl_quic_port_is_running(*(undefined8 *)(local_58->write_mac_secret + 0x24));
    if (iVar5 == 0) {
LAB_00107510:
      iVar5 = ossl_quic_port_is_running(*(undefined8 *)(local_58->write_mac_secret + 0x24));
      if (iVar5 != 0) {
        uVar6 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_58->write_mac_secret + 0x1c));
        ossl_quic_reactor_tick(uVar6,0);
        lVar7 = ossl_quic_port_pop_incoming(*(undefined8 *)(local_58->write_mac_secret + 0x24));
        if (lVar7 != 0) goto LAB_00107425;
        pSVar8 = (SSL *)0x0;
        goto LAB_00107443;
      }
    }
    else {
      lVar7 = local_68[0];
      if (((param_2 & 1) == 0) && (iVar5 = ossl_quic_obj_blocking(local_68[0]), iVar5 != 0)) {
        uVar6 = *(undefined8 *)(local_68[0] + 0x58);
        uVar3 = *(undefined8 *)(local_58->write_mac_secret + 0x24);
        ossl_quic_engine_set_inhibit_tick(uVar6,0);
        uVar6 = ossl_quic_engine_get0_reactor(uVar6);
        iVar5 = ossl_quic_reactor_block_until_pred(uVar6,quic_accept_connection_wait,uVar3,0);
        if (0 < iVar5) goto LAB_001075b0;
      }
      else {
        do {
          bVar4 = *(byte *)(lVar7 + 0x70) >> 5;
          if ((bVar4 & 3) != 0) {
            if ((bVar4 & 3) == 2) goto LAB_001075b0;
            break;
          }
          plVar1 = (long *)(lVar7 + 0x40);
          lVar7 = *plVar1;
        } while (*plVar1 != 0);
        uVar6 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_68[0] + 0x58));
        ossl_quic_reactor_tick(uVar6,0);
LAB_001075b0:
        iVar5 = ossl_quic_port_is_running(*(undefined8 *)(local_58->write_mac_secret + 0x24));
        if (iVar5 != 0) {
          lVar7 = ossl_quic_port_pop_incoming(*(undefined8 *)(local_58->write_mac_secret + 0x24));
          if (lVar7 != 0) goto LAB_00107425;
          goto LAB_00107510;
        }
      }
    }
LAB_001074ef:
    pSVar8 = (SSL *)0x0;
  }
  else {
LAB_00107425:
    pSVar8 = (SSL *)ossl_quic_channel_get0_tls(lVar7);
    if (pSVar8 == (SSL *)0x0) goto LAB_001074ef;
    pSVar9 = pSVar8;
    if ((pSVar8->version == 0) ||
       (((pSVar8->version & 0x80U) != 0 &&
        (pSVar9 = (SSL *)ossl_quic_obj_get0_handshake_layer(pSVar8), pSVar9 != (SSL *)0x0)))) {
      pSVar8 = *(SSL **)&pSVar9->quiet_shutdown;
      if (pSVar8 != (SSL *)0x0) {
        pbVar2 = (byte *)((long)&pSVar8->info_callback + 1);
        *pbVar2 = *pbVar2 & 0xfd;
        pSVar8->s3 = local_58;
        iVar5 = SSL_up_ref(local_58);
        if (iVar5 != 0) goto LAB_00107443;
        SSL_free(pSVar8);
        pSVar8 = (SSL *)ossl_quic_channel_get0_tls(lVar7);
        SSL_free(pSVar8);
      }
      goto LAB_001074ef;
    }
  }
LAB_00107443:
  uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_68[0] + 0x58));
  ossl_crypto_mutex_unlock(uVar6);
LAB_00107454:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar8;
}



void ossl_quic_free_token_store(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  ossl_crypto_mutex_free(param_1 + 2);
  OPENSSL_LH_doall(*param_1,free_this_token);
  OPENSSL_LH_free(*param_1);
  CRYPTO_free(param_1);
  return;
}



long * ossl_quic_new_token_store(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)CRYPTO_zalloc(0x18,"ssl/quic/quic_impl.c",0x1248);
  if (plVar1 != (long *)0x0) {
    uVar2 = OPENSSL_LH_new(quic_token_hash,quic_token_cmp);
    lVar3 = OPENSSL_LH_set_thunks
                      (uVar2,0x100000,lh_QUIC_TOKEN_cfn_thunk,lh_QUIC_TOKEN_doall_thunk,
                       lh_QUIC_TOKEN_doall_arg_thunk);
    *plVar1 = lVar3;
    if (lVar3 != 0) {
      lVar3 = ossl_crypto_mutex_new();
      plVar1[2] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(undefined4 *)(plVar1 + 1) = 1;
        UNLOCK();
        return plVar1;
      }
    }
  }
  ossl_quic_free_token_store(plVar1);
  return (long *)0x0;
}



void * ossl_quic_new_from_listener(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  dtls1_state_st *pdVar4;
  int iVar5;
  undefined8 uVar6;
  void *ptr;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  byte bVar10;
  long in_FS_OFFSET;
  long local_78 [2];
  SSL *local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 == 0) && (iVar5 = expect_quic_as(param_1,local_78,4), iVar5 != 0)) &&
     (iVar5 = SSL_up_ref(local_68), iVar5 != 0)) {
    uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_lock(uVar6);
    lVar2 = *(long *)(param_1 + 8);
    if (*(long *)(lVar2 + 0x6d8) == 0) {
      lVar9 = ossl_quic_new_token_store();
      *(long *)(lVar2 + 0x6d8) = lVar9;
      if (lVar9 != 0) goto LAB_001077b0;
    }
    else {
LAB_001077b0:
      ptr = (void *)CRYPTO_zalloc(0x180,"ssl/quic/quic_impl.c",0x1143);
      if (ptr == (void *)0x0) {
        quic_raise_non_normal_error_constprop_0
                  (0,"ssl/quic/quic_impl.c",0x1144,"ossl_quic_new_from_listener",0x8000f,0);
      }
      else {
        *(SSL **)((long)ptr + 0x80) = local_68;
        pdVar4 = local_68->d1;
        *(ssl3_state_st **)((long)ptr + 0x90) = local_68->s3;
        *(dtls1_state_st **)((long)ptr + 0x98) = pdVar4;
        *(undefined8 *)((long)ptr + 0xa8) = *(undefined8 *)&local_68->read_ahead;
        *(byte *)((long)ptr + 0x150) =
             (byte)(((uint)((ulong)local_68->packet >> 2) & 1) << 3) |
             *(byte *)((long)ptr + 0x150) & 0xf7;
        uVar6 = TLS_method();
        puVar7 = (uint *)ossl_ssl_connection_new_int(local_68->method,0,uVar6);
        *(uint **)((long)ptr + 0x78) = puVar7;
        if (puVar7 == (uint *)0x0) {
LAB_00107968:
          quic_raise_non_normal_error_constprop_0
                    (0,"ssl/quic/quic_impl.c",0x115d,"ossl_quic_new_from_listener",0xc0103,0);
        }
        else {
          puVar8 = puVar7;
          if (*puVar7 != 0) {
            if (((*puVar7 & 0x80) == 0) ||
               (puVar8 = (uint *)ossl_quic_obj_get0_handshake_layer(), puVar8 == (uint *)0x0))
            goto LAB_00107968;
            puVar7 = *(uint **)((long)ptr + 0x78);
          }
          *(ulong *)(puVar8 + 0x58) = *(ulong *)(puVar8 + 0x58) | 0x6000;
          *(undefined8 *)((long)ptr + 0x160) = 0x3df6ffb87;
          *(undefined4 *)((long)ptr + 0x178) = 0;
          uVar6 = ossl_quic_port_create_outgoing(*(undefined8 *)((long)ptr + 0x98),puVar7);
          *(undefined8 *)((long)ptr + 0xa0) = uVar6;
          ossl_quic_channel_set_msg_callback(uVar6,local_68->method[1].ssl_ctx_ctrl,ptr);
          ossl_quic_channel_set_msg_callback_arg
                    (*(undefined8 *)((long)ptr + 0xa0),local_68->method[1].get_cipher_by_char);
          iVar5 = ossl_quic_obj_init(ptr,local_68->method,0x80,local_68,0,0);
          if (iVar5 != 0) {
            bVar10 = 1;
            *(undefined4 *)((long)ptr + 0x154) = 1;
            uVar1 = *(undefined4 *)(*(long *)((long)ptr + 8) + 0x140);
            uVar3 = *(ulong *)(*(long *)((long)ptr + 8) + 0x138);
            *(undefined4 *)((long)ptr + 0x168) = 0;
            *(ulong *)((long)ptr + 0x160) = uVar3 & 0x3df6ffb87;
            *(undefined4 *)((long)ptr + 0x158) = uVar1;
            *(undefined4 *)((long)ptr + 0x178) = 0;
            if (*(long *)((long)ptr + 0xb0) == 0) {
              bVar10 = *(byte *)((long)ptr + 0x150) >> 4 & 1;
            }
            ossl_quic_channel_set_incoming_stream_auto_reject
                      (*(undefined8 *)((long)ptr + 0xa0),bVar10,*(undefined8 *)((long)ptr + 0x170));
            uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
            ossl_crypto_mutex_unlock(uVar6);
            goto LAB_001079c3;
          }
          quic_raise_non_normal_error_constprop_0
                    (0,"ssl/quic/quic_impl.c",0x1178,"ossl_quic_new_from_listener",0xc0103,0);
        }
        qc_cleanup(ptr,0);
        CRYPTO_free(ptr);
      }
    }
    uVar6 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar6);
    SSL_free(local_68);
  }
  ptr = (void *)0x0;
LAB_001079c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptr;
}



void ossl_quic_free_peer_token(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  if ((iVar1 != 1) && (0 < iVar1 + -1)) {
    return;
  }
  CRYPTO_free(param_1);
  return;
}



void free_this_token(void)

{
  ossl_quic_free_peer_token();
  return;
}



undefined4 * ossl_quic_build_new_token(undefined8 param_1,void *param_2,size_t param_3)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if ((param_2 != (void *)0x0) == (param_3 != 0)) {
    iVar3 = BIO_ADDR_rawaddress(param_1,0,&local_48);
    if (iVar3 != 0) {
      uVar4 = BIO_ADDR_family(param_1);
      uVar2 = BIO_ADDR_rawport(param_1);
      lVar1 = local_48 + 6;
      puVar5 = (undefined4 *)CRYPTO_zalloc(local_48 + 0x2e + param_3,"ssl/quic/quic_impl.c",0x12af);
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        *puVar5 = 1;
        UNLOCK();
        *(long *)(puVar5 + 4) = lVar1;
        *(undefined4 **)(puVar5 + 2) = puVar5 + 10;
        *(long *)(puVar5 + 6) = (long)(puVar5 + 10) + lVar1;
        *(size_t *)(puVar5 + 8) = param_3;
        puVar5[10] = uVar4;
        *(undefined2 *)(puVar5 + 0xb) = uVar2;
        iVar3 = BIO_ADDR_rawaddress(param_1,(long)puVar5 + 0x2e,0);
        if (iVar3 != 0) {
          if (param_2 != (void *)0x0) {
            memcpy(*(void **)(puVar5 + 6),param_2,param_3);
          }
          goto LAB_00107bbc;
        }
        ossl_quic_free_peer_token(puVar5);
      }
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_00107bbc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_quic_set_peer_token(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x6d8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = ossl_quic_build_new_token(param_2,param_3,param_4);
    if (lVar2 != 0) {
      ossl_crypto_mutex_lock(puVar1[2]);
      lVar3 = OPENSSL_LH_retrieve(*puVar1,lVar2);
      if (lVar3 != 0) {
        OPENSSL_LH_delete(*puVar1,lVar3);
        ossl_quic_free_peer_token(lVar3);
      }
      OPENSSL_LH_insert(*puVar1,lVar2);
      ossl_crypto_mutex_unlock(puVar1[2]);
      return 1;
    }
  }
  return 0;
}



bool ossl_quic_get_peer_token(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  bool bVar4;
  
  bVar4 = false;
  puVar1 = *(undefined8 **)(param_1 + 0x6d8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = ossl_quic_build_new_token(param_2,0,0);
    ossl_crypto_mutex_lock(puVar1[2]);
    piVar3 = (int *)OPENSSL_LH_retrieve(*puVar1,uVar2);
    bVar4 = piVar3 != (int *)0x0;
    if (bVar4) {
      *param_3 = piVar3;
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    ossl_crypto_mutex_unlock(puVar1[2]);
    ossl_quic_free_peer_token(uVar2);
  }
  return bVar4;
}



long ossl_quic_get_accept_connection_queue_len(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_58 [2];
  long local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,4);
  lVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    iVar1 = ossl_quic_port_get_num_incoming_channels(*(undefined8 *)(local_48 + 0x88));
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
    lVar3 = (long)iVar1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * ossl_quic_new_domain(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  void *ptr;
  long lVar2;
  long in_FS_OFFSET;
  ulong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_60 = param_2;
  if ((param_2 & 7) == 0) {
    local_60 = param_1[0xda] | param_2;
  }
  iVar1 = ossl_adjust_domain_flags(local_60,&local_60);
  if (iVar1 != 0) {
    ptr = (void *)CRYPTO_zalloc(0x88,"ssl/quic/quic_impl.c",0x133e);
    if (ptr == (void *)0x0) {
      quic_raise_non_normal_error_constprop_0
                (0,"ssl/quic/quic_impl.c",0x133f,"ossl_quic_new_domain",0x8000f,0);
    }
    else {
      lVar2 = ossl_crypto_mutex_new();
      *(long *)((long)ptr + 0x80) = lVar2;
      if (lVar2 == 0) {
        quic_raise_non_normal_error_constprop_0
                  (0,"ssl/quic/quic_impl.c",0x1345,"ossl_quic_new_domain",0x8000f,0);
      }
      else {
        local_58._8_8_ = param_1[0x8e];
        local_58._0_8_ = *param_1;
        if (((local_60 & 4) != 0) || ((~local_60 & 10) == 0)) {
          local_48._8_8_ = local_48._8_8_ | 1;
        }
        local_48._0_8_ = lVar2;
        lVar2 = ossl_quic_engine_new(local_58);
        *(long *)((long)ptr + 0x78) = lVar2;
        if (lVar2 == 0) {
          quic_raise_non_normal_error_constprop_0
                    (0,"ssl/quic/quic_impl.c",0x1354,"ossl_quic_new_domain",0xc0103,0);
        }
        else {
          iVar1 = ossl_quic_obj_init(ptr,param_1,0x83,0,lVar2,0);
          if (iVar1 != 0) {
            *(ulong *)((long)ptr + 0x68) = local_60;
            goto LAB_00107e93;
          }
        }
      }
      ossl_quic_engine_free(*(undefined8 *)((long)ptr + 0x78));
      ossl_crypto_mutex_free((long)ptr + 0x80);
      CRYPTO_free(ptr);
    }
  }
  ptr = (void *)0x0;
LAB_00107e93:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptr;
}



void ossl_quic_ctx_ctrl(void)

{
  ssl3_ctx_ctrl();
  return;
}



undefined8 ossl_quic_callback_ctrl(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_58,1);
  if (iVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else if (param_2 == 0xf) {
    ossl_quic_channel_set_msg_callback(*(undefined8 *)(local_40 + 0xa0),param_3,local_40);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar2 = ssl3_callback_ctrl(*(undefined8 *)(local_40 + 0x78),0xf,param_3);
      return uVar2;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar2 = ssl3_callback_ctrl(*(undefined8 *)(local_40 + 0x78),param_2,param_3);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_ctx_callback_ctrl(void)

{
  ssl3_ctx_callback_ctrl();
  return;
}



undefined8 ossl_quic_renegotiate_check(void)

{
  return 0;
}



long ossl_quic_get_cipher_by_char(void)

{
  long lVar1;
  
  lVar1 = ssl3_get_cipher_by_char();
  if ((*(byte *)(lVar1 + 0x42) & 4) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



undefined8 ossl_quic_num_ciphers(void)

{
  return 0;
}



undefined8 ossl_quic_get_cipher(void)

{
  return 0;
}



char ossl_quic_get_shutdown(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = expect_quic_as(param_1,auStack_48,1);
  if (iVar2 != 0) {
    iVar2 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_30 + 0xa0));
    if (iVar2 != 0) {
      iVar2 = ossl_quic_channel_is_closing(*(undefined8 *)(local_30 + 0xa0));
      cVar1 = (-(iVar2 == 0) & 2U) + 1;
      goto LAB_001080dc;
    }
  }
  cVar1 = '\0';
LAB_001080dc:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_conn_poll_events(undefined8 param_1,uint param_2,int param_3,ulong *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  int local_84;
  long local_80;
  long local_78 [2];
  long local_68;
  long local_60;
  long local_58;
  int local_50;
  int local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = expect_quic_as(param_1,local_78,7);
  if ((int)uVar4 == 0) goto LAB_0010816e;
  uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
  ossl_crypto_mutex_lock(uVar4);
  if (local_60 == 0) {
    if (param_3 != 0) {
      uVar4 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_78[0] + 0x58));
      ossl_quic_reactor_tick(uVar4,0);
    }
    if (local_58 == 0) {
      uVar6 = 0;
    }
    else {
LAB_001081e1:
      if ((param_2 & 0x40) == 0) {
LAB_001081f0:
        uVar6 = 0;
LAB_001081f3:
        if (((((param_2 & 0x10) != 0) &&
             (cVar1 = *(char *)(*(long *)(local_58 + 0x80) + 0x102), cVar1 != '\0')) &&
            ((byte)(cVar1 - 5U) < 2)) && ((*(byte *)(local_58 + 0x88) & 1) == 0)) {
          uVar6 = uVar6 | 0x10;
        }
      }
      else {
        local_84 = 0;
        local_80 = 0;
        bVar2 = *(byte *)(*(long *)(local_58 + 0x80) + 0x102);
        uVar6 = 0x40;
        if (bVar2 != 4) {
          if (((2 < bVar2 - 1) ||
              (iVar3 = ossl_quic_rstream_available
                                 (*(undefined8 *)(*(long *)(local_58 + 0x80) + 0x78),&local_80,
                                  &local_84), iVar3 == 0)) ||
             ((local_80 == 0 && ((local_84 == 0 || ((*(byte *)(local_58 + 0x88) & 1) != 0))))))
          goto LAB_001081f0;
          uVar6 = 0x40;
          goto LAB_001081f3;
        }
      }
      if ((((param_2 & 0x80) != 0) && ((*(byte *)(*(long *)(local_58 + 0x78) + 0x150) & 0x20) == 0))
         && ((((*(byte *)(*(long *)(local_58 + 0x80) + 0x101) - 1 < 3 &&
               ((lVar5 = ossl_quic_sstream_get_buffer_avail
                                   (*(undefined8 *)(*(long *)(local_58 + 0x80) + 0x70)), lVar5 != 0
                && (iVar3 = ossl_quic_sstream_get_final_size
                                      (*(undefined8 *)(*(long *)(local_58 + 0x80) + 0x70),0),
                   iVar3 == 0)))) &&
              (lVar5 = *(long *)(local_58 + 0x78), (*(byte *)(lVar5 + 0x150) & 0x20) == 0)) &&
             ((iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(lVar5 + 0xa0)), iVar3 == 0 &&
              (iVar3 = ossl_quic_channel_is_active(*(undefined8 *)(lVar5 + 0xa0)), iVar3 != 0))))))
      {
        uVar6 = uVar6 | 0x80;
      }
      if (((((param_2 & 0x20) != 0) && (*(char *)(*(long *)(local_58 + 0x80) + 0x101) != '\0')) &&
          ((*(byte *)(*(long *)(local_58 + 0x80) + 0x103) & 8) != 0)) &&
         (((*(byte *)(local_58 + 0x88) & 2) == 0 &&
          ((*(byte *)(*(long *)(local_58 + 0x78) + 0x150) & 0x20) == 0)))) {
        uVar6 = uVar6 | 0x20;
      }
      if (local_60 != 0) goto LAB_00108323;
    }
LAB_00108370:
    if (local_4c != 0) {
      if ((param_2 & 2) != 0) {
        iVar3 = ossl_quic_port_is_running(*(undefined8 *)(local_68 + 0x88));
        if (iVar3 == 0) {
          uVar6 = uVar6 | 2;
        }
      }
      if ((param_2 & 0x100) != 0) {
        lVar5 = ossl_quic_port_get_num_incoming_channels(*(undefined8 *)(local_68 + 0x88));
        if (lVar5 != 0) {
          uVar6 = uVar6 | 0x100;
        }
      }
    }
  }
  else {
    if ((*(byte *)(local_60 + 0x150) & 1) != 0) {
      if (param_3 != 0) {
        uVar4 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_78[0] + 0x58));
        ossl_quic_reactor_tick(uVar4,0);
      }
      if (local_58 != 0) goto LAB_001081e1;
      uVar6 = 0;
LAB_00108323:
      if (local_50 == 0) {
        if ((param_2 & 4) != 0) {
          iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_60 + 0xa0));
          if (iVar3 != 0) {
            uVar6 = uVar6 | 4;
          }
        }
        if ((param_2 & 8) != 0) {
          iVar3 = ossl_quic_channel_is_terminated(*(undefined8 *)(local_60 + 0xa0));
          if (iVar3 != 0) {
            uVar6 = uVar6 | 8;
          }
        }
        if ((param_2 & 0x200) != 0) {
          uVar4 = ossl_quic_channel_get_qsm(*(undefined8 *)(local_60 + 0xa0));
          iVar3 = ossl_quic_stream_map_get_accept_queue_len(uVar4,0);
          if (iVar3 != 0) {
            uVar6 = uVar6 | 0x200;
          }
        }
        if ((param_2 & 0x400) != 0) {
          uVar4 = ossl_quic_channel_get_qsm(*(undefined8 *)(local_60 + 0xa0));
          iVar3 = ossl_quic_stream_map_get_accept_queue_len(uVar4,1);
          if (iVar3 != 0) {
            uVar6 = uVar6 | 0x400;
          }
        }
        if ((param_2 & 0x800) != 0) {
          if ((*(byte *)(local_60 + 0x150) & 0x20) != 0) goto LAB_00108370;
          iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_60 + 0xa0));
          if ((iVar3 == 0) &&
             (iVar3 = ossl_quic_channel_is_active(*(undefined8 *)(local_60 + 0xa0)), iVar3 != 0)) {
            lVar5 = ossl_quic_channel_get_local_stream_count_avail
                              (*(undefined8 *)(local_60 + 0xa0),0);
            if (lVar5 != 0) {
              uVar6 = uVar6 | 0x800;
            }
          }
        }
        if (((((param_2 & 0x1000) != 0) && ((*(byte *)(local_60 + 0x150) & 0x20) == 0)) &&
            (iVar3 = ossl_quic_channel_is_term_any(*(undefined8 *)(local_60 + 0xa0)), iVar3 == 0))
           && (iVar3 = ossl_quic_channel_is_active(*(undefined8 *)(local_60 + 0xa0)), iVar3 != 0)) {
          lVar5 = ossl_quic_channel_get_local_stream_count_avail(*(undefined8 *)(local_60 + 0xa0),1)
          ;
          if (lVar5 != 0) {
            uVar6 = uVar6 | 0x1000;
          }
        }
      }
      goto LAB_00108370;
    }
    uVar6 = (ulong)(param_2 & 0x80);
  }
  uVar4 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_78[0] + 0x58));
  ossl_crypto_mutex_unlock(uVar4);
  *param_4 = uVar6;
  uVar4 = 1;
LAB_0010816e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined4 ossl_quic_get_notifier_fd(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,0x87);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    uVar2 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_58[0] + 0x58));
    puVar3 = (undefined4 *)ossl_quic_reactor_get0_notifier(uVar2);
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *puVar3;
    }
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_unlock(uVar2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_enter_blocking_section(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,0x87);
  if (iVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    uVar2 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_58[0] + 0x58));
    ossl_quic_reactor_wait_ctx_enter(param_2,uVar2);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      ossl_crypto_mutex_unlock(uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_leave_blocking_section(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,local_58,0x87);
  if (iVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    ossl_crypto_mutex_lock(uVar2);
    uVar2 = ossl_quic_engine_get0_reactor(*(undefined8 *)(local_58[0] + 0x58));
    ossl_quic_reactor_wait_ctx_leave(param_2,uVar2);
    uVar2 = ossl_quic_engine_get0_mutex(*(undefined8 *)(local_58[0] + 0x58));
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      ossl_crypto_mutex_unlock(uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_conn_get_channel(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = expect_quic_as(param_1,auStack_48,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(local_30 + 0xa0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_quic_set_diag_title(long param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  
  CRYPTO_free(*(void **)(param_1 + 0x6e0));
  bVar2 = true;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  if (param_2 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(param_2,"ssl/quic/quic_impl.c",0x14d0);
    bVar2 = pcVar1 != (char *)0x0;
    *(char **)(param_1 + 0x6e0) = pcVar1;
  }
  return bVar2;
}



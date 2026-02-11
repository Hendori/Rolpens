
undefined8 fake_time(void)

{
  undefined1 auVar1 [16];
  
  time_counter = time_counter + 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = time_counter;
  if (SUB168(auVar1 * ZEXT816(1000000),8) == 0) {
    return SUB168(auVar1 * ZEXT816(1000000),0);
  }
  return 0xffffffffffffffff;
}



undefined8 test_tx_script(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = *(char **)(tx_scripts + (long)param_1 * 8);
  local_a8 = (undefined1  [16])0x0;
  local_88 = 0;
  local_68 = ZEXT816(0x5c0) << 0x40;
  local_98 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar5 = ossl_qtx_new(local_78);
  iVar4 = test_ptr("test/quic_record_test.c",0xe24,"qtx = ossl_qtx_new(&args)",lVar5);
  if (iVar4 == 0) {
LAB_00100160:
    uVar6 = 0;
  }
  else {
    cVar2 = *pcVar8;
    while (cVar2 != '\0') {
      switch(cVar2) {
      case '\x01':
        if (4 < *(byte *)**(undefined8 **)(pcVar8 + 0x18) - 1) {
          ossl_qtx_write_pkt(lVar5);
          iVar4 = test_true("test/quic_record_test.c",0xe4b,"ossl_qtx_write_pkt(qtx, op->pkt)");
          break;
        }
        uVar3 = *(uint *)(CSWTCH_18 + (ulong)(*(byte *)**(undefined8 **)(pcVar8 + 0x18) - 1) * 4);
        if (uVar3 < 4) {
          uVar6 = ossl_qtx_get_max_epoch_pkt_count(lVar5,uVar3);
          iVar4 = test_uint64_t_lt("test/quic_record_test.c",0xe43,"max_value","UINT64_MAX",uVar6,
                                   0xffffffffffffffff);
          if (iVar4 != 0) {
            lVar7 = ossl_qtx_get_cur_epoch_pkt_count(lVar5,uVar3);
            iVar4 = test_uint64_t_lt("test/quic_record_test.c",0xe47,"old_value","UINT64_MAX",lVar7,
                                     0xffffffffffffffff);
            if (iVar4 != 0) {
              iVar4 = ossl_qtx_write_pkt(lVar5,*(undefined8 *)(pcVar8 + 0x18));
              iVar4 = test_true("test/quic_record_test.c",0xe4b,"ossl_qtx_write_pkt(qtx, op->pkt)",
                                iVar4 != 0);
              if (iVar4 != 0) {
                lVar7 = lVar7 + 1;
LAB_0010032e:
                uVar6 = ossl_qtx_get_cur_epoch_pkt_count(lVar5,uVar3);
                iVar4 = test_uint64_t_eq("test/quic_record_test.c",0xe50,"old_value + 1","new_value"
                                         ,lVar7,uVar6);
                break;
              }
            }
          }
        }
        else {
          ossl_qtx_write_pkt(lVar5);
          iVar4 = test_true("test/quic_record_test.c",0xe4b,"ossl_qtx_write_pkt(qtx, op->pkt)");
          if (iVar4 != 0) {
            if (uVar3 != 4) {
              lVar7 = 1;
              goto LAB_0010032e;
            }
            goto LAB_00100120;
          }
        }
        goto LAB_00100160;
      case '\x02':
        ossl_qtx_provide_secret
                  (lVar5,*(undefined4 *)(pcVar8 + 0x20),*(undefined4 *)(pcVar8 + 0x24),0,
                   *(undefined8 *)(pcVar8 + 8),*(undefined8 *)(pcVar8 + 0x10));
        iVar4 = test_true("test/quic_record_test.c",0xe2a,
                          "ossl_qtx_provide_secret(qtx, op->enc_level, op->suite_id, NULL, op->buf, op->buf_len)"
                         );
        break;
      case '\x03':
        iVar4 = ossl_quic_provide_initial_secret
                          (0,0,*(undefined8 *)(pcVar8 + 0x28),*(undefined4 *)(pcVar8 + 0x24),0,lVar5
                          );
        iVar4 = test_true("test/quic_record_test.c",0xe30,
                          "ossl_quic_provide_initial_secret(NULL, NULL, op->dcid, (int)op->suite_id, NULL, qtx)"
                          ,iVar4 != 0);
        break;
      case '\x04':
        iVar4 = ossl_qtx_discard_enc_level(lVar5,*(undefined4 *)(pcVar8 + 0x20));
        iVar4 = test_true("test/quic_record_test.c",0xe37,
                          "ossl_qtx_discard_enc_level(qtx, op->enc_level)",iVar4 != 0);
        break;
      case '\x05':
        iVar4 = ossl_qtx_pop_net(lVar5,local_a8);
        iVar4 = test_true("test/quic_record_test.c",0xe56,"ossl_qtx_pop_net(qtx, &msg)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100160;
        iVar4 = test_mem_eq("test/quic_record_test.c",0xe59,"msg.data","op->buf",local_a8._0_8_,
                            local_a8._8_8_,*(undefined8 *)(pcVar8 + 8),
                            *(undefined8 *)(pcVar8 + 0x10));
        break;
      case '\x06':
        iVar4 = ossl_qtx_pop_net(lVar5,local_a8);
        iVar4 = test_false("test/quic_record_test.c",0xe5e,"ossl_qtx_pop_net(qtx, &msg)",iVar4 != 0)
        ;
        break;
      case '\a':
        iVar4 = ossl_qtx_trigger_key_update(lVar5);
        iVar4 = test_true("test/quic_record_test.c",0xe62,"ossl_qtx_trigger_key_update(qtx)",
                          iVar4 != 0);
        break;
      default:
        OPENSSL_die("assertion failed: 0","test/quic_record_test.c",0xe66);
        goto LAB_00100466;
      }
      if (iVar4 == 0) goto LAB_00100160;
LAB_00100120:
      pcVar1 = pcVar8 + 0x30;
      pcVar8 = pcVar8 + 0x30;
      cVar2 = *pcVar1;
    }
    uVar6 = 1;
  }
  if (lVar5 != 0) {
    ossl_qtx_free(lVar5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00100466:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rx_state_ensure(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = ossl_quic_demux_new(0,param_1[5],0x100000,0);
    *param_1 = lVar2;
    iVar1 = test_ptr("test/quic_record_test.c",0x6f3,
                     "s->demux = ossl_quic_demux_new(NULL, s->args.short_conn_id_len, fake_time, NULL)"
                     ,lVar2);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = *param_1;
  }
  param_1[4] = lVar2;
  param_1[6] = 0x20;
  if (param_1[1] == 0) {
    lVar2 = ossl_qrx_new(param_1 + 2);
    param_1[1] = lVar2;
    iVar1 = test_ptr("test/quic_record_test.c",0x6fe,"s->qrx = ossl_qrx_new(&s->args)",lVar2);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = *param_1;
  }
  ossl_quic_demux_set_default_handler(lVar2,demux_default_handler,param_1);
  if ((int)param_1[0x10] != 0) {
    ossl_qrx_allow_1rtt_processing(param_1[1]);
  }
  return 1;
}



void rx_state_teardown(long *param_1)

{
  if ((SSL *)param_1[0xc] != (SSL *)0x0) {
    SSL_free((SSL *)param_1[0xc]);
    param_1[0xc] = 0;
  }
  if ((SSL_CTX *)param_1[0xb] != (SSL_CTX *)0x0) {
    SSL_CTX_free((SSL_CTX *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[1] != 0) {
    ossl_qrx_free();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    ossl_quic_demux_free();
    *param_1 = 0;
  }
  return;
}



void demux_default_handler(undefined8 param_1,long param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  
  if (param_3 == (byte *)0x0) {
    return;
  }
  bVar1 = *param_3;
  if ((*(byte *)(param_2 + 0x68) == bVar1) && (bVar1 < 0x15)) {
    iVar2 = memcmp(param_3 + 1,(void *)(param_2 + 0x69),(ulong)bVar1);
    if (iVar2 == 0) {
      ossl_qrx_inject_urxe(*(undefined8 *)(param_2 + 8),param_1);
      return;
    }
  }
  return;
}



bool cmp_pkt_hdr_constprop_0
               (undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    param_3 = *(long *)(param_2 + 0x50);
    param_4 = *(undefined8 *)(param_2 + 0x48);
  }
  iVar2 = test_int_eq("test/quic_record_test_util.h",0x18,"a->type","b->type",*param_1,*param_2);
  if (((((iVar2 == 0) ||
        (iVar2 = test_int_eq("test/quic_record_test_util.h",0x19,"a->spin_bit","b->spin_bit",
                             param_1[1] & 1,param_2[1] & 1), iVar2 == 0)) ||
       (iVar2 = test_int_eq("test/quic_record_test_util.h",0x1a,"a->key_phase","b->key_phase",
                            (byte)param_1[1] >> 1 & 1,(byte)param_2[1] >> 1 & 1), iVar2 == 0)) ||
      (((iVar2 = test_int_eq("test/quic_record_test_util.h",0x1b,"a->pn_len","b->pn_len",
                             (byte)param_1[1] >> 2 & 0xf,(byte)param_2[1] >> 2 & 0xf), iVar2 == 0 ||
        (iVar2 = test_int_eq("test/quic_record_test_util.h",0x1c,"a->partial","b->partial",
                             (byte)param_1[1] >> 6 & 1,(byte)param_2[1] >> 6 & 1), iVar2 == 0)) ||
       ((iVar2 = test_int_eq("test/quic_record_test_util.h",0x1d,"a->fixed","b->fixed",
                             (byte)param_1[1] >> 7,(byte)param_2[1] >> 7), iVar2 == 0 ||
        ((iVar2 = test_int_eq("test/quic_record_test_util.h",0x1e,"a->unused","b->unused",
                              param_1[2] & 0xf,param_2[2] & 0xf), iVar2 == 0 ||
         (iVar2 = test_int_eq("test/quic_record_test_util.h",0x1f,"a->reserved","b->reserved",
                              (byte)param_1[2] >> 4 & 3,(byte)param_2[2] >> 4 & 3), iVar2 == 0))))))
      )) || (iVar2 = test_uint_eq("test/quic_record_test_util.h",0x20,"a->version","b->version",
                                  *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4)),
            iVar2 == 0)) {
LAB_00100666:
    bVar3 = false;
  }
  else {
    bVar1 = param_1[8];
    if ((param_2[8] == bVar1) && (bVar1 < 0x15)) {
      iVar2 = memcmp(param_1 + 9,param_2 + 9,(ulong)bVar1);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = false;
    }
    iVar2 = test_true("test/quic_record_test_util.h",0x21,
                      "ossl_quic_conn_id_eq(&a->dst_conn_id, &b->dst_conn_id)",bVar3);
    if (iVar2 == 0) goto LAB_00100666;
    bVar1 = param_1[0x1d];
    if ((param_2[0x1d] == bVar1) && (bVar1 < 0x15)) {
      iVar2 = memcmp(param_1 + 0x1e,param_2 + 0x1e,(ulong)bVar1);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = false;
    }
    iVar2 = test_true("test/quic_record_test_util.h",0x22,
                      "ossl_quic_conn_id_eq(&a->src_conn_id, &b->src_conn_id)",bVar3);
    if (((iVar2 == 0) ||
        (iVar2 = test_mem_eq("test/quic_record_test_util.h",0x23,"a->pn","b->pn",param_1 + 0x32,4,
                             param_2 + 0x32,4), iVar2 == 0)) ||
       (iVar2 = test_size_t_eq("test/quic_record_test_util.h",0x24,"a->token_len","b->token_len",
                               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40)),
       iVar2 == 0)) goto LAB_00100666;
    iVar2 = test_uint64_t_eq("test/quic_record_test_util.h",0x25,"a->len","b->len",
                             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
    bVar3 = iVar2 != 0;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
LAB_00100679:
    iVar2 = test_ptr_null("test/quic_record_test_util.h",0x2c,"a->token",
                          *(undefined8 *)(param_1 + 0x38));
    if (iVar2 == 0) {
      bVar3 = false;
      goto LAB_00100695;
    }
LAB_0010072e:
    if (*(long *)(param_2 + 0x40) != 0) goto LAB_00100695;
  }
  else if (*(long *)(param_2 + 0x40) != 0) {
    iVar2 = test_mem_eq("test/quic_record_test_util.h",0x29,"a->token","b->token",
                        *(undefined8 *)(param_1 + 0x38),*(long *)(param_1 + 0x40),
                        *(undefined8 *)(param_2 + 0x38),*(long *)(param_2 + 0x40));
    if (iVar2 == 0) {
      bVar3 = false;
    }
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_00100679;
    goto LAB_0010072e;
  }
  iVar2 = test_ptr_null("test/quic_record_test_util.h",0x2d,"b->token",
                        *(undefined8 *)(param_2 + 0x38));
  if (iVar2 == 0) {
    bVar3 = false;
  }
LAB_00100695:
  iVar2 = test_mem_eq("test/quic_record_test_util.h",0x30,"a->data","b_data",
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),param_3,
                      param_4);
  if (iVar2 == 0) {
    bVar3 = false;
  }
  return bVar3;
}



int test_rx_script(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  long *local_d0;
  undefined8 local_c8 [5];
  ulong local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (long *)0x0;
  pcVar7 = *(char **)(rx_scripts + (long)param_1 * 8);
  puVar6 = local_c8;
  for (lVar5 = 0x11; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  cVar1 = *pcVar7;
  if (cVar1 == '\0') {
    iVar3 = 1;
  }
  else {
    lVar5 = -1;
    do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar1) {
      case '\x01':
        rx_state_teardown(local_c8);
        local_a0 = (ulong)*(uint *)(pcVar7 + 0x20);
        break;
      case '\x02':
        rx_state_teardown(local_c8);
        local_90 = *(undefined8 *)(pcVar7 + 0x28);
        uStack_88 = local_90;
        local_80 = local_90;
        break;
      case '\x03':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x71e,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        puVar6 = *(undefined8 **)(pcVar7 + 0x30);
        local_60 = *puVar6;
        uStack_58 = (undefined5)puVar6[1];
        uStack_53 = (undefined3)*(undefined8 *)((long)puVar6 + 0xd);
        uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)puVar6 + 0xd) >> 0x18);
        break;
      case '\x04':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x73a,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        iVar3 = ossl_quic_demux_inject
                          (local_c8[0],*(undefined8 *)(pcVar7 + 8),*(undefined8 *)(pcVar7 + 0x10),0,
                           0);
        iVar3 = test_true("test/quic_record_test.c",0x73c,
                          "ossl_quic_demux_inject(s.demux, op->buf, op->buf_len, NULL, NULL)",
                          iVar3 != 0);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_00100bc5;
        }
        break;
      case '\x05':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x723,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        iVar3 = ossl_qrx_provide_secret
                          (local_c8[1],*(undefined4 *)(pcVar7 + 0x20),*(undefined4 *)(pcVar7 + 0x24)
                           ,0,*(undefined8 *)(pcVar7 + 8));
        iVar3 = test_true("test/quic_record_test.c",0x725,
                          "ossl_qrx_provide_secret(s.qrx, op->enc_level, op->suite_id, NULL, op->buf, op->buf_len)"
                          ,iVar3 != 0);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_00100bc5;
        }
        break;
      case '\x06':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x72c,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        iVar3 = ossl_quic_provide_initial_secret(0,0,*(undefined8 *)(pcVar7 + 0x30),0,local_c8[1],0)
        ;
        iVar3 = test_true("test/quic_record_test.c",0x72e,
                          "ossl_quic_provide_initial_secret(NULL, NULL, op->dcid, 0, s.qrx, NULL)",
                          iVar3 != 0);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_00100bc5;
        }
        break;
      case '\a':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x734,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        iVar3 = ossl_qrx_discard_enc_level(local_c8[1],*(undefined4 *)(pcVar7 + 0x20));
        iVar3 = test_true("test/quic_record_test.c",0x736,
                          "ossl_qrx_discard_enc_level(s.qrx, op->enc_level)",iVar3 != 0);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_00100bc5;
        }
        break;
      case '\b':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x742,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        iVar3 = ossl_qrx_read_pkt(local_c8[1],&local_d0);
        iVar3 = test_true("test/quic_record_test.c",0x745,"ossl_qrx_read_pkt(s.qrx, &pkt)",
                          iVar3 != 0);
        if ((((iVar3 == 0) ||
             (iVar3 = test_ptr("test/quic_record_test.c",0x748,&_LC55,local_d0), iVar3 == 0)) ||
            (iVar3 = test_ptr("test/quic_record_test.c",0x748,"pkt->hdr",*local_d0), iVar3 == 0)) ||
           (iVar3 = test_mem_eq("test/quic_record_test.c",0x74b,"pkt->hdr->data","op->buf",
                                *(undefined8 *)(*local_d0 + 0x50),*(undefined8 *)(*local_d0 + 0x48),
                                *(undefined8 *)(pcVar7 + 8),*(undefined8 *)(pcVar7 + 0x10)),
           iVar3 == 0)) goto LAB_00100bc5;
        iVar3 = cmp_pkt_hdr_constprop_0
                          (*local_d0,*(undefined8 *)(pcVar7 + 0x18),*(undefined8 *)(pcVar7 + 8),
                           *(undefined8 *)(pcVar7 + 0x10));
        iVar3 = test_true("test/quic_record_test.c",0x74f,
                          "cmp_pkt_hdr(pkt->hdr, op->hdr, op->buf, op->buf_len, 1)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        lVar5 = local_d0[7];
        ossl_qrx_pkt_release();
        local_d0 = (long *)0x0;
        break;
      case '\t':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x759,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        iVar3 = ossl_qrx_read_pkt(local_c8[1],&local_d0);
        iVar3 = test_false("test/quic_record_test.c",0x75c,"ossl_qrx_read_pkt(s.qrx, &pkt)",
                           iVar3 != 0);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_00100bc5;
        }
        break;
      case '\n':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x761,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        uVar2 = *(undefined8 *)(pcVar7 + 0x28);
        uVar4 = ossl_qrx_get_key_epoch(local_c8[1]);
        iVar3 = test_uint64_t_eq("test/quic_record_test.c",0x764,"ossl_qrx_get_key_epoch(s.qrx)",
                                 "op->largest_pn",uVar4,uVar2);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_00100bc5;
        }
        break;
      case '\v':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x772,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_00100bc5;
        iVar3 = ossl_qrx_key_update_timeout(local_c8[1],*(undefined4 *)(pcVar7 + 0x20));
        iVar3 = test_true("test/quic_record_test.c",0x775,
                          "ossl_qrx_key_update_timeout(s.qrx, op->enc_level)",iVar3 != 0);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_00100bc5;
        }
        break;
      case '\f':
        rx_state_teardown(local_c8);
        local_78 = (undefined1)*(undefined4 *)(pcVar7 + 0x20);
        break;
      case '\r':
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x76a,"rx_state_ensure(&s)",iVar3 != 0);
        if (iVar3 != 0) {
          iVar3 = test_uint64_t_eq("test/quic_record_test.c",0x76d,"last_key_epoch","op->largest_pn"
                                   ,lVar5,*(undefined8 *)(pcVar7 + 0x28));
          goto joined_r0x00100b44;
        }
        goto LAB_00100bc5;
      case '\x0e':
        local_48 = 1;
        iVar3 = rx_state_ensure(local_c8);
        iVar3 = test_true("test/quic_record_test.c",0x781,"rx_state_ensure(&s)",iVar3 != 0);
joined_r0x00100b44:
        if (iVar3 == 0) goto LAB_00100bc5;
        break;
      default:
        OPENSSL_die("assertion failed: 0","test/quic_record_test.c",0x786);
        goto LAB_001010ef;
      }
      cVar1 = pcVar7[0x40];
      pcVar7 = pcVar7 + 0x40;
    } while (cVar1 != '\0');
    iVar3 = 1;
  }
LAB_00100bc5:
  ossl_qrx_pkt_release(local_d0);
  rx_state_teardown(local_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
LAB_001010ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_wire_pkt_hdr_actual(int param_1,undefined1 param_2,uint param_3,ulong param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *ptr;
  void *__dest;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  undefined8 *puVar13;
  char *pcVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined8 uVar17;
  undefined8 local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  uint uVar11;
  char *pcVar12;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  pcVar1 = *(char **)(pkt_hdr_tests + (long)param_1 * 8);
  puVar13 = local_c8;
  for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  local_178 = (undefined1  [16])0x0;
  local_68 = 0x706050403020100;
  local_190 = 0;
  local_118 = 0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  uVar15 = *(ulong *)(pcVar1 + 0x80);
  uVar8 = *(ulong *)(pcVar1 + 0x60);
  bVar16 = param_4 < uVar15;
  local_60 = (ulong)CONCAT11(param_2,(char)param_1);
  local_58 = (undefined1  [16])0x0;
  if (((uVar15 < param_4) && (param_4 < uVar8)) && (*pcVar1 == '\x06')) {
    bVar16 = ((int)param_4 - (int)uVar15 & 3U) != 0 || bVar16;
  }
  if (2 < param_3) {
    bVar16 = false;
    __dest = (void *)0x0;
    ptr = (void *)0x0;
    goto LAB_00101245;
  }
  iVar5 = *(int *)(CSWTCH_40 + (ulong)param_3 * 4);
  ptr = CRYPTO_malloc(20000,"test/quic_record_test.c",0xaf1);
  iVar3 = test_ptr("test/quic_record_test.c",0xaf1,"buf = OPENSSL_malloc(TEST_PKT_BUF_LEN)",ptr);
  if (iVar3 != 0) {
    iVar3 = WPACKET_init_static_len(local_108,ptr,20000,0);
    iVar3 = test_true("test/quic_record_test.c",0xaf4,
                      "WPACKET_init_static_len(&wpkt, buf, TEST_PKT_BUF_LEN, 0)",iVar3 != 0);
    if (iVar3 == 0) {
      __dest = (void *)0x0;
      bVar16 = false;
      goto LAB_00101245;
    }
    if (-1 < (long)param_4) {
      local_188._8_8_ = param_4;
      local_188._0_8_ = *(undefined8 *)(pcVar1 + 0x58);
    }
    iVar3 = test_true("test/quic_record_test.c",0xaf7,
                      "PACKET_buf_init(&pkt, t->expected, trunc_len)",-1 < (long)param_4);
    if (iVar3 != 0) {
      uVar17 = 0;
      uVar4 = ossl_quic_wire_decode_pkt_hdr
                        (local_188,*(undefined8 *)(pcVar1 + 0x78),0,0,local_c8,local_178);
      iVar3 = test_int_eq("test/quic_record_test.c",0xafa,
                          "ossl_quic_wire_decode_pkt_hdr(&pkt, t->short_conn_id_len, 0, 0, &hdr, &ptrs, NULL)"
                          ,"!expect_fail",uVar4,bVar16 ^ 1);
      if (iVar3 != 0) {
        if (bVar16 != false || param_4 < uVar8) {
LAB_00101412:
          bVar16 = true;
          __dest = (void *)0x0;
          goto LAB_00101245;
        }
        iVar3 = cmp_pkt_hdr_constprop_0
                          (local_c8,pcVar1,*(undefined8 *)(pcVar1 + 0x68),
                           *(undefined8 *)(pcVar1 + 0x70),uVar17);
        iVar3 = test_true("test/quic_record_test.c",0xb00,
                          "cmp_pkt_hdr(&hdr, &t->hdr, t->payload, t->payload_len, 1)",iVar3 != 0);
        if (iVar3 != 0) {
          iVar3 = test_ptr_eq("test/quic_record_test.c",0xb03,"ptrs.raw_start","t->expected",
                              local_178._0_8_,*(undefined8 *)(pcVar1 + 0x58));
          if (iVar3 != 0) {
            if (*(long *)(pcVar1 + 0x88) == -1) {
              iVar3 = test_ptr_null("test/quic_record_test.c",0xb07,"ptrs.raw_pn",local_168._8_8_);
            }
            else {
              iVar3 = test_ptr_eq("test/quic_record_test.c",0xb0a,"ptrs.raw_pn",
                                  "t->expected + t->pn_offset",local_168._8_8_,
                                  *(long *)(pcVar1 + 0x88) + *(long *)(pcVar1 + 0x58));
            }
            if (iVar3 != 0) {
              if (*(long *)(pcVar1 + 0x90) == -1) {
LAB_0010153b:
                iVar3 = ossl_quic_wire_encode_pkt_hdr
                                  (local_108,*(undefined8 *)(pcVar1 + 0x78),local_c8,local_158);
                iVar3 = test_true("test/quic_record_test.c",0xb16,
                                  "ossl_quic_wire_encode_pkt_hdr(&wpkt, t->short_conn_id_len, &hdr, &wptrs)"
                                  ,iVar3 != 0);
                if (iVar3 != 0) {
                  iVar3 = WPACKET_memcpy(local_108,*(undefined8 *)(pcVar1 + 0x68),
                                         *(undefined8 *)(pcVar1 + 0x70));
                  iVar3 = test_true("test/quic_record_test.c",0xb19,
                                    "WPACKET_memcpy(&wpkt, t->payload, t->payload_len)",iVar3 != 0);
                  if (iVar3 != 0) {
                    iVar3 = WPACKET_get_total_written(local_108,&local_190);
                    iVar3 = test_true("test/quic_record_test.c",0xb1c,
                                      "WPACKET_get_total_written(&wpkt, &l)",iVar3 != 0);
                    if ((iVar3 != 0) &&
                       (iVar3 = test_mem_eq("test/quic_record_test.c",0xb1f,&_LC80,"t->expected",ptr
                                            ,local_190,*(undefined8 *)(pcVar1 + 0x58),
                                            *(undefined8 *)(pcVar1 + 0x60)), iVar3 != 0)) {
                      if (*(long *)(pcVar1 + 0x90) == -1) goto LAB_00101412;
                      iVar5 = ossl_quic_hdr_protector_init
                                        (local_138,0,0,param_3 + 1,&local_68,(long)iVar5);
                      iVar5 = test_true("test/quic_record_test.c",0xb24,
                                        "ossl_quic_hdr_protector_init(&hpr, NULL, NULL, hpr_cipher_id, hpr_key, hpr_key_len)"
                                        ,iVar5 != 0);
                      if (iVar5 != 0) {
                        __dest = CRYPTO_malloc((int)*(undefined8 *)(pcVar1 + 0x60),
                                               "test/quic_record_test.c",0xb30);
                        iVar5 = test_ptr("test/quic_record_test.c",0xb31,&_LC82,__dest);
                        bVar16 = false;
                        if (iVar5 != 0) {
                          memcpy(__dest,*(void **)(pcVar1 + 0x58),*(size_t *)(pcVar1 + 0x60));
                          local_168._8_8_ = (local_168._8_8_ - local_178._0_8_) + (long)__dest;
                          local_178._8_8_ = (local_178._8_8_ - local_178._0_8_) + (long)__dest;
                          local_178._0_8_ = __dest;
                          iVar5 = ossl_quic_hdr_protector_encrypt(local_138,local_178);
                          iVar5 = test_true("test/quic_record_test.c",0xb3a,
                                            "ossl_quic_hdr_protector_encrypt(&hpr, &ptrs)",
                                            iVar5 != 0);
                          if (iVar5 != 0) {
                            pcVar14 = "test/quic_record_test.c";
                            for (uVar15 = 0; uVar15 < *(ulong *)(pcVar1 + 0x60); uVar15 = uVar15 + 1
                                ) {
                              bVar10 = *(byte *)(*(long *)(pcVar1 + 0x58) + uVar15) ^
                                       *(byte *)((long)__dest + uVar15);
                              pcVar12 = (char *)(ulong)bVar10;
                              uVar11 = (uint)bVar10;
                              if (uVar15 == 0) {
                                lVar7 = 0;
                                bVar2 = 0xf0;
                                pcVar12 = pcVar14;
                                uVar11 = (uint)bVar10;
                                if (*pcVar1 != '\x05') goto LAB_001017eb;
                                bVar2 = 0xe0;
                                goto LAB_001017eb;
                              }
                              uVar8 = *(ulong *)(pcVar1 + 0x88);
                              if (uVar15 < uVar8) {
                                uVar6 = 0xffffffff;
                              }
                              else {
                                uVar6 = 0xffffffff;
                                if (uVar15 < ((byte)pcVar1[1] >> 2 & 0xf) + uVar8) {
LAB_001018de:
                                  uVar11 = (uint)pcVar12;
                                  lVar7 = (uVar15 - uVar8) * 8 + 5;
                                  bVar2 = 0;
                                  pcVar12 = pcVar14;
LAB_001017eb:
                                  uVar8 = 0;
                                  lVar9 = (lVar7 + (long)(int)param_3 * 0x25) * 4;
                                  do {
                                    pcVar14 = pcVar12;
                                    if ((bVar2 >> ((uint)uVar8 & 0x1f) & 1) == 0) {
                                      if (0x24 < lVar7 + uVar8) goto LAB_001018ca;
                                      if (((uVar11 & 0xff) >> ((uint)uVar8 & 0x1f) & 1) == 0) {
                                        *(int *)((long)&counts_u + lVar9) =
                                             *(int *)((long)&counts_u + lVar9) + 1;
                                      }
                                      else {
                                        *(int *)((long)&counts_c + lVar9) =
                                             *(int *)((long)&counts_c + lVar9) + 1;
                                      }
                                    }
                                    uVar8 = uVar8 + 1;
                                    lVar9 = lVar9 + 4;
                                    if (uVar8 == 8) {
                                      uVar6 = (uint)bVar2;
                                      break;
                                    }
                                  } while( true );
                                }
                              }
                              iVar5 = test_int_eq(pcVar14,0xb5b,"d & rej_mask",&_LC85,
                                                  uVar6 & uVar11 & 0xff,0);
                              if (iVar5 == 0) goto LAB_001017a1;
                            }
                            iVar5 = ossl_quic_hdr_protector_decrypt(local_138,local_178);
                            iVar5 = test_true(pcVar14,0xb60,
                                              "ossl_quic_hdr_protector_decrypt(&hpr, &ptrs)",
                                              iVar5 != 0);
                            if (iVar5 != 0) {
                              iVar5 = test_mem_eq(pcVar14,0xb63,&_LC82,"t->expected",__dest,
                                                  *(undefined8 *)(pcVar1 + 0x60),
                                                  *(undefined8 *)(pcVar1 + 0x58),
                                                  *(undefined8 *)(pcVar1 + 0x60));
                              bVar16 = iVar5 != 0;
                            }
                          }
                        }
LAB_001017a1:
                        ossl_quic_hdr_protector_cleanup(local_138);
                        goto LAB_00101245;
                      }
                    }
                  }
                }
              }
              else {
                iVar3 = test_ptr_eq("test/quic_record_test.c",0xb0f,"ptrs.raw_sample",
                                    "t->expected + t->sample_offset",local_178._8_8_,
                                    *(long *)(pcVar1 + 0x90) + *(long *)(pcVar1 + 0x58));
                if (iVar3 != 0) {
                  iVar3 = test_size_t_eq("test/quic_record_test.c",0xb11,"ptrs.raw_sample_len",
                                         "t->expected_len - t->sample_offset",local_168._0_8_,
                                         *(long *)(pcVar1 + 0x60) - *(long *)(pcVar1 + 0x90));
                  if (iVar3 != 0) goto LAB_0010153b;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar16 = false;
  __dest = (void *)0x0;
LAB_00101245:
  WPACKET_finish(local_108);
  CRYPTO_free(ptr);
  CRYPTO_free(__dest);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001018ca:
  OPENSSL_die("assertion failed: jrel + j < OSSL_NELEM(counts_u[cipher])",pcVar12,0xb53);
  goto LAB_001018de;
}



undefined8 test_wire_pkt_hdr(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  
  puVar5 = &counts_c;
  puVar4 = &counts_u;
  if (param_1 == 0xf0) {
    do {
      lVar7 = 0;
      do {
        iVar2 = test_uint_gt("test/quic_record_test.c",0xb94,"counts_u[cipher][i]",&_LC85,
                             puVar4[lVar7],0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = test_uint_gt("test/quic_record_test.c",0xb96,"counts_c[cipher][i]",&_LC85,
                             puVar5[lVar7],0);
        if (iVar2 == 0) {
          return 0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x25);
      puVar4 = puVar4 + 0x25;
      puVar5 = puVar5 + 0x25;
    } while (puVar4 != (undefined4 *)&DAT_0010219c);
  }
  else {
    iVar2 = param_1 / 3;
    iVar3 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar3 = iVar3 >> 2;
    lVar7 = *(long *)(pkt_hdr_tests + (long)iVar3 * 8);
    iVar1 = test_wire_pkt_hdr_actual(iVar3,iVar2 % 4,param_1 % 3,*(undefined8 *)(lVar7 + 0x60));
    iVar1 = test_true("test/quic_record_test.c",0xb79,
                      "test_wire_pkt_hdr_actual(tidx, repeat, cipher, t->expected_len)",iVar1 != 0);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(long *)(lVar7 + 0x60) != 0) {
      uVar6 = 0;
      do {
        iVar1 = test_wire_pkt_hdr_actual(iVar3,iVar2 % 4,param_1 % 3,uVar6);
        iVar1 = test_true("test/quic_record_test.c",0xb7f,
                          "test_wire_pkt_hdr_actual(tidx, repeat, cipher, i)",iVar1 != 0);
        if (iVar1 == 0) {
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(lVar7 + 0x60));
    }
  }
  return 1;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_rx_script",test_rx_script,9,1);
  add_all_tests("test_wire_pkt_hdr",test_wire_pkt_hdr,0xf1,1);
  add_all_tests("test_tx_script",test_tx_script,6,1);
  return 1;
}




undefined8 fake_now(void)

{
  return fake_time;
}



int net_pkt_cmp(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + 0x18)) {
    iVar1 = -(uint)(*(ulong *)(param_1 + 0x18) < *(ulong *)(param_2 + 0x18));
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_sanity(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1  [16])0x0;
  local_f0 = 0x5c0;
  local_e8 = 0xffffffffffffffff;
  local_e0 = 0xffffffffffffffff;
  fake_time = 5000000000;
  local_c8 = (undefined1  [16])0x0;
  lVar2 = (*_ossl_cc_newreno_method)(0x100000,0);
  iVar1 = test_ptr("test/quic_cc_test.c",0x1f1,"cc = ccm->new(fake_now, NULL)",lVar2);
  if (iVar1 != 0) {
    OSSL_PARAM_construct_size_t(&local_128,"max_dgram_payload_len",&local_f0);
    local_98 = local_108;
    local_b8 = local_128;
    uStack_b0 = uStack_120;
    local_a8 = local_118;
    uStack_a0 = uStack_110;
    OSSL_PARAM_construct_end(&local_128);
    local_70 = local_108;
    local_90 = local_128;
    uStack_88 = uStack_120;
    local_80 = local_118;
    uStack_78 = uStack_110;
    iVar1 = (*_OSSL_PARAM_construct_end)(lVar2,&local_b8);
    iVar1 = test_true("test/quic_cc_test.c",0x1f9,"ccm->set_input_params(cc, params)",iVar1 != 0);
    if (iVar1 != 0) {
      (*_OSSL_PARAM_construct_size_t)(lVar2);
      OSSL_PARAM_construct_size_t(&local_128,"max_dgram_payload_len",&local_e8);
      local_a8 = local_118;
      uStack_a0 = uStack_110;
      local_98 = local_108;
      local_b8 = local_128;
      uStack_b0 = uStack_120;
      OSSL_PARAM_construct_uint64(&local_128,"bytes_in_flight",&local_e0);
      local_70 = local_108;
      local_90 = local_128;
      uStack_88 = uStack_120;
      local_80 = local_118;
      uStack_78 = uStack_110;
      OSSL_PARAM_construct_end(&local_128);
      local_48 = local_108;
      local_68 = local_128;
      uStack_60 = uStack_120;
      local_58 = local_118;
      uStack_50 = uStack_110;
      iVar1 = (*_test_true)(lVar2,&local_b8);
      iVar1 = test_true("test/quic_cc_test.c",0x205,"ccm->bind_diagnostics(cc, params)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_size_t_eq("test/quic_cc_test.c",0x206,"diag_mdpl",&_LC6,local_e8,0x5c0);
        if (iVar1 != 0) {
          lVar3 = (*_test_size_t_eq)(lVar2);
          iVar1 = test_uint64_t_ge("test/quic_cc_test.c",0x209,
                                   "allowance = ccm->get_tx_allowance(cc)",&_LC6,lVar3,0x5c0);
          if (iVar1 != 0) {
            lVar4 = (*_test_uint64_t_ge)(lVar2);
            iVar1 = test_true("test/quic_cc_test.c",0x20d,
                              "ossl_time_is_zero(ccm->get_wakeup_deadline(cc))",lVar4 == 0);
            if (iVar1 != 0) {
              iVar1 = test_uint64_t_eq("test/quic_cc_test.c",0x211,"diag_cur_bytes_in_flight",&_LC10
                                       ,local_e0,0);
              if (iVar1 != 0) {
                iVar1 = (*_test_uint64_t_eq)(lVar2,0x4b0);
                iVar1 = test_true("test/quic_cc_test.c",0x215,"ccm->on_data_sent(cc, 1200)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  uVar5 = (*_test_size_t_eq)(lVar2);
                  iVar1 = test_uint64_t_eq("test/quic_cc_test.c",0x219,"ccm->get_tx_allowance(cc)",
                                           "allowance - 1200",uVar5,lVar3 + -0x4b0);
                  if (iVar1 != 0) {
                    local_c8._8_8_ = 0x4b0;
                    local_c8._0_8_ = fake_time;
                    bVar7 = 0xfffffffffa0a1eff < fake_time;
                    fake_time = fake_time + 100000000;
                    if (bVar7) {
                      fake_time = 0xffffffffffffffff;
                    }
                    iVar1 = (*_test_uint64_t_ne)(lVar2,local_c8);
                    iVar1 = test_true("test/quic_cc_test.c",0x220,
                                      "ccm->on_data_acked(cc, &ack_info)",iVar1 != 0);
                    if (iVar1 != 0) {
                      uVar5 = (*_test_size_t_eq)(lVar2);
                      iVar1 = test_uint64_t_ge("test/quic_cc_test.c",0x224,
                                               "allowance2 = ccm->get_tx_allowance(cc)","allowance",
                                               uVar5,lVar3);
                      if (iVar1 != 0) {
                        iVar1 = (*_test_uint64_t_eq)(lVar2,0x4b0);
                        iVar1 = test_true("test/quic_cc_test.c",0x228,"ccm->on_data_sent(cc, 1200)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          uVar6 = (*_test_size_t_eq)(lVar2);
                          iVar1 = test_uint64_t_eq("test/quic_cc_test.c",0x22c,
                                                   "ccm->get_tx_allowance(cc)","allowance - 1200",
                                                   uVar6,lVar3 + -0x4b0);
                          if (iVar1 != 0) {
                            iVar1 = (*_CRYPTO_free)(lVar2,0x4b0);
                            iVar1 = test_true("test/quic_cc_test.c",0x22f,
                                              "ccm->on_data_invalidated(cc, 1200)",iVar1 != 0);
                            if (iVar1 != 0) {
                              uVar6 = (*_test_size_t_eq)(lVar2);
                              iVar1 = test_uint64_t_eq("test/quic_cc_test.c",0x233,
                                                       "ccm->get_tx_allowance(cc)","allowance2",
                                                       uVar6,uVar5);
                              if (iVar1 != 0) {
                                lVar3 = (*_test_size_t_eq)(lVar2);
                                iVar1 = test_uint64_t_ge("test/quic_cc_test.c",0x237,
                                                         "allowance = ccm->get_tx_allowance(cc)",
                                                         "1200 + 1300",lVar3,0x9c4);
                                if (iVar1 != 0) {
                                  iVar1 = (*_test_uint64_t_eq)(lVar2,0x4b0);
                                  iVar1 = test_true("test/quic_cc_test.c",0x23a,
                                                    "ccm->on_data_sent(cc, 1200)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = (*_test_uint64_t_eq)(lVar2,0x514);
                                    iVar1 = test_true("test/quic_cc_test.c",0x23d,
                                                      "ccm->on_data_sent(cc, 1300)",iVar1 != 0);
                                    if (iVar1 != 0) {
                                      uVar5 = (*_test_size_t_eq)(lVar2);
                                      iVar1 = test_uint64_t_eq("test/quic_cc_test.c",0x240,
                                                                                                                              
                                                  "allowance2 = ccm->get_tx_allowance(cc)",
                                                  "allowance - 1200 - 1300",uVar5,lVar3 + -0x9c4);
                                      if (iVar1 != 0) {
                                        local_d8._8_8_ = 0x4b0;
                                        local_d8._0_8_ = fake_time;
                                        bVar7 = 0xfffffffffa0a1eff < fake_time;
                                        fake_time = fake_time + 100000000;
                                        if (bVar7) {
                                          fake_time = 0xffffffffffffffff;
                                        }
                                        iVar1 = (*_test_uint64_t_lt)(lVar2,local_d8);
                                        iVar1 = test_true("test/quic_cc_test.c",0x248,
                                                          "ccm->on_data_lost(cc, &loss_info)",
                                                          iVar1 != 0);
                                        if (iVar1 != 0) {
                                          local_d8._8_8_ = 0x514;
                                          iVar1 = (*_test_uint64_t_lt)(lVar2,local_d8);
                                          iVar1 = test_true("test/quic_cc_test.c",0x24c,
                                                            "ccm->on_data_lost(cc, &loss_info)",
                                                            iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = (*___stack_chk_fail)(lVar2,0);
                                            iVar1 = test_true("test/quic_cc_test.c",0x24f,
                                                              "ccm->on_data_lost_finished(cc, 0)",
                                                              iVar1 != 0);
                                            if (iVar1 != 0) {
                                              uVar6 = (*_test_size_t_eq)(lVar2);
                                              iVar1 = test_uint64_t_ne("test/quic_cc_test.c",0x253,
                                                                       "ccm->get_tx_allowance(cc)",
                                                                       "allowance2",uVar6,uVar5);
                                              if (iVar1 != 0) {
                                                uVar5 = (*_test_size_t_eq)(lVar2);
                                                iVar1 = test_uint64_t_lt("test/quic_cc_test.c",599,
                                                                         "ccm->get_tx_allowance(cc)"
                                                                         ,"allowance",uVar5,lVar3);
                                                bVar7 = iVar1 != 0;
                                                goto LAB_001000c8;
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
  bVar7 = false;
LAB_001000c8:
  if (lVar2 != 0) {
    (*_test_ptr)(lVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void do_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined1 net_sim_process_one(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 *ptr;
  long in_FS_OFFSET;
  undefined1 uVar4;
  bool bVar5;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (undefined8 *)ossl_pqueue_peek(param_1[5]);
  if (ptr == (undefined8 *)0x0) {
    uVar4 = 3;
    goto LAB_001008cf;
  }
  if ((param_2 == 0) || (uVar1 = ptr[3], uVar1 <= fake_time)) {
    if (*(int *)(ptr + 4) != 0) goto LAB_00100888;
LAB_001007a5:
    uVar4 = 2;
    bVar5 = true;
    if (fake_time < (ulong)ptr[2]) goto LAB_001008cf;
  }
  else {
    fake_time = uVar1;
    if (*(int *)(ptr + 4) == 0) goto LAB_001007a5;
LAB_00100888:
    if ((*(int *)((long)ptr + 0x24) == 0) && ((ulong)ptr[1] <= fake_time)) {
      param_1[4] = param_1[4] + ptr[5];
      *(undefined4 *)((long)ptr + 0x24) = 1;
      ossl_pqueue_pop(param_1[5]);
      lVar2 = param_1[5];
      ptr[3] = ptr[2];
      iVar3 = ossl_pqueue_push(lVar2,ptr,ptr + 6);
      uVar4 = iVar3 != 0;
      goto LAB_001008cf;
    }
    uVar4 = 2;
    if (fake_time < (ulong)ptr[2]) goto LAB_001008cf;
    bVar5 = *(int *)((long)ptr + 0x24) != 0;
  }
  iVar3 = test_true("test/quic_cc_test.c",0xe4,"!pkt->success || pkt->arrived",bVar5);
  if (iVar3 != 0) {
    local_30 = ptr[5];
    local_38 = *ptr;
    if (*(int *)(ptr + 4) == 0) {
      iVar3 = (**(code **)(*param_1 + 0x50))();
      iVar3 = test_true("test/quic_cc_test.c",0xed,"s->ccm->on_data_lost(s->cc, &loss_info)",
                        iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*param_1 + 0x58))(param_1[1],0);
        iVar3 = test_true("test/quic_cc_test.c",0xf0,"s->ccm->on_data_lost_finished(s->cc, 0)",
                          iVar3 != 0);
        if (iVar3 != 0) {
          param_1[7] = param_1[7] + ptr[5];
          ossl_pqueue_pop(param_1[5]);
          CRYPTO_free(ptr);
          goto LAB_00100955;
        }
      }
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1[1],&local_38);
      iVar3 = test_true("test/quic_cc_test.c",0xfc,"s->ccm->on_data_acked(s->cc, &ack_info)",
                        iVar3 != 0);
      if (iVar3 != 0) {
        param_1[6] = param_1[6] + ptr[5];
        ossl_pqueue_pop(param_1[5]);
        CRYPTO_free(ptr);
LAB_00100955:
        uVar4 = 1;
        goto LAB_001008cf;
      }
    }
  }
  uVar4 = 0;
LAB_001008cf:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_simulate(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *ptr;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  long local_f0;
  undefined8 local_e8;
  long lStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0x5c0;
  local_108 = 0xffffffffffffffff;
  local_100 = 0xffffffffffffffff;
  fake_time = 5000000000;
  lVar3 = (*_ossl_cc_newreno_method)(0x100000,0);
  iVar1 = test_ptr("test/quic_cc_test.c",0x15a,"cc = ccm->new(fake_now, NULL)",lVar3);
  if (iVar1 != 0) {
    local_f8 = &ossl_cc_newreno_method;
    local_e8 = __LC29;
    lStack_e0 = _UNK_00101598;
    local_c8 = (undefined1  [16])0x0;
    local_d8 = 16000;
    local_f0 = lVar3;
    uVar4 = ossl_pqueue_new(net_pkt_cmp);
    local_d0 = uVar4;
    iVar1 = test_ptr("test/quic_cc_test.c",0x7a,"s->pkts = ossl_pqueue_NET_PKT_new(net_pkt_cmp)",
                     uVar4);
    iVar1 = test_true("test/quic_cc_test.c",0x15d,
                      "net_sim_init(&sim, ccm, cc, actual_capacity, 100)",iVar1 != 0);
    if (iVar1 != 0) {
      OSSL_PARAM_construct_size_t(&local_148,"max_dgram_payload_len",&local_110);
      local_b8 = local_148;
      uStack_b0 = uStack_140;
      local_a8 = local_138;
      uStack_a0 = uStack_130;
      local_98 = local_128;
      OSSL_PARAM_construct_end(&local_148);
      local_90 = local_148;
      uStack_88 = uStack_140;
      local_80 = local_138;
      uStack_78 = uStack_130;
      local_70 = local_128;
      iVar1 = (*_OSSL_PARAM_construct_end)(lVar3,&local_b8);
      uVar2 = test_true("test/quic_cc_test.c",0x166,"ccm->set_input_params(cc, params)",iVar1 != 0);
      if (uVar2 != 0) {
        OSSL_PARAM_construct_uint64(&local_148,"bytes_in_flight",&local_108);
        local_a8 = local_138;
        uStack_a0 = uStack_130;
        local_98 = local_128;
        local_b8 = local_148;
        uStack_b0 = uStack_140;
        OSSL_PARAM_construct_uint64(&local_148,"cur_cwnd_size",&local_100);
        local_70 = local_128;
        local_90 = local_148;
        uStack_88 = uStack_140;
        local_80 = local_138;
        uStack_78 = uStack_130;
        OSSL_PARAM_construct_end(&local_148);
        local_68 = local_148;
        uStack_60 = uStack_140;
        local_48 = local_128;
        local_58 = local_138;
        uStack_50 = uStack_130;
        iVar1 = (*_test_true)(lVar3,&local_b8);
        iVar1 = test_true("test/quic_cc_test.c",0x170,"ccm->bind_diagnostics(cc, params)",iVar1 != 0
                         );
        if (iVar1 != 0) {
          (*_OSSL_PARAM_construct_size_t)(lVar3);
          uVar11 = local_110;
          uVar5 = (*_test_size_t_eq)(lVar3);
          iVar1 = test_uint64_t_ge("test/quic_cc_test.c",0x175,
                                   "allowance = ccm->get_tx_allowance(cc)",&_LC33,uVar5,uVar11);
          if (iVar1 != 0) {
            uVar11 = 0;
            do {
              while( true ) {
                uVar6 = (*_test_size_t_eq)(lVar3);
                if (local_110 < uVar6) {
                  uVar6 = local_110;
                }
                if (uVar6 < 0x1e) break;
                bVar12 = 0xffffffffff95303f < fake_time;
                fake_time = fake_time + 7000000;
                if (bVar12) {
                  fake_time = 0xffffffffffffffff;
                }
                ptr = (ulong *)CRYPTO_zalloc(0x38,"test/quic_cc_test.c",0x8e);
                iVar1 = test_ptr("test/quic_cc_test.c",0x91,&_LC34,ptr);
                if (iVar1 == 0) {
LAB_00100d34:
                  uVar4 = 0;
                }
                else {
                  do {
                    iVar1 = net_sim_process_one(&local_f8,0);
                  } while (iVar1 == 1);
                  iVar1 = test_true("test/quic_cc_test.c",0x98,"net_sim_process(s, 0)",iVar1 != 0);
                  uVar8 = fake_time;
                  if (iVar1 == 0) {
LAB_00100e68:
                    CRYPTO_free(ptr);
                    goto LAB_00100d34;
                  }
                  *ptr = fake_time;
                  *(uint *)(ptr + 4) = (uint)(uVar6 <= local_d8);
                  uVar9 = lStack_e0 * 1000000;
                  if (local_d8 < uVar6) {
                    uVar7 = uVar9 + uVar8;
                    if (CARRY8(uVar9,uVar8)) {
                      uVar7 = 0xffffffffffffffff;
                    }
                    ptr[1] = uVar7;
                    uVar9 = uVar8 + lStack_e0 * 3000000;
                    if (CARRY8(uVar8,lStack_e0 * 3000000)) {
                      uVar9 = 0xffffffffffffffff;
                    }
                    ptr[2] = uVar9;
                    ptr[3] = uVar9;
                  }
                  else {
                    uVar7 = uVar8 + uVar9;
                    if (CARRY8(uVar8,uVar9)) {
                      uVar7 = 0xffffffffffffffff;
                    }
                    ptr[1] = uVar7;
                    uVar8 = uVar7 + uVar9;
                    if (CARRY8(uVar7,uVar9)) {
                      uVar8 = 0xffffffffffffffff;
                    }
                    ptr[2] = uVar8;
                    local_d8 = local_d8 - uVar6;
                    ptr[3] = ptr[1];
                  }
                  ptr[5] = uVar6;
                  iVar1 = (**(code **)(local_f8 + 0x40))(local_f0,uVar6);
                  iVar1 = test_true("test/quic_cc_test.c",0xbb,"s->ccm->on_data_sent(s->cc, sz)",
                                    iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00100e68;
                  iVar1 = ossl_pqueue_push(local_d0,ptr,ptr + 6);
                  iVar1 = test_true("test/quic_cc_test.c",0xbe,
                                    "ossl_pqueue_NET_PKT_push(s->pkts, pkt, &pkt->idx)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00100e68;
                  uVar4 = 1;
                }
                uVar2 = test_true("test/quic_cc_test.c",0x196,"net_sim_send(&sim, (size_t)sz)",uVar4
                                 );
                uVar4 = local_d0;
                if (uVar2 == 0) goto LAB_00100b8e;
                uVar11 = uVar11 + uVar6;
              }
              lVar10 = 1;
              while (iVar1 = net_sim_process_one(&local_f8,lVar10 != 0), iVar1 == 1) {
                lVar10 = lVar10 + -1 + (ulong)(lVar10 == 0);
              }
              uVar2 = test_int_gt("test/quic_cc_test.c",0x19e,&_LC39,&_LC10,iVar1,0);
              uVar4 = local_d0;
              if (uVar2 == 0) goto LAB_00100b8e;
              if (iVar1 == 3) {
                uVar2 = test_uint64_t_eq("test/quic_cc_test.c",0x1a6,"diag_cur_bytes_in_flight",
                                         &_LC10,local_108,0);
                uVar6 = local_110;
                uVar4 = local_d0;
                if (uVar2 == 0) goto LAB_00100b8e;
                uVar4 = (*_test_size_t_eq)(lVar3);
                uVar2 = test_uint64_t_ge("test/quic_cc_test.c",0x1a9,"ccm->get_tx_allowance(cc)",
                                         &_LC33,uVar4,uVar6);
                uVar4 = local_d0;
                if (uVar2 == 0) goto LAB_00100b8e;
              }
              uVar2 = test_uint64_t_ne("test/quic_cc_test.c",0x1b1,"diag_cur_bytes_in_flight",
                                       "UINT64_MAX",local_108,0xffffffffffffffff);
              uVar4 = local_d0;
              if ((uVar2 == 0) ||
                 (uVar2 = test_uint64_t_ne("test/quic_cc_test.c",0x1b2,"diag_cur_cwnd_size",
                                           "UINT64_MAX",local_100), uVar4 = local_d0, uVar2 == 0))
              goto LAB_00100b8e;
            } while (uVar11 < 0x1e00000);
            test_info(_LC42,"test/quic_cc_test.c",0x1c3,
                      "est = %6llu kB/s, act=%6llu kB/s (error=%.02f%%)\n",1,16000);
            iVar1 = test_double_le(_LC45,_LC44,"test/quic_cc_test.c",0x1c9,"error",&_LC46);
            uVar2 = (uint)(iVar1 != 0);
            uVar4 = local_d0;
            goto LAB_00100b8e;
          }
        }
        uVar2 = 0;
      }
LAB_00100b8e:
      ossl_pqueue_pop_free(uVar4,do_free);
      goto LAB_00100a2b;
    }
  }
  uVar2 = 0;
LAB_00100a2b:
  if (lVar3 != 0) {
    (*_test_ptr)(lVar3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 setup_tests(void)

{
  add_test("test_simulate",test_simulate);
  add_test("test_sanity",test_sanity);
  return 1;
}



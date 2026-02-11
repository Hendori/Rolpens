
undefined8 fake_now(void)

{
  return cur_time;
}



void get_sstream_by_id(void)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*get_sstream_by_id_p)();
  return;
}



void regen_frame(void)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*regen_frame_p)();
  return;
}



void confirm_frame(void)

{
  return;
}



void sstream_updated(void)

{
  return;
}



undefined8 sstream_expect(long param_1)

{
  if (1 < param_1 - 0x2aU) {
    cb_fail = 1;
    return 0;
  }
  return *(undefined8 *)(cur_info + -0xa0 + param_1 * 8);
}



void regen_expect(undefined8 param_1,undefined8 param_2)

{
  (&regen_frame_type)[regen_count] = param_1;
  (&regen_stream_id)[regen_count] = param_2;
  regen_count = regen_count + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_fifd(int param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  undefined8 local_118 [4];
  undefined8 local_f8 [9];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [40];
  long local_70;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cb_fail = 0;
  puVar8 = local_118;
  puVar5 = local_118;
  for (lVar7 = 0x1a; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  cur_info = puVar8;
  iVar3 = ossl_statm_init(local_98);
  iVar3 = test_true("test/quic_fifd_test.c",0x147,"ossl_statm_init(&info.statm)",iVar3 != 0);
  if (iVar3 != 0) {
    local_70 = (*_ossl_cc_dummy_method)(0x100000,0);
    iVar3 = test_ptr("test/quic_fifd_test.c",0x148,
                     "info.ccdata = ossl_cc_dummy_method.new(fake_now, NULL)",local_70);
    if (iVar3 != 0) {
      local_b0 = ossl_ackm_new(0x100000,0,local_98,&ossl_cc_dummy_method,local_70);
      iVar3 = test_ptr("test/quic_fifd_test.c",0x149,
                       "info.ackm = ossl_ackm_new(fake_now, NULL, &info.statm, &ossl_cc_dummy_method, info.ccdata)"
                       ,local_b0);
      if (iVar3 != 0) {
        iVar3 = ossl_ackm_on_handshake_confirmed(local_b0);
        iVar3 = test_true("test/quic_fifd_test.c",0x14d,
                          "ossl_ackm_on_handshake_confirmed(info.ackm)",iVar3 != 0);
        if (iVar3 != 0) {
          local_a8 = ossl_quic_cfq_new();
          iVar3 = test_ptr("test/quic_fifd_test.c",0x14e,"info.cfq = ossl_quic_cfq_new()",local_a8);
          if (iVar3 != 0) {
            local_a0 = ossl_quic_txpim_new();
            iVar3 = test_ptr("test/quic_fifd_test.c",0x14f,"info.txpim = ossl_quic_txpim_new()",
                             local_a0);
            if (iVar3 != 0) {
              iVar3 = ossl_quic_fifd_init(puVar8,local_a8,local_b0,local_a0,get_sstream_by_id,0,
                                          regen_frame,0,confirm_frame,0,sstream_updated,0,0,0);
              iVar3 = test_true("test/quic_fifd_test.c",0x150,
                                "ossl_quic_fifd_init(&info.fifd, info.cfq, info.ackm, info.txpim, get_sstream_by_id, NULL, regen_frame, NULL, confirm_frame, NULL, sstream_updated, NULL, NULL, NULL)"
                                ,iVar3 != 0);
              puVar5 = puVar8;
              if (iVar3 != 0) {
                do {
                  uVar4 = ossl_quic_sstream_new(0x400);
                  puVar5[0x16] = uVar4;
                  iVar3 = test_ptr("test/quic_fifd_test.c",0x15a,
                                   "info.sstream[i] = ossl_quic_sstream_new(1024)",uVar4);
                  if (iVar3 == 0) goto LAB_0010017f;
                  puVar5 = puVar5 + 1;
                } while (local_f8 != puVar5);
                ossl_statm_update_rtt(local_98,0,1000000);
                bVar2 = (param_1 != 2) + 1;
                local_1b8 = (undefined1  [16])0x0;
                cur_time = 1000000000000;
                get_sstream_by_id_p = sstream_expect;
                local_1a8 = (undefined1  [16])0x0;
                local_188 = (undefined1  [16])0x0;
                local_178 = (undefined1  [16])0x0;
                local_168 = (undefined1  [16])0x0;
                local_1e8 = 0;
                local_198 = 0;
                local_1c0 = 0;
                local_1d8 = 0x2a;
                local_1d0 = ZEXT816(0xb) << 0x40;
                local_158 = 0;
                regen_count = 0;
                regen_frame_p = regen_expect;
                local_148 = (undefined1  [16])0x0;
                puVar5 = (undefined8 *)ossl_quic_txpim_pkt_alloc(local_a0);
                iVar3 = test_ptr("test/quic_fifd_test.c",0x7f,
                                 "pkt = ossl_quic_txpim_pkt_alloc(info->txpim)",puVar5);
                if (iVar3 != 0) {
                  lVar7 = 0;
                  do {
                    local_1e0 = 2;
                    iVar3 = ossl_quic_sstream_append(local_68[lVar7],"Test message",0xc,&local_1e8);
                    iVar3 = test_true("test/quic_fifd_test.c",0x84,
                                      "ossl_quic_sstream_append(info->sstream[i], (unsigned char *)\"Test message\", 12, &consumed)"
                                      ,iVar3 != 0);
                    if ((iVar3 == 0) ||
                       (iVar3 = test_size_t_eq("test/quic_fifd_test.c",0x87,"consumed",&_LC12,
                                               local_1e8,0xc), iVar3 == 0)) break;
                    if (lVar7 == 1) {
                      ossl_quic_sstream_fin(local_68[1]);
                    }
                    iVar3 = ossl_quic_sstream_get_stream_frame(local_68[lVar7],0,local_1b8);
                    iVar3 = test_true("test/quic_fifd_test.c",0x8d,
                                      "ossl_quic_sstream_get_stream_frame(info->sstream[i], 0, &hdr, iov, &num_iov)"
                                      ,iVar3 != 0);
                    if (iVar3 == 0) break;
                    iVar3 = test_int_eq("test/quic_fifd_test.c",0x8f,"hdr.is_fin","i == 1",
                                        (byte)local_198 >> 1 & 1,lVar7);
                    if (iVar3 == 0) break;
                    iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x90,"hdr.offset",&_LC17,
                                             local_1b8._8_8_,0);
                    if (iVar3 == 0) break;
                    iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x91,"hdr.len",&_LC12,
                                             local_1a8._0_8_,0xc);
                    if (iVar3 == 0) break;
                    uVar4 = ossl_quic_sstream_get_buffer_used(local_68[lVar7]);
                    iVar3 = test_size_t_eq("test/quic_fifd_test.c",0x92,
                                           "ossl_quic_sstream_get_buffer_used(info->sstream[i])",
                                           &_LC12,uVar4,0xc);
                    if (iVar3 == 0) break;
                    iVar3 = ossl_quic_sstream_mark_transmitted
                                      (local_68[lVar7],local_1b8._8_8_,
                                       local_1a8._0_8_ + local_1b8._8_8_ + -1);
                    iVar3 = test_true("test/quic_fifd_test.c",0x93,
                                      "ossl_quic_sstream_mark_transmitted(info->sstream[i], hdr.offset, hdr.offset + hdr.len - 1)"
                                      ,iVar3 != 0);
                    if (iVar3 == 0) break;
                    if (lVar7 == 1) {
                      iVar3 = ossl_quic_sstream_mark_transmitted_fin
                                        (local_68[1],local_1a8._0_8_ + local_1b8._8_8_);
                      iVar3 = test_true("test/quic_fifd_test.c",0x98,
                                        "ossl_quic_sstream_mark_transmitted_fin(info->sstream[i], hdr.offset + hdr.len)"
                                        ,iVar3 != 0);
                      if (iVar3 != 0) {
                        local_1d8 = 0x2b;
                        local_1c0 = CONCAT71(local_1c0._1_7_,
                                             (byte)local_1c0 & 0xfe | (byte)local_198 >> 1 & 1);
                        iVar3 = ossl_quic_txpim_pkt_append_chunk(puVar5,&local_1d8);
                        iVar3 = test_true("test/quic_fifd_test.c",0x9e,
                                          "ossl_quic_txpim_pkt_append_chunk(pkt, &chunk)",iVar3 != 0
                                         );
                        if (iVar3 != 0) {
                          cfq_freed = 0;
                          uVar4 = ossl_quic_cfq_add_frame
                                            (local_a8,10,bVar2,0x18,0,"placeholder",0xc,cfq_free_cb_
                                             ,0);
                          iVar3 = test_ptr("test/quic_fifd_test.c",0xa3,
                                           "cfq_item = ossl_quic_cfq_add_frame(info->cfq, 10, pn_space, OSSL_QUIC_FRAME_TYPE_NEW_CONN_ID, 0, placeholder_data, sizeof(placeholder_data), cfq_free_cb_, NULL)"
                                           ,uVar4);
                          if (iVar3 != 0) {
                            uVar6 = ossl_quic_cfq_get_priority_head(local_a8,bVar2);
                            iVar3 = test_ptr_eq("test/quic_fifd_test.c",0xa9,"cfq_item",
                                                "ossl_quic_cfq_get_priority_head(info->cfq, pn_space)"
                                                ,uVar4,uVar6);
                            if (iVar3 != 0) {
                              ossl_quic_txpim_pkt_add_cfq_item(puVar5,uVar4);
                              uVar1 = cur_time;
                              *puVar5 = 0;
                              puVar5[1] = 0x32;
                              puVar5[2] = uVar1;
                              puVar5[3] = 0xffffffffffffffff;
                              *(byte *)(puVar5 + 4) = *(byte *)(puVar5 + 4) & 0xf0 | bVar2 | 0xc;
                              if (param_1 == 1) {
                                *(byte *)((long)puVar5 + 0x79) =
                                     *(byte *)((long)puVar5 + 0x79) | 0x1f;
                              }
                              local_188._8_8_ = 1;
                              local_188._0_8_ = local_148;
                              local_148 = (undefined1  [16])0x0;
                              iVar3 = ossl_quic_fifd_pkt_commit(puVar8,puVar5);
                              iVar3 = test_true("test/quic_fifd_test.c",0xc2,
                                                "ossl_quic_fifd_pkt_commit(&info->fifd, pkt)",
                                                iVar3 != 0);
                              if (iVar3 != 0) {
                                uVar6 = ossl_quic_cfq_get_priority_head(local_a8,bVar2);
                                iVar3 = test_ptr_null("test/quic_fifd_test.c",0xc6,
                                                                                                            
                                                  "ossl_quic_cfq_get_priority_head(info->cfq, pn_space)"
                                                  ,uVar6);
                                if (iVar3 != 0) {
                                  if (param_1 == 1) {
                                    puVar5 = (undefined8 *)ossl_quic_txpim_pkt_alloc(local_a0);
                                    iVar3 = test_ptr("test/quic_fifd_test.c",0xe4,
                                                     "pkt2 = ossl_quic_txpim_pkt_alloc(info->txpim)"
                                                     ,puVar5);
                                    if (iVar3 != 0) {
                                      bVar9 = 0xfffffffdabf41bff < cur_time;
                                      cur_time = cur_time + 10000000000;
                                      if (bVar9) {
                                        cur_time = 0xffffffffffffffff;
                                      }
                                      puVar5[2] = cur_time;
                                      *puVar5 = 0x32;
                                      local_148._8_8_ = _UNK_00101be8;
                                      local_148._0_8_ = __LC32;
                                      puVar5[1] = 0x32;
                                      puVar5[3] = 0xffffffffffffffff;
                                      *(byte *)(puVar5 + 4) =
                                           *(byte *)(puVar5 + 4) & 0xf0 | bVar2 | 0xc;
                                      local_188._8_8_ = 1;
                                      iVar3 = ossl_quic_fifd_pkt_commit(puVar8,puVar5);
                                      iVar3 = test_true("test/quic_fifd_test.c",0xf5,
                                                                                                                
                                                  "ossl_quic_fifd_pkt_commit(&info->fifd, pkt2)",
                                                  iVar3 != 0);
                                      if (iVar3 != 0) {
                                        iVar3 = ossl_ackm_on_rx_ack_frame
                                                          (local_b0,local_188,bVar2,cur_time);
                                        iVar3 = test_true("test/quic_fifd_test.c",0xf6,
                                                                                                                    
                                                  "ossl_ackm_on_rx_ack_frame(info->ackm, &ack, pn_space, cur_time)"
                                                  ,iVar3 != 0);
                                        if (iVar3 != 0) {
                                          lVar7 = 0;
                                          goto LAB_00100c7e;
                                        }
                                      }
                                    }
                                  }
                                  else if (param_1 == 2) {
                                    iVar3 = ossl_ackm_on_pkt_space_discarded(local_b0,bVar2);
                                    iVar3 = test_true("test/quic_fifd_test.c",0x128,
                                                                                                            
                                                  "ossl_ackm_on_pkt_space_discarded(info->ackm, pn_space)"
                                                  ,iVar3 != 0);
                                    if ((iVar3 != 0) &&
                                       (iVar3 = test_true("test/quic_fifd_test.c",300,"cfq_freed",
                                                          cfq_freed != 0), iVar3 != 0))
                                    goto LAB_00100aaa;
                                  }
                                  else if (param_1 == 0) {
                                    iVar3 = ossl_ackm_on_rx_ack_frame
                                                      (local_b0,local_188,bVar2,cur_time);
                                    iVar3 = test_true("test/quic_fifd_test.c",0xcb,
                                                                                                            
                                                  "ossl_ackm_on_rx_ack_frame(info->ackm, &ack, pn_space, cur_time)"
                                                  ,iVar3 != 0);
                                    if (iVar3 != 0) {
                                      uVar4 = ossl_quic_sstream_get_buffer_used(local_68[0]);
                                      iVar3 = test_size_t_eq("test/quic_fifd_test.c",0xd1,
                                                                                                                          
                                                  "ossl_quic_sstream_get_buffer_used(info->sstream[i])"
                                                  ,&_LC17,uVar4,0);
                                      if (iVar3 != 0) {
                                        uVar4 = ossl_quic_sstream_get_buffer_used(local_68[1]);
                                        iVar3 = test_size_t_eq("test/quic_fifd_test.c",0xd1,
                                                                                                                              
                                                  "ossl_quic_sstream_get_buffer_used(info->sstream[i])"
                                                  ,&_LC17,uVar4,0);
                                        if (iVar3 != 0) {
                                          iVar3 = ossl_quic_sstream_mark_lost_fin(local_68[1]);
                                          iVar3 = test_false("test/quic_fifd_test.c",0xd5,
                                                                                                                          
                                                  "ossl_quic_sstream_mark_lost_fin(info->sstream[1])"
                                                  ,iVar3 != 0);
                                          if ((iVar3 != 0) &&
                                             (iVar3 = test_true("test/quic_fifd_test.c",0xd9,
                                                                "cfq_freed",cfq_freed != 0),
                                             iVar3 != 0)) {
                                            iVar3 = test_size_t_eq("test/quic_fifd_test.c",0xdd,
                                                                   "regen_count",&_LC17,regen_count,
                                                                   0);
                                            goto joined_r0x001010c9;
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
                      break;
                    }
                    local_1d8 = 0x2a;
                    lVar7 = 1;
                    local_1c0 = CONCAT71(local_1c0._1_7_,
                                         (byte)local_1c0 & 0xfe | (byte)local_198 >> 1 & 1);
                    iVar3 = ossl_quic_txpim_pkt_append_chunk(puVar5,&local_1d8);
                    iVar3 = test_true("test/quic_fifd_test.c",0x9e,
                                      "ossl_quic_txpim_pkt_append_chunk(pkt, &chunk)",iVar3 != 0);
                  } while (iVar3 != 0);
                }
LAB_001006e8:
                bVar9 = false;
LAB_001006ea:
                iVar3 = test_true("test/quic_fifd_test.c",0x15f,"test_generic(&info, idx)",bVar9);
                if (iVar3 != 0) {
                  iVar3 = test_false("test/quic_fifd_test.c",0x160,"cb_fail",cb_fail != 0);
                  bVar9 = iVar3 != 0;
                  goto LAB_00100182;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0010017f:
  bVar9 = false;
LAB_00100182:
  ossl_quic_fifd_cleanup(puVar8);
  ossl_quic_cfq_free(local_a8);
  ossl_quic_txpim_free(local_a0);
  ossl_ackm_free(local_b0);
  ossl_statm_destroy(local_98);
  if (local_70 != 0) {
    (*_test_ptr)();
  }
  do {
    puVar5 = puVar8 + 0x16;
    puVar8 = puVar8 + 1;
    ossl_quic_sstream_free(*puVar5);
  } while (local_f8 != puVar8);
  cur_info = (undefined8 *)0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100c7e:
  local_1e0 = 2;
  iVar3 = ossl_quic_sstream_get_stream_frame(local_68[lVar7],0,local_1b8,local_138,&local_1e0);
  iVar3 = test_true("test/quic_fifd_test.c",0x100,
                    "ossl_quic_sstream_get_stream_frame(info->sstream[i], 0, &hdr, iov, &num_iov)",
                    iVar3 != 0);
  if (iVar3 != 0) {
    iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x102,"hdr.offset",&_LC17,local_1b8._8_8_,0);
    if (iVar3 != 0) {
      iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x103,"hdr.len",&_LC12,local_1a8._0_8_,0xc);
      if (iVar3 != 0) {
        if (lVar7 == 0) goto code_r0x00100d26;
        iVar3 = test_size_t_eq("test/quic_fifd_test.c",0x108,"regen_count",&_LC34,regen_count,7);
        if ((((((iVar3 != 0) &&
               (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x109,"regen_stream_id[0]",&_LC35,
                                         regen_stream_id,0x2a), iVar3 != 0)) &&
              (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x10a,"regen_frame_type[0]",
                                        "OSSL_QUIC_FRAME_TYPE_MAX_STREAM_DATA",regen_frame_type,0x11
                                       ), iVar3 != 0)) &&
             ((iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x10b,"regen_stream_id[1]",&_LC39,
                                        DAT_00101168,0x2b), iVar3 != 0 &&
              (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x10c,"regen_frame_type[1]",
                                        "OSSL_QUIC_FRAME_TYPE_MAX_STREAM_DATA",DAT_001011e8,0x11),
              iVar3 != 0)))) &&
            (((iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x10d,"regen_frame_type[2]",
                                        "OSSL_QUIC_FRAME_TYPE_HANDSHAKE_DONE",DAT_001011f0,0x1e),
              iVar3 != 0 &&
              ((iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x10e,"regen_stream_id[2]",
                                         "UINT64_MAX",DAT_00101170,0xffffffffffffffff), iVar3 != 0
               && (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x10f,"regen_frame_type[3]",
                                            "OSSL_QUIC_FRAME_TYPE_MAX_DATA",DAT_001011f8,0x10),
                  iVar3 != 0)))) &&
             (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x110,"regen_stream_id[3]",
                                       "UINT64_MAX",DAT_00101178,0xffffffffffffffff), iVar3 != 0))))
           && ((((iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x111,"regen_frame_type[4]",
                                           "OSSL_QUIC_FRAME_TYPE_MAX_STREAMS_BIDI",DAT_00101200,0x12
                                          ), iVar3 != 0 &&
                 (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x112,"regen_stream_id[4]",
                                           "UINT64_MAX",DAT_00101180,0xffffffffffffffff), iVar3 != 0
                 )) && (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x113,"regen_frame_type[5]"
                                                 ,"OSSL_QUIC_FRAME_TYPE_MAX_STREAMS_UNI",
                                                 DAT_00101208,0x13), iVar3 != 0)) &&
               (((iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x114,"regen_stream_id[5]",
                                           "UINT64_MAX",DAT_00101188,0xffffffffffffffff), iVar3 != 0
                 && (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x115,"regen_frame_type[6]",
                                              "OSSL_QUIC_FRAME_TYPE_ACK_WITH_ECN",DAT_00101210,3),
                    iVar3 != 0)) &&
                (iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x116,"regen_stream_id[6]",
                                          "UINT64_MAX",DAT_00101190,0xffffffffffffffff), iVar3 != 0)
                ))))) {
          uVar6 = ossl_quic_cfq_get_priority_head(local_a8,bVar2);
          iVar3 = test_ptr_eq("test/quic_fifd_test.c",0x11a,"cfq_item",
                              "ossl_quic_cfq_get_priority_head(info->cfq, pn_space)",uVar4,uVar6);
          if (iVar3 != 0) {
            local_1e0 = 2;
            iVar3 = ossl_quic_sstream_get_stream_frame(local_68[1],1,local_1b8,local_138,&local_1e0)
            ;
            iVar3 = test_true("test/quic_fifd_test.c",0x11f,
                              "ossl_quic_sstream_get_stream_frame(info->sstream[1], 1, &hdr, iov, &num_iov)"
                              ,iVar3 != 0);
            if (iVar3 != 0) {
              iVar3 = test_true("test/quic_fifd_test.c",0x121,"hdr.is_fin",(byte)local_198 >> 1 & 1)
              ;
              if (iVar3 != 0) {
                iVar3 = test_uint64_t_eq("test/quic_fifd_test.c",0x122,"hdr.len",&_LC17,
                                         local_1a8._0_8_,0);
joined_r0x001010c9:
                if (iVar3 == 0) goto LAB_001006e8;
LAB_00100aaa:
                uVar4 = ossl_quic_txpim_get_in_use(local_a0);
                iVar3 = test_size_t_eq("test/quic_fifd_test.c",0x136,
                                       "ossl_quic_txpim_get_in_use(info->txpim)",&_LC17,uVar4,0);
                bVar9 = iVar3 != 0;
                goto LAB_001006ea;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_001006e8;
code_r0x00100d26:
  lVar7 = 1;
  goto LAB_00100c7e;
}



void cfq_free_cb_(char *param_1,long param_2)

{
  if ((param_1 == "placeholder") && (param_2 == 0xc)) {
    cfq_freed = 1;
    return;
  }
  return;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_fifd",test_fifd,3,1);
  return 1;
}



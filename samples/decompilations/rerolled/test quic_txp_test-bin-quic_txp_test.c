bool check_is_initial(long param_1) {
   return *(char*)**(undefined8**)( param_1 + 0x448 ) == '\x01';
}
bool check_is_handshake(long param_1) {
   return *(char*)**(undefined8**)( param_1 + 0x448 ) == '\x03';
}
bool check_stream_13(long param_1) {
   int iVar1;
   iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x420, "h->frame.reset_stream.stream_id", &_LC0, *(undefined8*)( param_1 + 0x468 ), 0x2a);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x421, "h->frame.reset_stream.app_error_code", &_LC3, *(undefined8*)( param_1 + 0x470 ), 0x11d8);
      if (iVar1 != 0) {
         iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x422, "h->frame.reset_stream.final_size", &_LC5, *(undefined8*)( param_1 + 0x478 ), 0);
         return iVar1 != 0;
      }

   }

   return false;
}
ulong check_stream_12(long param_1) {
   int iVar1;
   ulong uVar2;
   uVar2 = test_uint64_t_eq("test/quic_txp_test.c", 0x400, "h->frame.stop_sending.stream_id", &_LC0, *(undefined8*)( param_1 + 0x468 ), 0x2a);
   if ((int)uVar2 != 0) {
      iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x401, "h->frame.stop_sending.app_error_code", &_LC3, *(undefined8*)( param_1 + 0x470 ), 0x11d8);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
bool check_stream_9(long param_1) {
   int iVar1;
   iVar1 = test_mem_eq("test/quic_txp_test.c", 0x281, "h->frame.stream.data", "stream_9", *(undefined8*)( param_1 + 0x480 ), *(undefined8*)( param_1 + 0x478 ), &stream_9, 8);
   return iVar1 != 0;
}
bool check_cfq_new_token(long param_1) {
   int iVar1;
   iVar1 = test_mem_eq("test/quic_txp_test.c", 0x216, "h->frame.new_token.token", "token_1", *(undefined8*)( param_1 + 0x468 ), *(undefined8*)( param_1 + 0x470 ), &token_1, 6);
   return iVar1 != 0;
}
bool check_cfq_new_conn_id(long param_1) {
   int iVar1;
   iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x1ca, "h->frame.new_conn_id.seq_num", &_LC13, *(undefined8*)( param_1 + 0x468 ), 0x929);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x1cb, "h->frame.new_conn_id.retire_prior_to", &_LC15, *(undefined8*)( param_1 + 0x470 ), 0x4d2);
      if (iVar1 != 0) {
         iVar1 = test_mem_eq("test/quic_txp_test.c", 0x1cc, "&h->frame.new_conn_id.conn_id", "&cid_1", param_1 + 0x478, 0x15, cid_1, 0x15);
         if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/quic_txp_test.c", 0x1ce, "&h->frame.new_conn_id.stateless_reset.token", "reset_token_1", param_1 + 0x48d, 0x10, reset_token_1, 0x10);
            return iVar1 != 0;
         }

      }

   }

   return false;
}
void fake_now(void) {
   ossl_time_now();
   return;
}
bool check_14(long param_1) {
   int iVar1;
   iVar1 = test_int_eq("test/quic_txp_test.c", 0x450, "h->frame.conn_close.is_app", &_LC5, *(byte*)( param_1 + 0x468 ) & 1, 0);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x451, "h->frame.conn_close.frame_type", "OSSL_QUIC_FRAME_TYPE_HANDSHAKE_DONE", *(undefined8*)( param_1 + 0x478 ), 0x1e);
      if (iVar1 != 0) {
         iVar1 = test_uint64_t_eq("test/quic_txp_test.c", 0x453, "h->frame.conn_close.error_code", &_LC13, *(undefined8*)( param_1 + 0x470 ), 0x929);
         if (iVar1 != 0) {
            iVar1 = test_mem_eq("test/quic_txp_test.c", 0x454, "h->frame.conn_close.reason", "\"Reason string\"", *(undefined8*)( param_1 + 0x480 ), *(undefined8*)( param_1 + 0x488 ), "Reason string", 0xd);
            return iVar1 != 0;
         }

      }

   }

   return false;
}
void helper_cleanup(undefined8 *param_1) {
   char cVar1;
   ossl_qrx_pkt_release(param_1[0x89]);
   param_1[0x89] = 0;
   for (int i = 0; i < 3; i++) {
      ossl_ackm_on_pkt_space_discarded(param_1[24], i);
   }

   ossl_quic_tx_packetiser_free(*param_1);
   ossl_qtx_free(param_1[0x15]);
   ossl_quic_txpim_free(param_1[0x16]);
   ossl_quic_cfq_free(param_1[0x17]);
   if (param_1[0x69] != 0) {
      ( **(code**)( param_1[0x6a] + 8 ) )();
   }

   if (*(char*)( param_1 + 0x7d ) == '\0') {
      cVar1 = *(char*)( (long)param_1 + 0x3e9 );
   }
 else {
      ossl_statm_destroy(param_1 + 100);
      cVar1 = *(char*)( (long)param_1 + 0x3e9 );
   }

   if (cVar1 != '\0') {
      ossl_quic_stream_map_cleanup(param_1 + 0x6b);
   }

   for (int i = 0; i < 3; i++) {
      ossl_quic_sstream_free(param_1[( i + 37 )]);
   }

   ossl_ackm_free(param_1[0x18]);
   ossl_qrx_free(param_1[0x7f]);
   ossl_quic_demux_free(param_1[0x7e]);
   BIO_free((BIO*)param_1[0x2e]);
   BIO_free((BIO*)param_1[0x2f]);
   return;
}
undefined8 try_big_token(undefined8 *param_1) {
   int iVar1;
   long lVar2;
   iVar1 = ossl_quic_tx_packetiser_set_initial_token(*param_1, big_token, 0x79e, 0, 0);
   iVar1 = test_false("test/quic_txp_test.c", 0x4ca, "ossl_quic_tx_packetiser_set_initial_token(h->txp, big_token, sizeof(big_token), NULL, NULL)", iVar1 != 0);
   if (iVar1 != 0) {
      lVar2 = 0x79d;
      while (true) {
         iVar1 = test_size_t_gt("test/quic_txp_test.c", 0x4d6, &_LC29, &_LC5, lVar2, 0);
         if (iVar1 == 0) break;
         iVar1 = ossl_quic_tx_packetiser_set_initial_token(*param_1, big_token, lVar2, 0, 0);
         if (iVar1 != 0) {
            return 1;
         }

         lVar2 = lVar2 + -1;
      }
;
   }

   return 0;
}
undefined8 gen_probe_1rtt(long param_1) {
   long lVar1;
   lVar1 = ossl_ackm_get0_probe_request(*(undefined8*)( param_1 + 0xc0 ));
   *(int*)( lVar1 + 0x10 ) = *(int*)( lVar1 + 0x10 ) + 1;
   return 1;
}
undefined8 gen_probe_handshake(long param_1) {
   long lVar1;
   lVar1 = ossl_ackm_get0_probe_request(*(undefined8*)( param_1 + 0xc0 ));
   *(int*)( lVar1 + 4 ) = *(int*)( lVar1 + 4 ) + 1;
   return 1;
}
undefined8 gen_probe_initial(long param_1) {
   int *piVar1;
   piVar1 = (int*)ossl_ackm_get0_probe_request(*(undefined8*)( param_1 + 0xc0 ));
   *piVar1 = *piVar1 + 1;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool gen_conn_close(undefined8 *param_1) {
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   undefined8 uStack_28;
   char *local_20;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   local_30 = __LC30;
   uStack_28 = _UNK_00108c08;
   local_20 = "Reason string";
   local_18 = 0xd;
   iVar1 = ossl_quic_tx_packetiser_schedule_conn_close(*param_1, &local_38);
   iVar1 = test_true("test/quic_txp_test.c", 0x448, "ossl_quic_tx_packetiser_schedule_conn_close(h->txp, &f)", iVar1 != 0);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1 != 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool check_stream_10d(long param_1) {
   int iVar1;
   iVar1 = test_uint64_t_ge("test/quic_txp_test.c", 0x3b2, "h->frame.stream.len", &_LC32, *(undefined8*)( param_1 + 0x478 ), 5);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_le("test/quic_txp_test.c", 0x3b3, "h->frame.stream.len", &_LC34, *(undefined8*)( param_1 + 0x478 ), 200);
      if (iVar1 != 0) {
         iVar1 = test_mem_eq("test/quic_txp_test.c", 0x3b6, "h->frame.stream.data", "stream_10b + stream_10b_off", *(undefined8*)( param_1 + 0x480 ), *(undefined8*)( param_1 + 0x478 ), stream_10b + stream_10b_off, *(undefined8*)( param_1 + 0x478 ));
         return iVar1 != 0;
      }

   }

   return false;
}
bool check_stream_10c(long param_1) {
   int iVar1;
   iVar1 = test_uint64_t_ge("test/quic_txp_test.c", 0x3a5, "h->frame.stream.len", &_LC32, *(undefined8*)( param_1 + 0x478 ), 5);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_le("test/quic_txp_test.c", 0x3a6, "h->frame.stream.len", &_LC34, *(undefined8*)( param_1 + 0x478 ), 200);
      if (iVar1 != 0) {
         iVar1 = test_mem_eq("test/quic_txp_test.c", 0x3a9, "h->frame.stream.data", "stream_10a + stream_10a_off", *(undefined8*)( param_1 + 0x480 ), *(undefined8*)( param_1 + 0x478 ), stream_10a + stream_10a_off, *(undefined8*)( param_1 + 0x478 ));
         return iVar1 != 0;
      }

   }

   return false;
}
undefined8 check_stream_10b(long param_1) {
   int iVar1;
   iVar1 = test_uint64_t_ge("test/quic_txp_test.c", 0x397, "h->frame.stream.len", &_LC37, *(undefined8*)( param_1 + 0x478 ), 0x47e);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_le("test/quic_txp_test.c", 0x398, "h->frame.stream.len", &_LC38, *(undefined8*)( param_1 + 0x478 ), 0x4b0);
      if (iVar1 != 0) {
         iVar1 = test_mem_eq("test/quic_txp_test.c", 0x39b, "h->frame.stream.data", "stream_10b", *(undefined8*)( param_1 + 0x480 ), *(undefined8*)( param_1 + 0x478 ), stream_10b, *(undefined8*)( param_1 + 0x478 ));
         if (iVar1 != 0) {
            stream_10b_off = *(long*)( param_1 + 0x478 ) + *(long*)( param_1 + 0x470 );
            return 1;
         }

      }

   }

   return 0;
}
undefined8 check_stream_10a(long param_1) {
   int iVar1;
   iVar1 = test_uint64_t_ge("test/quic_txp_test.c", 0x389, "h->frame.stream.len", &_LC37, *(undefined8*)( param_1 + 0x478 ), 0x47e);
   if (iVar1 != 0) {
      iVar1 = test_uint64_t_le("test/quic_txp_test.c", 0x38a, "h->frame.stream.len", &_LC38, *(undefined8*)( param_1 + 0x478 ), 0x4b0);
      if (iVar1 != 0) {
         iVar1 = test_mem_eq("test/quic_txp_test.c", 0x38d, "h->frame.stream.data", "stream_10a", *(undefined8*)( param_1 + 0x480 ), *(undefined8*)( param_1 + 0x478 ), stream_10a, *(undefined8*)( param_1 + 0x478 ));
         if (iVar1 != 0) {
            stream_10a_off = *(long*)( param_1 + 0x478 ) + *(long*)( param_1 + 0x470 );
            return 1;
         }

      }

   }

   return 0;
}
undefined8 schedule_ack(long param_1) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_48;
   undefined1 local_40[16];
   long local_30;
   lVar3 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (undefined1[16])0x0;
   do {
      local_48 = lVar3;
      uVar2 = ossl_time_now();
      local_40[8] = local_40[8] & 0xf8 | 6;
      local_40._0_8_ = uVar2;
      iVar1 = ossl_ackm_on_rx_packet(*(undefined8*)( param_1 + 0xc0 ), &local_48);
      uVar2 = test_true("test/quic_txp_test.c", 0x23c, "ossl_ackm_on_rx_packet(h->args.ackm, &rx_pkt)", iVar1 != 0);
      if ((int)uVar2 == 0) goto LAB_00100b16;
      lVar3 = lVar3 + 1;
   }
 while ( lVar3 != 5 );
   uVar2 = 1;
   LAB_00100b16:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 schedule_cfq_new_token(long param_1) {
   int iVar1;
   BUF_MEM *a;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined1 local_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   a = BUF_MEM_new();
   iVar1 = test_ptr("test/quic_txp_test.c", 500, "buf_mem = BUF_MEM_new()", a);
   if (iVar1 != 0) {
      iVar1 = WPACKET_init(local_68, a);
      iVar1 = test_true("test/quic_txp_test.c", 0x1f7, "WPACKET_init(&wpkt, buf_mem)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = ossl_quic_wire_encode_frame_new_token(local_68, &token_1, 6);
         iVar1 = test_true("test/quic_txp_test.c", 0x1fa, "ossl_quic_wire_encode_frame_new_token(&wpkt, token_1, sizeof(token_1))", iVar1 != 0);
         if (iVar1 == 0) {
            WPACKET_cleanup(local_68);
         }
 else {
            WPACKET_finish();
            iVar1 = WPACKET_get_total_written(local_68, &local_70);
            iVar1 = test_true("test/quic_txp_test.c", 0x202, "WPACKET_get_total_written(&wpkt, &l)", iVar1 != 0);
            if (iVar1 != 0) {
               uVar2 = ossl_quic_cfq_add_frame(*(undefined8*)( param_1 + 0xb8 ), 1, 2, 7, 0, a->data, local_70, free_buf_mem, a);
               iVar1 = test_ptr("test/quic_txp_test.c", 0x205, "cfq_item = ossl_quic_cfq_add_frame(h->args.cfq, 1, QUIC_PN_SPACE_APP, OSSL_QUIC_FRAME_TYPE_NEW_TOKEN, 0, (unsigned char *)buf_mem->data, l, free_buf_mem, buf_mem)", uVar2);
               if (iVar1 != 0) {
                  uVar2 = 1;
                  goto LAB_00100b9e;
               }

            }

         }

      }

   }

   BUF_MEM_free(a);
   uVar2 = 0;
   LAB_00100b9e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void free_buf_mem(undefined8 param_1, undefined8 param_2, BUF_MEM *param_3) {
   BUF_MEM_free(param_3);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 schedule_cfq_new_conn_id(long param_1) {
   int iVar1;
   BUF_MEM *a;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_b0;
   undefined1 local_a8[64];
   undefined8 local_68;
   undefined8 uStack_60;
   undefined1 local_58;
   undefined8 local_57;
   undefined8 uStack_4f;
   undefined8 local_47;
   undefined8 uStack_3f;
   undefined4 local_37;
   undefined2 local_33;
   undefined1 local_31;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_31 = 0;
   local_68 = __LC47;
   uStack_60 = _UNK_00108c18;
   local_b0 = 0;
   local_57 = __LC50;
   uStack_4f = _UNK_00108c28;
   local_33 = 0;
   local_58 = 8;
   local_37 = 0x12ffeedd;
   local_47 = __LC51;
   uStack_3f = _UNK_00108c38;
   a = BUF_MEM_new();
   iVar1 = test_ptr("test/quic_txp_test.c", 0x1a9, "buf_mem = BUF_MEM_new()", a);
   if (iVar1 != 0) {
      iVar1 = WPACKET_init(local_a8, a);
      iVar1 = test_true("test/quic_txp_test.c", 0x1ac, "WPACKET_init(&wpkt, buf_mem)", iVar1 != 0);
      if (iVar1 != 0) {
         iVar1 = ossl_quic_wire_encode_frame_new_conn_id(local_a8, &local_68);
         iVar1 = test_true("test/quic_txp_test.c", 0x1af, "ossl_quic_wire_encode_frame_new_conn_id(&wpkt, &ncid)", iVar1 != 0);
         if (iVar1 == 0) {
            WPACKET_cleanup(local_a8);
         }
 else {
            WPACKET_finish();
            iVar1 = WPACKET_get_total_written(local_a8, &local_b0);
            iVar1 = test_true("test/quic_txp_test.c", 0x1b6, "WPACKET_get_total_written(&wpkt, &l)", iVar1 != 0);
            if (iVar1 != 0) {
               uVar2 = ossl_quic_cfq_add_frame(*(undefined8*)( param_1 + 0xb8 ), 1, 2, 0x18, 0, a->data, local_b0, free_buf_mem, a);
               iVar1 = test_ptr("test/quic_txp_test.c", 0x1b9, "cfq_item = ossl_quic_cfq_add_frame(h->args.cfq, 1, QUIC_PN_SPACE_APP, OSSL_QUIC_FRAME_TYPE_NEW_CONN_ID, 0, (unsigned char *)buf_mem->data, l, free_buf_mem, buf_mem)", uVar2);
               if (iVar1 != 0) {
                  uVar2 = 1;
                  goto LAB_00100d8d;
               }

            }

         }

      }

   }

   BUF_MEM_free(a);
   uVar2 = 0;
   LAB_00100d8d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong schedule_max_data(long param_1) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   param_1 = param_1 + 0x200;
   uVar2 = ossl_quic_rxfc_get_cwm(param_1);
   iVar1 = ossl_quic_rxfc_on_rx_stream_frame(param_1, uVar2, 0);
   uVar3 = test_true("test/quic_txp_test.c", 0x17c, "ossl_quic_rxfc_on_rx_stream_frame(&h->stream_rxfc, cwm, 0)", iVar1 != 0);
   if ((int)uVar3 != 0) {
      iVar1 = ossl_quic_rxfc_on_retire(param_1, uVar2, 1000000);
      iVar1 = test_true("test/quic_txp_test.c", 0x17d, "ossl_quic_rxfc_on_retire(&h->stream_rxfc, cwm, ossl_ticks2time(OSSL_TIME_MS))", iVar1 != 0);
      uVar3 = ( ulong )(iVar1 != 0);
   }

   return uVar3;
}
undefined8 schedule_ack_eliciting_app(undefined8 *param_1) {
   ossl_quic_tx_packetiser_schedule_ack_eliciting(*param_1, 2);
   return 1;
}
undefined8 schedule_handshake_done(undefined8 *param_1) {
   ossl_quic_tx_packetiser_schedule_handshake_done(*param_1);
   return 1;
}
void demux_default_handler(undefined8 param_1, long param_2, char *param_3) {
   if (( ( param_3 != (char*)0x0 ) && ( *param_3 == '\b' ) ) && ( *(long*)( param_3 + 1 ) == -0x5758595a5b5c5d5f )) {
      ossl_qrx_inject_urxe(*(undefined8*)( param_2 + 0x3f8 ), param_1);
      return;
   }

   return;
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 run_script(int param_1, int *param_2) {
   byte bVar1;
   undefined1 *puVar2;
   undefined1 *puVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_600;
   undefined1 local_5f8[8];
   undefined8 local_5f0;
   undefined8 local_5e8[4];
   undefined8 uStack_5c8;
   undefined8 local_5c0;
   undefined2 local_5b8;
   undefined4 local_544;
   undefined8 local_540;
   undefined8 local_538;
   undefined8 local_530;
   undefined8 local_528;
   undefined1 *local_520;
   undefined1 *puStack_518;
   undefined1 *local_510;
   undefined1 *puStack_508;
   undefined1 *local_500;
   undefined *local_4f8;
   undefined8 uStack_4f0;
   code *local_4e8;
   undefined4 local_4c8;
   undefined8 local_4c0[3];
   undefined1 local_4a8[16];
   undefined8 local_498;
   undefined8 local_490;
   undefined8 local_478;
   undefined8 local_470;
   undefined1 local_468[32];
   undefined1 local_448[96];
   undefined1 local_3e8[96];
   undefined1 local_388[96];
   undefined1 local_328[96];
   undefined1 local_2c8[40];
   undefined8 local_2a0;
   undefined *puStack_298;
   undefined1 local_290[144];
   undefined1 local_200;
   undefined1 local_1ff;
   undefined8 local_1f8;
   undefined8 local_1f0;
   undefined1 local_1e8[16];
   undefined8 local_1d8;
   undefined8 local_1d0;
   undefined8 uStack_1c8;
   long *local_1a0;
   undefined8 local_198;
   long local_190;
   undefined8 local_188;
   undefined1 *local_180;
   undefined8 local_178[6];
   undefined1 local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar8 = local_5e8;
   for (lVar7 = 0xb4; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
   }

   iVar4 = BIO_new_bio_dgram_pair(&local_478, 0, &local_470);
   iVar4 = test_true("test/quic_txp_test.c", 0x82, "BIO_new_bio_dgram_pair(&h->bio1, 0, &h->bio2, 0)", iVar4 != 0);
   if (iVar4 != 0) {
      local_490 = 0x4b0;
      local_498 = local_478;
      local_540 = ossl_qtx_new(local_4a8);
      iVar4 = test_ptr("test/quic_txp_test.c", 0x88, "h->args.qtx = ossl_qtx_new(&h->qtx_args)", local_540);
      if (iVar4 != 0) {
         local_538 = ossl_quic_txpim_new();
         iVar4 = test_ptr("test/quic_txp_test.c", 0x8b, "h->args.txpim = ossl_quic_txpim_new()", local_538);
         if (iVar4 != 0) {
            local_530 = ossl_quic_cfq_new();
            iVar4 = test_ptr("test/quic_txp_test.c", 0x8e, "h->args.cfq = ossl_quic_cfq_new()", local_530);
            if (iVar4 != 0) {
               iVar4 = ossl_quic_txfc_init(local_468, 0);
               iVar4 = test_true("test/quic_txp_test.c", 0x91, "ossl_quic_txfc_init(&h->conn_txfc, NULL)", iVar4 != 0);
               if (iVar4 != 0) {
                  iVar4 = ossl_quic_rxfc_init(local_448, 0, 0x200000, 0xa00000, fake_now, 0);
                  iVar4 = test_true("test/quic_txp_test.c", 0x94, "ossl_quic_rxfc_init(&h->conn_rxfc, NULL, 2 * 1024 * 1024, 10 * 1024 * 1024, fake_now, NULL)", iVar4 != 0);
                  if (iVar4 != 0) {
                     iVar4 = ossl_quic_rxfc_init(local_3e8, local_448, 0x100000, 0x500000, fake_now, 0);
                     iVar4 = test_true("test/quic_txp_test.c", 0x9b, "ossl_quic_rxfc_init(&h->stream_rxfc, &h->conn_rxfc, 1 * 1024 * 1024, 5 * 1024 * 1024, fake_now, NULL)", iVar4 != 0);
                     if (iVar4 != 0) {
                        iVar4 = ossl_quic_rxfc_init(local_388, 0, 100, 100, fake_now, 0);
                        iVar4 = test_true("test/quic_txp_test.c", 0xa2, "ossl_quic_rxfc_init(&h->max_streams_bidi_rxfc, NULL, 100, 100, fake_now, NULL)", iVar4 != 0);
                        if (iVar4 != 0) {
                           iVar4 = ossl_quic_rxfc_init(local_328, 0, 100, 100, fake_now, 0);
                           iVar4 = test_true("test/quic_txp_test.c", 0xa8, "ossl_quic_rxfc_init(&h->max_streams_uni_rxfc, NULL, 100, 100, fake_now, NULL)", iVar4 != 0);
                           if (iVar4 == 0) {
                              iVar4 = ossl_statm_init(local_2c8);
                              iVar4 = test_true("test/quic_txp_test.c", 0xad, "ossl_statm_init(&h->statm)", iVar4 != 0);
                              if (iVar4 == 0) goto LAB_00101049;
                           }

                           local_200 = 1;
                           puStack_298 = &ossl_cc_dummy_method;
                           local_2a0 = ( *_ossl_cc_dummy_method )(fake_now, 0);
                           iVar4 = test_ptr("test/quic_txp_test.c", 0xb3, "h->cc_data = h->cc_method->new(fake_now, NULL)", local_2a0);
                           if (iVar4 != 0) {
                              local_528 = ossl_ackm_new(fake_now, 0, local_2c8, puStack_298, local_2a0);
                              iVar4 = test_ptr("test/quic_txp_test.c", 0xb6, "h->args.ackm = ossl_ackm_new(fake_now, NULL, &h->statm, h->cc_method, h->cc_data)", local_528);
                              if (iVar4 != 0) {
                                 iVar4 = ossl_quic_stream_map_init(local_290, 0, 0, local_388, local_328, 0);
                                 iVar4 = test_true("test/quic_txp_test.c", 0xbc, "ossl_quic_stream_map_init(&h->qsm, NULL, NULL, &h->max_streams_bidi_rxfc, &h->max_streams_uni_rxfc, 0)", iVar4 != 0);
                                 if (iVar4 != 0) {
                                    local_1ff = 1;
                                    puVar8 = local_5e8;
                                    do {
                                       uVar5 = ossl_quic_sstream_new(0x1000);
                                       puVar8[0x25] = uVar5;
                                       iVar4 = test_ptr("test/quic_txp_test.c", 0xc5, "h->args.crypto[i] = ossl_quic_sstream_new(4096)", uVar5);
                                       if (iVar4 == 0) goto LAB_00101049;
                                       puVar8 = puVar8 + 1;
                                    }
 while ( local_5e8 + 3 != puVar8 );
                                    local_5e8[1] = 0x5f01;
                                    local_5e8[3] = __LC148;
                                    uStack_5c8 = _UNK_00108c58;
                                    local_5e8[2] = 0;
                                    local_5c0 = 0;
                                    local_5b8 = 0;
                                    local_4e8 = fake_now;
                                    local_4c8 = 1;
                                    local_4f8 = puStack_298;
                                    uStack_4f0 = local_2a0;
                                    local_520 = local_290;
                                    puStack_518 = local_468;
                                    local_510 = local_448;
                                    puStack_508 = local_388;
                                    local_500 = local_328;
                                    local_5e8[0] = ossl_quic_tx_packetiser_new(local_5e8 + 1);
                                    iVar4 = test_ptr("test/quic_txp_test.c", 0xd4, "h->txp = ossl_quic_tx_packetiser_new(&h->args)", local_5e8[0]);
                                    if (iVar4 != 0) {
                                       ossl_quic_tx_packetiser_set_validated(local_5e8[0]);
                                       local_1f8 = ossl_quic_demux_new(local_470, 8, fake_now, 0);
                                       iVar4 = test_ptr("test/quic_txp_test.c", 0xdd, "h->demux = ossl_quic_demux_new(h->bio2, 8, fake_now, NULL)", local_1f8);
                                       if (iVar4 != 0) {
                                          ossl_quic_demux_set_default_handler(local_1f8, demux_default_handler, local_5e8);
                                          local_1d8 = local_1f8;
                                          local_1d0 = __LC70;
                                          uStack_1c8 = _UNK_00108c48;
                                          local_1f0 = ossl_qrx_new(local_1e8);
                                          iVar4 = test_ptr("test/quic_txp_test.c", 0xe7, "h->qrx = ossl_qrx_new(&h->qrx_args)", local_1f0);
                                          if (iVar4 != 0) {
                                             lVar7 = 0;
                                             ossl_qrx_allow_1rtt_processing(local_1f0);
                                             iVar4 = *param_2;
                                             joined_r0x00101563:if (iVar4 == 0) goto LAB_001015fb;
                                             switch (iVar4) {
                                                case 1:
                                ossl_quic_tx_packetiser_generate(local_5e8[0],local_5f8);
                                iVar4 = test_true("test/quic_txp_test.c",0x521,
                                                  "ossl_quic_tx_packetiser_generate(h.txp, &status)"
                                                 );
                                if ((iVar4 == 0) &&
                                   (iVar4 = test_size_t_gt("test/quic_txp_test.c",0x522,
                                                           "status.sent_pkt",&_LC5,local_5f0),
                                   iVar4 == 0)) break;
                                ossl_qtx_finish_dgram(local_540);
                                ossl_qtx_flush_net(local_540);
                                goto switchD_00101581_caseD_17;
                                                case 2:
                                ossl_quic_tx_packetiser_generate(local_5e8[0],local_5f8);
                                iVar4 = test_true("test/quic_txp_test.c",0x529,
                                                  "ossl_quic_tx_packetiser_generate(h.txp, &status)"
                                                 );
                                if (iVar4 == 0) {
                                  iVar4 = test_size_t_eq("test/quic_txp_test.c",0x52a,
                                                         "status.sent_pkt",&_LC5,local_5f0);
                                  goto joined_r0x0010188b;
                                }
                                goto switchD_00101581_caseD_17;
                                                case 3:
                                ossl_quic_demux_pump(local_1f8);
                                ossl_qrx_pkt_release(local_1a0);
                                local_1a0 = (long *)0x0;
                                ossl_qrx_read_pkt(local_1f0,&local_1a0);
                                iVar4 = test_true("test/quic_txp_test.c",0x532,
                                                  "ossl_qrx_read_pkt(h.qrx, &h.qrx_pkt)");
                                if (iVar4 != 0) {
                                  lVar6 = *(long *)(*local_1a0 + 0x48);
                                  if (-1 < lVar6) {
                                    local_198 = *(undefined8 *)(*local_1a0 + 0x50);
                                    local_190 = lVar6;
                                  }
                                  iVar4 = test_true("test/quic_txp_test.c",0x534,
                                                                                                        
                                                  "PACKET_buf_init(&h.pkt, h.qrx_pkt->hdr->data, h.qrx_pkt->hdr->len)"
                                                  );
                                  if (iVar4 != 0) goto LAB_001015d5;
                                }
                                break;
                                                case 4:
                                ossl_quic_demux_pump(local_1f8);
                                ossl_qrx_read_pkt(local_1f0,&local_1a0);
                                iVar4 = test_false("test/quic_txp_test.c",0x53c,
                                                   "ossl_qrx_read_pkt(h.qrx, &h.qrx_pkt)");
                                if (iVar4 == 0) break;
LAB_001015d5:
                                local_188 = 0xffffffffffffffff;
                                goto switchD_00101581_caseD_17;
                                                case 5:
                                iVar4 = test_size_t_ge("test/quic_txp_test.c",0x541,
                                                       "h.qrx_pkt->datagram_len","(size_t)op->arg0",
                                                       local_1a0[3],*(undefined8 *)(param_2 + 2));
                                if (iVar4 != 0) {
                                  iVar4 = test_size_t_le("test/quic_txp_test.c",0x542,
                                                         "h.qrx_pkt->datagram_len",
                                                         "(size_t)op->arg1",local_1a0[3]);
                                  goto joined_r0x0010188b;
                                }
                                break;
                                                case 6:
                                iVar4 = test_uint64_t_eq("test/quic_txp_test.c",0x546,"h.frame_type"
                                                         ,"op->arg0",local_188);
                                goto joined_r0x0010188b;
                                                case 7:
                                iVar4 = test_mem_eq("test/quic_txp_test.c",0x54a,
                                                    "h.qrx_pkt->hdr->token","op->buf",
                                                    *(undefined8 *)(*local_1a0 + 0x38),
                                                    *(undefined8 *)(*local_1a0 + 0x40),
                                                    *(undefined8 *)(param_2 + 6),
                                                    *(undefined8 *)(param_2 + 2));
                                goto joined_r0x0010188b;
                                                case 8:
                                puVar2 = *(undefined1 **)(param_2 + 6);
                                puVar3 = (undefined1 *)*local_1a0;
                                iVar4 = test_int_eq("test/quic_record_test_util.h",0x18,"a->type",
                                                    "b->type",*puVar3,*puVar2);
                                if (((((iVar4 != 0) &&
                                      (iVar4 = test_int_eq("test/quic_record_test_util.h",0x19,
                                                           "a->spin_bit","b->spin_bit",puVar3[1] & 1
                                                           ,puVar2[1] & 1), iVar4 != 0)) &&
                                     (iVar4 = test_int_eq("test/quic_record_test_util.h",0x1a,
                                                          "a->key_phase","b->key_phase",
                                                          (byte)puVar3[1] >> 1 & 1,
                                                          (byte)puVar2[1] >> 1 & 1), iVar4 != 0)) &&
                                    (((iVar4 = test_int_eq("test/quic_record_test_util.h",0x1b,
                                                           "a->pn_len","b->pn_len",
                                                           (byte)puVar3[1] >> 2 & 0xf,
                                                           (byte)puVar2[1] >> 2 & 0xf), iVar4 != 0
                                      && (iVar4 = test_int_eq("test/quic_record_test_util.h",0x1c,
                                                              "a->partial","b->partial",
                                                              (byte)puVar3[1] >> 6 & 1,
                                                              (byte)puVar2[1] >> 6 & 1), iVar4 != 0)
                                      ) && ((iVar4 = test_int_eq("test/quic_record_test_util.h",0x1d
                                                                 ,"a->fixed","b->fixed",
                                                                 (byte)puVar3[1] >> 7,
                                                                 (byte)puVar2[1] >> 7), iVar4 != 0
                                            && ((iVar4 = test_int_eq("test/quic_record_test_util.h",
                                                                     0x1e,"a->unused","b->unused",
                                                                     puVar3[2] & 0xf,puVar2[2] & 0xf
                                                                    ), iVar4 != 0 &&
                                                (iVar4 = test_int_eq("test/quic_record_test_util.h",
                                                                     0x1f,"a->reserved",
                                                                     "b->reserved",
                                                                     (byte)puVar3[2] >> 4 & 3,
                                                                     (byte)puVar2[2] >> 4 & 3),
                                                iVar4 != 0)))))))) &&
                                   (iVar4 = test_uint_eq("test/quic_record_test_util.h",0x20,
                                                         "a->version","b->version",
                                                         *(undefined4 *)(puVar3 + 4),
                                                         *(undefined4 *)(puVar2 + 4)), iVar4 != 0))
                                {
                                  bVar1 = puVar3[8];
                                  if ((puVar2[8] == bVar1) && (bVar1 < 0x15)) {
                                    iVar4 = memcmp(puVar3 + 9,puVar2 + 9,(ulong)bVar1);
                                    bVar9 = iVar4 == 0;
                                  }
                                  else {
                                    bVar9 = false;
                                  }
                                  iVar4 = test_true("test/quic_record_test_util.h",0x21,
                                                                                                        
                                                  "ossl_quic_conn_id_eq(&a->dst_conn_id, &b->dst_conn_id)"
                                                  ,bVar9);
                                  if (iVar4 != 0) {
                                    bVar1 = puVar3[0x1d];
                                    if ((puVar2[0x1d] == bVar1) && (bVar1 < 0x15)) {
                                      iVar4 = memcmp(puVar3 + 0x1e,puVar2 + 0x1e,(ulong)bVar1);
                                      bVar9 = iVar4 == 0;
                                    }
                                    else {
                                      bVar9 = false;
                                    }
                                    iVar4 = test_true("test/quic_record_test_util.h",0x22,
                                                                                                            
                                                  "ossl_quic_conn_id_eq(&a->src_conn_id, &b->src_conn_id)"
                                                  ,bVar9);
                                    if (((iVar4 != 0) &&
                                        (iVar4 = test_mem_eq("test/quic_record_test_util.h",0x23,
                                                             "a->pn","b->pn",puVar3 + 0x32,4,
                                                             puVar2 + 0x32,4), iVar4 != 0)) &&
                                       (iVar4 = test_size_t_eq("test/quic_record_test_util.h",0x24,
                                                               "a->token_len","b->token_len",
                                                               *(undefined8 *)(puVar3 + 0x40),
                                                               *(undefined8 *)(puVar2 + 0x40)),
                                       iVar4 != 0)) {
                                      test_uint64_t_eq("test/quic_record_test_util.h",0x25,"a->len",
                                                       "b->len",*(undefined8 *)(puVar3 + 0x48),
                                                       *(undefined8 *)(puVar2 + 0x48));
                                    }
                                  }
                                             }

                                             if (*(long*)( puVar3 + 0x40 ) == 0) {
                                                LAB_00101d95:iVar4 = test_ptr_null("test/quic_record_test_util.h", 0x2c, "a->token", *(undefined8*)( puVar3 + 0x38 ));
                                                if (iVar4 != 0) {
                                                   lVar6 = *(long*)( puVar2 + 0x40 );
                                                   LAB_00101dc0:if (lVar6 == 0) goto LAB_001022fd;
                                                }

                                             }
 else {
                                                if (*(long*)( puVar2 + 0x40 ) != 0) {
                                                   test_mem_eq("test/quic_record_test_util.h", 0x29, "a->token", "b->token", *(undefined8*)( puVar3 + 0x38 ), *(long*)( puVar3 + 0x40 ), *(undefined8*)( puVar2 + 0x38 ), *(long*)( puVar2 + 0x40 ));
                                                   if (*(long*)( puVar3 + 0x40 ) == 0) goto LAB_00101d95;
                                                   lVar6 = *(long*)( puVar2 + 0x40 );
                                                   goto LAB_00101dc0;
                                                }

                                                LAB_001022fd:test_ptr_null("test/quic_record_test_util.h", 0x2d, "b->token", *(undefined8*)( puVar2 + 0x38 ));
                                             }

                                             iVar4 = test_true("test/quic_txp_test.c", 0x54f, "cmp_pkt_hdr(h.qrx_pkt->hdr, op->buf, NULL, 0, 0)");
                                             goto joined_r0x0010188b;
                                             case 9:
                                (**(code **)(param_2 + 10))(local_5e8);
                                iVar4 = test_true("test/quic_txp_test.c",0x554,"op->check_func(&h)")
                                ;
                                goto joined_r0x0010188b;
                                             case 10:
                                iVar4 = ossl_quic_wire_peek_frame_header(&local_198,&local_600,0);
                                if ((iVar4 != 0) && (local_600 == 0)) {
                                  ossl_quic_wire_decode_padding(&local_198);
                                }
                                iVar4 = ossl_quic_wire_peek_frame_header(&local_198,&local_188,0);
                                if (iVar4 == 0) goto LAB_001015d5;
                                switch(local_188) {
                                default:
                                  test_error("test/quic_txp_test.c",0x5a6,"unknown frame type");
                                  goto LAB_001016dc;
                                case 1:
                                  ossl_quic_wire_decode_frame_ping(&local_198);
                                  iVar4 = test_true("test/quic_txp_test.c",0x564,
                                                    "ossl_quic_wire_decode_frame_ping(&h.pkt)");
                                  break;
                                case 2:
                                case 3:
                                  local_180 = local_148;
                                  local_178[0] = 0x10;
                                  ossl_quic_wire_decode_frame_ack(&local_198,local_544,&local_180,0)
                                  ;
                                  iVar4 = test_true("test/quic_txp_test.c",0x57b,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_ack(&h.pkt, h.args.ack_delay_exponent, &h.frame.ack, NULL)"
                                                  );
                                  break;
                                case 4:
                                  ossl_quic_wire_decode_frame_reset_stream(&local_198,&local_180);
                                  iVar4 = test_true("test/quic_txp_test.c",0x599,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_reset_stream(&h.pkt, &h.frame.reset_stream)"
                                                  );
                                  break;
                                case 5:
                                  ossl_quic_wire_decode_frame_stop_sending(&local_198,&local_180);
                                  iVar4 = test_true("test/quic_txp_test.c",0x593,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_stop_sending(&h.pkt, &h.frame.stop_sending)"
                                                  );
                                  break;
                                case 6:
                                  ossl_quic_wire_decode_frame_crypto(&local_198,0,&local_180);
                                  iVar4 = test_true("test/quic_txp_test.c",0x582,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_crypto(&h.pkt, 0, &h.frame.crypto)"
                                                  );
                                  break;
                                case 7:
                                  ossl_quic_wire_decode_frame_new_token
                                            (&local_198,&local_180,local_178);
                                  iVar4 = test_true("test/quic_txp_test.c",0x572,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_new_token(&h.pkt, &h.frame.new_token.token, &h.frame.new_token.token_len)"
                                                  );
                                  break;
                                case 8:
                                case 9:
                                case 10:
                                case 0xb:
                                case 0xc:
                                case 0xd:
                                case 0xe:
                                case 0xf:
                                  ossl_quic_wire_decode_frame_stream(&local_198,0,&local_180);
                                  iVar4 = test_true("test/quic_txp_test.c",0x58e,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_stream(&h.pkt, 0, &h.frame.stream)"
                                                  );
                                  break;
                                case 0x10:
                                  ossl_quic_wire_decode_frame_max_data(&local_198,&local_180);
                                  iVar4 = test_true("test/quic_txp_test.c",0x568,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_max_data(&h.pkt, &h.frame.max_data)"
                                                  );
                                  break;
                                case 0x18:
                                  ossl_quic_wire_decode_frame_new_conn_id(&local_198,&local_180);
                                  iVar4 = test_true("test/quic_txp_test.c",0x56d,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_new_conn_id(&h.pkt, &h.frame.new_conn_id)"
                                                  );
                                  break;
                                case 0x1c:
                                case 0x1d:
                                  ossl_quic_wire_decode_frame_conn_close(&local_198,&local_180);
                                  iVar4 = test_true("test/quic_txp_test.c",0x5a0,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_conn_close(&h.pkt, &h.frame.conn_close)"
                                                  );
                                  break;
                                case 0x1e:
                                  ossl_quic_wire_decode_frame_handshake_done(&local_198);
                                  iVar4 = test_true("test/quic_txp_test.c",0x560,
                                                                                                        
                                                  "ossl_quic_wire_decode_frame_handshake_done(&h.pkt)"
                                                  );
                                }
                                goto joined_r0x0010188b;
                                             case 0xb:
                                iVar4 = ossl_quic_wire_peek_frame_header(&local_198,&local_600,0);
                                if ((iVar4 != 0) && (local_600 == 0)) {
                                  ossl_quic_wire_decode_padding(&local_198);
                                }
                                iVar4 = test_size_t_eq("test/quic_txp_test.c",0x5ac,
                                                       "PACKET_remaining(&h.pkt)",&_LC5,local_190);
                                goto joined_r0x0010188b;
                                             case 0xc:
                                iVar4 = ossl_qtx_provide_secret
                                                  (local_540,param_2[2],param_2[4],0,
                                                   *(undefined8 *)(param_2 + 6),
                                                   *(undefined8 *)(param_2 + 8));
                                iVar4 = test_true("test/quic_txp_test.c",0x5b0,
                                                  "ossl_qtx_provide_secret(h.args.qtx, (uint32_t)op->arg0, (uint32_t)op->arg1, NULL, op->buf, op->buf_len)"
                                                  ,iVar4 != 0);
                                if (iVar4 != 0) {
                                  ossl_qrx_provide_secret
                                            (local_1f0,param_2[2],param_2[4],0,
                                             *(undefined8 *)(param_2 + 6));
                                  iVar4 = test_true("test/quic_txp_test.c",0x5b5,
                                                                                                        
                                                  "ossl_qrx_provide_secret(h.qrx, (uint32_t)op->arg0, (uint32_t)op->arg1, NULL, op->buf, op->buf_len)"
                                                  );
                                  goto joined_r0x0010188b;
                                }
                                break;
                                             case 0xd:
                                iVar4 = ossl_quic_tx_packetiser_discard_enc_level
                                                  (local_5e8[0],param_2[2]);
                                iVar4 = test_true("test/quic_txp_test.c",0x5bc,
                                                  "ossl_quic_tx_packetiser_discard_enc_level(h.txp, (uint32_t)op->arg0)"
                                                  ,iVar4 != 0);
                                goto joined_r0x0010188b;
                                             case 0xe:
                                local_600 = 0;
                                iVar4 = ossl_quic_sstream_append
                                                  (local_4c0[*(long *)(param_2 + 2)],
                                                   *(undefined8 *)(param_2 + 6),
                                                   *(undefined8 *)(param_2 + 8),&local_600);
                                iVar4 = test_true("test/quic_txp_test.c",0x5c9,
                                                  "ossl_quic_sstream_append(h.args.crypto[op->arg0], op->buf, op->buf_len, &consumed)"
                                                  ,iVar4 != 0);
                                if (iVar4 != 0) {
                                  iVar4 = test_size_t_eq("test/quic_txp_test.c",0x5ce,"consumed",
                                                         "op->buf_len",local_600);
                                  goto joined_r0x0010188b;
                                }
                                break;
                                             case 0xf:
                                lVar6 = ossl_quic_stream_map_alloc
                                                  (local_520,*(undefined8 *)(param_2 + 2),0);
                                iVar4 = test_ptr("test/quic_txp_test.c",0x5d6,
                                                 "s = ossl_quic_stream_map_alloc(h.args.qsm, op->arg0, QUIC_STREAM_DIR_BIDI)"
                                                 ,lVar6);
                                if (iVar4 != 0) {
                                  uVar5 = ossl_quic_sstream_new(0x80000);
                                  *(undefined8 *)(lVar6 + 0x70) = uVar5;
                                  iVar4 = test_ptr("test/quic_txp_test.c",0x5da,
                                                   "s->sstream = ossl_quic_sstream_new(512 * 1024)",
                                                   uVar5);
                                  if (iVar4 != 0) {
                                    iVar4 = ossl_quic_txfc_init(lVar6 + 0x80,local_468);
                                    iVar4 = test_true("test/quic_txp_test.c",0x5db,
                                                      "ossl_quic_txfc_init(&s->txfc, &h.conn_txfc)",
                                                      iVar4 != 0);
                                    if (iVar4 != 0) {
                                      iVar4 = ossl_quic_rxfc_init(lVar6 + 0xa0,local_448,0x100000,
                                                                  0x1000000,fake_now,0);
                                      iVar4 = test_true("test/quic_txp_test.c",0x5dc,
                                                                                                                
                                                  "ossl_quic_rxfc_init(&s->rxfc, &h.conn_rxfc, 1 * 1024 * 1024, 16 * 1024 * 1024, fake_now, NULL)"
                                                  ,iVar4 != 0);
                                      if (iVar4 != 0) {
                                        uVar5 = ossl_quic_rstream_new(lVar6 + 0xa0,0,0x400);
                                        *(undefined8 *)(lVar6 + 0x78) = uVar5;
                                        iVar4 = test_ptr("test/quic_txp_test.c",0x5e0,
                                                                                                                  
                                                  "s->rstream = ossl_quic_rstream_new(&s->rxfc, NULL, 1024)"
                                                  ,uVar5);
                                        if (iVar4 != 0) goto switchD_00101581_caseD_17;
                                      }
                                    }
                                  }
                                  ossl_quic_sstream_free(*(undefined8 *)(lVar6 + 0x70));
                                  ossl_quic_stream_map_release(local_520,lVar6);
                                }
                                break;
                                             case 0x10:
                                local_600 = 0;
                                lVar6 = ossl_quic_stream_map_get_by_id
                                                  (local_520,*(undefined8 *)(param_2 + 2));
                                iVar4 = test_ptr("test/quic_txp_test.c",0x5ed,
                                                 "s = ossl_quic_stream_map_get_by_id(h.args.qsm, op->arg0)"
                                                 ,lVar6);
                                if (iVar4 != 0) {
                                  iVar4 = ossl_quic_sstream_append
                                                    (*(undefined8 *)(lVar6 + 0x70),
                                                     *(undefined8 *)(param_2 + 6),
                                                     *(undefined8 *)(param_2 + 8),&local_600);
                                  iVar4 = test_true("test/quic_txp_test.c",0x5f1,
                                                                                                        
                                                  "ossl_quic_sstream_append(s->sstream, op->buf, op->buf_len, &consumed)"
                                                  ,iVar4 != 0);
                                  if (iVar4 != 0) {
                                    iVar4 = test_size_t_eq("test/quic_txp_test.c",0x5f5,"consumed",
                                                           "op->buf_len",local_600,
                                                           *(undefined8 *)(param_2 + 8));
                                    goto joined_r0x00101680;
                                  }
                                }
                                break;
                                             case 0x11:
                                lVar6 = ossl_quic_stream_map_get_by_id
                                                  (local_520,*(undefined8 *)(param_2 + 2));
                                iVar4 = test_ptr("test/quic_txp_test.c",0x5ff,
                                                 "s = ossl_quic_stream_map_get_by_id(h.args.qsm, op->arg0)"
                                                 ,lVar6);
                                if (iVar4 == 0) break;
                                ossl_quic_sstream_fin(*(undefined8 *)(lVar6 + 0x70));
                                goto switchD_00101581_caseD_17;
                                             case 0x12:
                                lVar6 = ossl_quic_stream_map_get_by_id
                                                  (local_520,*(undefined8 *)(param_2 + 2));
                                iVar4 = test_ptr("test/quic_txp_test.c",0x60a,
                                                 "s = ossl_quic_stream_map_get_by_id(h.args.qsm, op->arg0)"
                                                 ,lVar6);
                                if (iVar4 != 0) {
                                  iVar4 = ossl_quic_stream_map_stop_sending_recv_part
                                                    (local_520,lVar6,*(undefined8 *)(param_2 + 4));
                                  iVar4 = test_true("test/quic_txp_test.c",0x60e,
                                                                                                        
                                                  "ossl_quic_stream_map_stop_sending_recv_part(h.args.qsm, s, op->arg1)"
                                                  ,iVar4 != 0);
                                  if (iVar4 != 0) {
                                    ossl_quic_stream_map_update_state(local_520,lVar6);
                                    iVar4 = test_true("test/quic_txp_test.c",0x614,"s->active",
                                                      *(byte *)(lVar6 + 0x103) & 1);
                                    goto joined_r0x0010188b;
                                  }
                                }
                                break;
                                             case 0x13:
                                lVar6 = ossl_quic_stream_map_get_by_id
                                                  (local_520,*(undefined8 *)(param_2 + 2));
                                iVar4 = test_ptr("test/quic_txp_test.c",0x61c,
                                                 "s = ossl_quic_stream_map_get_by_id(h.args.qsm, op->arg0)"
                                                 ,lVar6);
                                if (iVar4 != 0) {
                                  iVar4 = ossl_quic_stream_map_reset_stream_send_part
                                                    (local_520,lVar6,*(undefined8 *)(param_2 + 4));
                                  iVar4 = test_true("test/quic_txp_test.c",0x620,
                                                                                                        
                                                  "ossl_quic_stream_map_reset_stream_send_part(h.args.qsm, s, op->arg1)"
                                                  ,iVar4 != 0);
                                  if (iVar4 != 0) {
                                    ossl_quic_stream_map_update_state(local_520,lVar6);
                                    iVar4 = test_true("test/quic_txp_test.c",0x626,"s->active",
                                                      *(byte *)(lVar6 + 0x103) & 1);
                                    goto joined_r0x0010188b;
                                  }
                                }
                                break;
                                             case 0x14:
                                iVar4 = ossl_quic_txfc_bump_cwm
                                                  (puStack_518,*(undefined8 *)(param_2 + 2));
                                iVar4 = test_true("test/quic_txp_test.c",0x62b,
                                                  "ossl_quic_txfc_bump_cwm(h.args.conn_txfc, op->arg0)"
                                                  ,iVar4 != 0);
joined_r0x0010188b:
                                if (iVar4 == 0) break;
switchD_00101581_caseD_17:
                                iVar4 = param_2[0xc];
                                param_2 = param_2 + 0xc;
                                lVar7 = lVar7 + 1;
                                goto joined_r0x00101563;
                                             case 0x15:
                                lVar6 = ossl_quic_stream_map_get_by_id
                                                  (local_520,*(undefined8 *)(param_2 + 4));
                                iVar4 = test_ptr("test/quic_txp_test.c",0x633,
                                                 "s = ossl_quic_stream_map_get_by_id(h.args.qsm, op->arg1)"
                                                 ,lVar6);
                                if (iVar4 != 0) {
                                  iVar4 = ossl_quic_txfc_bump_cwm
                                                    (lVar6 + 0x80,*(undefined8 *)(param_2 + 2));
                                  iVar4 = test_true("test/quic_txp_test.c",0x637,
                                                    "ossl_quic_txfc_bump_cwm(&s->txfc, op->arg0)",
                                                    iVar4 != 0);
joined_r0x00101680:
                                  if (iVar4 != 0) {
                                    ossl_quic_stream_map_update_state(local_520,lVar6);
                                    goto switchD_00101581_caseD_17;
                                  }
                                }
                                break;
                                             case 0x16:
                                ossl_quic_tx_packetiser_notify_handshake_complete(local_5e8[0]);
                                             case 0x17:
                                goto switchD_00101581_caseD_17;
                                             default:
                                test_error("test/quic_txp_test.c",0x643,"bad opcode");
                                          }

                                          LAB_001016dc:uVar5 = 0;
                                          test_error("test/quic_txp_test.c", 0x64b, "script %d failed at op %zu", param_1 + 1, lVar7 + 1);
                                          goto LAB_00101600;
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
LAB_00101049:uVar5 = 0;helper_cleanup(local_5e8);test_error("test/quic_txp_test.c", 0x64b, "script %d failed at op %zu", param_1 + 1, 1);LAB_00101077:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar5;LAB_001015fb:uVar5 = 1;LAB_00101600:helper_cleanup(local_5e8);goto LAB_00101077;}undefined4 test_dyn_script_1(undefined8 param_1) {
   int iVar1;
   ulong uVar2;
   uVar2 = (long)(int)param_1 + 1000;
   if (uVar2 < 0x45c) {
      dyn_script_1._480_4_ = 9;
      dyn_script_1._520_8_ = check_is_handshake;
      dyn_script_1._432_4_ = 3;
   }
 else {
      dyn_script_1._480_4_ = 0x17;
      dyn_script_1._432_4_ = 4;
   }

   dyn_script_1._176_8_ = uVar2;
   iVar1 = run_script(param_1, dyn_script_1);
   if (iVar1 != 0) {
      return 1;
   }

   test_error("test/quic_txp_test.c", 0x6a0, "failed dyn script 1 with target size %zu", uVar2);
   return 0;
}
void test_script(int param_1) {
   run_script(param_1, *(undefined8*)( scripts + (long)param_1 * 8 ));
   return;
}
undefined8 setup_tests(void) {
   add_all_tests("test_script", test_script, 0x12, 1);
   add_all_tests("test_dyn_script_1", test_dyn_script_1, 0xc9, 1);
   return 1;
}


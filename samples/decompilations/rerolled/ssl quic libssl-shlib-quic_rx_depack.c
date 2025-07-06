void update_streams(undefined8 param_1, long param_2) {
   ossl_quic_stream_map_update_state(param_2 + 0x350, param_1);
   return;
}void update_streams_uni(long param_1, long param_2) {
   if (( *(byte*)( param_1 + 0x100 ) & 2 ) == 0) {
      return;
   }
   ossl_quic_stream_map_update_state(param_2 + 0x350, param_1);
   return;
}void update_streams_bidi(long param_1, long param_2) {
   if (( *(byte*)( param_1 + 0x100 ) & 2 ) != 0) {
      return;
   }
   ossl_quic_stream_map_update_state(param_2 + 0x350, param_1);
   return;
}undefined8 depack_do_implicit_stream_create(long param_1, ulong param_2, undefined8 param_3, long *param_4) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   char *pcVar4;
   long lVar5;
   ulong *puVar6;
   ulong uVar7;
   undefined8 uVar8;
   lVar2 = ossl_quic_stream_map_get_by_id(param_1 + 0x350);
   if (lVar2 == 0) {
      uVar7 = param_2 >> 2;
      if (( (uint)param_2 & 1 ) == ( ( *(byte*)( param_1 + 0x623 ) >> 1 ^ 1 ) & 1 )) {
         if (( param_2 & 2 ) == 0) {
            puVar6 = (ulong*)( param_1 + 0x5a0 );
            lVar5 = param_1 + 0x290;
         } else {
            puVar6 = (ulong*)( param_1 + 0x5a8 );
            lVar5 = param_1 + 0x2f0;
         }
         iVar1 = ossl_quic_rxfc_on_rx_stream_frame(lVar5, uVar7 + 1, 0);
         if (iVar1 == 0) {
            pcVar4 = "internal error (stream count RXFC)";
            uVar8 = 0x1ae;
            LAB_00100236:ossl_quic_channel_raise_protocol_error_loc(param_1, 1, param_3, pcVar4, 0, "ssl/quic/quic_rx_depack.c", uVar8, "depack_do_implicit_stream_create");
            return 0;
         }
         iVar1 = ossl_quic_rxfc_get_error(lVar5, 0);
         if (iVar1 != 0) {
            ossl_quic_channel_raise_protocol_error_loc(param_1, 4, param_3, "exceeded maximum allowed streams", 0, "ssl/quic/quic_rx_depack.c", 0x1b6, "depack_do_implicit_stream_create");
            return 0;
         }
         uVar3 = *puVar6;
         while (uVar3 <= uVar7) {
            lVar2 = ossl_quic_channel_new_stream_remote(param_1, uVar3 << 2 | ( ulong )((uint)param_2 & 3));
            if (lVar2 == 0) {
               pcVar4 = "internal error (stream allocation)";
               uVar8 = 0x1c7;
               goto LAB_00100236;
            }
            uVar3 = *puVar6 + 1;
            *puVar6 = uVar3;
         };
      } else {
         if (( param_2 & 2 ) == 0) {
            uVar3 = *(ulong*)( param_1 + 0x590 );
         } else {
            uVar3 = *(ulong*)( param_1 + 0x598 );
         }
         if (uVar3 <= uVar7) {
            ossl_quic_channel_raise_protocol_error_loc(param_1, 5, param_3, "STREAM frame for nonexistent stream", 0, "ssl/quic/quic_rx_depack.c", 0x1dd, "depack_do_implicit_stream_create");
            return 0;
         }
      }
   }
   *param_4 = lVar2;
   return 1;
}void free_path_response(void *param_1) {
   CRYPTO_free(param_1);
   return;
}undefined8 ossl_quic_handle_frames(undefined8 *param_1, char *param_2) {
   long lVar1;
   char cVar2;
   undefined1 uVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   undefined4 uVar7;
   ulong uVar8;
   char *pcVar9;
   int iVar10;
   void *ptr;
   ulong uVar11;
   char *pcVar12;
   uint uVar13;
   char *extraout_RDX;
   char *extraout_RDX_00;
   char *extraout_RDX_01;
   char *extraout_RDX_02;
   char *extraout_RDX_03;
   char *extraout_RDX_04;
   char *extraout_RDX_05;
   char *extraout_RDX_06;
   char *extraout_RDX_07;
   char *extraout_RDX_08;
   char *extraout_RDX_09;
   char *extraout_RDX_10;
   char *extraout_RDX_11;
   char *extraout_RDX_12;
   char *extraout_RDX_13;
   char *extraout_RDX_14;
   char *extraout_RDX_15;
   char *extraout_RDX_16;
   char *extraout_RDX_17;
   char *extraout_RDX_18;
   char *extraout_RDX_19;
   char *extraout_RDX_20;
   char *extraout_RDX_21;
   char *extraout_RDX_22;
   char *extraout_RDX_23;
   char *extraout_RDX_24;
   char *extraout_RDX_25;
   char *extraout_RDX_26;
   char *extraout_RDX_27;
   char *extraout_RDX_28;
   char *extraout_RDX_29;
   char *extraout_RDX_30;
   char *extraout_RDX_31;
   char *extraout_RDX_32;
   char *extraout_RDX_33;
   char *extraout_RDX_34;
   char *extraout_RDX_35;
   char *extraout_RDX_36;
   char *extraout_RDX_37;
   char *extraout_RDX_38;
   char *extraout_RDX_39;
   char *extraout_RDX_40;
   char *extraout_RDX_41;
   char *extraout_RDX_42;
   char *extraout_RDX_43;
   char *extraout_RDX_44;
   char *extraout_RDX_45;
   char *extraout_RDX_46;
   char *extraout_RDX_47;
   char *extraout_RDX_48;
   char *extraout_RDX_49;
   char *extraout_RDX_50;
   char *extraout_RDX_51;
   char *extraout_RDX_52;
   char *extraout_RDX_53;
   char *extraout_RDX_54;
   char *extraout_RDX_55;
   char *extraout_RDX_56;
   char *extraout_RDX_57;
   char *extraout_RDX_58;
   char *extraout_RDX_59;
   char *extraout_RDX_60;
   char *extraout_RDX_61;
   char *extraout_RDX_62;
   char *extraout_RDX_63;
   char *extraout_RDX_64;
   char *extraout_RDX_65;
   char *extraout_RDX_66;
   undefined8 uVar14;
   long in_FS_OFFSET;
   undefined1 auVar15[16];
   undefined8 uVar16;
   char *pcVar17;
   int local_108;
   int local_104;
   ulong local_100;
   long local_f8;
   ulong local_f0;
   undefined8 local_e8;
   long local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   ulong local_c8;
   char *local_b8;
   ulong local_b0;
   long local_a8;
   undefined8 local_a0;
   byte local_98;
   undefined1 local_78[56];
   long local_40;
   uVar16 = *(undefined8*)( param_2 + 0x18 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (undefined8*)0x0) {
      *(byte*)( (long)param_1 + 0x623 ) = *(byte*)( (long)param_1 + 0x623 ) & 0xef;
      local_d8 = *(undefined8*)( param_2 + 0x20 );
      local_c8 = 0;
      local_d0 = *(undefined8*)( param_2 + 0x28 );
      if (( **(byte**)param_2 - 1 < 5 ) && ( uVar4 = *(uint*)( CSWTCH_93 + ( ulong )(**(byte**)param_2 - 1) * 4 ) ),uVar4 < 4) {
         pcVar12 = param_2;
         if (uVar4 == 0) {
            ossl_quic_tx_packetiser_add_unvalidated_credit(param_1[0x1b], uVar16);
            pcVar17 = *(char**)param_2;
            if (-1 < *(long*)( pcVar17 + 0x48 )) {
               cVar2 = *pcVar17;
               uVar7 = 0;
               local_e8 = *(undefined8*)( pcVar17 + 0x50 );
               local_e0 = *(long*)( pcVar17 + 0x48 );
               goto LAB_001003ea;
            }
            LAB_001009a8:uVar14 = 0;
         } else {
            if (uVar4 == 2) {
               local_c8 = 1;
               ossl_quic_tx_packetiser_set_validated();
               pcVar17 = *(char**)param_2;
               if (-1 < *(long*)( pcVar17 + 0x48 )) {
                  cVar2 = *pcVar17;
                  uVar7 = 1;
                  local_e8 = *(undefined8*)( pcVar17 + 0x50 );
                  local_e0 = *(long*)( pcVar17 + 0x48 );
                  goto LAB_001003ea;
               }
               goto LAB_001009a8;
            }
            local_c8 = 2;
            ossl_quic_tx_packetiser_add_unvalidated_credit(param_1[0x1b], uVar16);
            pcVar17 = *(char**)param_2;
            if (*(long*)( pcVar17 + 0x48 ) < 0) goto LAB_001009a8;
            cVar2 = *pcVar17;
            uVar7 = 2;
            local_e8 = *(undefined8*)( pcVar17 + 0x50 );
            local_e0 = *(long*)( pcVar17 + 0x48 );
            LAB_001003ea:if (local_e0 == 0) {
               pcVar17 = "empty packet payload";
               uVar16 = 0x425;
               LAB_0010136e:pcVar12 = "depack_process_frames";
               uVar14 = 0;
               ossl_quic_channel_raise_protocol_error_loc(param_1, 10, 0, pcVar17, 0, "ssl/quic/quic_rx_depack.c", uVar16);
            } else {
               do {
                  iVar10 = ossl_quic_wire_peek_frame_header(&local_e8, &local_100, &local_108);
                  uVar8 = local_100;
                  if (iVar10 == 0) {
                     pcVar17 = "malformed frame header";
                     uVar16 = 0x436;
                     goto LAB_0010136e;
                  }
                  if (local_108 == 0) {
                     pcVar12 = "non-minimal frame type encoding";
                     uVar16 = 0x43e;
                     LAB_001013fe:ossl_quic_channel_raise_protocol_error_loc(param_1, 10, local_100, pcVar12, 0, "ssl/quic/quic_rx_depack.c", uVar16, "depack_process_frames");
                     uVar14 = 0;
                     pcVar12 = extraout_RDX_32;
                     goto LAB_00100590;
                  }
                  if (( 0x1d < local_100 ) || ( ( 0x3000000dUL >> ( local_100 & 0x3f ) & 1 ) == 0 )) {
                     local_c8 = local_c8 | 4;
                  }
                  switch (local_100) {
                     case 0:
              pcVar17 = (char *)0x101020;
              ossl_quic_wire_decode_padding();
              pcVar12 = extraout_RDX_23;
              break;
                     case 1:
              iVar10 = ossl_quic_wire_decode_frame_ping(&local_e8);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,1,"decode error",0,"ssl/quic/quic_rx_depack.c",0x32,
                           "depack_do_frame_ping");
                pcVar12 = extraout_RDX_34;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x101010;
              ossl_quic_tx_packetiser_schedule_ack_eliciting(param_1[0x1b],uVar4);
              pcVar12 = extraout_RDX_22;
              break;
                     case 2:
                     case 3:
              if (cVar2 == '\x02') {
                pcVar12 = "ACK not valid in 0-RTT";
                uVar16 = 0x467;
                goto LAB_001013fe;
              }
              uVar3 = *(undefined1 *)(param_1 + 0xa9);
              local_f0 = 0;
              iVar10 = ossl_quic_wire_peek_frame_ack_num_ranges(&local_e8,&local_f0);
              if ((iVar10 != 0) && (local_f0 >> 0x3c == 0)) {
                pcVar12 = (char *)param_1[0xc6];
                if ((ulong)param_1[199] < local_f0) {
                  pcVar12 = (char *)CRYPTO_realloc(pcVar12,(int)(local_f0 << 4),
                                                   "ssl/quic/quic_rx_depack.c",0x4d);
                  if (pcVar12 == (char *)0x0) goto LAB_00101328;
                  param_1[0xc6] = pcVar12;
                  param_1[199] = local_f0;
                }
                local_b0 = local_f0;
                local_b8 = pcVar12;
                iVar10 = ossl_quic_wire_decode_frame_ack(&local_e8,uVar3,&local_b8,0);
                if (iVar10 != 0) {
                  if ((**(char **)param_2 == '\x05') &&
                     (((uVar6 = *(ulong *)(param_2 + 0x38),
                       uVar11 = ossl_qrx_get_key_epoch(param_1[0x85]), uVar6 < uVar11 ||
                       ((*(byte *)((long)param_1 + 0x624) & 0x10) != 0)) &&
                      ((ulong)param_1[0xc2] <= *(ulong *)(local_b8 + 8))))) {
                    uVar14 = 0;
                    ossl_quic_channel_raise_protocol_error_loc
                              (param_1,0xe,uVar8,
                               "acked packet which initiated a key update without a corresponding key update"
                               ,0,"ssl/quic/quic_rx_depack.c",0x75,"depack_do_frame_ack");
                    pcVar12 = extraout_RDX_49;
                    goto LAB_00100590;
                  }
                  pcVar17 = (char *)0x100900;
                  iVar10 = ossl_ackm_on_rx_ack_frame(param_1[0x83],&local_b8,uVar7);
                  if (iVar10 != 0) {
                    *(short *)((long)param_1 + 0x54a) = *(short *)((long)param_1 + 0x54a) + 1;
                    pcVar12 = extraout_RDX_04;
                    break;
                  }
                }
              }
LAB_00101328:
              pcVar17 = "depack_do_frame_ack";
              pcVar12 = "decode error";
              uVar16 = 0x86;
              goto LAB_0010130b;
                     case 4:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,4,"RESET_STREAM not valid in INITIAL/HANDSHAKE",0,
                           "ssl/quic/quic_rx_depack.c",0x476,"depack_process_frames");
                pcVar12 = extraout_RDX_53;
                goto LAB_00100590;
              }
              local_f0 = 0;
              iVar10 = ossl_quic_wire_decode_frame_reset_stream(&local_e8,&local_b8);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,4,"decode error",0,"ssl/quic/quic_rx_depack.c",0x96,
                           "depack_do_frame_reset_stream");
                pcVar12 = extraout_RDX_39;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x10110d;
              iVar10 = depack_do_implicit_stream_create(param_1,local_b8,4);
              uVar8 = local_f0;
              pcVar12 = extraout_RDX_26;
              if (iVar10 == 0) goto LAB_001009a8;
              if (local_f0 != 0) {
                if (*(char *)(local_f0 + 0x102) == '\0') {
                  uVar14 = 0;
                  pcVar12 = "depack_do_frame_reset_stream";
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,5,4,"RESET_STREAM frame for TX only stream",0,
                             "ssl/quic/quic_rx_depack.c",0xa6);
                  goto LAB_00100590;
                }
                lVar5 = local_f0 + 0xa0;
                iVar10 = ossl_quic_rxfc_on_rx_stream_frame(lVar5,local_a8,1);
                if (iVar10 == 0) {
                  uVar14 = 0;
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,1,4,"internal error (flow control)",0,
                             "ssl/quic/quic_rx_depack.c",0xba,"depack_do_frame_reset_stream");
                  pcVar12 = extraout_RDX_50;
                  goto LAB_00100590;
                }
                iVar10 = ossl_quic_rxfc_get_error(lVar5,0);
                if ((long)iVar10 != 0) {
                  uVar14 = 0;
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,(long)iVar10,4,"flow control violation",0,
                             "ssl/quic/quic_rx_depack.c",0xc4,"depack_do_frame_reset_stream");
                  pcVar12 = extraout_RDX_51;
                  goto LAB_00100590;
                }
                ossl_quic_stream_map_notify_reset_recv_part(param_1 + 0x6a,uVar8,local_b0);
                pcVar17 = (char *)0x1011bb;
                ossl_quic_stream_map_update_state(param_1 + 0x6a,uVar8);
                pcVar12 = extraout_RDX_27;
              }
              break;
                     case 5:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,5,"STOP_SENDING not valid in INITIAL/HANDSHAKE",0,
                           "ssl/quic/quic_rx_depack.c",0x484,"depack_process_frames");
                uVar14 = 0;
                pcVar12 = extraout_RDX_56;
                goto LAB_00100590;
              }
              local_f0 = 0;
              iVar10 = ossl_quic_wire_decode_frame_stop_sending(&local_e8,&local_b8);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,5,"decode error",0,"ssl/quic/quic_rx_depack.c",0xe1,
                           "depack_do_frame_stop_sending");
                pcVar12 = extraout_RDX_37;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x101295;
              iVar10 = depack_do_implicit_stream_create(param_1,local_b8,5);
              pcVar12 = extraout_RDX_29;
              if (iVar10 == 0) goto LAB_001009a8;
              if (local_f0 != 0) {
                if (*(char *)(local_f0 + 0x101) == '\0') {
                  uVar14 = 0;
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,5,5,"STOP_SENDING frame for RX only stream",0,
                             "ssl/quic/quic_rx_depack.c",0xf1,"depack_do_frame_stop_sending");
                  pcVar12 = extraout_RDX_47;
                  goto LAB_00100590;
                }
                *(byte *)(local_f0 + 0x103) = *(byte *)(local_f0 + 0x103) | 8;
                *(ulong *)(local_f0 + 0x50) = local_b0;
                pcVar17 = (char *)0x1012d7;
                ossl_quic_stream_map_reset_stream_send_part();
                pcVar12 = extraout_RDX_30;
              }
              break;
                     case 6:
              if (cVar2 == '\x02') {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,6,"CRYPTO frame not valid in 0-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x491,"depack_process_frames");
                pcVar12 = extraout_RDX_63;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x100e6d;
              iVar10 = ossl_quic_wire_decode_frame_crypto(&local_e8,0,&local_b8);
              if (iVar10 == 0) {
                uVar14 = 0;
                pcVar12 = "depack_do_frame_crypto";
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,6,"decode error",0,"ssl/quic/quic_rx_depack.c",0x112);
                goto LAB_00100590;
              }
              pcVar12 = extraout_RDX_18;
              if (local_b0 != 0) {
                lVar5 = param_1[(ulong)((byte)local_c8 & 3) + 0x8c];
                pcVar12 = (char *)(ulong)((byte)local_c8 & 3);
                if (lVar5 == 0) goto LAB_001009a8;
                iVar10 = ossl_quic_rxfc_on_rx_stream_frame
                                   (param_1 + (long)pcVar12 * 0xc + 0x2e,local_b8 + local_b0,0);
                if (iVar10 == 0) {
                  pcVar12 = "internal error (crypto RXFC)";
                  uVar16 = 0x129;
                }
                else {
                  iVar10 = ossl_quic_rxfc_get_error(param_1 + (long)pcVar12 * 0xc + 0x2e,0);
                  if (iVar10 != 0) {
                    uVar14 = 0;
                    ossl_quic_channel_raise_protocol_error_loc
                              (param_1,0xd,6,"exceeded maximum crypto buffer",0,
                               "ssl/quic/quic_rx_depack.c",0x131,"depack_do_frame_crypto");
                    pcVar12 = extraout_RDX_48;
                    goto LAB_00100590;
                  }
                  pcVar17 = (char *)0x100f19;
                  iVar10 = ossl_quic_rstream_queue_data(lVar5,param_2,local_b8,local_a8,local_b0,0);
                  if (iVar10 != 0) {
                    *(byte *)((long)param_1 + 0x623) = *(byte *)((long)param_1 + 0x623) | 0x10;
                    pcVar12 = extraout_RDX_19;
                    break;
                  }
                  pcVar12 = "internal error (rstream queue)";
                  uVar16 = 0x139;
                }
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,1,6,pcVar12,0,"ssl/quic/quic_rx_depack.c",uVar16,
                           "depack_do_frame_crypto");
                pcVar12 = extraout_RDX_45;
                goto LAB_00100590;
              }
              break;
                     case 7:
              if (cVar2 == '\x05') {
                if ((*(byte *)((long)param_1 + 0x623) & 2) == 0) {
                  iVar10 = ossl_quic_wire_decode_frame_new_token(&local_e8,&local_f0,&local_b8);
                  uVar8 = local_f0;
                  if (iVar10 == 0) {
                    pcVar12 = "decode error";
                    uVar16 = 0x14d;
                  }
                  else {
                    if (local_b8 != (char *)0x0) {
                      uVar16 = ossl_quic_port_get_channel_ctx(*param_1);
                      pcVar17 = (char *)0x101234;
                      iVar10 = ossl_quic_set_peer_token(uVar16,param_1 + 0xd,uVar8);
                      pcVar12 = extraout_RDX_28;
                      if (iVar10 != 0) break;
                      uVar14 = 0;
                      goto LAB_00100590;
                    }
                    pcVar12 = "zero-length NEW_TOKEN";
                    uVar16 = 0x15a;
                  }
                  uVar14 = 0;
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,7,7,pcVar12,0,"ssl/quic/quic_rx_depack.c",uVar16,
                             "depack_do_frame_new_token");
                  pcVar12 = extraout_RDX_42;
                  goto LAB_00100590;
                }
                pcVar12 = "NEW_TOKEN can only be sent by a server";
                uVar16 = 0x4a9;
              }
              else {
                pcVar12 = "NEW_TOKEN valid only in 1-RTT";
                uVar16 = 0x49d;
              }
              ossl_quic_channel_raise_protocol_error_loc
                        (param_1,10,7,pcVar12,0,"ssl/quic/quic_rx_depack.c",uVar16,
                         "depack_process_frames");
              uVar14 = 0;
              pcVar12 = extraout_RDX_55;
              goto LAB_00100590;
                     for (int i_502 = 0; i_502 < 7; i_502++) {
                        case 8:
                     }
                     case 0xf:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                pcVar12 = "STREAM valid only in 0/1-RTT";
                uVar16 = 0x4bf;
                goto LAB_001013fe;
              }
              local_104 = 0;
              iVar10 = ossl_quic_wire_decode_frame_stream(&local_e8,0,&local_b8);
              if (iVar10 == 0) {
                pcVar17 = "depack_do_frame_stream";
                pcVar12 = "decode error";
                uVar16 = 0x200;
                goto LAB_0010130b;
              }
              pcVar17 = (char *)0x10066b;
              iVar10 = depack_do_implicit_stream_create(param_1,local_b8,uVar8);
              lVar5 = local_f8;
              pcVar12 = extraout_RDX_01;
              if (iVar10 == 0) goto LAB_001009a8;
              if (local_f8 == 0) break;
              if (*(char *)(local_f8 + 0x102) == '\0') {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,5,uVar8,"STREAM frame for TX only stream",0,
                           "ssl/quic/quic_rx_depack.c",0x213,"depack_do_frame_stream");
                pcVar12 = extraout_RDX_46;
                goto LAB_00100590;
              }
              lVar1 = local_f8 + 0xa0;
              iVar10 = ossl_quic_rxfc_on_rx_stream_frame
                                 (lVar1,local_a8 + local_b0,local_98 >> 1 & 1);
              if (iVar10 == 0) {
                pcVar17 = "internal error (flow control)";
                uVar16 = 0x21f;
LAB_00101a31:
                pcVar12 = "depack_do_frame_stream";
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,1,uVar8,pcVar17,0,"ssl/quic/quic_rx_depack.c",uVar16);
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x1006f4;
              iVar10 = ossl_quic_rxfc_get_error(lVar1,0);
              if ((long)iVar10 != 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,(long)iVar10,uVar8,"flow control violation",0,
                           "ssl/quic/quic_rx_depack.c",0x229,"depack_do_frame_stream");
                pcVar12 = extraout_RDX_52;
                goto LAB_00100590;
              }
              uVar13 = *(byte *)(lVar5 + 0x102) - 1;
              pcVar12 = (char *)(ulong)uVar13;
              if (1 < uVar13) break;
              if ((local_98 & 2) != 0) {
                if (*(byte *)(lVar5 + 0x102) != 1) {
                  pcVar17 = (char *)0x101e3c;
                  iVar10 = ossl_quic_rxfc_get_final_size(lVar1,0);
                  pcVar12 = extraout_RDX_64;
                  if (iVar10 != 0) goto LAB_00100764;
                }
                pcVar17 = (char *)0x10075a;
                ossl_quic_stream_map_notify_size_known_recv_part
                          (param_1 + 0x6a,lVar5,local_a8 + local_b0);
                pcVar12 = extraout_RDX_02;
              }
LAB_00100764:
              if ((*(byte *)(lVar5 + 0x103) & 4) != 0) break;
              if ((local_a8 != 0) || ((local_98 & 2) != 0)) {
                pcVar17 = (char *)0x1007bc;
                iVar10 = ossl_quic_rstream_queue_data
                                   (*(undefined8 *)(lVar5 + 0x78),param_2,local_b0,local_a0,local_a8
                                    ,local_98 >> 1 & 1);
                pcVar12 = extraout_RDX_03;
                if (iVar10 == 0) {
                  pcVar17 = "internal error (rstream queue)";
                  uVar16 = 0x267;
                  goto LAB_00101a31;
                }
              }
              if (*(char *)(lVar5 + 0x102) == '\x02') {
                pcVar17 = (char *)0x101eac;
                iVar10 = ossl_quic_rstream_available
                                   (*(undefined8 *)(lVar5 + 0x78),&local_f0,&local_104);
                pcVar12 = extraout_RDX_66;
                if (iVar10 == 0) {
                  pcVar17 = "internal error (rstream available)";
                  uVar16 = 0x276;
                  goto LAB_00101a31;
                }
              }
              if (local_104 != 0) {
                pcVar17 = (char *)0x101e67;
                ossl_quic_stream_map_notify_totally_received(param_1 + 0x6a,lVar5);
                pcVar12 = extraout_RDX_65;
              }
              break;
                     case 0x10:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x10,"MAX_DATA valid only in 0/1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x4ce,"depack_process_frames");
                uVar14 = 0;
                pcVar12 = extraout_RDX_59;
                goto LAB_00100590;
              }
              local_b8 = (char *)0x0;
              iVar10 = ossl_quic_wire_decode_frame_max_data(&local_e8,&local_b8);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,0x10,"decode error",0,"ssl/quic/quic_rx_depack.c",0x2a6,
                           "depack_do_frame_max_data");
                pcVar12 = extraout_RDX_38;
                goto LAB_00100590;
              }
              ossl_quic_txfc_bump_cwm(param_1 + 0x1e,local_b8);
              pcVar17 = (char *)0x101088;
              ossl_quic_stream_map_visit(param_1 + 0x6a,0x100000,param_1);
              pcVar12 = extraout_RDX_24;
              break;
                     case 0x11:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x11,"MAX_STREAM_DATA valid only in 0/1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x4db,"depack_process_frames");
                pcVar12 = extraout_RDX_61;
                goto LAB_00100590;
              }
              local_f8 = 0;
              local_f0 = 0;
              iVar10 = ossl_quic_wire_decode_frame_max_stream_data(&local_e8,&local_f8,&local_f0);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,0x11,"decode error",0,"ssl/quic/quic_rx_depack.c",700,
                           "depack_do_frame_max_stream_data");
                pcVar12 = extraout_RDX_40;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x100f98;
              iVar10 = depack_do_implicit_stream_create(param_1,local_f8,0x11);
              pcVar9 = local_b8;
              pcVar12 = extraout_RDX_20;
              if (iVar10 == 0) goto LAB_001009a8;
              pcVar12 = local_b8;
              if (local_b8 != (char *)0x0) {
                if (local_b8[0x101] == '\0') {
                  uVar14 = 0;
                  pcVar12 = "depack_do_frame_max_stream_data";
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,5,0x11,"MAX_STREAM_DATA for TX only stream",0,
                             "ssl/quic/quic_rx_depack.c",0x2cc);
                  goto LAB_00100590;
                }
                ossl_quic_txfc_bump_cwm(local_b8 + 0x80,local_f0);
                pcVar17 = (char *)0x100fe5;
                ossl_quic_stream_map_update_state(param_1 + 0x6a,pcVar9);
                pcVar12 = extraout_RDX_21;
              }
              break;
                     case 0x12:
                     case 0x13:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                pcVar12 = "MAX_STREAMS valid only in 0/1-RTT";
                uVar16 = 0x4ea;
                goto LAB_001013fe;
              }
              local_b8 = (char *)0x0;
              iVar10 = ossl_quic_wire_decode_frame_max_streams(&local_e8,&local_b8);
              if (iVar10 == 0) {
                pcVar17 = "depack_do_frame_max_streams";
                pcVar12 = "decode error";
                uVar16 = 0x2e1;
              }
              else {
                if (local_b8 < (char *)0x1000000000000001) {
                  if (uVar8 == 0x13) {
                    if ((char *)param_1[0xac] < local_b8) {
                      param_1[0xac] = local_b8;
                    }
                    pcVar17 = (char *)0x1016e9;
                    ossl_quic_stream_map_visit(param_1 + 0x6a,update_streams_uni,param_1);
                    pcVar12 = extraout_RDX_43;
                  }
                  else {
                    if ((char *)param_1[0xab] < local_b8) {
                      param_1[0xab] = local_b8;
                    }
                    pcVar17 = (char *)0x100a3b;
                    ossl_quic_stream_map_visit(param_1 + 0x6a,update_streams_bidi,param_1);
                    pcVar12 = extraout_RDX_07;
                  }
                  break;
                }
                pcVar17 = "depack_do_frame_max_streams";
                pcVar12 = "invalid max streams value";
                uVar16 = 0x2e9;
              }
              goto LAB_0010130b;
                     case 0x14:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x14,"DATA_BLOCKED valid only in 0/1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x4f9,"depack_process_frames");
                pcVar12 = extraout_RDX_58;
                goto LAB_00100590;
              }
              local_b8 = (char *)0x0;
              pcVar17 = (char *)0x100c5e;
              iVar10 = ossl_quic_wire_decode_frame_data_blocked(&local_e8,&local_b8);
              pcVar12 = extraout_RDX_11;
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,0x14,"decode error",0,"ssl/quic/quic_rx_depack.c",0x311,
                           "depack_do_frame_data_blocked");
                pcVar12 = extraout_RDX_12;
                goto LAB_00100590;
              }
              break;
                     case 0x15:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x15,"STREAM_DATA_BLOCKED valid only in 0/1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x506,"depack_process_frames");
                uVar14 = 0;
                pcVar12 = extraout_RDX_60;
                goto LAB_00100590;
              }
              local_f8 = 0;
              local_f0 = 0;
              iVar10 = ossl_quic_wire_decode_frame_stream_data_blocked
                                 (&local_e8,&local_f8,&local_f0);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,0x15,"decode error",0,"ssl/quic/quic_rx_depack.c",0x326,
                           "depack_do_frame_stream_data_blocked");
                pcVar12 = extraout_RDX_35;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x100de8;
              iVar10 = depack_do_implicit_stream_create(param_1,local_f8,0x15);
              pcVar12 = extraout_RDX_16;
              if (iVar10 == 0) goto LAB_001009a8;
              pcVar12 = extraout_RDX_16;
              if ((local_b8 != (char *)0x0) && (pcVar12 = extraout_RDX_16, local_b8[0x102] == '\0'))
              {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,5,0x15,"STREAM_DATA_BLOCKED frame for TX only stream",0,
                           "ssl/quic/quic_rx_depack.c",0x33f,"depack_do_frame_stream_data_blocked");
                pcVar12 = extraout_RDX_17;
                goto LAB_00100590;
              }
              break;
                     case 0x16:
                     case 0x17:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                pcVar12 = "STREAMS valid only in 0/1-RTT";
                uVar16 = 0x515;
                goto LAB_001013fe;
              }
              local_b8 = (char *)0x0;
              pcVar17 = (char *)0x100953;
              iVar10 = ossl_quic_wire_decode_frame_streams_blocked(&local_e8,&local_b8);
              if (iVar10 == 0) {
                pcVar17 = "depack_do_frame_streams_blocked";
                pcVar12 = "decode error";
                uVar16 = 0x353;
                goto LAB_0010130b;
              }
              pcVar12 = extraout_RDX_05;
              if ((char *)0x1000000000000000 < local_b8) {
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,4,uVar8,"invalid stream count limit",0,
                           "ssl/quic/quic_rx_depack.c",0x361,"depack_do_frame_streams_blocked");
                pcVar12 = extraout_RDX_06;
                goto LAB_001009a8;
              }
              break;
                     case 0x18:
              pcVar12 = extraout_RDX;
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                pcVar12 = "depack_process_frames";
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x18,"NEW_CONN_ID valid only in 0/1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x524);
              }
              iVar10 = ossl_quic_wire_decode_frame_new_conn_id(&local_e8,local_78,pcVar12);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,0x18,"decode error",0,"ssl/quic/quic_rx_depack.c",0x373,
                           "depack_do_frame_new_conn_id");
                pcVar12 = extraout_RDX_33;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x100d82;
              ossl_quic_channel_on_new_conn_id(param_1,local_78);
              pcVar12 = extraout_RDX_15;
              break;
                     case 0x19:
              if ((cVar2 == '\x02') || (cVar2 == '\x05')) {
                pcVar17 = (char *)0x100cc2;
                iVar10 = ossl_quic_wire_decode_frame_retire_conn_id(&local_e8,&local_b8);
                if (iVar10 == 0) {
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,7,0x19,"decode error",0,"ssl/quic/quic_rx_depack.c",0x386,
                             "depack_do_frame_retire_conn_id");
                  uVar14 = 0;
                  pcVar12 = extraout_RDX_44;
                  goto LAB_00100590;
                }
                pcVar12 = extraout_RDX_13;
                if ((*(byte *)((long)param_1 + 0x623) & 2) != 0) break;
                pcVar17 = "depack_do_frame_retire_conn_id";
                pcVar12 = "conn has zero-length CID";
                uVar16 = 0x39b;
              }
              else {
                pcVar17 = "depack_process_frames";
                pcVar12 = "RETIRE_CONN_ID valid only in 0/1-RTT";
                uVar16 = 0x530;
              }
              uVar14 = 0;
              ossl_quic_channel_raise_protocol_error_loc
                        (param_1,10,0x19,pcVar12,0,"ssl/quic/quic_rx_depack.c",uVar16,pcVar17);
              pcVar12 = extraout_RDX_14;
              goto LAB_00100590;
                     case 0x1a:
              if ((cVar2 == '\x02') || (cVar2 == '\x05')) {
                local_f0 = 0;
                iVar10 = ossl_quic_wire_decode_frame_path_challenge(&local_e8,&local_f0);
                if (iVar10 == 0) {
                  uVar14 = 0;
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,7,0x1a,"decode error",0,"ssl/quic/quic_rx_depack.c",0x3b4,
                             "depack_do_frame_path_challenge");
                  pcVar12 = extraout_RDX_36;
                }
                else {
                  ptr = CRYPTO_malloc(9,"ssl/quic/quic_rx_depack.c",0x3c3);
                  if (ptr != (void *)0x0) {
                    iVar10 = WPACKET_init_static_len(&local_b8,ptr,9,0);
                    if (iVar10 != 0) {
                      iVar10 = ossl_quic_wire_encode_frame_path_response(&local_b8,local_f0);
                      if (iVar10 == 0) {
                        WPACKET_cleanup(&local_b8);
                      }
                      else {
                        pcVar17 = (char *)0x100b98;
                        WPACKET_finish();
                        auVar15 = ossl_quic_cfq_add_frame
                                            (param_1[0x1d],0,2,0x1b,1,ptr,9,free_path_response,0);
                        pcVar12 = auVar15._8_8_;
                        if (auVar15._0_8_ != 0) break;
                      }
                    }
                  }
                  uVar14 = 0;
                  CRYPTO_free(ptr);
                  pcVar12 = "depack_do_frame_path_challenge";
                  ossl_quic_channel_raise_protocol_error_loc
                            (param_1,1,0x1a,"internal error",0,"ssl/quic/quic_rx_depack.c",0x3db);
                }
              }
              else {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x1a,"PATH_CHALLENGE valid only in 0/1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x53d,"depack_process_frames");
                pcVar12 = extraout_RDX_57;
              }
              goto LAB_00100590;
                     case 0x1b:
              if (cVar2 != '\x05') {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x1b,"PATH_CHALLENGE valid only in 1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x54a,"depack_process_frames");
                pcVar12 = extraout_RDX_62;
                goto LAB_00100590;
              }
              local_b8 = (char *)0x0;
              pcVar17 = (char *)0x100ab7;
              iVar10 = ossl_quic_wire_decode_frame_path_response(&local_e8,&local_b8);
              pcVar12 = extraout_RDX_09;
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,7,0x1b,"decode error",0,"ssl/quic/quic_rx_depack.c",1000,
                           "depack_do_frame_path_response");
                pcVar12 = extraout_RDX_10;
                goto LAB_00100590;
              }
              break;
                     case 0x1c:
              goto switchD_00100483_caseD_1c;
                     case 0x1d:
              if ((cVar2 != '\x02') && (cVar2 != '\x05')) {
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x1d,"CONN_CLOSE (APP) valid only in 0/1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x558,"depack_process_frames");
                uVar14 = 0;
                pcVar12 = extraout_RDX_08;
                goto LAB_00100590;
              }
switchD_00100483_caseD_1c:
              iVar10 = ossl_quic_wire_decode_frame_conn_close(&local_e8);
              if (iVar10 == 0) {
                pcVar17 = "depack_do_frame_conn_close";
                pcVar12 = "decode error";
                uVar16 = 0x3fa;
                goto LAB_0010130b;
              }
              pcVar17 = "\x0f\x1f@";
              ossl_quic_channel_on_remote_conn_close(param_1,&local_b8);
              pcVar12 = extraout_RDX_00;
              break;
                     case 0x1e:
              if (cVar2 != '\x05') {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,10,0x1e,"HANDSHAKE_DONE valid only in 1-RTT",0,
                           "ssl/quic/quic_rx_depack.c",0x568,"depack_process_frames");
                pcVar12 = extraout_RDX_54;
                goto LAB_00100590;
              }
              iVar10 = ossl_quic_wire_decode_frame_handshake_done(&local_e8);
              if (iVar10 == 0) {
                uVar14 = 0;
                ossl_quic_channel_raise_protocol_error_loc
                          (param_1,1,0x1e,"internal error (decode frame handshake done)",0,
                           "ssl/quic/quic_rx_depack.c",0x40b,"depack_do_frame_handshake_done");
                pcVar12 = extraout_RDX_41;
                goto LAB_00100590;
              }
              pcVar17 = (char *)0x1010b3;
              ossl_quic_channel_on_handshake_confirmed();
              pcVar12 = extraout_RDX_25;
              break;
                     default:
              pcVar17 = "depack_process_frames";
              pcVar12 = "Unknown frame type received";
              uVar16 = 0x574;
LAB_0010130b:
              uVar14 = 0;
              ossl_quic_channel_raise_protocol_error_loc
                        (param_1,7,uVar8,pcVar12,0,"ssl/quic/quic_rx_depack.c",uVar16,pcVar17);
              pcVar12 = extraout_RDX_31;
              goto LAB_00100590;
                  }
                  if ((code*)param_1[0x86] != (code*)0x0) {
                     uVar16 = 0x204;
                     if (( local_100 != 0 ) && ( ( ( local_100 & 0xfffffffffffffff8 ) == 8 || ( uVar16 = 0x202 ),local_100 == 6 ) )) {
                        uVar16 = 0x203;
                     }
                     pcVar12 = pcVar17;
                     ( *(code*)param_1[0x86] )(0, 1, uVar16);
                  }
               } while ( local_e0 != 0 );
               uVar14 = 1;
            }
         }
         LAB_00100590:ossl_ackm_on_rx_packet(param_1[0x83], &local_d8, pcVar12);
         goto LAB_0010032c;
      }
   }
   uVar14 = 0;
   LAB_0010032c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar14;
}

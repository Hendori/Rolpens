undefined8 log_frame_actual(undefined8 param_1, long *param_2, long *param_3) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   char *pcVar5;
   char *pcVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   long local_290;
   undefined1 local_288[8];
   undefined8 local_280;
   undefined8 *local_278;
   ulong local_270;
   ulong local_268;
   undefined8 local_260;
   byte local_258;
   undefined7 uStack_257;
   undefined8 local_250;
   byte local_248;
   undefined8 local_238;
   undefined8 local_230;
   undefined1 local_228;
   undefined1 local_227[20];
   undefined1 local_213[483];
   long local_30;
   lVar4 = *param_2;
   lVar1 = param_2[1];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ossl_quic_wire_peek_frame_header(param_2, &local_290, 0);
   if ((int)uVar3 == 0) {
      *param_3 = -1;
      goto LAB_00100108;
   }
   switch (local_290) {
      case 0:
    ossl_qlog_str(param_1,"frame_type","padding");
    uVar3 = ossl_quic_wire_decode_padding(param_2);
    ossl_qlog_u64(param_1,"payload_length",uVar3);
    break;
      case 1:
    iVar2 = ossl_quic_wire_decode_frame_ping(param_2);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type",&_LC7);
    break;
      case 2:
      case 3:
    iVar2 = ossl_quic_wire_peek_frame_ack_num_ranges(param_2,local_288);
    if (iVar2 != 0) {
      local_278 = &local_238;
      local_270 = 0x20;
      iVar2 = ossl_quic_wire_decode_frame_ack(param_2,3,&local_278,&local_280);
      if (iVar2 != 0) {
        ossl_qlog_str(param_1,"frame_type",&_LC8);
        ossl_qlog_u64(param_1,"ack_delay",local_268 / 1000000);
        if ((local_248 & 1) != 0) {
          ossl_qlog_u64(param_1,&_LC10,local_260);
          ossl_qlog_u64(param_1,&_LC11,CONCAT71(uStack_257,local_258));
          ossl_qlog_u64(param_1,&_LC12,local_250);
        }
        uVar7 = 0;
        ossl_qlog_array_begin(param_1,"acked_ranges");
        if (local_270 != 0) {
          do {
            ossl_qlog_array_begin(param_1,0);
            ossl_qlog_u64(param_1,0,local_278[uVar7 * 2]);
            if ((local_278 + uVar7 * 2)[1] != local_278[uVar7 * 2]) {
              ossl_qlog_u64(param_1);
            }
            uVar7 = uVar7 + 1;
            ossl_qlog_array_end(param_1);
          } while (uVar7 < local_270);
        }
        ossl_qlog_array_end(param_1);
        break;
      }
    }
      default:
switchD_00100064_default:
    ossl_qlog_str(param_1,"frame_type","unknown");
    ossl_qlog_u64(param_1,"frame_type_value",local_290);
    ossl_qlog_group_begin(param_1,&_LC49);
    ossl_qlog_bin(param_1,&_LC50,lVar4,lVar1);
    ossl_qlog_group_end(param_1);
    *param_2 = *param_2 + param_2[1];
    param_2[1] = 0;
    break;
      case 4:
    iVar2 = ossl_quic_wire_decode_frame_reset_stream(param_2,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","reset_stream");
    ossl_qlog_u64(param_1,"stream_id",local_278);
    ossl_qlog_u64(param_1,"error_code",local_270);
    ossl_qlog_u64(param_1,"final_size",local_268);
    break;
      case 5:
    iVar2 = ossl_quic_wire_decode_frame_stop_sending(param_2,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","stop_sending");
    ossl_qlog_u64(param_1,"stream_id",local_278);
    ossl_qlog_u64(param_1,"error_code",local_270);
    break;
      case 6:
    iVar2 = ossl_quic_wire_decode_frame_crypto(param_2,1,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","crypto");
    ossl_qlog_u64(param_1,"offset",local_278);
    ossl_qlog_u64(param_1,"payload_length",local_270);
    *param_3 = *param_3 + local_270;
    break;
      case 7:
    iVar2 = ossl_quic_wire_decode_frame_new_token(param_2,&local_280,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","new_token");
    ossl_qlog_group_begin(param_1,"token");
    ossl_qlog_group_begin(param_1,&_LC49);
    ossl_qlog_bin(param_1,&_LC50,local_280,local_278);
    ossl_qlog_group_end(param_1);
    ossl_qlog_group_end(param_1);
    break;
      for (int i_1862 = 0; i_1862 < 7; i_1862++) {
         case 8:
      }
      case 0xf:
    iVar2 = ossl_quic_wire_decode_frame_stream(param_2,1,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","stream");
    ossl_qlog_u64(param_1,"stream_id",local_278);
    ossl_qlog_u64(param_1,"offset",local_270);
    ossl_qlog_u64(param_1,"payload_length",local_268);
    ossl_qlog_bool(param_1,"explicit_length",local_258 & 1);
    if ((local_258 & 2) != 0) {
      ossl_qlog_bool(param_1,&_LC23,1);
    }
    lVar4 = -1;
    if ((local_258 & 1) != 0) {
      lVar4 = local_268 + *param_3;
    }
    *param_3 = lVar4;
    break;
      case 0x10:
    iVar2 = ossl_quic_wire_decode_frame_max_data(param_2,&local_278);
    pcVar5 = "max_data";
    pcVar6 = "frame_type";
    if (iVar2 == 0) goto switchD_00100064_default;
LAB_0010045a:
    ossl_qlog_str(param_1,pcVar6,pcVar5);
    ossl_qlog_u64(param_1,"maximum",local_278);
    break;
      case 0x11:
    iVar2 = ossl_quic_wire_decode_frame_max_stream_data(param_2,&local_280,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","max_stream_data");
    ossl_qlog_u64(param_1,"stream_id",local_280);
    ossl_qlog_u64(param_1,"maximum",local_278);
    break;
      case 0x12:
      case 0x13:
    iVar2 = ossl_quic_wire_decode_frame_max_streams(param_2,&local_278);
    if (iVar2 != 0) {
      ossl_qlog_str(param_1,"frame_type","max_streams");
      pcVar5 = "unidirectional";
      if (local_290 == 0x12) {
        pcVar5 = "bidirectional";
      }
      pcVar6 = "stream_type";
      goto LAB_0010045a;
    }
    goto switchD_00100064_default;
      case 0x14:
    iVar2 = ossl_quic_wire_decode_frame_data_blocked(param_2,&local_278);
    pcVar5 = "data_blocked";
    pcVar6 = "frame_type";
    if (iVar2 == 0) goto switchD_00100064_default;
LAB_001003ea:
    ossl_qlog_str(param_1,pcVar6,pcVar5);
    ossl_qlog_u64(param_1,"limit",local_278);
    break;
      case 0x15:
    iVar2 = ossl_quic_wire_decode_frame_stream_data_blocked(param_2,&local_280,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","stream_data_blocked");
    ossl_qlog_u64(param_1,"stream_id",local_280);
    ossl_qlog_u64(param_1,"limit",local_278);
    break;
      case 0x16:
      case 0x17:
    iVar2 = ossl_quic_wire_decode_frame_streams_blocked(param_2,&local_278);
    if (iVar2 != 0) {
      ossl_qlog_str(param_1,"frame_type","streams_blocked");
      pcVar5 = "unidirectional";
      if (local_290 == 0x16) {
        pcVar5 = "bidirectional";
      }
      pcVar6 = "stream_type";
      goto LAB_001003ea;
    }
    goto switchD_00100064_default;
      case 0x18:
    iVar2 = ossl_quic_wire_decode_frame_new_conn_id(param_2,&local_238);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","new_connection_id");
    ossl_qlog_u64(param_1,"sequence_number",local_238);
    ossl_qlog_u64(param_1,"retire_prior_to",local_230);
    ossl_qlog_bin(param_1,"connection_id",local_227,local_228);
    ossl_qlog_bin(param_1,"stateless_reset_token",local_213,0x10);
    break;
      case 0x19:
    iVar2 = ossl_quic_wire_decode_frame_retire_conn_id(param_2,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","retire_connection_id");
    ossl_qlog_u64(param_1,"sequence_number",local_278);
    break;
      case 0x1a:
    iVar2 = ossl_quic_wire_decode_frame_path_challenge(param_2,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","path_challenge");
    break;
      case 0x1b:
    iVar2 = ossl_quic_wire_decode_frame_path_response(param_2,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","path_response");
    break;
      case 0x1c:
      case 0x1d:
    iVar2 = ossl_quic_wire_decode_frame_conn_close(param_2,&local_278);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","connection_close");
    pcVar5 = "transport";
    if (((ulong)local_278 & 1) != 0) {
      pcVar5 = "application";
    }
    ossl_qlog_str(param_1,"error_space",pcVar5);
    ossl_qlog_u64(param_1,"error_code_value",local_270);
    if (((((ulong)local_278 & 1) == 0) ||
        (ossl_qlog_u64(param_1,"error_code",local_270), ((ulong)local_278 & 1) == 0)) &&
       (local_268 != 0)) {
      ossl_qlog_u64(param_1,"trigger_frame_type");
    }
    ossl_qlog_str_len(param_1,"reason",local_260,CONCAT71(uStack_257,local_258));
    break;
      case 0x1e:
    iVar2 = ossl_quic_wire_decode_frame_handshake_done(param_2);
    if (iVar2 == 0) goto switchD_00100064_default;
    ossl_qlog_str(param_1,"frame_type","handshake_done");
   }
   uVar3 = 1;
   LAB_00100108:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar3;
}void log_packet(undefined8 param_1, byte *param_2, undefined8 param_3, long *param_4, long param_5, undefined8 param_6) {
   int iVar1;
   ulong uVar2;
   char *pcVar3;
   long lVar4;
   long in_FS_OFFSET;
   ulong local_60;
   long local_58;
   ulong local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ossl_qlog_group_begin(param_1, "header");
   switch (*param_2) {
      default:
    pcVar3 = "unknown";
    break;
      case 1:
    pcVar3 = "initial";
    break;
      case 2:
    pcVar3 = "0RTT";
    break;
      case 3:
    pcVar3 = "handshake";
    break;
      case 4:
    pcVar3 = "retry";
    break;
      case 5:
    pcVar3 = "1RTT";
    break;
      case 6:
    pcVar3 = "version_negotiation";
   }
   ossl_qlog_str(param_1, "packet_type", pcVar3);
   if (( *param_2 & 0xfd ) != 4) {
      ossl_qlog_u64(param_1, "packet_number", param_3);
   }
   ossl_qlog_bin(param_1, &_LC62, param_2 + 9, param_2[8]);
   if (*param_2 != 5) {
      ossl_qlog_bin(param_1, &_LC63, param_2 + 0x1e, param_2[0x1d]);
   }
   if (*(long*)( param_2 + 0x40 ) != 0) {
      ossl_qlog_group_begin(param_1, "token");
      ossl_qlog_group_begin(param_1, &_LC49);
      ossl_qlog_bin(param_1, &_LC50, *(undefined8*)( param_2 + 0x38 ), *(undefined8*)( param_2 + 0x40 ));
      for (int i_1863 = 0; i_1863 < 2; i_1863++) {
         ossl_qlog_group_end(param_1);
      }
   }
   ossl_qlog_group_end(param_1);
   ossl_qlog_u64(param_1, "datagram_id", param_6);
   if (( *param_2 & 0xfd ) == 4) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      lVar4 = 0;
      ossl_qlog_array_begin(param_1, "frames");
      local_60 = 0;
      if (param_5 != 0) {
         do {
            uVar2 = param_4[1];
            if ((long)uVar2 < 0) break;
            local_58 = *param_4;
            local_50 = uVar2;
            if (uVar2 != 0) {
               do {
                  if (local_60 == 0) {
                     ossl_qlog_group_begin(param_1, 0);
                     uVar2 = local_50;
                     iVar1 = log_frame_actual(param_1, &local_58, &local_60);
                     if (iVar1 != 0) {
                        ossl_qlog_u64(param_1, "length", uVar2 - local_50);
                     }
                     ossl_qlog_group_end(param_1);
                  } else {
                     uVar2 = local_50;
                     if (local_60 <= local_50) {
                        uVar2 = local_60;
                     }
                     local_58 = local_58 + uVar2;
                     local_50 = local_50 - uVar2;
                     local_60 = local_60 - uVar2;
                  }
               } while ( local_50 != 0 );
            }
            lVar4 = lVar4 + 1;
            param_4 = param_4 + 2;
         } while ( param_5 != lVar4 );
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ossl_qlog_array_end(param_1);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ossl_qlog_event_connectivity_connection_started(undefined8 param_1, undefined1 *param_2) {
   int iVar1;
   iVar1 = ossl_qlog_event_try_begin(param_1, 1, "connectivity", "connection_started", "connectivity:connection_started");
   if (iVar1 == 0) {
      return;
   }
   ossl_qlog_str(param_1, "protocol", &_LC70);
   ossl_qlog_bin(param_1, "dst_cid", param_2 + 1, *param_2);
   ossl_qlog_event_end(param_1);
   return;
}void ossl_qlog_event_connectivity_connection_state_updated(undefined8 param_1, undefined8 param_2, uint param_3, int param_4, int param_5) {
   int iVar1;
   char *pcVar2;
   iVar1 = ossl_qlog_event_try_begin(param_1, 2, "connectivity", "connection_state_updated", "connectivity:connection_state_updated");
   if (iVar1 == 0) {
      return;
   }
   if (param_3 == 3) {
      pcVar2 = "draining";
   } else if (param_3 < 4) {
      if (param_3 == 1) {
         pcVar2 = "handshake_confirmed";
         if (( param_5 == 0 ) && ( pcVar2 = param_4 == 0 )) {
            pcVar2 = "attempted";
         }
      } else {
         pcVar2 = "closing";
         if (param_3 != 2) goto LAB_00100d73;
      }
   } else {
      pcVar2 = "closed";
      if (param_3 != 4) goto LAB_00100d73;
   }
   ossl_qlog_str(param_1, "state", pcVar2);
   LAB_00100d73:ossl_qlog_event_end(param_1);
   return;
}void ossl_qlog_event_connectivity_connection_closed(undefined8 param_1, long *param_2) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   char acStack_48[40];
   long local_20;
   pcVar4 = acStack_48;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_qlog_event_try_begin(param_1, 3, "connectivity", "connection_closed", "connectivity:connection_closed");
   if (iVar2 == 0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      goto LAB_00100ff4;
   }
   pcVar3 = "local";
   if (( *(byte*)( param_2 + 4 ) & 2 ) != 0) {
      pcVar3 = "remote";
   }
   ossl_qlog_str(param_1, "owner", pcVar3);
   if (( *(byte*)( param_2 + 4 ) & 1 ) == 0) {
      lVar1 = *param_2;
      switch (lVar1) {
         default:
      if (0xff < lVar1 - 0x100U) {
        ossl_qlog_u64(param_1,"connection_code",lVar1);
        goto LAB_00100ea3;
      }
      BIO_snprintf(acStack_48,0x20,"crypto_error_0x%03llx");
      break;
         case 1:
      pcVar4 = "internal_error";
      break;
         case 2:
      pcVar4 = "connection_refused";
      break;
         case 3:
      pcVar4 = "flow_control_error";
      break;
         case 4:
      pcVar4 = "stream_limit_error";
      break;
         case 5:
      pcVar4 = "stream_state_error";
      break;
         case 6:
      pcVar4 = "final_size_error";
      break;
         case 7:
      pcVar4 = "frame_encoding_error";
      break;
         case 8:
      pcVar4 = "transport_parameter_error";
      break;
         case 9:
      pcVar4 = "connection_id_limit_error";
      break;
         case 10:
      pcVar4 = "protocol_violation";
      break;
         case 0xb:
      pcVar4 = "invalid_token";
      break;
         case 0xc:
      pcVar4 = "application_error";
      break;
         case 0xd:
      pcVar4 = "crypto_buffer_exceeded";
      break;
         case 0xe:
      pcVar4 = "key_update_error";
      break;
         case 0xf:
      pcVar4 = "aead_limit_reached";
      break;
         case 0x10:
      pcVar4 = "no_viable_path";
      }
      ossl_qlog_str(param_1, "connection_code", pcVar4);
   } else {
      ossl_qlog_u64(param_1, "application_code", *param_2);
   }
   LAB_00100ea3:ossl_qlog_str_len(param_1, "reason", param_2[2], param_2[3]);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      ossl_qlog_event_end(param_1);
      return;
   }
   LAB_00100ff4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}void ossl_qlog_event_recovery_packet_lost(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   char *pcVar2;
   iVar1 = ossl_qlog_event_try_begin(param_1, 7, "recovery", "packet_lost", "recovery:packet_lost");
   if (iVar1 != 0) {
      ossl_qlog_group_begin(param_1, "header");
      switch (*(undefined1*)( param_2 + 0xf )) {
         default:
      pcVar2 = "unknown";
      break;
         case 1:
      pcVar2 = "initial";
      break;
         case 2:
      pcVar2 = "0RTT";
      break;
         case 3:
      pcVar2 = "handshake";
      break;
         case 4:
      pcVar2 = "retry";
      break;
         case 5:
      pcVar2 = "1RTT";
      break;
         case 6:
      pcVar2 = "version_negotiation";
      }
      ossl_qlog_str(param_1, "packet_type", pcVar2);
      if (( *(byte*)( param_2 + 0xf ) & 0xfd ) != 4) {
         ossl_qlog_u64(param_1, "packet_number", *param_2);
      }
      ossl_qlog_group_end(param_1);
      ossl_qlog_event_end(param_1);
      return;
   }
   return;
}void ossl_qlog_event_transport_packet_sent(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   iVar1 = ossl_qlog_event_try_begin(param_1, 5, "transport", "packet_sent", "transport:packet_sent");
   if (iVar1 == 0) {
      return;
   }
   log_packet(param_1, param_2, param_3, param_4, param_5, param_6);
   ossl_qlog_event_end(param_1);
   return;
}void ossl_qlog_event_transport_packet_received(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   iVar1 = ossl_qlog_event_try_begin(param_1, 6, "transport", "packet_received", "transport:packet_received");
   if (iVar1 == 0) {
      return;
   }
   log_packet(param_1, param_2, param_3, param_4, param_5, param_6);
   ossl_qlog_event_end(param_1);
   return;
}

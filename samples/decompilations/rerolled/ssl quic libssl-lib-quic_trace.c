undefined8 ossl_quic_trace(int param_1, undefined8 param_2, int param_3, undefined8 param_4, long param_5, undefined8 param_6, BIO *param_7) {
   byte bVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   long *ptr;
   byte *pbVar5;
   char *pcVar6;
   byte *pbVar7;
   byte *pbVar8;
   char *pcVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_f8;
   byte *local_f0;
   undefined8 local_e8;
   long local_e0;
   long *local_d8;
   byte *local_d0;
   undefined8 local_c8;
   char *local_c0;
   byte local_b8;
   undefined7 uStack_b7;
   byte local_98;
   byte bStack_97;
   undefined2 uStack_96;
   uint uStack_94;
   byte local_90;
   undefined7 uStack_8f;
   byte local_88;
   byte local_87[12];
   byte local_7b;
   byte local_7a[7];
   byte local_73[19];
   byte *local_60;
   long local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0x201) {
      if (-1 < param_5) {
         local_e8 = param_4;
         local_e0 = param_5;
         uVar4 = ossl_quic_conn_get_channel(param_6);
         uVar4 = ossl_quic_channel_get_short_header_conn_id_len(uVar4);
         iVar3 = ossl_quic_wire_decode_pkt_hdr(&local_e8, uVar4, 0, 1, &local_98, 0, 0);
         if (iVar3 == 1) {
            pcVar9 = "Received";
            if (param_1 != 0) {
               pcVar9 = "Sent";
            }
            BIO_puts(param_7, pcVar9);
            BIO_puts(param_7, " Packet\n");
            switch (local_98) {
               default:
          pcVar9 = "Unknown";
          break;
               case 1:
          pcVar9 = "Initial";
          break;
               case 2:
          pcVar9 = "0RTT";
          break;
               case 3:
          pcVar9 = "Handshake";
          break;
               case 4:
          pcVar9 = "Retry";
          break;
               case 5:
          pcVar9 = "1RTT";
          break;
               case 6:
          pcVar9 = "VersionNeg";
            }
            BIO_printf(param_7, "  Packet Type: %s\n", pcVar9);
            if (local_98 != 5) {
               BIO_printf(param_7, "  Version: 0x%08lx\n", (ulong)uStack_94);
            }
            BIO_puts(param_7, "  Destination Conn Id: ");
            if (local_90 == 0) {
               BIO_puts(param_7, "<zero length id>");
            } else {
               pbVar5 = (byte*)&uStack_8f;
               BIO_puts(param_7, "0x");
               pbVar8 = pbVar5 + local_90;
               if ((ulong)local_90 != 0) {
                  do {
                     bVar1 = *pbVar5;
                     pbVar5 = pbVar5 + 1;
                     BIO_printf(param_7, "%02x", (ulong)bVar1);
                  } while ( pbVar8 != pbVar5 );
               }
            }
            BIO_puts(param_7, "\n");
            if (local_98 != 5) {
               BIO_puts(param_7, "  Source Conn Id: ");
               if (local_7b == 0) {
                  BIO_puts(param_7, "<zero length id>");
               } else {
                  pbVar5 = local_7a;
                  BIO_puts(param_7, "0x");
                  pbVar8 = pbVar5 + local_7b;
                  if ((ulong)local_7b != 0) {
                     do {
                        bVar1 = *pbVar5;
                        pbVar5 = pbVar5 + 1;
                        BIO_printf(param_7, "%02x", (ulong)bVar1);
                     } while ( pbVar5 != pbVar8 );
                  }
               }
               BIO_puts(param_7, "\n");
            }
            BIO_printf(param_7, "  Payload length: %zu\n", local_50);
            if (local_98 == 1) {
               BIO_puts(param_7, "  Token: ");
               pbVar5 = local_60 + local_58;
               if (local_58 == 0) {
                  BIO_puts(param_7, "<zero length token>");
               } else {
                  do {
                     pbVar8 = local_60 + 1;
                     BIO_printf(param_7, "%02x", ( ulong ) * local_60);
                     local_60 = pbVar8;
                  } while ( pbVar8 != pbVar5 );
               }
               BIO_puts(param_7, "\n");
            }
            if (( local_98 & 0xfd ) != 4) {
               uVar10 = 0;
               BIO_puts(param_7, "  Packet Number: 0x");
               if (( bStack_97 & 0x3c ) != 0) {
                  do {
                     lVar2 = uVar10 + 0xd;
                     uVar10 = uVar10 + 1;
                     BIO_printf(param_7, "%02x", (ulong)local_73[lVar2]);
                  } while ( uVar10 < ( bStack_97 >> 2 & 0xf ) );
               }
               BIO_puts(param_7, "\n");
            }
            goto LAB_00100083;
         }
      }
      goto LAB_001002a0;
   }
   if (param_3 < 0x202) {
      if (param_3 != 0x200) goto LAB_001002a0;
      pcVar9 = "Received";
      if (param_1 != 0) {
         pcVar9 = "Sent";
      }
      BIO_puts(param_7, pcVar9);
      BIO_printf(param_7, " Datagram\n  Length: %zu\n", param_5);
      goto LAB_00100083;
   }
   if (2 < param_3 - 0x202U) goto LAB_001002a0;
   pcVar9 = "Received";
   if (param_1 != 0) {
      pcVar9 = "Sent";
   }
   BIO_puts(param_7, pcVar9);
   BIO_puts(param_7, " Frame: ");
   if (param_5 < 0) goto LAB_001002a0;
   local_e8 = param_4;
   local_e0 = param_5;
   iVar3 = ossl_quic_wire_peek_frame_header(&local_e8, &local_f8, 0);
   if (iVar3 == 0) goto switchD_0010013b_default;
   switch (local_f8) {
      case 0:
    BIO_puts(param_7,"Padding\n");
    ossl_quic_wire_decode_padding(&local_e8);
    break;
      case 1:
    BIO_puts(param_7,"Ping\n");
    iVar3 = ossl_quic_wire_decode_frame_ping(&local_e8);
    goto joined_r0x00100795;
      case 2:
      case 3:
    BIO_puts(param_7,"Ack ");
    if (local_f8 == 3) {
      BIO_puts(param_7," (with ECN)\n");
    }
    else {
      BIO_puts(param_7," (without ECN)\n");
    }
    local_f0 = (byte *)0x0;
    iVar3 = ossl_quic_wire_peek_frame_ack_num_ranges(&local_e8,&local_f0);
    if (((iVar3 != 0) && ((ulong)local_f0 >> 0x3c == 0)) &&
       (ptr = (long *)CRYPTO_zalloc((long)local_f0 << 4,"ssl/quic/quic_trace.c",0x5c),
       ptr != (long *)0x0)) {
      local_d0 = local_f0;
      local_d8 = ptr;
      iVar3 = ossl_quic_wire_decode_frame_ack(&local_e8,0,&local_d8,0);
      if (iVar3 != 0) {
        BIO_printf(param_7,"    Largest acked: %llu\n",local_d8[1]);
        BIO_printf(param_7,"    Ack delay (raw) %llu\n",local_c8);
        BIO_printf(param_7,"    Ack range count: %llu\n",local_f0 + -1);
        BIO_printf(param_7,"    First ack range: %llu\n",local_d8[1] - *local_d8);
        pbVar5 = (byte *)0x1;
        if ((byte *)0x1 < local_f0) {
          do {
            pbVar8 = pbVar5 + 1;
            BIO_printf(param_7,"    Gap: %llu\n",
                       (local_d8[(long)pbVar5 * 2 + -2] + -2) - local_d8[(long)pbVar5 * 2 + 1]);
            BIO_printf(param_7,"    Ack range len: %llu\n",
                       (local_d8 + (long)pbVar5 * 2)[1] - local_d8[(long)pbVar5 * 2]);
            pbVar5 = pbVar8;
          } while (pbVar8 < local_f0);
        }
        CRYPTO_free(ptr);
        break;
      }
      CRYPTO_free(ptr);
    }
      default:
switchD_0010013b_default:
    BIO_puts(param_7,"  <error processing frame data>\n");
LAB_001002a0:
    uVar4 = 0;
    goto LAB_00100088;
      case 4:
    BIO_puts(param_7,"Reset stream\n");
    iVar3 = ossl_quic_wire_decode_frame_reset_stream(&local_e8,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Stream id: %llu\n",local_d8);
    BIO_printf(param_7,"    App Protocol Error Code: %llu\n",local_d0);
    BIO_printf(param_7,"    Final size: %llu\n",local_c8);
    break;
      case 5:
    BIO_puts(param_7,"Stop sending\n");
    iVar3 = ossl_quic_wire_decode_frame_stop_sending(&local_e8,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Stream id: %llu\n",local_d8);
    BIO_printf(param_7,"    App Protocol Error Code: %llu\n",local_d0);
    break;
      case 6:
    BIO_puts(param_7,"Crypto\n");
    iVar3 = ossl_quic_wire_decode_frame_crypto(&local_e8,1,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Offset: %llu\n",local_d8);
    BIO_printf(param_7,"    Len: %llu\n",local_d0);
    break;
      case 7:
    BIO_puts(param_7,"New token\n");
    iVar3 = ossl_quic_wire_decode_frame_new_token(&local_e8,&local_f0,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_puts(param_7,"    Token: ");
    pbVar5 = local_f0 + (long)local_d8;
    pbVar8 = local_f0;
    if (local_d8 == (long *)0x0) {
      BIO_puts(param_7,"<zero length token>");
    }
    else {
      do {
        pbVar7 = pbVar8 + 1;
        BIO_printf(param_7,"%02x",(ulong)*pbVar8);
        pbVar8 = pbVar7;
      } while (pbVar5 != pbVar7);
    }
LAB_00100582:
    BIO_puts(param_7,"\n");
    break;
      for (int i_582 = 0; i_582 < 7; i_582++) {
         case 8:
      }
      case 0xf:
    BIO_puts(param_7,"Stream");
    switch(local_f8) {
    case 9:
      BIO_puts(param_7," (Fin)\n");
      break;
    case 10:
      BIO_puts(param_7," (Len)\n");
      break;
    case 0xb:
      BIO_puts(param_7," (Len, Fin)\n");
      break;
    case 0xc:
      BIO_puts(param_7," (Off)\n");
      break;
    case 0xd:
      BIO_puts(param_7," (Off, Fin)\n");
      break;
    case 0xe:
      BIO_puts(param_7," (Off, Len)\n");
      break;
    case 0xf:
      BIO_puts(param_7," (Off, Len, Fin)\n");
      break;
    default:
      BIO_puts(param_7,"\n");
    }
    iVar3 = ossl_quic_wire_decode_frame_stream(&local_e8,1,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Stream id: %llu\n",local_d8);
    BIO_printf(param_7,"    Offset: %llu\n",local_d0);
    if ((local_b8 & 1) == 0) {
      BIO_puts(param_7,"    Len: <implicit length>\n");
    }
    else {
      BIO_printf(param_7,"    Len: %llu\n",local_c8);
    }
    break;
      case 0x10:
    BIO_puts(param_7,"Max data\n");
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_max_data(&local_e8,&local_d8);
    goto joined_r0x001005d4;
      case 0x11:
    BIO_puts(param_7,"Max stream data\n");
    local_f0 = (byte *)0x0;
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_max_stream_data(&local_e8,&local_f0,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Max Stream Data: %llu\n",local_d8);
    break;
      case 0x12:
      case 0x13:
    BIO_puts(param_7,"Max streams ");
    if (local_f8 == 0x12) {
      BIO_puts(param_7," (Bidi)\n");
    }
    else {
      BIO_puts(param_7," (Uni)\n");
    }
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_max_streams(&local_e8,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Max Streams: %llu\n",local_d8);
    break;
      case 0x14:
    BIO_puts(param_7,"Data blocked\n");
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_data_blocked(&local_e8,&local_d8);
    goto joined_r0x001005d4;
      case 0x15:
    BIO_puts(param_7,"Stream data blocked\n");
    local_f0 = (byte *)0x0;
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_stream_data_blocked(&local_e8,&local_f0,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Stream id: %llu\n",local_f0);
    goto LAB_001005da;
      case 0x16:
      case 0x17:
    BIO_puts(param_7,"Streams blocked");
    if (local_f8 == 0x16) {
      BIO_puts(param_7," (Bidi)\n");
    }
    else {
      BIO_puts(param_7," (Uni)\n");
    }
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_streams_blocked(&local_e8,&local_d8);
joined_r0x001005d4:
    if (iVar3 == 0) goto switchD_0010013b_default;
LAB_001005da:
    BIO_printf(param_7,"    Max Data: %llu\n",local_d8);
    break;
      case 0x18:
    BIO_puts(param_7,"New conn id\n");
    iVar3 = ossl_quic_wire_decode_frame_new_conn_id(&local_e8,&local_98);
    if (iVar3 != 0) {
      BIO_printf(param_7,"    Sequence Number: %llu\n",
                 CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(bStack_97,local_98))));
      BIO_printf(param_7,"    Retire prior to: %llu\n",CONCAT71(uStack_8f,local_90));
      BIO_puts(param_7,"    Connection id: ");
      if (local_88 == 0) {
        BIO_puts(param_7,"<zero length id>");
      }
      else {
        pbVar5 = local_87;
        BIO_puts(param_7,"0x");
        pbVar8 = pbVar5 + local_88;
        if ((ulong)local_88 != 0) {
          do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            BIO_printf(param_7,"%02x",(ulong)bVar1);
          } while (pbVar8 != pbVar5);
        }
      }
      pbVar5 = local_73;
      BIO_puts(param_7,"\n    Stateless Reset Token: ");
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        BIO_printf(param_7,"%02x",(ulong)bVar1);
      } while (local_73 + 0x10 != pbVar5);
      goto LAB_00100582;
    }
    goto switchD_0010013b_default;
      case 0x19:
    BIO_puts(param_7,"Retire conn id\n");
    iVar3 = ossl_quic_wire_decode_frame_retire_conn_id(&local_e8,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
    BIO_printf(param_7,"    Sequence Number: %llu\n",local_d8);
    break;
      case 0x1a:
    BIO_puts(param_7,"Path challenge\n");
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_path_challenge(&local_e8,&local_d8);
    if (iVar3 == 0) goto switchD_0010013b_default;
LAB_001006f2:
    BIO_printf(param_7,"    Data: %016llx\n",local_d8);
    break;
      case 0x1b:
    BIO_puts(param_7,"Path response\n");
    local_d8 = (long *)0x0;
    iVar3 = ossl_quic_wire_decode_frame_path_response(&local_e8,&local_d8);
    if (iVar3 != 0) goto LAB_001006f2;
    goto switchD_0010013b_default;
      case 0x1c:
      case 0x1d:
    BIO_puts(param_7,"Connection close");
    if (local_f8 == 0x1d) {
      BIO_puts(param_7," (app)\n");
    }
    else {
      BIO_puts(param_7," (transport)\n");
    }
    iVar3 = ossl_quic_wire_decode_frame_conn_close(&local_e8,&local_d8);
    if (iVar3 != 0) {
      BIO_printf(param_7,"    Error Code: %llu\n",local_d0);
      BIO_puts(param_7,"    Reason: ");
      pcVar9 = local_c0 + CONCAT71(uStack_b7,local_b8);
      if (CONCAT71(uStack_b7,local_b8) != 0) {
        do {
          pcVar6 = local_c0 + 1;
          BIO_printf(param_7,"%c",(ulong)(uint)(int)*local_c0);
          local_c0 = pcVar6;
        } while (pcVar9 != pcVar6);
      }
      goto LAB_00100582;
    }
    goto switchD_0010013b_default;
      case 0x1e:
    BIO_puts(param_7,"Handshake done\n");
    iVar3 = ossl_quic_wire_decode_frame_handshake_done(&local_e8);
joined_r0x00100795:
    if (iVar3 == 0) goto switchD_0010013b_default;
   }
   if (local_e0 != 0) {
      BIO_puts(param_7, "    <unexpected trailing frame data skipped>\n");
   }
   LAB_00100083:uVar4 = 1;
   LAB_00100088:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

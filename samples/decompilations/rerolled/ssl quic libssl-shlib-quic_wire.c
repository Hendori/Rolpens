undefined8 PACKET_get_quic_vlint(long *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   ulong uVar2;
   if (param_1[1] == 0) {
      return 0;
   }

   uVar2 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
   if ((ulong)param_1[1] < uVar2) {
      return 0;
   }

   uVar1 = ossl_quic_vlint_decode_unchecked();
   *param_2 = uVar1;
   *param_1 = *param_1 + uVar2;
   param_1[1] = param_1[1] - uVar2;
   return 1;
}
undefined8 ossl_quic_frame_ack_contains_pn(undefined8 *param_1, ulong param_2) {
   ulong *puVar1;
   long lVar2;
   if (param_1[1] != 0) {
      puVar1 = (ulong*)*param_1;
      lVar2 = 0;
      do {
         if (( *puVar1 <= param_2 ) && ( param_2 <= puVar1[1] )) {
            return 1;
         }

         lVar2 = lVar2 + 1;
         puVar1 = puVar1 + 2;
      }
 while ( lVar2 != param_1[1] );
   }

   return 0;
}
void ossl_quic_wire_encode_padding(undefined8 param_1, undefined8 param_2) {
   WPACKET_memset(param_1, 0, param_2);
   return;
}
void ossl_quic_wire_encode_frame_ping(undefined8 param_1) {
   WPACKET_quic_write_vlint(param_1, 1);
   return;
}
bool ossl_quic_wire_encode_frame_ack(undefined8 param_1, byte param_2, long *param_3) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   lVar2 = param_3[1];
   if (lVar2 != 0) {
      uVar3 = param_3[2];
      lVar7 = *(long*)*param_3;
      lVar4 = ( (long*)*param_3 )[1];
      iVar6 = WPACKET_quic_write_vlint(param_1, ( *(byte*)( param_3 + 6 ) & 1 ) + 2);
      if (( ( ( iVar6 != 0 ) && ( iVar6 = WPACKET_quic_write_vlint(param_1, lVar4) ),iVar6 != 0 ) ) && ( iVar6 = WPACKET_quic_write_vlint(param_1, uVar3 / 1000 >> ( param_2 & 0x3f )) ),iVar6 != 0) {
         if (lVar2 != 1) {
            lVar7 = 1;
            do {
               plVar1 = (long*)( *param_3 + lVar7 * 0x10 );
               lVar4 = plVar1[1];
               lVar5 = *plVar1;
               iVar6 = WPACKET_quic_write_vlint(param_1, ( *(long*)( *param_3 + -0x10 + lVar7 * 0x10 ) + -2 ) - lVar4);
               if (iVar6 == 0) {
                  return false;
               }

               iVar6 = WPACKET_quic_write_vlint(param_1, lVar4 - lVar5);
               if (iVar6 == 0) {
                  return false;
               }

               lVar7 = lVar7 + 1;
            }
 while ( lVar2 != lVar7 );
         }

         if (( *(byte*)( param_3 + 6 ) & 1 ) == 0) {
            return true;
         }

         iVar6 = WPACKET_quic_write_vlint(param_1, param_3[3]);
         if (( iVar6 != 0 ) && ( iVar6 = WPACKET_quic_write_vlint(param_1, param_3[4]) ),iVar6 != 0) {
            iVar6 = WPACKET_quic_write_vlint(param_1, param_3[5]);
            return iVar6 != 0;
         }

      }

   }

   return false;
}
bool ossl_quic_wire_encode_frame_reset_stream(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   iVar1 = WPACKET_quic_write_vlint(param_1, 4);
   if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, *param_2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(param_1, param_2[1]);
         if (iVar1 != 0) {
            iVar1 = WPACKET_quic_write_vlint(param_1, param_2[2]);
            return iVar1 != 0;
         }

      }

   }

   return false;
}
bool ossl_quic_wire_encode_frame_stop_sending(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   iVar1 = WPACKET_quic_write_vlint(param_1, 5);
   if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, *param_2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(param_1, param_2[1]);
         return iVar1 != 0;
      }

   }

   return false;
}
bool ossl_quic_wire_encode_frame_crypto_hdr(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   iVar1 = WPACKET_quic_write_vlint(param_1, 6);
   if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, *param_2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(param_1, param_2[1]);
         return iVar1 != 0;
      }

   }

   return false;
}
ulong ossl_quic_wire_get_encoded_frame_len_crypto_hdr(ulong *param_1) {
   ulong uVar1;
   long lVar2;
   ulong uVar3;
   bool bVar4;
   uVar3 = *param_1;
   uVar1 = param_1[1];
   if (uVar3 < 0x40) {
      if (uVar1 < 0x40) {
         return 3;
      }

      if (uVar1 < 0x4000) {
         return 4;
      }

      if (uVar1 < 0x40000000) {
         return 6;
      }

      lVar2 = 1;
   }
 else {
      if (uVar3 < 0x4000) {
         if (uVar1 < 0x40) {
            return 4;
         }

         if (uVar1 < 0x4000) {
            return 5;
         }

         uVar3 = 7;
         lVar2 = 2;
      }
 else {
         if (0x3fffffff < uVar3) {
            if (uVar1 < 0x40) {
               return ( ulong )(~-(uint)(0x3fffffffffffffff < uVar3) & 10);
            }

            if (uVar1 < 0x4000) {
               return ( ulong )(~-(uint)(0x3fffffffffffffff < uVar3) & 0xb);
            }

            if (uVar1 < 0x40000000) {
               return ( ulong )(~-(uint)(0x3fffffffffffffff < uVar3) & 0xd);
            }

            lVar2 = ( ulong )(uVar3 < 0x4000000000000000) << 3;
            bVar4 = 0x3fffffffffffffff < uVar3;
            goto joined_r0x00100420;
         }

         if (uVar1 < 0x40) {
            return 6;
         }

         if (uVar1 < 0x4000) {
            return 7;
         }

         uVar3 = 9;
         lVar2 = 4;
      }

      if (uVar1 < 0x40000000) {
         return uVar3;
      }

   }

   bVar4 = false;
   joined_r0x00100420:if (( uVar1 >> 0x3e != 0 ) || ( bVar4 )) {
      uVar3 = 0;
   }
 else {
      uVar3 = lVar2 + 9;
   }

   return uVar3;
}
void *ossl_quic_wire_encode_frame_crypto(undefined8 param_1, long param_2) {
   int iVar1;
   void *pvVar2;
   long in_FS_OFFSET;
   void *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (void*)0x0;
   iVar1 = ossl_quic_wire_encode_frame_crypto_hdr();
   if (( iVar1 == 0 ) || ( iVar1 = WPACKET_allocate_bytes(param_1, *(undefined8*)( param_2 + 8 ), &local_28) ),iVar1 == 0) {
      pvVar2 = (void*)0x0;
   }
 else {
      pvVar2 = local_28;
      if (*(void**)( param_2 + 0x10 ) != (void*)0x0) {
         memcpy(local_28, *(void**)( param_2 + 0x10 ), *(size_t*)( param_2 + 8 ));
         pvVar2 = local_28;
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pvVar2;
}
bool ossl_quic_wire_encode_frame_new_token(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = WPACKET_quic_write_vlint(param_1, 7);
   if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_3);
      if (iVar1 != 0) {
         iVar1 = WPACKET_memcpy(param_1, param_2, param_3);
         return iVar1 != 0;
      }

   }

   return false;
}
bool ossl_quic_wire_encode_frame_stream_hdr(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   ulong uVar2;
   bool bVar3;
   uVar2 = ( ulong )(*(byte*)( param_2 + 4 ) & 1) * 2 | ( -(ulong)(param_2[1] == 0) & 0xfffffffffffffffc ) + 0xc;
   if (( *(byte*)( param_2 + 4 ) & 2 ) != 0) {
      uVar2 = uVar2 | 1;
   }

   iVar1 = WPACKET_quic_write_vlint(param_1, uVar2);
   if (( ( iVar1 == 0 ) || ( iVar1 = WPACKET_quic_write_vlint(param_1, *param_2) ),iVar1 == 0 )) {
      bVar3 = false;
   }
 else {
      bVar3 = true;
      if (( *(byte*)( param_2 + 4 ) & 1 ) != 0) {
         iVar1 = WPACKET_quic_write_vlint(param_1, param_2[2]);
         bVar3 = iVar1 != 0;
      }

   }

   return bVar3;
}
undefined8 ossl_quic_wire_get_encoded_frame_len_stream_hdr(ulong *param_1) {
   ulong uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   uVar1 = *param_1;
   if (uVar1 < 0x40) {
      uVar4 = 8;
      uVar7 = 4;
      uVar5 = 3;
      uVar9 = 6;
      uVar13 = 7;
      uVar3 = 0xb;
      uVar2 = 2;
      uVar12 = 5;
      uVar15 = 0xe;
      uVar14 = 0xc;
      uVar16 = 0x12;
      uVar11 = 10;
   }
 else if (uVar1 < 0x4000) {
      uVar4 = 9;
      uVar7 = 5;
      uVar5 = 4;
      uVar9 = 7;
      uVar13 = 8;
      uVar3 = 0xc;
      uVar2 = 3;
      uVar12 = 6;
      uVar15 = 0xf;
      uVar14 = 0xd;
      uVar16 = 0x13;
      uVar11 = 0xb;
   }
 else if (uVar1 < 0x40000000) {
      uVar4 = 0xb;
      uVar7 = 7;
      uVar5 = 6;
      uVar9 = 9;
      uVar13 = 10;
      uVar3 = 0xe;
      uVar2 = 5;
      uVar12 = 8;
      uVar15 = 0x11;
      uVar14 = 0xf;
      uVar16 = 0x15;
      uVar11 = 0xd;
   }
 else {
      if (uVar1 >> 0x3e != 0) {
         return 0;
      }

      uVar4 = 0xf;
      uVar7 = 0xb;
      uVar5 = 10;
      uVar9 = 0xd;
      uVar13 = 0xe;
      uVar3 = 0x12;
      uVar2 = 9;
      uVar12 = 0xc;
      uVar15 = 0x15;
      uVar14 = 0x13;
      uVar16 = 0x19;
      uVar11 = 0x11;
   }

   uVar1 = param_1[1];
   uVar6 = uVar7;
   uVar8 = uVar9;
   uVar10 = uVar11;
   if (( ( ( ( ( uVar1 == 0 ) || ( uVar2 = uVar5 ),uVar5 = uVar7,uVar6 = uVar12,uVar8 = uVar13,uVar10 = uVar3,uVar1 < 0x40 ) ) || ( uVar2 = uVar7 ),uVar5 = uVar12,uVar6 = uVar9,uVar8 = uVar4,uVar10 = uVar14,uVar1 < 0x4000 ) ) || ( ( uVar2 = uVar9 ),uVar5 = uVar13,uVar6 = uVar4,uVar8 = uVar11,uVar10 = uVar15,uVar1<0x40000000 || ( uVar2 = uVar11 ),uVar4 = 0,uVar5 = uVar3,uVar6 = uVar14,uVar8 = uVar15,uVar10 = uVar16,uVar1> > 0x3e == 0 )) {
      uVar2 = 0;
      if (uVar1 < 0x4000000000000000) {
         uVar2 = uVar10;
      }

      return uVar2;
   }

   return uVar4;
}
void *ossl_quic_wire_encode_frame_stream(undefined8 param_1, long param_2) {
   int iVar1;
   void *pvVar2;
   long in_FS_OFFSET;
   void *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (void*)0x0;
   iVar1 = ossl_quic_wire_encode_frame_stream_hdr();
   if (( iVar1 == 0 ) || ( iVar1 = WPACKET_allocate_bytes(param_1, *(undefined8*)( param_2 + 0x10 ), &local_28) ),iVar1 == 0) {
      pvVar2 = (void*)0x0;
   }
 else {
      pvVar2 = local_28;
      if (*(void**)( param_2 + 0x18 ) != (void*)0x0) {
         memcpy(local_28, *(void**)( param_2 + 0x18 ), *(size_t*)( param_2 + 0x10 ));
         pvVar2 = local_28;
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pvVar2;
}
ulong ossl_quic_wire_encode_frame_max_data(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_quic_write_vlint(param_1, 0x10);
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_2);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
bool ossl_quic_wire_encode_frame_max_stream_data(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = WPACKET_quic_write_vlint(param_1, 0x11);
   if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(param_1, param_3);
         return iVar1 != 0;
      }

   }

   return false;
}
ulong ossl_quic_wire_encode_frame_max_streams(undefined8 param_1, char param_2, undefined8 param_3) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_quic_write_vlint(param_1, 0x13 - ( ulong )(param_2 == '\0'));
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_3);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
ulong ossl_quic_wire_encode_frame_data_blocked(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_quic_write_vlint(param_1, 0x14);
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_2);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
bool ossl_quic_wire_encode_frame_stream_data_blocked(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = WPACKET_quic_write_vlint(param_1, 0x15);
   if (iVar1 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(param_1, param_3);
         return iVar1 != 0;
      }

   }

   return false;
}
ulong ossl_quic_wire_encode_frame_streams_blocked(undefined8 param_1, char param_2, undefined8 param_3) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_quic_write_vlint(param_1, 0x17 - ( ulong )(param_2 == '\0'));
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_3);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
bool ossl_quic_wire_encode_frame_new_conn_id(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   if (0x13 < ( byte )(*(char*)( param_2 + 2 ) - 1U)) {
      return false;
   }

   iVar1 = WPACKET_quic_write_vlint(param_1, 0x18);
   if (( ( ( iVar1 != 0 ) && ( iVar1 = WPACKET_quic_write_vlint(param_1, *param_2) ),iVar1 != 0 ) ) && ( iVar1 = WPACKET_quic_write_vlint(param_1, param_2[1]) ),iVar1 != 0) {
      iVar1 = WPACKET_memcpy(param_1, (long)param_2 + 0x25, 0x10);
      return iVar1 != 0;
   }

   return false;
}
ulong ossl_quic_wire_encode_frame_retire_conn_id(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_quic_write_vlint(param_1, 0x19);
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_quic_write_vlint(param_1, param_2);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
ulong ossl_quic_wire_encode_frame_path_challenge(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_quic_write_vlint(param_1, 0x1a);
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_put_bytes__(param_1, param_2, 8);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
ulong ossl_quic_wire_encode_frame_path_response(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   ulong uVar2;
   uVar2 = WPACKET_quic_write_vlint(param_1, 0x1b);
   if ((int)uVar2 != 0) {
      iVar1 = WPACKET_put_bytes__(param_1, param_2, 8);
      uVar2 = ( ulong )(iVar1 != 0);
   }

   return uVar2;
}
bool ossl_quic_wire_encode_frame_conn_close(undefined8 param_1, byte *param_2) {
   int iVar1;
   iVar1 = WPACKET_quic_write_vlint(param_1, ( *param_2 & 1 ) + 0x1c);
   if (( iVar1 != 0 ) && ( iVar1 = WPACKET_quic_write_vlint(param_1, *(undefined8*)( param_2 + 8 )) ),iVar1 != 0) {
      if (( ( *param_2 & 1 ) == 0 ) && ( iVar1 = WPACKET_quic_write_vlint(param_1, *(undefined8*)( param_2 + 0x10 )) ),iVar1 == 0) {
         return false;
      }

      iVar1 = WPACKET_quic_write_vlint(param_1, *(undefined8*)( param_2 + 0x20 ));
      if (iVar1 != 0) {
         iVar1 = WPACKET_memcpy(param_1, *(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_2 + 0x20 ));
         return iVar1 != 0;
      }

   }

   return false;
}
void ossl_quic_wire_encode_frame_handshake_done(undefined8 param_1) {
   WPACKET_quic_write_vlint(param_1, 0x1e);
   return;
}
void *ossl_quic_wire_encode_transport_param_bytes(undefined8 param_1, undefined8 param_2, void *param_3, size_t param_4) {
   int iVar1;
   void *pvVar2;
   long in_FS_OFFSET;
   void *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (void*)0x0;
   iVar1 = WPACKET_quic_write_vlint();
   if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
      LAB_00100df0:pvVar2 = (void*)0x0;
   }
 else {
      if (param_4 == 0) {
         local_28 = (void*)WPACKET_get_curr(param_1);
      }
 else {
         iVar1 = WPACKET_allocate_bytes(param_1, param_4, &local_28);
         if (iVar1 == 0) goto LAB_00100df0;
      }

      pvVar2 = local_28;
      if (param_3 != (void*)0x0) {
         memcpy(local_28, param_3, param_4);
         pvVar2 = local_28;
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pvVar2;
}
bool ossl_quic_wire_encode_transport_param_int(undefined8 param_1, undefined8 param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   iVar1 = WPACKET_quic_write_vlint();
   if (iVar1 != 0) {
      lVar2 = 1;
      if (( ( 0x3f < param_3 ) && ( lVar2 = 2 ),0x3fff < param_3 )) {
         lVar2 = ( ulong )(param_3 >> 0x3e == 0) << 3;
      }

      iVar1 = WPACKET_quic_write_vlint(param_1, lVar2);
      if (iVar1 != 0) {
         iVar1 = WPACKET_quic_write_vlint(param_1, param_3);
         return iVar1 != 0;
      }

   }

   return false;
}
bool ossl_quic_wire_encode_transport_param_cid(undefined8 param_1, undefined8 param_2, byte *param_3) {
   long lVar1;
   if (0x14 < *param_3) {
      return false;
   }

   lVar1 = ossl_quic_wire_encode_transport_param_bytes(param_1, param_2, param_3 + 1);
   return lVar1 != 0;
}
undefined8 ossl_quic_wire_peek_frame_header(undefined8 *param_1, ulong *param_2, uint *param_3) {
   ulong uVar1;
   ulong uVar2;
   undefined8 uVar3;
   ulong uVar4;
   uVar3 = 0;
   if (param_1[1] != 0) {
      uVar4 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar4 <= (ulong)param_1[1]) {
         uVar1 = ossl_quic_vlint_decode_unchecked();
         *param_2 = uVar1;
         if (param_3 != (uint*)0x0) {
            uVar2 = 1;
            if (( ( 0x3f < uVar1 ) && ( uVar2 = 2 ),0x3fff < uVar1 )) {
               uVar2 = ( ulong )(uVar1 >> 0x3e == 0) << 3;
            }

            *param_3 = ( uint )(uVar4 == uVar2);
         }

         uVar3 = 1;
      }

   }

   return uVar3;
}
undefined8 ossl_quic_wire_skip_frame_header(long *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   ulong uVar2;
   if (param_1[1] == 0) {
      return 0;
   }

   uVar2 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
   if ((ulong)param_1[1] < uVar2) {
      return 0;
   }

   uVar1 = ossl_quic_vlint_decode_unchecked();
   *param_2 = uVar1;
   *param_1 = *param_1 + uVar2;
   param_1[1] = param_1[1] - uVar2;
   return 1;
}
undefined8 ossl_quic_wire_peek_frame_ack_num_ranges(undefined8 *param_1, long *param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   ulong uVar4;
   long lVar5;
   long in_FS_OFFSET;
   ulong local_40;
   byte *local_38;
   ulong uStack_30;
   long local_20;
   local_38 = (byte*)*param_1;
   uStack_30 = param_1[1];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(&local_38, &local_40);
   if (( ( iVar1 != 0 ) && ( ( local_40 & 0xfffffffffffffffe ) == 2 ) ) && ( uStack_30 != 0 )) {
      uVar4 = ( ulong )(uint)(1 << ( *local_38 >> 6 ));
      if (uVar4 <= uStack_30) {
         local_38 = local_38 + uVar4;
         uStack_30 = uStack_30 - uVar4;
         if (( uStack_30 != 0 ) && ( uVar4 = uVar4 <= uStack_30 )) {
            local_38 = local_38 + uVar4;
            uStack_30 = uStack_30 - uVar4;
            if (uStack_30 != 0) {
               uVar4 = ( ulong )(uint)(1 << ( *local_38 >> 6 ));
               if (uVar4 <= uStack_30) {
                  lVar2 = ossl_quic_vlint_decode_unchecked();
                  lVar5 = 0;
                  local_38 = local_38 + uVar4;
                  uStack_30 = uStack_30 - uVar4;
                  if (lVar2 != 0) {
                     do {
                        if (( uStack_30 == 0 ) || ( uVar4= (ulong)(uint)(1 << (*local_38 >> 6)),uStack_30 < uVar4 )) goto LAB_00101008;
                        local_38 = local_38 + uVar4;
                        uStack_30 = uStack_30 - uVar4;
                        if (( uStack_30 == 0 ) || ( uVar4 = uStack_30 < uVar4 )) goto LAB_00101008;
                        local_38 = local_38 + uVar4;
                        uStack_30 = uStack_30 - uVar4;
                        lVar5 = lVar5 + 1;
                     }
 while ( lVar5 != lVar2 );
                  }

                  *param_2 = lVar2 + 1;
                  uVar3 = 1;
                  goto LAB_0010100a;
               }

            }

         }

      }

   }

   LAB_00101008:uVar3 = 0;
   LAB_0010100a:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_ack(long *param_1, byte param_2, long *param_3, ulong *param_4) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   ulong uVar6;
   int iVar7;
   ulong uVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   undefined8 uVar12;
   ulong uVar13;
   ulong uVar14;
   ulong *puVar15;
   ulong uVar16;
   byte *pbVar17;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = ossl_quic_wire_skip_frame_header(param_1, &local_48);
   uVar6 = local_48;
   if (( ( ( iVar7 != 0 ) && ( ( local_48 & 0xfffffffffffffffe ) == 2 ) ) && ( param_1[1] != 0 ) ) && ( uVar16 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 )) ),uVar16 <= (ulong)param_1[1]) {
      uVar8 = ossl_quic_vlint_decode_unchecked();
      lVar1 = *param_1;
      uVar9 = param_1[1] - uVar16;
      *param_1 = (long)( lVar1 + uVar16 );
      param_1[1] = uVar9;
      if (( uVar9 != 0 ) && ( uVar16 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar16 ) >> 6 )) ),uVar16 <= uVar9) {
         uVar9 = ossl_quic_vlint_decode_unchecked();
         lVar1 = *param_1;
         uVar13 = param_1[1] - uVar16;
         *param_1 = (long)( lVar1 + uVar16 );
         param_1[1] = uVar13;
         if (( uVar13 != 0 ) && ( uVar16 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar16 ) >> 6 )) ),uVar16 <= uVar13) {
            uVar13 = ossl_quic_vlint_decode_unchecked();
            lVar1 = *param_1;
            uVar14 = param_1[1] - uVar16;
            *param_1 = (long)( lVar1 + uVar16 );
            param_1[1] = uVar14;
            if (( uVar14 != 0 ) && ( uVar16 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar16 ) >> 6 )) ),uVar16 <= uVar14) {
               uVar14 = ossl_quic_vlint_decode_unchecked();
               pbVar17 = (byte*)( *param_1 + uVar16 );
               uVar16 = param_1[1] - uVar16;
               *param_1 = (long)pbVar17;
               param_1[1] = uVar16;
               if (uVar14 <= uVar8) {
                  uVar14 = uVar8 - uVar14;
                  if (param_3 == (long*)0x0) {
                     if (uVar13 != 0) {
                        uVar8 = 0;
                        do {
                           if (( uVar16 == 0 ) || ( uVar9 = uVar16 < uVar9 )) goto LAB_00101192;
                           lVar10 = ossl_quic_vlint_decode_unchecked(pbVar17);
                           lVar1 = *param_1;
                           uVar11 = param_1[1] - uVar9;
                           *param_1 = (long)( lVar1 + uVar9 );
                           param_1[1] = uVar11;
                           if (( uVar11 == 0 ) || ( uVar16 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar9 ) >> 6 )) ),uVar11 < uVar16) goto LAB_00101192;
                           uVar9 = ossl_quic_vlint_decode_unchecked();
                           pbVar17 = (byte*)( *param_1 + uVar16 );
                           uVar16 = param_1[1] - uVar16;
                           *param_1 = (long)pbVar17;
                           param_1[1] = uVar16;
                           if (( ( uVar14 - 2 ) - lVar10 < uVar9 ) || ( uVar14 < lVar10 + 2U )) goto LAB_00101192;
                           uVar8 = uVar8 + 1;
                        }
 while ( uVar8 < uVar13 );
                     }

                     if (param_4 != (ulong*)0x0) {
                        *param_4 = uVar13 + 1;
                     }

                     if (uVar6 == 3) goto LAB_0010156d;
                  }
 else {
                     auVar2._8_8_ = 0;
                     auVar2._0_8_ = 1L << ( param_2 & 0x3f );
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = uVar9;
                     auVar5 = auVar2 * auVar4;
                     if (( auVar5._8_8_ != 0 ) || ( auVar3._8_8_ = 0 ),auVar3._0_8_ = auVar5._0_8_,auVar5 = auVar3 * ZEXT816(1000),auVar5._8_8_ != 0) {
                        auVar5._8_8_ = auVar5._8_8_;
                        auVar5._0_8_ = 0xffffffffffffffff;
                     }

                     param_3[2] = auVar5._0_8_;
                     if (param_3[1] == 0) {
                        uVar8 = 1;
                        if (uVar13 != 0) {
                           LAB_00101321:uVar8 = 0;
                           do {
                              if (( uVar16 == 0 ) || ( uVar9 = uVar16 < uVar9 )) goto LAB_00101192;
                              lVar10 = ossl_quic_vlint_decode_unchecked(pbVar17);
                              lVar1 = *param_1;
                              uVar11 = param_1[1] - uVar9;
                              *param_1 = (long)( lVar1 + uVar9 );
                              param_1[1] = uVar11;
                              if (( uVar11 == 0 ) || ( uVar16 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar9 ) >> 6 )) ),uVar11 < uVar16) goto LAB_00101192;
                              uVar9 = ossl_quic_vlint_decode_unchecked();
                              pbVar17 = (byte*)( *param_1 + uVar16 );
                              uVar16 = param_1[1] - uVar16;
                              uVar11 = ( uVar14 - 2 ) - lVar10;
                              *param_1 = (long)pbVar17;
                              param_1[1] = uVar16;
                              if (( uVar14 < lVar10 + 2U ) || ( uVar11 < uVar9 )) goto LAB_00101192;
                              uVar8 = uVar8 + 1;
                              if (uVar8 < (ulong)param_3[1]) {
                                 uVar14 = uVar11 - uVar9;
                                 puVar15 = (ulong*)( uVar8 * 0x10 + *param_3 );
                                 *puVar15 = uVar14;
                                 puVar15[1] = uVar11;
                              }

                           }
 while ( uVar8 < uVar13 );
                           goto LAB_0010142a;
                        }

                     }
 else {
                        puVar15 = (ulong*)*param_3;
                        puVar15[1] = uVar8;
                        *puVar15 = uVar14;
                        if (uVar13 != 0) goto LAB_00101321;
                        LAB_0010142a:uVar8 = uVar13 + 1;
                        if (uVar8 < (ulong)param_3[1]) {
                           param_3[1] = uVar8;
                        }

                     }

                     if (param_4 != (ulong*)0x0) {
                        *param_4 = uVar8;
                     }

                     if (uVar6 == 3) {
                        LAB_0010156d:iVar7 = PACKET_get_quic_vlint(param_1, &local_58);
                        if (( ( iVar7 == 0 ) || ( iVar7 = PACKET_get_quic_vlint(param_1, &local_50) ),iVar7 == 0 )) goto LAB_00101192;
                        if (param_3 != (long*)0x0) {
                           *(byte*)( param_3 + 6 ) = *(byte*)( param_3 + 6 ) | 1;
                           param_3[5] = local_48;
                           param_3[3] = local_58;
                           param_3[4] = local_50;
                        }

                     }
 else {
                        *(byte*)( param_3 + 6 ) = *(byte*)( param_3 + 6 ) & 0xfe;
                     }

                  }

                  uVar12 = 1;
                  goto LAB_00101194;
               }

            }

         }

      }

   }

   LAB_00101192:uVar12 = 0;
   LAB_00101194:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12;
}
undefined8 ossl_quic_wire_decode_frame_reset_stream(long *param_1, undefined8 *param_2) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( iVar2 != 0 ) && ( local_38 == 4 ) ) && ( param_1[1] != 0 )) {
      uVar5 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar5 <= (ulong)param_1[1]) {
         uVar3 = ossl_quic_vlint_decode_unchecked();
         lVar1 = *param_1;
         *param_2 = uVar3;
         uVar4 = param_1[1] - uVar5;
         *param_1 = (long)( lVar1 + uVar5 );
         param_1[1] = uVar4;
         if (uVar4 != 0) {
            uVar5 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar5 ) >> 6 ));
            if (uVar5 <= uVar4) {
               uVar3 = ossl_quic_vlint_decode_unchecked();
               lVar1 = *param_1;
               param_2[1] = uVar3;
               uVar4 = param_1[1] - uVar5;
               *param_1 = (long)( lVar1 + uVar5 );
               param_1[1] = uVar4;
               if (uVar4 != 0) {
                  uVar5 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar5 ) >> 6 ));
                  if (uVar5 <= uVar4) {
                     uVar3 = ossl_quic_vlint_decode_unchecked();
                     param_2[2] = uVar3;
                     uVar3 = 1;
                     *param_1 = *param_1 + uVar5;
                     param_1[1] = param_1[1] - uVar5;
                     goto LAB_00101629;
                  }

               }

            }

         }

      }

   }

   uVar3 = 0;
   LAB_00101629:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_stop_sending(long *param_1, undefined8 *param_2) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( iVar2 != 0 ) && ( local_38 == 5 ) ) && ( param_1[1] != 0 )) {
      uVar5 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar5 <= (ulong)param_1[1]) {
         uVar3 = ossl_quic_vlint_decode_unchecked();
         lVar1 = *param_1;
         *param_2 = uVar3;
         uVar4 = param_1[1] - uVar5;
         *param_1 = (long)( lVar1 + uVar5 );
         param_1[1] = uVar4;
         if (uVar4 != 0) {
            uVar5 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar5 ) >> 6 ));
            if (uVar5 <= uVar4) {
               uVar3 = ossl_quic_vlint_decode_unchecked();
               param_2[1] = uVar3;
               uVar3 = 1;
               *param_1 = *param_1 + uVar5;
               param_1[1] = param_1[1] - uVar5;
               goto LAB_00101739;
            }

         }

      }

   }

   uVar3 = 0;
   LAB_00101739:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_crypto(long *param_1, int param_2, long *param_3) {
   long lVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( iVar2 != 0 ) && ( local_38 == 6 ) ) && ( param_1[1] != 0 )) {
      uVar6 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar6 <= (ulong)param_1[1]) {
         lVar3 = ossl_quic_vlint_decode_unchecked();
         lVar1 = *param_1;
         *param_3 = lVar3;
         uVar4 = param_1[1] - uVar6;
         *param_1 = (long)( lVar1 + uVar6 );
         param_1[1] = uVar4;
         if (uVar4 != 0) {
            uVar6 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar6 ) >> 6 ));
            if (uVar6 <= uVar4) {
               uVar4 = ossl_quic_vlint_decode_unchecked();
               lVar1 = *param_3;
               lVar3 = *param_1;
               param_3[1] = uVar4;
               lVar3 = lVar3 + uVar6;
               uVar6 = param_1[1] - uVar6;
               *param_1 = lVar3;
               param_1[1] = uVar6;
               if (lVar1 + uVar4 >> 0x3e == 0) {
                  if (param_2 == 0) {
                     if (uVar6 < uVar4) goto LAB_0010180c;
                     param_3[2] = lVar3;
                     *param_1 = lVar3 + uVar4;
                     param_1[1] = uVar6 - uVar4;
                  }
 else {
                     param_3[2] = 0;
                  }

                  uVar5 = 1;
                  goto LAB_0010180e;
               }

            }

         }

      }

   }

   LAB_0010180c:uVar5 = 0;
   LAB_0010180e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_new_token(long *param_1, long *param_2, ulong *param_3) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( iVar1 != 0 ) && ( local_38 == 7 ) ) && ( param_1[1] != 0 )) {
      uVar5 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar5 <= (ulong)param_1[1]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         param_1[1] = param_1[1] - uVar5;
         lVar4 = *param_1 + uVar5;
         *param_1 = lVar4;
         *param_2 = lVar4;
         *param_3 = uVar2;
         if (uVar2 <= (ulong)param_1[1]) {
            uVar3 = 1;
            *param_1 = lVar4 + uVar2;
            param_1[1] = param_1[1] - uVar2;
            goto LAB_0010192c;
         }

      }

   }

   uVar3 = 0;
   LAB_0010192c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_stream(long *param_1, int param_2, undefined8 *param_3) {
   long lVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   ulong uVar5;
   ulong uVar6;
   byte *pbVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ossl_quic_wire_skip_frame_header(param_1, &local_48);
   if (( ( ( iVar3 != 0 ) && ( ( local_48 & 0xfffffffffffffff8 ) == 8 ) ) && ( param_1[1] != 0 ) ) && ( uVar5 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 )) ),uVar5 <= (ulong)param_1[1]) {
      uVar4 = ossl_quic_vlint_decode_unchecked();
      lVar1 = *param_1;
      *param_3 = uVar4;
      pbVar7 = (byte*)( lVar1 + uVar5 );
      uVar5 = param_1[1] - uVar5;
      *param_1 = (long)pbVar7;
      param_1[1] = uVar5;
      uVar6 = ( ulong )((uint)local_48 & 4);
      if (( local_48 & 4 ) == 0) {
         param_3[1] = 0;
      }
 else {
         if (( uVar5 == 0 ) || ( uVar8 = uVar5 < uVar8 )) goto LAB_001019f8;
         uVar6 = ossl_quic_vlint_decode_unchecked();
         lVar1 = *param_1;
         param_3[1] = uVar6;
         pbVar7 = (byte*)( lVar1 + uVar8 );
         uVar5 = param_1[1] - uVar8;
         *param_1 = (long)pbVar7;
         param_1[1] = uVar5;
      }

      *(byte*)( param_3 + 4 ) = ( (byte)local_48 & 1 ) * '\x02' | ( byte )(local_48 >> 1) & 1 | *(byte*)( param_3 + 4 ) & 0xfc;
      if (( local_48 >> 1 & 1 ) == 0) {
         if (param_2 == 0) {
            param_3[2] = uVar5;
            if (uVar6 + uVar5 >> 0x3e == 0) {
               param_3[3] = pbVar7;
               uVar6 = uVar5;
               LAB_00101b18:*param_1 = (long)( pbVar7 + uVar5 );
               param_1[1] = uVar6 - uVar5;
               goto LAB_00101ab5;
            }

         }
 else {
            param_3[2] = 0;
            if (uVar6 >> 0x3e == 0) {
               LAB_00101aad:param_3[3] = 0;
               LAB_00101ab5:uVar4 = 1;
               goto LAB_001019fa;
            }

         }

      }
 else if (( uVar5 != 0 ) && ( uVar6= (ulong)(uint)(1 << (*pbVar7 >> 6)),uVar6 <= uVar5 )) {
         uVar5 = ossl_quic_vlint_decode_unchecked();
         lVar1 = param_3[1];
         lVar2 = *param_1;
         param_3[2] = uVar5;
         pbVar7 = (byte*)( lVar2 + uVar6 );
         uVar6 = param_1[1] - uVar6;
         *param_1 = (long)pbVar7;
         param_1[1] = uVar6;
         if (lVar1 + uVar5 >> 0x3e == 0) {
            if (param_2 != 0) goto LAB_00101aad;
            param_3[3] = pbVar7;
            if (uVar5 <= uVar6) goto LAB_00101b18;
         }

      }

   }

   LAB_001019f8:uVar4 = 0;
   LAB_001019fa:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
undefined8 ossl_quic_wire_decode_frame_max_data(long *param_1, undefined8 *param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_28);
   if (( ( iVar1 != 0 ) && ( local_28 == 0x10 ) ) && ( param_1[1] != 0 )) {
      uVar3 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar3 <= (ulong)param_1[1]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         *param_2 = uVar2;
         uVar2 = 1;
         *param_1 = *param_1 + uVar3;
         param_1[1] = param_1[1] - uVar3;
         goto LAB_00101bd7;
      }

   }

   uVar2 = 0;
   LAB_00101bd7:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_max_stream_data(long *param_1, undefined8 *param_2, undefined8 *param_3) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( iVar2 != 0 ) && ( local_38 == 0x11 ) ) && ( param_1[1] != 0 )) {
      uVar5 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar5 <= (ulong)param_1[1]) {
         uVar3 = ossl_quic_vlint_decode_unchecked();
         lVar1 = *param_1;
         *param_2 = uVar3;
         uVar4 = param_1[1] - uVar5;
         *param_1 = (long)( lVar1 + uVar5 );
         param_1[1] = uVar4;
         if (uVar4 != 0) {
            uVar5 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar5 ) >> 6 ));
            if (uVar5 <= uVar4) {
               uVar3 = ossl_quic_vlint_decode_unchecked();
               *param_3 = uVar3;
               uVar3 = 1;
               *param_1 = *param_1 + uVar5;
               param_1[1] = param_1[1] - uVar5;
               goto LAB_00101c6e;
            }

         }

      }

   }

   uVar3 = 0;
   LAB_00101c6e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_max_streams(long *param_1, undefined8 *param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_28);
   if (( ( iVar1 != 0 ) && ( ( local_28 & 0xfffffffffffffffe ) == 0x12 ) ) && ( param_1[1] != 0 )) {
      uVar3 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar3 <= (ulong)param_1[1]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         *param_2 = uVar2;
         uVar2 = 1;
         *param_1 = *param_1 + uVar3;
         param_1[1] = param_1[1] - uVar3;
         goto LAB_00101d3e;
      }

   }

   uVar2 = 0;
   LAB_00101d3e:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_data_blocked(long *param_1, undefined8 *param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_28);
   if (( ( iVar1 != 0 ) && ( local_28 == 0x14 ) ) && ( param_1[1] != 0 )) {
      uVar3 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar3 <= (ulong)param_1[1]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         *param_2 = uVar2;
         uVar2 = 1;
         *param_1 = *param_1 + uVar3;
         param_1[1] = param_1[1] - uVar3;
         goto LAB_00101dd7;
      }

   }

   uVar2 = 0;
   LAB_00101dd7:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_stream_data_blocked(long *param_1, undefined8 *param_2, undefined8 *param_3) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( iVar2 != 0 ) && ( local_38 == 0x15 ) ) && ( param_1[1] != 0 )) {
      uVar5 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar5 <= (ulong)param_1[1]) {
         uVar3 = ossl_quic_vlint_decode_unchecked();
         lVar1 = *param_1;
         *param_2 = uVar3;
         uVar4 = param_1[1] - uVar5;
         *param_1 = (long)( lVar1 + uVar5 );
         param_1[1] = uVar4;
         if (uVar4 != 0) {
            uVar5 = ( ulong )(uint)(1 << ( *(byte*)( lVar1 + uVar5 ) >> 6 ));
            if (uVar5 <= uVar4) {
               uVar3 = ossl_quic_vlint_decode_unchecked();
               *param_3 = uVar3;
               uVar3 = 1;
               *param_1 = *param_1 + uVar5;
               param_1[1] = param_1[1] - uVar5;
               goto LAB_00101e6e;
            }

         }

      }

   }

   uVar3 = 0;
   LAB_00101e6e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_streams_blocked(long *param_1, undefined8 *param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_28);
   if (( ( iVar1 != 0 ) && ( ( local_28 & 0xfffffffffffffffe ) == 0x16 ) ) && ( param_1[1] != 0 )) {
      uVar3 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar3 <= (ulong)param_1[1]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         *param_2 = uVar2;
         uVar2 = 1;
         *param_1 = *param_1 + uVar3;
         param_1[1] = param_1[1] - uVar3;
         goto LAB_00101f3e;
      }

   }

   uVar2 = 0;
   LAB_00101f3e:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_new_conn_id(long *param_1, ulong *param_2) {
   byte bVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   ulong uVar5;
   undefined8 uVar6;
   ulong uVar7;
   byte *pbVar8;
   undefined8 *puVar9;
   uint uVar10;
   long lVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( ( iVar3 != 0 ) && ( local_38 == 0x18 ) ) && ( param_1[1] != 0 ) ) && ( uVar7 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 )) ),uVar7 <= (ulong)param_1[1]) {
      uVar5 = ossl_quic_vlint_decode_unchecked();
      lVar11 = *param_1;
      *param_2 = uVar5;
      uVar5 = param_1[1] - uVar7;
      *param_1 = (long)( lVar11 + uVar7 );
      param_1[1] = uVar5;
      if (( uVar5 != 0 ) && ( uVar7 = ( ulong )(uint)(1 << ( *(byte*)( lVar11 + uVar7 ) >> 6 )) ),uVar7 <= uVar5) {
         uVar5 = ossl_quic_vlint_decode_unchecked();
         lVar11 = *param_1;
         param_2[1] = uVar5;
         pbVar8 = (byte*)( lVar11 + uVar7 );
         lVar11 = param_1[1] - uVar7;
         *param_1 = (long)pbVar8;
         param_1[1] = lVar11;
         if (( uVar5 <= *param_2 ) && ( lVar11 != 0 )) {
            bVar1 = *pbVar8;
            uVar7 = (ulong)bVar1;
            *param_1 = (long)( pbVar8 + 1 );
            param_1[1] = lVar11 - 1U;
            if (( bVar1 - 1 < 0x14 ) && ( *(byte*)( param_2 + 2 ) = uVar7 <= lVar11 - 1U )) {
               uVar10 = (uint)bVar1;
               if (uVar10 < 8) {
                  if (( bVar1 & 4 ) == 0) {
                     if (( uVar10 != 0 ) && ( *(byte*)( (long)param_2 + 0x11 ) = pbVar8[1](bVar1 & 2) != 0 )) {
                        *(undefined2*)( (long)param_2 + uVar7 + 0xf ) = *(undefined2*)( pbVar8 + ( uVar7 - 1 ) );
                     }

                  }
 else {
                     *(undefined4*)( (long)param_2 + 0x11 ) = *(undefined4*)( pbVar8 + 1 );
                     *(undefined4*)( (long)param_2 + uVar7 + 0xd ) = *(undefined4*)( pbVar8 + ( uVar7 - 3 ) );
                  }

               }
 else {
                  uVar5 = (long)param_2 + 0x19U & 0xfffffffffffffff8;
                  *(undefined8*)( (long)param_2 + 0x11 ) = *(undefined8*)( pbVar8 + 1 );
                  *(undefined8*)( (long)param_2 + uVar7 + 9 ) = *(undefined8*)( pbVar8 + ( uVar7 - 7 ) );
                  lVar11 = (long)param_2 + ( 0x11 - uVar5 );
                  uVar10 = (int)lVar11 + uVar10 & 0xfffffff8;
                  if (7 < uVar10) {
                     uVar4 = 0;
                     do {
                        uVar12 = (ulong)uVar4;
                        uVar4 = uVar4 + 8;
                        *(undefined8*)( uVar5 + uVar12 ) = *(undefined8*)( pbVar8 + 1 + ( uVar12 - lVar11 ) );
                     }
 while ( uVar4 < uVar10 );
                  }

               }

               puVar9 = (undefined8*)( *param_1 + uVar7 );
               uVar5 = param_1[1] - uVar7;
               *param_1 = (long)puVar9;
               param_1[1] = uVar5;
               if (bVar1 != 0x14) {
                  puVar9 = (undefined8*)( (long)param_2 + uVar7 + 0x11 );
                  uVar10 = 0x14 - bVar1;
                  if (uVar10 < 8) {
                     if (( uVar10 & 4 ) == 0) {
                        if (( uVar10 != 0 ) && ( *(undefined1*)puVar9 = 0(uVar10 & 2) != 0 )) {
                           *(undefined2*)( (long)puVar9 + ( (ulong)uVar10 - 2 ) ) = 0;
                        }

                     }
 else {
                        *(undefined4*)puVar9 = 0;
                        *(undefined4*)( (long)puVar9 + ( (ulong)uVar10 - 4 ) ) = 0;
                     }

                  }
 else {
                     *puVar9 = 0;
                     *(undefined8*)( (long)puVar9 + ( (ulong)uVar10 - 8 ) ) = 0;
                     uVar10 = uVar10 + ( (int)puVar9 - (int)( ( ulong )(puVar9 + 1) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
                     if (7 < uVar10) {
                        uVar7 = 0;
                        do {
                           uVar4 = (int)uVar7 + 8;
                           *(undefined8*)( ( ( ulong )(puVar9 + 1) & 0xfffffffffffffff8 ) + uVar7 ) = 0;
                           uVar7 = (ulong)uVar4;
                        }
 while ( uVar4 < uVar10 );
                     }

                  }

                  puVar9 = (undefined8*)*param_1;
                  uVar5 = param_1[1];
               }

               if (0xf < uVar5) {
                  uVar2 = puVar9[1];
                  uVar6 = 1;
                  *(undefined8*)( (long)param_2 + 0x25 ) = *puVar9;
                  *(undefined8*)( (long)param_2 + 0x2d ) = uVar2;
                  *param_1 = *param_1 + 0x10;
                  param_1[1] = param_1[1] + -0x10;
                  goto LAB_00101fd9;
               }

            }

         }

      }

   }

   uVar6 = 0;
   LAB_00101fd9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
undefined8 ossl_quic_wire_decode_frame_retire_conn_id(long *param_1, undefined8 *param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_28);
   if (( ( iVar1 != 0 ) && ( local_28 == 0x19 ) ) && ( param_1[1] != 0 )) {
      uVar3 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar3 <= (ulong)param_1[1]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         *param_2 = uVar2;
         uVar2 = 1;
         *param_1 = *param_1 + uVar3;
         param_1[1] = param_1[1] - uVar3;
         goto LAB_00102267;
      }

   }

   uVar2 = 0;
   LAB_00102267:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_path_challenge(undefined8 *param_1, ulong *param_2) {
   byte bVar1;
   byte *pbVar2;
   int iVar3;
   undefined8 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ossl_quic_wire_skip_frame_header(param_1, &local_28);
   if (( ( iVar3 == 0 ) || ( local_28 != 0x1a ) ) || ( (ulong)param_1[1] < 8 )) {
      uVar4 = 0;
   }
 else {
      pbVar2 = (byte*)*param_1;
      bVar1 = *pbVar2;
      *param_2 = (ulong)bVar1 << 0x38;
      uVar5 = (ulong)pbVar2[1] << 0x30 | (ulong)bVar1 << 0x38;
      *param_2 = uVar5;
      for (int i = 0; i < 5; i++) {
         uVar5 = (ulong)pbVar2[( i + 2 )] << ( -8*i + 40 ) | uVar5;
         *param_2 = uVar5;
      }

      *param_2 = uVar5 | pbVar2[7];
      param_1[1] = param_1[1] + -8;
      *param_1 = pbVar2 + 8;
      uVar4 = 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_path_response(undefined8 *param_1, ulong *param_2) {
   byte bVar1;
   byte *pbVar2;
   int iVar3;
   undefined8 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ossl_quic_wire_skip_frame_header(param_1, &local_28);
   if (( ( iVar3 == 0 ) || ( local_28 != 0x1b ) ) || ( (ulong)param_1[1] < 8 )) {
      uVar4 = 0;
   }
 else {
      pbVar2 = (byte*)*param_1;
      bVar1 = *pbVar2;
      *param_2 = (ulong)bVar1 << 0x38;
      uVar5 = (ulong)pbVar2[1] << 0x30 | (ulong)bVar1 << 0x38;
      *param_2 = uVar5;
      for (int i = 0; i < 5; i++) {
         uVar5 = (ulong)pbVar2[( i + 2 )] << ( -8*i + 40 ) | uVar5;
         *param_2 = uVar5;
      }

      *param_2 = uVar5 | pbVar2[7];
      param_1[1] = param_1[1] + -8;
      *param_1 = pbVar2 + 8;
      uVar4 = 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_frame_conn_close(long *param_1, byte *param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   byte *pbVar6;
   long in_FS_OFFSET;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_38);
   if (( ( iVar1 != 0 ) && ( ( local_38 & 0xfffffffffffffffe ) == 0x1c ) ) && ( param_1[1] != 0 )) {
      uVar4 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
      if (uVar4 <= (ulong)param_1[1]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         lVar3 = *param_1;
         *(undefined8*)( param_2 + 8 ) = uVar2;
         pbVar6 = (byte*)( lVar3 + uVar4 );
         uVar4 = param_1[1] - uVar4;
         *param_1 = (long)pbVar6;
         param_1[1] = uVar4;
         *param_2 = *param_2 & 0xfe | (byte)local_38 & 1;
         if (( local_38 & 1 ) == 0) {
            if (uVar4 != 0) {
               uVar5 = ( ulong )(uint)(1 << ( *pbVar6 >> 6 ));
               if (uVar5 <= uVar4) {
                  uVar2 = ossl_quic_vlint_decode_unchecked();
                  lVar3 = *param_1;
                  *(undefined8*)( param_2 + 0x10 ) = uVar2;
                  pbVar6 = (byte*)( lVar3 + uVar5 );
                  uVar4 = param_1[1] - uVar5;
                  *param_1 = (long)pbVar6;
                  param_1[1] = uVar4;
                  goto LAB_0010258d;
               }

            }

         }
 else {
            for (int i = 0; i < 8; i++) {
               param_2[( i + 16 )] = 0;
            }

            LAB_0010258d:if (uVar4 != 0) {
               uVar5 = ( ulong )(uint)(1 << ( *pbVar6 >> 6 ));
               if (uVar5 <= uVar4) {
                  uVar4 = ossl_quic_vlint_decode_unchecked();
                  lVar3 = *param_1 + uVar5;
                  uVar5 = param_1[1] - uVar5;
                  *param_1 = lVar3;
                  param_1[1] = uVar5;
                  if (uVar4 <= uVar5) {
                     *(long*)( param_2 + 0x18 ) = lVar3;
                     *param_1 = lVar3 + uVar4;
                     param_1[1] = uVar5 - uVar4;
                     *(ulong*)( param_2 + 0x20 ) = uVar4;
                     uVar2 = 1;
                     goto LAB_00102505;
                  }

               }

            }

         }

      }

   }

   uVar2 = 0;
   LAB_00102505:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ossl_quic_wire_decode_padding(ulong *param_1) {
   char *pcVar1;
   char *pcVar2;
   ulong uVar3;
   ulong uVar4;
   pcVar1 = (char*)*param_1;
   uVar3 = param_1[1];
   pcVar2 = pcVar1;
   if (pcVar1 < pcVar1 + uVar3) {
      do {
         if (*pcVar2 != '\0') break;
         pcVar2 = pcVar2 + 1;
      }
 while ( pcVar2 != pcVar1 + uVar3 );
      uVar4 = (long)pcVar2 - (long)pcVar1;
      if (uVar3 < uVar4) {
         return 0;
      }

      uVar3 = uVar3 - uVar4;
   }
 else {
      uVar4 = 0;
   }

   *param_1 = (ulong)pcVar2;
   param_1[1] = uVar3;
   return uVar4;
}
ulong ossl_quic_wire_decode_frame_ping(undefined8 param_1) {
   ulong uVar1;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_18);
   if ((int)uVar1 != 0) {
      uVar1 = ( ulong )(local_18 == 1);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ossl_quic_wire_decode_frame_handshake_done(undefined8 param_1) {
   ulong uVar1;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = ossl_quic_wire_skip_frame_header(param_1, &local_18);
   if ((int)uVar1 != 0) {
      uVar1 = ( ulong )(local_18 == 0x1e);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_peek_transport_param(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   if (param_1[1] != 0) {
      if (( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 )) <= (ulong)param_1[1]) {
         uVar1 = ossl_quic_vlint_decode_unchecked();
         *param_2 = uVar1;
         return 1;
      }

   }

   return 0;
}
long ossl_quic_wire_decode_transport_param_bytes(long *param_1, undefined8 *param_2, ulong *param_3) {
   undefined8 uVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   if (param_1[1] == 0) {
      return 0;
   }

   uVar5 = ( ulong )(uint)(1 << ( *(byte*)*param_1 >> 6 ));
   if (uVar5 <= (ulong)param_1[1]) {
      uVar1 = ossl_quic_vlint_decode_unchecked();
      lVar3 = *param_1;
      uVar2 = param_1[1] - uVar5;
      *param_1 = (long)( lVar3 + uVar5 );
      param_1[1] = uVar2;
      if (( uVar2 != 0 ) && ( uVar5 = ( ulong )(uint)(1 << ( *(byte*)( lVar3 + uVar5 ) >> 6 )) ),uVar5 <= uVar2) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         uVar4 = param_1[1] - uVar5;
         lVar3 = *param_1 + uVar5;
         param_1[1] = uVar4;
         *param_1 = lVar3;
         if (uVar2 <= uVar4) {
            *param_1 = lVar3 + uVar2;
            param_1[1] = uVar4 - uVar2;
            *param_3 = uVar2;
            if (param_2 == (undefined8*)0x0) {
               return lVar3;
            }

            *param_2 = uVar1;
            return lVar3;
         }

      }

   }

   return 0;
}
bool ossl_quic_wire_decode_transport_param_int(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
   byte *pbVar1;
   undefined8 uVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   bool bVar4;
   ulong local_30[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar1 = (byte*)ossl_quic_wire_decode_transport_param_bytes(param_1, param_2, local_30);
   bVar4 = false;
   if (( pbVar1 != (byte*)0x0 ) && ( local_30[0] != 0 )) {
      uVar3 = ( ulong )(uint)(1 << ( *pbVar1 >> 6 ));
      if (uVar3 <= local_30[0]) {
         uVar2 = ossl_quic_vlint_decode_unchecked();
         *param_3 = uVar2;
         bVar4 = local_30[0] == uVar3;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_transport_param_cid(undefined8 param_1, undefined8 param_2, undefined1 *param_3) {
   void *__src;
   undefined8 uVar1;
   long in_FS_OFFSET;
   ulong local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   __src = (void*)ossl_quic_wire_decode_transport_param_bytes(param_1, param_2, &local_18);
   if (__src == (void*)0x0) {
      uVar1 = 0;
   }
 else {
      uVar1 = 0;
      if (local_18 < 0x15) {
         *param_3 = (char)local_18;
         memcpy(param_3 + 1, __src, local_18);
         uVar1 = 1;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_quic_wire_decode_transport_param_preferred_addr(undefined8 param_1, ushort *param_2) {
   undefined8 *puVar1;
   byte bVar2;
   ushort uVar3;
   ushort uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined4 *puVar7;
   undefined8 uVar8;
   uint uVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   uint uVar13;
   ulong uVar14;
   long in_FS_OFFSET;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   puVar7 = (undefined4*)ossl_quic_wire_decode_transport_param_bytes(param_1, &local_40, &local_38);
   if (( ( puVar7 != (undefined4*)0x0 ) && ( local_38 - 0x29U < 0x15 ) ) && ( local_40 == 0xd )) {
      *(undefined4*)( param_2 + 2 ) = *puVar7;
      uVar5 = *(undefined8*)( (long)puVar7 + 0xe );
      uVar3 = *(ushort*)( puVar7 + 1 );
      *(undefined8*)( param_2 + 4 ) = *(undefined8*)( (long)puVar7 + 6 );
      *(undefined8*)( param_2 + 8 ) = uVar5;
      bVar2 = *(byte*)( puVar7 + 6 );
      uVar4 = *(ushort*)( (long)puVar7 + 0x16 );
      if (bVar2 < 0x15) {
         uVar12 = (ulong)bVar2;
         if (uVar12 <= local_38 - 0x19U) {
            if (bVar2 < 8) {
               if (( bVar2 & 4 ) == 0) {
                  if (( bVar2 != 0 ) && ( *(undefined1*)( (long)param_2 + 0x29 ) = *(undefined1*)( (long)puVar7 + 0x19 )(bVar2 & 2) != 0 )) {
                     *(undefined2*)( (long)param_2 + uVar12 + 0x27 ) = *(undefined2*)( (long)puVar7 + uVar12 + 0x17 );
                  }

               }
 else {
                  *(undefined4*)( (long)param_2 + 0x29 ) = *(undefined4*)( (long)puVar7 + 0x19 );
                  *(undefined4*)( (long)param_2 + uVar12 + 0x25 ) = *(undefined4*)( (long)puVar7 + uVar12 + 0x15 );
               }

            }
 else {
               uVar11 = (long)param_2 + 0x31U & 0xfffffffffffffff8;
               *(undefined8*)( (long)param_2 + 0x29 ) = *(undefined8*)( (long)puVar7 + 0x19 );
               *(undefined8*)( (long)param_2 + uVar12 + 0x21 ) = *(undefined8*)( (long)puVar7 + uVar12 + 0x11 );
               lVar10 = (long)param_2 + ( 0x29 - uVar11 );
               uVar9 = (int)lVar10 + (uint)bVar2 & 0xfffffff8;
               if (7 < uVar9) {
                  uVar13 = 0;
                  do {
                     uVar14 = (ulong)uVar13;
                     uVar13 = uVar13 + 8;
                     *(undefined8*)( uVar11 + uVar14 ) = *(undefined8*)( (long)puVar7 + uVar14 + ( 0x19 - lVar10 ) );
                  }
 while ( uVar13 < uVar9 );
               }

            }

            if (0xf < ( local_38 - 0x19U ) - uVar12) {
               puVar1 = (undefined8*)( (long)puVar7 + uVar12 + 0x19 );
               uVar5 = *puVar1;
               uVar6 = puVar1[1];
               *(byte*)( param_2 + 0x14 ) = bVar2;
               param_2[1] = uVar4 << 8 | uVar4 >> 8;
               uVar8 = 1;
               *param_2 = uVar3 << 8 | uVar3 >> 8;
               *(undefined8*)( param_2 + 0xc ) = uVar5;
               *(undefined8*)( param_2 + 0x10 ) = uVar6;
               goto LAB_001029cf;
            }

         }

      }

   }

   uVar8 = 0;
   LAB_001029cf:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
char *ossl_quic_frame_type_to_string(undefined8 param_1) {
   switch (param_1) {
      case 0:
    return "PADDING";
      case 1:
    return "PING";
      case 2:
    return "ACK_WITHOUT_ECN";
      case 3:
    return "ACK_WITH_ECN";
      case 4:
    return "RESET_STREAM";
      case 5:
    return "STOP_SENDING";
      case 6:
    return "CRYPTO";
      case 7:
    return "NEW_TOKEN";
      case 8:
    return "STREAM";
      case 9:
    return "STREAM_FIN";
      case 10:
    return "STREAM_LEN";
      case 0xb:
    return "STREAM_LEN_FIN";
      case 0xc:
    return "STREAM_OFF";
      case 0xd:
    return "STREAM_OFF_FIN";
      case 0xe:
    return "STREAM_OFF_LEN";
      case 0xf:
    return "STREAM_OFF_LEN_FIN";
      case 0x10:
    return "MAX_DATA";
      case 0x11:
    return "MAX_STREAM_DATA";
      case 0x12:
    return "MAX_STREAMS_BIDI";
      case 0x13:
    return "MAX_STREAMS_UNI";
      case 0x14:
    return "DATA_BLOCKED";
      case 0x15:
    return "STREAM_DATA_BLOCKED";
      case 0x16:
    return "STREAMS_BLOCKED_BIDI";
      case 0x17:
    return "STREAMS_BLOCKED_UNI";
      case 0x18:
    return "NEW_CONN_ID";
      case 0x19:
    return "RETIRE_CONN_ID";
      case 0x1a:
    return "PATH_CHALLENGE";
      case 0x1b:
    return "PATH_RESPONSE";
      case 0x1c:
    return "CONN_CLOSE_TRANSPORT";
      case 0x1d:
    return "CONN_CLOSE_APP";
      case 0x1e:
    return "HANDSHAKE_DONE";
      default:
    return (char *)0x0;
   }

}
char *ossl_quic_err_to_string(undefined8 param_1) {
   switch (param_1) {
      case 0:
    return "NO_ERROR";
      case 1:
    return "INTERNAL_ERROR";
      case 2:
    return "CONNECTION_REFUSED";
      case 3:
    return "FLOW_CONTROL_ERROR";
      case 4:
    return "STREAM_LIMIT_ERROR";
      case 5:
    return "STREAM_STATE_ERROR";
      case 6:
    return "FINAL_SIZE_ERROR";
      case 7:
    return "FRAME_ENCODING_ERROR";
      case 8:
    return "TRANSPORT_PARAMETER_ERROR";
      case 9:
    return "CONNECTION_ID_LIMIT_ERROR";
      case 10:
    return "PROTOCOL_VIOLATION";
      case 0xb:
    return "INVALID_TOKEN";
      case 0xc:
    return "APPLICATION_ERROR";
      case 0xd:
    return "CRYPTO_BUFFER_EXCEEDED";
      case 0xe:
    return "KEY_UPDATE_ERROR";
      case 0xf:
    return "AEAD_LIMIT_REACHED";
      case 0x10:
    return "NO_VIABLE_PATH";
      default:
    return (char *)0x0;
   }

}

